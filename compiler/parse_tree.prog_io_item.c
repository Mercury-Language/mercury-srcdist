/*
** Automatically generated from `prog_io_item.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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
#include "cord.mih"
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
#include "set_tree234.mih"
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




#line 144 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 147 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 150 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 153 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 156 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 159 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 162 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 165 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 168 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 171 "parse_tree.prog_io_item.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item____vpti_pred_2__pseudo_1__pseudo_2;

#line 174 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0_10001(
#line 177 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 179 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 181 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3,
#line 183 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4);

#line 186 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0_10001(
#line 189 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 191 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 193 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_3,
#line 195 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4,
#line 197 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_5);

#line 436 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_p_0(
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 436 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 436 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 436 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_p_0(
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 436 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 436 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 436 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 436 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 436 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 1429 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(
#line 1429 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__V_11_11,
#line 1429 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__V_12_12,
#line 1429 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__V_13_13,
#line 1429 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1429 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3);

#line 1426 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1426 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 1426 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 1331 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0(
#line 1331 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1331 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13,
#line 1331 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14,
#line 1331 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15,
#line 1331 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Vars_16);

#line 1224 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1(
#line 1224 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1224 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1224 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1196 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0(
#line 1196 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PromiseType_10,
#line 1196 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1196 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__4_4,
#line 1196 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1196 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 1196 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 1196 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 447 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_p_0(
#line 447 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 447 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_10,
#line 447 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 447 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 447 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 447 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 1224 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1224__1_2_p_0(
#line 1224 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1224 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39);

#line 1136 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1136__1_2_p_0(
#line 1136 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1136 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39);

#line 150 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__150__1_2_p_0(
#line 150 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_79,
#line 150 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_80);

#line 133 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__133__1_2_p_0(
#line 133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_73,
#line 133 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_74);

#line 1426 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0(
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_6,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_7,
#line 1426 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 1426 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0(
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_5,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_6,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 1482 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__dummy_term_with_context_2_p_0(
#line 1482 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_3,
#line 1482 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Term_4);

#line 1417 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(
#line 1417 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1);

#line 1406 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_purity_3_p_0(
#line 1406 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Purity_4,
#line 1406 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8,
#line 1406 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9);

#line 1386 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_name_4_p_0(
#line 1386 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__DefaultModuleName_5,
#line 1386 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1386 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_7,
#line 1386 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModule_8);

#line 1375 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_specifier_3_p_0(
#line 1375 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 1375 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1375 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModuleSpecifier_6);

#line 1352 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__desugar_field_access_1_f_0(
#line 1352 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_3);

#line 1306 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(
#line 1306 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 1306 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithInstTerm_5,
#line 1306 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithInst_6);

#line 1275 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(
#line 1275 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1275 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1275 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithTypeTerm_7,
#line 1275 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithType_8);

#line 1246 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(
#line 1246 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1246 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1246 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeDetismTerm_7,
#line 1246 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeMaybeDetism_8);

#line 1158 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_constraints_6_p_0(
#line 1158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23,
#line 1158 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24,
#line 1158 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeClassInstConstraints_11);

#line 1136 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0_1(
#line 1136 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1136 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1136 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1093 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(
#line 1093 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 1093 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 1093 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RevAttributes0_8,
#line 1093 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__RevAttributes_9,
#line 1093 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeExistClassInstContext_10);

#line 1022 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1(
#line 1022 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1022 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1022 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1011 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_16,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_17,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_18,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_20,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 1011 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 1011 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24);

#line 969 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1(
#line 969 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 969 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 969 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 958 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_12,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_13,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_15,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_16,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 958 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 958 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22);

#line 918 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(
#line 918 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 918 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 918 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 918 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 918 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_14,
#line 918 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_15,
#line 918 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_16,
#line 918 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_17,
#line 918 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_18);

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
parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncName_14,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Args_15,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ReturnArg_16,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncTerm_17,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_18,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_20,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ExistQVars_21,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Constraints_22,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_23,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_24,
#line 753 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_25,
#line 753 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_26);

#line 670 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_8_p_0(
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_11,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_12,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_13,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 670 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 670 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 569 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_12,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_13,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_14,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_15,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_16,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 569 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 569 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22);

#line 508 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0(
#line 508 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_9,
#line 508 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 508 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 508 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 508 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 508 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 508 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 508 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 349 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_4(
#line 349 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 349 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 349 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 271 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_3(
#line 271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 271 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 271 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_2(
#line 271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 271 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 271 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_1(
#line 271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 271 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 219 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0(
#line 219 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 219 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 219 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_11,
#line 219 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_12,
#line 219 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 219 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 219 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 219 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 178 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(
#line 178 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 178 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_8,
#line 178 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_9,
#line 178 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22,
#line 178 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 178 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_12);

#line 150 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_2(
#line 150 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 150 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 150 "prog_io_item.m"
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



#line 1824 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1832 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1840 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1848 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1856 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1864 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1873 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1881 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1889 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1897 "parse_tree.prog_io_item.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item____vpti_pred_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1907 "parse_tree.prog_io_item.c"
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

#line 1928 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0_10001(
#line 1931 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1933 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 1935 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3,
#line 1937 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4)
#line 1939 "parse_tree.prog_io_item.c"
{
#line 1941 "parse_tree.prog_io_item.c"
  {
#line 1943 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1946 "parse_tree.prog_io_item.c"
    {
#line 1948 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item____Unify____maker_2_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_4));
    }
#line 1951 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 1953 "parse_tree.prog_io_item.c"
  }
#line 1955 "parse_tree.prog_io_item.c"
}

#line 1958 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0_10001(
#line 1961 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1963 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 1965 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_3,
#line 1967 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4,
#line 1969 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_5)
#line 1971 "parse_tree.prog_io_item.c"
{
#line 1973 "parse_tree.prog_io_item.c"
  {
#line 1975 "parse_tree.prog_io_item.c"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__1_1;

#line 1978 "parse_tree.prog_io_item.c"
    {
#line 1980 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item____Compare____maker_2_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), &parse_tree__prog_io_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_item__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_5));
    }
#line 1983 "parse_tree.prog_io_item.c"
    *parse_tree__prog_io_item__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__1_1));
#line 1985 "parse_tree.prog_io_item.c"
  }
#line 1987 "parse_tree.prog_io_item.c"
}

#line 436 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_p_0(
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 436 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 436 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 436 "prog_io_item.m"
{
#line 441 "prog_io_item.m"
  {
#line 441 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 441 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 441 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeItem0_16;

#line 442 "prog_io_item.m"
    {
#line 442 "prog_io_item.m"
      parse_tree__prog_io_util__parse_list_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_item__ParserPred_8, parse_tree__prog_io_item__Term_10, &parse_tree__prog_io_item__MaybeModuleSpecs_15);
    }
#line 1432 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15)) == (MR_mktag((MR_Integer) 0))))
#line 1434 "prog_io_item.m"
      parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 1432 "prog_io_item.m"
    else
#line 1432 "prog_io_item.m"
      {
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleSpecs_15, (MR_Integer) 0)));
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Y_26;
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleDefn_38;
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemModuleDefn_39;

#line 1455 "prog_io_item.m"
        {
#line 1455 "prog_io_item.m"
          parse_tree__prog_io_item__ModuleDefn_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1455 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 1) = ((MR_Box) (parse_tree__prog_io_item__X_25));
#line 1455 "prog_io_item.m"
        }
#line 1464 "prog_io_item.m"
        {
#line 1464 "prog_io_item.m"
          parse_tree__prog_io_item__ItemModuleDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1464 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_38));
#line 1464 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 1464 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 1464 "prog_io_item.m"
        }
#line 1465 "prog_io_item.m"
        parse_tree__prog_io_item__Y_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_39);
#line 1432 "prog_io_item.m"
        {
#line 1432 "prog_io_item.m"
          parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_16, 0) = ((MR_Box) (parse_tree__prog_io_item__Y_26));
#line 1432 "prog_io_item.m"
        }
#line 1432 "prog_io_item.m"
      }
#line 445 "prog_io_item.m"
    {
#line 445 "prog_io_item.m"
      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_16, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__MaybeItem_14);
#line 445 "prog_io_item.m"
      return;
    }
#line 441 "prog_io_item.m"
  }
#line 436 "prog_io_item.m"
}

#line 436 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_p_0(
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 436 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 436 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 436 "prog_io_item.m"
{
#line 441 "prog_io_item.m"
  {
#line 441 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 441 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 441 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeItem0_16;

#line 442 "prog_io_item.m"
    {
#line 442 "prog_io_item.m"
      parse_tree__prog_io_util__parse_list_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_item__ParserPred_8, parse_tree__prog_io_item__Term_10, &parse_tree__prog_io_item__MaybeModuleSpecs_15);
    }
#line 1432 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15)) == (MR_mktag((MR_Integer) 0))))
#line 1434 "prog_io_item.m"
      parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 1432 "prog_io_item.m"
    else
#line 1432 "prog_io_item.m"
      {
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleSpecs_15, (MR_Integer) 0)));
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Y_26;
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleDefn_38;
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemModuleDefn_39;

#line 1451 "prog_io_item.m"
        {
#line 1451 "prog_io_item.m"
          parse_tree__prog_io_item__ModuleDefn_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1451 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 1) = ((MR_Box) (parse_tree__prog_io_item__X_25));
#line 1451 "prog_io_item.m"
        }
#line 1464 "prog_io_item.m"
        {
#line 1464 "prog_io_item.m"
          parse_tree__prog_io_item__ItemModuleDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1464 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_38));
#line 1464 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 1464 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 1464 "prog_io_item.m"
        }
#line 1465 "prog_io_item.m"
        parse_tree__prog_io_item__Y_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_39);
#line 1432 "prog_io_item.m"
        {
#line 1432 "prog_io_item.m"
          parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_16, 0) = ((MR_Box) (parse_tree__prog_io_item__Y_26));
#line 1432 "prog_io_item.m"
        }
#line 1432 "prog_io_item.m"
      }
#line 445 "prog_io_item.m"
    {
#line 445 "prog_io_item.m"
      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_16, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__MaybeItem_14);
#line 445 "prog_io_item.m"
      return;
    }
#line 441 "prog_io_item.m"
  }
#line 436 "prog_io_item.m"
}

#line 436 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 436 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 436 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 436 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 436 "prog_io_item.m"
{
#line 441 "prog_io_item.m"
  {
#line 441 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 441 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 441 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeItem0_16;

#line 442 "prog_io_item.m"
    {
#line 442 "prog_io_item.m"
      parse_tree__prog_io_util__parse_list_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__prog_io_item__ParserPred_8, parse_tree__prog_io_item__Term_10, &parse_tree__prog_io_item__MaybeModuleSpecs_15);
    }
#line 1432 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15)) == (MR_mktag((MR_Integer) 0))))
#line 1434 "prog_io_item.m"
      parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 1432 "prog_io_item.m"
    else
#line 1432 "prog_io_item.m"
      {
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleSpecs_15, (MR_Integer) 0)));
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Y_26;
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleDefn_38;
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemModuleDefn_39;

#line 1447 "prog_io_item.m"
        {
#line 1447 "prog_io_item.m"
          parse_tree__prog_io_item__ModuleDefn_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1447 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 1) = ((MR_Box) (parse_tree__prog_io_item__X_25));
#line 1447 "prog_io_item.m"
        }
#line 1464 "prog_io_item.m"
        {
#line 1464 "prog_io_item.m"
          parse_tree__prog_io_item__ItemModuleDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1464 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_38));
#line 1464 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 1464 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 1464 "prog_io_item.m"
        }
#line 1465 "prog_io_item.m"
        parse_tree__prog_io_item__Y_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_39);
#line 1432 "prog_io_item.m"
        {
#line 1432 "prog_io_item.m"
          parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_16, 0) = ((MR_Box) (parse_tree__prog_io_item__Y_26));
#line 1432 "prog_io_item.m"
        }
#line 1432 "prog_io_item.m"
      }
#line 445 "prog_io_item.m"
    {
#line 445 "prog_io_item.m"
      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_16, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__MaybeItem_14);
#line 445 "prog_io_item.m"
      return;
    }
#line 441 "prog_io_item.m"
  }
#line 436 "prog_io_item.m"
}

#line 1429 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(
#line 1429 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__V_11_11,
#line 1429 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__V_12_12,
#line 1429 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__V_13_13,
#line 1429 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1429 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3)
#line 1429 "prog_io_item.m"
{
#line 1432 "prog_io_item.m"
  {
#line 1432 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1432 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1434 "prog_io_item.m"
      *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_item__HeadVar__2_2;
#line 1432 "prog_io_item.m"
    else
#line 1432 "prog_io_item.m"
      {
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Y_6;
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleDefn_19;
#line 1432 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemModuleDefn_20;

#line 1471 "prog_io_item.m"
        {
#line 1471 "prog_io_item.m"
          parse_tree__prog_io_item__ModuleDefn_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1471 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_19, 1) = ((MR_Box) (parse_tree__prog_io_item__V_11_11));
#line 1471 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_19, 2) = ((MR_Box) (parse_tree__prog_io_item__X_5));
#line 1471 "prog_io_item.m"
        }
#line 1472 "prog_io_item.m"
        {
#line 1472 "prog_io_item.m"
          parse_tree__prog_io_item__ItemModuleDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_20, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_19));
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_20, 1) = ((MR_Box) (parse_tree__prog_io_item__V_12_12));
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_20, 2) = ((MR_Box) (parse_tree__prog_io_item__V_13_13));
#line 1472 "prog_io_item.m"
        }
#line 1473 "prog_io_item.m"
        parse_tree__prog_io_item__Y_6 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_20);
#line 1432 "prog_io_item.m"
        {
#line 1432 "prog_io_item.m"
          MR_Word base;
#line 1432 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "prog_io_item.m"
          *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 1432 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Y_6));
#line 1432 "prog_io_item.m"
        }
#line 1432 "prog_io_item.m"
      }
#line 1432 "prog_io_item.m"
  }
#line 1429 "prog_io_item.m"
}

#line 1426 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1426 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 1426 "prog_io_item.m"
{
#line 1426 "prog_io_item.m"
  {
#line 1426 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1426 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar1_4 = parse_tree__prog_io_item__HeadVar__2_2;
#line 1426 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar2_5 = parse_tree__prog_io_item__HeadVar__3_3;

#line 1426 "prog_io_item.m"
    {
#line 1426 "prog_io_item.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar2_5);
#line 1426 "prog_io_item.m"
      return;
    }
#line 1426 "prog_io_item.m"
  }
#line 1426 "prog_io_item.m"
}

#line 1426 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 1426 "prog_io_item.m"
{
#line 1426 "prog_io_item.m"
  {
#line 1426 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1426 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar1_3 = parse_tree__prog_io_item__HeadVar__1_1;
#line 1426 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar2_4 = parse_tree__prog_io_item__HeadVar__2_2;

#line 1426 "prog_io_item.m"
    {
#line 1426 "prog_io_item.m"
      return parse_tree__prog_io_item__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io_item__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar2_4);
    }
#line 1426 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1426 "prog_io_item.m"
  }
#line 1426 "prog_io_item.m"
}

#line 1331 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0(
#line 1331 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1331 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13,
#line 1331 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14,
#line 1331 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15,
#line 1331 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Vars_16)
#line 1331 "prog_io_item.m"
{
#line 1341 "prog_io_item.m"
  while (MR_TRUE)
#line 1341 "prog_io_item.m"
    {
#line 1341 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 1341 "prog_io_item.m"
      {
#line 1341 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13)) == (MR_mktag((MR_Integer) 1)));
#line 1341 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__QuantVars_11;
#line 1341 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17;
#line 1336 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_18_18;
#line 1336 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_19_19;
#line 1336 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;
#line 1336 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_12_12;

#line 1337 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1337 "prog_io_item.m"
          {
#line 1337 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13, (MR_Integer) 0)));
#line 1337 "prog_io_item.m"
            parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13, (MR_Integer) 1)));
#line 1336 "prog_io_item.m"
            parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1336 "prog_io_item.m"
            parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1336 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 2)));
#line 1336 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1336 "prog_io_item.m"
              {
#line 1336 "prog_io_item.m"
                parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1336 "prog_io_item.m"
                parse_tree__prog_io_item__QuantVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__V_19_19, (MR_Integer) 1)));
#line 1336 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__QuantType_7 == parse_tree__prog_io_item__V_24_24);
#line 1336 "prog_io_item.m"
              }
#line 1337 "prog_io_item.m"
          }
#line 1341 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1339 "prog_io_item.m"
          {
#line 1339 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20;

#line 1339 "prog_io_item.m"
            {
#line 1339 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15, parse_tree__prog_io_item__QuantVars_11);
            }
#line 1340 "prog_io_item.m"
            /* direct tailcall eliminated */
#line 1340 "prog_io_item.m"
            {
#line 1340 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_13 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17;
#line 1340 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0__tmp_copy_15 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20;

#line 1340 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_0__tmp_copy_15;
#line 1340 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_13;
#line 1340 "prog_io_item.m"
            }
#line 1340 "prog_io_item.m"
            continue;
#line 1339 "prog_io_item.m"
          }
#line 1341 "prog_io_item.m"
        else
#line 1342 "prog_io_item.m"
          {
#line 1342 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_Vars_16 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15;
#line 1342 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13;
#line 1342 "prog_io_item.m"
          }
#line 1341 "prog_io_item.m"
      }
#line 1341 "prog_io_item.m"
      break;
#line 1341 "prog_io_item.m"
    }
#line 1331 "prog_io_item.m"
}

#line 1224 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1(
#line 1224 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1224 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1224 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1224 "prog_io_item.m"
{
#line 1224 "prog_io_item.m"
  {
#line 1224 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1224 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_39;

#line 1224 "prog_io_item.m"
    {
#line 1224 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1224__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_39);
    }
#line 1224 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_39));
#line 1224 "prog_io_item.m"
  }
#line 1224 "prog_io_item.m"
}

#line 1196 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0(
#line 1196 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PromiseType_10,
#line 1196 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1196 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__4_4,
#line 1196 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1196 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 1196 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 1196 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 1196 "prog_io_item.m"
{
#line 1201 "prog_io_item.m"
  {
#line 1201 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1201 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_36_36;
#line 1201 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_37_37;
#line 1201 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Term_12;
#line 1201 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet0_17;
#line 1201 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ContextPieces_18;
#line 1201 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeGoal0_19;
#line 1201 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet_20;
#line 1201 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;

#line 1200 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1200 "prog_io_item.m"
      {
#line 1200 "prog_io_item.m"
        parse_tree__prog_io_item__Term_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__4_4, (MR_Integer) 0)));
#line 1200 "prog_io_item.m"
        parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__4_4, (MR_Integer) 1)));
#line 1200 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1201 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1201 "prog_io_item.m"
          {
#line 2616 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 2618 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1202 "prog_io_item.m"
            {
#line 1202 "prog_io_item.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_36_36, parse_tree__prog_io_item__TypeCtorInfo_37_37, parse_tree__prog_io_item__VarSet_11, &parse_tree__prog_io_item__ProgVarSet0_17);
            }
#line 1203 "prog_io_item.m"
            parse_tree__prog_io_item__ContextPieces_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1204 "prog_io_item.m"
            {
#line 1204 "prog_io_item.m"
              parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__ContextPieces_18, &parse_tree__prog_io_item__MaybeGoal0_19, parse_tree__prog_io_item__ProgVarSet0_17, &parse_tree__prog_io_item__ProgVarSet_20);
            }
#line 1231 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeGoal0_19)) == (MR_mktag((MR_Integer) 0))))
#line 1233 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = (MR_Word) parse_tree__prog_io_item__MaybeGoal0_19;
#line 1231 "prog_io_item.m"
            else
#line 1206 "prog_io_item.m"
              {
#line 1206 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeGoal0_19, (MR_Integer) 0)));
#line 1206 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__UnivVars_25;
#line 1206 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Goal_26;
#line 1206 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemPromise_28;
#line 1206 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_29;

#line 1217 "prog_io_item.m"
                if ((parse_tree__prog_io_item__PromiseType_10 == (MR_Integer) 3))
#line 1213 "prog_io_item.m"
                  {
#line 1213 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__UnivVars0_23;
#line 1213 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__AllGoal_24;
#line 1210 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_22_22;

#line 1210 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__Goal0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1210 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1210 "prog_io_item.m"
                      {
#line 1210 "prog_io_item.m"
                        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 1)));
#line 1210 "prog_io_item.m"
                        parse_tree__prog_io_item__UnivVars0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 2)));
#line 1210 "prog_io_item.m"
                        parse_tree__prog_io_item__AllGoal_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 3)));
#line 1211 "prog_io_item.m"
                        parse_tree__prog_io_item__UnivVars_25 = parse_tree__prog_io_item__UnivVars0_23;
#line 1212 "prog_io_item.m"
                        parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__AllGoal_24;
#line 1210 "prog_io_item.m"
                      }
#line 1210 "prog_io_item.m"
                    else
#line 1214 "prog_io_item.m"
                      {
#line 1214 "prog_io_item.m"
                        parse_tree__prog_io_item__UnivVars_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1215 "prog_io_item.m"
                        parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__Goal0_21;
#line 1214 "prog_io_item.m"
                      }
#line 1213 "prog_io_item.m"
                  }
#line 1217 "prog_io_item.m"
                else
#line 1221 "prog_io_item.m"
                  {
#line 1221 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__UnivVars0_35;
#line 1222 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_27_27;

#line 1222 "prog_io_item.m"
                    {
#line 1222 "prog_io_item.m"
                      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__Attributes_13, &parse_tree__prog_io_item__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__UnivVars0_35);
                    }
#line 1224 "prog_io_item.m"
                    {
#line 1224 "prog_io_item.m"
                      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[10], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[5], parse_tree__prog_io_item__UnivVars0_35, &parse_tree__prog_io_item__UnivVars_25);
                    }
#line 1225 "prog_io_item.m"
                    parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__Goal0_21;
#line 1221 "prog_io_item.m"
                  }
#line 1227 "prog_io_item.m"
                {
#line 1227 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemPromise_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1227 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 0) = ((MR_Box) (parse_tree__prog_io_item__PromiseType_10));
#line 1227 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 1) = ((MR_Box) (parse_tree__prog_io_item__Goal_26));
#line 1227 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_20));
#line 1227 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 3) = ((MR_Box) (parse_tree__prog_io_item__UnivVars_25));
#line 1227 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 4) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 1227 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 5) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 1227 "prog_io_item.m"
                }
#line 1229 "prog_io_item.m"
                {
#line 1229 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1229 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_29, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPromise_28));
#line 1229 "prog_io_item.m"
                }
#line 1230 "prog_io_item.m"
                {
#line 1230 "prog_io_item.m"
                  MR_Word base;
#line 1230 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 1230 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_29));
#line 1230 "prog_io_item.m"
                }
#line 1206 "prog_io_item.m"
              }
#line 1231 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1201 "prog_io_item.m"
          }
#line 1200 "prog_io_item.m"
      }
#line 1201 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1201 "prog_io_item.m"
  }
#line 1196 "prog_io_item.m"
}

#line 447 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_p_0(
#line 447 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 447 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_10,
#line 447 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 447 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 447 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 447 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 447 "prog_io_item.m"
{
#line 451 "prog_io_item.m"
  {
#line 451 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
#line 451 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VersionNumberTerm_15;
#line 451 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleNameTerm_16;
#line 451 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VersionNumbersTerm_17;
#line 451 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_38_38;
#line 451 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_39_39;
#line 451 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_40_40;
#line 454 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__VersionNumber_18;
#line 454 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_41_41;
#line 454 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_42_42;
#line 454 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__V_100_100;
#line 454 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;

#line 452 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 452 "prog_io_item.m"
      {
#line 452 "prog_io_item.m"
        parse_tree__prog_io_item__VersionNumberTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_10, (MR_Integer) 0)));
#line 452 "prog_io_item.m"
        parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_10, (MR_Integer) 1)));
#line 452 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 452 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 452 "prog_io_item.m"
          {
#line 452 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleNameTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, (MR_Integer) 0)));
#line 452 "prog_io_item.m"
            parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, (MR_Integer) 1)));
#line 452 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 452 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 452 "prog_io_item.m"
              {
#line 452 "prog_io_item.m"
                parse_tree__prog_io_item__VersionNumbersTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_39_39, (MR_Integer) 0)));
#line 452 "prog_io_item.m"
                parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_39_39, (MR_Integer) 1)));
#line 452 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 451 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 451 "prog_io_item.m"
                  {
#line 454 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__VersionNumberTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 454 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 454 "prog_io_item.m"
                      {
#line 454 "prog_io_item.m"
                        parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 0)));
#line 454 "prog_io_item.m"
                        parse_tree__prog_io_item__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 1)));
#line 454 "prog_io_item.m"
                        parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 2)));
#line 454 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 454 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 454 "prog_io_item.m"
                          {
#line 454 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 454 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 454 "prog_io_item.m"
                              {
#line 454 "prog_io_item.m"
                                parse_tree__prog_io_item__VersionNumber_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, (MR_Integer) 0)));
#line 455 "prog_io_item.m"
                                {
#line 455 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_100_100 = recompilation__version__version_numbers_version_number_0_f_0();
                                }
#line 455 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__VersionNumber_18 == parse_tree__prog_io_item__V_100_100);
#line 454 "prog_io_item.m"
                              }
#line 454 "prog_io_item.m"
                          }
#line 454 "prog_io_item.m"
                      }
#line 480 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 472 "prog_io_item.m"
                      {
#line 457 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_101_101;

#line 457 "prog_io_item.m"
                        {
#line 457 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleNameTerm_16, &parse_tree__prog_io_item__V_101_101);
                        }
#line 457 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 457 "prog_io_item.m"
                          {
#line 457 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__V_101_101);
                          }
#line 472 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 459 "prog_io_item.m"
                          {
#line 459 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__MaybeItem0_20;

#line 458 "prog_io_item.m"
                            {
#line 458 "prog_io_item.m"
                              recompilation__version__parse_version_numbers_2_p_0(parse_tree__prog_io_item__VersionNumbersTerm_17, &parse_tree__prog_io_item__MaybeItem0_20);
                            }
#line 468 "prog_io_item.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItem0_20)) == (MR_mktag((MR_Integer) 0))))
#line 470 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItem_14 = (MR_Word) parse_tree__prog_io_item__MaybeItem0_20;
#line 468 "prog_io_item.m"
                            else
#line 461 "prog_io_item.m"
                              {
#line 461 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__VersionNumbers_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_20, (MR_Integer) 0)));
#line 461 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ModuleDefn_22;
#line 461 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ItemModuleDefn_23;
#line 461 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Item_24;
#line 461 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeItem1_25;

#line 462 "prog_io_item.m"
                                {
#line 462 "prog_io_item.m"
                                  parse_tree__prog_io_item__ModuleDefn_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 462 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 462 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_22, 1) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_8));
#line 462 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_22, 2) = ((MR_Box) (parse_tree__prog_io_item__VersionNumbers_21));
#line 462 "prog_io_item.m"
                                }
#line 463 "prog_io_item.m"
                                {
#line 463 "prog_io_item.m"
                                  parse_tree__prog_io_item__ItemModuleDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 463 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_23, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_22));
#line 463 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_23, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 463 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_23, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 463 "prog_io_item.m"
                                }
#line 465 "prog_io_item.m"
                                parse_tree__prog_io_item__Item_24 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_23);
#line 466 "prog_io_item.m"
                                {
#line 466 "prog_io_item.m"
                                  parse_tree__prog_io_item__MaybeItem1_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 466 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem1_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_24));
#line 466 "prog_io_item.m"
                                }
#line 467 "prog_io_item.m"
                                {
#line 467 "prog_io_item.m"
                                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem1_25, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__MaybeItem_14);
                                }
#line 461 "prog_io_item.m"
                              }
#line 459 "prog_io_item.m"
                          }
#line 472 "prog_io_item.m"
                        else
#line 474 "prog_io_item.m"
                          {
#line 474 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Spec_28;
#line 474 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_56_56;
#line 474 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_57_57;
#line 474 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_58_58;
#line 474 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_63_63;

#line 476 "prog_io_item.m"
                            {
#line 476 "prog_io_item.m"
                              parse_tree__prog_io_item__V_58_58 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleNameTerm_16);
                            }
#line 476 "prog_io_item.m"
                            {
#line 476 "prog_io_item.m"
                              parse_tree__prog_io_item__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 476 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_item__V_58_58));
#line 476 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[135])));
#line 476 "prog_io_item.m"
                            }
#line 477 "prog_io_item.m"
                            {
#line 477 "prog_io_item.m"
                              parse_tree__prog_io_item__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_item__V_57_57));
#line 477 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "prog_io_item.m"
                            }
