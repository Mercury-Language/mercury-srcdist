/*
** Automatically generated from `xml_documentation.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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

#line 864 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_54_95_95_91_49_93_95_48_3_f_0(
#line 864 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7);

#line 864 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0(
#line 864 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7);

#line 864 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_52_95_95_91_49_44_32_50_93_95_48_3_f_0(
#line 864 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7);

#line 864 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0(
#line 864 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7);

#line 864 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0(
#line 864 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7);

#line 572 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0_1(
#line 572 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 572 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 563 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 563 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
#line 563 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
#line 563 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16);

#line 472 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_50_93_95_48_5_p_0(
#line 472 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 472 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_8,
#line 472 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
#line 472 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15);

#line 768 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__768__1_2_f_0(
#line 768 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_6,
#line 768 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_19);

#line 766 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__766__1_1_f_0(
#line 766 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_16);

#line 313 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_4(
#line 313 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 313 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 313 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 313 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 313 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4);

#line 309 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_3(
#line 309 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 309 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 309 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 309 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 309 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4);

#line 304 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_2(
#line 304 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 304 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 304 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 304 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 304 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4);

#line 299 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_1(
#line 299 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 299 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 299 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 299 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_3);

#line 290 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0(
#line 290 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

#line 286 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0(
#line 286 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 286 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 286 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 286 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0(
#line 286 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 286 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 70 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0(
#line 70 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 70 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 70 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 70 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0(
#line 70 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 70 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 64 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0(
#line 64 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 64 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 64 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 64 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0(
#line 64 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 64 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 870 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__nyi_1_f_0(
#line 870 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_3);

#line 858 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_string_2_f_0(
#line 858 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 858 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__S_5);

#line 850 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_float_2_f_0(
#line 850 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 850 "xml_documentation.m"
  MR_Float check_hlds__xml_documentation__F_5);

#line 846 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_int_2_f_0(
#line 846 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 846 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__I_5);

#line 834 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0(
#line 834 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Prefix_5,
#line 834 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Name_6,
#line 834 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Arity_7);

#line 807 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__visibility_to_xml_1_f_0(
#line 807 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Status_3);

#line 800 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0_1(
#line 800 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 800 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 793 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(
#line 793 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 793 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Constraint_5);

#line 784 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_context_to_xml_1_f_0(
#line 784 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

#line 774 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__name_to_xml_1_f_0(
#line 774 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

#line 769 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_3(
#line 769 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 769 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 768 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_2(
#line 768 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 768 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 766 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_1(
#line 766 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 766 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 763 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0(
#line 763 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 763 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_6,
#line 763 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Methods_7);

#line 760 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0_1(
#line 760 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 760 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 749 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0(
#line 749 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_5,
#line 749 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Vars_6,
#line 749 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 732 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_3(
#line 732 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 732 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 730 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_2(
#line 730 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 730 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 728 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_1(
#line 728 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 728 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 711 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0(
#line 711 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_7,
#line 711 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_8,
#line 711 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3,
#line 711 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ClassDefn_11,
#line 711 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27,
#line 711 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_28);

#line 692 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__arity_to_xml_1_f_0(
#line 692 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Arity_3);

#line 663 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__cons_id_to_xml_1_f_0(
#line 663 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1);

#line 660 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0_1(
#line 660 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 660 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 656 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0(
#line 656 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 656 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 641 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0_1(
#line 641 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 641 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 636 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0(
#line 636 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_1,
#line 636 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 606 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_1(
#line 606 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 606 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 594 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(
#line 594 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 594 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Inst_5);

#line 590 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_2(
#line 590 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 590 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 583 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_1(
#line 583 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 583 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 578 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0(
#line 578 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 578 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Mode_5);

#line 563 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__pred_mode_documentation_5_p_0(
#line 563 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation___C_6,
#line 563 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation___ProcId_7,
#line 563 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
#line 563 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
#line 563 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16);

#line 555 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0_1(
#line 555 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 555 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 551 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0(
#line 551 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 551 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 525 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_3(
#line 525 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 525 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 525 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 525 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 525 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4);

#line 519 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_2(
#line 519 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 519 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 518 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_1(
#line 518 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 518 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 491 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0(
#line 491 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_4,
#line 491 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_5);

#line 472 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__pred_documentation_5_p_0(
#line 472 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 472 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation___PredId_7,
#line 472 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_8,
#line 472 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
#line 472 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15);

#line 464 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_3(
#line 464 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 464 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 451 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_2(
#line 451 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 451 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 443 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_1(
#line 443 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 443 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 435 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0(
#line 435 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_1,
#line 435 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2);

#line 418 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_arg_to_xml_3_f_0(
#line 418 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 418 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_6,
#line 418 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__CtorArg_7);

#line 412 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_3(
#line 412 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 412 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 409 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_2(
#line 409 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 409 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 408 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_1(
#line 408 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 408 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 401 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0(
#line 401 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 401 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_6,
#line 401 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Ctor_7);

#line 393 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0_1(
#line 393 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 393 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 390 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0(
#line 390 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_1,
#line 390 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_2,
#line 390 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3);

#line 384 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__type_param_to_xml_2_f_0(
#line 384 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 384 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVar_5);

#line 359 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0_1(
#line 359 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 359 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 345 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0(
#line 345 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 345 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 345 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TypeDefn_9,
#line 345 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25,
#line 345 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26);

#line 327 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__import_documentation_4_p_0(
#line 327 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InterfaceImportedModules_5,
#line 327 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ImportedModule_6,
#line 327 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_11,
#line 327 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_12);

#line 264 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_backwards_2_f_0(
#line 264 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_4,
#line 264 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Line_5);

#line 241 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_forwards_2_f_0(
#line 241 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_4,
#line 241 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Line_5);

#line 185 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__maybe_add_comment_3_f_0(
#line 185 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_5,
#line 185 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Context_6,
#line 185 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Xml_7);

#line 172 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__is_not_comment_char_1_p_0(
#line 172 "xml_documentation.m"
  MR_Char check_hlds__xml_documentation__C_2);

#line 151 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_2(
#line 151 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 151 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 150 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_1(
#line 150 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 150 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1);

#line 122 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0(
#line 122 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__S_6,
#line 122 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 122 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__3_3);


static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_1[16][2];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_2[28][3];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_3[2][4];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_4[2][5];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_5[8][6];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_6[10][1];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_7[4][7];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_9[3][8];

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_10[1][9];


#line 437 "xml_documentation.m"
/* sealed */ struct check_hlds__xml_documentation__vector_common_type_8_0_s {
#line 437 "xml_documentation.m"
  const MR_Word check_hlds__xml_documentation__vector_common_type_8_0__vct_8_f_0;
#line 437 "xml_documentation.m"
};

static /* final */ const struct check_hlds__xml_documentation__vector_common_type_8_0_s check_hlds__xml_documentation_vector_common_8[12];



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
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_6[0]))),
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_6[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_6[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_6[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_6[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_6[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_6[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_6[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_6[9]))),
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
    ((MR_Box) ((MR_String) "hlds_abstract_type")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "hlds_foreign_type")),
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
    ((MR_Box) ((MR_String) "any_inst")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "ground_inst")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "merge_inst")),
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

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_6[10][1] = {
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

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_7[4][7] = {
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
    ((MR_Box) (&check_hlds__xml_documentation__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0)),
    ((MR_Box) (&check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0))
  },
};

static /* final */ const MR_Box check_hlds__xml_documentation_scalar_common_9[3][8] = {
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
  /* row 0 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[9] },
  /* row 1 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[8] },
  /* row 2 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[10] },
  /* row 3 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[7] },
  /* row 4 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[22] },
  /* row 5 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[27] },
  /* row 6 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[25] },
  /* row 7 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[26] },
  /* row 8 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[20] },
  /* row 9 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[21] },
  /* row 10 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[23] },
  /* row 11 */   {     (MR_Word) &check_hlds__xml_documentation_scalar_common_2[24] },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1585 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1593 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1601 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term_to_xml__type_ctor_info_xml_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0
  }
};

#line 1609 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1617 "check_hlds.xml_documentation.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__xml_documentation__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1625 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__xml_documentation__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1633 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__xml_documentation__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0
  }
};

#line 1642 "check_hlds.xml_documentation.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__xml_documentation__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1650 "check_hlds.xml_documentation.c"
static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_comments_0[1] = {
  (MR_Integer) 0
};

#line 1655 "check_hlds.xml_documentation.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__xml_documentation__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__xml_documentation__type_ctor_info_line_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0
  }
};

#line 1664 "check_hlds.xml_documentation.c"
static const MR_NotagFunctorDesc check_hlds__xml_documentation__check_hlds__xml_documentation__notag_functor_desc_comments_0 = {
  (MR_String) "comments",
  (MR_PseudoTypeInfo) &check_hlds__xml_documentation__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__xml_documentation__type_ctor_info_line_type_0,
  (MR_String) "line_types"
};

#line 1671 "check_hlds.xml_documentation.c"
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

#line 1688 "check_hlds.xml_documentation.c"
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

#line 1703 "check_hlds.xml_documentation.c"
static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1708 "check_hlds.xml_documentation.c"
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

#line 1723 "check_hlds.xml_documentation.c"
static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_line_type_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1728 "check_hlds.xml_documentation.c"
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

#line 1743 "check_hlds.xml_documentation.c"
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

#line 1758 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_0[2] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_0,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_3
};

#line 1764 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_1[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_1
};

#line 1769 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_line_type_0_2[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_2
};

#line 1774 "check_hlds.xml_documentation.c"
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

#line 1793 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_line_type_0[4] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_0,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_3,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_2,
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_line_type_0_1
};

#line 1801 "check_hlds.xml_documentation.c"
static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_line_type_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1809 "check_hlds.xml_documentation.c"
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

#line 1826 "check_hlds.xml_documentation.c"
static const MR_PseudoTypeInfo check_hlds__xml_documentation__check_hlds__xml_documentation__field_types_module_info_xml_doc_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_comments_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0
};

#line 1833 "check_hlds.xml_documentation.c"
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

#line 1848 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_module_info_xml_doc_0_0[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0
};

#line 1853 "check_hlds.xml_documentation.c"
static const MR_DuPtagLayout check_hlds__xml_documentation__check_hlds__xml_documentation__du_ptag_ordered_module_info_xml_doc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__xml_documentation__check_hlds__xml_documentation__du_stag_ordered_module_info_xml_doc_0_0
  }
};

#line 1862 "check_hlds.xml_documentation.c"
static const MR_DuFunctorDescPtr check_hlds__xml_documentation__check_hlds__xml_documentation__du_name_ordered_module_info_xml_doc_0[1] = {
  &check_hlds__xml_documentation__check_hlds__xml_documentation__du_functor_desc_module_info_xml_doc_0_0
};

#line 1867 "check_hlds.xml_documentation.c"
static const MR_Integer check_hlds__xml_documentation__check_hlds__xml_documentation__functor_number_map_module_info_xml_doc_0[1] = {
  (MR_Integer) 0
};

#line 1872 "check_hlds.xml_documentation.c"
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

#line 1889 "check_hlds.xml_documentation.c"
const MR_BaseTypeclassInfo base_typeclass_info_term_to_xml__xmlable__arity1__check_hlds__xml_documentation__module_info_xml_doc__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_10001))
};

#line 1899 "check_hlds.xml_documentation.c"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0_10001(
#line 1902 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 1904 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2)
#line 1906 "check_hlds.xml_documentation.c"
{
#line 1908 "check_hlds.xml_documentation.c"
  {
#line 1910 "check_hlds.xml_documentation.c"
    MR_bool check_hlds__xml_documentation__succeeded;

#line 1913 "check_hlds.xml_documentation.c"
    {
#line 1915 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____comments_0_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2));
    }
#line 1918 "check_hlds.xml_documentation.c"
    return check_hlds__xml_documentation__succeeded;
#line 1920 "check_hlds.xml_documentation.c"
  }
#line 1922 "check_hlds.xml_documentation.c"
}

#line 1925 "check_hlds.xml_documentation.c"
static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0_10001(
#line 1928 "check_hlds.xml_documentation.c"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
#line 1930 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 1932 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3)
#line 1934 "check_hlds.xml_documentation.c"
{
#line 1936 "check_hlds.xml_documentation.c"
  {
#line 1938 "check_hlds.xml_documentation.c"
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__1_1;

#line 1941 "check_hlds.xml_documentation.c"
    {
#line 1943 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation____Compare____comments_0_0(&check_hlds__xml_documentation__conv0_HeadVar__1_1, ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3));
    }
#line 1946 "check_hlds.xml_documentation.c"
    *check_hlds__xml_documentation__wrapper_arg_1 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__1_1));
#line 1948 "check_hlds.xml_documentation.c"
  }
#line 1950 "check_hlds.xml_documentation.c"
}

#line 1953 "check_hlds.xml_documentation.c"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0_10001(
#line 1956 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 1958 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2)
#line 1960 "check_hlds.xml_documentation.c"
{
#line 1962 "check_hlds.xml_documentation.c"
  {
#line 1964 "check_hlds.xml_documentation.c"
    MR_bool check_hlds__xml_documentation__succeeded;

#line 1967 "check_hlds.xml_documentation.c"
    {
#line 1969 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____line_type_0_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2));
    }
#line 1972 "check_hlds.xml_documentation.c"
    return check_hlds__xml_documentation__succeeded;
#line 1974 "check_hlds.xml_documentation.c"
  }
#line 1976 "check_hlds.xml_documentation.c"
}

#line 1979 "check_hlds.xml_documentation.c"
static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0_10001(
#line 1982 "check_hlds.xml_documentation.c"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
#line 1984 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 1986 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3)
#line 1988 "check_hlds.xml_documentation.c"
{
#line 1990 "check_hlds.xml_documentation.c"
  {
#line 1992 "check_hlds.xml_documentation.c"
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__1_1;

#line 1995 "check_hlds.xml_documentation.c"
    {
#line 1997 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation____Compare____line_type_0_0(&check_hlds__xml_documentation__conv0_HeadVar__1_1, ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3));
    }
#line 2000 "check_hlds.xml_documentation.c"
    *check_hlds__xml_documentation__wrapper_arg_1 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__1_1));
#line 2002 "check_hlds.xml_documentation.c"
  }
#line 2004 "check_hlds.xml_documentation.c"
}

#line 2007 "check_hlds.xml_documentation.c"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0_10001(
#line 2010 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 2012 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2)
#line 2014 "check_hlds.xml_documentation.c"
{
#line 2016 "check_hlds.xml_documentation.c"
  {
#line 2018 "check_hlds.xml_documentation.c"
    MR_bool check_hlds__xml_documentation__succeeded;

#line 2021 "check_hlds.xml_documentation.c"
    {
#line 2023 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2));
    }
#line 2026 "check_hlds.xml_documentation.c"
    return check_hlds__xml_documentation__succeeded;
#line 2028 "check_hlds.xml_documentation.c"
  }
#line 2030 "check_hlds.xml_documentation.c"
}

#line 2033 "check_hlds.xml_documentation.c"
static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0_10001(
#line 2036 "check_hlds.xml_documentation.c"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_1,
#line 2038 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 2040 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3)
#line 2042 "check_hlds.xml_documentation.c"
{
#line 2044 "check_hlds.xml_documentation.c"
  {
#line 2046 "check_hlds.xml_documentation.c"
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__1_1;

#line 2049 "check_hlds.xml_documentation.c"
    {
#line 2051 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0(&check_hlds__xml_documentation__conv0_HeadVar__1_1, ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3));
    }
#line 2054 "check_hlds.xml_documentation.c"
    *check_hlds__xml_documentation__wrapper_arg_1 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__1_1));
#line 2056 "check_hlds.xml_documentation.c"
  }
#line 2058 "check_hlds.xml_documentation.c"
}

#line 2061 "check_hlds.xml_documentation.c"
static MR_Box MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_10001(
#line 2064 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 2066 "check_hlds.xml_documentation.c"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 2068 "check_hlds.xml_documentation.c"
{
#line 2070 "check_hlds.xml_documentation.c"
  {
#line 2072 "check_hlds.xml_documentation.c"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 2074 "check_hlds.xml_documentation.c"
    MR_Box check_hlds__xml_documentation__closure;
#line 2076 "check_hlds.xml_documentation.c"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 2079 "check_hlds.xml_documentation.c"
    check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 2081 "check_hlds.xml_documentation.c"
    {
#line 2083 "check_hlds.xml_documentation.c"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 2086 "check_hlds.xml_documentation.c"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 2088 "check_hlds.xml_documentation.c"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 2090 "check_hlds.xml_documentation.c"
  }
#line 2092 "check_hlds.xml_documentation.c"
}

#line 864 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_54_95_95_91_49_93_95_48_3_f_0(
#line 864 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7)
#line 864 "xml_documentation.m"
{
#line 866 "xml_documentation.m"
  {
#line 866 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 866 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 866 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;

#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 866 "xml_documentation.m"
    }
#line 866 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 866 "xml_documentation.m"
  }
#line 864 "xml_documentation.m"
}

#line 864 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0(
#line 864 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7)
#line 864 "xml_documentation.m"
{
#line 866 "xml_documentation.m"
  {
#line 866 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 866 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 866 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;

#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 866 "xml_documentation.m"
    }
#line 866 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 866 "xml_documentation.m"
  }
#line 864 "xml_documentation.m"
}

#line 864 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_52_95_95_91_49_44_32_50_93_95_48_3_f_0(
#line 864 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7)
#line 864 "xml_documentation.m"
{
#line 866 "xml_documentation.m"
  {
#line 866 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 866 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 866 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;

#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 866 "xml_documentation.m"
    }
#line 866 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 866 "xml_documentation.m"
  }
#line 864 "xml_documentation.m"
}

#line 864 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0(
#line 864 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7)
#line 864 "xml_documentation.m"
{
#line 866 "xml_documentation.m"
  {
#line 866 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 866 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 866 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;

#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 866 "xml_documentation.m"
    }
#line 866 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 866 "xml_documentation.m"
  }
#line 864 "xml_documentation.m"
}

#line 864 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0(
#line 864 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_5,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__F_6,
#line 864 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__L_7)
#line 864 "xml_documentation.m"
{
#line 866 "xml_documentation.m"
  {
#line 866 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 866 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 866 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;

#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__F_6, check_hlds__xml_documentation__L_7);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_5));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 866 "xml_documentation.m"
    }
#line 866 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 866 "xml_documentation.m"
  }
#line 864 "xml_documentation.m"
}

#line 572 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0_1(
#line 572 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 572 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 572 "xml_documentation.m"
{
#line 572 "xml_documentation.m"
  {
#line 572 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 572 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 572 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 572 "xml_documentation.m"
    {
#line 572 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_mode_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 572 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 572 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 572 "xml_documentation.m"
  }
#line 572 "xml_documentation.m"
}

#line 563 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 563 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
#line 563 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
#line 563 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16)
#line 563 "xml_documentation.m"
{
#line 566 "xml_documentation.m"
  {
#line 566 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_9;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__IVarSet_10;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Modes_11;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Determinism_12;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlModes_13;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlDet_14;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_18_18;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_21_21;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_22_22;
#line 566 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_32_32;

#line 568 "xml_documentation.m"
    {
#line 568 "xml_documentation.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__xml_documentation__ProcInfo_8, &check_hlds__xml_documentation__IVarSet_10);
    }
#line 569 "xml_documentation.m"
    {
#line 569 "xml_documentation.m"
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(check_hlds__xml_documentation__ProcInfo_8, &check_hlds__xml_documentation__Modes_11);
    }
#line 570 "xml_documentation.m"
    {
#line 570 "xml_documentation.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(check_hlds__xml_documentation__ProcInfo_8, &check_hlds__xml_documentation__Determinism_12);
    }
#line 572 "xml_documentation.m"
    {
#line 572 "xml_documentation.m"
      check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 572 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[7]));
#line 572 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0_1));
#line 572 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 572 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 3) = ((MR_Box) (check_hlds__xml_documentation__IVarSet_10));
#line 572 "xml_documentation.m"
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__V_32_32 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_18_18, check_hlds__xml_documentation__Modes_11);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__XmlModes_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_13, 0) = ((MR_Box) ((MR_String) "modes"));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_13, 2) = ((MR_Box) (check_hlds__xml_documentation__V_32_32));
#line 866 "xml_documentation.m"
    }
#line 698 "xml_documentation.m"
    check_hlds__xml_documentation__XmlDet_14 = ((&check_hlds__xml_documentation_vector_common_8[4 + check_hlds__xml_documentation__Determinism_12]))->check_hlds__xml_documentation__vector_common_type_8_0__vct_8_f_0;
#line 574 "xml_documentation.m"
    {
#line 574 "xml_documentation.m"
      check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlDet_14));
#line 574 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 574 "xml_documentation.m"
    }
#line 574 "xml_documentation.m"
    {
#line 574 "xml_documentation.m"
      check_hlds__xml_documentation__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlModes_13));
#line 574 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 1) = ((MR_Box) (check_hlds__xml_documentation__V_22_22));
#line 574 "xml_documentation.m"
    }
#line 574 "xml_documentation.m"
    {
#line 574 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 574 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 0) = ((MR_Box) ((MR_String) "pred_mode"));
#line 574 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 574 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 574 "xml_documentation.m"
    }
#line 576 "xml_documentation.m"
    {
#line 576 "xml_documentation.m"
      MR_Word base;
#line 576 "xml_documentation.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "xml_documentation.m"
      *check_hlds__xml_documentation__STATE_VARIABLE_Xml_16 = base;
#line 576 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_9));
#line 576 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15));
#line 576 "xml_documentation.m"
    }
#line 566 "xml_documentation.m"
  }
#line 563 "xml_documentation.m"
}

#line 472 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_50_93_95_48_5_p_0(
#line 472 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 472 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_8,
#line 472 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
#line 472 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15)
#line 472 "xml_documentation.m"
{
#line 475 "xml_documentation.m"
  {
#line 475 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 475 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportStatus_10;
#line 475 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Origin_11;
#line 475 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Markers_12;
#line 481 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_16_16;
#line 482 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_13_13;
#line 483 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;

#line 476 "xml_documentation.m"
    {
#line 476 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__xml_documentation__PredInfo_8, &check_hlds__xml_documentation__ImportStatus_10);
    }
#line 477 "xml_documentation.m"
    {
#line 477 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__xml_documentation__PredInfo_8, &check_hlds__xml_documentation__Origin_11);
    }
#line 478 "xml_documentation.m"
    {
#line 478 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__xml_documentation__PredInfo_8, &check_hlds__xml_documentation__Markers_12);
    }
#line 481 "xml_documentation.m"
    {
#line 481 "xml_documentation.m"
      check_hlds__xml_documentation__V_16_16 = parse_tree__status__status_defined_in_this_module_1_f_0(check_hlds__xml_documentation__ImportStatus_10);
    }
#line 481 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_16_16 == (MR_Integer) 1);
#line 481 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 481 "xml_documentation.m"
      {
#line 482 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = ((((MR_tag((MR_Word) check_hlds__xml_documentation__Origin_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Origin_11, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 482 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 482 "xml_documentation.m"
          {
#line 482 "xml_documentation.m"
            check_hlds__xml_documentation__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Origin_11, (MR_Integer) 1)));
#line 483 "xml_documentation.m"
            check_hlds__xml_documentation__V_17_17 = (MR_Integer) 9;
#line 483 "xml_documentation.m"
            {
#line 483 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__xml_documentation__Markers_12, check_hlds__xml_documentation__V_17_17);
            }
#line 483 "xml_documentation.m"
            check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 482 "xml_documentation.m"
          }
#line 481 "xml_documentation.m"
      }
#line 487 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 485 "xml_documentation.m"
      {
#line 485 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Xml_9;

#line 485 "xml_documentation.m"
        {
#line 485 "xml_documentation.m"
          check_hlds__xml_documentation__Xml_9 = check_hlds__xml_documentation__predicate_documentation_2_f_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__PredInfo_8);
        }
#line 486 "xml_documentation.m"
        {
#line 486 "xml_documentation.m"
          MR_Word base;
#line 486 "xml_documentation.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "xml_documentation.m"
          *check_hlds__xml_documentation__STATE_VARIABLE_Xml_15 = base;
#line 486 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_9));
#line 486 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14));
#line 486 "xml_documentation.m"
        }
#line 485 "xml_documentation.m"
      }
#line 487 "xml_documentation.m"
    else
#line 487 "xml_documentation.m"
      *check_hlds__xml_documentation__STATE_VARIABLE_Xml_15 = check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14;
#line 475 "xml_documentation.m"
  }
#line 472 "xml_documentation.m"
}

#line 768 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__768__1_2_f_0(
#line 768 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_6,
#line 768 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_19)
#line 768 "xml_documentation.m"
{
#line 768 "xml_documentation.m"
  {
#line 768 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 768 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_20;
#line 768 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv0_HeadVar__3_20;

#line 768 "xml_documentation.m"
    {
#line 768 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_HeadVar__3_20 = mercury__map__lookup_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__xml_documentation__PredTable_6, ((MR_Box) (check_hlds__xml_documentation__HeadVar__2_19)));
    }
#line 768 "xml_documentation.m"
    check_hlds__xml_documentation__HeadVar__3_20 = ((MR_Word) check_hlds__xml_documentation__conv0_HeadVar__3_20);
#line 768 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_20;
#line 768 "xml_documentation.m"
  }
#line 768 "xml_documentation.m"
}

#line 766 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__766__1_1_f_0(
#line 766 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_16)
#line 766 "xml_documentation.m"
{
#line 766 "xml_documentation.m"
  {
#line 766 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 766 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_16, (MR_Integer) 0)));
#line 766 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_16, (MR_Integer) 1)));

#line 766 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_17;
#line 766 "xml_documentation.m"
  }
#line 766 "xml_documentation.m"
}

#line 313 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_4(
#line 313 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 313 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 313 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 313 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 313 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4)
#line 313 "xml_documentation.m"
{
#line 313 "xml_documentation.m"
  {
#line 313 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 313 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv6_STATE_VARIABLE_Xml_28;

#line 313 "xml_documentation.m"
    {
#line 313 "xml_documentation.m"
      check_hlds__xml_documentation__class_documentation_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3), &check_hlds__xml_documentation__conv6_STATE_VARIABLE_Xml_28);
    }
#line 313 "xml_documentation.m"
    *check_hlds__xml_documentation__wrapper_arg_4 = ((MR_Box) (check_hlds__xml_documentation__conv6_STATE_VARIABLE_Xml_28));
#line 313 "xml_documentation.m"
  }
#line 313 "xml_documentation.m"
}

#line 309 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_3(
#line 309 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 309 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 309 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 309 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 309 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4)
#line 309 "xml_documentation.m"
{
#line 309 "xml_documentation.m"
  {
#line 309 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 309 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv4_STATE_VARIABLE_Xml_15;

#line 309 "xml_documentation.m"
    {
#line 309 "xml_documentation.m"
      check_hlds__xml_documentation__pred_documentation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3), &check_hlds__xml_documentation__conv4_STATE_VARIABLE_Xml_15);
    }
#line 309 "xml_documentation.m"
    *check_hlds__xml_documentation__wrapper_arg_4 = ((MR_Box) (check_hlds__xml_documentation__conv4_STATE_VARIABLE_Xml_15));
#line 309 "xml_documentation.m"
  }
#line 309 "xml_documentation.m"
}

#line 304 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_2(
#line 304 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 304 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 304 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 304 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 304 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4)
#line 304 "xml_documentation.m"
{
#line 304 "xml_documentation.m"
  {
#line 304 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 304 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_STATE_VARIABLE_Xmls_26;

#line 304 "xml_documentation.m"
    {
#line 304 "xml_documentation.m"
      check_hlds__xml_documentation__type_documentation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3), &check_hlds__xml_documentation__conv2_STATE_VARIABLE_Xmls_26);
    }
#line 304 "xml_documentation.m"
    *check_hlds__xml_documentation__wrapper_arg_4 = ((MR_Box) (check_hlds__xml_documentation__conv2_STATE_VARIABLE_Xmls_26));
#line 304 "xml_documentation.m"
  }
#line 304 "xml_documentation.m"
}

#line 299 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_1(
#line 299 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 299 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 299 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 299 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_3)
#line 299 "xml_documentation.m"
{
#line 299 "xml_documentation.m"
  {
#line 299 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 299 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_STATE_VARIABLE_Xmls_12;

#line 299 "xml_documentation.m"
    {
#line 299 "xml_documentation.m"
      check_hlds__xml_documentation__import_documentation_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), &check_hlds__xml_documentation__conv0_STATE_VARIABLE_Xmls_12);
    }
#line 299 "xml_documentation.m"
    *check_hlds__xml_documentation__wrapper_arg_3 = ((MR_Box) (check_hlds__xml_documentation__conv0_STATE_VARIABLE_Xmls_12));
#line 299 "xml_documentation.m"
  }
#line 299 "xml_documentation.m"
}

#line 290 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0(
#line 290 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
#line 290 "xml_documentation.m"
{
#line 290 "xml_documentation.m"
  {
#line 290 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_6;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeCtorInfo_53_53;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeInfo_57_57;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Comments_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 290 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__ModuleComment_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 2)));
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__CommentXml_7;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__InterfaceImports_8;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportedModules0_9;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportedModules_10;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportsXml_11;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportXml_12;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeTable_13;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeXmls_14;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeXml_15;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredTable_16;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredXmls_17;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredXml_18;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ClassTable_19;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ClassXmls_20;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ClassXml_21;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Children_22;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_25_25;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_26_26;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_28_28;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_29_29;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_30_30;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_34_34;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_38_38;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_42_42;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_46_46;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_47_47;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_48_48;
#line 290 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_49_49;
#line 299 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv1_ImportsXml_11;
#line 304 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv3_TypeXmls_14;
#line 309 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv5_PredXmls_17;
#line 313 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv7_ClassXmls_20;

#line 291 "xml_documentation.m"
    {
#line 291 "xml_documentation.m"
      check_hlds__xml_documentation__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 291 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 0) = ((MR_Box) (check_hlds__xml_documentation__ModuleComment_4));
#line 291 "xml_documentation.m"
    }
#line 291 "xml_documentation.m"
    {
#line 291 "xml_documentation.m"
      check_hlds__xml_documentation__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_25_25, 0) = ((MR_Box) (check_hlds__xml_documentation__V_26_26));
#line 291 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "xml_documentation.m"
    }
