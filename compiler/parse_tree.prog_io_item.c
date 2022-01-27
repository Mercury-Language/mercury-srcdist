/*
** Automatically generated from `prog_io_item.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


/* :- module parse_tree.prog_io_item. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_item__init
ENDINIT
*/

#include "parse_tree.prog_io_item.mih"


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
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
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
#include "parse_tree.prog_io_dcg.mih"
#include "parse_tree.prog_io_goal.mih"
#include "parse_tree.prog_io_mode_defn.mih"
#include "parse_tree.prog_io_mutable.mih"
#include "parse_tree.prog_io_pragma.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_type_defn.mih"
#include "parse_tree.prog_io_typeclass.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.version.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 142 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 145 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 151 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 154 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 157 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 160 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 163 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 166 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "parse_tree.prog_io_item.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item____vpti_pred_2__pseudo_1__pseudo_2;

#line 172 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0_10001(
#line 175 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 177 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 179 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3,
#line 181 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4);

#line 184 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0_10001(
#line 187 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 189 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 191 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_3,
#line 193 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4,
#line 195 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_5);

#line 435 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_p_0(
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 435 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 435 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 435 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_p_0(
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 435 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 435 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 435 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 435 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 435 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 1437 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(
#line 1437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__V_11_11,
#line 1437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__V_12_12,
#line 1437 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__V_13_13,
#line 1437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1437 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3);

#line 1434 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1434 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 1434 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 1339 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0(
#line 1339 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1339 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13,
#line 1339 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14,
#line 1339 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15,
#line 1339 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Vars_16);

#line 1232 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1(
#line 1232 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1232 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1232 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1204 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0(
#line 1204 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PromiseType_10,
#line 1204 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1204 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__4_4,
#line 1204 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1204 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 1204 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 1204 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 446 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_p_0(
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_10,
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 446 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 446 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 1232 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1232__1_2_p_0(
#line 1232 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_39,
#line 1232 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_40);

#line 1144 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1144__1_2_p_0(
#line 1144 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1144 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39);

#line 149 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__149__1_2_p_0(
#line 149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_79,
#line 149 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_80);

#line 133 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__133__1_2_p_0(
#line 133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_73,
#line 133 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_74);

#line 1434 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0(
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_6,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_7,
#line 1434 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 1434 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0(
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_5,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_6,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 1490 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__dummy_term_with_context_2_p_0(
#line 1490 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_3,
#line 1490 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Term_4);

#line 1425 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(
#line 1425 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1);

#line 1414 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_purity_3_p_0(
#line 1414 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Purity_4,
#line 1414 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8,
#line 1414 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9);

#line 1394 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_name_4_p_0(
#line 1394 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__DefaultModuleName_5,
#line 1394 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1394 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_7,
#line 1394 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModule_8);

#line 1383 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_specifier_3_p_0(
#line 1383 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 1383 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1383 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModuleSpecifier_6);

#line 1360 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__desugar_field_access_1_f_0(
#line 1360 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_3);

#line 1314 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(
#line 1314 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 1314 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithInstTerm_5,
#line 1314 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithInst_6);

#line 1283 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(
#line 1283 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1283 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1283 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithTypeTerm_7,
#line 1283 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithType_8);

#line 1254 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(
#line 1254 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1254 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1254 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeDetismTerm_7,
#line 1254 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeMaybeDetism_8);

#line 1166 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_constraints_6_p_0(
#line 1166 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1166 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1166 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1166 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23,
#line 1166 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24,
#line 1166 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeClassInstConstraints_11);

#line 1144 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0_1(
#line 1144 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1144 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1144 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1101 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(
#line 1101 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 1101 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 1101 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RevAttributes0_8,
#line 1101 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__RevAttributes_9,
#line 1101 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeExistClassInstContext_10);

#line 1030 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_13_p_0_1(
#line 1030 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1030 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1030 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1017 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_13_p_0(
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_14,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_15,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_16,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_17,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_18,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_19,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_20,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_21,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Condition_22,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_23,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_24,
#line 1017 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_25,
#line 1017 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_26);

#line 974 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_12_p_0_1(
#line 974 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 974 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 974 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 961 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_12_p_0(
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_16,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_17,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_18,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_19,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Condition_20,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 961 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 961 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24);

#line 921 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_10_p_0(
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_11,
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_12,
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_13,
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Condition_14,
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_15,
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_16,
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_17,
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_18,
#line 921 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_19,
#line 921 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_20);

#line 886 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_7_p_0(
#line 886 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 886 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 886 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 886 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 886 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 886 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 886 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 873 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__type_and_mode_list_is_consistent_type_and_mode_1_p_0(
#line 873 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1);

#line 865 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__type_and_mode_list_is_consistent_type_only_1_p_0(
#line 865 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1);

#line 853 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__type_and_mode_list_is_consistent_1_p_0(
#line 853 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1);

#line 836 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_3_p_0(
#line 836 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_4,
#line 836 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 836 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeTypeAndMode_6);

#line 828 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(
#line 828 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_1,
#line 828 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 828 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3);

#line 753 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_2_14_p_0(
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncName_15,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Args_16,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ReturnArg_17,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncTerm_18,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_19,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_20,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_21,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Condition_22,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ExistQVars_23,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Constraints_24,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_25,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_26,
#line 753 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_27,
#line 753 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_28);

#line 670 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_9_p_0(
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Condition_13,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_14,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_15,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_16,
#line 670 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_17,
#line 670 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_18);

#line 569 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_decl_base_12_p_0(
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_13,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_15,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_16,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Condition_17,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_18,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_19,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_20,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 569 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 569 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24);

#line 507 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0(
#line 507 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_9,
#line 507 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 507 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 507 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 507 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 507 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 507 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 507 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 348 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_4(
#line 348 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 348 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 348 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 270 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_3(
#line 270 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 270 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 270 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 270 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_2(
#line 270 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 270 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 270 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 270 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_1(
#line 270 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 270 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 270 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 217 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0(
#line 217 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 217 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 217 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_11,
#line 217 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_12,
#line 217 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 217 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 217 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 217 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 176 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(
#line 176 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 176 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_8,
#line 176 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_9,
#line 176 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22,
#line 176 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 176 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_12);

#line 149 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_2(
#line 149 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 149 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 149 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 133 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_1(
#line 133 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 133 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 133 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 112 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0(
#line 112 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 112 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadTerm_9,
#line 112 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__BodyTerm0_10,
#line 112 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ProgVarSet0_11,
#line 112 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 112 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 112 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);


static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_1[137][2];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_2[6][3];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_3[29][1];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_4[3][5];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_5[2][6];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_6[1][7];




static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_1[137][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_item_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: atom expected after"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_item_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid module name in"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid version number in"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[17])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "and determinism both specified."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_item_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_item_scalar_common_3[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "without"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "specified"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_item_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "specified without argument modes."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_item_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "not specified."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_item_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: arguments have modes but"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "inst variables in"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: inconsistent constraints on"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "have modes."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: some but not all arguments"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in return type of"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "expected in"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[59])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_item_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[65])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: some but not all arguments have modes."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but function result does not."))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: function arguments have modes,"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[71])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but function arguments do not."))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: function result has mode,"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[52])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In function"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[79])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of function mode declaration."))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error in return mode"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[84])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_item_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid inst in"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[87])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(e.g. \":- module \'Foo\'.\")."))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must be quoted using single quotes"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[91])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: module names starting with capital letters"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[52])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In equation head:"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In clause head:"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: unrecognized declaration:"))
  },
  /* row 103 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 104 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 105 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 110 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 112 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error in"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "at"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error in arguments of"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration at"))
  },
  /* row 119 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 120 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 121 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[14])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 122 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[15])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 123 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[16])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: inconsistent constraints"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "on inst variables in function declaration:"))
  },
  /* row 126 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "on inst variables"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in predicate mode declaration:"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in function mode declaration:"))
  },
  /* row 131 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[21])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "function mode declaration at"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid determinism category"))
  },
  /* row 134 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[24])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 135 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[26])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 136 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[28])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_decl_attribute_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_1[8])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_io_item__parse_clause_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[0])),
    ((MR_Box) (parse_tree__prog_io_item__parse_clause_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[2])),
    ((MR_Box) (parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_3[29][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ":-"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ":- version_numbers"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "with_inst"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "with_type"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "true"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[16])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[26])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[33])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[37])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[42])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[50])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[63])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[67])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[69])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[73])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[77])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[89])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[86])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[95])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[19])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 23))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[21])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_item__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_io_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_item__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 1834 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1842 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1850 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1858 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1866 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1874 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1883 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1891 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1899 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1907 "parse_tree.prog_io_item.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item____vpti_pred_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1917 "parse_tree.prog_io_item.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_maker_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__prog_io_item____Unify____maker_2_0_10001)),
  ((MR_Box) (parse_tree__prog_io_item____Compare____maker_2_0_10001)),
  (MR_String) "parse_tree.prog_io_item",
  (MR_String) "maker",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_item____vpti_pred_2__pseudo_1__pseudo_2
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1938 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0_10001(
#line 1941 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1943 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 1945 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3,
#line 1947 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4)
#line 1949 "parse_tree.prog_io_item.c"
{
#line 1951 "parse_tree.prog_io_item.c"
  {
#line 1953 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1956 "parse_tree.prog_io_item.c"
    {
#line 1958 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item____Unify____maker_2_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_4));
    }
#line 1961 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 1963 "parse_tree.prog_io_item.c"
  }
#line 1965 "parse_tree.prog_io_item.c"
}

#line 1968 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0_10001(
#line 1971 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1973 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 1975 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_3,
#line 1977 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4,
#line 1979 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_5)
#line 1981 "parse_tree.prog_io_item.c"
{
#line 1983 "parse_tree.prog_io_item.c"
  {
#line 1985 "parse_tree.prog_io_item.c"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__1_1;

#line 1988 "parse_tree.prog_io_item.c"
    {
#line 1990 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item____Compare____maker_2_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), &parse_tree__prog_io_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_item__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_5));
    }
#line 1993 "parse_tree.prog_io_item.c"
    *parse_tree__prog_io_item__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__1_1));
#line 1995 "parse_tree.prog_io_item.c"
  }
#line 1997 "parse_tree.prog_io_item.c"
}

#line 435 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_p_0(
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 435 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 435 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 435 "prog_io_item.m"
{
#line 440 "prog_io_item.m"
  {
#line 440 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 440 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 440 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeItem0_16;

#line 441 "prog_io_item.m"
    {
#line 441 "prog_io_item.m"
      parse_tree__prog_io_util__parse_list_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_item__ParserPred_8, parse_tree__prog_io_item__Term_10, &parse_tree__prog_io_item__MaybeModuleSpecs_15);
    }
#line 1440 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15)) == (MR_mktag((MR_Integer) 0))))
#line 1442 "prog_io_item.m"
      parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 1440 "prog_io_item.m"
    else
#line 1440 "prog_io_item.m"
      {
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleSpecs_15, (MR_Integer) 0)));
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Y_26;
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleDefn_38;
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemModuleDefn_39;

#line 1463 "prog_io_item.m"
        {
#line 1463 "prog_io_item.m"
          parse_tree__prog_io_item__ModuleDefn_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1463 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1463 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 1) = ((MR_Box) (parse_tree__prog_io_item__X_25));
#line 1463 "prog_io_item.m"
        }
#line 1472 "prog_io_item.m"
        {
#line 1472 "prog_io_item.m"
          parse_tree__prog_io_item__ItemModuleDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_38));
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 1472 "prog_io_item.m"
        }
#line 1473 "prog_io_item.m"
        parse_tree__prog_io_item__Y_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_39);
#line 1440 "prog_io_item.m"
        {
#line 1440 "prog_io_item.m"
          parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_16, 0) = ((MR_Box) (parse_tree__prog_io_item__Y_26));
#line 1440 "prog_io_item.m"
        }
#line 1440 "prog_io_item.m"
      }
#line 444 "prog_io_item.m"
    {
#line 444 "prog_io_item.m"
      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_16, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__MaybeItem_14);
#line 444 "prog_io_item.m"
      return;
    }
#line 440 "prog_io_item.m"
  }
#line 435 "prog_io_item.m"
}

#line 435 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_p_0(
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 435 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 435 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 435 "prog_io_item.m"
{
#line 440 "prog_io_item.m"
  {
#line 440 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 440 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 440 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeItem0_16;

#line 441 "prog_io_item.m"
    {
#line 441 "prog_io_item.m"
      parse_tree__prog_io_util__parse_list_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_item__ParserPred_8, parse_tree__prog_io_item__Term_10, &parse_tree__prog_io_item__MaybeModuleSpecs_15);
    }
#line 1440 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15)) == (MR_mktag((MR_Integer) 0))))
#line 1442 "prog_io_item.m"
      parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 1440 "prog_io_item.m"
    else
#line 1440 "prog_io_item.m"
      {
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleSpecs_15, (MR_Integer) 0)));
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Y_26;
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleDefn_38;
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemModuleDefn_39;

#line 1459 "prog_io_item.m"
        {
#line 1459 "prog_io_item.m"
          parse_tree__prog_io_item__ModuleDefn_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1459 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1459 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 1) = ((MR_Box) (parse_tree__prog_io_item__X_25));
#line 1459 "prog_io_item.m"
        }
#line 1472 "prog_io_item.m"
        {
#line 1472 "prog_io_item.m"
          parse_tree__prog_io_item__ItemModuleDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_38));
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 1472 "prog_io_item.m"
        }
#line 1473 "prog_io_item.m"
        parse_tree__prog_io_item__Y_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_39);
#line 1440 "prog_io_item.m"
        {
#line 1440 "prog_io_item.m"
          parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_16, 0) = ((MR_Box) (parse_tree__prog_io_item__Y_26));
#line 1440 "prog_io_item.m"
        }
#line 1440 "prog_io_item.m"
      }
#line 444 "prog_io_item.m"
    {
#line 444 "prog_io_item.m"
      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_16, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__MaybeItem_14);
#line 444 "prog_io_item.m"
      return;
    }
#line 440 "prog_io_item.m"
  }
#line 435 "prog_io_item.m"
}

#line 435 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 435 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 435 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 435 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 435 "prog_io_item.m"
{
#line 440 "prog_io_item.m"
  {
#line 440 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 440 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 440 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeItem0_16;

#line 441 "prog_io_item.m"
    {
#line 441 "prog_io_item.m"
      parse_tree__prog_io_util__parse_list_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_item__ParserPred_8, parse_tree__prog_io_item__Term_10, &parse_tree__prog_io_item__MaybeModuleSpecs_15);
    }
#line 1440 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15)) == (MR_mktag((MR_Integer) 0))))
#line 1442 "prog_io_item.m"
      parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 1440 "prog_io_item.m"
    else
#line 1440 "prog_io_item.m"
      {
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleSpecs_15, (MR_Integer) 0)));
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Y_26;
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleDefn_38;
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemModuleDefn_39;

#line 1455 "prog_io_item.m"
        {
#line 1455 "prog_io_item.m"
          parse_tree__prog_io_item__ModuleDefn_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1455 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 1) = ((MR_Box) (parse_tree__prog_io_item__X_25));
#line 1455 "prog_io_item.m"
        }
#line 1472 "prog_io_item.m"
        {
#line 1472 "prog_io_item.m"
          parse_tree__prog_io_item__ItemModuleDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_38));
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 1472 "prog_io_item.m"
        }
#line 1473 "prog_io_item.m"
        parse_tree__prog_io_item__Y_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_39);
#line 1440 "prog_io_item.m"
        {
#line 1440 "prog_io_item.m"
          parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_16, 0) = ((MR_Box) (parse_tree__prog_io_item__Y_26));
#line 1440 "prog_io_item.m"
        }
#line 1440 "prog_io_item.m"
      }
#line 444 "prog_io_item.m"
    {
#line 444 "prog_io_item.m"
      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_16, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__MaybeItem_14);
#line 444 "prog_io_item.m"
      return;
    }
#line 440 "prog_io_item.m"
  }
#line 435 "prog_io_item.m"
}

#line 1437 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(
#line 1437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__V_11_11,
#line 1437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__V_12_12,
#line 1437 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__V_13_13,
#line 1437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1437 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3)
#line 1437 "prog_io_item.m"
{
#line 1440 "prog_io_item.m"
  {
#line 1440 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1440 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1442 "prog_io_item.m"
      *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_item__HeadVar__2_2;
#line 1440 "prog_io_item.m"
    else
#line 1440 "prog_io_item.m"
      {
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Y_6;
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleDefn_19;
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemModuleDefn_20;

#line 1479 "prog_io_item.m"
        {
#line 1479 "prog_io_item.m"
          parse_tree__prog_io_item__ModuleDefn_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1479 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_19, 1) = ((MR_Box) (parse_tree__prog_io_item__V_11_11));
#line 1479 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_19, 2) = ((MR_Box) (parse_tree__prog_io_item__X_5));
#line 1479 "prog_io_item.m"
        }
#line 1480 "prog_io_item.m"
        {
#line 1480 "prog_io_item.m"
          parse_tree__prog_io_item__ItemModuleDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1480 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_20, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_19));
#line 1480 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_20, 1) = ((MR_Box) (parse_tree__prog_io_item__V_12_12));
#line 1480 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_20, 2) = ((MR_Box) (parse_tree__prog_io_item__V_13_13));
#line 1480 "prog_io_item.m"
        }
#line 1481 "prog_io_item.m"
        parse_tree__prog_io_item__Y_6 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_20);
#line 1440 "prog_io_item.m"
        {
#line 1440 "prog_io_item.m"
          MR_Word base;
#line 1440 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "prog_io_item.m"
          *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 1440 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Y_6));
#line 1440 "prog_io_item.m"
        }
#line 1440 "prog_io_item.m"
      }
#line 1440 "prog_io_item.m"
  }
#line 1437 "prog_io_item.m"
}

#line 1434 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1434 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 1434 "prog_io_item.m"
{
#line 1434 "prog_io_item.m"
  {
#line 1434 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1434 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar1_4 = parse_tree__prog_io_item__HeadVar__2_2;
#line 1434 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar2_5 = parse_tree__prog_io_item__HeadVar__3_3;

#line 1434 "prog_io_item.m"
    {
#line 1434 "prog_io_item.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar2_5);
#line 1434 "prog_io_item.m"
      return;
    }
#line 1434 "prog_io_item.m"
  }
#line 1434 "prog_io_item.m"
}

#line 1434 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 1434 "prog_io_item.m"
{
#line 1434 "prog_io_item.m"
  {
#line 1434 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1434 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar1_3 = parse_tree__prog_io_item__HeadVar__1_1;
#line 1434 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar2_4 = parse_tree__prog_io_item__HeadVar__2_2;

#line 1434 "prog_io_item.m"
    {
#line 1434 "prog_io_item.m"
      return parse_tree__prog_io_item__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io_item__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar2_4);
    }
#line 1434 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1434 "prog_io_item.m"
  }
#line 1434 "prog_io_item.m"
}

#line 1339 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0(
#line 1339 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1339 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13,
#line 1339 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14,
#line 1339 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15,
#line 1339 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Vars_16)
#line 1339 "prog_io_item.m"
{
#line 1349 "prog_io_item.m"
  while (MR_TRUE)
#line 1349 "prog_io_item.m"
    {
#line 1349 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 1349 "prog_io_item.m"
      {
#line 1349 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13)) == (MR_mktag((MR_Integer) 1)));
#line 1349 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__QuantVars_11;
#line 1349 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17;
#line 1344 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_18_18;
#line 1344 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_19_19;
#line 1344 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;
#line 1344 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_12_12;

#line 1345 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1345 "prog_io_item.m"
          {
#line 1345 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13, (MR_Integer) 0)));
#line 1345 "prog_io_item.m"
            parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13, (MR_Integer) 1)));
#line 1344 "prog_io_item.m"
            parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1344 "prog_io_item.m"
            parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1344 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 2)));
#line 1344 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1344 "prog_io_item.m"
              {
#line 1344 "prog_io_item.m"
                parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1344 "prog_io_item.m"
                parse_tree__prog_io_item__QuantVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__V_19_19, (MR_Integer) 1)));
#line 1344 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__QuantType_7 == parse_tree__prog_io_item__V_24_24);
#line 1344 "prog_io_item.m"
              }
#line 1345 "prog_io_item.m"
          }
#line 1349 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1347 "prog_io_item.m"
          {
#line 1347 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20;

#line 1347 "prog_io_item.m"
            {
#line 1347 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15, parse_tree__prog_io_item__QuantVars_11);
            }
#line 1348 "prog_io_item.m"
            /* direct tailcall eliminated */
#line 1348 "prog_io_item.m"
            {
#line 1348 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_13 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17;
#line 1348 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0__tmp_copy_15 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20;

#line 1348 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_0__tmp_copy_15;
#line 1348 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_13;
#line 1348 "prog_io_item.m"
            }
#line 1348 "prog_io_item.m"
            continue;
#line 1347 "prog_io_item.m"
          }
#line 1349 "prog_io_item.m"
        else
#line 1350 "prog_io_item.m"
          {
#line 1350 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_Vars_16 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15;
#line 1350 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13;
#line 1350 "prog_io_item.m"
          }
#line 1349 "prog_io_item.m"
      }
#line 1349 "prog_io_item.m"
      break;
#line 1349 "prog_io_item.m"
    }
#line 1339 "prog_io_item.m"
}

#line 1232 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1(
#line 1232 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1232 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1232 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1232 "prog_io_item.m"
{
#line 1232 "prog_io_item.m"
  {
#line 1232 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1232 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_40;

#line 1232 "prog_io_item.m"
    {
#line 1232 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1232__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_40);
    }
#line 1232 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_40));
#line 1232 "prog_io_item.m"
  }
#line 1232 "prog_io_item.m"
}

#line 1204 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0(
#line 1204 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PromiseType_10,
#line 1204 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1204 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__4_4,
#line 1204 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1204 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 1204 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 1204 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 1204 "prog_io_item.m"
{
#line 1209 "prog_io_item.m"
  {
#line 1209 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1209 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_37_37;
#line 1209 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_38_38;
#line 1209 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Term_12;
#line 1209 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet0_17;
#line 1209 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ContextPieces_18;
#line 1209 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeGoal0_19;
#line 1209 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet_20;
#line 1209 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;

#line 1208 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1208 "prog_io_item.m"
      {
#line 1208 "prog_io_item.m"
        parse_tree__prog_io_item__Term_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__4_4, (MR_Integer) 0)));
#line 1208 "prog_io_item.m"
        parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__4_4, (MR_Integer) 1)));
#line 1208 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1209 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1209 "prog_io_item.m"
          {
#line 2626 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 2628 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1210 "prog_io_item.m"
            {
#line 1210 "prog_io_item.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_37_37, parse_tree__prog_io_item__TypeCtorInfo_38_38, parse_tree__prog_io_item__VarSet_11, &parse_tree__prog_io_item__ProgVarSet0_17);
            }
#line 1211 "prog_io_item.m"
            parse_tree__prog_io_item__ContextPieces_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1212 "prog_io_item.m"
            {
#line 1212 "prog_io_item.m"
              parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__ContextPieces_18, &parse_tree__prog_io_item__MaybeGoal0_19, parse_tree__prog_io_item__ProgVarSet0_17, &parse_tree__prog_io_item__ProgVarSet_20);
            }
#line 1239 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeGoal0_19)) == (MR_mktag((MR_Integer) 0))))
#line 1241 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = (MR_Word) parse_tree__prog_io_item__MaybeGoal0_19;
#line 1239 "prog_io_item.m"
            else
#line 1214 "prog_io_item.m"
              {
#line 1214 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeGoal0_19, (MR_Integer) 0)));
#line 1214 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__UnivVars_25;
#line 1214 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Goal_26;
#line 1214 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemPromise_28;
#line 1214 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_29;

#line 1225 "prog_io_item.m"
                if ((parse_tree__prog_io_item__PromiseType_10 == (MR_Integer) 3))
#line 1221 "prog_io_item.m"
                  {
#line 1221 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__UnivVars0_22;
#line 1221 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__AllGoal_23;
#line 1218 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 0)));
#line 1218 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 1)));

#line 1218 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__V_35_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_35_35, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1218 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1218 "prog_io_item.m"
                      {
#line 1218 "prog_io_item.m"
                        parse_tree__prog_io_item__UnivVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_35_35, (MR_Integer) 1)));
#line 1218 "prog_io_item.m"
                        parse_tree__prog_io_item__AllGoal_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_35_35, (MR_Integer) 2)));
#line 1219 "prog_io_item.m"
                        parse_tree__prog_io_item__UnivVars_25 = parse_tree__prog_io_item__UnivVars0_22;
#line 1220 "prog_io_item.m"
                        parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__AllGoal_23;
#line 1218 "prog_io_item.m"
                      }
#line 1218 "prog_io_item.m"
                    else
#line 1222 "prog_io_item.m"
                      {
#line 1222 "prog_io_item.m"
                        parse_tree__prog_io_item__UnivVars_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1223 "prog_io_item.m"
                        parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__Goal0_21;
#line 1222 "prog_io_item.m"
                      }
#line 1221 "prog_io_item.m"
                  }
#line 1225 "prog_io_item.m"
                else
#line 1229 "prog_io_item.m"
                  {
#line 1229 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__UnivVars0_36;
#line 1230 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_27_27;

#line 1230 "prog_io_item.m"
                    {
#line 1230 "prog_io_item.m"
                      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__Attributes_13, &parse_tree__prog_io_item__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__UnivVars0_36);
                    }
#line 1232 "prog_io_item.m"
                    {
#line 1232 "prog_io_item.m"
                      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[10], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[5], parse_tree__prog_io_item__UnivVars0_36, &parse_tree__prog_io_item__UnivVars_25);
                    }
#line 1233 "prog_io_item.m"
                    parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__Goal0_21;
#line 1229 "prog_io_item.m"
                  }
#line 1235 "prog_io_item.m"
                {
#line 1235 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemPromise_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1235 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 0) = ((MR_Box) (parse_tree__prog_io_item__PromiseType_10));
#line 1235 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 1) = ((MR_Box) (parse_tree__prog_io_item__Goal_26));
#line 1235 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_20));
#line 1235 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 3) = ((MR_Box) (parse_tree__prog_io_item__UnivVars_25));
#line 1235 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 4) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 1235 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 5) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 1235 "prog_io_item.m"
                }
#line 1237 "prog_io_item.m"
                {
#line 1237 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1237 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_29, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPromise_28));
#line 1237 "prog_io_item.m"
                }
#line 1238 "prog_io_item.m"
                {
#line 1238 "prog_io_item.m"
                  MR_Word base;
#line 1238 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 1238 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_29));
#line 1238 "prog_io_item.m"
                }
#line 1214 "prog_io_item.m"
              }
#line 1239 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1209 "prog_io_item.m"
          }
#line 1208 "prog_io_item.m"
      }
#line 1209 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1209 "prog_io_item.m"
  }
#line 1204 "prog_io_item.m"
}

#line 446 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_p_0(
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_10,
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 446 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 446 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 446 "prog_io_item.m"
{
#line 450 "prog_io_item.m"
  {
#line 450 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
#line 450 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VersionNumberTerm_15;
#line 450 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleNameTerm_16;
#line 450 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VersionNumbersTerm_17;
#line 450 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_38_38;
#line 450 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_39_39;
#line 450 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_40_40;
#line 453 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__VersionNumber_18;
#line 453 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_41_41;
#line 453 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_42_42;
#line 453 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__V_100_100;
#line 453 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;

#line 451 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 451 "prog_io_item.m"
      {
#line 451 "prog_io_item.m"
        parse_tree__prog_io_item__VersionNumberTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_10, (MR_Integer) 0)));
#line 451 "prog_io_item.m"
        parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_10, (MR_Integer) 1)));
#line 451 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 451 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 451 "prog_io_item.m"
          {
#line 451 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleNameTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, (MR_Integer) 0)));
#line 451 "prog_io_item.m"
            parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, (MR_Integer) 1)));
#line 451 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 451 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 451 "prog_io_item.m"
              {
#line 451 "prog_io_item.m"
                parse_tree__prog_io_item__VersionNumbersTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_39_39, (MR_Integer) 0)));
#line 451 "prog_io_item.m"
                parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_39_39, (MR_Integer) 1)));
#line 451 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 450 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 450 "prog_io_item.m"
                  {
#line 453 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__VersionNumberTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 453 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 453 "prog_io_item.m"
                      {
#line 453 "prog_io_item.m"
                        parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 0)));
#line 453 "prog_io_item.m"
                        parse_tree__prog_io_item__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 1)));
#line 453 "prog_io_item.m"
                        parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 2)));
#line 453 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 453 "prog_io_item.m"
                          {
#line 453 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 453 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 453 "prog_io_item.m"
                              {
#line 453 "prog_io_item.m"
                                parse_tree__prog_io_item__VersionNumber_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, (MR_Integer) 0)));
#line 454 "prog_io_item.m"
                                {
#line 454 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_100_100 = recompilation__version__version_numbers_version_number_0_f_0();
                                }
#line 454 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__VersionNumber_18 == parse_tree__prog_io_item__V_100_100);
#line 453 "prog_io_item.m"
                              }
#line 453 "prog_io_item.m"
                          }
#line 453 "prog_io_item.m"
                      }
#line 479 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 471 "prog_io_item.m"
                      {
#line 456 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_101_101;

#line 456 "prog_io_item.m"
                        {
#line 456 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleNameTerm_16, &parse_tree__prog_io_item__V_101_101);
                        }
#line 456 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 456 "prog_io_item.m"
                          {
#line 456 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__V_101_101);
                          }
#line 471 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 458 "prog_io_item.m"
                          {
#line 458 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__MaybeItem0_20;

#line 457 "prog_io_item.m"
                            {
#line 457 "prog_io_item.m"
                              recompilation__version__parse_version_numbers_2_p_0(parse_tree__prog_io_item__VersionNumbersTerm_17, &parse_tree__prog_io_item__MaybeItem0_20);
                            }
#line 467 "prog_io_item.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItem0_20)) == (MR_mktag((MR_Integer) 0))))
#line 469 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItem_14 = (MR_Word) parse_tree__prog_io_item__MaybeItem0_20;
#line 467 "prog_io_item.m"
                            else
#line 460 "prog_io_item.m"
                              {
#line 460 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__VersionNumbers_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_20, (MR_Integer) 0)));
#line 460 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ModuleDefn_22;
#line 460 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ItemModuleDefn_23;
#line 460 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Item_24;
#line 460 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeItem1_25;

#line 461 "prog_io_item.m"
                                {
#line 461 "prog_io_item.m"
                                  parse_tree__prog_io_item__ModuleDefn_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 461 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 461 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_22, 1) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_8));
#line 461 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_22, 2) = ((MR_Box) (parse_tree__prog_io_item__VersionNumbers_21));
#line 461 "prog_io_item.m"
                                }
#line 462 "prog_io_item.m"
                                {
#line 462 "prog_io_item.m"
                                  parse_tree__prog_io_item__ItemModuleDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 462 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_23, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_22));
#line 462 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_23, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 462 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_23, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 462 "prog_io_item.m"
                                }
#line 464 "prog_io_item.m"
                                parse_tree__prog_io_item__Item_24 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_23);
#line 465 "prog_io_item.m"
                                {
#line 465 "prog_io_item.m"
                                  parse_tree__prog_io_item__MaybeItem1_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 465 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem1_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_24));
#line 465 "prog_io_item.m"
                                }
#line 466 "prog_io_item.m"
                                {
#line 466 "prog_io_item.m"
                                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem1_25, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__MaybeItem_14);
                                }
#line 460 "prog_io_item.m"
                              }
#line 458 "prog_io_item.m"
                          }
#line 471 "prog_io_item.m"
                        else
#line 473 "prog_io_item.m"
                          {
#line 473 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Spec_28;
#line 473 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_56_56;
#line 473 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_57_57;
#line 473 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_58_58;
#line 473 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_63_63;

#line 475 "prog_io_item.m"
                            {
#line 475 "prog_io_item.m"
                              parse_tree__prog_io_item__V_58_58 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleNameTerm_16);
                            }
#line 475 "prog_io_item.m"
                            {
#line 475 "prog_io_item.m"
                              parse_tree__prog_io_item__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 475 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_item__V_58_58));
#line 475 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[135])));
#line 475 "prog_io_item.m"
                            }
#line 476 "prog_io_item.m"
                            {
#line 476 "prog_io_item.m"
                              parse_tree__prog_io_item__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_item__V_57_57));
#line 476 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "prog_io_item.m"
                            }
#line 474 "prog_io_item.m"
                            {
#line 474 "prog_io_item.m"
                              parse_tree__prog_io_item__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 474 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 474 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 474 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_28, 2) = ((MR_Box) (parse_tree__prog_io_item__V_56_56));
#line 474 "prog_io_item.m"
                            }
#line 477 "prog_io_item.m"
                            {
#line 477 "prog_io_item.m"
                              parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_28));
#line 477 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "prog_io_item.m"
                            }
#line 477 "prog_io_item.m"
                            {
#line 477 "prog_io_item.m"
                              MR_Word base;
#line 477 "prog_io_item.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 477 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 477 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 477 "prog_io_item.m"
                            }
#line 473 "prog_io_item.m"
                          }
#line 471 "prog_io_item.m"
                      }
#line 479 "prog_io_item.m"
                    else
#line 490 "prog_io_item.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_item__VersionNumberTerm_15)) == (MR_mktag((MR_Integer) 0))))
#line 481 "prog_io_item.m"
                        {
#line 481 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__DummyTerm_33;
#line 481 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__Warning_34;
#line 481 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__ItemNothing_35;
#line 481 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_90_90;
#line 481 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__Item_91;

#line 484 "prog_io_item.m"
                          {
#line 484 "prog_io_item.m"
                            parse_tree__prog_io_item__dummy_term_with_context_2_p_0(parse_tree__prog_io_item__Context_12, &parse_tree__prog_io_item__DummyTerm_33);
                          }
#line 485 "prog_io_item.m"
                          {
#line 485 "prog_io_item.m"
                            parse_tree__prog_io_item__Warning_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 485 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[27])));
