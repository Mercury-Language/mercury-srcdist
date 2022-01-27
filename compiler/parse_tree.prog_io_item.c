/*
** Automatically generated from `prog_io_item.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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

#line 434 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_p_0(
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 434 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 434 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 434 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_p_0(
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 434 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 434 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 434 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 434 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 434 "prog_io_item.m"
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

#line 445 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_p_0(
#line 445 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 445 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_10,
#line 445 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 445 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 445 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 445 "prog_io_item.m"
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

#line 1010 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_16,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_17,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_18,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 1010 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 1010 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24);

#line 967 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1(
#line 967 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 967 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 967 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 956 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_12,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_13,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_15,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_16,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 956 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 956 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22);

#line 916 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(
#line 916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_14,
#line 916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_15,
#line 916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_16,
#line 916 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_17,
#line 916 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_18);

#line 884 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_7_p_0(
#line 884 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 884 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 884 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 884 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 884 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 884 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 884 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 871 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__type_and_mode_list_is_consistent_type_and_mode_1_p_0(
#line 871 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1);

#line 863 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__type_and_mode_list_is_consistent_type_only_1_p_0(
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1);

#line 851 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__type_and_mode_list_is_consistent_1_p_0(
#line 851 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1);

#line 834 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_3_p_0(
#line 834 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_4,
#line 834 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 834 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeTypeAndMode_6);

#line 826 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(
#line 826 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_1,
#line 826 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 826 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3);

#line 751 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncName_14,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Args_15,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ReturnArg_16,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncTerm_17,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_18,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ExistQVars_21,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Constraints_22,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_23,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_24,
#line 751 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_25,
#line 751 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_26);

#line 668 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_8_p_0(
#line 668 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 668 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 668 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_11,
#line 668 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_12,
#line 668 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_13,
#line 668 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 668 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 668 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 567 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_12,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_13,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_14,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_15,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_16,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 567 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 567 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22);

#line 506 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0(
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_9,
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 506 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 506 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 347 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_4(
#line 347 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 347 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 347 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 269 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_3(
#line 269 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 269 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 269 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 269 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_2(
#line 269 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 269 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 269 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 269 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_1(
#line 269 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 269 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 269 "prog_io_item.m"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
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
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_item____vpti_pred_2__pseudo_1__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1924 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0_10001(
#line 1927 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1929 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 1931 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3,
#line 1933 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4)
#line 1935 "parse_tree.prog_io_item.c"
{
#line 1937 "parse_tree.prog_io_item.c"
  {
#line 1939 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1942 "parse_tree.prog_io_item.c"
    {
#line 1944 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item____Unify____maker_2_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_4));
    }
#line 1947 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 1949 "parse_tree.prog_io_item.c"
  }
#line 1951 "parse_tree.prog_io_item.c"
}

#line 1954 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0_10001(
#line 1957 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1959 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 1961 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_3,
#line 1963 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4,
#line 1965 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_5)
#line 1967 "parse_tree.prog_io_item.c"
{
#line 1969 "parse_tree.prog_io_item.c"
  {
#line 1971 "parse_tree.prog_io_item.c"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__1_1;

#line 1974 "parse_tree.prog_io_item.c"
    {
#line 1976 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item____Compare____maker_2_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), &parse_tree__prog_io_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_item__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_5));
    }
#line 1979 "parse_tree.prog_io_item.c"
    *parse_tree__prog_io_item__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__1_1));
#line 1981 "parse_tree.prog_io_item.c"
  }
#line 1983 "parse_tree.prog_io_item.c"
}

#line 434 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_p_0(
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 434 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 434 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 434 "prog_io_item.m"
{
#line 439 "prog_io_item.m"
  {
#line 439 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 439 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 439 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeItem0_16;

#line 440 "prog_io_item.m"
    {
#line 440 "prog_io_item.m"
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
#line 443 "prog_io_item.m"
    {
#line 443 "prog_io_item.m"
      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_16, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__MaybeItem_14);
#line 443 "prog_io_item.m"
      return;
    }
#line 439 "prog_io_item.m"
  }
#line 434 "prog_io_item.m"
}

#line 434 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_p_0(
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 434 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 434 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 434 "prog_io_item.m"
{
#line 439 "prog_io_item.m"
  {
#line 439 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 439 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 439 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeItem0_16;

#line 440 "prog_io_item.m"
    {
#line 440 "prog_io_item.m"
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
#line 443 "prog_io_item.m"
    {
#line 443 "prog_io_item.m"
      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_16, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__MaybeItem_14);
#line 443 "prog_io_item.m"
      return;
    }
#line 439 "prog_io_item.m"
  }
#line 434 "prog_io_item.m"
}

#line 434 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ParserPred_8,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 434 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 434 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 434 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 434 "prog_io_item.m"
{
#line 439 "prog_io_item.m"
  {
#line 439 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 439 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 439 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeItem0_16;

#line 440 "prog_io_item.m"
    {
#line 440 "prog_io_item.m"
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
#line 443 "prog_io_item.m"
    {
#line 443 "prog_io_item.m"
      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_16, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__MaybeItem_14);
#line 443 "prog_io_item.m"
      return;
    }
#line 439 "prog_io_item.m"
  }
#line 434 "prog_io_item.m"
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
#line 2612 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 2614 "parse_tree.prog_io_item.c"
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

#line 445 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_p_0(
#line 445 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 445 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_10,
#line 445 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 445 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 445 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 445 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 445 "prog_io_item.m"
{
#line 449 "prog_io_item.m"
  {
#line 449 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
#line 449 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VersionNumberTerm_15;
#line 449 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleNameTerm_16;
#line 449 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VersionNumbersTerm_17;
#line 449 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_38_38;
#line 449 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_39_39;
#line 449 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_40_40;
#line 452 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__VersionNumber_18;
#line 452 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_41_41;
#line 452 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_42_42;
#line 452 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__V_100_100;
#line 452 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;

#line 450 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 450 "prog_io_item.m"
      {
#line 450 "prog_io_item.m"
        parse_tree__prog_io_item__VersionNumberTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_10, (MR_Integer) 0)));
#line 450 "prog_io_item.m"
        parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_10, (MR_Integer) 1)));
#line 450 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 450 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 450 "prog_io_item.m"
          {
#line 450 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleNameTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, (MR_Integer) 0)));
#line 450 "prog_io_item.m"
            parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, (MR_Integer) 1)));
#line 450 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 450 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 450 "prog_io_item.m"
              {
#line 450 "prog_io_item.m"
                parse_tree__prog_io_item__VersionNumbersTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_39_39, (MR_Integer) 0)));
#line 450 "prog_io_item.m"
                parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_39_39, (MR_Integer) 1)));
#line 450 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 449 "prog_io_item.m"
                  {
#line 452 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__VersionNumberTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 452 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 452 "prog_io_item.m"
                      {
#line 452 "prog_io_item.m"
                        parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 0)));
#line 452 "prog_io_item.m"
                        parse_tree__prog_io_item__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 1)));
#line 452 "prog_io_item.m"
                        parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 2)));
#line 452 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 452 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 452 "prog_io_item.m"
                          {
#line 452 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 452 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 452 "prog_io_item.m"
                              {
#line 452 "prog_io_item.m"
                                parse_tree__prog_io_item__VersionNumber_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, (MR_Integer) 0)));
#line 453 "prog_io_item.m"
                                {
#line 453 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_100_100 = recompilation__version__version_numbers_version_number_0_f_0();
                                }
#line 453 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__VersionNumber_18 == parse_tree__prog_io_item__V_100_100);
#line 452 "prog_io_item.m"
                              }
#line 452 "prog_io_item.m"
                          }
#line 452 "prog_io_item.m"
                      }
#line 478 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 470 "prog_io_item.m"
                      {
#line 455 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_101_101;

#line 455 "prog_io_item.m"
                        {
#line 455 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleNameTerm_16, &parse_tree__prog_io_item__V_101_101);
                        }
#line 455 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 455 "prog_io_item.m"
                          {
#line 455 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__V_101_101);
                          }
#line 470 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 457 "prog_io_item.m"
                          {
#line 457 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__MaybeItem0_20;

#line 456 "prog_io_item.m"
                            {
#line 456 "prog_io_item.m"
                              recompilation__version__parse_version_numbers_2_p_0(parse_tree__prog_io_item__VersionNumbersTerm_17, &parse_tree__prog_io_item__MaybeItem0_20);
                            }
#line 466 "prog_io_item.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItem0_20)) == (MR_mktag((MR_Integer) 0))))
#line 468 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItem_14 = (MR_Word) parse_tree__prog_io_item__MaybeItem0_20;
#line 466 "prog_io_item.m"
                            else
#line 459 "prog_io_item.m"
                              {
#line 459 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__VersionNumbers_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_20, (MR_Integer) 0)));
#line 459 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ModuleDefn_22;
#line 459 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ItemModuleDefn_23;
#line 459 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Item_24;
#line 459 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeItem1_25;

#line 460 "prog_io_item.m"
                                {
#line 460 "prog_io_item.m"
                                  parse_tree__prog_io_item__ModuleDefn_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 460 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 460 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_22, 1) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_8));
#line 460 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_22, 2) = ((MR_Box) (parse_tree__prog_io_item__VersionNumbers_21));
#line 460 "prog_io_item.m"
                                }
#line 461 "prog_io_item.m"
                                {
#line 461 "prog_io_item.m"
                                  parse_tree__prog_io_item__ItemModuleDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 461 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_23, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_22));
#line 461 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_23, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 461 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_23, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 461 "prog_io_item.m"
                                }
#line 463 "prog_io_item.m"
                                parse_tree__prog_io_item__Item_24 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_23);
#line 464 "prog_io_item.m"
                                {
#line 464 "prog_io_item.m"
                                  parse_tree__prog_io_item__MaybeItem1_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 464 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem1_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_24));
#line 464 "prog_io_item.m"
                                }
#line 465 "prog_io_item.m"
                                {
#line 465 "prog_io_item.m"
                                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem1_25, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__MaybeItem_14);
                                }
#line 459 "prog_io_item.m"
                              }
#line 457 "prog_io_item.m"
                          }
#line 470 "prog_io_item.m"
                        else
#line 472 "prog_io_item.m"
                          {
#line 472 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Spec_28;
#line 472 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_56_56;
#line 472 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_57_57;
#line 472 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_58_58;
#line 472 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_63_63;

#line 474 "prog_io_item.m"
                            {
#line 474 "prog_io_item.m"
                              parse_tree__prog_io_item__V_58_58 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleNameTerm_16);
                            }
#line 474 "prog_io_item.m"
                            {
#line 474 "prog_io_item.m"
                              parse_tree__prog_io_item__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 474 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_item__V_58_58));
#line 474 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[135])));
#line 474 "prog_io_item.m"
                            }
#line 475 "prog_io_item.m"
                            {
#line 475 "prog_io_item.m"
                              parse_tree__prog_io_item__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_item__V_57_57));
#line 475 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "prog_io_item.m"
                            }
#line 473 "prog_io_item.m"
                            {
#line 473 "prog_io_item.m"
                              parse_tree__prog_io_item__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 473 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 473 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_28, 2) = ((MR_Box) (parse_tree__prog_io_item__V_56_56));
#line 473 "prog_io_item.m"
                            }
#line 476 "prog_io_item.m"
                            {
#line 476 "prog_io_item.m"
                              parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_28));
#line 476 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "prog_io_item.m"
                            }
#line 476 "prog_io_item.m"
                            {
#line 476 "prog_io_item.m"
                              MR_Word base;
#line 476 "prog_io_item.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 476 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 476 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 476 "prog_io_item.m"
                            }
#line 472 "prog_io_item.m"
                          }
#line 470 "prog_io_item.m"
                      }
#line 478 "prog_io_item.m"
                    else
#line 489 "prog_io_item.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_item__VersionNumberTerm_15)) == (MR_mktag((MR_Integer) 0))))
#line 480 "prog_io_item.m"
                      {
#line 480 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__DummyTerm_33;
#line 480 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Warning_34;
#line 480 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__ItemNothing_35;
#line 480 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_90_90;
#line 480 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Item_91;

#line 483 "prog_io_item.m"
                        {
#line 483 "prog_io_item.m"
                          parse_tree__prog_io_item__dummy_term_with_context_2_p_0(parse_tree__prog_io_item__Context_12, &parse_tree__prog_io_item__DummyTerm_33);
                        }
#line 484 "prog_io_item.m"
                        {
#line 484 "prog_io_item.m"
                          parse_tree__prog_io_item__Warning_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 484 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[27])));
#line 484 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_34, 1) = ((MR_Box) ((MR_String) "interface file needs to be recreated, the version numbers are out of date"));
#line 484 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_34, 2) = ((MR_Box) (parse_tree__prog_io_item__DummyTerm_33));
#line 484 "prog_io_item.m"
                        }
#line 486 "prog_io_item.m"
                        {
#line 486 "prog_io_item.m"
                          parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 486 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_item__Warning_34));
#line 486 "prog_io_item.m"
                        }
#line 486 "prog_io_item.m"
                        {
#line 486 "prog_io_item.m"
                          parse_tree__prog_io_item__ItemNothing_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 486 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_35, 0) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 486 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_35, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 486 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_35, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 486 "prog_io_item.m"
                        }
#line 487 "prog_io_item.m"
                        {
#line 487 "prog_io_item.m"
                          parse_tree__prog_io_item__Item_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "prog_io_item.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 487 "prog_io_item.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_91, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemNothing_35));
#line 487 "prog_io_item.m"
                        }
#line 488 "prog_io_item.m"
                        {
#line 488 "prog_io_item.m"
                          MR_Word base;
#line 488 "prog_io_item.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 488 "prog_io_item.m"
                          *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 488 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_91));
#line 488 "prog_io_item.m"
                        }
#line 480 "prog_io_item.m"
                      }
#line 489 "prog_io_item.m"
                    else
#line 490 "prog_io_item.m"
                      {
#line 490 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__VersionNumberContext_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 1)));
#line 490 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_78_78;
#line 490 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_79_79;
#line 490 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_84_84;
#line 490 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Spec_93;
#line 490 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 0)));

#line 494 "prog_io_item.m"
                        {
#line 494 "prog_io_item.m"
                          parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 494 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__VersionNumberContext_37));
#line 494 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[136])));
#line 494 "prog_io_item.m"
                        }
#line 494 "prog_io_item.m"
                        {
#line 494 "prog_io_item.m"
                          parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 494 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 494 "prog_io_item.m"
                        }
#line 493 "prog_io_item.m"
                        {
#line 493 "prog_io_item.m"
                          parse_tree__prog_io_item__Spec_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 493 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 493 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 493 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_93, 2) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 493 "prog_io_item.m"
                        }
#line 495 "prog_io_item.m"
                        {
#line 495 "prog_io_item.m"
                          parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_93));
#line 495 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 495 "prog_io_item.m"
                        }
#line 495 "prog_io_item.m"
                        {
#line 495 "prog_io_item.m"
                          MR_Word base;
#line 495 "prog_io_item.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 495 "prog_io_item.m"
                          *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 495 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 495 "prog_io_item.m"
                        }
#line 490 "prog_io_item.m"
                      }
#line 478 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 449 "prog_io_item.m"
                  }
#line 450 "prog_io_item.m"
              }
#line 450 "prog_io_item.m"
          }
#line 450 "prog_io_item.m"
      }
#line 449 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 449 "prog_io_item.m"
  }
#line 445 "prog_io_item.m"
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

#line 1010 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_16,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_17,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_18,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 1010 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 1010 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 1010 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24)
#line 1010 "prog_io_item.m"
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
#line 5410 "parse_tree.prog_io_item.c"
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
#line 5442 "parse_tree.prog_io_item.c"
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
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_13));
#line 1035 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[20])));
#line 1035 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 2) = ((MR_Box) (parse_tree__prog_io_item__ArgReturnModes_35));
#line 1035 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1035 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 4) = ((MR_Box) (parse_tree__prog_io_item__MaybeDetism_20));
#line 1035 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 5) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_34));
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
#line 1010 "prog_io_item.m"
}

#line 967 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1(
#line 967 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 967 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 967 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 967 "prog_io_item.m"
{
#line 967 "prog_io_item.m"
  {
#line 967 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 967 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__3_3;

#line 967 "prog_io_item.m"
    {
#line 967 "prog_io_item.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__3_3);
    }
#line 967 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__3_3));
#line 967 "prog_io_item.m"
  }
#line 967 "prog_io_item.m"
}

#line 956 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_12,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_13,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_15,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_16,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 956 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 956 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22)
#line 956 "prog_io_item.m"
{
#line 1001 "prog_io_item.m"
  {
#line 1001 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1001 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgModes0_23;

#line 962 "prog_io_item.m"
    {
#line 962 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__ArgTerms_13, &parse_tree__prog_io_item__ArgModes0_23);
    }
#line 1001 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 964 "prog_io_item.m"
      {
#line 964 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_24;
#line 964 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeConstraints_25;

#line 963 "prog_io_item.m"
        {
#line 963 "prog_io_item.m"
          parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_14, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__Attributes0_19, &parse_tree__prog_io_item__Attributes_24, &parse_tree__prog_io_item__MaybeConstraints_25);
        }
#line 997 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_25)) == (MR_mktag((MR_Integer) 0))))
#line 998 "prog_io_item.m"
          {
#line 998 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 0)));

#line 999 "prog_io_item.m"
            {
#line 999 "prog_io_item.m"
              MR_Word base;
#line 999 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 999 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 999 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_39));
#line 999 "prog_io_item.m"
            }
#line 998 "prog_io_item.m"
          }
#line 997 "prog_io_item.m"
        else
#line 966 "prog_io_item.m"
          {
#line 966 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_104_104;
#line 966 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_105_105;
#line 966 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 2)));
#line 966 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgModes_29;
#line 966 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstVarSet_30;
#line 966 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 966 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 0)));
#line 966 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 1)));

#line 967 "prog_io_item.m"
            {
#line 967 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 967 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[1]));
#line 967 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1));
#line 967 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 967 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 3) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_28));
#line 967 "prog_io_item.m"
            }
#line 6087 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 967 "prog_io_item.m"
            {
#line 967 "prog_io_item.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_104_104, parse_tree__prog_io_item__TypeCtorInfo_104_104, parse_tree__prog_io_item__V_41_41, parse_tree__prog_io_item__ArgModes0_23, &parse_tree__prog_io_item__ArgModes_29);
            }
#line 6094 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_105_105 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 969 "prog_io_item.m"
            {
#line 969 "prog_io_item.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_16, &parse_tree__prog_io_item__InstVarSet_30);
            }
#line 970 "prog_io_item.m"
            {
#line 970 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io_item__ArgModes_29);
            }
#line 986 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 979 "prog_io_item.m"
              {
#line 979 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybePredOrFunc_31;
#line 979 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemModeDecl_33;
#line 979 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_34;
#line 979 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeItem0_35;

#line 974 "prog_io_item.m"
                if ((parse_tree__prog_io_item__WithInst_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 972 "prog_io_item.m"
                  {
#line 973 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybePredOrFunc_31 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[19]);
#line 972 "prog_io_item.m"
                  }
#line 974 "prog_io_item.m"
                else
#line 978 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybePredOrFunc_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 980 "prog_io_item.m"
                {
#line 980 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemModeDecl_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 980 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_12));
#line 980 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 1) = ((MR_Box) (parse_tree__prog_io_item__MaybePredOrFunc_31));
#line 980 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 2) = ((MR_Box) (parse_tree__prog_io_item__ArgModes_29));
#line 980 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 3) = ((MR_Box) (parse_tree__prog_io_item__WithInst_17));
#line 980 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 4) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_18));
#line 980 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 5) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_30));
#line 980 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_20));
#line 980 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_21));
#line 980 "prog_io_item.m"
                }
#line 983 "prog_io_item.m"
                {
#line 983 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 983 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_34, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemModeDecl_33));
#line 983 "prog_io_item.m"
                }
#line 984 "prog_io_item.m"
                {
#line 984 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybeItem0_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 984 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_35, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_34));
#line 984 "prog_io_item.m"
                }
#line 985 "prog_io_item.m"
                {
#line 985 "prog_io_item.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_35, parse_tree__prog_io_item__Attributes_24, parse_tree__prog_io_item__MaybeItem_22);
#line 985 "prog_io_item.m"
                  return;
                }
#line 979 "prog_io_item.m"
              }
#line 986 "prog_io_item.m"
            else
#line 987 "prog_io_item.m"
              {
#line 987 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredModeTermStr_36;
#line 987 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_37;
#line 987 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_38;
#line 987 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_45_45;
#line 987 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_48_48;
#line 987 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_51_51;
#line 987 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_53_53;
#line 987 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_54_54;
#line 987 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_63_63;
#line 987 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_64_64;
#line 987 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_65_65;
#line 987 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_66_66;
#line 987 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_67_67;
#line 987 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_70_70;

#line 987 "prog_io_item.m"
                {
#line 987 "prog_io_item.m"
                  parse_tree__prog_io_item__PredModeTermStr_36 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__PredModeTerm_15);
                }
#line 991 "prog_io_item.m"
                {
#line 991 "prog_io_item.m"
                  parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 991 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_36));
#line 991 "prog_io_item.m"
                }
#line 991 "prog_io_item.m"
                {
#line 991 "prog_io_item.m"
                  parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 991 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 991 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 991 "prog_io_item.m"
                }
#line 990 "prog_io_item.m"
                {
#line 990 "prog_io_item.m"
                  parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 990 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 990 "prog_io_item.m"
                }
#line 990 "prog_io_item.m"
                {
#line 990 "prog_io_item.m"
                  parse_tree__prog_io_item__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[128])));
#line 990 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 1) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 990 "prog_io_item.m"
                }
#line 989 "prog_io_item.m"
                {
#line 989 "prog_io_item.m"
                  parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 989 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[127])));
#line 989 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_item__V_48_48));
#line 989 "prog_io_item.m"
                }
#line 988 "prog_io_item.m"
                {
#line 988 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 988 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[124])));
#line 988 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_37, 1) = ((MR_Box) (parse_tree__prog_io_item__V_45_45));
#line 988 "prog_io_item.m"
                }
#line 993 "prog_io_item.m"
                {
#line 993 "prog_io_item.m"
                  parse_tree__prog_io_item__V_65_65 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, parse_tree__prog_io_item__PredModeTerm_15);
                }
#line 994 "prog_io_item.m"
                {
#line 994 "prog_io_item.m"
                  parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 994 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_37));
#line 994 "prog_io_item.m"
                }
#line 994 "prog_io_item.m"
                {
#line 994 "prog_io_item.m"
                  parse_tree__prog_io_item__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 994 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 994 "prog_io_item.m"
                }
#line 993 "prog_io_item.m"
                {
#line 993 "prog_io_item.m"
                  parse_tree__prog_io_item__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 993 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_item__V_65_65));
#line 993 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_item__V_66_66));
#line 993 "prog_io_item.m"
                }
#line 994 "prog_io_item.m"
                {
#line 994 "prog_io_item.m"
                  parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__V_64_64));
#line 994 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 994 "prog_io_item.m"
                }
#line 992 "prog_io_item.m"
                {
#line 992 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 992 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 992 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 992 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 992 "prog_io_item.m"
                }
#line 995 "prog_io_item.m"
                {
#line 995 "prog_io_item.m"
                  parse_tree__prog_io_item__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_38));
#line 995 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 995 "prog_io_item.m"
                }
#line 995 "prog_io_item.m"
                {
#line 995 "prog_io_item.m"
                  MR_Word base;
#line 995 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 995 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 995 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 995 "prog_io_item.m"
                }
#line 987 "prog_io_item.m"
              }
#line 966 "prog_io_item.m"
          }
#line 964 "prog_io_item.m"
      }
#line 1001 "prog_io_item.m"
    else
#line 1002 "prog_io_item.m"
      {
#line 1002 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_108_108 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1002 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_74_74;
#line 1002 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_77_77;
#line 1002 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_80_80;
#line 1002 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_81_81;
#line 1002 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_90_90;
#line 1002 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_91_91;
#line 1002 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_92_92;
#line 1002 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_93_93;
#line 1002 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_94_94;
#line 1002 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_97_97;
#line 1002 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__PredModeTermStr_99;
#line 1002 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_100;
#line 1002 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_101;

#line 1002 "prog_io_item.m"
        {
#line 1002 "prog_io_item.m"
          parse_tree__prog_io_item__PredModeTermStr_99 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_108_108, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__PredModeTerm_15);
        }
#line 1004 "prog_io_item.m"
        {
#line 1004 "prog_io_item.m"
          parse_tree__prog_io_item__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1004 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_81_81, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_99));
#line 1004 "prog_io_item.m"
        }
#line 1004 "prog_io_item.m"
        {
#line 1004 "prog_io_item.m"
          parse_tree__prog_io_item__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_item__V_81_81));
#line 1004 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 1004 "prog_io_item.m"
        }
#line 1004 "prog_io_item.m"
        {
#line 1004 "prog_io_item.m"
          parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[118])));
#line 1004 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 1004 "prog_io_item.m"
        }
#line 1003 "prog_io_item.m"
        {
#line 1003 "prog_io_item.m"
          parse_tree__prog_io_item__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[129])));
#line 1003 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 1003 "prog_io_item.m"
        }
#line 1003 "prog_io_item.m"
        {
#line 1003 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[113])));
#line 1003 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_100, 1) = ((MR_Box) (parse_tree__prog_io_item__V_74_74));
#line 1003 "prog_io_item.m"
        }
#line 1006 "prog_io_item.m"
        {
#line 1006 "prog_io_item.m"
          parse_tree__prog_io_item__V_92_92 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_108_108, parse_tree__prog_io_item__PredModeTerm_15);
        }
#line 1006 "prog_io_item.m"
        {
#line 1006 "prog_io_item.m"
          parse_tree__prog_io_item__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1006 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_100));
#line 1006 "prog_io_item.m"
        }
#line 1006 "prog_io_item.m"
        {
#line 1006 "prog_io_item.m"
          parse_tree__prog_io_item__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_item__V_94_94));
#line 1006 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1006 "prog_io_item.m"
        }
#line 1006 "prog_io_item.m"
        {
#line 1006 "prog_io_item.m"
          parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1006 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 1006 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (parse_tree__prog_io_item__V_93_93));
#line 1006 "prog_io_item.m"
        }
#line 1006 "prog_io_item.m"
        {
#line 1006 "prog_io_item.m"
          parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1006 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1006 "prog_io_item.m"
        }
#line 1005 "prog_io_item.m"
        {
#line 1005 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1005 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1005 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1005 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 2) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 1005 "prog_io_item.m"
        }
#line 1007 "prog_io_item.m"
        {
#line 1007 "prog_io_item.m"
          parse_tree__prog_io_item__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_101));
#line 1007 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1007 "prog_io_item.m"
        }
#line 1007 "prog_io_item.m"
        {
#line 1007 "prog_io_item.m"
          MR_Word base;
#line 1007 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 1007 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_97_97));
#line 1007 "prog_io_item.m"
        }
#line 1002 "prog_io_item.m"
      }
#line 1001 "prog_io_item.m"
  }
#line 956 "prog_io_item.m"
}

#line 916 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(
#line 916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_14,
#line 916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_15,
#line 916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_16,
#line 916 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_17,
#line 916 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_18)
#line 916 "prog_io_item.m"
{
#line 941 "prog_io_item.m"
  {
#line 941 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 941 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeSugaredFuncTerm_19;
#line 941 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnTypeTerm_20;
#line 923 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_28_28;
#line 923 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_29_29;
#line 923 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 923 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;
#line 923 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 924 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;

#line 923 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 923 "prog_io_item.m"
      {
#line 924 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_12)) == (MR_mktag((MR_Integer) 0)));
#line 924 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 924 "prog_io_item.m"
          {
#line 924 "prog_io_item.m"
            parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 0)));
#line 924 "prog_io_item.m"
            parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 1)));
#line 924 "prog_io_item.m"
            parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 2)));
#line 924 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 924 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 924 "prog_io_item.m"
              {
#line 924 "prog_io_item.m"
                parse_tree__prog_io_item__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_28_28, (MR_Integer) 0)));
#line 924 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_29_29, (MR_String) "=") == 0);
#line 923 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 923 "prog_io_item.m"
                  {
#line 925 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 925 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 925 "prog_io_item.m"
                      {
#line 925 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeSugaredFuncTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 0)));
#line 925 "prog_io_item.m"
                        parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 1)));
#line 925 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 925 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 925 "prog_io_item.m"
                          {
#line 925 "prog_io_item.m"
                            parse_tree__prog_io_item__ReturnTypeTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 925 "prog_io_item.m"
                            parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, (MR_Integer) 1)));
#line 925 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 925 "prog_io_item.m"
                          }
#line 925 "prog_io_item.m"
                      }
#line 923 "prog_io_item.m"
                  }
#line 924 "prog_io_item.m"
              }
#line 924 "prog_io_item.m"
          }
#line 923 "prog_io_item.m"
      }
#line 941 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 927 "prog_io_item.m"
      {
#line 927 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncTerm_22;
#line 927 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_24;

#line 927 "prog_io_item.m"
        {
#line 927 "prog_io_item.m"
          parse_tree__prog_io_item__FuncTerm_22 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__MaybeSugaredFuncTerm_19);
        }
#line 930 "prog_io_item.m"
        {
#line 930 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_22, parse_tree__prog_io_item__VarSet_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[81]), &parse_tree__prog_io_item__MaybeFunctorArgs_24);
        }
#line 935 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_24)) == (MR_mktag((MR_Integer) 0))))
#line 933 "prog_io_item.m"
          {
#line 933 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 0)));

#line 934 "prog_io_item.m"
            {
#line 934 "prog_io_item.m"
              MR_Word base;
#line 934 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 934 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 934 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_25));
#line 934 "prog_io_item.m"
            }
#line 933 "prog_io_item.m"
          }
#line 935 "prog_io_item.m"
        else
#line 936 "prog_io_item.m"
          {
#line 936 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 0)));
#line 936 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 1)));

#line 937 "prog_io_item.m"
            {
#line 937 "prog_io_item.m"
              parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(parse_tree__prog_io_item__Functor_26, parse_tree__prog_io_item__ArgTerms_27, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_22, parse_tree__prog_io_item__ReturnTypeTerm_20, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__MaybeDet_15, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_16, parse_tree__prog_io_item__SeqNum_17, parse_tree__prog_io_item__MaybeItem_18);
#line 937 "prog_io_item.m"
              return;
            }
#line 936 "prog_io_item.m"
          }
#line 927 "prog_io_item.m"
      }
#line 941 "prog_io_item.m"
    else
#line 942 "prog_io_item.m"
      {
#line 942 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_58;

#line 943 "prog_io_item.m"
        {
#line 943 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[82]), &parse_tree__prog_io_item__MaybeFunctorArgs_58);
        }
#line 948 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_58)) == (MR_mktag((MR_Integer) 0))))
#line 946 "prog_io_item.m"
          {
#line 946 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 0)));

#line 947 "prog_io_item.m"
            {
#line 947 "prog_io_item.m"
              MR_Word base;
#line 947 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 947 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 947 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_51));
#line 947 "prog_io_item.m"
            }
#line 946 "prog_io_item.m"
          }
#line 948 "prog_io_item.m"
        else
#line 949 "prog_io_item.m"
          {
#line 949 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 0)));
#line 949 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 1)));

#line 950 "prog_io_item.m"
            {
#line 950 "prog_io_item.m"
              parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(parse_tree__prog_io_item__Functor_52, parse_tree__prog_io_item__ArgTerms_53, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__WithInst_14, parse_tree__prog_io_item__MaybeDet_15, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_16, parse_tree__prog_io_item__SeqNum_17, parse_tree__prog_io_item__MaybeItem_18);
#line 950 "prog_io_item.m"
              return;
            }
#line 949 "prog_io_item.m"
          }
#line 942 "prog_io_item.m"
      }
#line 941 "prog_io_item.m"
  }
#line 916 "prog_io_item.m"
}

#line 884 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_7_p_0(
#line 884 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 884 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 884 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 884 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 884 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 884 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 884 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 884 "prog_io_item.m"
{
#line 888 "prog_io_item.m"
  {
#line 888 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 888 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTerm_15;
#line 888 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_16;
#line 888 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithInst_18;
#line 888 "prog_io_item.m"
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
#line 910 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeDetism_20;
#line 910 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithInst_21;

#line 889 "prog_io_item.m"
    {
#line 889 "prog_io_item.m"
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
#line 894 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_16)) == (MR_mktag((MR_Integer) 1)));
#line 894 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 894 "prog_io_item.m"
      {
#line 894 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeDetism_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_16, (MR_Integer) 0)));
#line 895 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_18)) == (MR_mktag((MR_Integer) 1)));
#line 895 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 895 "prog_io_item.m"
          parse_tree__prog_io_item__WithInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_18, (MR_Integer) 0)));
#line 894 "prog_io_item.m"
      }
#line 910 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 906 "prog_io_item.m"
      {
#line 898 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 899 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;

#line 898 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_20)) == (MR_mktag((MR_Integer) 1)));
#line 898 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 898 "prog_io_item.m"
          {
#line 898 "prog_io_item.m"
            parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_20, (MR_Integer) 0)));
#line 899 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_21)) == (MR_mktag((MR_Integer) 1)));
#line 899 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 899 "prog_io_item.m"
              parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_21, (MR_Integer) 0)));
#line 898 "prog_io_item.m"
          }
#line 906 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 902 "prog_io_item.m"
          {
#line 902 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_25;
#line 902 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 902 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 902 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_42_42;
#line 902 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_47_47;

#line 904 "prog_io_item.m"
            {
#line 904 "prog_io_item.m"
              parse_tree__prog_io_item__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_10);
            }
#line 904 "prog_io_item.m"
            {
#line 904 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 904 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[104])));
#line 904 "prog_io_item.m"
            }
#line 904 "prog_io_item.m"
            {
#line 904 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 904 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_item.m"
            }
#line 903 "prog_io_item.m"
            {
#line 903 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 903 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 903 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 903 "prog_io_item.m"
            }
#line 905 "prog_io_item.m"
            {
#line 905 "prog_io_item.m"
              parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_25));
#line 905 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "prog_io_item.m"
            }
#line 905 "prog_io_item.m"
            {
#line 905 "prog_io_item.m"
              MR_Word base;
#line 905 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 905 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 905 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 905 "prog_io_item.m"
            }
#line 902 "prog_io_item.m"
          }
#line 906 "prog_io_item.m"
        else
#line 907 "prog_io_item.m"
          {
#line 907 "prog_io_item.m"
            parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__BaseTerm_19, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__WithInst_21, parse_tree__prog_io_item__MaybeDetism_20, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeItem_14);
#line 907 "prog_io_item.m"
            return;
          }
#line 906 "prog_io_item.m"
      }
#line 910 "prog_io_item.m"
    else
#line 912 "prog_io_item.m"
      {
#line 912 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_26;
#line 912 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_49_49;
#line 912 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_50_50;

#line 911 "prog_io_item.m"
        {
#line 911 "prog_io_item.m"
          parse_tree__prog_io_item__V_49_49 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_16);
        }
#line 912 "prog_io_item.m"
        {
#line 912 "prog_io_item.m"
          parse_tree__prog_io_item__V_50_50 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_18);
        }
#line 912 "prog_io_item.m"
        {
#line 912 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_49_49, parse_tree__prog_io_item__V_50_50);
        }
#line 913 "prog_io_item.m"
        {
#line 913 "prog_io_item.m"
          MR_Word base;
#line 913 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 913 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 913 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_26));
#line 913 "prog_io_item.m"
        }
#line 912 "prog_io_item.m"
      }
#line 888 "prog_io_item.m"
  }
#line 884 "prog_io_item.m"
}

#line 871 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__type_and_mode_list_is_consistent_type_and_mode_1_p_0(
#line 871 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1)
#line 871 "prog_io_item.m"
{
#line 874 "prog_io_item.m"
  while (MR_TRUE)
#line 874 "prog_io_item.m"
    {
#line 874 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 874 "prog_io_item.m"
      {
#line 874 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded;

#line 874 "prog_io_item.m"
        if ((parse_tree__prog_io_item__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 874 "prog_io_item.m"
        else
#line 875 "prog_io_item.m"
          {
#line 875 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Head_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)));
#line 875 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Tail_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 876 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_4_4;
#line 876 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_5_5;

#line 876 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Head_2)) == (MR_mktag((MR_Integer) 1)));
#line 876 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 876 "prog_io_item.m"
              {
#line 876 "prog_io_item.m"
                parse_tree__prog_io_item__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Head_2, (MR_Integer) 0)));
#line 876 "prog_io_item.m"
                parse_tree__prog_io_item__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Head_2, (MR_Integer) 1)));
#line 877 "prog_io_item.m"
                /* direct tailcall eliminated */