#line 291 "xml_documentation.m"
    {
#line 291 "xml_documentation.m"
      check_hlds__xml_documentation__CommentXml_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 291 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CommentXml_7, 0) = ((MR_Box) ((MR_String) "comment"));
#line 291 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CommentXml_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CommentXml_7, 2) = ((MR_Box) (check_hlds__xml_documentation__V_25_25));
#line 291 "xml_documentation.m"
    }
#line 293 "xml_documentation.m"
    {
#line 293 "xml_documentation.m"
      hlds__hlds_module__module_info_get_interface_module_names_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__InterfaceImports_8);
    }
#line 295 "xml_documentation.m"
    {
#line 295 "xml_documentation.m"
      hlds__hlds_module__module_info_get_imported_module_names_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__ImportedModules0_9);
    }
#line 2913 "check_hlds.xml_documentation.c"
    check_hlds__xml_documentation__TypeCtorInfo_53_53 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 298 "xml_documentation.m"
    {
#line 298 "xml_documentation.m"
      check_hlds__xml_documentation__V_29_29 = mdbcomp__builtin_modules__all_builtin_modules_0_f_0();
    }
#line 298 "xml_documentation.m"
    {
#line 298 "xml_documentation.m"
      check_hlds__xml_documentation__V_28_28 = mercury__set__set_1_f_0(check_hlds__xml_documentation__TypeCtorInfo_53_53, check_hlds__xml_documentation__V_29_29);
    }
#line 298 "xml_documentation.m"
    {
#line 298 "xml_documentation.m"
      check_hlds__xml_documentation__ImportedModules_10 = mercury__set__difference_2_f_0(check_hlds__xml_documentation__TypeCtorInfo_53_53, check_hlds__xml_documentation__ImportedModules0_9, check_hlds__xml_documentation__V_28_28);
    }
#line 299 "xml_documentation.m"
    {
#line 299 "xml_documentation.m"
      check_hlds__xml_documentation__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 299 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_7[3]));
#line 299 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_1));
#line 299 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 299 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 3) = ((MR_Box) (check_hlds__xml_documentation__InterfaceImports_8));
#line 299 "xml_documentation.m"
    }
#line 2944 "check_hlds.xml_documentation.c"
    check_hlds__xml_documentation__TypeInfo_57_57 = (MR_Word) &check_hlds__xml_documentation_scalar_common_1[2];
#line 299 "xml_documentation.m"
    {
#line 299 "xml_documentation.m"
      mercury__set__fold_4_p_0(check_hlds__xml_documentation__TypeCtorInfo_53_53, check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__V_30_30, check_hlds__xml_documentation__ImportedModules_10, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv1_ImportsXml_11);
    }
#line 299 "xml_documentation.m"
    check_hlds__xml_documentation__ImportsXml_11 = ((MR_Word) check_hlds__xml_documentation__conv1_ImportsXml_11);
#line 301 "xml_documentation.m"
    {
#line 301 "xml_documentation.m"
      check_hlds__xml_documentation__ImportXml_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 301 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ImportXml_12, 0) = ((MR_Box) ((MR_String) "imports"));
#line 301 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ImportXml_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ImportXml_12, 2) = ((MR_Box) (check_hlds__xml_documentation__ImportsXml_11));
#line 301 "xml_documentation.m"
    }
#line 303 "xml_documentation.m"
    {
#line 303 "xml_documentation.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__TypeTable_13);
    }
#line 304 "xml_documentation.m"
    {
#line 304 "xml_documentation.m"
      check_hlds__xml_documentation__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 304 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_9[1]));
#line 304 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_2));
#line 304 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 304 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 3) = ((MR_Box) (check_hlds__xml_documentation__Comments_3));
#line 304 "xml_documentation.m"
    }
#line 304 "xml_documentation.m"
    {
#line 304 "xml_documentation.m"
      hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0(check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__V_34_34, check_hlds__xml_documentation__TypeTable_13, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv3_TypeXmls_14);
    }
#line 304 "xml_documentation.m"
    check_hlds__xml_documentation__TypeXmls_14 = ((MR_Word) check_hlds__xml_documentation__conv3_TypeXmls_14);
#line 306 "xml_documentation.m"
    {
#line 306 "xml_documentation.m"
      check_hlds__xml_documentation__TypeXml_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 306 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__TypeXml_15, 0) = ((MR_Box) ((MR_String) "types"));
#line 306 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__TypeXml_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 306 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__TypeXml_15, 2) = ((MR_Box) (check_hlds__xml_documentation__TypeXmls_14));
#line 306 "xml_documentation.m"
    }
#line 308 "xml_documentation.m"
    {
#line 308 "xml_documentation.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__PredTable_16);
    }
#line 309 "xml_documentation.m"
    {
#line 309 "xml_documentation.m"
      check_hlds__xml_documentation__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 309 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_38_38, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_9[2]));
#line 309 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_38_38, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_3));
#line 309 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 309 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_38_38, 3) = ((MR_Box) (check_hlds__xml_documentation__Comments_3));
#line 309 "xml_documentation.m"
    }
#line 309 "xml_documentation.m"
    {
#line 309 "xml_documentation.m"
      mercury__map__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__V_38_38, check_hlds__xml_documentation__PredTable_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv5_PredXmls_17);
    }
#line 309 "xml_documentation.m"
    check_hlds__xml_documentation__PredXmls_17 = ((MR_Word) check_hlds__xml_documentation__conv5_PredXmls_17);
#line 310 "xml_documentation.m"
    {
#line 310 "xml_documentation.m"
      check_hlds__xml_documentation__PredXml_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 310 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__PredXml_18, 0) = ((MR_Box) ((MR_String) "preds"));
#line 310 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__PredXml_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__PredXml_18, 2) = ((MR_Box) (check_hlds__xml_documentation__PredXmls_17));
#line 310 "xml_documentation.m"
    }
#line 312 "xml_documentation.m"
    {
#line 312 "xml_documentation.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__xml_documentation__ModuleInfo_5, &check_hlds__xml_documentation__ClassTable_19);
    }
#line 313 "xml_documentation.m"
    {
#line 313 "xml_documentation.m"
      check_hlds__xml_documentation__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 313 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_42_42, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_10[0]));
#line 313 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_42_42, 1) = ((MR_Box) (check_hlds__xml_documentation__ClassMethod_for_term_to_xml__xmlable____check_hlds__xml_documentation__module_info_xml_doc__arity0______term_to_xml__to_xml_1_1_f_0_4));
#line 313 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 313 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_42_42, 3) = ((MR_Box) (check_hlds__xml_documentation__Comments_3));
#line 313 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_42_42, 4) = ((MR_Box) (check_hlds__xml_documentation__PredTable_16));
#line 313 "xml_documentation.m"
    }
#line 313 "xml_documentation.m"
    {
#line 313 "xml_documentation.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, check_hlds__xml_documentation__TypeInfo_57_57, check_hlds__xml_documentation__V_42_42, check_hlds__xml_documentation__ClassTable_19, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv7_ClassXmls_20);
    }
#line 313 "xml_documentation.m"
    check_hlds__xml_documentation__ClassXmls_20 = ((MR_Word) check_hlds__xml_documentation__conv7_ClassXmls_20);
#line 315 "xml_documentation.m"
    {
#line 315 "xml_documentation.m"
      check_hlds__xml_documentation__ClassXml_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 315 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassXml_21, 0) = ((MR_Box) ((MR_String) "typeclasses"));
#line 315 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassXml_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassXml_21, 2) = ((MR_Box) (check_hlds__xml_documentation__ClassXmls_20));
#line 315 "xml_documentation.m"
    }
#line 317 "xml_documentation.m"
    {
#line 317 "xml_documentation.m"
      check_hlds__xml_documentation__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_49_49, 0) = ((MR_Box) (check_hlds__xml_documentation__ClassXml_21));
#line 317 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "xml_documentation.m"
    }
#line 317 "xml_documentation.m"
    {
#line 317 "xml_documentation.m"
      check_hlds__xml_documentation__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 0) = ((MR_Box) (check_hlds__xml_documentation__PredXml_18));
#line 317 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 1) = ((MR_Box) (check_hlds__xml_documentation__V_49_49));
#line 317 "xml_documentation.m"
    }
#line 317 "xml_documentation.m"
    {
#line 317 "xml_documentation.m"
      check_hlds__xml_documentation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 0) = ((MR_Box) (check_hlds__xml_documentation__TypeXml_15));
#line 317 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 1) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 317 "xml_documentation.m"
    }
#line 317 "xml_documentation.m"
    {
#line 317 "xml_documentation.m"
      check_hlds__xml_documentation__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 0) = ((MR_Box) (check_hlds__xml_documentation__ImportXml_12));
#line 317 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 1) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 317 "xml_documentation.m"
    }
#line 317 "xml_documentation.m"
    {
#line 317 "xml_documentation.m"
      check_hlds__xml_documentation__Children_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_22, 0) = ((MR_Box) (check_hlds__xml_documentation__CommentXml_7));
#line 317 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_22, 1) = ((MR_Box) (check_hlds__xml_documentation__V_46_46));
#line 317 "xml_documentation.m"
    }
#line 318 "xml_documentation.m"
    {
#line 318 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 318 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "module"));
#line 318 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__Children_22));
#line 318 "xml_documentation.m"
    }
#line 290 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_6;
#line 290 "xml_documentation.m"
  }
#line 290 "xml_documentation.m"
}

#line 286 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____module_info_xml_doc_0_0(
#line 286 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 286 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 286 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 286 "xml_documentation.m"
{
#line 286 "xml_documentation.m"
  {
#line 286 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 286 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_12 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;
#line 286 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_13 = (MR_Integer) check_hlds__xml_documentation__HeadVar__3_3;

#line 286 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_12 == check_hlds__xml_documentation__CastY_13);
#line 286 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 3174 "check_hlds.xml_documentation.c"
      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
#line 286 "xml_documentation.m"
    else
#line 286 "xml_documentation.m"
      {
#line 286 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 286 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));
#line 286 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 286 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 2)));
#line 286 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_10_10;

#line 286 "xml_documentation.m"
        {
#line 286 "xml_documentation.m"
          check_hlds__xml_documentation____Compare____comments_0_0(&check_hlds__xml_documentation__V_10_10, check_hlds__xml_documentation__V_4_4, check_hlds__xml_documentation__V_7_7);
        }
#line 3200 "check_hlds.xml_documentation.c"
        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_10_10 == (MR_Integer) 0);
#line 286 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 286 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 286 "xml_documentation.m"
          *check_hlds__xml_documentation__HeadVar__1_1 = check_hlds__xml_documentation__V_10_10;
#line 286 "xml_documentation.m"
        else
#line 286 "xml_documentation.m"
          {
#line 286 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__V_11_11;

#line 286 "xml_documentation.m"
            {
#line 286 "xml_documentation.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__V_5_5, check_hlds__xml_documentation__V_8_8);
            }
#line 3220 "check_hlds.xml_documentation.c"
            check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_11_11 == (MR_Integer) 0);
#line 286 "xml_documentation.m"
            check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 286 "xml_documentation.m"
            if (check_hlds__xml_documentation__succeeded)
#line 286 "xml_documentation.m"
              *check_hlds__xml_documentation__HeadVar__1_1 = check_hlds__xml_documentation__V_11_11;
#line 286 "xml_documentation.m"
            else
#line 286 "xml_documentation.m"
              {
#line 286 "xml_documentation.m"
                hlds__hlds_module____Compare____module_info_0_0(check_hlds__xml_documentation__HeadVar__1_1, check_hlds__xml_documentation__V_6_6, check_hlds__xml_documentation__V_9_9);
#line 286 "xml_documentation.m"
                return;
              }
#line 286 "xml_documentation.m"
          }
#line 286 "xml_documentation.m"
      }
#line 286 "xml_documentation.m"
  }
#line 286 "xml_documentation.m"
}

#line 286 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____module_info_xml_doc_0_0(
#line 286 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 286 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 286 "xml_documentation.m"
{
#line 286 "xml_documentation.m"
  {
#line 286 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 286 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_9 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
#line 286 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_10 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

#line 286 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_9 == check_hlds__xml_documentation__CastY_10);
#line 286 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 286 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 286 "xml_documentation.m"
    else
#line 286 "xml_documentation.m"
      {
#line 286 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 286 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 2)));
#line 286 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 286 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));

#line 3287 "check_hlds.xml_documentation.c"
        {
#line 3289 "check_hlds.xml_documentation.c"
          check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation____Unify____comments_0_0(check_hlds__xml_documentation__V_3_3, check_hlds__xml_documentation__V_6_6);
        }
#line 286 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 286 "xml_documentation.m"
          {
#line 3296 "check_hlds.xml_documentation.c"
            check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__V_4_4, check_hlds__xml_documentation__V_7_7) == 0);
#line 286 "xml_documentation.m"
            if (check_hlds__xml_documentation__succeeded)
#line 3300 "check_hlds.xml_documentation.c"
              {
#line 3302 "check_hlds.xml_documentation.c"
                return check_hlds__xml_documentation__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__xml_documentation__V_5_5, check_hlds__xml_documentation__V_8_8);
              }
#line 286 "xml_documentation.m"
          }
#line 286 "xml_documentation.m"
      }
#line 286 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 286 "xml_documentation.m"
  }
#line 286 "xml_documentation.m"
}

#line 70 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____line_type_0_0(
#line 70 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 70 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 70 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 70 "xml_documentation.m"
{
#line 70 "xml_documentation.m"
  {
#line 70 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 70 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_20 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;
#line 70 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_21 = (MR_Integer) check_hlds__xml_documentation__HeadVar__3_3;

#line 70 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_20 == check_hlds__xml_documentation__CastY_21);
#line 70 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 3340 "check_hlds.xml_documentation.c"
      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
#line 70 "xml_documentation.m"
    else
#line 70 "xml_documentation.m"
#line 70 "xml_documentation.m"
      switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) {
#line 70 "xml_documentation.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 70 "xml_documentation.m"
        case (MR_Integer) 0:
#line 70 "xml_documentation.m"
#line 70 "xml_documentation.m"
          switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__2_2)) {
#line 70 "xml_documentation.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 70 "xml_documentation.m"
            case (MR_Integer) 0:
#line 70 "xml_documentation.m"
#line 70 "xml_documentation.m"
              switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) {
#line 70 "xml_documentation.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 70 "xml_documentation.m"
                case (MR_Integer) 0:
#line 70 "xml_documentation.m"
#line 70 "xml_documentation.m"
                  switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__3_3)) {
#line 70 "xml_documentation.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 70 "xml_documentation.m"
                    case (MR_Integer) 0:
#line 70 "xml_documentation.m"
                      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
#line 70 "xml_documentation.m"
                      break;
#line 70 "xml_documentation.m"
                    case (MR_Integer) 1:
#line 70 "xml_documentation.m"
                      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 70 "xml_documentation.m"
                      break;
#line 70 "xml_documentation.m"
                  }
#line 70 "xml_documentation.m"
                  break;
#line 70 "xml_documentation.m"
                case (MR_Integer) 1:
#line 3388 "check_hlds.xml_documentation.c"
                  *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 70 "xml_documentation.m"
                  break;
#line 70 "xml_documentation.m"
                case (MR_Integer) 2:
#line 3394 "check_hlds.xml_documentation.c"
                  *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 70 "xml_documentation.m"
                  break;
#line 70 "xml_documentation.m"
              }
#line 70 "xml_documentation.m"
              break;
#line 70 "xml_documentation.m"
            case (MR_Integer) 1:
#line 70 "xml_documentation.m"
#line 70 "xml_documentation.m"
              switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) {
#line 70 "xml_documentation.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 70 "xml_documentation.m"
                case (MR_Integer) 0:
#line 70 "xml_documentation.m"
#line 70 "xml_documentation.m"
                  switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__3_3)) {
#line 70 "xml_documentation.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 70 "xml_documentation.m"
                    case (MR_Integer) 0:
#line 70 "xml_documentation.m"
                      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 70 "xml_documentation.m"
                      break;
#line 70 "xml_documentation.m"
                    case (MR_Integer) 1:
#line 70 "xml_documentation.m"
                      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
#line 70 "xml_documentation.m"
                      break;
#line 70 "xml_documentation.m"
                  }
#line 70 "xml_documentation.m"
                  break;
#line 70 "xml_documentation.m"
                case (MR_Integer) 1:
#line 3434 "check_hlds.xml_documentation.c"
                  *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 70 "xml_documentation.m"
                  break;
#line 70 "xml_documentation.m"
                case (MR_Integer) 2:
#line 3440 "check_hlds.xml_documentation.c"
                  *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 70 "xml_documentation.m"
                  break;
#line 70 "xml_documentation.m"
              }
#line 70 "xml_documentation.m"
              break;
#line 70 "xml_documentation.m"
          }
#line 70 "xml_documentation.m"
          break;
#line 70 "xml_documentation.m"
        case (MR_Integer) 1:
#line 70 "xml_documentation.m"
          {
#line 70 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));

#line 70 "xml_documentation.m"
#line 70 "xml_documentation.m"
            switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) {
#line 70 "xml_documentation.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 70 "xml_documentation.m"
              case (MR_Integer) 0:
#line 70 "xml_documentation.m"
#line 70 "xml_documentation.m"
                switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__3_3)) {
#line 70 "xml_documentation.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 70 "xml_documentation.m"
                  case (MR_Integer) 0:
#line 3473 "check_hlds.xml_documentation.c"
                    *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 70 "xml_documentation.m"
                    break;
#line 70 "xml_documentation.m"
                  case (MR_Integer) 1:
#line 3479 "check_hlds.xml_documentation.c"
                    *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 70 "xml_documentation.m"
                    break;
#line 70 "xml_documentation.m"
                }
#line 70 "xml_documentation.m"
                break;
#line 70 "xml_documentation.m"
              case (MR_Integer) 1:
#line 70 "xml_documentation.m"
                {
#line 70 "xml_documentation.m"
                  MR_String check_hlds__xml_documentation__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));

#line 70 "xml_documentation.m"
                  {
#line 70 "xml_documentation.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__xml_documentation__HeadVar__1_1, check_hlds__xml_documentation__V_25_25, check_hlds__xml_documentation__V_8_8);
#line 70 "xml_documentation.m"
                    return;
                  }
#line 70 "xml_documentation.m"
                }
#line 70 "xml_documentation.m"
                break;
#line 70 "xml_documentation.m"
              case (MR_Integer) 2:
#line 3507 "check_hlds.xml_documentation.c"
                *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 70 "xml_documentation.m"
                break;
#line 70 "xml_documentation.m"
            }
#line 70 "xml_documentation.m"
          }
#line 70 "xml_documentation.m"
          break;
#line 70 "xml_documentation.m"
        case (MR_Integer) 2:
#line 70 "xml_documentation.m"
          {
#line 70 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));

#line 70 "xml_documentation.m"
#line 70 "xml_documentation.m"
            switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) {
#line 70 "xml_documentation.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 70 "xml_documentation.m"
              case (MR_Integer) 0:
#line 70 "xml_documentation.m"
#line 70 "xml_documentation.m"
                switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__3_3)) {
#line 70 "xml_documentation.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 70 "xml_documentation.m"
                  case (MR_Integer) 0:
#line 3538 "check_hlds.xml_documentation.c"
                    *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 70 "xml_documentation.m"
                    break;
#line 70 "xml_documentation.m"
                  case (MR_Integer) 1:
#line 3544 "check_hlds.xml_documentation.c"
                    *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 1;
#line 70 "xml_documentation.m"
                    break;
#line 70 "xml_documentation.m"
                }
#line 70 "xml_documentation.m"
                break;
#line 70 "xml_documentation.m"
              case (MR_Integer) 1:
#line 3554 "check_hlds.xml_documentation.c"
                *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 2;
#line 70 "xml_documentation.m"
                break;
#line 70 "xml_documentation.m"
              case (MR_Integer) 2:
#line 70 "xml_documentation.m"
                {
#line 70 "xml_documentation.m"
                  MR_String check_hlds__xml_documentation__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));

#line 70 "xml_documentation.m"
                  {
#line 70 "xml_documentation.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__xml_documentation__HeadVar__1_1, check_hlds__xml_documentation__V_24_24, check_hlds__xml_documentation__V_16_16);
#line 70 "xml_documentation.m"
                    return;
                  }
#line 70 "xml_documentation.m"
                }
#line 70 "xml_documentation.m"
                break;
#line 70 "xml_documentation.m"
            }
#line 70 "xml_documentation.m"
          }
#line 70 "xml_documentation.m"
          break;
#line 70 "xml_documentation.m"
      }
#line 70 "xml_documentation.m"
  }
#line 70 "xml_documentation.m"
}

#line 70 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____line_type_0_0(
#line 70 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 70 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 70 "xml_documentation.m"
{
#line 70 "xml_documentation.m"
  {
#line 70 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 70 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_11 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
#line 70 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_12 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

#line 70 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_11 == check_hlds__xml_documentation__CastY_12);
#line 70 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 70 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 70 "xml_documentation.m"
    else
#line 70 "xml_documentation.m"
#line 70 "xml_documentation.m"
      switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) {
#line 70 "xml_documentation.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 70 "xml_documentation.m"
        case (MR_Integer) 0:
#line 70 "xml_documentation.m"
#line 70 "xml_documentation.m"
          switch (MR_unmkbody(check_hlds__xml_documentation__HeadVar__1_1)) {
#line 70 "xml_documentation.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 70 "xml_documentation.m"
            case (MR_Integer) 0:
#line 70 "xml_documentation.m"
              {
#line 70 "xml_documentation.m"
                MR_Integer check_hlds__xml_documentation__CastX_3 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
#line 70 "xml_documentation.m"
                MR_Integer check_hlds__xml_documentation__CastY_4 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

#line 70 "xml_documentation.m"
                check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastY_4 == check_hlds__xml_documentation__CastX_3);
#line 70 "xml_documentation.m"
              }
#line 70 "xml_documentation.m"
              break;
#line 70 "xml_documentation.m"
            case (MR_Integer) 1:
#line 70 "xml_documentation.m"
              {
#line 70 "xml_documentation.m"
                MR_Integer check_hlds__xml_documentation__CastX_9 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
#line 70 "xml_documentation.m"
                MR_Integer check_hlds__xml_documentation__CastY_10 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

#line 70 "xml_documentation.m"
                check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastY_10 == check_hlds__xml_documentation__CastX_9);
#line 70 "xml_documentation.m"
              }
#line 70 "xml_documentation.m"
              break;
#line 70 "xml_documentation.m"
          }
#line 70 "xml_documentation.m"
          break;
#line 70 "xml_documentation.m"
        case (MR_Integer) 1:
#line 70 "xml_documentation.m"
          {
#line 70 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 70 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__V_6_6;

#line 70 "xml_documentation.m"
            check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 70 "xml_documentation.m"
            if (check_hlds__xml_documentation__succeeded)
#line 70 "xml_documentation.m"
              {
#line 70 "xml_documentation.m"
                check_hlds__xml_documentation__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 3678 "check_hlds.xml_documentation.c"
                check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__V_5_5, check_hlds__xml_documentation__V_6_6) == 0);
#line 70 "xml_documentation.m"
              }
#line 70 "xml_documentation.m"
          }
#line 70 "xml_documentation.m"
          break;
#line 70 "xml_documentation.m"
        case (MR_Integer) 2:
#line 70 "xml_documentation.m"
          {
#line 70 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 70 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__V_8_8;

#line 70 "xml_documentation.m"
            check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 70 "xml_documentation.m"
            if (check_hlds__xml_documentation__succeeded)
#line 70 "xml_documentation.m"
              {
#line 70 "xml_documentation.m"
                check_hlds__xml_documentation__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 3703 "check_hlds.xml_documentation.c"
                check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__V_7_7, check_hlds__xml_documentation__V_8_8) == 0);
#line 70 "xml_documentation.m"
              }
#line 70 "xml_documentation.m"
          }
#line 70 "xml_documentation.m"
          break;
#line 70 "xml_documentation.m"
      }
#line 70 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 70 "xml_documentation.m"
  }
#line 70 "xml_documentation.m"
}

#line 64 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation____Compare____comments_0_0(
#line 64 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__1_1,
#line 64 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 64 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 64 "xml_documentation.m"
{
#line 64 "xml_documentation.m"
  {
#line 64 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 64 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_6 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;
#line 64 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_7 = (MR_Integer) check_hlds__xml_documentation__HeadVar__3_3;

#line 64 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_6 == check_hlds__xml_documentation__CastY_7);
#line 64 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 3744 "check_hlds.xml_documentation.c"
      *check_hlds__xml_documentation__HeadVar__1_1 = (MR_Integer) 0;
#line 64 "xml_documentation.m"
    else
#line 64 "xml_documentation.m"
      {
#line 64 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_4_4 = (MR_Word) check_hlds__xml_documentation__HeadVar__2_2;
#line 64 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_5_5 = (MR_Word) check_hlds__xml_documentation__HeadVar__3_3;

#line 64 "xml_documentation.m"
        {
#line 64 "xml_documentation.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__xml_documentation_scalar_common_2[1], check_hlds__xml_documentation__HeadVar__1_1, ((MR_Box) (check_hlds__xml_documentation__V_4_4)), ((MR_Box) (check_hlds__xml_documentation__V_5_5)));
#line 64 "xml_documentation.m"
          return;
        }
#line 64 "xml_documentation.m"
      }
#line 64 "xml_documentation.m"
  }
#line 64 "xml_documentation.m"
}

#line 64 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation____Unify____comments_0_0(
#line 64 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1,
#line 64 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 64 "xml_documentation.m"
{
#line 64 "xml_documentation.m"
  {
#line 64 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 64 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastX_5 = (MR_Integer) check_hlds__xml_documentation__HeadVar__1_1;
#line 64 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__CastY_6 = (MR_Integer) check_hlds__xml_documentation__HeadVar__2_2;

#line 64 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__CastX_5 == check_hlds__xml_documentation__CastY_6);
#line 64 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 64 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 64 "xml_documentation.m"
    else
#line 64 "xml_documentation.m"
      {
#line 64 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_3_3 = (MR_Word) check_hlds__xml_documentation__HeadVar__1_1;
#line 64 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_4_4 = (MR_Word) check_hlds__xml_documentation__HeadVar__2_2;

#line 3802 "check_hlds.xml_documentation.c"
        {
#line 3804 "check_hlds.xml_documentation.c"
          return check_hlds__xml_documentation__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__xml_documentation_scalar_common_2[1], ((MR_Box) (check_hlds__xml_documentation__V_3_3)), ((MR_Box) (check_hlds__xml_documentation__V_4_4)));
        }
#line 64 "xml_documentation.m"
      }
#line 64 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 64 "xml_documentation.m"
  }
#line 64 "xml_documentation.m"
}

#line 870 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__nyi_1_f_0(
#line 870 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Tag_3)
#line 870 "xml_documentation.m"
{
#line 872 "xml_documentation.m"
  {
#line 872 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 872 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;

#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_3));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[3])));
#line 860 "xml_documentation.m"
    }
#line 872 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 872 "xml_documentation.m"
  }
#line 870 "xml_documentation.m"
}

#line 858 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_string_2_f_0(
#line 858 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 858 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__S_5)
#line 858 "xml_documentation.m"
{
#line 860 "xml_documentation.m"
  {
#line 860 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 860 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;
#line 860 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_7_7;
#line 860 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_8_8;

#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) (check_hlds__xml_documentation__S_5));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 0) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__xml_documentation__E_4));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_7_7));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_3;
#line 860 "xml_documentation.m"
  }
#line 858 "xml_documentation.m"
}

#line 850 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_float_2_f_0(
#line 850 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 850 "xml_documentation.m"
  MR_Float check_hlds__xml_documentation__F_5)
#line 850 "xml_documentation.m"
{
#line 852 "xml_documentation.m"
  {
#line 852 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 852 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;
#line 852 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_7_7;
#line 852 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_8_8;
#line 852 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_9_9;

#line 852 "xml_documentation.m"
    {
#line 852 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__string__float_to_string_1_f_0(check_hlds__xml_documentation__F_5);
    }
#line 852 "xml_documentation.m"
    {
#line 852 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 852 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 852 "xml_documentation.m"
    }
#line 852 "xml_documentation.m"
    {
#line 852 "xml_documentation.m"
      check_hlds__xml_documentation__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 0) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 852 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 852 "xml_documentation.m"
    }
#line 852 "xml_documentation.m"
    {
#line 852 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 852 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__xml_documentation__E_4));
#line 852 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 852 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_7_7));
#line 852 "xml_documentation.m"
    }
#line 852 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_3;
#line 852 "xml_documentation.m"
  }
#line 850 "xml_documentation.m"
}

#line 846 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__tagged_int_2_f_0(
#line 846 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__E_4,
#line 846 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__I_5)
#line 846 "xml_documentation.m"
{
#line 848 "xml_documentation.m"
  {
#line 848 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 848 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;
#line 848 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_7_7;
#line 848 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_8_8;
#line 848 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_9_9;

#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__I_5);
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 848 "xml_documentation.m"
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 0) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "xml_documentation.m"
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) (check_hlds__xml_documentation__E_4));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_7_7));
#line 848 "xml_documentation.m"
    }
#line 848 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_3;
#line 848 "xml_documentation.m"
  }
#line 846 "xml_documentation.m"
}

#line 834 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0(
#line 834 "xml_documentation.m"
  MR_String check_hlds__xml_documentation__Prefix_5,
#line 834 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Name_6,
#line 834 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Arity_7)
#line 834 "xml_documentation.m"
{
#line 836 "xml_documentation.m"
  {
#line 836 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 836 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__HeadVar__4_4;
#line 836 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_8_8;
#line 836 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_9_9;
#line 836 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_11_11;
#line 836 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_14_14;
#line 836 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_16_16;

#line 841 "xml_documentation.m"
    {
#line 841 "xml_documentation.m"
      check_hlds__xml_documentation__V_16_16 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Name_6);
    }
#line 841 "xml_documentation.m"
    {
#line 841 "xml_documentation.m"
      check_hlds__xml_documentation__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_16_16);
    }
#line 841 "xml_documentation.m"
    {
#line 841 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Prefix_5, check_hlds__xml_documentation__V_14_14);
    }
#line 837 "xml_documentation.m"
    {
#line 837 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_7);
    }
#line 837 "xml_documentation.m"
    {
#line 837 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_11_11);
    }
#line 837 "xml_documentation.m"
    {
#line 837 "xml_documentation.m"
      return check_hlds__xml_documentation__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_8_8, check_hlds__xml_documentation__V_9_9);
    }