#line 485 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_34, 1) = ((MR_Box) ((MR_String) "interface file needs to be recreated, the version numbers are out of date"));
#line 485 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_34, 2) = ((MR_Box) (parse_tree__prog_io_item__DummyTerm_33));
#line 485 "prog_io_item.m"
                          }
#line 487 "prog_io_item.m"
                          {
#line 487 "prog_io_item.m"
                            parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 487 "prog_io_item.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_item__Warning_34));
#line 487 "prog_io_item.m"
                          }
#line 487 "prog_io_item.m"
                          {
#line 487 "prog_io_item.m"
                            parse_tree__prog_io_item__ItemNothing_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 487 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_35, 0) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 487 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_35, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 487 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_35, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 487 "prog_io_item.m"
                          }
#line 488 "prog_io_item.m"
                          {
#line 488 "prog_io_item.m"
                            parse_tree__prog_io_item__Item_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "prog_io_item.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 488 "prog_io_item.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_91, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemNothing_35));
#line 488 "prog_io_item.m"
                          }
#line 489 "prog_io_item.m"
                          {
#line 489 "prog_io_item.m"
                            MR_Word base;
#line 489 "prog_io_item.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 489 "prog_io_item.m"
                            *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 489 "prog_io_item.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_91));
#line 489 "prog_io_item.m"
                          }
#line 481 "prog_io_item.m"
                        }
#line 490 "prog_io_item.m"
                      else
#line 491 "prog_io_item.m"
                        {
#line 491 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__VersionNumberContext_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 1)));
#line 491 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_78_78;
#line 491 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_79_79;
#line 491 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_84_84;
#line 491 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__Spec_93;
#line 491 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 0)));

#line 495 "prog_io_item.m"
                          {
#line 495 "prog_io_item.m"
                            parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 495 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__VersionNumberContext_37));
#line 495 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[136])));
#line 495 "prog_io_item.m"
                          }
#line 495 "prog_io_item.m"
                          {
#line 495 "prog_io_item.m"
                            parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "prog_io_item.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 495 "prog_io_item.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 495 "prog_io_item.m"
                          }
#line 494 "prog_io_item.m"
                          {
#line 494 "prog_io_item.m"
                            parse_tree__prog_io_item__Spec_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 494 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 494 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_93, 2) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 494 "prog_io_item.m"
                          }
#line 496 "prog_io_item.m"
                          {
#line 496 "prog_io_item.m"
                            parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "prog_io_item.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_93));
#line 496 "prog_io_item.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 496 "prog_io_item.m"
                          }
#line 496 "prog_io_item.m"
                          {
#line 496 "prog_io_item.m"
                            MR_Word base;
#line 496 "prog_io_item.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 496 "prog_io_item.m"
                            *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 496 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 496 "prog_io_item.m"
                          }
#line 491 "prog_io_item.m"
                        }
#line 479 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 450 "prog_io_item.m"
                  }
#line 451 "prog_io_item.m"
              }
#line 451 "prog_io_item.m"
          }
#line 451 "prog_io_item.m"
      }
#line 450 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 450 "prog_io_item.m"
  }
#line 446 "prog_io_item.m"
}

#line 1232 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1232__1_2_p_0(
#line 1232 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_39,
#line 1232 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_40)
#line 1232 "prog_io_item.m"
{
#line 1232 "prog_io_item.m"
  {
#line 1232 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1232 "prog_io_item.m"
    {
#line 1232 "prog_io_item.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_39, parse_tree__prog_io_item__HeadVar__2_40);
#line 1232 "prog_io_item.m"
      return;
    }
#line 1232 "prog_io_item.m"
  }
#line 1232 "prog_io_item.m"
}

#line 1144 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1144__1_2_p_0(
#line 1144 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1144 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39)
#line 1144 "prog_io_item.m"
{
#line 1144 "prog_io_item.m"
  {
#line 1144 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1144 "prog_io_item.m"
    {
#line 1144 "prog_io_item.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__HeadVar__1_38, parse_tree__prog_io_item__HeadVar__2_39);
#line 1144 "prog_io_item.m"
      return;
    }
#line 1144 "prog_io_item.m"
  }
#line 1144 "prog_io_item.m"
}

#line 149 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__149__1_2_p_0(
#line 149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_79,
#line 149 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_80)
#line 149 "prog_io_item.m"
{
#line 149 "prog_io_item.m"
  {
#line 149 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 149 "prog_io_item.m"
    {
#line 149 "prog_io_item.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_79, parse_tree__prog_io_item__HeadVar__2_80);
#line 149 "prog_io_item.m"
      return;
    }
#line 149 "prog_io_item.m"
  }
#line 149 "prog_io_item.m"
}

#line 133 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__133__1_2_p_0(
#line 133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_73,
#line 133 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_74)
#line 133 "prog_io_item.m"
{
#line 133 "prog_io_item.m"
  {
#line 133 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 133 "prog_io_item.m"
    {
#line 133 "prog_io_item.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_73, parse_tree__prog_io_item__HeadVar__2_74);
#line 133 "prog_io_item.m"
      return;
    }
#line 133 "prog_io_item.m"
  }
#line 133 "prog_io_item.m"
}

#line 1434 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0(
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_6,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_7,
#line 1434 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 1434 "prog_io_item.m"
{
#line 1434 "prog_io_item.m"
  {
#line 1434 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1434 "prog_io_item.m"
    {
#line 1434 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__HeadVar__2_2, parse_tree__prog_io_item__HeadVar__3_3);
#line 1434 "prog_io_item.m"
      return;
    }
#line 1434 "prog_io_item.m"
  }
#line 1434 "prog_io_item.m"
}

#line 1434 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0(
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_5,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_6,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 1434 "prog_io_item.m"
{
#line 1434 "prog_io_item.m"
  {
#line 1434 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1434 "prog_io_item.m"
    {
#line 1434 "prog_io_item.m"
      return parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__HeadVar__2_2);
    }
#line 1434 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1434 "prog_io_item.m"
  }
#line 1434 "prog_io_item.m"
}

#line 1490 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__dummy_term_with_context_2_p_0(
#line 1490 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_3,
#line 1490 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Term_4)
#line 1490 "prog_io_item.m"
{
#line 1492 "prog_io_item.m"
  {
#line 1492 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1493 "prog_io_item.m"
    {
#line 1493 "prog_io_item.m"
      MR_Word base;
#line 1493 "prog_io_item.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1493 "prog_io_item.m"
      *parse_tree__prog_io_item__Term_4 = base;
#line 1493 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[25]));
#line 1493 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1493 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_3));
#line 1493 "prog_io_item.m"
    }
#line 1492 "prog_io_item.m"
  }
#line 1490 "prog_io_item.m"
}

#line 1425 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(
#line 1425 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1)
#line 1425 "prog_io_item.m"
{
#line 1427 "prog_io_item.m"
  {
#line 1427 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1427 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__HeadVar__2_2;

#line 1427 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__1_1 == (MR_Integer) 1))
#line 1427 "prog_io_item.m"
      parse_tree__prog_io_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[54]);
#line 1427 "prog_io_item.m"
    else
#line 1429 "prog_io_item.m"
      parse_tree__prog_io_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[97]);
#line 1427 "prog_io_item.m"
    return parse_tree__prog_io_item__HeadVar__2_2;
#line 1427 "prog_io_item.m"
  }
#line 1425 "prog_io_item.m"
}

#line 1414 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_purity_3_p_0(
#line 1414 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Purity_4,
#line 1414 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8,
#line 1414 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9)
#line 1414 "prog_io_item.m"
{
#line 1419 "prog_io_item.m"
  {
#line 1419 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8)) == (MR_mktag((MR_Integer) 1)));
#line 1419 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Purity0_6;
#line 1419 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10;
#line 1417 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_11_11;
#line 1417 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_12_12;
#line 1417 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_7_7;

#line 1417 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1417 "prog_io_item.m"
      {
#line 1417 "prog_io_item.m"
        parse_tree__prog_io_item__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8, (MR_Integer) 0)));
#line 1417 "prog_io_item.m"
        parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8, (MR_Integer) 1)));
#line 1417 "prog_io_item.m"
        parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_11_11, (MR_Integer) 0)));
#line 1417 "prog_io_item.m"
        parse_tree__prog_io_item__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_11_11, (MR_Integer) 1)));
#line 1417 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1417 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1417 "prog_io_item.m"
          parse_tree__prog_io_item__Purity0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_12_12, (MR_Integer) 0)));
#line 1417 "prog_io_item.m"
      }
#line 1419 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1418 "prog_io_item.m"
      {
#line 1418 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10;
#line 1418 "prog_io_item.m"
        *parse_tree__prog_io_item__Purity_4 = parse_tree__prog_io_item__Purity0_6;
#line 1418 "prog_io_item.m"
      }
#line 1419 "prog_io_item.m"
    else
#line 1420 "prog_io_item.m"
      {
#line 1420 "prog_io_item.m"
        *parse_tree__prog_io_item__Purity_4 = (MR_Integer) 0;
#line 1420 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8;
#line 1420 "prog_io_item.m"
      }
#line 1419 "prog_io_item.m"
  }
#line 1414 "prog_io_item.m"
}

#line 1394 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_name_4_p_0(
#line 1394 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__DefaultModuleName_5,
#line 1394 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1394 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_7,
#line 1394 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModule_8)
#line 1394 "prog_io_item.m"
{
#line 1399 "prog_io_item.m"
  {
#line 1399 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1399 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__Term_7)) == (MR_mktag((MR_Integer) 0))))
#line 1408 "prog_io_item.m"
      {
#line 1408 "prog_io_item.m"
        parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_item__DefaultModuleName_5, parse_tree__prog_io_item__VarSet_6, parse_tree__prog_io_item__Term_7, parse_tree__prog_io_item__MaybeModule_8);
#line 1408 "prog_io_item.m"
        return;
      }
#line 1399 "prog_io_item.m"
    else
#line 1399 "prog_io_item.m"
      {
#line 1399 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Term_7, (MR_Integer) 1)));
#line 1399 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_12;
#line 1399 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 1399 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 1399 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1399 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Term_7, (MR_Integer) 0)));

#line 1404 "prog_io_item.m"
        {
#line 1404 "prog_io_item.m"
          parse_tree__prog_io_item__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1404 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_10));
#line 1404 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[134])));
#line 1404 "prog_io_item.m"
        }
#line 1404 "prog_io_item.m"
        {
#line 1404 "prog_io_item.m"
          parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1404 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_item__V_30_30));
#line 1404 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1404 "prog_io_item.m"
        }
#line 1403 "prog_io_item.m"
        {
#line 1403 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1403 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1403 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1403 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 1403 "prog_io_item.m"
        }
#line 1405 "prog_io_item.m"
        {
#line 1405 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_12));
#line 1405 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1405 "prog_io_item.m"
        }
#line 1405 "prog_io_item.m"
        {
#line 1405 "prog_io_item.m"
          MR_Word base;
#line 1405 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1405 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeModule_8 = base;
#line 1405 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 1405 "prog_io_item.m"
        }
#line 1399 "prog_io_item.m"
      }
#line 1399 "prog_io_item.m"
  }
#line 1394 "prog_io_item.m"
}

#line 1383 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_specifier_3_p_0(
#line 1383 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 1383 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1383 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModuleSpecifier_6)
#line 1383 "prog_io_item.m"
{
#line 1387 "prog_io_item.m"
  {
#line 1387 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1387 "prog_io_item.m"
    {
#line 1387 "prog_io_item.m"
      parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__VarSet_4, parse_tree__prog_io_item__Term_5, parse_tree__prog_io_item__MaybeModuleSpecifier_6);
#line 1387 "prog_io_item.m"
      return;
    }
#line 1387 "prog_io_item.m"
  }
#line 1383 "prog_io_item.m"
}

#line 1360 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__desugar_field_access_1_f_0(
#line 1360 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_3)
#line 1360 "prog_io_item.m"
{
#line 1368 "prog_io_item.m"
  {
#line 1368 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1368 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DesugaredTerm_4;
#line 1368 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__A_5;
#line 1368 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Context_7;
#line 1368 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Bs_9;
#line 1368 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;
#line 1364 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__RHS_6;
#line 1364 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 1364 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_17_17;
#line 1364 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_18_18;
#line 1364 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1364 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_20_20;
#line 1365 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_10_10;
#line 1365 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__FieldName_8;

#line 1364 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1364 "prog_io_item.m"
      {
#line 1364 "prog_io_item.m"
        parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 0)));
#line 1364 "prog_io_item.m"
        parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 1)));
#line 1364 "prog_io_item.m"
        parse_tree__prog_io_item__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 2)));
#line 1364 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 1364 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1364 "prog_io_item.m"
          {
#line 1364 "prog_io_item.m"
            parse_tree__prog_io_item__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 1364 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_17_17, (MR_String) "^") == 0);
#line 1364 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1364 "prog_io_item.m"
              {
#line 1364 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 1364 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1364 "prog_io_item.m"
                  {
#line 1364 "prog_io_item.m"
                    parse_tree__prog_io_item__A_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1364 "prog_io_item.m"
                    parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1364 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 1364 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1364 "prog_io_item.m"
                      {
#line 1364 "prog_io_item.m"
                        parse_tree__prog_io_item__RHS_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1364 "prog_io_item.m"
                        parse_tree__prog_io_item__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, (MR_Integer) 1)));
#line 1364 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1364 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1364 "prog_io_item.m"
                          {
#line 1365 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__RHS_6)) == (MR_mktag((MR_Integer) 0)));
#line 1365 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 1365 "prog_io_item.m"
                              {
#line 1365 "prog_io_item.m"
                                parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 0)));
#line 1365 "prog_io_item.m"
                                parse_tree__prog_io_item__Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 1)));
#line 1365 "prog_io_item.m"
                                parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 2)));
#line 1365 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 1365 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 1365 "prog_io_item.m"
                                  parse_tree__prog_io_item__FieldName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 1365 "prog_io_item.m"
                              }
#line 1364 "prog_io_item.m"
                          }
#line 1364 "prog_io_item.m"
                      }
#line 1364 "prog_io_item.m"
                  }
#line 1364 "prog_io_item.m"
              }
#line 1364 "prog_io_item.m"
          }
#line 1364 "prog_io_item.m"
      }
#line 1368 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1367 "prog_io_item.m"
      {
#line 1367 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 1367 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;

#line 1367 "prog_io_item.m"
        {
#line 1367 "prog_io_item.m"
          parse_tree__prog_io_item__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_item__A_5));
#line 1367 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1367 "prog_io_item.m"
        }
#line 1367 "prog_io_item.m"
        {
#line 1367 "prog_io_item.m"
          parse_tree__prog_io_item__V_23_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__Bs_9, parse_tree__prog_io_item__V_24_24);
        }
#line 1367 "prog_io_item.m"
        {
#line 1367 "prog_io_item.m"
          parse_tree__prog_io_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io_item__V_21_21));
#line 1367 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io_item__V_23_23));
#line 1367 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_7));
#line 1367 "prog_io_item.m"
        }
#line 1367 "prog_io_item.m"
      }
#line 1368 "prog_io_item.m"
    else
#line 1375 "prog_io_item.m"
      {
#line 1375 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_12;
#line 1375 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__A_44;
#line 1375 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_46;
#line 1375 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__FieldName_47;
#line 1375 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Bs_48;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__LHS_11;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_26_26;
#line 1369 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_27_27;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_28_28;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_31_31;
#line 1369 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_32_32;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_34_34;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__RHS_43;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_13_13;
#line 1371 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_14_14;

#line 1369 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1369 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1369 "prog_io_item.m"
          {
#line 1369 "prog_io_item.m"
            parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 0)));
#line 1369 "prog_io_item.m"
            parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 1)));
#line 1369 "prog_io_item.m"
            parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 2)));
#line 1369 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_26_26)) == (MR_mktag((MR_Integer) 0)));
#line 1369 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1369 "prog_io_item.m"
              {
#line 1369 "prog_io_item.m"
                parse_tree__prog_io_item__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 0)));
#line 1369 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_27_27, (MR_String) ":=") == 0);
#line 1369 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1369 "prog_io_item.m"
                  {
#line 1369 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1369 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1369 "prog_io_item.m"
                      {
#line 1369 "prog_io_item.m"
                        parse_tree__prog_io_item__LHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 0)));
#line 1369 "prog_io_item.m"
                        parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 1)));
#line 1369 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 1369 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1369 "prog_io_item.m"
                          {
#line 1369 "prog_io_item.m"
                            parse_tree__prog_io_item__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 0)));
#line 1369 "prog_io_item.m"
                            parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 1)));
#line 1369 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1369 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 1369 "prog_io_item.m"
                              {
#line 1370 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__LHS_11)) == (MR_mktag((MR_Integer) 0)));
#line 1370 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 1370 "prog_io_item.m"
                                  {
#line 1370 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 0)));
#line 1370 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 1)));
#line 1370 "prog_io_item.m"
                                    parse_tree__prog_io_item__Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 2)));
#line 1370 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 1370 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 1370 "prog_io_item.m"
                                      {
#line 1370 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 1370 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_32_32, (MR_String) "^") == 0);
#line 1369 "prog_io_item.m"
                                        if (parse_tree__prog_io_item__succeeded)
#line 1369 "prog_io_item.m"
                                          {
#line 1370 "prog_io_item.m"
                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1370 "prog_io_item.m"
                                            if (parse_tree__prog_io_item__succeeded)
#line 1370 "prog_io_item.m"
                                              {
#line 1370 "prog_io_item.m"
                                                parse_tree__prog_io_item__A_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 0)));
#line 1370 "prog_io_item.m"
                                                parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 1)));
#line 1370 "prog_io_item.m"
                                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1370 "prog_io_item.m"
                                                if (parse_tree__prog_io_item__succeeded)
#line 1370 "prog_io_item.m"
                                                  {
#line 1370 "prog_io_item.m"
                                                    parse_tree__prog_io_item__RHS_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 0)));
#line 1370 "prog_io_item.m"
                                                    parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 1)));
#line 1370 "prog_io_item.m"
                                                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1369 "prog_io_item.m"
                                                    if (parse_tree__prog_io_item__succeeded)
#line 1369 "prog_io_item.m"
                                                      {
#line 1371 "prog_io_item.m"
                                                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__RHS_43)) == (MR_mktag((MR_Integer) 0)));
#line 1371 "prog_io_item.m"
                                                        if (parse_tree__prog_io_item__succeeded)
#line 1371 "prog_io_item.m"
                                                          {
#line 1371 "prog_io_item.m"
                                                            parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 0)));
#line 1371 "prog_io_item.m"
                                                            parse_tree__prog_io_item__Bs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 1)));
#line 1371 "prog_io_item.m"
                                                            parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 2)));
#line 1371 "prog_io_item.m"
                                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 1371 "prog_io_item.m"
                                                            if (parse_tree__prog_io_item__succeeded)
#line 1371 "prog_io_item.m"
                                                              parse_tree__prog_io_item__FieldName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 1371 "prog_io_item.m"
                                                          }
#line 1369 "prog_io_item.m"
                                                      }
#line 1370 "prog_io_item.m"
                                                  }
#line 1370 "prog_io_item.m"
                                              }
#line 1369 "prog_io_item.m"
                                          }
#line 1370 "prog_io_item.m"
                                      }
#line 1370 "prog_io_item.m"
                                  }
#line 1369 "prog_io_item.m"
                              }
#line 1369 "prog_io_item.m"
                          }
#line 1369 "prog_io_item.m"
                      }
#line 1369 "prog_io_item.m"
                  }
#line 1369 "prog_io_item.m"
              }
#line 1369 "prog_io_item.m"
          }
#line 1375 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1373 "prog_io_item.m"
          {
#line 1373 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__FunctionName_15;
#line 1373 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;
#line 1373 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_39_39;
#line 1373 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1373 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;

#line 1373 "prog_io_item.m"
            {
#line 1373 "prog_io_item.m"
              parse_tree__prog_io_item__FunctionName_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_item__FieldName_47, (MR_String) " :=");
            }
#line 1374 "prog_io_item.m"
            {
#line 1374 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1374 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_item__FunctionName_15));
#line 1374 "prog_io_item.m"
            }
#line 1374 "prog_io_item.m"
            {
#line 1374 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1374 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__X_12));
#line 1374 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1374 "prog_io_item.m"
            }
#line 1374 "prog_io_item.m"
            {
#line 1374 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1374 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__A_44));
#line 1374 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1374 "prog_io_item.m"
            }
#line 1374 "prog_io_item.m"
            {
#line 1374 "prog_io_item.m"
              parse_tree__prog_io_item__V_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__Bs_48, parse_tree__prog_io_item__V_40_40);
            }
#line 1374 "prog_io_item.m"
            {
#line 1374 "prog_io_item.m"
              parse_tree__prog_io_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1374 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1374 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 1374 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_46));
#line 1374 "prog_io_item.m"
            }
#line 1373 "prog_io_item.m"
          }
#line 1375 "prog_io_item.m"
        else
#line 1376 "prog_io_item.m"
          parse_tree__prog_io_item__DesugaredTerm_4 = parse_tree__prog_io_item__Term_3;
#line 1375 "prog_io_item.m"
      }
#line 1368 "prog_io_item.m"
    return parse_tree__prog_io_item__DesugaredTerm_4;
#line 1368 "prog_io_item.m"
  }
#line 1360 "prog_io_item.m"
}

#line 1314 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(
#line 1314 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 1314 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithInstTerm_5,
#line 1314 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithInst_6)
#line 1314 "prog_io_item.m"
{
#line 1332 "prog_io_item.m"
  {
#line 1332 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 1332 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTermPrime_7;
#line 1332 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InstTerm_8;
#line 1319 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_13_13;
#line 1319 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_14_14;
#line 1319 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_15_15;
#line 1319 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 1319 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 1319 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_9_9;

#line 1319 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1319 "prog_io_item.m"
      {
#line 1319 "prog_io_item.m"
        parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 0)));
#line 1319 "prog_io_item.m"
        parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 1)));
#line 1319 "prog_io_item.m"
        parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 2)));
#line 1319 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 1319 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1319 "prog_io_item.m"
          {
#line 1319 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_13_13, (MR_Integer) 0)));
#line 1319 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_14_14, (MR_String) "with_inst") == 0);
#line 1319 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1319 "prog_io_item.m"
              {
#line 1320 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1320 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1320 "prog_io_item.m"
                  {
#line 1320 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeWithInstTermPrime_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 0)));
#line 1320 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 1)));
#line 1320 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1320 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1320 "prog_io_item.m"
                      {
#line 1320 "prog_io_item.m"
                        parse_tree__prog_io_item__InstTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 1320 "prog_io_item.m"
                        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 1)));
#line 1320 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1320 "prog_io_item.m"
                      }
#line 1320 "prog_io_item.m"
                  }
#line 1319 "prog_io_item.m"
              }
#line 1319 "prog_io_item.m"
          }
#line 1319 "prog_io_item.m"
      }
#line 1332 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1322 "prog_io_item.m"
      {
#line 1325 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Inst_10;

#line 1322 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithInstTerm_5 = parse_tree__prog_io_item__BeforeWithInstTermPrime_7;
#line 1323 "prog_io_item.m"
        {
#line 1323 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__InstTerm_8, &parse_tree__prog_io_item__Inst_10);
        }
#line 1325 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1324 "prog_io_item.m"
          {
#line 1324 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_19_19;

#line 1324 "prog_io_item.m"
            {
#line 1324 "prog_io_item.m"
              parse_tree__prog_io_item__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_item__Inst_10));
#line 1324 "prog_io_item.m"
            }
#line 1324 "prog_io_item.m"
            {
#line 1324 "prog_io_item.m"
              MR_Word base;
#line 1324 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithInst_6 = base;
#line 1324 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_19_19));
#line 1324 "prog_io_item.m"
            }
#line 1324 "prog_io_item.m"
          }
#line 1325 "prog_io_item.m"
        else
#line 1327 "prog_io_item.m"
          {
#line 1327 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_12;
#line 1327 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_33_33;
#line 1327 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_34_34;
#line 1327 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_35_35;
#line 1327 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;

#line 1329 "prog_io_item.m"
            {
#line 1329 "prog_io_item.m"
              parse_tree__prog_io_item__V_35_35 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__InstTerm_8);
            }
#line 1329 "prog_io_item.m"
            {
#line 1329 "prog_io_item.m"
              parse_tree__prog_io_item__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1329 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 1329 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[126])));
#line 1329 "prog_io_item.m"
            }
#line 1329 "prog_io_item.m"
            {
#line 1329 "prog_io_item.m"
              parse_tree__prog_io_item__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_item__V_34_34));
#line 1329 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1329 "prog_io_item.m"
            }
#line 1328 "prog_io_item.m"
            {
#line 1328 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1328 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1328 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1328 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_item__V_33_33));
#line 1328 "prog_io_item.m"
            }
#line 1330 "prog_io_item.m"
            {
#line 1330 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_12));
#line 1330 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1330 "prog_io_item.m"
            }
#line 1330 "prog_io_item.m"
            {
#line 1330 "prog_io_item.m"
              MR_Word base;
#line 1330 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1330 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithInst_6 = base;
#line 1330 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1330 "prog_io_item.m"
            }
#line 1327 "prog_io_item.m"
          }
#line 1322 "prog_io_item.m"
      }
#line 1332 "prog_io_item.m"
    else
#line 1333 "prog_io_item.m"
      {
#line 1333 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithInstTerm_5 = parse_tree__prog_io_item__Term_4;
#line 1334 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeWithInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[18]);
#line 1333 "prog_io_item.m"
      }
#line 1332 "prog_io_item.m"
  }
#line 1314 "prog_io_item.m"
}

#line 1283 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(
#line 1283 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1283 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1283 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithTypeTerm_7,
#line 1283 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithType_8)
#line 1283 "prog_io_item.m"
{
#line 1307 "prog_io_item.m"
  {
#line 1307 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1307 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithTypeTermPrime_10;
#line 1307 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeTerm_11;
#line 1289 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeQualifier_9;
#line 1289 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 1289 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_18_18;
#line 1289 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1289 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_24_24;
#line 1288 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_12_12;

#line 1288 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1288 "prog_io_item.m"
      {
#line 1288 "prog_io_item.m"
        parse_tree__prog_io_item__TypeQualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 0)));
#line 1288 "prog_io_item.m"
        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 1)));
#line 1288 "prog_io_item.m"
        parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 2)));
#line 1289 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 1289 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1289 "prog_io_item.m"
          {
#line 1289 "prog_io_item.m"
            parse_tree__prog_io_item__BeforeWithTypeTermPrime_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_17_17, (MR_Integer) 0)));
#line 1289 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_17_17, (MR_Integer) 1)));
#line 1289 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 1289 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1289 "prog_io_item.m"
              {
#line 1289 "prog_io_item.m"
                parse_tree__prog_io_item__TypeTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1289 "prog_io_item.m"
                parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1289 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1289 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1289 "prog_io_item.m"
                  {
#line 1291 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__TypeQualifier_9)) == (MR_mktag((MR_Integer) 0)));
#line 1291 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1291 "prog_io_item.m"
                      {
#line 1291 "prog_io_item.m"
                        parse_tree__prog_io_item__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__TypeQualifier_9, (MR_Integer) 0)));
#line 1292 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__V_24_24, (MR_String) ":") == 0))
#line 1293 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1292 "prog_io_item.m"
                        else
#line 1292 "prog_io_item.m"
                          if ((strcmp(parse_tree__prog_io_item__V_24_24, (MR_String) "with_type") == 0))
#line 1291 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1292 "prog_io_item.m"
                          else
#line 1292 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 1291 "prog_io_item.m"
                      }
#line 1289 "prog_io_item.m"
                  }
#line 1289 "prog_io_item.m"
              }
#line 1289 "prog_io_item.m"
          }
#line 1288 "prog_io_item.m"
      }
#line 1307 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1296 "prog_io_item.m"
      {
#line 1296 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeType_14;

#line 1296 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithTypeTerm_7 = parse_tree__prog_io_item__BeforeWithTypeTermPrime_10;
#line 1299 "prog_io_item.m"
        {
#line 1299 "prog_io_item.m"
          parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_item__TypeTerm_11, parse_tree__prog_io_item__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__MaybeType_14);
        }
#line 1303 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
#line 1305 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeWithType_8 = (MR_Word) parse_tree__prog_io_item__MaybeType_14;
#line 1303 "prog_io_item.m"
        else
#line 1301 "prog_io_item.m"
          {
#line 1301 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeType_14, (MR_Integer) 0)));
#line 1301 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_22_22;

#line 1302 "prog_io_item.m"
            {
#line 1302 "prog_io_item.m"
              parse_tree__prog_io_item__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_15));
#line 1302 "prog_io_item.m"
            }
#line 1302 "prog_io_item.m"
            {
#line 1302 "prog_io_item.m"
              MR_Word base;
#line 1302 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithType_8 = base;
#line 1302 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_22_22));
#line 1302 "prog_io_item.m"
            }
#line 1301 "prog_io_item.m"
          }
#line 1296 "prog_io_item.m"
      }
#line 1307 "prog_io_item.m"
    else
#line 1308 "prog_io_item.m"
      {
#line 1308 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithTypeTerm_7 = parse_tree__prog_io_item__Term_6;
#line 1309 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeWithType_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[23]);
#line 1308 "prog_io_item.m"
      }
#line 1307 "prog_io_item.m"
  }
#line 1283 "prog_io_item.m"
}

#line 1254 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(
#line 1254 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1254 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1254 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeDetismTerm_7,
#line 1254 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeMaybeDetism_8)
#line 1254 "prog_io_item.m"
{
#line 1276 "prog_io_item.m"
  {
#line 1276 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1276 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTermPrime_11;
#line 1276 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DetismTerm_12;
#line 1259 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Args_9;
#line 1259 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1259 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_20_20;
#line 1259 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;
#line 1259 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_22_22;
#line 1259 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_10_10;

#line 1259 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1259 "prog_io_item.m"
      {
#line 1259 "prog_io_item.m"
        parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 0)));
#line 1259 "prog_io_item.m"
        parse_tree__prog_io_item__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 1)));
#line 1259 "prog_io_item.m"
        parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 2)));
#line 1259 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 1259 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1259 "prog_io_item.m"
          {
#line 1259 "prog_io_item.m"
            parse_tree__prog_io_item__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1259 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_20_20, (MR_String) "is") == 0);
#line 1259 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1259 "prog_io_item.m"
              {
#line 1260 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 1260 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1260 "prog_io_item.m"
                  {
#line 1260 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeDetismTermPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_9, (MR_Integer) 0)));
#line 1260 "prog_io_item.m"
                    parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_9, (MR_Integer) 1)));
#line 1260 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 1260 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1260 "prog_io_item.m"
                      {
#line 1260 "prog_io_item.m"
                        parse_tree__prog_io_item__DetismTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 1260 "prog_io_item.m"
                        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 1)));
#line 1260 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1260 "prog_io_item.m"
                      }
#line 1260 "prog_io_item.m"
                  }
#line 1259 "prog_io_item.m"
              }
#line 1259 "prog_io_item.m"
          }
#line 1259 "prog_io_item.m"
      }
#line 1276 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1262 "prog_io_item.m"
      {
#line 1268 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Detism_15;
#line 1264 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__DetismFunctor_13;
#line 1264 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 1264 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;
#line 1264 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_14_14;

#line 1262 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeDetismTerm_7 = parse_tree__prog_io_item__BeforeDetismTermPrime_11;
#line 1264 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__DetismTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 1264 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1264 "prog_io_item.m"
          {
#line 1264 "prog_io_item.m"
            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 0)));
#line 1264 "prog_io_item.m"
            parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 1)));
#line 1264 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 2)));
#line 1264 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1264 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1264 "prog_io_item.m"
              {
#line 1264 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 1264 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1264 "prog_io_item.m"
                  {
#line 1264 "prog_io_item.m"
                    parse_tree__prog_io_item__DetismFunctor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_23_23, (MR_Integer) 0)));
#line 1265 "prog_io_item.m"
                    {
#line 1265 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_item__DetismFunctor_13, &parse_tree__prog_io_item__Detism_15);
                    }
#line 1264 "prog_io_item.m"
                  }
#line 1264 "prog_io_item.m"
              }
#line 1264 "prog_io_item.m"
          }
#line 1268 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1267 "prog_io_item.m"
          {
#line 1267 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_25_25;

#line 1267 "prog_io_item.m"
            {
#line 1267 "prog_io_item.m"
              parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1267 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Detism_15));
#line 1267 "prog_io_item.m"
            }
#line 1267 "prog_io_item.m"
            {
#line 1267 "prog_io_item.m"
              MR_Word base;
#line 1267 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1267 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeMaybeDetism_8 = base;
#line 1267 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 1267 "prog_io_item.m"
            }
#line 1267 "prog_io_item.m"
          }
#line 1268 "prog_io_item.m"
        else
#line 1269 "prog_io_item.m"
          {
#line 1269 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1269 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__TermStr_16;
#line 1269 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Pieces_17;
#line 1269 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_18;
#line 1269 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_28_28;
#line 1269 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29;
#line 1269 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;
#line 1269 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_39_39;
#line 1269 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1269 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 1269 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_42_42;
#line 1269 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_45_45;

#line 1269 "prog_io_item.m"
            {
#line 1269 "prog_io_item.m"
              parse_tree__prog_io_item__TermStr_16 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_48_48, parse_tree__prog_io_item__VarSet_5, parse_tree__prog_io_item__Term_6);
            }
#line 1271 "prog_io_item.m"
            {
#line 1271 "prog_io_item.m"
              parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1271 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1271 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_16));
#line 1271 "prog_io_item.m"
            }
#line 1271 "prog_io_item.m"
            {
#line 1271 "prog_io_item.m"
              parse_tree__prog_io_item__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1271 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 1271 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 1271 "prog_io_item.m"
            }
#line 1270 "prog_io_item.m"
            {
#line 1270 "prog_io_item.m"
              parse_tree__prog_io_item__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[133])));
#line 1270 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_17, 1) = ((MR_Box) (parse_tree__prog_io_item__V_28_28));
#line 1270 "prog_io_item.m"
            }
#line 1273 "prog_io_item.m"
            {
#line 1273 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_48_48, parse_tree__prog_io_item__DetismTerm_12);
            }
#line 1273 "prog_io_item.m"
            {
#line 1273 "prog_io_item.m"
              parse_tree__prog_io_item__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1273 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_17));