#line 877 "prog_io_item.m"
                {
#line 877 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_item__Tail_3;

#line 877 "prog_io_item.m"
                  parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__HeadVar__1__tmp_copy_1;
#line 877 "prog_io_item.m"
                }
#line 877 "prog_io_item.m"
                continue;
#line 876 "prog_io_item.m"
              }
#line 875 "prog_io_item.m"
          }
#line 874 "prog_io_item.m"
        return parse_tree__prog_io_item__succeeded;
#line 874 "prog_io_item.m"
      }
#line 874 "prog_io_item.m"
      break;
#line 874 "prog_io_item.m"
    }
#line 871 "prog_io_item.m"
}

#line 863 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__type_and_mode_list_is_consistent_type_only_1_p_0(
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1)
#line 863 "prog_io_item.m"
{
#line 866 "prog_io_item.m"
  while (MR_TRUE)
#line 866 "prog_io_item.m"
    {
#line 866 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 866 "prog_io_item.m"
      {
#line 866 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded;

#line 866 "prog_io_item.m"
        if ((parse_tree__prog_io_item__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 866 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 866 "prog_io_item.m"
        else
#line 867 "prog_io_item.m"
          {
#line 867 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Head_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)));
#line 867 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Tail_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 868 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_4_4;

#line 868 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Head_2)) == (MR_mktag((MR_Integer) 0)));
#line 868 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 868 "prog_io_item.m"
              {
#line 868 "prog_io_item.m"
                parse_tree__prog_io_item__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Head_2, (MR_Integer) 0)));
#line 869 "prog_io_item.m"
                /* direct tailcall eliminated */
#line 869 "prog_io_item.m"
                {
#line 869 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__HeadVar__1__tmp_copy_1 = parse_tree__prog_io_item__Tail_3;

#line 869 "prog_io_item.m"
                  parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__HeadVar__1__tmp_copy_1;
#line 869 "prog_io_item.m"
                }
#line 869 "prog_io_item.m"
                continue;
#line 868 "prog_io_item.m"
              }
#line 867 "prog_io_item.m"
          }
#line 866 "prog_io_item.m"
        return parse_tree__prog_io_item__succeeded;
#line 866 "prog_io_item.m"
      }
#line 866 "prog_io_item.m"
      break;
#line 866 "prog_io_item.m"
    }