#line 475 "prog_io_item.m"
                            {
#line 475 "prog_io_item.m"
                              parse_tree__prog_io_item__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 475 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 475 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_28, 2) = ((MR_Box) (parse_tree__prog_io_item__V_56_56));
#line 475 "prog_io_item.m"
                            }
#line 478 "prog_io_item.m"
                            {
#line 478 "prog_io_item.m"
                              parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_28));
#line 478 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "prog_io_item.m"
                            }
#line 478 "prog_io_item.m"
                            {
#line 478 "prog_io_item.m"
                              MR_Word base;
#line 478 "prog_io_item.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 478 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 478 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 478 "prog_io_item.m"
                            }
#line 474 "prog_io_item.m"
                          }
#line 472 "prog_io_item.m"
                      }
#line 480 "prog_io_item.m"
                    else
#line 491 "prog_io_item.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_item__VersionNumberTerm_15)) == (MR_mktag((MR_Integer) 0))))
#line 482 "prog_io_item.m"
                        {
#line 482 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__DummyTerm_33;
#line 482 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__Warning_34;
#line 482 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__ItemNothing_35;
#line 482 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_90_90;
#line 482 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__Item_91;

#line 485 "prog_io_item.m"
                          {
#line 485 "prog_io_item.m"
                            parse_tree__prog_io_item__dummy_term_with_context_2_p_0(parse_tree__prog_io_item__Context_12, &parse_tree__prog_io_item__DummyTerm_33);
                          }
#line 486 "prog_io_item.m"
                          {
#line 486 "prog_io_item.m"
                            parse_tree__prog_io_item__Warning_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 486 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[27])));
#line 486 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_34, 1) = ((MR_Box) ((MR_String) "interface file needs to be recreated, the version numbers are out of date"));
#line 486 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_34, 2) = ((MR_Box) (parse_tree__prog_io_item__DummyTerm_33));
#line 486 "prog_io_item.m"
                          }
#line 488 "prog_io_item.m"
                          {
#line 488 "prog_io_item.m"
                            parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 488 "prog_io_item.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_item__Warning_34));
#line 488 "prog_io_item.m"
                          }
#line 488 "prog_io_item.m"
                          {
#line 488 "prog_io_item.m"
                            parse_tree__prog_io_item__ItemNothing_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 488 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_35, 0) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 488 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_35, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 488 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_35, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 488 "prog_io_item.m"
                          }
#line 489 "prog_io_item.m"
                          {
#line 489 "prog_io_item.m"
                            parse_tree__prog_io_item__Item_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "prog_io_item.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 489 "prog_io_item.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_91, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemNothing_35));
#line 489 "prog_io_item.m"
                          }
#line 490 "prog_io_item.m"
                          {
#line 490 "prog_io_item.m"
                            MR_Word base;
#line 490 "prog_io_item.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 490 "prog_io_item.m"
                            *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 490 "prog_io_item.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_91));
#line 490 "prog_io_item.m"
                          }
#line 482 "prog_io_item.m"
                        }
#line 491 "prog_io_item.m"
                      else
#line 492 "prog_io_item.m"
                        {
#line 492 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__VersionNumberContext_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 1)));
#line 492 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_78_78;
#line 492 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_79_79;
#line 492 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_84_84;
#line 492 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__Spec_93;
#line 492 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 0)));

#line 496 "prog_io_item.m"
                          {
#line 496 "prog_io_item.m"
                            parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 496 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__VersionNumberContext_37));
#line 496 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[136])));
#line 496 "prog_io_item.m"
                          }
#line 496 "prog_io_item.m"
                          {
#line 496 "prog_io_item.m"
                            parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "prog_io_item.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 496 "prog_io_item.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 496 "prog_io_item.m"
                          }
#line 495 "prog_io_item.m"
                          {
#line 495 "prog_io_item.m"
                            parse_tree__prog_io_item__Spec_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 495 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 495 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 495 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_93, 2) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 495 "prog_io_item.m"
                          }
#line 497 "prog_io_item.m"
                          {
#line 497 "prog_io_item.m"
                            parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "prog_io_item.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_93));
#line 497 "prog_io_item.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 497 "prog_io_item.m"
                          }
#line 497 "prog_io_item.m"
                          {
#line 497 "prog_io_item.m"
                            MR_Word base;
#line 497 "prog_io_item.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 497 "prog_io_item.m"
                            *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 497 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 497 "prog_io_item.m"
                          }
#line 492 "prog_io_item.m"
                        }
#line 480 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 451 "prog_io_item.m"
                  }
#line 452 "prog_io_item.m"
              }
#line 452 "prog_io_item.m"
          }
#line 452 "prog_io_item.m"
      }
#line 451 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 451 "prog_io_item.m"
  }
#line 447 "prog_io_item.m"
}

#line 1224 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1224__1_2_p_0(
#line 1224 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1224 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39)
#line 1224 "prog_io_item.m"
{
#line 1224 "prog_io_item.m"
  {
#line 1224 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1224 "prog_io_item.m"
    {
#line 1224 "prog_io_item.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_38, parse_tree__prog_io_item__HeadVar__2_39);
#line 1224 "prog_io_item.m"
      return;
    }
#line 1224 "prog_io_item.m"
  }
#line 1224 "prog_io_item.m"
}

#line 1136 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1136__1_2_p_0(
#line 1136 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1136 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39)
#line 1136 "prog_io_item.m"
{
#line 1136 "prog_io_item.m"
  {
#line 1136 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1136 "prog_io_item.m"
    {
#line 1136 "prog_io_item.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__HeadVar__1_38, parse_tree__prog_io_item__HeadVar__2_39);
#line 1136 "prog_io_item.m"
      return;
    }
#line 1136 "prog_io_item.m"
  }
#line 1136 "prog_io_item.m"
}

#line 150 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__150__1_2_p_0(
#line 150 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_79,
#line 150 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_80)
#line 150 "prog_io_item.m"
{
#line 150 "prog_io_item.m"
  {
#line 150 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 150 "prog_io_item.m"
    {
#line 150 "prog_io_item.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_79, parse_tree__prog_io_item__HeadVar__2_80);
#line 150 "prog_io_item.m"
      return;
    }
#line 150 "prog_io_item.m"
  }
#line 150 "prog_io_item.m"
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

#line 1426 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0(
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_6,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_7,
#line 1426 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 1426 "prog_io_item.m"
{
#line 1426 "prog_io_item.m"
  {
#line 1426 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1426 "prog_io_item.m"
    {
#line 1426 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__HeadVar__2_2, parse_tree__prog_io_item__HeadVar__3_3);
#line 1426 "prog_io_item.m"
      return;
    }
#line 1426 "prog_io_item.m"
  }
#line 1426 "prog_io_item.m"
}

#line 1426 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0(
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_5,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_6,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 1426 "prog_io_item.m"
{
#line 1426 "prog_io_item.m"
  {
#line 1426 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1426 "prog_io_item.m"
    {
#line 1426 "prog_io_item.m"
      return parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__HeadVar__2_2);
    }
#line 1426 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1426 "prog_io_item.m"
  }
#line 1426 "prog_io_item.m"
}

#line 1482 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__dummy_term_with_context_2_p_0(
#line 1482 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_3,
#line 1482 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Term_4)
#line 1482 "prog_io_item.m"
{
#line 1484 "prog_io_item.m"
  {
#line 1484 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1485 "prog_io_item.m"
    {
#line 1485 "prog_io_item.m"
      MR_Word base;
#line 1485 "prog_io_item.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1485 "prog_io_item.m"
      *parse_tree__prog_io_item__Term_4 = base;
#line 1485 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[25]));
#line 1485 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1485 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_3));
#line 1485 "prog_io_item.m"
    }
#line 1484 "prog_io_item.m"
  }
#line 1482 "prog_io_item.m"
}

#line 1417 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(
#line 1417 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1)
#line 1417 "prog_io_item.m"
{
#line 1419 "prog_io_item.m"
  {
#line 1419 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1419 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__HeadVar__2_2;

#line 1419 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__1_1 == (MR_Integer) 1))
#line 1419 "prog_io_item.m"
      parse_tree__prog_io_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[54]);
#line 1419 "prog_io_item.m"
    else
#line 1421 "prog_io_item.m"
      parse_tree__prog_io_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[97]);
#line 1419 "prog_io_item.m"
    return parse_tree__prog_io_item__HeadVar__2_2;
#line 1419 "prog_io_item.m"
  }
#line 1417 "prog_io_item.m"
}

#line 1406 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_purity_3_p_0(
#line 1406 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Purity_4,
#line 1406 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8,
#line 1406 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9)
#line 1406 "prog_io_item.m"
{
#line 1411 "prog_io_item.m"
  {
#line 1411 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8)) == (MR_mktag((MR_Integer) 1)));
#line 1411 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Purity0_6;
#line 1411 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10;
#line 1409 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_11_11;
#line 1409 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_12_12;
#line 1409 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_7_7;

#line 1409 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1409 "prog_io_item.m"
      {
#line 1409 "prog_io_item.m"
        parse_tree__prog_io_item__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8, (MR_Integer) 0)));
#line 1409 "prog_io_item.m"
        parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8, (MR_Integer) 1)));
#line 1409 "prog_io_item.m"
        parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_11_11, (MR_Integer) 0)));
#line 1409 "prog_io_item.m"
        parse_tree__prog_io_item__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_11_11, (MR_Integer) 1)));
#line 1409 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1409 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1409 "prog_io_item.m"
          parse_tree__prog_io_item__Purity0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_12_12, (MR_Integer) 0)));
#line 1409 "prog_io_item.m"
      }
#line 1411 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1410 "prog_io_item.m"
      {
#line 1410 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10;
#line 1410 "prog_io_item.m"
        *parse_tree__prog_io_item__Purity_4 = parse_tree__prog_io_item__Purity0_6;
#line 1410 "prog_io_item.m"
      }
#line 1411 "prog_io_item.m"
    else
#line 1412 "prog_io_item.m"
      {
#line 1412 "prog_io_item.m"
        *parse_tree__prog_io_item__Purity_4 = (MR_Integer) 0;
#line 1412 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8;
#line 1412 "prog_io_item.m"
      }
#line 1411 "prog_io_item.m"
  }
#line 1406 "prog_io_item.m"
}

#line 1386 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_name_4_p_0(
#line 1386 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__DefaultModuleName_5,
#line 1386 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1386 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_7,
#line 1386 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModule_8)
#line 1386 "prog_io_item.m"
{
#line 1391 "prog_io_item.m"
  {
#line 1391 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1391 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__Term_7)) == (MR_mktag((MR_Integer) 0))))
#line 1400 "prog_io_item.m"
      {
#line 1400 "prog_io_item.m"
        parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_item__DefaultModuleName_5, parse_tree__prog_io_item__VarSet_6, parse_tree__prog_io_item__Term_7, parse_tree__prog_io_item__MaybeModule_8);
#line 1400 "prog_io_item.m"
        return;
      }
#line 1391 "prog_io_item.m"
    else
#line 1391 "prog_io_item.m"
      {
#line 1391 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Term_7, (MR_Integer) 1)));
#line 1391 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_12;
#line 1391 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 1391 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 1391 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1391 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Term_7, (MR_Integer) 0)));

#line 1396 "prog_io_item.m"
        {
#line 1396 "prog_io_item.m"
          parse_tree__prog_io_item__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1396 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_10));
#line 1396 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[134])));
#line 1396 "prog_io_item.m"
        }
#line 1396 "prog_io_item.m"
        {
#line 1396 "prog_io_item.m"
          parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_item__V_30_30));
#line 1396 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1396 "prog_io_item.m"
        }
#line 1395 "prog_io_item.m"
        {
#line 1395 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1395 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1395 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1395 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 1395 "prog_io_item.m"
        }
#line 1397 "prog_io_item.m"
        {
#line 1397 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1397 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_12));
#line 1397 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1397 "prog_io_item.m"
        }
#line 1397 "prog_io_item.m"
        {
#line 1397 "prog_io_item.m"
          MR_Word base;
#line 1397 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1397 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeModule_8 = base;
#line 1397 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 1397 "prog_io_item.m"
        }
#line 1391 "prog_io_item.m"
      }
#line 1391 "prog_io_item.m"
  }
#line 1386 "prog_io_item.m"
}

#line 1375 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_specifier_3_p_0(
#line 1375 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 1375 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1375 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModuleSpecifier_6)
#line 1375 "prog_io_item.m"
{
#line 1379 "prog_io_item.m"
  {
#line 1379 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1379 "prog_io_item.m"
    {
#line 1379 "prog_io_item.m"
      parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__VarSet_4, parse_tree__prog_io_item__Term_5, parse_tree__prog_io_item__MaybeModuleSpecifier_6);
#line 1379 "prog_io_item.m"
      return;
    }
#line 1379 "prog_io_item.m"
  }
#line 1375 "prog_io_item.m"
}

#line 1352 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__desugar_field_access_1_f_0(
#line 1352 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_3)
#line 1352 "prog_io_item.m"
{
#line 1360 "prog_io_item.m"
  {
#line 1360 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1360 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DesugaredTerm_4;
#line 1360 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__A_5;
#line 1360 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Context_7;
#line 1360 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Bs_9;
#line 1360 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;
#line 1356 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__RHS_6;
#line 1356 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 1356 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_17_17;
#line 1356 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_18_18;
#line 1356 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1356 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_20_20;
#line 1357 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_10_10;
#line 1357 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__FieldName_8;

#line 1356 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1356 "prog_io_item.m"
      {
#line 1356 "prog_io_item.m"
        parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 0)));
#line 1356 "prog_io_item.m"
        parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 1)));
#line 1356 "prog_io_item.m"
        parse_tree__prog_io_item__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 2)));
#line 1356 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 1356 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1356 "prog_io_item.m"
          {
#line 1356 "prog_io_item.m"
            parse_tree__prog_io_item__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 1356 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_17_17, (MR_String) "^") == 0);
#line 1356 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1356 "prog_io_item.m"
              {
#line 1356 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 1356 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1356 "prog_io_item.m"
                  {
#line 1356 "prog_io_item.m"
                    parse_tree__prog_io_item__A_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1356 "prog_io_item.m"
                    parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1356 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 1356 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1356 "prog_io_item.m"
                      {
#line 1356 "prog_io_item.m"
                        parse_tree__prog_io_item__RHS_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1356 "prog_io_item.m"
                        parse_tree__prog_io_item__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, (MR_Integer) 1)));
#line 1356 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1356 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1356 "prog_io_item.m"
                          {
#line 1357 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__RHS_6)) == (MR_mktag((MR_Integer) 0)));
#line 1357 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 1357 "prog_io_item.m"
                              {
#line 1357 "prog_io_item.m"
                                parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 0)));
#line 1357 "prog_io_item.m"
                                parse_tree__prog_io_item__Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 1)));
#line 1357 "prog_io_item.m"
                                parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 2)));
#line 1357 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 1357 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 1357 "prog_io_item.m"
                                  parse_tree__prog_io_item__FieldName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 1357 "prog_io_item.m"
                              }
#line 1356 "prog_io_item.m"
                          }
#line 1356 "prog_io_item.m"
                      }
#line 1356 "prog_io_item.m"
                  }
#line 1356 "prog_io_item.m"
              }
#line 1356 "prog_io_item.m"
          }
#line 1356 "prog_io_item.m"
      }
#line 1360 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1359 "prog_io_item.m"
      {
#line 1359 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 1359 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;

#line 1359 "prog_io_item.m"
        {
#line 1359 "prog_io_item.m"
          parse_tree__prog_io_item__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1359 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_item__A_5));
#line 1359 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1359 "prog_io_item.m"
        }
#line 1359 "prog_io_item.m"
        {
#line 1359 "prog_io_item.m"
          parse_tree__prog_io_item__V_23_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__Bs_9, parse_tree__prog_io_item__V_24_24);
        }
#line 1359 "prog_io_item.m"
        {
#line 1359 "prog_io_item.m"
          parse_tree__prog_io_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1359 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io_item__V_21_21));
#line 1359 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io_item__V_23_23));
#line 1359 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_7));
#line 1359 "prog_io_item.m"
        }
#line 1359 "prog_io_item.m"
      }
#line 1360 "prog_io_item.m"
    else
#line 1367 "prog_io_item.m"
      {
#line 1367 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_12;
#line 1367 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__A_44;
#line 1367 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_46;
#line 1367 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__FieldName_47;
#line 1367 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Bs_48;
#line 1361 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__LHS_11;
#line 1361 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_26_26;
#line 1361 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_27_27;
#line 1361 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_28_28;
#line 1361 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 1361 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 1361 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_31_31;
#line 1361 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_32_32;
#line 1361 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 1361 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_34_34;
#line 1361 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1361 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;
#line 1361 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__RHS_43;
#line 1361 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_13_13;
#line 1363 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_14_14;

#line 1361 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1361 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1361 "prog_io_item.m"
          {
#line 1361 "prog_io_item.m"
            parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 0)));
#line 1361 "prog_io_item.m"
            parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 1)));
#line 1361 "prog_io_item.m"
            parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 2)));
#line 1361 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_26_26)) == (MR_mktag((MR_Integer) 0)));
#line 1361 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1361 "prog_io_item.m"
              {
#line 1361 "prog_io_item.m"
                parse_tree__prog_io_item__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 0)));
#line 1361 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_27_27, (MR_String) ":=") == 0);
#line 1361 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1361 "prog_io_item.m"
                  {
#line 1361 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1361 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1361 "prog_io_item.m"
                      {
#line 1361 "prog_io_item.m"
                        parse_tree__prog_io_item__LHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 0)));
#line 1361 "prog_io_item.m"
                        parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 1)));
#line 1361 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 1361 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1361 "prog_io_item.m"
                          {
#line 1361 "prog_io_item.m"
                            parse_tree__prog_io_item__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 0)));
#line 1361 "prog_io_item.m"
                            parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 1)));
#line 1361 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1361 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 1361 "prog_io_item.m"
                              {
#line 1362 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__LHS_11)) == (MR_mktag((MR_Integer) 0)));
#line 1362 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 1362 "prog_io_item.m"
                                  {
#line 1362 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 0)));
#line 1362 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 1)));
#line 1362 "prog_io_item.m"
                                    parse_tree__prog_io_item__Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 2)));
#line 1362 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 1362 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 1362 "prog_io_item.m"
                                      {
#line 1362 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 1362 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_32_32, (MR_String) "^") == 0);
#line 1361 "prog_io_item.m"
                                        if (parse_tree__prog_io_item__succeeded)
#line 1361 "prog_io_item.m"
                                          {
#line 1362 "prog_io_item.m"
                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1362 "prog_io_item.m"
                                            if (parse_tree__prog_io_item__succeeded)
#line 1362 "prog_io_item.m"
                                              {
#line 1362 "prog_io_item.m"
                                                parse_tree__prog_io_item__A_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 0)));
#line 1362 "prog_io_item.m"
                                                parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 1)));
#line 1362 "prog_io_item.m"
                                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1362 "prog_io_item.m"
                                                if (parse_tree__prog_io_item__succeeded)
#line 1362 "prog_io_item.m"
                                                  {
#line 1362 "prog_io_item.m"
                                                    parse_tree__prog_io_item__RHS_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 0)));
#line 1362 "prog_io_item.m"
                                                    parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 1)));
#line 1362 "prog_io_item.m"
                                                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1361 "prog_io_item.m"
                                                    if (parse_tree__prog_io_item__succeeded)
#line 1361 "prog_io_item.m"
                                                      {
#line 1363 "prog_io_item.m"
                                                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__RHS_43)) == (MR_mktag((MR_Integer) 0)));
#line 1363 "prog_io_item.m"
                                                        if (parse_tree__prog_io_item__succeeded)
#line 1363 "prog_io_item.m"
                                                          {
#line 1363 "prog_io_item.m"
                                                            parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 0)));
#line 1363 "prog_io_item.m"
                                                            parse_tree__prog_io_item__Bs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 1)));
#line 1363 "prog_io_item.m"
                                                            parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 2)));
#line 1363 "prog_io_item.m"
                                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 1363 "prog_io_item.m"
                                                            if (parse_tree__prog_io_item__succeeded)
#line 1363 "prog_io_item.m"
                                                              parse_tree__prog_io_item__FieldName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 1363 "prog_io_item.m"
                                                          }
#line 1361 "prog_io_item.m"
                                                      }
#line 1362 "prog_io_item.m"
                                                  }
#line 1362 "prog_io_item.m"
                                              }
#line 1361 "prog_io_item.m"
                                          }
#line 1362 "prog_io_item.m"
                                      }
#line 1362 "prog_io_item.m"
                                  }
#line 1361 "prog_io_item.m"
                              }
#line 1361 "prog_io_item.m"
                          }
#line 1361 "prog_io_item.m"
                      }
#line 1361 "prog_io_item.m"
                  }
#line 1361 "prog_io_item.m"
              }
#line 1361 "prog_io_item.m"
          }
#line 1367 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1365 "prog_io_item.m"
          {
#line 1365 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__FunctionName_15;
#line 1365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;
#line 1365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_39_39;
#line 1365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;

#line 1365 "prog_io_item.m"
            {
#line 1365 "prog_io_item.m"
              parse_tree__prog_io_item__FunctionName_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_item__FieldName_47, (MR_String) " :=");
            }
#line 1366 "prog_io_item.m"
            {
#line 1366 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_item__FunctionName_15));
#line 1366 "prog_io_item.m"
            }
#line 1366 "prog_io_item.m"
            {
#line 1366 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__X_12));
#line 1366 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1366 "prog_io_item.m"
            }
#line 1366 "prog_io_item.m"
            {
#line 1366 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__A_44));
#line 1366 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1366 "prog_io_item.m"
            }
#line 1366 "prog_io_item.m"
            {
#line 1366 "prog_io_item.m"
              parse_tree__prog_io_item__V_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__Bs_48, parse_tree__prog_io_item__V_40_40);
            }
#line 1366 "prog_io_item.m"
            {
#line 1366 "prog_io_item.m"
              parse_tree__prog_io_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 1366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_46));
#line 1366 "prog_io_item.m"
            }
#line 1365 "prog_io_item.m"
          }
#line 1367 "prog_io_item.m"
        else
#line 1368 "prog_io_item.m"
          parse_tree__prog_io_item__DesugaredTerm_4 = parse_tree__prog_io_item__Term_3;
#line 1367 "prog_io_item.m"
      }
#line 1360 "prog_io_item.m"
    return parse_tree__prog_io_item__DesugaredTerm_4;
#line 1360 "prog_io_item.m"
  }
#line 1352 "prog_io_item.m"
}

#line 1306 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(
#line 1306 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 1306 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithInstTerm_5,
#line 1306 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithInst_6)
#line 1306 "prog_io_item.m"
{
#line 1324 "prog_io_item.m"
  {
#line 1324 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 1324 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTermPrime_7;
#line 1324 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InstTerm_8;
#line 1311 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_13_13;
#line 1311 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_14_14;
#line 1311 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_15_15;
#line 1311 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 1311 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 1311 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_9_9;

#line 1311 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1311 "prog_io_item.m"
      {
#line 1311 "prog_io_item.m"
        parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 0)));
#line 1311 "prog_io_item.m"
        parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 1)));
#line 1311 "prog_io_item.m"
        parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 2)));
#line 1311 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 1311 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1311 "prog_io_item.m"
          {
#line 1311 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_13_13, (MR_Integer) 0)));
#line 1311 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_14_14, (MR_String) "with_inst") == 0);
#line 1311 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1311 "prog_io_item.m"
              {
#line 1312 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1312 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1312 "prog_io_item.m"
                  {
#line 1312 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeWithInstTermPrime_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 0)));
#line 1312 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 1)));
#line 1312 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1312 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1312 "prog_io_item.m"
                      {
#line 1312 "prog_io_item.m"
                        parse_tree__prog_io_item__InstTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 1312 "prog_io_item.m"
                        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 1)));
#line 1312 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1312 "prog_io_item.m"
                      }
#line 1312 "prog_io_item.m"
                  }
#line 1311 "prog_io_item.m"
              }
#line 1311 "prog_io_item.m"
          }
#line 1311 "prog_io_item.m"
      }
#line 1324 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1314 "prog_io_item.m"
      {
#line 1317 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Inst_10;

#line 1314 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithInstTerm_5 = parse_tree__prog_io_item__BeforeWithInstTermPrime_7;
#line 1315 "prog_io_item.m"
        {
#line 1315 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__InstTerm_8, &parse_tree__prog_io_item__Inst_10);
        }
#line 1317 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1316 "prog_io_item.m"
          {
#line 1316 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_19_19;

#line 1316 "prog_io_item.m"
            {
#line 1316 "prog_io_item.m"
              parse_tree__prog_io_item__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1316 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_item__Inst_10));
#line 1316 "prog_io_item.m"
            }
#line 1316 "prog_io_item.m"
            {
#line 1316 "prog_io_item.m"
              MR_Word base;
#line 1316 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1316 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithInst_6 = base;
#line 1316 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_19_19));
#line 1316 "prog_io_item.m"
            }
#line 1316 "prog_io_item.m"
          }
#line 1317 "prog_io_item.m"
        else
#line 1319 "prog_io_item.m"
          {
#line 1319 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_12;
#line 1319 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_33_33;
#line 1319 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_34_34;
#line 1319 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_35_35;
#line 1319 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;

#line 1321 "prog_io_item.m"
            {
#line 1321 "prog_io_item.m"
              parse_tree__prog_io_item__V_35_35 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__InstTerm_8);
            }
#line 1321 "prog_io_item.m"
            {
#line 1321 "prog_io_item.m"
              parse_tree__prog_io_item__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 1321 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[126])));
#line 1321 "prog_io_item.m"
            }
#line 1321 "prog_io_item.m"
            {
#line 1321 "prog_io_item.m"
              parse_tree__prog_io_item__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1321 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_item__V_34_34));
#line 1321 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1321 "prog_io_item.m"
            }
#line 1320 "prog_io_item.m"
            {
#line 1320 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1320 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1320 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1320 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_item__V_33_33));
#line 1320 "prog_io_item.m"
            }
#line 1322 "prog_io_item.m"
            {
#line 1322 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1322 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_12));
#line 1322 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1322 "prog_io_item.m"
            }
#line 1322 "prog_io_item.m"
            {
#line 1322 "prog_io_item.m"
              MR_Word base;
#line 1322 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1322 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithInst_6 = base;
#line 1322 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1322 "prog_io_item.m"
            }
#line 1319 "prog_io_item.m"
          }
#line 1314 "prog_io_item.m"
      }
#line 1324 "prog_io_item.m"
    else
#line 1325 "prog_io_item.m"
      {
#line 1325 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithInstTerm_5 = parse_tree__prog_io_item__Term_4;
#line 1326 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeWithInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[18]);
#line 1325 "prog_io_item.m"
      }
#line 1324 "prog_io_item.m"
  }
#line 1306 "prog_io_item.m"
}

#line 1275 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(
#line 1275 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1275 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1275 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithTypeTerm_7,
#line 1275 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithType_8)
#line 1275 "prog_io_item.m"
{
#line 1299 "prog_io_item.m"
  {
#line 1299 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1299 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithTypeTermPrime_10;
#line 1299 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeTerm_11;
#line 1281 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeQualifier_9;
#line 1281 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 1281 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_18_18;
#line 1281 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1281 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_24_24;
#line 1280 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_12_12;

#line 1280 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1280 "prog_io_item.m"
      {
#line 1280 "prog_io_item.m"
        parse_tree__prog_io_item__TypeQualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 0)));
#line 1280 "prog_io_item.m"
        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 1)));
#line 1280 "prog_io_item.m"
        parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 2)));
#line 1281 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 1281 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1281 "prog_io_item.m"
          {
#line 1281 "prog_io_item.m"
            parse_tree__prog_io_item__BeforeWithTypeTermPrime_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_17_17, (MR_Integer) 0)));
#line 1281 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_17_17, (MR_Integer) 1)));
#line 1281 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 1281 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1281 "prog_io_item.m"
              {
#line 1281 "prog_io_item.m"
                parse_tree__prog_io_item__TypeTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1281 "prog_io_item.m"
                parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1281 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1281 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1281 "prog_io_item.m"
                  {
#line 1283 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__TypeQualifier_9)) == (MR_mktag((MR_Integer) 0)));
#line 1283 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1283 "prog_io_item.m"
                      {
#line 1283 "prog_io_item.m"
                        parse_tree__prog_io_item__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__TypeQualifier_9, (MR_Integer) 0)));
#line 1284 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__V_24_24, (MR_String) ":") == 0))
#line 1285 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1284 "prog_io_item.m"
                        else
#line 1284 "prog_io_item.m"
                          if ((strcmp(parse_tree__prog_io_item__V_24_24, (MR_String) "with_type") == 0))
#line 1283 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1284 "prog_io_item.m"
                          else
#line 1284 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 1283 "prog_io_item.m"
                      }
#line 1281 "prog_io_item.m"
                  }