#line 1273 "prog_io_item.m"
            }
#line 1273 "prog_io_item.m"
            {
#line 1273 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1273 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 1273 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1273 "prog_io_item.m"
            }
#line 1273 "prog_io_item.m"
            {
#line 1273 "prog_io_item.m"
              parse_tree__prog_io_item__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1273 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1273 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 1) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1273 "prog_io_item.m"
            }
#line 1273 "prog_io_item.m"
            {
#line 1273 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1273 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 1273 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1273 "prog_io_item.m"
            }
#line 1272 "prog_io_item.m"
            {
#line 1272 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1272 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1272 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1272 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1272 "prog_io_item.m"
            }
#line 1274 "prog_io_item.m"
            {
#line 1274 "prog_io_item.m"
              parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_18));
#line 1274 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1274 "prog_io_item.m"
            }
#line 1274 "prog_io_item.m"
            {
#line 1274 "prog_io_item.m"
              MR_Word base;
#line 1274 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeMaybeDetism_8 = base;
#line 1274 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_45_45));
#line 1274 "prog_io_item.m"
            }
#line 1269 "prog_io_item.m"
          }
#line 1262 "prog_io_item.m"
      }
#line 1276 "prog_io_item.m"
    else
#line 1277 "prog_io_item.m"
      {
#line 1277 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeDetismTerm_7 = parse_tree__prog_io_item__Term_6;
#line 1278 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeMaybeDetism_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[22]);
#line 1277 "prog_io_item.m"
      }
#line 1276 "prog_io_item.m"
  }
#line 1254 "prog_io_item.m"
}

#line 1166 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_constraints_6_p_0(
#line 1166 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1166 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1166 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1166 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23,
#line 1166 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24,
#line 1166 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeClassInstConstraints_11)
#line 1166 "prog_io_item.m"
{
#line 1198 "prog_io_item.m"
  {
#line 1198 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23)) == (MR_mktag((MR_Integer) 1)));
#line 1198 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConstraintsTerm_12;
#line 1198 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25;
#line 1173 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_26_26;
#line 1173 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_27_27;
#line 1173 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_41_41;
#line 1174 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___Term_13;

#line 1175 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1175 "prog_io_item.m"
      {
#line 1175 "prog_io_item.m"
        parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23, (MR_Integer) 0)));
#line 1175 "prog_io_item.m"
        parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23, (MR_Integer) 1)));
#line 1174 "prog_io_item.m"
        parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 0)));
#line 1174 "prog_io_item.m"
        parse_tree__prog_io_item___Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 1)));
#line 1174 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_27_27)) == (MR_mktag((MR_Integer) 3)));
#line 1174 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1174 "prog_io_item.m"
          {
#line 1174 "prog_io_item.m"
            parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_27_27, (MR_Integer) 0)));
#line 1174 "prog_io_item.m"
            parse_tree__prog_io_item__ConstraintsTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_27_27, (MR_Integer) 1)));
#line 1174 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__QuantType_7 == parse_tree__prog_io_item__V_41_41);
#line 1174 "prog_io_item.m"
          }
#line 1175 "prog_io_item.m"
      }
#line 1198 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1178 "prog_io_item.m"
      {
#line 1178 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeHeadConstraints_14;
#line 1178 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeTailConstraints_15;
#line 1193 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadClassConstraints_16;
#line 1193 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadInstConstraint_17;
#line 1193 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TailClassConstraints_18;
#line 1193 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TailInstConstraint_19;

#line 1177 "prog_io_item.m"
        {
#line 1177 "prog_io_item.m"
          parse_tree__prog_io_typeclass__parse_class_and_inst_constraints_4_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ConstraintsTerm_12, &parse_tree__prog_io_item__MaybeHeadConstraints_14);
        }
#line 1181 "prog_io_item.m"
        {
#line 1181 "prog_io_item.m"
          parse_tree__prog_io_item__get_constraints_6_p_0(parse_tree__prog_io_item__QuantType_7, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24, &parse_tree__prog_io_item__MaybeTailConstraints_15);
        }
#line 1184 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeHeadConstraints_14)) == (MR_mktag((MR_Integer) 1)));
#line 1184 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1184 "prog_io_item.m"
          {
#line 1184 "prog_io_item.m"
            parse_tree__prog_io_item__HeadClassConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeHeadConstraints_14, (MR_Integer) 0)));
#line 1184 "prog_io_item.m"
            parse_tree__prog_io_item__HeadInstConstraint_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeHeadConstraints_14, (MR_Integer) 1)));
#line 1186 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeTailConstraints_15)) == (MR_mktag((MR_Integer) 1)));
#line 1186 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1186 "prog_io_item.m"
              {
#line 1186 "prog_io_item.m"
                parse_tree__prog_io_item__TailClassConstraints_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeTailConstraints_15, (MR_Integer) 0)));
#line 1186 "prog_io_item.m"
                parse_tree__prog_io_item__TailInstConstraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeTailConstraints_15, (MR_Integer) 1)));
#line 1186 "prog_io_item.m"
              }
#line 1184 "prog_io_item.m"
          }
#line 1193 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1189 "prog_io_item.m"
          {
#line 1189 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ClassConstraints_20;
#line 1189 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_21;

#line 1189 "prog_io_item.m"
            {
#line 1189 "prog_io_item.m"
              parse_tree__prog_io_item__ClassConstraints_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, parse_tree__prog_io_item__HeadClassConstraints_16, parse_tree__prog_io_item__TailClassConstraints_18);
            }
#line 1190 "prog_io_item.m"
            {
#line 1190 "prog_io_item.m"
              parse_tree__prog_io_item__InstConstraints_21 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_item__HeadInstConstraint_17, parse_tree__prog_io_item__TailInstConstraint_19);
            }
#line 1192 "prog_io_item.m"
            {
#line 1192 "prog_io_item.m"
              MR_Word base;
#line 1192 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1192 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ClassConstraints_20));
#line 1192 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_21));
#line 1192 "prog_io_item.m"
            }
#line 1189 "prog_io_item.m"
          }
#line 1193 "prog_io_item.m"
        else
#line 1195 "prog_io_item.m"
          {
#line 1195 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeInfo_37_37 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[9];
#line 1195 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeInfo_38_38 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[1];
#line 1195 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_22;
#line 1195 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29;
#line 1195 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_30_30;

#line 1194 "prog_io_item.m"
            {
#line 1194 "prog_io_item.m"
              parse_tree__prog_io_item__V_29_29 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__TypeInfo_38_38, parse_tree__prog_io_item__MaybeHeadConstraints_14);
            }
#line 1195 "prog_io_item.m"
            {
#line 1195 "prog_io_item.m"
              parse_tree__prog_io_item__V_30_30 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__TypeInfo_38_38, parse_tree__prog_io_item__MaybeTailConstraints_15);
            }
#line 1194 "prog_io_item.m"
            {
#line 1194 "prog_io_item.m"
              parse_tree__prog_io_item__Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_29_29, parse_tree__prog_io_item__V_30_30);
            }
#line 1196 "prog_io_item.m"
            {
#line 1196 "prog_io_item.m"
              MR_Word base;
#line 1196 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1196 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1196 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_22));
#line 1196 "prog_io_item.m"
            }
#line 1195 "prog_io_item.m"
          }
#line 1178 "prog_io_item.m"
      }
#line 1198 "prog_io_item.m"
    else
#line 1199 "prog_io_item.m"
      {
#line 1199 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_32_32;

#line 1199 "prog_io_item.m"
        {
#line 1199 "prog_io_item.m"
          parse_tree__prog_io_item__V_32_32 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        }
#line 1199 "prog_io_item.m"
        {
#line 1199 "prog_io_item.m"
          MR_Word base;
#line 1199 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1199 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1199 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 1199 "prog_io_item.m"
        }
#line 1199 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23;
#line 1199 "prog_io_item.m"
      }
#line 1198 "prog_io_item.m"
  }
#line 1166 "prog_io_item.m"
}

#line 1144 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0_1(
#line 1144 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1144 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1144 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1144 "prog_io_item.m"
{
#line 1144 "prog_io_item.m"
  {
#line 1144 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1144 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_39;

#line 1144 "prog_io_item.m"
    {
#line 1144 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1144__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_39);
    }
#line 1144 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_39));
#line 1144 "prog_io_item.m"
  }
#line 1144 "prog_io_item.m"
}

#line 1101 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(
#line 1101 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 1101 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 1101 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RevAttributes0_8,
#line 1101 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__RevAttributes_9,
#line 1101 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeExistClassInstContext_10)
#line 1101 "prog_io_item.m"
{
#line 1106 "prog_io_item.m"
  {
#line 1106 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1106 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeInfo_37_37 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[0];
#line 1106 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes0_11;
#line 1106 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes1_12;
#line 1106 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes2_14;
#line 1106 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVars0_15;
#line 1106 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVars_16;
#line 1106 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes3_17;
#line 1106 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeUnivConstraints_18;
#line 1106 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes_19;
#line 1106 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeExistConstraints_20;
#line 1140 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___UnivQVars_13;
#line 1160 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__UnivConstraints_21;
#line 1160 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__UnivInstConstraints_22;
#line 1160 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistConstraints_23;
#line 1160 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistInstConstraints_24;

#line 1139 "prog_io_item.m"
    {
#line 1139 "prog_io_item.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__RevAttributes0_8, &parse_tree__prog_io_item__Attributes0_11);
    }
#line 1140 "prog_io_item.m"
    {
#line 1140 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__Attributes0_11, &parse_tree__prog_io_item__Attributes1_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item___UnivQVars_13);
    }
#line 1142 "prog_io_item.m"
    {
#line 1142 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 0, parse_tree__prog_io_item__Attributes1_12, &parse_tree__prog_io_item__Attributes2_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__ExistQVars0_15);
    }
#line 1144 "prog_io_item.m"
    {
#line 1144 "prog_io_item.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[7], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[4], parse_tree__prog_io_item__ExistQVars0_15, &parse_tree__prog_io_item__ExistQVars_16);
    }
#line 1145 "prog_io_item.m"
    {
#line 1145 "prog_io_item.m"
      parse_tree__prog_io_item__get_constraints_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Attributes2_14, &parse_tree__prog_io_item__Attributes3_17, &parse_tree__prog_io_item__MaybeUnivConstraints_18);
    }
#line 1147 "prog_io_item.m"
    {
#line 1147 "prog_io_item.m"
      parse_tree__prog_io_item__get_constraints_6_p_0((MR_Integer) 0, parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Attributes3_17, &parse_tree__prog_io_item__Attributes_19, &parse_tree__prog_io_item__MaybeExistConstraints_20);
    }
#line 1149 "prog_io_item.m"
    {
#line 1149 "prog_io_item.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__Attributes_19, parse_tree__prog_io_item__RevAttributes_9);
    }
#line 1152 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeUnivConstraints_18)) == (MR_mktag((MR_Integer) 1)));
#line 1152 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1152 "prog_io_item.m"
      {
#line 1152 "prog_io_item.m"
        parse_tree__prog_io_item__UnivConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeUnivConstraints_18, (MR_Integer) 0)));
#line 1152 "prog_io_item.m"
        parse_tree__prog_io_item__UnivInstConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeUnivConstraints_18, (MR_Integer) 1)));
#line 1153 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeExistConstraints_20)) == (MR_mktag((MR_Integer) 1)));
#line 1153 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1153 "prog_io_item.m"
          {
#line 1153 "prog_io_item.m"
            parse_tree__prog_io_item__ExistConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistConstraints_20, (MR_Integer) 0)));
#line 1153 "prog_io_item.m"
            parse_tree__prog_io_item__ExistInstConstraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistConstraints_20, (MR_Integer) 1)));
#line 1153 "prog_io_item.m"
          }
#line 1152 "prog_io_item.m"
      }
#line 1160 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1155 "prog_io_item.m"
      {
#line 1155 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ClassConstraints_25;
#line 1155 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_26;

#line 1155 "prog_io_item.m"
        {
#line 1155 "prog_io_item.m"
          parse_tree__prog_io_item__ClassConstraints_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1155 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassConstraints_25, 0) = ((MR_Box) (parse_tree__prog_io_item__UnivConstraints_21));
#line 1155 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassConstraints_25, 1) = ((MR_Box) (parse_tree__prog_io_item__ExistConstraints_23));
#line 1155 "prog_io_item.m"
        }
#line 1156 "prog_io_item.m"
        {
#line 1156 "prog_io_item.m"
          parse_tree__prog_io_item__InstConstraints_26 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_item__UnivInstConstraints_22, parse_tree__prog_io_item__ExistInstConstraints_24);
        }
#line 1158 "prog_io_item.m"
        {
#line 1158 "prog_io_item.m"
          MR_Word base;
#line 1158 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeExistClassInstContext_10 = base;
#line 1158 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_16));
#line 1158 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__ClassConstraints_25));
#line 1158 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_26));
#line 1158 "prog_io_item.m"
        }
#line 1155 "prog_io_item.m"
      }
#line 1160 "prog_io_item.m"
    else
#line 1162 "prog_io_item.m"
      {
#line 1162 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeInfo_47_47 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[9];
#line 1162 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeInfo_48_48 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[1];
#line 1162 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_27;
#line 1162 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1162 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;

#line 1161 "prog_io_item.m"
        {
#line 1161 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_47_47, parse_tree__prog_io_item__TypeInfo_48_48, parse_tree__prog_io_item__MaybeUnivConstraints_18);
        }
#line 1162 "prog_io_item.m"
        {
#line 1162 "prog_io_item.m"
          parse_tree__prog_io_item__V_36_36 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_47_47, parse_tree__prog_io_item__TypeInfo_48_48, parse_tree__prog_io_item__MaybeExistConstraints_20);
        }
#line 1161 "prog_io_item.m"
        {
#line 1161 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_35_35, parse_tree__prog_io_item__V_36_36);
        }
#line 1163 "prog_io_item.m"
        {
#line 1163 "prog_io_item.m"
          MR_Word base;
#line 1163 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1163 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeExistClassInstContext_10 = base;
#line 1163 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_27));
#line 1163 "prog_io_item.m"
        }
#line 1162 "prog_io_item.m"
      }
#line 1106 "prog_io_item.m"
  }
#line 1101 "prog_io_item.m"
}

#line 1030 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_13_p_0_1(
#line 1030 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1030 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1030 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1030 "prog_io_item.m"
{
#line 1030 "prog_io_item.m"
  {
#line 1030 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1030 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__3_3;

#line 1030 "prog_io_item.m"
    {
#line 1030 "prog_io_item.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__3_3);
    }
#line 1030 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__3_3));
#line 1030 "prog_io_item.m"
  }
#line 1030 "prog_io_item.m"
}

#line 1017 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_13_p_0(
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_14,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_15,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_16,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_17,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_18,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_19,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_20,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_21,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Condition_22,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_23,
#line 1017 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_24,
#line 1017 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_25,
#line 1017 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_26)
#line 1017 "prog_io_item.m"
{
#line 1072 "prog_io_item.m"
  {
#line 1072 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1072 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgModes0_27;

#line 1025 "prog_io_item.m"
    {
#line 1025 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__ArgTerms_15, &parse_tree__prog_io_item__ArgModes0_27);
    }
#line 1072 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1027 "prog_io_item.m"
      {
#line 1027 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_28;
#line 1027 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeConstraints_29;

#line 1026 "prog_io_item.m"
        {
#line 1026 "prog_io_item.m"
          parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_16, parse_tree__prog_io_item__VarSet_20, parse_tree__prog_io_item__Attributes0_23, &parse_tree__prog_io_item__Attributes_28, &parse_tree__prog_io_item__MaybeConstraints_29);
        }
#line 1068 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_29)) == (MR_mktag((MR_Integer) 0))))
#line 1069 "prog_io_item.m"
          {
#line 1069 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_29, (MR_Integer) 0)));

#line 1070 "prog_io_item.m"
            {
#line 1070 "prog_io_item.m"
              MR_Word base;
#line 1070 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1070 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 1070 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_44));
#line 1070 "prog_io_item.m"
            }
#line 1069 "prog_io_item.m"
          }
#line 1068 "prog_io_item.m"
        else
#line 1029 "prog_io_item.m"
          {
#line 1029 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_132_132;
#line 1029 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_29, (MR_Integer) 2)));
#line 1029 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgModes_33;
#line 1029 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_47_47;
#line 1029 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_29, (MR_Integer) 0)));
#line 1029 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_29, (MR_Integer) 1)));
#line 1060 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__RetMode0_34;

#line 1030 "prog_io_item.m"
            {
#line 1030 "prog_io_item.m"
              parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[1]));
#line 1030 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_func_mode_decl_13_p_0_1));
#line 1030 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1030 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 3) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_32));
#line 1030 "prog_io_item.m"
            }
#line 5426 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1030 "prog_io_item.m"
            {
#line 1030 "prog_io_item.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_132_132, parse_tree__prog_io_item__TypeCtorInfo_132_132, parse_tree__prog_io_item__V_47_47, parse_tree__prog_io_item__ArgModes0_27, &parse_tree__prog_io_item__ArgModes_33);
            }
#line 1033 "prog_io_item.m"
            {
#line 1033 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__RetModeTerm_18, &parse_tree__prog_io_item__RetMode0_34);
            }
#line 1060 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1036 "prog_io_item.m"
              {
#line 1036 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeCtorInfo_133_133;
#line 1036 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__RetMode_35;
#line 1036 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__InstVarSet_36;
#line 1036 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgReturnModes_37;
#line 1036 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_49_49;

#line 1035 "prog_io_item.m"
                {
#line 1035 "prog_io_item.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_32, parse_tree__prog_io_item__RetMode0_34, &parse_tree__prog_io_item__RetMode_35);
                }
#line 5458 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_133_133 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1037 "prog_io_item.m"
                {
#line 1037 "prog_io_item.m"
                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_20, &parse_tree__prog_io_item__InstVarSet_36);
                }
#line 1038 "prog_io_item.m"
                {
#line 1038 "prog_io_item.m"
                  parse_tree__prog_io_item__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_item__RetMode_35));
#line 1038 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1038 "prog_io_item.m"
                }
#line 1038 "prog_io_item.m"
                {
#line 1038 "prog_io_item.m"
                  parse_tree__prog_io_item__ArgReturnModes_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_132_132, parse_tree__prog_io_item__ArgModes_33, parse_tree__prog_io_item__V_49_49);
                }
#line 1040 "prog_io_item.m"
                {
#line 1040 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io_item__ArgReturnModes_37);
                }
#line 1049 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1045 "prog_io_item.m"
                  {
#line 1045 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ItemModeDecl_38;
#line 1045 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Item_39;
#line 1045 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__MaybeItem0_40;

#line 1043 "prog_io_item.m"
                    {
#line 1043 "prog_io_item.m"
                      parse_tree__prog_io_item__ItemModeDecl_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1043 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_38, 0) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_36));
#line 1043 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[20])));
#line 1043 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_38, 2) = ((MR_Box) (parse_tree__prog_io_item__Functor_14));
#line 1043 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_38, 3) = ((MR_Box) (parse_tree__prog_io_item__ArgReturnModes_37));
#line 1043 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_38, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1043 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_38, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_21));
#line 1043 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_38, 6) = ((MR_Box) (parse_tree__prog_io_item__Condition_22));
#line 1043 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_38, 7) = ((MR_Box) (parse_tree__prog_io_item__Context_24));
#line 1043 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_38, 8) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_25));
#line 1043 "prog_io_item.m"
                    }
#line 1046 "prog_io_item.m"
                    {
#line 1046 "prog_io_item.m"
                      parse_tree__prog_io_item__Item_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1046 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_39, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemModeDecl_38));
#line 1046 "prog_io_item.m"
                    }
#line 1047 "prog_io_item.m"
                    {
#line 1047 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeItem0_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_40, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_39));
#line 1047 "prog_io_item.m"
                    }
#line 1048 "prog_io_item.m"
                    {
#line 1048 "prog_io_item.m"
                      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_40, parse_tree__prog_io_item__Attributes_28, parse_tree__prog_io_item__MaybeItem_26);
#line 1048 "prog_io_item.m"
                      return;
                    }
#line 1045 "prog_io_item.m"
                  }
#line 1049 "prog_io_item.m"
                else
#line 1050 "prog_io_item.m"
                  {
#line 1050 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__FullTermStr_41;
#line 1050 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Pieces_42;
#line 1050 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_43;
#line 1050 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_56_56;
#line 1050 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_59_59;
#line 1050 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_62_62;
#line 1050 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_64_64;
#line 1050 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_65_65;
#line 1050 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_74_74;
#line 1050 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_75_75;
#line 1050 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_76_76;
#line 1050 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_77_77;
#line 1050 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_78_78;
#line 1050 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_81_81;

#line 1050 "prog_io_item.m"
                    {
#line 1050 "prog_io_item.m"
                      parse_tree__prog_io_item__FullTermStr_41 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, parse_tree__prog_io_item__VarSet_20, parse_tree__prog_io_item__FullTerm_19);
                    }
#line 1054 "prog_io_item.m"
                    {
#line 1054 "prog_io_item.m"
                      parse_tree__prog_io_item__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1054 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io_item__FullTermStr_41));
#line 1054 "prog_io_item.m"
                    }
#line 1054 "prog_io_item.m"
                    {
#line 1054 "prog_io_item.m"
                      parse_tree__prog_io_item__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_item__V_65_65));
#line 1054 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 1054 "prog_io_item.m"
                    }
#line 1053 "prog_io_item.m"
                    {
#line 1053 "prog_io_item.m"
                      parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1053 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io_item__V_64_64));
#line 1053 "prog_io_item.m"
                    }
#line 1053 "prog_io_item.m"
                    {
#line 1053 "prog_io_item.m"
                      parse_tree__prog_io_item__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[130])));
#line 1053 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_59_59, 1) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 1053 "prog_io_item.m"
                    }
#line 1052 "prog_io_item.m"
                    {
#line 1052 "prog_io_item.m"
                      parse_tree__prog_io_item__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[127])));
#line 1052 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_item__V_59_59));
#line 1052 "prog_io_item.m"
                    }
#line 1051 "prog_io_item.m"
                    {
#line 1051 "prog_io_item.m"
                      parse_tree__prog_io_item__Pieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[124])));
#line 1051 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_42, 1) = ((MR_Box) (parse_tree__prog_io_item__V_56_56));
#line 1051 "prog_io_item.m"
                    }
#line 1056 "prog_io_item.m"
                    {
#line 1056 "prog_io_item.m"
                      parse_tree__prog_io_item__V_76_76 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, parse_tree__prog_io_item__FullTerm_19);
                    }
#line 1057 "prog_io_item.m"
                    {
#line 1057 "prog_io_item.m"
                      parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_42));
#line 1057 "prog_io_item.m"
                    }
#line 1057 "prog_io_item.m"
                    {
#line 1057 "prog_io_item.m"
                      parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 1057 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1057 "prog_io_item.m"
                    }
#line 1056 "prog_io_item.m"
                    {
#line 1056 "prog_io_item.m"
                      parse_tree__prog_io_item__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1056 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 1056 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_75_75, 1) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 1056 "prog_io_item.m"
                    }
#line 1057 "prog_io_item.m"
                    {
#line 1057 "prog_io_item.m"
                      parse_tree__prog_io_item__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_item__V_75_75));
#line 1057 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1057 "prog_io_item.m"
                    }
#line 1055 "prog_io_item.m"
                    {
#line 1055 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1055 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1055 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1055 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 2) = ((MR_Box) (parse_tree__prog_io_item__V_74_74));
#line 1055 "prog_io_item.m"
                    }
#line 1058 "prog_io_item.m"
                    {
#line 1058 "prog_io_item.m"
                      parse_tree__prog_io_item__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_43));
#line 1058 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1058 "prog_io_item.m"
                    }
#line 1058 "prog_io_item.m"
                    {
#line 1058 "prog_io_item.m"
                      MR_Word base;
#line 1058 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 1058 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_81_81));
#line 1058 "prog_io_item.m"
                    }
#line 1050 "prog_io_item.m"
                  }
#line 1036 "prog_io_item.m"
              }
#line 1060 "prog_io_item.m"
            else
#line 1062 "prog_io_item.m"
              {
#line 1062 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_93_93;
#line 1062 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_94_94;
#line 1062 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_95_95;
#line 1062 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_100_100;
#line 1062 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_127;

#line 1064 "prog_io_item.m"
                {
#line 1064 "prog_io_item.m"
                  parse_tree__prog_io_item__V_95_95 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__RetModeTerm_18);
                }
#line 1064 "prog_io_item.m"
                {
#line 1064 "prog_io_item.m"
                  parse_tree__prog_io_item__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1064 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_item__V_95_95));
#line 1064 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[131])));
#line 1064 "prog_io_item.m"
                }
#line 1065 "prog_io_item.m"
                {
#line 1065 "prog_io_item.m"
                  parse_tree__prog_io_item__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_item__V_94_94));
#line 1065 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1065 "prog_io_item.m"
                }
#line 1063 "prog_io_item.m"
                {
#line 1063 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1063 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1063 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1063 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 2) = ((MR_Box) (parse_tree__prog_io_item__V_93_93));
#line 1063 "prog_io_item.m"
                }
#line 1066 "prog_io_item.m"
                {
#line 1066 "prog_io_item.m"
                  parse_tree__prog_io_item__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_127));
#line 1066 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1066 "prog_io_item.m"
                }
#line 1066 "prog_io_item.m"
                {
#line 1066 "prog_io_item.m"
                  MR_Word base;
#line 1066 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1066 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 1066 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_100_100));
#line 1066 "prog_io_item.m"
                }
#line 1062 "prog_io_item.m"
              }
#line 1029 "prog_io_item.m"
          }
#line 1027 "prog_io_item.m"
      }
#line 1072 "prog_io_item.m"
    else
#line 1074 "prog_io_item.m"
      {
#line 1074 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_137_137 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1074 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__FuncModeStr_45;
#line 1074 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_104_104;
#line 1074 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_107_107;
#line 1074 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_108_108;
#line 1074 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_117_117;
#line 1074 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_118_118;
#line 1074 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_119_119;
#line 1074 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_120_120;
#line 1074 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_121_121;
#line 1074 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_124_124;
#line 1074 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_128;
#line 1074 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_129;

#line 1074 "prog_io_item.m"
        {
#line 1074 "prog_io_item.m"
          parse_tree__prog_io_item__FuncModeStr_45 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_137_137, parse_tree__prog_io_item__VarSet_20, parse_tree__prog_io_item__FuncMode_17);
        }
#line 1077 "prog_io_item.m"
        {
#line 1077 "prog_io_item.m"
          parse_tree__prog_io_item__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1077 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_108_108, 1) = ((MR_Box) (parse_tree__prog_io_item__FuncModeStr_45));
#line 1077 "prog_io_item.m"
        }
#line 1077 "prog_io_item.m"
        {
#line 1077 "prog_io_item.m"
          parse_tree__prog_io_item__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io_item__V_108_108));
#line 1077 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 1077 "prog_io_item.m"
        }
#line 1076 "prog_io_item.m"
        {
#line 1076 "prog_io_item.m"
          parse_tree__prog_io_item__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_104_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[132])));
#line 1076 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_104_104, 1) = ((MR_Box) (parse_tree__prog_io_item__V_107_107));
#line 1076 "prog_io_item.m"
        }
#line 1075 "prog_io_item.m"
        {
#line 1075 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[116])));
#line 1075 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_128, 1) = ((MR_Box) (parse_tree__prog_io_item__V_104_104));
#line 1075 "prog_io_item.m"
        }
#line 1079 "prog_io_item.m"
        {
#line 1079 "prog_io_item.m"
          parse_tree__prog_io_item__V_119_119 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_137_137, parse_tree__prog_io_item__FuncMode_17);
        }
#line 1079 "prog_io_item.m"
        {
#line 1079 "prog_io_item.m"
          parse_tree__prog_io_item__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1079 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_121_121, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_128));
#line 1079 "prog_io_item.m"
        }
#line 1079 "prog_io_item.m"
        {
#line 1079 "prog_io_item.m"
          parse_tree__prog_io_item__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1079 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_120_120, 0) = ((MR_Box) (parse_tree__prog_io_item__V_121_121));
#line 1079 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1079 "prog_io_item.m"
        }
#line 1079 "prog_io_item.m"
        {
#line 1079 "prog_io_item.m"
          parse_tree__prog_io_item__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1079 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_118_118, 0) = ((MR_Box) (parse_tree__prog_io_item__V_119_119));
#line 1079 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_118_118, 1) = ((MR_Box) (parse_tree__prog_io_item__V_120_120));
#line 1079 "prog_io_item.m"
        }
#line 1079 "prog_io_item.m"
        {
#line 1079 "prog_io_item.m"
          parse_tree__prog_io_item__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1079 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_117_117, 0) = ((MR_Box) (parse_tree__prog_io_item__V_118_118));
#line 1079 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1079 "prog_io_item.m"
        }
#line 1078 "prog_io_item.m"
        {
#line 1078 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1078 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1078 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1078 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_129, 2) = ((MR_Box) (parse_tree__prog_io_item__V_117_117));
#line 1078 "prog_io_item.m"
        }
#line 1080 "prog_io_item.m"
        {
#line 1080 "prog_io_item.m"
          parse_tree__prog_io_item__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_129));
#line 1080 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1080 "prog_io_item.m"
        }
#line 1080 "prog_io_item.m"
        {
#line 1080 "prog_io_item.m"
          MR_Word base;
#line 1080 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 1080 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_124_124));
#line 1080 "prog_io_item.m"
        }
#line 1074 "prog_io_item.m"
      }
#line 1072 "prog_io_item.m"
  }
#line 1017 "prog_io_item.m"
}

#line 974 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_12_p_0_1(
#line 974 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 974 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 974 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 974 "prog_io_item.m"
{
#line 974 "prog_io_item.m"
  {
#line 974 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 974 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__3_3;

#line 974 "prog_io_item.m"
    {
#line 974 "prog_io_item.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__3_3);
    }
#line 974 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__3_3));
#line 974 "prog_io_item.m"
  }
#line 974 "prog_io_item.m"
}

#line 961 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_12_p_0(
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_16,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_17,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_18,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_19,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Condition_20,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 961 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 961 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 961 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24)
#line 961 "prog_io_item.m"
{
#line 1008 "prog_io_item.m"
  {
#line 1008 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1008 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgModes0_25;

#line 969 "prog_io_item.m"
    {
#line 969 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__ArgTerms_14, &parse_tree__prog_io_item__ArgModes0_25);
    }
#line 1008 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 971 "prog_io_item.m"
      {
#line 971 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_26;
#line 971 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeConstraints_27;

#line 970 "prog_io_item.m"
        {
#line 970 "prog_io_item.m"
          parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_15, parse_tree__prog_io_item__VarSet_17, parse_tree__prog_io_item__Attributes0_21, &parse_tree__prog_io_item__Attributes_26, &parse_tree__prog_io_item__MaybeConstraints_27);
        }
#line 1004 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_27)) == (MR_mktag((MR_Integer) 0))))
#line 1005 "prog_io_item.m"
          {
#line 1005 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 0)));

#line 1006 "prog_io_item.m"
            {
#line 1006 "prog_io_item.m"
              MR_Word base;
#line 1006 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1006 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1006 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_41));
#line 1006 "prog_io_item.m"
            }
#line 1005 "prog_io_item.m"
          }
#line 1004 "prog_io_item.m"
        else
#line 973 "prog_io_item.m"
          {
#line 973 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_106_106;
#line 973 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_107_107;
#line 973 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 2)));
#line 973 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgModes_31;
#line 973 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ProgVarSet_32;
#line 973 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_43_43;
#line 973 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 0)));
#line 973 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 1)));

#line 974 "prog_io_item.m"
            {
#line 974 "prog_io_item.m"
              parse_tree__prog_io_item__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 974 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_43_43, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[1]));
#line 974 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_pred_mode_decl_12_p_0_1));
#line 974 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 974 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_43_43, 3) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_30));
#line 974 "prog_io_item.m"
            }
#line 6107 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_106_106 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 974 "prog_io_item.m"
            {
#line 974 "prog_io_item.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_106_106, parse_tree__prog_io_item__TypeCtorInfo_106_106, parse_tree__prog_io_item__V_43_43, parse_tree__prog_io_item__ArgModes0_25, &parse_tree__prog_io_item__ArgModes_31);
            }
#line 6114 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_107_107 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 976 "prog_io_item.m"
            {
#line 976 "prog_io_item.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_107_107, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_17, &parse_tree__prog_io_item__ProgVarSet_32);
            }
#line 977 "prog_io_item.m"
            {
#line 977 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io_item__ArgModes_31);
            }
#line 993 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 986 "prog_io_item.m"
              {
#line 986 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__PredOrFunc_33;
#line 986 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemModeDecl_35;
#line 986 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_36;
#line 986 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeItem0_37;

#line 981 "prog_io_item.m"
                if ((parse_tree__prog_io_item__WithInst_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 979 "prog_io_item.m"
                  {
#line 980 "prog_io_item.m"
                    parse_tree__prog_io_item__PredOrFunc_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[19]);
#line 979 "prog_io_item.m"
                  }
#line 981 "prog_io_item.m"
                else
#line 985 "prog_io_item.m"
                  parse_tree__prog_io_item__PredOrFunc_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 987 "prog_io_item.m"
                {
#line 987 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemModeDecl_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 987 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_35, 0) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_32));
#line 987 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_35, 1) = ((MR_Box) (parse_tree__prog_io_item__PredOrFunc_33));
#line 987 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_35, 2) = ((MR_Box) (parse_tree__prog_io_item__Functor_13));
#line 987 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_35, 3) = ((MR_Box) (parse_tree__prog_io_item__ArgModes_31));
#line 987 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_35, 4) = ((MR_Box) (parse_tree__prog_io_item__WithInst_18));
#line 987 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_35, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_19));
#line 987 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_35, 6) = ((MR_Box) (parse_tree__prog_io_item__Condition_20));
#line 987 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_35, 7) = ((MR_Box) (parse_tree__prog_io_item__Context_22));
#line 987 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_35, 8) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_23));
#line 987 "prog_io_item.m"
                }
#line 990 "prog_io_item.m"
                {
#line 990 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 990 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_36, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemModeDecl_35));
#line 990 "prog_io_item.m"
                }
#line 991 "prog_io_item.m"
                {
#line 991 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybeItem0_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 991 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_37, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_36));
#line 991 "prog_io_item.m"
                }
#line 992 "prog_io_item.m"
                {
#line 992 "prog_io_item.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_37, parse_tree__prog_io_item__Attributes_26, parse_tree__prog_io_item__MaybeItem_24);
#line 992 "prog_io_item.m"
                  return;
                }
#line 986 "prog_io_item.m"
              }
#line 993 "prog_io_item.m"
            else
#line 994 "prog_io_item.m"
              {
#line 994 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredModeTermStr_38;
#line 994 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_39;
#line 994 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_40;
#line 994 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_47_47;
#line 994 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_50_50;
#line 994 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_53_53;
#line 994 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_55_55;
#line 994 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_56_56;
#line 994 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_65_65;
#line 994 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_66_66;
#line 994 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_67_67;
#line 994 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_68_68;
#line 994 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_69_69;
#line 994 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_72_72;

#line 994 "prog_io_item.m"
                {
#line 994 "prog_io_item.m"
                  parse_tree__prog_io_item__PredModeTermStr_38 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_107_107, parse_tree__prog_io_item__VarSet_17, parse_tree__prog_io_item__PredModeTerm_16);
                }
#line 998 "prog_io_item.m"
                {
#line 998 "prog_io_item.m"
                  parse_tree__prog_io_item__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 998 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_38));
#line 998 "prog_io_item.m"
                }