#line 836 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 836 "xml_documentation.m"
  }
#line 834 "xml_documentation.m"
}

#line 807 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__visibility_to_xml_1_f_0(
#line 807 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Status_3)
#line 807 "xml_documentation.m"
{
#line 809 "xml_documentation.m"
  {
#line 809 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 809 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
#line 809 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Visibility_4;
#line 809 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_10_10;
#line 809 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11;
#line 810 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_6_6;

#line 810 "xml_documentation.m"
    {
#line 810 "xml_documentation.m"
      check_hlds__xml_documentation__V_6_6 = parse_tree__status__status_defined_in_impl_section_1_f_0(check_hlds__xml_documentation__Status_3);
    }
#line 810 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_6_6 == (MR_Integer) 1);
#line 816 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 813 "xml_documentation.m"
      {
#line 811 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 813 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 812 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_4 = (MR_String) "abstract";
#line 813 "xml_documentation.m"
        else
#line 814 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_4 = (MR_String) "implementation";
#line 813 "xml_documentation.m"
      }
#line 816 "xml_documentation.m"
    else
#line 817 "xml_documentation.m"
      check_hlds__xml_documentation__Visibility_4 = (MR_String) "interface";
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_4));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 0) = ((MR_Box) (check_hlds__xml_documentation__V_11_11));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "visibility"));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_10_10));
#line 860 "xml_documentation.m"
    }
#line 809 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 809 "xml_documentation.m"
  }
#line 807 "xml_documentation.m"
}

#line 800 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0_1(
#line 800 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 800 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 800 "xml_documentation.m"
{
#line 800 "xml_documentation.m"
  {
#line 800 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 800 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 800 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__3_3;

#line 800 "xml_documentation.m"
    {
#line 800 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 800 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__3_3));
#line 800 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 800 "xml_documentation.m"
  }
#line 800 "xml_documentation.m"
}

#line 793 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(
#line 793 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 793 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Constraint_5)
#line 793 "xml_documentation.m"
{
#line 795 "xml_documentation.m"
  {
#line 795 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 795 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_6;
#line 795 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Constraint_5, (MR_Integer) 0)));
#line 795 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ArgTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Constraint_5, (MR_Integer) 1)));
#line 795 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Id_9;
#line 795 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlName_10;
#line 795 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlTypes_11;
#line 795 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_13_13;
#line 795 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_15_15;
#line 795 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;
#line 795 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_18_18;
#line 795 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_21_21;
#line 795 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_22_22;
#line 795 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_30_30;
#line 795 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_31_31;
#line 795 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_33_33;
#line 795 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_36_36;
#line 795 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_38_38;
#line 795 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_43_43;

#line 798 "xml_documentation.m"
    {
#line 798 "xml_documentation.m"
      check_hlds__xml_documentation__V_13_13 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__xml_documentation__ArgTypes_8);
    }
#line 841 "xml_documentation.m"
    {
#line 841 "xml_documentation.m"
      check_hlds__xml_documentation__V_38_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__ClassName_7);
    }
#line 841 "xml_documentation.m"
    {
#line 841 "xml_documentation.m"
      check_hlds__xml_documentation__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_38_38);
    }
#line 841 "xml_documentation.m"
    {
#line 841 "xml_documentation.m"
      check_hlds__xml_documentation__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "constraint", check_hlds__xml_documentation__V_36_36);
    }
#line 837 "xml_documentation.m"
    {
#line 837 "xml_documentation.m"
      check_hlds__xml_documentation__V_33_33 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__V_13_13);
    }
#line 837 "xml_documentation.m"
    {
#line 837 "xml_documentation.m"
      check_hlds__xml_documentation__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_33_33);
    }
#line 837 "xml_documentation.m"
    {
#line 837 "xml_documentation.m"
      check_hlds__xml_documentation__Id_9 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_30_30, check_hlds__xml_documentation__V_31_31);
    }
#line 799 "xml_documentation.m"
    {
#line 799 "xml_documentation.m"
      check_hlds__xml_documentation__XmlName_10 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__ClassName_7);
    }
#line 800 "xml_documentation.m"
    {
#line 800 "xml_documentation.m"
      check_hlds__xml_documentation__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 800 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_15_15, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[2]));
#line 800 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_15_15, 1) = ((MR_Box) (check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0_1));
#line 800 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 800 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_15_15, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_4));
#line 800 "xml_documentation.m"
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__V_43_43 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_15_15, check_hlds__xml_documentation__ArgTypes_8);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__XmlTypes_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_11, 0) = ((MR_Box) ((MR_String) "constraint_types"));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_11, 2) = ((MR_Box) (check_hlds__xml_documentation__V_43_43));
#line 866 "xml_documentation.m"
    }
#line 802 "xml_documentation.m"
    {
#line 802 "xml_documentation.m"
      check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) ((MR_String) "ref"));
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (check_hlds__xml_documentation__Id_9));
#line 802 "xml_documentation.m"
    }
#line 802 "xml_documentation.m"
    {
#line 802 "xml_documentation.m"
      check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__V_18_18));
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "xml_documentation.m"
    }
#line 802 "xml_documentation.m"
    {
#line 802 "xml_documentation.m"
      check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_11));
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "xml_documentation.m"
    }
#line 802 "xml_documentation.m"
    {
#line 802 "xml_documentation.m"
      check_hlds__xml_documentation__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_10));
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 1) = ((MR_Box) (check_hlds__xml_documentation__V_22_22));
#line 802 "xml_documentation.m"
    }
#line 802 "xml_documentation.m"
    {
#line 802 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "constraint"));
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 802 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 802 "xml_documentation.m"
    }
#line 795 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_6;
#line 795 "xml_documentation.m"
  }
#line 793 "xml_documentation.m"
}

#line 784 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_context_to_xml_1_f_0(
#line 784 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
#line 784 "xml_documentation.m"
{
#line 786 "xml_documentation.m"
  {
#line 786 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 786 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
#line 786 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 786 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__LineNumber_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 786 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_7_7;
#line 786 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_8_8;
#line 786 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_10_10;
#line 786 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11;
#line 786 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;
#line 786 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_18_18;
#line 786 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_23_23;
#line 786 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_24_24;
#line 786 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_25_25;

#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (check_hlds__xml_documentation__FileName_3));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__V_18_18));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) ((MR_String) "filename"));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_8_8, 2) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 860 "xml_documentation.m"
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_25_25 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__LineNumber_4);
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 0) = ((MR_Box) (check_hlds__xml_documentation__V_25_25));
#line 848 "xml_documentation.m"
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_23_23, 0) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "xml_documentation.m"
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) ((MR_String) "line"));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 2) = ((MR_Box) (check_hlds__xml_documentation__V_23_23));
#line 848 "xml_documentation.m"
    }
#line 789 "xml_documentation.m"
    {
#line 789 "xml_documentation.m"
      check_hlds__xml_documentation__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 0) = ((MR_Box) (check_hlds__xml_documentation__V_11_11));
#line 789 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "xml_documentation.m"
    }
#line 788 "xml_documentation.m"
    {
#line 788 "xml_documentation.m"
      check_hlds__xml_documentation__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 0) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 788 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_7_7, 1) = ((MR_Box) (check_hlds__xml_documentation__V_10_10));
#line 788 "xml_documentation.m"
    }
#line 787 "xml_documentation.m"
    {
#line 787 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 787 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "context"));
#line 787 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 787 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_7_7));
#line 787 "xml_documentation.m"
    }
#line 786 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 786 "xml_documentation.m"
  }
#line 784 "xml_documentation.m"
}

#line 774 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__name_to_xml_1_f_0(
#line 774 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
#line 774 "xml_documentation.m"
{
#line 776 "xml_documentation.m"
  {
#line 776 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 776 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;

#line 776 "xml_documentation.m"
    if (((MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 777 "xml_documentation.m"
      {
#line 777 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 777 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 777 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_9_9;
#line 777 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_10_10;
#line 777 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_12_12;
#line 777 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_13_13;
#line 777 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_14_14;
#line 777 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_20_20;
#line 777 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_21_21;
#line 777 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_26_26;
#line 777 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_27_27;

#line 779 "xml_documentation.m"
        {
#line 779 "xml_documentation.m"
          check_hlds__xml_documentation__V_12_12 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Module_5);
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 0) = ((MR_Box) (check_hlds__xml_documentation__V_12_12));
#line 860 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_10_10, 0) = ((MR_Box) ((MR_String) "module"));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_10_10, 2) = ((MR_Box) (check_hlds__xml_documentation__V_20_20));
#line 860 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_27_27, 0) = ((MR_Box) (check_hlds__xml_documentation__Name_6));
#line 860 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 0) = ((MR_Box) (check_hlds__xml_documentation__V_27_27));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_14_14, 0) = ((MR_Box) ((MR_String) "name"));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_14_14, 2) = ((MR_Box) (check_hlds__xml_documentation__V_26_26));
#line 860 "xml_documentation.m"
        }
#line 780 "xml_documentation.m"
        {
#line 780 "xml_documentation.m"
          check_hlds__xml_documentation__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_13_13, 0) = ((MR_Box) (check_hlds__xml_documentation__V_14_14));
#line 780 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 780 "xml_documentation.m"
        }
#line 779 "xml_documentation.m"
        {
#line 779 "xml_documentation.m"
          check_hlds__xml_documentation__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_9_9, 0) = ((MR_Box) (check_hlds__xml_documentation__V_10_10));
#line 779 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_9_9, 1) = ((MR_Box) (check_hlds__xml_documentation__V_13_13));
#line 779 "xml_documentation.m"
        }
#line 778 "xml_documentation.m"
        {
#line 778 "xml_documentation.m"
          check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 778 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "qualified"));
#line 778 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 778 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 778 "xml_documentation.m"
        }
#line 777 "xml_documentation.m"
      }
#line 776 "xml_documentation.m"
    else
#line 776 "xml_documentation.m"
      {
#line 776 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)));
#line 776 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_32_32;
#line 776 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_33_33;

#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_33_33, 0) = ((MR_Box) (check_hlds__xml_documentation__Name_3));
#line 860 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 0) = ((MR_Box) (check_hlds__xml_documentation__V_33_33));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "unqualified"));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_32_32));
#line 860 "xml_documentation.m"
        }
#line 776 "xml_documentation.m"
      }
#line 776 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 776 "xml_documentation.m"
  }
#line 774 "xml_documentation.m"
}

#line 769 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_3(
#line 769 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 769 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 769 "xml_documentation.m"
{
#line 769 "xml_documentation.m"
  {
#line 769 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 769 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 769 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_Xml_6;

#line 769 "xml_documentation.m"
    {
#line 769 "xml_documentation.m"
      check_hlds__xml_documentation__conv2_Xml_6 = check_hlds__xml_documentation__predicate_documentation_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 769 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_6));
#line 769 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 769 "xml_documentation.m"
  }
#line 769 "xml_documentation.m"
}

#line 768 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_2(
#line 768 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 768 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 768 "xml_documentation.m"
{
#line 768 "xml_documentation.m"
  {
#line 768 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 768 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 768 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_HeadVar__3_20;

#line 768 "xml_documentation.m"
    {
#line 768 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_HeadVar__3_20 = check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__768__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 768 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_HeadVar__3_20));
#line 768 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 768 "xml_documentation.m"
  }
#line 768 "xml_documentation.m"
}

#line 766 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0_1(
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
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__2_17;

#line 766 "xml_documentation.m"
    {
#line 766 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_HeadVar__2_17 = check_hlds__xml_documentation__IntroducedFrom__func__class_methods_to_xml__766__1_1_f_0(((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 766 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__2_17));
#line 766 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 766 "xml_documentation.m"
  }
#line 766 "xml_documentation.m"
}

#line 763 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__class_methods_to_xml_3_f_0(
#line 763 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 763 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_6,
#line 763 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Methods_7)
#line 763 "xml_documentation.m"
{
#line 765 "xml_documentation.m"
  {
#line 765 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_8;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__AllPredIds_9;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredIds_12;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredInfos_13;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_18_18;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_22_22;
#line 765 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_38_38;

#line 766 "xml_documentation.m"
    {
#line 766 "xml_documentation.m"
      check_hlds__xml_documentation__AllPredIds_9 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, check_hlds__xml_documentation__TypeCtorInfo_28_28, (MR_Word) &check_hlds__xml_documentation_scalar_common_2[19], check_hlds__xml_documentation__Methods_7);
    }
#line 767 "xml_documentation.m"
    {
#line 767 "xml_documentation.m"
      check_hlds__xml_documentation__PredIds_12 = mercury__list__sort_and_remove_dups_1_f_0(check_hlds__xml_documentation__TypeCtorInfo_28_28, check_hlds__xml_documentation__AllPredIds_9);
    }
#line 768 "xml_documentation.m"
    {
#line 768 "xml_documentation.m"
      check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 768 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[5]));
#line 768 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (check_hlds__xml_documentation__class_methods_to_xml_3_f_0_2));
#line 768 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 768 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 3) = ((MR_Box) (check_hlds__xml_documentation__PredTable_6));
#line 768 "xml_documentation.m"
    }
#line 768 "xml_documentation.m"
    {
#line 768 "xml_documentation.m"
      check_hlds__xml_documentation__PredInfos_13 = mercury__list__map_2_f_0(check_hlds__xml_documentation__TypeCtorInfo_28_28, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__xml_documentation__V_18_18, check_hlds__xml_documentation__PredIds_12);
    }
#line 769 "xml_documentation.m"
    {
#line 769 "xml_documentation.m"
      check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 769 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[6]));
#line 769 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (check_hlds__xml_documentation__class_methods_to_xml_3_f_0_3));
#line 769 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 769 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_22_22, 3) = ((MR_Box) (check_hlds__xml_documentation__C_5));
#line 769 "xml_documentation.m"
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__V_38_38 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_22_22, check_hlds__xml_documentation__PredInfos_13);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_8, 0) = ((MR_Box) ((MR_String) "methods"));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_8, 2) = ((MR_Box) (check_hlds__xml_documentation__V_38_38));
#line 866 "xml_documentation.m"
    }
#line 765 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_8;
#line 765 "xml_documentation.m"
  }
#line 763 "xml_documentation.m"
}

#line 760 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0_1(
#line 760 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 760 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 760 "xml_documentation.m"
{
#line 760 "xml_documentation.m"
  {
#line 760 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 760 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 760 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 760 "xml_documentation.m"
    {
#line 760 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 760 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 760 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 760 "xml_documentation.m"
  }
#line 760 "xml_documentation.m"
}

#line 749 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__fundep_to_xml_3_f_0(
#line 749 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_5,
#line 749 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Vars_6,
#line 749 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 749 "xml_documentation.m"
{
#line 751 "xml_documentation.m"
  {
#line 751 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 751 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_9;
#line 751 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Domain_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 751 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Range_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
#line 751 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlDomain_10;
#line 751 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlRange_11;
#line 751 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_16_16;
#line 751 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;
#line 751 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_23_23;
#line 751 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_24_24;
#line 751 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_32_32;
#line 751 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_40_40;
#line 751 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_48_48;

#line 760 "xml_documentation.m"
    {
#line 760 "xml_documentation.m"
      check_hlds__xml_documentation__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 760 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[0]));
#line 760 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 1) = ((MR_Box) (check_hlds__xml_documentation__fundep_to_xml_3_f_0_1));
#line 760 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 760 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_5));
#line 760 "xml_documentation.m"
    }
#line 761 "xml_documentation.m"
    {
#line 761 "xml_documentation.m"
      check_hlds__xml_documentation__V_24_24 = hlds__hlds_data__restrict_list_elements_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], check_hlds__xml_documentation__Domain_7, check_hlds__xml_documentation__Vars_6);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__V_32_32 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_23_23, check_hlds__xml_documentation__V_24_24);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__XmlDomain_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlDomain_10, 0) = ((MR_Box) ((MR_String) "domain"));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlDomain_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlDomain_10, 2) = ((MR_Box) (check_hlds__xml_documentation__V_32_32));
#line 866 "xml_documentation.m"
    }
#line 761 "xml_documentation.m"
    {
#line 761 "xml_documentation.m"
      check_hlds__xml_documentation__V_40_40 = hlds__hlds_data__restrict_list_elements_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], check_hlds__xml_documentation__Range_8, check_hlds__xml_documentation__Vars_6);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__V_48_48 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_23_23, check_hlds__xml_documentation__V_40_40);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__XmlRange_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlRange_11, 0) = ((MR_Box) ((MR_String) "range"));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlRange_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlRange_11, 2) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 866 "xml_documentation.m"
    }
#line 754 "xml_documentation.m"
    {
#line 754 "xml_documentation.m"
      check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlRange_11));
#line 754 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 754 "xml_documentation.m"
    }
#line 754 "xml_documentation.m"
    {
#line 754 "xml_documentation.m"
      check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlDomain_10));
#line 754 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 754 "xml_documentation.m"
    }
#line 754 "xml_documentation.m"
    {
#line 754 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 754 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 0) = ((MR_Box) ((MR_String) "fundep"));
#line 754 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 754 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 754 "xml_documentation.m"
    }
#line 751 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_9;
#line 751 "xml_documentation.m"
  }
#line 749 "xml_documentation.m"
}

#line 732 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_3(
#line 732 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 732 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 732 "xml_documentation.m"
{
#line 732 "xml_documentation.m"
  {
#line 732 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 732 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 732 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_Xml_9;

#line 732 "xml_documentation.m"
    {
#line 732 "xml_documentation.m"
      check_hlds__xml_documentation__conv2_Xml_9 = check_hlds__xml_documentation__fundep_to_xml_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 732 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_9));
#line 732 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 732 "xml_documentation.m"
  }
#line 732 "xml_documentation.m"
}

#line 730 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_2(
#line 730 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 730 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 730 "xml_documentation.m"
{
#line 730 "xml_documentation.m"
  {
#line 730 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 730 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 730 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_Xml_6;

#line 730 "xml_documentation.m"
    {
#line 730 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_Xml_6 = check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 730 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_Xml_6));
#line 730 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 730 "xml_documentation.m"
  }
#line 730 "xml_documentation.m"
}

#line 728 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0_1(
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
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 728 "xml_documentation.m"
    {
#line 728 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 728 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 728 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 728 "xml_documentation.m"
  }
#line 728 "xml_documentation.m"
}

#line 711 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__class_documentation_6_p_0(
#line 711 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_7,
#line 711 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredTable_8,
#line 711 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3,
#line 711 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ClassDefn_11,
#line 711 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27,
#line 711 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_28)
#line 711 "xml_documentation.m"
{
#line 715 "xml_documentation.m"
  {
#line 715 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 715 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 715 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
#line 715 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportStatus_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
#line 715 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__DefinedInThisModule_14;
#line 716 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
#line 716 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
#line 716 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
#line 716 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
#line 716 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
#line 716 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
#line 716 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
#line 716 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
#line 716 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));

#line 717 "xml_documentation.m"
    {
#line 717 "xml_documentation.m"
      check_hlds__xml_documentation__DefinedInThisModule_14 = parse_tree__status__status_defined_in_this_module_1_f_0(check_hlds__xml_documentation__ImportStatus_13);
    }
#line 745 "xml_documentation.m"
#line 745 "xml_documentation.m"
    switch (check_hlds__xml_documentation__DefinedInThisModule_14) {
#line 745 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 745 "xml_documentation.m"
      case (MR_Integer) 0:
#line 746 "xml_documentation.m"
        *check_hlds__xml_documentation__STATE_VARIABLE_Xml_28 = check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27;
#line 745 "xml_documentation.m"
        break;
#line 745 "xml_documentation.m"
      case (MR_Integer) 1:
#line 719 "xml_documentation.m"
        {
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Xml_12;
#line 719 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__Id_15;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Context_16;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TVarset_17;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Vars_18;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlName_19;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlClassVars_20;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlSupers_21;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlFundeps_22;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlMethods_23;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlVisibility_24;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlContext_25;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Xml0_26;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_31_31;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_33_33;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_34_34;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_36_36;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_37_37;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_38_38;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_40_40;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_41_41;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_44_44;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_45_45;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_46_46;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_47_47;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_48_48;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_49_49;
#line 719 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_50_50;
#line 722 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_62_62;
#line 722 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_63_63;
#line 722 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_64_64;
#line 722 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_65_65;
#line 722 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_67_67;
#line 722 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_68_68;
#line 722 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_69_69;
#line 729 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_89_89;
#line 729 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_90_90;
#line 729 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_91_91;
#line 729 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_92_92;
#line 729 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_93_93;
#line 729 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_94_94;
#line 729 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_95_95;
#line 729 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_96_96;
#line 729 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_97_97;
#line 731 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_98_98;
#line 731 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_99_99;
#line 731 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_100_100;
#line 731 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_101_101;
#line 731 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_102_102;
#line 731 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_103_103;
#line 731 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_104_104;
#line 731 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_105_105;
#line 731 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_106_106;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_107_107;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_108_108;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_109_109;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_110_110;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_111_111;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_112_112;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_113_113;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_114_114;
#line 733 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_115_115;

#line 720 "xml_documentation.m"
          {
#line 720 "xml_documentation.m"
            check_hlds__xml_documentation__Id_15 = check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0((MR_String) "class", check_hlds__xml_documentation__Name_9, check_hlds__xml_documentation__Arity_10);
          }
#line 722 "xml_documentation.m"
          check_hlds__xml_documentation__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
#line 722 "xml_documentation.m"
          check_hlds__xml_documentation__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
#line 722 "xml_documentation.m"
          check_hlds__xml_documentation__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
#line 722 "xml_documentation.m"
          check_hlds__xml_documentation__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
#line 722 "xml_documentation.m"
          check_hlds__xml_documentation__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
#line 722 "xml_documentation.m"
          check_hlds__xml_documentation__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
#line 722 "xml_documentation.m"
          check_hlds__xml_documentation__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
#line 722 "xml_documentation.m"
          check_hlds__xml_documentation__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
#line 722 "xml_documentation.m"
          check_hlds__xml_documentation__TVarset_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
#line 722 "xml_documentation.m"
          check_hlds__xml_documentation__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
#line 726 "xml_documentation.m"
          {
#line 726 "xml_documentation.m"
            check_hlds__xml_documentation__XmlName_19 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_9);
          }
#line 728 "xml_documentation.m"
          {
#line 728 "xml_documentation.m"
            check_hlds__xml_documentation__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 728 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[0]));
#line 728 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 1) = ((MR_Box) (check_hlds__xml_documentation__class_documentation_6_p_0_1));
#line 728 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 728 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_17));
#line 728 "xml_documentation.m"
          }
#line 727 "xml_documentation.m"
          {
#line 727 "xml_documentation.m"
            check_hlds__xml_documentation__XmlClassVars_20 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0((MR_String) "class_vars", check_hlds__xml_documentation__V_31_31, check_hlds__xml_documentation__Vars_18);
          }
#line 730 "xml_documentation.m"
          {
#line 730 "xml_documentation.m"
            check_hlds__xml_documentation__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 730 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[1]));
#line 730 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 1) = ((MR_Box) (check_hlds__xml_documentation__class_documentation_6_p_0_2));
#line 730 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 730 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_17));
#line 730 "xml_documentation.m"
          }
#line 729 "xml_documentation.m"
          check_hlds__xml_documentation__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
#line 729 "xml_documentation.m"
          check_hlds__xml_documentation__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
#line 729 "xml_documentation.m"
          check_hlds__xml_documentation__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
#line 729 "xml_documentation.m"
          check_hlds__xml_documentation__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
#line 729 "xml_documentation.m"
          check_hlds__xml_documentation__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
#line 729 "xml_documentation.m"
          check_hlds__xml_documentation__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
#line 729 "xml_documentation.m"
          check_hlds__xml_documentation__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
#line 729 "xml_documentation.m"
          check_hlds__xml_documentation__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
#line 729 "xml_documentation.m"
          check_hlds__xml_documentation__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
#line 729 "xml_documentation.m"
          check_hlds__xml_documentation__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
#line 729 "xml_documentation.m"
          {
#line 729 "xml_documentation.m"
            check_hlds__xml_documentation__XmlSupers_21 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0((MR_String) "superclasses", check_hlds__xml_documentation__V_33_33, check_hlds__xml_documentation__V_34_34);
          }
#line 732 "xml_documentation.m"
          {
#line 732 "xml_documentation.m"
            check_hlds__xml_documentation__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 732 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_7[2]));
#line 732 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 1) = ((MR_Box) (check_hlds__xml_documentation__class_documentation_6_p_0_3));
#line 732 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 732 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_17));
#line 732 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 4) = ((MR_Box) (check_hlds__xml_documentation__Vars_18));
#line 732 "xml_documentation.m"
          }
#line 731 "xml_documentation.m"
          check_hlds__xml_documentation__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
#line 731 "xml_documentation.m"
          check_hlds__xml_documentation__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
#line 731 "xml_documentation.m"
          check_hlds__xml_documentation__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
#line 731 "xml_documentation.m"
          check_hlds__xml_documentation__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
#line 731 "xml_documentation.m"
          check_hlds__xml_documentation__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
#line 731 "xml_documentation.m"
          check_hlds__xml_documentation__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
#line 731 "xml_documentation.m"
          check_hlds__xml_documentation__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
#line 731 "xml_documentation.m"
          check_hlds__xml_documentation__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
#line 731 "xml_documentation.m"
          check_hlds__xml_documentation__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
#line 731 "xml_documentation.m"
          check_hlds__xml_documentation__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
#line 731 "xml_documentation.m"
          {
#line 731 "xml_documentation.m"
            check_hlds__xml_documentation__XmlFundeps_22 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_52_95_95_91_49_44_32_50_93_95_48_3_f_0((MR_String) "fundeps", check_hlds__xml_documentation__V_36_36, check_hlds__xml_documentation__V_37_37);
          }
#line 733 "xml_documentation.m"
          check_hlds__xml_documentation__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 0)));
#line 733 "xml_documentation.m"
          check_hlds__xml_documentation__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 1)));
#line 733 "xml_documentation.m"
          check_hlds__xml_documentation__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 2)));
#line 733 "xml_documentation.m"
          check_hlds__xml_documentation__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 3)));
#line 733 "xml_documentation.m"
          check_hlds__xml_documentation__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 4)));
#line 733 "xml_documentation.m"
          check_hlds__xml_documentation__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 5)));
#line 733 "xml_documentation.m"
          check_hlds__xml_documentation__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 6)));
#line 733 "xml_documentation.m"
          check_hlds__xml_documentation__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 7)));
#line 733 "xml_documentation.m"
          check_hlds__xml_documentation__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 8)));
#line 733 "xml_documentation.m"
          check_hlds__xml_documentation__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__ClassDefn_11, (MR_Integer) 9)));
#line 733 "xml_documentation.m"
          {
#line 733 "xml_documentation.m"
            check_hlds__xml_documentation__XmlMethods_23 = check_hlds__xml_documentation__class_methods_to_xml_3_f_0(check_hlds__xml_documentation__C_7, check_hlds__xml_documentation__PredTable_8, check_hlds__xml_documentation__V_38_38);
          }
#line 735 "xml_documentation.m"
          {
#line 735 "xml_documentation.m"
            check_hlds__xml_documentation__XmlVisibility_24 = check_hlds__xml_documentation__visibility_to_xml_1_f_0(check_hlds__xml_documentation__ImportStatus_13);
          }
#line 736 "xml_documentation.m"
          {
#line 736 "xml_documentation.m"
            check_hlds__xml_documentation__XmlContext_25 = check_hlds__xml_documentation__prog_context_to_xml_1_f_0(check_hlds__xml_documentation__Context_16);
          }
#line 738 "xml_documentation.m"
          {
#line 738 "xml_documentation.m"
            check_hlds__xml_documentation__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 738 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_41_41, 0) = ((MR_Box) ((MR_String) "id"));
#line 738 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_41_41, 1) = ((MR_Box) (check_hlds__xml_documentation__Id_15));
#line 738 "xml_documentation.m"
          }
#line 738 "xml_documentation.m"
          {
#line 738 "xml_documentation.m"
            check_hlds__xml_documentation__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 0) = ((MR_Box) (check_hlds__xml_documentation__V_41_41));
#line 738 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 738 "xml_documentation.m"
          }
#line 740 "xml_documentation.m"
          {
#line 740 "xml_documentation.m"
            check_hlds__xml_documentation__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_50_50, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_25));
#line 740 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 740 "xml_documentation.m"
          }
#line 740 "xml_documentation.m"
          {
#line 740 "xml_documentation.m"
            check_hlds__xml_documentation__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_49_49, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_24));
#line 740 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_49_49, 1) = ((MR_Box) (check_hlds__xml_documentation__V_50_50));
#line 740 "xml_documentation.m"
          }
#line 740 "xml_documentation.m"
          {
#line 740 "xml_documentation.m"
            check_hlds__xml_documentation__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlMethods_23));
#line 740 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 1) = ((MR_Box) (check_hlds__xml_documentation__V_49_49));
#line 740 "xml_documentation.m"
          }
#line 740 "xml_documentation.m"
          {
#line 740 "xml_documentation.m"
            check_hlds__xml_documentation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlFundeps_22));
#line 740 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 1) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 740 "xml_documentation.m"
          }
#line 739 "xml_documentation.m"
          {
#line 739 "xml_documentation.m"
            check_hlds__xml_documentation__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlSupers_21));
#line 739 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 1) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 739 "xml_documentation.m"
          }
#line 739 "xml_documentation.m"
          {
#line 739 "xml_documentation.m"
            check_hlds__xml_documentation__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlClassVars_20));
#line 739 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 1) = ((MR_Box) (check_hlds__xml_documentation__V_46_46));
#line 739 "xml_documentation.m"
          }
#line 739 "xml_documentation.m"
          {
#line 739 "xml_documentation.m"
            check_hlds__xml_documentation__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_44_44, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_19));
#line 739 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_44_44, 1) = ((MR_Box) (check_hlds__xml_documentation__V_45_45));
#line 739 "xml_documentation.m"
          }
#line 738 "xml_documentation.m"
          {
#line 738 "xml_documentation.m"
            check_hlds__xml_documentation__Xml0_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 738 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_26, 0) = ((MR_Box) ((MR_String) "typeclass"));
#line 738 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_26, 1) = ((MR_Box) (check_hlds__xml_documentation__V_40_40));
#line 738 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_26, 2) = ((MR_Box) (check_hlds__xml_documentation__V_44_44));
#line 738 "xml_documentation.m"
          }