#line 1281 "prog_io_item.m"
              }
#line 1281 "prog_io_item.m"
          }
#line 1280 "prog_io_item.m"
      }
#line 1299 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1288 "prog_io_item.m"
      {
#line 1288 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeType_14;

#line 1288 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithTypeTerm_7 = parse_tree__prog_io_item__BeforeWithTypeTermPrime_10;
#line 1291 "prog_io_item.m"
        {
#line 1291 "prog_io_item.m"
          parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_item__TypeTerm_11, parse_tree__prog_io_item__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__MaybeType_14);
        }
#line 1295 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
#line 1297 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeWithType_8 = (MR_Word) parse_tree__prog_io_item__MaybeType_14;
#line 1295 "prog_io_item.m"
        else
#line 1293 "prog_io_item.m"
          {
#line 1293 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeType_14, (MR_Integer) 0)));
#line 1293 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_22_22;

#line 1294 "prog_io_item.m"
            {
#line 1294 "prog_io_item.m"
              parse_tree__prog_io_item__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_15));
#line 1294 "prog_io_item.m"
            }
#line 1294 "prog_io_item.m"
            {
#line 1294 "prog_io_item.m"
              MR_Word base;
#line 1294 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithType_8 = base;
#line 1294 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_22_22));
#line 1294 "prog_io_item.m"
            }
#line 1293 "prog_io_item.m"
          }
#line 1288 "prog_io_item.m"
      }
#line 1299 "prog_io_item.m"
    else
#line 1300 "prog_io_item.m"
      {
#line 1300 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithTypeTerm_7 = parse_tree__prog_io_item__Term_6;
#line 1301 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeWithType_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[23]);
#line 1300 "prog_io_item.m"
      }
#line 1299 "prog_io_item.m"
  }
#line 1275 "prog_io_item.m"
}

#line 1246 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(
#line 1246 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1246 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1246 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeDetismTerm_7,
#line 1246 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeMaybeDetism_8)
#line 1246 "prog_io_item.m"
{
#line 1268 "prog_io_item.m"
  {
#line 1268 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1268 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTermPrime_11;
#line 1268 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DetismTerm_12;
#line 1251 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Args_9;
#line 1251 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1251 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_20_20;
#line 1251 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;
#line 1251 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_22_22;
#line 1251 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_10_10;

#line 1251 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1251 "prog_io_item.m"
      {
#line 1251 "prog_io_item.m"
        parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 0)));
#line 1251 "prog_io_item.m"
        parse_tree__prog_io_item__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 1)));
#line 1251 "prog_io_item.m"
        parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 2)));
#line 1251 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 1251 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1251 "prog_io_item.m"
          {
#line 1251 "prog_io_item.m"
            parse_tree__prog_io_item__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1251 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_20_20, (MR_String) "is") == 0);
#line 1251 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1251 "prog_io_item.m"
              {
#line 1252 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 1252 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1252 "prog_io_item.m"
                  {
#line 1252 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeDetismTermPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_9, (MR_Integer) 0)));
#line 1252 "prog_io_item.m"
                    parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_9, (MR_Integer) 1)));
#line 1252 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 1252 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1252 "prog_io_item.m"
                      {
#line 1252 "prog_io_item.m"
                        parse_tree__prog_io_item__DetismTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 1252 "prog_io_item.m"
                        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 1)));
#line 1252 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1252 "prog_io_item.m"
                      }
#line 1252 "prog_io_item.m"
                  }
#line 1251 "prog_io_item.m"
              }
#line 1251 "prog_io_item.m"
          }
#line 1251 "prog_io_item.m"
      }
#line 1268 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1254 "prog_io_item.m"
      {
#line 1260 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Detism_15;
#line 1256 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__DetismFunctor_13;
#line 1256 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 1256 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;
#line 1256 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_14_14;

#line 1254 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeDetismTerm_7 = parse_tree__prog_io_item__BeforeDetismTermPrime_11;
#line 1256 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__DetismTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 1256 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1256 "prog_io_item.m"
          {
#line 1256 "prog_io_item.m"
            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 0)));
#line 1256 "prog_io_item.m"
            parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 1)));
#line 1256 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 2)));
#line 1256 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1256 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1256 "prog_io_item.m"
              {
#line 1256 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 1256 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1256 "prog_io_item.m"
                  {
#line 1256 "prog_io_item.m"
                    parse_tree__prog_io_item__DetismFunctor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_23_23, (MR_Integer) 0)));
#line 1257 "prog_io_item.m"
                    {
#line 1257 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_item__DetismFunctor_13, &parse_tree__prog_io_item__Detism_15);
                    }
#line 1256 "prog_io_item.m"
                  }
#line 1256 "prog_io_item.m"
              }
#line 1256 "prog_io_item.m"
          }
#line 1260 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1259 "prog_io_item.m"
          {
#line 1259 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_25_25;

#line 1259 "prog_io_item.m"
            {
#line 1259 "prog_io_item.m"
              parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Detism_15));
#line 1259 "prog_io_item.m"
            }
#line 1259 "prog_io_item.m"
            {
#line 1259 "prog_io_item.m"
              MR_Word base;
#line 1259 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeMaybeDetism_8 = base;
#line 1259 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 1259 "prog_io_item.m"
            }
#line 1259 "prog_io_item.m"
          }
#line 1260 "prog_io_item.m"
        else
#line 1261 "prog_io_item.m"
          {
#line 1261 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1261 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__TermStr_16;
#line 1261 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Pieces_17;
#line 1261 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_18;
#line 1261 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_28_28;
#line 1261 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29;
#line 1261 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;
#line 1261 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_39_39;
#line 1261 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1261 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 1261 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_42_42;
#line 1261 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_45_45;

#line 1261 "prog_io_item.m"
            {
#line 1261 "prog_io_item.m"
              parse_tree__prog_io_item__TermStr_16 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_48_48, parse_tree__prog_io_item__VarSet_5, parse_tree__prog_io_item__Term_6);
            }
#line 1263 "prog_io_item.m"
            {
#line 1263 "prog_io_item.m"
              parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1263 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_16));
#line 1263 "prog_io_item.m"
            }
#line 1263 "prog_io_item.m"
            {
#line 1263 "prog_io_item.m"
              parse_tree__prog_io_item__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 1263 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 1263 "prog_io_item.m"
            }
#line 1262 "prog_io_item.m"
            {
#line 1262 "prog_io_item.m"
              parse_tree__prog_io_item__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[133])));
#line 1262 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_17, 1) = ((MR_Box) (parse_tree__prog_io_item__V_28_28));
#line 1262 "prog_io_item.m"
            }
#line 1265 "prog_io_item.m"
            {
#line 1265 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_48_48, parse_tree__prog_io_item__DetismTerm_12);
            }
#line 1265 "prog_io_item.m"
            {
#line 1265 "prog_io_item.m"
              parse_tree__prog_io_item__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_17));
#line 1265 "prog_io_item.m"
            }
#line 1265 "prog_io_item.m"
            {
#line 1265 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 1265 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1265 "prog_io_item.m"
            }
#line 1265 "prog_io_item.m"
            {
#line 1265 "prog_io_item.m"
              parse_tree__prog_io_item__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1265 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 1) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1265 "prog_io_item.m"
            }
#line 1265 "prog_io_item.m"
            {
#line 1265 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 1265 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1265 "prog_io_item.m"
            }
#line 1264 "prog_io_item.m"
            {
#line 1264 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1264 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1264 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1264 "prog_io_item.m"
            }
#line 1266 "prog_io_item.m"
            {
#line 1266 "prog_io_item.m"
              parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_18));
#line 1266 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1266 "prog_io_item.m"
            }
#line 1266 "prog_io_item.m"
            {
#line 1266 "prog_io_item.m"
              MR_Word base;
#line 1266 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1266 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeMaybeDetism_8 = base;
#line 1266 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_45_45));
#line 1266 "prog_io_item.m"
            }
#line 1261 "prog_io_item.m"
          }
#line 1254 "prog_io_item.m"
      }
#line 1268 "prog_io_item.m"
    else
#line 1269 "prog_io_item.m"
      {
#line 1269 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeDetismTerm_7 = parse_tree__prog_io_item__Term_6;
#line 1270 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeMaybeDetism_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[22]);
#line 1269 "prog_io_item.m"
      }
#line 1268 "prog_io_item.m"
  }
#line 1246 "prog_io_item.m"
}

#line 1158 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_constraints_6_p_0(
#line 1158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23,
#line 1158 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24,
#line 1158 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeClassInstConstraints_11)
#line 1158 "prog_io_item.m"
{
#line 1190 "prog_io_item.m"
  {
#line 1190 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23)) == (MR_mktag((MR_Integer) 1)));
#line 1190 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConstraintsTerm_12;
#line 1190 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25;
#line 1165 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_26_26;
#line 1165 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_27_27;
#line 1165 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_41_41;
#line 1166 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___Term_13;

#line 1167 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1167 "prog_io_item.m"
      {
#line 1167 "prog_io_item.m"
        parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23, (MR_Integer) 0)));
#line 1167 "prog_io_item.m"
        parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23, (MR_Integer) 1)));
#line 1166 "prog_io_item.m"
        parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 0)));
#line 1166 "prog_io_item.m"
        parse_tree__prog_io_item___Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 1)));
#line 1166 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_27_27)) == (MR_mktag((MR_Integer) 3)));
#line 1166 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1166 "prog_io_item.m"
          {
#line 1166 "prog_io_item.m"
            parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_27_27, (MR_Integer) 0)));
#line 1166 "prog_io_item.m"
            parse_tree__prog_io_item__ConstraintsTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_27_27, (MR_Integer) 1)));
#line 1166 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__QuantType_7 == parse_tree__prog_io_item__V_41_41);
#line 1166 "prog_io_item.m"
          }
#line 1167 "prog_io_item.m"
      }
#line 1190 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1170 "prog_io_item.m"
      {
#line 1170 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeHeadConstraints_14;
#line 1170 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeTailConstraints_15;
#line 1185 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadClassConstraints_16;
#line 1185 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadInstConstraint_17;
#line 1185 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TailClassConstraints_18;
#line 1185 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TailInstConstraint_19;

#line 1169 "prog_io_item.m"
        {
#line 1169 "prog_io_item.m"
          parse_tree__prog_io_typeclass__parse_class_and_inst_constraints_4_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ConstraintsTerm_12, &parse_tree__prog_io_item__MaybeHeadConstraints_14);
        }
#line 1173 "prog_io_item.m"
        {
#line 1173 "prog_io_item.m"
          parse_tree__prog_io_item__get_constraints_6_p_0(parse_tree__prog_io_item__QuantType_7, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24, &parse_tree__prog_io_item__MaybeTailConstraints_15);
        }
#line 1176 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeHeadConstraints_14)) == (MR_mktag((MR_Integer) 1)));
#line 1176 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1176 "prog_io_item.m"
          {
#line 1176 "prog_io_item.m"
            parse_tree__prog_io_item__HeadClassConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeHeadConstraints_14, (MR_Integer) 0)));
#line 1176 "prog_io_item.m"
            parse_tree__prog_io_item__HeadInstConstraint_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeHeadConstraints_14, (MR_Integer) 1)));
#line 1178 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeTailConstraints_15)) == (MR_mktag((MR_Integer) 1)));
#line 1178 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1178 "prog_io_item.m"
              {
#line 1178 "prog_io_item.m"
                parse_tree__prog_io_item__TailClassConstraints_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeTailConstraints_15, (MR_Integer) 0)));
#line 1178 "prog_io_item.m"
                parse_tree__prog_io_item__TailInstConstraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeTailConstraints_15, (MR_Integer) 1)));
#line 1178 "prog_io_item.m"
              }
#line 1176 "prog_io_item.m"
          }
#line 1185 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1181 "prog_io_item.m"
          {
#line 1181 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ClassConstraints_20;
#line 1181 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_21;

#line 1181 "prog_io_item.m"
            {
#line 1181 "prog_io_item.m"
              parse_tree__prog_io_item__ClassConstraints_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, parse_tree__prog_io_item__HeadClassConstraints_16, parse_tree__prog_io_item__TailClassConstraints_18);
            }
#line 1182 "prog_io_item.m"
            {
#line 1182 "prog_io_item.m"
              parse_tree__prog_io_item__InstConstraints_21 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_item__HeadInstConstraint_17, parse_tree__prog_io_item__TailInstConstraint_19);
            }
#line 1184 "prog_io_item.m"
            {
#line 1184 "prog_io_item.m"
              MR_Word base;
#line 1184 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1184 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ClassConstraints_20));
#line 1184 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_21));
#line 1184 "prog_io_item.m"
            }
#line 1181 "prog_io_item.m"
          }
#line 1185 "prog_io_item.m"
        else
#line 1187 "prog_io_item.m"
          {
#line 1187 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeInfo_37_37 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[9];
#line 1187 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeInfo_38_38 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[1];
#line 1187 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_22;
#line 1187 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29;
#line 1187 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_30_30;

#line 1186 "prog_io_item.m"
            {
#line 1186 "prog_io_item.m"
              parse_tree__prog_io_item__V_29_29 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__TypeInfo_38_38, parse_tree__prog_io_item__MaybeHeadConstraints_14);
            }
#line 1187 "prog_io_item.m"
            {
#line 1187 "prog_io_item.m"
              parse_tree__prog_io_item__V_30_30 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__TypeInfo_38_38, parse_tree__prog_io_item__MaybeTailConstraints_15);
            }
#line 1186 "prog_io_item.m"
            {
#line 1186 "prog_io_item.m"
              parse_tree__prog_io_item__Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_29_29, parse_tree__prog_io_item__V_30_30);
            }
#line 1188 "prog_io_item.m"
            {
#line 1188 "prog_io_item.m"
              MR_Word base;
#line 1188 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1188 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_22));
#line 1188 "prog_io_item.m"
            }
#line 1187 "prog_io_item.m"
          }
#line 1170 "prog_io_item.m"
      }
#line 1190 "prog_io_item.m"
    else
#line 1191 "prog_io_item.m"
      {
#line 1191 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_32_32;

#line 1191 "prog_io_item.m"
        {
#line 1191 "prog_io_item.m"
          parse_tree__prog_io_item__V_32_32 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        }
#line 1191 "prog_io_item.m"
        {
#line 1191 "prog_io_item.m"
          MR_Word base;
#line 1191 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1191 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1191 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 1191 "prog_io_item.m"
        }
#line 1191 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23;
#line 1191 "prog_io_item.m"
      }
#line 1190 "prog_io_item.m"
  }
#line 1158 "prog_io_item.m"
}

#line 1136 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0_1(
#line 1136 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1136 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1136 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1136 "prog_io_item.m"
{
#line 1136 "prog_io_item.m"
  {
#line 1136 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1136 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_39;

#line 1136 "prog_io_item.m"
    {
#line 1136 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1136__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_39);
    }
#line 1136 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_39));
#line 1136 "prog_io_item.m"
  }
#line 1136 "prog_io_item.m"
}

#line 1093 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(
#line 1093 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 1093 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 1093 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RevAttributes0_8,
#line 1093 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__RevAttributes_9,
#line 1093 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeExistClassInstContext_10)
#line 1093 "prog_io_item.m"
{
#line 1098 "prog_io_item.m"
  {
#line 1098 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1098 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeInfo_37_37 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[0];
#line 1098 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes0_11;
#line 1098 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes1_12;
#line 1098 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes2_14;
#line 1098 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVars0_15;
#line 1098 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVars_16;
#line 1098 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes3_17;
#line 1098 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeUnivConstraints_18;
#line 1098 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes_19;
#line 1098 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeExistConstraints_20;
#line 1132 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___UnivQVars_13;
#line 1152 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__UnivConstraints_21;
#line 1152 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__UnivInstConstraints_22;
#line 1152 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistConstraints_23;
#line 1152 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistInstConstraints_24;

#line 1131 "prog_io_item.m"
    {
#line 1131 "prog_io_item.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__RevAttributes0_8, &parse_tree__prog_io_item__Attributes0_11);
    }
#line 1132 "prog_io_item.m"
    {
#line 1132 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__Attributes0_11, &parse_tree__prog_io_item__Attributes1_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item___UnivQVars_13);
    }
#line 1134 "prog_io_item.m"
    {
#line 1134 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 0, parse_tree__prog_io_item__Attributes1_12, &parse_tree__prog_io_item__Attributes2_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__ExistQVars0_15);
    }
#line 1136 "prog_io_item.m"
    {
#line 1136 "prog_io_item.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[7], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[4], parse_tree__prog_io_item__ExistQVars0_15, &parse_tree__prog_io_item__ExistQVars_16);
    }
#line 1137 "prog_io_item.m"
    {
#line 1137 "prog_io_item.m"
      parse_tree__prog_io_item__get_constraints_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Attributes2_14, &parse_tree__prog_io_item__Attributes3_17, &parse_tree__prog_io_item__MaybeUnivConstraints_18);
    }
#line 1139 "prog_io_item.m"
    {
#line 1139 "prog_io_item.m"
      parse_tree__prog_io_item__get_constraints_6_p_0((MR_Integer) 0, parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Attributes3_17, &parse_tree__prog_io_item__Attributes_19, &parse_tree__prog_io_item__MaybeExistConstraints_20);
    }
#line 1141 "prog_io_item.m"
    {
#line 1141 "prog_io_item.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__Attributes_19, parse_tree__prog_io_item__RevAttributes_9);
    }
#line 1144 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeUnivConstraints_18)) == (MR_mktag((MR_Integer) 1)));
#line 1144 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1144 "prog_io_item.m"
      {
#line 1144 "prog_io_item.m"
        parse_tree__prog_io_item__UnivConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeUnivConstraints_18, (MR_Integer) 0)));
#line 1144 "prog_io_item.m"
        parse_tree__prog_io_item__UnivInstConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeUnivConstraints_18, (MR_Integer) 1)));
#line 1145 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeExistConstraints_20)) == (MR_mktag((MR_Integer) 1)));
#line 1145 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1145 "prog_io_item.m"
          {
#line 1145 "prog_io_item.m"
            parse_tree__prog_io_item__ExistConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistConstraints_20, (MR_Integer) 0)));
#line 1145 "prog_io_item.m"
            parse_tree__prog_io_item__ExistInstConstraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistConstraints_20, (MR_Integer) 1)));
#line 1145 "prog_io_item.m"
          }
#line 1144 "prog_io_item.m"
      }
#line 1152 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1147 "prog_io_item.m"
      {
#line 1147 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ClassConstraints_25;
#line 1147 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_26;

#line 1147 "prog_io_item.m"
        {
#line 1147 "prog_io_item.m"
          parse_tree__prog_io_item__ClassConstraints_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassConstraints_25, 0) = ((MR_Box) (parse_tree__prog_io_item__UnivConstraints_21));
#line 1147 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassConstraints_25, 1) = ((MR_Box) (parse_tree__prog_io_item__ExistConstraints_23));
#line 1147 "prog_io_item.m"
        }
#line 1148 "prog_io_item.m"
        {
#line 1148 "prog_io_item.m"
          parse_tree__prog_io_item__InstConstraints_26 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_item__UnivInstConstraints_22, parse_tree__prog_io_item__ExistInstConstraints_24);
        }
#line 1150 "prog_io_item.m"
        {
#line 1150 "prog_io_item.m"
          MR_Word base;
#line 1150 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeExistClassInstContext_10 = base;
#line 1150 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_16));
#line 1150 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__ClassConstraints_25));
#line 1150 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_26));
#line 1150 "prog_io_item.m"
        }
#line 1147 "prog_io_item.m"
      }
#line 1152 "prog_io_item.m"
    else
#line 1154 "prog_io_item.m"
      {
#line 1154 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeInfo_47_47 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[9];
#line 1154 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeInfo_48_48 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[1];
#line 1154 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_27;
#line 1154 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1154 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;

#line 1153 "prog_io_item.m"
        {
#line 1153 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_47_47, parse_tree__prog_io_item__TypeInfo_48_48, parse_tree__prog_io_item__MaybeUnivConstraints_18);
        }
#line 1154 "prog_io_item.m"
        {
#line 1154 "prog_io_item.m"
          parse_tree__prog_io_item__V_36_36 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_47_47, parse_tree__prog_io_item__TypeInfo_48_48, parse_tree__prog_io_item__MaybeExistConstraints_20);
        }
#line 1153 "prog_io_item.m"
        {
#line 1153 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_35_35, parse_tree__prog_io_item__V_36_36);
        }
#line 1155 "prog_io_item.m"
        {
#line 1155 "prog_io_item.m"
          MR_Word base;
#line 1155 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1155 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeExistClassInstContext_10 = base;
#line 1155 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_27));
#line 1155 "prog_io_item.m"
        }
#line 1154 "prog_io_item.m"
      }
#line 1098 "prog_io_item.m"
  }
#line 1093 "prog_io_item.m"
}

#line 1022 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1(
#line 1022 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1022 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1022 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1022 "prog_io_item.m"
{
#line 1022 "prog_io_item.m"
  {
#line 1022 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1022 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__3_3;

#line 1022 "prog_io_item.m"
    {
#line 1022 "prog_io_item.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__3_3);
    }
#line 1022 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__3_3));
#line 1022 "prog_io_item.m"
  }
#line 1022 "prog_io_item.m"
}

#line 1011 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_16,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_17,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_18,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_20,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 1011 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 1011 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 1011 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24)
#line 1011 "prog_io_item.m"
{
#line 1064 "prog_io_item.m"
  {
#line 1064 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1064 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgModes0_25;

#line 1017 "prog_io_item.m"
    {
#line 1017 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__ArgTerms_14, &parse_tree__prog_io_item__ArgModes0_25);
    }
#line 1064 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1019 "prog_io_item.m"
      {
#line 1019 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_26;
#line 1019 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeConstraints_27;

#line 1018 "prog_io_item.m"
        {
#line 1018 "prog_io_item.m"
          parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_15, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__Attributes0_21, &parse_tree__prog_io_item__Attributes_26, &parse_tree__prog_io_item__MaybeConstraints_27);
        }
#line 1060 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_27)) == (MR_mktag((MR_Integer) 0))))
#line 1061 "prog_io_item.m"
          {
#line 1061 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 0)));

#line 1062 "prog_io_item.m"
            {
#line 1062 "prog_io_item.m"
              MR_Word base;
#line 1062 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1062 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1062 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_42));
#line 1062 "prog_io_item.m"
            }
#line 1061 "prog_io_item.m"
          }
#line 1060 "prog_io_item.m"
        else
#line 1021 "prog_io_item.m"
          {
#line 1021 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_130_130;
#line 1021 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 2)));
#line 1021 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgModes_31;
#line 1021 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_45_45;
#line 1021 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 0)));
#line 1021 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 1)));
#line 1052 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__RetMode0_32;

#line 1022 "prog_io_item.m"
            {
#line 1022 "prog_io_item.m"
              parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1022 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[1]));
#line 1022 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1));
#line 1022 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1022 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 3) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_30));
#line 1022 "prog_io_item.m"
            }
#line 5414 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1022 "prog_io_item.m"
            {
#line 1022 "prog_io_item.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_130_130, parse_tree__prog_io_item__TypeCtorInfo_130_130, parse_tree__prog_io_item__V_45_45, parse_tree__prog_io_item__ArgModes0_25, &parse_tree__prog_io_item__ArgModes_31);
            }
#line 1025 "prog_io_item.m"
            {
#line 1025 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__RetModeTerm_17, &parse_tree__prog_io_item__RetMode0_32);
            }
#line 1052 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1028 "prog_io_item.m"
              {
#line 1028 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeCtorInfo_131_131;
#line 1028 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__RetMode_33;
#line 1028 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__InstVarSet_34;
#line 1028 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgReturnModes_35;
#line 1028 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_47_47;

#line 1027 "prog_io_item.m"
                {
#line 1027 "prog_io_item.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_30, parse_tree__prog_io_item__RetMode0_32, &parse_tree__prog_io_item__RetMode_33);
                }
#line 5446 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_131_131 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1029 "prog_io_item.m"
                {
#line 1029 "prog_io_item.m"
                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_131_131, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__InstVarSet_34);
                }
#line 1030 "prog_io_item.m"
                {
#line 1030 "prog_io_item.m"
                  parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__RetMode_33));
#line 1030 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1030 "prog_io_item.m"
                }
#line 1030 "prog_io_item.m"
                {
#line 1030 "prog_io_item.m"
                  parse_tree__prog_io_item__ArgReturnModes_35 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_130_130, parse_tree__prog_io_item__ArgModes_31, parse_tree__prog_io_item__V_47_47);
                }
#line 1032 "prog_io_item.m"
                {
#line 1032 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io_item__ArgReturnModes_35);
                }
#line 1041 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1037 "prog_io_item.m"
                  {
#line 1037 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ItemModeDecl_36;
#line 1037 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Item_37;
#line 1037 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__MaybeItem0_38;

#line 1035 "prog_io_item.m"
                    {
#line 1035 "prog_io_item.m"
                      parse_tree__prog_io_item__ItemModeDecl_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1035 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 0) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_34));
#line 1035 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[20])));
#line 1035 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 2) = ((MR_Box) (parse_tree__prog_io_item__Functor_13));
#line 1035 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 3) = ((MR_Box) (parse_tree__prog_io_item__ArgReturnModes_35));
#line 1035 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1035 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_20));
#line 1035 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_22));
#line 1035 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_23));
#line 1035 "prog_io_item.m"
                    }
#line 1038 "prog_io_item.m"
                    {
#line 1038 "prog_io_item.m"
                      parse_tree__prog_io_item__Item_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1038 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_37, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemModeDecl_36));
#line 1038 "prog_io_item.m"
                    }
#line 1039 "prog_io_item.m"
                    {
#line 1039 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeItem0_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_38, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_37));
#line 1039 "prog_io_item.m"
                    }
#line 1040 "prog_io_item.m"
                    {
#line 1040 "prog_io_item.m"
                      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_38, parse_tree__prog_io_item__Attributes_26, parse_tree__prog_io_item__MaybeItem_24);
#line 1040 "prog_io_item.m"
                      return;
                    }
#line 1037 "prog_io_item.m"
                  }
#line 1041 "prog_io_item.m"
                else
#line 1042 "prog_io_item.m"
                  {
#line 1042 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__FullTermStr_39;
#line 1042 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Pieces_40;
#line 1042 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_41;
#line 1042 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_54_54;
#line 1042 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_57_57;
#line 1042 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_60_60;
#line 1042 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_62_62;
#line 1042 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_63_63;
#line 1042 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_72_72;
#line 1042 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_73_73;
#line 1042 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_74_74;
#line 1042 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_75_75;
#line 1042 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_76_76;
#line 1042 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_79_79;

#line 1042 "prog_io_item.m"
                    {
#line 1042 "prog_io_item.m"
                      parse_tree__prog_io_item__FullTermStr_39 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_131_131, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__FullTerm_18);
                    }
#line 1046 "prog_io_item.m"
                    {
#line 1046 "prog_io_item.m"
                      parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1046 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_item__FullTermStr_39));
#line 1046 "prog_io_item.m"
                    }
#line 1046 "prog_io_item.m"
                    {
#line 1046 "prog_io_item.m"
                      parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 1046 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 1046 "prog_io_item.m"
                    }
#line 1045 "prog_io_item.m"
                    {
#line 1045 "prog_io_item.m"
                      parse_tree__prog_io_item__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1045 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 1045 "prog_io_item.m"
                    }
#line 1045 "prog_io_item.m"
                    {
#line 1045 "prog_io_item.m"
                      parse_tree__prog_io_item__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[130])));
#line 1045 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_item__V_60_60));
#line 1045 "prog_io_item.m"
                    }
#line 1044 "prog_io_item.m"
                    {
#line 1044 "prog_io_item.m"
                      parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[127])));
#line 1044 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_item__V_57_57));
#line 1044 "prog_io_item.m"
                    }
#line 1043 "prog_io_item.m"
                    {
#line 1043 "prog_io_item.m"
                      parse_tree__prog_io_item__Pieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[124])));
#line 1043 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_40, 1) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 1043 "prog_io_item.m"
                    }
#line 1048 "prog_io_item.m"
                    {
#line 1048 "prog_io_item.m"
                      parse_tree__prog_io_item__V_74_74 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_131_131, parse_tree__prog_io_item__FullTerm_18);
                    }
#line 1049 "prog_io_item.m"
                    {
#line 1049 "prog_io_item.m"
                      parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_40));
#line 1049 "prog_io_item.m"
                    }
#line 1049 "prog_io_item.m"
                    {
#line 1049 "prog_io_item.m"
                      parse_tree__prog_io_item__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 1049 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1049 "prog_io_item.m"
                    }
#line 1048 "prog_io_item.m"
                    {
#line 1048 "prog_io_item.m"
                      parse_tree__prog_io_item__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_item__V_74_74));
#line 1048 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_item__V_75_75));
#line 1048 "prog_io_item.m"
                    }