#line 998 "prog_io_item.m"
                {
#line 998 "prog_io_item.m"
                  parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_item__V_56_56));
#line 998 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 998 "prog_io_item.m"
                }
#line 997 "prog_io_item.m"
                {
#line 997 "prog_io_item.m"
                  parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 997 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 997 "prog_io_item.m"
                }
#line 997 "prog_io_item.m"
                {
#line 997 "prog_io_item.m"
                  parse_tree__prog_io_item__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[128])));
#line 997 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 997 "prog_io_item.m"
                }
#line 996 "prog_io_item.m"
                {
#line 996 "prog_io_item.m"
                  parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[127])));
#line 996 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_item__V_50_50));
#line 996 "prog_io_item.m"
                }
#line 995 "prog_io_item.m"
                {
#line 995 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[124])));
#line 995 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_39, 1) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 995 "prog_io_item.m"
                }
#line 1000 "prog_io_item.m"
                {
#line 1000 "prog_io_item.m"
                  parse_tree__prog_io_item__V_67_67 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_107_107, parse_tree__prog_io_item__PredModeTerm_16);
                }
#line 1001 "prog_io_item.m"
                {
#line 1001 "prog_io_item.m"
                  parse_tree__prog_io_item__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_39));
#line 1001 "prog_io_item.m"
                }
#line 1001 "prog_io_item.m"
                {
#line 1001 "prog_io_item.m"
                  parse_tree__prog_io_item__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_item__V_69_69));
#line 1001 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1001 "prog_io_item.m"
                }
#line 1000 "prog_io_item.m"
                {
#line 1000 "prog_io_item.m"
                  parse_tree__prog_io_item__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 1000 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io_item__V_68_68));
#line 1000 "prog_io_item.m"
                }
#line 1001 "prog_io_item.m"
                {
#line 1001 "prog_io_item.m"
                  parse_tree__prog_io_item__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_item__V_66_66));
#line 1001 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1001 "prog_io_item.m"
                }
#line 999 "prog_io_item.m"
                {
#line 999 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 999 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 999 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 999 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 2) = ((MR_Box) (parse_tree__prog_io_item__V_65_65));
#line 999 "prog_io_item.m"
                }
#line 1002 "prog_io_item.m"
                {
#line 1002 "prog_io_item.m"
                  parse_tree__prog_io_item__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_40));
#line 1002 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "prog_io_item.m"
                }
#line 1002 "prog_io_item.m"
                {
#line 1002 "prog_io_item.m"
                  MR_Word base;
#line 1002 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1002 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_72_72));
#line 1002 "prog_io_item.m"
                }
#line 994 "prog_io_item.m"
              }
#line 973 "prog_io_item.m"
          }
#line 971 "prog_io_item.m"
      }
#line 1008 "prog_io_item.m"
    else
#line 1009 "prog_io_item.m"
      {
#line 1009 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_110_110 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1009 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_76_76;
#line 1009 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_79_79;
#line 1009 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_82_82;
#line 1009 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_83_83;
#line 1009 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_92_92;
#line 1009 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_93_93;
#line 1009 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_94_94;
#line 1009 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_95_95;
#line 1009 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_96_96;
#line 1009 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_99_99;
#line 1009 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__PredModeTermStr_101;
#line 1009 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_102;
#line 1009 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_103;

#line 1009 "prog_io_item.m"
        {
#line 1009 "prog_io_item.m"
          parse_tree__prog_io_item__PredModeTermStr_101 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_110_110, parse_tree__prog_io_item__VarSet_17, parse_tree__prog_io_item__PredModeTerm_16);
        }
#line 1011 "prog_io_item.m"
        {
#line 1011 "prog_io_item.m"
          parse_tree__prog_io_item__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1011 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_101));
#line 1011 "prog_io_item.m"
        }
#line 1011 "prog_io_item.m"
        {
#line 1011 "prog_io_item.m"
          parse_tree__prog_io_item__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_item__V_83_83));
#line 1011 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 1011 "prog_io_item.m"
        }
#line 1011 "prog_io_item.m"
        {
#line 1011 "prog_io_item.m"
          parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[118])));
#line 1011 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (parse_tree__prog_io_item__V_82_82));
#line 1011 "prog_io_item.m"
        }
#line 1010 "prog_io_item.m"
        {
#line 1010 "prog_io_item.m"
          parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[129])));
#line 1010 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 1) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 1010 "prog_io_item.m"
        }
#line 1010 "prog_io_item.m"
        {
#line 1010 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[113])));
#line 1010 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_102, 1) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 1010 "prog_io_item.m"
        }
#line 1013 "prog_io_item.m"
        {
#line 1013 "prog_io_item.m"
          parse_tree__prog_io_item__V_94_94 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_110_110, parse_tree__prog_io_item__PredModeTerm_16);
        }
#line 1013 "prog_io_item.m"
        {
#line 1013 "prog_io_item.m"
          parse_tree__prog_io_item__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1013 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_96_96, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_102));
#line 1013 "prog_io_item.m"
        }
#line 1013 "prog_io_item.m"
        {
#line 1013 "prog_io_item.m"
          parse_tree__prog_io_item__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io_item__V_96_96));
#line 1013 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "prog_io_item.m"
        }
#line 1013 "prog_io_item.m"
        {
#line 1013 "prog_io_item.m"
          parse_tree__prog_io_item__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1013 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_item__V_94_94));
#line 1013 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_93_93, 1) = ((MR_Box) (parse_tree__prog_io_item__V_95_95));
#line 1013 "prog_io_item.m"
        }
#line 1013 "prog_io_item.m"
        {
#line 1013 "prog_io_item.m"
          parse_tree__prog_io_item__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_item__V_93_93));
#line 1013 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "prog_io_item.m"
        }
#line 1012 "prog_io_item.m"
        {
#line 1012 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1012 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_103, 2) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 1012 "prog_io_item.m"
        }
#line 1014 "prog_io_item.m"
        {
#line 1014 "prog_io_item.m"
          parse_tree__prog_io_item__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_103));
#line 1014 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "prog_io_item.m"
        }
#line 1014 "prog_io_item.m"
        {
#line 1014 "prog_io_item.m"
          MR_Word base;
#line 1014 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1014 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1014 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_99_99));
#line 1014 "prog_io_item.m"
        }
#line 1009 "prog_io_item.m"
      }
#line 1008 "prog_io_item.m"
  }
#line 961 "prog_io_item.m"
}

#line 921 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_10_p_0(
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_11,
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_12,
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_13,
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Condition_14,
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_15,
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_16,
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_17,
#line 921 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_18,
#line 921 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_19,
#line 921 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_20)
#line 921 "prog_io_item.m"
{
#line 946 "prog_io_item.m"
  {
#line 946 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 946 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeSugaredFuncTerm_21;
#line 946 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnTypeTerm_22;
#line 928 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 928 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_31_31;
#line 928 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 928 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_33_33;
#line 928 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_34_34;
#line 929 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_23_23;

#line 928 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 928 "prog_io_item.m"
      {
#line 929 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_13)) == (MR_mktag((MR_Integer) 0)));
#line 929 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 929 "prog_io_item.m"
          {
#line 929 "prog_io_item.m"
            parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_13, (MR_Integer) 0)));
#line 929 "prog_io_item.m"
            parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_13, (MR_Integer) 1)));
#line 929 "prog_io_item.m"
            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_13, (MR_Integer) 2)));
#line 929 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 929 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 929 "prog_io_item.m"
              {
#line 929 "prog_io_item.m"
                parse_tree__prog_io_item__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, (MR_Integer) 0)));
#line 929 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_31_31, (MR_String) "=") == 0);
#line 928 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 928 "prog_io_item.m"
                  {
#line 930 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 930 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 930 "prog_io_item.m"
                      {
#line 930 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeSugaredFuncTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_32_32, (MR_Integer) 0)));
#line 930 "prog_io_item.m"
                        parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_32_32, (MR_Integer) 1)));
#line 930 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 930 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 930 "prog_io_item.m"
                          {
#line 930 "prog_io_item.m"
                            parse_tree__prog_io_item__ReturnTypeTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 0)));
#line 930 "prog_io_item.m"
                            parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 1)));
#line 930 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 930 "prog_io_item.m"
                          }
#line 930 "prog_io_item.m"
                      }
#line 928 "prog_io_item.m"
                  }
#line 929 "prog_io_item.m"
              }
#line 929 "prog_io_item.m"
          }
#line 928 "prog_io_item.m"
      }
#line 946 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 932 "prog_io_item.m"
      {
#line 932 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncTerm_24;
#line 932 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_26;

#line 932 "prog_io_item.m"
        {
#line 932 "prog_io_item.m"
          parse_tree__prog_io_item__FuncTerm_24 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__MaybeSugaredFuncTerm_21);
        }
#line 935 "prog_io_item.m"
        {
#line 935 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_11, parse_tree__prog_io_item__FuncTerm_24, parse_tree__prog_io_item__VarSet_12, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[81]), &parse_tree__prog_io_item__MaybeFunctorArgs_26);
        }
#line 940 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_26)) == (MR_mktag((MR_Integer) 0))))
#line 938 "prog_io_item.m"
          {
#line 938 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_26, (MR_Integer) 0)));

#line 939 "prog_io_item.m"
            {
#line 939 "prog_io_item.m"
              MR_Word base;
#line 939 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 939 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_20 = base;
#line 939 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_27));
#line 939 "prog_io_item.m"
            }
#line 938 "prog_io_item.m"
          }
#line 940 "prog_io_item.m"
        else
#line 941 "prog_io_item.m"
          {
#line 941 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_26, (MR_Integer) 0)));
#line 941 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_26, (MR_Integer) 1)));

#line 942 "prog_io_item.m"
            {
#line 942 "prog_io_item.m"
              parse_tree__prog_io_item__parse_func_mode_decl_13_p_0(parse_tree__prog_io_item__Functor_28, parse_tree__prog_io_item__ArgTerms_29, parse_tree__prog_io_item__ModuleName_11, parse_tree__prog_io_item__FuncTerm_24, parse_tree__prog_io_item__ReturnTypeTerm_22, parse_tree__prog_io_item__Term_13, parse_tree__prog_io_item__VarSet_12, parse_tree__prog_io_item__MaybeDet_17, parse_tree__prog_io_item__Condition_14, parse_tree__prog_io_item__Attributes_15, parse_tree__prog_io_item__Context_18, parse_tree__prog_io_item__SeqNum_19, parse_tree__prog_io_item__MaybeItem_20);
#line 942 "prog_io_item.m"
              return;
            }
#line 941 "prog_io_item.m"
          }
#line 932 "prog_io_item.m"
      }
#line 946 "prog_io_item.m"
    else
#line 947 "prog_io_item.m"
      {
#line 947 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_60;

#line 948 "prog_io_item.m"
        {
#line 948 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_11, parse_tree__prog_io_item__Term_13, parse_tree__prog_io_item__VarSet_12, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[82]), &parse_tree__prog_io_item__MaybeFunctorArgs_60);
        }
#line 953 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_60)) == (MR_mktag((MR_Integer) 0))))
#line 951 "prog_io_item.m"
          {
#line 951 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_60, (MR_Integer) 0)));

#line 952 "prog_io_item.m"
            {
#line 952 "prog_io_item.m"
              MR_Word base;
#line 952 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 952 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_20 = base;
#line 952 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_53));
#line 952 "prog_io_item.m"
            }
#line 951 "prog_io_item.m"
          }
#line 953 "prog_io_item.m"
        else
#line 954 "prog_io_item.m"
          {
#line 954 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_60, (MR_Integer) 0)));
#line 954 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_60, (MR_Integer) 1)));

#line 955 "prog_io_item.m"
            {
#line 955 "prog_io_item.m"
              parse_tree__prog_io_item__parse_pred_mode_decl_12_p_0(parse_tree__prog_io_item__Functor_54, parse_tree__prog_io_item__ArgTerms_55, parse_tree__prog_io_item__ModuleName_11, parse_tree__prog_io_item__Term_13, parse_tree__prog_io_item__VarSet_12, parse_tree__prog_io_item__WithInst_16, parse_tree__prog_io_item__MaybeDet_17, parse_tree__prog_io_item__Condition_14, parse_tree__prog_io_item__Attributes_15, parse_tree__prog_io_item__Context_18, parse_tree__prog_io_item__SeqNum_19, parse_tree__prog_io_item__MaybeItem_20);
#line 955 "prog_io_item.m"
              return;
            }
#line 954 "prog_io_item.m"
          }
#line 947 "prog_io_item.m"
      }
#line 946 "prog_io_item.m"
  }
#line 921 "prog_io_item.m"
}

#line 886 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_7_p_0(
#line 886 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 886 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 886 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 886 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 886 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 886 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 886 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 886 "prog_io_item.m"
{
#line 890 "prog_io_item.m"
  {
#line 890 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 890 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeCondTerm_15;
#line 890 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Condition_16;
#line 890 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTerm_17;
#line 890 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_18;
#line 890 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithInst_20;
#line 890 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BaseTerm_21;
#line 1332 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTermPrime_60;
#line 1332 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InstTerm_61;
#line 1319 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_66_66;
#line 1319 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_67_67;
#line 1319 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_68_68;
#line 1319 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_69_69;
#line 1319 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_70_70;
#line 1319 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_62_62;
#line 915 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeDetism_22;
#line 915 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithInst_23;

#line 891 "prog_io_item.m"
    {
#line 891 "prog_io_item.m"
      parse_tree__prog_io_util__parse_condition_suffix_3_p_0(parse_tree__prog_io_item__Term_10, &parse_tree__prog_io_item__BeforeCondTerm_15, &parse_tree__prog_io_item__Condition_16);
    }
#line 892 "prog_io_item.m"
    {
#line 892 "prog_io_item.m"
      parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__BeforeCondTerm_15, &parse_tree__prog_io_item__BeforeDetismTerm_17, &parse_tree__prog_io_item__MaybeMaybeDetism_18);
    }
#line 1319 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__BeforeDetismTerm_17)) == (MR_mktag((MR_Integer) 0)));
#line 1319 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1319 "prog_io_item.m"
      {
#line 1319 "prog_io_item.m"
        parse_tree__prog_io_item__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_17, (MR_Integer) 0)));
#line 1319 "prog_io_item.m"
        parse_tree__prog_io_item__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_17, (MR_Integer) 1)));
#line 1319 "prog_io_item.m"
        parse_tree__prog_io_item__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_17, (MR_Integer) 2)));
#line 1319 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_66_66)) == (MR_mktag((MR_Integer) 0)));
#line 1319 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1319 "prog_io_item.m"
          {
#line 1319 "prog_io_item.m"
            parse_tree__prog_io_item__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_66_66, (MR_Integer) 0)));
#line 1319 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_67_67, (MR_String) "with_inst") == 0);
#line 1319 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1319 "prog_io_item.m"
              {
#line 1320 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_68_68)) == (MR_mktag((MR_Integer) 1)));
#line 1320 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1320 "prog_io_item.m"
                  {
#line 1320 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeWithInstTermPrime_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, (MR_Integer) 0)));
#line 1320 "prog_io_item.m"
                    parse_tree__prog_io_item__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, (MR_Integer) 1)));
#line 1320 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 1320 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1320 "prog_io_item.m"
                      {
#line 1320 "prog_io_item.m"
                        parse_tree__prog_io_item__InstTerm_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_69_69, (MR_Integer) 0)));
#line 1320 "prog_io_item.m"
                        parse_tree__prog_io_item__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_69_69, (MR_Integer) 1)));
#line 1320 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1320 "prog_io_item.m"
                      }
#line 1320 "prog_io_item.m"
                  }
#line 1319 "prog_io_item.m"
              }
#line 1319 "prog_io_item.m"
          }
#line 1319 "prog_io_item.m"
      }
#line 1332 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1322 "prog_io_item.m"
      {
#line 1325 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Inst_63;

#line 1322 "prog_io_item.m"
        parse_tree__prog_io_item__BaseTerm_21 = parse_tree__prog_io_item__BeforeWithInstTermPrime_60;
#line 1323 "prog_io_item.m"
        {
#line 1323 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__InstTerm_61, &parse_tree__prog_io_item__Inst_63);
        }
#line 1325 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1324 "prog_io_item.m"
          {
#line 1324 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_72_72;

#line 1324 "prog_io_item.m"
            {
#line 1324 "prog_io_item.m"
              parse_tree__prog_io_item__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_item__Inst_63));
#line 1324 "prog_io_item.m"
            }
#line 1324 "prog_io_item.m"
            {
#line 1324 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeWithInst_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_20, 0) = ((MR_Box) (parse_tree__prog_io_item__V_72_72));
#line 1324 "prog_io_item.m"
            }
#line 1324 "prog_io_item.m"
          }
#line 1325 "prog_io_item.m"
        else
#line 1327 "prog_io_item.m"
          {
#line 1327 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_65;
#line 1327 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_86_86;
#line 1327 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_87_87;
#line 1327 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_88_88;
#line 1327 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_93_93;

#line 1329 "prog_io_item.m"
            {
#line 1329 "prog_io_item.m"
              parse_tree__prog_io_item__V_88_88 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__InstTerm_61);
            }
#line 1329 "prog_io_item.m"
            {
#line 1329 "prog_io_item.m"
              parse_tree__prog_io_item__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1329 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_item__V_88_88));
#line 1329 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[126])));
#line 1329 "prog_io_item.m"
            }
#line 1329 "prog_io_item.m"
            {
#line 1329 "prog_io_item.m"
              parse_tree__prog_io_item__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_item__V_87_87));
#line 1329 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1329 "prog_io_item.m"
            }
#line 1328 "prog_io_item.m"
            {
#line 1328 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1328 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1328 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1328 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_65, 2) = ((MR_Box) (parse_tree__prog_io_item__V_86_86));
#line 1328 "prog_io_item.m"
            }
#line 1330 "prog_io_item.m"
            {
#line 1330 "prog_io_item.m"
              parse_tree__prog_io_item__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_65));
#line 1330 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1330 "prog_io_item.m"
            }
#line 1330 "prog_io_item.m"
            {
#line 1330 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeWithInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1330 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeWithInst_20, 0) = ((MR_Box) (parse_tree__prog_io_item__V_93_93));
#line 1330 "prog_io_item.m"
            }
#line 1327 "prog_io_item.m"
          }
#line 1322 "prog_io_item.m"
      }
#line 1332 "prog_io_item.m"
    else
#line 1333 "prog_io_item.m"
      {
#line 1333 "prog_io_item.m"
        parse_tree__prog_io_item__BaseTerm_21 = parse_tree__prog_io_item__BeforeDetismTerm_17;
#line 1334 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeWithInst_20 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[18]);
#line 1333 "prog_io_item.m"
      }
#line 898 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_18)) == (MR_mktag((MR_Integer) 1)));
#line 898 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 898 "prog_io_item.m"
      {
#line 898 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeDetism_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_18, (MR_Integer) 0)));
#line 899 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_20)) == (MR_mktag((MR_Integer) 1)));
#line 899 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 899 "prog_io_item.m"
          parse_tree__prog_io_item__WithInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_20, (MR_Integer) 0)));
#line 898 "prog_io_item.m"
      }
#line 915 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 911 "prog_io_item.m"
      {
#line 902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;
#line 903 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_25_25;

#line 902 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_22)) == (MR_mktag((MR_Integer) 1)));
#line 902 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 902 "prog_io_item.m"
          {
#line 902 "prog_io_item.m"
            parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_22, (MR_Integer) 0)));
#line 903 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_23)) == (MR_mktag((MR_Integer) 1)));
#line 903 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 903 "prog_io_item.m"
              parse_tree__prog_io_item__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_23, (MR_Integer) 0)));
#line 902 "prog_io_item.m"
          }
#line 911 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 906 "prog_io_item.m"
          {
#line 906 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_27;
#line 906 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_42_42;
#line 906 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_43_43;
#line 906 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_44_44;
#line 906 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_49_49;

#line 908 "prog_io_item.m"
            {
#line 908 "prog_io_item.m"
              parse_tree__prog_io_item__V_44_44 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BeforeCondTerm_15);
            }
#line 908 "prog_io_item.m"
            {
#line 908 "prog_io_item.m"
              parse_tree__prog_io_item__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 908 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_item__V_44_44));
#line 908 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[104])));
#line 908 "prog_io_item.m"
            }
#line 909 "prog_io_item.m"
            {
#line 909 "prog_io_item.m"
              parse_tree__prog_io_item__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_item__V_43_43));
#line 909 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 909 "prog_io_item.m"
            }
#line 907 "prog_io_item.m"
            {
#line 907 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 907 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 907 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 907 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_27, 2) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 907 "prog_io_item.m"
            }
#line 910 "prog_io_item.m"
            {
#line 910 "prog_io_item.m"
              parse_tree__prog_io_item__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_27));
#line 910 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 910 "prog_io_item.m"
            }
#line 910 "prog_io_item.m"
            {
#line 910 "prog_io_item.m"
              MR_Word base;
#line 910 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 910 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 910 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_49_49));
#line 910 "prog_io_item.m"
            }
#line 906 "prog_io_item.m"
          }
#line 911 "prog_io_item.m"
        else
#line 912 "prog_io_item.m"
          {
#line 912 "prog_io_item.m"
            parse_tree__prog_io_item__parse_mode_decl_base_10_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__BaseTerm_21, parse_tree__prog_io_item__Condition_16, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__WithInst_23, parse_tree__prog_io_item__MaybeDetism_22, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeItem_14);
#line 912 "prog_io_item.m"
            return;
          }
#line 911 "prog_io_item.m"
      }
#line 915 "prog_io_item.m"
    else
#line 917 "prog_io_item.m"
      {
#line 917 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_28;
#line 917 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_51_51;
#line 917 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_52_52;

#line 916 "prog_io_item.m"
        {
#line 916 "prog_io_item.m"
          parse_tree__prog_io_item__V_51_51 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_18);
        }
#line 917 "prog_io_item.m"
        {
#line 917 "prog_io_item.m"
          parse_tree__prog_io_item__V_52_52 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_20);
        }
#line 917 "prog_io_item.m"
        {
#line 917 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_28 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_51_51, parse_tree__prog_io_item__V_52_52);
        }
#line 918 "prog_io_item.m"
        {
#line 918 "prog_io_item.m"
          MR_Word base;
#line 918 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 918 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 918 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_28));
#line 918 "prog_io_item.m"
        }
#line 917 "prog_io_item.m"
      }
#line 890 "prog_io_item.m"
  }
#line 886 "prog_io_item.m"
}

#line 873 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__type_and_mode_list_is_consistent_type_and_mode_1_p_0(
#line 873 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1)
#line 873 "prog_io_item.m"
{
#line 876 "prog_io_item.m"
  while (MR_TRUE)
#line 876 "prog_io_item.m"
    {
#line 876 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 876 "prog_io_item.m"
      {
#line 876 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded;

#line 876 "prog_io_item.m"
        if ((parse_tree__prog_io_item__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 876 "prog_io_item.m"
        else
#line 877 "prog_io_item.m"
          {
#line 877 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Head_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)));
#line 877 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Tail_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 878 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_4_4;
#line 878 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_5_5;

#line 878 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Head_2)) == (MR_mktag((MR_Integer) 1)));
#line 878 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 878 "prog_io_item.m"
              {
#line 878 "prog_io_item.m"
                parse_tree__prog_io_item__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Head_2, (MR_Integer) 0)));
#line 878 "prog_io_item.m"
                parse_tree__prog_io_item__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Head_2, (MR_Integer) 1)));
#line 879 "prog_io_item.m"
                /* direct tailcall eliminated */
#line 879 "prog_io_item.m"
                {
#line 879 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_item__Tail_3;

#line 879 "prog_io_item.m"
                  parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__HeadVar__1__tmp_copy_1;
#line 879 "prog_io_item.m"
                }
#line 879 "prog_io_item.m"
                continue;
#line 878 "prog_io_item.m"
              }
#line 877 "prog_io_item.m"
          }
#line 876 "prog_io_item.m"
        return parse_tree__prog_io_item__succeeded;
#line 876 "prog_io_item.m"
      }
#line 876 "prog_io_item.m"
      break;
#line 876 "prog_io_item.m"
    }
#line 873 "prog_io_item.m"
}

#line 865 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__type_and_mode_list_is_consistent_type_only_1_p_0(
#line 865 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1)
#line 865 "prog_io_item.m"
{
#line 868 "prog_io_item.m"
  while (MR_TRUE)
#line 868 "prog_io_item.m"
    {
#line 868 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 868 "prog_io_item.m"
      {
#line 868 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded;

#line 868 "prog_io_item.m"
        if ((parse_tree__prog_io_item__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 868 "prog_io_item.m"
        else
#line 869 "prog_io_item.m"
          {
#line 869 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Head_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)));
#line 869 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Tail_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 870 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_4_4;

#line 870 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Head_2)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 870 "prog_io_item.m"
              {
#line 870 "prog_io_item.m"
                parse_tree__prog_io_item__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Head_2, (MR_Integer) 0)));
#line 871 "prog_io_item.m"
                /* direct tailcall eliminated */
#line 871 "prog_io_item.m"
                {
#line 871 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_item__Tail_3;

#line 871 "prog_io_item.m"
                  parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__HeadVar__1__tmp_copy_1;
#line 871 "prog_io_item.m"
                }
#line 871 "prog_io_item.m"
                continue;
#line 870 "prog_io_item.m"
              }
#line 869 "prog_io_item.m"
          }
#line 868 "prog_io_item.m"
        return parse_tree__prog_io_item__succeeded;
#line 868 "prog_io_item.m"
      }
#line 868 "prog_io_item.m"
      break;
#line 868 "prog_io_item.m"
    }
#line 865 "prog_io_item.m"
}

#line 853 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__type_and_mode_list_is_consistent_1_p_0(
#line 853 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1)
#line 853 "prog_io_item.m"
{
#line 855 "prog_io_item.m"
  {
#line 855 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 855 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 855 "prog_io_item.m"
    else
#line 856 "prog_io_item.m"
      {
#line 856 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Head_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)));
#line 856 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Tail_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));

#line 860 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__Head_2)) == (MR_mktag((MR_Integer) 1))))
#line 862 "prog_io_item.m"
          {
#line 862 "prog_io_item.m"
            return parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__type_and_mode_list_is_consistent_type_and_mode_1_p_0(parse_tree__prog_io_item__Tail_3);
          }
#line 860 "prog_io_item.m"
        else
#line 859 "prog_io_item.m"
          {
#line 859 "prog_io_item.m"
            return parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__type_and_mode_list_is_consistent_type_only_1_p_0(parse_tree__prog_io_item__Tail_3);
          }
#line 856 "prog_io_item.m"
      }
#line 855 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 855 "prog_io_item.m"
  }
#line 853 "prog_io_item.m"
}

#line 836 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_3_p_0(
#line 836 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_4,
#line 836 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 836 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeTypeAndMode_6)
#line 836 "prog_io_item.m"
{
#line 845 "prog_io_item.m"
  {
#line 845 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 845 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeTerm_7;
#line 845 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModeTerm_8;
#line 840 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_13_13;
#line 840 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_14_14;
#line 840 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_15_15;
#line 840 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 840 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 840 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___Context_9;

#line 840 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 840 "prog_io_item.m"
      {
#line 840 "prog_io_item.m"
        parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 0)));
#line 840 "prog_io_item.m"
        parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 1)));
#line 840 "prog_io_item.m"
        parse_tree__prog_io_item___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 2)));
#line 840 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 840 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 840 "prog_io_item.m"
          {
#line 840 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_13_13, (MR_Integer) 0)));
#line 840 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_14_14, (MR_String) "::") == 0);
#line 840 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 840 "prog_io_item.m"
              {
#line 840 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 840 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 840 "prog_io_item.m"
                  {
#line 840 "prog_io_item.m"
                    parse_tree__prog_io_item__TypeTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 0)));
#line 840 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 1)));
#line 840 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 840 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 840 "prog_io_item.m"
                      {
#line 840 "prog_io_item.m"
                        parse_tree__prog_io_item__ModeTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 840 "prog_io_item.m"
                        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 1)));
#line 840 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 840 "prog_io_item.m"
                      }
#line 840 "prog_io_item.m"
                  }
#line 840 "prog_io_item.m"
              }
#line 840 "prog_io_item.m"
          }
#line 840 "prog_io_item.m"
      }
#line 845 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 841 "prog_io_item.m"
      {
#line 841 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Type_10;
#line 841 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Mode0_11;
#line 841 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Mode_12;
#line 841 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_18_18;

#line 841 "prog_io_item.m"
        {
#line 841 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__TypeTerm_7, &parse_tree__prog_io_item__Type_10);
        }
#line 841 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 841 "prog_io_item.m"
          {
#line 842 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = (MR_Integer) 0;
#line 842 "prog_io_item.m"
            {
#line 842 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_item__V_18_18, parse_tree__prog_io_item__ModeTerm_8, &parse_tree__prog_io_item__Mode0_11);
            }
#line 841 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 841 "prog_io_item.m"
              {
#line 843 "prog_io_item.m"
                {
#line 843 "prog_io_item.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_4, parse_tree__prog_io_item__Mode0_11, &parse_tree__prog_io_item__Mode_12);
                }
#line 844 "prog_io_item.m"
                {
#line 844 "prog_io_item.m"
                  MR_Word base;
#line 844 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeTypeAndMode_6 = base;
#line 844 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_10));
#line 844 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__Mode_12));
#line 844 "prog_io_item.m"
                }
#line 844 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 841 "prog_io_item.m"
              }
#line 841 "prog_io_item.m"
          }
#line 841 "prog_io_item.m"
      }
#line 845 "prog_io_item.m"
    else
#line 846 "prog_io_item.m"
      {
#line 846 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Type_19;

#line 846 "prog_io_item.m"
        {
#line 846 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__Term_5, &parse_tree__prog_io_item__Type_19);
        }
#line 846 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 846 "prog_io_item.m"
          {
#line 847 "prog_io_item.m"
            {
#line 847 "prog_io_item.m"
              MR_Word base;
#line 847 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 847 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeTypeAndMode_6 = base;
#line 847 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_19));
#line 847 "prog_io_item.m"
            }
#line 847 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 846 "prog_io_item.m"
          }
#line 846 "prog_io_item.m"
      }
#line 845 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 845 "prog_io_item.m"
  }
#line 836 "prog_io_item.m"
}

#line 828 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(
#line 828 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_1,
#line 828 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 828 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3)
#line 828 "prog_io_item.m"
{
#line 831 "prog_io_item.m"
  {
#line 831 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 831 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 831 "prog_io_item.m"
      {
#line 831 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 831 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 831 "prog_io_item.m"
      }
#line 831 "prog_io_item.m"
    else
#line 832 "prog_io_item.m"
      {
#line 832 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 832 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 832 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__H_8;
#line 832 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__T_9;
#line 845 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeTerm_13;
#line 845 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModeTerm_14;
#line 840 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_19_19;
#line 840 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_20_20;
#line 840 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_21_21;
#line 840 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 840 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 840 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item___Context_15;

#line 840 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__H0_6)) == (MR_mktag((MR_Integer) 0)));
#line 840 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 840 "prog_io_item.m"
          {
#line 840 "prog_io_item.m"
            parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 0)));
#line 840 "prog_io_item.m"
            parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 1)));
#line 840 "prog_io_item.m"
            parse_tree__prog_io_item___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 2)));
#line 840 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 840 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 840 "prog_io_item.m"
              {
#line 840 "prog_io_item.m"
                parse_tree__prog_io_item__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 840 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_20_20, (MR_String) "::") == 0);
#line 840 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 840 "prog_io_item.m"
                  {
#line 840 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 840 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 840 "prog_io_item.m"
                      {
#line 840 "prog_io_item.m"
                        parse_tree__prog_io_item__TypeTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 840 "prog_io_item.m"
                        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 1)));
#line 840 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 840 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 840 "prog_io_item.m"
                          {
#line 840 "prog_io_item.m"
                            parse_tree__prog_io_item__ModeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, (MR_Integer) 0)));
#line 840 "prog_io_item.m"
                            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, (MR_Integer) 1)));
#line 840 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 840 "prog_io_item.m"
                          }
#line 840 "prog_io_item.m"
                      }
#line 840 "prog_io_item.m"
                  }
#line 840 "prog_io_item.m"
              }
#line 840 "prog_io_item.m"
          }