#line 863 "prog_io_item.m"
}

#line 851 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__type_and_mode_list_is_consistent_1_p_0(
#line 851 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1)
#line 851 "prog_io_item.m"
{
#line 853 "prog_io_item.m"
  {
#line 853 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 853 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 853 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 853 "prog_io_item.m"
    else
#line 854 "prog_io_item.m"
      {
#line 854 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Head_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)));
#line 854 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Tail_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));

#line 858 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__Head_2)) == (MR_mktag((MR_Integer) 1))))
#line 860 "prog_io_item.m"
          {
#line 860 "prog_io_item.m"
            return parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__type_and_mode_list_is_consistent_type_and_mode_1_p_0(parse_tree__prog_io_item__Tail_3);
          }
#line 858 "prog_io_item.m"
        else
#line 857 "prog_io_item.m"
          {
#line 857 "prog_io_item.m"
            return parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__type_and_mode_list_is_consistent_type_only_1_p_0(parse_tree__prog_io_item__Tail_3);
          }
#line 854 "prog_io_item.m"
      }
#line 853 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 853 "prog_io_item.m"
  }
#line 851 "prog_io_item.m"
}

#line 834 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_3_p_0(
#line 834 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_4,
#line 834 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 834 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeTypeAndMode_6)
#line 834 "prog_io_item.m"
{
#line 843 "prog_io_item.m"
  {
#line 843 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 843 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeTerm_7;
#line 843 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModeTerm_8;
#line 838 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_13_13;
#line 838 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_14_14;
#line 838 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_15_15;
#line 838 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 838 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 838 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___Context_9;

#line 838 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 838 "prog_io_item.m"
      {
#line 838 "prog_io_item.m"
        parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 0)));
#line 838 "prog_io_item.m"
        parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 1)));
#line 838 "prog_io_item.m"
        parse_tree__prog_io_item___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 2)));
#line 838 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 838 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 838 "prog_io_item.m"
          {
#line 838 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_13_13, (MR_Integer) 0)));
#line 838 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_14_14, (MR_String) "::") == 0);
#line 838 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 838 "prog_io_item.m"
              {
#line 838 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 838 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 838 "prog_io_item.m"
                  {
#line 838 "prog_io_item.m"
                    parse_tree__prog_io_item__TypeTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 0)));
#line 838 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 1)));
#line 838 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 838 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 838 "prog_io_item.m"
                      {
#line 838 "prog_io_item.m"
                        parse_tree__prog_io_item__ModeTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 838 "prog_io_item.m"
                        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 1)));
#line 838 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 838 "prog_io_item.m"
                      }
#line 838 "prog_io_item.m"
                  }
#line 838 "prog_io_item.m"
              }
#line 838 "prog_io_item.m"
          }
#line 838 "prog_io_item.m"
      }
#line 843 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 839 "prog_io_item.m"
      {
#line 839 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Type_10;
#line 839 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Mode0_11;
#line 839 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Mode_12;
#line 839 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_18_18;

#line 839 "prog_io_item.m"
        {
#line 839 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__TypeTerm_7, &parse_tree__prog_io_item__Type_10);
        }
#line 839 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 839 "prog_io_item.m"
          {
#line 840 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = (MR_Integer) 0;
#line 840 "prog_io_item.m"
            {
#line 840 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_item__V_18_18, parse_tree__prog_io_item__ModeTerm_8, &parse_tree__prog_io_item__Mode0_11);
            }
#line 839 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 839 "prog_io_item.m"
              {
#line 841 "prog_io_item.m"
                {
#line 841 "prog_io_item.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_4, parse_tree__prog_io_item__Mode0_11, &parse_tree__prog_io_item__Mode_12);
                }
#line 842 "prog_io_item.m"
                {
#line 842 "prog_io_item.m"
                  MR_Word base;
#line 842 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeTypeAndMode_6 = base;
#line 842 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_10));
#line 842 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__Mode_12));
#line 842 "prog_io_item.m"
                }
#line 842 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 839 "prog_io_item.m"
              }
#line 839 "prog_io_item.m"
          }
#line 839 "prog_io_item.m"
      }
#line 843 "prog_io_item.m"
    else
#line 844 "prog_io_item.m"
      {
#line 844 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Type_19;

#line 844 "prog_io_item.m"
        {
#line 844 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__Term_5, &parse_tree__prog_io_item__Type_19);
        }
#line 844 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 844 "prog_io_item.m"
          {
#line 845 "prog_io_item.m"
            {
#line 845 "prog_io_item.m"
              MR_Word base;
#line 845 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 845 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeTypeAndMode_6 = base;
#line 845 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_19));
#line 845 "prog_io_item.m"
            }
#line 845 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 844 "prog_io_item.m"
          }
#line 844 "prog_io_item.m"
      }
#line 843 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 843 "prog_io_item.m"
  }
#line 834 "prog_io_item.m"
}

#line 826 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(
#line 826 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_1,
#line 826 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 826 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3)
#line 826 "prog_io_item.m"
{
#line 829 "prog_io_item.m"
  {
#line 829 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 829 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 829 "prog_io_item.m"
      {
#line 829 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 829 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 829 "prog_io_item.m"
      }
#line 829 "prog_io_item.m"
    else
#line 830 "prog_io_item.m"
      {
#line 830 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 830 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 830 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__H_8;
#line 830 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__T_9;
#line 843 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeTerm_13;
#line 843 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModeTerm_14;
#line 838 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_19_19;
#line 838 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_20_20;
#line 838 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_21_21;
#line 838 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 838 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 838 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item___Context_15;

#line 838 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__H0_6)) == (MR_mktag((MR_Integer) 0)));
#line 838 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 838 "prog_io_item.m"
          {
#line 838 "prog_io_item.m"
            parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 0)));
#line 838 "prog_io_item.m"
            parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 1)));
#line 838 "prog_io_item.m"
            parse_tree__prog_io_item___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 2)));
#line 838 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 838 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 838 "prog_io_item.m"
              {
#line 838 "prog_io_item.m"
                parse_tree__prog_io_item__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 838 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_20_20, (MR_String) "::") == 0);
#line 838 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 838 "prog_io_item.m"
                  {
#line 838 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 838 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 838 "prog_io_item.m"
                      {
#line 838 "prog_io_item.m"
                        parse_tree__prog_io_item__TypeTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 838 "prog_io_item.m"
                        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 1)));
#line 838 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 838 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 838 "prog_io_item.m"
                          {
#line 838 "prog_io_item.m"
                            parse_tree__prog_io_item__ModeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, (MR_Integer) 0)));
#line 838 "prog_io_item.m"
                            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, (MR_Integer) 1)));
#line 838 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 838 "prog_io_item.m"
                          }
#line 838 "prog_io_item.m"
                      }
#line 838 "prog_io_item.m"
                  }
#line 838 "prog_io_item.m"
              }
#line 838 "prog_io_item.m"
          }
#line 843 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 839 "prog_io_item.m"
          {
#line 839 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_16;
#line 839 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Mode0_17;
#line 839 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Mode_18;
#line 839 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_24_24;

#line 839 "prog_io_item.m"
            {
#line 839 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__TypeTerm_13, &parse_tree__prog_io_item__Type_16);
            }
#line 839 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 839 "prog_io_item.m"
              {
#line 840 "prog_io_item.m"
                parse_tree__prog_io_item__V_24_24 = (MR_Integer) 0;
#line 840 "prog_io_item.m"
                {
#line 840 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_item__V_24_24, parse_tree__prog_io_item__ModeTerm_14, &parse_tree__prog_io_item__Mode0_17);
                }
#line 839 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 839 "prog_io_item.m"
                  {
#line 841 "prog_io_item.m"
                    {
#line 841 "prog_io_item.m"
                      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_1, parse_tree__prog_io_item__Mode0_17, &parse_tree__prog_io_item__Mode_18);
                    }
#line 842 "prog_io_item.m"
                    {
#line 842 "prog_io_item.m"
                      parse_tree__prog_io_item__H_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__H_8, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_16));
#line 842 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__H_8, 1) = ((MR_Box) (parse_tree__prog_io_item__Mode_18));
#line 842 "prog_io_item.m"
                    }
#line 842 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 839 "prog_io_item.m"
                  }
#line 839 "prog_io_item.m"
              }
#line 839 "prog_io_item.m"
          }
#line 843 "prog_io_item.m"
        else
#line 844 "prog_io_item.m"
          {
#line 844 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_25;

#line 844 "prog_io_item.m"
            {
#line 844 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__H0_6, &parse_tree__prog_io_item__Type_25);
            }
#line 844 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 844 "prog_io_item.m"
              {
#line 845 "prog_io_item.m"
                {
#line 845 "prog_io_item.m"
                  parse_tree__prog_io_item__H_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 845 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H_8, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_25));
#line 845 "prog_io_item.m"
                }
#line 845 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 844 "prog_io_item.m"
              }
#line 844 "prog_io_item.m"
          }
#line 830 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 830 "prog_io_item.m"
          {
#line 832 "prog_io_item.m"
            {
#line 832 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_1, parse_tree__prog_io_item__T0_7, &parse_tree__prog_io_item__T_9);
            }
#line 830 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 830 "prog_io_item.m"
              {
#line 830 "prog_io_item.m"
                {
#line 830 "prog_io_item.m"
                  MR_Word base;
#line 830 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "prog_io_item.m"
                  *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 830 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__H_8));
#line 830 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__T_9));
#line 830 "prog_io_item.m"
                }
#line 830 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 830 "prog_io_item.m"
              }
#line 830 "prog_io_item.m"
          }
#line 830 "prog_io_item.m"
      }
#line 829 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 829 "prog_io_item.m"
  }
#line 826 "prog_io_item.m"
}

#line 751 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncName_14,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Args_15,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ReturnArg_16,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncTerm_17,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_18,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ExistQVars_21,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Constraints_22,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_23,
#line 751 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_24,
#line 751 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_25,
#line 751 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_26)
#line 751 "prog_io_item.m"
{
#line 758 "prog_io_item.m"
  {
#line 758 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 758 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_147_147;
#line 758 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConsistentArgsSpecs_27;
#line 758 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgsOnlySpecs_36;
#line 758 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnOnlySpecs_43;
#line 758 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConsistencySpecs_44;
#line 758 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_112_112;
#line 772 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_74_74;
#line 773 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_33_33;
#line 772 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 772 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 772 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;
#line 785 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_93_93;
#line 786 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_39_39;
#line 786 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_40_40;
#line 785 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_38_38;
#line 785 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_37_37;

#line 760 "prog_io_item.m"
    {
#line 760 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__type_and_mode_list_is_consistent_1_p_0(parse_tree__prog_io_item__Args_15);
    }
#line 763 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 762 "prog_io_item.m"
      parse_tree__prog_io_item__ConsistentArgsSpecs_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 763 "prog_io_item.m"
    else
#line 765 "prog_io_item.m"
      {
#line 765 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ConsistentSpec_29;
#line 765 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_66_66;
#line 765 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_67_67;
#line 765 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_68_68;

#line 767 "prog_io_item.m"
        {
#line 767 "prog_io_item.m"
          parse_tree__prog_io_item__V_68_68 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 767 "prog_io_item.m"
        {
#line 767 "prog_io_item.m"
          parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 767 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_item__V_68_68));
#line 767 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[121])));
#line 767 "prog_io_item.m"
        }
#line 768 "prog_io_item.m"
        {
#line 768 "prog_io_item.m"
          parse_tree__prog_io_item__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 768 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 768 "prog_io_item.m"
        }
#line 766 "prog_io_item.m"
        {
#line 766 "prog_io_item.m"
          parse_tree__prog_io_item__ConsistentSpec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 766 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ConsistentSpec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ConsistentSpec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 766 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ConsistentSpec_29, 2) = ((MR_Box) (parse_tree__prog_io_item__V_66_66));
#line 766 "prog_io_item.m"
        }
#line 769 "prog_io_item.m"
        {
#line 769 "prog_io_item.m"
          parse_tree__prog_io_item__ConsistentArgsSpecs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ConsistentArgsSpecs_27, 0) = ((MR_Box) (parse_tree__prog_io_item__ConsistentSpec_29));
#line 769 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ConsistentArgsSpecs_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "prog_io_item.m"
        }
#line 765 "prog_io_item.m"
      }
#line 773 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_16)) == (MR_mktag((MR_Integer) 0)));
#line 773 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 773 "prog_io_item.m"
      {
#line 773 "prog_io_item.m"
        parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 0)));
#line 772 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 772 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 772 "prog_io_item.m"
          {
#line 772 "prog_io_item.m"
            parse_tree__prog_io_item__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 0)));
#line 772 "prog_io_item.m"
            parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 1)));
#line 772 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_74_74)) == (MR_mktag((MR_Integer) 1)));
#line 772 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 772 "prog_io_item.m"
              {
#line 772 "prog_io_item.m"
                parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, (MR_Integer) 0)));
#line 772 "prog_io_item.m"
                parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, (MR_Integer) 1)));
