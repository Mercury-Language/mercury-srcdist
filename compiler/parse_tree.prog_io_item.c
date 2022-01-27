/*
** Automatically generated from `prog_io_item.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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




#line 145 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 148 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 151 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 154 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 157 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 160 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 163 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 166 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 169 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "parse_tree.prog_io_item.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item____vpti_pred_2__pseudo_1__pseudo_2;

#line 175 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0_10001(
#line 178 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 180 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 182 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3,
#line 184 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4);

#line 187 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0_10001(
#line 190 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 192 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 194 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_3,
#line 196 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4,
#line 198 "parse_tree.prog_io_item.c"
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

#line 1469 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(
#line 1469 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__V_11_11,
#line 1469 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__V_12_12,
#line 1469 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__V_13_13,
#line 1469 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1469 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3);

#line 1466 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1466 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 1466 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 1371 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0(
#line 1371 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1371 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13,
#line 1371 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14,
#line 1371 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15,
#line 1371 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Vars_16);

#line 1264 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1(
#line 1264 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1264 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1264 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1236 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0(
#line 1236 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PromiseType_10,
#line 1236 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1236 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__4_4,
#line 1236 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1236 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 1236 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 1236 "prog_io_item.m"
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

#line 1264 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1264__1_2_p_0(
#line 1264 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1264 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39);

#line 1176 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1176__1_2_p_0(
#line 1176 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1176 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39);

#line 150 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__150__1_2_p_0(
#line 150 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_79,
#line 150 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_80);

#line 134 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__134__1_2_p_0(
#line 134 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_73,
#line 134 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_74);

#line 1466 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0(
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_6,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_7,
#line 1466 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 1466 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0(
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_5,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_6,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 1522 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__dummy_term_with_context_2_p_0(
#line 1522 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_3,
#line 1522 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Term_4);

#line 1457 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(
#line 1457 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1);

#line 1446 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_purity_3_p_0(
#line 1446 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Purity_4,
#line 1446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8,
#line 1446 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9);

#line 1426 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_name_4_p_0(
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__DefaultModuleName_5,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_7,
#line 1426 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModule_8);

#line 1415 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_specifier_3_p_0(
#line 1415 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 1415 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1415 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModuleSpecifier_6);

#line 1392 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__desugar_field_access_1_f_0(
#line 1392 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_3);

#line 1346 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(
#line 1346 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 1346 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithInstTerm_5,
#line 1346 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithInst_6);

#line 1315 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(
#line 1315 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1315 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1315 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithTypeTerm_7,
#line 1315 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithType_8);

#line 1286 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(
#line 1286 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1286 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1286 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeDetismTerm_7,
#line 1286 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeMaybeDetism_8);

#line 1198 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_constraints_6_p_0(
#line 1198 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1198 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1198 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1198 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23,
#line 1198 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24,
#line 1198 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeClassInstConstraints_11);

#line 1176 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0_1(
#line 1176 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1176 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1176 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1133 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RevAttributes0_8,
#line 1133 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__RevAttributes_9,
#line 1133 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeExistClassInstContext_10);

#line 1062 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1(
#line 1062 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1062 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1062 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1050 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_16,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_17,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_18,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 1050 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 1050 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24);

#line 1007 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1(
#line 1007 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1007 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1007 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 996 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_12,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_13,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_15,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_16,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 996 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 996 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22);

#line 956 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_14,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_15,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_16,
#line 956 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_17,
#line 956 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_18);

#line 924 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_7_p_0(
#line 924 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 924 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 924 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 924 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 924 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 924 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 924 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 915 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__wrap_nth_2_p_0(
#line 915 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__N_3,
#line 915 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_2);

#line 897 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0(
#line 897 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__ArgNum_1,
#line 897 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 897 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3,
#line 897 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__4_4);

#line 884 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0_1(
#line 884 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 884 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 884 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 853 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(
#line 853 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypesAndModes_4,
#line 853 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ErrorTerm_5,
#line 853 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeSpec_6);

#line 832 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_3_p_0(
#line 832 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_4,
#line 832 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 832 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeTypeAndMode_6);

#line 824 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(
#line 824 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_1,
#line 824 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 824 "prog_io_item.m"
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

#line 568 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_12,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_13,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_14,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_15,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_16,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 568 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 568 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22);

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

#line 270 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_4(
#line 270 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 270 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 270 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 348 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_3(
#line 348 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 348 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 348 "prog_io_item.m"
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

#line 218 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0(
#line 218 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 218 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 218 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_11,
#line 218 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_12,
#line 218 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 218 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 218 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 218 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 177 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(
#line 177 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 177 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_8,
#line 177 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_9,
#line 177 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22,
#line 177 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 177 "prog_io_item.m"
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

#line 134 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_1(
#line 134 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 134 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 134 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 113 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0(
#line 113 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 113 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadTerm_9,
#line 113 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__BodyTerm0_10,
#line 113 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ProgVarSet0_11,
#line 113 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 113 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 113 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);


static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_1[132][2];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_3[27][1];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_4[4][5];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_5[2][6];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_6[1][7];




static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_1[132][2] = {
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
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in return type of"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[55])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "expected in"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[55])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_item_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but function result does not."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: function arguments have modes,"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but function arguments do not."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: function result has mode,"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[48])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In function"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[73])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of function mode declaration."))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error in return mode"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[78])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_item_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid inst in"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(e.g. \":- module \'Foo\'.\")."))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[11])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must be quoted using single quotes"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[85])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: module names starting with capital letters"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[87])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[48])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In equation head:"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In clause head:"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: unrecognized declaration:"))
  },
  /* row 97 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 98 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 99 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 104 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 105 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error in"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "at"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error in arguments of"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration at"))
  },
  /* row 112 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 113 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 114 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[14])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: inconsistent constraints"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "on inst variables in function declaration:"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The argument without a mode is the"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The arguments without modes are the"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: some but not all arguments have modes."))
  },
  /* row 121 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[15])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "on inst variables"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in predicate mode declaration:"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in function mode declaration:"))
  },
  /* row 126 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[19])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "function mode declaration at"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid determinism category"))
  },
  /* row 129 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[22])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 130 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[24])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 131 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[26])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_2[7][3] = {
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
    ((MR_Box) (parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[2])),
    ((MR_Box) (parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[3])),
    ((MR_Box) (parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_3[27][1] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[59])))
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[71])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[83])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[80])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[89])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[19])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 23))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[21])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_4[4][5] = {
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
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



#line 1828 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1836 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1844 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1852 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1860 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1868 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1877 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1885 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1893 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1901 "parse_tree.prog_io_item.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item____vpti_pred_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1911 "parse_tree.prog_io_item.c"
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
#line 1472 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15)) == (MR_mktag((MR_Integer) 0))))
#line 1474 "prog_io_item.m"
      parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 1472 "prog_io_item.m"
    else
#line 1472 "prog_io_item.m"
      {
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleSpecs_15, (MR_Integer) 0)));
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Y_26;
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleDefn_38;
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemModuleDefn_39;

#line 1495 "prog_io_item.m"
        {
#line 1495 "prog_io_item.m"
          parse_tree__prog_io_item__ModuleDefn_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1495 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 1) = ((MR_Box) (parse_tree__prog_io_item__X_25));
#line 1495 "prog_io_item.m"
        }
#line 1504 "prog_io_item.m"
        {
#line 1504 "prog_io_item.m"
          parse_tree__prog_io_item__ItemModuleDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_38));
#line 1504 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 1504 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 1504 "prog_io_item.m"
        }
#line 1505 "prog_io_item.m"
        parse_tree__prog_io_item__Y_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_39);
#line 1472 "prog_io_item.m"
        {
#line 1472 "prog_io_item.m"
          parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_16, 0) = ((MR_Box) (parse_tree__prog_io_item__Y_26));
#line 1472 "prog_io_item.m"
        }
#line 1472 "prog_io_item.m"
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
#line 1472 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15)) == (MR_mktag((MR_Integer) 0))))
#line 1474 "prog_io_item.m"
      parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 1472 "prog_io_item.m"
    else
#line 1472 "prog_io_item.m"
      {
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleSpecs_15, (MR_Integer) 0)));
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Y_26;
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleDefn_38;
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemModuleDefn_39;

#line 1491 "prog_io_item.m"
        {
#line 1491 "prog_io_item.m"
          parse_tree__prog_io_item__ModuleDefn_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1491 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1491 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 1) = ((MR_Box) (parse_tree__prog_io_item__X_25));
#line 1491 "prog_io_item.m"
        }
#line 1504 "prog_io_item.m"
        {
#line 1504 "prog_io_item.m"
          parse_tree__prog_io_item__ItemModuleDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_38));
#line 1504 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 1504 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 1504 "prog_io_item.m"
        }
#line 1505 "prog_io_item.m"
        parse_tree__prog_io_item__Y_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_39);
#line 1472 "prog_io_item.m"
        {
#line 1472 "prog_io_item.m"
          parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_16, 0) = ((MR_Box) (parse_tree__prog_io_item__Y_26));
#line 1472 "prog_io_item.m"
        }
#line 1472 "prog_io_item.m"
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
#line 1472 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15)) == (MR_mktag((MR_Integer) 0))))
#line 1474 "prog_io_item.m"
      parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) parse_tree__prog_io_item__MaybeModuleSpecs_15;
#line 1472 "prog_io_item.m"
    else
#line 1472 "prog_io_item.m"
      {
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleSpecs_15, (MR_Integer) 0)));
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Y_26;
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleDefn_38;
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemModuleDefn_39;

#line 1487 "prog_io_item.m"
        {
#line 1487 "prog_io_item.m"
          parse_tree__prog_io_item__ModuleDefn_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1487 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_38, 1) = ((MR_Box) (parse_tree__prog_io_item__X_25));
#line 1487 "prog_io_item.m"
        }
#line 1504 "prog_io_item.m"
        {
#line 1504 "prog_io_item.m"
          parse_tree__prog_io_item__ItemModuleDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_38));
#line 1504 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 1504 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_39, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 1504 "prog_io_item.m"
        }
#line 1505 "prog_io_item.m"
        parse_tree__prog_io_item__Y_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_39);
#line 1472 "prog_io_item.m"
        {
#line 1472 "prog_io_item.m"
          parse_tree__prog_io_item__MaybeItem0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_16, 0) = ((MR_Box) (parse_tree__prog_io_item__Y_26));
#line 1472 "prog_io_item.m"
        }
#line 1472 "prog_io_item.m"
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

#line 1469 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(
#line 1469 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__V_11_11,
#line 1469 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__V_12_12,
#line 1469 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__V_13_13,
#line 1469 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1469 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3)
#line 1469 "prog_io_item.m"
{
#line 1472 "prog_io_item.m"
  {
#line 1472 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1472 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1474 "prog_io_item.m"
      *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_item__HeadVar__2_2;
#line 1472 "prog_io_item.m"
    else
#line 1472 "prog_io_item.m"
      {
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Y_6;
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleDefn_19;
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemModuleDefn_20;

#line 1511 "prog_io_item.m"
        {
#line 1511 "prog_io_item.m"
          parse_tree__prog_io_item__ModuleDefn_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1511 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_19, 1) = ((MR_Box) (parse_tree__prog_io_item__V_11_11));
#line 1511 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_19, 2) = ((MR_Box) (parse_tree__prog_io_item__X_5));
#line 1511 "prog_io_item.m"
        }
#line 1512 "prog_io_item.m"
        {
#line 1512 "prog_io_item.m"
          parse_tree__prog_io_item__ItemModuleDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1512 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_20, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_19));
#line 1512 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_20, 1) = ((MR_Box) (parse_tree__prog_io_item__V_12_12));
#line 1512 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_20, 2) = ((MR_Box) (parse_tree__prog_io_item__V_13_13));
#line 1512 "prog_io_item.m"
        }
#line 1513 "prog_io_item.m"
        parse_tree__prog_io_item__Y_6 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_20);
#line 1472 "prog_io_item.m"
        {
#line 1472 "prog_io_item.m"
          MR_Word base;
#line 1472 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "prog_io_item.m"
          *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 1472 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Y_6));
#line 1472 "prog_io_item.m"
        }
#line 1472 "prog_io_item.m"
      }
#line 1472 "prog_io_item.m"
  }
#line 1469 "prog_io_item.m"
}

#line 1466 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1466 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 1466 "prog_io_item.m"
{
#line 1466 "prog_io_item.m"
  {
#line 1466 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1466 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar1_4 = parse_tree__prog_io_item__HeadVar__2_2;
#line 1466 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar2_5 = parse_tree__prog_io_item__HeadVar__3_3;

#line 1466 "prog_io_item.m"
    {
#line 1466 "prog_io_item.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar2_5);
#line 1466 "prog_io_item.m"
      return;
    }
#line 1466 "prog_io_item.m"
  }
#line 1466 "prog_io_item.m"
}

#line 1466 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 1466 "prog_io_item.m"
{
#line 1466 "prog_io_item.m"
  {
#line 1466 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1466 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar1_3 = parse_tree__prog_io_item__HeadVar__1_1;
#line 1466 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar2_4 = parse_tree__prog_io_item__HeadVar__2_2;

#line 1466 "prog_io_item.m"
    {
#line 1466 "prog_io_item.m"
      return parse_tree__prog_io_item__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io_item__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar2_4);
    }
#line 1466 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1466 "prog_io_item.m"
  }
#line 1466 "prog_io_item.m"
}

#line 1371 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0(
#line 1371 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1371 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13,
#line 1371 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14,
#line 1371 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15,
#line 1371 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Vars_16)
#line 1371 "prog_io_item.m"
{
#line 1381 "prog_io_item.m"
  while (MR_TRUE)
#line 1381 "prog_io_item.m"
    {
#line 1381 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 1381 "prog_io_item.m"
      {
#line 1381 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13)) == (MR_mktag((MR_Integer) 1)));
#line 1381 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__QuantVars_11;
#line 1381 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17;
#line 1376 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_18_18;
#line 1376 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_19_19;
#line 1376 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;
#line 1376 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_12_12;

#line 1377 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1377 "prog_io_item.m"
          {
#line 1377 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13, (MR_Integer) 0)));
#line 1377 "prog_io_item.m"
            parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13, (MR_Integer) 1)));
#line 1376 "prog_io_item.m"
            parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1376 "prog_io_item.m"
            parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1376 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 2)));
#line 1376 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1376 "prog_io_item.m"
              {
#line 1376 "prog_io_item.m"
                parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1376 "prog_io_item.m"
                parse_tree__prog_io_item__QuantVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__V_19_19, (MR_Integer) 1)));
#line 1376 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__QuantType_7 == parse_tree__prog_io_item__V_24_24);
#line 1376 "prog_io_item.m"
              }
#line 1377 "prog_io_item.m"
          }
#line 1381 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1379 "prog_io_item.m"
          {
#line 1379 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20;

#line 1379 "prog_io_item.m"
            {
#line 1379 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15, parse_tree__prog_io_item__QuantVars_11);
            }
#line 1380 "prog_io_item.m"
            /* direct tailcall eliminated */
#line 1380 "prog_io_item.m"
            {
#line 1380 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_13 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17;
#line 1380 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0__tmp_copy_15 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20;

#line 1380 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_0__tmp_copy_15;
#line 1380 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_13;
#line 1380 "prog_io_item.m"
            }
#line 1380 "prog_io_item.m"
            continue;
#line 1379 "prog_io_item.m"
          }
#line 1381 "prog_io_item.m"
        else
#line 1382 "prog_io_item.m"
          {
#line 1382 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_Vars_16 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15;
#line 1382 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13;
#line 1382 "prog_io_item.m"
          }
#line 1381 "prog_io_item.m"
      }
#line 1381 "prog_io_item.m"
      break;
#line 1381 "prog_io_item.m"
    }
#line 1371 "prog_io_item.m"
}

#line 1264 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1(
#line 1264 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1264 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1264 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1264 "prog_io_item.m"
{
#line 1264 "prog_io_item.m"
  {
#line 1264 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1264 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_39;

#line 1264 "prog_io_item.m"
    {
#line 1264 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1264__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_39);
    }
#line 1264 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_39));
#line 1264 "prog_io_item.m"
  }
#line 1264 "prog_io_item.m"
}

#line 1236 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0(
#line 1236 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PromiseType_10,
#line 1236 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1236 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__4_4,
#line 1236 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1236 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 1236 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 1236 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 1236 "prog_io_item.m"
{
#line 1241 "prog_io_item.m"
  {
#line 1241 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1241 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_36_36;
#line 1241 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_37_37;
#line 1241 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Term_12;
#line 1241 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet0_17;
#line 1241 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ContextPieces_18;
#line 1241 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeGoal0_19;
#line 1241 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet_20;
#line 1241 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;

#line 1240 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1240 "prog_io_item.m"
      {
#line 1240 "prog_io_item.m"
        parse_tree__prog_io_item__Term_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__4_4, (MR_Integer) 0)));
#line 1240 "prog_io_item.m"
        parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__4_4, (MR_Integer) 1)));
#line 1240 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1241 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1241 "prog_io_item.m"
          {
#line 2616 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 2618 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1242 "prog_io_item.m"
            {
#line 1242 "prog_io_item.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_36_36, parse_tree__prog_io_item__TypeCtorInfo_37_37, parse_tree__prog_io_item__VarSet_11, &parse_tree__prog_io_item__ProgVarSet0_17);
            }
#line 1243 "prog_io_item.m"
            parse_tree__prog_io_item__ContextPieces_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1244 "prog_io_item.m"
            {
#line 1244 "prog_io_item.m"
              parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__ContextPieces_18, &parse_tree__prog_io_item__MaybeGoal0_19, parse_tree__prog_io_item__ProgVarSet0_17, &parse_tree__prog_io_item__ProgVarSet_20);
            }
#line 1271 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeGoal0_19)) == (MR_mktag((MR_Integer) 0))))
#line 1273 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = (MR_Word) parse_tree__prog_io_item__MaybeGoal0_19;
#line 1271 "prog_io_item.m"
            else
#line 1246 "prog_io_item.m"
              {
#line 1246 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeGoal0_19, (MR_Integer) 0)));
#line 1246 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__UnivVars_25;
#line 1246 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Goal_26;
#line 1246 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemPromise_28;
#line 1246 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_29;

#line 1257 "prog_io_item.m"
#line 1257 "prog_io_item.m"
                switch (parse_tree__prog_io_item__PromiseType_10) {
#line 1257 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1257 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 1257 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 1257 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 1261 "prog_io_item.m"
                    {
#line 1261 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__UnivVars0_35;
#line 1262 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_27_27;

#line 1262 "prog_io_item.m"
                      {
#line 1262 "prog_io_item.m"
                        parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__Attributes_13, &parse_tree__prog_io_item__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__UnivVars0_35);
                      }
#line 1264 "prog_io_item.m"
                      {
#line 1264 "prog_io_item.m"
                        mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[10], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[6], parse_tree__prog_io_item__UnivVars0_35, &parse_tree__prog_io_item__UnivVars_25);
                      }
#line 1265 "prog_io_item.m"
                      parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__Goal0_21;
#line 1261 "prog_io_item.m"
                    }
#line 1257 "prog_io_item.m"
                    break;
#line 1257 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 1253 "prog_io_item.m"
                    {
#line 1253 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__UnivVars0_23;
#line 1253 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__AllGoal_24;
#line 1250 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_22_22;

#line 1250 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__Goal0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1250 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 1250 "prog_io_item.m"
                        {
#line 1250 "prog_io_item.m"
                          parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 1)));
#line 1250 "prog_io_item.m"
                          parse_tree__prog_io_item__UnivVars0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 2)));
#line 1250 "prog_io_item.m"
                          parse_tree__prog_io_item__AllGoal_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 3)));
#line 1251 "prog_io_item.m"
                          parse_tree__prog_io_item__UnivVars_25 = parse_tree__prog_io_item__UnivVars0_23;
#line 1252 "prog_io_item.m"
                          parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__AllGoal_24;
#line 1250 "prog_io_item.m"
                        }
#line 1250 "prog_io_item.m"
                      else
#line 1254 "prog_io_item.m"
                        {
#line 1254 "prog_io_item.m"
                          parse_tree__prog_io_item__UnivVars_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1255 "prog_io_item.m"
                          parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__Goal0_21;
#line 1254 "prog_io_item.m"
                        }
#line 1253 "prog_io_item.m"
                    }
#line 1257 "prog_io_item.m"
                    break;
#line 1257 "prog_io_item.m"
                }
#line 1267 "prog_io_item.m"
                {
#line 1267 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemPromise_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1267 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 0) = ((MR_Box) (parse_tree__prog_io_item__PromiseType_10));
#line 1267 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 1) = ((MR_Box) (parse_tree__prog_io_item__Goal_26));
#line 1267 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_20));
#line 1267 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 3) = ((MR_Box) (parse_tree__prog_io_item__UnivVars_25));
#line 1267 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 4) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 1267 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 5) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 1267 "prog_io_item.m"
                }
#line 1269 "prog_io_item.m"
                {
#line 1269 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1269 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1269 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_29, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPromise_28));
#line 1269 "prog_io_item.m"
                }
#line 1270 "prog_io_item.m"
                {
#line 1270 "prog_io_item.m"
                  MR_Word base;
#line 1270 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 1270 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_29));
#line 1270 "prog_io_item.m"
                }
#line 1246 "prog_io_item.m"
              }
#line 1271 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1241 "prog_io_item.m"
          }
#line 1240 "prog_io_item.m"
      }
#line 1241 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1241 "prog_io_item.m"
  }
#line 1236 "prog_io_item.m"
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
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[130])));
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
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[25])));
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
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[131])));
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

#line 1264 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1264__1_2_p_0(
#line 1264 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1264 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39)
#line 1264 "prog_io_item.m"
{
#line 1264 "prog_io_item.m"
  {
#line 1264 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1264 "prog_io_item.m"
    {
#line 1264 "prog_io_item.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_38, parse_tree__prog_io_item__HeadVar__2_39);
#line 1264 "prog_io_item.m"
      return;
    }
#line 1264 "prog_io_item.m"
  }
#line 1264 "prog_io_item.m"
}

#line 1176 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1176__1_2_p_0(
#line 1176 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1176 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39)
#line 1176 "prog_io_item.m"
{
#line 1176 "prog_io_item.m"
  {
#line 1176 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1176 "prog_io_item.m"
    {
#line 1176 "prog_io_item.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__HeadVar__1_38, parse_tree__prog_io_item__HeadVar__2_39);
#line 1176 "prog_io_item.m"
      return;
    }
#line 1176 "prog_io_item.m"
  }
#line 1176 "prog_io_item.m"
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

#line 134 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__134__1_2_p_0(
#line 134 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_73,
#line 134 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_74)
#line 134 "prog_io_item.m"
{
#line 134 "prog_io_item.m"
  {
#line 134 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 134 "prog_io_item.m"
    {
#line 134 "prog_io_item.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_73, parse_tree__prog_io_item__HeadVar__2_74);
#line 134 "prog_io_item.m"
      return;
    }
#line 134 "prog_io_item.m"
  }
#line 134 "prog_io_item.m"
}

#line 1466 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0(
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_6,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_7,
#line 1466 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 1466 "prog_io_item.m"
{
#line 1466 "prog_io_item.m"
  {
#line 1466 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1466 "prog_io_item.m"
    {
#line 1466 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__HeadVar__2_2, parse_tree__prog_io_item__HeadVar__3_3);
#line 1466 "prog_io_item.m"
      return;
    }
#line 1466 "prog_io_item.m"
  }
#line 1466 "prog_io_item.m"
}

#line 1466 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0(
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_5,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_6,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1466 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 1466 "prog_io_item.m"
{
#line 1466 "prog_io_item.m"
  {
#line 1466 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1466 "prog_io_item.m"
    {
#line 1466 "prog_io_item.m"
      return parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__HeadVar__2_2);
    }
#line 1466 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1466 "prog_io_item.m"
  }
#line 1466 "prog_io_item.m"
}

#line 1522 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__dummy_term_with_context_2_p_0(
#line 1522 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_3,
#line 1522 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Term_4)
#line 1522 "prog_io_item.m"
{
#line 1524 "prog_io_item.m"
  {
#line 1524 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1525 "prog_io_item.m"
    {
#line 1525 "prog_io_item.m"
      MR_Word base;
#line 1525 "prog_io_item.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1525 "prog_io_item.m"
      *parse_tree__prog_io_item__Term_4 = base;
#line 1525 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[23]));
#line 1525 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1525 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_3));
#line 1525 "prog_io_item.m"
    }
#line 1524 "prog_io_item.m"
  }
#line 1522 "prog_io_item.m"
}

#line 1457 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(
#line 1457 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1)
#line 1457 "prog_io_item.m"
{
#line 1459 "prog_io_item.m"
  {
#line 1459 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1459 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__HeadVar__2_2;

#line 1459 "prog_io_item.m"
#line 1459 "prog_io_item.m"
    switch (parse_tree__prog_io_item__HeadVar__1_1) {
#line 1459 "prog_io_item.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1459 "prog_io_item.m"
      case (MR_Integer) 1:
#line 1459 "prog_io_item.m"
        parse_tree__prog_io_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[50]);
#line 1459 "prog_io_item.m"
        break;
#line 1459 "prog_io_item.m"
      case (MR_Integer) 0:
#line 1461 "prog_io_item.m"
        parse_tree__prog_io_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[91]);
#line 1459 "prog_io_item.m"
        break;
#line 1459 "prog_io_item.m"
    }
#line 1459 "prog_io_item.m"
    return parse_tree__prog_io_item__HeadVar__2_2;
#line 1459 "prog_io_item.m"
  }
#line 1457 "prog_io_item.m"
}

#line 1446 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_purity_3_p_0(
#line 1446 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Purity_4,
#line 1446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8,
#line 1446 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9)
#line 1446 "prog_io_item.m"
{
#line 1451 "prog_io_item.m"
  {
#line 1451 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8)) == (MR_mktag((MR_Integer) 1)));
#line 1451 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Purity0_6;
#line 1451 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10;
#line 1449 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_11_11;
#line 1449 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_12_12;
#line 1449 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_7_7;

#line 1449 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1449 "prog_io_item.m"
      {
#line 1449 "prog_io_item.m"
        parse_tree__prog_io_item__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8, (MR_Integer) 0)));
#line 1449 "prog_io_item.m"
        parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8, (MR_Integer) 1)));
#line 1449 "prog_io_item.m"
        parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_11_11, (MR_Integer) 0)));
#line 1449 "prog_io_item.m"
        parse_tree__prog_io_item__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_11_11, (MR_Integer) 1)));
#line 1449 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1449 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1449 "prog_io_item.m"
          parse_tree__prog_io_item__Purity0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_12_12, (MR_Integer) 0)));
#line 1449 "prog_io_item.m"
      }
#line 1451 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1450 "prog_io_item.m"
      {
#line 1450 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10;
#line 1450 "prog_io_item.m"
        *parse_tree__prog_io_item__Purity_4 = parse_tree__prog_io_item__Purity0_6;
#line 1450 "prog_io_item.m"
      }
#line 1451 "prog_io_item.m"
    else
#line 1452 "prog_io_item.m"
      {
#line 1452 "prog_io_item.m"
        *parse_tree__prog_io_item__Purity_4 = (MR_Integer) 0;
#line 1452 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8;
#line 1452 "prog_io_item.m"
      }
#line 1451 "prog_io_item.m"
  }
#line 1446 "prog_io_item.m"
}

#line 1426 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_name_4_p_0(
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__DefaultModuleName_5,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1426 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_7,
#line 1426 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModule_8)
#line 1426 "prog_io_item.m"
{
#line 1431 "prog_io_item.m"
  {
#line 1431 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1431 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__Term_7)) == (MR_mktag((MR_Integer) 0))))
#line 1440 "prog_io_item.m"
      {
#line 1440 "prog_io_item.m"
        parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_item__DefaultModuleName_5, parse_tree__prog_io_item__VarSet_6, parse_tree__prog_io_item__Term_7, parse_tree__prog_io_item__MaybeModule_8);
#line 1440 "prog_io_item.m"
        return;
      }
#line 1431 "prog_io_item.m"
    else
#line 1431 "prog_io_item.m"
      {
#line 1431 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Term_7, (MR_Integer) 1)));
#line 1431 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_12;
#line 1431 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 1431 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 1431 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1431 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Term_7, (MR_Integer) 0)));

#line 1436 "prog_io_item.m"
        {
#line 1436 "prog_io_item.m"
          parse_tree__prog_io_item__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1436 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_10));
#line 1436 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[129])));
#line 1436 "prog_io_item.m"
        }
#line 1436 "prog_io_item.m"
        {
#line 1436 "prog_io_item.m"
          parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_item__V_30_30));
#line 1436 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1436 "prog_io_item.m"
        }
#line 1435 "prog_io_item.m"
        {
#line 1435 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1435 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1435 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1435 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 1435 "prog_io_item.m"
        }
#line 1437 "prog_io_item.m"
        {
#line 1437 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_12));
#line 1437 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1437 "prog_io_item.m"
        }
#line 1437 "prog_io_item.m"
        {
#line 1437 "prog_io_item.m"
          MR_Word base;
#line 1437 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeModule_8 = base;
#line 1437 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 1437 "prog_io_item.m"
        }