#line 1049 "prog_io_item.m"
                    {
#line 1049 "prog_io_item.m"
                      parse_tree__prog_io_item__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_item__V_73_73));
#line 1049 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1049 "prog_io_item.m"
                    }
#line 1047 "prog_io_item.m"
                    {
#line 1047 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1047 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1047 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1047 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 2) = ((MR_Box) (parse_tree__prog_io_item__V_72_72));
#line 1047 "prog_io_item.m"
                    }
#line 1050 "prog_io_item.m"
                    {
#line 1050 "prog_io_item.m"
                      parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_41));
#line 1050 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1050 "prog_io_item.m"
                    }
#line 1050 "prog_io_item.m"
                    {
#line 1050 "prog_io_item.m"
                      MR_Word base;
#line 1050 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1050 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1050 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 1050 "prog_io_item.m"
                    }
#line 1042 "prog_io_item.m"
                  }
#line 1028 "prog_io_item.m"
              }
#line 1052 "prog_io_item.m"
            else
#line 1054 "prog_io_item.m"
              {
#line 1054 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_91_91;
#line 1054 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_92_92;
#line 1054 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_93_93;
#line 1054 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_98_98;
#line 1054 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_125;

#line 1056 "prog_io_item.m"
                {
#line 1056 "prog_io_item.m"
                  parse_tree__prog_io_item__V_93_93 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__RetModeTerm_17);
                }
#line 1056 "prog_io_item.m"
                {
#line 1056 "prog_io_item.m"
                  parse_tree__prog_io_item__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1056 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_item__V_93_93));
#line 1056 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[131])));
#line 1056 "prog_io_item.m"
                }
#line 1057 "prog_io_item.m"
                {
#line 1057 "prog_io_item.m"
                  parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 1057 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1057 "prog_io_item.m"
                }
#line 1055 "prog_io_item.m"
                {
#line 1055 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1055 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1055 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1055 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_125, 2) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1055 "prog_io_item.m"
                }
#line 1058 "prog_io_item.m"
                {
#line 1058 "prog_io_item.m"
                  parse_tree__prog_io_item__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_125));
#line 1058 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1058 "prog_io_item.m"
                }
#line 1058 "prog_io_item.m"
                {
#line 1058 "prog_io_item.m"
                  MR_Word base;
#line 1058 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1058 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_98_98));
#line 1058 "prog_io_item.m"
                }
#line 1054 "prog_io_item.m"
              }
#line 1021 "prog_io_item.m"
          }
#line 1019 "prog_io_item.m"
      }
#line 1064 "prog_io_item.m"
    else
#line 1066 "prog_io_item.m"
      {
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_135_135 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1066 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__FuncModeStr_43;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_102_102;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_105_105;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_106_106;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_115_115;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_116_116;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_117_117;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_118_118;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_119_119;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_122_122;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_126;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_127;

#line 1066 "prog_io_item.m"
        {
#line 1066 "prog_io_item.m"
          parse_tree__prog_io_item__FuncModeStr_43 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_135_135, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__FuncMode_16);
        }
#line 1069 "prog_io_item.m"
        {
#line 1069 "prog_io_item.m"
          parse_tree__prog_io_item__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1069 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_106_106, 1) = ((MR_Box) (parse_tree__prog_io_item__FuncModeStr_43));
#line 1069 "prog_io_item.m"
        }
#line 1069 "prog_io_item.m"
        {
#line 1069 "prog_io_item.m"
          parse_tree__prog_io_item__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_105_105, 0) = ((MR_Box) (parse_tree__prog_io_item__V_106_106));
#line 1069 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 1069 "prog_io_item.m"
        }
#line 1068 "prog_io_item.m"
        {
#line 1068 "prog_io_item.m"
          parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[132])));
#line 1068 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (parse_tree__prog_io_item__V_105_105));
#line 1068 "prog_io_item.m"
        }
#line 1067 "prog_io_item.m"
        {
#line 1067 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[116])));
#line 1067 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_126, 1) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 1067 "prog_io_item.m"
        }
#line 1071 "prog_io_item.m"
        {
#line 1071 "prog_io_item.m"
          parse_tree__prog_io_item__V_117_117 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_135_135, parse_tree__prog_io_item__FuncMode_16);
        }
#line 1071 "prog_io_item.m"
        {
#line 1071 "prog_io_item.m"
          parse_tree__prog_io_item__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_119_119, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_126));
#line 1071 "prog_io_item.m"
        }
#line 1071 "prog_io_item.m"
        {
#line 1071 "prog_io_item.m"
          parse_tree__prog_io_item__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_118_118, 0) = ((MR_Box) (parse_tree__prog_io_item__V_119_119));
#line 1071 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1071 "prog_io_item.m"
        }
#line 1071 "prog_io_item.m"
        {
#line 1071 "prog_io_item.m"
          parse_tree__prog_io_item__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_item__V_117_117));
#line 1071 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_116_116, 1) = ((MR_Box) (parse_tree__prog_io_item__V_118_118));
#line 1071 "prog_io_item.m"
        }
#line 1071 "prog_io_item.m"
        {
#line 1071 "prog_io_item.m"
          parse_tree__prog_io_item__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io_item__V_116_116));
#line 1071 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1071 "prog_io_item.m"
        }
#line 1070 "prog_io_item.m"
        {
#line 1070 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1070 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1070 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1070 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 2) = ((MR_Box) (parse_tree__prog_io_item__V_115_115));
#line 1070 "prog_io_item.m"
        }
#line 1072 "prog_io_item.m"
        {
#line 1072 "prog_io_item.m"
          parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_127));
#line 1072 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1072 "prog_io_item.m"
        }
#line 1072 "prog_io_item.m"
        {
#line 1072 "prog_io_item.m"
          MR_Word base;
#line 1072 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1072 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1072 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 1072 "prog_io_item.m"
        }
#line 1066 "prog_io_item.m"
      }
#line 1064 "prog_io_item.m"
  }
#line 1011 "prog_io_item.m"
}

#line 969 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1(
#line 969 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 969 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 969 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 969 "prog_io_item.m"
{
#line 969 "prog_io_item.m"
  {
#line 969 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 969 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__3_3;

#line 969 "prog_io_item.m"
    {
#line 969 "prog_io_item.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__3_3);
    }
#line 969 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__3_3));
#line 969 "prog_io_item.m"
  }
#line 969 "prog_io_item.m"
}

#line 958 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_12,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_13,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_15,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_16,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 958 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 958 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 958 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22)
#line 958 "prog_io_item.m"
{
#line 1002 "prog_io_item.m"
  {
#line 1002 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1002 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgModes0_23;

#line 964 "prog_io_item.m"
    {
#line 964 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__ArgTerms_13, &parse_tree__prog_io_item__ArgModes0_23);
    }
#line 1002 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 966 "prog_io_item.m"
      {
#line 966 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_24;
#line 966 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeConstraints_25;

#line 965 "prog_io_item.m"
        {
#line 965 "prog_io_item.m"
          parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_14, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__Attributes0_19, &parse_tree__prog_io_item__Attributes_24, &parse_tree__prog_io_item__MaybeConstraints_25);
        }
#line 998 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_25)) == (MR_mktag((MR_Integer) 0))))
#line 999 "prog_io_item.m"
          {
#line 999 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 0)));

#line 1000 "prog_io_item.m"
            {
#line 1000 "prog_io_item.m"
              MR_Word base;
#line 1000 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 1000 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_39));
#line 1000 "prog_io_item.m"
            }
#line 999 "prog_io_item.m"
          }
#line 998 "prog_io_item.m"
        else
#line 968 "prog_io_item.m"
          {
#line 968 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_104_104;
#line 968 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_105_105;
#line 968 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 2)));
#line 968 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgModes_29;
#line 968 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ProgVarSet_30;
#line 968 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 968 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 0)));
#line 968 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 1)));

#line 969 "prog_io_item.m"
            {
#line 969 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 969 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[1]));
#line 969 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1));
#line 969 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 969 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 3) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_28));
#line 969 "prog_io_item.m"
            }
#line 6091 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 969 "prog_io_item.m"
            {
#line 969 "prog_io_item.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_104_104, parse_tree__prog_io_item__TypeCtorInfo_104_104, parse_tree__prog_io_item__V_41_41, parse_tree__prog_io_item__ArgModes0_23, &parse_tree__prog_io_item__ArgModes_29);
            }
#line 6098 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_105_105 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 971 "prog_io_item.m"
            {
#line 971 "prog_io_item.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_16, &parse_tree__prog_io_item__ProgVarSet_30);
            }
#line 972 "prog_io_item.m"
            {
#line 972 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io_item__ArgModes_29);
            }
#line 987 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 981 "prog_io_item.m"
              {
#line 981 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__PredOrFunc_31;
#line 981 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemModeDecl_33;
#line 981 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_34;
#line 981 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeItem0_35;

#line 976 "prog_io_item.m"
                if ((parse_tree__prog_io_item__WithInst_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 974 "prog_io_item.m"
                  {
#line 975 "prog_io_item.m"
                    parse_tree__prog_io_item__PredOrFunc_31 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[19]);
#line 974 "prog_io_item.m"
                  }
#line 976 "prog_io_item.m"
                else
#line 980 "prog_io_item.m"
                  parse_tree__prog_io_item__PredOrFunc_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 982 "prog_io_item.m"
                {
#line 982 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemModeDecl_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 982 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 0) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_30));
#line 982 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 1) = ((MR_Box) (parse_tree__prog_io_item__PredOrFunc_31));
#line 982 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 2) = ((MR_Box) (parse_tree__prog_io_item__Functor_12));
#line 982 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 3) = ((MR_Box) (parse_tree__prog_io_item__ArgModes_29));
#line 982 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 4) = ((MR_Box) (parse_tree__prog_io_item__WithInst_17));
#line 982 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_18));
#line 982 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_20));
#line 982 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_21));
#line 982 "prog_io_item.m"
                }
#line 984 "prog_io_item.m"
                {
#line 984 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 984 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_34, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemModeDecl_33));
#line 984 "prog_io_item.m"
                }
#line 985 "prog_io_item.m"
                {
#line 985 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybeItem0_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 985 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_35, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_34));
#line 985 "prog_io_item.m"
                }
#line 986 "prog_io_item.m"
                {
#line 986 "prog_io_item.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_35, parse_tree__prog_io_item__Attributes_24, parse_tree__prog_io_item__MaybeItem_22);
#line 986 "prog_io_item.m"
                  return;
                }
#line 981 "prog_io_item.m"
              }
#line 987 "prog_io_item.m"
            else
#line 988 "prog_io_item.m"
              {
#line 988 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredModeTermStr_36;
#line 988 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_37;
#line 988 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_38;
#line 988 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_45_45;
#line 988 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_48_48;
#line 988 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_51_51;
#line 988 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_53_53;
#line 988 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_54_54;
#line 988 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_63_63;
#line 988 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_64_64;
#line 988 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_65_65;
#line 988 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_66_66;
#line 988 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_67_67;
#line 988 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_70_70;

#line 988 "prog_io_item.m"
                {
#line 988 "prog_io_item.m"
                  parse_tree__prog_io_item__PredModeTermStr_36 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__PredModeTerm_15);
                }
#line 992 "prog_io_item.m"
                {
#line 992 "prog_io_item.m"
                  parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 992 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 992 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_36));
#line 992 "prog_io_item.m"
                }
#line 992 "prog_io_item.m"
                {
#line 992 "prog_io_item.m"
                  parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 992 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 992 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 992 "prog_io_item.m"
                }
#line 991 "prog_io_item.m"
                {
#line 991 "prog_io_item.m"
                  parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 991 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 991 "prog_io_item.m"
                }
#line 991 "prog_io_item.m"
                {
#line 991 "prog_io_item.m"
                  parse_tree__prog_io_item__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[128])));
#line 991 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 1) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 991 "prog_io_item.m"
                }
#line 990 "prog_io_item.m"
                {
#line 990 "prog_io_item.m"
                  parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[127])));
#line 990 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_item__V_48_48));
#line 990 "prog_io_item.m"
                }
#line 989 "prog_io_item.m"
                {
#line 989 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 989 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[124])));
#line 989 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_37, 1) = ((MR_Box) (parse_tree__prog_io_item__V_45_45));
#line 989 "prog_io_item.m"
                }
#line 994 "prog_io_item.m"
                {
#line 994 "prog_io_item.m"
                  parse_tree__prog_io_item__V_65_65 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, parse_tree__prog_io_item__PredModeTerm_15);
                }
#line 995 "prog_io_item.m"
                {
#line 995 "prog_io_item.m"
                  parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 995 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_37));
#line 995 "prog_io_item.m"
                }
#line 995 "prog_io_item.m"
                {
#line 995 "prog_io_item.m"
                  parse_tree__prog_io_item__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 995 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 995 "prog_io_item.m"
                }
#line 994 "prog_io_item.m"
                {
#line 994 "prog_io_item.m"
                  parse_tree__prog_io_item__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 994 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_item__V_65_65));
#line 994 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_item__V_66_66));
#line 994 "prog_io_item.m"
                }
#line 995 "prog_io_item.m"
                {
#line 995 "prog_io_item.m"
                  parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__V_64_64));
#line 995 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 995 "prog_io_item.m"
                }
#line 993 "prog_io_item.m"
                {
#line 993 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 993 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 993 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 993 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 993 "prog_io_item.m"
                }
#line 996 "prog_io_item.m"
                {
#line 996 "prog_io_item.m"
                  parse_tree__prog_io_item__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_38));
#line 996 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "prog_io_item.m"
                }
#line 996 "prog_io_item.m"
                {
#line 996 "prog_io_item.m"
                  MR_Word base;
#line 996 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 996 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 996 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 996 "prog_io_item.m"
                }
#line 988 "prog_io_item.m"
              }
#line 968 "prog_io_item.m"
          }
#line 966 "prog_io_item.m"
      }
#line 1002 "prog_io_item.m"
    else
#line 1003 "prog_io_item.m"
      {
#line 1003 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_108_108 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1003 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_74_74;
#line 1003 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_77_77;
#line 1003 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_80_80;
#line 1003 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_81_81;
#line 1003 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_90_90;
#line 1003 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_91_91;
#line 1003 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_92_92;
#line 1003 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_93_93;
#line 1003 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_94_94;
#line 1003 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_97_97;
#line 1003 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__PredModeTermStr_99;
#line 1003 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_100;
#line 1003 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_101;

#line 1003 "prog_io_item.m"
        {
#line 1003 "prog_io_item.m"
          parse_tree__prog_io_item__PredModeTermStr_99 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_108_108, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__PredModeTerm_15);
        }
#line 1005 "prog_io_item.m"
        {
#line 1005 "prog_io_item.m"
          parse_tree__prog_io_item__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1005 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_81_81, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_99));
#line 1005 "prog_io_item.m"
        }
#line 1005 "prog_io_item.m"
        {
#line 1005 "prog_io_item.m"
          parse_tree__prog_io_item__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_item__V_81_81));
#line 1005 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 1005 "prog_io_item.m"
        }
#line 1005 "prog_io_item.m"
        {
#line 1005 "prog_io_item.m"
          parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[118])));
#line 1005 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 1005 "prog_io_item.m"
        }
#line 1004 "prog_io_item.m"
        {
#line 1004 "prog_io_item.m"
          parse_tree__prog_io_item__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[129])));
#line 1004 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 1004 "prog_io_item.m"
        }
#line 1004 "prog_io_item.m"
        {
#line 1004 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[113])));
#line 1004 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_100, 1) = ((MR_Box) (parse_tree__prog_io_item__V_74_74));
#line 1004 "prog_io_item.m"
        }
#line 1007 "prog_io_item.m"
        {
#line 1007 "prog_io_item.m"
          parse_tree__prog_io_item__V_92_92 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_108_108, parse_tree__prog_io_item__PredModeTerm_15);
        }
#line 1007 "prog_io_item.m"
        {
#line 1007 "prog_io_item.m"
          parse_tree__prog_io_item__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_100));
#line 1007 "prog_io_item.m"
        }
#line 1007 "prog_io_item.m"
        {
#line 1007 "prog_io_item.m"
          parse_tree__prog_io_item__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_item__V_94_94));
#line 1007 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1007 "prog_io_item.m"
        }
#line 1007 "prog_io_item.m"
        {
#line 1007 "prog_io_item.m"
          parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 1007 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (parse_tree__prog_io_item__V_93_93));
#line 1007 "prog_io_item.m"
        }
#line 1007 "prog_io_item.m"
        {
#line 1007 "prog_io_item.m"
          parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1007 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1007 "prog_io_item.m"
        }
#line 1006 "prog_io_item.m"
        {
#line 1006 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1006 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1006 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1006 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 2) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 1006 "prog_io_item.m"
        }
#line 1008 "prog_io_item.m"
        {
#line 1008 "prog_io_item.m"
          parse_tree__prog_io_item__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_101));
#line 1008 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1008 "prog_io_item.m"
        }
#line 1008 "prog_io_item.m"
        {
#line 1008 "prog_io_item.m"
          MR_Word base;
#line 1008 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 1008 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_97_97));
#line 1008 "prog_io_item.m"
        }
#line 1003 "prog_io_item.m"
      }
#line 1002 "prog_io_item.m"
  }
#line 958 "prog_io_item.m"
}

#line 918 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(
#line 918 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 918 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 918 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 918 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 918 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_14,
#line 918 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_15,
#line 918 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_16,
#line 918 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_17,
#line 918 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_18)
#line 918 "prog_io_item.m"
{
#line 943 "prog_io_item.m"
  {
#line 943 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 943 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeSugaredFuncTerm_19;
#line 943 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnTypeTerm_20;
#line 925 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_28_28;
#line 925 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_29_29;
#line 925 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 925 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;
#line 925 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 926 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;

#line 925 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 925 "prog_io_item.m"
      {
#line 926 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_12)) == (MR_mktag((MR_Integer) 0)));
#line 926 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 926 "prog_io_item.m"
          {
#line 926 "prog_io_item.m"
            parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 0)));
#line 926 "prog_io_item.m"
            parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 1)));
#line 926 "prog_io_item.m"
            parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 2)));
#line 926 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 926 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 926 "prog_io_item.m"
              {
#line 926 "prog_io_item.m"
                parse_tree__prog_io_item__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_28_28, (MR_Integer) 0)));
#line 926 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_29_29, (MR_String) "=") == 0);
#line 925 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 925 "prog_io_item.m"
                  {
#line 927 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 927 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 927 "prog_io_item.m"
                      {
#line 927 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeSugaredFuncTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 0)));
#line 927 "prog_io_item.m"
                        parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 1)));
#line 927 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 927 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 927 "prog_io_item.m"
                          {
#line 927 "prog_io_item.m"
                            parse_tree__prog_io_item__ReturnTypeTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 927 "prog_io_item.m"
                            parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, (MR_Integer) 1)));
#line 927 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "prog_io_item.m"
                          }
#line 927 "prog_io_item.m"
                      }
#line 925 "prog_io_item.m"
                  }
#line 926 "prog_io_item.m"
              }
#line 926 "prog_io_item.m"
          }
#line 925 "prog_io_item.m"
      }
#line 943 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 929 "prog_io_item.m"
      {
#line 929 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncTerm_22;
#line 929 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_24;

#line 929 "prog_io_item.m"
        {
#line 929 "prog_io_item.m"
          parse_tree__prog_io_item__FuncTerm_22 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__MaybeSugaredFuncTerm_19);
        }
#line 932 "prog_io_item.m"
        {
#line 932 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_22, parse_tree__prog_io_item__VarSet_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[81]), &parse_tree__prog_io_item__MaybeFunctorArgs_24);
        }
#line 937 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_24)) == (MR_mktag((MR_Integer) 0))))
#line 935 "prog_io_item.m"
          {
#line 935 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 0)));

#line 936 "prog_io_item.m"
            {
#line 936 "prog_io_item.m"
              MR_Word base;
#line 936 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 936 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 936 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_25));
#line 936 "prog_io_item.m"
            }
#line 935 "prog_io_item.m"
          }
#line 937 "prog_io_item.m"
        else
#line 938 "prog_io_item.m"
          {
#line 938 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 0)));
#line 938 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 1)));

#line 939 "prog_io_item.m"
            {
#line 939 "prog_io_item.m"
              parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(parse_tree__prog_io_item__Functor_26, parse_tree__prog_io_item__ArgTerms_27, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_22, parse_tree__prog_io_item__ReturnTypeTerm_20, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__MaybeDet_15, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_16, parse_tree__prog_io_item__SeqNum_17, parse_tree__prog_io_item__MaybeItem_18);
#line 939 "prog_io_item.m"
              return;
            }
#line 938 "prog_io_item.m"
          }
#line 929 "prog_io_item.m"
      }
#line 943 "prog_io_item.m"
    else
#line 944 "prog_io_item.m"
      {
#line 944 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_58;

#line 945 "prog_io_item.m"
        {
#line 945 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[82]), &parse_tree__prog_io_item__MaybeFunctorArgs_58);
        }
#line 950 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_58)) == (MR_mktag((MR_Integer) 0))))
#line 948 "prog_io_item.m"
          {
#line 948 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 0)));

#line 949 "prog_io_item.m"
            {
#line 949 "prog_io_item.m"
              MR_Word base;
#line 949 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 949 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 949 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_51));
#line 949 "prog_io_item.m"
            }
#line 948 "prog_io_item.m"
          }
#line 950 "prog_io_item.m"
        else
#line 951 "prog_io_item.m"
          {
#line 951 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 0)));
#line 951 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 1)));

#line 952 "prog_io_item.m"
            {
#line 952 "prog_io_item.m"
              parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(parse_tree__prog_io_item__Functor_52, parse_tree__prog_io_item__ArgTerms_53, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__WithInst_14, parse_tree__prog_io_item__MaybeDet_15, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_16, parse_tree__prog_io_item__SeqNum_17, parse_tree__prog_io_item__MaybeItem_18);
#line 952 "prog_io_item.m"
              return;
            }
#line 951 "prog_io_item.m"
          }
#line 944 "prog_io_item.m"
      }
#line 943 "prog_io_item.m"
  }
#line 918 "prog_io_item.m"
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
    MR_Word parse_tree__prog_io_item__BeforeDetismTerm_15;
#line 890 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_16;
#line 890 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithInst_18;
#line 890 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BaseTerm_19;
#line 1324 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTermPrime_58;
#line 1324 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InstTerm_59;
#line 1311 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_64_64;
#line 1311 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_65_65;
#line 1311 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_66_66;
#line 1311 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_67_67;
#line 1311 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_68_68;
#line 1311 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_60_60;
#line 912 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeDetism_20;
#line 912 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithInst_21;

#line 891 "prog_io_item.m"
    {
#line 891 "prog_io_item.m"
      parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Term_10, &parse_tree__prog_io_item__BeforeDetismTerm_15, &parse_tree__prog_io_item__MaybeMaybeDetism_16);
    }
#line 1311 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__BeforeDetismTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 1311 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1311 "prog_io_item.m"
      {
#line 1311 "prog_io_item.m"
        parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 0)));
#line 1311 "prog_io_item.m"
        parse_tree__prog_io_item__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 1)));
#line 1311 "prog_io_item.m"
        parse_tree__prog_io_item__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 2)));
#line 1311 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 1311 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1311 "prog_io_item.m"
          {
#line 1311 "prog_io_item.m"
            parse_tree__prog_io_item__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 1311 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_65_65, (MR_String) "with_inst") == 0);
#line 1311 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1311 "prog_io_item.m"
              {
#line 1312 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_66_66)) == (MR_mktag((MR_Integer) 1)));
#line 1312 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1312 "prog_io_item.m"
                  {
#line 1312 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeWithInstTermPrime_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, (MR_Integer) 0)));
#line 1312 "prog_io_item.m"
                    parse_tree__prog_io_item__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, (MR_Integer) 1)));
#line 1312 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 1312 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1312 "prog_io_item.m"
                      {
#line 1312 "prog_io_item.m"
                        parse_tree__prog_io_item__InstTerm_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, (MR_Integer) 0)));
#line 1312 "prog_io_item.m"
                        parse_tree__prog_io_item__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, (MR_Integer) 1)));
#line 1312 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1312 "prog_io_item.m"
                      }
#line 1312 "prog_io_item.m"
                  }
#line 1311 "prog_io_item.m"
              }
#line 1311 "prog_io_item.m"
          }
#line 1311 "prog_io_item.m"
      }
#line 1324 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1314 "prog_io_item.m"
      {
#line 1317 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Inst_61;

#line 1314 "prog_io_item.m"
        parse_tree__prog_io_item__BaseTerm_19 = parse_tree__prog_io_item__BeforeWithInstTermPrime_58;
#line 1315 "prog_io_item.m"
        {
#line 1315 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__InstTerm_59, &parse_tree__prog_io_item__Inst_61);
        }
#line 1317 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1316 "prog_io_item.m"
          {
#line 1316 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_70_70;

#line 1316 "prog_io_item.m"
            {
#line 1316 "prog_io_item.m"
              parse_tree__prog_io_item__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1316 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_item__Inst_61));
#line 1316 "prog_io_item.m"
            }
#line 1316 "prog_io_item.m"
            {
#line 1316 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1316 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_18, 0) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 1316 "prog_io_item.m"
            }
#line 1316 "prog_io_item.m"
          }
#line 1317 "prog_io_item.m"
        else
#line 1319 "prog_io_item.m"
          {
#line 1319 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_63;
#line 1319 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_84_84;
#line 1319 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_85_85;
#line 1319 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_86_86;
#line 1319 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_91_91;

#line 1321 "prog_io_item.m"
            {
#line 1321 "prog_io_item.m"
              parse_tree__prog_io_item__V_86_86 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__InstTerm_59);
            }
#line 1321 "prog_io_item.m"
            {
#line 1321 "prog_io_item.m"
              parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__V_86_86));
#line 1321 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[126])));
#line 1321 "prog_io_item.m"
            }
#line 1321 "prog_io_item.m"
            {
#line 1321 "prog_io_item.m"
              parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1321 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 1321 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1321 "prog_io_item.m"
            }
#line 1320 "prog_io_item.m"
            {
#line 1320 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1320 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1320 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1320 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 2) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 1320 "prog_io_item.m"
            }
#line 1322 "prog_io_item.m"
            {
#line 1322 "prog_io_item.m"
              parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1322 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_63));
#line 1322 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1322 "prog_io_item.m"
            }
#line 1322 "prog_io_item.m"
            {
#line 1322 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1322 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeWithInst_18, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1322 "prog_io_item.m"
            }
#line 1319 "prog_io_item.m"
          }
#line 1314 "prog_io_item.m"
      }
#line 1324 "prog_io_item.m"
    else
#line 1325 "prog_io_item.m"
      {
#line 1325 "prog_io_item.m"
        parse_tree__prog_io_item__BaseTerm_19 = parse_tree__prog_io_item__BeforeDetismTerm_15;
#line 1326 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[18]);
#line 1325 "prog_io_item.m"
      }
#line 896 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_16)) == (MR_mktag((MR_Integer) 1)));
#line 896 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 896 "prog_io_item.m"
      {
#line 896 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeDetism_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_16, (MR_Integer) 0)));
#line 897 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_18)) == (MR_mktag((MR_Integer) 1)));
#line 897 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 897 "prog_io_item.m"
          parse_tree__prog_io_item__WithInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_18, (MR_Integer) 0)));
#line 896 "prog_io_item.m"
      }
#line 912 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 908 "prog_io_item.m"
      {
#line 900 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 901 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;

#line 900 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_20)) == (MR_mktag((MR_Integer) 1)));
#line 900 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 900 "prog_io_item.m"
          {
#line 900 "prog_io_item.m"
            parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_20, (MR_Integer) 0)));
#line 901 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_21)) == (MR_mktag((MR_Integer) 1)));
#line 901 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 901 "prog_io_item.m"
              parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_21, (MR_Integer) 0)));
#line 900 "prog_io_item.m"
          }
#line 908 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 904 "prog_io_item.m"
          {
#line 904 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_25;
#line 904 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 904 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 904 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_42_42;
#line 904 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_47_47;

#line 906 "prog_io_item.m"
            {
#line 906 "prog_io_item.m"
              parse_tree__prog_io_item__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_10);
            }
#line 906 "prog_io_item.m"
            {
#line 906 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 906 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 906 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[104])));
#line 906 "prog_io_item.m"
            }
#line 906 "prog_io_item.m"
            {
#line 906 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 906 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 906 "prog_io_item.m"
            }
#line 905 "prog_io_item.m"
            {
#line 905 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 905 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 905 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 905 "prog_io_item.m"
            }
#line 907 "prog_io_item.m"
            {
#line 907 "prog_io_item.m"
              parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_25));
#line 907 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 907 "prog_io_item.m"
            }
#line 907 "prog_io_item.m"
            {
#line 907 "prog_io_item.m"
              MR_Word base;
#line 907 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 907 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 907 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 907 "prog_io_item.m"
            }