#line 772 "prog_io_item.m"
              }
#line 772 "prog_io_item.m"
          }
#line 773 "prog_io_item.m"
      }
#line 781 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 776 "prog_io_item.m"
      {
#line 776 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ArgsOnlySpec_35;
#line 776 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_85_85;
#line 776 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_86_86;
#line 776 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_87_87;

#line 778 "prog_io_item.m"
        {
#line 778 "prog_io_item.m"
          parse_tree__prog_io_item__V_87_87 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 778 "prog_io_item.m"
        {
#line 778 "prog_io_item.m"
          parse_tree__prog_io_item__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 778 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_item__V_87_87));
#line 778 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[122])));
#line 778 "prog_io_item.m"
        }
#line 779 "prog_io_item.m"
        {
#line 779 "prog_io_item.m"
          parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__V_86_86));
#line 779 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "prog_io_item.m"
        }
#line 777 "prog_io_item.m"
        {
#line 777 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 777 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 777 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 777 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 2) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 777 "prog_io_item.m"
        }
#line 780 "prog_io_item.m"
        {
#line 780 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpecs_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_36, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsOnlySpec_35));
#line 780 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 780 "prog_io_item.m"
        }
#line 776 "prog_io_item.m"
      }
#line 781 "prog_io_item.m"
    else
#line 782 "prog_io_item.m"
      parse_tree__prog_io_item__ArgsOnlySpecs_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 786 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_16)) == (MR_mktag((MR_Integer) 1)));
#line 786 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 786 "prog_io_item.m"
      {
#line 786 "prog_io_item.m"
        parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 0)));
#line 786 "prog_io_item.m"
        parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 1)));
#line 785 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 785 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 785 "prog_io_item.m"
          {
#line 785 "prog_io_item.m"
            parse_tree__prog_io_item__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 0)));
#line 785 "prog_io_item.m"
            parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 1)));
#line 785 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_93_93)) == (MR_mktag((MR_Integer) 0)));
#line 785 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 785 "prog_io_item.m"
              parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_93_93, (MR_Integer) 0)));
#line 785 "prog_io_item.m"
          }
#line 786 "prog_io_item.m"
      }
#line 794 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 789 "prog_io_item.m"
      {
#line 789 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ReturnOnlySpec_42;
#line 789 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_104_104;
#line 789 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_105_105;
#line 789 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_106_106;

#line 791 "prog_io_item.m"
        {
#line 791 "prog_io_item.m"
          parse_tree__prog_io_item__V_106_106 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 791 "prog_io_item.m"
        {
#line 791 "prog_io_item.m"
          parse_tree__prog_io_item__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_105_105, 0) = ((MR_Box) (parse_tree__prog_io_item__V_106_106));
#line 791 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[123])));
#line 791 "prog_io_item.m"
        }
#line 792 "prog_io_item.m"
        {
#line 792 "prog_io_item.m"
          parse_tree__prog_io_item__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_104_104, 0) = ((MR_Box) (parse_tree__prog_io_item__V_105_105));
#line 792 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "prog_io_item.m"
        }
#line 790 "prog_io_item.m"
        {
#line 790 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 790 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 790 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 790 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 2) = ((MR_Box) (parse_tree__prog_io_item__V_104_104));
#line 790 "prog_io_item.m"
        }
#line 793 "prog_io_item.m"
        {
#line 793 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpecs_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_43, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnOnlySpec_42));
#line 793 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 793 "prog_io_item.m"
        }
#line 789 "prog_io_item.m"
      }
#line 794 "prog_io_item.m"
    else
#line 795 "prog_io_item.m"
      parse_tree__prog_io_item__ReturnOnlySpecs_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8125 "parse_tree.prog_io_item.c"
    parse_tree__prog_io_item__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 797 "prog_io_item.m"
    {
#line 797 "prog_io_item.m"
      parse_tree__prog_io_item__V_112_112 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_147_147, parse_tree__prog_io_item__ArgsOnlySpecs_36, parse_tree__prog_io_item__ReturnOnlySpecs_43);
    }
#line 797 "prog_io_item.m"
    {
#line 797 "prog_io_item.m"
      parse_tree__prog_io_item__ConsistencySpecs_44 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_147_147, parse_tree__prog_io_item__ConsistentArgsSpecs_27, parse_tree__prog_io_item__V_112_112);
    }
#line 801 "prog_io_item.m"
    if ((parse_tree__prog_io_item__ConsistencySpecs_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 802 "prog_io_item.m"
      {
#line 802 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_148_148;
#line 802 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Purity_47;
#line 802 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_48;
#line 802 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TVarSet_49;
#line 802 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__IVarSet_50;
#line 802 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__AllArgs_51;
#line 802 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_113_113;

#line 803 "prog_io_item.m"
        {
#line 803 "prog_io_item.m"
          parse_tree__prog_io_item__get_purity_3_p_0(&parse_tree__prog_io_item__Purity_47, parse_tree__prog_io_item__Attributes0_23, &parse_tree__prog_io_item__Attributes_48);
        }
#line 8161 "parse_tree.prog_io_item.c"
        parse_tree__prog_io_item__TypeCtorInfo_148_148 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 804 "prog_io_item.m"
        {
#line 804 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__TVarSet_49);
        }
#line 805 "prog_io_item.m"
        {
#line 805 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__IVarSet_50);
        }
#line 806 "prog_io_item.m"
        {
#line 806 "prog_io_item.m"
          parse_tree__prog_io_item__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_113_113, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnArg_16));
#line 806 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 806 "prog_io_item.m"
        }
#line 806 "prog_io_item.m"
        {
#line 806 "prog_io_item.m"
          parse_tree__prog_io_item__AllArgs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io_item__Args_15, parse_tree__prog_io_item__V_113_113);
        }
#line 807 "prog_io_item.m"
        {
#line 807 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__AllArgs_51);
        }
#line 815 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 808 "prog_io_item.m"
          {
#line 808 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ItemPredDecl_53;
#line 808 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Item_54;
#line 808 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeItem0_55;

#line 809 "prog_io_item.m"
            {
#line 809 "prog_io_item.m"
              parse_tree__prog_io_item__ItemPredDecl_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 809 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 0) = ((MR_Box) (parse_tree__prog_io_item__FuncName_14));
#line 809 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 1) = ((MR_Box) ((MR_Integer) 1));
#line 809 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 2) = ((MR_Box) (parse_tree__prog_io_item__AllArgs_51));
#line 809 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 809 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 809 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDetism_20));
#line 809 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 809 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 7) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_49));
#line 809 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 8) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_50));
#line 809 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 9) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_21));
#line 809 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 10) = ((MR_Box) (parse_tree__prog_io_item__Purity_47));
#line 809 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 11) = ((MR_Box) (parse_tree__prog_io_item__Constraints_22));
#line 809 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 12) = ((MR_Box) (parse_tree__prog_io_item__Context_24));
#line 809 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 13) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_25));
#line 809 "prog_io_item.m"
            }
#line 812 "prog_io_item.m"
            {
#line 812 "prog_io_item.m"
              parse_tree__prog_io_item__Item_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 812 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_54, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_53));
#line 812 "prog_io_item.m"
            }
#line 813 "prog_io_item.m"
            {
#line 813 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeItem0_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 813 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_54));
#line 813 "prog_io_item.m"
            }
#line 814 "prog_io_item.m"
            {
#line 814 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_55, parse_tree__prog_io_item__Attributes_48, parse_tree__prog_io_item__MaybeItem_26);
#line 814 "prog_io_item.m"
              return;
            }
#line 808 "prog_io_item.m"
          }
#line 815 "prog_io_item.m"
        else
#line 816 "prog_io_item.m"
          {
#line 816 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__TermStr_56;
#line 816 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Pieces_57;
#line 816 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_58;
#line 816 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_120_120;
#line 816 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_123_123;
#line 816 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_125_125;
#line 816 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_126_126;
#line 816 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_135_135;
#line 816 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_136_136;
#line 816 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_137_137;
#line 816 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_138_138;
#line 816 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_139_139;
#line 816 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_142_142;

#line 816 "prog_io_item.m"
            {
#line 816 "prog_io_item.m"
              parse_tree__prog_io_item__TermStr_56 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__Term_18);
            }
#line 819 "prog_io_item.m"
            {
#line 819 "prog_io_item.m"
              parse_tree__prog_io_item__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 819 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_126_126, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_56));
#line 819 "prog_io_item.m"
            }
#line 819 "prog_io_item.m"
            {
#line 819 "prog_io_item.m"
              parse_tree__prog_io_item__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_item__V_126_126));
#line 819 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 819 "prog_io_item.m"
            }
#line 818 "prog_io_item.m"
            {
#line 818 "prog_io_item.m"
              parse_tree__prog_io_item__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_123_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 818 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_123_123, 1) = ((MR_Box) (parse_tree__prog_io_item__V_125_125));
#line 818 "prog_io_item.m"
            }
#line 818 "prog_io_item.m"
            {
#line 818 "prog_io_item.m"
              parse_tree__prog_io_item__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_120_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[125])));
#line 818 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_120_120, 1) = ((MR_Box) (parse_tree__prog_io_item__V_123_123));
#line 818 "prog_io_item.m"
            }
#line 817 "prog_io_item.m"
            {
#line 817 "prog_io_item.m"
              parse_tree__prog_io_item__Pieces_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[124])));
#line 817 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_57, 1) = ((MR_Box) (parse_tree__prog_io_item__V_120_120));
#line 817 "prog_io_item.m"
            }
#line 821 "prog_io_item.m"
            {
#line 821 "prog_io_item.m"
              parse_tree__prog_io_item__V_137_137 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__Term_18);
            }
#line 821 "prog_io_item.m"
            {
#line 821 "prog_io_item.m"
              parse_tree__prog_io_item__V_139_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 821 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_139_139, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_57));
#line 821 "prog_io_item.m"
            }
#line 821 "prog_io_item.m"
            {
#line 821 "prog_io_item.m"
              parse_tree__prog_io_item__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_item__V_139_139));
#line 821 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 821 "prog_io_item.m"
            }
#line 821 "prog_io_item.m"
            {
#line 821 "prog_io_item.m"
              parse_tree__prog_io_item__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 821 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_136_136, 0) = ((MR_Box) (parse_tree__prog_io_item__V_137_137));
#line 821 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_136_136, 1) = ((MR_Box) (parse_tree__prog_io_item__V_138_138));
#line 821 "prog_io_item.m"
            }
#line 821 "prog_io_item.m"
            {
#line 821 "prog_io_item.m"
              parse_tree__prog_io_item__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_135_135, 0) = ((MR_Box) (parse_tree__prog_io_item__V_136_136));
#line 821 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 821 "prog_io_item.m"
            }
#line 820 "prog_io_item.m"
            {
#line 820 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 820 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 820 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 820 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 2) = ((MR_Box) (parse_tree__prog_io_item__V_135_135));
#line 820 "prog_io_item.m"
            }
#line 822 "prog_io_item.m"
            {
#line 822 "prog_io_item.m"
              parse_tree__prog_io_item__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_142_142, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_58));
#line 822 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 822 "prog_io_item.m"
            }
#line 822 "prog_io_item.m"
            {
#line 822 "prog_io_item.m"
              MR_Word base;
#line 822 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 822 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 822 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_142_142));
#line 822 "prog_io_item.m"
            }
#line 816 "prog_io_item.m"
          }
#line 802 "prog_io_item.m"
      }
#line 801 "prog_io_item.m"
    else
#line 800 "prog_io_item.m"
      {
#line 800 "prog_io_item.m"
        MR_Word base;
#line 800 "prog_io_item.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 800 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 800 "prog_io_item.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ConsistencySpecs_44));
#line 800 "prog_io_item.m"
      }
#line 758 "prog_io_item.m"
  }
#line 751 "prog_io_item.m"
}

#line 668 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_8_p_0(
#line 668 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 668 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 668 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_11,
#line 668 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_12,
#line 668 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_13,
#line 668 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 668 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 668 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 668 "prog_io_item.m"
{
#line 673 "prog_io_item.m"
  {
#line 673 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 673 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes_17;
#line 673 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeContext_18;

#line 674 "prog_io_item.m"
    {
#line 674 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__Attributes0_13, &parse_tree__prog_io_item__Attributes_17, &parse_tree__prog_io_item__MaybeContext_18);
    }
#line 679 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeContext_18)) == (MR_mktag((MR_Integer) 0))))
#line 677 "prog_io_item.m"
      {
#line 677 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 0)));

#line 678 "prog_io_item.m"
        {
#line 678 "prog_io_item.m"
          MR_Word base;
#line 678 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 678 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 678 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_19));
#line 678 "prog_io_item.m"
        }
#line 677 "prog_io_item.m"
      }
#line 679 "prog_io_item.m"
    else
#line 680 "prog_io_item.m"
      {
#line 680 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ExistQVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 0)));
#line 680 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Constraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 1)));
#line 680 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 2)));
#line 742 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeSugaredFuncTerm_23;
#line 742 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ReturnTerm_24;
#line 682 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_44_44;
#line 682 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_45_45;
#line 682 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_46_46;
#line 682 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_47_47;
#line 682 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_48_48;
#line 682 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_25_25;

#line 682 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_11)) == (MR_mktag((MR_Integer) 0)));
#line 682 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 682 "prog_io_item.m"
          {
#line 682 "prog_io_item.m"
            parse_tree__prog_io_item__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 0)));
#line 682 "prog_io_item.m"
            parse_tree__prog_io_item__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 1)));
#line 682 "prog_io_item.m"
            parse_tree__prog_io_item__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 2)));
#line 682 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_44_44)) == (MR_mktag((MR_Integer) 0)));
#line 682 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 682 "prog_io_item.m"
              {
#line 682 "prog_io_item.m"
                parse_tree__prog_io_item__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_44_44, (MR_Integer) 0)));
#line 682 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_45_45, (MR_String) "=") == 0);
#line 682 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 682 "prog_io_item.m"
                  {
#line 683 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 683 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 683 "prog_io_item.m"
                      {
#line 683 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeSugaredFuncTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, (MR_Integer) 0)));
#line 683 "prog_io_item.m"
                        parse_tree__prog_io_item__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, (MR_Integer) 1)));
#line 683 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 683 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 683 "prog_io_item.m"
                          {
#line 683 "prog_io_item.m"
                            parse_tree__prog_io_item__ReturnTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, (MR_Integer) 0)));
#line 683 "prog_io_item.m"
                            parse_tree__prog_io_item__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, (MR_Integer) 1)));
#line 683 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "prog_io_item.m"
                          }
#line 683 "prog_io_item.m"
                      }
#line 682 "prog_io_item.m"
                  }
#line 682 "prog_io_item.m"
              }
#line 682 "prog_io_item.m"
          }
#line 742 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 685 "prog_io_item.m"
          {
#line 685 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_148_148;
#line 685 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__FuncTerm_26;
#line 685 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFuncNameAndArgs_28;

#line 685 "prog_io_item.m"
            {
#line 685 "prog_io_item.m"
              parse_tree__prog_io_item__FuncTerm_26 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__MaybeSugaredFuncTerm_23);
            }
#line 8608 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_148_148 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 688 "prog_io_item.m"
            {
#line 688 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__FuncTerm_26, parse_tree__prog_io_item__VarSet_10, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[56]), &parse_tree__prog_io_item__MaybeFuncNameAndArgs_28);
            }
#line 693 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFuncNameAndArgs_28)) == (MR_mktag((MR_Integer) 0))))
#line 691 "prog_io_item.m"
              {
#line 691 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFuncNameAndArgs_28, (MR_Integer) 0)));

#line 692 "prog_io_item.m"
                {
#line 692 "prog_io_item.m"
                  MR_Word base;
#line 692 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 692 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 692 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_140));
#line 692 "prog_io_item.m"
                }
#line 691 "prog_io_item.m"
              }
#line 693 "prog_io_item.m"
            else
#line 694 "prog_io_item.m"
              {
#line 694 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__FuncName_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncNameAndArgs_28, (MR_Integer) 0)));
#line 694 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncNameAndArgs_28, (MR_Integer) 1)));
#line 694 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeArgs_32;
#line 694 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeReturnArg_37;
#line 700 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgsPrime_31;
#line 716 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ReturnArgPrime_36;
#line 736 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Args_40;
#line 736 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ReturnArg_41;

#line 696 "prog_io_item.m"
                {
#line 696 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_22, parse_tree__prog_io_item__ArgTerms_30, &parse_tree__prog_io_item__ArgsPrime_31);
                }
#line 700 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 699 "prog_io_item.m"
                  {
#line 699 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 699 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeArgs_32, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsPrime_31));
#line 699 "prog_io_item.m"
                  }
#line 700 "prog_io_item.m"
                else
#line 701 "prog_io_item.m"
                  {
#line 701 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__FuncTermStr_33;
#line 701 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ArgsPieces_34;
#line 701 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ArgsSpec_35;
#line 701 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_60_60;
#line 701 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_63_63;
#line 701 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_66_66;
#line 701 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_67_67;
#line 701 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_76_76;
#line 701 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_77_77;
#line 701 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_78_78;
#line 701 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_79_79;
#line 701 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_80_80;
#line 701 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_83_83;

#line 701 "prog_io_item.m"
                    {
#line 701 "prog_io_item.m"
                      parse_tree__prog_io_item__FuncTermStr_33 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__FuncTerm_26);
                    }
#line 704 "prog_io_item.m"
                    {
#line 704 "prog_io_item.m"
                      parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 704 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_item__FuncTermStr_33));