#line 1431 "prog_io_item.m"
      }
#line 1431 "prog_io_item.m"
  }
#line 1426 "prog_io_item.m"
}

#line 1415 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_specifier_3_p_0(
#line 1415 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 1415 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1415 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModuleSpecifier_6)
#line 1415 "prog_io_item.m"
{
#line 1419 "prog_io_item.m"
  {
#line 1419 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1419 "prog_io_item.m"
    {
#line 1419 "prog_io_item.m"
      parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__VarSet_4, parse_tree__prog_io_item__Term_5, parse_tree__prog_io_item__MaybeModuleSpecifier_6);
#line 1419 "prog_io_item.m"
      return;
    }
#line 1419 "prog_io_item.m"
  }
#line 1415 "prog_io_item.m"
}

#line 1392 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__desugar_field_access_1_f_0(
#line 1392 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_3)
#line 1392 "prog_io_item.m"
{
#line 1400 "prog_io_item.m"
  {
#line 1400 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1400 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DesugaredTerm_4;
#line 1400 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__A_5;
#line 1400 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Context_7;
#line 1400 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Bs_9;
#line 1400 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;
#line 1396 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__RHS_6;
#line 1396 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 1396 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_17_17;
#line 1396 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_18_18;
#line 1396 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1396 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_20_20;
#line 1397 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_10_10;
#line 1397 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__FieldName_8;

#line 1396 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1396 "prog_io_item.m"
      {
#line 1396 "prog_io_item.m"
        parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 0)));
#line 1396 "prog_io_item.m"
        parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 1)));
#line 1396 "prog_io_item.m"
        parse_tree__prog_io_item__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 2)));
#line 1396 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 1396 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1396 "prog_io_item.m"
          {
#line 1396 "prog_io_item.m"
            parse_tree__prog_io_item__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 1396 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_17_17, (MR_String) "^") == 0);
#line 1396 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1396 "prog_io_item.m"
              {
#line 1396 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 1396 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1396 "prog_io_item.m"
                  {
#line 1396 "prog_io_item.m"
                    parse_tree__prog_io_item__A_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1396 "prog_io_item.m"
                    parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1396 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 1396 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1396 "prog_io_item.m"
                      {
#line 1396 "prog_io_item.m"
                        parse_tree__prog_io_item__RHS_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1396 "prog_io_item.m"
                        parse_tree__prog_io_item__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, (MR_Integer) 1)));
#line 1396 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1396 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1396 "prog_io_item.m"
                          {
#line 1397 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__RHS_6)) == (MR_mktag((MR_Integer) 0)));
#line 1397 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 1397 "prog_io_item.m"
                              {
#line 1397 "prog_io_item.m"
                                parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 0)));
#line 1397 "prog_io_item.m"
                                parse_tree__prog_io_item__Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 1)));
#line 1397 "prog_io_item.m"
                                parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 2)));
#line 1397 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 1397 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 1397 "prog_io_item.m"
                                  parse_tree__prog_io_item__FieldName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 1397 "prog_io_item.m"
                              }
#line 1396 "prog_io_item.m"
                          }
#line 1396 "prog_io_item.m"
                      }
#line 1396 "prog_io_item.m"
                  }
#line 1396 "prog_io_item.m"
              }
#line 1396 "prog_io_item.m"
          }
#line 1396 "prog_io_item.m"
      }
#line 1400 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1399 "prog_io_item.m"
      {
#line 1399 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 1399 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;

#line 1399 "prog_io_item.m"
        {
#line 1399 "prog_io_item.m"
          parse_tree__prog_io_item__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_item__A_5));
#line 1399 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1399 "prog_io_item.m"
        }
#line 1399 "prog_io_item.m"
        {
#line 1399 "prog_io_item.m"
          parse_tree__prog_io_item__V_23_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__Bs_9, parse_tree__prog_io_item__V_24_24);
        }
#line 1399 "prog_io_item.m"
        {
#line 1399 "prog_io_item.m"
          parse_tree__prog_io_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1399 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io_item__V_21_21));
#line 1399 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io_item__V_23_23));
#line 1399 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_7));
#line 1399 "prog_io_item.m"
        }
#line 1399 "prog_io_item.m"
      }
#line 1400 "prog_io_item.m"
    else
#line 1407 "prog_io_item.m"
      {
#line 1407 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_12;
#line 1407 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__A_44;
#line 1407 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_46;
#line 1407 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__FieldName_47;
#line 1407 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Bs_48;
#line 1401 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__LHS_11;
#line 1401 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_26_26;
#line 1401 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_27_27;
#line 1401 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_28_28;
#line 1401 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 1401 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 1401 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_31_31;
#line 1401 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_32_32;
#line 1401 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 1401 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_34_34;
#line 1401 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1401 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;
#line 1401 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__RHS_43;
#line 1401 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_13_13;
#line 1403 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_14_14;

#line 1401 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1401 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1401 "prog_io_item.m"
          {
#line 1401 "prog_io_item.m"
            parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 0)));
#line 1401 "prog_io_item.m"
            parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 1)));
#line 1401 "prog_io_item.m"
            parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 2)));
#line 1401 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_26_26)) == (MR_mktag((MR_Integer) 0)));
#line 1401 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1401 "prog_io_item.m"
              {
#line 1401 "prog_io_item.m"
                parse_tree__prog_io_item__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 0)));
#line 1401 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_27_27, (MR_String) ":=") == 0);
#line 1401 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1401 "prog_io_item.m"
                  {
#line 1401 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1401 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1401 "prog_io_item.m"
                      {
#line 1401 "prog_io_item.m"
                        parse_tree__prog_io_item__LHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 0)));
#line 1401 "prog_io_item.m"
                        parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 1)));
#line 1401 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 1401 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1401 "prog_io_item.m"
                          {
#line 1401 "prog_io_item.m"
                            parse_tree__prog_io_item__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 0)));
#line 1401 "prog_io_item.m"
                            parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 1)));
#line 1401 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1401 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 1401 "prog_io_item.m"
                              {
#line 1402 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__LHS_11)) == (MR_mktag((MR_Integer) 0)));
#line 1402 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 1402 "prog_io_item.m"
                                  {
#line 1402 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 0)));
#line 1402 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 1)));
#line 1402 "prog_io_item.m"
                                    parse_tree__prog_io_item__Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 2)));
#line 1402 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 1402 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 1402 "prog_io_item.m"
                                      {
#line 1402 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 1402 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_32_32, (MR_String) "^") == 0);
#line 1401 "prog_io_item.m"
                                        if (parse_tree__prog_io_item__succeeded)
#line 1401 "prog_io_item.m"
                                          {
#line 1402 "prog_io_item.m"
                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1402 "prog_io_item.m"
                                            if (parse_tree__prog_io_item__succeeded)
#line 1402 "prog_io_item.m"
                                              {
#line 1402 "prog_io_item.m"
                                                parse_tree__prog_io_item__A_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 0)));
#line 1402 "prog_io_item.m"
                                                parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 1)));
#line 1402 "prog_io_item.m"
                                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1402 "prog_io_item.m"
                                                if (parse_tree__prog_io_item__succeeded)
#line 1402 "prog_io_item.m"
                                                  {
#line 1402 "prog_io_item.m"
                                                    parse_tree__prog_io_item__RHS_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 0)));
#line 1402 "prog_io_item.m"
                                                    parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 1)));
#line 1402 "prog_io_item.m"
                                                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1401 "prog_io_item.m"
                                                    if (parse_tree__prog_io_item__succeeded)
#line 1401 "prog_io_item.m"
                                                      {
#line 1403 "prog_io_item.m"
                                                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__RHS_43)) == (MR_mktag((MR_Integer) 0)));
#line 1403 "prog_io_item.m"
                                                        if (parse_tree__prog_io_item__succeeded)
#line 1403 "prog_io_item.m"
                                                          {
#line 1403 "prog_io_item.m"
                                                            parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 0)));
#line 1403 "prog_io_item.m"
                                                            parse_tree__prog_io_item__Bs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 1)));
#line 1403 "prog_io_item.m"
                                                            parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 2)));
#line 1403 "prog_io_item.m"
                                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 1403 "prog_io_item.m"
                                                            if (parse_tree__prog_io_item__succeeded)
#line 1403 "prog_io_item.m"
                                                              parse_tree__prog_io_item__FieldName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 1403 "prog_io_item.m"
                                                          }
#line 1401 "prog_io_item.m"
                                                      }
#line 1402 "prog_io_item.m"
                                                  }
#line 1402 "prog_io_item.m"
                                              }
#line 1401 "prog_io_item.m"
                                          }
#line 1402 "prog_io_item.m"
                                      }
#line 1402 "prog_io_item.m"
                                  }
#line 1401 "prog_io_item.m"
                              }
#line 1401 "prog_io_item.m"
                          }
#line 1401 "prog_io_item.m"
                      }
#line 1401 "prog_io_item.m"
                  }
#line 1401 "prog_io_item.m"
              }
#line 1401 "prog_io_item.m"
          }
#line 1407 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1405 "prog_io_item.m"
          {
#line 1405 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__FunctionName_15;
#line 1405 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;
#line 1405 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_39_39;
#line 1405 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1405 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;

#line 1405 "prog_io_item.m"
            {
#line 1405 "prog_io_item.m"
              parse_tree__prog_io_item__FunctionName_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_item__FieldName_47, (MR_String) " :=");
            }
#line 1406 "prog_io_item.m"
            {
#line 1406 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1406 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_item__FunctionName_15));
#line 1406 "prog_io_item.m"
            }
#line 1406 "prog_io_item.m"
            {
#line 1406 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__X_12));
#line 1406 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1406 "prog_io_item.m"
            }
#line 1406 "prog_io_item.m"
            {
#line 1406 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__A_44));
#line 1406 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1406 "prog_io_item.m"
            }
#line 1406 "prog_io_item.m"
            {
#line 1406 "prog_io_item.m"
              parse_tree__prog_io_item__V_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__Bs_48, parse_tree__prog_io_item__V_40_40);
            }
#line 1406 "prog_io_item.m"
            {
#line 1406 "prog_io_item.m"
              parse_tree__prog_io_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1406 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1406 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 1406 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_46));
#line 1406 "prog_io_item.m"
            }
#line 1405 "prog_io_item.m"
          }
#line 1407 "prog_io_item.m"
        else
#line 1408 "prog_io_item.m"
          parse_tree__prog_io_item__DesugaredTerm_4 = parse_tree__prog_io_item__Term_3;
#line 1407 "prog_io_item.m"
      }
#line 1400 "prog_io_item.m"
    return parse_tree__prog_io_item__DesugaredTerm_4;
#line 1400 "prog_io_item.m"
  }
#line 1392 "prog_io_item.m"
}

#line 1346 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(
#line 1346 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 1346 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithInstTerm_5,
#line 1346 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithInst_6)
#line 1346 "prog_io_item.m"
{
#line 1364 "prog_io_item.m"
  {
#line 1364 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 1364 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTermPrime_7;
#line 1364 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InstTerm_8;
#line 1351 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_13_13;
#line 1351 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_14_14;
#line 1351 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_15_15;
#line 1351 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 1351 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 1351 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_9_9;

#line 1351 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1351 "prog_io_item.m"
      {
#line 1351 "prog_io_item.m"
        parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 0)));
#line 1351 "prog_io_item.m"
        parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 1)));
#line 1351 "prog_io_item.m"
        parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 2)));
#line 1351 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 1351 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1351 "prog_io_item.m"
          {
#line 1351 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_13_13, (MR_Integer) 0)));
#line 1351 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_14_14, (MR_String) "with_inst") == 0);
#line 1351 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1351 "prog_io_item.m"
              {
#line 1352 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1352 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1352 "prog_io_item.m"
                  {
#line 1352 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeWithInstTermPrime_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 0)));
#line 1352 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 1)));
#line 1352 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1352 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1352 "prog_io_item.m"
                      {
#line 1352 "prog_io_item.m"
                        parse_tree__prog_io_item__InstTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 1352 "prog_io_item.m"
                        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 1)));
#line 1352 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1352 "prog_io_item.m"
                      }
#line 1352 "prog_io_item.m"
                  }
#line 1351 "prog_io_item.m"
              }
#line 1351 "prog_io_item.m"
          }
#line 1351 "prog_io_item.m"
      }
#line 1364 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1354 "prog_io_item.m"
      {
#line 1357 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Inst_10;

#line 1354 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithInstTerm_5 = parse_tree__prog_io_item__BeforeWithInstTermPrime_7;
#line 1355 "prog_io_item.m"
        {
#line 1355 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__InstTerm_8, &parse_tree__prog_io_item__Inst_10);
        }
#line 1357 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1356 "prog_io_item.m"
          {
#line 1356 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_19_19;

#line 1356 "prog_io_item.m"
            {
#line 1356 "prog_io_item.m"
              parse_tree__prog_io_item__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_item__Inst_10));
#line 1356 "prog_io_item.m"
            }
#line 1356 "prog_io_item.m"
            {
#line 1356 "prog_io_item.m"
              MR_Word base;
#line 1356 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithInst_6 = base;
#line 1356 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_19_19));
#line 1356 "prog_io_item.m"
            }
#line 1356 "prog_io_item.m"
          }
#line 1357 "prog_io_item.m"
        else
#line 1359 "prog_io_item.m"
          {
#line 1359 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_12;
#line 1359 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_33_33;
#line 1359 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_34_34;
#line 1359 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_35_35;
#line 1359 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;

#line 1361 "prog_io_item.m"
            {
#line 1361 "prog_io_item.m"
              parse_tree__prog_io_item__V_35_35 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__InstTerm_8);
            }
#line 1361 "prog_io_item.m"
            {
#line 1361 "prog_io_item.m"
              parse_tree__prog_io_item__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1361 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 1361 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[121])));
#line 1361 "prog_io_item.m"
            }
#line 1361 "prog_io_item.m"
            {
#line 1361 "prog_io_item.m"
              parse_tree__prog_io_item__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_item__V_34_34));
#line 1361 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1361 "prog_io_item.m"
            }
#line 1360 "prog_io_item.m"
            {
#line 1360 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1360 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1360 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1360 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_item__V_33_33));
#line 1360 "prog_io_item.m"
            }
#line 1362 "prog_io_item.m"
            {
#line 1362 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_12));
#line 1362 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1362 "prog_io_item.m"
            }
#line 1362 "prog_io_item.m"
            {
#line 1362 "prog_io_item.m"
              MR_Word base;
#line 1362 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1362 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithInst_6 = base;
#line 1362 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1362 "prog_io_item.m"
            }
#line 1359 "prog_io_item.m"
          }
#line 1354 "prog_io_item.m"
      }
#line 1364 "prog_io_item.m"
    else
#line 1365 "prog_io_item.m"
      {
#line 1365 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithInstTerm_5 = parse_tree__prog_io_item__Term_4;
#line 1366 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeWithInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[16]);
#line 1365 "prog_io_item.m"
      }
#line 1364 "prog_io_item.m"
  }
#line 1346 "prog_io_item.m"
}

#line 1315 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(
#line 1315 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1315 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1315 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithTypeTerm_7,
#line 1315 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithType_8)
#line 1315 "prog_io_item.m"
{
#line 1339 "prog_io_item.m"
  {
#line 1339 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1339 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithTypeTermPrime_10;
#line 1339 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeTerm_11;
#line 1321 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeQualifier_9;
#line 1321 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 1321 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_18_18;
#line 1321 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1321 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_24_24;
#line 1320 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_12_12;

#line 1320 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1320 "prog_io_item.m"
      {
#line 1320 "prog_io_item.m"
        parse_tree__prog_io_item__TypeQualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 0)));
#line 1320 "prog_io_item.m"
        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 1)));
#line 1320 "prog_io_item.m"
        parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 2)));
#line 1321 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 1321 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1321 "prog_io_item.m"
          {
#line 1321 "prog_io_item.m"
            parse_tree__prog_io_item__BeforeWithTypeTermPrime_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_17_17, (MR_Integer) 0)));
#line 1321 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_17_17, (MR_Integer) 1)));
#line 1321 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 1321 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1321 "prog_io_item.m"
              {
#line 1321 "prog_io_item.m"
                parse_tree__prog_io_item__TypeTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1321 "prog_io_item.m"
                parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1321 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1321 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1321 "prog_io_item.m"
                  {
#line 1323 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__TypeQualifier_9)) == (MR_mktag((MR_Integer) 0)));
#line 1323 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1323 "prog_io_item.m"
                      {
#line 1323 "prog_io_item.m"
                        parse_tree__prog_io_item__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__TypeQualifier_9, (MR_Integer) 0)));
#line 1324 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__V_24_24, (MR_String) ":") == 0))
#line 1325 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1324 "prog_io_item.m"
                        else
#line 1324 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__V_24_24, (MR_String) "with_type") == 0))
#line 1323 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1324 "prog_io_item.m"
                        else
#line 1324 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 1323 "prog_io_item.m"
                      }
#line 1321 "prog_io_item.m"
                  }
#line 1321 "prog_io_item.m"
              }
#line 1321 "prog_io_item.m"
          }
#line 1320 "prog_io_item.m"
      }
#line 1339 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1328 "prog_io_item.m"
      {
#line 1328 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeType_14;

#line 1328 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithTypeTerm_7 = parse_tree__prog_io_item__BeforeWithTypeTermPrime_10;
#line 1331 "prog_io_item.m"
        {
#line 1331 "prog_io_item.m"
          parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_item__TypeTerm_11, parse_tree__prog_io_item__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__MaybeType_14);
        }
#line 1335 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
#line 1337 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeWithType_8 = (MR_Word) parse_tree__prog_io_item__MaybeType_14;
#line 1335 "prog_io_item.m"
        else
#line 1333 "prog_io_item.m"
          {
#line 1333 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeType_14, (MR_Integer) 0)));
#line 1333 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_22_22;

#line 1334 "prog_io_item.m"
            {
#line 1334 "prog_io_item.m"
              parse_tree__prog_io_item__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_15));
#line 1334 "prog_io_item.m"
            }
#line 1334 "prog_io_item.m"
            {
#line 1334 "prog_io_item.m"
              MR_Word base;
#line 1334 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithType_8 = base;
#line 1334 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_22_22));
#line 1334 "prog_io_item.m"
            }
#line 1333 "prog_io_item.m"
          }
#line 1328 "prog_io_item.m"
      }
#line 1339 "prog_io_item.m"
    else
#line 1340 "prog_io_item.m"
      {
#line 1340 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithTypeTerm_7 = parse_tree__prog_io_item__Term_6;
#line 1341 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeWithType_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[21]);
#line 1340 "prog_io_item.m"
      }
#line 1339 "prog_io_item.m"
  }
#line 1315 "prog_io_item.m"
}

#line 1286 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(
#line 1286 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1286 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1286 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeDetismTerm_7,
#line 1286 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeMaybeDetism_8)
#line 1286 "prog_io_item.m"
{
#line 1308 "prog_io_item.m"
  {
#line 1308 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1308 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTermPrime_11;
#line 1308 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DetismTerm_12;
#line 1291 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Args_9;
#line 1291 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1291 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_20_20;
#line 1291 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;
#line 1291 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_22_22;
#line 1291 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_10_10;

#line 1291 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1291 "prog_io_item.m"
      {
#line 1291 "prog_io_item.m"
        parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 0)));
#line 1291 "prog_io_item.m"
        parse_tree__prog_io_item__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 1)));
#line 1291 "prog_io_item.m"
        parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 2)));
#line 1291 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 1291 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1291 "prog_io_item.m"
          {
#line 1291 "prog_io_item.m"
            parse_tree__prog_io_item__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1291 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_20_20, (MR_String) "is") == 0);
#line 1291 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1291 "prog_io_item.m"
              {
#line 1292 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 1292 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1292 "prog_io_item.m"
                  {
#line 1292 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeDetismTermPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_9, (MR_Integer) 0)));
#line 1292 "prog_io_item.m"
                    parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_9, (MR_Integer) 1)));
#line 1292 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 1292 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1292 "prog_io_item.m"
                      {
#line 1292 "prog_io_item.m"
                        parse_tree__prog_io_item__DetismTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 1292 "prog_io_item.m"
                        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 1)));
#line 1292 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1292 "prog_io_item.m"
                      }
#line 1292 "prog_io_item.m"
                  }
#line 1291 "prog_io_item.m"
              }
#line 1291 "prog_io_item.m"
          }
#line 1291 "prog_io_item.m"
      }
#line 1308 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1294 "prog_io_item.m"
      {
#line 1300 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Detism_15;
#line 1296 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__DetismFunctor_13;
#line 1296 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 1296 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;
#line 1296 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_14_14;

#line 1294 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeDetismTerm_7 = parse_tree__prog_io_item__BeforeDetismTermPrime_11;
#line 1296 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__DetismTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 1296 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1296 "prog_io_item.m"
          {
#line 1296 "prog_io_item.m"
            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 0)));
#line 1296 "prog_io_item.m"
            parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 1)));
#line 1296 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 2)));
#line 1296 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1296 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1296 "prog_io_item.m"
              {
#line 1296 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 1296 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1296 "prog_io_item.m"
                  {
#line 1296 "prog_io_item.m"
                    parse_tree__prog_io_item__DetismFunctor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_23_23, (MR_Integer) 0)));
#line 1297 "prog_io_item.m"
                    {
#line 1297 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_item__DetismFunctor_13, &parse_tree__prog_io_item__Detism_15);
                    }
#line 1296 "prog_io_item.m"
                  }
#line 1296 "prog_io_item.m"
              }
#line 1296 "prog_io_item.m"
          }
#line 1300 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1299 "prog_io_item.m"
          {
#line 1299 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_25_25;

#line 1299 "prog_io_item.m"
            {
#line 1299 "prog_io_item.m"
              parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Detism_15));
#line 1299 "prog_io_item.m"
            }
#line 1299 "prog_io_item.m"
            {
#line 1299 "prog_io_item.m"
              MR_Word base;
#line 1299 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeMaybeDetism_8 = base;
#line 1299 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 1299 "prog_io_item.m"
            }
#line 1299 "prog_io_item.m"
          }
#line 1300 "prog_io_item.m"
        else
#line 1301 "prog_io_item.m"
          {
#line 1301 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1301 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__TermStr_16;
#line 1301 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Pieces_17;
#line 1301 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_18;
#line 1301 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_28_28;
#line 1301 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29;
#line 1301 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;
#line 1301 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_39_39;
#line 1301 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1301 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 1301 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_42_42;
#line 1301 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_45_45;

#line 1301 "prog_io_item.m"
            {
#line 1301 "prog_io_item.m"
              parse_tree__prog_io_item__TermStr_16 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_48_48, parse_tree__prog_io_item__VarSet_5, parse_tree__prog_io_item__Term_6);
            }
#line 1303 "prog_io_item.m"
            {
#line 1303 "prog_io_item.m"
              parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1303 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_16));
#line 1303 "prog_io_item.m"
            }
#line 1303 "prog_io_item.m"
            {
#line 1303 "prog_io_item.m"
              parse_tree__prog_io_item__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 1303 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 1303 "prog_io_item.m"
            }
#line 1302 "prog_io_item.m"
            {
#line 1302 "prog_io_item.m"
              parse_tree__prog_io_item__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[128])));
#line 1302 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_17, 1) = ((MR_Box) (parse_tree__prog_io_item__V_28_28));
#line 1302 "prog_io_item.m"
            }
#line 1305 "prog_io_item.m"
            {
#line 1305 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_48_48, parse_tree__prog_io_item__DetismTerm_12);
            }
#line 1305 "prog_io_item.m"
            {
#line 1305 "prog_io_item.m"
              parse_tree__prog_io_item__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_17));
#line 1305 "prog_io_item.m"
            }
#line 1305 "prog_io_item.m"
            {
#line 1305 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 1305 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1305 "prog_io_item.m"
            }
#line 1305 "prog_io_item.m"
            {
#line 1305 "prog_io_item.m"
              parse_tree__prog_io_item__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1305 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 1) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1305 "prog_io_item.m"
            }
#line 1305 "prog_io_item.m"
            {
#line 1305 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 1305 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1305 "prog_io_item.m"
            }
#line 1304 "prog_io_item.m"
            {
#line 1304 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1304 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1304 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1304 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1304 "prog_io_item.m"
            }
#line 1306 "prog_io_item.m"
            {
#line 1306 "prog_io_item.m"
              parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_18));
#line 1306 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1306 "prog_io_item.m"
            }
#line 1306 "prog_io_item.m"
            {
#line 1306 "prog_io_item.m"
              MR_Word base;
#line 1306 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1306 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeMaybeDetism_8 = base;
#line 1306 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_45_45));
#line 1306 "prog_io_item.m"
            }
#line 1301 "prog_io_item.m"
          }
#line 1294 "prog_io_item.m"
      }
#line 1308 "prog_io_item.m"
    else
#line 1309 "prog_io_item.m"
      {
#line 1309 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeDetismTerm_7 = parse_tree__prog_io_item__Term_6;
#line 1310 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeMaybeDetism_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[20]);
#line 1309 "prog_io_item.m"
      }
#line 1308 "prog_io_item.m"
  }
#line 1286 "prog_io_item.m"
}

#line 1198 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_constraints_6_p_0(
#line 1198 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1198 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1198 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1198 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23,
#line 1198 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24,
#line 1198 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeClassInstConstraints_11)
#line 1198 "prog_io_item.m"
{
#line 1230 "prog_io_item.m"
  {
#line 1230 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23)) == (MR_mktag((MR_Integer) 1)));
#line 1230 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConstraintsTerm_12;
#line 1230 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25;
#line 1205 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_26_26;
#line 1205 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_27_27;
#line 1205 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_41_41;
#line 1206 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___Term_13;

#line 1207 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1207 "prog_io_item.m"
      {
#line 1207 "prog_io_item.m"
        parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23, (MR_Integer) 0)));
#line 1207 "prog_io_item.m"
        parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23, (MR_Integer) 1)));
#line 1206 "prog_io_item.m"
        parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 0)));
#line 1206 "prog_io_item.m"
        parse_tree__prog_io_item___Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 1)));
#line 1206 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_27_27)) == (MR_mktag((MR_Integer) 3)));
#line 1206 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1206 "prog_io_item.m"
          {
#line 1206 "prog_io_item.m"
            parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_27_27, (MR_Integer) 0)));
#line 1206 "prog_io_item.m"
            parse_tree__prog_io_item__ConstraintsTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_27_27, (MR_Integer) 1)));
#line 1206 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__QuantType_7 == parse_tree__prog_io_item__V_41_41);
#line 1206 "prog_io_item.m"
          }
#line 1207 "prog_io_item.m"
      }
#line 1230 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1210 "prog_io_item.m"
      {
#line 1210 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeHeadConstraints_14;
#line 1210 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeTailConstraints_15;
#line 1225 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadClassConstraints_16;
#line 1225 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadInstConstraint_17;
#line 1225 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TailClassConstraints_18;
#line 1225 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TailInstConstraint_19;

#line 1209 "prog_io_item.m"
        {
#line 1209 "prog_io_item.m"
          parse_tree__prog_io_typeclass__parse_class_and_inst_constraints_4_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ConstraintsTerm_12, &parse_tree__prog_io_item__MaybeHeadConstraints_14);
        }
#line 1213 "prog_io_item.m"
        {
#line 1213 "prog_io_item.m"
          parse_tree__prog_io_item__get_constraints_6_p_0(parse_tree__prog_io_item__QuantType_7, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24, &parse_tree__prog_io_item__MaybeTailConstraints_15);
        }
#line 1216 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeHeadConstraints_14)) == (MR_mktag((MR_Integer) 1)));
#line 1216 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1216 "prog_io_item.m"
          {
#line 1216 "prog_io_item.m"
            parse_tree__prog_io_item__HeadClassConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeHeadConstraints_14, (MR_Integer) 0)));
#line 1216 "prog_io_item.m"
            parse_tree__prog_io_item__HeadInstConstraint_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeHeadConstraints_14, (MR_Integer) 1)));
#line 1218 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeTailConstraints_15)) == (MR_mktag((MR_Integer) 1)));
#line 1218 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1218 "prog_io_item.m"
              {
#line 1218 "prog_io_item.m"
                parse_tree__prog_io_item__TailClassConstraints_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeTailConstraints_15, (MR_Integer) 0)));
#line 1218 "prog_io_item.m"
                parse_tree__prog_io_item__TailInstConstraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeTailConstraints_15, (MR_Integer) 1)));
#line 1218 "prog_io_item.m"
              }
#line 1216 "prog_io_item.m"
          }
#line 1225 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1221 "prog_io_item.m"
          {
#line 1221 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ClassConstraints_20;
#line 1221 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_21;

#line 1221 "prog_io_item.m"
            {
#line 1221 "prog_io_item.m"
              parse_tree__prog_io_item__ClassConstraints_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, parse_tree__prog_io_item__HeadClassConstraints_16, parse_tree__prog_io_item__TailClassConstraints_18);
            }
#line 1222 "prog_io_item.m"
            {
#line 1222 "prog_io_item.m"
              parse_tree__prog_io_item__InstConstraints_21 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_item__HeadInstConstraint_17, parse_tree__prog_io_item__TailInstConstraint_19);
            }