#line 845 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 841 "prog_io_item.m"
          {
#line 841 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_16;
#line 841 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Mode0_17;
#line 841 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Mode_18;
#line 841 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_24_24;

#line 841 "prog_io_item.m"
            {
#line 841 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__TypeTerm_13, &parse_tree__prog_io_item__Type_16);
            }
#line 841 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 841 "prog_io_item.m"
              {
#line 842 "prog_io_item.m"
                parse_tree__prog_io_item__V_24_24 = (MR_Integer) 0;
#line 842 "prog_io_item.m"
                {
#line 842 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_item__V_24_24, parse_tree__prog_io_item__ModeTerm_14, &parse_tree__prog_io_item__Mode0_17);
                }
#line 841 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 841 "prog_io_item.m"
                  {
#line 843 "prog_io_item.m"
                    {
#line 843 "prog_io_item.m"
                      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_1, parse_tree__prog_io_item__Mode0_17, &parse_tree__prog_io_item__Mode_18);
                    }
#line 844 "prog_io_item.m"
                    {
#line 844 "prog_io_item.m"
                      parse_tree__prog_io_item__H_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__H_8, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_16));
#line 844 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__H_8, 1) = ((MR_Box) (parse_tree__prog_io_item__Mode_18));
#line 844 "prog_io_item.m"
                    }
#line 844 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 841 "prog_io_item.m"
                  }
#line 841 "prog_io_item.m"
              }
#line 841 "prog_io_item.m"
          }
#line 845 "prog_io_item.m"
        else
#line 846 "prog_io_item.m"
          {
#line 846 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_25;

#line 846 "prog_io_item.m"
            {
#line 846 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__H0_6, &parse_tree__prog_io_item__Type_25);
            }
#line 846 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 846 "prog_io_item.m"
              {
#line 847 "prog_io_item.m"
                {
#line 847 "prog_io_item.m"
                  parse_tree__prog_io_item__H_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 847 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H_8, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_25));
#line 847 "prog_io_item.m"
                }
#line 847 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 846 "prog_io_item.m"
              }
#line 846 "prog_io_item.m"
          }
#line 832 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 832 "prog_io_item.m"
          {
#line 834 "prog_io_item.m"
            {
#line 834 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_1, parse_tree__prog_io_item__T0_7, &parse_tree__prog_io_item__T_9);
            }
#line 832 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 832 "prog_io_item.m"
              {
#line 832 "prog_io_item.m"
                {
#line 832 "prog_io_item.m"
                  MR_Word base;
#line 832 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "prog_io_item.m"
                  *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 832 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__H_8));
#line 832 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__T_9));
#line 832 "prog_io_item.m"
                }
#line 832 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 832 "prog_io_item.m"
              }
#line 832 "prog_io_item.m"
          }
#line 832 "prog_io_item.m"
      }
#line 831 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 831 "prog_io_item.m"
  }
#line 828 "prog_io_item.m"
}

#line 753 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_2_14_p_0(
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncName_15,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Args_16,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ReturnArg_17,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncTerm_18,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_19,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_20,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_21,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Condition_22,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ExistQVars_23,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Constraints_24,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_25,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_26,
#line 753 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_27,
#line 753 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_28)
#line 753 "prog_io_item.m"
{
#line 760 "prog_io_item.m"
  {
#line 760 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 760 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_149_149;
#line 760 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConsistentArgsSpecs_29;
#line 760 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgsOnlySpecs_38;
#line 760 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnOnlySpecs_45;
#line 760 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConsistencySpecs_46;
#line 760 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_114_114;
#line 774 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_76_76;
#line 775 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_35_35;
#line 774 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_34_34;
#line 774 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 774 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_33_33;
#line 787 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_95_95;
#line 788 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_41_41;
#line 788 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_42_42;
#line 787 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_40_40;
#line 787 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_39_39;

#line 762 "prog_io_item.m"
    {
#line 762 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__type_and_mode_list_is_consistent_1_p_0(parse_tree__prog_io_item__Args_16);
    }
#line 765 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 764 "prog_io_item.m"
      parse_tree__prog_io_item__ConsistentArgsSpecs_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "prog_io_item.m"
    else
#line 767 "prog_io_item.m"
      {
#line 767 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ConsistentSpec_31;
#line 767 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_68_68;
#line 767 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_69_69;
#line 767 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_70_70;

#line 769 "prog_io_item.m"
        {
#line 769 "prog_io_item.m"
          parse_tree__prog_io_item__V_70_70 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_18);
        }
#line 769 "prog_io_item.m"
        {
#line 769 "prog_io_item.m"
          parse_tree__prog_io_item__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 769 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 769 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[121])));
#line 769 "prog_io_item.m"
        }
#line 770 "prog_io_item.m"
        {
#line 770 "prog_io_item.m"
          parse_tree__prog_io_item__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_item__V_69_69));
#line 770 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 770 "prog_io_item.m"
        }
#line 768 "prog_io_item.m"
        {
#line 768 "prog_io_item.m"
          parse_tree__prog_io_item__ConsistentSpec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 768 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ConsistentSpec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 768 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ConsistentSpec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 768 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ConsistentSpec_31, 2) = ((MR_Box) (parse_tree__prog_io_item__V_68_68));
#line 768 "prog_io_item.m"
        }
#line 771 "prog_io_item.m"
        {
#line 771 "prog_io_item.m"
          parse_tree__prog_io_item__ConsistentArgsSpecs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ConsistentArgsSpecs_29, 0) = ((MR_Box) (parse_tree__prog_io_item__ConsistentSpec_31));
#line 771 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ConsistentArgsSpecs_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "prog_io_item.m"
        }
#line 767 "prog_io_item.m"
      }
#line 775 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_17)) == (MR_mktag((MR_Integer) 0)));
#line 775 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 775 "prog_io_item.m"
      {
#line 775 "prog_io_item.m"
        parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnArg_17, (MR_Integer) 0)));
#line 774 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 774 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 774 "prog_io_item.m"
          {
#line 774 "prog_io_item.m"
            parse_tree__prog_io_item__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_16, (MR_Integer) 0)));
#line 774 "prog_io_item.m"
            parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_16, (MR_Integer) 1)));
#line 774 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_76_76)) == (MR_mktag((MR_Integer) 1)));
#line 774 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 774 "prog_io_item.m"
              {
#line 774 "prog_io_item.m"
                parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, (MR_Integer) 0)));
#line 774 "prog_io_item.m"
                parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, (MR_Integer) 1)));
#line 774 "prog_io_item.m"
              }
#line 774 "prog_io_item.m"
          }
#line 775 "prog_io_item.m"
      }
#line 783 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 778 "prog_io_item.m"
      {
#line 778 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ArgsOnlySpec_37;
#line 778 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_87_87;
#line 778 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_88_88;
#line 778 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_89_89;

#line 780 "prog_io_item.m"
        {
#line 780 "prog_io_item.m"
          parse_tree__prog_io_item__V_89_89 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_18);
        }
#line 780 "prog_io_item.m"
        {
#line 780 "prog_io_item.m"
          parse_tree__prog_io_item__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 780 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_item__V_89_89));
#line 780 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[122])));
#line 780 "prog_io_item.m"
        }
#line 781 "prog_io_item.m"
        {
#line 781 "prog_io_item.m"
          parse_tree__prog_io_item__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_item__V_88_88));
#line 781 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 781 "prog_io_item.m"
        }
#line 779 "prog_io_item.m"
        {
#line 779 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 779 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 779 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_37, 2) = ((MR_Box) (parse_tree__prog_io_item__V_87_87));
#line 779 "prog_io_item.m"
        }
#line 782 "prog_io_item.m"
        {
#line 782 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpecs_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_38, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsOnlySpec_37));
#line 782 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 782 "prog_io_item.m"
        }
#line 778 "prog_io_item.m"
      }
#line 783 "prog_io_item.m"
    else
#line 784 "prog_io_item.m"
      parse_tree__prog_io_item__ArgsOnlySpecs_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 788 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_17)) == (MR_mktag((MR_Integer) 1)));
#line 788 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 788 "prog_io_item.m"
      {
#line 788 "prog_io_item.m"
        parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_17, (MR_Integer) 0)));
#line 788 "prog_io_item.m"
        parse_tree__prog_io_item__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_17, (MR_Integer) 1)));
#line 787 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 787 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 787 "prog_io_item.m"
          {
#line 787 "prog_io_item.m"
            parse_tree__prog_io_item__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_16, (MR_Integer) 0)));
#line 787 "prog_io_item.m"
            parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_16, (MR_Integer) 1)));
#line 787 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_95_95)) == (MR_mktag((MR_Integer) 0)));
#line 787 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 787 "prog_io_item.m"
              parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_95_95, (MR_Integer) 0)));
#line 787 "prog_io_item.m"
          }
#line 788 "prog_io_item.m"
      }
#line 796 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 791 "prog_io_item.m"
      {
#line 791 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ReturnOnlySpec_44;
#line 791 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_106_106;
#line 791 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_107_107;
#line 791 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_108_108;

#line 793 "prog_io_item.m"
        {
#line 793 "prog_io_item.m"
          parse_tree__prog_io_item__V_108_108 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_18);
        }
#line 793 "prog_io_item.m"
        {
#line 793 "prog_io_item.m"
          parse_tree__prog_io_item__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 793 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io_item__V_108_108));
#line 793 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[123])));
#line 793 "prog_io_item.m"
        }
#line 794 "prog_io_item.m"
        {
#line 794 "prog_io_item.m"
          parse_tree__prog_io_item__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 0) = ((MR_Box) (parse_tree__prog_io_item__V_107_107));
#line 794 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 794 "prog_io_item.m"
        }
#line 792 "prog_io_item.m"
        {
#line 792 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 792 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 792 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_44, 2) = ((MR_Box) (parse_tree__prog_io_item__V_106_106));
#line 792 "prog_io_item.m"
        }
#line 795 "prog_io_item.m"
        {
#line 795 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpecs_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_45, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnOnlySpec_44));
#line 795 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 795 "prog_io_item.m"
        }
#line 791 "prog_io_item.m"
      }
#line 796 "prog_io_item.m"
    else
#line 797 "prog_io_item.m"
      parse_tree__prog_io_item__ReturnOnlySpecs_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8160 "parse_tree.prog_io_item.c"
    parse_tree__prog_io_item__TypeCtorInfo_149_149 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 799 "prog_io_item.m"
    {
#line 799 "prog_io_item.m"
      parse_tree__prog_io_item__V_114_114 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_149_149, parse_tree__prog_io_item__ArgsOnlySpecs_38, parse_tree__prog_io_item__ReturnOnlySpecs_45);
    }
#line 799 "prog_io_item.m"
    {
#line 799 "prog_io_item.m"
      parse_tree__prog_io_item__ConsistencySpecs_46 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_149_149, parse_tree__prog_io_item__ConsistentArgsSpecs_29, parse_tree__prog_io_item__V_114_114);
    }
#line 803 "prog_io_item.m"
    if ((parse_tree__prog_io_item__ConsistencySpecs_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 804 "prog_io_item.m"
      {
#line 804 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_150_150;
#line 804 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Purity_49;
#line 804 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_50;
#line 804 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TVarSet_51;
#line 804 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__IVarSet_52;
#line 804 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__AllArgs_53;
#line 804 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_115_115;

#line 805 "prog_io_item.m"
        {
#line 805 "prog_io_item.m"
          parse_tree__prog_io_item__get_purity_3_p_0(&parse_tree__prog_io_item__Purity_49, parse_tree__prog_io_item__Attributes0_25, &parse_tree__prog_io_item__Attributes_50);
        }
#line 8196 "parse_tree.prog_io_item.c"
        parse_tree__prog_io_item__TypeCtorInfo_150_150 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 806 "prog_io_item.m"
        {
#line 806 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_150_150, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_20, &parse_tree__prog_io_item__TVarSet_51);
        }
#line 807 "prog_io_item.m"
        {
#line 807 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_150_150, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_20, &parse_tree__prog_io_item__IVarSet_52);
        }
#line 808 "prog_io_item.m"
        {
#line 808 "prog_io_item.m"
          parse_tree__prog_io_item__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnArg_17));
#line 808 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 808 "prog_io_item.m"
        }
#line 808 "prog_io_item.m"
        {
#line 808 "prog_io_item.m"
          parse_tree__prog_io_item__AllArgs_53 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io_item__Args_16, parse_tree__prog_io_item__V_115_115);
        }
#line 809 "prog_io_item.m"
        {
#line 809 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__AllArgs_53);
        }
#line 817 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 810 "prog_io_item.m"
          {
#line 810 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ItemPredDecl_55;
#line 810 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Item_56;
#line 810 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeItem0_57;

#line 811 "prog_io_item.m"
            {
#line 811 "prog_io_item.m"
              parse_tree__prog_io_item__ItemPredDecl_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_55, 1) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_51));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_55, 2) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_52));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_55, 3) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_23));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_55, 4) = ((MR_Box) ((MR_Integer) 1));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_55, 5) = ((MR_Box) (parse_tree__prog_io_item__FuncName_15));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_55, 6) = ((MR_Box) (parse_tree__prog_io_item__AllArgs_53));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_55, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_55, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_55, 9) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_21));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_55, 10) = ((MR_Box) (parse_tree__prog_io_item__Condition_22));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_55, 11) = ((MR_Box) (parse_tree__prog_io_item__Purity_49));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_55, 12) = ((MR_Box) (parse_tree__prog_io_item__Constraints_24));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_55, 13) = ((MR_Box) (parse_tree__prog_io_item__Context_26));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_55, 14) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_27));
#line 811 "prog_io_item.m"
            }
#line 814 "prog_io_item.m"
            {
#line 814 "prog_io_item.m"
              parse_tree__prog_io_item__Item_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 814 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_56, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_55));
#line 814 "prog_io_item.m"
            }
#line 815 "prog_io_item.m"
            {
#line 815 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeItem0_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 815 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_57, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_56));
#line 815 "prog_io_item.m"
            }
#line 816 "prog_io_item.m"
            {
#line 816 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_57, parse_tree__prog_io_item__Attributes_50, parse_tree__prog_io_item__MaybeItem_28);
#line 816 "prog_io_item.m"
              return;
            }
#line 810 "prog_io_item.m"
          }
#line 817 "prog_io_item.m"
        else
#line 818 "prog_io_item.m"
          {
#line 818 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__TermStr_58;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Pieces_59;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_60;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_122_122;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_125_125;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_127_127;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_128_128;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_137_137;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_138_138;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_139_139;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_140_140;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_141_141;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_144_144;

#line 818 "prog_io_item.m"
            {
#line 818 "prog_io_item.m"
              parse_tree__prog_io_item__TermStr_58 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_150_150, parse_tree__prog_io_item__VarSet_20, parse_tree__prog_io_item__Term_19);
            }
#line 821 "prog_io_item.m"
            {
#line 821 "prog_io_item.m"
              parse_tree__prog_io_item__V_128_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_128_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 821 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_128_128, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_58));
#line 821 "prog_io_item.m"
            }
#line 821 "prog_io_item.m"
            {
#line 821 "prog_io_item.m"
              parse_tree__prog_io_item__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_127_127, 0) = ((MR_Box) (parse_tree__prog_io_item__V_128_128));
#line 821 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 821 "prog_io_item.m"
            }
#line 820 "prog_io_item.m"
            {
#line 820 "prog_io_item.m"
              parse_tree__prog_io_item__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_125_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 820 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_125_125, 1) = ((MR_Box) (parse_tree__prog_io_item__V_127_127));
#line 820 "prog_io_item.m"
            }
#line 820 "prog_io_item.m"
            {
#line 820 "prog_io_item.m"
              parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[125])));
#line 820 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io_item__V_125_125));
#line 820 "prog_io_item.m"
            }
#line 819 "prog_io_item.m"
            {
#line 819 "prog_io_item.m"
              parse_tree__prog_io_item__Pieces_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[124])));
#line 819 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_59, 1) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 819 "prog_io_item.m"
            }
#line 823 "prog_io_item.m"
            {
#line 823 "prog_io_item.m"
              parse_tree__prog_io_item__V_139_139 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_150_150, parse_tree__prog_io_item__Term_19);
            }
#line 823 "prog_io_item.m"
            {
#line 823 "prog_io_item.m"
              parse_tree__prog_io_item__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 823 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_141_141, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_59));
#line 823 "prog_io_item.m"
            }
#line 823 "prog_io_item.m"
            {
#line 823 "prog_io_item.m"
              parse_tree__prog_io_item__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_140_140, 0) = ((MR_Box) (parse_tree__prog_io_item__V_141_141));
#line 823 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 823 "prog_io_item.m"
            }
#line 823 "prog_io_item.m"
            {
#line 823 "prog_io_item.m"
              parse_tree__prog_io_item__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 823 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_item__V_139_139));
#line 823 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_138_138, 1) = ((MR_Box) (parse_tree__prog_io_item__V_140_140));
#line 823 "prog_io_item.m"
            }
#line 823 "prog_io_item.m"
            {
#line 823 "prog_io_item.m"
              parse_tree__prog_io_item__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_137_137, 0) = ((MR_Box) (parse_tree__prog_io_item__V_138_138));
#line 823 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 823 "prog_io_item.m"
            }
#line 822 "prog_io_item.m"
            {
#line 822 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 822 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 822 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 822 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_60, 2) = ((MR_Box) (parse_tree__prog_io_item__V_137_137));
#line 822 "prog_io_item.m"
            }
#line 824 "prog_io_item.m"
            {
#line 824 "prog_io_item.m"
              parse_tree__prog_io_item__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_144_144, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_60));
#line 824 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 824 "prog_io_item.m"
            }
#line 824 "prog_io_item.m"
            {
#line 824 "prog_io_item.m"
              MR_Word base;
#line 824 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 824 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_28 = base;
#line 824 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_144_144));
#line 824 "prog_io_item.m"
            }
#line 818 "prog_io_item.m"
          }
#line 804 "prog_io_item.m"
      }
#line 803 "prog_io_item.m"
    else
#line 802 "prog_io_item.m"
      {
#line 802 "prog_io_item.m"
        MR_Word base;
#line 802 "prog_io_item.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 802 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeItem_28 = base;
#line 802 "prog_io_item.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ConsistencySpecs_46));
#line 802 "prog_io_item.m"
      }
#line 760 "prog_io_item.m"
  }
#line 753 "prog_io_item.m"
}

#line 670 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_9_p_0(
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Condition_13,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_14,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_15,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_16,
#line 670 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_17,
#line 670 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_18)
#line 670 "prog_io_item.m"
{
#line 675 "prog_io_item.m"
  {
#line 675 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 675 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes_19;
#line 675 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeContext_20;

#line 676 "prog_io_item.m"
    {
#line 676 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__Attributes0_15, &parse_tree__prog_io_item__Attributes_19, &parse_tree__prog_io_item__MaybeContext_20);
    }
#line 681 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeContext_20)) == (MR_mktag((MR_Integer) 0))))
#line 679 "prog_io_item.m"
      {
#line 679 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeContext_20, (MR_Integer) 0)));

#line 680 "prog_io_item.m"
        {
#line 680 "prog_io_item.m"
          MR_Word base;
#line 680 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 680 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 680 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_21));
#line 680 "prog_io_item.m"
        }
#line 679 "prog_io_item.m"
      }
#line 681 "prog_io_item.m"
    else
#line 682 "prog_io_item.m"
      {
#line 682 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_20, (MR_Integer) 0)));
#line 682 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Constraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_20, (MR_Integer) 1)));
#line 682 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_20, (MR_Integer) 2)));
#line 744 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeSugaredFuncTerm_25;
#line 744 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ReturnTerm_26;
#line 684 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_46_46;
#line 684 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_47_47;
#line 684 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_48_48;
#line 684 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_49_49;
#line 684 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_50_50;
#line 684 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_27_27;

#line 684 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_12)) == (MR_mktag((MR_Integer) 0)));
#line 684 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 684 "prog_io_item.m"
          {
#line 684 "prog_io_item.m"
            parse_tree__prog_io_item__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 0)));
#line 684 "prog_io_item.m"
            parse_tree__prog_io_item__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 1)));
#line 684 "prog_io_item.m"
            parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 2)));
#line 684 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_46_46)) == (MR_mktag((MR_Integer) 0)));
#line 684 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 684 "prog_io_item.m"
              {
#line 684 "prog_io_item.m"
                parse_tree__prog_io_item__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_46_46, (MR_Integer) 0)));
#line 684 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_47_47, (MR_String) "=") == 0);
#line 684 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 684 "prog_io_item.m"
                  {
#line 685 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 685 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 685 "prog_io_item.m"
                      {
#line 685 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeSugaredFuncTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, (MR_Integer) 0)));
#line 685 "prog_io_item.m"
                        parse_tree__prog_io_item__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, (MR_Integer) 1)));
#line 685 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 685 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 685 "prog_io_item.m"
                          {
#line 685 "prog_io_item.m"
                            parse_tree__prog_io_item__ReturnTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, (MR_Integer) 0)));
#line 685 "prog_io_item.m"
                            parse_tree__prog_io_item__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, (MR_Integer) 1)));
#line 685 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 685 "prog_io_item.m"
                          }
#line 685 "prog_io_item.m"
                      }
#line 684 "prog_io_item.m"
                  }
#line 684 "prog_io_item.m"
              }
#line 684 "prog_io_item.m"
          }
#line 744 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 687 "prog_io_item.m"
          {
#line 687 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_150_150;
#line 687 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__FuncTerm_28;
#line 687 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFuncNameAndArgs_30;

#line 687 "prog_io_item.m"
            {
#line 687 "prog_io_item.m"
              parse_tree__prog_io_item__FuncTerm_28 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__MaybeSugaredFuncTerm_25);
            }
#line 8647 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_150_150 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 690 "prog_io_item.m"
            {
#line 690 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_150_150, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_28, parse_tree__prog_io_item__VarSet_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[56]), &parse_tree__prog_io_item__MaybeFuncNameAndArgs_30);
            }
#line 695 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFuncNameAndArgs_30)) == (MR_mktag((MR_Integer) 0))))
#line 693 "prog_io_item.m"
              {
#line 693 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFuncNameAndArgs_30, (MR_Integer) 0)));

#line 694 "prog_io_item.m"
                {
#line 694 "prog_io_item.m"
                  MR_Word base;
#line 694 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 694 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 694 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_142));
#line 694 "prog_io_item.m"
                }
#line 693 "prog_io_item.m"
              }
#line 695 "prog_io_item.m"
            else
#line 696 "prog_io_item.m"
              {
#line 696 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__FuncName_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncNameAndArgs_30, (MR_Integer) 0)));
#line 696 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncNameAndArgs_30, (MR_Integer) 1)));
#line 696 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeArgs_34;
#line 696 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeReturnArg_39;
#line 702 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgsPrime_33;
#line 718 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ReturnArgPrime_38;
#line 738 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Args_42;
#line 738 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ReturnArg_43;

#line 698 "prog_io_item.m"
                {
#line 698 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_24, parse_tree__prog_io_item__ArgTerms_32, &parse_tree__prog_io_item__ArgsPrime_33);
                }
#line 702 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 701 "prog_io_item.m"
                  {
#line 701 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeArgs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 701 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeArgs_34, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsPrime_33));
#line 701 "prog_io_item.m"
                  }
#line 702 "prog_io_item.m"
                else
#line 703 "prog_io_item.m"
                  {
#line 703 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__FuncTermStr_35;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ArgsPieces_36;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ArgsSpec_37;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_62_62;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_65_65;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_68_68;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_69_69;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_78_78;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_79_79;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_80_80;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_81_81;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_82_82;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_85_85;

#line 703 "prog_io_item.m"
                    {
#line 703 "prog_io_item.m"
                      parse_tree__prog_io_item__FuncTermStr_35 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_150_150, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__FuncTerm_28);
                    }
#line 706 "prog_io_item.m"
                    {
#line 706 "prog_io_item.m"
                      parse_tree__prog_io_item__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 706 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_item__FuncTermStr_35));
#line 706 "prog_io_item.m"
                    }
#line 706 "prog_io_item.m"
                    {
#line 706 "prog_io_item.m"
                      parse_tree__prog_io_item__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_item__V_69_69));
#line 706 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 706 "prog_io_item.m"
                    }
#line 705 "prog_io_item.m"
                    {
#line 705 "prog_io_item.m"
                      parse_tree__prog_io_item__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[118])));
#line 705 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io_item__V_68_68));
#line 705 "prog_io_item.m"
                    }
#line 705 "prog_io_item.m"
                    {
#line 705 "prog_io_item.m"
                      parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[117])));
#line 705 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io_item__V_65_65));
#line 705 "prog_io_item.m"
                    }
#line 704 "prog_io_item.m"
                    {
#line 704 "prog_io_item.m"
                      parse_tree__prog_io_item__ArgsPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[116])));
#line 704 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsPieces_36, 1) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 704 "prog_io_item.m"
                    }
#line 709 "prog_io_item.m"
                    {
#line 709 "prog_io_item.m"
                      parse_tree__prog_io_item__V_80_80 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_150_150, parse_tree__prog_io_item__FuncTerm_28);
                    }
#line 710 "prog_io_item.m"
                    {
#line 710 "prog_io_item.m"
                      parse_tree__prog_io_item__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 710 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsPieces_36));
#line 710 "prog_io_item.m"
                    }
#line 710 "prog_io_item.m"
                    {
#line 710 "prog_io_item.m"
                      parse_tree__prog_io_item__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io_item__V_82_82));
#line 710 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 710 "prog_io_item.m"
                    }
#line 709 "prog_io_item.m"
                    {
#line 709 "prog_io_item.m"
                      parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 709 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 709 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (parse_tree__prog_io_item__V_81_81));
#line 709 "prog_io_item.m"
                    }
#line 710 "prog_io_item.m"
                    {
#line 710 "prog_io_item.m"
                      parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 710 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 710 "prog_io_item.m"
                    }
#line 707 "prog_io_item.m"
                    {
#line 707 "prog_io_item.m"
                      parse_tree__prog_io_item__ArgsSpec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 707 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 707 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_37, 2) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 707 "prog_io_item.m"
                    }
#line 711 "prog_io_item.m"
                    {
#line 711 "prog_io_item.m"
                      parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsSpec_37));
#line 711 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "prog_io_item.m"
                    }
#line 711 "prog_io_item.m"
                    {
#line 711 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeArgs_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 711 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeArgs_34, 0) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 711 "prog_io_item.m"
                    }
#line 703 "prog_io_item.m"
                  }
#line 714 "prog_io_item.m"
                {
#line 714 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_3_p_0(parse_tree__prog_io_item__InstConstraints_24, parse_tree__prog_io_item__ReturnTerm_26, &parse_tree__prog_io_item__ReturnArgPrime_38);
                }
#line 718 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 717 "prog_io_item.m"
                  {
#line 717 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeReturnArg_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 717 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeReturnArg_39, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnArgPrime_38));
#line 717 "prog_io_item.m"
                  }
#line 718 "prog_io_item.m"
                else
#line 721 "prog_io_item.m"
                  {
#line 721 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ReturnSpec_41;
#line 721 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_103_103;
#line 721 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_104_104;
#line 721 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_105_105;
#line 721 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_110_110;

#line 724 "prog_io_item.m"
                    {
#line 724 "prog_io_item.m"
                      parse_tree__prog_io_item__V_105_105 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_150_150, parse_tree__prog_io_item__ReturnTerm_26);
                    }
#line 724 "prog_io_item.m"
                    {
#line 724 "prog_io_item.m"
                      parse_tree__prog_io_item__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 724 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_104_104, 0) = ((MR_Box) (parse_tree__prog_io_item__V_105_105));
#line 724 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[119])));
#line 724 "prog_io_item.m"
                    }
#line 725 "prog_io_item.m"
                    {
#line 725 "prog_io_item.m"
                      parse_tree__prog_io_item__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_103_103, 0) = ((MR_Box) (parse_tree__prog_io_item__V_104_104));
#line 725 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 725 "prog_io_item.m"
                    }
#line 722 "prog_io_item.m"
                    {
#line 722 "prog_io_item.m"
                      parse_tree__prog_io_item__ReturnSpec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 722 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 722 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_41, 2) = ((MR_Box) (parse_tree__prog_io_item__V_103_103));
#line 722 "prog_io_item.m"
                    }
#line 726 "prog_io_item.m"
                    {
#line 726 "prog_io_item.m"
                      parse_tree__prog_io_item__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnSpec_41));
#line 726 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "prog_io_item.m"
                    }
#line 726 "prog_io_item.m"
                    {
#line 726 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeReturnArg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 726 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeReturnArg_39, 0) = ((MR_Box) (parse_tree__prog_io_item__V_110_110));
#line 726 "prog_io_item.m"
                    }
#line 721 "prog_io_item.m"
                  }
#line 729 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeArgs_34)) == (MR_mktag((MR_Integer) 1)));
#line 729 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 729 "prog_io_item.m"
                  {
#line 729 "prog_io_item.m"
                    parse_tree__prog_io_item__Args_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeArgs_34, (MR_Integer) 0)));
#line 730 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeReturnArg_39)) == (MR_mktag((MR_Integer) 1)));
#line 730 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 730 "prog_io_item.m"
                      parse_tree__prog_io_item__ReturnArg_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeReturnArg_39, (MR_Integer) 0)));
#line 729 "prog_io_item.m"
                  }
#line 738 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 734 "prog_io_item.m"
                  {
#line 734 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_func_decl_base_2_14_p_0(parse_tree__prog_io_item__FuncName_31, parse_tree__prog_io_item__Args_42, parse_tree__prog_io_item__ReturnArg_43, parse_tree__prog_io_item__FuncTerm_28, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__MaybeDet_14, parse_tree__prog_io_item__Condition_13, parse_tree__prog_io_item__ExistQVars_22, parse_tree__prog_io_item__Constraints_23, parse_tree__prog_io_item__Attributes_19, parse_tree__prog_io_item__Context_16, parse_tree__prog_io_item__SeqNum_17, parse_tree__prog_io_item__MaybeItem_18);
#line 734 "prog_io_item.m"
                    return;
                  }
#line 738 "prog_io_item.m"
                else
#line 740 "prog_io_item.m"
                  {
#line 740 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_112_112;
#line 740 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_113_113;
#line 740 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Specs_143;

#line 739 "prog_io_item.m"
                    {
#line 739 "prog_io_item.m"
                      parse_tree__prog_io_item__V_112_112 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[5], parse_tree__prog_io_item__MaybeArgs_34);
                    }
#line 740 "prog_io_item.m"
                    {
#line 740 "prog_io_item.m"
                      parse_tree__prog_io_item__V_113_113 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io_item__MaybeReturnArg_39);
                    }
#line 739 "prog_io_item.m"
                    {
#line 739 "prog_io_item.m"
                      parse_tree__prog_io_item__Specs_143 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_112_112, parse_tree__prog_io_item__V_113_113);
                    }
#line 741 "prog_io_item.m"
                    {
#line 741 "prog_io_item.m"
                      MR_Word base;
#line 741 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 741 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 741 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_143));
#line 741 "prog_io_item.m"
                    }
#line 740 "prog_io_item.m"
                  }
#line 696 "prog_io_item.m"
              }
#line 687 "prog_io_item.m"
          }
#line 744 "prog_io_item.m"
        else
#line 746 "prog_io_item.m"
          {
#line 746 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_45;
#line 746 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_133_133;
#line 746 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_134_134;
#line 746 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_135_135;
#line 746 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_140_140;

#line 748 "prog_io_item.m"
            {
#line 748 "prog_io_item.m"
              parse_tree__prog_io_item__V_135_135 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_12);
            }
#line 748 "prog_io_item.m"
            {
#line 748 "prog_io_item.m"
              parse_tree__prog_io_item__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 748 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_134_134, 0) = ((MR_Box) (parse_tree__prog_io_item__V_135_135));
#line 748 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[120])));
#line 748 "prog_io_item.m"
            }
#line 748 "prog_io_item.m"
            {
#line 748 "prog_io_item.m"
              parse_tree__prog_io_item__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_133_133, 0) = ((MR_Box) (parse_tree__prog_io_item__V_134_134));
#line 748 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "prog_io_item.m"
            }
#line 747 "prog_io_item.m"
            {
#line 747 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 747 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 747 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_45, 2) = ((MR_Box) (parse_tree__prog_io_item__V_133_133));
#line 747 "prog_io_item.m"
            }
#line 749 "prog_io_item.m"
            {
#line 749 "prog_io_item.m"
              parse_tree__prog_io_item__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_140_140, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_45));
#line 749 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "prog_io_item.m"
            }
#line 749 "prog_io_item.m"
            {
#line 749 "prog_io_item.m"
              MR_Word base;
#line 749 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 749 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 749 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_140_140));
#line 749 "prog_io_item.m"
            }
#line 746 "prog_io_item.m"
          }
#line 682 "prog_io_item.m"
      }
#line 675 "prog_io_item.m"
  }
#line 670 "prog_io_item.m"
}

#line 569 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_decl_base_12_p_0(
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_13,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_15,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_16,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Condition_17,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_18,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_19,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_20,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 569 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 569 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24)
#line 569 "prog_io_item.m"
{
#line 576 "prog_io_item.m"
  {
#line 576 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 576 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes1_25;
#line 576 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeExistClassInstContext_26;

#line 577 "prog_io_item.m"
    {
#line 577 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_14, parse_tree__prog_io_item__VarSet_15, parse_tree__prog_io_item__Attributes0_21, &parse_tree__prog_io_item__Attributes1_25, &parse_tree__prog_io_item__MaybeExistClassInstContext_26);
    }
#line 582 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeExistClassInstContext_26)) == (MR_mktag((MR_Integer) 0))))
#line 580 "prog_io_item.m"
      {
#line 580 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeExistClassInstContext_26, (MR_Integer) 0)));

#line 581 "prog_io_item.m"
        {
#line 581 "prog_io_item.m"
          MR_Word base;
#line 581 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 581 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 581 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_27));
#line 581 "prog_io_item.m"
        }
#line 580 "prog_io_item.m"
      }
#line 582 "prog_io_item.m"
    else
#line 584 "prog_io_item.m"
      {
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_206_206 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_207_207;
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_26, (MR_Integer) 0)));
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Constraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_26, (MR_Integer) 1)));
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_26, (MR_Integer) 2)));
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ContextPieces_31;
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybePredNameAndArgs_32;
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_58_58;
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_59_59;

#line 585 "prog_io_item.m"
        {
#line 585 "prog_io_item.m"
          parse_tree__prog_io_item__V_59_59 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_13);
        }