#line 704 "prog_io_item.m"
                    }
#line 704 "prog_io_item.m"
                    {
#line 704 "prog_io_item.m"
                      parse_tree__prog_io_item__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 704 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 704 "prog_io_item.m"
                    }
#line 703 "prog_io_item.m"
                    {
#line 703 "prog_io_item.m"
                      parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[118])));
#line 703 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_item__V_66_66));
#line 703 "prog_io_item.m"
                    }
#line 703 "prog_io_item.m"
                    {
#line 703 "prog_io_item.m"
                      parse_tree__prog_io_item__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[117])));
#line 703 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 703 "prog_io_item.m"
                    }
#line 702 "prog_io_item.m"
                    {
#line 702 "prog_io_item.m"
                      parse_tree__prog_io_item__ArgsPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[116])));
#line 702 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsPieces_34, 1) = ((MR_Box) (parse_tree__prog_io_item__V_60_60));
#line 702 "prog_io_item.m"
                    }
#line 707 "prog_io_item.m"
                    {
#line 707 "prog_io_item.m"
                      parse_tree__prog_io_item__V_78_78 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__FuncTerm_26);
                    }
#line 708 "prog_io_item.m"
                    {
#line 708 "prog_io_item.m"
                      parse_tree__prog_io_item__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 708 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsPieces_34));
#line 708 "prog_io_item.m"
                    }
#line 708 "prog_io_item.m"
                    {
#line 708 "prog_io_item.m"
                      parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 708 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "prog_io_item.m"
                    }
#line 707 "prog_io_item.m"
                    {
#line 707 "prog_io_item.m"
                      parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 707 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 707 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 707 "prog_io_item.m"
                    }
#line 708 "prog_io_item.m"
                    {
#line 708 "prog_io_item.m"
                      parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 708 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "prog_io_item.m"
                    }
#line 705 "prog_io_item.m"
                    {
#line 705 "prog_io_item.m"
                      parse_tree__prog_io_item__ArgsSpec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 705 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 705 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 705 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_35, 2) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 705 "prog_io_item.m"
                    }
#line 709 "prog_io_item.m"
                    {
#line 709 "prog_io_item.m"
                      parse_tree__prog_io_item__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsSpec_35));
#line 709 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "prog_io_item.m"
                    }
#line 709 "prog_io_item.m"
                    {
#line 709 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeArgs_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 709 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeArgs_32, 0) = ((MR_Box) (parse_tree__prog_io_item__V_83_83));
#line 709 "prog_io_item.m"
                    }
#line 701 "prog_io_item.m"
                  }
#line 712 "prog_io_item.m"
                {
#line 712 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_3_p_0(parse_tree__prog_io_item__InstConstraints_22, parse_tree__prog_io_item__ReturnTerm_24, &parse_tree__prog_io_item__ReturnArgPrime_36);
                }
#line 716 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 715 "prog_io_item.m"
                  {
#line 715 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeReturnArg_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 715 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeReturnArg_37, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnArgPrime_36));
#line 715 "prog_io_item.m"
                  }
#line 716 "prog_io_item.m"
                else
#line 719 "prog_io_item.m"
                  {
#line 719 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ReturnSpec_39;
#line 719 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_101_101;
#line 719 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_102_102;
#line 719 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_103_103;
#line 719 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_108_108;

#line 722 "prog_io_item.m"
                    {
#line 722 "prog_io_item.m"
                      parse_tree__prog_io_item__V_103_103 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__ReturnTerm_24);
                    }
#line 722 "prog_io_item.m"
                    {
#line 722 "prog_io_item.m"
                      parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_item__V_103_103));
#line 722 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[119])));
#line 722 "prog_io_item.m"
                    }
#line 723 "prog_io_item.m"
                    {
#line 723 "prog_io_item.m"
                      parse_tree__prog_io_item__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 723 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 723 "prog_io_item.m"
                    }
#line 720 "prog_io_item.m"
                    {
#line 720 "prog_io_item.m"
                      parse_tree__prog_io_item__ReturnSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 720 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 720 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 720 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_39, 2) = ((MR_Box) (parse_tree__prog_io_item__V_101_101));
#line 720 "prog_io_item.m"
                    }
#line 724 "prog_io_item.m"
                    {
#line 724 "prog_io_item.m"
                      parse_tree__prog_io_item__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnSpec_39));
#line 724 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 724 "prog_io_item.m"
                    }
#line 724 "prog_io_item.m"
                    {
#line 724 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeReturnArg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 724 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeReturnArg_37, 0) = ((MR_Box) (parse_tree__prog_io_item__V_108_108));
#line 724 "prog_io_item.m"
                    }
#line 719 "prog_io_item.m"
                  }
#line 727 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeArgs_32)) == (MR_mktag((MR_Integer) 1)));
#line 727 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 727 "prog_io_item.m"
                  {
#line 727 "prog_io_item.m"
                    parse_tree__prog_io_item__Args_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeArgs_32, (MR_Integer) 0)));
#line 728 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeReturnArg_37)) == (MR_mktag((MR_Integer) 1)));
#line 728 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 728 "prog_io_item.m"
                      parse_tree__prog_io_item__ReturnArg_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeReturnArg_37, (MR_Integer) 0)));
#line 727 "prog_io_item.m"
                  }
#line 736 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 732 "prog_io_item.m"
                  {
#line 732 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(parse_tree__prog_io_item__FuncName_29, parse_tree__prog_io_item__Args_40, parse_tree__prog_io_item__ReturnArg_41, parse_tree__prog_io_item__FuncTerm_26, parse_tree__prog_io_item__Term_11, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__MaybeDet_12, parse_tree__prog_io_item__ExistQVars_20, parse_tree__prog_io_item__Constraints_21, parse_tree__prog_io_item__Attributes_17, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 732 "prog_io_item.m"
                    return;
                  }
#line 736 "prog_io_item.m"
                else
#line 738 "prog_io_item.m"
                  {
#line 738 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_110_110;
#line 738 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_111_111;
#line 738 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Specs_141;

#line 737 "prog_io_item.m"
                    {
#line 737 "prog_io_item.m"
                      parse_tree__prog_io_item__V_110_110 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[5], parse_tree__prog_io_item__MaybeArgs_32);
                    }
#line 738 "prog_io_item.m"
                    {
#line 738 "prog_io_item.m"
                      parse_tree__prog_io_item__V_111_111 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io_item__MaybeReturnArg_37);
                    }
#line 737 "prog_io_item.m"
                    {
#line 737 "prog_io_item.m"
                      parse_tree__prog_io_item__Specs_141 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_110_110, parse_tree__prog_io_item__V_111_111);
                    }
#line 739 "prog_io_item.m"
                    {
#line 739 "prog_io_item.m"
                      MR_Word base;
#line 739 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 739 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 739 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_141));
#line 739 "prog_io_item.m"
                    }
#line 738 "prog_io_item.m"
                  }
#line 694 "prog_io_item.m"
              }
#line 685 "prog_io_item.m"
          }
#line 742 "prog_io_item.m"
        else
#line 744 "prog_io_item.m"
          {
#line 744 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_43;
#line 744 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_131_131;
#line 744 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_132_132;
#line 744 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_133_133;
#line 744 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_138_138;

#line 746 "prog_io_item.m"
            {
#line 746 "prog_io_item.m"
              parse_tree__prog_io_item__V_133_133 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_11);
            }
#line 746 "prog_io_item.m"
            {
#line 746 "prog_io_item.m"
              parse_tree__prog_io_item__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 746 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_132_132, 0) = ((MR_Box) (parse_tree__prog_io_item__V_133_133));
#line 746 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[120])));
#line 746 "prog_io_item.m"
            }
#line 746 "prog_io_item.m"
            {
#line 746 "prog_io_item.m"
              parse_tree__prog_io_item__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_131_131, 0) = ((MR_Box) (parse_tree__prog_io_item__V_132_132));
#line 746 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "prog_io_item.m"
            }
#line 745 "prog_io_item.m"
            {
#line 745 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 745 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 745 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 745 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 2) = ((MR_Box) (parse_tree__prog_io_item__V_131_131));
#line 745 "prog_io_item.m"
            }
#line 747 "prog_io_item.m"
            {
#line 747 "prog_io_item.m"
              parse_tree__prog_io_item__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_43));
#line 747 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "prog_io_item.m"
            }
#line 747 "prog_io_item.m"
            {
#line 747 "prog_io_item.m"
              MR_Word base;
#line 747 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 747 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 747 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_138_138));
#line 747 "prog_io_item.m"
            }
#line 744 "prog_io_item.m"
          }
#line 680 "prog_io_item.m"
      }
#line 673 "prog_io_item.m"
  }
#line 668 "prog_io_item.m"
}

#line 567 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_12,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_13,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_14,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_15,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_16,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 567 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 567 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 567 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22)
#line 567 "prog_io_item.m"
{
#line 574 "prog_io_item.m"
  {
#line 574 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 574 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes1_23;
#line 574 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeExistClassInstContext_24;

#line 575 "prog_io_item.m"
    {
#line 575 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_13, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__Attributes0_19, &parse_tree__prog_io_item__Attributes1_23, &parse_tree__prog_io_item__MaybeExistClassInstContext_24);
    }
#line 580 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeExistClassInstContext_24)) == (MR_mktag((MR_Integer) 0))))
#line 578 "prog_io_item.m"
      {
#line 578 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 0)));

#line 579 "prog_io_item.m"
        {
#line 579 "prog_io_item.m"
          MR_Word base;
#line 579 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 579 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 579 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_25));
#line 579 "prog_io_item.m"
        }
#line 578 "prog_io_item.m"
      }
#line 580 "prog_io_item.m"
    else
#line 582 "prog_io_item.m"
      {
#line 582 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_204_204 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 582 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_205_205;
#line 582 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ExistQVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 0)));
#line 582 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Constraints_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 1)));
#line 582 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 2)));
#line 582 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ContextPieces_29;
#line 582 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybePredNameAndArgs_30;
#line 582 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_56_56;
#line 582 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_57_57;

#line 583 "prog_io_item.m"
        {
#line 583 "prog_io_item.m"
          parse_tree__prog_io_item__V_57_57 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
        }
#line 584 "prog_io_item.m"
        {
#line 584 "prog_io_item.m"
          parse_tree__prog_io_item__V_56_56 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_204_204, parse_tree__prog_io_item__V_57_57, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[109]));
        }
#line 583 "prog_io_item.m"
        {
#line 583 "prog_io_item.m"
          parse_tree__prog_io_item__ContextPieces_29 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_204_204, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[107]), parse_tree__prog_io_item__V_56_56);
        }
#line 9172 "parse_tree.prog_io_item.c"
        parse_tree__prog_io_item__TypeCtorInfo_205_205 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 585 "prog_io_item.m"
        {
#line 585 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__ModuleName_13, parse_tree__prog_io_item__PredTypeTerm_15, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__ContextPieces_29, &parse_tree__prog_io_item__MaybePredNameAndArgs_30);
        }
#line 590 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybePredNameAndArgs_30)) == (MR_mktag((MR_Integer) 0))))
#line 588 "prog_io_item.m"
          {
#line 588 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 0)));

#line 589 "prog_io_item.m"
            {
#line 589 "prog_io_item.m"
              MR_Word base;
#line 589 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 589 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 589 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_188));
#line 589 "prog_io_item.m"
            }
#line 588 "prog_io_item.m"
          }
#line 590 "prog_io_item.m"
        else
#line 591 "prog_io_item.m"
          {
#line 591 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 0)));
#line 591 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 1)));
#line 653 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Args_33;

#line 592 "prog_io_item.m"
            {
#line 592 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_28, parse_tree__prog_io_item__ArgTerms_32, &parse_tree__prog_io_item__Args_33);
            }
#line 653 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 645 "prog_io_item.m"
              {
#line 593 "prog_io_item.m"
                {
#line 593 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__type_and_mode_list_is_consistent_1_p_0(parse_tree__prog_io_item__Args_33);
                }
#line 645 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 605 "prog_io_item.m"
                  {
#line 595 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_62_62;
#line 595 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_34_34;
#line 596 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_36_36;
#line 596 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_35_35;

#line 595 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_17)) == (MR_mktag((MR_Integer) 1)));
#line 595 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 595 "prog_io_item.m"
                      {
#line 595 "prog_io_item.m"
                        parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_17, (MR_Integer) 0)));
#line 596 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_33)) == (MR_mktag((MR_Integer) 1)));
#line 596 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 596 "prog_io_item.m"
                          {
#line 596 "prog_io_item.m"
                            parse_tree__prog_io_item__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 0)));
#line 596 "prog_io_item.m"
                            parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 1)));
#line 596 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 596 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 596 "prog_io_item.m"
                              parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_62_62, (MR_Integer) 0)));
#line 596 "prog_io_item.m"
                          }
#line 595 "prog_io_item.m"
                      }
#line 605 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 599 "prog_io_item.m"
                      {
#line 599 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Spec_38;
#line 599 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_76_76;
#line 599 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_77_77;
#line 599 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_78_78;
#line 599 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_83_83;

#line 602 "prog_io_item.m"
                        {
#line 602 "prog_io_item.m"
                          parse_tree__prog_io_item__V_78_78 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__PredTypeTerm_15);
                        }
#line 602 "prog_io_item.m"
                        {
#line 602 "prog_io_item.m"
                          parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 602 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 602 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[110])));
#line 602 "prog_io_item.m"
                        }
#line 603 "prog_io_item.m"
                        {
#line 603 "prog_io_item.m"
                          parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 603 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "prog_io_item.m"
                        }
#line 600 "prog_io_item.m"
                        {
#line 600 "prog_io_item.m"
                          parse_tree__prog_io_item__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 600 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 600 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 600 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 600 "prog_io_item.m"
                        }
#line 604 "prog_io_item.m"
                        {
#line 604 "prog_io_item.m"
                          parse_tree__prog_io_item__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_38));
#line 604 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 604 "prog_io_item.m"
                        }
#line 604 "prog_io_item.m"
                        {
#line 604 "prog_io_item.m"
                          MR_Word base;
#line 604 "prog_io_item.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 604 "prog_io_item.m"
                          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 604 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_83_83));
#line 604 "prog_io_item.m"
                        }
#line 599 "prog_io_item.m"
                      }
#line 605 "prog_io_item.m"
                    else
#line 617 "prog_io_item.m"
                      {
#line 606 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_85_85;
#line 607 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_39_39;
#line 608 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_42_42;
#line 608 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_40_40;
#line 608 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_41_41;

#line 606 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 606 "prog_io_item.m"
                          {
#line 607 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithType_16)) == (MR_mktag((MR_Integer) 1)));
#line 607 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 607 "prog_io_item.m"
                              {
#line 607 "prog_io_item.m"
                                parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithType_16, (MR_Integer) 0)));
#line 608 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_33)) == (MR_mktag((MR_Integer) 1)));
#line 608 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 608 "prog_io_item.m"
                                  {
#line 608 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 0)));
#line 608 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 1)));
#line 608 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 608 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 608 "prog_io_item.m"
                                      {
#line 608 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, (MR_Integer) 0)));
#line 608 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, (MR_Integer) 1)));
#line 608 "prog_io_item.m"
                                      }
#line 608 "prog_io_item.m"
                                  }
#line 607 "prog_io_item.m"
                              }
#line 606 "prog_io_item.m"
                          }
#line 617 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 611 "prog_io_item.m"
                          {
#line 611 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_99_99;
#line 611 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_100_100;
#line 611 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_101_101;
#line 611 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_106_106;
#line 611 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Spec_190;

#line 614 "prog_io_item.m"
                            {
#line 614 "prog_io_item.m"
                              parse_tree__prog_io_item__V_101_101 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__PredTypeTerm_15);
                            }
#line 614 "prog_io_item.m"
                            {
#line 614 "prog_io_item.m"
                              parse_tree__prog_io_item__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 614 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_item__V_101_101));
#line 614 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[111])));
#line 614 "prog_io_item.m"
                            }
#line 615 "prog_io_item.m"
                            {
#line 615 "prog_io_item.m"
                              parse_tree__prog_io_item__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_item__V_100_100));
#line 615 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 615 "prog_io_item.m"
                            }
#line 612 "prog_io_item.m"
                            {
#line 612 "prog_io_item.m"
                              parse_tree__prog_io_item__Spec_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 612 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_190, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 612 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_190, 2) = ((MR_Box) (parse_tree__prog_io_item__V_99_99));
#line 612 "prog_io_item.m"
                            }
#line 616 "prog_io_item.m"
                            {
#line 616 "prog_io_item.m"
                              parse_tree__prog_io_item__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_190));
#line 616 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 616 "prog_io_item.m"
                            }
#line 616 "prog_io_item.m"
                            {
#line 616 "prog_io_item.m"
                              MR_Word base;
#line 616 "prog_io_item.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 616 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 616 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_106_106));
#line 616 "prog_io_item.m"
                            }
#line 611 "prog_io_item.m"
                          }
#line 617 "prog_io_item.m"
                        else