#line 1224 "prog_io_item.m"
            {
#line 1224 "prog_io_item.m"
              MR_Word base;
#line 1224 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1224 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ClassConstraints_20));
#line 1224 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_21));
#line 1224 "prog_io_item.m"
            }
#line 1221 "prog_io_item.m"
          }
#line 1225 "prog_io_item.m"
        else
#line 1227 "prog_io_item.m"
          {
#line 1227 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeInfo_37_37 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[9];
#line 1227 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeInfo_38_38 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[1];
#line 1227 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_22;
#line 1227 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29;
#line 1227 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_30_30;

#line 1226 "prog_io_item.m"
            {
#line 1226 "prog_io_item.m"
              parse_tree__prog_io_item__V_29_29 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__TypeInfo_38_38, parse_tree__prog_io_item__MaybeHeadConstraints_14);
            }
#line 1227 "prog_io_item.m"
            {
#line 1227 "prog_io_item.m"
              parse_tree__prog_io_item__V_30_30 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__TypeInfo_38_38, parse_tree__prog_io_item__MaybeTailConstraints_15);
            }
#line 1226 "prog_io_item.m"
            {
#line 1226 "prog_io_item.m"
              parse_tree__prog_io_item__Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_29_29, parse_tree__prog_io_item__V_30_30);
            }
#line 1228 "prog_io_item.m"
            {
#line 1228 "prog_io_item.m"
              MR_Word base;
#line 1228 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1228 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1228 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_22));
#line 1228 "prog_io_item.m"
            }
#line 1227 "prog_io_item.m"
          }
#line 1210 "prog_io_item.m"
      }
#line 1230 "prog_io_item.m"
    else
#line 1231 "prog_io_item.m"
      {
#line 1231 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_32_32;

#line 1231 "prog_io_item.m"
        {
#line 1231 "prog_io_item.m"
          parse_tree__prog_io_item__V_32_32 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        }
#line 1231 "prog_io_item.m"
        {
#line 1231 "prog_io_item.m"
          MR_Word base;
#line 1231 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1231 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1231 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 1231 "prog_io_item.m"
        }
#line 1231 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23;
#line 1231 "prog_io_item.m"
      }
#line 1230 "prog_io_item.m"
  }
#line 1198 "prog_io_item.m"
}

#line 1176 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0_1(
#line 1176 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1176 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1176 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1176 "prog_io_item.m"
{
#line 1176 "prog_io_item.m"
  {
#line 1176 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1176 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_39;

#line 1176 "prog_io_item.m"
    {
#line 1176 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1176__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_39);
    }
#line 1176 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_39));
#line 1176 "prog_io_item.m"
  }
#line 1176 "prog_io_item.m"
}

#line 1133 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RevAttributes0_8,
#line 1133 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__RevAttributes_9,
#line 1133 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeExistClassInstContext_10)
#line 1133 "prog_io_item.m"
{
#line 1138 "prog_io_item.m"
  {
#line 1138 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1138 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeInfo_37_37 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[0];
#line 1138 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes0_11;
#line 1138 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes1_12;
#line 1138 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes2_14;
#line 1138 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVars0_15;
#line 1138 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVars_16;
#line 1138 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes3_17;
#line 1138 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeUnivConstraints_18;
#line 1138 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes_19;
#line 1138 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeExistConstraints_20;
#line 1172 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___UnivQVars_13;
#line 1192 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__UnivConstraints_21;
#line 1192 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__UnivInstConstraints_22;
#line 1192 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistConstraints_23;
#line 1192 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistInstConstraints_24;

#line 1171 "prog_io_item.m"
    {
#line 1171 "prog_io_item.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__RevAttributes0_8, &parse_tree__prog_io_item__Attributes0_11);
    }
#line 1172 "prog_io_item.m"
    {
#line 1172 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__Attributes0_11, &parse_tree__prog_io_item__Attributes1_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item___UnivQVars_13);
    }
#line 1174 "prog_io_item.m"
    {
#line 1174 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 0, parse_tree__prog_io_item__Attributes1_12, &parse_tree__prog_io_item__Attributes2_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__ExistQVars0_15);
    }
#line 1176 "prog_io_item.m"
    {
#line 1176 "prog_io_item.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[7], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[5], parse_tree__prog_io_item__ExistQVars0_15, &parse_tree__prog_io_item__ExistQVars_16);
    }
#line 1177 "prog_io_item.m"
    {
#line 1177 "prog_io_item.m"
      parse_tree__prog_io_item__get_constraints_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Attributes2_14, &parse_tree__prog_io_item__Attributes3_17, &parse_tree__prog_io_item__MaybeUnivConstraints_18);
    }
#line 1179 "prog_io_item.m"
    {
#line 1179 "prog_io_item.m"
      parse_tree__prog_io_item__get_constraints_6_p_0((MR_Integer) 0, parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Attributes3_17, &parse_tree__prog_io_item__Attributes_19, &parse_tree__prog_io_item__MaybeExistConstraints_20);
    }
#line 1181 "prog_io_item.m"
    {
#line 1181 "prog_io_item.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__Attributes_19, parse_tree__prog_io_item__RevAttributes_9);
    }
#line 1184 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeUnivConstraints_18)) == (MR_mktag((MR_Integer) 1)));
#line 1184 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1184 "prog_io_item.m"
      {
#line 1184 "prog_io_item.m"
        parse_tree__prog_io_item__UnivConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeUnivConstraints_18, (MR_Integer) 0)));
#line 1184 "prog_io_item.m"
        parse_tree__prog_io_item__UnivInstConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeUnivConstraints_18, (MR_Integer) 1)));
#line 1185 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeExistConstraints_20)) == (MR_mktag((MR_Integer) 1)));
#line 1185 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1185 "prog_io_item.m"
          {
#line 1185 "prog_io_item.m"
            parse_tree__prog_io_item__ExistConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistConstraints_20, (MR_Integer) 0)));
#line 1185 "prog_io_item.m"
            parse_tree__prog_io_item__ExistInstConstraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistConstraints_20, (MR_Integer) 1)));
#line 1185 "prog_io_item.m"
          }
#line 1184 "prog_io_item.m"
      }
#line 1192 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1187 "prog_io_item.m"
      {
#line 1187 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ClassConstraints_25;
#line 1187 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_26;

#line 1187 "prog_io_item.m"
        {
#line 1187 "prog_io_item.m"
          parse_tree__prog_io_item__ClassConstraints_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassConstraints_25, 0) = ((MR_Box) (parse_tree__prog_io_item__UnivConstraints_21));
#line 1187 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassConstraints_25, 1) = ((MR_Box) (parse_tree__prog_io_item__ExistConstraints_23));
#line 1187 "prog_io_item.m"
        }
#line 1188 "prog_io_item.m"
        {
#line 1188 "prog_io_item.m"
          parse_tree__prog_io_item__InstConstraints_26 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_item__UnivInstConstraints_22, parse_tree__prog_io_item__ExistInstConstraints_24);
        }
#line 1190 "prog_io_item.m"
        {
#line 1190 "prog_io_item.m"
          MR_Word base;
#line 1190 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeExistClassInstContext_10 = base;
#line 1190 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_16));
#line 1190 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__ClassConstraints_25));
#line 1190 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_26));
#line 1190 "prog_io_item.m"
        }
#line 1187 "prog_io_item.m"
      }
#line 1192 "prog_io_item.m"
    else
#line 1194 "prog_io_item.m"
      {
#line 1194 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeInfo_47_47 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[9];
#line 1194 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeInfo_48_48 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[1];
#line 1194 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_27;
#line 1194 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1194 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;

#line 1193 "prog_io_item.m"
        {
#line 1193 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_47_47, parse_tree__prog_io_item__TypeInfo_48_48, parse_tree__prog_io_item__MaybeUnivConstraints_18);
        }
#line 1194 "prog_io_item.m"
        {
#line 1194 "prog_io_item.m"
          parse_tree__prog_io_item__V_36_36 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_47_47, parse_tree__prog_io_item__TypeInfo_48_48, parse_tree__prog_io_item__MaybeExistConstraints_20);
        }
#line 1193 "prog_io_item.m"
        {
#line 1193 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_35_35, parse_tree__prog_io_item__V_36_36);
        }
#line 1195 "prog_io_item.m"
        {
#line 1195 "prog_io_item.m"
          MR_Word base;
#line 1195 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1195 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeExistClassInstContext_10 = base;
#line 1195 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_27));
#line 1195 "prog_io_item.m"
        }
#line 1194 "prog_io_item.m"
      }
#line 1138 "prog_io_item.m"
  }
#line 1133 "prog_io_item.m"
}

#line 1062 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1(
#line 1062 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1062 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1062 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1062 "prog_io_item.m"
{
#line 1062 "prog_io_item.m"
  {
#line 1062 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1062 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__3_3;

#line 1062 "prog_io_item.m"
    {
#line 1062 "prog_io_item.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__3_3);
    }
#line 1062 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__3_3));
#line 1062 "prog_io_item.m"
  }
#line 1062 "prog_io_item.m"
}

#line 1050 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_16,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_17,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_18,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 1050 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 1050 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24)
#line 1050 "prog_io_item.m"
{
#line 1104 "prog_io_item.m"
  {
#line 1104 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1104 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgModes0_25;

#line 1057 "prog_io_item.m"
    {
#line 1057 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__ArgTerms_14, &parse_tree__prog_io_item__ArgModes0_25);
    }
#line 1104 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1059 "prog_io_item.m"
      {
#line 1059 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_26;
#line 1059 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeConstraints_27;

#line 1058 "prog_io_item.m"
        {
#line 1058 "prog_io_item.m"
          parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_15, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__Attributes0_21, &parse_tree__prog_io_item__Attributes_26, &parse_tree__prog_io_item__MaybeConstraints_27);
        }
#line 1100 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_27)) == (MR_mktag((MR_Integer) 0))))
#line 1101 "prog_io_item.m"
          {
#line 1101 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 0)));

#line 1102 "prog_io_item.m"
            {
#line 1102 "prog_io_item.m"
              MR_Word base;
#line 1102 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1102 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_42));
#line 1102 "prog_io_item.m"
            }
#line 1101 "prog_io_item.m"
          }
#line 1100 "prog_io_item.m"
        else
#line 1061 "prog_io_item.m"
          {
#line 1061 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_130_130;
#line 1061 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 2)));
#line 1061 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgModes_31;
#line 1061 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_45_45;
#line 1061 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 0)));
#line 1061 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 1)));
#line 1092 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__RetMode0_32;

#line 1062 "prog_io_item.m"
            {
#line 1062 "prog_io_item.m"
              parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1062 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[1]));
#line 1062 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1));
#line 1062 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1062 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 3) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_30));
#line 1062 "prog_io_item.m"
            }
#line 5440 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1062 "prog_io_item.m"
            {
#line 1062 "prog_io_item.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_130_130, parse_tree__prog_io_item__TypeCtorInfo_130_130, parse_tree__prog_io_item__V_45_45, parse_tree__prog_io_item__ArgModes0_25, &parse_tree__prog_io_item__ArgModes_31);
            }
#line 1065 "prog_io_item.m"
            {
#line 1065 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__RetModeTerm_17, &parse_tree__prog_io_item__RetMode0_32);
            }
#line 1092 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1068 "prog_io_item.m"
              {
#line 1068 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeCtorInfo_131_131;
#line 1068 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__RetMode_33;
#line 1068 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__InstVarSet_34;
#line 1068 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgReturnModes_35;
#line 1068 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_47_47;

#line 1067 "prog_io_item.m"
                {
#line 1067 "prog_io_item.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_30, parse_tree__prog_io_item__RetMode0_32, &parse_tree__prog_io_item__RetMode_33);
                }
#line 5472 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_131_131 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1069 "prog_io_item.m"
                {
#line 1069 "prog_io_item.m"
                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_131_131, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__InstVarSet_34);
                }
#line 1070 "prog_io_item.m"
                {
#line 1070 "prog_io_item.m"
                  parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__RetMode_33));
#line 1070 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1070 "prog_io_item.m"
                }
#line 1070 "prog_io_item.m"
                {
#line 1070 "prog_io_item.m"
                  parse_tree__prog_io_item__ArgReturnModes_35 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_130_130, parse_tree__prog_io_item__ArgModes_31, parse_tree__prog_io_item__V_47_47);
                }
#line 1072 "prog_io_item.m"
                {
#line 1072 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io_item__ArgReturnModes_35);
                }
#line 1081 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1077 "prog_io_item.m"
                  {
#line 1077 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ItemModeDecl_36;
#line 1077 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Item_37;
#line 1077 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__MaybeItem0_38;

#line 1075 "prog_io_item.m"
                    {
#line 1075 "prog_io_item.m"
                      parse_tree__prog_io_item__ItemModeDecl_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_13));
#line 1075 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[18])));
#line 1075 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 2) = ((MR_Box) (parse_tree__prog_io_item__ArgReturnModes_35));
#line 1075 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1075 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 4) = ((MR_Box) (parse_tree__prog_io_item__MaybeDetism_20));
#line 1075 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 5) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_34));
#line 1075 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_22));
#line 1075 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_23));
#line 1075 "prog_io_item.m"
                    }
#line 1078 "prog_io_item.m"
                    {
#line 1078 "prog_io_item.m"
                      parse_tree__prog_io_item__Item_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1078 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1078 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_37, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemModeDecl_36));
#line 1078 "prog_io_item.m"
                    }
#line 1079 "prog_io_item.m"
                    {
#line 1079 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeItem0_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1079 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_38, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_37));
#line 1079 "prog_io_item.m"
                    }
#line 1080 "prog_io_item.m"
                    {
#line 1080 "prog_io_item.m"
                      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_38, parse_tree__prog_io_item__Attributes_26, parse_tree__prog_io_item__MaybeItem_24);
#line 1080 "prog_io_item.m"
                      return;
                    }
#line 1077 "prog_io_item.m"
                  }
#line 1081 "prog_io_item.m"
                else
#line 1082 "prog_io_item.m"
                  {
#line 1082 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__FullTermStr_39;
#line 1082 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Pieces_40;
#line 1082 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_41;
#line 1082 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_54_54;
#line 1082 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_57_57;
#line 1082 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_60_60;
#line 1082 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_62_62;
#line 1082 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_63_63;
#line 1082 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_72_72;
#line 1082 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_73_73;
#line 1082 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_74_74;
#line 1082 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_75_75;
#line 1082 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_76_76;
#line 1082 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_79_79;

#line 1082 "prog_io_item.m"
                    {
#line 1082 "prog_io_item.m"
                      parse_tree__prog_io_item__FullTermStr_39 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_131_131, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__FullTerm_18);
                    }
#line 1086 "prog_io_item.m"
                    {
#line 1086 "prog_io_item.m"
                      parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1086 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_item__FullTermStr_39));
#line 1086 "prog_io_item.m"
                    }
#line 1086 "prog_io_item.m"
                    {
#line 1086 "prog_io_item.m"
                      parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 1086 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 1086 "prog_io_item.m"
                    }
#line 1085 "prog_io_item.m"
                    {
#line 1085 "prog_io_item.m"
                      parse_tree__prog_io_item__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1085 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 1085 "prog_io_item.m"
                    }
#line 1085 "prog_io_item.m"
                    {
#line 1085 "prog_io_item.m"
                      parse_tree__prog_io_item__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[125])));
#line 1085 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_item__V_60_60));
#line 1085 "prog_io_item.m"
                    }
#line 1084 "prog_io_item.m"
                    {
#line 1084 "prog_io_item.m"
                      parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[122])));
#line 1084 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_item__V_57_57));
#line 1084 "prog_io_item.m"
                    }
#line 1083 "prog_io_item.m"
                    {
#line 1083 "prog_io_item.m"
                      parse_tree__prog_io_item__Pieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1083 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[116])));
#line 1083 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_40, 1) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 1083 "prog_io_item.m"
                    }
#line 1088 "prog_io_item.m"
                    {
#line 1088 "prog_io_item.m"
                      parse_tree__prog_io_item__V_74_74 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_131_131, parse_tree__prog_io_item__FullTerm_18);
                    }
#line 1089 "prog_io_item.m"
                    {
#line 1089 "prog_io_item.m"
                      parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_40));
#line 1089 "prog_io_item.m"
                    }
#line 1089 "prog_io_item.m"
                    {
#line 1089 "prog_io_item.m"
                      parse_tree__prog_io_item__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 1089 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1089 "prog_io_item.m"
                    }
#line 1088 "prog_io_item.m"
                    {
#line 1088 "prog_io_item.m"
                      parse_tree__prog_io_item__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1088 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_item__V_74_74));
#line 1088 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_item__V_75_75));
#line 1088 "prog_io_item.m"
                    }
#line 1089 "prog_io_item.m"
                    {
#line 1089 "prog_io_item.m"
                      parse_tree__prog_io_item__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_item__V_73_73));
#line 1089 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1089 "prog_io_item.m"
                    }
#line 1087 "prog_io_item.m"
                    {
#line 1087 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1087 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1087 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 2) = ((MR_Box) (parse_tree__prog_io_item__V_72_72));
#line 1087 "prog_io_item.m"
                    }
#line 1090 "prog_io_item.m"
                    {
#line 1090 "prog_io_item.m"
                      parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_41));
#line 1090 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1090 "prog_io_item.m"
                    }
#line 1090 "prog_io_item.m"
                    {
#line 1090 "prog_io_item.m"
                      MR_Word base;
#line 1090 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1090 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1090 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 1090 "prog_io_item.m"
                    }
#line 1082 "prog_io_item.m"
                  }
#line 1068 "prog_io_item.m"
              }
#line 1092 "prog_io_item.m"
            else
#line 1094 "prog_io_item.m"
              {
#line 1094 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_91_91;
#line 1094 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_92_92;
#line 1094 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_93_93;
#line 1094 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_98_98;
#line 1094 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_125;

#line 1096 "prog_io_item.m"
                {
#line 1096 "prog_io_item.m"
                  parse_tree__prog_io_item__V_93_93 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__RetModeTerm_17);
                }
#line 1096 "prog_io_item.m"
                {
#line 1096 "prog_io_item.m"
                  parse_tree__prog_io_item__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_item__V_93_93));
#line 1096 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[126])));
#line 1096 "prog_io_item.m"
                }
#line 1097 "prog_io_item.m"
                {
#line 1097 "prog_io_item.m"
                  parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 1097 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1097 "prog_io_item.m"
                }
#line 1095 "prog_io_item.m"
                {
#line 1095 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1095 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1095 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1095 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_125, 2) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1095 "prog_io_item.m"
                }
#line 1098 "prog_io_item.m"
                {
#line 1098 "prog_io_item.m"
                  parse_tree__prog_io_item__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_125));
#line 1098 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1098 "prog_io_item.m"
                }
#line 1098 "prog_io_item.m"
                {
#line 1098 "prog_io_item.m"
                  MR_Word base;
#line 1098 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1098 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1098 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_98_98));
#line 1098 "prog_io_item.m"
                }
#line 1094 "prog_io_item.m"
              }
#line 1061 "prog_io_item.m"
          }
#line 1059 "prog_io_item.m"
      }
#line 1104 "prog_io_item.m"
    else
#line 1106 "prog_io_item.m"
      {
#line 1106 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_135_135 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1106 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__FuncModeStr_43;
#line 1106 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_102_102;
#line 1106 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_105_105;
#line 1106 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_106_106;
#line 1106 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_115_115;
#line 1106 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_116_116;
#line 1106 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_117_117;
#line 1106 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_118_118;
#line 1106 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_119_119;
#line 1106 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_122_122;
#line 1106 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_126;
#line 1106 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_127;

#line 1106 "prog_io_item.m"
        {
#line 1106 "prog_io_item.m"
          parse_tree__prog_io_item__FuncModeStr_43 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_135_135, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__FuncMode_16);
        }
#line 1109 "prog_io_item.m"
        {
#line 1109 "prog_io_item.m"
          parse_tree__prog_io_item__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1109 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_106_106, 1) = ((MR_Box) (parse_tree__prog_io_item__FuncModeStr_43));
#line 1109 "prog_io_item.m"
        }
#line 1109 "prog_io_item.m"
        {
#line 1109 "prog_io_item.m"
          parse_tree__prog_io_item__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_105_105, 0) = ((MR_Box) (parse_tree__prog_io_item__V_106_106));
#line 1109 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 1109 "prog_io_item.m"
        }
#line 1108 "prog_io_item.m"
        {
#line 1108 "prog_io_item.m"
          parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[127])));
#line 1108 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (parse_tree__prog_io_item__V_105_105));
#line 1108 "prog_io_item.m"
        }
#line 1107 "prog_io_item.m"
        {
#line 1107 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[109])));
#line 1107 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_126, 1) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 1107 "prog_io_item.m"
        }
#line 1111 "prog_io_item.m"
        {
#line 1111 "prog_io_item.m"
          parse_tree__prog_io_item__V_117_117 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_135_135, parse_tree__prog_io_item__FuncMode_16);
        }
#line 1111 "prog_io_item.m"
        {
#line 1111 "prog_io_item.m"
          parse_tree__prog_io_item__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1111 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_119_119, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_126));
#line 1111 "prog_io_item.m"
        }
#line 1111 "prog_io_item.m"
        {
#line 1111 "prog_io_item.m"
          parse_tree__prog_io_item__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_118_118, 0) = ((MR_Box) (parse_tree__prog_io_item__V_119_119));
#line 1111 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1111 "prog_io_item.m"
        }
#line 1111 "prog_io_item.m"
        {
#line 1111 "prog_io_item.m"
          parse_tree__prog_io_item__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1111 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_item__V_117_117));
#line 1111 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_116_116, 1) = ((MR_Box) (parse_tree__prog_io_item__V_118_118));
#line 1111 "prog_io_item.m"
        }
#line 1111 "prog_io_item.m"
        {
#line 1111 "prog_io_item.m"
          parse_tree__prog_io_item__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io_item__V_116_116));
#line 1111 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1111 "prog_io_item.m"
        }
#line 1110 "prog_io_item.m"
        {
#line 1110 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1110 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1110 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1110 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 2) = ((MR_Box) (parse_tree__prog_io_item__V_115_115));
#line 1110 "prog_io_item.m"
        }
#line 1112 "prog_io_item.m"
        {
#line 1112 "prog_io_item.m"
          parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_127));
#line 1112 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1112 "prog_io_item.m"
        }
#line 1112 "prog_io_item.m"
        {
#line 1112 "prog_io_item.m"
          MR_Word base;
#line 1112 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1112 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1112 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 1112 "prog_io_item.m"
        }
#line 1106 "prog_io_item.m"
      }
#line 1104 "prog_io_item.m"
  }
#line 1050 "prog_io_item.m"
}

#line 1007 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1(
#line 1007 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1007 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1007 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1007 "prog_io_item.m"
{
#line 1007 "prog_io_item.m"
  {
#line 1007 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1007 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__3_3;

#line 1007 "prog_io_item.m"
    {
#line 1007 "prog_io_item.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__3_3);
    }
#line 1007 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__3_3));
#line 1007 "prog_io_item.m"
  }
#line 1007 "prog_io_item.m"
}

#line 996 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_12,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_13,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_15,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_16,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 996 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 996 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 996 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22)
#line 996 "prog_io_item.m"
{
#line 1041 "prog_io_item.m"
  {
#line 1041 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1041 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgModes0_23;

#line 1002 "prog_io_item.m"
    {
#line 1002 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__ArgTerms_13, &parse_tree__prog_io_item__ArgModes0_23);
    }
#line 1041 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1004 "prog_io_item.m"
      {
#line 1004 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_24;
#line 1004 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeConstraints_25;

#line 1003 "prog_io_item.m"
        {
#line 1003 "prog_io_item.m"
          parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_14, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__Attributes0_19, &parse_tree__prog_io_item__Attributes_24, &parse_tree__prog_io_item__MaybeConstraints_25);
        }
#line 1037 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_25)) == (MR_mktag((MR_Integer) 0))))
#line 1038 "prog_io_item.m"
          {
#line 1038 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 0)));

#line 1039 "prog_io_item.m"
            {
#line 1039 "prog_io_item.m"
              MR_Word base;
#line 1039 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 1039 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_39));
#line 1039 "prog_io_item.m"
            }
#line 1038 "prog_io_item.m"
          }
#line 1037 "prog_io_item.m"
        else
#line 1006 "prog_io_item.m"
          {
#line 1006 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_104_104;
#line 1006 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_105_105;
#line 1006 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 2)));
#line 1006 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgModes_29;
#line 1006 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstVarSet_30;
#line 1006 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 1006 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 0)));
#line 1006 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 1)));

#line 1007 "prog_io_item.m"
            {
#line 1007 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[1]));
#line 1007 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1));
#line 1007 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1007 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 3) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_28));
#line 1007 "prog_io_item.m"
            }
#line 6117 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1007 "prog_io_item.m"
            {
#line 1007 "prog_io_item.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_104_104, parse_tree__prog_io_item__TypeCtorInfo_104_104, parse_tree__prog_io_item__V_41_41, parse_tree__prog_io_item__ArgModes0_23, &parse_tree__prog_io_item__ArgModes_29);
            }
#line 6124 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_105_105 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1009 "prog_io_item.m"
            {
#line 1009 "prog_io_item.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_16, &parse_tree__prog_io_item__InstVarSet_30);
            }
#line 1010 "prog_io_item.m"
            {
#line 1010 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io_item__ArgModes_29);
            }
#line 1026 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1019 "prog_io_item.m"
              {
#line 1019 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybePredOrFunc_31;
#line 1019 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemModeDecl_33;
#line 1019 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_34;
#line 1019 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeItem0_35;

#line 1014 "prog_io_item.m"
                if ((parse_tree__prog_io_item__WithInst_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1012 "prog_io_item.m"
                  {
#line 1013 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybePredOrFunc_31 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[17]);
#line 1012 "prog_io_item.m"
                  }
#line 1014 "prog_io_item.m"
                else
#line 1018 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybePredOrFunc_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1020 "prog_io_item.m"
                {
#line 1020 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemModeDecl_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_12));
#line 1020 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 1) = ((MR_Box) (parse_tree__prog_io_item__MaybePredOrFunc_31));
#line 1020 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 2) = ((MR_Box) (parse_tree__prog_io_item__ArgModes_29));
#line 1020 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 3) = ((MR_Box) (parse_tree__prog_io_item__WithInst_17));
#line 1020 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 4) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_18));
#line 1020 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 5) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_30));
#line 1020 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_20));
#line 1020 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_21));
#line 1020 "prog_io_item.m"
                }
#line 1023 "prog_io_item.m"
                {
#line 1023 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1023 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_34, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemModeDecl_33));
#line 1023 "prog_io_item.m"
                }
#line 1024 "prog_io_item.m"
                {
#line 1024 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybeItem0_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_35, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_34));
#line 1024 "prog_io_item.m"
                }
#line 1025 "prog_io_item.m"
                {
#line 1025 "prog_io_item.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_35, parse_tree__prog_io_item__Attributes_24, parse_tree__prog_io_item__MaybeItem_22);
#line 1025 "prog_io_item.m"
                  return;
                }
#line 1019 "prog_io_item.m"
              }
#line 1026 "prog_io_item.m"
            else
#line 1027 "prog_io_item.m"
              {
#line 1027 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredModeTermStr_36;
#line 1027 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_37;
#line 1027 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_38;
#line 1027 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_45_45;
#line 1027 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_48_48;
#line 1027 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_51_51;
#line 1027 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_53_53;
#line 1027 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_54_54;
#line 1027 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_63_63;
#line 1027 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_64_64;
#line 1027 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_65_65;
#line 1027 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_66_66;
#line 1027 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_67_67;
#line 1027 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_70_70;

#line 1027 "prog_io_item.m"
                {
#line 1027 "prog_io_item.m"
                  parse_tree__prog_io_item__PredModeTermStr_36 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__PredModeTerm_15);
                }
#line 1031 "prog_io_item.m"
                {
#line 1031 "prog_io_item.m"
                  parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1031 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_36));
#line 1031 "prog_io_item.m"
                }
#line 1031 "prog_io_item.m"
                {
#line 1031 "prog_io_item.m"
                  parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 1031 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 1031 "prog_io_item.m"
                }
#line 1030 "prog_io_item.m"
                {
#line 1030 "prog_io_item.m"
                  parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1030 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 1030 "prog_io_item.m"
                }
#line 1030 "prog_io_item.m"
                {
#line 1030 "prog_io_item.m"
                  parse_tree__prog_io_item__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[123])));
#line 1030 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 1) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 1030 "prog_io_item.m"
                }
#line 1029 "prog_io_item.m"
                {
#line 1029 "prog_io_item.m"
                  parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[122])));
#line 1029 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_item__V_48_48));
#line 1029 "prog_io_item.m"
                }
#line 1028 "prog_io_item.m"
                {
#line 1028 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[116])));
#line 1028 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_37, 1) = ((MR_Box) (parse_tree__prog_io_item__V_45_45));
#line 1028 "prog_io_item.m"
                }
#line 1033 "prog_io_item.m"
                {
#line 1033 "prog_io_item.m"
                  parse_tree__prog_io_item__V_65_65 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, parse_tree__prog_io_item__PredModeTerm_15);
                }