#line 742 "xml_documentation.m"
          {
#line 742 "xml_documentation.m"
            check_hlds__xml_documentation__Xml_12 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_7, check_hlds__xml_documentation__Context_16, check_hlds__xml_documentation__Xml0_26);
          }
#line 744 "xml_documentation.m"
          {
#line 744 "xml_documentation.m"
            MR_Word base;
#line 744 "xml_documentation.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "xml_documentation.m"
            *check_hlds__xml_documentation__STATE_VARIABLE_Xml_28 = base;
#line 744 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_12));
#line 744 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_27));
#line 744 "xml_documentation.m"
          }
#line 719 "xml_documentation.m"
        }
#line 745 "xml_documentation.m"
        break;
#line 745 "xml_documentation.m"
    }
#line 715 "xml_documentation.m"
  }
#line 711 "xml_documentation.m"
}

#line 692 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__arity_to_xml_1_f_0(
#line 692 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Arity_3)
#line 692 "xml_documentation.m"
{
#line 694 "xml_documentation.m"
  {
#line 694 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 694 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;
#line 694 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_8_8;
#line 694 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_9_9;
#line 694 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_10_10;

#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_10_10 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_3);
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_9_9, 0) = ((MR_Box) (check_hlds__xml_documentation__V_10_10));
#line 848 "xml_documentation.m"
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "xml_documentation.m"
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "arity"));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 848 "xml_documentation.m"
    }
#line 694 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 694 "xml_documentation.m"
  }
#line 692 "xml_documentation.m"
}

#line 663 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__cons_id_to_xml_1_f_0(
#line 663 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__1_1)
#line 663 "xml_documentation.m"
{
#line 665 "xml_documentation.m"
  {
#line 665 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 665 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__2_2;

#line 665 "xml_documentation.m"
#line 665 "xml_documentation.m"
    switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__1_1)) {
#line 665 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 665 "xml_documentation.m"
      case (MR_Integer) 0:
#line 682 "xml_documentation.m"
        {
#line 683 "xml_documentation.m"
          {
#line 683 "xml_documentation.m"
            return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typeclass_info_cell_constructor");
          }
#line 682 "xml_documentation.m"
        }
#line 665 "xml_documentation.m"
        break;
#line 665 "xml_documentation.m"
      case (MR_Integer) 1:
#line 680 "xml_documentation.m"
        {
#line 681 "xml_documentation.m"
          {
#line 681 "xml_documentation.m"
            return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "type_info_cell_constructor");
          }
#line 680 "xml_documentation.m"
        }
#line 665 "xml_documentation.m"
        break;
#line 665 "xml_documentation.m"
      case (MR_Integer) 2:
#line 687 "xml_documentation.m"
        {
#line 687 "xml_documentation.m"
          {
#line 687 "xml_documentation.m"
            return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "tabling_info_const");
          }
#line 687 "xml_documentation.m"
        }
#line 665 "xml_documentation.m"
        break;
#line 665 "xml_documentation.m"
      case (MR_Integer) 3:
#line 665 "xml_documentation.m"
#line 665 "xml_documentation.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 0)))) {
#line 665 "xml_documentation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 665 "xml_documentation.m"
          case (MR_Integer) 0:
#line 688 "xml_documentation.m"
            {
#line 688 "xml_documentation.m"
              {
#line 688 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "table_io_entry_desc");
              }
#line 688 "xml_documentation.m"
            }
#line 665 "xml_documentation.m"
            break;
#line 665 "xml_documentation.m"
          case (MR_Integer) 1:
#line 689 "xml_documentation.m"
            {
#line 690 "xml_documentation.m"
              {
#line 690 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "deep_profiling_proc_layout");
              }
#line 689 "xml_documentation.m"
            }
#line 665 "xml_documentation.m"
            break;
#line 665 "xml_documentation.m"
          case (MR_Integer) 2:
#line 665 "xml_documentation.m"
            {
#line 665 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 665 "xml_documentation.m"
              MR_Integer check_hlds__xml_documentation__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 2)));
#line 665 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_8_8;
#line 665 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_9_9;
#line 665 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_10_10;
#line 665 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_11_11;
#line 665 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_89_89;
#line 665 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_90_90;
#line 665 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_91_91;
#line 665 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 3)));

#line 666 "xml_documentation.m"
              {
#line 666 "xml_documentation.m"
                check_hlds__xml_documentation__V_9_9 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_3);
              }
#line 848 "xml_documentation.m"
              {
#line 848 "xml_documentation.m"
                check_hlds__xml_documentation__V_91_91 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_4);
              }
#line 848 "xml_documentation.m"
              {
#line 848 "xml_documentation.m"
                check_hlds__xml_documentation__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 848 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_90_90, 0) = ((MR_Box) (check_hlds__xml_documentation__V_91_91));
#line 848 "xml_documentation.m"
              }
#line 848 "xml_documentation.m"
              {
#line 848 "xml_documentation.m"
                check_hlds__xml_documentation__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_89_89, 0) = ((MR_Box) (check_hlds__xml_documentation__V_90_90));
#line 848 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "xml_documentation.m"
              }
#line 848 "xml_documentation.m"
              {
#line 848 "xml_documentation.m"
                check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 848 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) ((MR_String) "arity"));
#line 848 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 2) = ((MR_Box) (check_hlds__xml_documentation__V_89_89));
#line 848 "xml_documentation.m"
              }
#line 666 "xml_documentation.m"
              {
#line 666 "xml_documentation.m"
                check_hlds__xml_documentation__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 0) = ((MR_Box) (check_hlds__xml_documentation__V_11_11));
#line 666 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "xml_documentation.m"
              }
#line 666 "xml_documentation.m"
              {
#line 666 "xml_documentation.m"
                check_hlds__xml_documentation__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 0) = ((MR_Box) (check_hlds__xml_documentation__V_9_9));
#line 666 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_8_8, 1) = ((MR_Box) (check_hlds__xml_documentation__V_10_10));
#line 666 "xml_documentation.m"
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
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_8_8));
#line 666 "xml_documentation.m"
              }
#line 665 "xml_documentation.m"
            }
#line 665 "xml_documentation.m"
            break;
#line 665 "xml_documentation.m"
          case (MR_Integer) 3:
#line 669 "xml_documentation.m"
            {
#line 669 "xml_documentation.m"
              MR_Integer check_hlds__xml_documentation__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 669 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_16_16;
#line 669 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_17_17;
#line 669 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_20_20;
#line 669 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_21_21;

#line 670 "xml_documentation.m"
              {
#line 670 "xml_documentation.m"
                check_hlds__xml_documentation__V_17_17 = check_hlds__xml_documentation__name_to_xml_1_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_6[1]);
              }
#line 670 "xml_documentation.m"
              {
#line 670 "xml_documentation.m"
                check_hlds__xml_documentation__V_21_21 = check_hlds__xml_documentation__arity_to_xml_1_f_0(check_hlds__xml_documentation__Arity_13);
              }
#line 670 "xml_documentation.m"
              {
#line 670 "xml_documentation.m"
                check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 670 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "xml_documentation.m"
              }
#line 670 "xml_documentation.m"
              {
#line 670 "xml_documentation.m"
                check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 670 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (check_hlds__xml_documentation__V_20_20));
#line 670 "xml_documentation.m"
              }
#line 670 "xml_documentation.m"
              {
#line 670 "xml_documentation.m"
                check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 670 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "cons"));
#line 670 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 670 "xml_documentation.m"
              }
#line 669 "xml_documentation.m"
            }
#line 665 "xml_documentation.m"
            break;
#line 665 "xml_documentation.m"
          case (MR_Integer) 4:
#line 676 "xml_documentation.m"
            {
#line 860 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[18];
#line 676 "xml_documentation.m"
            }
#line 665 "xml_documentation.m"
            break;
#line 665 "xml_documentation.m"
          case (MR_Integer) 5:
#line 671 "xml_documentation.m"
            {
#line 671 "xml_documentation.m"
              MR_Integer check_hlds__xml_documentation__I_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));

#line 671 "xml_documentation.m"
              {
#line 671 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__tagged_int_2_f_0((MR_String) "int", check_hlds__xml_documentation__I_23);
              }
#line 671 "xml_documentation.m"
            }
#line 665 "xml_documentation.m"
            break;
#line 665 "xml_documentation.m"
          case (MR_Integer) 6:
#line 672 "xml_documentation.m"
            {
#line 672 "xml_documentation.m"
              MR_Float check_hlds__xml_documentation__F_25 = MR_unbox_float((MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));

#line 672 "xml_documentation.m"
              {
#line 672 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__tagged_float_2_f_0((MR_String) "float", check_hlds__xml_documentation__F_25);
              }
#line 672 "xml_documentation.m"
            }
#line 665 "xml_documentation.m"
            break;
#line 665 "xml_documentation.m"
          case (MR_Integer) 7:
#line 673 "xml_documentation.m"
            {
#line 673 "xml_documentation.m"
              MR_Char check_hlds__xml_documentation__C_27 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));
#line 673 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_72_72;
#line 673 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_73_73;
#line 673 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_74_74;

#line 856 "xml_documentation.m"
              {
#line 856 "xml_documentation.m"
                check_hlds__xml_documentation__V_74_74 = mercury__string__char_to_string_1_f_0(check_hlds__xml_documentation__C_27);
              }
#line 856 "xml_documentation.m"
              {
#line 856 "xml_documentation.m"
                check_hlds__xml_documentation__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 856 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_73_73, 0) = ((MR_Box) (check_hlds__xml_documentation__V_74_74));
#line 856 "xml_documentation.m"
              }
#line 856 "xml_documentation.m"
              {
#line 856 "xml_documentation.m"
                check_hlds__xml_documentation__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_72_72, 0) = ((MR_Box) (check_hlds__xml_documentation__V_73_73));
#line 856 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 856 "xml_documentation.m"
              }
#line 856 "xml_documentation.m"
              {
#line 856 "xml_documentation.m"
                check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 856 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 0) = ((MR_Box) ((MR_String) "char"));
#line 856 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 856 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, 2) = ((MR_Box) (check_hlds__xml_documentation__V_72_72));
#line 856 "xml_documentation.m"
              }
#line 673 "xml_documentation.m"
            }
#line 665 "xml_documentation.m"
            break;
#line 665 "xml_documentation.m"
          case (MR_Integer) 8:
#line 674 "xml_documentation.m"
            {
#line 674 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__S_29 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__1_1, (MR_Integer) 1)));

#line 674 "xml_documentation.m"
              {
#line 674 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__tagged_string_2_f_0((MR_String) "string", check_hlds__xml_documentation__S_29);
              }
#line 674 "xml_documentation.m"
            }
#line 665 "xml_documentation.m"
            break;
#line 665 "xml_documentation.m"
          case (MR_Integer) 9:
#line 675 "xml_documentation.m"
            {
#line 675 "xml_documentation.m"
              {
#line 675 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "impl_defined_const");
              }
#line 675 "xml_documentation.m"
            }
#line 665 "xml_documentation.m"
            break;
#line 665 "xml_documentation.m"
          case (MR_Integer) 10:
#line 677 "xml_documentation.m"
            {
#line 677 "xml_documentation.m"
              {
#line 677 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "type_ctor_info_const");
              }
#line 677 "xml_documentation.m"
            }
#line 665 "xml_documentation.m"
            break;
#line 665 "xml_documentation.m"
          case (MR_Integer) 11:
#line 678 "xml_documentation.m"
            {
#line 860 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__2_2 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[17];
#line 678 "xml_documentation.m"
            }
#line 665 "xml_documentation.m"
            break;
#line 665 "xml_documentation.m"
          case (MR_Integer) 12:
#line 684 "xml_documentation.m"
            {
#line 684 "xml_documentation.m"
              {
#line 684 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "type_info_const");
              }
#line 684 "xml_documentation.m"
            }
#line 665 "xml_documentation.m"
            break;
#line 665 "xml_documentation.m"
          case (MR_Integer) 13:
#line 685 "xml_documentation.m"
            {
#line 685 "xml_documentation.m"
              {
#line 685 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typeclass_info_const");
              }
#line 685 "xml_documentation.m"
            }
#line 665 "xml_documentation.m"
            break;
#line 665 "xml_documentation.m"
          case (MR_Integer) 14:
#line 686 "xml_documentation.m"
            {
#line 686 "xml_documentation.m"
              {
#line 686 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__2_2 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "ground_term_const");
              }
#line 686 "xml_documentation.m"
            }
#line 665 "xml_documentation.m"
            break;
#line 665 "xml_documentation.m"
        }
#line 665 "xml_documentation.m"
        break;
#line 665 "xml_documentation.m"
    }
#line 665 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__2_2;
#line 665 "xml_documentation.m"
  }
#line 663 "xml_documentation.m"
}

#line 660 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0_1(
#line 660 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 660 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 660 "xml_documentation.m"
{
#line 660 "xml_documentation.m"
  {
#line 660 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 660 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 660 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 660 "xml_documentation.m"
    {
#line 660 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 660 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 660 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 660 "xml_documentation.m"
  }
#line 660 "xml_documentation.m"
}

#line 656 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__bound_inst_to_xml_2_f_0(
#line 656 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 656 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 656 "xml_documentation.m"
{
#line 658 "xml_documentation.m"
  {
#line 658 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 658 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_7;
#line 658 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ConsId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 658 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 658 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlCons_8;
#line 658 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlInsts_9;
#line 658 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11;
#line 658 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_14_14;
#line 658 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_15_15;
#line 658 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_24_24;

#line 659 "xml_documentation.m"
    {
#line 659 "xml_documentation.m"
      check_hlds__xml_documentation__XmlCons_8 = check_hlds__xml_documentation__cons_id_to_xml_1_f_0(check_hlds__xml_documentation__ConsId_5);
    }
#line 660 "xml_documentation.m"
    {
#line 660 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 660 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[3]));
#line 660 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 1) = ((MR_Box) (check_hlds__xml_documentation__bound_inst_to_xml_2_f_0_1));
#line 660 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 660 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
#line 660 "xml_documentation.m"
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__V_24_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__Insts_6);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__XmlInsts_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_9, 0) = ((MR_Box) ((MR_String) "insts"));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 866 "xml_documentation.m"
    }
#line 661 "xml_documentation.m"
    {
#line 661 "xml_documentation.m"
      check_hlds__xml_documentation__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_15_15, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlInsts_9));
#line 661 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 661 "xml_documentation.m"
    }
#line 661 "xml_documentation.m"
    {
#line 661 "xml_documentation.m"
      check_hlds__xml_documentation__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_14_14, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlCons_8));
#line 661 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_14_14, 1) = ((MR_Box) (check_hlds__xml_documentation__V_15_15));
#line 661 "xml_documentation.m"
    }
#line 661 "xml_documentation.m"
    {
#line 661 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 661 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 0) = ((MR_Box) ((MR_String) "bound_functor"));
#line 661 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 661 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 2) = ((MR_Box) (check_hlds__xml_documentation__V_14_14));
#line 661 "xml_documentation.m"
    }
#line 658 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_7;
#line 658 "xml_documentation.m"
  }
#line 656 "xml_documentation.m"
}

#line 641 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0_1(
#line 641 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 641 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 641 "xml_documentation.m"
{
#line 641 "xml_documentation.m"
  {
#line 641 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 641 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 641 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 641 "xml_documentation.m"
    {
#line 641 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 641 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 641 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 641 "xml_documentation.m"
  }
#line 641 "xml_documentation.m"
}

#line 636 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__inst_name_to_xml_2_f_0(
#line 636 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_1,
#line 636 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 636 "xml_documentation.m"
{
#line 638 "xml_documentation.m"
  {
#line 638 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 638 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;

#line 638 "xml_documentation.m"
#line 638 "xml_documentation.m"
    switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) {
#line 638 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 638 "xml_documentation.m"
      case (MR_Integer) 0:
#line 638 "xml_documentation.m"
        {
#line 638 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Name_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 638 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 638 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Ref_8;
#line 638 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlName_9;
#line 638 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlInsts_10;
#line 638 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_12_12;
#line 638 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__V_14_14;
#line 638 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_16_16;
#line 638 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_18_18;
#line 638 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_20_20;
#line 638 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_21_21;

#line 639 "xml_documentation.m"
          {
#line 639 "xml_documentation.m"
            check_hlds__xml_documentation__V_14_14 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__xml_documentation__Insts_6);
          }
#line 639 "xml_documentation.m"
          {
#line 639 "xml_documentation.m"
            check_hlds__xml_documentation__V_12_12 = check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0((MR_String) "inst", check_hlds__xml_documentation__Name_5, check_hlds__xml_documentation__V_14_14);
          }
#line 639 "xml_documentation.m"
          {
#line 639 "xml_documentation.m"
            check_hlds__xml_documentation__Ref_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 639 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_8, 0) = ((MR_Box) ((MR_String) "ref"));
#line 639 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_8, 1) = ((MR_Box) (check_hlds__xml_documentation__V_12_12));
#line 639 "xml_documentation.m"
          }
#line 640 "xml_documentation.m"
          {
#line 640 "xml_documentation.m"
            check_hlds__xml_documentation__XmlName_9 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_5);
          }
#line 641 "xml_documentation.m"
          {
#line 641 "xml_documentation.m"
            check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 641 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[3]));
#line 641 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (check_hlds__xml_documentation__inst_name_to_xml_2_f_0_1));
#line 641 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 641 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_1));
#line 641 "xml_documentation.m"
          }
#line 641 "xml_documentation.m"
          {
#line 641 "xml_documentation.m"
            check_hlds__xml_documentation__XmlInsts_10 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_54_95_95_91_49_93_95_48_3_f_0((MR_String) "inst_args", check_hlds__xml_documentation__V_16_16, check_hlds__xml_documentation__Insts_6);
          }
#line 642 "xml_documentation.m"
          {
#line 642 "xml_documentation.m"
            check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (check_hlds__xml_documentation__Ref_8));
#line 642 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "xml_documentation.m"
          }
#line 642 "xml_documentation.m"
          {
#line 642 "xml_documentation.m"
            check_hlds__xml_documentation__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlInsts_10));
#line 642 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "xml_documentation.m"
          }
#line 642 "xml_documentation.m"
          {
#line 642 "xml_documentation.m"
            check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_9));
#line 642 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (check_hlds__xml_documentation__V_21_21));
#line 642 "xml_documentation.m"
          }
#line 642 "xml_documentation.m"
          {
#line 642 "xml_documentation.m"
            check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 642 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "user_inst"));
#line 642 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__xml_documentation__V_18_18));
#line 642 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_20_20));
#line 642 "xml_documentation.m"
          }
#line 638 "xml_documentation.m"
        }
#line 638 "xml_documentation.m"
        break;
#line 638 "xml_documentation.m"
      case (MR_Integer) 1:
#line 643 "xml_documentation.m"
        {
#line 643 "xml_documentation.m"
          {
#line 643 "xml_documentation.m"
            return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "unify_inst");
          }
#line 643 "xml_documentation.m"
        }
#line 638 "xml_documentation.m"
        break;
#line 638 "xml_documentation.m"
      case (MR_Integer) 2:
#line 644 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[15];
#line 644 "xml_documentation.m"
        }
#line 638 "xml_documentation.m"
        break;
#line 638 "xml_documentation.m"
      case (MR_Integer) 3:
#line 638 "xml_documentation.m"
#line 638 "xml_documentation.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)))) {
#line 638 "xml_documentation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 638 "xml_documentation.m"
          case (MR_Integer) 0:
#line 645 "xml_documentation.m"
            {
#line 860 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[14];
#line 645 "xml_documentation.m"
            }
#line 638 "xml_documentation.m"
            break;
#line 638 "xml_documentation.m"
          case (MR_Integer) 1:
#line 646 "xml_documentation.m"
            {
#line 860 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[13];
#line 646 "xml_documentation.m"
            }
#line 638 "xml_documentation.m"
            break;
#line 638 "xml_documentation.m"
          case (MR_Integer) 2:
#line 647 "xml_documentation.m"
            {
#line 647 "xml_documentation.m"
              {
#line 647 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "shared_inst");
              }
#line 647 "xml_documentation.m"
            }
#line 638 "xml_documentation.m"
            break;
#line 638 "xml_documentation.m"
          case (MR_Integer) 3:
#line 648 "xml_documentation.m"
            {
#line 860 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[16];
#line 648 "xml_documentation.m"
            }
#line 638 "xml_documentation.m"
            break;
#line 638 "xml_documentation.m"
          case (MR_Integer) 4:
#line 649 "xml_documentation.m"
            {
#line 649 "xml_documentation.m"
              {
#line 649 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typed_ground");
              }
#line 649 "xml_documentation.m"
            }
#line 638 "xml_documentation.m"
            break;
#line 638 "xml_documentation.m"
          case (MR_Integer) 5:
#line 650 "xml_documentation.m"
            {
#line 650 "xml_documentation.m"
              {
#line 650 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "typed_inst");
              }
#line 650 "xml_documentation.m"
            }
#line 638 "xml_documentation.m"
            break;
#line 638 "xml_documentation.m"
        }
#line 638 "xml_documentation.m"
        break;
#line 638 "xml_documentation.m"
    }
#line 638 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_3;
#line 638 "xml_documentation.m"
  }
#line 636 "xml_documentation.m"
}

#line 606 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_1(
#line 606 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 606 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 606 "xml_documentation.m"
{
#line 606 "xml_documentation.m"
  {
#line 606 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 606 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 606 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_7;

#line 606 "xml_documentation.m"
    {
#line 606 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_7 = check_hlds__xml_documentation__bound_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 606 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_7));
#line 606 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 606 "xml_documentation.m"
  }
#line 606 "xml_documentation.m"
}

#line 594 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(
#line 594 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 594 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Inst_5)
#line 594 "xml_documentation.m"
{
#line 598 "xml_documentation.m"
  while (MR_TRUE)
#line 598 "xml_documentation.m"
    {
#line 598 "xml_documentation.m"
      /* tailcall optimized into a loop */
#line 598 "xml_documentation.m"
      {
#line 598 "xml_documentation.m"
        MR_bool check_hlds__xml_documentation__succeeded;
#line 598 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Xml_6;

#line 598 "xml_documentation.m"
#line 598 "xml_documentation.m"
        switch (MR_tag((MR_Word) check_hlds__xml_documentation__Inst_5)) {
#line 598 "xml_documentation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 598 "xml_documentation.m"
          case (MR_Integer) 0:
#line 598 "xml_documentation.m"
#line 598 "xml_documentation.m"
            switch (MR_unmkbody(check_hlds__xml_documentation__Inst_5)) {
#line 598 "xml_documentation.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 598 "xml_documentation.m"
              case (MR_Integer) 0:
#line 598 "xml_documentation.m"
                {
#line 599 "xml_documentation.m"
                  check_hlds__xml_documentation__Xml_6 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[11];
#line 598 "xml_documentation.m"
                }
#line 598 "xml_documentation.m"
                break;
#line 598 "xml_documentation.m"
              case (MR_Integer) 1:
#line 616 "xml_documentation.m"
                {
#line 617 "xml_documentation.m"
                  check_hlds__xml_documentation__Xml_6 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[12];
#line 616 "xml_documentation.m"
                }
#line 598 "xml_documentation.m"
                break;
#line 598 "xml_documentation.m"
            }
#line 598 "xml_documentation.m"
            break;
#line 598 "xml_documentation.m"
          case (MR_Integer) 1:
#line 601 "xml_documentation.m"
            {
#line 602 "xml_documentation.m"
              check_hlds__xml_documentation__Xml_6 = (MR_Word) &check_hlds__xml_documentation_scalar_common_2[11];
#line 601 "xml_documentation.m"
            }
#line 598 "xml_documentation.m"
            break;
#line 598 "xml_documentation.m"
          case (MR_Integer) 2:
#line 613 "xml_documentation.m"
            {
#line 613 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_35_35;
#line 613 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_36_36;
#line 613 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__U_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__Inst_5, (MR_Integer) 0)));
#line 613 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_64_64;
#line 613 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_69_69;
#line 613 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_70_70;
#line 613 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));

#line 654 "xml_documentation.m"
              {
#line 654 "xml_documentation.m"
                check_hlds__xml_documentation__V_64_64 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0, ((MR_Box) (check_hlds__xml_documentation__U_57)));
              }
#line 860 "xml_documentation.m"
              {
#line 860 "xml_documentation.m"
                check_hlds__xml_documentation__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_70_70, 0) = ((MR_Box) (check_hlds__xml_documentation__V_64_64));
#line 860 "xml_documentation.m"
              }
#line 860 "xml_documentation.m"
              {
#line 860 "xml_documentation.m"
                check_hlds__xml_documentation__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_69_69, 0) = ((MR_Box) (check_hlds__xml_documentation__V_70_70));
#line 860 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
              }
#line 860 "xml_documentation.m"
              {
#line 860 "xml_documentation.m"
                check_hlds__xml_documentation__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 0) = ((MR_Box) ((MR_String) "uniqueness"));
#line 860 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_36_36, 2) = ((MR_Box) (check_hlds__xml_documentation__V_69_69));
#line 860 "xml_documentation.m"
              }
#line 614 "xml_documentation.m"
              {
#line 614 "xml_documentation.m"
                check_hlds__xml_documentation__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_35_35, 0) = ((MR_Box) (check_hlds__xml_documentation__V_36_36));
#line 614 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "xml_documentation.m"
              }
#line 614 "xml_documentation.m"
              {
#line 614 "xml_documentation.m"
                check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 614 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "any"));
#line 614 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_35_35));
#line 614 "xml_documentation.m"
              }
#line 613 "xml_documentation.m"
            }
#line 598 "xml_documentation.m"
            break;
#line 598 "xml_documentation.m"
          case (MR_Integer) 3:
#line 598 "xml_documentation.m"
#line 598 "xml_documentation.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 0)))) {
#line 598 "xml_documentation.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 598 "xml_documentation.m"
              case (MR_Integer) 0:
#line 604 "xml_documentation.m"
                {
#line 604 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__U_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
#line 604 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 3)));
#line 604 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__XmlUniq_11;
#line 604 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__XmlInsts_12;
#line 604 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_44_44;
#line 604 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_47_47;
#line 604 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_48_48;
#line 604 "xml_documentation.m"
                  MR_String check_hlds__xml_documentation__V_74_74;
#line 604 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_79_79;
#line 604 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_80_80;
#line 604 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_86_86;
#line 604 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));

#line 654 "xml_documentation.m"
                  {
#line 654 "xml_documentation.m"
                    check_hlds__xml_documentation__V_74_74 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0, ((MR_Box) (check_hlds__xml_documentation__U_8)));
                  }
#line 860 "xml_documentation.m"
                  {
#line 860 "xml_documentation.m"
                    check_hlds__xml_documentation__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_80_80, 0) = ((MR_Box) (check_hlds__xml_documentation__V_74_74));
#line 860 "xml_documentation.m"
                  }
#line 860 "xml_documentation.m"
                  {
#line 860 "xml_documentation.m"
                    check_hlds__xml_documentation__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_79_79, 0) = ((MR_Box) (check_hlds__xml_documentation__V_80_80));
#line 860 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
                  }
#line 860 "xml_documentation.m"
                  {
#line 860 "xml_documentation.m"
                    check_hlds__xml_documentation__XmlUniq_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUniq_11, 0) = ((MR_Box) ((MR_String) "uniqueness"));
#line 860 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUniq_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUniq_11, 2) = ((MR_Box) (check_hlds__xml_documentation__V_79_79));
#line 860 "xml_documentation.m"
                  }
#line 606 "xml_documentation.m"
                  {
#line 606 "xml_documentation.m"
                    check_hlds__xml_documentation__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 606 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_44_44, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[4]));
#line 606 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_44_44, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_inst_to_xml_2_f_0_1));
#line 606 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 606 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_44_44, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
#line 606 "xml_documentation.m"
                  }
#line 866 "xml_documentation.m"
                  {
#line 866 "xml_documentation.m"
                    check_hlds__xml_documentation__V_86_86 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_44_44, check_hlds__xml_documentation__BoundInsts_10);
                  }
#line 866 "xml_documentation.m"
                  {
#line 866 "xml_documentation.m"
                    check_hlds__xml_documentation__XmlInsts_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_12, 0) = ((MR_Box) ((MR_String) "bound_insts"));
#line 866 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlInsts_12, 2) = ((MR_Box) (check_hlds__xml_documentation__V_86_86));
#line 866 "xml_documentation.m"
                  }
#line 608 "xml_documentation.m"
                  {
#line 608 "xml_documentation.m"
                    check_hlds__xml_documentation__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlInsts_12));
#line 608 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 608 "xml_documentation.m"
                  }
#line 608 "xml_documentation.m"
                  {
#line 608 "xml_documentation.m"
                    check_hlds__xml_documentation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlUniq_11));
#line 608 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 1) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 608 "xml_documentation.m"
                  }
#line 608 "xml_documentation.m"
                  {
#line 608 "xml_documentation.m"
                    check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 608 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "bound"));
#line 608 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 608 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 608 "xml_documentation.m"
                  }
#line 604 "xml_documentation.m"
                }
#line 598 "xml_documentation.m"
                break;
#line 598 "xml_documentation.m"
              case (MR_Integer) 1:
#line 610 "xml_documentation.m"
                {
#line 610 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_40_40;
#line 610 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_41_41;
#line 610 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__U_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
#line 610 "xml_documentation.m"
                  MR_String check_hlds__xml_documentation__V_91_91;
#line 610 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_96_96;
#line 610 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_97_97;
#line 610 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));

#line 654 "xml_documentation.m"
                  {
#line 654 "xml_documentation.m"
                    check_hlds__xml_documentation__V_91_91 = mercury__string__string_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uniqueness_0, ((MR_Box) (check_hlds__xml_documentation__U_56)));
                  }
#line 860 "xml_documentation.m"
                  {
#line 860 "xml_documentation.m"
                    check_hlds__xml_documentation__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_97_97, 0) = ((MR_Box) (check_hlds__xml_documentation__V_91_91));
#line 860 "xml_documentation.m"
                  }
#line 860 "xml_documentation.m"
                  {
#line 860 "xml_documentation.m"
                    check_hlds__xml_documentation__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_96_96, 0) = ((MR_Box) (check_hlds__xml_documentation__V_97_97));
#line 860 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
                  }
#line 860 "xml_documentation.m"
                  {
#line 860 "xml_documentation.m"
                    check_hlds__xml_documentation__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_41_41, 0) = ((MR_Box) ((MR_String) "uniqueness"));