#line 904 "prog_io_item.m"
          }
#line 908 "prog_io_item.m"
        else
#line 909 "prog_io_item.m"
          {
#line 909 "prog_io_item.m"
            parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__BaseTerm_19, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__WithInst_21, parse_tree__prog_io_item__MaybeDetism_20, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeItem_14);
#line 909 "prog_io_item.m"
            return;
          }
#line 908 "prog_io_item.m"
      }
#line 912 "prog_io_item.m"
    else
#line 914 "prog_io_item.m"
      {
#line 914 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_26;
#line 914 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_49_49;
#line 914 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_50_50;

#line 913 "prog_io_item.m"
        {
#line 913 "prog_io_item.m"
          parse_tree__prog_io_item__V_49_49 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_16);
        }
#line 914 "prog_io_item.m"
        {
#line 914 "prog_io_item.m"
          parse_tree__prog_io_item__V_50_50 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_18);
        }
#line 914 "prog_io_item.m"
        {
#line 914 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_49_49, parse_tree__prog_io_item__V_50_50);
        }
#line 915 "prog_io_item.m"
        {
#line 915 "prog_io_item.m"
          MR_Word base;
#line 915 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 915 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 915 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_26));
#line 915 "prog_io_item.m"
        }
#line 914 "prog_io_item.m"
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
parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncName_14,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Args_15,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ReturnArg_16,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncTerm_17,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_18,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_20,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ExistQVars_21,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Constraints_22,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_23,
#line 753 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_24,
#line 753 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_25,
#line 753 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_26)
#line 753 "prog_io_item.m"
{
#line 760 "prog_io_item.m"
  {
#line 760 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 760 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_147_147;
#line 760 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConsistentArgsSpecs_27;
#line 760 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgsOnlySpecs_36;
#line 760 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnOnlySpecs_43;
#line 760 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConsistencySpecs_44;
#line 760 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_112_112;
#line 774 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_74_74;
#line 775 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_33_33;
#line 774 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 774 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 774 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;
#line 787 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_93_93;
#line 788 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_39_39;
#line 788 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_40_40;
#line 787 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_38_38;
#line 787 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_37_37;

#line 762 "prog_io_item.m"
    {
#line 762 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__type_and_mode_list_is_consistent_1_p_0(parse_tree__prog_io_item__Args_15);
    }
#line 765 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 764 "prog_io_item.m"
      parse_tree__prog_io_item__ConsistentArgsSpecs_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "prog_io_item.m"
    else
#line 767 "prog_io_item.m"
      {
#line 767 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ConsistentSpec_29;
#line 767 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_66_66;
#line 767 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_67_67;
#line 767 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_68_68;

#line 769 "prog_io_item.m"
        {
#line 769 "prog_io_item.m"
          parse_tree__prog_io_item__V_68_68 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 769 "prog_io_item.m"
        {
#line 769 "prog_io_item.m"
          parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 769 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_item__V_68_68));
#line 769 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[121])));
#line 769 "prog_io_item.m"
        }
#line 770 "prog_io_item.m"
        {
#line 770 "prog_io_item.m"
          parse_tree__prog_io_item__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 770 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 770 "prog_io_item.m"
        }
#line 768 "prog_io_item.m"
        {
#line 768 "prog_io_item.m"
          parse_tree__prog_io_item__ConsistentSpec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 768 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ConsistentSpec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 768 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ConsistentSpec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 768 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ConsistentSpec_29, 2) = ((MR_Box) (parse_tree__prog_io_item__V_66_66));
#line 768 "prog_io_item.m"
        }
#line 771 "prog_io_item.m"
        {
#line 771 "prog_io_item.m"
          parse_tree__prog_io_item__ConsistentArgsSpecs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ConsistentArgsSpecs_27, 0) = ((MR_Box) (parse_tree__prog_io_item__ConsistentSpec_29));
#line 771 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ConsistentArgsSpecs_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "prog_io_item.m"
        }
#line 767 "prog_io_item.m"
      }
#line 775 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_16)) == (MR_mktag((MR_Integer) 0)));
#line 775 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 775 "prog_io_item.m"
      {
#line 775 "prog_io_item.m"
        parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 0)));
#line 774 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 774 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 774 "prog_io_item.m"
          {
#line 774 "prog_io_item.m"
            parse_tree__prog_io_item__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 0)));
#line 774 "prog_io_item.m"
            parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 1)));
#line 774 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_74_74)) == (MR_mktag((MR_Integer) 1)));
#line 774 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 774 "prog_io_item.m"
              {
#line 774 "prog_io_item.m"
                parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, (MR_Integer) 0)));
#line 774 "prog_io_item.m"
                parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, (MR_Integer) 1)));
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
        MR_Word parse_tree__prog_io_item__ArgsOnlySpec_35;
#line 778 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_85_85;
#line 778 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_86_86;
#line 778 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_87_87;

#line 780 "prog_io_item.m"
        {
#line 780 "prog_io_item.m"
          parse_tree__prog_io_item__V_87_87 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 780 "prog_io_item.m"
        {
#line 780 "prog_io_item.m"
          parse_tree__prog_io_item__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 780 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_item__V_87_87));
#line 780 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[122])));
#line 780 "prog_io_item.m"
        }
#line 781 "prog_io_item.m"
        {
#line 781 "prog_io_item.m"
          parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__V_86_86));
#line 781 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 781 "prog_io_item.m"
        }
#line 779 "prog_io_item.m"
        {
#line 779 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 779 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 779 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 2) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 779 "prog_io_item.m"
        }
#line 782 "prog_io_item.m"
        {
#line 782 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpecs_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_36, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsOnlySpec_35));
#line 782 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 782 "prog_io_item.m"
        }
#line 778 "prog_io_item.m"
      }
#line 783 "prog_io_item.m"
    else
#line 784 "prog_io_item.m"
      parse_tree__prog_io_item__ArgsOnlySpecs_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 788 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_16)) == (MR_mktag((MR_Integer) 1)));
#line 788 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 788 "prog_io_item.m"
      {
#line 788 "prog_io_item.m"
        parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 0)));
#line 788 "prog_io_item.m"
        parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 1)));
#line 787 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 787 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 787 "prog_io_item.m"
          {
#line 787 "prog_io_item.m"
            parse_tree__prog_io_item__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 0)));
#line 787 "prog_io_item.m"
            parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 1)));
#line 787 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_93_93)) == (MR_mktag((MR_Integer) 0)));
#line 787 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 787 "prog_io_item.m"
              parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_93_93, (MR_Integer) 0)));
#line 787 "prog_io_item.m"
          }
#line 788 "prog_io_item.m"
      }
#line 796 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 791 "prog_io_item.m"
      {
#line 791 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ReturnOnlySpec_42;
#line 791 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_104_104;
#line 791 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_105_105;
#line 791 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_106_106;

#line 793 "prog_io_item.m"
        {
#line 793 "prog_io_item.m"
          parse_tree__prog_io_item__V_106_106 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 793 "prog_io_item.m"
        {
#line 793 "prog_io_item.m"
          parse_tree__prog_io_item__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 793 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_105_105, 0) = ((MR_Box) (parse_tree__prog_io_item__V_106_106));
#line 793 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[123])));
#line 793 "prog_io_item.m"
        }
#line 794 "prog_io_item.m"
        {
#line 794 "prog_io_item.m"
          parse_tree__prog_io_item__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_104_104, 0) = ((MR_Box) (parse_tree__prog_io_item__V_105_105));
#line 794 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 794 "prog_io_item.m"
        }
#line 792 "prog_io_item.m"
        {
#line 792 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 792 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 792 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 2) = ((MR_Box) (parse_tree__prog_io_item__V_104_104));
#line 792 "prog_io_item.m"
        }
#line 795 "prog_io_item.m"
        {
#line 795 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpecs_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_43, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnOnlySpec_42));
#line 795 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 795 "prog_io_item.m"
        }
#line 791 "prog_io_item.m"
      }
#line 796 "prog_io_item.m"
    else
#line 797 "prog_io_item.m"
      parse_tree__prog_io_item__ReturnOnlySpecs_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8129 "parse_tree.prog_io_item.c"
    parse_tree__prog_io_item__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 799 "prog_io_item.m"
    {
#line 799 "prog_io_item.m"
      parse_tree__prog_io_item__V_112_112 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_147_147, parse_tree__prog_io_item__ArgsOnlySpecs_36, parse_tree__prog_io_item__ReturnOnlySpecs_43);
    }
#line 799 "prog_io_item.m"
    {
#line 799 "prog_io_item.m"
      parse_tree__prog_io_item__ConsistencySpecs_44 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_147_147, parse_tree__prog_io_item__ConsistentArgsSpecs_27, parse_tree__prog_io_item__V_112_112);
    }
#line 803 "prog_io_item.m"
    if ((parse_tree__prog_io_item__ConsistencySpecs_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 804 "prog_io_item.m"
      {
#line 804 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_148_148;
#line 804 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Purity_47;
#line 804 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_48;
#line 804 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TVarSet_49;
#line 804 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__IVarSet_50;
#line 804 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__AllArgs_51;
#line 804 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_113_113;

#line 805 "prog_io_item.m"
        {
#line 805 "prog_io_item.m"
          parse_tree__prog_io_item__get_purity_3_p_0(&parse_tree__prog_io_item__Purity_47, parse_tree__prog_io_item__Attributes0_23, &parse_tree__prog_io_item__Attributes_48);
        }
#line 8165 "parse_tree.prog_io_item.c"
        parse_tree__prog_io_item__TypeCtorInfo_148_148 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 806 "prog_io_item.m"
        {
#line 806 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__TVarSet_49);
        }
#line 807 "prog_io_item.m"
        {
#line 807 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__IVarSet_50);
        }
#line 808 "prog_io_item.m"
        {
#line 808 "prog_io_item.m"
          parse_tree__prog_io_item__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_113_113, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnArg_16));
#line 808 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 808 "prog_io_item.m"
        }
#line 808 "prog_io_item.m"
        {
#line 808 "prog_io_item.m"
          parse_tree__prog_io_item__AllArgs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io_item__Args_15, parse_tree__prog_io_item__V_113_113);
        }
#line 809 "prog_io_item.m"
        {
#line 809 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__AllArgs_51);
        }
#line 817 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 810 "prog_io_item.m"
          {
#line 810 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ItemPredDecl_53;
#line 810 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Item_54;
#line 810 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeItem0_55;

#line 811 "prog_io_item.m"
            {
#line 811 "prog_io_item.m"
              parse_tree__prog_io_item__ItemPredDecl_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 1) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_49));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 2) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_50));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 3) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_21));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 4) = ((MR_Box) ((MR_Integer) 1));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 5) = ((MR_Box) (parse_tree__prog_io_item__FuncName_14));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 6) = ((MR_Box) (parse_tree__prog_io_item__AllArgs_51));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 9) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_20));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 10) = ((MR_Box) (parse_tree__prog_io_item__Purity_47));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 11) = ((MR_Box) (parse_tree__prog_io_item__Constraints_22));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 12) = ((MR_Box) (parse_tree__prog_io_item__Context_24));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 13) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_25));
#line 811 "prog_io_item.m"
            }
#line 814 "prog_io_item.m"
            {
#line 814 "prog_io_item.m"
              parse_tree__prog_io_item__Item_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 814 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_54, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_53));
#line 814 "prog_io_item.m"
            }
#line 815 "prog_io_item.m"
            {
#line 815 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeItem0_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 815 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_54));
#line 815 "prog_io_item.m"
            }
#line 816 "prog_io_item.m"
            {
#line 816 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_55, parse_tree__prog_io_item__Attributes_48, parse_tree__prog_io_item__MaybeItem_26);
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
            MR_String parse_tree__prog_io_item__TermStr_56;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Pieces_57;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_58;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_120_120;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_123_123;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_125_125;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_126_126;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_135_135;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_136_136;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_137_137;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_138_138;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_139_139;
#line 818 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_142_142;

#line 818 "prog_io_item.m"
            {
#line 818 "prog_io_item.m"
              parse_tree__prog_io_item__TermStr_56 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__Term_18);
            }
#line 821 "prog_io_item.m"
            {
#line 821 "prog_io_item.m"
              parse_tree__prog_io_item__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 821 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_126_126, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_56));
#line 821 "prog_io_item.m"
            }
#line 821 "prog_io_item.m"
            {
#line 821 "prog_io_item.m"
              parse_tree__prog_io_item__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_item__V_126_126));
#line 821 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 821 "prog_io_item.m"
            }
#line 820 "prog_io_item.m"
            {
#line 820 "prog_io_item.m"
              parse_tree__prog_io_item__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_123_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 820 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_123_123, 1) = ((MR_Box) (parse_tree__prog_io_item__V_125_125));
#line 820 "prog_io_item.m"
            }
#line 820 "prog_io_item.m"
            {
#line 820 "prog_io_item.m"
              parse_tree__prog_io_item__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_120_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[125])));
#line 820 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_120_120, 1) = ((MR_Box) (parse_tree__prog_io_item__V_123_123));
#line 820 "prog_io_item.m"
            }
#line 819 "prog_io_item.m"
            {
#line 819 "prog_io_item.m"
              parse_tree__prog_io_item__Pieces_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[124])));
#line 819 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_57, 1) = ((MR_Box) (parse_tree__prog_io_item__V_120_120));
#line 819 "prog_io_item.m"
            }
#line 823 "prog_io_item.m"
            {
#line 823 "prog_io_item.m"
              parse_tree__prog_io_item__V_137_137 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__Term_18);
            }
#line 823 "prog_io_item.m"
            {
#line 823 "prog_io_item.m"
              parse_tree__prog_io_item__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 823 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_139_139, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_57));
#line 823 "prog_io_item.m"
            }
#line 823 "prog_io_item.m"
            {
#line 823 "prog_io_item.m"
              parse_tree__prog_io_item__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_item__V_139_139));
#line 823 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 823 "prog_io_item.m"
            }
#line 823 "prog_io_item.m"
            {
#line 823 "prog_io_item.m"
              parse_tree__prog_io_item__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 823 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_136_136, 0) = ((MR_Box) (parse_tree__prog_io_item__V_137_137));
#line 823 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_136_136, 1) = ((MR_Box) (parse_tree__prog_io_item__V_138_138));
#line 823 "prog_io_item.m"
            }
#line 823 "prog_io_item.m"
            {
#line 823 "prog_io_item.m"
              parse_tree__prog_io_item__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_135_135, 0) = ((MR_Box) (parse_tree__prog_io_item__V_136_136));
#line 823 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 823 "prog_io_item.m"
            }
#line 822 "prog_io_item.m"
            {
#line 822 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 822 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 822 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 822 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 2) = ((MR_Box) (parse_tree__prog_io_item__V_135_135));
#line 822 "prog_io_item.m"
            }
#line 824 "prog_io_item.m"
            {
#line 824 "prog_io_item.m"
              parse_tree__prog_io_item__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_142_142, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_58));
#line 824 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 824 "prog_io_item.m"
            }
#line 824 "prog_io_item.m"
            {
#line 824 "prog_io_item.m"
              MR_Word base;
#line 824 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 824 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 824 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_142_142));
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
        *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 802 "prog_io_item.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ConsistencySpecs_44));
#line 802 "prog_io_item.m"
      }
#line 760 "prog_io_item.m"
  }
#line 753 "prog_io_item.m"
}

#line 670 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_8_p_0(
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_11,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_12,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_13,
#line 670 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 670 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 670 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 670 "prog_io_item.m"
{
#line 675 "prog_io_item.m"
  {
#line 675 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 675 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes_17;
#line 675 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeContext_18;

#line 676 "prog_io_item.m"
    {
#line 676 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__Attributes0_13, &parse_tree__prog_io_item__Attributes_17, &parse_tree__prog_io_item__MaybeContext_18);
    }
#line 681 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeContext_18)) == (MR_mktag((MR_Integer) 0))))
#line 679 "prog_io_item.m"
      {
#line 679 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 0)));

#line 680 "prog_io_item.m"
        {
#line 680 "prog_io_item.m"
          MR_Word base;
#line 680 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 680 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 680 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_19));
#line 680 "prog_io_item.m"
        }
#line 679 "prog_io_item.m"
      }
#line 681 "prog_io_item.m"
    else
#line 682 "prog_io_item.m"
      {
#line 682 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ExistQVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 0)));
#line 682 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Constraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 1)));
#line 682 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 2)));
#line 744 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeSugaredFuncTerm_23;
#line 744 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ReturnTerm_24;
#line 684 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_44_44;
#line 684 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_45_45;
#line 684 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_46_46;
#line 684 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_47_47;
#line 684 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_48_48;
#line 684 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_25_25;

#line 684 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_11)) == (MR_mktag((MR_Integer) 0)));
#line 684 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 684 "prog_io_item.m"
          {
#line 684 "prog_io_item.m"
            parse_tree__prog_io_item__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 0)));
#line 684 "prog_io_item.m"
            parse_tree__prog_io_item__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 1)));
#line 684 "prog_io_item.m"
            parse_tree__prog_io_item__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 2)));
#line 684 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_44_44)) == (MR_mktag((MR_Integer) 0)));
#line 684 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 684 "prog_io_item.m"
              {
#line 684 "prog_io_item.m"
                parse_tree__prog_io_item__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_44_44, (MR_Integer) 0)));
#line 684 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_45_45, (MR_String) "=") == 0);
#line 684 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 684 "prog_io_item.m"
                  {
#line 685 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 685 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 685 "prog_io_item.m"
                      {
#line 685 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeSugaredFuncTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, (MR_Integer) 0)));
#line 685 "prog_io_item.m"
                        parse_tree__prog_io_item__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, (MR_Integer) 1)));
#line 685 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 685 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 685 "prog_io_item.m"
                          {
#line 685 "prog_io_item.m"
                            parse_tree__prog_io_item__ReturnTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, (MR_Integer) 0)));
#line 685 "prog_io_item.m"
                            parse_tree__prog_io_item__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, (MR_Integer) 1)));
#line 685 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_148_148;
#line 687 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__FuncTerm_26;
#line 687 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFuncNameAndArgs_28;

#line 687 "prog_io_item.m"
            {
#line 687 "prog_io_item.m"
              parse_tree__prog_io_item__FuncTerm_26 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__MaybeSugaredFuncTerm_23);
            }
#line 8612 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_148_148 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 690 "prog_io_item.m"
            {
#line 690 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__FuncTerm_26, parse_tree__prog_io_item__VarSet_10, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[56]), &parse_tree__prog_io_item__MaybeFuncNameAndArgs_28);
            }
#line 695 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFuncNameAndArgs_28)) == (MR_mktag((MR_Integer) 0))))
#line 693 "prog_io_item.m"
              {
#line 693 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFuncNameAndArgs_28, (MR_Integer) 0)));

#line 694 "prog_io_item.m"
                {
#line 694 "prog_io_item.m"
                  MR_Word base;
#line 694 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 694 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 694 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_140));
#line 694 "prog_io_item.m"
                }
#line 693 "prog_io_item.m"
              }
#line 695 "prog_io_item.m"
            else
#line 696 "prog_io_item.m"
              {
#line 696 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__FuncName_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncNameAndArgs_28, (MR_Integer) 0)));
#line 696 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncNameAndArgs_28, (MR_Integer) 1)));
#line 696 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeArgs_32;
#line 696 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeReturnArg_37;
#line 702 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgsPrime_31;
#line 718 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ReturnArgPrime_36;
#line 738 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Args_40;
#line 738 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ReturnArg_41;

#line 698 "prog_io_item.m"
                {
#line 698 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_22, parse_tree__prog_io_item__ArgTerms_30, &parse_tree__prog_io_item__ArgsPrime_31);
                }
#line 702 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 701 "prog_io_item.m"
                  {
#line 701 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 701 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeArgs_32, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsPrime_31));
#line 701 "prog_io_item.m"
                  }
#line 702 "prog_io_item.m"
                else
#line 703 "prog_io_item.m"
                  {
#line 703 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__FuncTermStr_33;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ArgsPieces_34;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ArgsSpec_35;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_60_60;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_63_63;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_66_66;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_67_67;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_76_76;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_77_77;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_78_78;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_79_79;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_80_80;
#line 703 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_83_83;

#line 703 "prog_io_item.m"
                    {
#line 703 "prog_io_item.m"
                      parse_tree__prog_io_item__FuncTermStr_33 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__FuncTerm_26);
                    }
#line 706 "prog_io_item.m"
                    {
#line 706 "prog_io_item.m"
                      parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 706 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_item__FuncTermStr_33));
#line 706 "prog_io_item.m"
                    }
#line 706 "prog_io_item.m"
                    {
#line 706 "prog_io_item.m"
                      parse_tree__prog_io_item__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 706 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 706 "prog_io_item.m"
                    }
#line 705 "prog_io_item.m"
                    {
#line 705 "prog_io_item.m"
                      parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[118])));
#line 705 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_item__V_66_66));
#line 705 "prog_io_item.m"
                    }
#line 705 "prog_io_item.m"
                    {
#line 705 "prog_io_item.m"
                      parse_tree__prog_io_item__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[117])));
#line 705 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 705 "prog_io_item.m"
                    }
#line 704 "prog_io_item.m"
                    {
#line 704 "prog_io_item.m"
                      parse_tree__prog_io_item__ArgsPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[116])));
#line 704 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsPieces_34, 1) = ((MR_Box) (parse_tree__prog_io_item__V_60_60));
#line 704 "prog_io_item.m"
                    }
#line 709 "prog_io_item.m"
                    {
#line 709 "prog_io_item.m"
                      parse_tree__prog_io_item__V_78_78 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__FuncTerm_26);
                    }
#line 710 "prog_io_item.m"
                    {
#line 710 "prog_io_item.m"
                      parse_tree__prog_io_item__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 710 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsPieces_34));
#line 710 "prog_io_item.m"
                    }
#line 710 "prog_io_item.m"
                    {
#line 710 "prog_io_item.m"
                      parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 710 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 710 "prog_io_item.m"
                    }
#line 709 "prog_io_item.m"
                    {
#line 709 "prog_io_item.m"
                      parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 709 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 709 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 709 "prog_io_item.m"
                    }
#line 710 "prog_io_item.m"
                    {
#line 710 "prog_io_item.m"
                      parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 710 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 710 "prog_io_item.m"
                    }
#line 707 "prog_io_item.m"
                    {
#line 707 "prog_io_item.m"
                      parse_tree__prog_io_item__ArgsSpec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 707 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 707 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_35, 2) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 707 "prog_io_item.m"
                    }
#line 711 "prog_io_item.m"
                    {
#line 711 "prog_io_item.m"
                      parse_tree__prog_io_item__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsSpec_35));
#line 711 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "prog_io_item.m"
                    }
#line 711 "prog_io_item.m"
                    {
#line 711 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeArgs_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 711 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeArgs_32, 0) = ((MR_Box) (parse_tree__prog_io_item__V_83_83));
#line 711 "prog_io_item.m"
                    }
#line 703 "prog_io_item.m"
                  }
#line 714 "prog_io_item.m"
                {
#line 714 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_3_p_0(parse_tree__prog_io_item__InstConstraints_22, parse_tree__prog_io_item__ReturnTerm_24, &parse_tree__prog_io_item__ReturnArgPrime_36);
                }
#line 718 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 717 "prog_io_item.m"
                  {
#line 717 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeReturnArg_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 717 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeReturnArg_37, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnArgPrime_36));
#line 717 "prog_io_item.m"
                  }
#line 718 "prog_io_item.m"
                else
#line 721 "prog_io_item.m"
                  {
#line 721 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ReturnSpec_39;
#line 721 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_101_101;
#line 721 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_102_102;
#line 721 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_103_103;
#line 721 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_108_108;

#line 724 "prog_io_item.m"
                    {
#line 724 "prog_io_item.m"
                      parse_tree__prog_io_item__V_103_103 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__ReturnTerm_24);
                    }
#line 724 "prog_io_item.m"
                    {
#line 724 "prog_io_item.m"
                      parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 724 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_item__V_103_103));
#line 724 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[119])));
#line 724 "prog_io_item.m"
                    }
#line 725 "prog_io_item.m"
                    {
#line 725 "prog_io_item.m"
                      parse_tree__prog_io_item__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 725 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 725 "prog_io_item.m"
                    }
#line 722 "prog_io_item.m"
                    {
#line 722 "prog_io_item.m"
                      parse_tree__prog_io_item__ReturnSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 722 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 722 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_39, 2) = ((MR_Box) (parse_tree__prog_io_item__V_101_101));
#line 722 "prog_io_item.m"
                    }
#line 726 "prog_io_item.m"
                    {
#line 726 "prog_io_item.m"
                      parse_tree__prog_io_item__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnSpec_39));
#line 726 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "prog_io_item.m"
                    }
#line 726 "prog_io_item.m"
                    {
#line 726 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeReturnArg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 726 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeReturnArg_37, 0) = ((MR_Box) (parse_tree__prog_io_item__V_108_108));
#line 726 "prog_io_item.m"
                    }
#line 721 "prog_io_item.m"
                  }
#line 729 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeArgs_32)) == (MR_mktag((MR_Integer) 1)));
#line 729 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 729 "prog_io_item.m"
                  {
#line 729 "prog_io_item.m"
                    parse_tree__prog_io_item__Args_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeArgs_32, (MR_Integer) 0)));
#line 730 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeReturnArg_37)) == (MR_mktag((MR_Integer) 1)));
#line 730 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 730 "prog_io_item.m"
                      parse_tree__prog_io_item__ReturnArg_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeReturnArg_37, (MR_Integer) 0)));
#line 729 "prog_io_item.m"
                  }
#line 738 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 734 "prog_io_item.m"
                  {
#line 734 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(parse_tree__prog_io_item__FuncName_29, parse_tree__prog_io_item__Args_40, parse_tree__prog_io_item__ReturnArg_41, parse_tree__prog_io_item__FuncTerm_26, parse_tree__prog_io_item__Term_11, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__MaybeDet_12, parse_tree__prog_io_item__ExistQVars_20, parse_tree__prog_io_item__Constraints_21, parse_tree__prog_io_item__Attributes_17, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 734 "prog_io_item.m"
                    return;
                  }
#line 738 "prog_io_item.m"
                else
#line 740 "prog_io_item.m"
                  {
#line 740 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_110_110;
#line 740 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_111_111;
#line 740 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Specs_141;

#line 739 "prog_io_item.m"
                    {
#line 739 "prog_io_item.m"
                      parse_tree__prog_io_item__V_110_110 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[5], parse_tree__prog_io_item__MaybeArgs_32);
                    }
#line 740 "prog_io_item.m"
                    {
#line 740 "prog_io_item.m"
                      parse_tree__prog_io_item__V_111_111 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io_item__MaybeReturnArg_37);
                    }
#line 739 "prog_io_item.m"
                    {
#line 739 "prog_io_item.m"
                      parse_tree__prog_io_item__Specs_141 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_110_110, parse_tree__prog_io_item__V_111_111);
                    }
#line 741 "prog_io_item.m"
                    {
#line 741 "prog_io_item.m"
                      MR_Word base;
#line 741 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 741 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 741 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_141));
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
            MR_Word parse_tree__prog_io_item__Spec_43;
#line 746 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_131_131;
#line 746 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_132_132;
#line 746 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_133_133;
#line 746 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_138_138;

#line 748 "prog_io_item.m"
            {
#line 748 "prog_io_item.m"
              parse_tree__prog_io_item__V_133_133 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_11);
            }
#line 748 "prog_io_item.m"
            {
#line 748 "prog_io_item.m"
              parse_tree__prog_io_item__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 748 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_132_132, 0) = ((MR_Box) (parse_tree__prog_io_item__V_133_133));
#line 748 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[120])));
#line 748 "prog_io_item.m"
            }
#line 748 "prog_io_item.m"
            {
#line 748 "prog_io_item.m"
              parse_tree__prog_io_item__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_131_131, 0) = ((MR_Box) (parse_tree__prog_io_item__V_132_132));
#line 748 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "prog_io_item.m"
            }
#line 747 "prog_io_item.m"
            {
#line 747 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 747 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 747 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 2) = ((MR_Box) (parse_tree__prog_io_item__V_131_131));
#line 747 "prog_io_item.m"
            }
#line 749 "prog_io_item.m"
            {
#line 749 "prog_io_item.m"
              parse_tree__prog_io_item__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_43));
#line 749 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "prog_io_item.m"
            }