#line 631 "prog_io_item.m"
                          {
#line 618 "prog_io_item.m"
                            {
#line 618 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__Args_33);
                            }
#line 631 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 620 "prog_io_item.m"
                              {
#line 620 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Purity_43;
#line 620 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Attributes_44;
#line 620 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__TVarSet_45;
#line 620 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__IVarSet_46;
#line 620 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ItemPredDecl_48;
#line 620 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Item_49;
#line 620 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeItem0_50;

#line 620 "prog_io_item.m"
                                {
#line 620 "prog_io_item.m"
                                  parse_tree__prog_io_item__get_purity_3_p_0(&parse_tree__prog_io_item__Purity_43, parse_tree__prog_io_item__Attributes1_23, &parse_tree__prog_io_item__Attributes_44);
                                }
#line 621 "prog_io_item.m"
                                {
#line 621 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_14, &parse_tree__prog_io_item__TVarSet_45);
                                }
#line 622 "prog_io_item.m"
                                {
#line 622 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_14, &parse_tree__prog_io_item__IVarSet_46);
                                }
#line 624 "prog_io_item.m"
                                {
#line 624 "prog_io_item.m"
                                  parse_tree__prog_io_item__ItemPredDecl_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 624 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_31));
#line 624 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 1) = ((MR_Box) (parse_tree__prog_io_item__PredOrFunc_12));
#line 624 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 2) = ((MR_Box) (parse_tree__prog_io_item__Args_33));
#line 624 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 3) = ((MR_Box) (parse_tree__prog_io_item__WithType_16));
#line 624 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 4) = ((MR_Box) (parse_tree__prog_io_item__WithInst_17));
#line 624 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_18));
#line 624 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 624 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 7) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_45));
#line 624 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 8) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_46));
#line 624 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 9) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_26));
#line 624 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 10) = ((MR_Box) (parse_tree__prog_io_item__Purity_43));
#line 624 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 11) = ((MR_Box) (parse_tree__prog_io_item__Constraints_27));
#line 624 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 12) = ((MR_Box) (parse_tree__prog_io_item__Context_20));
#line 624 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_48, 13) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_21));
#line 624 "prog_io_item.m"
                                }
#line 628 "prog_io_item.m"
                                {
#line 628 "prog_io_item.m"
                                  parse_tree__prog_io_item__Item_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 628 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_49, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_48));
#line 628 "prog_io_item.m"
                                }
#line 629 "prog_io_item.m"
                                {
#line 629 "prog_io_item.m"
                                  parse_tree__prog_io_item__MaybeItem0_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 629 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_50, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_49));
#line 629 "prog_io_item.m"
                                }
#line 630 "prog_io_item.m"
                                {
#line 630 "prog_io_item.m"
                                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_50, parse_tree__prog_io_item__Attributes_44, parse_tree__prog_io_item__MaybeItem_22);
#line 630 "prog_io_item.m"
                                  return;
                                }
#line 620 "prog_io_item.m"
                              }
#line 631 "prog_io_item.m"
                            else
#line 633 "prog_io_item.m"
                              {
#line 633 "prog_io_item.m"
                                MR_String parse_tree__prog_io_item__PredTypeTermStr_51;
#line 633 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_115_115;
#line 633 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_116_116;
#line 633 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_117_117;
#line 633 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_120_120;
#line 633 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_122_122;
#line 633 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_123_123;
#line 633 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_132_132;
#line 633 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_133_133;
#line 633 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_134_134;
#line 633 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_135_135;
#line 633 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_136_136;
#line 633 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_139_139;
#line 633 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Pieces_191;
#line 633 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Spec_192;

#line 632 "prog_io_item.m"
                                {
#line 632 "prog_io_item.m"
                                  parse_tree__prog_io_item__PredTypeTermStr_51 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__PredTypeTerm_15);
                                }
#line 636 "prog_io_item.m"
                                {
#line 636 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_116_116 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
                                }
#line 638 "prog_io_item.m"
                                {
#line 638 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 638 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_123_123, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_51));
#line 638 "prog_io_item.m"
                                }
#line 638 "prog_io_item.m"
                                {
#line 638 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_item__V_123_123));
#line 638 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 638 "prog_io_item.m"
                                }
#line 637 "prog_io_item.m"
                                {
#line 637 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_120_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 637 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_120_120, 1) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 637 "prog_io_item.m"
                                }
#line 637 "prog_io_item.m"
                                {
#line 637 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_117_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[108])));
#line 637 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_117_117, 1) = ((MR_Box) (parse_tree__prog_io_item__V_120_120));
#line 637 "prog_io_item.m"
                                }
#line 636 "prog_io_item.m"
                                {
#line 636 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_115_115 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_204_204, parse_tree__prog_io_item__V_116_116, parse_tree__prog_io_item__V_117_117);
                                }
#line 635 "prog_io_item.m"
                                {
#line 635 "prog_io_item.m"
                                  parse_tree__prog_io_item__Pieces_191 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_204_204, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[46]), parse_tree__prog_io_item__V_115_115);
                                }
#line 641 "prog_io_item.m"
                                {
#line 641 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_134_134 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__PredTypeTerm_15);
                                }
#line 642 "prog_io_item.m"
                                {
#line 642 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 642 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_136_136, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_191));
#line 642 "prog_io_item.m"
                                }
#line 642 "prog_io_item.m"
                                {
#line 642 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_135_135, 0) = ((MR_Box) (parse_tree__prog_io_item__V_136_136));
#line 642 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "prog_io_item.m"
                                }
#line 641 "prog_io_item.m"
                                {
#line 641 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 641 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_133_133, 0) = ((MR_Box) (parse_tree__prog_io_item__V_134_134));
#line 641 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_133_133, 1) = ((MR_Box) (parse_tree__prog_io_item__V_135_135));
#line 641 "prog_io_item.m"
                                }
#line 642 "prog_io_item.m"
                                {
#line 642 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_132_132, 0) = ((MR_Box) (parse_tree__prog_io_item__V_133_133));
#line 642 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "prog_io_item.m"
                                }
#line 639 "prog_io_item.m"
                                {
#line 639 "prog_io_item.m"
                                  parse_tree__prog_io_item__Spec_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 639 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_192, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 639 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_192, 2) = ((MR_Box) (parse_tree__prog_io_item__V_132_132));
#line 639 "prog_io_item.m"
                                }
#line 643 "prog_io_item.m"
                                {
#line 643 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_139_139, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_192));
#line 643 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 643 "prog_io_item.m"
                                }
#line 643 "prog_io_item.m"
                                {
#line 643 "prog_io_item.m"
                                  MR_Word base;
#line 643 "prog_io_item.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 643 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 643 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_139_139));
#line 643 "prog_io_item.m"
                                }
#line 633 "prog_io_item.m"
                              }
#line 631 "prog_io_item.m"
                          }
#line 617 "prog_io_item.m"
                      }
#line 605 "prog_io_item.m"
                  }
#line 645 "prog_io_item.m"
                else
#line 647 "prog_io_item.m"
                  {
#line 647 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_151_151;
#line 647 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_152_152;
#line 647 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_153_153;
#line 647 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_158_158;
#line 647 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_198;

#line 649 "prog_io_item.m"
                    {
#line 649 "prog_io_item.m"
                      parse_tree__prog_io_item__V_153_153 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__PredTypeTerm_15);
                    }
#line 649 "prog_io_item.m"
                    {
#line 649 "prog_io_item.m"
                      parse_tree__prog_io_item__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 649 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_152_152, 0) = ((MR_Box) (parse_tree__prog_io_item__V_153_153));
#line 649 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[112])));
#line 649 "prog_io_item.m"
                    }
#line 650 "prog_io_item.m"
                    {
#line 650 "prog_io_item.m"
                      parse_tree__prog_io_item__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_151_151, 0) = ((MR_Box) (parse_tree__prog_io_item__V_152_152));
#line 650 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 650 "prog_io_item.m"
                    }
#line 648 "prog_io_item.m"
                    {
#line 648 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_198 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 648 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_198, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 648 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_198, 2) = ((MR_Box) (parse_tree__prog_io_item__V_151_151));
#line 648 "prog_io_item.m"
                    }
#line 651 "prog_io_item.m"
                    {
#line 651 "prog_io_item.m"
                      parse_tree__prog_io_item__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_158_158, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_198));
#line 651 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 651 "prog_io_item.m"
                    }
#line 651 "prog_io_item.m"
                    {
#line 651 "prog_io_item.m"
                      MR_Word base;
#line 651 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 651 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 651 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_158_158));
#line 651 "prog_io_item.m"
                    }
#line 647 "prog_io_item.m"
                  }
#line 645 "prog_io_item.m"
              }
#line 653 "prog_io_item.m"
            else
#line 654 "prog_io_item.m"
              {
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_164_164;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_165_165;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_166_166;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_169_169;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_170_170;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_179_179;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_180_180;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_181_181;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_182_182;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_183_183;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_186_186;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_199;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_200;
#line 654 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredTypeTermStr_201;

#line 654 "prog_io_item.m"
                {
#line 654 "prog_io_item.m"
                  parse_tree__prog_io_item__PredTypeTermStr_201 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__PredTypeTerm_15);
                }
#line 656 "prog_io_item.m"
                {
#line 656 "prog_io_item.m"
                  parse_tree__prog_io_item__V_165_165 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
                }
#line 657 "prog_io_item.m"
                {
#line 657 "prog_io_item.m"
                  parse_tree__prog_io_item__V_170_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_170_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 657 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_170_170, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_201));
#line 657 "prog_io_item.m"
                }
#line 657 "prog_io_item.m"
                {
#line 657 "prog_io_item.m"
                  parse_tree__prog_io_item__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_169_169, 0) = ((MR_Box) (parse_tree__prog_io_item__V_170_170));
#line 657 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_169_169, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 657 "prog_io_item.m"
                }
#line 657 "prog_io_item.m"
                {
#line 657 "prog_io_item.m"
                  parse_tree__prog_io_item__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_166_166, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[115])));
#line 657 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_166_166, 1) = ((MR_Box) (parse_tree__prog_io_item__V_169_169));
#line 657 "prog_io_item.m"
                }
#line 656 "prog_io_item.m"
                {
#line 656 "prog_io_item.m"
                  parse_tree__prog_io_item__V_164_164 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_204_204, parse_tree__prog_io_item__V_165_165, parse_tree__prog_io_item__V_166_166);
                }
#line 655 "prog_io_item.m"
                {
#line 655 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_199 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_204_204, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[114]), parse_tree__prog_io_item__V_164_164);
                }
#line 659 "prog_io_item.m"
                {
#line 659 "prog_io_item.m"
                  parse_tree__prog_io_item__V_181_181 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_205_205, parse_tree__prog_io_item__PredTypeTerm_15);
                }
#line 660 "prog_io_item.m"
                {
#line 660 "prog_io_item.m"
                  parse_tree__prog_io_item__V_183_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_183_183, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_199));
#line 660 "prog_io_item.m"
                }
#line 660 "prog_io_item.m"
                {
#line 660 "prog_io_item.m"
                  parse_tree__prog_io_item__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_182_182, 0) = ((MR_Box) (parse_tree__prog_io_item__V_183_183));
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_182_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "prog_io_item.m"
                }
#line 659 "prog_io_item.m"
                {
#line 659 "prog_io_item.m"
                  parse_tree__prog_io_item__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 0) = ((MR_Box) (parse_tree__prog_io_item__V_181_181));
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 1) = ((MR_Box) (parse_tree__prog_io_item__V_182_182));
#line 659 "prog_io_item.m"
                }
#line 660 "prog_io_item.m"
                {
#line 660 "prog_io_item.m"
                  parse_tree__prog_io_item__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_179_179, 0) = ((MR_Box) (parse_tree__prog_io_item__V_180_180));
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_179_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "prog_io_item.m"
                }
#line 658 "prog_io_item.m"
                {
#line 658 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 658 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 658 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 658 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_200, 2) = ((MR_Box) (parse_tree__prog_io_item__V_179_179));
#line 658 "prog_io_item.m"
                }
#line 661 "prog_io_item.m"
                {
#line 661 "prog_io_item.m"
                  parse_tree__prog_io_item__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_186_186, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_200));
#line 661 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_186_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 661 "prog_io_item.m"
                }
#line 661 "prog_io_item.m"
                {
#line 661 "prog_io_item.m"
                  MR_Word base;
#line 661 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 661 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 661 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_186_186));
#line 661 "prog_io_item.m"
                }
#line 654 "prog_io_item.m"
              }
#line 591 "prog_io_item.m"
          }
#line 582 "prog_io_item.m"
      }
#line 574 "prog_io_item.m"
  }
#line 567 "prog_io_item.m"
}

#line 506 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0(
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_9,
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 506 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 506 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 506 "prog_io_item.m"
{
#line 511 "prog_io_item.m"
  {
#line 511 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 511 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTerm_17;
#line 511 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_18;
#line 511 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTerm_19;
#line 511 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithInst_20;
#line 511 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithType_22;
#line 511 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BaseTerm_23;
#line 557 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeDetism_24;
#line 557 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithInst_25;
#line 557 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithType_26;

#line 512 "prog_io_item.m"
    {
#line 512 "prog_io_item.m"
      parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__Term_12, &parse_tree__prog_io_item__BeforeDetismTerm_17, &parse_tree__prog_io_item__MaybeMaybeDetism_18);
    }
#line 514 "prog_io_item.m"
    {
#line 514 "prog_io_item.m"
      parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(parse_tree__prog_io_item__BeforeDetismTerm_17, &parse_tree__prog_io_item__BeforeWithInstTerm_19, &parse_tree__prog_io_item__MaybeWithInst_20);
    }
#line 516 "prog_io_item.m"
    {
#line 516 "prog_io_item.m"
      parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BeforeWithInstTerm_19, &parse_tree__prog_io_item__BaseTerm_23, &parse_tree__prog_io_item__MaybeWithType_22);
    }
#line 520 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_18)) == (MR_mktag((MR_Integer) 1)));
#line 520 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 520 "prog_io_item.m"
      {
#line 520 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeDetism_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_18, (MR_Integer) 0)));
#line 521 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_20)) == (MR_mktag((MR_Integer) 1)));
#line 521 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 521 "prog_io_item.m"
          {
#line 521 "prog_io_item.m"
            parse_tree__prog_io_item__WithInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_20, (MR_Integer) 0)));
#line 522 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithType_22)) == (MR_mktag((MR_Integer) 1)));
#line 522 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 522 "prog_io_item.m"
              parse_tree__prog_io_item__WithType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithType_22, (MR_Integer) 0)));
#line 521 "prog_io_item.m"
          }
#line 520 "prog_io_item.m"
      }
#line 557 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 533 "prog_io_item.m"
      {
#line 525 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_27_27;
#line 526 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_28_28;

#line 525 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_24)) == (MR_mktag((MR_Integer) 1)));
#line 525 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 525 "prog_io_item.m"
          {
#line 525 "prog_io_item.m"
            parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_24, (MR_Integer) 0)));
#line 526 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_25)) == (MR_mktag((MR_Integer) 1)));
#line 526 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 526 "prog_io_item.m"
              parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_25, (MR_Integer) 0)));
#line 525 "prog_io_item.m"
          }
#line 533 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 529 "prog_io_item.m"
          {
#line 529 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_30;
#line 529 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_46_46;
#line 529 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_47_47;
#line 529 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_48_48;
#line 529 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_53_53;

#line 531 "prog_io_item.m"
            {
#line 531 "prog_io_item.m"
              parse_tree__prog_io_item__V_48_48 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_23);
            }
#line 531 "prog_io_item.m"
            {
#line 531 "prog_io_item.m"
              parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 531 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__V_48_48));
#line 531 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[104])));
#line 531 "prog_io_item.m"
            }
#line 531 "prog_io_item.m"
            {
#line 531 "prog_io_item.m"
              parse_tree__prog_io_item__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 531 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "prog_io_item.m"
            }
#line 530 "prog_io_item.m"
            {
#line 530 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 530 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 530 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 530 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 2) = ((MR_Box) (parse_tree__prog_io_item__V_46_46));
#line 530 "prog_io_item.m"
            }
#line 532 "prog_io_item.m"
            {
#line 532 "prog_io_item.m"
              parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_30));
#line 532 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "prog_io_item.m"
            }
#line 532 "prog_io_item.m"
            {
#line 532 "prog_io_item.m"
              MR_Word base;
#line 532 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 532 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 532 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 532 "prog_io_item.m"
            }
#line 529 "prog_io_item.m"
          }
#line 533 "prog_io_item.m"
        else
#line 542 "prog_io_item.m"
          {
#line 534 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_31_31;

#line 534 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_25)) == (MR_mktag((MR_Integer) 1)));
#line 534 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 534 "prog_io_item.m"
              {
#line 534 "prog_io_item.m"
                parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_25, (MR_Integer) 0)));
#line 535 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 534 "prog_io_item.m"
              }
#line 542 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 538 "prog_io_item.m"
              {
#line 538 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_77_77;
#line 538 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_78_78;
#line 538 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_79_79;
#line 538 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_84_84;
#line 538 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_91;

#line 540 "prog_io_item.m"
                {
#line 540 "prog_io_item.m"
                  parse_tree__prog_io_item__V_79_79 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_23);
                }
#line 540 "prog_io_item.m"
                {
#line 540 "prog_io_item.m"
                  parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 540 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 540 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[105])));
#line 540 "prog_io_item.m"
                }
#line 540 "prog_io_item.m"
                {
#line 540 "prog_io_item.m"
                  parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 540 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 540 "prog_io_item.m"
                }
#line 539 "prog_io_item.m"
                {
#line 539 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 539 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 539 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 539 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 2) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 539 "prog_io_item.m"
                }