#line 1034 "prog_io_item.m"
                {
#line 1034 "prog_io_item.m"
                  parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1034 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_37));
#line 1034 "prog_io_item.m"
                }
#line 1034 "prog_io_item.m"
                {
#line 1034 "prog_io_item.m"
                  parse_tree__prog_io_item__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 1034 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1034 "prog_io_item.m"
                }
#line 1033 "prog_io_item.m"
                {
#line 1033 "prog_io_item.m"
                  parse_tree__prog_io_item__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1033 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_item__V_65_65));
#line 1033 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_item__V_66_66));
#line 1033 "prog_io_item.m"
                }
#line 1034 "prog_io_item.m"
                {
#line 1034 "prog_io_item.m"
                  parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__V_64_64));
#line 1034 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1034 "prog_io_item.m"
                }
#line 1032 "prog_io_item.m"
                {
#line 1032 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1032 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1032 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1032 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 1032 "prog_io_item.m"
                }
#line 1035 "prog_io_item.m"
                {
#line 1035 "prog_io_item.m"
                  parse_tree__prog_io_item__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_38));
#line 1035 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1035 "prog_io_item.m"
                }
#line 1035 "prog_io_item.m"
                {
#line 1035 "prog_io_item.m"
                  MR_Word base;
#line 1035 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1035 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 1035 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 1035 "prog_io_item.m"
                }
#line 1027 "prog_io_item.m"
              }
#line 1006 "prog_io_item.m"
          }
#line 1004 "prog_io_item.m"
      }
#line 1041 "prog_io_item.m"
    else
#line 1042 "prog_io_item.m"
      {
#line 1042 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_108_108 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1042 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_74_74;
#line 1042 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_77_77;
#line 1042 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_80_80;
#line 1042 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_81_81;
#line 1042 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_90_90;
#line 1042 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_91_91;
#line 1042 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_92_92;
#line 1042 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_93_93;
#line 1042 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_94_94;
#line 1042 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_97_97;
#line 1042 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__PredModeTermStr_99;
#line 1042 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_100;
#line 1042 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_101;

#line 1042 "prog_io_item.m"
        {
#line 1042 "prog_io_item.m"
          parse_tree__prog_io_item__PredModeTermStr_99 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_108_108, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__PredModeTerm_15);
        }
#line 1044 "prog_io_item.m"
        {
#line 1044 "prog_io_item.m"
          parse_tree__prog_io_item__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1044 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_81_81, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_99));
#line 1044 "prog_io_item.m"
        }
#line 1044 "prog_io_item.m"
        {
#line 1044 "prog_io_item.m"
          parse_tree__prog_io_item__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_item__V_81_81));
#line 1044 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 1044 "prog_io_item.m"
        }
#line 1044 "prog_io_item.m"
        {
#line 1044 "prog_io_item.m"
          parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[111])));
#line 1044 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 1044 "prog_io_item.m"
        }
#line 1043 "prog_io_item.m"
        {
#line 1043 "prog_io_item.m"
          parse_tree__prog_io_item__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[124])));
#line 1043 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 1043 "prog_io_item.m"
        }
#line 1043 "prog_io_item.m"
        {
#line 1043 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[106])));
#line 1043 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_100, 1) = ((MR_Box) (parse_tree__prog_io_item__V_74_74));
#line 1043 "prog_io_item.m"
        }
#line 1046 "prog_io_item.m"
        {
#line 1046 "prog_io_item.m"
          parse_tree__prog_io_item__V_92_92 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_108_108, parse_tree__prog_io_item__PredModeTerm_15);
        }
#line 1046 "prog_io_item.m"
        {
#line 1046 "prog_io_item.m"
          parse_tree__prog_io_item__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_100));
#line 1046 "prog_io_item.m"
        }
#line 1046 "prog_io_item.m"
        {
#line 1046 "prog_io_item.m"
          parse_tree__prog_io_item__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_item__V_94_94));
#line 1046 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1046 "prog_io_item.m"
        }
#line 1046 "prog_io_item.m"
        {
#line 1046 "prog_io_item.m"
          parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 1046 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (parse_tree__prog_io_item__V_93_93));
#line 1046 "prog_io_item.m"
        }
#line 1046 "prog_io_item.m"
        {
#line 1046 "prog_io_item.m"
          parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1046 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1046 "prog_io_item.m"
        }
#line 1045 "prog_io_item.m"
        {
#line 1045 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1045 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1045 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1045 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 2) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 1045 "prog_io_item.m"
        }
#line 1047 "prog_io_item.m"
        {
#line 1047 "prog_io_item.m"
          parse_tree__prog_io_item__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_101));
#line 1047 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1047 "prog_io_item.m"
        }
#line 1047 "prog_io_item.m"
        {
#line 1047 "prog_io_item.m"
          MR_Word base;
#line 1047 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1047 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 1047 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_97_97));
#line 1047 "prog_io_item.m"
        }
#line 1042 "prog_io_item.m"
      }
#line 1041 "prog_io_item.m"
  }
#line 996 "prog_io_item.m"
}

#line 956 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_14,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_15,
#line 956 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_16,
#line 956 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_17,
#line 956 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_18)
#line 956 "prog_io_item.m"
{
#line 981 "prog_io_item.m"
  {
#line 981 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 981 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeSugaredFuncTerm_19;
#line 981 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnTypeTerm_20;
#line 963 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_28_28;
#line 963 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_29_29;
#line 963 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 963 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;
#line 963 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 964 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;

#line 963 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 963 "prog_io_item.m"
      {
#line 964 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_12)) == (MR_mktag((MR_Integer) 0)));
#line 964 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 964 "prog_io_item.m"
          {
#line 964 "prog_io_item.m"
            parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 0)));
#line 964 "prog_io_item.m"
            parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 1)));
#line 964 "prog_io_item.m"
            parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 2)));
#line 964 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 964 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 964 "prog_io_item.m"
              {
#line 964 "prog_io_item.m"
                parse_tree__prog_io_item__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_28_28, (MR_Integer) 0)));
#line 964 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_29_29, (MR_String) "=") == 0);
#line 963 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 963 "prog_io_item.m"
                  {
#line 965 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 965 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 965 "prog_io_item.m"
                      {
#line 965 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeSugaredFuncTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 0)));
#line 965 "prog_io_item.m"
                        parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 1)));
#line 965 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 965 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 965 "prog_io_item.m"
                          {
#line 965 "prog_io_item.m"
                            parse_tree__prog_io_item__ReturnTypeTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 965 "prog_io_item.m"
                            parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, (MR_Integer) 1)));
#line 965 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 965 "prog_io_item.m"
                          }
#line 965 "prog_io_item.m"
                      }
#line 963 "prog_io_item.m"
                  }
#line 964 "prog_io_item.m"
              }
#line 964 "prog_io_item.m"
          }
#line 963 "prog_io_item.m"
      }
#line 981 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 967 "prog_io_item.m"
      {
#line 967 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncTerm_22;
#line 967 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_24;

#line 967 "prog_io_item.m"
        {
#line 967 "prog_io_item.m"
          parse_tree__prog_io_item__FuncTerm_22 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__MaybeSugaredFuncTerm_19);
        }
#line 970 "prog_io_item.m"
        {
#line 970 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_22, parse_tree__prog_io_item__VarSet_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[75]), &parse_tree__prog_io_item__MaybeFunctorArgs_24);
        }
#line 975 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_24)) == (MR_mktag((MR_Integer) 0))))
#line 973 "prog_io_item.m"
          {
#line 973 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 0)));

#line 974 "prog_io_item.m"
            {
#line 974 "prog_io_item.m"
              MR_Word base;
#line 974 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 974 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 974 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_25));
#line 974 "prog_io_item.m"
            }
#line 973 "prog_io_item.m"
          }
#line 975 "prog_io_item.m"
        else
#line 976 "prog_io_item.m"
          {
#line 976 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 0)));
#line 976 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 1)));

#line 977 "prog_io_item.m"
            {
#line 977 "prog_io_item.m"
              parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(parse_tree__prog_io_item__Functor_26, parse_tree__prog_io_item__ArgTerms_27, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_22, parse_tree__prog_io_item__ReturnTypeTerm_20, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__MaybeDet_15, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_16, parse_tree__prog_io_item__SeqNum_17, parse_tree__prog_io_item__MaybeItem_18);
#line 977 "prog_io_item.m"
              return;
            }
#line 976 "prog_io_item.m"
          }
#line 967 "prog_io_item.m"
      }
#line 981 "prog_io_item.m"
    else
#line 982 "prog_io_item.m"
      {
#line 982 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_58;

#line 983 "prog_io_item.m"
        {
#line 983 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76]), &parse_tree__prog_io_item__MaybeFunctorArgs_58);
        }
#line 988 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_58)) == (MR_mktag((MR_Integer) 0))))
#line 986 "prog_io_item.m"
          {
#line 986 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 0)));

#line 987 "prog_io_item.m"
            {
#line 987 "prog_io_item.m"
              MR_Word base;
#line 987 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 987 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 987 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_51));
#line 987 "prog_io_item.m"
            }
#line 986 "prog_io_item.m"
          }
#line 988 "prog_io_item.m"
        else
#line 989 "prog_io_item.m"
          {
#line 989 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 0)));
#line 989 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 1)));

#line 990 "prog_io_item.m"
            {
#line 990 "prog_io_item.m"
              parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(parse_tree__prog_io_item__Functor_52, parse_tree__prog_io_item__ArgTerms_53, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__WithInst_14, parse_tree__prog_io_item__MaybeDet_15, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_16, parse_tree__prog_io_item__SeqNum_17, parse_tree__prog_io_item__MaybeItem_18);
#line 990 "prog_io_item.m"
              return;
            }
#line 989 "prog_io_item.m"
          }
#line 982 "prog_io_item.m"
      }
#line 981 "prog_io_item.m"
  }
#line 956 "prog_io_item.m"
}

#line 924 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_7_p_0(
#line 924 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 924 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 924 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 924 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 924 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 924 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 924 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 924 "prog_io_item.m"
{
#line 928 "prog_io_item.m"
  {
#line 928 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 928 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTerm_15;
#line 928 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_16;
#line 928 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithInst_18;
#line 928 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BaseTerm_19;
#line 1364 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTermPrime_58;
#line 1364 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InstTerm_59;
#line 1351 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_64_64;
#line 1351 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_65_65;
#line 1351 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_66_66;
#line 1351 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_67_67;
#line 1351 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_68_68;
#line 1351 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_60_60;
#line 950 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeDetism_20;
#line 950 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithInst_21;

#line 929 "prog_io_item.m"
    {
#line 929 "prog_io_item.m"
      parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Term_10, &parse_tree__prog_io_item__BeforeDetismTerm_15, &parse_tree__prog_io_item__MaybeMaybeDetism_16);
    }
#line 1351 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__BeforeDetismTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 1351 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1351 "prog_io_item.m"
      {
#line 1351 "prog_io_item.m"
        parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 0)));
#line 1351 "prog_io_item.m"
        parse_tree__prog_io_item__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 1)));
#line 1351 "prog_io_item.m"
        parse_tree__prog_io_item__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 2)));
#line 1351 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 1351 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1351 "prog_io_item.m"
          {
#line 1351 "prog_io_item.m"
            parse_tree__prog_io_item__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 1351 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_65_65, (MR_String) "with_inst") == 0);
#line 1351 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1351 "prog_io_item.m"
              {
#line 1352 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_66_66)) == (MR_mktag((MR_Integer) 1)));
#line 1352 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1352 "prog_io_item.m"
                  {
#line 1352 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeWithInstTermPrime_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, (MR_Integer) 0)));
#line 1352 "prog_io_item.m"
                    parse_tree__prog_io_item__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, (MR_Integer) 1)));
#line 1352 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 1352 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1352 "prog_io_item.m"
                      {
#line 1352 "prog_io_item.m"
                        parse_tree__prog_io_item__InstTerm_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, (MR_Integer) 0)));
#line 1352 "prog_io_item.m"
                        parse_tree__prog_io_item__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, (MR_Integer) 1)));
#line 1352 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1352 "prog_io_item.m"
                      }
#line 1352 "prog_io_item.m"
                  }
#line 1351 "prog_io_item.m"
              }
#line 1351 "prog_io_item.m"
          }
#line 1351 "prog_io_item.m"
      }
#line 1364 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1354 "prog_io_item.m"
      {
#line 1357 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Inst_61;

#line 1354 "prog_io_item.m"
        parse_tree__prog_io_item__BaseTerm_19 = parse_tree__prog_io_item__BeforeWithInstTermPrime_58;
#line 1355 "prog_io_item.m"
        {
#line 1355 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__InstTerm_59, &parse_tree__prog_io_item__Inst_61);
        }
#line 1357 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1356 "prog_io_item.m"
          {
#line 1356 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_70_70;

#line 1356 "prog_io_item.m"
            {
#line 1356 "prog_io_item.m"
              parse_tree__prog_io_item__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_item__Inst_61));
#line 1356 "prog_io_item.m"
            }
#line 1356 "prog_io_item.m"
            {
#line 1356 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_18, 0) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 1356 "prog_io_item.m"
            }
#line 1356 "prog_io_item.m"
          }
#line 1357 "prog_io_item.m"
        else
#line 1359 "prog_io_item.m"
          {
#line 1359 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_63;
#line 1359 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_84_84;
#line 1359 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_85_85;
#line 1359 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_86_86;
#line 1359 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_91_91;

#line 1361 "prog_io_item.m"
            {
#line 1361 "prog_io_item.m"
              parse_tree__prog_io_item__V_86_86 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__InstTerm_59);
            }
#line 1361 "prog_io_item.m"
            {
#line 1361 "prog_io_item.m"
              parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1361 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__V_86_86));
#line 1361 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[121])));
#line 1361 "prog_io_item.m"
            }
#line 1361 "prog_io_item.m"
            {
#line 1361 "prog_io_item.m"
              parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 1361 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1361 "prog_io_item.m"
            }
#line 1360 "prog_io_item.m"
            {
#line 1360 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1360 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1360 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1360 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 2) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 1360 "prog_io_item.m"
            }
#line 1362 "prog_io_item.m"
            {
#line 1362 "prog_io_item.m"
              parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_63));
#line 1362 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1362 "prog_io_item.m"
            }
#line 1362 "prog_io_item.m"
            {
#line 1362 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1362 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeWithInst_18, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1362 "prog_io_item.m"
            }
#line 1359 "prog_io_item.m"
          }
#line 1354 "prog_io_item.m"
      }
#line 1364 "prog_io_item.m"
    else
#line 1365 "prog_io_item.m"
      {
#line 1365 "prog_io_item.m"
        parse_tree__prog_io_item__BaseTerm_19 = parse_tree__prog_io_item__BeforeDetismTerm_15;
#line 1366 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[16]);
#line 1365 "prog_io_item.m"
      }
#line 934 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_16)) == (MR_mktag((MR_Integer) 1)));
#line 934 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 934 "prog_io_item.m"
      {
#line 934 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeDetism_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_16, (MR_Integer) 0)));
#line 935 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_18)) == (MR_mktag((MR_Integer) 1)));
#line 935 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 935 "prog_io_item.m"
          parse_tree__prog_io_item__WithInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_18, (MR_Integer) 0)));
#line 934 "prog_io_item.m"
      }
#line 950 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 946 "prog_io_item.m"
      {
#line 938 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 939 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;

#line 938 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_20)) == (MR_mktag((MR_Integer) 1)));
#line 938 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 938 "prog_io_item.m"
          {
#line 938 "prog_io_item.m"
            parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_20, (MR_Integer) 0)));
#line 939 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_21)) == (MR_mktag((MR_Integer) 1)));
#line 939 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 939 "prog_io_item.m"
              parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_21, (MR_Integer) 0)));
#line 938 "prog_io_item.m"
          }
#line 946 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 942 "prog_io_item.m"
          {
#line 942 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_25;
#line 942 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 942 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 942 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_42_42;
#line 942 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_47_47;

#line 944 "prog_io_item.m"
            {
#line 944 "prog_io_item.m"
              parse_tree__prog_io_item__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_10);
            }
#line 944 "prog_io_item.m"
            {
#line 944 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 944 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[98])));
#line 944 "prog_io_item.m"
            }
#line 944 "prog_io_item.m"
            {
#line 944 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 944 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 944 "prog_io_item.m"
            }
#line 943 "prog_io_item.m"
            {
#line 943 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 943 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 943 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 943 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 943 "prog_io_item.m"
            }
#line 945 "prog_io_item.m"
            {
#line 945 "prog_io_item.m"
              parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_25));
#line 945 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "prog_io_item.m"
            }
#line 945 "prog_io_item.m"
            {
#line 945 "prog_io_item.m"
              MR_Word base;
#line 945 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 945 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 945 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 945 "prog_io_item.m"
            }
#line 942 "prog_io_item.m"
          }
#line 946 "prog_io_item.m"
        else
#line 947 "prog_io_item.m"
          {
#line 947 "prog_io_item.m"
            parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__BaseTerm_19, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__WithInst_21, parse_tree__prog_io_item__MaybeDetism_20, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeItem_14);
#line 947 "prog_io_item.m"
            return;
          }
#line 946 "prog_io_item.m"
      }
#line 950 "prog_io_item.m"
    else
#line 952 "prog_io_item.m"
      {
#line 952 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_26;
#line 952 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_49_49;
#line 952 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_50_50;

#line 951 "prog_io_item.m"
        {
#line 951 "prog_io_item.m"
          parse_tree__prog_io_item__V_49_49 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_16);
        }
#line 952 "prog_io_item.m"
        {
#line 952 "prog_io_item.m"
          parse_tree__prog_io_item__V_50_50 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_18);
        }
#line 952 "prog_io_item.m"
        {
#line 952 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_49_49, parse_tree__prog_io_item__V_50_50);
        }
#line 953 "prog_io_item.m"
        {
#line 953 "prog_io_item.m"
          MR_Word base;
#line 953 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 953 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 953 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_26));
#line 953 "prog_io_item.m"
        }
#line 952 "prog_io_item.m"
      }
#line 928 "prog_io_item.m"
  }
#line 924 "prog_io_item.m"
}

#line 915 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__wrap_nth_2_p_0(
#line 915 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__N_3,
#line 915 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_2)
#line 915 "prog_io_item.m"
{
#line 917 "prog_io_item.m"
  {
#line 917 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 917 "prog_io_item.m"
    {
#line 917 "prog_io_item.m"
      MR_Word base;
#line 917 "prog_io_item.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "prog_io_item.m"
      *parse_tree__prog_io_item__HeadVar__2_2 = base;
#line 917 "prog_io_item.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 917 "prog_io_item.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_item__N_3));
#line 917 "prog_io_item.m"
    }
#line 917 "prog_io_item.m"
  }
#line 915 "prog_io_item.m"
}

#line 897 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0(
#line 897 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__ArgNum_1,
#line 897 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 897 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3,
#line 897 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__4_4)
#line 897 "prog_io_item.m"
{
#line 900 "prog_io_item.m"
  {
#line 900 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 900 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 900 "prog_io_item.m"
      {
#line 900 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 900 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 900 "prog_io_item.m"
      }
#line 900 "prog_io_item.m"
    else
#line 902 "prog_io_item.m"
      {
#line 902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__WithModeArgNums0_11;
#line 902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__WithoutModeArgNums0_12;
#line 902 "prog_io_item.m"
        MR_Integer parse_tree__prog_io_item__V_16_16 = (parse_tree__prog_io_item__ArgNum_1 + (MR_Integer) 1);

#line 903 "prog_io_item.m"
        {
#line 903 "prog_io_item.m"
          parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0(parse_tree__prog_io_item__V_16_16, parse_tree__prog_io_item__Tail_8, &parse_tree__prog_io_item__WithModeArgNums0_11, &parse_tree__prog_io_item__WithoutModeArgNums0_12);
        }
#line 909 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__Head_7)) == (MR_mktag((MR_Integer) 1))))
#line 910 "prog_io_item.m"
          {
#line 911 "prog_io_item.m"
            {
#line 911 "prog_io_item.m"
              MR_Word base;
#line 911 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "prog_io_item.m"
              *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 911 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgNum_1));
#line 911 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__WithModeArgNums0_11));
#line 911 "prog_io_item.m"
            }
#line 912 "prog_io_item.m"
            *parse_tree__prog_io_item__HeadVar__4_4 = parse_tree__prog_io_item__WithoutModeArgNums0_12;
#line 910 "prog_io_item.m"
          }
#line 909 "prog_io_item.m"
        else
#line 906 "prog_io_item.m"
          {
#line 907 "prog_io_item.m"
            *parse_tree__prog_io_item__HeadVar__3_3 = parse_tree__prog_io_item__WithModeArgNums0_11;
#line 908 "prog_io_item.m"
            {
#line 908 "prog_io_item.m"
              MR_Word base;
#line 908 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "prog_io_item.m"
              *parse_tree__prog_io_item__HeadVar__4_4 = base;
#line 908 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgNum_1));
#line 908 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__WithoutModeArgNums0_12));
#line 908 "prog_io_item.m"
            }
#line 906 "prog_io_item.m"
          }
#line 902 "prog_io_item.m"
      }
#line 900 "prog_io_item.m"
  }
#line 897 "prog_io_item.m"
}

#line 884 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0_1(
#line 884 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 884 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 884 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 884 "prog_io_item.m"
{
#line 884 "prog_io_item.m"
  {
#line 884 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 884 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_2;

#line 884 "prog_io_item.m"
    {
#line 884 "prog_io_item.m"
      parse_tree__prog_io_item__wrap_nth_2_p_0(((MR_Integer) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_2);
    }
#line 884 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_2));
#line 884 "prog_io_item.m"
  }
#line 884 "prog_io_item.m"
}

#line 853 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(
#line 853 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypesAndModes_4,
#line 853 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ErrorTerm_5,
#line 853 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeSpec_6)
#line 853 "prog_io_item.m"
{
#line 856 "prog_io_item.m"
  {
#line 856 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 856 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithModeArgNums_7;
#line 856 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithoutModeArgNums_8;

#line 857 "prog_io_item.m"
    {
#line 857 "prog_io_item.m"
      parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0((MR_Integer) 1, parse_tree__prog_io_item__TypesAndModes_4, &parse_tree__prog_io_item__WithModeArgNums_7, &parse_tree__prog_io_item__WithoutModeArgNums_8);
    }
#line 864 "prog_io_item.m"
    if ((parse_tree__prog_io_item__WithModeArgNums_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "prog_io_item.m"
      if ((parse_tree__prog_io_item__WithoutModeArgNums_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 860 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 864 "prog_io_item.m"
      else
#line 868 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 864 "prog_io_item.m"
    else
#line 864 "prog_io_item.m"
    if ((parse_tree__prog_io_item__WithoutModeArgNums_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "prog_io_item.m"
      *parse_tree__prog_io_item__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 864 "prog_io_item.m"
    else
#line 875 "prog_io_item.m"
      {
#line 875 "prog_io_item.m"
        MR_Integer parse_tree__prog_io_item__FirstWithout_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithoutModeArgNums_8, (MR_Integer) 0)));
#line 875 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__RestWithout_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithoutModeArgNums_8, (MR_Integer) 1)));
#line 875 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__IdPieces_17;
#line 875 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_22;
#line 875 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_23;
#line 875 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_47_47;
#line 875 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_51_51;
#line 875 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_52_52;
#line 875 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_53_53;
#line 875 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_54_54;
#line 875 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_55_55;

#line 882 "prog_io_item.m"
        if ((parse_tree__prog_io_item__RestWithout_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 879 "prog_io_item.m"
          {
#line 879 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_37_37;
#line 879 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;

#line 881 "prog_io_item.m"
            {
#line 881 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 881 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io_item__FirstWithout_15));
#line 881 "prog_io_item.m"
            }
#line 881 "prog_io_item.m"
            {
#line 881 "prog_io_item.m"
              parse_tree__prog_io_item__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 881 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 881 "prog_io_item.m"
            }
#line 880 "prog_io_item.m"
            {
#line 880 "prog_io_item.m"
              parse_tree__prog_io_item__IdPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__IdPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[118])));
#line 880 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__IdPieces_17, 1) = ((MR_Box) (parse_tree__prog_io_item__V_37_37));
#line 880 "prog_io_item.m"
            }
#line 879 "prog_io_item.m"
          }
#line 882 "prog_io_item.m"
        else
#line 883 "prog_io_item.m"
          {
#line 883 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 883 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__WithoutArgNumPieces_20;
#line 883 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__WithoutArgNumsPieces_21;
#line 883 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_26_26;

#line 884 "prog_io_item.m"
            {
#line 884 "prog_io_item.m"
              mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__prog_io_item__TypeCtorInfo_61_61, (MR_Word) &parse_tree__prog_io_item_scalar_common_2[4], parse_tree__prog_io_item__WithoutModeArgNums_8, &parse_tree__prog_io_item__WithoutArgNumPieces_20);
            }
#line 885 "prog_io_item.m"
            {
#line 885 "prog_io_item.m"
              parse_tree__prog_io_item__WithoutArgNumsPieces_21 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__prog_io_item__WithoutArgNumPieces_20);
            }
#line 887 "prog_io_item.m"
            {
#line 887 "prog_io_item.m"
              parse_tree__prog_io_item__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[119])));
#line 887 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io_item__WithoutArgNumsPieces_21));
#line 887 "prog_io_item.m"
            }
#line 888 "prog_io_item.m"
            {
#line 888 "prog_io_item.m"
              parse_tree__prog_io_item__IdPieces_17 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_61_61, parse_tree__prog_io_item__V_26_26, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13]));
            }
#line 883 "prog_io_item.m"
          }
#line 891 "prog_io_item.m"
        {
#line 891 "prog_io_item.m"
          parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 891 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_item__IdPieces_17));
#line 891 "prog_io_item.m"
        }
#line 890 "prog_io_item.m"
        {
#line 890 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[120])));
#line 890 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_22, 1) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 890 "prog_io_item.m"
        }
#line 893 "prog_io_item.m"
        {
#line 893 "prog_io_item.m"
          parse_tree__prog_io_item__V_53_53 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ErrorTerm_5);
        }
#line 893 "prog_io_item.m"
        {
#line 893 "prog_io_item.m"
          parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 893 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_22));
#line 893 "prog_io_item.m"
        }
#line 893 "prog_io_item.m"
        {
#line 893 "prog_io_item.m"
          parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 893 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 893 "prog_io_item.m"
        }
#line 893 "prog_io_item.m"
        {
#line 893 "prog_io_item.m"
          parse_tree__prog_io_item__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 893 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 893 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 893 "prog_io_item.m"
        }
#line 893 "prog_io_item.m"
        {
#line 893 "prog_io_item.m"
          parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_item__V_52_52));
#line 893 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 893 "prog_io_item.m"
        }
#line 892 "prog_io_item.m"
        {
#line 892 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 892 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 892 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 892 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 892 "prog_io_item.m"
        }
#line 894 "prog_io_item.m"
        {
#line 894 "prog_io_item.m"
          MR_Word base;
#line 894 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 894 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeSpec_6 = base;
#line 894 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_23));
#line 894 "prog_io_item.m"
        }
#line 875 "prog_io_item.m"
      }
#line 856 "prog_io_item.m"
  }
#line 853 "prog_io_item.m"
}

#line 832 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_3_p_0(
#line 832 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_4,
#line 832 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 832 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeTypeAndMode_6)
#line 832 "prog_io_item.m"
{
#line 841 "prog_io_item.m"
  {
#line 841 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 841 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeTerm_7;
#line 841 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModeTerm_8;
#line 836 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_13_13;
#line 836 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_14_14;
#line 836 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_15_15;
#line 836 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 836 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 836 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___Context_9;

#line 836 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 836 "prog_io_item.m"
      {
#line 836 "prog_io_item.m"
        parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 0)));
#line 836 "prog_io_item.m"
        parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 1)));
#line 836 "prog_io_item.m"
        parse_tree__prog_io_item___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 2)));
#line 836 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 836 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 836 "prog_io_item.m"
          {
#line 836 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_13_13, (MR_Integer) 0)));
#line 836 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_14_14, (MR_String) "::") == 0);
#line 836 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 836 "prog_io_item.m"
              {
#line 836 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 836 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 836 "prog_io_item.m"
                  {
#line 836 "prog_io_item.m"
                    parse_tree__prog_io_item__TypeTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 0)));
#line 836 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 1)));
#line 836 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 836 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 836 "prog_io_item.m"
                      {
#line 836 "prog_io_item.m"
                        parse_tree__prog_io_item__ModeTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 836 "prog_io_item.m"
                        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 1)));
#line 836 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 836 "prog_io_item.m"
                      }
#line 836 "prog_io_item.m"
                  }
#line 836 "prog_io_item.m"
              }
#line 836 "prog_io_item.m"
          }
#line 836 "prog_io_item.m"
      }