#line 749 "prog_io_item.m"
            {
#line 749 "prog_io_item.m"
              MR_Word base;
#line 749 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 749 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 749 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_138_138));
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
parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_12,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_13,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_14,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_15,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_16,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 569 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 569 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 569 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22)
#line 569 "prog_io_item.m"
{
#line 576 "prog_io_item.m"
  {
#line 576 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 576 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes1_23;
#line 576 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeExistClassInstContext_24;

#line 577 "prog_io_item.m"
    {
#line 577 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_13, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__Attributes0_19, &parse_tree__prog_io_item__Attributes1_23, &parse_tree__prog_io_item__MaybeExistClassInstContext_24);
    }
#line 582 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeExistClassInstContext_24)) == (MR_mktag((MR_Integer) 0))))
#line 580 "prog_io_item.m"
      {
#line 580 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 0)));

#line 581 "prog_io_item.m"
        {
#line 581 "prog_io_item.m"
          MR_Word base;
#line 581 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 581 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 581 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_25));
#line 581 "prog_io_item.m"
        }
#line 580 "prog_io_item.m"
      }
#line 582 "prog_io_item.m"
    else
#line 584 "prog_io_item.m"
      {
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_204_204 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_205_205;
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ExistQVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 0)));
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Constraints_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 1)));
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 2)));
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ContextPieces_29;
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybePredNameAndArgs_30;
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_56_56;
#line 584 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_57_57;

#line 585 "prog_io_item.m"
        {
#line 585 "prog_io_item.m"
          parse_tree__prog_io_item__V_57_57 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
        }
#line 586 "prog_io_item.m"
        {
#line 586 "prog_io_item.m"
          parse_tree__prog_io_item__V_56_56 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_204_204, parse_tree__prog_io_item__V_57_57, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[109]));
        }
#line 585 "prog_io_item.m"
        {
#line 585 "prog_io_item.m"
          parse_tree__prog_io_item__ContextPieces_29 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_204_204, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[107]), parse_tree__prog_io_item__V_56_56);
        }
#line 9176 "parse_tree.prog_io_item.c"
        parse_tree__prog_io_item__TypeCtorInfo_205_205 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 587 "prog_io_item.m"
        {
#line 587 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__ModuleName_13, parse_tree__prog_io_item__PredTypeTerm_15, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__ContextPieces_29, &parse_tree__prog_io_item__MaybePredNameAndArgs_30);
        }
#line 592 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybePredNameAndArgs_30)) == (MR_mktag((MR_Integer) 0))))
#line 590 "prog_io_item.m"
          {
#line 590 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 0)));

#line 591 "prog_io_item.m"
            {
#line 591 "prog_io_item.m"
              MR_Word base;
#line 591 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 591 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 591 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_188));
#line 591 "prog_io_item.m"
            }
#line 590 "prog_io_item.m"
          }
#line 592 "prog_io_item.m"
        else
#line 593 "prog_io_item.m"
          {
#line 593 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 0)));
#line 593 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 1)));
#line 655 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Args_33;

#line 594 "prog_io_item.m"
            {
#line 594 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_28, parse_tree__prog_io_item__ArgTerms_32, &parse_tree__prog_io_item__Args_33);
            }
#line 655 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 647 "prog_io_item.m"
              {
#line 595 "prog_io_item.m"
                {
#line 595 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__type_and_mode_list_is_consistent_1_p_0(parse_tree__prog_io_item__Args_33);
                }
#line 647 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 607 "prog_io_item.m"
                  {
#line 597 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_62_62;
#line 597 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_34_34;
#line 598 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_36_36;
#line 598 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_35_35;

#line 597 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_17)) == (MR_mktag((MR_Integer) 1)));
#line 597 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 597 "prog_io_item.m"
                      {
#line 597 "prog_io_item.m"
                        parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_17, (MR_Integer) 0)));
#line 598 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_33)) == (MR_mktag((MR_Integer) 1)));
#line 598 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 598 "prog_io_item.m"
                          {
#line 598 "prog_io_item.m"
                            parse_tree__prog_io_item__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 0)));
#line 598 "prog_io_item.m"
                            parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 1)));
#line 598 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 598 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 598 "prog_io_item.m"
                              parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_62_62, (MR_Integer) 0)));
#line 598 "prog_io_item.m"
                          }
#line 597 "prog_io_item.m"
                      }
#line 607 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 601 "prog_io_item.m"
                      {
#line 601 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Spec_38;
#line 601 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_76_76;
#line 601 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_77_77;
#line 601 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_78_78;
#line 601 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_83_83;

#line 604 "prog_io_item.m"
                        {
#line 604 "prog_io_item.m"
                          parse_tree__prog_io_item__V_78_78 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__PredTypeTerm_15);
                        }
#line 604 "prog_io_item.m"
                        {
#line 604 "prog_io_item.m"
                          parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 604 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 604 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[110])));
#line 604 "prog_io_item.m"
                        }
#line 605 "prog_io_item.m"
                        {
#line 605 "prog_io_item.m"
                          parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 605 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "prog_io_item.m"
                        }
#line 602 "prog_io_item.m"
                        {
#line 602 "prog_io_item.m"
                          parse_tree__prog_io_item__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 602 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 602 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 602 "prog_io_item.m"
                        }
#line 606 "prog_io_item.m"
                        {
#line 606 "prog_io_item.m"
                          parse_tree__prog_io_item__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_38));
#line 606 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "prog_io_item.m"
                        }
#line 606 "prog_io_item.m"
                        {
#line 606 "prog_io_item.m"
                          MR_Word base;
#line 606 "prog_io_item.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 606 "prog_io_item.m"
                          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 606 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_83_83));
#line 606 "prog_io_item.m"
                        }
#line 601 "prog_io_item.m"
                      }
#line 607 "prog_io_item.m"
                    else
#line 619 "prog_io_item.m"
                      {
#line 608 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_85_85;
#line 609 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_39_39;
#line 610 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_42_42;
#line 610 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_40_40;
#line 610 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_41_41;

#line 608 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 608 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 608 "prog_io_item.m"
                          {
#line 609 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithType_16)) == (MR_mktag((MR_Integer) 1)));
#line 609 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 609 "prog_io_item.m"
                              {
#line 609 "prog_io_item.m"
                                parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithType_16, (MR_Integer) 0)));
#line 610 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_33)) == (MR_mktag((MR_Integer) 1)));
#line 610 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 610 "prog_io_item.m"
                                  {
#line 610 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 0)));
#line 610 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 1)));
#line 610 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 610 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 610 "prog_io_item.m"
                                      {
#line 610 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, (MR_Integer) 0)));
#line 610 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, (MR_Integer) 1)));
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
                            MR_Word parse_tree__prog_io_item__V_99_99;
#line 613 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_100_100;
#line 613 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_101_101;
#line 613 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_106_106;
#line 613 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Spec_190;

#line 616 "prog_io_item.m"
                            {
#line 616 "prog_io_item.m"
                              parse_tree__prog_io_item__V_101_101 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__PredTypeTerm_15);
                            }
#line 616 "prog_io_item.m"
                            {
#line 616 "prog_io_item.m"
                              parse_tree__prog_io_item__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 616 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_item__V_101_101));
#line 616 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[111])));
#line 616 "prog_io_item.m"
                            }
#line 617 "prog_io_item.m"
                            {
#line 617 "prog_io_item.m"
                              parse_tree__prog_io_item__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_item__V_100_100));
#line 617 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "prog_io_item.m"
                            }
#line 614 "prog_io_item.m"
                            {
#line 614 "prog_io_item.m"
                              parse_tree__prog_io_item__Spec_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 614 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_190, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 614 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_190, 2) = ((MR_Box) (parse_tree__prog_io_item__V_99_99));
#line 614 "prog_io_item.m"
                            }
#line 618 "prog_io_item.m"
                            {
#line 618 "prog_io_item.m"
                              parse_tree__prog_io_item__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_190));
#line 618 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 618 "prog_io_item.m"
                            }
#line 618 "prog_io_item.m"
                            {
#line 618 "prog_io_item.m"
                              MR_Word base;
#line 618 "prog_io_item.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 618 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 618 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_106_106));
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
                              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__Args_33);
                            }
#line 633 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 622 "prog_io_item.m"
                              {
#line 622 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Purity_43;
#line 622 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Attributes_44;
#line 622 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__TVarSet_45;
#line 622 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__IVarSet_46;
#line 622 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ItemPredDecl_48;
#line 622 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Item_49;
#line 622 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeItem0_50;

#line 622 "prog_io_item.m"
                                {
#line 622 "prog_io_item.m"
                                  parse_tree__prog_io_item__get_purity_3_p_0(&parse_tree__prog_io_item__Purity_43, parse_tree__prog_io_item__Attributes1_23, &parse_tree__prog_io_item__Attributes_44);
                                }
#line 623 "prog_io_item.m"
                                {
#line 623 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_14, &parse_tree__prog_io_item__TVarSet_45);
                                }
#line 624 "prog_io_item.m"
                                {
#line 624 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_14, &parse_tree__prog_io_item__IVarSet_46);
                                }
#line 626 "prog_io_item.m"
                                {
#line 626 "prog_io_item.m"
                                  parse_tree__prog_io_item__ItemPredDecl_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 1) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_45));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 2) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_46));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 3) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_26));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 4) = ((MR_Box) (parse_tree__prog_io_item__PredOrFunc_12));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 5) = ((MR_Box) (parse_tree__prog_io_item__Functor_31));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 6) = ((MR_Box) (parse_tree__prog_io_item__Args_33));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 7) = ((MR_Box) (parse_tree__prog_io_item__WithType_16));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 8) = ((MR_Box) (parse_tree__prog_io_item__WithInst_17));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 9) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_18));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 10) = ((MR_Box) (parse_tree__prog_io_item__Purity_43));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 11) = ((MR_Box) (parse_tree__prog_io_item__Constraints_27));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 12) = ((MR_Box) (parse_tree__prog_io_item__Context_20));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 13) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_21));
#line 626 "prog_io_item.m"
                                }
#line 630 "prog_io_item.m"
                                {
#line 630 "prog_io_item.m"
                                  parse_tree__prog_io_item__Item_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 630 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_49, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_48));
#line 630 "prog_io_item.m"
                                }
#line 631 "prog_io_item.m"
                                {
#line 631 "prog_io_item.m"
                                  parse_tree__prog_io_item__MaybeItem0_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_50, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_49));
#line 631 "prog_io_item.m"
                                }
#line 632 "prog_io_item.m"
                                {
#line 632 "prog_io_item.m"
                                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_50, parse_tree__prog_io_item__Attributes_44, parse_tree__prog_io_item__MaybeItem_22);
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
                                MR_String parse_tree__prog_io_item__PredTypeTermStr_51;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_115_115;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_116_116;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_117_117;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_120_120;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_122_122;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_123_123;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_132_132;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_133_133;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_134_134;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_135_135;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_136_136;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_139_139;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Pieces_191;
#line 635 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Spec_192;

#line 634 "prog_io_item.m"
                                {
#line 634 "prog_io_item.m"
                                  parse_tree__prog_io_item__PredTypeTermStr_51 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__PredTypeTerm_15);
                                }
#line 638 "prog_io_item.m"
                                {
#line 638 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_116_116 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
                                }
#line 640 "prog_io_item.m"
                                {
#line 640 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 640 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_123_123, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_51));
#line 640 "prog_io_item.m"
                                }
#line 640 "prog_io_item.m"
                                {
#line 640 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_item__V_123_123));
#line 640 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 640 "prog_io_item.m"
                                }
#line 639 "prog_io_item.m"
                                {
#line 639 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_120_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 639 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_120_120, 1) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 639 "prog_io_item.m"
                                }
#line 639 "prog_io_item.m"
                                {
#line 639 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_117_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[108])));
#line 639 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_117_117, 1) = ((MR_Box) (parse_tree__prog_io_item__V_120_120));
#line 639 "prog_io_item.m"
                                }
#line 638 "prog_io_item.m"
                                {
#line 638 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_115_115 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_204_204, parse_tree__prog_io_item__V_116_116, parse_tree__prog_io_item__V_117_117);
                                }
#line 637 "prog_io_item.m"
                                {
#line 637 "prog_io_item.m"
                                  parse_tree__prog_io_item__Pieces_191 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_204_204, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[46]), parse_tree__prog_io_item__V_115_115);
                                }
#line 643 "prog_io_item.m"
                                {
#line 643 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_134_134 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__PredTypeTerm_15);
                                }
#line 644 "prog_io_item.m"
                                {
#line 644 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 644 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_136_136, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_191));
#line 644 "prog_io_item.m"
                                }
#line 644 "prog_io_item.m"
                                {
#line 644 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_135_135, 0) = ((MR_Box) (parse_tree__prog_io_item__V_136_136));
#line 644 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "prog_io_item.m"
                                }
#line 643 "prog_io_item.m"
                                {
#line 643 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 643 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_133_133, 0) = ((MR_Box) (parse_tree__prog_io_item__V_134_134));
#line 643 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_133_133, 1) = ((MR_Box) (parse_tree__prog_io_item__V_135_135));
#line 643 "prog_io_item.m"
                                }
#line 644 "prog_io_item.m"
                                {
#line 644 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_132_132, 0) = ((MR_Box) (parse_tree__prog_io_item__V_133_133));
#line 644 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "prog_io_item.m"
                                }
#line 641 "prog_io_item.m"
                                {
#line 641 "prog_io_item.m"
                                  parse_tree__prog_io_item__Spec_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 641 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_192, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 641 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_192, 2) = ((MR_Box) (parse_tree__prog_io_item__V_132_132));
#line 641 "prog_io_item.m"
                                }
#line 645 "prog_io_item.m"
                                {
#line 645 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_139_139, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_192));
#line 645 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "prog_io_item.m"
                                }
#line 645 "prog_io_item.m"
                                {
#line 645 "prog_io_item.m"
                                  MR_Word base;
#line 645 "prog_io_item.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 645 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 645 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_139_139));
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
                    MR_Word parse_tree__prog_io_item__V_151_151;
#line 649 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_152_152;
#line 649 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_153_153;
#line 649 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_158_158;
#line 649 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_198;

#line 651 "prog_io_item.m"
                    {
#line 651 "prog_io_item.m"
                      parse_tree__prog_io_item__V_153_153 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__PredTypeTerm_15);
                    }
#line 651 "prog_io_item.m"
                    {
#line 651 "prog_io_item.m"
                      parse_tree__prog_io_item__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 651 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_152_152, 0) = ((MR_Box) (parse_tree__prog_io_item__V_153_153));
#line 651 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[112])));
#line 651 "prog_io_item.m"
                    }
#line 652 "prog_io_item.m"
                    {
#line 652 "prog_io_item.m"
                      parse_tree__prog_io_item__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_151_151, 0) = ((MR_Box) (parse_tree__prog_io_item__V_152_152));
#line 652 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "prog_io_item.m"
                    }
#line 650 "prog_io_item.m"
                    {
#line 650 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 650 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_198, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 650 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 650 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_198, 2) = ((MR_Box) (parse_tree__prog_io_item__V_151_151));
#line 650 "prog_io_item.m"
                    }
#line 653 "prog_io_item.m"
                    {
#line 653 "prog_io_item.m"
                      parse_tree__prog_io_item__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_158_158, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_198));
#line 653 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 653 "prog_io_item.m"
                    }
#line 653 "prog_io_item.m"
                    {
#line 653 "prog_io_item.m"
                      MR_Word base;
#line 653 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 653 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 653 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_158_158));
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
                MR_Word parse_tree__prog_io_item__V_164_164;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_165_165;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_166_166;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_169_169;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_170_170;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_179_179;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_180_180;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_181_181;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_182_182;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_183_183;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_186_186;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_199;
#line 656 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_200;
#line 656 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredTypeTermStr_201;

#line 656 "prog_io_item.m"
                {
#line 656 "prog_io_item.m"
                  parse_tree__prog_io_item__PredTypeTermStr_201 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__PredTypeTerm_15);
                }
#line 658 "prog_io_item.m"
                {
#line 658 "prog_io_item.m"
                  parse_tree__prog_io_item__V_165_165 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
                }
#line 659 "prog_io_item.m"
                {
#line 659 "prog_io_item.m"
                  parse_tree__prog_io_item__V_170_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_170_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_170_170, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_201));
#line 659 "prog_io_item.m"
                }
#line 659 "prog_io_item.m"
                {
#line 659 "prog_io_item.m"
                  parse_tree__prog_io_item__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_169_169, 0) = ((MR_Box) (parse_tree__prog_io_item__V_170_170));
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_169_169, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 659 "prog_io_item.m"
                }
#line 659 "prog_io_item.m"
                {
#line 659 "prog_io_item.m"
                  parse_tree__prog_io_item__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_166_166, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[115])));
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_166_166, 1) = ((MR_Box) (parse_tree__prog_io_item__V_169_169));
#line 659 "prog_io_item.m"
                }
#line 658 "prog_io_item.m"
                {
#line 658 "prog_io_item.m"
                  parse_tree__prog_io_item__V_164_164 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_204_204, parse_tree__prog_io_item__V_165_165, parse_tree__prog_io_item__V_166_166);
                }
#line 657 "prog_io_item.m"
                {
#line 657 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_199 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_204_204, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[114]), parse_tree__prog_io_item__V_164_164);
                }
#line 661 "prog_io_item.m"
                {
#line 661 "prog_io_item.m"
                  parse_tree__prog_io_item__V_181_181 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__PredTypeTerm_15);
                }
#line 662 "prog_io_item.m"
                {
#line 662 "prog_io_item.m"
                  parse_tree__prog_io_item__V_183_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 662 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_183_183, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_199));
#line 662 "prog_io_item.m"
                }
#line 662 "prog_io_item.m"
                {
#line 662 "prog_io_item.m"
                  parse_tree__prog_io_item__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_182_182, 0) = ((MR_Box) (parse_tree__prog_io_item__V_183_183));
#line 662 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_182_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 662 "prog_io_item.m"
                }
#line 661 "prog_io_item.m"
                {
#line 661 "prog_io_item.m"
                  parse_tree__prog_io_item__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 661 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 0) = ((MR_Box) (parse_tree__prog_io_item__V_181_181));
#line 661 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 1) = ((MR_Box) (parse_tree__prog_io_item__V_182_182));
#line 661 "prog_io_item.m"
                }
#line 662 "prog_io_item.m"
                {
#line 662 "prog_io_item.m"
                  parse_tree__prog_io_item__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_179_179, 0) = ((MR_Box) (parse_tree__prog_io_item__V_180_180));
#line 662 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_179_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 662 "prog_io_item.m"
                }
#line 660 "prog_io_item.m"
                {
#line 660 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_200, 2) = ((MR_Box) (parse_tree__prog_io_item__V_179_179));
#line 660 "prog_io_item.m"
                }
#line 663 "prog_io_item.m"
                {
#line 663 "prog_io_item.m"
                  parse_tree__prog_io_item__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_186_186, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_200));
#line 663 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_186_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 663 "prog_io_item.m"
                }
#line 663 "prog_io_item.m"
                {
#line 663 "prog_io_item.m"
                  MR_Word base;
#line 663 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 663 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 663 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_186_186));
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

#line 508 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0(
#line 508 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_9,
#line 508 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 508 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 508 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 508 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 508 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 508 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 508 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 508 "prog_io_item.m"
{
#line 513 "prog_io_item.m"
  {
#line 513 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 513 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTerm_17;
#line 513 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_18;
#line 513 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTerm_19;
#line 513 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithInst_20;
#line 513 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithType_22;
#line 513 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BaseTerm_23;
#line 559 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeDetism_24;
#line 559 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithInst_25;
#line 559 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithType_26;

#line 514 "prog_io_item.m"
    {
#line 514 "prog_io_item.m"
      parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__Term_12, &parse_tree__prog_io_item__BeforeDetismTerm_17, &parse_tree__prog_io_item__MaybeMaybeDetism_18);
    }
#line 516 "prog_io_item.m"
    {
#line 516 "prog_io_item.m"
      parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(parse_tree__prog_io_item__BeforeDetismTerm_17, &parse_tree__prog_io_item__BeforeWithInstTerm_19, &parse_tree__prog_io_item__MaybeWithInst_20);
    }
#line 518 "prog_io_item.m"
    {
#line 518 "prog_io_item.m"
      parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BeforeWithInstTerm_19, &parse_tree__prog_io_item__BaseTerm_23, &parse_tree__prog_io_item__MaybeWithType_22);
    }
#line 522 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_18)) == (MR_mktag((MR_Integer) 1)));
#line 522 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 522 "prog_io_item.m"
      {
#line 522 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeDetism_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_18, (MR_Integer) 0)));
#line 523 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_20)) == (MR_mktag((MR_Integer) 1)));
#line 523 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 523 "prog_io_item.m"
          {
#line 523 "prog_io_item.m"
            parse_tree__prog_io_item__WithInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_20, (MR_Integer) 0)));
#line 524 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithType_22)) == (MR_mktag((MR_Integer) 1)));
#line 524 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 524 "prog_io_item.m"
              parse_tree__prog_io_item__WithType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithType_22, (MR_Integer) 0)));
#line 523 "prog_io_item.m"
          }
#line 522 "prog_io_item.m"
      }
#line 559 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 535 "prog_io_item.m"
      {
#line 527 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_27_27;
#line 528 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_28_28;

#line 527 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_24)) == (MR_mktag((MR_Integer) 1)));
#line 527 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 527 "prog_io_item.m"
          {
#line 527 "prog_io_item.m"
            parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_24, (MR_Integer) 0)));
#line 528 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_25)) == (MR_mktag((MR_Integer) 1)));
#line 528 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 528 "prog_io_item.m"
              parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_25, (MR_Integer) 0)));
#line 527 "prog_io_item.m"
          }
#line 535 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 531 "prog_io_item.m"
          {
#line 531 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_30;
#line 531 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_46_46;
#line 531 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_47_47;
#line 531 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_48_48;
#line 531 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_53_53;

#line 533 "prog_io_item.m"
            {
#line 533 "prog_io_item.m"
              parse_tree__prog_io_item__V_48_48 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_23);
            }
#line 533 "prog_io_item.m"
            {
#line 533 "prog_io_item.m"
              parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 533 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__V_48_48));
#line 533 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[104])));
#line 533 "prog_io_item.m"
            }
#line 533 "prog_io_item.m"
            {
#line 533 "prog_io_item.m"
              parse_tree__prog_io_item__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 533 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "prog_io_item.m"
            }
#line 532 "prog_io_item.m"
            {
#line 532 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 532 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 532 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 2) = ((MR_Box) (parse_tree__prog_io_item__V_46_46));
#line 532 "prog_io_item.m"
            }
#line 534 "prog_io_item.m"
            {
#line 534 "prog_io_item.m"
              parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_30));
#line 534 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 534 "prog_io_item.m"
            }
#line 531 "prog_io_item.m"
          }
#line 535 "prog_io_item.m"
        else
#line 544 "prog_io_item.m"
          {
#line 536 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_31_31;

#line 536 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_25)) == (MR_mktag((MR_Integer) 1)));
#line 536 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 536 "prog_io_item.m"
              {
#line 536 "prog_io_item.m"
                parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_25, (MR_Integer) 0)));
#line 537 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "prog_io_item.m"
              }
#line 544 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 540 "prog_io_item.m"
              {
#line 540 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_77_77;
#line 540 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_78_78;
#line 540 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_79_79;
#line 540 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_84_84;
#line 540 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_91;

#line 542 "prog_io_item.m"
                {
#line 542 "prog_io_item.m"
                  parse_tree__prog_io_item__V_79_79 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_23);
                }
#line 542 "prog_io_item.m"
                {
#line 542 "prog_io_item.m"
                  parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 542 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 542 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[105])));
#line 542 "prog_io_item.m"
                }
#line 542 "prog_io_item.m"
                {
#line 542 "prog_io_item.m"
                  parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 542 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "prog_io_item.m"
                }
#line 541 "prog_io_item.m"
                {
#line 541 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 541 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 541 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 2) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 541 "prog_io_item.m"
                }
#line 543 "prog_io_item.m"
                {
#line 543 "prog_io_item.m"
                  parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_91));
#line 543 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
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
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 551 "prog_io_item.m"
                  {
#line 551 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_func_decl_base_8_p_0(parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BaseTerm_23, parse_tree__prog_io_item__MaybeDetism_24, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 551 "prog_io_item.m"
                    return;
                  }
#line 553 "prog_io_item.m"
                else
#line 554 "prog_io_item.m"
                  {
#line 554 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(parse_tree__prog_io_item__PredOrFunc_9, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BaseTerm_23, parse_tree__prog_io_item__WithType_26, parse_tree__prog_io_item__WithInst_25, parse_tree__prog_io_item__MaybeDetism_24, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
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
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 562 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_32;
#line 562 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_86_86;
#line 562 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_87_87;
#line 562 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_88_88;
#line 562 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_89_89;

#line 560 "prog_io_item.m"
        {
#line 560 "prog_io_item.m"
          parse_tree__prog_io_item__V_86_86 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_18);
        }
#line 561 "prog_io_item.m"
        {
#line 561 "prog_io_item.m"
          parse_tree__prog_io_item__V_88_88 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_20);
        }
#line 562 "prog_io_item.m"
        {
#line 562 "prog_io_item.m"
          parse_tree__prog_io_item__V_89_89 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[4], parse_tree__prog_io_item__MaybeWithType_22);
        }
#line 562 "prog_io_item.m"
        {
#line 562 "prog_io_item.m"
          parse_tree__prog_io_item__V_87_87 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_96_96, parse_tree__prog_io_item__V_88_88, parse_tree__prog_io_item__V_89_89);
        }
#line 561 "prog_io_item.m"
        {
#line 561 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_32 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_96_96, parse_tree__prog_io_item__V_86_86, parse_tree__prog_io_item__V_87_87);
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_32));
#line 563 "prog_io_item.m"
        }
#line 562 "prog_io_item.m"
      }
#line 513 "prog_io_item.m"
  }
#line 508 "prog_io_item.m"
}

#line 349 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_4(
#line 349 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 349 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 349 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 349 "prog_io_item.m"
{
#line 349 "prog_io_item.m"
  {
#line 349 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 349 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv3_MaybeModule_8;

#line 349 "prog_io_item.m"
    {
#line 349 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv3_MaybeModule_8);
    }
#line 349 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv3_MaybeModule_8));
#line 349 "prog_io_item.m"
  }
#line 349 "prog_io_item.m"
}

#line 271 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_3(
#line 271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 271 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 271 "prog_io_item.m"
{
#line 271 "prog_io_item.m"
  {
#line 271 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 271 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv2_MaybeModuleSpecifier_6;

#line 271 "prog_io_item.m"
    {
#line 271 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_specifier_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv2_MaybeModuleSpecifier_6);
    }
#line 271 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv2_MaybeModuleSpecifier_6));
#line 271 "prog_io_item.m"
  }
#line 271 "prog_io_item.m"
}

#line 271 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_2(
#line 271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 271 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 271 "prog_io_item.m"
{
#line 271 "prog_io_item.m"
  {
#line 271 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 271 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv1_MaybeModuleSpecifier_6;

#line 271 "prog_io_item.m"
    {
#line 271 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_specifier_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv1_MaybeModuleSpecifier_6);
    }
#line 271 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv1_MaybeModuleSpecifier_6));
#line 271 "prog_io_item.m"
  }
#line 271 "prog_io_item.m"
}

#line 271 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_1(
#line 271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 271 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 271 "prog_io_item.m"
{
#line 271 "prog_io_item.m"
  {
#line 271 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 271 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_MaybeModuleSpecifier_6;

#line 271 "prog_io_item.m"
    {
#line 271 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_specifier_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_MaybeModuleSpecifier_6);
    }
#line 271 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_MaybeModuleSpecifier_6));
#line 271 "prog_io_item.m"
  }
#line 271 "prog_io_item.m"
}

#line 219 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0(
#line 219 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 219 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 219 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_11,
#line 219 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_12,
#line 219 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 219 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 219 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 219 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 219 "prog_io_item.m"
{
#line 226 "prog_io_item.m"
  {
#line 226 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 226 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "func") == 0))
#line 255 "prog_io_item.m"
      {
#line 255 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DeclTerm_25;
#line 255 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_70_70;

#line 256 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 256 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 256 "prog_io_item.m"
          {
#line 256 "prog_io_item.m"
            parse_tree__prog_io_item__DeclTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 256 "prog_io_item.m"
            parse_tree__prog_io_item__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 256 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 255 "prog_io_item.m"
              {
#line 257 "prog_io_item.m"
                {
#line 257 "prog_io_item.m"
                  parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0((MR_Integer) 1, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__DeclTerm_25, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                }
#line 257 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 255 "prog_io_item.m"
              }
#line 256 "prog_io_item.m"
          }
#line 255 "prog_io_item.m"
      }
#line 226 "prog_io_item.m"
    else
#line 226 "prog_io_item.m"
      if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "inst") == 0))