#line 541 "prog_io_item.m"
                {
#line 541 "prog_io_item.m"
                  parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_91));
#line 541 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "prog_io_item.m"
                }
#line 541 "prog_io_item.m"
                {
#line 541 "prog_io_item.m"
                  MR_Word base;
#line 541 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 541 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 541 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 541 "prog_io_item.m"
                }
#line 538 "prog_io_item.m"
              }
#line 542 "prog_io_item.m"
            else
#line 551 "prog_io_item.m"
              {
#line 546 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__PredOrFunc_9 == (MR_Integer) 1);
#line 546 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 547 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 549 "prog_io_item.m"
                  {
#line 549 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_func_decl_base_8_p_0(parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BaseTerm_23, parse_tree__prog_io_item__MaybeDetism_24, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 549 "prog_io_item.m"
                    return;
                  }
#line 551 "prog_io_item.m"
                else
#line 552 "prog_io_item.m"
                  {
#line 552 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(parse_tree__prog_io_item__PredOrFunc_9, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BaseTerm_23, parse_tree__prog_io_item__WithType_26, parse_tree__prog_io_item__WithInst_25, parse_tree__prog_io_item__MaybeDetism_24, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 552 "prog_io_item.m"
                    return;
                  }
#line 551 "prog_io_item.m"
              }
#line 542 "prog_io_item.m"
          }
#line 533 "prog_io_item.m"
      }
#line 557 "prog_io_item.m"
    else
#line 560 "prog_io_item.m"
      {
#line 560 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 560 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_32;
#line 560 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_86_86;
#line 560 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_87_87;
#line 560 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_88_88;
#line 560 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_89_89;

#line 558 "prog_io_item.m"
        {
#line 558 "prog_io_item.m"
          parse_tree__prog_io_item__V_86_86 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_18);
        }
#line 559 "prog_io_item.m"
        {
#line 559 "prog_io_item.m"
          parse_tree__prog_io_item__V_88_88 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_20);
        }
#line 560 "prog_io_item.m"
        {
#line 560 "prog_io_item.m"
          parse_tree__prog_io_item__V_89_89 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[4], parse_tree__prog_io_item__MaybeWithType_22);
        }
#line 560 "prog_io_item.m"
        {
#line 560 "prog_io_item.m"
          parse_tree__prog_io_item__V_87_87 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_96_96, parse_tree__prog_io_item__V_88_88, parse_tree__prog_io_item__V_89_89);
        }
#line 559 "prog_io_item.m"
        {
#line 559 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_32 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_96_96, parse_tree__prog_io_item__V_86_86, parse_tree__prog_io_item__V_87_87);
        }
#line 561 "prog_io_item.m"
        {
#line 561 "prog_io_item.m"
          MR_Word base;
#line 561 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 561 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 561 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_32));
#line 561 "prog_io_item.m"
        }
#line 560 "prog_io_item.m"
      }
#line 511 "prog_io_item.m"
  }
#line 506 "prog_io_item.m"
}

#line 347 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_4(
#line 347 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 347 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 347 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 347 "prog_io_item.m"
{
#line 347 "prog_io_item.m"
  {
#line 347 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 347 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv3_MaybeModule_8;

#line 347 "prog_io_item.m"
    {
#line 347 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv3_MaybeModule_8);
    }
#line 347 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv3_MaybeModule_8));
#line 347 "prog_io_item.m"
  }
#line 347 "prog_io_item.m"
}

#line 269 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_3(
#line 269 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 269 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 269 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 269 "prog_io_item.m"
{
#line 269 "prog_io_item.m"
  {
#line 269 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 269 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv2_MaybeModuleSpecifier_6;

#line 269 "prog_io_item.m"
    {
#line 269 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_specifier_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv2_MaybeModuleSpecifier_6);
    }
#line 269 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv2_MaybeModuleSpecifier_6));
#line 269 "prog_io_item.m"
  }
#line 269 "prog_io_item.m"
}

#line 269 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_2(
#line 269 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 269 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 269 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 269 "prog_io_item.m"
{
#line 269 "prog_io_item.m"
  {
#line 269 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 269 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv1_MaybeModuleSpecifier_6;

#line 269 "prog_io_item.m"
    {
#line 269 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_specifier_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv1_MaybeModuleSpecifier_6);
    }
#line 269 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv1_MaybeModuleSpecifier_6));
#line 269 "prog_io_item.m"
  }
#line 269 "prog_io_item.m"
}

#line 269 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_1(
#line 269 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 269 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 269 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 269 "prog_io_item.m"
{
#line 269 "prog_io_item.m"
  {
#line 269 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 269 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_MaybeModuleSpecifier_6;

#line 269 "prog_io_item.m"
    {
#line 269 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_specifier_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_MaybeModuleSpecifier_6);
    }
#line 269 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_MaybeModuleSpecifier_6));
#line 269 "prog_io_item.m"
  }
#line 269 "prog_io_item.m"
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
#line 253 "prog_io_item.m"
      {
#line 253 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DeclTerm_25;
#line 253 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_70_70;

#line 254 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 254 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 254 "prog_io_item.m"
          {
#line 254 "prog_io_item.m"
            parse_tree__prog_io_item__DeclTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 254 "prog_io_item.m"
            parse_tree__prog_io_item__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 254 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 253 "prog_io_item.m"
              {
#line 255 "prog_io_item.m"
                {
#line 255 "prog_io_item.m"
                  parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0((MR_Integer) 1, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__DeclTerm_25, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                }
#line 255 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 253 "prog_io_item.m"
              }
#line 254 "prog_io_item.m"
          }
#line 253 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "inst") == 0))
#line 229 "prog_io_item.m"
      {
#line 229 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_125_125;
#line 229 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstDeclTerm_18;
#line 229 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_19;
#line 229 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_77_77;

#line 230 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 230 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 230 "prog_io_item.m"
          {
#line 230 "prog_io_item.m"
            parse_tree__prog_io_item__InstDeclTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 230 "prog_io_item.m"
            parse_tree__prog_io_item__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 230 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 229 "prog_io_item.m"
              {
#line 231 "prog_io_item.m"
                {
#line 231 "prog_io_item.m"
                  parse_tree__prog_io_mode_defn__parse_inst_defn_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__InstDeclTerm_18, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_19);
                }
#line 10604 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_125_125 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 233 "prog_io_item.m"
                {
#line 233 "prog_io_item.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_125_125, parse_tree__prog_io_item__MaybeItem0_19, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
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
        MR_Word parse_tree__prog_io_item__V_71_71;
#line 241 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadTerm_21;
#line 241 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__BodyTerm_22;
#line 237 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_72_72;
#line 237 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_73_73;
#line 237 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_74_74;
#line 237 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_75_75;
#line 237 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_76_76;
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
            parse_tree__prog_io_item__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 236 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                    parse_tree__prog_io_item__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 0)));
#line 237 "prog_io_item.m"
                    parse_tree__prog_io_item__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 1)));
#line 237 "prog_io_item.m"
                    parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 2)));
#line 237 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_72_72)) == (MR_mktag((MR_Integer) 0)));
#line 237 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 237 "prog_io_item.m"
                      {
#line 237 "prog_io_item.m"
                        parse_tree__prog_io_item__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_72_72, (MR_Integer) 0)));
#line 237 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_73_73, (MR_String) "==") == 0);
#line 237 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 237 "prog_io_item.m"
                          {
#line 237 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_74_74)) == (MR_mktag((MR_Integer) 1)));
#line 237 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 237 "prog_io_item.m"
                              {
#line 237 "prog_io_item.m"
                                parse_tree__prog_io_item__HeadTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, (MR_Integer) 0)));
#line 237 "prog_io_item.m"
                                parse_tree__prog_io_item__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, (MR_Integer) 1)));
#line 237 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_75_75)) == (MR_mktag((MR_Integer) 1)));
#line 237 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 237 "prog_io_item.m"
                                  {
#line 237 "prog_io_item.m"
                                    parse_tree__prog_io_item__BodyTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, (MR_Integer) 0)));
#line 237 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, (MR_Integer) 1)));
#line 237 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
#line 241 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 239 "prog_io_item.m"
                  {
#line 239 "prog_io_item.m"
                    parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__HeadTerm_21, parse_tree__prog_io_item__BodyTerm_22, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 241 "prog_io_item.m"
                else
#line 243 "prog_io_item.m"
                  {
#line 243 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_mode_decl_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_20, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 241 "prog_io_item.m"
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
#line 253 "prog_io_item.m"
      {
#line 253 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DeclTerm_164;
#line 253 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_165_165;

#line 254 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 254 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 254 "prog_io_item.m"
          {
#line 254 "prog_io_item.m"
            parse_tree__prog_io_item__DeclTerm_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 254 "prog_io_item.m"
            parse_tree__prog_io_item__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 254 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_165_165 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 253 "prog_io_item.m"
              {
#line 255 "prog_io_item.m"
                {
#line 255 "prog_io_item.m"
                  parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0((MR_Integer) 0, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__DeclTerm_164, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                }
#line 255 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 253 "prog_io_item.m"
              }
#line 254 "prog_io_item.m"
          }
#line 253 "prog_io_item.m"
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
        MR_Word parse_tree__prog_io_item__V_78_78;

#line 225 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 225 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 225 "prog_io_item.m"
          {
#line 225 "prog_io_item.m"
            parse_tree__prog_io_item__TypeDefnTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 225 "prog_io_item.m"
            parse_tree__prog_io_item__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 225 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
#line 307 "prog_io_item.m"
      {
#line 307 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_139_139;
#line 307 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleNameTerm_38;
#line 307 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeModuleNameSym_39;
#line 307 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_61_61;
#line 307 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_83;

#line 308 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 308 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 308 "prog_io_item.m"
          {
#line 308 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleNameTerm_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 308 "prog_io_item.m"
            parse_tree__prog_io_item__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 308 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 307 "prog_io_item.m"
              {
#line 309 "prog_io_item.m"
                {
#line 309 "prog_io_item.m"
                  parse_tree__prog_io_item__parse_module_name_4_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ModuleNameTerm_38, &parse_tree__prog_io_item__MaybeModuleNameSym_39);
                }
#line 317 "prog_io_item.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_39)) == (MR_mktag((MR_Integer) 0))))
#line 319 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybeItem0_83 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_39;
#line 317 "prog_io_item.m"
                else
#line 312 "prog_io_item.m"
                  {
#line 312 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ModuleNameSym_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNameSym_39, (MR_Integer) 0)));
#line 312 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ItemModuleStart_41;
#line 312 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Item_81;

#line 313 "prog_io_item.m"
                    {
#line 313 "prog_io_item.m"
                      parse_tree__prog_io_item__ItemModuleStart_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 313 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleStart_41, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleNameSym_40));
#line 313 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleStart_41, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 313 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleStart_41, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 313 "prog_io_item.m"
                    }
#line 315 "prog_io_item.m"
                    parse_tree__prog_io_item__Item_81 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__ItemModuleStart_41);
#line 316 "prog_io_item.m"
                    {
#line 316 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeItem0_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 316 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_83, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_81));
#line 316 "prog_io_item.m"
                    }
#line 312 "prog_io_item.m"
                  }
#line 10899 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_139_139 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 321 "prog_io_item.m"
                {
#line 321 "prog_io_item.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_139_139, parse_tree__prog_io_item__MaybeItem0_83, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                }
#line 321 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 307 "prog_io_item.m"
              }
#line 308 "prog_io_item.m"
          }
#line 307 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "pragma") == 0))
#line 362 "prog_io_item.m"
      {
#line 362 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_145_145;
#line 362 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_110;

#line 363 "prog_io_item.m"
        {
#line 363 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_pragma__parse_pragma_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_110);
        }
#line 362 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 362 "prog_io_item.m"
          {
#line 10934 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_145_145 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 365 "prog_io_item.m"
            {
#line 365 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_145_145, parse_tree__prog_io_item__MaybeItem0_110, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
            }
#line 365 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 362 "prog_io_item.m"
          }
#line 362 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "mutable") == 0))
#line 424 "prog_io_item.m"
      {
#line 424 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_151_151;
#line 424 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_124;

#line 425 "prog_io_item.m"
        {
#line 425 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_mutable__parse_mutable_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_124);
        }
#line 424 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 424 "prog_io_item.m"
          {
#line 10967 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_151_151 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 427 "prog_io_item.m"
            {
#line 427 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_151_151, parse_tree__prog_io_item__MaybeItem0_124, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
            }
#line 427 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 424 "prog_io_item.m"
          }
#line 424 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "promise") == 0))
#line 379 "prog_io_item.m"
      {
#line 379 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_146_146;
#line 379 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_111;

#line 380 "prog_io_item.m"
        {
#line 380 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 3, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_111);
        }
#line 379 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 379 "prog_io_item.m"
          {
#line 11000 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_146_146 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 382 "prog_io_item.m"
            {
#line 382 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_146_146, parse_tree__prog_io_item__MaybeItem0_111, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
            }
#line 382 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 379 "prog_io_item.m"
          }
#line 379 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "external") == 0))
#line 285 "prog_io_item.m"
      {
#line 285 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_138_138;
#line 285 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__PredSpecTerm_31;
#line 285 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeBackEnd_32;
#line 285 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeSymSpec_37;
#line 285 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_80;
#line 285 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_181_181;
#line 285 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_182_182;

#line 287 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 287 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 287 "prog_io_item.m"
          {
#line 287 "prog_io_item.m"
            parse_tree__prog_io_item__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 287 "prog_io_item.m"
            parse_tree__prog_io_item__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 289 "prog_io_item.m"
            if ((parse_tree__prog_io_item__V_181_181 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 287 "prog_io_item.m"
              {
#line 287 "prog_io_item.m"
                parse_tree__prog_io_item__PredSpecTerm_31 = parse_tree__prog_io_item__V_182_182;
#line 288 "prog_io_item.m"
                parse_tree__prog_io_item__MaybeBackEnd_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 287 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 287 "prog_io_item.m"
              }
#line 289 "prog_io_item.m"
            else
#line 290 "prog_io_item.m"
              {
#line 290 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__BackEndFunctor_34;
#line 290 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__BackEnd_36;
#line 290 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_63_63;
#line 290 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_64_64;
#line 290 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_65_65;
#line 291 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_35_35;

#line 290 "prog_io_item.m"
                parse_tree__prog_io_item__PredSpecTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_181_181, (MR_Integer) 0)));
#line 290 "prog_io_item.m"
                parse_tree__prog_io_item__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_181_181, (MR_Integer) 1)));
#line 290 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 290 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 290 "prog_io_item.m"
                  {
#line 291 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_182_182)) == (MR_mktag((MR_Integer) 0)));
#line 291 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 291 "prog_io_item.m"
                      {
#line 291 "prog_io_item.m"
                        parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_182_182, (MR_Integer) 0)));
#line 291 "prog_io_item.m"
                        parse_tree__prog_io_item__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_182_182, (MR_Integer) 1)));
#line 291 "prog_io_item.m"
                        parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_182_182, (MR_Integer) 2)));
#line 291 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 290 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 290 "prog_io_item.m"
                          {
#line 291 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 291 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 291 "prog_io_item.m"
                              {
#line 291 "prog_io_item.m"
                                parse_tree__prog_io_item__BackEndFunctor_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 295 "prog_io_item.m"
                                if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_34, (MR_String) "low_level_backend") == 0))
#line 296 "prog_io_item.m"
                                  {
#line 296 "prog_io_item.m"
                                    parse_tree__prog_io_item__BackEnd_36 = (MR_Integer) 1;
#line 296 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 296 "prog_io_item.m"
                                  }
#line 295 "prog_io_item.m"
                                else
#line 295 "prog_io_item.m"
                                if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_34, (MR_String) "high_level_backend") == 0))
#line 293 "prog_io_item.m"
                                  {
#line 293 "prog_io_item.m"
                                    parse_tree__prog_io_item__BackEnd_36 = (MR_Integer) 0;
#line 293 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 293 "prog_io_item.m"
                                  }
#line 295 "prog_io_item.m"
                                else
#line 295 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 290 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 290 "prog_io_item.m"
                                  {
#line 299 "prog_io_item.m"
                                    {
#line 299 "prog_io_item.m"
                                      parse_tree__prog_io_item__MaybeBackEnd_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 299 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeBackEnd_32, 0) = ((MR_Box) (parse_tree__prog_io_item__BackEnd_36));
#line 299 "prog_io_item.m"
                                    }
#line 299 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 290 "prog_io_item.m"
                                  }
#line 291 "prog_io_item.m"
                              }
#line 290 "prog_io_item.m"
                          }
#line 291 "prog_io_item.m"
                      }
#line 290 "prog_io_item.m"
                  }
#line 290 "prog_io_item.m"
              }
#line 285 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 285 "prog_io_item.m"
              {
#line 301 "prog_io_item.m"
                {
#line 301 "prog_io_item.m"
                  parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__PredSpecTerm_31, &parse_tree__prog_io_item__MaybeSymSpec_37);
                }
#line 11170 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_138_138 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 303 "prog_io_item.m"
                {
#line 303 "prog_io_item.m"
                  parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(parse_tree__prog_io_item__MaybeBackEnd_32, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeSymSpec_37, &parse_tree__prog_io_item__MaybeItem0_80);
                }
#line 305 "prog_io_item.m"
                {
#line 305 "prog_io_item.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_138_138, parse_tree__prog_io_item__MaybeItem0_80, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                }
#line 305 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 285 "prog_io_item.m"
              }