#line 841 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 837 "prog_io_item.m"
      {
#line 837 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Type_10;
#line 837 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Mode0_11;
#line 837 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Mode_12;
#line 837 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_18_18;

#line 837 "prog_io_item.m"
        {
#line 837 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__TypeTerm_7, &parse_tree__prog_io_item__Type_10);
        }
#line 837 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 837 "prog_io_item.m"
          {
#line 838 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = (MR_Integer) 0;
#line 838 "prog_io_item.m"
            {
#line 838 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_item__V_18_18, parse_tree__prog_io_item__ModeTerm_8, &parse_tree__prog_io_item__Mode0_11);
            }
#line 837 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 837 "prog_io_item.m"
              {
#line 839 "prog_io_item.m"
                {
#line 839 "prog_io_item.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_4, parse_tree__prog_io_item__Mode0_11, &parse_tree__prog_io_item__Mode_12);
                }
#line 840 "prog_io_item.m"
                {
#line 840 "prog_io_item.m"
                  MR_Word base;
#line 840 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeTypeAndMode_6 = base;
#line 840 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_10));
#line 840 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__Mode_12));
#line 840 "prog_io_item.m"
                }
#line 840 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 837 "prog_io_item.m"
              }
#line 837 "prog_io_item.m"
          }
#line 837 "prog_io_item.m"
      }
#line 841 "prog_io_item.m"
    else
#line 842 "prog_io_item.m"
      {
#line 842 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Type_19;

#line 842 "prog_io_item.m"
        {
#line 842 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__Term_5, &parse_tree__prog_io_item__Type_19);
        }
#line 842 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 842 "prog_io_item.m"
          {
#line 843 "prog_io_item.m"
            {
#line 843 "prog_io_item.m"
              MR_Word base;
#line 843 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 843 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeTypeAndMode_6 = base;
#line 843 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_19));
#line 843 "prog_io_item.m"
            }
#line 843 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 842 "prog_io_item.m"
          }
#line 842 "prog_io_item.m"
      }
#line 841 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 841 "prog_io_item.m"
  }
#line 832 "prog_io_item.m"
}

#line 824 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(
#line 824 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_1,
#line 824 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 824 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3)
#line 824 "prog_io_item.m"
{
#line 827 "prog_io_item.m"
  {
#line 827 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 827 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 827 "prog_io_item.m"
      {
#line 827 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 827 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 827 "prog_io_item.m"
      }
#line 827 "prog_io_item.m"
    else
#line 828 "prog_io_item.m"
      {
#line 828 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 828 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 828 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__H_8;
#line 828 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__T_9;
#line 841 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeTerm_13;
#line 841 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModeTerm_14;
#line 836 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_19_19;
#line 836 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_20_20;
#line 836 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_21_21;
#line 836 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 836 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 836 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item___Context_15;

#line 836 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__H0_6)) == (MR_mktag((MR_Integer) 0)));
#line 836 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 836 "prog_io_item.m"
          {
#line 836 "prog_io_item.m"
            parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 0)));
#line 836 "prog_io_item.m"
            parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 1)));
#line 836 "prog_io_item.m"
            parse_tree__prog_io_item___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 2)));
#line 836 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 836 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 836 "prog_io_item.m"
              {
#line 836 "prog_io_item.m"
                parse_tree__prog_io_item__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 836 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_20_20, (MR_String) "::") == 0);
#line 836 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 836 "prog_io_item.m"
                  {
#line 836 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 836 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 836 "prog_io_item.m"
                      {
#line 836 "prog_io_item.m"
                        parse_tree__prog_io_item__TypeTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 836 "prog_io_item.m"
                        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 1)));
#line 836 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 836 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 836 "prog_io_item.m"
                          {
#line 836 "prog_io_item.m"
                            parse_tree__prog_io_item__ModeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, (MR_Integer) 0)));
#line 836 "prog_io_item.m"
                            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, (MR_Integer) 1)));
#line 836 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 836 "prog_io_item.m"
                          }
#line 836 "prog_io_item.m"
                      }
#line 836 "prog_io_item.m"
                  }
#line 836 "prog_io_item.m"
              }
#line 836 "prog_io_item.m"
          }
#line 841 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 837 "prog_io_item.m"
          {
#line 837 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_16;
#line 837 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Mode0_17;
#line 837 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Mode_18;
#line 837 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_24_24;

#line 837 "prog_io_item.m"
            {
#line 837 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__TypeTerm_13, &parse_tree__prog_io_item__Type_16);
            }
#line 837 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 837 "prog_io_item.m"
              {
#line 838 "prog_io_item.m"
                parse_tree__prog_io_item__V_24_24 = (MR_Integer) 0;
#line 838 "prog_io_item.m"
                {
#line 838 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_item__V_24_24, parse_tree__prog_io_item__ModeTerm_14, &parse_tree__prog_io_item__Mode0_17);
                }
#line 837 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 837 "prog_io_item.m"
                  {
#line 839 "prog_io_item.m"
                    {
#line 839 "prog_io_item.m"
                      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_1, parse_tree__prog_io_item__Mode0_17, &parse_tree__prog_io_item__Mode_18);
                    }
#line 840 "prog_io_item.m"
                    {
#line 840 "prog_io_item.m"
                      parse_tree__prog_io_item__H_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__H_8, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_16));
#line 840 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__H_8, 1) = ((MR_Box) (parse_tree__prog_io_item__Mode_18));
#line 840 "prog_io_item.m"
                    }
#line 840 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 837 "prog_io_item.m"
                  }
#line 837 "prog_io_item.m"
              }
#line 837 "prog_io_item.m"
          }
#line 841 "prog_io_item.m"
        else
#line 842 "prog_io_item.m"
          {
#line 842 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_25;

#line 842 "prog_io_item.m"
            {
#line 842 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__H0_6, &parse_tree__prog_io_item__Type_25);
            }
#line 842 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 842 "prog_io_item.m"
              {
#line 843 "prog_io_item.m"
                {
#line 843 "prog_io_item.m"
                  parse_tree__prog_io_item__H_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 843 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H_8, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_25));
#line 843 "prog_io_item.m"
                }
#line 843 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 842 "prog_io_item.m"
              }
#line 842 "prog_io_item.m"
          }
#line 828 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 828 "prog_io_item.m"
          {
#line 830 "prog_io_item.m"
            {
#line 830 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_1, parse_tree__prog_io_item__T0_7, &parse_tree__prog_io_item__T_9);
            }
#line 828 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 828 "prog_io_item.m"
              {
#line 828 "prog_io_item.m"
                {
#line 828 "prog_io_item.m"
                  MR_Word base;
#line 828 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "prog_io_item.m"
                  *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 828 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__H_8));
#line 828 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__T_9));
#line 828 "prog_io_item.m"
                }
#line 828 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 828 "prog_io_item.m"
              }
#line 828 "prog_io_item.m"
          }
#line 828 "prog_io_item.m"
      }
#line 827 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 827 "prog_io_item.m"
  }
#line 824 "prog_io_item.m"
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
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_132_132;
#line 758 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27;
#line 758 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InconsistentArgsSpecs_28;
#line 758 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgsOnlySpecs_36;
#line 758 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnOnlySpecs_43;
#line 758 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConsistencySpecs_44;
#line 758 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_98_98;
#line 769 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_60_60;
#line 770 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_33_33;
#line 769 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 769 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 769 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;
#line 782 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_79_79;
#line 783 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_39_39;
#line 783 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_40_40;
#line 782 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_38_38;
#line 782 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_37_37;

#line 759 "prog_io_item.m"
    {
#line 759 "prog_io_item.m"
      parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(parse_tree__prog_io_item__Args_15, parse_tree__prog_io_item__FuncTerm_17, &parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27);
    }
#line 764 "prog_io_item.m"
    if ((parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "prog_io_item.m"
      parse_tree__prog_io_item__InconsistentArgsSpecs_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 764 "prog_io_item.m"
    else
#line 765 "prog_io_item.m"
      {
#line 765 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InconsistentArgsSpec_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27, (MR_Integer) 0)));

#line 766 "prog_io_item.m"
        {
#line 766 "prog_io_item.m"
          parse_tree__prog_io_item__InconsistentArgsSpecs_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__InconsistentArgsSpecs_28, 0) = ((MR_Box) (parse_tree__prog_io_item__InconsistentArgsSpec_29));
#line 766 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__InconsistentArgsSpecs_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "prog_io_item.m"
        }
#line 765 "prog_io_item.m"
      }
#line 770 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_16)) == (MR_mktag((MR_Integer) 0)));
#line 770 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 770 "prog_io_item.m"
      {
#line 770 "prog_io_item.m"
        parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 0)));
#line 769 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 769 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 769 "prog_io_item.m"
          {
#line 769 "prog_io_item.m"
            parse_tree__prog_io_item__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 0)));
#line 769 "prog_io_item.m"
            parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 1)));
#line 769 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 769 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 769 "prog_io_item.m"
              {
#line 769 "prog_io_item.m"
                parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, (MR_Integer) 0)));
#line 769 "prog_io_item.m"
                parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, (MR_Integer) 1)));
#line 769 "prog_io_item.m"
              }
#line 769 "prog_io_item.m"
          }
#line 770 "prog_io_item.m"
      }
#line 778 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 773 "prog_io_item.m"
      {
#line 773 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ArgsOnlySpec_35;
#line 773 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_71_71;
#line 773 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_72_72;
#line 773 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_73_73;

#line 775 "prog_io_item.m"
        {
#line 775 "prog_io_item.m"
          parse_tree__prog_io_item__V_73_73 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 775 "prog_io_item.m"
        {
#line 775 "prog_io_item.m"
          parse_tree__prog_io_item__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 775 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_item__V_73_73));
#line 775 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[114])));
#line 775 "prog_io_item.m"
        }
#line 776 "prog_io_item.m"
        {
#line 776 "prog_io_item.m"
          parse_tree__prog_io_item__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_item__V_72_72));
#line 776 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 776 "prog_io_item.m"
        }
#line 774 "prog_io_item.m"
        {
#line 774 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 774 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 774 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 774 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 2) = ((MR_Box) (parse_tree__prog_io_item__V_71_71));
#line 774 "prog_io_item.m"
        }
#line 777 "prog_io_item.m"
        {
#line 777 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpecs_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_36, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsOnlySpec_35));
#line 777 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 777 "prog_io_item.m"
        }
#line 773 "prog_io_item.m"
      }
#line 778 "prog_io_item.m"
    else
#line 779 "prog_io_item.m"
      parse_tree__prog_io_item__ArgsOnlySpecs_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 783 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_16)) == (MR_mktag((MR_Integer) 1)));
#line 783 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 783 "prog_io_item.m"
      {
#line 783 "prog_io_item.m"
        parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 0)));
#line 783 "prog_io_item.m"
        parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 1)));
#line 782 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 782 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 782 "prog_io_item.m"
          {
#line 782 "prog_io_item.m"
            parse_tree__prog_io_item__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 0)));
#line 782 "prog_io_item.m"
            parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 1)));
#line 782 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_79_79)) == (MR_mktag((MR_Integer) 0)));
#line 782 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 782 "prog_io_item.m"
              parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, (MR_Integer) 0)));
#line 782 "prog_io_item.m"
          }
#line 783 "prog_io_item.m"
      }
#line 791 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 786 "prog_io_item.m"
      {
#line 786 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ReturnOnlySpec_42;
#line 786 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_90_90;
#line 786 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_91_91;
#line 786 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_92_92;

#line 788 "prog_io_item.m"
        {
#line 788 "prog_io_item.m"
          parse_tree__prog_io_item__V_92_92 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 788 "prog_io_item.m"
        {
#line 788 "prog_io_item.m"
          parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 788 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 788 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[115])));
#line 788 "prog_io_item.m"
        }
#line 789 "prog_io_item.m"
        {
#line 789 "prog_io_item.m"
          parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 789 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "prog_io_item.m"
        }
#line 787 "prog_io_item.m"
        {
#line 787 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 787 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 787 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 787 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 2) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 787 "prog_io_item.m"
        }
#line 790 "prog_io_item.m"
        {
#line 790 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpecs_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_43, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnOnlySpec_42));
#line 790 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 790 "prog_io_item.m"
        }
#line 786 "prog_io_item.m"
      }
#line 791 "prog_io_item.m"
    else
#line 792 "prog_io_item.m"
      parse_tree__prog_io_item__ReturnOnlySpecs_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8329 "parse_tree.prog_io_item.c"
    parse_tree__prog_io_item__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 795 "prog_io_item.m"
    {
#line 795 "prog_io_item.m"
      parse_tree__prog_io_item__V_98_98 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_132_132, parse_tree__prog_io_item__ArgsOnlySpecs_36, parse_tree__prog_io_item__ReturnOnlySpecs_43);
    }
#line 795 "prog_io_item.m"
    {
#line 795 "prog_io_item.m"
      parse_tree__prog_io_item__ConsistencySpecs_44 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_132_132, parse_tree__prog_io_item__InconsistentArgsSpecs_28, parse_tree__prog_io_item__V_98_98);
    }
#line 799 "prog_io_item.m"
    if ((parse_tree__prog_io_item__ConsistencySpecs_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 800 "prog_io_item.m"
      {
#line 800 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_133_133;
#line 800 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Purity_47;
#line 800 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_48;
#line 800 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TVarSet_49;
#line 800 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__IVarSet_50;
#line 800 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__AllArgs_51;
#line 800 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_99_99;

#line 801 "prog_io_item.m"
        {
#line 801 "prog_io_item.m"
          parse_tree__prog_io_item__get_purity_3_p_0(&parse_tree__prog_io_item__Purity_47, parse_tree__prog_io_item__Attributes0_23, &parse_tree__prog_io_item__Attributes_48);
        }
#line 8365 "parse_tree.prog_io_item.c"
        parse_tree__prog_io_item__TypeCtorInfo_133_133 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 802 "prog_io_item.m"
        {
#line 802 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__TVarSet_49);
        }
#line 803 "prog_io_item.m"
        {
#line 803 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__IVarSet_50);
        }
#line 804 "prog_io_item.m"
        {
#line 804 "prog_io_item.m"
          parse_tree__prog_io_item__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnArg_16));
#line 804 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 804 "prog_io_item.m"
        }
#line 804 "prog_io_item.m"
        {
#line 804 "prog_io_item.m"
          parse_tree__prog_io_item__AllArgs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io_item__Args_15, parse_tree__prog_io_item__V_99_99);
        }
#line 805 "prog_io_item.m"
        {
#line 805 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__AllArgs_51);
        }
#line 813 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 806 "prog_io_item.m"
          {
#line 806 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ItemPredDecl_53;
#line 806 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Item_54;
#line 806 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeItem0_55;

#line 807 "prog_io_item.m"
            {
#line 807 "prog_io_item.m"
              parse_tree__prog_io_item__ItemPredDecl_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 807 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 0) = ((MR_Box) (parse_tree__prog_io_item__FuncName_14));
#line 807 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 1) = ((MR_Box) ((MR_Integer) 1));
#line 807 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 2) = ((MR_Box) (parse_tree__prog_io_item__AllArgs_51));
#line 807 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 807 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 807 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDetism_20));
#line 807 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 807 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 7) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_49));
#line 807 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 8) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_50));
#line 807 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 9) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_21));
#line 807 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 10) = ((MR_Box) (parse_tree__prog_io_item__Purity_47));
#line 807 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 11) = ((MR_Box) (parse_tree__prog_io_item__Constraints_22));
#line 807 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 12) = ((MR_Box) (parse_tree__prog_io_item__Context_24));
#line 807 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 13) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_25));
#line 807 "prog_io_item.m"
            }
#line 810 "prog_io_item.m"
            {
#line 810 "prog_io_item.m"
              parse_tree__prog_io_item__Item_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 810 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_54, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_53));
#line 810 "prog_io_item.m"
            }
#line 811 "prog_io_item.m"
            {
#line 811 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeItem0_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 811 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_54));
#line 811 "prog_io_item.m"
            }
#line 812 "prog_io_item.m"
            {
#line 812 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_55, parse_tree__prog_io_item__Attributes_48, parse_tree__prog_io_item__MaybeItem_26);
#line 812 "prog_io_item.m"
              return;
            }
#line 806 "prog_io_item.m"
          }
#line 813 "prog_io_item.m"
        else
#line 814 "prog_io_item.m"
          {
#line 814 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__TermStr_56;
#line 814 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Pieces_57;
#line 814 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_58;
#line 814 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_106_106;
#line 814 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_109_109;
#line 814 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_111_111;
#line 814 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_112_112;
#line 814 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_121_121;
#line 814 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_122_122;
#line 814 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_123_123;
#line 814 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_124_124;
#line 814 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_125_125;
#line 814 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_128_128;

#line 814 "prog_io_item.m"
            {
#line 814 "prog_io_item.m"
              parse_tree__prog_io_item__TermStr_56 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__Term_18);
            }
#line 817 "prog_io_item.m"
            {
#line 817 "prog_io_item.m"
              parse_tree__prog_io_item__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 817 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_112_112, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_56));
#line 817 "prog_io_item.m"
            }
#line 817 "prog_io_item.m"
            {
#line 817 "prog_io_item.m"
              parse_tree__prog_io_item__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_item__V_112_112));
#line 817 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 817 "prog_io_item.m"
            }
#line 816 "prog_io_item.m"
            {
#line 816 "prog_io_item.m"
              parse_tree__prog_io_item__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_109_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 816 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_109_109, 1) = ((MR_Box) (parse_tree__prog_io_item__V_111_111));
#line 816 "prog_io_item.m"
            }
#line 816 "prog_io_item.m"
            {
#line 816 "prog_io_item.m"
              parse_tree__prog_io_item__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[117])));
#line 816 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 1) = ((MR_Box) (parse_tree__prog_io_item__V_109_109));
#line 816 "prog_io_item.m"
            }
#line 815 "prog_io_item.m"
            {
#line 815 "prog_io_item.m"
              parse_tree__prog_io_item__Pieces_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[116])));
#line 815 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_57, 1) = ((MR_Box) (parse_tree__prog_io_item__V_106_106));
#line 815 "prog_io_item.m"
            }
#line 819 "prog_io_item.m"
            {
#line 819 "prog_io_item.m"
              parse_tree__prog_io_item__V_123_123 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, parse_tree__prog_io_item__Term_18);
            }
#line 819 "prog_io_item.m"
            {
#line 819 "prog_io_item.m"
              parse_tree__prog_io_item__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 819 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_57));
#line 819 "prog_io_item.m"
            }
#line 819 "prog_io_item.m"
            {
#line 819 "prog_io_item.m"
              parse_tree__prog_io_item__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_item__V_125_125));
#line 819 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "prog_io_item.m"
            }
#line 819 "prog_io_item.m"
            {
#line 819 "prog_io_item.m"
              parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 819 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_item__V_123_123));
#line 819 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io_item__V_124_124));
#line 819 "prog_io_item.m"
            }
#line 819 "prog_io_item.m"
            {
#line 819 "prog_io_item.m"
              parse_tree__prog_io_item__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_121_121, 0) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 819 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "prog_io_item.m"
            }
#line 818 "prog_io_item.m"
            {
#line 818 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 818 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 818 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 818 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 2) = ((MR_Box) (parse_tree__prog_io_item__V_121_121));
#line 818 "prog_io_item.m"
            }
#line 820 "prog_io_item.m"
            {
#line 820 "prog_io_item.m"
              parse_tree__prog_io_item__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_128_128, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_58));
#line 820 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 820 "prog_io_item.m"
            }
#line 820 "prog_io_item.m"
            {
#line 820 "prog_io_item.m"
              MR_Word base;
#line 820 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 820 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 820 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_128_128));
#line 820 "prog_io_item.m"
            }
#line 814 "prog_io_item.m"
          }
#line 800 "prog_io_item.m"
      }
#line 799 "prog_io_item.m"
    else
#line 798 "prog_io_item.m"
      {
#line 798 "prog_io_item.m"
        MR_Word base;
#line 798 "prog_io_item.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 798 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 798 "prog_io_item.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ConsistencySpecs_44));
#line 798 "prog_io_item.m"
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
#line 8812 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_148_148 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 688 "prog_io_item.m"
            {
#line 688 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__FuncTerm_26, parse_tree__prog_io_item__VarSet_10, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[52]), &parse_tree__prog_io_item__MaybeFuncNameAndArgs_28);
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
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[111])));
#line 703 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_item__V_66_66));
#line 703 "prog_io_item.m"
                    }
#line 703 "prog_io_item.m"
                    {
#line 703 "prog_io_item.m"
                      parse_tree__prog_io_item__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[110])));
#line 703 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 703 "prog_io_item.m"
                    }
#line 702 "prog_io_item.m"
                    {
#line 702 "prog_io_item.m"
                      parse_tree__prog_io_item__ArgsPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[109])));
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
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[112])));
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
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[113])));
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

#line 568 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_12,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_13,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_14,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_15,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_16,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 568 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 568 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22)
#line 568 "prog_io_item.m"
{
#line 575 "prog_io_item.m"
  {
#line 575 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 575 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes1_23;
#line 575 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeExistClassInstContext_24;

#line 576 "prog_io_item.m"
    {
#line 576 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_13, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__Attributes0_19, &parse_tree__prog_io_item__Attributes1_23, &parse_tree__prog_io_item__MaybeExistClassInstContext_24);
    }
#line 581 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeExistClassInstContext_24)) == (MR_mktag((MR_Integer) 0))))
#line 579 "prog_io_item.m"
      {
#line 579 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 0)));

#line 580 "prog_io_item.m"
        {
#line 580 "prog_io_item.m"
          MR_Word base;
#line 580 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 580 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 580 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_25));
#line 580 "prog_io_item.m"
        }
#line 579 "prog_io_item.m"
      }
#line 581 "prog_io_item.m"
    else
#line 583 "prog_io_item.m"
      {
#line 583 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_187_187 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 583 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_188_188;
#line 583 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ExistQVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 0)));
#line 583 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Constraints_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 1)));
#line 583 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 2)));
#line 583 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ContextPieces_29;
#line 583 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybePredNameAndArgs_30;
#line 583 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_58_58;
#line 583 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_59_59;

#line 584 "prog_io_item.m"
        {
#line 584 "prog_io_item.m"
          parse_tree__prog_io_item__V_59_59 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
        }
#line 585 "prog_io_item.m"
        {
#line 585 "prog_io_item.m"
          parse_tree__prog_io_item__V_58_58 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_59_59, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[103]));
        }
#line 584 "prog_io_item.m"
        {
#line 584 "prog_io_item.m"
          parse_tree__prog_io_item__ContextPieces_29 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[101]), parse_tree__prog_io_item__V_58_58);
        }
#line 9376 "parse_tree.prog_io_item.c"
        parse_tree__prog_io_item__TypeCtorInfo_188_188 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 586 "prog_io_item.m"
        {
#line 586 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__ModuleName_13, parse_tree__prog_io_item__PredTypeTerm_15, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__ContextPieces_29, &parse_tree__prog_io_item__MaybePredNameAndArgs_30);
        }
#line 591 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybePredNameAndArgs_30)) == (MR_mktag((MR_Integer) 0))))
#line 589 "prog_io_item.m"
          {
#line 589 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 0)));

#line 590 "prog_io_item.m"
            {
#line 590 "prog_io_item.m"
              MR_Word base;
#line 590 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 590 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 590 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_173));
#line 590 "prog_io_item.m"
            }
#line 589 "prog_io_item.m"
          }
#line 591 "prog_io_item.m"
        else
#line 592 "prog_io_item.m"
          {
#line 592 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 0)));
#line 592 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 1)));
#line 653 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Args_33;

#line 593 "prog_io_item.m"
            {
#line 593 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_28, parse_tree__prog_io_item__ArgTerms_32, &parse_tree__prog_io_item__Args_33);
            }
#line 653 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 595 "prog_io_item.m"
              {
#line 595 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34;

#line 594 "prog_io_item.m"
                {
#line 594 "prog_io_item.m"
                  parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(parse_tree__prog_io_item__Args_33, parse_tree__prog_io_item__PredTypeTerm_15, &parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34);
                }
#line 599 "prog_io_item.m"
                if ((parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "prog_io_item.m"
                  {
#line 602 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_64_64;
#line 602 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_36_36;
#line 603 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_38_38;
#line 603 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_37_37;

#line 602 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_17)) == (MR_mktag((MR_Integer) 1)));
#line 602 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 602 "prog_io_item.m"
                      {
#line 602 "prog_io_item.m"
                        parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_17, (MR_Integer) 0)));
#line 603 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_33)) == (MR_mktag((MR_Integer) 1)));
#line 603 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 603 "prog_io_item.m"
                          {
#line 603 "prog_io_item.m"
                            parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 0)));
#line 603 "prog_io_item.m"
                            parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 1)));
#line 603 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 603 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 603 "prog_io_item.m"
                              parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 603 "prog_io_item.m"
                          }
#line 602 "prog_io_item.m"
                      }
#line 612 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 606 "prog_io_item.m"
                      {
#line 606 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Spec_40;
#line 606 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_78_78;
#line 606 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_79_79;
#line 606 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_80_80;
#line 606 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_85_85;

#line 609 "prog_io_item.m"
                        {
#line 609 "prog_io_item.m"
                          parse_tree__prog_io_item__V_80_80 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                        }
#line 609 "prog_io_item.m"
                        {
#line 609 "prog_io_item.m"
                          parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 609 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 609 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[104])));
#line 609 "prog_io_item.m"
                        }
#line 610 "prog_io_item.m"
                        {
#line 610 "prog_io_item.m"
                          parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 610 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "prog_io_item.m"
                        }
#line 607 "prog_io_item.m"
                        {
#line 607 "prog_io_item.m"
                          parse_tree__prog_io_item__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 607 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 607 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 607 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 2) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 607 "prog_io_item.m"
                        }
#line 611 "prog_io_item.m"
                        {
#line 611 "prog_io_item.m"
                          parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_40));
#line 611 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "prog_io_item.m"
                        }
#line 611 "prog_io_item.m"
                        {
#line 611 "prog_io_item.m"
                          MR_Word base;
#line 611 "prog_io_item.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 611 "prog_io_item.m"
                          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 611 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 611 "prog_io_item.m"
                        }
#line 606 "prog_io_item.m"
                      }
#line 612 "prog_io_item.m"
                    else
#line 624 "prog_io_item.m"
                      {
#line 613 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_87_87;
#line 614 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_41_41;
#line 615 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_44_44;
#line 615 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_42_42;
#line 615 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_43_43;

#line 613 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 613 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 613 "prog_io_item.m"
                          {
#line 614 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithType_16)) == (MR_mktag((MR_Integer) 1)));
#line 614 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 614 "prog_io_item.m"
                              {
#line 614 "prog_io_item.m"
                                parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithType_16, (MR_Integer) 0)));
#line 615 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_33)) == (MR_mktag((MR_Integer) 1)));
#line 615 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 615 "prog_io_item.m"
                                  {
#line 615 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 0)));
#line 615 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 1)));
#line 615 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_87_87)) == (MR_mktag((MR_Integer) 1)));
#line 615 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 615 "prog_io_item.m"
                                      {
#line 615 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_87_87, (MR_Integer) 0)));
#line 615 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_87_87, (MR_Integer) 1)));
#line 615 "prog_io_item.m"
                                      }
#line 615 "prog_io_item.m"
                                  }
#line 614 "prog_io_item.m"
                              }
#line 613 "prog_io_item.m"
                          }
#line 624 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 618 "prog_io_item.m"
                          {
#line 618 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_101_101;
#line 618 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_102_102;
#line 618 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_103_103;
#line 618 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_108_108;
#line 618 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Spec_175;

#line 621 "prog_io_item.m"
                            {
#line 621 "prog_io_item.m"
                              parse_tree__prog_io_item__V_103_103 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                            }
#line 621 "prog_io_item.m"
                            {
#line 621 "prog_io_item.m"
                              parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 621 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_item__V_103_103));
#line 621 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[105])));
#line 621 "prog_io_item.m"
                            }
#line 622 "prog_io_item.m"
                            {
#line 622 "prog_io_item.m"
                              parse_tree__prog_io_item__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 622 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 622 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "prog_io_item.m"
                            }
#line 619 "prog_io_item.m"
                            {
#line 619 "prog_io_item.m"
                              parse_tree__prog_io_item__Spec_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 619 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 619 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_175, 2) = ((MR_Box) (parse_tree__prog_io_item__V_101_101));
#line 619 "prog_io_item.m"
                            }
#line 623 "prog_io_item.m"
                            {
#line 623 "prog_io_item.m"
                              parse_tree__prog_io_item__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_175));
#line 623 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 623 "prog_io_item.m"
                            }
#line 623 "prog_io_item.m"
                            {
#line 623 "prog_io_item.m"
                              MR_Word base;
#line 623 "prog_io_item.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 623 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 623 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_108_108));
#line 623 "prog_io_item.m"
                            }
#line 618 "prog_io_item.m"
                          }
#line 624 "prog_io_item.m"
                        else