#line 231 "prog_io_item.m"
        {
#line 231 "prog_io_item.m"
          MR_Word parse_tree__prog_io_item__TypeCtorInfo_125_125;
#line 231 "prog_io_item.m"
          MR_Word parse_tree__prog_io_item__InstDeclTerm_18;
#line 231 "prog_io_item.m"
          MR_Word parse_tree__prog_io_item__MaybeItem0_19;
#line 231 "prog_io_item.m"
          MR_Word parse_tree__prog_io_item__V_77_77;

#line 232 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 232 "prog_io_item.m"
          if (parse_tree__prog_io_item__succeeded)
#line 232 "prog_io_item.m"
            {
#line 232 "prog_io_item.m"
              parse_tree__prog_io_item__InstDeclTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 232 "prog_io_item.m"
              parse_tree__prog_io_item__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 232 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 231 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 231 "prog_io_item.m"
                {
#line 233 "prog_io_item.m"
                  {
#line 233 "prog_io_item.m"
                    parse_tree__prog_io_mode_defn__parse_inst_defn_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__InstDeclTerm_18, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_19);
                  }
#line 10608 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_125_125 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 235 "prog_io_item.m"
                  {
#line 235 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_125_125, parse_tree__prog_io_item__MaybeItem0_19, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 235 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 231 "prog_io_item.m"
                }
#line 232 "prog_io_item.m"
            }
#line 231 "prog_io_item.m"
        }
#line 226 "prog_io_item.m"
      else
#line 226 "prog_io_item.m"
        if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "mode") == 0))
#line 237 "prog_io_item.m"
          {
#line 237 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__SubTerm_20;
#line 237 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_71_71;
#line 243 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__HeadTerm_21;
#line 243 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__BodyTerm_22;
#line 239 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_72_72;
#line 239 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__V_73_73;
#line 239 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_74_74;
#line 239 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_75_75;
#line 239 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_76_76;
#line 239 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_23_23;

#line 238 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 238 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 238 "prog_io_item.m"
              {
#line 238 "prog_io_item.m"
                parse_tree__prog_io_item__SubTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 238 "prog_io_item.m"
                parse_tree__prog_io_item__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 238 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 237 "prog_io_item.m"
                  {
#line 239 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__SubTerm_20)) == (MR_mktag((MR_Integer) 0)));
#line 239 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 239 "prog_io_item.m"
                      {
#line 239 "prog_io_item.m"
                        parse_tree__prog_io_item__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 0)));
#line 239 "prog_io_item.m"
                        parse_tree__prog_io_item__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 1)));
#line 239 "prog_io_item.m"
                        parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 2)));
#line 239 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_72_72)) == (MR_mktag((MR_Integer) 0)));
#line 239 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 239 "prog_io_item.m"
                          {
#line 239 "prog_io_item.m"
                            parse_tree__prog_io_item__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_72_72, (MR_Integer) 0)));
#line 239 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_73_73, (MR_String) "==") == 0);
#line 239 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 239 "prog_io_item.m"
                              {
#line 239 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_74_74)) == (MR_mktag((MR_Integer) 1)));
#line 239 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 239 "prog_io_item.m"
                                  {
#line 239 "prog_io_item.m"
                                    parse_tree__prog_io_item__HeadTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, (MR_Integer) 0)));
#line 239 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, (MR_Integer) 1)));
#line 239 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_75_75)) == (MR_mktag((MR_Integer) 1)));
#line 239 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 239 "prog_io_item.m"
                                      {
#line 239 "prog_io_item.m"
                                        parse_tree__prog_io_item__BodyTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, (MR_Integer) 0)));
#line 239 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, (MR_Integer) 1)));
#line 239 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "prog_io_item.m"
                                      }
#line 239 "prog_io_item.m"
                                  }
#line 239 "prog_io_item.m"
                              }
#line 239 "prog_io_item.m"
                          }
#line 239 "prog_io_item.m"
                      }
#line 243 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 241 "prog_io_item.m"
                      {
#line 241 "prog_io_item.m"
                        parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__HeadTerm_21, parse_tree__prog_io_item__BodyTerm_22, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 243 "prog_io_item.m"
                    else
#line 245 "prog_io_item.m"
                      {
#line 245 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_mode_decl_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_20, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 243 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 237 "prog_io_item.m"
                  }
#line 238 "prog_io_item.m"
              }
#line 237 "prog_io_item.m"
          }
#line 226 "prog_io_item.m"
        else
#line 226 "prog_io_item.m"
          if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "pred") == 0))
#line 255 "prog_io_item.m"
            {
#line 255 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__DeclTerm_164;
#line 255 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_165_165;

#line 256 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 256 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 256 "prog_io_item.m"
                {
#line 256 "prog_io_item.m"
                  parse_tree__prog_io_item__DeclTerm_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 256 "prog_io_item.m"
                  parse_tree__prog_io_item__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 256 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_165_165 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 255 "prog_io_item.m"
                    {
#line 257 "prog_io_item.m"
                      {
#line 257 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0((MR_Integer) 0, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__DeclTerm_164, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 257 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 255 "prog_io_item.m"
                    }
#line 256 "prog_io_item.m"
                }
#line 255 "prog_io_item.m"
            }
#line 226 "prog_io_item.m"
          else
#line 226 "prog_io_item.m"
            if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "type") == 0))
#line 226 "prog_io_item.m"
              {
#line 226 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeDefnTerm_17;
#line 226 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_78_78;

#line 227 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 227 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 227 "prog_io_item.m"
                  {
#line 227 "prog_io_item.m"
                    parse_tree__prog_io_item__TypeDefnTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 227 "prog_io_item.m"
                    parse_tree__prog_io_item__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 227 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 226 "prog_io_item.m"
                      {
#line 228 "prog_io_item.m"
                        {
#line 228 "prog_io_item.m"
                          parse_tree__prog_io_type_defn__parse_type_defn_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__TypeDefnTerm_17, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                        }
#line 228 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 226 "prog_io_item.m"
                      }
#line 227 "prog_io_item.m"
                  }
#line 226 "prog_io_item.m"
              }
#line 226 "prog_io_item.m"
            else
#line 226 "prog_io_item.m"
              if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "module") == 0))
#line 309 "prog_io_item.m"
                {
#line 309 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__TypeCtorInfo_139_139;
#line 309 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__ModuleNameTerm_38;
#line 309 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__MaybeModuleNameSym_39;
#line 309 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__V_61_61;
#line 309 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__MaybeItem0_83;

#line 310 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 310 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 310 "prog_io_item.m"
                    {
#line 310 "prog_io_item.m"
                      parse_tree__prog_io_item__ModuleNameTerm_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 310 "prog_io_item.m"
                      parse_tree__prog_io_item__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 310 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 309 "prog_io_item.m"
                        {
#line 311 "prog_io_item.m"
                          {
#line 311 "prog_io_item.m"
                            parse_tree__prog_io_item__parse_module_name_4_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ModuleNameTerm_38, &parse_tree__prog_io_item__MaybeModuleNameSym_39);
                          }
#line 319 "prog_io_item.m"
                          if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_39)) == (MR_mktag((MR_Integer) 0))))
#line 321 "prog_io_item.m"
                            parse_tree__prog_io_item__MaybeItem0_83 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_39;
#line 319 "prog_io_item.m"
                          else
#line 314 "prog_io_item.m"
                            {
#line 314 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__ModuleNameSym_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNameSym_39, (MR_Integer) 0)));
#line 314 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__ItemModuleStart_41;
#line 314 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Item_81;

#line 315 "prog_io_item.m"
                              {
#line 315 "prog_io_item.m"
                                parse_tree__prog_io_item__ItemModuleStart_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 315 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleStart_41, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleNameSym_40));
#line 315 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleStart_41, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 315 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleStart_41, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 315 "prog_io_item.m"
                              }
#line 317 "prog_io_item.m"
                              parse_tree__prog_io_item__Item_81 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__ItemModuleStart_41);
#line 318 "prog_io_item.m"
                              {
#line 318 "prog_io_item.m"
                                parse_tree__prog_io_item__MaybeItem0_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_83, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_81));
#line 318 "prog_io_item.m"
                              }
#line 314 "prog_io_item.m"
                            }
#line 10903 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__TypeCtorInfo_139_139 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 323 "prog_io_item.m"
                          {
#line 323 "prog_io_item.m"
                            parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_139_139, parse_tree__prog_io_item__MaybeItem0_83, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                          }
#line 323 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 309 "prog_io_item.m"
                        }
#line 310 "prog_io_item.m"
                    }
#line 309 "prog_io_item.m"
                }
#line 226 "prog_io_item.m"
              else
#line 226 "prog_io_item.m"
                if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "pragma") == 0))
#line 364 "prog_io_item.m"
                  {
#line 364 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__TypeCtorInfo_145_145;
#line 364 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__MaybeItem0_110;

#line 365 "prog_io_item.m"
                    {
#line 365 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_pragma__parse_pragma_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_110);
                    }
#line 364 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 364 "prog_io_item.m"
                      {
#line 10938 "parse_tree.prog_io_item.c"
                        parse_tree__prog_io_item__TypeCtorInfo_145_145 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 367 "prog_io_item.m"
                        {
#line 367 "prog_io_item.m"
                          parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_145_145, parse_tree__prog_io_item__MaybeItem0_110, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                        }
#line 367 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 364 "prog_io_item.m"
                      }
#line 364 "prog_io_item.m"
                  }
#line 226 "prog_io_item.m"
                else
#line 226 "prog_io_item.m"
                  if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "mutable") == 0))
#line 426 "prog_io_item.m"
                    {
#line 426 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__TypeCtorInfo_151_151;
#line 426 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__MaybeItem0_124;

#line 427 "prog_io_item.m"
                      {
#line 427 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = parse_tree__prog_io_mutable__parse_mutable_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_124);
                      }
#line 426 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 426 "prog_io_item.m"
                        {
#line 10971 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__TypeCtorInfo_151_151 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 429 "prog_io_item.m"
                          {
#line 429 "prog_io_item.m"
                            parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_151_151, parse_tree__prog_io_item__MaybeItem0_124, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                          }
#line 429 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 426 "prog_io_item.m"
                        }
#line 426 "prog_io_item.m"
                    }
#line 226 "prog_io_item.m"
                  else
#line 226 "prog_io_item.m"
                    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "promise") == 0))
#line 381 "prog_io_item.m"
                      {
#line 381 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__TypeCtorInfo_146_146;
#line 381 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__MaybeItem0_111;

#line 382 "prog_io_item.m"
                        {
#line 382 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 3, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_111);
                        }
#line 381 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 381 "prog_io_item.m"
                          {
#line 11004 "parse_tree.prog_io_item.c"
                            parse_tree__prog_io_item__TypeCtorInfo_146_146 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 384 "prog_io_item.m"
                            {
#line 384 "prog_io_item.m"
                              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_146_146, parse_tree__prog_io_item__MaybeItem0_111, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                            }
#line 384 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 381 "prog_io_item.m"
                          }
#line 381 "prog_io_item.m"
                      }
#line 226 "prog_io_item.m"
                    else
#line 226 "prog_io_item.m"
                      if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "external") == 0))
#line 287 "prog_io_item.m"
                        {
#line 287 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__TypeCtorInfo_138_138;
#line 287 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__PredSpecTerm_31;
#line 287 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__MaybeBackEnd_32;
#line 287 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__MaybeSymSpec_37;
#line 287 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__MaybeItem0_80;
#line 287 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_181_181;
#line 287 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_182_182;

#line 289 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 289 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 289 "prog_io_item.m"
                            {
#line 289 "prog_io_item.m"
                              parse_tree__prog_io_item__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 289 "prog_io_item.m"
                              parse_tree__prog_io_item__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 291 "prog_io_item.m"
                              if ((parse_tree__prog_io_item__V_181_181 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 289 "prog_io_item.m"
                                {
#line 289 "prog_io_item.m"
                                  parse_tree__prog_io_item__PredSpecTerm_31 = parse_tree__prog_io_item__V_182_182;
#line 290 "prog_io_item.m"
                                  parse_tree__prog_io_item__MaybeBackEnd_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 289 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 289 "prog_io_item.m"
                                }
#line 291 "prog_io_item.m"
                              else
#line 292 "prog_io_item.m"
                                {
#line 292 "prog_io_item.m"
                                  MR_String parse_tree__prog_io_item__BackEndFunctor_34;
#line 292 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__BackEnd_36;
#line 292 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__V_63_63;
#line 292 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__V_64_64;
#line 292 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__V_65_65;
#line 293 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__V_35_35;

#line 292 "prog_io_item.m"
                                  parse_tree__prog_io_item__PredSpecTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_181_181, (MR_Integer) 0)));
#line 292 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_181_181, (MR_Integer) 1)));
#line 292 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 292 "prog_io_item.m"
                                  if (parse_tree__prog_io_item__succeeded)
#line 292 "prog_io_item.m"
                                    {
#line 293 "prog_io_item.m"
                                      parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_182_182)) == (MR_mktag((MR_Integer) 0)));
#line 293 "prog_io_item.m"
                                      if (parse_tree__prog_io_item__succeeded)
#line 293 "prog_io_item.m"
                                        {
#line 293 "prog_io_item.m"
                                          parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_182_182, (MR_Integer) 0)));
#line 293 "prog_io_item.m"
                                          parse_tree__prog_io_item__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_182_182, (MR_Integer) 1)));
#line 293 "prog_io_item.m"
                                          parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_182_182, (MR_Integer) 2)));
#line 293 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 292 "prog_io_item.m"
                                          if (parse_tree__prog_io_item__succeeded)
#line 292 "prog_io_item.m"
                                            {
#line 293 "prog_io_item.m"
                                              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 293 "prog_io_item.m"
                                              if (parse_tree__prog_io_item__succeeded)
#line 293 "prog_io_item.m"
                                                {
#line 293 "prog_io_item.m"
                                                  parse_tree__prog_io_item__BackEndFunctor_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 297 "prog_io_item.m"
                                                  if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_34, (MR_String) "low_level_backend") == 0))
#line 298 "prog_io_item.m"
                                                    {
#line 298 "prog_io_item.m"
                                                      parse_tree__prog_io_item__BackEnd_36 = (MR_Integer) 1;
#line 298 "prog_io_item.m"
                                                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 298 "prog_io_item.m"
                                                    }
#line 297 "prog_io_item.m"
                                                  else
#line 297 "prog_io_item.m"
                                                    if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_34, (MR_String) "high_level_backend") == 0))
#line 295 "prog_io_item.m"
                                                      {
#line 295 "prog_io_item.m"
                                                        parse_tree__prog_io_item__BackEnd_36 = (MR_Integer) 0;
#line 295 "prog_io_item.m"
                                                        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 295 "prog_io_item.m"
                                                      }
#line 297 "prog_io_item.m"
                                                    else
#line 297 "prog_io_item.m"
                                                      parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 292 "prog_io_item.m"
                                                  if (parse_tree__prog_io_item__succeeded)
#line 292 "prog_io_item.m"
                                                    {
#line 301 "prog_io_item.m"
                                                      {
#line 301 "prog_io_item.m"
                                                        parse_tree__prog_io_item__MaybeBackEnd_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 301 "prog_io_item.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeBackEnd_32, 0) = ((MR_Box) (parse_tree__prog_io_item__BackEnd_36));
#line 301 "prog_io_item.m"
                                                      }
#line 301 "prog_io_item.m"
                                                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 292 "prog_io_item.m"
                                                    }
#line 293 "prog_io_item.m"
                                                }
#line 292 "prog_io_item.m"
                                            }
#line 293 "prog_io_item.m"
                                        }
#line 292 "prog_io_item.m"
                                    }
#line 292 "prog_io_item.m"
                                }
#line 287 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 287 "prog_io_item.m"
                                {
#line 303 "prog_io_item.m"
                                  {
#line 303 "prog_io_item.m"
                                    parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__PredSpecTerm_31, &parse_tree__prog_io_item__MaybeSymSpec_37);
                                  }
#line 11174 "parse_tree.prog_io_item.c"
                                  parse_tree__prog_io_item__TypeCtorInfo_138_138 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 305 "prog_io_item.m"
                                  {
#line 305 "prog_io_item.m"
                                    parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(parse_tree__prog_io_item__MaybeBackEnd_32, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeSymSpec_37, &parse_tree__prog_io_item__MaybeItem0_80);
                                  }
#line 307 "prog_io_item.m"
                                  {
#line 307 "prog_io_item.m"
                                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_138_138, parse_tree__prog_io_item__MaybeItem0_80, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                  }
#line 307 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 287 "prog_io_item.m"
                                }
#line 289 "prog_io_item.m"
                            }
#line 287 "prog_io_item.m"
                        }
#line 226 "prog_io_item.m"
                      else
#line 226 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "instance") == 0))
#line 398 "prog_io_item.m"
                          {
#line 398 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__TypeCtorInfo_148_148;
#line 398 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__MaybeItemInstance_51;
#line 398 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__MaybeItem0_118;

#line 399 "prog_io_item.m"
                            {
#line 399 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_typeclass__parse_instance_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItemInstance_51);
                            }
#line 398 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 398 "prog_io_item.m"
                              {
#line 404 "prog_io_item.m"
                                if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItemInstance_51)) == (MR_mktag((MR_Integer) 0))))
#line 406 "prog_io_item.m"
                                  parse_tree__prog_io_item__MaybeItem0_118 = (MR_Word) parse_tree__prog_io_item__MaybeItemInstance_51;
#line 404 "prog_io_item.m"
                                else
#line 402 "prog_io_item.m"
                                  {
#line 402 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__ItemInstance_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItemInstance_51, (MR_Integer) 0)));
#line 402 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__V_55_55;

#line 403 "prog_io_item.m"
                                    {
#line 403 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 403 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_55_55, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemInstance_52));
#line 403 "prog_io_item.m"
                                    }
#line 403 "prog_io_item.m"
                                    {
#line 403 "prog_io_item.m"
                                      parse_tree__prog_io_item__MaybeItem0_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 403 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_118, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 403 "prog_io_item.m"
                                    }
#line 402 "prog_io_item.m"
                                  }
#line 11249 "parse_tree.prog_io_item.c"
                                parse_tree__prog_io_item__TypeCtorInfo_148_148 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 408 "prog_io_item.m"
                                {
#line 408 "prog_io_item.m"
                                  parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__MaybeItem0_118, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                }
#line 408 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 398 "prog_io_item.m"
                              }
#line 398 "prog_io_item.m"
                          }
#line 226 "prog_io_item.m"
                        else
#line 226 "prog_io_item.m"
                          if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "interface") == 0))
#line 280 "prog_io_item.m"
                            {
#line 280 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__TypeCtorInfo_134_162;
#line 280 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__ModuleDefn_158;
#line 280 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__ItemModuleDefn_159;
#line 280 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Item_160;
#line 280 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__MaybeItem0_161;

#line 281 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__ArgTerms_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 280 "prog_io_item.m"
                                {
#line 276 "prog_io_item.m"
                                  parse_tree__prog_io_item__ModuleDefn_158 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11287 "parse_tree.prog_io_item.c"
                                  parse_tree__prog_io_item__TypeCtorInfo_134_162 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 282 "prog_io_item.m"
                                  {
#line 282 "prog_io_item.m"
                                    parse_tree__prog_io_item__ItemModuleDefn_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 282 "prog_io_item.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_159, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_158));
#line 282 "prog_io_item.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_159, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 282 "prog_io_item.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_159, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 282 "prog_io_item.m"
                                  }
#line 283 "prog_io_item.m"
                                  parse_tree__prog_io_item__Item_160 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_159);
#line 284 "prog_io_item.m"
                                  {
#line 284 "prog_io_item.m"
                                    parse_tree__prog_io_item__MaybeItem0_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 284 "prog_io_item.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_161, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_160));
#line 284 "prog_io_item.m"
                                  }
#line 285 "prog_io_item.m"
                                  {
#line 285 "prog_io_item.m"
                                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_134_162, parse_tree__prog_io_item__MaybeItem0_161, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                  }
#line 285 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 280 "prog_io_item.m"
                                }
#line 280 "prog_io_item.m"
                            }
#line 226 "prog_io_item.m"
                          else
#line 226 "prog_io_item.m"
                            if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "typeclass") == 0))
#line 386 "prog_io_item.m"
                              {
#line 386 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__TypeCtorInfo_147_147;
#line 386 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeItemTypeClass_49;
#line 386 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeItem0_114;

#line 387 "prog_io_item.m"
                                {
#line 387 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_typeclass__parse_typeclass_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItemTypeClass_49);
                                }
#line 386 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 386 "prog_io_item.m"
                                  {
#line 392 "prog_io_item.m"
                                    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItemTypeClass_49)) == (MR_mktag((MR_Integer) 0))))
#line 394 "prog_io_item.m"
                                      parse_tree__prog_io_item__MaybeItem0_114 = (MR_Word) parse_tree__prog_io_item__MaybeItemTypeClass_49;
#line 392 "prog_io_item.m"
                                    else
#line 390 "prog_io_item.m"
                                      {
#line 390 "prog_io_item.m"
                                        MR_Word parse_tree__prog_io_item__ItemTypeClass_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItemTypeClass_49, (MR_Integer) 0)));
#line 390 "prog_io_item.m"
                                        MR_Word parse_tree__prog_io_item__V_56_56;

#line 391 "prog_io_item.m"
                                        {
#line 391 "prog_io_item.m"
                                          parse_tree__prog_io_item__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "prog_io_item.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 391 "prog_io_item.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemTypeClass_50));
#line 391 "prog_io_item.m"
                                        }
#line 391 "prog_io_item.m"
                                        {
#line 391 "prog_io_item.m"
                                          parse_tree__prog_io_item__MaybeItem0_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 391 "prog_io_item.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_114, 0) = ((MR_Box) (parse_tree__prog_io_item__V_56_56));
#line 391 "prog_io_item.m"
                                        }
#line 390 "prog_io_item.m"
                                      }
#line 11377 "parse_tree.prog_io_item.c"
                                    parse_tree__prog_io_item__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 396 "prog_io_item.m"
                                    {
#line 396 "prog_io_item.m"
                                      parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_147_147, parse_tree__prog_io_item__MaybeItem0_114, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                    }
#line 396 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 386 "prog_io_item.m"
                                  }
#line 386 "prog_io_item.m"
                              }
#line 226 "prog_io_item.m"
                            else
#line 226 "prog_io_item.m"
                              if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "end_module") == 0))
#line 325 "prog_io_item.m"
                                {
#line 325 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__TypeCtorInfo_140_140;
#line 325 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__ParentOfModuleName_43;
#line 325 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__V_59_59;
#line 325 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__V_60_60;
#line 325 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__MaybeItem0_91;
#line 325 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__ModuleNameTerm_93;
#line 325 "prog_io_item.m"
                                  MR_Word parse_tree__prog_io_item__MaybeModuleNameSym_94;

#line 326 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 326 "prog_io_item.m"
                                  if (parse_tree__prog_io_item__succeeded)
#line 326 "prog_io_item.m"
                                    {
#line 326 "prog_io_item.m"
                                      parse_tree__prog_io_item__ModuleNameTerm_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 326 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 326 "prog_io_item.m"
                                      parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "prog_io_item.m"
                                      if (parse_tree__prog_io_item__succeeded)
#line 325 "prog_io_item.m"
                                        {
#line 331 "prog_io_item.m"
                                          {
#line 331 "prog_io_item.m"
                                            parse_tree__prog_io_item__V_60_60 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
                                          }
#line 331 "prog_io_item.m"
                                          {
#line 331 "prog_io_item.m"
                                            mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__V_60_60, &parse_tree__prog_io_item__ParentOfModuleName_43);
                                          }
#line 333 "prog_io_item.m"
                                          {
#line 333 "prog_io_item.m"
                                            parse_tree__prog_io_item__parse_module_name_4_p_0(parse_tree__prog_io_item__ParentOfModuleName_43, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ModuleNameTerm_93, &parse_tree__prog_io_item__MaybeModuleNameSym_94);
                                          }
#line 341 "prog_io_item.m"
                                          if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_94)) == (MR_mktag((MR_Integer) 0))))
#line 343 "prog_io_item.m"
                                            parse_tree__prog_io_item__MaybeItem0_91 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_94;
#line 341 "prog_io_item.m"
                                          else
#line 336 "prog_io_item.m"
                                            {
#line 336 "prog_io_item.m"
                                              MR_Word parse_tree__prog_io_item__ItemModuleEnd_44;
#line 336 "prog_io_item.m"
                                              MR_Word parse_tree__prog_io_item__Item_85;
#line 336 "prog_io_item.m"
                                              MR_Word parse_tree__prog_io_item__ModuleNameSym_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNameSym_94, (MR_Integer) 0)));

#line 337 "prog_io_item.m"
                                              {
#line 337 "prog_io_item.m"
                                                parse_tree__prog_io_item__ItemModuleEnd_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 337 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleEnd_44, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleNameSym_86));
#line 337 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleEnd_44, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 337 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleEnd_44, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 337 "prog_io_item.m"
                                              }
#line 339 "prog_io_item.m"
                                              parse_tree__prog_io_item__Item_85 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_item__ItemModuleEnd_44);
#line 340 "prog_io_item.m"
                                              {
#line 340 "prog_io_item.m"
                                                parse_tree__prog_io_item__MaybeItem0_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 340 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_91, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_85));
#line 340 "prog_io_item.m"
                                              }
#line 336 "prog_io_item.m"
                                            }
#line 11481 "parse_tree.prog_io_item.c"
                                          parse_tree__prog_io_item__TypeCtorInfo_140_140 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 345 "prog_io_item.m"
                                          {
#line 345 "prog_io_item.m"
                                            parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_140_140, parse_tree__prog_io_item__MaybeItem0_91, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                          }
#line 345 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 325 "prog_io_item.m"
                                        }
#line 326 "prog_io_item.m"
                                    }
#line 325 "prog_io_item.m"
                                }
#line 226 "prog_io_item.m"
                              else
#line 226 "prog_io_item.m"
                                if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "use_module") == 0))
#line 269 "prog_io_item.m"
                                  {
#line 269 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__ModuleSpecTerm_178;
#line 269 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__V_179_179;
#line 269 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__V_180_180;

#line 270 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 270 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 270 "prog_io_item.m"
                                      {
#line 270 "prog_io_item.m"
                                        parse_tree__prog_io_item__ModuleSpecTerm_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 270 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 270 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_179_179 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "prog_io_item.m"
                                        if (parse_tree__prog_io_item__succeeded)
#line 269 "prog_io_item.m"
                                          {
#line 271 "prog_io_item.m"
                                            {
#line 271 "prog_io_item.m"
                                              parse_tree__prog_io_item__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 271 "prog_io_item.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 271 "prog_io_item.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_1));
#line 271 "prog_io_item.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 271 "prog_io_item.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 271 "prog_io_item.m"
                                            }
#line 271 "prog_io_item.m"
                                            {
#line 271 "prog_io_item.m"
                                              parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io_item__V_180_180, parse_tree__prog_io_item__ModuleSpecTerm_178, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                                            }
#line 271 "prog_io_item.m"
                                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 269 "prog_io_item.m"
                                          }
#line 270 "prog_io_item.m"
                                      }
#line 269 "prog_io_item.m"
                                  }
#line 226 "prog_io_item.m"
                                else
#line 226 "prog_io_item.m"
                                  if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "export_module") == 0))
#line 269 "prog_io_item.m"
                                    {
#line 269 "prog_io_item.m"
                                      MR_Word parse_tree__prog_io_item__ModuleSpecTerm_27;
#line 269 "prog_io_item.m"
                                      MR_Word parse_tree__prog_io_item__V_68_68;
#line 269 "prog_io_item.m"
                                      MR_Word parse_tree__prog_io_item__V_69_69;

#line 270 "prog_io_item.m"
                                      parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 270 "prog_io_item.m"
                                      if (parse_tree__prog_io_item__succeeded)
#line 270 "prog_io_item.m"
                                        {
#line 270 "prog_io_item.m"
                                          parse_tree__prog_io_item__ModuleSpecTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 270 "prog_io_item.m"
                                          parse_tree__prog_io_item__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 270 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "prog_io_item.m"
                                          if (parse_tree__prog_io_item__succeeded)
#line 269 "prog_io_item.m"
                                            {
#line 271 "prog_io_item.m"
                                              {
#line 271 "prog_io_item.m"
                                                parse_tree__prog_io_item__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 271 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 271 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_2));
#line 271 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 271 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 271 "prog_io_item.m"
                                              }
#line 271 "prog_io_item.m"
                                              {
#line 271 "prog_io_item.m"
                                                parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io_item__V_69_69, parse_tree__prog_io_item__ModuleSpecTerm_27, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                                              }
#line 271 "prog_io_item.m"
                                              parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 269 "prog_io_item.m"
                                            }
#line 270 "prog_io_item.m"
                                        }
#line 269 "prog_io_item.m"
                                    }
#line 226 "prog_io_item.m"
                                  else
#line 226 "prog_io_item.m"
                                    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "import_module") == 0))