#line 287 "prog_io_item.m"
          }
#line 285 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "instance") == 0))
#line 396 "prog_io_item.m"
      {
#line 396 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_148_148;
#line 396 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItemInstance_51;
#line 396 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_118;

#line 397 "prog_io_item.m"
        {
#line 397 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_typeclass__parse_instance_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItemInstance_51);
        }
#line 396 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 396 "prog_io_item.m"
          {
#line 402 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItemInstance_51)) == (MR_mktag((MR_Integer) 0))))
#line 404 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeItem0_118 = (MR_Word) parse_tree__prog_io_item__MaybeItemInstance_51;
#line 402 "prog_io_item.m"
            else
#line 400 "prog_io_item.m"
              {
#line 400 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemInstance_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItemInstance_51, (MR_Integer) 0)));
#line 400 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_55_55;

#line 401 "prog_io_item.m"
                {
#line 401 "prog_io_item.m"
                  parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 401 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_55_55, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemInstance_52));
#line 401 "prog_io_item.m"
                }
#line 401 "prog_io_item.m"
                {
#line 401 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybeItem0_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 401 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_118, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 401 "prog_io_item.m"
                }
#line 400 "prog_io_item.m"
              }
#line 11245 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_148_148 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 406 "prog_io_item.m"
            {
#line 406 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__MaybeItem0_118, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
            }
#line 406 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 396 "prog_io_item.m"
          }
#line 396 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "interface") == 0))
#line 278 "prog_io_item.m"
      {
#line 278 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_134_162;
#line 278 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleDefn_158;
#line 278 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemModuleDefn_159;
#line 278 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Item_160;
#line 278 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_161;

#line 279 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__ArgTerms_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 278 "prog_io_item.m"
          {
#line 274 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleDefn_158 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 11283 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_134_162 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 280 "prog_io_item.m"
            {
#line 280 "prog_io_item.m"
              parse_tree__prog_io_item__ItemModuleDefn_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 280 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_159, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_158));
#line 280 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_159, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 280 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_159, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 280 "prog_io_item.m"
            }
#line 281 "prog_io_item.m"
            parse_tree__prog_io_item__Item_160 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_159);
#line 282 "prog_io_item.m"
            {
#line 282 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeItem0_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_161, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_160));
#line 282 "prog_io_item.m"
            }
#line 283 "prog_io_item.m"
            {
#line 283 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_134_162, parse_tree__prog_io_item__MaybeItem0_161, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
            }
#line 283 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 278 "prog_io_item.m"
          }
#line 278 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "typeclass") == 0))
#line 384 "prog_io_item.m"
      {
#line 384 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_147_147;
#line 384 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItemTypeClass_49;
#line 384 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_114;

#line 385 "prog_io_item.m"
        {
#line 385 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_typeclass__parse_typeclass_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItemTypeClass_49);
        }
#line 384 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 384 "prog_io_item.m"
          {
#line 390 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItemTypeClass_49)) == (MR_mktag((MR_Integer) 0))))
#line 392 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeItem0_114 = (MR_Word) parse_tree__prog_io_item__MaybeItemTypeClass_49;
#line 390 "prog_io_item.m"
            else
#line 388 "prog_io_item.m"
              {
#line 388 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemTypeClass_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItemTypeClass_49, (MR_Integer) 0)));
#line 388 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_56_56;

#line 389 "prog_io_item.m"
                {
#line 389 "prog_io_item.m"
                  parse_tree__prog_io_item__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 389 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemTypeClass_50));
#line 389 "prog_io_item.m"
                }
#line 389 "prog_io_item.m"
                {
#line 389 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybeItem0_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 389 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_114, 0) = ((MR_Box) (parse_tree__prog_io_item__V_56_56));
#line 389 "prog_io_item.m"
                }
#line 388 "prog_io_item.m"
              }
#line 11373 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 394 "prog_io_item.m"
            {
#line 394 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_147_147, parse_tree__prog_io_item__MaybeItem0_114, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
            }
#line 394 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 384 "prog_io_item.m"
          }
#line 384 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "end_module") == 0))
#line 323 "prog_io_item.m"
      {
#line 323 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_140_140;
#line 323 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ParentOfModuleName_43;
#line 323 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_59_59;
#line 323 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_60_60;
#line 323 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_91;
#line 323 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleNameTerm_93;
#line 323 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeModuleNameSym_94;

#line 324 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 324 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 324 "prog_io_item.m"
          {
#line 324 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleNameTerm_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 324 "prog_io_item.m"
            parse_tree__prog_io_item__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 324 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 323 "prog_io_item.m"
              {
#line 329 "prog_io_item.m"
                {
#line 329 "prog_io_item.m"
                  parse_tree__prog_io_item__V_60_60 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
                }
#line 329 "prog_io_item.m"
                {
#line 329 "prog_io_item.m"
                  mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__V_60_60, &parse_tree__prog_io_item__ParentOfModuleName_43);
                }
#line 331 "prog_io_item.m"
                {
#line 331 "prog_io_item.m"
                  parse_tree__prog_io_item__parse_module_name_4_p_0(parse_tree__prog_io_item__ParentOfModuleName_43, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ModuleNameTerm_93, &parse_tree__prog_io_item__MaybeModuleNameSym_94);
                }
#line 339 "prog_io_item.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_94)) == (MR_mktag((MR_Integer) 0))))
#line 341 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybeItem0_91 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_94;
#line 339 "prog_io_item.m"
                else
#line 334 "prog_io_item.m"
                  {
#line 334 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ItemModuleEnd_44;
#line 334 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Item_85;
#line 334 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ModuleNameSym_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNameSym_94, (MR_Integer) 0)));

#line 335 "prog_io_item.m"
                    {
#line 335 "prog_io_item.m"
                      parse_tree__prog_io_item__ItemModuleEnd_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 335 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleEnd_44, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleNameSym_86));
#line 335 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleEnd_44, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 335 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleEnd_44, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 335 "prog_io_item.m"
                    }
#line 337 "prog_io_item.m"
                    parse_tree__prog_io_item__Item_85 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_item__ItemModuleEnd_44);
#line 338 "prog_io_item.m"
                    {
#line 338 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeItem0_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 338 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_91, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_85));
#line 338 "prog_io_item.m"
                    }
#line 334 "prog_io_item.m"
                  }
#line 11477 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_140_140 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 343 "prog_io_item.m"
                {
#line 343 "prog_io_item.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_140_140, parse_tree__prog_io_item__MaybeItem0_91, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                }
#line 343 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 323 "prog_io_item.m"
              }
#line 324 "prog_io_item.m"
          }
#line 323 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "use_module") == 0))
#line 267 "prog_io_item.m"
      {
#line 267 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleSpecTerm_178;
#line 267 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_179_179;
#line 267 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_180_180;

#line 268 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 268 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 268 "prog_io_item.m"
          {
#line 268 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleSpecTerm_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 268 "prog_io_item.m"
            parse_tree__prog_io_item__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 268 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_179_179 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 267 "prog_io_item.m"
              {
#line 269 "prog_io_item.m"
                {
#line 269 "prog_io_item.m"
                  parse_tree__prog_io_item__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 269 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 269 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_1));
#line 269 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 269 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 269 "prog_io_item.m"
                }
#line 269 "prog_io_item.m"
                {
#line 269 "prog_io_item.m"
                  parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io_item__V_180_180, parse_tree__prog_io_item__ModuleSpecTerm_178, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                }
#line 269 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 267 "prog_io_item.m"
              }
#line 268 "prog_io_item.m"
          }
#line 267 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "export_module") == 0))
#line 267 "prog_io_item.m"
      {
#line 267 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleSpecTerm_27;
#line 267 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_68_68;
#line 267 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_69_69;

#line 268 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 268 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 268 "prog_io_item.m"
          {
#line 268 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleSpecTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 268 "prog_io_item.m"
            parse_tree__prog_io_item__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 268 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 267 "prog_io_item.m"
              {
#line 269 "prog_io_item.m"
                {
#line 269 "prog_io_item.m"
                  parse_tree__prog_io_item__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 269 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 269 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_2));
#line 269 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 269 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 269 "prog_io_item.m"
                }
#line 269 "prog_io_item.m"
                {
#line 269 "prog_io_item.m"
                  parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io_item__V_69_69, parse_tree__prog_io_item__ModuleSpecTerm_27, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                }
#line 269 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 267 "prog_io_item.m"
              }
#line 268 "prog_io_item.m"
          }
#line 267 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "import_module") == 0))
#line 267 "prog_io_item.m"
      {
#line 267 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleSpecTerm_155;
#line 267 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_156_156;
#line 267 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_157_157;

#line 268 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 268 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 268 "prog_io_item.m"
          {
#line 268 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleSpecTerm_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 268 "prog_io_item.m"
            parse_tree__prog_io_item__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 268 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_156_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 267 "prog_io_item.m"
              {
#line 269 "prog_io_item.m"
                {
#line 269 "prog_io_item.m"
                  parse_tree__prog_io_item__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 269 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_157_157, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 269 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_157_157, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_3));
#line 269 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_157_157, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 269 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_157_157, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 269 "prog_io_item.m"
                }
#line 269 "prog_io_item.m"
                {
#line 269 "prog_io_item.m"
                  parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io_item__V_157_157, parse_tree__prog_io_item__ModuleSpecTerm_155, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                }
#line 269 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 267 "prog_io_item.m"
              }
#line 268 "prog_io_item.m"
          }
#line 267 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "implementation") == 0))
#line 278 "prog_io_item.m"
      {
#line 278 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_134_134;
#line 278 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleDefn_28;
#line 278 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemModuleDefn_29;
#line 278 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Item_30;
#line 278 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_79;

#line 279 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__ArgTerms_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 278 "prog_io_item.m"
          {
#line 277 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleDefn_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 11685 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 280 "prog_io_item.m"
            {
#line 280 "prog_io_item.m"
              parse_tree__prog_io_item__ItemModuleDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 280 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_29, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_28));
#line 280 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_29, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 280 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_29, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 280 "prog_io_item.m"
            }
#line 281 "prog_io_item.m"
            parse_tree__prog_io_item__Item_30 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_29);
#line 282 "prog_io_item.m"
            {
#line 282 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeItem0_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 282 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_79, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_30));
#line 282 "prog_io_item.m"
            }
#line 283 "prog_io_item.m"
            {
#line 283 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_134_134, parse_tree__prog_io_item__MaybeItem0_79, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
            }
#line 283 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 278 "prog_io_item.m"
          }
#line 278 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "include_module") == 0))
#line 345 "prog_io_item.m"
      {
#line 345 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_143_143;
#line 345 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_144_144;
#line 345 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleNamesTerm_45;
#line 345 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeModuleNameSyms_46;
#line 345 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_57_57;
#line 345 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_58_58;
#line 345 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_105;

#line 346 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 346 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 346 "prog_io_item.m"
          {
#line 346 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleNamesTerm_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 346 "prog_io_item.m"
            parse_tree__prog_io_item__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 346 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 345 "prog_io_item.m"
              {
#line 11757 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_143_143 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 347 "prog_io_item.m"
                {
#line 347 "prog_io_item.m"
                  parse_tree__prog_io_item__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 347 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_58_58, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_6[0]));
#line 347 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_4));
#line 347 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 347 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_58_58, 3) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_9));
#line 347 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_58_58, 4) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 347 "prog_io_item.m"
                }
#line 347 "prog_io_item.m"
                {
#line 347 "prog_io_item.m"
                  parse_tree__prog_io_util__parse_list_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_143_143, parse_tree__prog_io_item__V_58_58, parse_tree__prog_io_item__ModuleNamesTerm_45, &parse_tree__prog_io_item__MaybeModuleNameSyms_46);
                }
#line 356 "prog_io_item.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNameSyms_46)) == (MR_mktag((MR_Integer) 0))))
#line 358 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybeItem0_105 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNameSyms_46;
#line 356 "prog_io_item.m"
                else
#line 350 "prog_io_item.m"
                  {
#line 350 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ModuleNameSyms_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNameSyms_46, (MR_Integer) 0)));
#line 350 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ModuleDefn_97;
#line 350 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ItemModuleDefn_98;
#line 350 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Item_99;

#line 351 "prog_io_item.m"
                    {
#line 351 "prog_io_item.m"
                      parse_tree__prog_io_item__ModuleDefn_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 351 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_97, 1) = ((MR_Box) (parse_tree__prog_io_item__ModuleNameSyms_47));
#line 351 "prog_io_item.m"
                    }
#line 352 "prog_io_item.m"
                    {
#line 352 "prog_io_item.m"
                      parse_tree__prog_io_item__ItemModuleDefn_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 352 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_98, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_97));
#line 352 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_98, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 352 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_98, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 352 "prog_io_item.m"
                    }
#line 354 "prog_io_item.m"
                    parse_tree__prog_io_item__Item_99 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_98);
#line 355 "prog_io_item.m"
                    {
#line 355 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeItem0_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 355 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_105, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_99));
#line 355 "prog_io_item.m"
                    }
#line 350 "prog_io_item.m"
                  }
#line 11831 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_144_144 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 360 "prog_io_item.m"
                {
#line 360 "prog_io_item.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_144_144, parse_tree__prog_io_item__MaybeItem0_105, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                }
#line 360 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 345 "prog_io_item.m"
              }
#line 346 "prog_io_item.m"
          }
#line 345 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "version_numbers") == 0))
#line 429 "prog_io_item.m"
      {
#line 429 "prog_io_item.m"
        return parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "finalise") == 0)) || ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "finalize") == 0))))
#line 418 "prog_io_item.m"
      {
#line 418 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_150_150;
#line 418 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_53_53;
#line 418 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_122;
#line 418 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__SubTerm_123;

#line 419 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 419 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 419 "prog_io_item.m"
          {
#line 419 "prog_io_item.m"
            parse_tree__prog_io_item__SubTerm_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 419 "prog_io_item.m"
            parse_tree__prog_io_item__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 419 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 418 "prog_io_item.m"
              {
#line 420 "prog_io_item.m"
                {
#line 420 "prog_io_item.m"
                  parse_tree__prog_io_mutable__parse_finalise_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_123, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_122);
                }
#line 11891 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_150_150 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 422 "prog_io_item.m"
                {
#line 422 "prog_io_item.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_150_150, parse_tree__prog_io_item__MaybeItem0_122, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                }
#line 422 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 418 "prog_io_item.m"
              }
#line 419 "prog_io_item.m"
          }
#line 418 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exclusive") == 0))
#line 379 "prog_io_item.m"
      {
#line 379 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_146_168;
#line 379 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_167;

#line 380 "prog_io_item.m"
        {
#line 380 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_167);
        }
#line 379 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 379 "prog_io_item.m"
          {
#line 11926 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_146_168 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 382 "prog_io_item.m"
            {
#line 382 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_146_168, parse_tree__prog_io_item__MaybeItem0_167, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
            }
#line 382 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 379 "prog_io_item.m"
          }
#line 379 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exhaustive") == 0))
#line 379 "prog_io_item.m"
      {
#line 379 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_146_174;
#line 379 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_173;

#line 380 "prog_io_item.m"
        {
#line 380 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_173);
        }
#line 379 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 379 "prog_io_item.m"
          {
#line 11959 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_146_174 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 382 "prog_io_item.m"
            {
#line 382 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_146_174, parse_tree__prog_io_item__MaybeItem0_173, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
            }
#line 382 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 379 "prog_io_item.m"
          }
#line 379 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "initialise") == 0)) || ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "initialize") == 0))))
#line 410 "prog_io_item.m"
      {
#line 410 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_149_149;
#line 410 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_54_54;
#line 410 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_120;
#line 410 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__SubTerm_121;

#line 411 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 411 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 411 "prog_io_item.m"
          {
#line 411 "prog_io_item.m"
            parse_tree__prog_io_item__SubTerm_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 411 "prog_io_item.m"
            parse_tree__prog_io_item__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 411 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 410 "prog_io_item.m"
              {
#line 412 "prog_io_item.m"
                {
#line 412 "prog_io_item.m"
                  parse_tree__prog_io_mutable__parse_initialise_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_121, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_120);
                }
#line 12008 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_149_149 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 414 "prog_io_item.m"
                {
#line 414 "prog_io_item.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_149_149, parse_tree__prog_io_item__MaybeItem0_120, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                }
#line 414 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 410 "prog_io_item.m"
              }
#line 411 "prog_io_item.m"
          }
#line 410 "prog_io_item.m"
      }
#line 224 "prog_io_item.m"
    else
#line 224 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exclusive_exhaustive") == 0))
#line 379 "prog_io_item.m"
      {
#line 379 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_146_171;
#line 379 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeItem0_170;

#line 380 "prog_io_item.m"
        {
#line 380 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 2, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_170);
        }
#line 379 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 379 "prog_io_item.m"
          {
#line 12043 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_146_171 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 382 "prog_io_item.m"
            {
#line 382 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_146_171, parse_tree__prog_io_item__MaybeItem0_170, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
            }
#line 382 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 379 "prog_io_item.m"
          }
#line 379 "prog_io_item.m"
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
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_26));
#line 135 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 1) = ((MR_Box) ((MR_Integer) 1));
#line 135 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgArgTerms_28));
#line 135 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 135 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 4) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_17));
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
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_53));
#line 150 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 1) = ((MR_Box) ((MR_Integer) 0));
#line 150 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgArgTerms_54));
#line 150 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 150 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 4) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_17));
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