#line 860 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_41_41, 2) = ((MR_Box) (check_hlds__xml_documentation__V_96_96));
#line 860 "xml_documentation.m"
                  }
#line 611 "xml_documentation.m"
                  {
#line 611 "xml_documentation.m"
                    check_hlds__xml_documentation__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 0) = ((MR_Box) (check_hlds__xml_documentation__V_41_41));
#line 611 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "xml_documentation.m"
                  }
#line 611 "xml_documentation.m"
                  {
#line 611 "xml_documentation.m"
                    check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 611 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "ground"));
#line 611 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_40_40));
#line 611 "xml_documentation.m"
                  }
#line 610 "xml_documentation.m"
                }
#line 598 "xml_documentation.m"
                break;
#line 598 "xml_documentation.m"
              case (MR_Integer) 2:
#line 619 "xml_documentation.m"
                {
#line 619 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__InstVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
#line 619 "xml_documentation.m"
                  MR_String check_hlds__xml_documentation__InstVarName_16;

#line 620 "xml_documentation.m"
                  {
#line 620 "xml_documentation.m"
                    check_hlds__xml_documentation__InstVarName_16 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, check_hlds__xml_documentation__InstVarSet_4, check_hlds__xml_documentation__InstVar_15);
                  }
#line 621 "xml_documentation.m"
                  {
#line 621 "xml_documentation.m"
                    return check_hlds__xml_documentation__Xml_6 = check_hlds__xml_documentation__tagged_string_2_f_0((MR_String) "inst_var", check_hlds__xml_documentation__InstVarName_16);
                  }
#line 619 "xml_documentation.m"
                }
#line 598 "xml_documentation.m"
                break;
#line 598 "xml_documentation.m"
              case (MR_Integer) 3:
#line 623 "xml_documentation.m"
                {
#line 623 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__SubInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));
#line 623 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));

#line 625 "xml_documentation.m"
                  /* direct tailcall eliminated */
#line 625 "xml_documentation.m"
                  {
#line 625 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__Inst__tmp_copy_5 = check_hlds__xml_documentation__SubInst_18;

#line 625 "xml_documentation.m"
                    check_hlds__xml_documentation__Inst_5 = check_hlds__xml_documentation__Inst__tmp_copy_5;
#line 625 "xml_documentation.m"
                  }
#line 625 "xml_documentation.m"
                  continue;
#line 623 "xml_documentation.m"
                }
#line 598 "xml_documentation.m"
                break;
#line 598 "xml_documentation.m"
              case (MR_Integer) 4:
#line 627 "xml_documentation.m"
                {
#line 627 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
#line 627 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__XmlName_20;
#line 627 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_27_27;

#line 628 "xml_documentation.m"
                  {
#line 628 "xml_documentation.m"
                    check_hlds__xml_documentation__XmlName_20 = check_hlds__xml_documentation__inst_name_to_xml_2_f_0(check_hlds__xml_documentation__InstVarSet_4, check_hlds__xml_documentation__Name_19);
                  }
#line 629 "xml_documentation.m"
                  {
#line 629 "xml_documentation.m"
                    check_hlds__xml_documentation__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_27_27, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_20));
#line 629 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 629 "xml_documentation.m"
                  }
#line 629 "xml_documentation.m"
                  {
#line 629 "xml_documentation.m"
                    check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 629 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "defined_inst"));
#line 629 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 629 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_27_27));
#line 629 "xml_documentation.m"
                  }
#line 627 "xml_documentation.m"
                }
#line 598 "xml_documentation.m"
                break;
#line 598 "xml_documentation.m"
              case (MR_Integer) 5:
#line 631 "xml_documentation.m"
                {
#line 631 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 1)));
#line 631 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__ArgInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__Inst_5, (MR_Integer) 2)));
#line 631 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_23_23;
#line 631 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_24_24;

#line 633 "xml_documentation.m"
                  {
#line 633 "xml_documentation.m"
                    check_hlds__xml_documentation__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 633 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_24_24, 0) = ((MR_Box) (check_hlds__xml_documentation__SymName_21));
#line 633 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_24_24, 1) = ((MR_Box) (check_hlds__xml_documentation__ArgInsts_22));
#line 633 "xml_documentation.m"
                  }
#line 633 "xml_documentation.m"
                  {
#line 633 "xml_documentation.m"
                    check_hlds__xml_documentation__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "xml_documentation.m"
                    MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 633 "xml_documentation.m"
                    MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__V_23_23, 1) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 633 "xml_documentation.m"
                  }
#line 632 "xml_documentation.m"
                  /* direct tailcall eliminated */
#line 632 "xml_documentation.m"
                  {
#line 632 "xml_documentation.m"
                    MR_Word check_hlds__xml_documentation__Inst__tmp_copy_5 = check_hlds__xml_documentation__V_23_23;

#line 632 "xml_documentation.m"
                    check_hlds__xml_documentation__Inst_5 = check_hlds__xml_documentation__Inst__tmp_copy_5;
#line 632 "xml_documentation.m"
                  }
#line 632 "xml_documentation.m"
                  continue;
#line 631 "xml_documentation.m"
                }
#line 598 "xml_documentation.m"
                break;
#line 598 "xml_documentation.m"
            }
#line 598 "xml_documentation.m"
            break;
#line 598 "xml_documentation.m"
        }
#line 598 "xml_documentation.m"
        return check_hlds__xml_documentation__Xml_6;
#line 598 "xml_documentation.m"
      }
#line 598 "xml_documentation.m"
      break;
#line 598 "xml_documentation.m"
    }
#line 594 "xml_documentation.m"
}

#line 590 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_2(
#line 590 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 590 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 590 "xml_documentation.m"
{
#line 590 "xml_documentation.m"
  {
#line 590 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 590 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 590 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_Xml_6;

#line 590 "xml_documentation.m"
    {
#line 590 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 590 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_Xml_6));
#line 590 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 590 "xml_documentation.m"
  }
#line 590 "xml_documentation.m"
}

#line 583 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_1(
#line 583 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 583 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 583 "xml_documentation.m"
{
#line 583 "xml_documentation.m"
  {
#line 583 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 583 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 583 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 583 "xml_documentation.m"
    {
#line 583 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__mer_inst_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 583 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 583 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 583 "xml_documentation.m"
  }
#line 583 "xml_documentation.m"
}

#line 578 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_mode_to_xml_2_f_0(
#line 578 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InstVarSet_4,
#line 578 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Mode_5)
#line 578 "xml_documentation.m"
{
#line 582 "xml_documentation.m"
  {
#line 582 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 582 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_6;

#line 582 "xml_documentation.m"
    if (((MR_tag((MR_Word) check_hlds__xml_documentation__Mode_5)) == (MR_mktag((MR_Integer) 0))))
#line 582 "xml_documentation.m"
      {
#line 582 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__A_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Mode_5, (MR_Integer) 0)));
#line 582 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Mode_5, (MR_Integer) 1)));
#line 582 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlFrom_9;
#line 582 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlTo_10;
#line 582 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_29_29;
#line 582 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_30_30;
#line 582 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_34_34;
#line 582 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_38_38;
#line 582 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_39_39;
#line 582 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_53_53;
#line 582 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_60_60;

#line 583 "xml_documentation.m"
        {
#line 583 "xml_documentation.m"
          check_hlds__xml_documentation__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 583 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[3]));
#line 583 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_1));
#line 583 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 583 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
#line 583 "xml_documentation.m"
        }
#line 583 "xml_documentation.m"
        {
#line 583 "xml_documentation.m"
          check_hlds__xml_documentation__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_30_30, 0) = ((MR_Box) (check_hlds__xml_documentation__A_7));
#line 583 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 583 "xml_documentation.m"
        }
#line 866 "xml_documentation.m"
        {
#line 866 "xml_documentation.m"
          check_hlds__xml_documentation__V_53_53 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_29_29, check_hlds__xml_documentation__V_30_30);
        }
#line 866 "xml_documentation.m"
        {
#line 866 "xml_documentation.m"
          check_hlds__xml_documentation__XmlFrom_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlFrom_9, 0) = ((MR_Box) ((MR_String) "from"));
#line 866 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlFrom_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlFrom_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_53_53));
#line 866 "xml_documentation.m"
        }
#line 584 "xml_documentation.m"
        {
#line 584 "xml_documentation.m"
          check_hlds__xml_documentation__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 0) = ((MR_Box) (check_hlds__xml_documentation__B_8));
#line 584 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "xml_documentation.m"
        }
#line 866 "xml_documentation.m"
        {
#line 866 "xml_documentation.m"
          check_hlds__xml_documentation__V_60_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_29_29, check_hlds__xml_documentation__V_34_34);
        }
#line 866 "xml_documentation.m"
        {
#line 866 "xml_documentation.m"
          check_hlds__xml_documentation__XmlTo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTo_10, 0) = ((MR_Box) ((MR_String) "to"));
#line 866 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTo_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTo_10, 2) = ((MR_Box) (check_hlds__xml_documentation__V_60_60));
#line 866 "xml_documentation.m"
        }
#line 585 "xml_documentation.m"
        {
#line 585 "xml_documentation.m"
          check_hlds__xml_documentation__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_39_39, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTo_10));
#line 585 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "xml_documentation.m"
        }
#line 585 "xml_documentation.m"
        {
#line 585 "xml_documentation.m"
          check_hlds__xml_documentation__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlFrom_9));
#line 585 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 1) = ((MR_Box) (check_hlds__xml_documentation__V_39_39));
#line 585 "xml_documentation.m"
        }
#line 585 "xml_documentation.m"
        {
#line 585 "xml_documentation.m"
          check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 585 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "inst_to_inst"));
#line 585 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_38_38));
#line 585 "xml_documentation.m"
        }
#line 582 "xml_documentation.m"
      }
#line 582 "xml_documentation.m"
    else
#line 587 "xml_documentation.m"
      {
#line 587 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Mode_5, (MR_Integer) 0)));
#line 587 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Mode_5, (MR_Integer) 1)));
#line 587 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Ref_13;
#line 587 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__XmlArgs_14;
#line 587 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_16_16;
#line 587 "xml_documentation.m"
        MR_Integer check_hlds__xml_documentation__V_18_18;
#line 587 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_20_20;
#line 587 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_22_22;
#line 587 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_24_24;
#line 587 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_25_25;
#line 587 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_26_26;
#line 587 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_66_66;
#line 587 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_67_67;
#line 587 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_69_69;
#line 587 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_72_72;
#line 587 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_74_74;
#line 587 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_79_79;

#line 589 "xml_documentation.m"
        {
#line 589 "xml_documentation.m"
          check_hlds__xml_documentation__V_18_18 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__xml_documentation__Args_12);
        }
#line 841 "xml_documentation.m"
        {
#line 841 "xml_documentation.m"
          check_hlds__xml_documentation__V_74_74 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Name_11);
        }
#line 841 "xml_documentation.m"
        {
#line 841 "xml_documentation.m"
          check_hlds__xml_documentation__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_74_74);
        }
#line 841 "xml_documentation.m"
        {
#line 841 "xml_documentation.m"
          check_hlds__xml_documentation__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "mode", check_hlds__xml_documentation__V_72_72);
        }
#line 837 "xml_documentation.m"
        {
#line 837 "xml_documentation.m"
          check_hlds__xml_documentation__V_69_69 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__V_18_18);
        }
#line 837 "xml_documentation.m"
        {
#line 837 "xml_documentation.m"
          check_hlds__xml_documentation__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_69_69);
        }
#line 837 "xml_documentation.m"
        {
#line 837 "xml_documentation.m"
          check_hlds__xml_documentation__V_16_16 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_66_66, check_hlds__xml_documentation__V_67_67);
        }
#line 588 "xml_documentation.m"
        {
#line 588 "xml_documentation.m"
          check_hlds__xml_documentation__Ref_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 588 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_13, 0) = ((MR_Box) ((MR_String) "ref"));
#line 588 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_13, 1) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 588 "xml_documentation.m"
        }
#line 590 "xml_documentation.m"
        {
#line 590 "xml_documentation.m"
          check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 590 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[3]));
#line 590 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_mode_to_xml_2_f_0_2));
#line 590 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 590 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 3) = ((MR_Box) (check_hlds__xml_documentation__InstVarSet_4));
#line 590 "xml_documentation.m"
        }
#line 866 "xml_documentation.m"
        {
#line 866 "xml_documentation.m"
          check_hlds__xml_documentation__V_79_79 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_20_20, check_hlds__xml_documentation__Args_12);
        }
#line 866 "xml_documentation.m"
        {
#line 866 "xml_documentation.m"
          check_hlds__xml_documentation__XmlArgs_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_14, 0) = ((MR_Box) ((MR_String) "mode_args"));
#line 866 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_14, 2) = ((MR_Box) (check_hlds__xml_documentation__V_79_79));
#line 866 "xml_documentation.m"
        }
#line 591 "xml_documentation.m"
        {
#line 591 "xml_documentation.m"
          check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__Ref_13));
#line 591 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 591 "xml_documentation.m"
        }
#line 591 "xml_documentation.m"
        {
#line 591 "xml_documentation.m"
          check_hlds__xml_documentation__V_25_25 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_11);
        }
#line 591 "xml_documentation.m"
        {
#line 591 "xml_documentation.m"
          check_hlds__xml_documentation__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_14));
#line 591 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 591 "xml_documentation.m"
        }
#line 591 "xml_documentation.m"
        {
#line 591 "xml_documentation.m"
          check_hlds__xml_documentation__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 0) = ((MR_Box) (check_hlds__xml_documentation__V_25_25));
#line 591 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 1) = ((MR_Box) (check_hlds__xml_documentation__V_26_26));
#line 591 "xml_documentation.m"
        }
#line 591 "xml_documentation.m"
        {
#line 591 "xml_documentation.m"
          check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 591 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "user_defined_mode"));
#line 591 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (check_hlds__xml_documentation__V_22_22));
#line 591 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 591 "xml_documentation.m"
        }
#line 587 "xml_documentation.m"
      }
#line 582 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_6;
#line 582 "xml_documentation.m"
  }
#line 578 "xml_documentation.m"
}

#line 563 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__pred_mode_documentation_5_p_0(
#line 563 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation___C_6,
#line 563 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation___ProcId_7,
#line 563 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ProcInfo_8,
#line 563 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15,
#line 563 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_16)
#line 563 "xml_documentation.m"
{
#line 566 "xml_documentation.m"
  {
#line 566 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;

#line 566 "xml_documentation.m"
    {
#line 566 "xml_documentation.m"
      check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_109_111_100_101_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_49_44_32_50_93_95_48_5_p_0(check_hlds__xml_documentation__ProcInfo_8, check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_15, check_hlds__xml_documentation__STATE_VARIABLE_Xml_16);
#line 566 "xml_documentation.m"
      return;
    }
#line 566 "xml_documentation.m"
  }
#line 563 "xml_documentation.m"
}

#line 555 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0_1(
#line 555 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 555 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 555 "xml_documentation.m"
{
#line 555 "xml_documentation.m"
  {
#line 555 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 555 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 555 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 555 "xml_documentation.m"
    {
#line 555 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 555 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 555 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 555 "xml_documentation.m"
  }
#line 555 "xml_documentation.m"
}

#line 551 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0(
#line 551 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 551 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 551 "xml_documentation.m"
{
#line 553 "xml_documentation.m"
  {
#line 553 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 553 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_7;
#line 553 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Univs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 553 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Exists_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 553 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlUnivs_8;
#line 553 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlExists_9;
#line 553 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11;
#line 553 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_16_16;
#line 553 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;
#line 553 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_28_28;
#line 553 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_35_35;

#line 555 "xml_documentation.m"
    {
#line 555 "xml_documentation.m"
      check_hlds__xml_documentation__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 555 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[1]));
#line 555 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 1) = ((MR_Box) (check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0_1));
#line 555 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 555 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_11_11, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_4));
#line 555 "xml_documentation.m"
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__V_28_28 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__Univs_5);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__XmlUnivs_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUnivs_8, 0) = ((MR_Box) ((MR_String) "pred_universal"));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUnivs_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlUnivs_8, 2) = ((MR_Box) (check_hlds__xml_documentation__V_28_28));
#line 866 "xml_documentation.m"
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__V_35_35 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__Exists_6);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__XmlExists_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlExists_9, 0) = ((MR_Box) ((MR_String) "pred_exist"));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlExists_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlExists_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_35_35));
#line 866 "xml_documentation.m"
    }
#line 558 "xml_documentation.m"
    {
#line 558 "xml_documentation.m"
      check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlExists_9));
#line 558 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "xml_documentation.m"
    }
#line 558 "xml_documentation.m"
    {
#line 558 "xml_documentation.m"
      check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlUnivs_8));
#line 558 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 558 "xml_documentation.m"
    }
#line 558 "xml_documentation.m"
    {
#line 558 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 558 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 0) = ((MR_Box) ((MR_String) "pred_constraints"));
#line 558 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, 2) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 558 "xml_documentation.m"
    }
#line 553 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_7;
#line 553 "xml_documentation.m"
  }
#line 551 "xml_documentation.m"
}

#line 525 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_3(
#line 525 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 525 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1,
#line 525 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_2,
#line 525 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_3,
#line 525 "xml_documentation.m"
  MR_Box * check_hlds__xml_documentation__wrapper_arg_4)
#line 525 "xml_documentation.m"
{
#line 525 "xml_documentation.m"
  {
#line 525 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 525 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv3_STATE_VARIABLE_Xml_16;

#line 525 "xml_documentation.m"
    {
#line 525 "xml_documentation.m"
      check_hlds__xml_documentation__pred_mode_documentation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Integer) check_hlds__xml_documentation__wrapper_arg_1), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_2), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_3), &check_hlds__xml_documentation__conv3_STATE_VARIABLE_Xml_16);
    }
#line 525 "xml_documentation.m"
    *check_hlds__xml_documentation__wrapper_arg_4 = ((MR_Box) (check_hlds__xml_documentation__conv3_STATE_VARIABLE_Xml_16));
#line 525 "xml_documentation.m"
  }
#line 525 "xml_documentation.m"
}

#line 519 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_2(
#line 519 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 519 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 519 "xml_documentation.m"
{
#line 519 "xml_documentation.m"
  {
#line 519 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 519 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 519 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_Xml_6;

#line 519 "xml_documentation.m"
    {
#line 519 "xml_documentation.m"
      check_hlds__xml_documentation__conv2_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 519 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_6));
#line 519 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 519 "xml_documentation.m"
  }
#line 519 "xml_documentation.m"
}

#line 518 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0_1(
#line 518 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 518 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 518 "xml_documentation.m"
{
#line 518 "xml_documentation.m"
  {
#line 518 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 518 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 518 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_HeadVar__3_3;

#line 518 "xml_documentation.m"
    {
#line 518 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 518 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_HeadVar__3_3));
#line 518 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 518 "xml_documentation.m"
  }
#line 518 "xml_documentation.m"
}

#line 491 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__predicate_documentation_2_f_0(
#line 491 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_4,
#line 491 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_5)
#line 491 "xml_documentation.m"
{
#line 493 "xml_documentation.m"
  {
#line 493 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_6;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeCtorInfo_7_67;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TVarset_7;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Exists_8;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__IsPredOrFunc_9;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Module_10;
#line 493 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Name_11;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__PredName_12;
#line 493 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__Arity_13;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportStatus_14;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Types_15;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Constraints_16;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Context_17;
#line 493 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Tag_18;
#line 493 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Id_19;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlName_20;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlContext_21;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlTypes_22;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlExistVars_23;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlConstraints_24;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlVisibility_25;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ProcTable_26;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlProcs_27;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlModes_28;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml0_29;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_31_31;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_33_33;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_34_34;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_38_38;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_39_39;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_42_42;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_43_43;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_44_44;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_45_45;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_46_46;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_47_47;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_48_48;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Types0_65;
#line 493 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_66_66;
#line 493 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_79_79;
#line 493 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_80_80;
#line 493 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_82_82;
#line 493 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_85_85;
#line 493 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_87_87;
#line 493 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_92_92;
#line 544 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__L_70;
#line 545 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_71_71;
#line 545 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__V_72_72;
#line 525 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv4_XmlProcs_27;

#line 494 "xml_documentation.m"
    {
#line 494 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__TVarset_7);
    }
#line 495 "xml_documentation.m"
    {
#line 495 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Exists_8);
    }
#line 497 "xml_documentation.m"
    {
#line 497 "xml_documentation.m"
      check_hlds__xml_documentation__IsPredOrFunc_9 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
#line 498 "xml_documentation.m"
    {
#line 498 "xml_documentation.m"
      check_hlds__xml_documentation__Module_10 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
#line 499 "xml_documentation.m"
    {
#line 499 "xml_documentation.m"
      check_hlds__xml_documentation__Name_11 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
#line 500 "xml_documentation.m"
    {
#line 500 "xml_documentation.m"
      check_hlds__xml_documentation__PredName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__PredName_12, 0) = ((MR_Box) (check_hlds__xml_documentation__Module_10));
#line 500 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__PredName_12, 1) = ((MR_Box) (check_hlds__xml_documentation__Name_11));
#line 500 "xml_documentation.m"
    }
#line 501 "xml_documentation.m"
    {
#line 501 "xml_documentation.m"
      check_hlds__xml_documentation__Arity_13 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
#line 502 "xml_documentation.m"
    {
#line 502 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__ImportStatus_14);
    }
#line 537 "xml_documentation.m"
    {
#line 537 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Types0_65);
    }
#line 7991 "check_hlds.xml_documentation.c"
    check_hlds__xml_documentation__TypeCtorInfo_7_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 538 "xml_documentation.m"
    {
#line 538 "xml_documentation.m"
      check_hlds__xml_documentation__V_66_66 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__xml_documentation__PredInfo_5);
    }
#line 545 "xml_documentation.m"
    {
#line 545 "xml_documentation.m"
      check_hlds__xml_documentation__V_72_72 = mercury__list__length_1_f_0(check_hlds__xml_documentation__TypeCtorInfo_7_67, check_hlds__xml_documentation__Types0_65);
    }
#line 545 "xml_documentation.m"
    check_hlds__xml_documentation__V_71_71 = (check_hlds__xml_documentation__V_72_72 - check_hlds__xml_documentation__V_66_66);
#line 545 "xml_documentation.m"
    {
#line 545 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = mercury__list__drop_3_p_0(check_hlds__xml_documentation__TypeCtorInfo_7_67, check_hlds__xml_documentation__V_71_71, check_hlds__xml_documentation__Types0_65, &check_hlds__xml_documentation__L_70);
    }
#line 544 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 546 "xml_documentation.m"
      check_hlds__xml_documentation__Types_15 = check_hlds__xml_documentation__L_70;
#line 544 "xml_documentation.m"
    else
#line 548 "xml_documentation.m"
      {
#line 548 "xml_documentation.m"
        MR_Box check_hlds__xml_documentation__conv0_Types_15;

#line 548 "xml_documentation.m"
        {
#line 548 "xml_documentation.m"
          check_hlds__xml_documentation__conv0_Types_15 = mercury__require__func_error_1_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[7], (MR_String) "keep_last_n");
        }
#line 548 "xml_documentation.m"
        check_hlds__xml_documentation__Types_15 = ((MR_Word) check_hlds__xml_documentation__conv0_Types_15);
#line 548 "xml_documentation.m"
      }
#line 505 "xml_documentation.m"
    {
#line 505 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Constraints_16);
    }
#line 506 "xml_documentation.m"
    {
#line 506 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__Context_17);
    }
#line 510 "xml_documentation.m"
#line 510 "xml_documentation.m"
    switch (check_hlds__xml_documentation__IsPredOrFunc_9) {
#line 510 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 510 "xml_documentation.m"
      case (MR_Integer) 1:
#line 512 "xml_documentation.m"
        check_hlds__xml_documentation__Tag_18 = (MR_String) "function";
#line 510 "xml_documentation.m"
        break;
#line 510 "xml_documentation.m"
      case (MR_Integer) 0:
#line 509 "xml_documentation.m"
        check_hlds__xml_documentation__Tag_18 = (MR_String) "predicate";
#line 510 "xml_documentation.m"
        break;
#line 510 "xml_documentation.m"
    }
#line 841 "xml_documentation.m"
    {
#line 841 "xml_documentation.m"
      check_hlds__xml_documentation__V_87_87 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__PredName_12);
    }
#line 841 "xml_documentation.m"
    {
#line 841 "xml_documentation.m"
      check_hlds__xml_documentation__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_87_87);
    }
#line 841 "xml_documentation.m"
    {
#line 841 "xml_documentation.m"
      check_hlds__xml_documentation__V_79_79 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Tag_18, check_hlds__xml_documentation__V_85_85);
    }
#line 837 "xml_documentation.m"
    {
#line 837 "xml_documentation.m"
      check_hlds__xml_documentation__V_82_82 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_13);
    }
#line 837 "xml_documentation.m"
    {
#line 837 "xml_documentation.m"
      check_hlds__xml_documentation__V_80_80 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_82_82);
    }
#line 837 "xml_documentation.m"
    {
#line 837 "xml_documentation.m"
      check_hlds__xml_documentation__Id_19 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_79_79, check_hlds__xml_documentation__V_80_80);
    }
#line 516 "xml_documentation.m"
    {
#line 516 "xml_documentation.m"
      check_hlds__xml_documentation__XmlName_20 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__PredName_12);
    }
#line 517 "xml_documentation.m"
    {
#line 517 "xml_documentation.m"
      check_hlds__xml_documentation__XmlContext_21 = check_hlds__xml_documentation__prog_context_to_xml_1_f_0(check_hlds__xml_documentation__Context_17);
    }
#line 518 "xml_documentation.m"
    {
#line 518 "xml_documentation.m"
      check_hlds__xml_documentation__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 518 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[2]));
#line 518 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 1) = ((MR_Box) (check_hlds__xml_documentation__predicate_documentation_2_f_0_1));
#line 518 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 518 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_31_31, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_7));
#line 518 "xml_documentation.m"
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__V_92_92 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_31_31, check_hlds__xml_documentation__Types_15);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__XmlTypes_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_22, 0) = ((MR_Box) ((MR_String) "pred_types"));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypes_22, 2) = ((MR_Box) (check_hlds__xml_documentation__V_92_92));
#line 866 "xml_documentation.m"
    }
#line 519 "xml_documentation.m"
    {
#line 519 "xml_documentation.m"
      check_hlds__xml_documentation__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 519 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[0]));
#line 519 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 1) = ((MR_Box) (check_hlds__xml_documentation__predicate_documentation_2_f_0_2));
#line 519 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 519 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_33_33, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_7));
#line 519 "xml_documentation.m"
    }
#line 519 "xml_documentation.m"
    {
#line 519 "xml_documentation.m"
      check_hlds__xml_documentation__XmlExistVars_23 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0((MR_String) "pred_exist_vars", check_hlds__xml_documentation__V_33_33, check_hlds__xml_documentation__Exists_8);
    }
#line 521 "xml_documentation.m"
    {
#line 521 "xml_documentation.m"
      check_hlds__xml_documentation__XmlConstraints_24 = check_hlds__xml_documentation__prog_constraints_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_7, check_hlds__xml_documentation__Constraints_16);
    }
#line 522 "xml_documentation.m"
    {
#line 522 "xml_documentation.m"
      check_hlds__xml_documentation__XmlVisibility_25 = check_hlds__xml_documentation__visibility_to_xml_1_f_0(check_hlds__xml_documentation__ImportStatus_14);
    }
#line 524 "xml_documentation.m"
    {
#line 524 "xml_documentation.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__xml_documentation__PredInfo_5, &check_hlds__xml_documentation__ProcTable_26);
    }
#line 525 "xml_documentation.m"
    {
#line 525 "xml_documentation.m"
      check_hlds__xml_documentation__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 525 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_9[0]));
#line 525 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 1) = ((MR_Box) (check_hlds__xml_documentation__predicate_documentation_2_f_0_3));
#line 525 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 525 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_34_34, 3) = ((MR_Box) (check_hlds__xml_documentation__C_4));
#line 525 "xml_documentation.m"
    }
#line 525 "xml_documentation.m"
    {
#line 525 "xml_documentation.m"
      mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &check_hlds__xml_documentation_scalar_common_1[2], check_hlds__xml_documentation__V_34_34, check_hlds__xml_documentation__ProcTable_26, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__xml_documentation__conv4_XmlProcs_27);
    }
#line 525 "xml_documentation.m"
    check_hlds__xml_documentation__XmlProcs_27 = ((MR_Word) check_hlds__xml_documentation__conv4_XmlProcs_27);
#line 526 "xml_documentation.m"
    {
#line 526 "xml_documentation.m"
      check_hlds__xml_documentation__XmlModes_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 526 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_28, 0) = ((MR_Box) ((MR_String) "pred_modes"));
#line 526 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlModes_28, 2) = ((MR_Box) (check_hlds__xml_documentation__XmlProcs_27));
#line 526 "xml_documentation.m"
    }
#line 528 "xml_documentation.m"
    {
#line 528 "xml_documentation.m"
      check_hlds__xml_documentation__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 528 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_39_39, 0) = ((MR_Box) ((MR_String) "id"));
#line 528 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_39_39, 1) = ((MR_Box) (check_hlds__xml_documentation__Id_19));
#line 528 "xml_documentation.m"
    }
#line 528 "xml_documentation.m"
    {
#line 528 "xml_documentation.m"
      check_hlds__xml_documentation__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 0) = ((MR_Box) (check_hlds__xml_documentation__V_39_39));
#line 528 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 528 "xml_documentation.m"
    }
#line 530 "xml_documentation.m"
    {
#line 530 "xml_documentation.m"
      check_hlds__xml_documentation__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlModes_28));
#line 530 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 530 "xml_documentation.m"
    }
#line 530 "xml_documentation.m"
    {
#line 530 "xml_documentation.m"
      check_hlds__xml_documentation__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_25));
#line 530 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_47_47, 1) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 530 "xml_documentation.m"
    }
#line 530 "xml_documentation.m"
    {
#line 530 "xml_documentation.m"
      check_hlds__xml_documentation__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlConstraints_24));
#line 530 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_46_46, 1) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 530 "xml_documentation.m"
    }
#line 530 "xml_documentation.m"
    {
#line 530 "xml_documentation.m"
      check_hlds__xml_documentation__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlExistVars_23));
#line 530 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 1) = ((MR_Box) (check_hlds__xml_documentation__V_46_46));
#line 530 "xml_documentation.m"
    }