#line 586 "prog_io_item.m"
        {
#line 586 "prog_io_item.m"
          parse_tree__prog_io_item__V_58_58 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_206_206, parse_tree__prog_io_item__V_59_59, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[109]));
        }
#line 585 "prog_io_item.m"
        {
#line 585 "prog_io_item.m"
          parse_tree__prog_io_item__ContextPieces_31 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_206_206, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[107]), parse_tree__prog_io_item__V_58_58);
        }
#line 9213 "parse_tree.prog_io_item.c"
        parse_tree__prog_io_item__TypeCtorInfo_207_207 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 587 "prog_io_item.m"
        {
#line 587 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_207_207, parse_tree__prog_io_item__ModuleName_14, parse_tree__prog_io_item__PredTypeTerm_16, parse_tree__prog_io_item__VarSet_15, parse_tree__prog_io_item__ContextPieces_31, &parse_tree__prog_io_item__MaybePredNameAndArgs_32);
        }
#line 592 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybePredNameAndArgs_32)) == (MR_mktag((MR_Integer) 0))))
#line 590 "prog_io_item.m"
          {
#line 590 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybePredNameAndArgs_32, (MR_Integer) 0)));

#line 591 "prog_io_item.m"
            {
#line 591 "prog_io_item.m"
              MR_Word base;
#line 591 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 591 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 591 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_190));
#line 591 "prog_io_item.m"
            }
#line 590 "prog_io_item.m"
          }
#line 592 "prog_io_item.m"
        else
#line 593 "prog_io_item.m"
          {
#line 593 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_32, (MR_Integer) 0)));
#line 593 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_32, (MR_Integer) 1)));
#line 655 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Args_35;

#line 594 "prog_io_item.m"
            {
#line 594 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_30, parse_tree__prog_io_item__ArgTerms_34, &parse_tree__prog_io_item__Args_35);
            }
#line 655 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 647 "prog_io_item.m"
              {
#line 595 "prog_io_item.m"
                {
#line 595 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__type_and_mode_list_is_consistent_1_p_0(parse_tree__prog_io_item__Args_35);
                }
#line 647 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 607 "prog_io_item.m"
                  {
#line 597 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_64_64;
#line 597 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_36_36;
#line 598 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_38_38;
#line 598 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_37_37;

#line 597 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_19)) == (MR_mktag((MR_Integer) 1)));
#line 597 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 597 "prog_io_item.m"
                      {
#line 597 "prog_io_item.m"
                        parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_19, (MR_Integer) 0)));
#line 598 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_35)) == (MR_mktag((MR_Integer) 1)));
#line 598 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 598 "prog_io_item.m"
                          {
#line 598 "prog_io_item.m"
                            parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_35, (MR_Integer) 0)));
#line 598 "prog_io_item.m"
                            parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_35, (MR_Integer) 1)));
#line 598 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 598 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 598 "prog_io_item.m"
                              parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 598 "prog_io_item.m"
                          }
#line 597 "prog_io_item.m"
                      }
#line 607 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 601 "prog_io_item.m"
                      {
#line 601 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Spec_40;
#line 601 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_78_78;
#line 601 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_79_79;
#line 601 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_80_80;
#line 601 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_85_85;

#line 604 "prog_io_item.m"
                        {
#line 604 "prog_io_item.m"
                          parse_tree__prog_io_item__V_80_80 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_207_207, parse_tree__prog_io_item__PredTypeTerm_16);
                        }
#line 604 "prog_io_item.m"
                        {
#line 604 "prog_io_item.m"
                          parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 604 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 604 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[110])));
#line 604 "prog_io_item.m"
                        }
#line 605 "prog_io_item.m"
                        {
#line 605 "prog_io_item.m"
                          parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 605 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "prog_io_item.m"
                        }
#line 602 "prog_io_item.m"
                        {
#line 602 "prog_io_item.m"
                          parse_tree__prog_io_item__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 602 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 602 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 2) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 602 "prog_io_item.m"
                        }
#line 606 "prog_io_item.m"
                        {
#line 606 "prog_io_item.m"
                          parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_40));
#line 606 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "prog_io_item.m"
                        }
#line 606 "prog_io_item.m"
                        {
#line 606 "prog_io_item.m"
                          MR_Word base;
#line 606 "prog_io_item.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 606 "prog_io_item.m"
                          *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 606 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 606 "prog_io_item.m"
                        }
#line 601 "prog_io_item.m"
                      }
#line 607 "prog_io_item.m"
                    else
#line 619 "prog_io_item.m"
                      {
#line 608 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_87_87;
#line 609 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_41_41;
#line 610 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_44_44;
#line 610 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_42_42;
#line 610 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_43_43;

#line 608 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 608 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 608 "prog_io_item.m"
                          {
#line 609 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithType_18)) == (MR_mktag((MR_Integer) 1)));
#line 609 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 609 "prog_io_item.m"
                              {
#line 609 "prog_io_item.m"
                                parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithType_18, (MR_Integer) 0)));
#line 610 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_35)) == (MR_mktag((MR_Integer) 1)));
#line 610 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 610 "prog_io_item.m"
                                  {
#line 610 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_35, (MR_Integer) 0)));
#line 610 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_35, (MR_Integer) 1)));
#line 610 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_87_87)) == (MR_mktag((MR_Integer) 1)));
#line 610 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 610 "prog_io_item.m"
                                      {
#line 610 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_87_87, (MR_Integer) 0)));
#line 610 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_87_87, (MR_Integer) 1)));
#line 610 "prog_io_item.m"
                                      }
#line 610 "prog_io_item.m"
                                  }
#line 609 "prog_io_item.m"
                              }
#line 608 "prog_io_item.m"
                          }
#line 619 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 613 "prog_io_item.m"
                          {
#line 613 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_101_101;
#line 613 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_102_102;
#line 613 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_103_103;
#line 613 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_108_108;
#line 613 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Spec_192;

#line 616 "prog_io_item.m"
                            {
#line 616 "prog_io_item.m"
                              parse_tree__prog_io_item__V_103_103 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_207_207, parse_tree__prog_io_item__PredTypeTerm_16);
                            }
#line 616 "prog_io_item.m"
                            {
#line 616 "prog_io_item.m"
                              parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 616 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_item__V_103_103));
#line 616 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[111])));
#line 616 "prog_io_item.m"
                            }
#line 617 "prog_io_item.m"
                            {
#line 617 "prog_io_item.m"
                              parse_tree__prog_io_item__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 617 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "prog_io_item.m"
                            }
#line 614 "prog_io_item.m"
                            {
#line 614 "prog_io_item.m"
                              parse_tree__prog_io_item__Spec_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 614 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_192, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 614 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_192, 2) = ((MR_Box) (parse_tree__prog_io_item__V_101_101));
#line 614 "prog_io_item.m"
                            }
#line 618 "prog_io_item.m"
                            {
#line 618 "prog_io_item.m"
                              parse_tree__prog_io_item__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_192));
#line 618 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 618 "prog_io_item.m"
                            }
#line 618 "prog_io_item.m"
                            {
#line 618 "prog_io_item.m"
                              MR_Word base;
#line 618 "prog_io_item.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 618 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 618 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_108_108));
#line 618 "prog_io_item.m"
                            }
#line 613 "prog_io_item.m"
                          }
#line 619 "prog_io_item.m"
                        else
#line 633 "prog_io_item.m"
                          {
#line 620 "prog_io_item.m"
                            {
#line 620 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__Args_35);
                            }
#line 633 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 622 "prog_io_item.m"
                              {
#line 622 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Purity_45;
#line 622 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Attributes_46;
#line 622 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__TVarSet_47;
#line 622 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__IVarSet_48;
#line 622 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ItemPredDecl_50;
#line 622 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Item_51;
#line 622 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeItem0_52;

#line 622 "prog_io_item.m"
                                {
#line 622 "prog_io_item.m"
                                  parse_tree__prog_io_item__get_purity_3_p_0(&parse_tree__prog_io_item__Purity_45, parse_tree__prog_io_item__Attributes1_25, &parse_tree__prog_io_item__Attributes_46);
                                }
#line 623 "prog_io_item.m"
                                {
#line 623 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_207_207, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_15, &parse_tree__prog_io_item__TVarSet_47);
                                }
#line 624 "prog_io_item.m"
                                {
#line 624 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_207_207, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_15, &parse_tree__prog_io_item__IVarSet_48);
                                }
#line 626 "prog_io_item.m"
                                {
#line 626 "prog_io_item.m"
                                  parse_tree__prog_io_item__ItemPredDecl_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 1) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_47));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 2) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_48));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 3) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_28));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 4) = ((MR_Box) (parse_tree__prog_io_item__PredOrFunc_13));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 5) = ((MR_Box) (parse_tree__prog_io_item__Functor_33));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 6) = ((MR_Box) (parse_tree__prog_io_item__Args_35));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 7) = ((MR_Box) (parse_tree__prog_io_item__WithType_18));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 8) = ((MR_Box) (parse_tree__prog_io_item__WithInst_19));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 9) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_20));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 10) = ((MR_Box) (parse_tree__prog_io_item__Condition_17));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 11) = ((MR_Box) (parse_tree__prog_io_item__Purity_45));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 12) = ((MR_Box) (parse_tree__prog_io_item__Constraints_29));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 13) = ((MR_Box) (parse_tree__prog_io_item__Context_22));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 14) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_23));
#line 626 "prog_io_item.m"
                                }
#line 630 "prog_io_item.m"
                                {
#line 630 "prog_io_item.m"
                                  parse_tree__prog_io_item__Item_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 630 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_51, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_50));
#line 630 "prog_io_item.m"
                                }
#line 631 "prog_io_item.m"
                                {
#line 631 "prog_io_item.m"
                                  parse_tree__prog_io_item__MaybeItem0_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_52, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_51));
#line 631 "prog_io_item.m"
                                }
#line 632 "prog_io_item.m"
                                {
#line 632 "prog_io_item.m"
                                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_52, parse_tree__prog_io_item__Attributes_46, parse_tree__prog_io_item__MaybeItem_24);
#line 632 "prog_io_item.m"
                                  return;
                                }
#line 622 "prog_io_item.m"
                              }
#line 633 "prog_io_item.m"
                            else
#line 635 "prog_io_item.m"
                              {
#line 635 "prog_io_item.m"
                                MR_String parse_tree__prog_io_item__PredTypeTermStr_53;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_117_117;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_118_118;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_119_119;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_122_122;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_124_124;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_125_125;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_134_134;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_135_135;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_136_136;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_137_137;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_138_138;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_141_141;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Pieces_193;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Spec_194;

#line 634 "prog_io_item.m"
                                {
#line 634 "prog_io_item.m"
                                  parse_tree__prog_io_item__PredTypeTermStr_53 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_207_207, parse_tree__prog_io_item__VarSet_15, parse_tree__prog_io_item__PredTypeTerm_16);
                                }
#line 638 "prog_io_item.m"
                                {
#line 638 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_118_118 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_13);
                                }
#line 640 "prog_io_item.m"
                                {
#line 640 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 640 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_125_125, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_53));
#line 640 "prog_io_item.m"
                                }
#line 640 "prog_io_item.m"
                                {
#line 640 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_item__V_125_125));
#line 640 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 640 "prog_io_item.m"
                                }
#line 639 "prog_io_item.m"
                                {
#line 639 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 639 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io_item__V_124_124));
#line 639 "prog_io_item.m"
                                }
#line 639 "prog_io_item.m"
                                {
#line 639 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_119_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[108])));
#line 639 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_119_119, 1) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 639 "prog_io_item.m"
                                }
#line 638 "prog_io_item.m"
                                {
#line 638 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_117_117 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_206_206, parse_tree__prog_io_item__V_118_118, parse_tree__prog_io_item__V_119_119);
                                }
#line 637 "prog_io_item.m"
                                {
#line 637 "prog_io_item.m"
                                  parse_tree__prog_io_item__Pieces_193 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_206_206, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[46]), parse_tree__prog_io_item__V_117_117);
                                }
#line 643 "prog_io_item.m"
                                {
#line 643 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_136_136 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_207_207, parse_tree__prog_io_item__PredTypeTerm_16);
                                }
#line 644 "prog_io_item.m"
                                {
#line 644 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 644 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_193));
#line 644 "prog_io_item.m"
                                }
#line 644 "prog_io_item.m"
                                {
#line 644 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_137_137, 0) = ((MR_Box) (parse_tree__prog_io_item__V_138_138));
#line 644 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "prog_io_item.m"
                                }
#line 643 "prog_io_item.m"
                                {
#line 643 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 643 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_135_135, 0) = ((MR_Box) (parse_tree__prog_io_item__V_136_136));
#line 643 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_135_135, 1) = ((MR_Box) (parse_tree__prog_io_item__V_137_137));
#line 643 "prog_io_item.m"
                                }
#line 644 "prog_io_item.m"
                                {
#line 644 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_134_134, 0) = ((MR_Box) (parse_tree__prog_io_item__V_135_135));
#line 644 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "prog_io_item.m"
                                }
#line 641 "prog_io_item.m"
                                {
#line 641 "prog_io_item.m"
                                  parse_tree__prog_io_item__Spec_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 641 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_194, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 641 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_194, 2) = ((MR_Box) (parse_tree__prog_io_item__V_134_134));
#line 641 "prog_io_item.m"
                                }
#line 645 "prog_io_item.m"
                                {
#line 645 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_141_141, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_194));
#line 645 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "prog_io_item.m"
                                }
#line 645 "prog_io_item.m"
                                {
#line 645 "prog_io_item.m"
                                  MR_Word base;
#line 645 "prog_io_item.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 645 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 645 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_141_141));
#line 645 "prog_io_item.m"
                                }
#line 635 "prog_io_item.m"
                              }
#line 633 "prog_io_item.m"
                          }
#line 619 "prog_io_item.m"
                      }
#line 607 "prog_io_item.m"
                  }
#line 647 "prog_io_item.m"
                else
#line 649 "prog_io_item.m"
                  {
#line 649 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_153_153;
#line 649 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_154_154;
#line 649 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_155_155;
#line 649 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_160_160;
#line 649 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_200;

#line 651 "prog_io_item.m"
                    {
#line 651 "prog_io_item.m"
                      parse_tree__prog_io_item__V_155_155 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_207_207, parse_tree__prog_io_item__PredTypeTerm_16);
                    }
#line 651 "prog_io_item.m"
                    {
#line 651 "prog_io_item.m"
                      parse_tree__prog_io_item__V_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 651 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_154_154, 0) = ((MR_Box) (parse_tree__prog_io_item__V_155_155));
#line 651 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[112])));
#line 651 "prog_io_item.m"
                    }
#line 652 "prog_io_item.m"
                    {
#line 652 "prog_io_item.m"
                      parse_tree__prog_io_item__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_153_153, 0) = ((MR_Box) (parse_tree__prog_io_item__V_154_154));
#line 652 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "prog_io_item.m"
                    }
#line 650 "prog_io_item.m"
                    {
#line 650 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 650 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 650 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 650 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_200, 2) = ((MR_Box) (parse_tree__prog_io_item__V_153_153));
#line 650 "prog_io_item.m"
                    }
#line 653 "prog_io_item.m"
                    {
#line 653 "prog_io_item.m"
                      parse_tree__prog_io_item__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_160_160, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_200));
#line 653 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_160_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 653 "prog_io_item.m"
                    }
#line 653 "prog_io_item.m"
                    {
#line 653 "prog_io_item.m"
                      MR_Word base;
#line 653 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 653 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 653 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_160_160));
#line 653 "prog_io_item.m"
                    }
#line 649 "prog_io_item.m"
                  }
#line 647 "prog_io_item.m"
              }
#line 655 "prog_io_item.m"
            else
#line 656 "prog_io_item.m"
              {
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_166_166;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_167_167;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_168_168;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_171_171;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_172_172;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_181_181;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_182_182;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_183_183;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_184_184;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_185_185;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_188_188;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_201;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_202;
#line 656 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredTypeTermStr_203;

#line 656 "prog_io_item.m"
                {
#line 656 "prog_io_item.m"
                  parse_tree__prog_io_item__PredTypeTermStr_203 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_207_207, parse_tree__prog_io_item__VarSet_15, parse_tree__prog_io_item__PredTypeTerm_16);
                }
#line 658 "prog_io_item.m"
                {
#line 658 "prog_io_item.m"
                  parse_tree__prog_io_item__V_167_167 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_13);
                }
#line 659 "prog_io_item.m"
                {
#line 659 "prog_io_item.m"
                  parse_tree__prog_io_item__V_172_172 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_172_172, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_172_172, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_203));
#line 659 "prog_io_item.m"
                }
#line 659 "prog_io_item.m"
                {
#line 659 "prog_io_item.m"
                  parse_tree__prog_io_item__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_171_171, 0) = ((MR_Box) (parse_tree__prog_io_item__V_172_172));
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_171_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 659 "prog_io_item.m"
                }
#line 659 "prog_io_item.m"
                {
#line 659 "prog_io_item.m"
                  parse_tree__prog_io_item__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_168_168, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[115])));
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_168_168, 1) = ((MR_Box) (parse_tree__prog_io_item__V_171_171));
#line 659 "prog_io_item.m"
                }
#line 658 "prog_io_item.m"
                {
#line 658 "prog_io_item.m"
                  parse_tree__prog_io_item__V_166_166 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_206_206, parse_tree__prog_io_item__V_167_167, parse_tree__prog_io_item__V_168_168);
                }
#line 657 "prog_io_item.m"
                {
#line 657 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_201 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_206_206, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[114]), parse_tree__prog_io_item__V_166_166);
                }
#line 661 "prog_io_item.m"
                {
#line 661 "prog_io_item.m"
                  parse_tree__prog_io_item__V_183_183 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_207_207, parse_tree__prog_io_item__PredTypeTerm_16);
                }
#line 662 "prog_io_item.m"
                {
#line 662 "prog_io_item.m"
                  parse_tree__prog_io_item__V_185_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 662 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_185_185, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_201));
#line 662 "prog_io_item.m"
                }
#line 662 "prog_io_item.m"
                {
#line 662 "prog_io_item.m"
                  parse_tree__prog_io_item__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_184_184, 0) = ((MR_Box) (parse_tree__prog_io_item__V_185_185));
#line 662 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 662 "prog_io_item.m"
                }
#line 661 "prog_io_item.m"
                {
#line 661 "prog_io_item.m"
                  parse_tree__prog_io_item__V_182_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 661 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_182_182, 0) = ((MR_Box) (parse_tree__prog_io_item__V_183_183));
#line 661 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_182_182, 1) = ((MR_Box) (parse_tree__prog_io_item__V_184_184));
#line 661 "prog_io_item.m"
                }
#line 662 "prog_io_item.m"
                {
#line 662 "prog_io_item.m"
                  parse_tree__prog_io_item__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_181_181, 0) = ((MR_Box) (parse_tree__prog_io_item__V_182_182));
#line 662 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 662 "prog_io_item.m"
                }
#line 660 "prog_io_item.m"
                {
#line 660 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_202, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_202, 2) = ((MR_Box) (parse_tree__prog_io_item__V_181_181));
#line 660 "prog_io_item.m"
                }
#line 663 "prog_io_item.m"
                {
#line 663 "prog_io_item.m"
                  parse_tree__prog_io_item__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_188_188, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_202));
#line 663 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_188_188, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "prog_io_item.m"
                }
#line 663 "prog_io_item.m"
                {
#line 663 "prog_io_item.m"
                  MR_Word base;
#line 663 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 663 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 663 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_188_188));
#line 663 "prog_io_item.m"
                }
#line 656 "prog_io_item.m"
              }
#line 593 "prog_io_item.m"
          }
#line 584 "prog_io_item.m"
      }
#line 576 "prog_io_item.m"
  }
#line 569 "prog_io_item.m"
}

#line 507 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0(
#line 507 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_9,
#line 507 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 507 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 507 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 507 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 507 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 507 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 507 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 507 "prog_io_item.m"
{
#line 512 "prog_io_item.m"
  {
#line 512 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 512 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeCondTerm_17;
#line 512 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Condition_18;
#line 512 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTerm_19;
#line 512 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_20;
#line 512 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTerm_21;
#line 512 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithInst_22;
#line 512 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithType_24;
#line 512 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BaseTerm_25;
#line 559 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeDetism_26;
#line 559 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithInst_27;
#line 559 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithType_28;

#line 513 "prog_io_item.m"
    {
#line 513 "prog_io_item.m"
      parse_tree__prog_io_util__parse_condition_suffix_3_p_0(parse_tree__prog_io_item__Term_12, &parse_tree__prog_io_item__BeforeCondTerm_17, &parse_tree__prog_io_item__Condition_18);
    }
#line 514 "prog_io_item.m"
    {
#line 514 "prog_io_item.m"
      parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BeforeCondTerm_17, &parse_tree__prog_io_item__BeforeDetismTerm_19, &parse_tree__prog_io_item__MaybeMaybeDetism_20);
    }
#line 516 "prog_io_item.m"
    {
#line 516 "prog_io_item.m"
      parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(parse_tree__prog_io_item__BeforeDetismTerm_19, &parse_tree__prog_io_item__BeforeWithInstTerm_21, &parse_tree__prog_io_item__MaybeWithInst_22);
    }
#line 518 "prog_io_item.m"
    {
#line 518 "prog_io_item.m"
      parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BeforeWithInstTerm_21, &parse_tree__prog_io_item__BaseTerm_25, &parse_tree__prog_io_item__MaybeWithType_24);
    }
#line 522 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_20)) == (MR_mktag((MR_Integer) 1)));
#line 522 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 522 "prog_io_item.m"
      {
#line 522 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeDetism_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_20, (MR_Integer) 0)));
#line 523 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_22)) == (MR_mktag((MR_Integer) 1)));
#line 523 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 523 "prog_io_item.m"
          {
#line 523 "prog_io_item.m"
            parse_tree__prog_io_item__WithInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_22, (MR_Integer) 0)));
#line 524 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithType_24)) == (MR_mktag((MR_Integer) 1)));
#line 524 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 524 "prog_io_item.m"
              parse_tree__prog_io_item__WithType_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithType_24, (MR_Integer) 0)));
#line 523 "prog_io_item.m"
          }
#line 522 "prog_io_item.m"
      }
#line 559 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 535 "prog_io_item.m"
      {
#line 527 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 528 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;

#line 527 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_26)) == (MR_mktag((MR_Integer) 1)));
#line 527 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 527 "prog_io_item.m"
          {
#line 527 "prog_io_item.m"
            parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_26, (MR_Integer) 0)));
#line 528 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_27)) == (MR_mktag((MR_Integer) 1)));
#line 528 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 528 "prog_io_item.m"
              parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_27, (MR_Integer) 0)));
#line 527 "prog_io_item.m"
          }
#line 535 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 531 "prog_io_item.m"
          {
#line 531 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_32;
#line 531 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_48_48;
#line 531 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_49_49;
#line 531 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_50_50;
#line 531 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_55_55;

#line 533 "prog_io_item.m"
            {
#line 533 "prog_io_item.m"
              parse_tree__prog_io_item__V_50_50 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_25);
            }
#line 533 "prog_io_item.m"
            {
#line 533 "prog_io_item.m"
              parse_tree__prog_io_item__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 533 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_item__V_50_50));
#line 533 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[104])));
#line 533 "prog_io_item.m"
            }
#line 533 "prog_io_item.m"
            {
#line 533 "prog_io_item.m"
              parse_tree__prog_io_item__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_item__V_49_49));
#line 533 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "prog_io_item.m"
            }
#line 532 "prog_io_item.m"
            {
#line 532 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 532 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 532 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_32, 2) = ((MR_Box) (parse_tree__prog_io_item__V_48_48));
#line 532 "prog_io_item.m"
            }
#line 534 "prog_io_item.m"
            {
#line 534 "prog_io_item.m"
              parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_32));
#line 534 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 534 "prog_io_item.m"
            }
#line 534 "prog_io_item.m"
            {
#line 534 "prog_io_item.m"
              MR_Word base;
#line 534 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 534 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 534 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 534 "prog_io_item.m"
            }
#line 531 "prog_io_item.m"
          }
#line 535 "prog_io_item.m"
        else
#line 544 "prog_io_item.m"
          {
#line 536 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_33_33;

#line 536 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_27)) == (MR_mktag((MR_Integer) 1)));
#line 536 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 536 "prog_io_item.m"
              {
#line 536 "prog_io_item.m"
                parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_27, (MR_Integer) 0)));
#line 537 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "prog_io_item.m"
              }
#line 544 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 540 "prog_io_item.m"
              {
#line 540 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_79_79;
#line 540 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_80_80;
#line 540 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_81_81;
#line 540 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_86_86;
#line 540 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_93;

#line 542 "prog_io_item.m"
                {
#line 542 "prog_io_item.m"
                  parse_tree__prog_io_item__V_81_81 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_25);
                }
#line 542 "prog_io_item.m"
                {
#line 542 "prog_io_item.m"
                  parse_tree__prog_io_item__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 542 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_item__V_81_81));
#line 542 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[105])));
#line 542 "prog_io_item.m"
                }
#line 542 "prog_io_item.m"
                {
#line 542 "prog_io_item.m"
                  parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 542 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "prog_io_item.m"
                }
#line 541 "prog_io_item.m"
                {
#line 541 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 541 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 541 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_93, 2) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 541 "prog_io_item.m"
                }
#line 543 "prog_io_item.m"
                {
#line 543 "prog_io_item.m"
                  parse_tree__prog_io_item__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_93));
#line 543 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "prog_io_item.m"
                }
#line 543 "prog_io_item.m"
                {
#line 543 "prog_io_item.m"
                  MR_Word base;
#line 543 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 543 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 543 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_86_86));
#line 543 "prog_io_item.m"
                }
#line 540 "prog_io_item.m"
              }
#line 544 "prog_io_item.m"
            else
#line 553 "prog_io_item.m"
              {
#line 548 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__PredOrFunc_9 == (MR_Integer) 1);
#line 548 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 549 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 551 "prog_io_item.m"
                  {
#line 551 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_func_decl_base_9_p_0(parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BaseTerm_25, parse_tree__prog_io_item__Condition_18, parse_tree__prog_io_item__MaybeDetism_26, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 551 "prog_io_item.m"
                    return;
                  }
#line 553 "prog_io_item.m"
                else
#line 554 "prog_io_item.m"
                  {
#line 554 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_pred_decl_base_12_p_0(parse_tree__prog_io_item__PredOrFunc_9, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BaseTerm_25, parse_tree__prog_io_item__Condition_18, parse_tree__prog_io_item__WithType_28, parse_tree__prog_io_item__WithInst_27, parse_tree__prog_io_item__MaybeDetism_26, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 554 "prog_io_item.m"
                    return;
                  }
#line 553 "prog_io_item.m"
              }
#line 544 "prog_io_item.m"
          }
#line 535 "prog_io_item.m"
      }
#line 559 "prog_io_item.m"
    else
#line 562 "prog_io_item.m"
      {
#line 562 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_98_98 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 562 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_34;
#line 562 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_88_88;
#line 562 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_89_89;
#line 562 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_90_90;
#line 562 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_91_91;

#line 560 "prog_io_item.m"
        {
#line 560 "prog_io_item.m"
          parse_tree__prog_io_item__V_88_88 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_20);
        }
#line 561 "prog_io_item.m"
        {
#line 561 "prog_io_item.m"
          parse_tree__prog_io_item__V_90_90 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_22);
        }
#line 562 "prog_io_item.m"
        {
#line 562 "prog_io_item.m"
          parse_tree__prog_io_item__V_91_91 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[4], parse_tree__prog_io_item__MaybeWithType_24);
        }
#line 562 "prog_io_item.m"
        {
#line 562 "prog_io_item.m"
          parse_tree__prog_io_item__V_89_89 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_98_98, parse_tree__prog_io_item__V_90_90, parse_tree__prog_io_item__V_91_91);
        }
#line 561 "prog_io_item.m"
        {
#line 561 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_34 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_98_98, parse_tree__prog_io_item__V_88_88, parse_tree__prog_io_item__V_89_89);
        }
#line 563 "prog_io_item.m"
        {
#line 563 "prog_io_item.m"
          MR_Word base;
#line 563 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 563 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 563 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_34));
#line 563 "prog_io_item.m"
        }
#line 562 "prog_io_item.m"
      }
#line 512 "prog_io_item.m"
  }
#line 507 "prog_io_item.m"
}

#line 348 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_4(
#line 348 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 348 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 348 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 348 "prog_io_item.m"
{
#line 348 "prog_io_item.m"
  {
#line 348 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 348 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv3_MaybeModule_8;

#line 348 "prog_io_item.m"
    {
#line 348 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv3_MaybeModule_8);
    }
#line 348 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv3_MaybeModule_8));
#line 348 "prog_io_item.m"
  }
#line 348 "prog_io_item.m"
}

#line 270 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_3(
#line 270 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 270 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 270 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 270 "prog_io_item.m"
{
#line 270 "prog_io_item.m"
  {
#line 270 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 270 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv2_MaybeModuleSpecifier_6;

#line 270 "prog_io_item.m"
    {
#line 270 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_specifier_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv2_MaybeModuleSpecifier_6);
    }
#line 270 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv2_MaybeModuleSpecifier_6));
#line 270 "prog_io_item.m"
  }
#line 270 "prog_io_item.m"
}

#line 270 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_2(
#line 270 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 270 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 270 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 270 "prog_io_item.m"
{
#line 270 "prog_io_item.m"
  {
#line 270 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 270 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv1_MaybeModuleSpecifier_6;

#line 270 "prog_io_item.m"
    {
#line 270 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_specifier_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv1_MaybeModuleSpecifier_6);
    }
#line 270 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv1_MaybeModuleSpecifier_6));
#line 270 "prog_io_item.m"
  }
#line 270 "prog_io_item.m"
}

#line 270 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_1(
#line 270 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 270 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 270 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 270 "prog_io_item.m"
{
#line 270 "prog_io_item.m"
  {
#line 270 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 270 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_MaybeModuleSpecifier_6;

#line 270 "prog_io_item.m"
    {
#line 270 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_specifier_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_MaybeModuleSpecifier_6);
    }
#line 270 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_MaybeModuleSpecifier_6));
#line 270 "prog_io_item.m"
  }
#line 270 "prog_io_item.m"
}

#line 217 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0(
#line 217 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 217 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 217 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_11,
#line 217 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_12,
#line 217 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 217 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 217 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 217 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 217 "prog_io_item.m"
{
#line 224 "prog_io_item.m"
  {
#line 224 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "func") == 0))
#line 254 "prog_io_item.m"
      {
#line 254 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DeclTerm_27;
#line 254 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_72_72;

#line 255 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 255 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 255 "prog_io_item.m"
          {
#line 255 "prog_io_item.m"
            parse_tree__prog_io_item__DeclTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 255 "prog_io_item.m"
            parse_tree__prog_io_item__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 255 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 254 "prog_io_item.m"
              {
#line 256 "prog_io_item.m"
                {
#line 256 "prog_io_item.m"
                  parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0((MR_Integer) 1, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__DeclTerm_27, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                }
#line 256 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 254 "prog_io_item.m"
              }
#line 255 "prog_io_item.m"
          }
#line 254 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
      if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "inst") == 0))
#line 229 "prog_io_item.m"
        {
#line 229 "prog_io_item.m"
          MR_Word parse_tree__prog_io_item__TypeCtorInfo_127_127;
#line 229 "prog_io_item.m"
          MR_Word parse_tree__prog_io_item__InstDeclTerm_18;
#line 229 "prog_io_item.m"
          MR_Word parse_tree__prog_io_item__MaybeItem0_19;
#line 229 "prog_io_item.m"
          MR_Word parse_tree__prog_io_item__V_79_79;

#line 230 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 230 "prog_io_item.m"
          if (parse_tree__prog_io_item__succeeded)
#line 230 "prog_io_item.m"
            {
#line 230 "prog_io_item.m"
              parse_tree__prog_io_item__InstDeclTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 230 "prog_io_item.m"
              parse_tree__prog_io_item__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 230 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_79_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 229 "prog_io_item.m"
                {
#line 231 "prog_io_item.m"
                  {
#line 231 "prog_io_item.m"
                    parse_tree__prog_io_mode_defn__parse_inst_defn_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__InstDeclTerm_18, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_19);
                  }
#line 10656 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_127_127 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 233 "prog_io_item.m"
                  {
#line 233 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_127_127, parse_tree__prog_io_item__MaybeItem0_19, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 233 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 229 "prog_io_item.m"
                }
#line 230 "prog_io_item.m"
            }
#line 229 "prog_io_item.m"
        }
#line 224 "prog_io_item.m"
      else
#line 224 "prog_io_item.m"
        if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "mode") == 0))
#line 235 "prog_io_item.m"
          {
#line 235 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__SubTerm_20;
#line 235 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_73_73;
#line 242 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__HeadTerm_21;
#line 242 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__BodyTerm_22;
#line 237 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_74_74;
#line 237 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__V_75_75;
#line 237 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_76_76;
#line 237 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_77_77;
#line 237 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_78_78;
#line 237 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_23_23;

#line 236 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 236 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 236 "prog_io_item.m"
              {
#line 236 "prog_io_item.m"
                parse_tree__prog_io_item__SubTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 236 "prog_io_item.m"
                parse_tree__prog_io_item__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 236 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 235 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 235 "prog_io_item.m"
                  {
#line 237 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__SubTerm_20)) == (MR_mktag((MR_Integer) 0)));
#line 237 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 237 "prog_io_item.m"
                      {
#line 237 "prog_io_item.m"
                        parse_tree__prog_io_item__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 0)));
#line 237 "prog_io_item.m"
                        parse_tree__prog_io_item__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 1)));
#line 237 "prog_io_item.m"
                        parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 2)));
#line 237 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_74_74)) == (MR_mktag((MR_Integer) 0)));
#line 237 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 237 "prog_io_item.m"
                          {
#line 237 "prog_io_item.m"
                            parse_tree__prog_io_item__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_74_74, (MR_Integer) 0)));
#line 237 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_75_75, (MR_String) "==") == 0);
#line 237 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 237 "prog_io_item.m"
                              {
#line 237 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_76_76)) == (MR_mktag((MR_Integer) 1)));
#line 237 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 237 "prog_io_item.m"
                                  {
#line 237 "prog_io_item.m"
                                    parse_tree__prog_io_item__HeadTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, (MR_Integer) 0)));