#line 269 "prog_io_item.m"
                                      {
#line 269 "prog_io_item.m"
                                        MR_Word parse_tree__prog_io_item__ModuleSpecTerm_155;
#line 269 "prog_io_item.m"
                                        MR_Word parse_tree__prog_io_item__V_156_156;
#line 269 "prog_io_item.m"
                                        MR_Word parse_tree__prog_io_item__V_157_157;

#line 270 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 270 "prog_io_item.m"
                                        if (parse_tree__prog_io_item__succeeded)
#line 270 "prog_io_item.m"
                                          {
#line 270 "prog_io_item.m"
                                            parse_tree__prog_io_item__ModuleSpecTerm_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 270 "prog_io_item.m"
                                            parse_tree__prog_io_item__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 270 "prog_io_item.m"
                                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_156_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "prog_io_item.m"
                                            if (parse_tree__prog_io_item__succeeded)
#line 269 "prog_io_item.m"
                                              {
#line 271 "prog_io_item.m"
                                                {
#line 271 "prog_io_item.m"
                                                  parse_tree__prog_io_item__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 271 "prog_io_item.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_157_157, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 271 "prog_io_item.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_157_157, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_3));
#line 271 "prog_io_item.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_157_157, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 271 "prog_io_item.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_157_157, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 271 "prog_io_item.m"
                                                }
#line 271 "prog_io_item.m"
                                                {
#line 271 "prog_io_item.m"
                                                  parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io_item__V_157_157, parse_tree__prog_io_item__ModuleSpecTerm_155, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                                                }
#line 271 "prog_io_item.m"
                                                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 269 "prog_io_item.m"
                                              }
#line 270 "prog_io_item.m"
                                          }
#line 269 "prog_io_item.m"
                                      }
#line 226 "prog_io_item.m"
                                    else
#line 226 "prog_io_item.m"
                                      if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "implementation") == 0))
#line 280 "prog_io_item.m"
                                        {
#line 280 "prog_io_item.m"
                                          MR_Word parse_tree__prog_io_item__TypeCtorInfo_134_134;
#line 280 "prog_io_item.m"
                                          MR_Word parse_tree__prog_io_item__ModuleDefn_28;
#line 280 "prog_io_item.m"
                                          MR_Word parse_tree__prog_io_item__ItemModuleDefn_29;
#line 280 "prog_io_item.m"
                                          MR_Word parse_tree__prog_io_item__Item_30;
#line 280 "prog_io_item.m"
                                          MR_Word parse_tree__prog_io_item__MaybeItem0_79;

#line 281 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__ArgTerms_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "prog_io_item.m"
                                          if (parse_tree__prog_io_item__succeeded)
#line 280 "prog_io_item.m"
                                            {
#line 279 "prog_io_item.m"
                                              parse_tree__prog_io_item__ModuleDefn_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 11689 "parse_tree.prog_io_item.c"
                                              parse_tree__prog_io_item__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 282 "prog_io_item.m"
                                              {
#line 282 "prog_io_item.m"
                                                parse_tree__prog_io_item__ItemModuleDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 282 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_29, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_28));
#line 282 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_29, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 282 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_29, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 282 "prog_io_item.m"
                                              }
#line 283 "prog_io_item.m"
                                              parse_tree__prog_io_item__Item_30 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_29);
#line 284 "prog_io_item.m"
                                              {
#line 284 "prog_io_item.m"
                                                parse_tree__prog_io_item__MaybeItem0_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 284 "prog_io_item.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_79, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_30));
#line 284 "prog_io_item.m"
                                              }
#line 285 "prog_io_item.m"
                                              {
#line 285 "prog_io_item.m"
                                                parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_134_134, parse_tree__prog_io_item__MaybeItem0_79, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                              }
#line 285 "prog_io_item.m"
                                              parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 280 "prog_io_item.m"
                                            }
#line 280 "prog_io_item.m"
                                        }
#line 226 "prog_io_item.m"
                                      else
#line 226 "prog_io_item.m"
                                        if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "include_module") == 0))
#line 347 "prog_io_item.m"
                                          {
#line 347 "prog_io_item.m"
                                            MR_Word parse_tree__prog_io_item__TypeCtorInfo_143_143;
#line 347 "prog_io_item.m"
                                            MR_Word parse_tree__prog_io_item__TypeCtorInfo_144_144;
#line 347 "prog_io_item.m"
                                            MR_Word parse_tree__prog_io_item__ModuleNamesTerm_45;
#line 347 "prog_io_item.m"
                                            MR_Word parse_tree__prog_io_item__MaybeModuleNameSyms_46;
#line 347 "prog_io_item.m"
                                            MR_Word parse_tree__prog_io_item__V_57_57;
#line 347 "prog_io_item.m"
                                            MR_Word parse_tree__prog_io_item__V_58_58;
#line 347 "prog_io_item.m"
                                            MR_Word parse_tree__prog_io_item__MaybeItem0_105;

#line 348 "prog_io_item.m"
                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 348 "prog_io_item.m"
                                            if (parse_tree__prog_io_item__succeeded)
#line 348 "prog_io_item.m"
                                              {
#line 348 "prog_io_item.m"
                                                parse_tree__prog_io_item__ModuleNamesTerm_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 348 "prog_io_item.m"
                                                parse_tree__prog_io_item__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 348 "prog_io_item.m"
                                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "prog_io_item.m"
                                                if (parse_tree__prog_io_item__succeeded)
#line 347 "prog_io_item.m"
                                                  {
#line 11761 "parse_tree.prog_io_item.c"
                                                    parse_tree__prog_io_item__TypeCtorInfo_143_143 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 349 "prog_io_item.m"
                                                    {
#line 349 "prog_io_item.m"
                                                      parse_tree__prog_io_item__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 349 "prog_io_item.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_58_58, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_6[0]));
#line 349 "prog_io_item.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_4));
#line 349 "prog_io_item.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 349 "prog_io_item.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_58_58, 3) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_9));
#line 349 "prog_io_item.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_58_58, 4) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 349 "prog_io_item.m"
                                                    }
#line 349 "prog_io_item.m"
                                                    {
#line 349 "prog_io_item.m"
                                                      parse_tree__prog_io_util__parse_list_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_143_143, parse_tree__prog_io_item__V_58_58, parse_tree__prog_io_item__ModuleNamesTerm_45, &parse_tree__prog_io_item__MaybeModuleNameSyms_46);
                                                    }
#line 358 "prog_io_item.m"
                                                    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNameSyms_46)) == (MR_mktag((MR_Integer) 0))))
#line 360 "prog_io_item.m"
                                                      parse_tree__prog_io_item__MaybeItem0_105 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNameSyms_46;
#line 358 "prog_io_item.m"
                                                    else
#line 352 "prog_io_item.m"
                                                      {
#line 352 "prog_io_item.m"
                                                        MR_Word parse_tree__prog_io_item__ModuleNameSyms_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNameSyms_46, (MR_Integer) 0)));
#line 352 "prog_io_item.m"
                                                        MR_Word parse_tree__prog_io_item__ModuleDefn_97;
#line 352 "prog_io_item.m"
                                                        MR_Word parse_tree__prog_io_item__ItemModuleDefn_98;
#line 352 "prog_io_item.m"
                                                        MR_Word parse_tree__prog_io_item__Item_99;

#line 353 "prog_io_item.m"
                                                        {
#line 353 "prog_io_item.m"
                                                          parse_tree__prog_io_item__ModuleDefn_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "prog_io_item.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 353 "prog_io_item.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_97, 1) = ((MR_Box) (parse_tree__prog_io_item__ModuleNameSyms_47));
#line 353 "prog_io_item.m"
                                                        }
#line 354 "prog_io_item.m"
                                                        {
#line 354 "prog_io_item.m"
                                                          parse_tree__prog_io_item__ItemModuleDefn_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 354 "prog_io_item.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_98, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_97));
#line 354 "prog_io_item.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_98, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 354 "prog_io_item.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_98, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 354 "prog_io_item.m"
                                                        }
#line 356 "prog_io_item.m"
                                                        parse_tree__prog_io_item__Item_99 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_98);
#line 357 "prog_io_item.m"
                                                        {
#line 357 "prog_io_item.m"
                                                          parse_tree__prog_io_item__MaybeItem0_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 357 "prog_io_item.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_105, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_99));
#line 357 "prog_io_item.m"
                                                        }
#line 352 "prog_io_item.m"
                                                      }
#line 11835 "parse_tree.prog_io_item.c"
                                                    parse_tree__prog_io_item__TypeCtorInfo_144_144 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 362 "prog_io_item.m"
                                                    {
#line 362 "prog_io_item.m"
                                                      parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_144_144, parse_tree__prog_io_item__MaybeItem0_105, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                                    }
#line 362 "prog_io_item.m"
                                                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 347 "prog_io_item.m"
                                                  }
#line 348 "prog_io_item.m"
                                              }
#line 347 "prog_io_item.m"
                                          }
#line 226 "prog_io_item.m"
                                        else
#line 226 "prog_io_item.m"
                                          if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "version_numbers") == 0))
#line 431 "prog_io_item.m"
                                            {
#line 431 "prog_io_item.m"
                                              return parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                                            }
#line 226 "prog_io_item.m"
                                          else
#line 226 "prog_io_item.m"
                                            if ((((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "finalise") == 0)) || ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "finalize") == 0))))
#line 420 "prog_io_item.m"
                                              {
#line 420 "prog_io_item.m"
                                                MR_Word parse_tree__prog_io_item__TypeCtorInfo_150_150;
#line 420 "prog_io_item.m"
                                                MR_Word parse_tree__prog_io_item__V_53_53;
#line 420 "prog_io_item.m"
                                                MR_Word parse_tree__prog_io_item__MaybeItem0_122;
#line 420 "prog_io_item.m"
                                                MR_Word parse_tree__prog_io_item__SubTerm_123;

#line 421 "prog_io_item.m"
                                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 421 "prog_io_item.m"
                                                if (parse_tree__prog_io_item__succeeded)
#line 421 "prog_io_item.m"
                                                  {
#line 421 "prog_io_item.m"
                                                    parse_tree__prog_io_item__SubTerm_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 421 "prog_io_item.m"
                                                    parse_tree__prog_io_item__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 421 "prog_io_item.m"
                                                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 420 "prog_io_item.m"
                                                    if (parse_tree__prog_io_item__succeeded)
#line 420 "prog_io_item.m"
                                                      {
#line 422 "prog_io_item.m"
                                                        {
#line 422 "prog_io_item.m"
                                                          parse_tree__prog_io_mutable__parse_finalise_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_123, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_122);
                                                        }
#line 11895 "parse_tree.prog_io_item.c"
                                                        parse_tree__prog_io_item__TypeCtorInfo_150_150 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 424 "prog_io_item.m"
                                                        {
#line 424 "prog_io_item.m"
                                                          parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_150_150, parse_tree__prog_io_item__MaybeItem0_122, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                                        }
#line 424 "prog_io_item.m"
                                                        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 420 "prog_io_item.m"
                                                      }
#line 421 "prog_io_item.m"
                                                  }
#line 420 "prog_io_item.m"
                                              }
#line 226 "prog_io_item.m"
                                            else
#line 226 "prog_io_item.m"
                                              if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exclusive") == 0))
#line 381 "prog_io_item.m"
                                                {
#line 381 "prog_io_item.m"
                                                  MR_Word parse_tree__prog_io_item__TypeCtorInfo_146_168;
#line 381 "prog_io_item.m"
                                                  MR_Word parse_tree__prog_io_item__MaybeItem0_167;

#line 382 "prog_io_item.m"
                                                  {
#line 382 "prog_io_item.m"
                                                    parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_167);
                                                  }
#line 381 "prog_io_item.m"
                                                  if (parse_tree__prog_io_item__succeeded)
#line 381 "prog_io_item.m"
                                                    {
#line 11930 "parse_tree.prog_io_item.c"
                                                      parse_tree__prog_io_item__TypeCtorInfo_146_168 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 384 "prog_io_item.m"
                                                      {
#line 384 "prog_io_item.m"
                                                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_146_168, parse_tree__prog_io_item__MaybeItem0_167, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                                      }
#line 384 "prog_io_item.m"
                                                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 381 "prog_io_item.m"
                                                    }
#line 381 "prog_io_item.m"
                                                }
#line 226 "prog_io_item.m"
                                              else
#line 226 "prog_io_item.m"
                                                if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exhaustive") == 0))
#line 381 "prog_io_item.m"
                                                  {
#line 381 "prog_io_item.m"
                                                    MR_Word parse_tree__prog_io_item__TypeCtorInfo_146_174;
#line 381 "prog_io_item.m"
                                                    MR_Word parse_tree__prog_io_item__MaybeItem0_173;

#line 382 "prog_io_item.m"
                                                    {
#line 382 "prog_io_item.m"
                                                      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_173);
                                                    }
#line 381 "prog_io_item.m"
                                                    if (parse_tree__prog_io_item__succeeded)
#line 381 "prog_io_item.m"
                                                      {
#line 11963 "parse_tree.prog_io_item.c"
                                                        parse_tree__prog_io_item__TypeCtorInfo_146_174 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 384 "prog_io_item.m"
                                                        {
#line 384 "prog_io_item.m"
                                                          parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_146_174, parse_tree__prog_io_item__MaybeItem0_173, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                                        }
#line 384 "prog_io_item.m"
                                                        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 381 "prog_io_item.m"
                                                      }
#line 381 "prog_io_item.m"
                                                  }
#line 226 "prog_io_item.m"
                                                else
#line 226 "prog_io_item.m"
                                                  if ((((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "initialise") == 0)) || ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "initialize") == 0))))
#line 412 "prog_io_item.m"
                                                    {
#line 412 "prog_io_item.m"
                                                      MR_Word parse_tree__prog_io_item__TypeCtorInfo_149_149;
#line 412 "prog_io_item.m"
                                                      MR_Word parse_tree__prog_io_item__V_54_54;
#line 412 "prog_io_item.m"
                                                      MR_Word parse_tree__prog_io_item__MaybeItem0_120;
#line 412 "prog_io_item.m"
                                                      MR_Word parse_tree__prog_io_item__SubTerm_121;

#line 413 "prog_io_item.m"
                                                      parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 413 "prog_io_item.m"
                                                      if (parse_tree__prog_io_item__succeeded)
#line 413 "prog_io_item.m"
                                                        {
#line 413 "prog_io_item.m"
                                                          parse_tree__prog_io_item__SubTerm_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 413 "prog_io_item.m"
                                                          parse_tree__prog_io_item__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 413 "prog_io_item.m"
                                                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "prog_io_item.m"
                                                          if (parse_tree__prog_io_item__succeeded)
#line 412 "prog_io_item.m"
                                                            {
#line 414 "prog_io_item.m"
                                                              {
#line 414 "prog_io_item.m"
                                                                parse_tree__prog_io_mutable__parse_initialise_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_121, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_120);
                                                              }
#line 12012 "parse_tree.prog_io_item.c"
                                                              parse_tree__prog_io_item__TypeCtorInfo_149_149 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 416 "prog_io_item.m"
                                                              {
#line 416 "prog_io_item.m"
                                                                parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_149_149, parse_tree__prog_io_item__MaybeItem0_120, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                                              }
#line 416 "prog_io_item.m"
                                                              parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 412 "prog_io_item.m"
                                                            }
#line 413 "prog_io_item.m"
                                                        }
#line 412 "prog_io_item.m"
                                                    }
#line 226 "prog_io_item.m"
                                                  else
#line 226 "prog_io_item.m"
                                                    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exclusive_exhaustive") == 0))
#line 381 "prog_io_item.m"
                                                      {
#line 381 "prog_io_item.m"
                                                        MR_Word parse_tree__prog_io_item__TypeCtorInfo_146_171;
#line 381 "prog_io_item.m"
                                                        MR_Word parse_tree__prog_io_item__MaybeItem0_170;

#line 382 "prog_io_item.m"
                                                        {
#line 382 "prog_io_item.m"
                                                          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 2, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_170);
                                                        }
#line 381 "prog_io_item.m"
                                                        if (parse_tree__prog_io_item__succeeded)
#line 381 "prog_io_item.m"
                                                          {
#line 12047 "parse_tree.prog_io_item.c"
                                                            parse_tree__prog_io_item__TypeCtorInfo_146_171 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 384 "prog_io_item.m"
                                                            {
#line 384 "prog_io_item.m"
                                                              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_146_171, parse_tree__prog_io_item__MaybeItem0_170, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                                                            }
#line 384 "prog_io_item.m"
                                                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 381 "prog_io_item.m"
                                                          }
#line 381 "prog_io_item.m"
                                                      }
#line 226 "prog_io_item.m"
                                                    else
#line 226 "prog_io_item.m"
                                                      parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 226 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 226 "prog_io_item.m"
  }
#line 219 "prog_io_item.m"
}

#line 178 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(
#line 178 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 178 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_8,
#line 178 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_9,
#line 178 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22,
#line 178 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 178 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_12)
#line 178 "prog_io_item.m"
{
#line 203 "prog_io_item.m"
  while (MR_TRUE)
#line 203 "prog_io_item.m"
    {
#line 203 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 203 "prog_io_item.m"
      {
#line 203 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 203 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__Functor_13;
#line 203 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Args_14;
#line 203 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_15;
#line 183 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;

#line 183 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 183 "prog_io_item.m"
          {
#line 183 "prog_io_item.m"
            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 0)));
#line 183 "prog_io_item.m"
            parse_tree__prog_io_item__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 1)));
#line 183 "prog_io_item.m"
            parse_tree__prog_io_item__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 2)));
#line 183 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 183 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 183 "prog_io_item.m"
              parse_tree__prog_io_item__Functor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_23_23, (MR_Integer) 0)));
#line 183 "prog_io_item.m"
          }
#line 203 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 190 "prog_io_item.m"
          {
#line 190 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Attribute_16;
#line 190 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__SubTerm_17;

#line 185 "prog_io_item.m"
            {
#line 185 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__parse_decl_attribute_4_p_0(parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__Args_14, &parse_tree__prog_io_item__Attribute_16, &parse_tree__prog_io_item__SubTerm_17);
            }
#line 190 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 187 "prog_io_item.m"
              {
#line 187 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24;
#line 187 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_25_25;

#line 187 "prog_io_item.m"
                {
#line 187 "prog_io_item.m"
                  parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 187 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Attribute_16));
#line 187 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 187 "prog_io_item.m"
                }
#line 187 "prog_io_item.m"
                {
#line 187 "prog_io_item.m"
                  parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24, 0) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 187 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24, 1) = ((MR_Box) (parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22));
#line 187 "prog_io_item.m"
                }
#line 188 "prog_io_item.m"
                /* direct tailcall eliminated */
#line 188 "prog_io_item.m"
                {
#line 188 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__Term__tmp_copy_9 = parse_tree__prog_io_item__SubTerm_17;
#line 188 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_22 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24;

#line 188 "prog_io_item.m"
                  parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_22;
#line 188 "prog_io_item.m"
                  parse_tree__prog_io_item__Term_9 = parse_tree__prog_io_item__Term__tmp_copy_9;
#line 188 "prog_io_item.m"
                }
#line 188 "prog_io_item.m"
                continue;
#line 187 "prog_io_item.m"
              }
#line 190 "prog_io_item.m"
            else
#line 195 "prog_io_item.m"
              {
#line 195 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeItemPrime_18;

#line 191 "prog_io_item.m"
                {
#line 191 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_attributed_decl_8_p_0(parse_tree__prog_io_item__ModuleName_7, parse_tree__prog_io_item__VarSet_8, parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__Args_14, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22, parse_tree__prog_io_item__Context_15, parse_tree__prog_io_item__SeqNum_11, &parse_tree__prog_io_item__MaybeItemPrime_18);
                }
#line 195 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 194 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_12 = parse_tree__prog_io_item__MaybeItemPrime_18;
#line 195 "prog_io_item.m"
                else
#line 196 "prog_io_item.m"
                  {
#line 196 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__TermStr_19;
#line 196 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Pieces_20;
#line 196 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_21;
#line 196 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_29_29;
#line 196 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_31_31;
#line 196 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_32_32;
#line 196 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_41_41;
#line 196 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_42_42;
#line 196 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_43_43;
#line 196 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_44_44;
#line 196 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_47_47;

#line 196 "prog_io_item.m"
                    {
#line 196 "prog_io_item.m"
                      parse_tree__prog_io_item__TermStr_19 = parse_tree__mercury_to_mercury__mercury_term_to_string_3_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__VarSet_8, (MR_Integer) 0, parse_tree__prog_io_item__Term_9);
                    }
#line 198 "prog_io_item.m"
                    {
#line 198 "prog_io_item.m"
                      parse_tree__prog_io_item__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 198 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_19));
#line 198 "prog_io_item.m"
                    }
#line 198 "prog_io_item.m"
                    {
#line 198 "prog_io_item.m"
                      parse_tree__prog_io_item__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 198 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 198 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 198 "prog_io_item.m"
                    }
#line 197 "prog_io_item.m"
                    {
#line 197 "prog_io_item.m"
                      parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 197 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_item__V_31_31));
#line 197 "prog_io_item.m"
                    }
#line 197 "prog_io_item.m"
                    {
#line 197 "prog_io_item.m"
                      parse_tree__prog_io_item__Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[102])));
#line 197 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_20, 1) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 197 "prog_io_item.m"
                    }
#line 200 "prog_io_item.m"
                    {
#line 200 "prog_io_item.m"
                      parse_tree__prog_io_item__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 200 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_20));
#line 200 "prog_io_item.m"
                    }
#line 200 "prog_io_item.m"
                    {
#line 200 "prog_io_item.m"
                      parse_tree__prog_io_item__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_item__V_44_44));
#line 200 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 200 "prog_io_item.m"
                    }
#line 200 "prog_io_item.m"
                    {
#line 200 "prog_io_item.m"
                      parse_tree__prog_io_item__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 200 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 200 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_item__V_43_43));
#line 200 "prog_io_item.m"
                    }
#line 200 "prog_io_item.m"
                    {
#line 200 "prog_io_item.m"
                      parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 200 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 200 "prog_io_item.m"
                    }
#line 199 "prog_io_item.m"
                    {
#line 199 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 199 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 199 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 199 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 2) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 199 "prog_io_item.m"
                    }
#line 201 "prog_io_item.m"
                    {
#line 201 "prog_io_item.m"
                      parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_21));
#line 201 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 201 "prog_io_item.m"
                    }
#line 201 "prog_io_item.m"
                    {
#line 201 "prog_io_item.m"
                      MR_Word base;
#line 201 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 201 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 201 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 201 "prog_io_item.m"
                    }
#line 196 "prog_io_item.m"
                  }
#line 195 "prog_io_item.m"
              }
#line 190 "prog_io_item.m"
          }
#line 203 "prog_io_item.m"
        else
#line 204 "prog_io_item.m"
          {
#line 204 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_62_62;
#line 204 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_63_63;
#line 204 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_68_68;
#line 204 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Context_73;
#line 204 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_75;

#line 204 "prog_io_item.m"
            {
#line 204 "prog_io_item.m"
              parse_tree__prog_io_item__Context_73 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_9);
            }
#line 208 "prog_io_item.m"
            {
#line 208 "prog_io_item.m"
              parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 208 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_73));
#line 208 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[103])));
#line 208 "prog_io_item.m"
            }
#line 208 "prog_io_item.m"
            {
#line 208 "prog_io_item.m"
              parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 208 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "prog_io_item.m"
            }
#line 207 "prog_io_item.m"
            {
#line 207 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 207 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 207 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 2) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 207 "prog_io_item.m"
            }
#line 209 "prog_io_item.m"
            {
#line 209 "prog_io_item.m"
              parse_tree__prog_io_item__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_75));
#line 209 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 209 "prog_io_item.m"
            }
#line 209 "prog_io_item.m"
            {
#line 209 "prog_io_item.m"
              MR_Word base;
#line 209 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 209 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 209 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_68_68));
#line 209 "prog_io_item.m"
            }
#line 204 "prog_io_item.m"
          }
#line 203 "prog_io_item.m"
      }
#line 203 "prog_io_item.m"
      break;
#line 203 "prog_io_item.m"
    }
#line 178 "prog_io_item.m"
}

#line 150 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_2(
#line 150 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 150 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 150 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 150 "prog_io_item.m"
{
#line 150 "prog_io_item.m"
  {
#line 150 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 150 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv1_HeadVar__2_80;

#line 150 "prog_io_item.m"
    {
#line 150 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__150__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv1_HeadVar__2_80);
    }
#line 150 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv1_HeadVar__2_80));
#line 150 "prog_io_item.m"
  }
#line 150 "prog_io_item.m"
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
#line 161 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeBodyGoal_16)) == (MR_mktag((MR_Integer) 0))))
#line 163 "prog_io_item.m"
      *parse_tree__prog_io_item__MaybeItem_14 = (MR_Word) parse_tree__prog_io_item__MaybeBodyGoal_16;
#line 161 "prog_io_item.m"
    else
#line 121 "prog_io_item.m"
      {
#line 121 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_72_72 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 121 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__BodyGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeBodyGoal_16, (MR_Integer) 0)));
#line 121 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__VarSet_19;
#line 144 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncHeadTerm_23;
#line 144 "prog_io_item.m"
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
#line 144 "prog_io_item.m"
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
#line 140 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctor_25)) == (MR_mktag((MR_Integer) 0))))
#line 141 "prog_io_item.m"
              {
#line 141 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctor_25, (MR_Integer) 0)));

#line 142 "prog_io_item.m"
                {
#line 142 "prog_io_item.m"
                  MR_Word base;
#line 142 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 142 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 142 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_31));
#line 142 "prog_io_item.m"
                }
#line 141 "prog_io_item.m"
              }
#line 140 "prog_io_item.m"
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
#line 138 "prog_io_item.m"
                {
#line 138 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 138 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 138 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_30, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemClause_29));
#line 138 "prog_io_item.m"
                }
#line 139 "prog_io_item.m"
                {
#line 139 "prog_io_item.m"
                  MR_Word base;
#line 139 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 139 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 139 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_30));
#line 139 "prog_io_item.m"
                }
#line 132 "prog_io_item.m"
              }
#line 128 "prog_io_item.m"
          }
#line 144 "prog_io_item.m"
        else
#line 145 "prog_io_item.m"
          {
#line 145 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFunctor_64;

#line 146 "prog_io_item.m"
            {
#line 146 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__HeadTerm_9, parse_tree__prog_io_item__VarSet_19, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[101]), &parse_tree__prog_io_item__MaybeFunctor_64);
            }
#line 156 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctor_64)) == (MR_mktag((MR_Integer) 0))))
#line 157 "prog_io_item.m"
              {
#line 157 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 0)));

#line 158 "prog_io_item.m"
                {
#line 158 "prog_io_item.m"
                  MR_Word base;
#line 158 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 158 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 158 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_57));
#line 158 "prog_io_item.m"
                }
#line 157 "prog_io_item.m"
              }
#line 156 "prog_io_item.m"
            else
#line 149 "prog_io_item.m"
              {
#line 149 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 1)));
#line 149 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Name_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 0)));
#line 149 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ProgArgTerms_54;
#line 149 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemClause_55;
#line 149 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_56;

#line 150 "prog_io_item.m"
                {
#line 150 "prog_io_item.m"
                  mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[3], parse_tree__prog_io_item__ArgTerms_32, &parse_tree__prog_io_item__ProgArgTerms_54);
                }
#line 151 "prog_io_item.m"
                {
#line 151 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemClause_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 1) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_17));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 2) = ((MR_Box) ((MR_Integer) 0));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 3) = ((MR_Box) (parse_tree__prog_io_item__Name_53));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 4) = ((MR_Box) (parse_tree__prog_io_item__ProgArgTerms_54));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 5) = ((MR_Box) (parse_tree__prog_io_item__BodyGoal_18));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 151 "prog_io_item.m"
                }
#line 154 "prog_io_item.m"
                {
#line 154 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 154 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_56, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemClause_55));
#line 154 "prog_io_item.m"
                }
#line 155 "prog_io_item.m"
                {
#line 155 "prog_io_item.m"
                  MR_Word base;
#line 155 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 155 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 155 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_56));
#line 155 "prog_io_item.m"
                }
#line 149 "prog_io_item.m"
              }
#line 145 "prog_io_item.m"
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
#line 168 "prog_io_item.m"
  {
#line 168 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 169 "prog_io_item.m"
    {
#line 169 "prog_io_item.m"
      parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Term_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_item__SeqNum_9, parse_tree__prog_io_item__MaybeItem_10);
#line 169 "prog_io_item.m"
      return;
    }
#line 168 "prog_io_item.m"
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
#line 168 "prog_io_item.m"
      {
#line 169 "prog_io_item.m"
        {
#line 169 "prog_io_item.m"
          parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__DeclTerm_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_item__SeqNum_9, parse_tree__prog_io_item__Result_10);
#line 169 "prog_io_item.m"
          return;
        }
#line 168 "prog_io_item.m"
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