#line 529 "xml_documentation.m"
    {
#line 529 "xml_documentation.m"
      check_hlds__xml_documentation__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_44_44, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_21));
#line 529 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_44_44, 1) = ((MR_Box) (check_hlds__xml_documentation__V_45_45));
#line 529 "xml_documentation.m"
    }
#line 529 "xml_documentation.m"
    {
#line 529 "xml_documentation.m"
      check_hlds__xml_documentation__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_43_43, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_22));
#line 529 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_43_43, 1) = ((MR_Box) (check_hlds__xml_documentation__V_44_44));
#line 529 "xml_documentation.m"
    }
#line 529 "xml_documentation.m"
    {
#line 529 "xml_documentation.m"
      check_hlds__xml_documentation__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_42_42, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_20));
#line 529 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_42_42, 1) = ((MR_Box) (check_hlds__xml_documentation__V_43_43));
#line 529 "xml_documentation.m"
    }
#line 528 "xml_documentation.m"
    {
#line 528 "xml_documentation.m"
      check_hlds__xml_documentation__Xml0_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 528 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_29, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_18));
#line 528 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_29, 1) = ((MR_Box) (check_hlds__xml_documentation__V_38_38));
#line 528 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_29, 2) = ((MR_Box) (check_hlds__xml_documentation__V_42_42));
#line 528 "xml_documentation.m"
    }
#line 532 "xml_documentation.m"
    {
#line 532 "xml_documentation.m"
      return check_hlds__xml_documentation__Xml_6 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_4, check_hlds__xml_documentation__Context_17, check_hlds__xml_documentation__Xml0_29);
    }
#line 493 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_6;
#line 493 "xml_documentation.m"
  }
#line 491 "xml_documentation.m"
}

#line 472 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__pred_documentation_5_p_0(
#line 472 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 472 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation___PredId_7,
#line 472 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__PredInfo_8,
#line 472 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14,
#line 472 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xml_15)
#line 472 "xml_documentation.m"
{
#line 475 "xml_documentation.m"
  {
#line 475 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;

#line 475 "xml_documentation.m"
    {
#line 475 "xml_documentation.m"
      check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_100_95_100_111_99_117_109_101_110_116_97_116_105_111_110_95_95_91_50_93_95_48_5_p_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__PredInfo_8, check_hlds__xml_documentation__STATE_VARIABLE_Xml_0_14, check_hlds__xml_documentation__STATE_VARIABLE_Xml_15);
#line 475 "xml_documentation.m"
      return;
    }
#line 475 "xml_documentation.m"
  }
#line 472 "xml_documentation.m"
}

#line 464 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_3(
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
    MR_Word check_hlds__xml_documentation__conv2_HeadVar__3_3;

#line 464 "xml_documentation.m"
    {
#line 464 "xml_documentation.m"
      check_hlds__xml_documentation__conv2_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 464 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_HeadVar__3_3));
#line 464 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 464 "xml_documentation.m"
  }
#line 464 "xml_documentation.m"
}

#line 451 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_2(
#line 451 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 451 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 451 "xml_documentation.m"
{
#line 451 "xml_documentation.m"
  {
#line 451 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 451 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 451 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv1_HeadVar__3_3;

#line 451 "xml_documentation.m"
    {
#line 451 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 451 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_HeadVar__3_3));
#line 451 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 451 "xml_documentation.m"
  }
#line 451 "xml_documentation.m"
}

#line 443 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0_1(
#line 443 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 443 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 443 "xml_documentation.m"
{
#line 443 "xml_documentation.m"
  {
#line 443 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 443 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 443 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_HeadVar__3_3;

#line 443 "xml_documentation.m"
    {
#line 443 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_HeadVar__3_3 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 443 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_HeadVar__3_3));
#line 443 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 443 "xml_documentation.m"
  }
#line 443 "xml_documentation.m"
}

#line 435 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__mer_type_to_xml_2_f_0(
#line 435 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_1,
#line 435 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2)
#line 435 "xml_documentation.m"
{
#line 437 "xml_documentation.m"
  {
#line 437 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 437 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__3_3;

#line 437 "xml_documentation.m"
#line 437 "xml_documentation.m"
    switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__2_2)) {
#line 437 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 437 "xml_documentation.m"
      case (MR_Integer) 0:
#line 437 "xml_documentation.m"
        {
#line 437 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TVar_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 437 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));

#line 438 "xml_documentation.m"
          {
#line 438 "xml_documentation.m"
            return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_1, check_hlds__xml_documentation__TVar_5);
          }
#line 437 "xml_documentation.m"
        }
#line 437 "xml_documentation.m"
        break;
#line 437 "xml_documentation.m"
      case (MR_Integer) 1:
#line 439 "xml_documentation.m"
        {
#line 439 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TypeName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 439 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 439 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Ref_12;
#line 439 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlName_13;
#line 439 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlArgs_14;
#line 439 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_16_16;
#line 439 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__V_18_18;
#line 439 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_20_20;
#line 439 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_22_22;
#line 439 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_24_24;
#line 439 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_25_25;
#line 439 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));

#line 441 "xml_documentation.m"
          {
#line 441 "xml_documentation.m"
            check_hlds__xml_documentation__V_18_18 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__xml_documentation__Args_9);
          }
#line 441 "xml_documentation.m"
          {
#line 441 "xml_documentation.m"
            check_hlds__xml_documentation__V_16_16 = check_hlds__xml_documentation__sym_name_and_arity_to_id_3_f_0((MR_String) "type", check_hlds__xml_documentation__TypeName_8, check_hlds__xml_documentation__V_18_18);
          }
#line 440 "xml_documentation.m"
          {
#line 440 "xml_documentation.m"
            check_hlds__xml_documentation__Ref_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 440 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_12, 0) = ((MR_Box) ((MR_String) "ref"));
#line 440 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ref_12, 1) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 440 "xml_documentation.m"
          }
#line 442 "xml_documentation.m"
          {
#line 442 "xml_documentation.m"
            check_hlds__xml_documentation__XmlName_13 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__TypeName_8);
          }
#line 443 "xml_documentation.m"
          {
#line 443 "xml_documentation.m"
            check_hlds__xml_documentation__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 443 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[2]));
#line 443 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_1));
#line 443 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 443 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_20_20, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_1));
#line 443 "xml_documentation.m"
          }
#line 443 "xml_documentation.m"
          {
#line 443 "xml_documentation.m"
            check_hlds__xml_documentation__XmlArgs_14 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0((MR_String) "type_args", check_hlds__xml_documentation__V_20_20, check_hlds__xml_documentation__Args_9);
          }
#line 444 "xml_documentation.m"
          {
#line 444 "xml_documentation.m"
            check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__Ref_12));
#line 444 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "xml_documentation.m"
          }
#line 444 "xml_documentation.m"
          {
#line 444 "xml_documentation.m"
            check_hlds__xml_documentation__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_25_25, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_14));
#line 444 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "xml_documentation.m"
          }
#line 444 "xml_documentation.m"
          {
#line 444 "xml_documentation.m"
            check_hlds__xml_documentation__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_13));
#line 444 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_24_24, 1) = ((MR_Box) (check_hlds__xml_documentation__V_25_25));
#line 444 "xml_documentation.m"
          }
#line 444 "xml_documentation.m"
          {
#line 444 "xml_documentation.m"
            check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 444 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "type"));
#line 444 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (check_hlds__xml_documentation__V_22_22));
#line 444 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_24_24));
#line 444 "xml_documentation.m"
          }
#line 439 "xml_documentation.m"
        }
#line 437 "xml_documentation.m"
        break;
#line 437 "xml_documentation.m"
      case (MR_Integer) 2:
#line 437 "xml_documentation.m"
        {
#line 437 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));

#line 437 "xml_documentation.m"
          check_hlds__xml_documentation__HeadVar__3_3 = ((&check_hlds__xml_documentation_vector_common_8[0 + check_hlds__xml_documentation__V_98_98]))->check_hlds__xml_documentation__vector_common_type_8_0__vct_8_f_0;
#line 437 "xml_documentation.m"
        }
#line 437 "xml_documentation.m"
        break;
#line 437 "xml_documentation.m"
      case (MR_Integer) 3:
#line 437 "xml_documentation.m"
#line 437 "xml_documentation.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)))) {
#line 437 "xml_documentation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 437 "xml_documentation.m"
          case (MR_Integer) 0:
#line 463 "xml_documentation.m"
            {
#line 463 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__Types_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 463 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__XmlArgs_73;
#line 463 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_75_75;
#line 463 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_78_78;
#line 463 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));

#line 464 "xml_documentation.m"
              {
#line 464 "xml_documentation.m"
                check_hlds__xml_documentation__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 464 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_75_75, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[2]));
#line 464 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_75_75, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_3));
#line 464 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 464 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_75_75, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_1));
#line 464 "xml_documentation.m"
              }
#line 464 "xml_documentation.m"
              {
#line 464 "xml_documentation.m"
                check_hlds__xml_documentation__XmlArgs_73 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0((MR_String) "tuple_types", check_hlds__xml_documentation__V_75_75, check_hlds__xml_documentation__Types_70);
              }
#line 465 "xml_documentation.m"
              {
#line 465 "xml_documentation.m"
                check_hlds__xml_documentation__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_78_78, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_73));
#line 465 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "xml_documentation.m"
              }
#line 465 "xml_documentation.m"
              {
#line 465 "xml_documentation.m"
                check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 465 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "tuple"));
#line 465 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__V_78_78));
#line 465 "xml_documentation.m"
              }
#line 463 "xml_documentation.m"
            }
#line 437 "xml_documentation.m"
            break;
#line 437 "xml_documentation.m"
          case (MR_Integer) 1:
#line 450 "xml_documentation.m"
            {
#line 450 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__Types_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 450 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__MaybeResult_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 2)));
#line 450 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__XmlTypes_53;
#line 450 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__XmlChildren_56;
#line 450 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_58_58;
#line 450 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 3)));

#line 451 "xml_documentation.m"
              {
#line 451 "xml_documentation.m"
                check_hlds__xml_documentation__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 451 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_58_58, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[2]));
#line 451 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_58_58, 1) = ((MR_Box) (check_hlds__xml_documentation__mer_type_to_xml_2_f_0_2));
#line 451 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 451 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_58_58, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_1));
#line 451 "xml_documentation.m"
              }
#line 451 "xml_documentation.m"
              {
#line 451 "xml_documentation.m"
                check_hlds__xml_documentation__XmlTypes_53 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_49_95_95_91_49_93_95_48_3_f_0((MR_String) "higher_order_type_args", check_hlds__xml_documentation__V_58_58, check_hlds__xml_documentation__Types_48);
              }
#line 458 "xml_documentation.m"
              if ((check_hlds__xml_documentation__MaybeResult_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "xml_documentation.m"
                {
#line 460 "xml_documentation.m"
                  {
#line 460 "xml_documentation.m"
                    check_hlds__xml_documentation__XmlChildren_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_56, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_53));
#line 460 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 460 "xml_documentation.m"
                  }
#line 459 "xml_documentation.m"
                }
#line 458 "xml_documentation.m"
              else
#line 454 "xml_documentation.m"
                {
#line 454 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__ResultType_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__MaybeResult_49, (MR_Integer) 0)));
#line 454 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__XmlReturn_55;
#line 454 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_62_62;
#line 454 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_63_63;
#line 454 "xml_documentation.m"
                  MR_Word check_hlds__xml_documentation__V_65_65;

#line 456 "xml_documentation.m"
                  {
#line 456 "xml_documentation.m"
                    check_hlds__xml_documentation__V_63_63 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_1, check_hlds__xml_documentation__ResultType_54);
                  }
#line 456 "xml_documentation.m"
                  {
#line 456 "xml_documentation.m"
                    check_hlds__xml_documentation__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_62_62, 0) = ((MR_Box) (check_hlds__xml_documentation__V_63_63));
#line 456 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 456 "xml_documentation.m"
                  }
#line 455 "xml_documentation.m"
                  {
#line 455 "xml_documentation.m"
                    check_hlds__xml_documentation__XmlReturn_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 455 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlReturn_55, 0) = ((MR_Box) ((MR_String) "return_type"));
#line 455 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlReturn_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 455 "xml_documentation.m"
                    MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlReturn_55, 2) = ((MR_Box) (check_hlds__xml_documentation__V_62_62));
#line 455 "xml_documentation.m"
                  }
#line 457 "xml_documentation.m"
                  {
#line 457 "xml_documentation.m"
                    check_hlds__xml_documentation__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_65_65, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlReturn_55));
#line 457 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 457 "xml_documentation.m"
                  }
#line 457 "xml_documentation.m"
                  {
#line 457 "xml_documentation.m"
                    check_hlds__xml_documentation__XmlChildren_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_56, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypes_53));
#line 457 "xml_documentation.m"
                    MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlChildren_56, 1) = ((MR_Box) (check_hlds__xml_documentation__V_65_65));
#line 457 "xml_documentation.m"
                  }
#line 454 "xml_documentation.m"
                }
#line 462 "xml_documentation.m"
              {
#line 462 "xml_documentation.m"
                check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 462 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 0) = ((MR_Box) ((MR_String) "higher_order_type"));
#line 462 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__3_3, 2) = ((MR_Box) (check_hlds__xml_documentation__XmlChildren_56));
#line 462 "xml_documentation.m"
              }
#line 450 "xml_documentation.m"
            }
#line 437 "xml_documentation.m"
            break;
#line 437 "xml_documentation.m"
          case (MR_Integer) 2:
#line 466 "xml_documentation.m"
            {
#line 466 "xml_documentation.m"
              {
#line 466 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "apply_n_type");
              }
#line 466 "xml_documentation.m"
            }
#line 437 "xml_documentation.m"
            break;
#line 437 "xml_documentation.m"
          case (MR_Integer) 3:
#line 467 "xml_documentation.m"
            {
#line 467 "xml_documentation.m"
              {
#line 467 "xml_documentation.m"
                return check_hlds__xml_documentation__HeadVar__3_3 = check_hlds__xml_documentation__nyi_1_f_0((MR_String) "kinded_type");
              }
#line 467 "xml_documentation.m"
            }
#line 437 "xml_documentation.m"
            break;
#line 437 "xml_documentation.m"
        }
#line 437 "xml_documentation.m"
        break;
#line 437 "xml_documentation.m"
    }
#line 437 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__3_3;
#line 437 "xml_documentation.m"
  }
#line 435 "xml_documentation.m"
}

#line 418 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_arg_to_xml_3_f_0(
#line 418 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 418 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_6,
#line 418 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__CtorArg_7)
#line 418 "xml_documentation.m"
{
#line 420 "xml_documentation.m"
  {
#line 420 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_8;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__MaybeCtorFieldName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 0)));
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 1)));
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 3)));
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlType_13;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlContext_14;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlMaybeFieldName_18;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml0_19;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_22_22;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_23_23;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_39_39;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_40_40;
#line 420 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__FileName_41;
#line 420 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__LineNumber_42;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_45_45;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_46_46;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_48_48;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_49_49;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_55_55;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_56_56;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_61_61;
#line 420 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_62_62;
#line 420 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_63_63;
#line 421 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation___Width_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__CtorArg_7, (MR_Integer) 2)));

#line 422 "xml_documentation.m"
    {
#line 422 "xml_documentation.m"
      check_hlds__xml_documentation__V_23_23 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_6, check_hlds__xml_documentation__Type_10);
    }
#line 422 "xml_documentation.m"
    {
#line 422 "xml_documentation.m"
      check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__V_23_23));
#line 422 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 422 "xml_documentation.m"
    }
#line 422 "xml_documentation.m"
    {
#line 422 "xml_documentation.m"
      check_hlds__xml_documentation__XmlType_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 422 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlType_13, 0) = ((MR_Box) ((MR_String) "arg_type"));
#line 422 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlType_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 422 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlType_13, 2) = ((MR_Box) (check_hlds__xml_documentation__V_22_22));
#line 422 "xml_documentation.m"
    }
#line 786 "xml_documentation.m"
    check_hlds__xml_documentation__FileName_41 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_12, (MR_Integer) 0)));
#line 786 "xml_documentation.m"
    check_hlds__xml_documentation__LineNumber_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_12, (MR_Integer) 1)));
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_56_56, 0) = ((MR_Box) (check_hlds__xml_documentation__FileName_41));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_55_55, 0) = ((MR_Box) (check_hlds__xml_documentation__V_56_56));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_46_46, 0) = ((MR_Box) ((MR_String) "filename"));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_46_46, 2) = ((MR_Box) (check_hlds__xml_documentation__V_55_55));
#line 860 "xml_documentation.m"
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_63_63 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__LineNumber_42);
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_62_62, 0) = ((MR_Box) (check_hlds__xml_documentation__V_63_63));
#line 848 "xml_documentation.m"
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_61_61, 0) = ((MR_Box) (check_hlds__xml_documentation__V_62_62));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "xml_documentation.m"
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_49_49, 0) = ((MR_Box) ((MR_String) "line"));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_49_49, 2) = ((MR_Box) (check_hlds__xml_documentation__V_61_61));
#line 848 "xml_documentation.m"
    }
#line 789 "xml_documentation.m"
    {
#line 789 "xml_documentation.m"
      check_hlds__xml_documentation__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 0) = ((MR_Box) (check_hlds__xml_documentation__V_49_49));
#line 789 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "xml_documentation.m"
    }
#line 788 "xml_documentation.m"
    {
#line 788 "xml_documentation.m"
      check_hlds__xml_documentation__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 0) = ((MR_Box) (check_hlds__xml_documentation__V_46_46));
#line 788 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_45_45, 1) = ((MR_Box) (check_hlds__xml_documentation__V_48_48));
#line 788 "xml_documentation.m"
    }
#line 787 "xml_documentation.m"
    {
#line 787 "xml_documentation.m"
      check_hlds__xml_documentation__XmlContext_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 787 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_14, 0) = ((MR_Box) ((MR_String) "context"));
#line 787 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 787 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_14, 2) = ((MR_Box) (check_hlds__xml_documentation__V_45_45));
#line 787 "xml_documentation.m"
    }
#line 428 "xml_documentation.m"
    if ((check_hlds__xml_documentation__MaybeCtorFieldName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 430 "xml_documentation.m"
      check_hlds__xml_documentation__XmlMaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 428 "xml_documentation.m"
    else
#line 425 "xml_documentation.m"
      {
#line 425 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__FieldName_15;
#line 425 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Id_17;
#line 425 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__MaybeCtorFieldName_9, (MR_Integer) 0)));
#line 425 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_27_27;
#line 425 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_29_29;
#line 425 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_31_31;
#line 425 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_33_33;
#line 425 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_34_34;
#line 425 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_69_69;
#line 425 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__V_71_71;
#line 425 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation___FieldNameCtxt_16;

#line 425 "xml_documentation.m"
        check_hlds__xml_documentation__FieldName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_25_25, (MR_Integer) 0)));
#line 425 "xml_documentation.m"
        check_hlds__xml_documentation___FieldNameCtxt_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_25_25, (MR_Integer) 1)));
#line 841 "xml_documentation.m"
        {
#line 841 "xml_documentation.m"
          check_hlds__xml_documentation__V_71_71 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__FieldName_15);
        }
#line 841 "xml_documentation.m"
        {
#line 841 "xml_documentation.m"
          check_hlds__xml_documentation__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_71_71);
        }
#line 841 "xml_documentation.m"
        {
#line 841 "xml_documentation.m"
          check_hlds__xml_documentation__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "field", check_hlds__xml_documentation__V_69_69);
        }
#line 426 "xml_documentation.m"
        {
#line 426 "xml_documentation.m"
          check_hlds__xml_documentation__Id_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 426 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_17, 0) = ((MR_Box) ((MR_String) "id"));
#line 426 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_17, 1) = ((MR_Box) (check_hlds__xml_documentation__V_27_27));
#line 426 "xml_documentation.m"
        }
#line 427 "xml_documentation.m"
        {
#line 427 "xml_documentation.m"
          check_hlds__xml_documentation__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_31_31, 0) = ((MR_Box) (check_hlds__xml_documentation__Id_17));
#line 427 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "xml_documentation.m"
        }
#line 427 "xml_documentation.m"
        {
#line 427 "xml_documentation.m"
          check_hlds__xml_documentation__V_34_34 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__FieldName_15);
        }
#line 427 "xml_documentation.m"
        {
#line 427 "xml_documentation.m"
          check_hlds__xml_documentation__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_33_33, 0) = ((MR_Box) (check_hlds__xml_documentation__V_34_34));
#line 427 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "xml_documentation.m"
        }
#line 427 "xml_documentation.m"
        {
#line 427 "xml_documentation.m"
          check_hlds__xml_documentation__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 427 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 0) = ((MR_Box) ((MR_String) "field"));
#line 427 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 1) = ((MR_Box) (check_hlds__xml_documentation__V_31_31));
#line 427 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_29_29, 2) = ((MR_Box) (check_hlds__xml_documentation__V_33_33));
#line 427 "xml_documentation.m"
        }
#line 427 "xml_documentation.m"
        {
#line 427 "xml_documentation.m"
          check_hlds__xml_documentation__XmlMaybeFieldName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlMaybeFieldName_18, 0) = ((MR_Box) (check_hlds__xml_documentation__V_29_29));
#line 427 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__XmlMaybeFieldName_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "xml_documentation.m"
        }
#line 425 "xml_documentation.m"
      }
#line 432 "xml_documentation.m"
    {
#line 432 "xml_documentation.m"
      check_hlds__xml_documentation__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_14));
#line 432 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 1) = ((MR_Box) (check_hlds__xml_documentation__XmlMaybeFieldName_18));
#line 432 "xml_documentation.m"
    }
#line 432 "xml_documentation.m"
    {
#line 432 "xml_documentation.m"
      check_hlds__xml_documentation__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_39_39, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlType_13));
#line 432 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_39_39, 1) = ((MR_Box) (check_hlds__xml_documentation__V_40_40));
#line 432 "xml_documentation.m"
    }
#line 432 "xml_documentation.m"
    {
#line 432 "xml_documentation.m"
      check_hlds__xml_documentation__Xml0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 432 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_19, 0) = ((MR_Box) ((MR_String) "ctor_arg"));
#line 432 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 432 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_19, 2) = ((MR_Box) (check_hlds__xml_documentation__V_39_39));
#line 432 "xml_documentation.m"
    }
#line 433 "xml_documentation.m"
    {
#line 433 "xml_documentation.m"
      return check_hlds__xml_documentation__Xml_8 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_5, check_hlds__xml_documentation__Context_12, check_hlds__xml_documentation__Xml0_19);
    }
#line 420 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_8;
#line 420 "xml_documentation.m"
  }
#line 418 "xml_documentation.m"
}

#line 412 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_3(
#line 412 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 412 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 412 "xml_documentation.m"
{
#line 412 "xml_documentation.m"
  {
#line 412 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 412 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 412 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv2_Xml_6;

#line 412 "xml_documentation.m"
    {
#line 412 "xml_documentation.m"
      check_hlds__xml_documentation__conv2_Xml_6 = check_hlds__xml_documentation__prog_constraint_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 412 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv2_Xml_6));
#line 412 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 412 "xml_documentation.m"
  }
#line 412 "xml_documentation.m"
}

#line 409 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_2(
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
    MR_Word check_hlds__xml_documentation__conv1_Xml_6;

#line 409 "xml_documentation.m"
    {
#line 409 "xml_documentation.m"
      check_hlds__xml_documentation__conv1_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 409 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv1_Xml_6));
#line 409 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 409 "xml_documentation.m"
  }
#line 409 "xml_documentation.m"
}

#line 408 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0_1(
#line 408 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 408 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 408 "xml_documentation.m"
{
#line 408 "xml_documentation.m"
  {
#line 408 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 408 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 408 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_8;

#line 408 "xml_documentation.m"
    {
#line 408 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_8 = check_hlds__xml_documentation__constructor_arg_to_xml_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 408 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_8));
#line 408 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 408 "xml_documentation.m"
  }
#line 408 "xml_documentation.m"
}

#line 401 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__constructor_to_xml_3_f_0(
#line 401 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_5,
#line 401 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_6,
#line 401 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Ctor_7)
#line 401 "xml_documentation.m"
{
#line 403 "xml_documentation.m"
  {
#line 403 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_8;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Exists_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 0)));
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 1)));
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 2)));
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 3)));
#line 403 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 4)));
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Ctor_7, (MR_Integer) 5)));
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Id_15;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlName_16;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlContext_17;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlArgs_18;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlExistVars_19;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlConstraints_20;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml0_21;
#line 403 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_23_23;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_26_26;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_28_28;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_30_30;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_32_32;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_34_34;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_35_35;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_36_36;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_37_37;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_38_38;
#line 403 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_52_52;
#line 403 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_53_53;
#line 403 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_55_55;
#line 403 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_58_58;
#line 403 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_60_60;
#line 403 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__FileName_61;
#line 403 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__LineNumber_62;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_65_65;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_66_66;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_68_68;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_69_69;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_75_75;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_76_76;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_81_81;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_82_82;
#line 403 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__V_83_83;
#line 403 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_89_89;

#line 841 "xml_documentation.m"
    {
#line 841 "xml_documentation.m"
      check_hlds__xml_documentation__V_60_60 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__Name_11);
    }
#line 841 "xml_documentation.m"
    {
#line 841 "xml_documentation.m"
      check_hlds__xml_documentation__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_60_60);
    }
#line 841 "xml_documentation.m"
    {
#line 841 "xml_documentation.m"
      check_hlds__xml_documentation__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "ctor", check_hlds__xml_documentation__V_58_58);
    }
#line 837 "xml_documentation.m"
    {
#line 837 "xml_documentation.m"
      check_hlds__xml_documentation__V_55_55 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__Arity_13);
    }
#line 837 "xml_documentation.m"
    {
#line 837 "xml_documentation.m"
      check_hlds__xml_documentation__V_53_53 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_55_55);
    }
#line 837 "xml_documentation.m"
    {
#line 837 "xml_documentation.m"
      check_hlds__xml_documentation__V_23_23 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_52_52, check_hlds__xml_documentation__V_53_53);
    }
#line 405 "xml_documentation.m"
    {
#line 405 "xml_documentation.m"
      check_hlds__xml_documentation__Id_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 405 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_15, 0) = ((MR_Box) ((MR_String) "id"));
#line 405 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_15, 1) = ((MR_Box) (check_hlds__xml_documentation__V_23_23));
#line 405 "xml_documentation.m"
    }
#line 406 "xml_documentation.m"
    {
#line 406 "xml_documentation.m"
      check_hlds__xml_documentation__XmlName_16 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__Name_11);
    }
#line 786 "xml_documentation.m"
    check_hlds__xml_documentation__FileName_61 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_14, (MR_Integer) 0)));
#line 786 "xml_documentation.m"
    check_hlds__xml_documentation__LineNumber_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_14, (MR_Integer) 1)));
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_76_76, 0) = ((MR_Box) (check_hlds__xml_documentation__FileName_61));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_75_75, 0) = ((MR_Box) (check_hlds__xml_documentation__V_76_76));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_66_66, 0) = ((MR_Box) ((MR_String) "filename"));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_66_66, 2) = ((MR_Box) (check_hlds__xml_documentation__V_75_75));
#line 860 "xml_documentation.m"
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_83_83 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__LineNumber_62);
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_82_82, 0) = ((MR_Box) (check_hlds__xml_documentation__V_83_83));
#line 848 "xml_documentation.m"
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_81_81, 0) = ((MR_Box) (check_hlds__xml_documentation__V_82_82));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "xml_documentation.m"
    }
#line 848 "xml_documentation.m"
    {
#line 848 "xml_documentation.m"
      check_hlds__xml_documentation__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_69_69, 0) = ((MR_Box) ((MR_String) "line"));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_69_69, 2) = ((MR_Box) (check_hlds__xml_documentation__V_81_81));
#line 848 "xml_documentation.m"
    }
#line 789 "xml_documentation.m"
    {
#line 789 "xml_documentation.m"
      check_hlds__xml_documentation__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_68_68, 0) = ((MR_Box) (check_hlds__xml_documentation__V_69_69));
#line 789 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "xml_documentation.m"
    }
#line 788 "xml_documentation.m"
    {
#line 788 "xml_documentation.m"
      check_hlds__xml_documentation__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_65_65, 0) = ((MR_Box) (check_hlds__xml_documentation__V_66_66));
#line 788 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_65_65, 1) = ((MR_Box) (check_hlds__xml_documentation__V_68_68));
#line 788 "xml_documentation.m"
    }
#line 787 "xml_documentation.m"
    {
#line 787 "xml_documentation.m"
      check_hlds__xml_documentation__XmlContext_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 787 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_17, 0) = ((MR_Box) ((MR_String) "context"));
#line 787 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 787 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlContext_17, 2) = ((MR_Box) (check_hlds__xml_documentation__V_65_65));
#line 787 "xml_documentation.m"
    }
#line 408 "xml_documentation.m"
    {
#line 408 "xml_documentation.m"
      check_hlds__xml_documentation__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 408 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_26_26, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_7[1]));
#line 408 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_26_26, 1) = ((MR_Box) (check_hlds__xml_documentation__constructor_to_xml_3_f_0_1));
#line 408 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 408 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_26_26, 3) = ((MR_Box) (check_hlds__xml_documentation__C_5));
#line 408 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_26_26, 4) = ((MR_Box) (check_hlds__xml_documentation__TVarset_6));
#line 408 "xml_documentation.m"
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__V_89_89 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_26_26, check_hlds__xml_documentation__Args_12);
    }
#line 866 "xml_documentation.m"
    {
#line 866 "xml_documentation.m"
      check_hlds__xml_documentation__XmlArgs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_18, 0) = ((MR_Box) ((MR_String) "ctor_args"));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlArgs_18, 2) = ((MR_Box) (check_hlds__xml_documentation__V_89_89));
#line 866 "xml_documentation.m"
    }
#line 409 "xml_documentation.m"
    {
#line 409 "xml_documentation.m"
      check_hlds__xml_documentation__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 409 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[0]));
#line 409 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 1) = ((MR_Box) (check_hlds__xml_documentation__constructor_to_xml_3_f_0_2));
#line 409 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 409 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_6));
#line 409 "xml_documentation.m"
    }
#line 409 "xml_documentation.m"
    {
#line 409 "xml_documentation.m"
      check_hlds__xml_documentation__XmlExistVars_19 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_51_95_95_91_49_93_95_48_3_f_0((MR_String) "ctor_exist_vars", check_hlds__xml_documentation__V_28_28, check_hlds__xml_documentation__Exists_9);
    }