#line 237 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, (MR_Integer) 1)));
#line 237 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 237 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 237 "prog_io_item.m"
                                      {
#line 237 "prog_io_item.m"
                                        parse_tree__prog_io_item__BodyTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, (MR_Integer) 0)));
#line 237 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, (MR_Integer) 1)));
#line 237 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "prog_io_item.m"
                                      }
#line 237 "prog_io_item.m"
                                  }
#line 237 "prog_io_item.m"
                              }
#line 237 "prog_io_item.m"
                          }
#line 237 "prog_io_item.m"
                      }
#line 242 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 239 "prog_io_item.m"
                      {
#line 239 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__BeforeCondTerm_24;
#line 239 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Condition_25;

#line 239 "prog_io_item.m"
                        {
#line 239 "prog_io_item.m"
                          parse_tree__prog_io_util__parse_condition_suffix_3_p_0(parse_tree__prog_io_item__BodyTerm_22, &parse_tree__prog_io_item__BeforeCondTerm_24, &parse_tree__prog_io_item__Condition_25);
                        }
#line 240 "prog_io_item.m"
                        {
#line 240 "prog_io_item.m"
                          parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__HeadTerm_21, parse_tree__prog_io_item__BeforeCondTerm_24, parse_tree__prog_io_item__Condition_25, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                        }
#line 239 "prog_io_item.m"
                      }
#line 242 "prog_io_item.m"
                    else
#line 244 "prog_io_item.m"
                      {
#line 244 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_mode_decl_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_20, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 242 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 235 "prog_io_item.m"
                  }
#line 236 "prog_io_item.m"
              }
#line 235 "prog_io_item.m"
          }
#line 224 "prog_io_item.m"
        else
#line 224 "prog_io_item.m"
          if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "pred") == 0))
#line 254 "prog_io_item.m"
            {
#line 254 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__DeclTerm_166;
#line 254 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_167_167;

#line 255 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 255 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 255 "prog_io_item.m"
                {
#line 255 "prog_io_item.m"
                  parse_tree__prog_io_item__DeclTerm_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 255 "prog_io_item.m"
                  parse_tree__prog_io_item__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 255 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_167_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 254 "prog_io_item.m"
                    {
#line 256 "prog_io_item.m"
                      {
#line 256 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0((MR_Integer) 0, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__DeclTerm_166, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 256 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 254 "prog_io_item.m"
                    }
#line 255 "prog_io_item.m"
                }
#line 254 "prog_io_item.m"
            }
#line 224 "prog_io_item.m"
          else
#line 224 "prog_io_item.m"
            if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "type") == 0))
#line 224 "prog_io_item.m"
              {
#line 224 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeDefnTerm_17;
#line 224 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_80_80;

#line 225 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 225 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 225 "prog_io_item.m"
                  {
#line 225 "prog_io_item.m"
                    parse_tree__prog_io_item__TypeDefnTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 225 "prog_io_item.m"
                    parse_tree__prog_io_item__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 225 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 224 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 224 "prog_io_item.m"
                      {
#line 226 "prog_io_item.m"
                        {
#line 226 "prog_io_item.m"
                          parse_tree__prog_io_type_defn__parse_type_defn_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__TypeDefnTerm_17, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                        }
#line 226 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 224 "prog_io_item.m"
                      }
#line 225 "prog_io_item.m"
                  }
#line 224 "prog_io_item.m"
              }
#line 224 "prog_io_item.m"
            else
#line 224 "prog_io_item.m"
              if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "module") == 0))
#line 308 "prog_io_item.m"
                {
#line 308 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__TypeCtorInfo_141_141;
#line 308 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__ModuleNameTerm_40;
#line 308 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__MaybeModuleNameSym_41;
#line 308 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__V_63_63;
#line 308 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__MaybeItem0_85;

#line 309 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 309 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 309 "prog_io_item.m"
                    {
#line 309 "prog_io_item.m"
                      parse_tree__prog_io_item__ModuleNameTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 309 "prog_io_item.m"
                      parse_tree__prog_io_item__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 309 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 308 "prog_io_item.m"
                        {
#line 310 "prog_io_item.m"
                          {
#line 310 "prog_io_item.m"
                            parse_tree__prog_io_item__parse_module_name_4_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ModuleNameTerm_40, &parse_tree__prog_io_item__MaybeModuleNameSym_41);
                          }
#line 318 "prog_io_item.m"
                          if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_41)) == (MR_mktag((MR_Integer) 0))))
#line 320 "prog_io_item.m"
                            parse_tree__prog_io_item__MaybeItem0_85 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_41;
#line 318 "prog_io_item.m"
                          else
#line 313 "prog_io_item.m"
                            {
#line 313 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__ModuleNameSym_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNameSym_41, (MR_Integer) 0)));
#line 313 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__ItemModuleStart_43;
#line 313 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Item_83;

#line 314 "prog_io_item.m"
                              {
#line 314 "prog_io_item.m"
                                parse_tree__prog_io_item__ItemModuleStart_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 314 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleStart_43, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleNameSym_42));
#line 314 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleStart_43, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 314 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleStart_43, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 314 "prog_io_item.m"
                              }
#line 316 "prog_io_item.m"
                              parse_tree__prog_io_item__Item_83 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__ItemModuleStart_43);
#line 317 "prog_io_item.m"
                              {
#line 317 "prog_io_item.m"
                                parse_tree__prog_io_item__MaybeItem0_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 317 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_85, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_83));
#line 317 "prog_io_item.m"
                              }
#line 313 "prog_io_item.m"
                            }
#line 10965 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__TypeCtorInfo_141_141 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 322 "prog_io_item.m"
                          {
#line 322 "prog_io_item.m"
                            parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_141_141, parse_tree__prog_io_item__MaybeItem0_85, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                          }
#line 322 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 308 "prog_io_item.m"
                        }
#line 309 "prog_io_item.m"
                    }
#line 308 "prog_io_item.m"
                }
#line 224 "prog_io_item.m"
              else
#line 224 "prog_io_item.m"
                if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "pragma") == 0))
#line 363 "prog_io_item.m"
                  {
#line 363 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__TypeCtorInfo_147_147;
#line 363 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__MaybeItem0_112;

#line 364 "prog_io_item.m"
                    {
#line 364 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_pragma__parse_pragma_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_112);
                    }
#line 363 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 363 "prog_io_item.m"
                      {
#line 11000 "parse_tree.prog_io_item.c"
                        parse_tree__prog_io_item__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 366 "prog_io_item.m"
                        {
#line 366 "prog_io_item.m"
                          parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_147_147, parse_tree__prog_io_item__MaybeItem0_112, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                        }
#line 366 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 363 "prog_io_item.m"
                      }
#line 363 "prog_io_item.m"
                  }
#line 224 "prog_io_item.m"
                else
#line 224 "prog_io_item.m"
                  if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "mutable") == 0))
#line 425 "prog_io_item.m"
                    {
#line 425 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__TypeCtorInfo_153_153;
#line 425 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__MaybeItem0_126;

#line 426 "prog_io_item.m"
                      {
#line 426 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = parse_tree__prog_io_mutable__parse_mutable_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_126);
                      }
#line 425 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 425 "prog_io_item.m"
                        {
#line 11033 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__TypeCtorInfo_153_153 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 428 "prog_io_item.m"
                          {
#line 428 "prog_io_item.m"
                            parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_153_153, parse_tree__prog_io_item__MaybeItem0_126, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                          }
#line 428 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 425 "prog_io_item.m"
                        }
#line 425 "prog_io_item.m"
                    }
#line 224 "prog_io_item.m"
                  else
#line 224 "prog_io_item.m"
                    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "promise") == 0))
#line 380 "prog_io_item.m"
                      {
#line 380 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__TypeCtorInfo_148_148;
#line 380 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__MaybeItem0_113;

#line 381 "prog_io_item.m"
                        {
#line 381 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 3, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_113);
                        }
#line 380 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 380 "prog_io_item.m"
                          {
#line 11066 "parse_tree.prog_io_item.c"
                            parse_tree__prog_io_item__TypeCtorInfo_148_148 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 383 "prog_io_item.m"
                            {
#line 383 "prog_io_item.m"
                              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__MaybeItem0_113, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                            }
#line 383 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 380 "prog_io_item.m"
                          }
#line 380 "prog_io_item.m"
                      }
#line 224 "prog_io_item.m"
                    else
#line 224 "prog_io_item.m"
                      if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "external") == 0))
#line 286 "prog_io_item.m"
                        {
#line 286 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__TypeCtorInfo_140_140;
#line 286 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__PredSpecTerm_33;
#line 286 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__MaybeBackEnd_34;
#line 286 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__MaybeSymSpec_39;
#line 286 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__MaybeItem0_82;
#line 286 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_183_183;
#line 286 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_184_184;

#line 288 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 288 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 288 "prog_io_item.m"
                            {
#line 288 "prog_io_item.m"
                              parse_tree__prog_io_item__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 288 "prog_io_item.m"
                              parse_tree__prog_io_item__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 290 "prog_io_item.m"
                              if ((parse_tree__prog_io_item__V_183_183 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "prog_io_item.m"
                                {
#line 288 "prog_io_item.m"
                                  parse_tree__prog_io_item__PredSpecTerm_33 = parse_tree__prog_io_item__V_184_184;
#line 289 "prog_io_item.m"
                                  parse_tree__prog_io_item__MaybeBackEnd_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 288 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 288 "prog_io_item.m"
                                }
#line 290 "prog_io_item.m"
                              else
#line 291 "prog_io_item.m"
                                {
#line 291 "prog_io_item.m"
                                  MR_String parse_tree__prog_io_item__BackEndFunctor_36;
#line 291 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__BackEnd_38;
#line 291 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__V_65_65;
#line 291 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__V_66_66;
#line 291 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__V_67_67;
#line 292 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__V_37_37;

#line 291 "prog_io_item.m"
                                  parse_tree__prog_io_item__PredSpecTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_183_183, (MR_Integer) 0)));
#line 291 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_183_183, (MR_Integer) 1)));
#line 291 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "prog_io_item.m"
                                  if (parse_tree__prog_io_item__succeeded)
#line 291 "prog_io_item.m"
                                    {
#line 292 "prog_io_item.m"
                                      parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_184_184)) == (MR_mktag((MR_Integer) 0)));
#line 292 "prog_io_item.m"
                                      if (parse_tree__prog_io_item__succeeded)
#line 292 "prog_io_item.m"
                                        {
#line 292 "prog_io_item.m"
                                          parse_tree__prog_io_item__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_184_184, (MR_Integer) 0)));
#line 292 "prog_io_item.m"
                                          parse_tree__prog_io_item__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_184_184, (MR_Integer) 1)));
#line 292 "prog_io_item.m"
                                          parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_184_184, (MR_Integer) 2)));
#line 292 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "prog_io_item.m"
                                          if (parse_tree__prog_io_item__succeeded)
#line 291 "prog_io_item.m"
                                            {
#line 292 "prog_io_item.m"
                                              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_66_66)) == (MR_mktag((MR_Integer) 0)));
#line 292 "prog_io_item.m"
                                              if (parse_tree__prog_io_item__succeeded)
#line 292 "prog_io_item.m"
                                                {
#line 292 "prog_io_item.m"
                                                  parse_tree__prog_io_item__BackEndFunctor_36 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_66_66, (MR_Integer) 0)));
#line 296 "prog_io_item.m"
                                                  if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_36, (MR_String) "low_level_backend") == 0))
#line 297 "prog_io_item.m"
                                                    {
#line 297 "prog_io_item.m"
                                                      parse_tree__prog_io_item__BackEnd_38 = (MR_Integer) 1;
#line 297 "prog_io_item.m"
                                                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 297 "prog_io_item.m"
                                                    }
#line 296 "prog_io_item.m"
                                                  else
#line 296 "prog_io_item.m"
                                                    if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_36, (MR_String) "high_level_backend") == 0))
#line 294 "prog_io_item.m"
                                                      {
#line 294 "prog_io_item.m"
                                                        parse_tree__prog_io_item__BackEnd_38 = (MR_Integer) 0;
#line 294 "prog_io_item.m"
                                                        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 294 "prog_io_item.m"
                                                      }
#line 296 "prog_io_item.m"
                                                    else
#line 296 "prog_io_item.m"
                                                      parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 291 "prog_io_item.m"
                                                  if (parse_tree__prog_io_item__succeeded)
#line 291 "prog_io_item.m"
                                                    {
#line 300 "prog_io_item.m"
                                                      {
#line 300 "prog_io_item.m"
                                                        parse_tree__prog_io_item__MaybeBackEnd_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 300 "prog_io_item.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeBackEnd_34, 0) = ((MR_Box) (parse_tree__prog_io_item__BackEnd_38));
#line 300 "prog_io_item.m"
                                                      }
#line 300 "prog_io_item.m"
                                                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 291 "prog_io_item.m"
                                                    }
#line 292 "prog_io_item.m"
                                                }
#line 291 "prog_io_item.m"
                                            }
#line 292 "prog_io_item.m"
                                        }
#line 291 "prog_io_item.m"
                                    }
#line 291 "prog_io_item.m"
                                }
#line 286 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 286 "prog_io_item.m"
                                {
#line 302 "prog_io_item.m"
                                  {
#line 302 "prog_io_item.m"
                                    parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__PredSpecTerm_33, &parse_tree__prog_io_item__MaybeSymSpec_39);
                                  }
#line 11236 "parse_tree.prog_io_item.c"
                                  parse_tree__prog_io_item__TypeCtorInfo_140_140 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 304 "prog_io_item.m"
                                  {
#line 304 "prog_io_item.m"
                                    parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(parse_tree__prog_io_item__MaybeBackEnd_34, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeSymSpec_39, &parse_tree__prog_io_item__MaybeItem0_82);
                                  }
#line 306 "prog_io_item.m"
                                  {
#line 306 "prog_io_item.m"
                                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_140_140, parse_tree__prog_io_item__MaybeItem0_82, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                  }
#line 306 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 286 "prog_io_item.m"
                                }
#line 288 "prog_io_item.m"
                            }
#line 286 "prog_io_item.m"
                        }
#line 224 "prog_io_item.m"
                      else
#line 224 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "instance") == 0))
#line 397 "prog_io_item.m"
                          {
#line 397 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__TypeCtorInfo_150_150;
#line 397 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__MaybeItemInstance_53;
#line 397 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__MaybeItem0_120;

#line 398 "prog_io_item.m"
                            {
#line 398 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_typeclass__parse_instance_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItemInstance_53);
                            }
#line 397 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 397 "prog_io_item.m"
                              {
#line 403 "prog_io_item.m"
                                if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItemInstance_53)) == (MR_mktag((MR_Integer) 0))))
#line 405 "prog_io_item.m"
                                  parse_tree__prog_io_item__MaybeItem0_120 = (MR_Word) parse_tree__prog_io_item__MaybeItemInstance_53;
#line 403 "prog_io_item.m"
                                else
#line 401 "prog_io_item.m"
                                  {
#line 401 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__ItemInstance_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItemInstance_53, (MR_Integer) 0)));
#line 401 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__V_57_57;

#line 402 "prog_io_item.m"
                                    {
#line 402 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 402 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemInstance_54));
#line 402 "prog_io_item.m"
                                    }
#line 402 "prog_io_item.m"
                                    {
#line 402 "prog_io_item.m"
                                      parse_tree__prog_io_item__MaybeItem0_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 402 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_120, 0) = ((MR_Box) (parse_tree__prog_io_item__V_57_57));
#line 402 "prog_io_item.m"
                                    }
#line 401 "prog_io_item.m"
                                  }
#line 11311 "parse_tree.prog_io_item.c"
                                parse_tree__prog_io_item__TypeCtorInfo_150_150 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 407 "prog_io_item.m"
                                {
#line 407 "prog_io_item.m"
                                  parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_150_150, parse_tree__prog_io_item__MaybeItem0_120, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                }
#line 407 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 397 "prog_io_item.m"
                              }
#line 397 "prog_io_item.m"
                          }
#line 224 "prog_io_item.m"
                        else
#line 224 "prog_io_item.m"
                          if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "interface") == 0))
#line 279 "prog_io_item.m"
                            {
#line 279 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__TypeCtorInfo_136_164;
#line 279 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__ModuleDefn_160;
#line 279 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__ItemModuleDefn_161;
#line 279 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Item_162;
#line 279 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__MaybeItem0_163;

#line 280 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__ArgTerms_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 279 "prog_io_item.m"
                                {
#line 275 "prog_io_item.m"
                                  parse_tree__prog_io_item__ModuleDefn_160 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11349 "parse_tree.prog_io_item.c"
                                  parse_tree__prog_io_item__TypeCtorInfo_136_164 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 281 "prog_io_item.m"
                                  {
#line 281 "prog_io_item.m"
                                    parse_tree__prog_io_item__ItemModuleDefn_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 281 "prog_io_item.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_161, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_160));
#line 281 "prog_io_item.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_161, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 281 "prog_io_item.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_161, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 281 "prog_io_item.m"
                                  }
#line 282 "prog_io_item.m"
                                  parse_tree__prog_io_item__Item_162 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_161);
#line 283 "prog_io_item.m"
                                  {
#line 283 "prog_io_item.m"
                                    parse_tree__prog_io_item__MaybeItem0_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_io_item.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_163, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_162));
#line 283 "prog_io_item.m"
                                  }
#line 284 "prog_io_item.m"
                                  {
#line 284 "prog_io_item.m"
                                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_136_164, parse_tree__prog_io_item__MaybeItem0_163, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                  }
#line 284 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 279 "prog_io_item.m"
                                }
#line 279 "prog_io_item.m"
                            }
#line 224 "prog_io_item.m"
                          else
#line 224 "prog_io_item.m"
                            if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "typeclass") == 0))
#line 385 "prog_io_item.m"
                              {
#line 385 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__TypeCtorInfo_149_149;
#line 385 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeItemTypeClass_51;
#line 385 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeItem0_116;

#line 386 "prog_io_item.m"
                                {
#line 386 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_typeclass__parse_typeclass_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItemTypeClass_51);
                                }
#line 385 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 385 "prog_io_item.m"
                                  {
#line 391 "prog_io_item.m"
                                    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItemTypeClass_51)) == (MR_mktag((MR_Integer) 0))))
#line 393 "prog_io_item.m"
                                      parse_tree__prog_io_item__MaybeItem0_116 = (MR_Word) parse_tree__prog_io_item__MaybeItemTypeClass_51;
#line 391 "prog_io_item.m"
                                    else
#line 389 "prog_io_item.m"
                                      {
#line 389 "prog_io_item.m"
                                        MR_Word parse_tree__prog_io_item__ItemTypeClass_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItemTypeClass_51, (MR_Integer) 0)));
#line 389 "prog_io_item.m"
                                        MR_Word parse_tree__prog_io_item__V_58_58;

#line 390 "prog_io_item.m"
                                        {
#line 390 "prog_io_item.m"
                                          parse_tree__prog_io_item__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "prog_io_item.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 390 "prog_io_item.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemTypeClass_52));
#line 390 "prog_io_item.m"
                                        }
#line 390 "prog_io_item.m"
                                        {
#line 390 "prog_io_item.m"
                                          parse_tree__prog_io_item__MaybeItem0_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 390 "prog_io_item.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_116, 0) = ((MR_Box) (parse_tree__prog_io_item__V_58_58));
#line 390 "prog_io_item.m"
                                        }
#line 389 "prog_io_item.m"
                                      }
#line 11439 "parse_tree.prog_io_item.c"
                                    parse_tree__prog_io_item__TypeCtorInfo_149_149 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 395 "prog_io_item.m"
                                    {
#line 395 "prog_io_item.m"
                                      parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_149_149, parse_tree__prog_io_item__MaybeItem0_116, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                    }
#line 395 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 385 "prog_io_item.m"
                                  }
#line 385 "prog_io_item.m"
                              }
#line 224 "prog_io_item.m"
                            else
#line 224 "prog_io_item.m"
                              if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "end_module") == 0))
#line 324 "prog_io_item.m"
                                {
#line 324 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__TypeCtorInfo_142_142;
#line 324 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__ParentOfModuleName_45;
#line 324 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__V_61_61;
#line 324 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__V_62_62;
#line 324 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__MaybeItem0_93;
#line 324 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__ModuleNameTerm_95;
#line 324 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__MaybeModuleNameSym_96;

#line 325 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 325 "prog_io_item.m"
                                  if (parse_tree__prog_io_item__succeeded)
#line 325 "prog_io_item.m"
                                    {
#line 325 "prog_io_item.m"
                                      parse_tree__prog_io_item__ModuleNameTerm_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 325 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 325 "prog_io_item.m"
                                      parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "prog_io_item.m"
                                      if (parse_tree__prog_io_item__succeeded)
#line 324 "prog_io_item.m"
                                        {
#line 330 "prog_io_item.m"
                                          {
#line 330 "prog_io_item.m"
                                            parse_tree__prog_io_item__V_62_62 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
                                          }
#line 330 "prog_io_item.m"
                                          {
#line 330 "prog_io_item.m"
                                            mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__V_62_62, &parse_tree__prog_io_item__ParentOfModuleName_45);
                                          }
#line 332 "prog_io_item.m"
                                          {
#line 332 "prog_io_item.m"
                                            parse_tree__prog_io_item__parse_module_name_4_p_0(parse_tree__prog_io_item__ParentOfModuleName_45, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ModuleNameTerm_95, &parse_tree__prog_io_item__MaybeModuleNameSym_96);
                                          }
#line 340 "prog_io_item.m"
                                          if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_96)) == (MR_mktag((MR_Integer) 0))))
#line 342 "prog_io_item.m"
                                            parse_tree__prog_io_item__MaybeItem0_93 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_96;
#line 340 "prog_io_item.m"
                                          else
#line 335 "prog_io_item.m"
                                            {
#line 335 "prog_io_item.m"
                                              MR_Word parse_tree__prog_io_item__ItemModuleEnd_46;
#line 335 "prog_io_item.m"
                                              MR_Word parse_tree__prog_io_item__Item_87;
#line 335 "prog_io_item.m"
                                              MR_Word parse_tree__prog_io_item__ModuleNameSym_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNameSym_96, (MR_Integer) 0)));

#line 336 "prog_io_item.m"
                                              {
#line 336 "prog_io_item.m"
                                                parse_tree__prog_io_item__ItemModuleEnd_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 336 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleEnd_46, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleNameSym_88));
#line 336 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleEnd_46, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 336 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleEnd_46, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 336 "prog_io_item.m"
                                              }
#line 338 "prog_io_item.m"
                                              parse_tree__prog_io_item__Item_87 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_item__ItemModuleEnd_46);
#line 339 "prog_io_item.m"
                                              {
#line 339 "prog_io_item.m"
                                                parse_tree__prog_io_item__MaybeItem0_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 339 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_93, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_87));
#line 339 "prog_io_item.m"
                                              }
#line 335 "prog_io_item.m"
                                            }
#line 11543 "parse_tree.prog_io_item.c"
                                          parse_tree__prog_io_item__TypeCtorInfo_142_142 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 344 "prog_io_item.m"
                                          {
#line 344 "prog_io_item.m"
                                            parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_142_142, parse_tree__prog_io_item__MaybeItem0_93, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                          }
#line 344 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 324 "prog_io_item.m"
                                        }
#line 325 "prog_io_item.m"
                                    }
#line 324 "prog_io_item.m"
                                }
#line 224 "prog_io_item.m"
                              else
#line 224 "prog_io_item.m"
                                if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "use_module") == 0))
#line 268 "prog_io_item.m"
                                  {
#line 268 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__ModuleSpecTerm_180;
#line 268 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__V_181_181;
#line 268 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__V_182_182;

#line 269 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 269 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 269 "prog_io_item.m"
                                      {
#line 269 "prog_io_item.m"
                                        parse_tree__prog_io_item__ModuleSpecTerm_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 269 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 269 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_181_181 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_io_item.m"
                                        if (parse_tree__prog_io_item__succeeded)
#line 268 "prog_io_item.m"
                                          {
#line 270 "prog_io_item.m"
                                            {
#line 270 "prog_io_item.m"
                                              parse_tree__prog_io_item__V_182_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 270 "prog_io_item.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_182_182, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 270 "prog_io_item.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_182_182, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_1));
#line 270 "prog_io_item.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_182_182, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 270 "prog_io_item.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_182_182, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 270 "prog_io_item.m"
                                            }
#line 270 "prog_io_item.m"
                                            {
#line 270 "prog_io_item.m"
                                              parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io_item__V_182_182, parse_tree__prog_io_item__ModuleSpecTerm_180, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                                            }
#line 270 "prog_io_item.m"
                                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 268 "prog_io_item.m"
                                          }
#line 269 "prog_io_item.m"
                                      }
#line 268 "prog_io_item.m"
                                  }
#line 224 "prog_io_item.m"
                                else
#line 224 "prog_io_item.m"
                                  if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "export_module") == 0))
#line 268 "prog_io_item.m"
                                    {
#line 268 "prog_io_item.m"
                                      MR_Word parse_tree__prog_io_item__ModuleSpecTerm_29;
#line 268 "prog_io_item.m"
                                      MR_Word parse_tree__prog_io_item__V_70_70;
#line 268 "prog_io_item.m"
                                      MR_Word parse_tree__prog_io_item__V_71_71;

#line 269 "prog_io_item.m"
                                      parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 269 "prog_io_item.m"
                                      if (parse_tree__prog_io_item__succeeded)
#line 269 "prog_io_item.m"
                                        {
#line 269 "prog_io_item.m"
                                          parse_tree__prog_io_item__ModuleSpecTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 269 "prog_io_item.m"
                                          parse_tree__prog_io_item__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 269 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_io_item.m"
                                          if (parse_tree__prog_io_item__succeeded)
#line 268 "prog_io_item.m"
                                            {
#line 270 "prog_io_item.m"
                                              {
#line 270 "prog_io_item.m"
                                                parse_tree__prog_io_item__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 270 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_71_71, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 270 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_71_71, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_2));
#line 270 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 270 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_71_71, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 270 "prog_io_item.m"
                                              }
#line 270 "prog_io_item.m"
                                              {
#line 270 "prog_io_item.m"
                                                parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io_item__V_71_71, parse_tree__prog_io_item__ModuleSpecTerm_29, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                                              }
#line 270 "prog_io_item.m"
                                              parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 268 "prog_io_item.m"
                                            }
#line 269 "prog_io_item.m"
                                        }
#line 268 "prog_io_item.m"
                                    }
#line 224 "prog_io_item.m"
                                  else
#line 224 "prog_io_item.m"
                                    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "import_module") == 0))
#line 268 "prog_io_item.m"
                                      {
#line 268 "prog_io_item.m"
                                        MR_Word parse_tree__prog_io_item__ModuleSpecTerm_157;
#line 268 "prog_io_item.m"
                                        MR_Word parse_tree__prog_io_item__V_158_158;
#line 268 "prog_io_item.m"
                                        MR_Word parse_tree__prog_io_item__V_159_159;

#line 269 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 269 "prog_io_item.m"
                                        if (parse_tree__prog_io_item__succeeded)
#line 269 "prog_io_item.m"
                                          {
#line 269 "prog_io_item.m"
                                            parse_tree__prog_io_item__ModuleSpecTerm_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 269 "prog_io_item.m"
                                            parse_tree__prog_io_item__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 269 "prog_io_item.m"
                                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_158_158 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_io_item.m"
                                            if (parse_tree__prog_io_item__succeeded)
#line 268 "prog_io_item.m"
                                              {
#line 270 "prog_io_item.m"
                                                {
#line 270 "prog_io_item.m"
                                                  parse_tree__prog_io_item__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 270 "prog_io_item.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_159_159, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 270 "prog_io_item.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_159_159, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_3));
#line 270 "prog_io_item.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_159_159, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 270 "prog_io_item.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_159_159, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 270 "prog_io_item.m"
                                                }
#line 270 "prog_io_item.m"
                                                {
#line 270 "prog_io_item.m"
                                                  parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io_item__V_159_159, parse_tree__prog_io_item__ModuleSpecTerm_157, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                                                }
#line 270 "prog_io_item.m"
                                                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 268 "prog_io_item.m"
                                              }
#line 269 "prog_io_item.m"
                                          }
#line 268 "prog_io_item.m"
                                      }
#line 224 "prog_io_item.m"
                                    else
#line 224 "prog_io_item.m"
                                      if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "implementation") == 0))
#line 279 "prog_io_item.m"
                                        {
#line 279 "prog_io_item.m"
                                          MR_Word parse_tree__prog_io_item__TypeCtorInfo_136_136;
#line 279 "prog_io_item.m"
                                          MR_Word parse_tree__prog_io_item__ModuleDefn_30;
#line 279 "prog_io_item.m"
                                          MR_Word parse_tree__prog_io_item__ItemModuleDefn_31;
#line 279 "prog_io_item.m"
                                          MR_Word parse_tree__prog_io_item__Item_32;
#line 279 "prog_io_item.m"
                                          MR_Word parse_tree__prog_io_item__MaybeItem0_81;

#line 280 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__ArgTerms_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "prog_io_item.m"
                                          if (parse_tree__prog_io_item__succeeded)
#line 279 "prog_io_item.m"
                                            {
#line 278 "prog_io_item.m"
                                              parse_tree__prog_io_item__ModuleDefn_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 11751 "parse_tree.prog_io_item.c"
                                              parse_tree__prog_io_item__TypeCtorInfo_136_136 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 281 "prog_io_item.m"
                                              {
#line 281 "prog_io_item.m"
                                                parse_tree__prog_io_item__ItemModuleDefn_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 281 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_31, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_30));
#line 281 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_31, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 281 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_31, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 281 "prog_io_item.m"
                                              }
#line 282 "prog_io_item.m"
                                              parse_tree__prog_io_item__Item_32 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_31);
#line 283 "prog_io_item.m"
                                              {
#line 283 "prog_io_item.m"
                                                parse_tree__prog_io_item__MaybeItem0_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_81, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_32));
#line 283 "prog_io_item.m"
                                              }
#line 284 "prog_io_item.m"
                                              {
#line 284 "prog_io_item.m"
                                                parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_136_136, parse_tree__prog_io_item__MaybeItem0_81, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                              }
#line 284 "prog_io_item.m"
                                              parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 279 "prog_io_item.m"
                                            }
#line 279 "prog_io_item.m"
                                        }
#line 224 "prog_io_item.m"
                                      else
#line 224 "prog_io_item.m"
                                        if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "include_module") == 0))
#line 346 "prog_io_item.m"
                                          {
#line 346 "prog_io_item.m"
                                            MR_Word parse_tree__prog_io_item__TypeCtorInfo_145_145;
#line 346 "prog_io_item.m"
                                            MR_Word parse_tree__prog_io_item__TypeCtorInfo_146_146;
#line 346 "prog_io_item.m"
                                            MR_Word parse_tree__prog_io_item__ModuleNamesTerm_47;
#line 346 "prog_io_item.m"
                                            MR_Word parse_tree__prog_io_item__MaybeModuleNameSyms_48;
#line 346 "prog_io_item.m"
                                            MR_Word parse_tree__prog_io_item__V_59_59;
#line 346 "prog_io_item.m"
                                            MR_Word parse_tree__prog_io_item__V_60_60;
#line 346 "prog_io_item.m"
                                            MR_Word parse_tree__prog_io_item__MaybeItem0_107;

#line 347 "prog_io_item.m"
                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 347 "prog_io_item.m"
                                            if (parse_tree__prog_io_item__succeeded)
#line 347 "prog_io_item.m"
                                              {
#line 347 "prog_io_item.m"
                                                parse_tree__prog_io_item__ModuleNamesTerm_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 347 "prog_io_item.m"
                                                parse_tree__prog_io_item__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 347 "prog_io_item.m"
                                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "prog_io_item.m"
                                                if (parse_tree__prog_io_item__succeeded)
#line 346 "prog_io_item.m"
                                                  {
#line 11823 "parse_tree.prog_io_item.c"
                                                    parse_tree__prog_io_item__TypeCtorInfo_145_145 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 348 "prog_io_item.m"
                                                    {
#line 348 "prog_io_item.m"
                                                      parse_tree__prog_io_item__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 348 "prog_io_item.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_6[0]));
#line 348 "prog_io_item.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_4));
#line 348 "prog_io_item.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 348 "prog_io_item.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_9));
#line 348 "prog_io_item.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_60_60, 4) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 348 "prog_io_item.m"
                                                    }
#line 348 "prog_io_item.m"
                                                    {
#line 348 "prog_io_item.m"
                                                      parse_tree__prog_io_util__parse_list_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_145_145, parse_tree__prog_io_item__V_60_60, parse_tree__prog_io_item__ModuleNamesTerm_47, &parse_tree__prog_io_item__MaybeModuleNameSyms_48);
                                                    }
#line 357 "prog_io_item.m"
                                                    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNameSyms_48)) == (MR_mktag((MR_Integer) 0))))
#line 359 "prog_io_item.m"
                                                      parse_tree__prog_io_item__MaybeItem0_107 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNameSyms_48;
#line 357 "prog_io_item.m"
                                                    else
#line 351 "prog_io_item.m"
                                                      {
#line 351 "prog_io_item.m"
                                                        MR_Word parse_tree__prog_io_item__ModuleNameSyms_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNameSyms_48, (MR_Integer) 0)));
#line 351 "prog_io_item.m"
                                                        MR_Word parse_tree__prog_io_item__ModuleDefn_99;
#line 351 "prog_io_item.m"
                                                        MR_Word parse_tree__prog_io_item__ItemModuleDefn_100;
#line 351 "prog_io_item.m"
                                                        MR_Word parse_tree__prog_io_item__Item_101;

#line 352 "prog_io_item.m"
                                                        {
#line 352 "prog_io_item.m"
                                                          parse_tree__prog_io_item__ModuleDefn_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "prog_io_item.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 352 "prog_io_item.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_99, 1) = ((MR_Box) (parse_tree__prog_io_item__ModuleNameSyms_49));
#line 352 "prog_io_item.m"
                                                        }