#line 638 "prog_io_item.m"
                          {
#line 625 "prog_io_item.m"
                            {
#line 625 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__Args_33);
                            }
#line 638 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 627 "prog_io_item.m"
                              {
#line 627 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Purity_45;
#line 627 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Attributes_46;
#line 627 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__TVarSet_47;
#line 627 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__IVarSet_48;
#line 627 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ItemPredDecl_50;
#line 627 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Item_51;
#line 627 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeItem0_52;

#line 627 "prog_io_item.m"
                                {
#line 627 "prog_io_item.m"
                                  parse_tree__prog_io_item__get_purity_3_p_0(&parse_tree__prog_io_item__Purity_45, parse_tree__prog_io_item__Attributes1_23, &parse_tree__prog_io_item__Attributes_46);
                                }
#line 628 "prog_io_item.m"
                                {
#line 628 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_14, &parse_tree__prog_io_item__TVarSet_47);
                                }
#line 629 "prog_io_item.m"
                                {
#line 629 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_14, &parse_tree__prog_io_item__IVarSet_48);
                                }
#line 631 "prog_io_item.m"
                                {
#line 631 "prog_io_item.m"
                                  parse_tree__prog_io_item__ItemPredDecl_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_31));
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 1) = ((MR_Box) (parse_tree__prog_io_item__PredOrFunc_12));
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 2) = ((MR_Box) (parse_tree__prog_io_item__Args_33));
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 3) = ((MR_Box) (parse_tree__prog_io_item__WithType_16));
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 4) = ((MR_Box) (parse_tree__prog_io_item__WithInst_17));
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_18));
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 7) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_47));
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 8) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_48));
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 9) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_26));
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 10) = ((MR_Box) (parse_tree__prog_io_item__Purity_45));
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 11) = ((MR_Box) (parse_tree__prog_io_item__Constraints_27));
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 12) = ((MR_Box) (parse_tree__prog_io_item__Context_20));
#line 631 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 13) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_21));
#line 631 "prog_io_item.m"
                                }
#line 635 "prog_io_item.m"
                                {
#line 635 "prog_io_item.m"
                                  parse_tree__prog_io_item__Item_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 635 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_51, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_50));
#line 635 "prog_io_item.m"
                                }
#line 636 "prog_io_item.m"
                                {
#line 636 "prog_io_item.m"
                                  parse_tree__prog_io_item__MaybeItem0_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_52, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_51));
#line 636 "prog_io_item.m"
                                }
#line 637 "prog_io_item.m"
                                {
#line 637 "prog_io_item.m"
                                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_52, parse_tree__prog_io_item__Attributes_46, parse_tree__prog_io_item__MaybeItem_22);
#line 637 "prog_io_item.m"
                                  return;
                                }
#line 627 "prog_io_item.m"
                              }
#line 638 "prog_io_item.m"
                            else
#line 640 "prog_io_item.m"
                              {
#line 640 "prog_io_item.m"
                                MR_String parse_tree__prog_io_item__PredTypeTermStr_53;
#line 640 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_117_117;
#line 640 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_118_118;
#line 640 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_119_119;
#line 640 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_122_122;
#line 640 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_124_124;
#line 640 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_125_125;
#line 640 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_134_134;
#line 640 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_135_135;
#line 640 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_136_136;
#line 640 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_137_137;
#line 640 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_138_138;
#line 640 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_141_141;
#line 640 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Pieces_176;
#line 640 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Spec_177;

#line 639 "prog_io_item.m"
                                {
#line 639 "prog_io_item.m"
                                  parse_tree__prog_io_item__PredTypeTermStr_53 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__PredTypeTerm_15);
                                }
#line 643 "prog_io_item.m"
                                {
#line 643 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_118_118 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
                                }
#line 645 "prog_io_item.m"
                                {
#line 645 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 645 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_125_125, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_53));
#line 645 "prog_io_item.m"
                                }
#line 645 "prog_io_item.m"
                                {
#line 645 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_item__V_125_125));
#line 645 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 645 "prog_io_item.m"
                                }
#line 644 "prog_io_item.m"
                                {
#line 644 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 644 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io_item__V_124_124));
#line 644 "prog_io_item.m"
                                }
#line 644 "prog_io_item.m"
                                {
#line 644 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_119_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[102])));
#line 644 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_119_119, 1) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 644 "prog_io_item.m"
                                }
#line 643 "prog_io_item.m"
                                {
#line 643 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_117_117 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_118_118, parse_tree__prog_io_item__V_119_119);
                                }
#line 642 "prog_io_item.m"
                                {
#line 642 "prog_io_item.m"
                                  parse_tree__prog_io_item__Pieces_176 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[46]), parse_tree__prog_io_item__V_117_117);
                                }
#line 648 "prog_io_item.m"
                                {
#line 648 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_136_136 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                                }
#line 649 "prog_io_item.m"
                                {
#line 649 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 649 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_176));
#line 649 "prog_io_item.m"
                                }
#line 649 "prog_io_item.m"
                                {
#line 649 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_137_137, 0) = ((MR_Box) (parse_tree__prog_io_item__V_138_138));
#line 649 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 649 "prog_io_item.m"
                                }
#line 648 "prog_io_item.m"
                                {
#line 648 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 648 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_135_135, 0) = ((MR_Box) (parse_tree__prog_io_item__V_136_136));
#line 648 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_135_135, 1) = ((MR_Box) (parse_tree__prog_io_item__V_137_137));
#line 648 "prog_io_item.m"
                                }
#line 649 "prog_io_item.m"
                                {
#line 649 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_134_134, 0) = ((MR_Box) (parse_tree__prog_io_item__V_135_135));
#line 649 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 649 "prog_io_item.m"
                                }
#line 646 "prog_io_item.m"
                                {
#line 646 "prog_io_item.m"
                                  parse_tree__prog_io_item__Spec_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 646 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_177, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 646 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 646 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_177, 2) = ((MR_Box) (parse_tree__prog_io_item__V_134_134));
#line 646 "prog_io_item.m"
                                }
#line 650 "prog_io_item.m"
                                {
#line 650 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_141_141, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_177));
#line 650 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 650 "prog_io_item.m"
                                }
#line 650 "prog_io_item.m"
                                {
#line 650 "prog_io_item.m"
                                  MR_Word base;
#line 650 "prog_io_item.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 650 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 650 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_141_141));
#line 650 "prog_io_item.m"
                                }
#line 640 "prog_io_item.m"
                              }
#line 638 "prog_io_item.m"
                          }
#line 624 "prog_io_item.m"
                      }
#line 612 "prog_io_item.m"
                  }
#line 599 "prog_io_item.m"
                else
#line 597 "prog_io_item.m"
                  {
#line 597 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__InconsistentArgsSpec_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34, (MR_Integer) 0)));
#line 597 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_143_143;

#line 598 "prog_io_item.m"
                    {
#line 598 "prog_io_item.m"
                      parse_tree__prog_io_item__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_143_143, 0) = ((MR_Box) (parse_tree__prog_io_item__InconsistentArgsSpec_35));
#line 598 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "prog_io_item.m"
                    }
#line 598 "prog_io_item.m"
                    {
#line 598 "prog_io_item.m"
                      MR_Word base;
#line 598 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 598 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 598 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_143_143));
#line 598 "prog_io_item.m"
                    }
#line 597 "prog_io_item.m"
                  }
#line 595 "prog_io_item.m"
              }
#line 653 "prog_io_item.m"
            else
#line 654 "prog_io_item.m"
              {
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_149_149;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_150_150;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_151_151;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_154_154;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_155_155;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_164_164;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_165_165;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_166_166;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_167_167;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_168_168;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_171_171;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_182;
#line 654 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_183;
#line 654 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredTypeTermStr_184;

#line 654 "prog_io_item.m"
                {
#line 654 "prog_io_item.m"
                  parse_tree__prog_io_item__PredTypeTermStr_184 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__PredTypeTerm_15);
                }
#line 656 "prog_io_item.m"
                {
#line 656 "prog_io_item.m"
                  parse_tree__prog_io_item__V_150_150 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
                }
#line 657 "prog_io_item.m"
                {
#line 657 "prog_io_item.m"
                  parse_tree__prog_io_item__V_155_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_155_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 657 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_155_155, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_184));
#line 657 "prog_io_item.m"
                }
#line 657 "prog_io_item.m"
                {
#line 657 "prog_io_item.m"
                  parse_tree__prog_io_item__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_154_154, 0) = ((MR_Box) (parse_tree__prog_io_item__V_155_155));
#line 657 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 657 "prog_io_item.m"
                }
#line 657 "prog_io_item.m"
                {
#line 657 "prog_io_item.m"
                  parse_tree__prog_io_item__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_151_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[108])));
#line 657 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_151_151, 1) = ((MR_Box) (parse_tree__prog_io_item__V_154_154));
#line 657 "prog_io_item.m"
                }
#line 656 "prog_io_item.m"
                {
#line 656 "prog_io_item.m"
                  parse_tree__prog_io_item__V_149_149 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_150_150, parse_tree__prog_io_item__V_151_151);
                }
#line 655 "prog_io_item.m"
                {
#line 655 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_182 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[107]), parse_tree__prog_io_item__V_149_149);
                }
#line 659 "prog_io_item.m"
                {
#line 659 "prog_io_item.m"
                  parse_tree__prog_io_item__V_166_166 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                }
#line 660 "prog_io_item.m"
                {
#line 660 "prog_io_item.m"
                  parse_tree__prog_io_item__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_168_168, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_182));
#line 660 "prog_io_item.m"
                }
#line 660 "prog_io_item.m"
                {
#line 660 "prog_io_item.m"
                  parse_tree__prog_io_item__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_167_167, 0) = ((MR_Box) (parse_tree__prog_io_item__V_168_168));
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "prog_io_item.m"
                }
#line 659 "prog_io_item.m"
                {
#line 659 "prog_io_item.m"
                  parse_tree__prog_io_item__V_165_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_165_165, 0) = ((MR_Box) (parse_tree__prog_io_item__V_166_166));
#line 659 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_165_165, 1) = ((MR_Box) (parse_tree__prog_io_item__V_167_167));
#line 659 "prog_io_item.m"
                }
#line 660 "prog_io_item.m"
                {
#line 660 "prog_io_item.m"
                  parse_tree__prog_io_item__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_164_164, 0) = ((MR_Box) (parse_tree__prog_io_item__V_165_165));
#line 660 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "prog_io_item.m"
                }
#line 658 "prog_io_item.m"
                {
#line 658 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 658 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 658 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 658 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_183, 2) = ((MR_Box) (parse_tree__prog_io_item__V_164_164));
#line 658 "prog_io_item.m"
                }
#line 661 "prog_io_item.m"
                {
#line 661 "prog_io_item.m"
                  parse_tree__prog_io_item__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_171_171, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_183));
#line 661 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_171_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_171_171));
#line 661 "prog_io_item.m"
                }
#line 654 "prog_io_item.m"
              }
#line 592 "prog_io_item.m"
          }
#line 583 "prog_io_item.m"
      }
#line 575 "prog_io_item.m"
  }
#line 568 "prog_io_item.m"
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
    MR_Word parse_tree__prog_io_item__BeforeDetismTerm_17;
#line 512 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_18;
#line 512 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTerm_19;
#line 512 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithInst_20;
#line 512 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithType_22;
#line 512 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BaseTerm_23;
#line 558 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeDetism_24;
#line 558 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithInst_25;
#line 558 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithType_26;

#line 513 "prog_io_item.m"
    {
#line 513 "prog_io_item.m"
      parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__Term_12, &parse_tree__prog_io_item__BeforeDetismTerm_17, &parse_tree__prog_io_item__MaybeMaybeDetism_18);
    }
#line 515 "prog_io_item.m"
    {
#line 515 "prog_io_item.m"
      parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(parse_tree__prog_io_item__BeforeDetismTerm_17, &parse_tree__prog_io_item__BeforeWithInstTerm_19, &parse_tree__prog_io_item__MaybeWithInst_20);
    }
#line 517 "prog_io_item.m"
    {
#line 517 "prog_io_item.m"
      parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BeforeWithInstTerm_19, &parse_tree__prog_io_item__BaseTerm_23, &parse_tree__prog_io_item__MaybeWithType_22);
    }
#line 521 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_18)) == (MR_mktag((MR_Integer) 1)));
#line 521 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 521 "prog_io_item.m"
      {
#line 521 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeDetism_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_18, (MR_Integer) 0)));
#line 522 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_20)) == (MR_mktag((MR_Integer) 1)));
#line 522 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 522 "prog_io_item.m"
          {
#line 522 "prog_io_item.m"
            parse_tree__prog_io_item__WithInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_20, (MR_Integer) 0)));
#line 523 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithType_22)) == (MR_mktag((MR_Integer) 1)));
#line 523 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 523 "prog_io_item.m"
              parse_tree__prog_io_item__WithType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithType_22, (MR_Integer) 0)));
#line 522 "prog_io_item.m"
          }
#line 521 "prog_io_item.m"
      }
#line 558 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 534 "prog_io_item.m"
      {
#line 526 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_27_27;
#line 527 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_28_28;

#line 526 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_24)) == (MR_mktag((MR_Integer) 1)));
#line 526 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 526 "prog_io_item.m"
          {
#line 526 "prog_io_item.m"
            parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_24, (MR_Integer) 0)));
#line 527 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_25)) == (MR_mktag((MR_Integer) 1)));
#line 527 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 527 "prog_io_item.m"
              parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_25, (MR_Integer) 0)));
#line 526 "prog_io_item.m"
          }
#line 534 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 530 "prog_io_item.m"
          {
#line 530 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_30;
#line 530 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_46_46;
#line 530 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_47_47;
#line 530 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_48_48;
#line 530 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_53_53;

#line 532 "prog_io_item.m"
            {
#line 532 "prog_io_item.m"
              parse_tree__prog_io_item__V_48_48 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_23);
            }
#line 532 "prog_io_item.m"
            {
#line 532 "prog_io_item.m"
              parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 532 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__V_48_48));
#line 532 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[98])));
#line 532 "prog_io_item.m"
            }
#line 532 "prog_io_item.m"
            {
#line 532 "prog_io_item.m"
              parse_tree__prog_io_item__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 532 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 532 "prog_io_item.m"
            }
#line 531 "prog_io_item.m"
            {
#line 531 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 531 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 531 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 2) = ((MR_Box) (parse_tree__prog_io_item__V_46_46));
#line 531 "prog_io_item.m"
            }
#line 533 "prog_io_item.m"
            {
#line 533 "prog_io_item.m"
              parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_30));
#line 533 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "prog_io_item.m"
            }
#line 533 "prog_io_item.m"
            {
#line 533 "prog_io_item.m"
              MR_Word base;
#line 533 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 533 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 533 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 533 "prog_io_item.m"
            }
#line 530 "prog_io_item.m"
          }
#line 534 "prog_io_item.m"
        else
#line 543 "prog_io_item.m"
          {
#line 535 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_31_31;

#line 535 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_25)) == (MR_mktag((MR_Integer) 1)));
#line 535 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 535 "prog_io_item.m"
              {
#line 535 "prog_io_item.m"
                parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_25, (MR_Integer) 0)));
#line 536 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 535 "prog_io_item.m"
              }
#line 543 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 539 "prog_io_item.m"
              {
#line 539 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_77_77;
#line 539 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_78_78;
#line 539 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_79_79;
#line 539 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_84_84;
#line 539 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_91;

#line 541 "prog_io_item.m"
                {
#line 541 "prog_io_item.m"
                  parse_tree__prog_io_item__V_79_79 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_23);
                }
#line 541 "prog_io_item.m"
                {
#line 541 "prog_io_item.m"
                  parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 541 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 541 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[99])));
#line 541 "prog_io_item.m"
                }
#line 541 "prog_io_item.m"
                {
#line 541 "prog_io_item.m"
                  parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 541 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "prog_io_item.m"
                }
#line 540 "prog_io_item.m"
                {
#line 540 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 540 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 540 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 540 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 2) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 540 "prog_io_item.m"
                }
#line 542 "prog_io_item.m"
                {
#line 542 "prog_io_item.m"
                  parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_91));
#line 542 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "prog_io_item.m"
                }
#line 542 "prog_io_item.m"
                {
#line 542 "prog_io_item.m"
                  MR_Word base;
#line 542 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 542 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 542 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 542 "prog_io_item.m"
                }
#line 539 "prog_io_item.m"
              }
#line 543 "prog_io_item.m"
            else
#line 552 "prog_io_item.m"
              {
#line 547 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__PredOrFunc_9 == (MR_Integer) 1);
#line 547 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 548 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 550 "prog_io_item.m"
                  {
#line 550 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_func_decl_base_8_p_0(parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BaseTerm_23, parse_tree__prog_io_item__MaybeDetism_24, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 550 "prog_io_item.m"
                    return;
                  }
#line 552 "prog_io_item.m"
                else
#line 553 "prog_io_item.m"
                  {
#line 553 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(parse_tree__prog_io_item__PredOrFunc_9, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BaseTerm_23, parse_tree__prog_io_item__WithType_26, parse_tree__prog_io_item__WithInst_25, parse_tree__prog_io_item__MaybeDetism_24, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 553 "prog_io_item.m"
                    return;
                  }
#line 552 "prog_io_item.m"
              }
#line 543 "prog_io_item.m"
          }
#line 534 "prog_io_item.m"
      }
#line 558 "prog_io_item.m"
    else
#line 561 "prog_io_item.m"
      {
#line 561 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 561 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_32;
#line 561 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_86_86;
#line 561 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_87_87;
#line 561 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_88_88;
#line 561 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_89_89;

#line 559 "prog_io_item.m"
        {
#line 559 "prog_io_item.m"
          parse_tree__prog_io_item__V_86_86 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_18);
        }
#line 560 "prog_io_item.m"
        {
#line 560 "prog_io_item.m"
          parse_tree__prog_io_item__V_88_88 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_20);
        }
#line 561 "prog_io_item.m"
        {
#line 561 "prog_io_item.m"
          parse_tree__prog_io_item__V_89_89 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[4], parse_tree__prog_io_item__MaybeWithType_22);
        }
#line 561 "prog_io_item.m"
        {
#line 561 "prog_io_item.m"
          parse_tree__prog_io_item__V_87_87 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_96_96, parse_tree__prog_io_item__V_88_88, parse_tree__prog_io_item__V_89_89);
        }
#line 560 "prog_io_item.m"
        {
#line 560 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_32 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_96_96, parse_tree__prog_io_item__V_86_86, parse_tree__prog_io_item__V_87_87);
        }
#line 562 "prog_io_item.m"
        {
#line 562 "prog_io_item.m"
          MR_Word base;
#line 562 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 562 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 562 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_32));
#line 562 "prog_io_item.m"
        }
#line 561 "prog_io_item.m"
      }
#line 512 "prog_io_item.m"
  }
#line 507 "prog_io_item.m"
}

#line 270 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_4(
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
    MR_Word parse_tree__prog_io_item__conv3_MaybeModuleSpecifier_6;

#line 270 "prog_io_item.m"
    {
#line 270 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_specifier_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv3_MaybeModuleSpecifier_6);
    }
#line 270 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv3_MaybeModuleSpecifier_6));
#line 270 "prog_io_item.m"
  }
#line 270 "prog_io_item.m"
}

#line 348 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0_3(
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
    MR_Word parse_tree__prog_io_item__conv2_MaybeModule_8;

#line 348 "prog_io_item.m"
    {
#line 348 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv2_MaybeModule_8);
    }
#line 348 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv2_MaybeModule_8));
#line 348 "prog_io_item.m"
  }
#line 348 "prog_io_item.m"
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

#line 218 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0(
#line 218 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 218 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 218 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_11,
#line 218 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_12,
#line 218 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 218 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 218 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 218 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 218 "prog_io_item.m"
{
#line 225 "prog_io_item.m"
  {
#line 225 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 225 "prog_io_item.m"
    {
#line 225 "prog_io_item.m"
      MR_Integer parse_tree__prog_io_item__case_num_0 = (MR_Integer) -1;

#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
      switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 0)) {
#line 225 "prog_io_item.m"
        case (MR_Integer) 101:
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) {
#line 225 "prog_io_item.m"
            case (MR_Integer) 110:
#line 225 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_11, (MR_String) "end_module"))
#line 225 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 0;
#line 225 "prog_io_item.m"
              break;
#line 225 "prog_io_item.m"
            case (MR_Integer) 120:
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
              switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) {
#line 225 "prog_io_item.m"
                case (MR_Integer) 112:
#line 225 "prog_io_item.m"
                  if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_11, (MR_String) "export_module"))
#line 225 "prog_io_item.m"
                    parse_tree__prog_io_item__case_num_0 = (MR_Integer) 1;
#line 225 "prog_io_item.m"
                  break;
#line 225 "prog_io_item.m"
                case (MR_Integer) 116:
#line 225 "prog_io_item.m"
                  if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_11, (MR_String) "external"))
#line 225 "prog_io_item.m"
                    parse_tree__prog_io_item__case_num_0 = (MR_Integer) 2;
#line 225 "prog_io_item.m"
                  break;
#line 225 "prog_io_item.m"
              }
#line 225 "prog_io_item.m"
              break;
#line 225 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 102:
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) {
#line 225 "prog_io_item.m"
            case (MR_Integer) 105:
#line 225 "prog_io_item.m"
              if (((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 5)) == (MR_Integer) 105))))
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
                switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 6)) {
#line 225 "prog_io_item.m"
                  case (MR_Integer) 115:
#line 225 "prog_io_item.m"
                    if (MR_offset_streq(7, parse_tree__prog_io_item__Functor_11, (MR_String) "finalise"))
#line 225 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 3;
#line 225 "prog_io_item.m"
                    break;
#line 225 "prog_io_item.m"
                  case (MR_Integer) 122:
#line 225 "prog_io_item.m"
                    if (MR_offset_streq(7, parse_tree__prog_io_item__Functor_11, (MR_String) "finalize"))
#line 225 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 3;
#line 225 "prog_io_item.m"
                    break;
#line 225 "prog_io_item.m"
                }
#line 225 "prog_io_item.m"
              break;
#line 225 "prog_io_item.m"
            case (MR_Integer) 117:
#line 225 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_11, (MR_String) "func"))
#line 225 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 4;
#line 225 "prog_io_item.m"
              break;
#line 225 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 105:
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) {
#line 225 "prog_io_item.m"
            case (MR_Integer) 109:
#line 225 "prog_io_item.m"
              if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) == (MR_Integer) 112))
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
                switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) {
#line 225 "prog_io_item.m"
                  case (MR_Integer) 108:
#line 225 "prog_io_item.m"
                    if (MR_offset_streq(4, parse_tree__prog_io_item__Functor_11, (MR_String) "implementation"))
#line 225 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 5;
#line 225 "prog_io_item.m"
                    break;
#line 225 "prog_io_item.m"
                  case (MR_Integer) 111:
#line 225 "prog_io_item.m"
                    if (MR_offset_streq(4, parse_tree__prog_io_item__Functor_11, (MR_String) "import_module"))
#line 225 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 6;
#line 225 "prog_io_item.m"
                    break;
#line 225 "prog_io_item.m"
                }
#line 225 "prog_io_item.m"
              break;
#line 225 "prog_io_item.m"
            case (MR_Integer) 110:
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
              switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) {
#line 225 "prog_io_item.m"
                case (MR_Integer) 99:
#line 225 "prog_io_item.m"
                  if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_11, (MR_String) "include_module"))
#line 225 "prog_io_item.m"
                    parse_tree__prog_io_item__case_num_0 = (MR_Integer) 7;
#line 225 "prog_io_item.m"
                  break;
#line 225 "prog_io_item.m"
                case (MR_Integer) 105:
#line 225 "prog_io_item.m"
                  if (((((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 116)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 6)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 7)) == (MR_Integer) 105))))
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
                    switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 8)) {
#line 225 "prog_io_item.m"
                      case (MR_Integer) 115:
#line 225 "prog_io_item.m"
                        if (MR_offset_streq(9, parse_tree__prog_io_item__Functor_11, (MR_String) "initialise"))
#line 225 "prog_io_item.m"
                          parse_tree__prog_io_item__case_num_0 = (MR_Integer) 8;
#line 225 "prog_io_item.m"
                        break;
#line 225 "prog_io_item.m"
                      case (MR_Integer) 122:
#line 225 "prog_io_item.m"
                        if (MR_offset_streq(9, parse_tree__prog_io_item__Functor_11, (MR_String) "initialize"))
#line 225 "prog_io_item.m"
                          parse_tree__prog_io_item__case_num_0 = (MR_Integer) 8;
#line 225 "prog_io_item.m"
                        break;
#line 225 "prog_io_item.m"
                    }
#line 225 "prog_io_item.m"
                  break;
#line 225 "prog_io_item.m"
                case (MR_Integer) 115:
#line 225 "prog_io_item.m"
                  if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 116))
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
                    switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) {
#line 225 "prog_io_item.m"
                      case (MR_Integer) 0:
#line 225 "prog_io_item.m"
                        parse_tree__prog_io_item__case_num_0 = (MR_Integer) 9;
#line 225 "prog_io_item.m"
                        break;
#line 225 "prog_io_item.m"
                      case (MR_Integer) 97:
#line 225 "prog_io_item.m"
                        if (MR_offset_streq(5, parse_tree__prog_io_item__Functor_11, (MR_String) "instance"))
#line 225 "prog_io_item.m"
                          parse_tree__prog_io_item__case_num_0 = (MR_Integer) 10;
#line 225 "prog_io_item.m"
                        break;
#line 225 "prog_io_item.m"
                    }
#line 225 "prog_io_item.m"
                  break;
#line 225 "prog_io_item.m"
                case (MR_Integer) 116:
#line 225 "prog_io_item.m"
                  if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_11, (MR_String) "interface"))
#line 225 "prog_io_item.m"
                    parse_tree__prog_io_item__case_num_0 = (MR_Integer) 11;
#line 225 "prog_io_item.m"
                  break;
#line 225 "prog_io_item.m"
              }
#line 225 "prog_io_item.m"
              break;
#line 225 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 109:
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) {
#line 225 "prog_io_item.m"
            case (MR_Integer) 111:
#line 225 "prog_io_item.m"
              if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) == (MR_Integer) 100))
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
                switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) {
#line 225 "prog_io_item.m"
                  case (MR_Integer) 101:
#line 225 "prog_io_item.m"
                    if (MR_offset_streq(4, parse_tree__prog_io_item__Functor_11, (MR_String) "mode"))
#line 225 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 12;
#line 225 "prog_io_item.m"
                    break;
#line 225 "prog_io_item.m"
                  case (MR_Integer) 117:
#line 225 "prog_io_item.m"
                    if (MR_offset_streq(4, parse_tree__prog_io_item__Functor_11, (MR_String) "module"))
#line 225 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 13;
#line 225 "prog_io_item.m"
                    break;
#line 225 "prog_io_item.m"
                }
#line 225 "prog_io_item.m"
              break;
#line 225 "prog_io_item.m"
            case (MR_Integer) 117:
#line 225 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_11, (MR_String) "mutable"))
#line 225 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 14;
#line 225 "prog_io_item.m"
              break;
#line 225 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 112:
#line 225 "prog_io_item.m"
          if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) == (MR_Integer) 114))
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) {
#line 225 "prog_io_item.m"
              case (MR_Integer) 97:
#line 225 "prog_io_item.m"
                if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_11, (MR_String) "pragma"))
#line 225 "prog_io_item.m"
                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 15;
#line 225 "prog_io_item.m"
                break;
#line 225 "prog_io_item.m"
              case (MR_Integer) 101:
#line 225 "prog_io_item.m"
                if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_11, (MR_String) "pred"))
#line 225 "prog_io_item.m"
                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 16;
#line 225 "prog_io_item.m"
                break;
#line 225 "prog_io_item.m"
              case (MR_Integer) 111:
#line 225 "prog_io_item.m"
                if (((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 109)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 6)) == (MR_Integer) 101))))
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 7)) {
#line 225 "prog_io_item.m"
                    case (MR_Integer) 0:
#line 225 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 17;
#line 225 "prog_io_item.m"
                      break;
#line 225 "prog_io_item.m"
                    case (MR_Integer) 95:
#line 225 "prog_io_item.m"
                      if (((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 8)) == (MR_Integer) 101)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 9)) == (MR_Integer) 120))))
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
                        switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 10)) {
#line 225 "prog_io_item.m"
                          case (MR_Integer) 99:
#line 225 "prog_io_item.m"
                            if (((((((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 11)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 12)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 13)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 15)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 16)) == (MR_Integer) 101))))
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
                              switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 17)) {
#line 225 "prog_io_item.m"
                                case (MR_Integer) 0:
#line 225 "prog_io_item.m"
                                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 18;
#line 225 "prog_io_item.m"
                                  break;
#line 225 "prog_io_item.m"
                                case (MR_Integer) 95:
#line 225 "prog_io_item.m"
                                  if (MR_offset_streq(18, parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exclusive_exhaustive"))
#line 225 "prog_io_item.m"
                                    parse_tree__prog_io_item__case_num_0 = (MR_Integer) 19;
#line 225 "prog_io_item.m"
                                  break;
#line 225 "prog_io_item.m"
                              }
#line 225 "prog_io_item.m"
                            break;
#line 225 "prog_io_item.m"
                          case (MR_Integer) 104:
#line 225 "prog_io_item.m"
                            if (MR_offset_streq(11, parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exhaustive"))
#line 225 "prog_io_item.m"
                              parse_tree__prog_io_item__case_num_0 = (MR_Integer) 20;
#line 225 "prog_io_item.m"
                            break;
#line 225 "prog_io_item.m"
                        }
#line 225 "prog_io_item.m"
                      break;
#line 225 "prog_io_item.m"
                  }
#line 225 "prog_io_item.m"
                break;
#line 225 "prog_io_item.m"
            }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 116:
#line 225 "prog_io_item.m"
          if (((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) == (MR_Integer) 121)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 101))))
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) {
#line 225 "prog_io_item.m"
              case (MR_Integer) 0:
#line 225 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 21;
#line 225 "prog_io_item.m"
                break;
#line 225 "prog_io_item.m"
              case (MR_Integer) 99:
#line 225 "prog_io_item.m"
                if (MR_offset_streq(5, parse_tree__prog_io_item__Functor_11, (MR_String) "typeclass"))
#line 225 "prog_io_item.m"
                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 22;
#line 225 "prog_io_item.m"
                break;
#line 225 "prog_io_item.m"
            }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 117:
#line 225 "prog_io_item.m"
          if (MR_offset_streq(1, parse_tree__prog_io_item__Functor_11, (MR_String) "use_module"))
#line 225 "prog_io_item.m"
            parse_tree__prog_io_item__case_num_0 = (MR_Integer) 23;
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 118:
#line 225 "prog_io_item.m"
          if (MR_offset_streq(1, parse_tree__prog_io_item__Functor_11, (MR_String) "version_numbers"))
#line 225 "prog_io_item.m"
            parse_tree__prog_io_item__case_num_0 = (MR_Integer) 24;
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
      }
#line 225 "prog_io_item.m"
#line 225 "prog_io_item.m"
      switch (parse_tree__prog_io_item__case_num_0) {
#line 225 "prog_io_item.m"
        default:
#line 225 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 0:
#line 324 "prog_io_item.m"
          {
#line 324 "prog_io_item.m"
            /* case "end_module" */
#line 324 "prog_io_item.m"
            {
#line 324 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_140_140;
#line 324 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__ParentOfModuleName_43;
#line 324 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_59_59;
#line 324 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_60_60;
#line 324 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_91;
#line 324 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__ModuleNameTerm_93;
#line 324 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeModuleNameSym_94;

#line 325 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 325 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 325 "prog_io_item.m"
                {
#line 325 "prog_io_item.m"
                  parse_tree__prog_io_item__ModuleNameTerm_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 325 "prog_io_item.m"
                  parse_tree__prog_io_item__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 325 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 324 "prog_io_item.m"
                    {
#line 330 "prog_io_item.m"
                      {
#line 330 "prog_io_item.m"
                        parse_tree__prog_io_item__V_60_60 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
                      }
#line 330 "prog_io_item.m"
                      {
#line 330 "prog_io_item.m"
                        mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__V_60_60, &parse_tree__prog_io_item__ParentOfModuleName_43);
                      }
#line 332 "prog_io_item.m"
                      {
#line 332 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_module_name_4_p_0(parse_tree__prog_io_item__ParentOfModuleName_43, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ModuleNameTerm_93, &parse_tree__prog_io_item__MaybeModuleNameSym_94);
                      }
#line 340 "prog_io_item.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_94)) == (MR_mktag((MR_Integer) 0))))
#line 342 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeItem0_91 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_94;
#line 340 "prog_io_item.m"
                      else
#line 335 "prog_io_item.m"
                        {
#line 335 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__ItemModuleEnd_44;
#line 335 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__Item_85;
#line 335 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__ModuleNameSym_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNameSym_94, (MR_Integer) 0)));

#line 336 "prog_io_item.m"
                          {
#line 336 "prog_io_item.m"
                            parse_tree__prog_io_item__ItemModuleEnd_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 336 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleEnd_44, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleNameSym_86));
#line 336 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleEnd_44, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 336 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleEnd_44, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 336 "prog_io_item.m"
                          }
#line 338 "prog_io_item.m"
                          parse_tree__prog_io_item__Item_85 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_item__ItemModuleEnd_44);
#line 339 "prog_io_item.m"
                          {
#line 339 "prog_io_item.m"
                            parse_tree__prog_io_item__MaybeItem0_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 339 "prog_io_item.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_91, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_85));
#line 339 "prog_io_item.m"
                          }
#line 335 "prog_io_item.m"
                        }
#line 11178 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_140_140 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 344 "prog_io_item.m"
                      {
#line 344 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_140_140, parse_tree__prog_io_item__MaybeItem0_91, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 344 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 324 "prog_io_item.m"
                    }
#line 325 "prog_io_item.m"
                }
#line 324 "prog_io_item.m"
            }
#line 324 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 1:
#line 268 "prog_io_item.m"
          {
#line 268 "prog_io_item.m"
            /* case "export_module" */
#line 268 "prog_io_item.m"
            {
#line 268 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__ModuleSpecTerm_27;
#line 268 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_68_68;
#line 268 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_69_69;

#line 269 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 269 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 269 "prog_io_item.m"
                {
#line 269 "prog_io_item.m"
                  parse_tree__prog_io_item__ModuleSpecTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 269 "prog_io_item.m"
                  parse_tree__prog_io_item__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 269 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 268 "prog_io_item.m"
                    {
#line 270 "prog_io_item.m"
                      {
#line 270 "prog_io_item.m"
                        parse_tree__prog_io_item__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 270 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 270 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_1));
#line 270 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 270 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 270 "prog_io_item.m"
                      }
#line 270 "prog_io_item.m"
                      {
#line 270 "prog_io_item.m"
                        parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io_item__V_69_69, parse_tree__prog_io_item__ModuleSpecTerm_27, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 270 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 268 "prog_io_item.m"
                    }
#line 269 "prog_io_item.m"
                }
#line 268 "prog_io_item.m"
            }
#line 268 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 2:
#line 286 "prog_io_item.m"
          {
#line 286 "prog_io_item.m"
            /* case "external" */
#line 286 "prog_io_item.m"
            {
#line 286 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_138_138;
#line 286 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__PredSpecTerm_31;
#line 286 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeBackEnd_32;
#line 286 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeSymSpec_37;
#line 286 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_80;
#line 286 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_181_181;
#line 286 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_182_182;

#line 288 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 288 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 288 "prog_io_item.m"
                {
#line 288 "prog_io_item.m"
                  parse_tree__prog_io_item__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 288 "prog_io_item.m"
                  parse_tree__prog_io_item__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 290 "prog_io_item.m"
                  if ((parse_tree__prog_io_item__V_181_181 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "prog_io_item.m"
                    {
#line 288 "prog_io_item.m"
                      parse_tree__prog_io_item__PredSpecTerm_31 = parse_tree__prog_io_item__V_182_182;
#line 289 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeBackEnd_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 288 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 288 "prog_io_item.m"
                    }
#line 290 "prog_io_item.m"
                  else
#line 291 "prog_io_item.m"
                    {
#line 291 "prog_io_item.m"
                      MR_String parse_tree__prog_io_item__BackEndFunctor_34;
#line 291 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__BackEnd_36;
#line 291 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_63_63;
#line 291 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_64_64;
#line 291 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_65_65;
#line 292 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_35_35;

#line 291 "prog_io_item.m"
                      parse_tree__prog_io_item__PredSpecTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_181_181, (MR_Integer) 0)));
#line 291 "prog_io_item.m"
                      parse_tree__prog_io_item__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_181_181, (MR_Integer) 1)));
#line 291 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 291 "prog_io_item.m"
                        {
#line 292 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_182_182)) == (MR_mktag((MR_Integer) 0)));
#line 292 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 292 "prog_io_item.m"
                            {
#line 292 "prog_io_item.m"
                              parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_182_182, (MR_Integer) 0)));
#line 292 "prog_io_item.m"
                              parse_tree__prog_io_item__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_182_182, (MR_Integer) 1)));
#line 292 "prog_io_item.m"
                              parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_182_182, (MR_Integer) 2)));
#line 292 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 291 "prog_io_item.m"
                                {
#line 292 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 292 "prog_io_item.m"
                                  if (parse_tree__prog_io_item__succeeded)
#line 292 "prog_io_item.m"
                                    {
#line 292 "prog_io_item.m"
                                      parse_tree__prog_io_item__BackEndFunctor_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 296 "prog_io_item.m"
                                      if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_34, (MR_String) "low_level_backend") == 0))
#line 297 "prog_io_item.m"
                                        {
#line 297 "prog_io_item.m"
                                          parse_tree__prog_io_item__BackEnd_36 = (MR_Integer) 1;
#line 297 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 297 "prog_io_item.m"
                                        }
#line 296 "prog_io_item.m"
                                      else
#line 296 "prog_io_item.m"
                                      if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_34, (MR_String) "high_level_backend") == 0))
#line 294 "prog_io_item.m"
                                        {
#line 294 "prog_io_item.m"
                                          parse_tree__prog_io_item__BackEnd_36 = (MR_Integer) 0;
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
                                            parse_tree__prog_io_item__MaybeBackEnd_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 300 "prog_io_item.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeBackEnd_32, 0) = ((MR_Box) (parse_tree__prog_io_item__BackEnd_36));
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
                        parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__PredSpecTerm_31, &parse_tree__prog_io_item__MaybeSymSpec_37);
                      }
#line 11418 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_138_138 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 304 "prog_io_item.m"
                      {
#line 304 "prog_io_item.m"
                        parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(parse_tree__prog_io_item__MaybeBackEnd_32, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeSymSpec_37, &parse_tree__prog_io_item__MaybeItem0_80);
                      }
#line 306 "prog_io_item.m"
                      {
#line 306 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_138_138, parse_tree__prog_io_item__MaybeItem0_80, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 306 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 286 "prog_io_item.m"
                    }
#line 288 "prog_io_item.m"
                }
#line 286 "prog_io_item.m"
            }
#line 286 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 3:
#line 419 "prog_io_item.m"
          {
#line 419 "prog_io_item.m"
            /* case "finalise", "finalize" */
#line 419 "prog_io_item.m"
            {
#line 419 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_150_150;
#line 419 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_53_53;
#line 419 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_122;
#line 419 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__SubTerm_123;

#line 420 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 420 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 420 "prog_io_item.m"
                {
#line 420 "prog_io_item.m"
                  parse_tree__prog_io_item__SubTerm_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 420 "prog_io_item.m"
                  parse_tree__prog_io_item__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 420 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 419 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 419 "prog_io_item.m"
                    {
#line 421 "prog_io_item.m"
                      {
#line 421 "prog_io_item.m"
                        parse_tree__prog_io_mutable__parse_finalise_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_123, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_122);
                      }
#line 11480 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_150_150 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 423 "prog_io_item.m"
                      {
#line 423 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_150_150, parse_tree__prog_io_item__MaybeItem0_122, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 423 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 419 "prog_io_item.m"
                    }
#line 420 "prog_io_item.m"
                }
#line 419 "prog_io_item.m"
            }
#line 419 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 4:
#line 254 "prog_io_item.m"
          {
#line 254 "prog_io_item.m"
            /* case "func" */
#line 254 "prog_io_item.m"
            {
#line 254 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__DeclTerm_25;
#line 254 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_70_70;

#line 255 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 255 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 255 "prog_io_item.m"
                {
#line 255 "prog_io_item.m"
                  parse_tree__prog_io_item__DeclTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 255 "prog_io_item.m"
                  parse_tree__prog_io_item__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 255 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 254 "prog_io_item.m"
                    {
#line 256 "prog_io_item.m"
                      {
#line 256 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0((MR_Integer) 1, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__DeclTerm_25, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 256 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 254 "prog_io_item.m"
                    }
#line 255 "prog_io_item.m"
                }
#line 254 "prog_io_item.m"
            }
#line 254 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 5:
#line 279 "prog_io_item.m"
          {
#line 279 "prog_io_item.m"
            /* case "implementation" */
#line 279 "prog_io_item.m"
            {
#line 279 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_134_134;
#line 279 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__ModuleDefn_28;
#line 279 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__ItemModuleDefn_29;
#line 279 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__Item_30;
#line 279 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_79;

#line 280 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__ArgTerms_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 279 "prog_io_item.m"
                {
#line 278 "prog_io_item.m"
                  parse_tree__prog_io_item__ModuleDefn_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 11572 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 281 "prog_io_item.m"
                  {
#line 281 "prog_io_item.m"
                    parse_tree__prog_io_item__ItemModuleDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 281 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_29, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_28));
#line 281 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_29, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 281 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_29, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 281 "prog_io_item.m"
                  }
#line 282 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_30 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_29);
#line 283 "prog_io_item.m"
                  {
#line 283 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeItem0_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_79, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_30));
#line 283 "prog_io_item.m"
                  }
#line 284 "prog_io_item.m"
                  {
#line 284 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_134_134, parse_tree__prog_io_item__MaybeItem0_79, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 284 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 279 "prog_io_item.m"
                }
#line 279 "prog_io_item.m"
            }
#line 279 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 6:
#line 268 "prog_io_item.m"
          {
#line 268 "prog_io_item.m"
            /* case "import_module" */
#line 268 "prog_io_item.m"
            {
#line 268 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__ModuleSpecTerm_155;
#line 268 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_156_156;
#line 268 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_157_157;

#line 269 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 269 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 269 "prog_io_item.m"
                {
#line 269 "prog_io_item.m"
                  parse_tree__prog_io_item__ModuleSpecTerm_155 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 269 "prog_io_item.m"
                  parse_tree__prog_io_item__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 269 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_156_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 268 "prog_io_item.m"
                    {
#line 270 "prog_io_item.m"
                      {
#line 270 "prog_io_item.m"
                        parse_tree__prog_io_item__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 270 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_157_157, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 270 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_157_157, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_2));
#line 270 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_157_157, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 270 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_157_157, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 270 "prog_io_item.m"
                      }
#line 270 "prog_io_item.m"
                      {
#line 270 "prog_io_item.m"
                        parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io_item__V_157_157, parse_tree__prog_io_item__ModuleSpecTerm_155, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 270 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 268 "prog_io_item.m"
                    }
#line 269 "prog_io_item.m"
                }
#line 268 "prog_io_item.m"
            }
#line 268 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 7:
#line 346 "prog_io_item.m"
          {
#line 346 "prog_io_item.m"
            /* case "include_module" */
#line 346 "prog_io_item.m"
            {
#line 346 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_143_143;
#line 346 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_144_144;
#line 346 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__ModuleNamesTerm_45;
#line 346 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeModuleNameSyms_46;
#line 346 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_57_57;
#line 346 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_58_58;
#line 346 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_105;

#line 347 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 347 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 347 "prog_io_item.m"
                {
#line 347 "prog_io_item.m"
                  parse_tree__prog_io_item__ModuleNamesTerm_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 347 "prog_io_item.m"
                  parse_tree__prog_io_item__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 347 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 346 "prog_io_item.m"
                    {
#line 11712 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_143_143 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 348 "prog_io_item.m"
                      {
#line 348 "prog_io_item.m"
                        parse_tree__prog_io_item__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 348 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_58_58, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_6[0]));
#line 348 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_3));
#line 348 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 348 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_58_58, 3) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_9));
#line 348 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_58_58, 4) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 348 "prog_io_item.m"
                      }
#line 348 "prog_io_item.m"
                      {
#line 348 "prog_io_item.m"
                        parse_tree__prog_io_util__parse_list_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_143_143, parse_tree__prog_io_item__V_58_58, parse_tree__prog_io_item__ModuleNamesTerm_45, &parse_tree__prog_io_item__MaybeModuleNameSyms_46);
                      }
#line 357 "prog_io_item.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNameSyms_46)) == (MR_mktag((MR_Integer) 0))))
#line 359 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeItem0_105 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNameSyms_46;
#line 357 "prog_io_item.m"
                      else
#line 351 "prog_io_item.m"
                        {
#line 351 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__ModuleNameSyms_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNameSyms_46, (MR_Integer) 0)));
#line 351 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__ModuleDefn_97;
#line 351 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__ItemModuleDefn_98;
#line 351 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__Item_99;

#line 352 "prog_io_item.m"
                          {
#line 352 "prog_io_item.m"
                            parse_tree__prog_io_item__ModuleDefn_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "prog_io_item.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 352 "prog_io_item.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_97, 1) = ((MR_Box) (parse_tree__prog_io_item__ModuleNameSyms_47));
#line 352 "prog_io_item.m"
                          }
#line 353 "prog_io_item.m"
                          {
#line 353 "prog_io_item.m"
                            parse_tree__prog_io_item__ItemModuleDefn_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 353 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_98, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_97));
#line 353 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_98, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 353 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_98, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 353 "prog_io_item.m"
                          }
#line 355 "prog_io_item.m"
                          parse_tree__prog_io_item__Item_99 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_98);
#line 356 "prog_io_item.m"
                          {
#line 356 "prog_io_item.m"
                            parse_tree__prog_io_item__MaybeItem0_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 356 "prog_io_item.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_105, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_99));
#line 356 "prog_io_item.m"
                          }
#line 351 "prog_io_item.m"
                        }
#line 11786 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_144_144 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 361 "prog_io_item.m"
                      {
#line 361 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_144_144, parse_tree__prog_io_item__MaybeItem0_105, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 361 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 346 "prog_io_item.m"
                    }
#line 347 "prog_io_item.m"
                }
#line 346 "prog_io_item.m"
            }
#line 346 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 8:
#line 411 "prog_io_item.m"
          {
#line 411 "prog_io_item.m"
            /* case "initialise", "initialize" */
#line 411 "prog_io_item.m"
            {
#line 411 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_149_149;
#line 411 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_54_54;
#line 411 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_120;
#line 411 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__SubTerm_121;

#line 412 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 412 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 412 "prog_io_item.m"
                {
#line 412 "prog_io_item.m"
                  parse_tree__prog_io_item__SubTerm_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 412 "prog_io_item.m"
                  parse_tree__prog_io_item__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 412 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 411 "prog_io_item.m"
                    {
#line 413 "prog_io_item.m"
                      {
#line 413 "prog_io_item.m"
                        parse_tree__prog_io_mutable__parse_initialise_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_121, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_120);
                      }
#line 11843 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_149_149 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 415 "prog_io_item.m"
                      {
#line 415 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_149_149, parse_tree__prog_io_item__MaybeItem0_120, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 415 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 411 "prog_io_item.m"
                    }
#line 412 "prog_io_item.m"
                }
#line 411 "prog_io_item.m"
            }
#line 411 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 9:
#line 230 "prog_io_item.m"
          {
#line 230 "prog_io_item.m"
            /* case "inst" */
#line 230 "prog_io_item.m"
            {
#line 230 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_125_125;
#line 230 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__InstDeclTerm_18;
#line 230 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_19;
#line 230 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_77_77;

#line 231 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 231 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 231 "prog_io_item.m"
                {
#line 231 "prog_io_item.m"
                  parse_tree__prog_io_item__InstDeclTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 231 "prog_io_item.m"
                  parse_tree__prog_io_item__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 231 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_77_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 230 "prog_io_item.m"
                    {
#line 232 "prog_io_item.m"
                      {
#line 232 "prog_io_item.m"
                        parse_tree__prog_io_mode_defn__parse_inst_defn_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__InstDeclTerm_18, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_19);
                      }
#line 11900 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_125_125 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 234 "prog_io_item.m"
                      {
#line 234 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_125_125, parse_tree__prog_io_item__MaybeItem0_19, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 234 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 230 "prog_io_item.m"
                    }
#line 231 "prog_io_item.m"
                }
#line 230 "prog_io_item.m"
            }
#line 230 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 10:
#line 397 "prog_io_item.m"
          {
#line 397 "prog_io_item.m"
            /* case "instance" */
#line 397 "prog_io_item.m"
            {
#line 397 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_148_148;
#line 397 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItemInstance_51;
#line 397 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_118;

#line 398 "prog_io_item.m"
              {
#line 398 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_typeclass__parse_instance_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItemInstance_51);
              }
#line 397 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 397 "prog_io_item.m"
                {
#line 403 "prog_io_item.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItemInstance_51)) == (MR_mktag((MR_Integer) 0))))
#line 405 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeItem0_118 = (MR_Word) parse_tree__prog_io_item__MaybeItemInstance_51;
#line 403 "prog_io_item.m"
                  else
#line 401 "prog_io_item.m"
                    {
#line 401 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__ItemInstance_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItemInstance_51, (MR_Integer) 0)));
#line 401 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_55_55;

#line 402 "prog_io_item.m"
                      {
#line 402 "prog_io_item.m"
                        parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 402 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_55_55, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemInstance_52));
#line 402 "prog_io_item.m"
                      }
#line 402 "prog_io_item.m"
                      {
#line 402 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeItem0_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 402 "prog_io_item.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_118, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 402 "prog_io_item.m"
                      }
#line 401 "prog_io_item.m"
                    }
#line 11976 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_148_148 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 407 "prog_io_item.m"
                  {
#line 407 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__MaybeItem0_118, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 407 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 397 "prog_io_item.m"
                }
#line 397 "prog_io_item.m"
            }
#line 397 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 11:
#line 279 "prog_io_item.m"
          {
#line 279 "prog_io_item.m"
            /* case "interface" */
#line 279 "prog_io_item.m"
            {
#line 279 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_134_162;
#line 279 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__ModuleDefn_158;
#line 279 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__ItemModuleDefn_159;
#line 279 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__Item_160;
#line 279 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_161;

#line 280 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__ArgTerms_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 279 "prog_io_item.m"
                {
#line 275 "prog_io_item.m"
                  parse_tree__prog_io_item__ModuleDefn_158 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 12020 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_134_162 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 281 "prog_io_item.m"
                  {
#line 281 "prog_io_item.m"
                    parse_tree__prog_io_item__ItemModuleDefn_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 281 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_159, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_158));
#line 281 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_159, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 281 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_159, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 281 "prog_io_item.m"
                  }
#line 282 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_160 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_159);
#line 283 "prog_io_item.m"
                  {
#line 283 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeItem0_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 283 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_161, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_160));
#line 283 "prog_io_item.m"
                  }
#line 284 "prog_io_item.m"
                  {
#line 284 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_134_162, parse_tree__prog_io_item__MaybeItem0_161, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 284 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 279 "prog_io_item.m"
                }
#line 279 "prog_io_item.m"
            }
#line 279 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 12:
#line 236 "prog_io_item.m"
          {
#line 236 "prog_io_item.m"
            /* case "mode" */
#line 236 "prog_io_item.m"
            {
#line 236 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__SubTerm_20;
#line 236 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_71_71;
#line 242 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__HeadTerm_21;
#line 242 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__BodyTerm_22;
#line 238 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_72_72;
#line 238 "prog_io_item.m"
              MR_String parse_tree__prog_io_item__V_73_73;
#line 238 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_74_74;
#line 238 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_75_75;
#line 238 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_76_76;
#line 238 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_23_23;

#line 237 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 237 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 237 "prog_io_item.m"
                {
#line 237 "prog_io_item.m"
                  parse_tree__prog_io_item__SubTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 237 "prog_io_item.m"
                  parse_tree__prog_io_item__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 237 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 236 "prog_io_item.m"
                    {
#line 238 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__SubTerm_20)) == (MR_mktag((MR_Integer) 0)));
#line 238 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 238 "prog_io_item.m"
                        {
#line 238 "prog_io_item.m"
                          parse_tree__prog_io_item__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 0)));
#line 238 "prog_io_item.m"
                          parse_tree__prog_io_item__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 1)));
#line 238 "prog_io_item.m"
                          parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 2)));
#line 238 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_72_72)) == (MR_mktag((MR_Integer) 0)));
#line 238 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 238 "prog_io_item.m"
                            {
#line 238 "prog_io_item.m"
                              parse_tree__prog_io_item__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_72_72, (MR_Integer) 0)));
#line 238 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_73_73, (MR_String) "==") == 0);
#line 238 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 238 "prog_io_item.m"
                                {
#line 238 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_74_74)) == (MR_mktag((MR_Integer) 1)));
#line 238 "prog_io_item.m"
                                  if (parse_tree__prog_io_item__succeeded)
#line 238 "prog_io_item.m"
                                    {
#line 238 "prog_io_item.m"
                                      parse_tree__prog_io_item__HeadTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, (MR_Integer) 0)));
#line 238 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, (MR_Integer) 1)));
#line 238 "prog_io_item.m"
                                      parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_75_75)) == (MR_mktag((MR_Integer) 1)));
#line 238 "prog_io_item.m"
                                      if (parse_tree__prog_io_item__succeeded)
#line 238 "prog_io_item.m"
                                        {
#line 238 "prog_io_item.m"
                                          parse_tree__prog_io_item__BodyTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, (MR_Integer) 0)));
#line 238 "prog_io_item.m"
                                          parse_tree__prog_io_item__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, (MR_Integer) 1)));
#line 238 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "prog_io_item.m"
                                        }
#line 238 "prog_io_item.m"
                                    }
#line 238 "prog_io_item.m"
                                }
#line 238 "prog_io_item.m"
                            }
#line 238 "prog_io_item.m"
                        }
#line 242 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 240 "prog_io_item.m"
                        {
#line 240 "prog_io_item.m"
                          parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__HeadTerm_21, parse_tree__prog_io_item__BodyTerm_22, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
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
#line 236 "prog_io_item.m"
                    }
#line 237 "prog_io_item.m"
                }
#line 236 "prog_io_item.m"
            }
#line 236 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 13:
#line 308 "prog_io_item.m"
          {
#line 308 "prog_io_item.m"
            /* case "module" */
#line 308 "prog_io_item.m"
            {
#line 308 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_139_139;
#line 308 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__ModuleNameTerm_38;
#line 308 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeModuleNameSym_39;
#line 308 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_61_61;
#line 308 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_83;

#line 309 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 309 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 309 "prog_io_item.m"
                {
#line 309 "prog_io_item.m"
                  parse_tree__prog_io_item__ModuleNameTerm_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 309 "prog_io_item.m"
                  parse_tree__prog_io_item__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 309 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 308 "prog_io_item.m"
                    {
#line 310 "prog_io_item.m"
                      {
#line 310 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_module_name_4_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ModuleNameTerm_38, &parse_tree__prog_io_item__MaybeModuleNameSym_39);
                      }
#line 318 "prog_io_item.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_39)) == (MR_mktag((MR_Integer) 0))))
#line 320 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeItem0_83 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNameSym_39;
#line 318 "prog_io_item.m"
                      else
#line 313 "prog_io_item.m"
                        {
#line 313 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__ModuleNameSym_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNameSym_39, (MR_Integer) 0)));
#line 313 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__ItemModuleStart_41;
#line 313 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__Item_81;

#line 314 "prog_io_item.m"
                          {
#line 314 "prog_io_item.m"
                            parse_tree__prog_io_item__ItemModuleStart_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 314 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleStart_41, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleNameSym_40));
#line 314 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleStart_41, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 314 "prog_io_item.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleStart_41, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 314 "prog_io_item.m"
                          }
#line 316 "prog_io_item.m"
                          parse_tree__prog_io_item__Item_81 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__ItemModuleStart_41);
#line 317 "prog_io_item.m"
                          {
#line 317 "prog_io_item.m"
                            parse_tree__prog_io_item__MaybeItem0_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 317 "prog_io_item.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_83, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_81));
#line 317 "prog_io_item.m"
                          }
#line 313 "prog_io_item.m"
                        }
#line 12267 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_139_139 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 322 "prog_io_item.m"
                      {
#line 322 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_139_139, parse_tree__prog_io_item__MaybeItem0_83, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 322 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 308 "prog_io_item.m"
                    }
#line 309 "prog_io_item.m"
                }
#line 308 "prog_io_item.m"
            }