#line 412 "xml_documentation.m"
    {
#line 412 "xml_documentation.m"
      check_hlds__xml_documentation__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 412 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[1]));
#line 412 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 1) = ((MR_Box) (check_hlds__xml_documentation__constructor_to_xml_3_f_0_3));
#line 412 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 412 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_30_30, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_6));
#line 412 "xml_documentation.m"
    }
#line 412 "xml_documentation.m"
    {
#line 412 "xml_documentation.m"
      check_hlds__xml_documentation__XmlConstraints_20 = check_hlds__xml_documentation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_120_109_108_95_108_105_115_116_95_95_104_111_53_95_95_91_49_93_95_48_3_f_0((MR_String) "ctor_constraints", check_hlds__xml_documentation__V_30_30, check_hlds__xml_documentation__Constraints_10);
    }
#line 414 "xml_documentation.m"
    {
#line 414 "xml_documentation.m"
      check_hlds__xml_documentation__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 0) = ((MR_Box) (check_hlds__xml_documentation__Id_15));
#line 414 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "xml_documentation.m"
    }
#line 415 "xml_documentation.m"
    {
#line 415 "xml_documentation.m"
      check_hlds__xml_documentation__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlConstraints_20));
#line 415 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "xml_documentation.m"
    }
#line 415 "xml_documentation.m"
    {
#line 415 "xml_documentation.m"
      check_hlds__xml_documentation__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_37_37, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlExistVars_19));
#line 415 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_37_37, 1) = ((MR_Box) (check_hlds__xml_documentation__V_38_38));
#line 415 "xml_documentation.m"
    }
#line 415 "xml_documentation.m"
    {
#line 415 "xml_documentation.m"
      check_hlds__xml_documentation__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_36_36, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlArgs_18));
#line 415 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_36_36, 1) = ((MR_Box) (check_hlds__xml_documentation__V_37_37));
#line 415 "xml_documentation.m"
    }
#line 415 "xml_documentation.m"
    {
#line 415 "xml_documentation.m"
      check_hlds__xml_documentation__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_35_35, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlContext_17));
#line 415 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_35_35, 1) = ((MR_Box) (check_hlds__xml_documentation__V_36_36));
#line 415 "xml_documentation.m"
    }
#line 415 "xml_documentation.m"
    {
#line 415 "xml_documentation.m"
      check_hlds__xml_documentation__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_16));
#line 415 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 1) = ((MR_Box) (check_hlds__xml_documentation__V_35_35));
#line 415 "xml_documentation.m"
    }
#line 414 "xml_documentation.m"
    {
#line 414 "xml_documentation.m"
      check_hlds__xml_documentation__Xml0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 414 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_21, 0) = ((MR_Box) ((MR_String) "constructor"));
#line 414 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_21, 1) = ((MR_Box) (check_hlds__xml_documentation__V_32_32));
#line 414 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_21, 2) = ((MR_Box) (check_hlds__xml_documentation__V_34_34));
#line 414 "xml_documentation.m"
    }
#line 416 "xml_documentation.m"
    {
#line 416 "xml_documentation.m"
      return check_hlds__xml_documentation__Xml_8 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_5, check_hlds__xml_documentation__Context_14, check_hlds__xml_documentation__Xml0_21);
    }
#line 403 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_8;
#line 403 "xml_documentation.m"
  }
#line 401 "xml_documentation.m"
}

#line 393 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0_1(
#line 393 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 393 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 393 "xml_documentation.m"
{
#line 393 "xml_documentation.m"
  {
#line 393 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 393 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 393 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_8;

#line 393 "xml_documentation.m"
    {
#line 393 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_8 = check_hlds__xml_documentation__constructor_to_xml_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 393 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_8));
#line 393 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 393 "xml_documentation.m"
  }
#line 393 "xml_documentation.m"
}

#line 390 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__type_body_to_xml_3_f_0(
#line 390 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_1,
#line 390 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_2,
#line 390 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__3_3)
#line 390 "xml_documentation.m"
{
#line 392 "xml_documentation.m"
  {
#line 392 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 392 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;

#line 392 "xml_documentation.m"
#line 392 "xml_documentation.m"
    switch (MR_tag((MR_Word) check_hlds__xml_documentation__HeadVar__3_3)) {
#line 392 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 392 "xml_documentation.m"
      case (MR_Integer) 0:
#line 397 "xml_documentation.m"
        {
#line 397 "xml_documentation.m"
          check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[5]);
#line 397 "xml_documentation.m"
        }
#line 392 "xml_documentation.m"
        break;
#line 392 "xml_documentation.m"
      case (MR_Integer) 1:
#line 392 "xml_documentation.m"
        {
#line 392 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Ctors_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 392 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_16_16;
#line 392 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_18_18;
#line 392 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_64_64;
#line 392 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 1)));
#line 392 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 2)));
#line 392 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 3)));
#line 392 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 4)));
#line 392 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 5)));
#line 392 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 392 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 392 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 7)));

#line 393 "xml_documentation.m"
          {
#line 393 "xml_documentation.m"
            check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 393 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_7[0]));
#line 393 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (check_hlds__xml_documentation__type_body_to_xml_3_f_0_1));
#line 393 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 393 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 3) = ((MR_Box) (check_hlds__xml_documentation__C_1));
#line 393 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_18_18, 4) = ((MR_Box) (check_hlds__xml_documentation__TVarset_2));
#line 393 "xml_documentation.m"
          }
#line 866 "xml_documentation.m"
          {
#line 866 "xml_documentation.m"
            check_hlds__xml_documentation__V_64_64 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_18_18, check_hlds__xml_documentation__Ctors_7);
          }
#line 866 "xml_documentation.m"
          {
#line 866 "xml_documentation.m"
            check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) ((MR_String) "constructors"));
#line 866 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_16_16, 2) = ((MR_Box) (check_hlds__xml_documentation__V_64_64));
#line 866 "xml_documentation.m"
          }
#line 393 "xml_documentation.m"
          {
#line 393 "xml_documentation.m"
            check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 393 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "xml_documentation.m"
          }
#line 392 "xml_documentation.m"
        }
#line 392 "xml_documentation.m"
        break;
#line 392 "xml_documentation.m"
      case (MR_Integer) 2:
#line 394 "xml_documentation.m"
        {
#line 394 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)));
#line 394 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_23_23;
#line 394 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_26_26;
#line 394 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_27_27;

#line 395 "xml_documentation.m"
          {
#line 395 "xml_documentation.m"
            check_hlds__xml_documentation__V_27_27 = check_hlds__xml_documentation__mer_type_to_xml_2_f_0(check_hlds__xml_documentation__TVarset_2, check_hlds__xml_documentation__Type_22);
          }
#line 395 "xml_documentation.m"
          {
#line 395 "xml_documentation.m"
            check_hlds__xml_documentation__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 0) = ((MR_Box) (check_hlds__xml_documentation__V_27_27));
#line 395 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "xml_documentation.m"
          }
#line 395 "xml_documentation.m"
          {
#line 395 "xml_documentation.m"
            check_hlds__xml_documentation__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 395 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 0) = ((MR_Box) ((MR_String) "equivalent_type"));
#line 395 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_23_23, 2) = ((MR_Box) (check_hlds__xml_documentation__V_26_26));
#line 395 "xml_documentation.m"
          }
#line 395 "xml_documentation.m"
          {
#line 395 "xml_documentation.m"
            check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__V_23_23));
#line 395 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "xml_documentation.m"
          }
#line 394 "xml_documentation.m"
        }
#line 392 "xml_documentation.m"
        break;
#line 392 "xml_documentation.m"
      case (MR_Integer) 3:
#line 392 "xml_documentation.m"
#line 392 "xml_documentation.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__HeadVar__3_3, (MR_Integer) 0)))) {
#line 392 "xml_documentation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 392 "xml_documentation.m"
          case (MR_Integer) 0:
#line 398 "xml_documentation.m"
            {
#line 398 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[6]);
#line 398 "xml_documentation.m"
            }
#line 392 "xml_documentation.m"
            break;
#line 392 "xml_documentation.m"
          case (MR_Integer) 1:
#line 399 "xml_documentation.m"
            {
#line 399 "xml_documentation.m"
              check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__xml_documentation_scalar_common_1[4]);
#line 399 "xml_documentation.m"
            }
#line 392 "xml_documentation.m"
            break;
#line 392 "xml_documentation.m"
        }
#line 392 "xml_documentation.m"
        break;
#line 392 "xml_documentation.m"
    }
#line 392 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 392 "xml_documentation.m"
  }
#line 390 "xml_documentation.m"
}

#line 384 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__type_param_to_xml_2_f_0(
#line 384 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVarset_4,
#line 384 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TVar_5)
#line 384 "xml_documentation.m"
{
#line 386 "xml_documentation.m"
  {
#line 386 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 386 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_6;
#line 386 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__TVarName_7;
#line 386 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_13_13;
#line 386 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_14_14;

#line 387 "xml_documentation.m"
    {
#line 387 "xml_documentation.m"
      check_hlds__xml_documentation__TVarName_7 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__xml_documentation__TVarset_4, check_hlds__xml_documentation__TVar_5);
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_14_14, 0) = ((MR_Box) (check_hlds__xml_documentation__TVarName_7));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_13_13, 0) = ((MR_Box) (check_hlds__xml_documentation__V_14_14));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
    }
#line 860 "xml_documentation.m"
    {
#line 860 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 0) = ((MR_Box) ((MR_String) "type_variable"));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_6, 2) = ((MR_Box) (check_hlds__xml_documentation__V_13_13));
#line 860 "xml_documentation.m"
    }
#line 386 "xml_documentation.m"
    return check_hlds__xml_documentation__Xml_6;
#line 386 "xml_documentation.m"
  }
#line 384 "xml_documentation.m"
}

#line 359 "xml_documentation.m"
static MR_Box MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0_1(
#line 359 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 359 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 359 "xml_documentation.m"
{
#line 359 "xml_documentation.m"
  {
#line 359 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__wrapper_arg_2;
#line 359 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;
#line 359 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__conv0_Xml_6;

#line 359 "xml_documentation.m"
    {
#line 359 "xml_documentation.m"
      check_hlds__xml_documentation__conv0_Xml_6 = check_hlds__xml_documentation__type_param_to_xml_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 359 "xml_documentation.m"
    check_hlds__xml_documentation__wrapper_arg_2 = ((MR_Box) (check_hlds__xml_documentation__conv0_Xml_6));
#line 359 "xml_documentation.m"
    return check_hlds__xml_documentation__wrapper_arg_2;
#line 359 "xml_documentation.m"
  }
#line 359 "xml_documentation.m"
}

#line 345 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__type_documentation_5_p_0(
#line 345 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__C_6,
#line 345 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 345 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__TypeDefn_9,
#line 345 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25,
#line 345 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26)
#line 345 "xml_documentation.m"
{
#line 348 "xml_documentation.m"
  {
#line 348 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 348 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__TypeName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 0)));
#line 348 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__TypeArity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__2_2, (MR_Integer) 1)));
#line 348 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ImportStatus_11;
#line 348 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__DefinedInThisModule_12;

#line 349 "xml_documentation.m"
    {
#line 349 "xml_documentation.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__ImportStatus_11);
    }
#line 350 "xml_documentation.m"
    {
#line 350 "xml_documentation.m"
      check_hlds__xml_documentation__DefinedInThisModule_12 = parse_tree__status__status_defined_in_this_module_1_f_0(check_hlds__xml_documentation__ImportStatus_11);
    }
#line 372 "xml_documentation.m"
#line 372 "xml_documentation.m"
    switch (check_hlds__xml_documentation__DefinedInThisModule_12) {
#line 372 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 372 "xml_documentation.m"
      case (MR_Integer) 0:
#line 373 "xml_documentation.m"
        *check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26 = check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25;
#line 372 "xml_documentation.m"
        break;
#line 372 "xml_documentation.m"
      case (MR_Integer) 1:
#line 352 "xml_documentation.m"
        {
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TypeBody_13;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TVarset_14;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Context_15;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TParams_16;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlName_17;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlTypeParams_18;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__XmlVisibility_19;
#line 352 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__Tag_20;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Id_21;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Children_22;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Xml0_23;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Xml_24;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_28_28;
#line 352 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_30_30;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_32_32;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_33_33;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_34_34;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_35_35;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_36_36;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_37_37;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_47_47;
#line 352 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__Visibility_51;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_57_57;
#line 352 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_58_58;
#line 352 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_77_77;
#line 352 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_78_78;
#line 352 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_80_80;
#line 352 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_83_83;
#line 352 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_85_85;
#line 810 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_53_53;

#line 353 "xml_documentation.m"
          {
#line 353 "xml_documentation.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__TypeBody_13);
          }
#line 354 "xml_documentation.m"
          {
#line 354 "xml_documentation.m"
            hlds__hlds_data__get_type_defn_tvarset_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__TVarset_14);
          }
#line 355 "xml_documentation.m"
          {
#line 355 "xml_documentation.m"
            hlds__hlds_data__get_type_defn_context_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__Context_15);
          }
#line 356 "xml_documentation.m"
          {
#line 356 "xml_documentation.m"
            hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__xml_documentation__TypeDefn_9, &check_hlds__xml_documentation__TParams_16);
          }
#line 358 "xml_documentation.m"
          {
#line 358 "xml_documentation.m"
            check_hlds__xml_documentation__XmlName_17 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__TypeName_7);
          }
#line 359 "xml_documentation.m"
          {
#line 359 "xml_documentation.m"
            check_hlds__xml_documentation__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 359 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 0) = ((MR_Box) (&check_hlds__xml_documentation_scalar_common_5[0]));
#line 359 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 1) = ((MR_Box) (check_hlds__xml_documentation__type_documentation_5_p_0_1));
#line 359 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 359 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_28_28, 3) = ((MR_Box) (check_hlds__xml_documentation__TVarset_14));
#line 359 "xml_documentation.m"
          }
#line 866 "xml_documentation.m"
          {
#line 866 "xml_documentation.m"
            check_hlds__xml_documentation__V_47_47 = mercury__list__map_2_f_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[1], (MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, check_hlds__xml_documentation__V_28_28, check_hlds__xml_documentation__TParams_16);
          }
#line 866 "xml_documentation.m"
          {
#line 866 "xml_documentation.m"
            check_hlds__xml_documentation__XmlTypeParams_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypeParams_18, 0) = ((MR_Box) ((MR_String) "type_params"));
#line 866 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypeParams_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlTypeParams_18, 2) = ((MR_Box) (check_hlds__xml_documentation__V_47_47));
#line 866 "xml_documentation.m"
          }
#line 810 "xml_documentation.m"
          {
#line 810 "xml_documentation.m"
            check_hlds__xml_documentation__V_53_53 = parse_tree__status__status_defined_in_impl_section_1_f_0(check_hlds__xml_documentation__ImportStatus_11);
          }
#line 810 "xml_documentation.m"
          check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_53_53 == (MR_Integer) 1);
#line 816 "xml_documentation.m"
          if (check_hlds__xml_documentation__succeeded)
#line 813 "xml_documentation.m"
            {
#line 811 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__ImportStatus_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 813 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 812 "xml_documentation.m"
                check_hlds__xml_documentation__Visibility_51 = (MR_String) "abstract";
#line 813 "xml_documentation.m"
              else
#line 814 "xml_documentation.m"
                check_hlds__xml_documentation__Visibility_51 = (MR_String) "implementation";
#line 813 "xml_documentation.m"
            }
#line 816 "xml_documentation.m"
          else
#line 817 "xml_documentation.m"
            check_hlds__xml_documentation__Visibility_51 = (MR_String) "interface";
#line 860 "xml_documentation.m"
          {
#line 860 "xml_documentation.m"
            check_hlds__xml_documentation__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_58_58, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_51));
#line 860 "xml_documentation.m"
          }
#line 860 "xml_documentation.m"
          {
#line 860 "xml_documentation.m"
            check_hlds__xml_documentation__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_57_57, 0) = ((MR_Box) (check_hlds__xml_documentation__V_58_58));
#line 860 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
          }
#line 860 "xml_documentation.m"
          {
#line 860 "xml_documentation.m"
            check_hlds__xml_documentation__XmlVisibility_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_19, 0) = ((MR_Box) ((MR_String) "visibility"));
#line 860 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_19, 2) = ((MR_Box) (check_hlds__xml_documentation__V_57_57));
#line 860 "xml_documentation.m"
          }
#line 378 "xml_documentation.m"
#line 378 "xml_documentation.m"
          switch (MR_tag((MR_Word) check_hlds__xml_documentation__TypeBody_13)) {
#line 378 "xml_documentation.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 378 "xml_documentation.m"
            case (MR_Integer) 0:
#line 380 "xml_documentation.m"
              check_hlds__xml_documentation__Tag_20 = (MR_String) "foreign_type";
#line 378 "xml_documentation.m"
              break;
#line 378 "xml_documentation.m"
            case (MR_Integer) 1:
#line 378 "xml_documentation.m"
              check_hlds__xml_documentation__Tag_20 = (MR_String) "du_type";
#line 378 "xml_documentation.m"
              break;
#line 378 "xml_documentation.m"
            case (MR_Integer) 2:
#line 379 "xml_documentation.m"
              check_hlds__xml_documentation__Tag_20 = (MR_String) "eqv_type";
#line 378 "xml_documentation.m"
              break;
#line 378 "xml_documentation.m"
            case (MR_Integer) 3:
#line 378 "xml_documentation.m"
#line 378 "xml_documentation.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__xml_documentation__TypeBody_13, (MR_Integer) 0)))) {
#line 378 "xml_documentation.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 378 "xml_documentation.m"
                case (MR_Integer) 0:
#line 381 "xml_documentation.m"
                  check_hlds__xml_documentation__Tag_20 = (MR_String) "solver_type";
#line 378 "xml_documentation.m"
                  break;
#line 378 "xml_documentation.m"
                case (MR_Integer) 1:
#line 382 "xml_documentation.m"
                  check_hlds__xml_documentation__Tag_20 = (MR_String) "abstract_type";
#line 378 "xml_documentation.m"
                  break;
#line 378 "xml_documentation.m"
              }
#line 378 "xml_documentation.m"
              break;
#line 378 "xml_documentation.m"
          }
#line 841 "xml_documentation.m"
          {
#line 841 "xml_documentation.m"
            check_hlds__xml_documentation__V_85_85 = mdbcomp__sym_name__sym_name_to_string_1_f_0(check_hlds__xml_documentation__TypeName_7);
          }
#line 841 "xml_documentation.m"
          {
#line 841 "xml_documentation.m"
            check_hlds__xml_documentation__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) ".", check_hlds__xml_documentation__V_85_85);
          }
#line 841 "xml_documentation.m"
          {
#line 841 "xml_documentation.m"
            check_hlds__xml_documentation__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) "type", check_hlds__xml_documentation__V_83_83);
          }
#line 837 "xml_documentation.m"
          {
#line 837 "xml_documentation.m"
            check_hlds__xml_documentation__V_80_80 = mercury__string__int_to_string_1_f_0(check_hlds__xml_documentation__TypeArity_8);
          }
#line 837 "xml_documentation.m"
          {
#line 837 "xml_documentation.m"
            check_hlds__xml_documentation__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) "-", check_hlds__xml_documentation__V_80_80);
          }
#line 837 "xml_documentation.m"
          {
#line 837 "xml_documentation.m"
            check_hlds__xml_documentation__V_30_30 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__V_77_77, check_hlds__xml_documentation__V_78_78);
          }
#line 364 "xml_documentation.m"
          {
#line 364 "xml_documentation.m"
            check_hlds__xml_documentation__Id_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 364 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_21, 0) = ((MR_Box) ((MR_String) "id"));
#line 364 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Id_21, 1) = ((MR_Box) (check_hlds__xml_documentation__V_30_30));
#line 364 "xml_documentation.m"
          }
#line 366 "xml_documentation.m"
          {
#line 366 "xml_documentation.m"
            check_hlds__xml_documentation__V_35_35 = check_hlds__xml_documentation__prog_context_to_xml_1_f_0(check_hlds__xml_documentation__Context_15);
          }
#line 367 "xml_documentation.m"
          {
#line 367 "xml_documentation.m"
            check_hlds__xml_documentation__V_36_36 = check_hlds__xml_documentation__type_body_to_xml_3_f_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__TVarset_14, check_hlds__xml_documentation__TypeBody_13);
          }
#line 366 "xml_documentation.m"
          {
#line 366 "xml_documentation.m"
            check_hlds__xml_documentation__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 0) = ((MR_Box) (check_hlds__xml_documentation__V_35_35));
#line 366 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_34_34, 1) = ((MR_Box) (check_hlds__xml_documentation__V_36_36));
#line 366 "xml_documentation.m"
          }
#line 365 "xml_documentation.m"
          {
#line 365 "xml_documentation.m"
            check_hlds__xml_documentation__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_33_33, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_19));
#line 365 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_33_33, 1) = ((MR_Box) (check_hlds__xml_documentation__V_34_34));
#line 365 "xml_documentation.m"
          }
#line 365 "xml_documentation.m"
          {
#line 365 "xml_documentation.m"
            check_hlds__xml_documentation__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlTypeParams_18));
#line 365 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_32_32, 1) = ((MR_Box) (check_hlds__xml_documentation__V_33_33));
#line 365 "xml_documentation.m"
          }
#line 365 "xml_documentation.m"
          {
#line 365 "xml_documentation.m"
            check_hlds__xml_documentation__Children_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_22, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_17));
#line 365 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__Children_22, 1) = ((MR_Box) (check_hlds__xml_documentation__V_32_32));
#line 365 "xml_documentation.m"
          }
#line 368 "xml_documentation.m"
          {
#line 368 "xml_documentation.m"
            check_hlds__xml_documentation__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_37_37, 0) = ((MR_Box) (check_hlds__xml_documentation__Id_21));
#line 368 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 368 "xml_documentation.m"
          }
#line 368 "xml_documentation.m"
          {
#line 368 "xml_documentation.m"
            check_hlds__xml_documentation__Xml0_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 368 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_23, 0) = ((MR_Box) (check_hlds__xml_documentation__Tag_20));
#line 368 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_23, 1) = ((MR_Box) (check_hlds__xml_documentation__V_37_37));
#line 368 "xml_documentation.m"
            MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml0_23, 2) = ((MR_Box) (check_hlds__xml_documentation__Children_22));
#line 368 "xml_documentation.m"
          }
#line 369 "xml_documentation.m"
          {
#line 369 "xml_documentation.m"
            check_hlds__xml_documentation__Xml_24 = check_hlds__xml_documentation__maybe_add_comment_3_f_0(check_hlds__xml_documentation__C_6, check_hlds__xml_documentation__Context_15, check_hlds__xml_documentation__Xml0_23);
          }
#line 371 "xml_documentation.m"
          {
#line 371 "xml_documentation.m"
            MR_Word base;
#line 371 "xml_documentation.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "xml_documentation.m"
            *check_hlds__xml_documentation__STATE_VARIABLE_Xmls_26 = base;
#line 371 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_24));
#line 371 "xml_documentation.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_25));
#line 371 "xml_documentation.m"
          }
#line 352 "xml_documentation.m"
        }
#line 372 "xml_documentation.m"
        break;
#line 372 "xml_documentation.m"
    }
#line 348 "xml_documentation.m"
  }
#line 345 "xml_documentation.m"
}

#line 327 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__import_documentation_4_p_0(
#line 327 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__InterfaceImportedModules_5,
#line 327 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ImportedModule_6,
#line 327 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_11,
#line 327 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__STATE_VARIABLE_Xmls_12)
#line 327 "xml_documentation.m"
{
#line 330 "xml_documentation.m"
  {
#line 330 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 330 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlName_8;
#line 330 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__XmlVisibility_9;
#line 330 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Xml_10;
#line 330 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_17_17;
#line 330 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_18_18;

#line 331 "xml_documentation.m"
    {
#line 331 "xml_documentation.m"
      check_hlds__xml_documentation__XmlName_8 = check_hlds__xml_documentation__name_to_xml_1_f_0(check_hlds__xml_documentation__ImportedModule_6);
    }
#line 332 "xml_documentation.m"
    {
#line 332 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = mercury__set__member_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (check_hlds__xml_documentation__ImportedModule_6)), check_hlds__xml_documentation__InterfaceImportedModules_5);
    }
#line 334 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 333 "xml_documentation.m"
      {
#line 333 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__Visibility_23;
#line 333 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_29_29;
#line 333 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_30_30;
#line 810 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_25_25;

#line 810 "xml_documentation.m"
        {
#line 810 "xml_documentation.m"
          check_hlds__xml_documentation__V_25_25 = parse_tree__status__status_defined_in_impl_section_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
        }
#line 810 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_25_25 == (MR_Integer) 1);
#line 816 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 814 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_23 = (MR_String) "implementation";
#line 816 "xml_documentation.m"
        else
#line 817 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_23 = (MR_String) "interface";
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_30_30, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_23));
#line 860 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_29_29, 0) = ((MR_Box) (check_hlds__xml_documentation__V_30_30));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__XmlVisibility_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_9, 0) = ((MR_Box) ((MR_String) "visibility"));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_29_29));
#line 860 "xml_documentation.m"
        }
#line 333 "xml_documentation.m"
      }
#line 334 "xml_documentation.m"
    else
#line 335 "xml_documentation.m"
      {
#line 335 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__Visibility_33;
#line 335 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_39_39;
#line 335 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_40_40;
#line 810 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_35_35;

#line 810 "xml_documentation.m"
        {
#line 810 "xml_documentation.m"
          check_hlds__xml_documentation__V_35_35 = parse_tree__status__status_defined_in_impl_section_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)));
        }
#line 810 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__V_35_35 == (MR_Integer) 1);
#line 816 "xml_documentation.m"
        if (check_hlds__xml_documentation__succeeded)
#line 814 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_33 = (MR_String) "implementation";
#line 816 "xml_documentation.m"
        else
#line 817 "xml_documentation.m"
          check_hlds__xml_documentation__Visibility_33 = (MR_String) "interface";
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_40_40, 0) = ((MR_Box) (check_hlds__xml_documentation__Visibility_33));
#line 860 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_39_39, 0) = ((MR_Box) (check_hlds__xml_documentation__V_40_40));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
        }
#line 860 "xml_documentation.m"
        {
#line 860 "xml_documentation.m"
          check_hlds__xml_documentation__XmlVisibility_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_9, 0) = ((MR_Box) ((MR_String) "visibility"));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "xml_documentation.m"
          MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__XmlVisibility_9, 2) = ((MR_Box) (check_hlds__xml_documentation__V_39_39));
#line 860 "xml_documentation.m"
        }
#line 335 "xml_documentation.m"
      }
#line 337 "xml_documentation.m"
    {
#line 337 "xml_documentation.m"
      check_hlds__xml_documentation__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_18_18, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlVisibility_9));
#line 337 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "xml_documentation.m"
    }
#line 337 "xml_documentation.m"
    {
#line 337 "xml_documentation.m"
      check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__XmlName_8));
#line 337 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 1) = ((MR_Box) (check_hlds__xml_documentation__V_18_18));
#line 337 "xml_documentation.m"
    }
#line 337 "xml_documentation.m"
    {
#line 337 "xml_documentation.m"
      check_hlds__xml_documentation__Xml_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 337 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_10, 0) = ((MR_Box) ((MR_String) "import"));
#line 337 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "xml_documentation.m"
      MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_10, 2) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 337 "xml_documentation.m"
    }
#line 338 "xml_documentation.m"
    {
#line 338 "xml_documentation.m"
      MR_Word base;
#line 338 "xml_documentation.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "xml_documentation.m"
      *check_hlds__xml_documentation__STATE_VARIABLE_Xmls_12 = base;
#line 338 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__xml_documentation__Xml_10));
#line 338 "xml_documentation.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__xml_documentation__STATE_VARIABLE_Xmls_0_11));
#line 338 "xml_documentation.m"
    }
#line 330 "xml_documentation.m"
  }
#line 327 "xml_documentation.m"
}

#line 264 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_backwards_2_f_0(
#line 264 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_4,
#line 264 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Line_5)
#line 264 "xml_documentation.m"
{
#line 279 "xml_documentation.m"
  {
#line 279 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 279 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Comment_6;
#line 279 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__LineType_7;
#line 267 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11 = (MR_Word) check_hlds__xml_documentation__Comments_4;
#line 267 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv0_LineType_7;

#line 267 "xml_documentation.m"
    {
#line 267 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__Line_5, &check_hlds__xml_documentation__conv0_LineType_7);
    }
#line 267 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 267 "xml_documentation.m"
      {
#line 267 "xml_documentation.m"
        check_hlds__xml_documentation__LineType_7 = ((MR_Word) check_hlds__xml_documentation__conv0_LineType_7);
#line 267 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 267 "xml_documentation.m"
      }
#line 279 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 272 "xml_documentation.m"
#line 272 "xml_documentation.m"
      switch (MR_tag((MR_Word) check_hlds__xml_documentation__LineType_7)) {
#line 272 "xml_documentation.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 272 "xml_documentation.m"
        case (MR_Integer) 0:
#line 277 "xml_documentation.m"
          check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 272 "xml_documentation.m"
          break;
#line 272 "xml_documentation.m"
        case (MR_Integer) 1:
#line 269 "xml_documentation.m"
          {
#line 269 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__CurrentComment_8 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__LineType_7, (MR_Integer) 0)));
#line 269 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__CommentAbove_9;
#line 269 "xml_documentation.m"
            MR_Integer check_hlds__xml_documentation__V_12_12 = (check_hlds__xml_documentation__Line_5 - (MR_Integer) 1);

#line 270 "xml_documentation.m"
            {
#line 270 "xml_documentation.m"
              check_hlds__xml_documentation__CommentAbove_9 = check_hlds__xml_documentation__get_comment_backwards_2_f_0(check_hlds__xml_documentation__Comments_4, check_hlds__xml_documentation__V_12_12);
            }
#line 271 "xml_documentation.m"
            {
#line 271 "xml_documentation.m"
              return check_hlds__xml_documentation__Comment_6 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__CommentAbove_9, check_hlds__xml_documentation__CurrentComment_8);
            }
#line 269 "xml_documentation.m"
          }
#line 272 "xml_documentation.m"
          break;
#line 272 "xml_documentation.m"
        case (MR_Integer) 2:
#line 277 "xml_documentation.m"
          check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 272 "xml_documentation.m"
          break;
#line 272 "xml_documentation.m"
      }
#line 279 "xml_documentation.m"
    else
#line 280 "xml_documentation.m"
      check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 279 "xml_documentation.m"
    return check_hlds__xml_documentation__Comment_6;
#line 279 "xml_documentation.m"
  }