#line 353 "prog_io_item.m"
                                                        {
#line 353 "prog_io_item.m"
                                                          parse_tree__prog_io_item__ItemModuleDefn_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 353 "prog_io_item.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_100, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_99));
#line 353 "prog_io_item.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_100, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 353 "prog_io_item.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_100, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 353 "prog_io_item.m"
                                                        }
#line 355 "prog_io_item.m"
                                                        parse_tree__prog_io_item__Item_101 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_100);
#line 356 "prog_io_item.m"
                                                        {
#line 356 "prog_io_item.m"
                                                          parse_tree__prog_io_item__MaybeItem0_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 356 "prog_io_item.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_107, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_101));
#line 356 "prog_io_item.m"
                                                        }
#line 351 "prog_io_item.m"
                                                      }
#line 11897 "parse_tree.prog_io_item.c"
                                                    parse_tree__prog_io_item__TypeCtorInfo_146_146 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 361 "prog_io_item.m"
                                                    {
#line 361 "prog_io_item.m"
                                                      parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_146_146, parse_tree__prog_io_item__MaybeItem0_107, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                                    }
#line 361 "prog_io_item.m"
                                                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 346 "prog_io_item.m"
                                                  }
#line 347 "prog_io_item.m"
                                              }
#line 346 "prog_io_item.m"
                                          }
#line 224 "prog_io_item.m"
                                        else
#line 224 "prog_io_item.m"
                                          if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "version_numbers") == 0))
#line 430 "prog_io_item.m"
                                            {
#line 430 "prog_io_item.m"
                                              return parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                                            }
#line 224 "prog_io_item.m"
                                          else
#line 224 "prog_io_item.m"
                                            if ((((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "finalise") == 0)) || ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "finalize") == 0))))
#line 419 "prog_io_item.m"
                                              {
#line 419 "prog_io_item.m"
                                                MR_Word parse_tree__prog_io_item__TypeCtorInfo_152_152;
#line 419 "prog_io_item.m"
                                                MR_Word parse_tree__prog_io_item__V_55_55;
#line 419 "prog_io_item.m"
                                                MR_Word parse_tree__prog_io_item__MaybeItem0_124;
#line 419 "prog_io_item.m"
                                                MR_Word parse_tree__prog_io_item__SubTerm_125;

#line 420 "prog_io_item.m"
                                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 420 "prog_io_item.m"
                                                if (parse_tree__prog_io_item__succeeded)
#line 420 "prog_io_item.m"
                                                  {
#line 420 "prog_io_item.m"
                                                    parse_tree__prog_io_item__SubTerm_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 420 "prog_io_item.m"
                                                    parse_tree__prog_io_item__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 420 "prog_io_item.m"
                                                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 419 "prog_io_item.m"
                                                    if (parse_tree__prog_io_item__succeeded)
#line 419 "prog_io_item.m"
                                                      {
#line 421 "prog_io_item.m"
                                                        {
#line 421 "prog_io_item.m"
                                                          parse_tree__prog_io_mutable__parse_finalise_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_125, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_124);
                                                        }
#line 11957 "parse_tree.prog_io_item.c"
                                                        parse_tree__prog_io_item__TypeCtorInfo_152_152 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 423 "prog_io_item.m"
                                                        {
#line 423 "prog_io_item.m"
                                                          parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_152_152, parse_tree__prog_io_item__MaybeItem0_124, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                                        }
#line 423 "prog_io_item.m"
                                                        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 419 "prog_io_item.m"
                                                      }
#line 420 "prog_io_item.m"
                                                  }
#line 419 "prog_io_item.m"
                                              }
#line 224 "prog_io_item.m"
                                            else
#line 224 "prog_io_item.m"
                                              if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exclusive") == 0))
#line 380 "prog_io_item.m"
                                                {
#line 380 "prog_io_item.m"
                                                  MR_Word parse_tree__prog_io_item__TypeCtorInfo_148_170;
#line 380 "prog_io_item.m"
                                                  MR_Word parse_tree__prog_io_item__MaybeItem0_169;

#line 381 "prog_io_item.m"
                                                  {
#line 381 "prog_io_item.m"
                                                    parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_169);
                                                  }
#line 380 "prog_io_item.m"
                                                  if (parse_tree__prog_io_item__succeeded)
#line 380 "prog_io_item.m"
                                                    {
#line 11992 "parse_tree.prog_io_item.c"
                                                      parse_tree__prog_io_item__TypeCtorInfo_148_170 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 383 "prog_io_item.m"
                                                      {
#line 383 "prog_io_item.m"
                                                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_170, parse_tree__prog_io_item__MaybeItem0_169, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                                      }
#line 383 "prog_io_item.m"
                                                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 380 "prog_io_item.m"
                                                    }
#line 380 "prog_io_item.m"
                                                }
#line 224 "prog_io_item.m"
                                              else
#line 224 "prog_io_item.m"
                                                if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exhaustive") == 0))
#line 380 "prog_io_item.m"
                                                  {
#line 380 "prog_io_item.m"
                                                    MR_Word parse_tree__prog_io_item__TypeCtorInfo_148_176;
#line 380 "prog_io_item.m"
                                                    MR_Word parse_tree__prog_io_item__MaybeItem0_175;

#line 381 "prog_io_item.m"
                                                    {
#line 381 "prog_io_item.m"
                                                      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_175);
                                                    }
#line 380 "prog_io_item.m"
                                                    if (parse_tree__prog_io_item__succeeded)
#line 380 "prog_io_item.m"
                                                      {
#line 12025 "parse_tree.prog_io_item.c"
                                                        parse_tree__prog_io_item__TypeCtorInfo_148_176 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 383 "prog_io_item.m"
                                                        {
#line 383 "prog_io_item.m"
                                                          parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_176, parse_tree__prog_io_item__MaybeItem0_175, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                                        }
#line 383 "prog_io_item.m"
                                                        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 380 "prog_io_item.m"
                                                      }
#line 380 "prog_io_item.m"
                                                  }
#line 224 "prog_io_item.m"
                                                else
#line 224 "prog_io_item.m"
                                                  if ((((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "initialise") == 0)) || ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "initialize") == 0))))
#line 411 "prog_io_item.m"
                                                    {
#line 411 "prog_io_item.m"
                                                      MR_Word parse_tree__prog_io_item__TypeCtorInfo_151_151;
#line 411 "prog_io_item.m"
                                                      MR_Word parse_tree__prog_io_item__V_56_56;
#line 411 "prog_io_item.m"
                                                      MR_Word parse_tree__prog_io_item__MaybeItem0_122;
#line 411 "prog_io_item.m"
                                                      MR_Word parse_tree__prog_io_item__SubTerm_123;

#line 412 "prog_io_item.m"
                                                      parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 412 "prog_io_item.m"
                                                      if (parse_tree__prog_io_item__succeeded)
#line 412 "prog_io_item.m"
                                                        {
#line 412 "prog_io_item.m"
                                                          parse_tree__prog_io_item__SubTerm_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 412 "prog_io_item.m"
                                                          parse_tree__prog_io_item__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 412 "prog_io_item.m"
                                                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "prog_io_item.m"
                                                          if (parse_tree__prog_io_item__succeeded)
#line 411 "prog_io_item.m"
                                                            {
#line 413 "prog_io_item.m"
                                                              {
#line 413 "prog_io_item.m"
                                                                parse_tree__prog_io_mutable__parse_initialise_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_123, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_122);
                                                              }
#line 12074 "parse_tree.prog_io_item.c"
                                                              parse_tree__prog_io_item__TypeCtorInfo_151_151 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 415 "prog_io_item.m"
                                                              {
#line 415 "prog_io_item.m"
                                                                parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_151_151, parse_tree__prog_io_item__MaybeItem0_122, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                                              }
#line 415 "prog_io_item.m"
                                                              parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 411 "prog_io_item.m"
                                                            }
#line 412 "prog_io_item.m"
                                                        }
#line 411 "prog_io_item.m"
                                                    }
#line 224 "prog_io_item.m"
                                                  else
#line 224 "prog_io_item.m"
                                                    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exclusive_exhaustive") == 0))
#line 380 "prog_io_item.m"
                                                      {
#line 380 "prog_io_item.m"
                                                        MR_Word parse_tree__prog_io_item__TypeCtorInfo_148_173;
#line 380 "prog_io_item.m"
                                                        MR_Word parse_tree__prog_io_item__MaybeItem0_172;

#line 381 "prog_io_item.m"
                                                        {
#line 381 "prog_io_item.m"
                                                          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 2, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_172);
                                                        }
#line 380 "prog_io_item.m"
                                                        if (parse_tree__prog_io_item__succeeded)
#line 380 "prog_io_item.m"
                                                          {
#line 12109 "parse_tree.prog_io_item.c"
                                                            parse_tree__prog_io_item__TypeCtorInfo_148_173 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 383 "prog_io_item.m"
                                                            {
#line 383 "prog_io_item.m"
                                                              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_173, parse_tree__prog_io_item__MaybeItem0_172, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                                            }
#line 383 "prog_io_item.m"
                                                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 380 "prog_io_item.m"
                                                          }
#line 380 "prog_io_item.m"
                                                      }
#line 224 "prog_io_item.m"
                                                    else
#line 224 "prog_io_item.m"
                                                      parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 224 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 224 "prog_io_item.m"
  }
#line 217 "prog_io_item.m"
}

#line 176 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(
#line 176 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 176 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_8,
#line 176 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_9,
#line 176 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22,
#line 176 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 176 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_12)
#line 176 "prog_io_item.m"
{
#line 201 "prog_io_item.m"
  while (MR_TRUE)
#line 201 "prog_io_item.m"
    {
#line 201 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 201 "prog_io_item.m"
      {
#line 201 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 201 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__Functor_13;
#line 201 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Args_14;
#line 201 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_15;
#line 181 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;

#line 181 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 181 "prog_io_item.m"
          {
#line 181 "prog_io_item.m"
            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 0)));
#line 181 "prog_io_item.m"
            parse_tree__prog_io_item__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 1)));
#line 181 "prog_io_item.m"
            parse_tree__prog_io_item__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 2)));
#line 181 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 181 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 181 "prog_io_item.m"
              parse_tree__prog_io_item__Functor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_23_23, (MR_Integer) 0)));
#line 181 "prog_io_item.m"
          }
#line 201 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 188 "prog_io_item.m"
          {
#line 188 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Attribute_16;
#line 188 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__SubTerm_17;

#line 183 "prog_io_item.m"
            {
#line 183 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__parse_decl_attribute_4_p_0(parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__Args_14, &parse_tree__prog_io_item__Attribute_16, &parse_tree__prog_io_item__SubTerm_17);
            }
#line 188 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 185 "prog_io_item.m"
              {
#line 185 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24;
#line 185 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_25_25;

#line 185 "prog_io_item.m"
                {
#line 185 "prog_io_item.m"
                  parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Attribute_16));
#line 185 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 185 "prog_io_item.m"
                }
#line 185 "prog_io_item.m"
                {
#line 185 "prog_io_item.m"
                  parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24, 0) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 185 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24, 1) = ((MR_Box) (parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22));
#line 185 "prog_io_item.m"
                }
#line 186 "prog_io_item.m"
                /* direct tailcall eliminated */
#line 186 "prog_io_item.m"
                {
#line 186 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__Term__tmp_copy_9 = parse_tree__prog_io_item__SubTerm_17;
#line 186 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_22 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24;

#line 186 "prog_io_item.m"
                  parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_22;
#line 186 "prog_io_item.m"
                  parse_tree__prog_io_item__Term_9 = parse_tree__prog_io_item__Term__tmp_copy_9;
#line 186 "prog_io_item.m"
                }
#line 186 "prog_io_item.m"
                continue;
#line 185 "prog_io_item.m"
              }
#line 188 "prog_io_item.m"
            else
#line 193 "prog_io_item.m"
              {
#line 193 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeItemPrime_18;

#line 189 "prog_io_item.m"
                {
#line 189 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_attributed_decl_8_p_0(parse_tree__prog_io_item__ModuleName_7, parse_tree__prog_io_item__VarSet_8, parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__Args_14, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22, parse_tree__prog_io_item__Context_15, parse_tree__prog_io_item__SeqNum_11, &parse_tree__prog_io_item__MaybeItemPrime_18);
                }
#line 193 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 192 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_12 = parse_tree__prog_io_item__MaybeItemPrime_18;
#line 193 "prog_io_item.m"
                else
#line 194 "prog_io_item.m"
                  {
#line 194 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__TermStr_19;
#line 194 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Pieces_20;
#line 194 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_21;
#line 194 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_29_29;
#line 194 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_31_31;
#line 194 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_32_32;
#line 194 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_41_41;
#line 194 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_42_42;
#line 194 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_43_43;
#line 194 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_44_44;
#line 194 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_47_47;

#line 194 "prog_io_item.m"
                    {
#line 194 "prog_io_item.m"
                      parse_tree__prog_io_item__TermStr_19 = parse_tree__mercury_to_mercury__mercury_term_to_string_3_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__VarSet_8, (MR_Integer) 0, parse_tree__prog_io_item__Term_9);
                    }
#line 196 "prog_io_item.m"
                    {
#line 196 "prog_io_item.m"
                      parse_tree__prog_io_item__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 196 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_19));
#line 196 "prog_io_item.m"
                    }
#line 196 "prog_io_item.m"
                    {
#line 196 "prog_io_item.m"
                      parse_tree__prog_io_item__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 196 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 196 "prog_io_item.m"
                    }
#line 195 "prog_io_item.m"
                    {
#line 195 "prog_io_item.m"
                      parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 195 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_item__V_31_31));
#line 195 "prog_io_item.m"
                    }
#line 195 "prog_io_item.m"
                    {
#line 195 "prog_io_item.m"
                      parse_tree__prog_io_item__Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[102])));
#line 195 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_20, 1) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 195 "prog_io_item.m"
                    }
#line 198 "prog_io_item.m"
                    {
#line 198 "prog_io_item.m"
                      parse_tree__prog_io_item__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 198 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_20));
#line 198 "prog_io_item.m"
                    }
#line 198 "prog_io_item.m"
                    {
#line 198 "prog_io_item.m"
                      parse_tree__prog_io_item__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_item__V_44_44));
#line 198 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "prog_io_item.m"
                    }
#line 198 "prog_io_item.m"
                    {
#line 198 "prog_io_item.m"
                      parse_tree__prog_io_item__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 198 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 198 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_item__V_43_43));
#line 198 "prog_io_item.m"
                    }
#line 198 "prog_io_item.m"
                    {
#line 198 "prog_io_item.m"
                      parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 198 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "prog_io_item.m"
                    }
#line 197 "prog_io_item.m"
                    {
#line 197 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 197 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 197 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 197 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 2) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 197 "prog_io_item.m"
                    }
#line 199 "prog_io_item.m"
                    {
#line 199 "prog_io_item.m"
                      parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_21));
#line 199 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 199 "prog_io_item.m"
                    }
#line 199 "prog_io_item.m"
                    {
#line 199 "prog_io_item.m"
                      MR_Word base;
#line 199 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 199 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 199 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 199 "prog_io_item.m"
                    }
#line 194 "prog_io_item.m"
                  }
#line 193 "prog_io_item.m"
              }
#line 188 "prog_io_item.m"
          }
#line 201 "prog_io_item.m"
        else
#line 202 "prog_io_item.m"
          {
#line 202 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_62_62;
#line 202 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_63_63;
#line 202 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_68_68;
#line 202 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Context_73;
#line 202 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_75;

#line 202 "prog_io_item.m"
            {
#line 202 "prog_io_item.m"
              parse_tree__prog_io_item__Context_73 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_9);
            }
#line 206 "prog_io_item.m"
            {
#line 206 "prog_io_item.m"
              parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 206 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_73));
#line 206 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[103])));
#line 206 "prog_io_item.m"
            }
#line 206 "prog_io_item.m"
            {
#line 206 "prog_io_item.m"
              parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 206 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "prog_io_item.m"
            }
#line 205 "prog_io_item.m"
            {
#line 205 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 205 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 205 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 2) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 205 "prog_io_item.m"
            }
#line 207 "prog_io_item.m"
            {
#line 207 "prog_io_item.m"
              parse_tree__prog_io_item__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_75));
#line 207 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "prog_io_item.m"
            }
#line 207 "prog_io_item.m"
            {
#line 207 "prog_io_item.m"
              MR_Word base;
#line 207 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 207 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 207 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_68_68));
#line 207 "prog_io_item.m"
            }
#line 202 "prog_io_item.m"
          }
#line 201 "prog_io_item.m"
      }
#line 201 "prog_io_item.m"
      break;
#line 201 "prog_io_item.m"
    }
#line 176 "prog_io_item.m"
}

#line 149 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_2(
#line 149 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 149 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 149 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 149 "prog_io_item.m"
{
#line 149 "prog_io_item.m"
  {
#line 149 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 149 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv1_HeadVar__2_80;

#line 149 "prog_io_item.m"
    {
#line 149 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__149__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv1_HeadVar__2_80);
    }
#line 149 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv1_HeadVar__2_80));
#line 149 "prog_io_item.m"
  }
#line 149 "prog_io_item.m"
}

#line 133 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_1(
#line 133 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 133 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 133 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 133 "prog_io_item.m"
{
#line 133 "prog_io_item.m"
  {
#line 133 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 133 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_74;

#line 133 "prog_io_item.m"
    {
#line 133 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__133__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_74);
    }
#line 133 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_74));
#line 133 "prog_io_item.m"
  }
#line 133 "prog_io_item.m"
}

#line 112 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0(
#line 112 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 112 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadTerm_9,
#line 112 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__BodyTerm0_10,
#line 112 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ProgVarSet0_11,
#line 112 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 112 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 112 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 112 "prog_io_item.m"
{
#line 116 "prog_io_item.m"
  {
#line 116 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 116 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeBodyGoal_16;
#line 116 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet_17;

#line 118 "prog_io_item.m"
    {
#line 118 "prog_io_item.m"
      parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_item__BodyTerm0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__MaybeBodyGoal_16, parse_tree__prog_io_item__ProgVarSet0_11, &parse_tree__prog_io_item__ProgVarSet_17);
    }
#line 159 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeBodyGoal_16)) == (MR_mktag((MR_Integer) 0))))
#line 161 "prog_io_item.m"
      *parse_tree__prog_io_item__MaybeItem_14 = (MR_Word) parse_tree__prog_io_item__MaybeBodyGoal_16;
#line 159 "prog_io_item.m"
    else
#line 121 "prog_io_item.m"
      {
#line 121 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_72_72 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 121 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__BodyGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeBodyGoal_16, (MR_Integer) 0)));
#line 121 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__VarSet_19;
#line 143 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncHeadTerm_23;
#line 143 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;
#line 125 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncHeadTerm0_20;
#line 125 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 125 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_34_34;
#line 125 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 125 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_37_37;
#line 124 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 125 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncResultTerm_21;

#line 122 "prog_io_item.m"
        {
#line 122 "prog_io_item.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ProgVarSet_17, &parse_tree__prog_io_item__VarSet_19);
        }
#line 124 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 124 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 124 "prog_io_item.m"
          {
#line 124 "prog_io_item.m"
            parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_9, (MR_Integer) 0)));
#line 124 "prog_io_item.m"
            parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_9, (MR_Integer) 1)));
#line 124 "prog_io_item.m"
            parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_9, (MR_Integer) 2)));
#line 124 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 124 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 124 "prog_io_item.m"
              {
#line 124 "prog_io_item.m"
                parse_tree__prog_io_item__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_33_33, (MR_Integer) 0)));
#line 124 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_34_34, (MR_String) "=") == 0);
#line 125 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 125 "prog_io_item.m"
                  {
#line 125 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 125 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 125 "prog_io_item.m"
                      {
#line 125 "prog_io_item.m"
                        parse_tree__prog_io_item__FuncHeadTerm0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 0)));
#line 125 "prog_io_item.m"
                        parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 1)));
#line 125 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 125 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 125 "prog_io_item.m"
                          {
#line 125 "prog_io_item.m"
                            parse_tree__prog_io_item__FuncResultTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 125 "prog_io_item.m"
                            parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 1)));
#line 125 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 125 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 125 "prog_io_item.m"
                              {
#line 126 "prog_io_item.m"
                                {
#line 126 "prog_io_item.m"
                                  parse_tree__prog_io_item__FuncHeadTerm_23 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__FuncHeadTerm0_20);
                                }
#line 126 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 125 "prog_io_item.m"
                              }
#line 125 "prog_io_item.m"
                          }
#line 125 "prog_io_item.m"
                      }
#line 125 "prog_io_item.m"
                  }
#line 124 "prog_io_item.m"
              }
#line 124 "prog_io_item.m"
          }
#line 143 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 128 "prog_io_item.m"
          {
#line 128 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFunctor_25;

#line 129 "prog_io_item.m"
            {
#line 129 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__FuncHeadTerm_23, parse_tree__prog_io_item__VarSet_19, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[99]), &parse_tree__prog_io_item__MaybeFunctor_25);
            }
#line 139 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctor_25)) == (MR_mktag((MR_Integer) 0))))
#line 140 "prog_io_item.m"
              {
#line 140 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctor_25, (MR_Integer) 0)));

#line 141 "prog_io_item.m"
                {
#line 141 "prog_io_item.m"
                  MR_Word base;
#line 141 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 141 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 141 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_31));
#line 141 "prog_io_item.m"
                }
#line 140 "prog_io_item.m"
              }
#line 139 "prog_io_item.m"
            else
#line 132 "prog_io_item.m"
              {
#line 132 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeInfo_77_77 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[0];
#line 132 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_25, (MR_Integer) 0)));
#line 132 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_25, (MR_Integer) 1)));
#line 132 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ProgArgTerms_28;
#line 132 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemClause_29;
#line 132 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_30;
#line 132 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_42_42;

#line 133 "prog_io_item.m"
                {
#line 133 "prog_io_item.m"
                  parse_tree__prog_io_item__V_42_42 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeInfo_77_77, parse_tree__prog_io_item__ArgTerms0_27, parse_tree__prog_io_item__V_36_36);
                }
#line 133 "prog_io_item.m"
                {
#line 133 "prog_io_item.m"
                  mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeInfo_77_77, (MR_Word) &parse_tree__prog_io_item_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[2], parse_tree__prog_io_item__V_42_42, &parse_tree__prog_io_item__ProgArgTerms_28);
                }
#line 135 "prog_io_item.m"
                {
#line 135 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemClause_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 135 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 135 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 1) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_17));
#line 135 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 2) = ((MR_Box) ((MR_Integer) 1));
#line 135 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 3) = ((MR_Box) (parse_tree__prog_io_item__Name_26));
#line 135 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 4) = ((MR_Box) (parse_tree__prog_io_item__ProgArgTerms_28));
#line 135 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 5) = ((MR_Box) (parse_tree__prog_io_item__BodyGoal_18));
#line 135 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 135 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 135 "prog_io_item.m"
                }
#line 137 "prog_io_item.m"
                {
#line 137 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 137 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_30, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemClause_29));
#line 137 "prog_io_item.m"
                }
#line 138 "prog_io_item.m"
                {
#line 138 "prog_io_item.m"
                  MR_Word base;
#line 138 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 138 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 138 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_30));
#line 138 "prog_io_item.m"
                }
#line 132 "prog_io_item.m"
              }
#line 128 "prog_io_item.m"
          }
#line 143 "prog_io_item.m"
        else
#line 144 "prog_io_item.m"
          {
#line 144 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFunctor_64;

#line 145 "prog_io_item.m"
            {
#line 145 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__HeadTerm_9, parse_tree__prog_io_item__VarSet_19, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[101]), &parse_tree__prog_io_item__MaybeFunctor_64);
            }
#line 154 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctor_64)) == (MR_mktag((MR_Integer) 0))))
#line 155 "prog_io_item.m"
              {
#line 155 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 0)));

#line 156 "prog_io_item.m"
                {
#line 156 "prog_io_item.m"
                  MR_Word base;
#line 156 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 156 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 156 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_57));
#line 156 "prog_io_item.m"
                }
#line 155 "prog_io_item.m"
              }
#line 154 "prog_io_item.m"
            else
#line 148 "prog_io_item.m"
              {
#line 148 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 1)));
#line 148 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Name_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 0)));
#line 148 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ProgArgTerms_54;
#line 148 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemClause_55;
#line 148 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_56;

#line 149 "prog_io_item.m"
                {
#line 149 "prog_io_item.m"
                  mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[3], parse_tree__prog_io_item__ArgTerms_32, &parse_tree__prog_io_item__ProgArgTerms_54);
                }
#line 150 "prog_io_item.m"
                {
#line 150 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemClause_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 150 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 150 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 1) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_17));
#line 150 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 2) = ((MR_Box) ((MR_Integer) 0));
#line 150 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 3) = ((MR_Box) (parse_tree__prog_io_item__Name_53));
#line 150 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 4) = ((MR_Box) (parse_tree__prog_io_item__ProgArgTerms_54));
#line 150 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 5) = ((MR_Box) (parse_tree__prog_io_item__BodyGoal_18));
#line 150 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 150 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 150 "prog_io_item.m"
                }
#line 152 "prog_io_item.m"
                {
#line 152 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 152 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_56, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemClause_55));
#line 152 "prog_io_item.m"
                }
#line 153 "prog_io_item.m"
                {
#line 153 "prog_io_item.m"
                  MR_Word base;
#line 153 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 153 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_56));
#line 153 "prog_io_item.m"
                }
#line 148 "prog_io_item.m"
              }
#line 144 "prog_io_item.m"
          }
#line 121 "prog_io_item.m"
      }
#line 116 "prog_io_item.m"
  }
#line 112 "prog_io_item.m"
}

#line 42 "prog_io_item.m"
void MR_CALL 
parse_tree__prog_io_item__parse_decl_5_p_0(
#line 42 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 42 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 42 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_8,
#line 42 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_9,
#line 42 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_10)
#line 42 "prog_io_item.m"
{
#line 166 "prog_io_item.m"
  {
#line 166 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 167 "prog_io_item.m"
    {
#line 167 "prog_io_item.m"
      parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Term_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_item__SeqNum_9, parse_tree__prog_io_item__MaybeItem_10);
#line 167 "prog_io_item.m"
      return;
    }
#line 166 "prog_io_item.m"
  }
#line 42 "prog_io_item.m"
}

#line 32 "prog_io_item.m"
void MR_CALL 
parse_tree__prog_io_item__parse_item_5_p_0(
#line 32 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 32 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 32 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_8,
#line 32 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_9,
#line 32 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Result_10)
#line 32 "prog_io_item.m"
{
#line 84 "prog_io_item.m"
  {
#line 84 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 84 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DeclTerm_11;
#line 80 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_23_23;
#line 80 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_24_24;
#line 80 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_25_25;
#line 80 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_26_26;
#line 80 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___DeclContext_12;

#line 80 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 80 "prog_io_item.m"
      {
#line 80 "prog_io_item.m"
        parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 80 "prog_io_item.m"
        parse_tree__prog_io_item__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 80 "prog_io_item.m"
        parse_tree__prog_io_item___DeclContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 80 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 80 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 80 "prog_io_item.m"
          {
#line 80 "prog_io_item.m"
            parse_tree__prog_io_item__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_23_23, (MR_Integer) 0)));
#line 80 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_24_24, (MR_String) ":-") == 0);
#line 80 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 80 "prog_io_item.m"
              {
#line 80 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 80 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 80 "prog_io_item.m"
                  {
#line 80 "prog_io_item.m"
                    parse_tree__prog_io_item__DeclTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, (MR_Integer) 0)));
#line 80 "prog_io_item.m"
                    parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, (MR_Integer) 1)));
#line 80 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 80 "prog_io_item.m"
                  }
#line 80 "prog_io_item.m"
              }
#line 80 "prog_io_item.m"
          }
#line 80 "prog_io_item.m"
      }
#line 84 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 166 "prog_io_item.m"
      {
#line 167 "prog_io_item.m"
        {
#line 167 "prog_io_item.m"
          parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__DeclTerm_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_item__SeqNum_9, parse_tree__prog_io_item__Result_10);
#line 167 "prog_io_item.m"
          return;
        }
#line 166 "prog_io_item.m"
      }
#line 84 "prog_io_item.m"
    else
#line 91 "prog_io_item.m"
      {
#line 91 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCG_H_Term_13;
#line 91 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCG_B_Term_14;
#line 91 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCG_Context_15;
#line 85 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_27_27;
#line 85 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_28_28;
#line 85 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 85 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 85 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_31_31;

#line 85 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 85 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 85 "prog_io_item.m"
          {
#line 85 "prog_io_item.m"
            parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 85 "prog_io_item.m"
            parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 85 "prog_io_item.m"
            parse_tree__prog_io_item__DCG_Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 85 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 85 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 85 "prog_io_item.m"
              {
#line 85 "prog_io_item.m"
                parse_tree__prog_io_item__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_27_27, (MR_Integer) 0)));
#line 85 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_28_28, (MR_String) "-->") == 0);
#line 85 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 85 "prog_io_item.m"
                  {
#line 85 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 85 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 85 "prog_io_item.m"
                      {
#line 85 "prog_io_item.m"
                        parse_tree__prog_io_item__DCG_H_Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 0)));
#line 85 "prog_io_item.m"
                        parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 1)));
#line 85 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 85 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 85 "prog_io_item.m"
                          {
#line 85 "prog_io_item.m"
                            parse_tree__prog_io_item__DCG_B_Term_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 0)));
#line 85 "prog_io_item.m"
                            parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 1)));
#line 85 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 85 "prog_io_item.m"
                          }
#line 85 "prog_io_item.m"
                      }
#line 85 "prog_io_item.m"
                  }
#line 85 "prog_io_item.m"
              }
#line 85 "prog_io_item.m"
          }
#line 91 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 89 "prog_io_item.m"
          {
#line 89 "prog_io_item.m"
            parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__DCG_H_Term_13, parse_tree__prog_io_item__DCG_B_Term_14, parse_tree__prog_io_item__DCG_Context_15, parse_tree__prog_io_item__SeqNum_9, parse_tree__prog_io_item__Result_10);
#line 89 "prog_io_item.m"
            return;
          }
#line 91 "prog_io_item.m"
        else
#line 106 "prog_io_item.m"
          {
#line 106 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__HeadTerm_19;
#line 106 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__BodyTerm_20;
#line 106 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ClauseContext_21;
#line 106 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ProgVarSet_22;
#line 101 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__HeadTermPrime_16;
#line 101 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__BodyTermPrime_17;
#line 101 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TermContext_18;
#line 94 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_32_32;
#line 94 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__V_33_33;
#line 94 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_34_34;
#line 94 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_35_35;
#line 94 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_36_36;

#line 94 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 94 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 94 "prog_io_item.m"
              {
#line 94 "prog_io_item.m"
                parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 94 "prog_io_item.m"
                parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 94 "prog_io_item.m"
                parse_tree__prog_io_item__TermContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 94 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 94 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 94 "prog_io_item.m"
                  {
#line 94 "prog_io_item.m"
                    parse_tree__prog_io_item__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_32_32, (MR_Integer) 0)));
#line 94 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_33_33, (MR_String) ":-") == 0);
#line 94 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 94 "prog_io_item.m"
                      {
#line 95 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 95 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 95 "prog_io_item.m"
                          {
#line 95 "prog_io_item.m"
                            parse_tree__prog_io_item__HeadTermPrime_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 0)));
#line 95 "prog_io_item.m"
                            parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 1)));
#line 95 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 95 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 95 "prog_io_item.m"
                              {
#line 95 "prog_io_item.m"
                                parse_tree__prog_io_item__BodyTermPrime_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 0)));
#line 95 "prog_io_item.m"
                                parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 1)));
#line 95 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 95 "prog_io_item.m"
                              }
#line 95 "prog_io_item.m"
                          }
#line 94 "prog_io_item.m"
                      }
#line 94 "prog_io_item.m"
                  }
#line 94 "prog_io_item.m"
              }
#line 101 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 98 "prog_io_item.m"
              {
#line 98 "prog_io_item.m"
                parse_tree__prog_io_item__HeadTerm_19 = parse_tree__prog_io_item__HeadTermPrime_16;
#line 99 "prog_io_item.m"
                parse_tree__prog_io_item__BodyTerm_20 = parse_tree__prog_io_item__BodyTermPrime_17;
#line 100 "prog_io_item.m"
                parse_tree__prog_io_item__ClauseContext_21 = parse_tree__prog_io_item__TermContext_18;
#line 98 "prog_io_item.m"
              }
#line 101 "prog_io_item.m"
            else
#line 103 "prog_io_item.m"
              {
#line 103 "prog_io_item.m"
                parse_tree__prog_io_item__HeadTerm_19 = parse_tree__prog_io_item__Term_8;
#line 104 "prog_io_item.m"
                {
#line 104 "prog_io_item.m"
                  parse_tree__prog_io_item__ClauseContext_21 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__HeadTerm_19);
                }
#line 105 "prog_io_item.m"
                {
#line 105 "prog_io_item.m"
                  parse_tree__prog_io_item__BodyTerm_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 105 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_20, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[5]));
#line 105 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 105 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_20, 2) = ((MR_Box) (parse_tree__prog_io_item__ClauseContext_21));
#line 105 "prog_io_item.m"
                }
#line 103 "prog_io_item.m"
              }
#line 107 "prog_io_item.m"
            {
#line 107 "prog_io_item.m"
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__VarSet_7, &parse_tree__prog_io_item__ProgVarSet_22);
            }
#line 108 "prog_io_item.m"
            {
#line 108 "prog_io_item.m"
              parse_tree__prog_io_item__parse_clause_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__HeadTerm_19, parse_tree__prog_io_item__BodyTerm_20, parse_tree__prog_io_item__ProgVarSet_22, parse_tree__prog_io_item__ClauseContext_21, parse_tree__prog_io_item__SeqNum_9, parse_tree__prog_io_item__Result_10);
#line 108 "prog_io_item.m"
              return;
            }
#line 106 "prog_io_item.m"
          }
#line 91 "prog_io_item.m"
      }
#line 84 "prog_io_item.m"
  }
#line 32 "prog_io_item.m"
}

void mercury__parse_tree__prog_io_item__init(void)
{
}

void mercury__parse_tree__prog_io_item__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_maker_2);
}

void mercury__parse_tree__prog_io_item__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_item. */