#line 308 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 14:
#line 425 "prog_io_item.m"
          {
#line 425 "prog_io_item.m"
            /* case "mutable" */
#line 425 "prog_io_item.m"
            {
#line 425 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_151_151;
#line 425 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_124;

#line 426 "prog_io_item.m"
              {
#line 426 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_mutable__parse_mutable_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_124);
              }
#line 425 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 425 "prog_io_item.m"
                {
#line 12308 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_151_151 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 428 "prog_io_item.m"
                  {
#line 428 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_151_151, parse_tree__prog_io_item__MaybeItem0_124, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 428 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 425 "prog_io_item.m"
                }
#line 425 "prog_io_item.m"
            }
#line 425 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 15:
#line 363 "prog_io_item.m"
          {
#line 363 "prog_io_item.m"
            /* case "pragma" */
#line 363 "prog_io_item.m"
            {
#line 363 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_145_145;
#line 363 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_110;

#line 364 "prog_io_item.m"
              {
#line 364 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_pragma__parse_pragma_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_110);
              }
#line 363 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 363 "prog_io_item.m"
                {
#line 12347 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_145_145 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 366 "prog_io_item.m"
                  {
#line 366 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_145_145, parse_tree__prog_io_item__MaybeItem0_110, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 366 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 363 "prog_io_item.m"
                }
#line 363 "prog_io_item.m"
            }
#line 363 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 16:
#line 254 "prog_io_item.m"
          {
#line 254 "prog_io_item.m"
            /* case "pred" */
#line 254 "prog_io_item.m"
            {
#line 254 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__DeclTerm_164;
#line 254 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_165_165;

#line 255 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 255 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 255 "prog_io_item.m"
                {
#line 255 "prog_io_item.m"
                  parse_tree__prog_io_item__DeclTerm_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 255 "prog_io_item.m"
                  parse_tree__prog_io_item__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 255 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_165_165 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 254 "prog_io_item.m"
                    {
#line 256 "prog_io_item.m"
                      {
#line 256 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0((MR_Integer) 0, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__DeclTerm_164, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 256 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 254 "prog_io_item.m"
                    }
#line 255 "prog_io_item.m"
                }
#line 254 "prog_io_item.m"
            }
#line 254 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 17:
#line 380 "prog_io_item.m"
          {
#line 380 "prog_io_item.m"
            /* case "promise" */
#line 380 "prog_io_item.m"
            {
#line 380 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_146_146;
#line 380 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_111;

#line 381 "prog_io_item.m"
              {
#line 381 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 3, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_111);
              }
#line 380 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 380 "prog_io_item.m"
                {
#line 12432 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_146_146 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 383 "prog_io_item.m"
                  {
#line 383 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_146_146, parse_tree__prog_io_item__MaybeItem0_111, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 383 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 380 "prog_io_item.m"
                }
#line 380 "prog_io_item.m"
            }
#line 380 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 18:
#line 380 "prog_io_item.m"
          {
#line 380 "prog_io_item.m"
            /* case "promise_exclusive" */
#line 380 "prog_io_item.m"
            {
#line 380 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_146_168;
#line 380 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_167;

#line 381 "prog_io_item.m"
              {
#line 381 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_167);
              }
#line 380 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 380 "prog_io_item.m"
                {
#line 12471 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_146_168 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 383 "prog_io_item.m"
                  {
#line 383 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_146_168, parse_tree__prog_io_item__MaybeItem0_167, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 383 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 380 "prog_io_item.m"
                }
#line 380 "prog_io_item.m"
            }
#line 380 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 19:
#line 380 "prog_io_item.m"
          {
#line 380 "prog_io_item.m"
            /* case "promise_exclusive_exhaustive" */
#line 380 "prog_io_item.m"
            {
#line 380 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_146_171;
#line 380 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_170;

#line 381 "prog_io_item.m"
              {
#line 381 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 2, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_170);
              }
#line 380 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 380 "prog_io_item.m"
                {
#line 12510 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_146_171 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 383 "prog_io_item.m"
                  {
#line 383 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_146_171, parse_tree__prog_io_item__MaybeItem0_170, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 383 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 380 "prog_io_item.m"
                }
#line 380 "prog_io_item.m"
            }
#line 380 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 20:
#line 380 "prog_io_item.m"
          {
#line 380 "prog_io_item.m"
            /* case "promise_exhaustive" */
#line 380 "prog_io_item.m"
            {
#line 380 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_146_174;
#line 380 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_173;

#line 381 "prog_io_item.m"
              {
#line 381 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_173);
              }
#line 380 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 380 "prog_io_item.m"
                {
#line 12549 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_146_174 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 383 "prog_io_item.m"
                  {
#line 383 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_146_174, parse_tree__prog_io_item__MaybeItem0_173, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 383 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 380 "prog_io_item.m"
                }
#line 380 "prog_io_item.m"
            }
#line 380 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 21:
#line 225 "prog_io_item.m"
          {
#line 225 "prog_io_item.m"
            /* case "type" */
#line 225 "prog_io_item.m"
            {
#line 225 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeDefnTerm_17;
#line 225 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_78_78;

#line 226 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 226 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 226 "prog_io_item.m"
                {
#line 226 "prog_io_item.m"
                  parse_tree__prog_io_item__TypeDefnTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 226 "prog_io_item.m"
                  parse_tree__prog_io_item__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 226 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 225 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 225 "prog_io_item.m"
                    {
#line 227 "prog_io_item.m"
                      {
#line 227 "prog_io_item.m"
                        parse_tree__prog_io_type_defn__parse_type_defn_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__TypeDefnTerm_17, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 227 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 225 "prog_io_item.m"
                    }
#line 226 "prog_io_item.m"
                }
#line 225 "prog_io_item.m"
            }
#line 225 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 22:
#line 385 "prog_io_item.m"
          {
#line 385 "prog_io_item.m"
            /* case "typeclass" */
#line 385 "prog_io_item.m"
            {
#line 385 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_147_147;
#line 385 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItemTypeClass_49;
#line 385 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_114;

#line 386 "prog_io_item.m"
              {
#line 386 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_typeclass__parse_typeclass_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItemTypeClass_49);
              }
#line 385 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 385 "prog_io_item.m"
                {
#line 391 "prog_io_item.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItemTypeClass_49)) == (MR_mktag((MR_Integer) 0))))
#line 393 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeItem0_114 = (MR_Word) parse_tree__prog_io_item__MaybeItemTypeClass_49;
#line 391 "prog_io_item.m"
                  else
#line 389 "prog_io_item.m"
                    {
#line 389 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__ItemTypeClass_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItemTypeClass_49, (MR_Integer) 0)));
#line 389 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_56_56;

#line 390 "prog_io_item.m"
                      {
#line 390 "prog_io_item.m"
                        parse_tree__prog_io_item__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 390 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemTypeClass_50));
#line 390 "prog_io_item.m"
                      }
#line 390 "prog_io_item.m"
                      {
#line 390 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeItem0_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 390 "prog_io_item.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_114, 0) = ((MR_Box) (parse_tree__prog_io_item__V_56_56));
#line 390 "prog_io_item.m"
                      }
#line 389 "prog_io_item.m"
                    }
#line 12669 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 395 "prog_io_item.m"
                  {
#line 395 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_147_147, parse_tree__prog_io_item__MaybeItem0_114, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 395 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 385 "prog_io_item.m"
                }
#line 385 "prog_io_item.m"
            }
#line 385 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 23:
#line 268 "prog_io_item.m"
          {
#line 268 "prog_io_item.m"
            /* case "use_module" */
#line 268 "prog_io_item.m"
            {
#line 268 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__ModuleSpecTerm_178;
#line 268 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_179_179;
#line 268 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_180_180;

#line 269 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 269 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 269 "prog_io_item.m"
                {
#line 269 "prog_io_item.m"
                  parse_tree__prog_io_item__ModuleSpecTerm_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 269 "prog_io_item.m"
                  parse_tree__prog_io_item__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 269 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_179_179 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 268 "prog_io_item.m"
                    {
#line 270 "prog_io_item.m"
                      {
#line 270 "prog_io_item.m"
                        parse_tree__prog_io_item__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 270 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 270 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_attributed_decl_8_p_0_4));
#line 270 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 270 "prog_io_item.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_180_180, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 270 "prog_io_item.m"
                      }
#line 270 "prog_io_item.m"
                      {
#line 270 "prog_io_item.m"
                        parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io_item__V_180_180, parse_tree__prog_io_item__ModuleSpecTerm_178, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 270 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 268 "prog_io_item.m"
                    }
#line 269 "prog_io_item.m"
                }
#line 268 "prog_io_item.m"
            }
#line 268 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
        case (MR_Integer) 24:
#line 430 "prog_io_item.m"
          {
#line 430 "prog_io_item.m"
            /* case "version_numbers" */
#line 430 "prog_io_item.m"
            {
#line 430 "prog_io_item.m"
              return parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
            }
#line 430 "prog_io_item.m"
          }
#line 225 "prog_io_item.m"
          break;
#line 225 "prog_io_item.m"
      }
#line 225 "prog_io_item.m"
    }
#line 225 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 225 "prog_io_item.m"
  }
#line 218 "prog_io_item.m"
}

#line 177 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(
#line 177 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 177 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_8,
#line 177 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_9,
#line 177 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22,
#line 177 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 177 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_12)
#line 177 "prog_io_item.m"
{
#line 202 "prog_io_item.m"
  while (MR_TRUE)
#line 202 "prog_io_item.m"
    {
#line 202 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 202 "prog_io_item.m"
      {
#line 202 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 202 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__Functor_13;
#line 202 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Args_14;
#line 202 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_15;
#line 182 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;

#line 182 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 182 "prog_io_item.m"
          {
#line 182 "prog_io_item.m"
            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 0)));
#line 182 "prog_io_item.m"
            parse_tree__prog_io_item__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 1)));
#line 182 "prog_io_item.m"
            parse_tree__prog_io_item__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 2)));
#line 182 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 182 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 182 "prog_io_item.m"
              parse_tree__prog_io_item__Functor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_23_23, (MR_Integer) 0)));
#line 182 "prog_io_item.m"
          }
#line 202 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 189 "prog_io_item.m"
          {
#line 189 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Attribute_16;
#line 189 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__SubTerm_17;

#line 184 "prog_io_item.m"
            {
#line 184 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__parse_decl_attribute_4_p_0(parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__Args_14, &parse_tree__prog_io_item__Attribute_16, &parse_tree__prog_io_item__SubTerm_17);
            }
#line 189 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 186 "prog_io_item.m"
              {
#line 186 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24;
#line 186 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_25_25;

#line 186 "prog_io_item.m"
                {
#line 186 "prog_io_item.m"
                  parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 186 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Attribute_16));
#line 186 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 186 "prog_io_item.m"
                }
#line 186 "prog_io_item.m"
                {
#line 186 "prog_io_item.m"
                  parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24, 0) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 186 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24, 1) = ((MR_Box) (parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22));
#line 186 "prog_io_item.m"
                }
#line 187 "prog_io_item.m"
                /* direct tailcall eliminated */
#line 187 "prog_io_item.m"
                {
#line 187 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__Term__tmp_copy_9 = parse_tree__prog_io_item__SubTerm_17;
#line 187 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_22 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24;

#line 187 "prog_io_item.m"
                  parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_22;
#line 187 "prog_io_item.m"
                  parse_tree__prog_io_item__Term_9 = parse_tree__prog_io_item__Term__tmp_copy_9;
#line 187 "prog_io_item.m"
                }
#line 187 "prog_io_item.m"
                continue;
#line 186 "prog_io_item.m"
              }
#line 189 "prog_io_item.m"
            else
#line 194 "prog_io_item.m"
              {
#line 194 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeItemPrime_18;

#line 190 "prog_io_item.m"
                {
#line 190 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_attributed_decl_8_p_0(parse_tree__prog_io_item__ModuleName_7, parse_tree__prog_io_item__VarSet_8, parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__Args_14, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22, parse_tree__prog_io_item__Context_15, parse_tree__prog_io_item__SeqNum_11, &parse_tree__prog_io_item__MaybeItemPrime_18);
                }
#line 194 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 193 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_12 = parse_tree__prog_io_item__MaybeItemPrime_18;
#line 194 "prog_io_item.m"
                else
#line 195 "prog_io_item.m"
                  {
#line 195 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__TermStr_19;
#line 195 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Pieces_20;
#line 195 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_21;
#line 195 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_29_29;
#line 195 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_31_31;
#line 195 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_32_32;
#line 195 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_41_41;
#line 195 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_42_42;
#line 195 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_43_43;
#line 195 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_44_44;
#line 195 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_47_47;

#line 195 "prog_io_item.m"
                    {
#line 195 "prog_io_item.m"
                      parse_tree__prog_io_item__TermStr_19 = parse_tree__mercury_to_mercury__mercury_term_to_string_3_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__VarSet_8, (MR_Integer) 0, parse_tree__prog_io_item__Term_9);
                    }
#line 197 "prog_io_item.m"
                    {
#line 197 "prog_io_item.m"
                      parse_tree__prog_io_item__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 197 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_19));
#line 197 "prog_io_item.m"
                    }
#line 197 "prog_io_item.m"
                    {
#line 197 "prog_io_item.m"
                      parse_tree__prog_io_item__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 197 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])));
#line 197 "prog_io_item.m"
                    }
#line 196 "prog_io_item.m"
                    {
#line 196 "prog_io_item.m"
                      parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 196 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_item__V_31_31));
#line 196 "prog_io_item.m"
                    }
#line 196 "prog_io_item.m"
                    {
#line 196 "prog_io_item.m"
                      parse_tree__prog_io_item__Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[96])));
#line 196 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_20, 1) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 196 "prog_io_item.m"
                    }
#line 199 "prog_io_item.m"
                    {
#line 199 "prog_io_item.m"
                      parse_tree__prog_io_item__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 199 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_20));
#line 199 "prog_io_item.m"
                    }
#line 199 "prog_io_item.m"
                    {
#line 199 "prog_io_item.m"
                      parse_tree__prog_io_item__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_item__V_44_44));
#line 199 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 199 "prog_io_item.m"
                    }
#line 199 "prog_io_item.m"
                    {
#line 199 "prog_io_item.m"
                      parse_tree__prog_io_item__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 199 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 199 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_item__V_43_43));
#line 199 "prog_io_item.m"
                    }
#line 199 "prog_io_item.m"
                    {
#line 199 "prog_io_item.m"
                      parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 199 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 199 "prog_io_item.m"
                    }
#line 198 "prog_io_item.m"
                    {
#line 198 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 198 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 198 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 2) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 198 "prog_io_item.m"
                    }
#line 200 "prog_io_item.m"
                    {
#line 200 "prog_io_item.m"
                      parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_21));
#line 200 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 200 "prog_io_item.m"
                    }
#line 200 "prog_io_item.m"
                    {
#line 200 "prog_io_item.m"
                      MR_Word base;
#line 200 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 200 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 200 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 200 "prog_io_item.m"
                    }
#line 195 "prog_io_item.m"
                  }
#line 194 "prog_io_item.m"
              }
#line 189 "prog_io_item.m"
          }
#line 202 "prog_io_item.m"
        else
#line 203 "prog_io_item.m"
          {
#line 203 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_62_62;
#line 203 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_63_63;
#line 203 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_68_68;
#line 203 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Context_73;
#line 203 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_75;

#line 203 "prog_io_item.m"
            {
#line 203 "prog_io_item.m"
              parse_tree__prog_io_item__Context_73 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_9);
            }
#line 207 "prog_io_item.m"
            {
#line 207 "prog_io_item.m"
              parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_73));
#line 207 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[97])));
#line 207 "prog_io_item.m"
            }
#line 207 "prog_io_item.m"
            {
#line 207 "prog_io_item.m"
              parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 207 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "prog_io_item.m"
            }
#line 206 "prog_io_item.m"
            {
#line 206 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 206 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 206 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 2) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 206 "prog_io_item.m"
            }
#line 208 "prog_io_item.m"
            {
#line 208 "prog_io_item.m"
              parse_tree__prog_io_item__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_75));
#line 208 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "prog_io_item.m"
            }
#line 208 "prog_io_item.m"
            {
#line 208 "prog_io_item.m"
              MR_Word base;
#line 208 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 208 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 208 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_68_68));
#line 208 "prog_io_item.m"
            }
#line 203 "prog_io_item.m"
          }
#line 202 "prog_io_item.m"
      }
#line 202 "prog_io_item.m"
      break;
#line 202 "prog_io_item.m"
    }
#line 177 "prog_io_item.m"
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

#line 134 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_1(
#line 134 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 134 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 134 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 134 "prog_io_item.m"
{
#line 134 "prog_io_item.m"
  {
#line 134 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 134 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_74;

#line 134 "prog_io_item.m"
    {
#line 134 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__134__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_74);
    }
#line 134 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_74));
#line 134 "prog_io_item.m"
  }
#line 134 "prog_io_item.m"
}

#line 113 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0(
#line 113 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 113 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadTerm_9,
#line 113 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__BodyTerm0_10,
#line 113 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ProgVarSet0_11,
#line 113 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 113 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 113 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 113 "prog_io_item.m"
{
#line 117 "prog_io_item.m"
  {
#line 117 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 117 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeBodyGoal_16;
#line 117 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet_17;

#line 119 "prog_io_item.m"
    {
#line 119 "prog_io_item.m"
      parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_item__BodyTerm0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__MaybeBodyGoal_16, parse_tree__prog_io_item__ProgVarSet0_11, &parse_tree__prog_io_item__ProgVarSet_17);
    }
#line 160 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeBodyGoal_16)) == (MR_mktag((MR_Integer) 0))))
#line 162 "prog_io_item.m"
      *parse_tree__prog_io_item__MaybeItem_14 = (MR_Word) parse_tree__prog_io_item__MaybeBodyGoal_16;
#line 160 "prog_io_item.m"
    else
#line 122 "prog_io_item.m"
      {
#line 122 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_72_72 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 122 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__BodyGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeBodyGoal_16, (MR_Integer) 0)));
#line 122 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__VarSet_19;
#line 144 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncHeadTerm_23;
#line 144 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;
#line 126 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncHeadTerm0_20;
#line 126 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 126 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_34_34;
#line 126 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 126 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_37_37;
#line 125 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 126 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncResultTerm_21;

#line 123 "prog_io_item.m"
        {
#line 123 "prog_io_item.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ProgVarSet_17, &parse_tree__prog_io_item__VarSet_19);
        }
#line 125 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 125 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 125 "prog_io_item.m"
          {
#line 125 "prog_io_item.m"
            parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_9, (MR_Integer) 0)));
#line 125 "prog_io_item.m"
            parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_9, (MR_Integer) 1)));
#line 125 "prog_io_item.m"
            parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_9, (MR_Integer) 2)));
#line 125 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 125 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 125 "prog_io_item.m"
              {
#line 125 "prog_io_item.m"
                parse_tree__prog_io_item__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_33_33, (MR_Integer) 0)));
#line 125 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_34_34, (MR_String) "=") == 0);
#line 126 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 126 "prog_io_item.m"
                  {
#line 126 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 126 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 126 "prog_io_item.m"
                      {
#line 126 "prog_io_item.m"
                        parse_tree__prog_io_item__FuncHeadTerm0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 0)));
#line 126 "prog_io_item.m"
                        parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 1)));
#line 126 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 126 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 126 "prog_io_item.m"
                          {
#line 126 "prog_io_item.m"
                            parse_tree__prog_io_item__FuncResultTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 126 "prog_io_item.m"
                            parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 1)));
#line 126 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 126 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 126 "prog_io_item.m"
                              {
#line 127 "prog_io_item.m"
                                {
#line 127 "prog_io_item.m"
                                  parse_tree__prog_io_item__FuncHeadTerm_23 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__FuncHeadTerm0_20);
                                }
#line 127 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 126 "prog_io_item.m"
                              }
#line 126 "prog_io_item.m"
                          }
#line 126 "prog_io_item.m"
                      }
#line 126 "prog_io_item.m"
                  }
#line 125 "prog_io_item.m"
              }
#line 125 "prog_io_item.m"
          }
#line 144 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 129 "prog_io_item.m"
          {
#line 129 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFunctor_25;

#line 130 "prog_io_item.m"
            {
#line 130 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__FuncHeadTerm_23, parse_tree__prog_io_item__VarSet_19, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[93]), &parse_tree__prog_io_item__MaybeFunctor_25);
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
#line 133 "prog_io_item.m"
              {
#line 133 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeInfo_77_77 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[0];
#line 133 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_25, (MR_Integer) 0)));
#line 133 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_25, (MR_Integer) 1)));
#line 133 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ProgArgTerms_28;
#line 133 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemClause_29;
#line 133 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_30;
#line 133 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_42_42;

#line 134 "prog_io_item.m"
                {
#line 134 "prog_io_item.m"
                  parse_tree__prog_io_item__V_42_42 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeInfo_77_77, parse_tree__prog_io_item__ArgTerms0_27, parse_tree__prog_io_item__V_36_36);
                }
#line 134 "prog_io_item.m"
                {
#line 134 "prog_io_item.m"
                  mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeInfo_77_77, (MR_Word) &parse_tree__prog_io_item_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[2], parse_tree__prog_io_item__V_42_42, &parse_tree__prog_io_item__ProgArgTerms_28);
                }
#line 136 "prog_io_item.m"
                {
#line 136 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemClause_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 136 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_26));
#line 136 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 1) = ((MR_Box) ((MR_Integer) 1));
#line 136 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgArgTerms_28));
#line 136 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 136 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 4) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_17));
#line 136 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 5) = ((MR_Box) (parse_tree__prog_io_item__BodyGoal_18));
#line 136 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 136 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 136 "prog_io_item.m"
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
#line 133 "prog_io_item.m"
              }
#line 129 "prog_io_item.m"
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
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__HeadTerm_9, parse_tree__prog_io_item__VarSet_19, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[95]), &parse_tree__prog_io_item__MaybeFunctor_64);
            }
#line 155 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctor_64)) == (MR_mktag((MR_Integer) 0))))
#line 156 "prog_io_item.m"
              {
#line 156 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 0)));

#line 157 "prog_io_item.m"
                {
#line 157 "prog_io_item.m"
                  MR_Word base;
#line 157 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 157 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 157 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_57));
#line 157 "prog_io_item.m"
                }
#line 156 "prog_io_item.m"
              }
#line 155 "prog_io_item.m"
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
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_53));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 1) = ((MR_Box) ((MR_Integer) 0));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgArgTerms_54));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 4) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_17));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 5) = ((MR_Box) (parse_tree__prog_io_item__BodyGoal_18));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 151 "prog_io_item.m"
                }
#line 153 "prog_io_item.m"
                {
#line 153 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 153 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_56, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemClause_55));
#line 153 "prog_io_item.m"
                }
#line 154 "prog_io_item.m"
                {
#line 154 "prog_io_item.m"
                  MR_Word base;
#line 154 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 154 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_56));
#line 154 "prog_io_item.m"
                }
#line 149 "prog_io_item.m"
              }
#line 145 "prog_io_item.m"
          }
#line 122 "prog_io_item.m"
      }
#line 117 "prog_io_item.m"
  }
#line 113 "prog_io_item.m"
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
#line 167 "prog_io_item.m"
  {
#line 167 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 168 "prog_io_item.m"
    {
#line 168 "prog_io_item.m"
      parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Term_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_item__SeqNum_9, parse_tree__prog_io_item__MaybeItem_10);
#line 168 "prog_io_item.m"
      return;
    }
#line 167 "prog_io_item.m"
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
#line 85 "prog_io_item.m"
  {
#line 85 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 85 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DeclTerm_11;
#line 81 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_23_23;
#line 81 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_24_24;
#line 81 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_25_25;
#line 81 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_26_26;
#line 81 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___DeclContext_12;

#line 81 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 81 "prog_io_item.m"
      {
#line 81 "prog_io_item.m"
        parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 81 "prog_io_item.m"
        parse_tree__prog_io_item__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 81 "prog_io_item.m"
        parse_tree__prog_io_item___DeclContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 81 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 81 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 81 "prog_io_item.m"
          {
#line 81 "prog_io_item.m"
            parse_tree__prog_io_item__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_23_23, (MR_Integer) 0)));
#line 81 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_24_24, (MR_String) ":-") == 0);
#line 81 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 81 "prog_io_item.m"
              {
#line 81 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 81 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 81 "prog_io_item.m"
                  {
#line 81 "prog_io_item.m"
                    parse_tree__prog_io_item__DeclTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, (MR_Integer) 0)));
#line 81 "prog_io_item.m"
                    parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, (MR_Integer) 1)));
#line 81 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 81 "prog_io_item.m"
                  }
#line 81 "prog_io_item.m"
              }
#line 81 "prog_io_item.m"
          }
#line 81 "prog_io_item.m"
      }
#line 85 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 167 "prog_io_item.m"
      {
#line 168 "prog_io_item.m"
        {
#line 168 "prog_io_item.m"
          parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__DeclTerm_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_item__SeqNum_9, parse_tree__prog_io_item__Result_10);
#line 168 "prog_io_item.m"
          return;
        }
#line 167 "prog_io_item.m"
      }
#line 85 "prog_io_item.m"
    else
#line 92 "prog_io_item.m"
      {
#line 92 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCG_H_Term_13;
#line 92 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCG_B_Term_14;
#line 92 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCG_Context_15;
#line 86 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_27_27;
#line 86 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_28_28;
#line 86 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 86 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 86 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_31_31;

#line 86 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 86 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 86 "prog_io_item.m"
          {
#line 86 "prog_io_item.m"
            parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 86 "prog_io_item.m"
            parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 86 "prog_io_item.m"
            parse_tree__prog_io_item__DCG_Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 86 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 86 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 86 "prog_io_item.m"
              {
#line 86 "prog_io_item.m"
                parse_tree__prog_io_item__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_27_27, (MR_Integer) 0)));
#line 86 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_28_28, (MR_String) "-->") == 0);
#line 86 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 86 "prog_io_item.m"
                  {
#line 86 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 86 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 86 "prog_io_item.m"
                      {
#line 86 "prog_io_item.m"
                        parse_tree__prog_io_item__DCG_H_Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 0)));
#line 86 "prog_io_item.m"
                        parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 1)));
#line 86 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 86 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 86 "prog_io_item.m"
                          {
#line 86 "prog_io_item.m"
                            parse_tree__prog_io_item__DCG_B_Term_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 0)));
#line 86 "prog_io_item.m"
                            parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 1)));
#line 86 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 86 "prog_io_item.m"
                          }
#line 86 "prog_io_item.m"
                      }
#line 86 "prog_io_item.m"
                  }
#line 86 "prog_io_item.m"
              }
#line 86 "prog_io_item.m"
          }
#line 92 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 90 "prog_io_item.m"
          {
#line 90 "prog_io_item.m"
            parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__DCG_H_Term_13, parse_tree__prog_io_item__DCG_B_Term_14, parse_tree__prog_io_item__DCG_Context_15, parse_tree__prog_io_item__SeqNum_9, parse_tree__prog_io_item__Result_10);
#line 90 "prog_io_item.m"
            return;
          }
#line 92 "prog_io_item.m"
        else
#line 107 "prog_io_item.m"
          {
#line 107 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__HeadTerm_19;
#line 107 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__BodyTerm_20;
#line 107 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ClauseContext_21;
#line 107 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ProgVarSet_22;
#line 102 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__HeadTermPrime_16;
#line 102 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__BodyTermPrime_17;
#line 102 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TermContext_18;
#line 95 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_32_32;
#line 95 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__V_33_33;
#line 95 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_34_34;
#line 95 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_35_35;
#line 95 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_36_36;

#line 95 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 95 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 95 "prog_io_item.m"
              {
#line 95 "prog_io_item.m"
                parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 95 "prog_io_item.m"
                parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 95 "prog_io_item.m"
                parse_tree__prog_io_item__TermContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 95 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 95 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 95 "prog_io_item.m"
                  {
#line 95 "prog_io_item.m"
                    parse_tree__prog_io_item__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_32_32, (MR_Integer) 0)));
#line 95 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_33_33, (MR_String) ":-") == 0);
#line 95 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 95 "prog_io_item.m"
                      {
#line 96 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 96 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 96 "prog_io_item.m"
                          {
#line 96 "prog_io_item.m"
                            parse_tree__prog_io_item__HeadTermPrime_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 0)));
#line 96 "prog_io_item.m"
                            parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 1)));
#line 96 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 96 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 96 "prog_io_item.m"
                              {
#line 96 "prog_io_item.m"
                                parse_tree__prog_io_item__BodyTermPrime_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 0)));
#line 96 "prog_io_item.m"
                                parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 1)));
#line 96 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 96 "prog_io_item.m"
                              }
#line 96 "prog_io_item.m"
                          }
#line 95 "prog_io_item.m"
                      }
#line 95 "prog_io_item.m"
                  }
#line 95 "prog_io_item.m"
              }
#line 102 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 99 "prog_io_item.m"
              {
#line 99 "prog_io_item.m"
                parse_tree__prog_io_item__HeadTerm_19 = parse_tree__prog_io_item__HeadTermPrime_16;
#line 100 "prog_io_item.m"
                parse_tree__prog_io_item__BodyTerm_20 = parse_tree__prog_io_item__BodyTermPrime_17;
#line 101 "prog_io_item.m"
                parse_tree__prog_io_item__ClauseContext_21 = parse_tree__prog_io_item__TermContext_18;
#line 99 "prog_io_item.m"
              }
#line 102 "prog_io_item.m"
            else
#line 104 "prog_io_item.m"
              {
#line 104 "prog_io_item.m"
                parse_tree__prog_io_item__HeadTerm_19 = parse_tree__prog_io_item__Term_8;
#line 105 "prog_io_item.m"
                {
#line 105 "prog_io_item.m"
                  parse_tree__prog_io_item__ClauseContext_21 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__HeadTerm_19);
                }
#line 106 "prog_io_item.m"
                {
#line 106 "prog_io_item.m"
                  parse_tree__prog_io_item__BodyTerm_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 106 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_20, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[5]));
#line 106 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_20, 2) = ((MR_Box) (parse_tree__prog_io_item__ClauseContext_21));
#line 106 "prog_io_item.m"
                }
#line 104 "prog_io_item.m"
              }
#line 108 "prog_io_item.m"
            {
#line 108 "prog_io_item.m"
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__VarSet_7, &parse_tree__prog_io_item__ProgVarSet_22);
            }
#line 109 "prog_io_item.m"
            {
#line 109 "prog_io_item.m"
              parse_tree__prog_io_item__parse_clause_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__HeadTerm_19, parse_tree__prog_io_item__BodyTerm_20, parse_tree__prog_io_item__ProgVarSet_22, parse_tree__prog_io_item__ClauseContext_21, parse_tree__prog_io_item__SeqNum_9, parse_tree__prog_io_item__Result_10);
#line 109 "prog_io_item.m"
              return;
            }
#line 107 "prog_io_item.m"
          }
#line 92 "prog_io_item.m"
      }
#line 85 "prog_io_item.m"
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