#line 264 "xml_documentation.m"
}

#line 241 "xml_documentation.m"
static MR_String MR_CALL 
check_hlds__xml_documentation__get_comment_forwards_2_f_0(
#line 241 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_4,
#line 241 "xml_documentation.m"
  MR_Integer check_hlds__xml_documentation__Line_5)
#line 241 "xml_documentation.m"
{
#line 256 "xml_documentation.m"
  {
#line 256 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 256 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__Comment_6;
#line 256 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__LineType_7;
#line 244 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__V_11_11 = (MR_Word) check_hlds__xml_documentation__Comments_4;
#line 244 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__conv0_LineType_7;

#line 244 "xml_documentation.m"
    {
#line 244 "xml_documentation.m"
      check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__V_11_11, check_hlds__xml_documentation__Line_5, &check_hlds__xml_documentation__conv0_LineType_7);
    }
#line 244 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 244 "xml_documentation.m"
      {
#line 244 "xml_documentation.m"
        check_hlds__xml_documentation__LineType_7 = ((MR_Word) check_hlds__xml_documentation__conv0_LineType_7);
#line 244 "xml_documentation.m"
        check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 244 "xml_documentation.m"
      }
#line 256 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 249 "xml_documentation.m"
#line 249 "xml_documentation.m"
      switch (MR_tag((MR_Word) check_hlds__xml_documentation__LineType_7)) {
#line 249 "xml_documentation.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 249 "xml_documentation.m"
        case (MR_Integer) 0:
#line 254 "xml_documentation.m"
          check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 249 "xml_documentation.m"
          break;
#line 249 "xml_documentation.m"
        case (MR_Integer) 1:
#line 246 "xml_documentation.m"
          {
#line 246 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__CurrentComment_8 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__LineType_7, (MR_Integer) 0)));
#line 246 "xml_documentation.m"
            MR_String check_hlds__xml_documentation__CommentBelow_9;
#line 246 "xml_documentation.m"
            MR_Integer check_hlds__xml_documentation__V_12_12 = (check_hlds__xml_documentation__Line_5 + (MR_Integer) 1);

#line 247 "xml_documentation.m"
            {
#line 247 "xml_documentation.m"
              check_hlds__xml_documentation__CommentBelow_9 = check_hlds__xml_documentation__get_comment_forwards_2_f_0(check_hlds__xml_documentation__Comments_4, check_hlds__xml_documentation__V_12_12);
            }
#line 248 "xml_documentation.m"
            {
#line 248 "xml_documentation.m"
              return check_hlds__xml_documentation__Comment_6 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__CurrentComment_8, check_hlds__xml_documentation__CommentBelow_9);
            }
#line 246 "xml_documentation.m"
          }
#line 249 "xml_documentation.m"
          break;
#line 249 "xml_documentation.m"
        case (MR_Integer) 2:
#line 254 "xml_documentation.m"
          check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 249 "xml_documentation.m"
          break;
#line 249 "xml_documentation.m"
      }
#line 256 "xml_documentation.m"
    else
#line 257 "xml_documentation.m"
      check_hlds__xml_documentation__Comment_6 = (MR_String) "";
#line 256 "xml_documentation.m"
    return check_hlds__xml_documentation__Comment_6;
#line 256 "xml_documentation.m"
  }
#line 241 "xml_documentation.m"
}

#line 185 "xml_documentation.m"
static MR_Word MR_CALL 
check_hlds__xml_documentation__maybe_add_comment_3_f_0(
#line 185 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Comments_5,
#line 185 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Context_6,
#line 185 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__Xml_7)
#line 185 "xml_documentation.m"
{
#line 187 "xml_documentation.m"
  {
#line 187 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__Xml_7)) == (MR_mktag((MR_Integer) 0)));
#line 187 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__HeadVar__4_4;
#line 187 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__N_8;
#line 187 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__As_9;
#line 187 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Cs_10;

#line 188 "xml_documentation.m"
    if (check_hlds__xml_documentation__succeeded)
#line 188 "xml_documentation.m"
      {
#line 188 "xml_documentation.m"
        check_hlds__xml_documentation__N_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, (MR_Integer) 0)));
#line 188 "xml_documentation.m"
        check_hlds__xml_documentation__As_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, (MR_Integer) 1)));
#line 188 "xml_documentation.m"
        check_hlds__xml_documentation__Cs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Xml_7, (MR_Integer) 2)));
#line 191 "xml_documentation.m"
        {
#line 191 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__Comment_11;
#line 189 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__Line_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_6, (MR_Integer) 1)));
#line 202 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__Context_6, (MR_Integer) 0)));
#line 202 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__C_26;
#line 222 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__Comment0_31;
#line 222 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__RestComment_32;
#line 222 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_33_33 = (MR_Word) check_hlds__xml_documentation__Comments_5;
#line 222 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_34_34;
#line 222 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__V_35_35;
#line 222 "xml_documentation.m"
          MR_Integer check_hlds__xml_documentation__V_36_36;
#line 223 "xml_documentation.m"
          MR_Box check_hlds__xml_documentation__conv0_V_34_34;

#line 223 "xml_documentation.m"
          {
#line 223 "xml_documentation.m"
            check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__V_33_33, check_hlds__xml_documentation__Line_25, &check_hlds__xml_documentation__conv0_V_34_34);
          }
#line 223 "xml_documentation.m"
          if (check_hlds__xml_documentation__succeeded)
#line 223 "xml_documentation.m"
            {
#line 223 "xml_documentation.m"
              check_hlds__xml_documentation__V_34_34 = ((MR_Word) check_hlds__xml_documentation__conv0_V_34_34);
#line 223 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 223 "xml_documentation.m"
            }
#line 222 "xml_documentation.m"
          if (check_hlds__xml_documentation__succeeded)
#line 222 "xml_documentation.m"
            {
#line 223 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__V_34_34)) == (MR_mktag((MR_Integer) 2)));
#line 223 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 223 "xml_documentation.m"
                {
#line 223 "xml_documentation.m"
                  check_hlds__xml_documentation__Comment0_31 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__V_34_34, (MR_Integer) 0)));
#line 224 "xml_documentation.m"
                  check_hlds__xml_documentation__V_36_36 = (MR_Integer) 1;
#line 224 "xml_documentation.m"
                  check_hlds__xml_documentation__V_35_35 = (check_hlds__xml_documentation__Line_25 + check_hlds__xml_documentation__V_36_36);
#line 224 "xml_documentation.m"
                  {
#line 224 "xml_documentation.m"
                    check_hlds__xml_documentation__RestComment_32 = check_hlds__xml_documentation__get_comment_forwards_2_f_0(check_hlds__xml_documentation__Comments_5, check_hlds__xml_documentation__V_35_35);
                  }
#line 225 "xml_documentation.m"
                  {
#line 225 "xml_documentation.m"
                    check_hlds__xml_documentation__C_26 = mercury__string__f_43_43_2_f_0(check_hlds__xml_documentation__Comment0_31, check_hlds__xml_documentation__RestComment_32);
                  }
#line 225 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 223 "xml_documentation.m"
                }
#line 222 "xml_documentation.m"
            }
#line 202 "xml_documentation.m"
          if (check_hlds__xml_documentation__succeeded)
#line 207 "xml_documentation.m"
            {
#line 207 "xml_documentation.m"
              check_hlds__xml_documentation__Comment_11 = check_hlds__xml_documentation__C_26;
#line 189 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__Comment_11, (MR_String) "") == 0);
#line 189 "xml_documentation.m"
              check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 207 "xml_documentation.m"
            }
#line 202 "xml_documentation.m"
          else
#line 210 "xml_documentation.m"
            {
#line 210 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__C_27;
#line 233 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_43_43 = (MR_Word) check_hlds__xml_documentation__Comments_5;
#line 233 "xml_documentation.m"
              MR_Integer check_hlds__xml_documentation__V_44_44 = (check_hlds__xml_documentation__Line_25 - (MR_Integer) 1);
#line 233 "xml_documentation.m"
              MR_Integer check_hlds__xml_documentation__V_47_47;
#line 233 "xml_documentation.m"
              MR_Integer check_hlds__xml_documentation__V_48_48;
#line 233 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_51_51;
#line 234 "xml_documentation.m"
              MR_Box check_hlds__xml_documentation__conv1_V_51_51;
#line 234 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_55_55;

#line 234 "xml_documentation.m"
              {
#line 234 "xml_documentation.m"
                check_hlds__xml_documentation__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__V_43_43, check_hlds__xml_documentation__V_44_44, &check_hlds__xml_documentation__conv1_V_51_51);
              }
#line 234 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 234 "xml_documentation.m"
                {
#line 234 "xml_documentation.m"
                  check_hlds__xml_documentation__V_51_51 = ((MR_Word) check_hlds__xml_documentation__conv1_V_51_51);
#line 234 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 234 "xml_documentation.m"
                }
#line 233 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 233 "xml_documentation.m"
                {
#line 234 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = ((MR_tag((MR_Word) check_hlds__xml_documentation__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 234 "xml_documentation.m"
                  if (check_hlds__xml_documentation__succeeded)
#line 234 "xml_documentation.m"
                    {
#line 234 "xml_documentation.m"
                      check_hlds__xml_documentation__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_51_51, (MR_Integer) 0)));
#line 235 "xml_documentation.m"
                      check_hlds__xml_documentation__V_48_48 = (MR_Integer) 1;
#line 235 "xml_documentation.m"
                      check_hlds__xml_documentation__V_47_47 = (check_hlds__xml_documentation__Line_25 - check_hlds__xml_documentation__V_48_48);
#line 235 "xml_documentation.m"
                      {
#line 235 "xml_documentation.m"
                        check_hlds__xml_documentation__C_27 = check_hlds__xml_documentation__get_comment_backwards_2_f_0(check_hlds__xml_documentation__Comments_5, check_hlds__xml_documentation__V_47_47);
                      }
#line 235 "xml_documentation.m"
                      check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 234 "xml_documentation.m"
                    }
#line 233 "xml_documentation.m"
                }
#line 210 "xml_documentation.m"
              if (check_hlds__xml_documentation__succeeded)
#line 209 "xml_documentation.m"
                {
#line 209 "xml_documentation.m"
                  check_hlds__xml_documentation__Comment_11 = check_hlds__xml_documentation__C_27;
#line 189 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = (strcmp(check_hlds__xml_documentation__Comment_11, (MR_String) "") == 0);
#line 189 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 209 "xml_documentation.m"
                }
#line 210 "xml_documentation.m"
              else
#line 211 "xml_documentation.m"
                {
#line 189 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = (strcmp((MR_String) "", (MR_String) "") == 0);
#line 189 "xml_documentation.m"
                  check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 211 "xml_documentation.m"
                  if (check_hlds__xml_documentation__succeeded)
#line 211 "xml_documentation.m"
                    {
#line 211 "xml_documentation.m"
                      check_hlds__xml_documentation__Comment_11 = (MR_String) "";
#line 211 "xml_documentation.m"
                      check_hlds__xml_documentation__succeeded = MR_TRUE;
#line 211 "xml_documentation.m"
                    }
#line 211 "xml_documentation.m"
                }
#line 210 "xml_documentation.m"
            }
#line 191 "xml_documentation.m"
          if (check_hlds__xml_documentation__succeeded)
#line 190 "xml_documentation.m"
            {
#line 190 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_12_12;
#line 190 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_13_13;
#line 190 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_16_16;
#line 190 "xml_documentation.m"
              MR_Word check_hlds__xml_documentation__V_17_17;

#line 190 "xml_documentation.m"
              {
#line 190 "xml_documentation.m"
                check_hlds__xml_documentation__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 190 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_17_17, 0) = ((MR_Box) (check_hlds__xml_documentation__Comment_11));
#line 190 "xml_documentation.m"
              }
#line 190 "xml_documentation.m"
              {
#line 190 "xml_documentation.m"
                check_hlds__xml_documentation__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 0) = ((MR_Box) (check_hlds__xml_documentation__V_17_17));
#line 190 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "xml_documentation.m"
              }
#line 190 "xml_documentation.m"
              {
#line 190 "xml_documentation.m"
                check_hlds__xml_documentation__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 190 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_13_13, 0) = ((MR_Box) ((MR_String) "comment"));
#line 190 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__V_13_13, 2) = ((MR_Box) (check_hlds__xml_documentation__V_16_16));
#line 190 "xml_documentation.m"
              }
#line 190 "xml_documentation.m"
              {
#line 190 "xml_documentation.m"
                check_hlds__xml_documentation__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_12_12, 0) = ((MR_Box) (check_hlds__xml_documentation__V_13_13));
#line 190 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_12_12, 1) = ((MR_Box) (check_hlds__xml_documentation__Cs_10));
#line 190 "xml_documentation.m"
              }
#line 190 "xml_documentation.m"
              {
#line 190 "xml_documentation.m"
                check_hlds__xml_documentation__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 190 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 0) = ((MR_Box) (check_hlds__xml_documentation__N_8));
#line 190 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 1) = ((MR_Box) (check_hlds__xml_documentation__As_9));
#line 190 "xml_documentation.m"
                MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__HeadVar__4_4, 2) = ((MR_Box) (check_hlds__xml_documentation__V_12_12));
#line 190 "xml_documentation.m"
              }
#line 190 "xml_documentation.m"
            }
#line 191 "xml_documentation.m"
          else
#line 192 "xml_documentation.m"
            check_hlds__xml_documentation__HeadVar__4_4 = check_hlds__xml_documentation__Xml_7;
#line 191 "xml_documentation.m"
        }
#line 188 "xml_documentation.m"
      }
#line 188 "xml_documentation.m"
    else
#line 195 "xml_documentation.m"
      {
#line 195 "xml_documentation.m"
        MR_Box check_hlds__xml_documentation__conv2_HeadVar__4_4;

#line 195 "xml_documentation.m"
        {
#line 195 "xml_documentation.m"
          check_hlds__xml_documentation__conv2_HeadVar__4_4 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__term_to_xml__term_to_xml__type_ctor_info_xml_0, (MR_String) "check_hlds.xml_documentation", (MR_String) "function \140check_hlds.xml_documentation.maybe_add_comment\'/3", (MR_String) "not an element");
        }
#line 195 "xml_documentation.m"
        check_hlds__xml_documentation__HeadVar__4_4 = ((MR_Word) check_hlds__xml_documentation__conv2_HeadVar__4_4);
#line 195 "xml_documentation.m"
      }
#line 187 "xml_documentation.m"
    return check_hlds__xml_documentation__HeadVar__4_4;
#line 187 "xml_documentation.m"
  }
#line 185 "xml_documentation.m"
}

#line 172 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__is_not_comment_char_1_p_0(
#line 172 "xml_documentation.m"
  MR_Char check_hlds__xml_documentation__C_2)
#line 172 "xml_documentation.m"
{
#line 175 "xml_documentation.m"
  {
#line 175 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded = (check_hlds__xml_documentation__C_2 == (MR_Char) 37);

#line 175 "xml_documentation.m"
    check_hlds__xml_documentation__succeeded = !(check_hlds__xml_documentation__succeeded);
#line 175 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 175 "xml_documentation.m"
  }
#line 172 "xml_documentation.m"
}

#line 151 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_2(
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
      return check_hlds__xml_documentation__succeeded = check_hlds__xml_documentation__is_not_comment_char_1_p_0(((MR_Char) (MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 151 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 151 "xml_documentation.m"
  }
#line 151 "xml_documentation.m"
}

#line 150 "xml_documentation.m"
static MR_bool MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0_1(
#line 150 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__closure_arg,
#line 150 "xml_documentation.m"
  MR_Box check_hlds__xml_documentation__wrapper_arg_1)
#line 150 "xml_documentation.m"
{
#line 150 "xml_documentation.m"
  {
#line 150 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 150 "xml_documentation.m"
    MR_Box check_hlds__xml_documentation__closure = check_hlds__xml_documentation__closure_arg;

#line 150 "xml_documentation.m"
    {
#line 150 "xml_documentation.m"
      return check_hlds__xml_documentation__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) check_hlds__xml_documentation__wrapper_arg_1));
    }
#line 150 "xml_documentation.m"
    return check_hlds__xml_documentation__succeeded;
#line 150 "xml_documentation.m"
  }
#line 150 "xml_documentation.m"
}

#line 122 "xml_documentation.m"
static void MR_CALL 
check_hlds__xml_documentation__build_comments_5_p_0(
#line 122 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__S_6,
#line 122 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__HeadVar__2_2,
#line 122 "xml_documentation.m"
  MR_Word * check_hlds__xml_documentation__HeadVar__3_3)
#line 122 "xml_documentation.m"
{
#line 125 "xml_documentation.m"
  {
#line 125 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 125 "xml_documentation.m"
    MR_Integer check_hlds__xml_documentation__LineNumber_9;
#line 125 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__LineResult_10;
#line 125 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__STATE_VARIABLE_C_0_13 = (MR_Word) check_hlds__xml_documentation__HeadVar__2_2;
#line 125 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__STATE_VARIABLE_C_14;

#line 126 "xml_documentation.m"
    {
#line 126 "xml_documentation.m"
      mercury__io__get_line_number_4_p_0(check_hlds__xml_documentation__S_6, &check_hlds__xml_documentation__LineNumber_9);
    }
#line 127 "xml_documentation.m"
    {
#line 127 "xml_documentation.m"
      mercury__io__read_line_4_p_0(check_hlds__xml_documentation__S_6, &check_hlds__xml_documentation__LineResult_10);
    }
#line 132 "xml_documentation.m"
#line 132 "xml_documentation.m"
    switch (MR_tag((MR_Word) check_hlds__xml_documentation__LineResult_10)) {
#line 132 "xml_documentation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 132 "xml_documentation.m"
      case (MR_Integer) 0:
#line 133 "xml_documentation.m"
        check_hlds__xml_documentation__STATE_VARIABLE_C_14 = check_hlds__xml_documentation__STATE_VARIABLE_C_0_13;
#line 132 "xml_documentation.m"
        break;
#line 132 "xml_documentation.m"
      case (MR_Integer) 1:
#line 129 "xml_documentation.m"
        {
#line 129 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__TypeCtorInfo_20_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 129 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Line_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__LineResult_10, (MR_Integer) 0)));
#line 129 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_22_22;
#line 129 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__STATE_VARIABLE_C_23_23;
#line 129 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_24_24;
#line 129 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__V_25_25;
#line 129 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Rest_33;
#line 129 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Decl_34;
#line 129 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__Comment_35;
#line 150 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation___WhiteSpace_32;

#line 150 "xml_documentation.m"
          {
#line 150 "xml_documentation.m"
            mercury__list__takewhile_4_p_0(check_hlds__xml_documentation__TypeCtorInfo_20_47, (MR_Word) &check_hlds__xml_documentation_scalar_common_2[2], check_hlds__xml_documentation__Line_11, &check_hlds__xml_documentation___WhiteSpace_32, &check_hlds__xml_documentation__Rest_33);
          }
#line 151 "xml_documentation.m"
          {
#line 151 "xml_documentation.m"
            mercury__list__takewhile_4_p_0(check_hlds__xml_documentation__TypeCtorInfo_20_47, (MR_Word) &check_hlds__xml_documentation_scalar_common_2[3], check_hlds__xml_documentation__Rest_33, &check_hlds__xml_documentation__Decl_34, &check_hlds__xml_documentation__Comment_35);
          }
#line 155 "xml_documentation.m"
          if ((check_hlds__xml_documentation__Rest_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 154 "xml_documentation.m"
            check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 155 "xml_documentation.m"
          else
#line 160 "xml_documentation.m"
          if ((check_hlds__xml_documentation__Comment_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 159 "xml_documentation.m"
            check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 160 "xml_documentation.m"
          else
#line 165 "xml_documentation.m"
          if ((check_hlds__xml_documentation__Decl_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "xml_documentation.m"
            {
#line 163 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_45_45;

#line 164 "xml_documentation.m"
              {
#line 164 "xml_documentation.m"
                check_hlds__xml_documentation__V_45_45 = mercury__string__from_char_list_1_f_0(check_hlds__xml_documentation__Comment_35);
              }
#line 164 "xml_documentation.m"
              {
#line 164 "xml_documentation.m"
                check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 164 "xml_documentation.m"
                MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__V_45_45));
#line 164 "xml_documentation.m"
              }
#line 163 "xml_documentation.m"
            }
#line 165 "xml_documentation.m"
          else
#line 166 "xml_documentation.m"
            {
#line 166 "xml_documentation.m"
              MR_String check_hlds__xml_documentation__V_44_44;

#line 167 "xml_documentation.m"
              {
#line 167 "xml_documentation.m"
                check_hlds__xml_documentation__V_44_44 = mercury__string__from_char_list_1_f_0(check_hlds__xml_documentation__Comment_35);
              }
#line 167 "xml_documentation.m"
              {
#line 167 "xml_documentation.m"
                check_hlds__xml_documentation__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 167 "xml_documentation.m"
                MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__V_22_22, 0) = ((MR_Box) (check_hlds__xml_documentation__V_44_44));
#line 167 "xml_documentation.m"
              }
#line 166 "xml_documentation.m"
            }
#line 130 "xml_documentation.m"
          {
#line 130 "xml_documentation.m"
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0, check_hlds__xml_documentation__LineNumber_9, ((MR_Box) (check_hlds__xml_documentation__V_22_22)), check_hlds__xml_documentation__STATE_VARIABLE_C_0_13, &check_hlds__xml_documentation__STATE_VARIABLE_C_23_23);
          }
#line 131 "xml_documentation.m"
          check_hlds__xml_documentation__V_24_24 = (MR_Word) check_hlds__xml_documentation__STATE_VARIABLE_C_23_23;
#line 131 "xml_documentation.m"
          {
#line 131 "xml_documentation.m"
            check_hlds__xml_documentation__build_comments_5_p_0(check_hlds__xml_documentation__S_6, check_hlds__xml_documentation__V_24_24, &check_hlds__xml_documentation__V_25_25);
          }
#line 131 "xml_documentation.m"
          check_hlds__xml_documentation__STATE_VARIABLE_C_14 = (MR_Word) check_hlds__xml_documentation__V_25_25;
#line 129 "xml_documentation.m"
        }
#line 132 "xml_documentation.m"
        break;
#line 132 "xml_documentation.m"
      case (MR_Integer) 2:
#line 135 "xml_documentation.m"
        {
#line 135 "xml_documentation.m"
          MR_Word check_hlds__xml_documentation__E_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__xml_documentation__LineResult_10, (MR_Integer) 0)));
#line 135 "xml_documentation.m"
          MR_String check_hlds__xml_documentation__V_21_21;

#line 137 "xml_documentation.m"
          {
#line 137 "xml_documentation.m"
            check_hlds__xml_documentation__V_21_21 = mercury__io__error_message_1_f_0(check_hlds__xml_documentation__E_12);
          }
#line 137 "xml_documentation.m"
          {
#line 137 "xml_documentation.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.xml_documentation", (MR_String) "predicate \140check_hlds.xml_documentation.build_comments\'/5", check_hlds__xml_documentation__V_21_21);
#line 137 "xml_documentation.m"
            return;
          }
#line 135 "xml_documentation.m"
        }
#line 132 "xml_documentation.m"
        break;
#line 132 "xml_documentation.m"
    }
#line 125 "xml_documentation.m"
    *check_hlds__xml_documentation__HeadVar__3_3 = (MR_Word) check_hlds__xml_documentation__STATE_VARIABLE_C_14;
#line 125 "xml_documentation.m"
  }
#line 122 "xml_documentation.m"
}

#line 29 "xml_documentation.m"
void MR_CALL 
check_hlds__xml_documentation__xml_documentation_3_p_0(
#line 29 "xml_documentation.m"
  MR_Word check_hlds__xml_documentation__ModuleInfo_4)
#line 29 "xml_documentation.m"
{
#line 85 "xml_documentation.m"
  {
#line 85 "xml_documentation.m"
    MR_bool check_hlds__xml_documentation__succeeded;
#line 85 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__Globals_6;
#line 85 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__ModuleName_7;
#line 85 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__FileName_8;
#line 85 "xml_documentation.m"
    MR_String check_hlds__xml_documentation__SrcFileName_9;
#line 85 "xml_documentation.m"
    MR_Word check_hlds__xml_documentation__SrcResult_10;

#line 86 "xml_documentation.m"
    {
#line 86 "xml_documentation.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__xml_documentation__ModuleInfo_4, &check_hlds__xml_documentation__Globals_6);
    }
#line 87 "xml_documentation.m"
    {
#line 87 "xml_documentation.m"
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__xml_documentation__ModuleInfo_4, &check_hlds__xml_documentation__ModuleName_7);
    }
#line 88 "xml_documentation.m"
    {
#line 88 "xml_documentation.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(check_hlds__xml_documentation__Globals_6, check_hlds__xml_documentation__ModuleName_7, (MR_String) ".xml", (MR_Integer) 0, &check_hlds__xml_documentation__FileName_8);
    }
#line 91 "xml_documentation.m"
    {
#line 91 "xml_documentation.m"
      parse_tree__source_file_map__lookup_module_source_file_4_p_0(check_hlds__xml_documentation__ModuleName_7, &check_hlds__xml_documentation__SrcFileName_9);
    }
#line 92 "xml_documentation.m"
    {
#line 92 "xml_documentation.m"
      mercury__io__open_input_4_p_0(check_hlds__xml_documentation__SrcFileName_9, &check_hlds__xml_documentation__SrcResult_10);
    }
#line 111 "xml_documentation.m"
    if (((MR_tag((MR_Word) check_hlds__xml_documentation__SrcResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 112 "xml_documentation.m"
      {
#line 112 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__SrcErr_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__SrcResult_10, (MR_Integer) 0)));

#line 113 "xml_documentation.m"
        {
#line 113 "xml_documentation.m"
          parse_tree__error_util__unable_to_open_file_4_p_0(check_hlds__xml_documentation__SrcFileName_9, check_hlds__xml_documentation__SrcErr_18);
#line 113 "xml_documentation.m"
          return;
        }
#line 112 "xml_documentation.m"
      }
#line 111 "xml_documentation.m"
    else
#line 94 "xml_documentation.m"
      {
#line 94 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__SrcStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__SrcResult_10, (MR_Integer) 0)));
#line 94 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__Comments_12;
#line 94 "xml_documentation.m"
        MR_String check_hlds__xml_documentation__ModuleComment_13;
#line 94 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__OpenResult_14;
#line 94 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_27_27;
#line 94 "xml_documentation.m"
        MR_Word check_hlds__xml_documentation__V_29_29;

#line 95 "xml_documentation.m"
        {
#line 95 "xml_documentation.m"
          check_hlds__xml_documentation__V_29_29 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__xml_documentation__check_hlds__xml_documentation__type_ctor_info_line_type_0);
        }
#line 95 "xml_documentation.m"
        check_hlds__xml_documentation__V_27_27 = (MR_Word) check_hlds__xml_documentation__V_29_29;
#line 95 "xml_documentation.m"
        {
#line 95 "xml_documentation.m"
          check_hlds__xml_documentation__build_comments_5_p_0(check_hlds__xml_documentation__SrcStream_11, check_hlds__xml_documentation__V_27_27, &check_hlds__xml_documentation__Comments_12);
        }
#line 99 "xml_documentation.m"
        {
#line 99 "xml_documentation.m"
          check_hlds__xml_documentation__ModuleComment_13 = check_hlds__xml_documentation__get_comment_forwards_2_f_0(check_hlds__xml_documentation__Comments_12, (MR_Integer) 1);
        }
#line 101 "xml_documentation.m"
        {
#line 101 "xml_documentation.m"
          mercury__io__open_output_4_p_0(check_hlds__xml_documentation__FileName_8, &check_hlds__xml_documentation__OpenResult_14);
        }
#line 107 "xml_documentation.m"
        if (((MR_tag((MR_Word) check_hlds__xml_documentation__OpenResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 108 "xml_documentation.m"
          {
#line 108 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__Err_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__xml_documentation__OpenResult_14, (MR_Integer) 0)));

#line 109 "xml_documentation.m"
            {
#line 109 "xml_documentation.m"
              parse_tree__error_util__unable_to_open_file_4_p_0(check_hlds__xml_documentation__FileName_8, check_hlds__xml_documentation__Err_17);
#line 109 "xml_documentation.m"
              return;
            }
#line 108 "xml_documentation.m"
          }
#line 107 "xml_documentation.m"
        else
#line 103 "xml_documentation.m"
          {
#line 103 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__Stream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__OpenResult_14, (MR_Integer) 0)));
#line 103 "xml_documentation.m"
            MR_Word check_hlds__xml_documentation__MIXmlDoc_16;
#line 106 "xml_documentation.m"
            MR_Box check_hlds__xml_documentation__conv0_STATE_VARIABLE_IO_20;

#line 104 "xml_documentation.m"
            {
#line 104 "xml_documentation.m"
              check_hlds__xml_documentation__MIXmlDoc_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 104 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__MIXmlDoc_16, 0) = ((MR_Box) (check_hlds__xml_documentation__Comments_12));
#line 104 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__MIXmlDoc_16, 1) = ((MR_Box) (check_hlds__xml_documentation__ModuleComment_13));
#line 104 "xml_documentation.m"
              MR_hl_field(MR_mktag(0), check_hlds__xml_documentation__MIXmlDoc_16, 2) = ((MR_Box) (check_hlds__xml_documentation__ModuleInfo_4));
#line 104 "xml_documentation.m"
            }
#line 106 "xml_documentation.m"
            {
#line 106 "xml_documentation.m"
              mercury__term_to_xml__write_xml_doc_4_p_0((MR_Word) &check_hlds__xml_documentation_scalar_common_1[0], (MR_Word) &check_hlds__xml_documentation_scalar_common_4[0], ((MR_Box) (check_hlds__xml_documentation__Stream_15)), ((MR_Box) (check_hlds__xml_documentation__MIXmlDoc_16)), ((MR_Box) ((MR_Integer) 0)), &check_hlds__xml_documentation__conv0_STATE_VARIABLE_IO_20);
            }
#line 103 "xml_documentation.m"
          }
#line 94 "xml_documentation.m"
      }
#line 85 "xml_documentation.m"
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
