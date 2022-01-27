/*
** Automatically generated from `prog_io_item.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.prog_data.mih"
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
#include "parse_tree.status.mih"
#include "recompilation.version.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 108 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 111 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 114 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 117 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 120 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 123 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 126 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 129 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 132 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 135 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_0[1];

#line 138 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_0;

#line 141 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_0;

#line 144 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_1[1];

#line 147 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_1;

#line 150 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_2[1];

#line 153 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_2;

#line 156 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_3[3];

#line 159 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_3;

#line 162 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_4[3];

#line 165 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_4;

#line 168 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_5[3];

#line 171 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_5;

#line 174 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_0[1];

#line 177 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_1[1];

#line 180 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_2[1];

#line 183 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_3[3];

#line 186 "parse_tree.prog_io_item.c"
static const MR_DuPtagLayout parse_tree__prog_io_item__parse_tree__prog_io_item__du_ptag_ordered_item_or_marker_0[4];

#line 189 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_name_ordered_item_or_marker_0[6];

#line 192 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_item_or_marker_0[6];

#line 195 "parse_tree.prog_io_item.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item____vpti_pred_2__pseudo_1__pseudo_2;

#line 198 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____item_or_marker_0_0_10001(
#line 201 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 203 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2);

#line 206 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____item_or_marker_0_0_10001(
#line 209 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 211 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 213 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3);

#line 216 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0_10001(
#line 219 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 221 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 223 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3,
#line 225 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4);

#line 228 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0_10001(
#line 231 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 233 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 235 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_3,
#line 237 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4,
#line 239 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_5);

#line 1609 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1609 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 1609 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 1513 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0(
#line 1513 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1513 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13,
#line 1513 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14,
#line 1513 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15,
#line 1513 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Vars_16);

#line 1406 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1(
#line 1406 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1406 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1406 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1378 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0(
#line 1378 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PromiseType_10,
#line 1378 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1378 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__4_4,
#line 1378 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1378 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 1378 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 1378 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 589 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_6_p_0(
#line 589 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 589 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_9,
#line 589 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_10,
#line 589 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 589 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_12);

#line 1406 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1406__1_2_p_0(
#line 1406 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1406 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39);

#line 1318 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1318__1_2_p_0(
#line 1318 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1318 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39);

#line 359 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__359__1_2_p_0(
#line 359 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_79,
#line 359 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_80);

#line 343 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__343__1_2_p_0(
#line 343 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_73,
#line 343 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_74);

#line 1609 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0(
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_6,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_7,
#line 1609 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 1609 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0(
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_5,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_6,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 1633 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__dummy_term_with_context_2_p_0(
#line 1633 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_3,
#line 1633 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Term_4);

#line 1600 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(
#line 1600 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1);

#line 1589 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_purity_3_p_0(
#line 1589 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Purity_4,
#line 1589 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8,
#line 1589 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9);

#line 1568 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_implicitly_qualified_module_name_4_p_0(
#line 1568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__DefaultModuleName_5,
#line 1568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_7,
#line 1568 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModule_8);

#line 1557 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_name_3_p_0(
#line 1557 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 1557 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1557 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModuleName_6);

#line 1534 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__desugar_field_access_1_f_0(
#line 1534 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_3);

#line 1488 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(
#line 1488 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 1488 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithInstTerm_5,
#line 1488 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithInst_6);

#line 1457 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(
#line 1457 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1457 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1457 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithTypeTerm_7,
#line 1457 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithType_8);

#line 1428 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(
#line 1428 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1428 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1428 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeDetismTerm_7,
#line 1428 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeMaybeDetism_8);

#line 1340 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_constraints_6_p_0(
#line 1340 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1340 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1340 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1340 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23,
#line 1340 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24,
#line 1340 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeClassInstConstraints_11);

#line 1318 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0_1(
#line 1318 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1318 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1318 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1275 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(
#line 1275 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 1275 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 1275 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RevAttributes0_8,
#line 1275 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__RevAttributes_9,
#line 1275 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeExistClassInstContext_10);

#line 1204 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1(
#line 1204 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1204 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1204 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1192 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_16,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_17,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_18,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 1192 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 1192 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24);

#line 1149 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1(
#line 1149 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1149 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1149 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1138 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_12,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_13,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_15,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_16,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 1138 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 1138 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22);

#line 1098 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(
#line 1098 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 1098 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1098 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 1098 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1098 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_14,
#line 1098 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_15,
#line 1098 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_16,
#line 1098 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_17,
#line 1098 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_18);

#line 1066 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_7_p_0(
#line 1066 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1066 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1066 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 1066 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 1066 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 1066 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 1066 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 1057 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__wrap_nth_2_p_0(
#line 1057 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__N_3,
#line 1057 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_2);

#line 1039 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0(
#line 1039 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__ArgNum_1,
#line 1039 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1039 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3,
#line 1039 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__4_4);

#line 1026 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0_1(
#line 1026 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1026 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1026 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 995 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(
#line 995 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypesAndModes_4,
#line 995 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ErrorTerm_5,
#line 995 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeSpec_6);

#line 974 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_3_p_0(
#line 974 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_4,
#line 974 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 974 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeTypeAndMode_6);

#line 966 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(
#line 966 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_1,
#line 966 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 966 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3);

#line 893 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncName_14,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Args_15,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ReturnArg_16,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncTerm_17,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_18,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ExistQVars_21,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Constraints_22,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_23,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_24,
#line 893 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_25,
#line 893 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_26);

#line 810 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_8_p_0(
#line 810 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 810 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 810 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_11,
#line 810 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_12,
#line 810 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_13,
#line 810 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 810 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 810 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 710 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_12,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_13,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_14,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_15,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_16,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 710 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 710 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22);

#line 649 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0(
#line 649 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_9,
#line 649 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 649 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 649 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 649 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 649 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 649 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 649 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 430 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0(
#line 430 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 430 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 430 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_11,
#line 430 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_12,
#line 430 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 430 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 430 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 430 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 389 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(
#line 389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_8,
#line 389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_9,
#line 389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22,
#line 389 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 389 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_12);

#line 359 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_2(
#line 359 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 359 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 359 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 343 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_1(
#line 343 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 343 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 343 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 322 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0(
#line 322 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 322 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadTerm_9,
#line 322 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__BodyTerm0_10,
#line 322 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ProgVarSet0_11,
#line 322 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 322 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 322 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 308 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__maybe_item_to_item_or_marker_2_p_0(
#line 308 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeItem_3,
#line 308 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItemOrMarker_4);

#line 278 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_source_file_marker_3_p_0(
#line 278 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_4,
#line 278 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_5,
#line 278 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_6);

#line 268 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_include_item_4_p_0(
#line 268 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 268 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 268 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 268 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Item_8);

#line 260 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_use_item_4_p_0(
#line 260 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 260 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 260 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 260 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Item_8);

#line 252 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_import_item_4_p_0(
#line 252 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 252 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 252 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 252 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Item_8);

#line 238 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_6(
#line 238 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 238 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 238 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 237 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_5(
#line 237 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 237 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 237 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 230 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_4(
#line 230 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 230 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 230 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 229 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_3(
#line 229 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 229 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 229 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 234 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_2(
#line 234 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 234 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 234 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 233 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_1(
#line 233 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 233 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 233 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 221 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0(
#line 221 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 221 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 221 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_10,
#line 221 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 221 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 221 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 221 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_14);

#line 188 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_module_marker_5_p_0(
#line 188 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_6,
#line 188 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_7,
#line 188 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_8,
#line 188 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_9,
#line 188 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Marker_10);


static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_1[156][2];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_3[25][1];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_4[2][6];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_5[2][7];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_6[4][5];




static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_1[156][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_1[0]))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ":-"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: atom expected after"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration should be a string."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "source_file"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the argument of a"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: wrong number of arguments in"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration requires arity."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "external"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ":- version_numbers"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid module name in"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid version number in"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[38])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and determinism both specified."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "with_inst"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "with_type"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "without"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "specified"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "specified without argument modes."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not specified."))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: arguments have modes but"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[62])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "inst variables in"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inconsistent constraints on"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[66])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[70])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[72])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[27])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in return type of"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "expected in"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[75])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "="))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[83])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but function result does not."))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: function arguments have modes,"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[86])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but function arguments do not."))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: function result has mode,"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[90])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[70])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In function"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[94])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[94])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of function mode declaration."))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in return mode"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid inst in"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(e.g. \":- module \'Foo\'.\")."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[13])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be quoted using single quotes"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module names starting with capital letters"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[70])))
  },
  /* row 113 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 114 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In equation head:"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In clause head:"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unrecognized declaration:"))
  },
  /* row 121 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 122 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 123 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 128 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 129 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in arguments of"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration at"))
  },
  /* row 136 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 137 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 138 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 139 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inconsistent constraints"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "on inst variables in function declaration:"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The argument without a mode is the"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The arguments without modes are the"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: some but not all arguments have modes."))
  },
  /* row 145 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "on inst variables"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in predicate mode declaration:"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in function mode declaration:"))
  },
  /* row 150 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "function mode declaration at"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid determinism category"))
  },
  /* row 153 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[20])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 154 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[22])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 155 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[24])),
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
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_6[0])),
    ((MR_Box) (parse_tree__prog_io_item__parse_clause_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_6[0])),
    ((MR_Box) (parse_tree__prog_io_item__parse_clause_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_6[1])),
    ((MR_Box) (parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_6[2])),
    ((MR_Box) (parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_6[3])),
    ((MR_Box) (parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_3[25][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[19])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "true"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[25])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[30])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[36])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[47])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[55])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[59])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[64])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[79])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[84])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[88])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[92])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[104])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[101])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[110])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[40])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 23))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[42])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_4[2][6] = {
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

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
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

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_6[4][5] = {
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 2027 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2035 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2043 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2051 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2059 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2067 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 2076 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2084 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2092 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2100 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
};

#line 2105 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_0 = {
  (MR_String) "iom_item",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_0,
  NULL,
  NULL,
  NULL
};

#line 2120 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2128 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_item__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_0
};

#line 2133 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_1 = {
  (MR_String) "iom_items",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_1,
  NULL,
  NULL,
  NULL
};

#line 2148 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2153 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_2 = {
  (MR_String) "iom_marker_src_file",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_2,
  NULL,
  NULL,
  NULL
};

#line 2168 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_3[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2175 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_3 = {
  (MR_String) "iom_marker_module_start",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_3,
  NULL,
  NULL,
  NULL
};

#line 2190 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_4[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2197 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_4 = {
  (MR_String) "iom_marker_module_end",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_4,
  NULL,
  NULL,
  NULL
};

#line 2212 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_5[3] = {
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2219 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_5 = {
  (MR_String) "iom_marker_section",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_5,
  NULL,
  NULL,
  NULL
};

#line 2234 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_0[1] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_0
};

#line 2239 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_1[1] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_1
};

#line 2244 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_2[1] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_2
};

#line 2249 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_3[3] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_3,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_4,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_5
};

#line 2256 "parse_tree.prog_io_item.c"
static const MR_DuPtagLayout parse_tree__prog_io_item__parse_tree__prog_io_item__du_ptag_ordered_item_or_marker_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_3
  }
};

#line 2280 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_name_ordered_item_or_marker_0[6] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_0,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_1,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_4,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_3,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_5,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_2
};

#line 2290 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_item_or_marker_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4
};

#line 2300 "parse_tree.prog_io_item.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_item_or_marker_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_item____Unify____item_or_marker_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_item____Compare____item_or_marker_0_0_10001)),
  (MR_String) "parse_tree.prog_io_item",
  (MR_String) "item_or_marker",
  {     parse_tree__prog_io_item__parse_tree__prog_io_item__du_name_ordered_item_or_marker_0 },
  {     parse_tree__prog_io_item__parse_tree__prog_io_item__du_ptag_ordered_item_or_marker_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_item_or_marker_0
};

#line 2317 "parse_tree.prog_io_item.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item____vpti_pred_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2327 "parse_tree.prog_io_item.c"
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

#line 2344 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____item_or_marker_0_0_10001(
#line 2347 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 2349 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2)
#line 2351 "parse_tree.prog_io_item.c"
{
#line 2353 "parse_tree.prog_io_item.c"
  {
#line 2355 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 2358 "parse_tree.prog_io_item.c"
    {
#line 2360 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item____Unify____item_or_marker_0_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2));
    }
#line 2363 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 2365 "parse_tree.prog_io_item.c"
  }
#line 2367 "parse_tree.prog_io_item.c"
}

#line 2370 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____item_or_marker_0_0_10001(
#line 2373 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 2375 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 2377 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3)
#line 2379 "parse_tree.prog_io_item.c"
{
#line 2381 "parse_tree.prog_io_item.c"
  {
#line 2383 "parse_tree.prog_io_item.c"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__1_1;

#line 2386 "parse_tree.prog_io_item.c"
    {
#line 2388 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item____Compare____item_or_marker_0_0(&parse_tree__prog_io_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_3));
    }
#line 2391 "parse_tree.prog_io_item.c"
    *parse_tree__prog_io_item__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__1_1));
#line 2393 "parse_tree.prog_io_item.c"
  }
#line 2395 "parse_tree.prog_io_item.c"
}

#line 2398 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0_10001(
#line 2401 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 2403 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 2405 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3,
#line 2407 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4)
#line 2409 "parse_tree.prog_io_item.c"
{
#line 2411 "parse_tree.prog_io_item.c"
  {
#line 2413 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 2416 "parse_tree.prog_io_item.c"
    {
#line 2418 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item____Unify____maker_2_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_4));
    }
#line 2421 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 2423 "parse_tree.prog_io_item.c"
  }
#line 2425 "parse_tree.prog_io_item.c"
}

#line 2428 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0_10001(
#line 2431 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 2433 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 2435 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_3,
#line 2437 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4,
#line 2439 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_5)
#line 2441 "parse_tree.prog_io_item.c"
{
#line 2443 "parse_tree.prog_io_item.c"
  {
#line 2445 "parse_tree.prog_io_item.c"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__1_1;

#line 2448 "parse_tree.prog_io_item.c"
    {
#line 2450 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item____Compare____maker_2_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), &parse_tree__prog_io_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_item__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_5));
    }
#line 2453 "parse_tree.prog_io_item.c"
    *parse_tree__prog_io_item__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__1_1));
#line 2455 "parse_tree.prog_io_item.c"
  }
#line 2457 "parse_tree.prog_io_item.c"
}

#line 1609 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1609 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 1609 "prog_io_item.m"
{
#line 1609 "prog_io_item.m"
  {
#line 1609 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1609 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar1_4 = parse_tree__prog_io_item__HeadVar__2_2;
#line 1609 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar2_5 = parse_tree__prog_io_item__HeadVar__3_3;

#line 1609 "prog_io_item.m"
    {
#line 1609 "prog_io_item.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar2_5);
#line 1609 "prog_io_item.m"
      return;
    }
#line 1609 "prog_io_item.m"
  }
#line 1609 "prog_io_item.m"
}

#line 1609 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 1609 "prog_io_item.m"
{
#line 1609 "prog_io_item.m"
  {
#line 1609 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1609 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar1_3 = parse_tree__prog_io_item__HeadVar__1_1;
#line 1609 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar2_4 = parse_tree__prog_io_item__HeadVar__2_2;

#line 1609 "prog_io_item.m"
    {
#line 1609 "prog_io_item.m"
      return parse_tree__prog_io_item__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io_item__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar2_4);
    }
#line 1609 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1609 "prog_io_item.m"
  }
#line 1609 "prog_io_item.m"
}

#line 1513 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0(
#line 1513 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1513 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13,
#line 1513 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14,
#line 1513 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15,
#line 1513 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Vars_16)
#line 1513 "prog_io_item.m"
{
#line 1523 "prog_io_item.m"
  while (MR_TRUE)
#line 1523 "prog_io_item.m"
    {
#line 1523 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 1523 "prog_io_item.m"
      {
#line 1523 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13)) == (MR_mktag((MR_Integer) 1)));
#line 1523 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__QuantVars_11;
#line 1523 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17;
#line 1518 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_18_18;
#line 1518 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_19_19;
#line 1518 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;
#line 1518 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_12_12;

#line 1519 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1519 "prog_io_item.m"
          {
#line 1519 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13, (MR_Integer) 0)));
#line 1519 "prog_io_item.m"
            parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13, (MR_Integer) 1)));
#line 1518 "prog_io_item.m"
            parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1518 "prog_io_item.m"
            parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1518 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 2)));
#line 1518 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1518 "prog_io_item.m"
              {
#line 1518 "prog_io_item.m"
                parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1518 "prog_io_item.m"
                parse_tree__prog_io_item__QuantVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__V_19_19, (MR_Integer) 1)));
#line 1518 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__QuantType_7 == parse_tree__prog_io_item__V_24_24);
#line 1518 "prog_io_item.m"
              }
#line 1519 "prog_io_item.m"
          }
#line 1523 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1521 "prog_io_item.m"
          {
#line 1521 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20;

#line 1521 "prog_io_item.m"
            {
#line 1521 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15, parse_tree__prog_io_item__QuantVars_11);
            }
#line 1522 "prog_io_item.m"
            /* direct tailcall eliminated */
#line 1522 "prog_io_item.m"
            {
#line 1522 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_13 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17;
#line 1522 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0__tmp_copy_15 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20;

#line 1522 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_0__tmp_copy_15;
#line 1522 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_13;
#line 1522 "prog_io_item.m"
            }
#line 1522 "prog_io_item.m"
            continue;
#line 1521 "prog_io_item.m"
          }
#line 1523 "prog_io_item.m"
        else
#line 1524 "prog_io_item.m"
          {
#line 1524 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_Vars_16 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15;
#line 1524 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13;
#line 1524 "prog_io_item.m"
          }
#line 1523 "prog_io_item.m"
      }
#line 1523 "prog_io_item.m"
      break;
#line 1523 "prog_io_item.m"
    }
#line 1513 "prog_io_item.m"
}

#line 1406 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1(
#line 1406 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1406 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1406 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1406 "prog_io_item.m"
{
#line 1406 "prog_io_item.m"
  {
#line 1406 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1406 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_39;

#line 1406 "prog_io_item.m"
    {
#line 1406 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1406__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_39);
    }
#line 1406 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_39));
#line 1406 "prog_io_item.m"
  }
#line 1406 "prog_io_item.m"
}

#line 1378 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0(
#line 1378 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PromiseType_10,
#line 1378 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1378 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__4_4,
#line 1378 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1378 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 1378 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 1378 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 1378 "prog_io_item.m"
{
#line 1383 "prog_io_item.m"
  {
#line 1383 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1383 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_36_36;
#line 1383 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_37_37;
#line 1383 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Term_12;
#line 1383 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet0_17;
#line 1383 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ContextPieces_18;
#line 1383 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeGoal0_19;
#line 1383 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet_20;
#line 1383 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;

#line 1382 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1382 "prog_io_item.m"
      {
#line 1382 "prog_io_item.m"
        parse_tree__prog_io_item__Term_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__4_4, (MR_Integer) 0)));
#line 1382 "prog_io_item.m"
        parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__4_4, (MR_Integer) 1)));
#line 1382 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1383 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1383 "prog_io_item.m"
          {
#line 2722 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 2724 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1384 "prog_io_item.m"
            {
#line 1384 "prog_io_item.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_36_36, parse_tree__prog_io_item__TypeCtorInfo_37_37, parse_tree__prog_io_item__VarSet_11, &parse_tree__prog_io_item__ProgVarSet0_17);
            }
#line 1385 "prog_io_item.m"
            parse_tree__prog_io_item__ContextPieces_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1386 "prog_io_item.m"
            {
#line 1386 "prog_io_item.m"
              parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__ContextPieces_18, &parse_tree__prog_io_item__MaybeGoal0_19, parse_tree__prog_io_item__ProgVarSet0_17, &parse_tree__prog_io_item__ProgVarSet_20);
            }
#line 1413 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeGoal0_19)) == (MR_mktag((MR_Integer) 0))))
#line 1415 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = (MR_Word) parse_tree__prog_io_item__MaybeGoal0_19;
#line 1413 "prog_io_item.m"
            else
#line 1388 "prog_io_item.m"
              {
#line 1388 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeGoal0_19, (MR_Integer) 0)));
#line 1388 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__UnivVars_25;
#line 1388 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Goal_26;
#line 1388 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemPromise_28;
#line 1388 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_29;

#line 1399 "prog_io_item.m"
#line 1399 "prog_io_item.m"
                switch (parse_tree__prog_io_item__PromiseType_10) {
#line 1399 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1399 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 1399 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 1399 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 1403 "prog_io_item.m"
                    {
#line 1403 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__UnivVars0_35;
#line 1404 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_27_27;

#line 1404 "prog_io_item.m"
                      {
#line 1404 "prog_io_item.m"
                        parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__Attributes_13, &parse_tree__prog_io_item__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__UnivVars0_35);
                      }
#line 1406 "prog_io_item.m"
                      {
#line 1406 "prog_io_item.m"
                        mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[10], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[6], parse_tree__prog_io_item__UnivVars0_35, &parse_tree__prog_io_item__UnivVars_25);
                      }
#line 1407 "prog_io_item.m"
                      parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__Goal0_21;
#line 1403 "prog_io_item.m"
                    }
#line 1399 "prog_io_item.m"
                    break;
#line 1399 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 1395 "prog_io_item.m"
                    {
#line 1395 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__UnivVars0_23;
#line 1395 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__AllGoal_24;
#line 1392 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_22_22;

#line 1392 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__Goal0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1392 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 1392 "prog_io_item.m"
                        {
#line 1392 "prog_io_item.m"
                          parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 1)));
#line 1392 "prog_io_item.m"
                          parse_tree__prog_io_item__UnivVars0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 2)));
#line 1392 "prog_io_item.m"
                          parse_tree__prog_io_item__AllGoal_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 3)));
#line 1393 "prog_io_item.m"
                          parse_tree__prog_io_item__UnivVars_25 = parse_tree__prog_io_item__UnivVars0_23;
#line 1394 "prog_io_item.m"
                          parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__AllGoal_24;
#line 1392 "prog_io_item.m"
                        }
#line 1392 "prog_io_item.m"
                      else
#line 1396 "prog_io_item.m"
                        {
#line 1396 "prog_io_item.m"
                          parse_tree__prog_io_item__UnivVars_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1397 "prog_io_item.m"
                          parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__Goal0_21;
#line 1396 "prog_io_item.m"
                        }
#line 1395 "prog_io_item.m"
                    }
#line 1399 "prog_io_item.m"
                    break;
#line 1399 "prog_io_item.m"
                }
#line 1409 "prog_io_item.m"
                {
#line 1409 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemPromise_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1409 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 0) = ((MR_Box) (parse_tree__prog_io_item__PromiseType_10));
#line 1409 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 1) = ((MR_Box) (parse_tree__prog_io_item__Goal_26));
#line 1409 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_20));
#line 1409 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 3) = ((MR_Box) (parse_tree__prog_io_item__UnivVars_25));
#line 1409 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 4) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 1409 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 5) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 1409 "prog_io_item.m"
                }
#line 1411 "prog_io_item.m"
                {
#line 1411 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1411 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1411 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_29, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPromise_28));
#line 1411 "prog_io_item.m"
                }
#line 1412 "prog_io_item.m"
                {
#line 1412 "prog_io_item.m"
                  MR_Word base;
#line 1412 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1412 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 1412 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_29));
#line 1412 "prog_io_item.m"
                }
#line 1388 "prog_io_item.m"
              }
#line 1413 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1383 "prog_io_item.m"
          }
#line 1382 "prog_io_item.m"
      }
#line 1383 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1383 "prog_io_item.m"
  }
#line 1378 "prog_io_item.m"
}

#line 589 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_6_p_0(
#line 589 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 589 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_9,
#line 589 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_10,
#line 589 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 589 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_12)
#line 589 "prog_io_item.m"
{
#line 593 "prog_io_item.m"
  {
#line 593 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
#line 593 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VersionNumberTerm_13;
#line 593 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleNameTerm_14;
#line 593 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VersionNumbersTerm_15;
#line 593 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_35_35;
#line 593 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_36_36;
#line 593 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_37_37;
#line 596 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__VersionNumber_16;
#line 596 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_38_38;
#line 596 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_39_39;
#line 596 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__V_96_96;
#line 596 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;

#line 594 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 594 "prog_io_item.m"
      {
#line 594 "prog_io_item.m"
        parse_tree__prog_io_item__VersionNumberTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_9, (MR_Integer) 0)));
#line 594 "prog_io_item.m"
        parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_9, (MR_Integer) 1)));
#line 594 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 594 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 594 "prog_io_item.m"
          {
#line 594 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleNameTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 0)));
#line 594 "prog_io_item.m"
            parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 1)));
#line 594 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 594 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 594 "prog_io_item.m"
              {
#line 594 "prog_io_item.m"
                parse_tree__prog_io_item__VersionNumbersTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 594 "prog_io_item.m"
                parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 1)));
#line 594 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 593 "prog_io_item.m"
                  {
#line 596 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__VersionNumberTerm_13)) == (MR_mktag((MR_Integer) 0)));
#line 596 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 596 "prog_io_item.m"
                      {
#line 596 "prog_io_item.m"
                        parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_13, (MR_Integer) 0)));
#line 596 "prog_io_item.m"
                        parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_13, (MR_Integer) 1)));
#line 596 "prog_io_item.m"
                        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_13, (MR_Integer) 2)));
#line 596 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 596 "prog_io_item.m"
                          {
#line 596 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 596 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 596 "prog_io_item.m"
                              {
#line 596 "prog_io_item.m"
                                parse_tree__prog_io_item__VersionNumber_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, (MR_Integer) 0)));
#line 597 "prog_io_item.m"
                                {
#line 597 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_96_96 = recompilation__version__version_numbers_version_number_0_f_0();
                                }
#line 597 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__VersionNumber_16 == parse_tree__prog_io_item__V_96_96);
#line 596 "prog_io_item.m"
                              }
#line 596 "prog_io_item.m"
                          }
#line 596 "prog_io_item.m"
                      }
#line 621 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 613 "prog_io_item.m"
                      {
#line 599 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_97_97;

#line 599 "prog_io_item.m"
                        {
#line 599 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleNameTerm_14, &parse_tree__prog_io_item__V_97_97);
                        }
#line 599 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 599 "prog_io_item.m"
                          {
#line 599 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_item__ModuleName_7, parse_tree__prog_io_item__V_97_97);
                          }
#line 613 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 601 "prog_io_item.m"
                          {
#line 601 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__MaybeItem0_18;

#line 600 "prog_io_item.m"
                            {
#line 600 "prog_io_item.m"
                              recompilation__version__parse_version_numbers_2_p_0(parse_tree__prog_io_item__VersionNumbersTerm_15, &parse_tree__prog_io_item__MaybeItem0_18);
                            }
#line 609 "prog_io_item.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItem0_18)) == (MR_mktag((MR_Integer) 0))))
#line 611 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItem_12 = (MR_Word) parse_tree__prog_io_item__MaybeItem0_18;
#line 609 "prog_io_item.m"
                            else
#line 603 "prog_io_item.m"
                              {
#line 603 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__VersionNumbers_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_18, (MR_Integer) 0)));
#line 603 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ModuleDefn_20;
#line 603 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ItemModuleDefn_21;
#line 603 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Item_22;

#line 604 "prog_io_item.m"
                                {
#line 604 "prog_io_item.m"
                                  parse_tree__prog_io_item__ModuleDefn_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ModuleDefn_20, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_7));
#line 604 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ModuleDefn_20, 1) = ((MR_Box) (parse_tree__prog_io_item__VersionNumbers_19));
#line 604 "prog_io_item.m"
                                }
#line 605 "prog_io_item.m"
                                {
#line 605 "prog_io_item.m"
                                  parse_tree__prog_io_item__ItemModuleDefn_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 605 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_21, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_20));
#line 605 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_21, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_10));
#line 605 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_21, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_11));
#line 605 "prog_io_item.m"
                                }
#line 607 "prog_io_item.m"
                                parse_tree__prog_io_item__Item_22 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_21);
#line 608 "prog_io_item.m"
                                {
#line 608 "prog_io_item.m"
                                  MR_Word base;
#line 608 "prog_io_item.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 608 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 608 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_22));
#line 608 "prog_io_item.m"
                                }
#line 603 "prog_io_item.m"
                              }
#line 601 "prog_io_item.m"
                          }
#line 613 "prog_io_item.m"
                        else
#line 615 "prog_io_item.m"
                          {
#line 615 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Spec_25;
#line 615 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_53_53;
#line 615 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_54_54;
#line 615 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_55_55;
#line 615 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_60_60;

#line 617 "prog_io_item.m"
                            {
#line 617 "prog_io_item.m"
                              parse_tree__prog_io_item__V_55_55 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleNameTerm_14);
                            }
#line 617 "prog_io_item.m"
                            {
#line 617 "prog_io_item.m"
                              parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 617 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 617 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[154])));
#line 617 "prog_io_item.m"
                            }
#line 618 "prog_io_item.m"
                            {
#line 618 "prog_io_item.m"
                              parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 618 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 618 "prog_io_item.m"
                            }
#line 616 "prog_io_item.m"
                            {
#line 616 "prog_io_item.m"
                              parse_tree__prog_io_item__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 616 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 616 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 616 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 616 "prog_io_item.m"
                            }
#line 619 "prog_io_item.m"
                            {
#line 619 "prog_io_item.m"
                              parse_tree__prog_io_item__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_25));
#line 619 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "prog_io_item.m"
                            }
#line 619 "prog_io_item.m"
                            {
#line 619 "prog_io_item.m"
                              MR_Word base;
#line 619 "prog_io_item.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 619 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 619 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_60_60));
#line 619 "prog_io_item.m"
                            }
#line 615 "prog_io_item.m"
                          }
#line 613 "prog_io_item.m"
                      }
#line 621 "prog_io_item.m"
                    else
#line 632 "prog_io_item.m"
                    if (((MR_tag((MR_Word) parse_tree__prog_io_item__VersionNumberTerm_13)) == (MR_mktag((MR_Integer) 0))))
#line 623 "prog_io_item.m"
                      {
#line 623 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__DummyTerm_30;
#line 623 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Warning_31;
#line 623 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__ItemNothing_32;
#line 623 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_87_87;
#line 623 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Item_88;

#line 626 "prog_io_item.m"
                        {
#line 626 "prog_io_item.m"
                          parse_tree__prog_io_item__dummy_term_with_context_2_p_0(parse_tree__prog_io_item__Context_10, &parse_tree__prog_io_item__DummyTerm_30);
                        }
#line 627 "prog_io_item.m"
                        {
#line 627 "prog_io_item.m"
                          parse_tree__prog_io_item__Warning_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 627 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[23])));
#line 627 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_31, 1) = ((MR_Box) ((MR_String) "interface file needs to be recreated, the version numbers are out of date"));
#line 627 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_31, 2) = ((MR_Box) (parse_tree__prog_io_item__DummyTerm_30));
#line 627 "prog_io_item.m"
                        }
#line 629 "prog_io_item.m"
                        {
#line 629 "prog_io_item.m"
                          parse_tree__prog_io_item__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 629 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_item__Warning_31));
#line 629 "prog_io_item.m"
                        }
#line 629 "prog_io_item.m"
                        {
#line 629 "prog_io_item.m"
                          parse_tree__prog_io_item__ItemNothing_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 629 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_32, 0) = ((MR_Box) (parse_tree__prog_io_item__V_87_87));
#line 629 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_32, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_10));
#line 629 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_32, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_11));
#line 629 "prog_io_item.m"
                        }
#line 630 "prog_io_item.m"
                        {
#line 630 "prog_io_item.m"
                          parse_tree__prog_io_item__Item_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "prog_io_item.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 630 "prog_io_item.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_88, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemNothing_32));
#line 630 "prog_io_item.m"
                        }
#line 631 "prog_io_item.m"
                        {
#line 631 "prog_io_item.m"
                          MR_Word base;
#line 631 "prog_io_item.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 631 "prog_io_item.m"
                          *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 631 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_88));
#line 631 "prog_io_item.m"
                        }
#line 623 "prog_io_item.m"
                      }
#line 632 "prog_io_item.m"
                    else
#line 633 "prog_io_item.m"
                      {
#line 633 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__VersionNumberContext_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__VersionNumberTerm_13, (MR_Integer) 1)));
#line 633 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_75_75;
#line 633 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_76_76;
#line 633 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_81_81;
#line 633 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Spec_90;
#line 633 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__VersionNumberTerm_13, (MR_Integer) 0)));

#line 637 "prog_io_item.m"
                        {
#line 637 "prog_io_item.m"
                          parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 637 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__VersionNumberContext_34));
#line 637 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[155])));
#line 637 "prog_io_item.m"
                        }
#line 637 "prog_io_item.m"
                        {
#line 637 "prog_io_item.m"
                          parse_tree__prog_io_item__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 637 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 637 "prog_io_item.m"
                        }
#line 636 "prog_io_item.m"
                        {
#line 636 "prog_io_item.m"
                          parse_tree__prog_io_item__Spec_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 636 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 636 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 636 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_90, 2) = ((MR_Box) (parse_tree__prog_io_item__V_75_75));
#line 636 "prog_io_item.m"
                        }
#line 638 "prog_io_item.m"
                        {
#line 638 "prog_io_item.m"
                          parse_tree__prog_io_item__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_90));
#line 638 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 638 "prog_io_item.m"
                        }
#line 638 "prog_io_item.m"
                        {
#line 638 "prog_io_item.m"
                          MR_Word base;
#line 638 "prog_io_item.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 638 "prog_io_item.m"
                          *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 638 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_81_81));
#line 638 "prog_io_item.m"
                        }
#line 633 "prog_io_item.m"
                      }
#line 621 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 593 "prog_io_item.m"
                  }
#line 594 "prog_io_item.m"
              }
#line 594 "prog_io_item.m"
          }
#line 594 "prog_io_item.m"
      }
#line 593 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 593 "prog_io_item.m"
  }
#line 589 "prog_io_item.m"
}

#line 1406 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1406__1_2_p_0(
#line 1406 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1406 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39)
#line 1406 "prog_io_item.m"
{
#line 1406 "prog_io_item.m"
  {
#line 1406 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1406 "prog_io_item.m"
    {
#line 1406 "prog_io_item.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_38, parse_tree__prog_io_item__HeadVar__2_39);
#line 1406 "prog_io_item.m"
      return;
    }
#line 1406 "prog_io_item.m"
  }
#line 1406 "prog_io_item.m"
}

#line 1318 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1318__1_2_p_0(
#line 1318 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1318 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39)
#line 1318 "prog_io_item.m"
{
#line 1318 "prog_io_item.m"
  {
#line 1318 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1318 "prog_io_item.m"
    {
#line 1318 "prog_io_item.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__HeadVar__1_38, parse_tree__prog_io_item__HeadVar__2_39);
#line 1318 "prog_io_item.m"
      return;
    }
#line 1318 "prog_io_item.m"
  }
#line 1318 "prog_io_item.m"
}

#line 359 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__359__1_2_p_0(
#line 359 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_79,
#line 359 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_80)
#line 359 "prog_io_item.m"
{
#line 359 "prog_io_item.m"
  {
#line 359 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 359 "prog_io_item.m"
    {
#line 359 "prog_io_item.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_79, parse_tree__prog_io_item__HeadVar__2_80);
#line 359 "prog_io_item.m"
      return;
    }
#line 359 "prog_io_item.m"
  }
#line 359 "prog_io_item.m"
}

#line 343 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__343__1_2_p_0(
#line 343 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_73,
#line 343 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_74)
#line 343 "prog_io_item.m"
{
#line 343 "prog_io_item.m"
  {
#line 343 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 343 "prog_io_item.m"
    {
#line 343 "prog_io_item.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_73, parse_tree__prog_io_item__HeadVar__2_74);
#line 343 "prog_io_item.m"
      return;
    }
#line 343 "prog_io_item.m"
  }
#line 343 "prog_io_item.m"
}

#line 1609 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0(
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_6,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_7,
#line 1609 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 1609 "prog_io_item.m"
{
#line 1609 "prog_io_item.m"
  {
#line 1609 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1609 "prog_io_item.m"
    {
#line 1609 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__HeadVar__2_2, parse_tree__prog_io_item__HeadVar__3_3);
#line 1609 "prog_io_item.m"
      return;
    }
#line 1609 "prog_io_item.m"
  }
#line 1609 "prog_io_item.m"
}

#line 1609 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0(
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_5,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_6,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1609 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 1609 "prog_io_item.m"
{
#line 1609 "prog_io_item.m"
  {
#line 1609 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1609 "prog_io_item.m"
    {
#line 1609 "prog_io_item.m"
      return parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__HeadVar__2_2);
    }
#line 1609 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1609 "prog_io_item.m"
  }
#line 1609 "prog_io_item.m"
}

#line 29 "prog_io_item.m"
void MR_CALL 
parse_tree__prog_io_item____Compare____item_or_marker_0_0(
#line 29 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 29 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 29 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 29 "prog_io_item.m"
{
#line 29 "prog_io_item.m"
  {
#line 29 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 29 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastX_154 = (MR_Integer) parse_tree__prog_io_item__HeadVar__2_2;
#line 29 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastY_155 = (MR_Integer) parse_tree__prog_io_item__HeadVar__3_3;

#line 29 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__CastX_154 == parse_tree__prog_io_item__CastY_155);
#line 29 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 3530 "parse_tree.prog_io_item.c"
      *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 0;
#line 29 "prog_io_item.m"
    else
#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) {
#line 29 "prog_io_item.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
        case (MR_Integer) 0:
#line 29 "prog_io_item.m"
          {
#line 29 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));

#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 29 "prog_io_item.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
              case (MR_Integer) 0:
#line 29 "prog_io_item.m"
                {
#line 29 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)));

#line 29 "prog_io_item.m"
                  {
#line 29 "prog_io_item.m"
                    parse_tree__prog_item____Compare____item_0_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_168_168, parse_tree__prog_io_item__V_5_5);
#line 29 "prog_io_item.m"
                    return;
                  }
#line 29 "prog_io_item.m"
                }
#line 29 "prog_io_item.m"
                break;
#line 29 "prog_io_item.m"
              case (MR_Integer) 1:
#line 3571 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "prog_io_item.m"
                break;
#line 29 "prog_io_item.m"
              case (MR_Integer) 2:
#line 3577 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "prog_io_item.m"
                break;
#line 29 "prog_io_item.m"
              case (MR_Integer) 3:
#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)))) {
#line 29 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 3590 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 3596 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 3602 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                }
#line 29 "prog_io_item.m"
                break;
#line 29 "prog_io_item.m"
            }
#line 29 "prog_io_item.m"
          }
#line 29 "prog_io_item.m"
          break;
#line 29 "prog_io_item.m"
        case (MR_Integer) 1:
#line 29 "prog_io_item.m"
          {
#line 29 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));

#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 29 "prog_io_item.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
              case (MR_Integer) 0:
#line 3630 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "prog_io_item.m"
                break;
#line 29 "prog_io_item.m"
              case (MR_Integer) 1:
#line 29 "prog_io_item.m"
                {
#line 29 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)));

#line 29 "prog_io_item.m"
                  {
#line 29 "prog_io_item.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[11], parse_tree__prog_io_item__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_item__V_169_169)), ((MR_Box) (parse_tree__prog_io_item__V_25_25)));
#line 29 "prog_io_item.m"
                    return;
                  }
#line 29 "prog_io_item.m"
                }
#line 29 "prog_io_item.m"
                break;
#line 29 "prog_io_item.m"
              case (MR_Integer) 2:
#line 3654 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "prog_io_item.m"
                break;
#line 29 "prog_io_item.m"
              case (MR_Integer) 3:
#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)))) {
#line 29 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 3667 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 3673 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 3679 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                }
#line 29 "prog_io_item.m"
                break;
#line 29 "prog_io_item.m"
            }
#line 29 "prog_io_item.m"
          }
#line 29 "prog_io_item.m"
          break;
#line 29 "prog_io_item.m"
        case (MR_Integer) 2:
#line 29 "prog_io_item.m"
          {
#line 29 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__V_179_179 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));

#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 29 "prog_io_item.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
              case (MR_Integer) 0:
#line 3707 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "prog_io_item.m"
                break;
#line 29 "prog_io_item.m"
              case (MR_Integer) 1:
#line 3713 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "prog_io_item.m"
                break;
#line 29 "prog_io_item.m"
              case (MR_Integer) 2:
#line 29 "prog_io_item.m"
                {
#line 29 "prog_io_item.m"
                  MR_String parse_tree__prog_io_item__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)));

#line 29 "prog_io_item.m"
                  {
#line 29 "prog_io_item.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_179_179, parse_tree__prog_io_item__V_45_45);
#line 29 "prog_io_item.m"
                    return;
                  }
#line 29 "prog_io_item.m"
                }
#line 29 "prog_io_item.m"
                break;
#line 29 "prog_io_item.m"
              case (MR_Integer) 3:
#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)))) {
#line 29 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 3744 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 3750 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 3756 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                }
#line 29 "prog_io_item.m"
                break;
#line 29 "prog_io_item.m"
            }
#line 29 "prog_io_item.m"
          }
#line 29 "prog_io_item.m"
          break;
#line 29 "prog_io_item.m"
        case (MR_Integer) 3:
#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)))) {
#line 29 "prog_io_item.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
            case (MR_Integer) 0:
#line 29 "prog_io_item.m"
              {
#line 29 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_173_173 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));

#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 29 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 3795 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 3801 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 3807 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)))) {
#line 29 "prog_io_item.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
                      case (MR_Integer) 0:
#line 29 "prog_io_item.m"
                        {
#line 29 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 1)));
#line 29 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 2)));
#line 29 "prog_io_item.m"
                          MR_Integer parse_tree__prog_io_item__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 3)));
#line 29 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_76_76;

#line 29 "prog_io_item.m"
                          {
#line 29 "prog_io_item.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io_item__V_76_76, parse_tree__prog_io_item__V_175_175, parse_tree__prog_io_item__V_73_73);
                          }
#line 3836 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_76_76 == (MR_Integer) 0);
#line 29 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 29 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
                            *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_76_76;
#line 29 "prog_io_item.m"
                          else
#line 29 "prog_io_item.m"
                            {
#line 29 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__V_77_77;

#line 29 "prog_io_item.m"
                              {
#line 29 "prog_io_item.m"
                                mercury__term____Compare____context_0_0(&parse_tree__prog_io_item__V_77_77, parse_tree__prog_io_item__V_174_174, parse_tree__prog_io_item__V_74_74);
                              }
#line 3856 "parse_tree.prog_io_item.c"
                              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_77_77 == (MR_Integer) 0);
#line 29 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 29 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
                                *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_77_77;
#line 29 "prog_io_item.m"
                              else
#line 29 "prog_io_item.m"
                                {
#line 29 "prog_io_item.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_173_173, parse_tree__prog_io_item__V_75_75);
#line 29 "prog_io_item.m"
                                  return;
                                }
#line 29 "prog_io_item.m"
                            }
#line 29 "prog_io_item.m"
                        }
#line 29 "prog_io_item.m"
                        break;
#line 29 "prog_io_item.m"
                      case (MR_Integer) 1:
#line 3881 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "prog_io_item.m"
                        break;
#line 29 "prog_io_item.m"
                      case (MR_Integer) 2:
#line 3887 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "prog_io_item.m"
                        break;
#line 29 "prog_io_item.m"
                    }
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                }
#line 29 "prog_io_item.m"
              }
#line 29 "prog_io_item.m"
              break;
#line 29 "prog_io_item.m"
            case (MR_Integer) 1:
#line 29 "prog_io_item.m"
              {
#line 29 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_170_170 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));

#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 29 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 3919 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 3925 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 3931 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)))) {
#line 29 "prog_io_item.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
                      case (MR_Integer) 0:
#line 3944 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "prog_io_item.m"
                        break;
#line 29 "prog_io_item.m"
                      case (MR_Integer) 1:
#line 29 "prog_io_item.m"
                        {
#line 29 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 1)));
#line 29 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 2)));
#line 29 "prog_io_item.m"
                          MR_Integer parse_tree__prog_io_item__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 3)));
#line 29 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_114_114;

#line 29 "prog_io_item.m"
                          {
#line 29 "prog_io_item.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io_item__V_114_114, parse_tree__prog_io_item__V_172_172, parse_tree__prog_io_item__V_111_111);
                          }
#line 3966 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_114_114 == (MR_Integer) 0);
#line 29 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 29 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
                            *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_114_114;
#line 29 "prog_io_item.m"
                          else
#line 29 "prog_io_item.m"
                            {
#line 29 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__V_115_115;

#line 29 "prog_io_item.m"
                              {
#line 29 "prog_io_item.m"
                                mercury__term____Compare____context_0_0(&parse_tree__prog_io_item__V_115_115, parse_tree__prog_io_item__V_171_171, parse_tree__prog_io_item__V_112_112);
                              }
#line 3986 "parse_tree.prog_io_item.c"
                              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_115_115 == (MR_Integer) 0);
#line 29 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 29 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
                                *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_115_115;
#line 29 "prog_io_item.m"
                              else
#line 29 "prog_io_item.m"
                                {
#line 29 "prog_io_item.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_170_170, parse_tree__prog_io_item__V_113_113);
#line 29 "prog_io_item.m"
                                  return;
                                }
#line 29 "prog_io_item.m"
                            }
#line 29 "prog_io_item.m"
                        }
#line 29 "prog_io_item.m"
                        break;
#line 29 "prog_io_item.m"
                      case (MR_Integer) 2:
#line 4011 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 29 "prog_io_item.m"
                        break;
#line 29 "prog_io_item.m"
                    }
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                }
#line 29 "prog_io_item.m"
              }
#line 29 "prog_io_item.m"
              break;
#line 29 "prog_io_item.m"
            case (MR_Integer) 2:
#line 29 "prog_io_item.m"
              {
#line 29 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));

#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 29 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 4043 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 4049 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 4055 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)))) {
#line 29 "prog_io_item.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
                      case (MR_Integer) 0:
#line 4068 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "prog_io_item.m"
                        break;
#line 29 "prog_io_item.m"
                      case (MR_Integer) 1:
#line 4074 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 29 "prog_io_item.m"
                        break;
#line 29 "prog_io_item.m"
                      case (MR_Integer) 2:
#line 29 "prog_io_item.m"
                        {
#line 29 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 1)));
#line 29 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 2)));
#line 29 "prog_io_item.m"
                          MR_Integer parse_tree__prog_io_item__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 3)));
#line 29 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_152_152;
#line 29 "prog_io_item.m"
                          MR_Integer parse_tree__prog_io_item__V_180_180 = (MR_Integer) parse_tree__prog_io_item__V_178_178;
#line 29 "prog_io_item.m"
                          MR_Integer parse_tree__prog_io_item__V_181_181 = (MR_Integer) parse_tree__prog_io_item__V_149_149;

#line 29 "prog_io_item.m"
                          {
#line 29 "prog_io_item.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_item__V_152_152, parse_tree__prog_io_item__V_180_180, parse_tree__prog_io_item__V_181_181);
                          }
#line 4100 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_152_152 == (MR_Integer) 0);
#line 29 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 29 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
                            *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_152_152;
#line 29 "prog_io_item.m"
                          else
#line 29 "prog_io_item.m"
                            {
#line 29 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__V_153_153;

#line 29 "prog_io_item.m"
                              {
#line 29 "prog_io_item.m"
                                mercury__term____Compare____context_0_0(&parse_tree__prog_io_item__V_153_153, parse_tree__prog_io_item__V_177_177, parse_tree__prog_io_item__V_150_150);
                              }
#line 4120 "parse_tree.prog_io_item.c"
                              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_153_153 == (MR_Integer) 0);
#line 29 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 29 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
                                *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_153_153;
#line 29 "prog_io_item.m"
                              else
#line 29 "prog_io_item.m"
                                {
#line 29 "prog_io_item.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_176_176, parse_tree__prog_io_item__V_151_151);
#line 29 "prog_io_item.m"
                                  return;
                                }
#line 29 "prog_io_item.m"
                            }
#line 29 "prog_io_item.m"
                        }
#line 29 "prog_io_item.m"
                        break;
#line 29 "prog_io_item.m"
                    }
#line 29 "prog_io_item.m"
                    break;
#line 29 "prog_io_item.m"
                }
#line 29 "prog_io_item.m"
              }
#line 29 "prog_io_item.m"
              break;
#line 29 "prog_io_item.m"
          }
#line 29 "prog_io_item.m"
          break;
#line 29 "prog_io_item.m"
      }
#line 29 "prog_io_item.m"
  }
#line 29 "prog_io_item.m"
}

#line 29 "prog_io_item.m"
MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____item_or_marker_0_0(
#line 29 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 29 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 29 "prog_io_item.m"
{
#line 29 "prog_io_item.m"
  {
#line 29 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 29 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastX_27 = (MR_Integer) parse_tree__prog_io_item__HeadVar__1_1;
#line 29 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastY_28 = (MR_Integer) parse_tree__prog_io_item__HeadVar__2_2;

#line 29 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__CastX_27 == parse_tree__prog_io_item__CastY_28);
#line 29 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 29 "prog_io_item.m"
    else
#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__1_1)) {
#line 29 "prog_io_item.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
        case (MR_Integer) 0:
#line 29 "prog_io_item.m"
          {
#line 29 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)));
#line 29 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_4_4;

#line 29 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 29 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
              {
#line 29 "prog_io_item.m"
                parse_tree__prog_io_item__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 4212 "parse_tree.prog_io_item.c"
                {
#line 4214 "parse_tree.prog_io_item.c"
                  return parse_tree__prog_io_item__succeeded = parse_tree__prog_item____Unify____item_0_0(parse_tree__prog_io_item__V_3_3, parse_tree__prog_io_item__V_4_4);
                }
#line 29 "prog_io_item.m"
              }
#line 29 "prog_io_item.m"
          }
#line 29 "prog_io_item.m"
          break;
#line 29 "prog_io_item.m"
        case (MR_Integer) 1:
#line 29 "prog_io_item.m"
          {
#line 29 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeInfo_30_30;
#line 29 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)));
#line 29 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_6_6;

#line 29 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 29 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
              {
#line 29 "prog_io_item.m"
                parse_tree__prog_io_item__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 4242 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeInfo_30_30 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[11];
#line 4244 "parse_tree.prog_io_item.c"
                {
#line 4246 "parse_tree.prog_io_item.c"
                  return parse_tree__prog_io_item__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_item__TypeInfo_30_30, ((MR_Box) (parse_tree__prog_io_item__V_5_5)), ((MR_Box) (parse_tree__prog_io_item__V_6_6)));
                }
#line 29 "prog_io_item.m"
              }
#line 29 "prog_io_item.m"
          }
#line 29 "prog_io_item.m"
          break;
#line 29 "prog_io_item.m"
        case (MR_Integer) 2:
#line 29 "prog_io_item.m"
          {
#line 29 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)));
#line 29 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__V_8_8;

#line 29 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 29 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
              {
#line 29 "prog_io_item.m"
                parse_tree__prog_io_item__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 4272 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_7_7, parse_tree__prog_io_item__V_8_8) == 0);
#line 29 "prog_io_item.m"
              }
#line 29 "prog_io_item.m"
          }
#line 29 "prog_io_item.m"
          break;
#line 29 "prog_io_item.m"
        case (MR_Integer) 3:
#line 29 "prog_io_item.m"
#line 29 "prog_io_item.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)))) {
#line 29 "prog_io_item.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 29 "prog_io_item.m"
            case (MR_Integer) 0:
#line 29 "prog_io_item.m"
              {
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 2)));
#line 29 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 3)));
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_12_12;
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_13_13;
#line 29 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_14_14;

#line 29 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 29 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
                  {
#line 29 "prog_io_item.m"
                    parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 29 "prog_io_item.m"
                    parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 29 "prog_io_item.m"
                    parse_tree__prog_io_item__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 4316 "parse_tree.prog_io_item.c"
                    {
#line 4318 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_item__V_9_9, parse_tree__prog_io_item__V_12_12);
                    }
#line 29 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
                      {
#line 4325 "parse_tree.prog_io_item.c"
                        {
#line 4327 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io_item__V_10_10, parse_tree__prog_io_item__V_13_13);
                        }
#line 29 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 4332 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_11_11 == parse_tree__prog_io_item__V_14_14);
#line 29 "prog_io_item.m"
                      }
#line 29 "prog_io_item.m"
                  }
#line 29 "prog_io_item.m"
              }
#line 29 "prog_io_item.m"
              break;
#line 29 "prog_io_item.m"
            case (MR_Integer) 1:
#line 29 "prog_io_item.m"
              {
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 2)));
#line 29 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 3)));
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_18_18;
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_19_19;
#line 29 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_20_20;

#line 29 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 29 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
                  {
#line 29 "prog_io_item.m"
                    parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 29 "prog_io_item.m"
                    parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 29 "prog_io_item.m"
                    parse_tree__prog_io_item__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 4371 "parse_tree.prog_io_item.c"
                    {
#line 4373 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_item__V_15_15, parse_tree__prog_io_item__V_18_18);
                    }
#line 29 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
                      {
#line 4380 "parse_tree.prog_io_item.c"
                        {
#line 4382 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io_item__V_16_16, parse_tree__prog_io_item__V_19_19);
                        }
#line 29 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 4387 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_17_17 == parse_tree__prog_io_item__V_20_20);
#line 29 "prog_io_item.m"
                      }
#line 29 "prog_io_item.m"
                  }
#line 29 "prog_io_item.m"
              }
#line 29 "prog_io_item.m"
              break;
#line 29 "prog_io_item.m"
            case (MR_Integer) 2:
#line 29 "prog_io_item.m"
              {
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 2)));
#line 29 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 3)));
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_24_24;
#line 29 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_25_25;
#line 29 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_26_26;

#line 29 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 29 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
                  {
#line 29 "prog_io_item.m"
                    parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 29 "prog_io_item.m"
                    parse_tree__prog_io_item__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 29 "prog_io_item.m"
                    parse_tree__prog_io_item__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 4426 "parse_tree.prog_io_item.c"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_21_21 == parse_tree__prog_io_item__V_24_24);
#line 29 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 29 "prog_io_item.m"
                      {
#line 4432 "parse_tree.prog_io_item.c"
                        {
#line 4434 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io_item__V_22_22, parse_tree__prog_io_item__V_25_25);
                        }
#line 29 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 4439 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_23_23 == parse_tree__prog_io_item__V_26_26);
#line 29 "prog_io_item.m"
                      }
#line 29 "prog_io_item.m"
                  }
#line 29 "prog_io_item.m"
              }
#line 29 "prog_io_item.m"
              break;
#line 29 "prog_io_item.m"
          }
#line 29 "prog_io_item.m"
          break;
#line 29 "prog_io_item.m"
      }
#line 29 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 29 "prog_io_item.m"
  }
#line 29 "prog_io_item.m"
}

#line 1633 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__dummy_term_with_context_2_p_0(
#line 1633 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_3,
#line 1633 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Term_4)
#line 1633 "prog_io_item.m"
{
#line 1635 "prog_io_item.m"
  {
#line 1635 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1636 "prog_io_item.m"
    {
#line 1636 "prog_io_item.m"
      MR_Word base;
#line 1636 "prog_io_item.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1636 "prog_io_item.m"
      *parse_tree__prog_io_item__Term_4 = base;
#line 1636 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[21]));
#line 1636 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1636 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_3));
#line 1636 "prog_io_item.m"
    }
#line 1635 "prog_io_item.m"
  }
#line 1633 "prog_io_item.m"
}

#line 1600 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(
#line 1600 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1)
#line 1600 "prog_io_item.m"
{
#line 1602 "prog_io_item.m"
  {
#line 1602 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1602 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__HeadVar__2_2;

#line 1602 "prog_io_item.m"
#line 1602 "prog_io_item.m"
    switch (parse_tree__prog_io_item__HeadVar__1_1) {
#line 1602 "prog_io_item.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1602 "prog_io_item.m"
      case (MR_Integer) 1:
#line 1602 "prog_io_item.m"
        parse_tree__prog_io_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[72]);
#line 1602 "prog_io_item.m"
        break;
#line 1602 "prog_io_item.m"
      case (MR_Integer) 0:
#line 1604 "prog_io_item.m"
        parse_tree__prog_io_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[112]);
#line 1602 "prog_io_item.m"
        break;
#line 1602 "prog_io_item.m"
    }
#line 1602 "prog_io_item.m"
    return parse_tree__prog_io_item__HeadVar__2_2;
#line 1602 "prog_io_item.m"
  }
#line 1600 "prog_io_item.m"
}

#line 1589 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_purity_3_p_0(
#line 1589 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Purity_4,
#line 1589 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8,
#line 1589 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9)
#line 1589 "prog_io_item.m"
{
#line 1594 "prog_io_item.m"
  {
#line 1594 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8)) == (MR_mktag((MR_Integer) 1)));
#line 1594 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Purity0_6;
#line 1594 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10;
#line 1592 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_11_11;
#line 1592 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_12_12;
#line 1592 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_7_7;

#line 1592 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1592 "prog_io_item.m"
      {
#line 1592 "prog_io_item.m"
        parse_tree__prog_io_item__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8, (MR_Integer) 0)));
#line 1592 "prog_io_item.m"
        parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8, (MR_Integer) 1)));
#line 1592 "prog_io_item.m"
        parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_11_11, (MR_Integer) 0)));
#line 1592 "prog_io_item.m"
        parse_tree__prog_io_item__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_11_11, (MR_Integer) 1)));
#line 1592 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1592 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1592 "prog_io_item.m"
          parse_tree__prog_io_item__Purity0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_12_12, (MR_Integer) 0)));
#line 1592 "prog_io_item.m"
      }
#line 1594 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1593 "prog_io_item.m"
      {
#line 1593 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10;
#line 1593 "prog_io_item.m"
        *parse_tree__prog_io_item__Purity_4 = parse_tree__prog_io_item__Purity0_6;
#line 1593 "prog_io_item.m"
      }
#line 1594 "prog_io_item.m"
    else
#line 1595 "prog_io_item.m"
      {
#line 1595 "prog_io_item.m"
        *parse_tree__prog_io_item__Purity_4 = (MR_Integer) 0;
#line 1595 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8;
#line 1595 "prog_io_item.m"
      }
#line 1594 "prog_io_item.m"
  }
#line 1589 "prog_io_item.m"
}

#line 1568 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_implicitly_qualified_module_name_4_p_0(
#line 1568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__DefaultModuleName_5,
#line 1568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_7,
#line 1568 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModule_8)
#line 1568 "prog_io_item.m"
{
#line 1574 "prog_io_item.m"
  {
#line 1574 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1574 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__Term_7)) == (MR_mktag((MR_Integer) 0))))
#line 1583 "prog_io_item.m"
      {
#line 1583 "prog_io_item.m"
        parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_item__DefaultModuleName_5, parse_tree__prog_io_item__VarSet_6, parse_tree__prog_io_item__Term_7, parse_tree__prog_io_item__MaybeModule_8);
#line 1583 "prog_io_item.m"
        return;
      }
#line 1574 "prog_io_item.m"
    else
#line 1574 "prog_io_item.m"
      {
#line 1574 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Term_7, (MR_Integer) 1)));
#line 1574 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_12;
#line 1574 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 1574 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 1574 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1574 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Term_7, (MR_Integer) 0)));

#line 1579 "prog_io_item.m"
        {
#line 1579 "prog_io_item.m"
          parse_tree__prog_io_item__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1579 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_10));
#line 1579 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[153])));
#line 1579 "prog_io_item.m"
        }
#line 1579 "prog_io_item.m"
        {
#line 1579 "prog_io_item.m"
          parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1579 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_item__V_30_30));
#line 1579 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1579 "prog_io_item.m"
        }
#line 1578 "prog_io_item.m"
        {
#line 1578 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1578 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1578 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1578 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 1578 "prog_io_item.m"
        }
#line 1580 "prog_io_item.m"
        {
#line 1580 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_12));
#line 1580 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1580 "prog_io_item.m"
        }
#line 1580 "prog_io_item.m"
        {
#line 1580 "prog_io_item.m"
          MR_Word base;
#line 1580 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1580 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeModule_8 = base;
#line 1580 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 1580 "prog_io_item.m"
        }
#line 1574 "prog_io_item.m"
      }
#line 1574 "prog_io_item.m"
  }
#line 1568 "prog_io_item.m"
}

#line 1557 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_name_3_p_0(
#line 1557 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 1557 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1557 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModuleName_6)
#line 1557 "prog_io_item.m"
{
#line 1561 "prog_io_item.m"
  {
#line 1561 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1561 "prog_io_item.m"
    {
#line 1561 "prog_io_item.m"
      parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__VarSet_4, parse_tree__prog_io_item__Term_5, parse_tree__prog_io_item__MaybeModuleName_6);
#line 1561 "prog_io_item.m"
      return;
    }
#line 1561 "prog_io_item.m"
  }
#line 1557 "prog_io_item.m"
}

#line 1534 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__desugar_field_access_1_f_0(
#line 1534 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_3)
#line 1534 "prog_io_item.m"
{
#line 1542 "prog_io_item.m"
  {
#line 1542 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1542 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DesugaredTerm_4;
#line 1542 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__A_5;
#line 1542 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Context_7;
#line 1542 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Bs_9;
#line 1542 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;
#line 1538 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__RHS_6;
#line 1538 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 1538 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_17_17;
#line 1538 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_18_18;
#line 1538 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1538 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_20_20;
#line 1539 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_10_10;
#line 1539 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__FieldName_8;

#line 1538 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1538 "prog_io_item.m"
      {
#line 1538 "prog_io_item.m"
        parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 0)));
#line 1538 "prog_io_item.m"
        parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 1)));
#line 1538 "prog_io_item.m"
        parse_tree__prog_io_item__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 2)));
#line 1538 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 1538 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1538 "prog_io_item.m"
          {
#line 1538 "prog_io_item.m"
            parse_tree__prog_io_item__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 1538 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_17_17, (MR_String) "^") == 0);
#line 1538 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1538 "prog_io_item.m"
              {
#line 1538 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 1538 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1538 "prog_io_item.m"
                  {
#line 1538 "prog_io_item.m"
                    parse_tree__prog_io_item__A_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1538 "prog_io_item.m"
                    parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1538 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 1538 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1538 "prog_io_item.m"
                      {
#line 1538 "prog_io_item.m"
                        parse_tree__prog_io_item__RHS_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1538 "prog_io_item.m"
                        parse_tree__prog_io_item__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, (MR_Integer) 1)));
#line 1538 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1538 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1538 "prog_io_item.m"
                          {
#line 1539 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__RHS_6)) == (MR_mktag((MR_Integer) 0)));
#line 1539 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 1539 "prog_io_item.m"
                              {
#line 1539 "prog_io_item.m"
                                parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 0)));
#line 1539 "prog_io_item.m"
                                parse_tree__prog_io_item__Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 1)));
#line 1539 "prog_io_item.m"
                                parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 2)));
#line 1539 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 1539 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 1539 "prog_io_item.m"
                                  parse_tree__prog_io_item__FieldName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 1539 "prog_io_item.m"
                              }
#line 1538 "prog_io_item.m"
                          }
#line 1538 "prog_io_item.m"
                      }
#line 1538 "prog_io_item.m"
                  }
#line 1538 "prog_io_item.m"
              }
#line 1538 "prog_io_item.m"
          }
#line 1538 "prog_io_item.m"
      }
#line 1542 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1541 "prog_io_item.m"
      {
#line 1541 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 1541 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;

#line 1541 "prog_io_item.m"
        {
#line 1541 "prog_io_item.m"
          parse_tree__prog_io_item__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1541 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_item__A_5));
#line 1541 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1541 "prog_io_item.m"
        }
#line 1541 "prog_io_item.m"
        {
#line 1541 "prog_io_item.m"
          parse_tree__prog_io_item__V_23_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__Bs_9, parse_tree__prog_io_item__V_24_24);
        }
#line 1541 "prog_io_item.m"
        {
#line 1541 "prog_io_item.m"
          parse_tree__prog_io_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1541 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io_item__V_21_21));
#line 1541 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io_item__V_23_23));
#line 1541 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_7));
#line 1541 "prog_io_item.m"
        }
#line 1541 "prog_io_item.m"
      }
#line 1542 "prog_io_item.m"
    else
#line 1549 "prog_io_item.m"
      {
#line 1549 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_12;
#line 1549 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__A_44;
#line 1549 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_46;
#line 1549 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__FieldName_47;
#line 1549 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Bs_48;
#line 1543 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__LHS_11;
#line 1543 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_26_26;
#line 1543 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_27_27;
#line 1543 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_28_28;
#line 1543 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 1543 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 1543 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_31_31;
#line 1543 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_32_32;
#line 1543 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 1543 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_34_34;
#line 1543 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1543 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;
#line 1543 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__RHS_43;
#line 1543 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_13_13;
#line 1545 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_14_14;

#line 1543 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1543 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1543 "prog_io_item.m"
          {
#line 1543 "prog_io_item.m"
            parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 0)));
#line 1543 "prog_io_item.m"
            parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 1)));
#line 1543 "prog_io_item.m"
            parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 2)));
#line 1543 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_26_26)) == (MR_mktag((MR_Integer) 0)));
#line 1543 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1543 "prog_io_item.m"
              {
#line 1543 "prog_io_item.m"
                parse_tree__prog_io_item__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 0)));
#line 1543 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_27_27, (MR_String) ":=") == 0);
#line 1543 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1543 "prog_io_item.m"
                  {
#line 1543 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1543 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1543 "prog_io_item.m"
                      {
#line 1543 "prog_io_item.m"
                        parse_tree__prog_io_item__LHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 0)));
#line 1543 "prog_io_item.m"
                        parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 1)));
#line 1543 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 1543 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1543 "prog_io_item.m"
                          {
#line 1543 "prog_io_item.m"
                            parse_tree__prog_io_item__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 0)));
#line 1543 "prog_io_item.m"
                            parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 1)));
#line 1543 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1543 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 1543 "prog_io_item.m"
                              {
#line 1544 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__LHS_11)) == (MR_mktag((MR_Integer) 0)));
#line 1544 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 1544 "prog_io_item.m"
                                  {
#line 1544 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 0)));
#line 1544 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 1)));
#line 1544 "prog_io_item.m"
                                    parse_tree__prog_io_item__Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 2)));
#line 1544 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 1544 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 1544 "prog_io_item.m"
                                      {
#line 1544 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 1544 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_32_32, (MR_String) "^") == 0);
#line 1543 "prog_io_item.m"
                                        if (parse_tree__prog_io_item__succeeded)
#line 1543 "prog_io_item.m"
                                          {
#line 1544 "prog_io_item.m"
                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1544 "prog_io_item.m"
                                            if (parse_tree__prog_io_item__succeeded)
#line 1544 "prog_io_item.m"
                                              {
#line 1544 "prog_io_item.m"
                                                parse_tree__prog_io_item__A_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 0)));
#line 1544 "prog_io_item.m"
                                                parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 1)));
#line 1544 "prog_io_item.m"
                                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1544 "prog_io_item.m"
                                                if (parse_tree__prog_io_item__succeeded)
#line 1544 "prog_io_item.m"
                                                  {
#line 1544 "prog_io_item.m"
                                                    parse_tree__prog_io_item__RHS_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 0)));
#line 1544 "prog_io_item.m"
                                                    parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 1)));
#line 1544 "prog_io_item.m"
                                                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1543 "prog_io_item.m"
                                                    if (parse_tree__prog_io_item__succeeded)
#line 1543 "prog_io_item.m"
                                                      {
#line 1545 "prog_io_item.m"
                                                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__RHS_43)) == (MR_mktag((MR_Integer) 0)));
#line 1545 "prog_io_item.m"
                                                        if (parse_tree__prog_io_item__succeeded)
#line 1545 "prog_io_item.m"
                                                          {
#line 1545 "prog_io_item.m"
                                                            parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 0)));
#line 1545 "prog_io_item.m"
                                                            parse_tree__prog_io_item__Bs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 1)));
#line 1545 "prog_io_item.m"
                                                            parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 2)));
#line 1545 "prog_io_item.m"
                                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 1545 "prog_io_item.m"
                                                            if (parse_tree__prog_io_item__succeeded)
#line 1545 "prog_io_item.m"
                                                              parse_tree__prog_io_item__FieldName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 1545 "prog_io_item.m"
                                                          }
#line 1543 "prog_io_item.m"
                                                      }
#line 1544 "prog_io_item.m"
                                                  }
#line 1544 "prog_io_item.m"
                                              }
#line 1543 "prog_io_item.m"
                                          }
#line 1544 "prog_io_item.m"
                                      }
#line 1544 "prog_io_item.m"
                                  }
#line 1543 "prog_io_item.m"
                              }
#line 1543 "prog_io_item.m"
                          }
#line 1543 "prog_io_item.m"
                      }
#line 1543 "prog_io_item.m"
                  }
#line 1543 "prog_io_item.m"
              }
#line 1543 "prog_io_item.m"
          }
#line 1549 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1547 "prog_io_item.m"
          {
#line 1547 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__FunctionName_15;
#line 1547 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;
#line 1547 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_39_39;
#line 1547 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1547 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;

#line 1547 "prog_io_item.m"
            {
#line 1547 "prog_io_item.m"
              parse_tree__prog_io_item__FunctionName_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_item__FieldName_47, (MR_String) " :=");
            }
#line 1548 "prog_io_item.m"
            {
#line 1548 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1548 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_item__FunctionName_15));
#line 1548 "prog_io_item.m"
            }
#line 1548 "prog_io_item.m"
            {
#line 1548 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__X_12));
#line 1548 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1548 "prog_io_item.m"
            }
#line 1548 "prog_io_item.m"
            {
#line 1548 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__A_44));
#line 1548 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1548 "prog_io_item.m"
            }
#line 1548 "prog_io_item.m"
            {
#line 1548 "prog_io_item.m"
              parse_tree__prog_io_item__V_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__Bs_48, parse_tree__prog_io_item__V_40_40);
            }
#line 1548 "prog_io_item.m"
            {
#line 1548 "prog_io_item.m"
              parse_tree__prog_io_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1548 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1548 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 1548 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_46));
#line 1548 "prog_io_item.m"
            }
#line 1547 "prog_io_item.m"
          }
#line 1549 "prog_io_item.m"
        else
#line 1550 "prog_io_item.m"
          parse_tree__prog_io_item__DesugaredTerm_4 = parse_tree__prog_io_item__Term_3;
#line 1549 "prog_io_item.m"
      }
#line 1542 "prog_io_item.m"
    return parse_tree__prog_io_item__DesugaredTerm_4;
#line 1542 "prog_io_item.m"
  }
#line 1534 "prog_io_item.m"
}

#line 1488 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(
#line 1488 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 1488 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithInstTerm_5,
#line 1488 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithInst_6)
#line 1488 "prog_io_item.m"
{
#line 1506 "prog_io_item.m"
  {
#line 1506 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 1506 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTermPrime_7;
#line 1506 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InstTerm_8;
#line 1493 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_13_13;
#line 1493 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_14_14;
#line 1493 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_15_15;
#line 1493 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 1493 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 1493 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_9_9;

#line 1493 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1493 "prog_io_item.m"
      {
#line 1493 "prog_io_item.m"
        parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 0)));
#line 1493 "prog_io_item.m"
        parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 1)));
#line 1493 "prog_io_item.m"
        parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 2)));
#line 1493 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 1493 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1493 "prog_io_item.m"
          {
#line 1493 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_13_13, (MR_Integer) 0)));
#line 1493 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_14_14, (MR_String) "with_inst") == 0);
#line 1493 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1493 "prog_io_item.m"
              {
#line 1494 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1494 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1494 "prog_io_item.m"
                  {
#line 1494 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeWithInstTermPrime_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 0)));
#line 1494 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 1)));
#line 1494 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1494 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1494 "prog_io_item.m"
                      {
#line 1494 "prog_io_item.m"
                        parse_tree__prog_io_item__InstTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 1494 "prog_io_item.m"
                        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 1)));
#line 1494 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1494 "prog_io_item.m"
                      }
#line 1494 "prog_io_item.m"
                  }
#line 1493 "prog_io_item.m"
              }
#line 1493 "prog_io_item.m"
          }
#line 1493 "prog_io_item.m"
      }
#line 1506 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1496 "prog_io_item.m"
      {
#line 1499 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Inst_10;

#line 1496 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithInstTerm_5 = parse_tree__prog_io_item__BeforeWithInstTermPrime_7;
#line 1497 "prog_io_item.m"
        {
#line 1497 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__InstTerm_8, &parse_tree__prog_io_item__Inst_10);
        }
#line 1499 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1498 "prog_io_item.m"
          {
#line 1498 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_19_19;

#line 1498 "prog_io_item.m"
            {
#line 1498 "prog_io_item.m"
              parse_tree__prog_io_item__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_item__Inst_10));
#line 1498 "prog_io_item.m"
            }
#line 1498 "prog_io_item.m"
            {
#line 1498 "prog_io_item.m"
              MR_Word base;
#line 1498 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithInst_6 = base;
#line 1498 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_19_19));
#line 1498 "prog_io_item.m"
            }
#line 1498 "prog_io_item.m"
          }
#line 1499 "prog_io_item.m"
        else
#line 1501 "prog_io_item.m"
          {
#line 1501 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_12;
#line 1501 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_33_33;
#line 1501 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_34_34;
#line 1501 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_35_35;
#line 1501 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;

#line 1503 "prog_io_item.m"
            {
#line 1503 "prog_io_item.m"
              parse_tree__prog_io_item__V_35_35 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__InstTerm_8);
            }
#line 1503 "prog_io_item.m"
            {
#line 1503 "prog_io_item.m"
              parse_tree__prog_io_item__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1503 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 1503 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[145])));
#line 1503 "prog_io_item.m"
            }
#line 1503 "prog_io_item.m"
            {
#line 1503 "prog_io_item.m"
              parse_tree__prog_io_item__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1503 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_item__V_34_34));
#line 1503 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1503 "prog_io_item.m"
            }
#line 1502 "prog_io_item.m"
            {
#line 1502 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1502 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1502 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1502 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_item__V_33_33));
#line 1502 "prog_io_item.m"
            }
#line 1504 "prog_io_item.m"
            {
#line 1504 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_12));
#line 1504 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1504 "prog_io_item.m"
            }
#line 1504 "prog_io_item.m"
            {
#line 1504 "prog_io_item.m"
              MR_Word base;
#line 1504 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithInst_6 = base;
#line 1504 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1504 "prog_io_item.m"
            }
#line 1501 "prog_io_item.m"
          }
#line 1496 "prog_io_item.m"
      }
#line 1506 "prog_io_item.m"
    else
#line 1507 "prog_io_item.m"
      {
#line 1507 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithInstTerm_5 = parse_tree__prog_io_item__Term_4;
#line 1508 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeWithInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[14]);
#line 1507 "prog_io_item.m"
      }
#line 1506 "prog_io_item.m"
  }
#line 1488 "prog_io_item.m"
}

#line 1457 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(
#line 1457 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1457 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1457 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithTypeTerm_7,
#line 1457 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithType_8)
#line 1457 "prog_io_item.m"
{
#line 1481 "prog_io_item.m"
  {
#line 1481 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1481 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithTypeTermPrime_10;
#line 1481 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeTerm_11;
#line 1463 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeQualifier_9;
#line 1463 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 1463 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_18_18;
#line 1463 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1463 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_24_24;
#line 1462 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_12_12;

#line 1462 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1462 "prog_io_item.m"
      {
#line 1462 "prog_io_item.m"
        parse_tree__prog_io_item__TypeQualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 0)));
#line 1462 "prog_io_item.m"
        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 1)));
#line 1462 "prog_io_item.m"
        parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 2)));
#line 1463 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 1463 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1463 "prog_io_item.m"
          {
#line 1463 "prog_io_item.m"
            parse_tree__prog_io_item__BeforeWithTypeTermPrime_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_17_17, (MR_Integer) 0)));
#line 1463 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_17_17, (MR_Integer) 1)));
#line 1463 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 1463 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1463 "prog_io_item.m"
              {
#line 1463 "prog_io_item.m"
                parse_tree__prog_io_item__TypeTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1463 "prog_io_item.m"
                parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1463 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1463 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1463 "prog_io_item.m"
                  {
#line 1465 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__TypeQualifier_9)) == (MR_mktag((MR_Integer) 0)));
#line 1465 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1465 "prog_io_item.m"
                      {
#line 1465 "prog_io_item.m"
                        parse_tree__prog_io_item__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__TypeQualifier_9, (MR_Integer) 0)));
#line 1466 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__V_24_24, (MR_String) ":") == 0))
#line 1467 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1466 "prog_io_item.m"
                        else
#line 1466 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__V_24_24, (MR_String) "with_type") == 0))
#line 1465 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1466 "prog_io_item.m"
                        else
#line 1466 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 1465 "prog_io_item.m"
                      }
#line 1463 "prog_io_item.m"
                  }
#line 1463 "prog_io_item.m"
              }
#line 1463 "prog_io_item.m"
          }
#line 1462 "prog_io_item.m"
      }
#line 1481 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1470 "prog_io_item.m"
      {
#line 1470 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeType_14;

#line 1470 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithTypeTerm_7 = parse_tree__prog_io_item__BeforeWithTypeTermPrime_10;
#line 1473 "prog_io_item.m"
        {
#line 1473 "prog_io_item.m"
          parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_item__TypeTerm_11, parse_tree__prog_io_item__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__MaybeType_14);
        }
#line 1477 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
#line 1479 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeWithType_8 = (MR_Word) parse_tree__prog_io_item__MaybeType_14;
#line 1477 "prog_io_item.m"
        else
#line 1475 "prog_io_item.m"
          {
#line 1475 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeType_14, (MR_Integer) 0)));
#line 1475 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_22_22;

#line 1476 "prog_io_item.m"
            {
#line 1476 "prog_io_item.m"
              parse_tree__prog_io_item__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1476 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_15));
#line 1476 "prog_io_item.m"
            }
#line 1476 "prog_io_item.m"
            {
#line 1476 "prog_io_item.m"
              MR_Word base;
#line 1476 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1476 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithType_8 = base;
#line 1476 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_22_22));
#line 1476 "prog_io_item.m"
            }
#line 1475 "prog_io_item.m"
          }
#line 1470 "prog_io_item.m"
      }
#line 1481 "prog_io_item.m"
    else
#line 1482 "prog_io_item.m"
      {
#line 1482 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithTypeTerm_7 = parse_tree__prog_io_item__Term_6;
#line 1483 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeWithType_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[19]);
#line 1482 "prog_io_item.m"
      }
#line 1481 "prog_io_item.m"
  }
#line 1457 "prog_io_item.m"
}

#line 1428 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(
#line 1428 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1428 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1428 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeDetismTerm_7,
#line 1428 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeMaybeDetism_8)
#line 1428 "prog_io_item.m"
{
#line 1450 "prog_io_item.m"
  {
#line 1450 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1450 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTermPrime_11;
#line 1450 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DetismTerm_12;
#line 1433 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Args_9;
#line 1433 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1433 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_20_20;
#line 1433 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;
#line 1433 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_22_22;
#line 1433 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_10_10;

#line 1433 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1433 "prog_io_item.m"
      {
#line 1433 "prog_io_item.m"
        parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 0)));
#line 1433 "prog_io_item.m"
        parse_tree__prog_io_item__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 1)));
#line 1433 "prog_io_item.m"
        parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 2)));
#line 1433 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 1433 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1433 "prog_io_item.m"
          {
#line 1433 "prog_io_item.m"
            parse_tree__prog_io_item__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1433 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_20_20, (MR_String) "is") == 0);
#line 1433 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1433 "prog_io_item.m"
              {
#line 1434 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 1434 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1434 "prog_io_item.m"
                  {
#line 1434 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeDetismTermPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_9, (MR_Integer) 0)));
#line 1434 "prog_io_item.m"
                    parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_9, (MR_Integer) 1)));
#line 1434 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 1434 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1434 "prog_io_item.m"
                      {
#line 1434 "prog_io_item.m"
                        parse_tree__prog_io_item__DetismTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 1434 "prog_io_item.m"
                        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 1)));
#line 1434 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1434 "prog_io_item.m"
                      }
#line 1434 "prog_io_item.m"
                  }
#line 1433 "prog_io_item.m"
              }
#line 1433 "prog_io_item.m"
          }
#line 1433 "prog_io_item.m"
      }
#line 1450 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1436 "prog_io_item.m"
      {
#line 1442 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Detism_15;
#line 1438 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__DetismFunctor_13;
#line 1438 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 1438 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;
#line 1438 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_14_14;

#line 1436 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeDetismTerm_7 = parse_tree__prog_io_item__BeforeDetismTermPrime_11;
#line 1438 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__DetismTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 1438 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1438 "prog_io_item.m"
          {
#line 1438 "prog_io_item.m"
            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 0)));
#line 1438 "prog_io_item.m"
            parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 1)));
#line 1438 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 2)));
#line 1438 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1438 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1438 "prog_io_item.m"
              {
#line 1438 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 1438 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1438 "prog_io_item.m"
                  {
#line 1438 "prog_io_item.m"
                    parse_tree__prog_io_item__DetismFunctor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_23_23, (MR_Integer) 0)));
#line 1439 "prog_io_item.m"
                    {
#line 1439 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_item__DetismFunctor_13, &parse_tree__prog_io_item__Detism_15);
                    }
#line 1438 "prog_io_item.m"
                  }
#line 1438 "prog_io_item.m"
              }
#line 1438 "prog_io_item.m"
          }
#line 1442 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1441 "prog_io_item.m"
          {
#line 1441 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_25_25;

#line 1441 "prog_io_item.m"
            {
#line 1441 "prog_io_item.m"
              parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Detism_15));
#line 1441 "prog_io_item.m"
            }
#line 1441 "prog_io_item.m"
            {
#line 1441 "prog_io_item.m"
              MR_Word base;
#line 1441 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeMaybeDetism_8 = base;
#line 1441 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 1441 "prog_io_item.m"
            }
#line 1441 "prog_io_item.m"
          }
#line 1442 "prog_io_item.m"
        else
#line 1443 "prog_io_item.m"
          {
#line 1443 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1443 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__TermStr_16;
#line 1443 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Pieces_17;
#line 1443 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_18;
#line 1443 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_28_28;
#line 1443 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29;
#line 1443 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;
#line 1443 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_39_39;
#line 1443 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1443 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 1443 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_42_42;
#line 1443 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_45_45;

#line 1443 "prog_io_item.m"
            {
#line 1443 "prog_io_item.m"
              parse_tree__prog_io_item__TermStr_16 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_48_48, parse_tree__prog_io_item__VarSet_5, parse_tree__prog_io_item__Term_6);
            }
#line 1445 "prog_io_item.m"
            {
#line 1445 "prog_io_item.m"
              parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1445 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1445 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_16));
#line 1445 "prog_io_item.m"
            }
#line 1445 "prog_io_item.m"
            {
#line 1445 "prog_io_item.m"
              parse_tree__prog_io_item__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1445 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 1445 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 1445 "prog_io_item.m"
            }
#line 1444 "prog_io_item.m"
            {
#line 1444 "prog_io_item.m"
              parse_tree__prog_io_item__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[152])));
#line 1444 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_17, 1) = ((MR_Box) (parse_tree__prog_io_item__V_28_28));
#line 1444 "prog_io_item.m"
            }
#line 1447 "prog_io_item.m"
            {
#line 1447 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_48_48, parse_tree__prog_io_item__DetismTerm_12);
            }
#line 1447 "prog_io_item.m"
            {
#line 1447 "prog_io_item.m"
              parse_tree__prog_io_item__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1447 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_17));
#line 1447 "prog_io_item.m"
            }
#line 1447 "prog_io_item.m"
            {
#line 1447 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 1447 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1447 "prog_io_item.m"
            }
#line 1447 "prog_io_item.m"
            {
#line 1447 "prog_io_item.m"
              parse_tree__prog_io_item__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1447 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1447 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 1) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1447 "prog_io_item.m"
            }
#line 1447 "prog_io_item.m"
            {
#line 1447 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 1447 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1447 "prog_io_item.m"
            }
#line 1446 "prog_io_item.m"
            {
#line 1446 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1446 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1446 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1446 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1446 "prog_io_item.m"
            }
#line 1448 "prog_io_item.m"
            {
#line 1448 "prog_io_item.m"
              parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_18));
#line 1448 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1448 "prog_io_item.m"
            }
#line 1448 "prog_io_item.m"
            {
#line 1448 "prog_io_item.m"
              MR_Word base;
#line 1448 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1448 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeMaybeDetism_8 = base;
#line 1448 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_45_45));
#line 1448 "prog_io_item.m"
            }
#line 1443 "prog_io_item.m"
          }
#line 1436 "prog_io_item.m"
      }
#line 1450 "prog_io_item.m"
    else
#line 1451 "prog_io_item.m"
      {
#line 1451 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeDetismTerm_7 = parse_tree__prog_io_item__Term_6;
#line 1452 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeMaybeDetism_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[18]);
#line 1451 "prog_io_item.m"
      }
#line 1450 "prog_io_item.m"
  }
#line 1428 "prog_io_item.m"
}

#line 1340 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_constraints_6_p_0(
#line 1340 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1340 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1340 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1340 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23,
#line 1340 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24,
#line 1340 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeClassInstConstraints_11)
#line 1340 "prog_io_item.m"
{
#line 1372 "prog_io_item.m"
  {
#line 1372 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23)) == (MR_mktag((MR_Integer) 1)));
#line 1372 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConstraintsTerm_12;
#line 1372 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25;
#line 1347 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_26_26;
#line 1347 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_27_27;
#line 1347 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_41_41;
#line 1348 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___Term_13;

#line 1349 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1349 "prog_io_item.m"
      {
#line 1349 "prog_io_item.m"
        parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23, (MR_Integer) 0)));
#line 1349 "prog_io_item.m"
        parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23, (MR_Integer) 1)));
#line 1348 "prog_io_item.m"
        parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 0)));
#line 1348 "prog_io_item.m"
        parse_tree__prog_io_item___Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 1)));
#line 1348 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_27_27)) == (MR_mktag((MR_Integer) 3)));
#line 1348 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1348 "prog_io_item.m"
          {
#line 1348 "prog_io_item.m"
            parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_27_27, (MR_Integer) 0)));
#line 1348 "prog_io_item.m"
            parse_tree__prog_io_item__ConstraintsTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_27_27, (MR_Integer) 1)));
#line 1348 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__QuantType_7 == parse_tree__prog_io_item__V_41_41);
#line 1348 "prog_io_item.m"
          }
#line 1349 "prog_io_item.m"
      }
#line 1372 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1352 "prog_io_item.m"
      {
#line 1352 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeHeadConstraints_14;
#line 1352 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeTailConstraints_15;
#line 1367 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadClassConstraints_16;
#line 1367 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadInstConstraint_17;
#line 1367 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TailClassConstraints_18;
#line 1367 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TailInstConstraint_19;

#line 1351 "prog_io_item.m"
        {
#line 1351 "prog_io_item.m"
          parse_tree__prog_io_typeclass__parse_class_and_inst_constraints_4_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ConstraintsTerm_12, &parse_tree__prog_io_item__MaybeHeadConstraints_14);
        }
#line 1355 "prog_io_item.m"
        {
#line 1355 "prog_io_item.m"
          parse_tree__prog_io_item__get_constraints_6_p_0(parse_tree__prog_io_item__QuantType_7, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24, &parse_tree__prog_io_item__MaybeTailConstraints_15);
        }
#line 1358 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeHeadConstraints_14)) == (MR_mktag((MR_Integer) 1)));
#line 1358 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1358 "prog_io_item.m"
          {
#line 1358 "prog_io_item.m"
            parse_tree__prog_io_item__HeadClassConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeHeadConstraints_14, (MR_Integer) 0)));
#line 1358 "prog_io_item.m"
            parse_tree__prog_io_item__HeadInstConstraint_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeHeadConstraints_14, (MR_Integer) 1)));
#line 1360 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeTailConstraints_15)) == (MR_mktag((MR_Integer) 1)));
#line 1360 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1360 "prog_io_item.m"
              {
#line 1360 "prog_io_item.m"
                parse_tree__prog_io_item__TailClassConstraints_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeTailConstraints_15, (MR_Integer) 0)));
#line 1360 "prog_io_item.m"
                parse_tree__prog_io_item__TailInstConstraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeTailConstraints_15, (MR_Integer) 1)));
#line 1360 "prog_io_item.m"
              }
#line 1358 "prog_io_item.m"
          }
#line 1367 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1363 "prog_io_item.m"
          {
#line 1363 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ClassConstraints_20;
#line 1363 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_21;

#line 1363 "prog_io_item.m"
            {
#line 1363 "prog_io_item.m"
              parse_tree__prog_io_item__ClassConstraints_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, parse_tree__prog_io_item__HeadClassConstraints_16, parse_tree__prog_io_item__TailClassConstraints_18);
            }
#line 1364 "prog_io_item.m"
            {
#line 1364 "prog_io_item.m"
              parse_tree__prog_io_item__InstConstraints_21 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_item__HeadInstConstraint_17, parse_tree__prog_io_item__TailInstConstraint_19);
            }
#line 1366 "prog_io_item.m"
            {
#line 1366 "prog_io_item.m"
              MR_Word base;
#line 1366 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1366 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ClassConstraints_20));
#line 1366 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_21));
#line 1366 "prog_io_item.m"
            }
#line 1363 "prog_io_item.m"
          }
#line 1367 "prog_io_item.m"
        else
#line 1369 "prog_io_item.m"
          {
#line 1369 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeInfo_37_37 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[9];
#line 1369 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeInfo_38_38 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[1];
#line 1369 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_22;
#line 1369 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29;
#line 1369 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_30_30;

#line 1368 "prog_io_item.m"
            {
#line 1368 "prog_io_item.m"
              parse_tree__prog_io_item__V_29_29 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__TypeInfo_38_38, parse_tree__prog_io_item__MaybeHeadConstraints_14);
            }
#line 1369 "prog_io_item.m"
            {
#line 1369 "prog_io_item.m"
              parse_tree__prog_io_item__V_30_30 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__TypeInfo_38_38, parse_tree__prog_io_item__MaybeTailConstraints_15);
            }
#line 1368 "prog_io_item.m"
            {
#line 1368 "prog_io_item.m"
              parse_tree__prog_io_item__Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_29_29, parse_tree__prog_io_item__V_30_30);
            }
#line 1370 "prog_io_item.m"
            {
#line 1370 "prog_io_item.m"
              MR_Word base;
#line 1370 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1370 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1370 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_22));
#line 1370 "prog_io_item.m"
            }
#line 1369 "prog_io_item.m"
          }
#line 1352 "prog_io_item.m"
      }
#line 1372 "prog_io_item.m"
    else
#line 1373 "prog_io_item.m"
      {
#line 1373 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_32_32;

#line 1373 "prog_io_item.m"
        {
#line 1373 "prog_io_item.m"
          parse_tree__prog_io_item__V_32_32 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        }
#line 1373 "prog_io_item.m"
        {
#line 1373 "prog_io_item.m"
          MR_Word base;
#line 1373 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1373 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1373 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 1373 "prog_io_item.m"
        }
#line 1373 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23;
#line 1373 "prog_io_item.m"
      }
#line 1372 "prog_io_item.m"
  }
#line 1340 "prog_io_item.m"
}

#line 1318 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0_1(
#line 1318 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1318 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1318 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1318 "prog_io_item.m"
{
#line 1318 "prog_io_item.m"
  {
#line 1318 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1318 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_39;

#line 1318 "prog_io_item.m"
    {
#line 1318 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1318__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_39);
    }
#line 1318 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_39));
#line 1318 "prog_io_item.m"
  }
#line 1318 "prog_io_item.m"
}

#line 1275 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(
#line 1275 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 1275 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 1275 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RevAttributes0_8,
#line 1275 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__RevAttributes_9,
#line 1275 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeExistClassInstContext_10)
#line 1275 "prog_io_item.m"
{
#line 1280 "prog_io_item.m"
  {
#line 1280 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1280 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeInfo_37_37 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[0];
#line 1280 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes0_11;
#line 1280 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes1_12;
#line 1280 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes2_14;
#line 1280 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVars0_15;
#line 1280 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVars_16;
#line 1280 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes3_17;
#line 1280 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeUnivConstraints_18;
#line 1280 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes_19;
#line 1280 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeExistConstraints_20;
#line 1314 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___UnivQVars_13;
#line 1334 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__UnivConstraints_21;
#line 1334 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__UnivInstConstraints_22;
#line 1334 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistConstraints_23;
#line 1334 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistInstConstraints_24;

#line 1313 "prog_io_item.m"
    {
#line 1313 "prog_io_item.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__RevAttributes0_8, &parse_tree__prog_io_item__Attributes0_11);
    }
#line 1314 "prog_io_item.m"
    {
#line 1314 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__Attributes0_11, &parse_tree__prog_io_item__Attributes1_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item___UnivQVars_13);
    }
#line 1316 "prog_io_item.m"
    {
#line 1316 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 0, parse_tree__prog_io_item__Attributes1_12, &parse_tree__prog_io_item__Attributes2_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__ExistQVars0_15);
    }
#line 1318 "prog_io_item.m"
    {
#line 1318 "prog_io_item.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[7], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[5], parse_tree__prog_io_item__ExistQVars0_15, &parse_tree__prog_io_item__ExistQVars_16);
    }
#line 1319 "prog_io_item.m"
    {
#line 1319 "prog_io_item.m"
      parse_tree__prog_io_item__get_constraints_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Attributes2_14, &parse_tree__prog_io_item__Attributes3_17, &parse_tree__prog_io_item__MaybeUnivConstraints_18);
    }
#line 1321 "prog_io_item.m"
    {
#line 1321 "prog_io_item.m"
      parse_tree__prog_io_item__get_constraints_6_p_0((MR_Integer) 0, parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Attributes3_17, &parse_tree__prog_io_item__Attributes_19, &parse_tree__prog_io_item__MaybeExistConstraints_20);
    }
#line 1323 "prog_io_item.m"
    {
#line 1323 "prog_io_item.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__Attributes_19, parse_tree__prog_io_item__RevAttributes_9);
    }
#line 1326 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeUnivConstraints_18)) == (MR_mktag((MR_Integer) 1)));
#line 1326 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1326 "prog_io_item.m"
      {
#line 1326 "prog_io_item.m"
        parse_tree__prog_io_item__UnivConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeUnivConstraints_18, (MR_Integer) 0)));
#line 1326 "prog_io_item.m"
        parse_tree__prog_io_item__UnivInstConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeUnivConstraints_18, (MR_Integer) 1)));
#line 1327 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeExistConstraints_20)) == (MR_mktag((MR_Integer) 1)));
#line 1327 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1327 "prog_io_item.m"
          {
#line 1327 "prog_io_item.m"
            parse_tree__prog_io_item__ExistConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistConstraints_20, (MR_Integer) 0)));
#line 1327 "prog_io_item.m"
            parse_tree__prog_io_item__ExistInstConstraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistConstraints_20, (MR_Integer) 1)));
#line 1327 "prog_io_item.m"
          }
#line 1326 "prog_io_item.m"
      }
#line 1334 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1329 "prog_io_item.m"
      {
#line 1329 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ClassConstraints_25;
#line 1329 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_26;

#line 1329 "prog_io_item.m"
        {
#line 1329 "prog_io_item.m"
          parse_tree__prog_io_item__ClassConstraints_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1329 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassConstraints_25, 0) = ((MR_Box) (parse_tree__prog_io_item__UnivConstraints_21));
#line 1329 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassConstraints_25, 1) = ((MR_Box) (parse_tree__prog_io_item__ExistConstraints_23));
#line 1329 "prog_io_item.m"
        }
#line 1330 "prog_io_item.m"
        {
#line 1330 "prog_io_item.m"
          parse_tree__prog_io_item__InstConstraints_26 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_item__UnivInstConstraints_22, parse_tree__prog_io_item__ExistInstConstraints_24);
        }
#line 1332 "prog_io_item.m"
        {
#line 1332 "prog_io_item.m"
          MR_Word base;
#line 1332 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeExistClassInstContext_10 = base;
#line 1332 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_16));
#line 1332 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__ClassConstraints_25));
#line 1332 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_26));
#line 1332 "prog_io_item.m"
        }
#line 1329 "prog_io_item.m"
      }
#line 1334 "prog_io_item.m"
    else
#line 1336 "prog_io_item.m"
      {
#line 1336 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeInfo_47_47 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[9];
#line 1336 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeInfo_48_48 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[1];
#line 1336 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_27;
#line 1336 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1336 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;

#line 1335 "prog_io_item.m"
        {
#line 1335 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_47_47, parse_tree__prog_io_item__TypeInfo_48_48, parse_tree__prog_io_item__MaybeUnivConstraints_18);
        }
#line 1336 "prog_io_item.m"
        {
#line 1336 "prog_io_item.m"
          parse_tree__prog_io_item__V_36_36 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_47_47, parse_tree__prog_io_item__TypeInfo_48_48, parse_tree__prog_io_item__MaybeExistConstraints_20);
        }
#line 1335 "prog_io_item.m"
        {
#line 1335 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_35_35, parse_tree__prog_io_item__V_36_36);
        }
#line 1337 "prog_io_item.m"
        {
#line 1337 "prog_io_item.m"
          MR_Word base;
#line 1337 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1337 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeExistClassInstContext_10 = base;
#line 1337 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_27));
#line 1337 "prog_io_item.m"
        }
#line 1336 "prog_io_item.m"
      }
#line 1280 "prog_io_item.m"
  }
#line 1275 "prog_io_item.m"
}

#line 1204 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1(
#line 1204 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1204 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1204 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1204 "prog_io_item.m"
{
#line 1204 "prog_io_item.m"
  {
#line 1204 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1204 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__3_3;

#line 1204 "prog_io_item.m"
    {
#line 1204 "prog_io_item.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__3_3);
    }
#line 1204 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__3_3));
#line 1204 "prog_io_item.m"
  }
#line 1204 "prog_io_item.m"
}

#line 1192 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_16,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_17,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_18,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 1192 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 1192 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 1192 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24)
#line 1192 "prog_io_item.m"
{
#line 1246 "prog_io_item.m"
  {
#line 1246 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1246 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgModes0_25;

#line 1199 "prog_io_item.m"
    {
#line 1199 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__ArgTerms_14, &parse_tree__prog_io_item__ArgModes0_25);
    }
#line 1246 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1201 "prog_io_item.m"
      {
#line 1201 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_26;
#line 1201 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeConstraints_27;

#line 1200 "prog_io_item.m"
        {
#line 1200 "prog_io_item.m"
          parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_15, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__Attributes0_21, &parse_tree__prog_io_item__Attributes_26, &parse_tree__prog_io_item__MaybeConstraints_27);
        }
#line 1242 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_27)) == (MR_mktag((MR_Integer) 0))))
#line 1243 "prog_io_item.m"
          {
#line 1243 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 0)));

#line 1244 "prog_io_item.m"
            {
#line 1244 "prog_io_item.m"
              MR_Word base;
#line 1244 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1244 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1244 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_42));
#line 1244 "prog_io_item.m"
            }
#line 1243 "prog_io_item.m"
          }
#line 1242 "prog_io_item.m"
        else
#line 1203 "prog_io_item.m"
          {
#line 1203 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_130_130;
#line 1203 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 2)));
#line 1203 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgModes_31;
#line 1203 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_45_45;
#line 1203 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 0)));
#line 1203 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 1)));
#line 1234 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__RetMode0_32;

#line 1204 "prog_io_item.m"
            {
#line 1204 "prog_io_item.m"
              parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1204 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[1]));
#line 1204 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1));
#line 1204 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1204 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 3) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_30));
#line 1204 "prog_io_item.m"
            }
#line 6495 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1204 "prog_io_item.m"
            {
#line 1204 "prog_io_item.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_130_130, parse_tree__prog_io_item__TypeCtorInfo_130_130, parse_tree__prog_io_item__V_45_45, parse_tree__prog_io_item__ArgModes0_25, &parse_tree__prog_io_item__ArgModes_31);
            }
#line 1207 "prog_io_item.m"
            {
#line 1207 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__RetModeTerm_17, &parse_tree__prog_io_item__RetMode0_32);
            }
#line 1234 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1210 "prog_io_item.m"
              {
#line 1210 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeCtorInfo_131_131;
#line 1210 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__RetMode_33;
#line 1210 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__InstVarSet_34;
#line 1210 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgReturnModes_35;
#line 1210 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_47_47;

#line 1209 "prog_io_item.m"
                {
#line 1209 "prog_io_item.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_30, parse_tree__prog_io_item__RetMode0_32, &parse_tree__prog_io_item__RetMode_33);
                }
#line 6527 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_131_131 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1211 "prog_io_item.m"
                {
#line 1211 "prog_io_item.m"
                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_131_131, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__InstVarSet_34);
                }
#line 1212 "prog_io_item.m"
                {
#line 1212 "prog_io_item.m"
                  parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__RetMode_33));
#line 1212 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "prog_io_item.m"
                }
#line 1212 "prog_io_item.m"
                {
#line 1212 "prog_io_item.m"
                  parse_tree__prog_io_item__ArgReturnModes_35 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_130_130, parse_tree__prog_io_item__ArgModes_31, parse_tree__prog_io_item__V_47_47);
                }
#line 1214 "prog_io_item.m"
                {
#line 1214 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io_item__ArgReturnModes_35);
                }
#line 1223 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1219 "prog_io_item.m"
                  {
#line 1219 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ItemModeDecl_36;
#line 1219 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Item_37;
#line 1219 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__MaybeItem0_38;

#line 1217 "prog_io_item.m"
                    {
#line 1217 "prog_io_item.m"
                      parse_tree__prog_io_item__ItemModeDecl_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1217 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_13));
#line 1217 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[16])));
#line 1217 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 2) = ((MR_Box) (parse_tree__prog_io_item__ArgReturnModes_35));
#line 1217 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 4) = ((MR_Box) (parse_tree__prog_io_item__MaybeDetism_20));
#line 1217 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 5) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_34));
#line 1217 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_22));
#line 1217 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_23));
#line 1217 "prog_io_item.m"
                    }
#line 1220 "prog_io_item.m"
                    {
#line 1220 "prog_io_item.m"
                      parse_tree__prog_io_item__Item_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1220 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1220 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_37, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemModeDecl_36));
#line 1220 "prog_io_item.m"
                    }
#line 1221 "prog_io_item.m"
                    {
#line 1221 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeItem0_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_38, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_37));
#line 1221 "prog_io_item.m"
                    }
#line 1222 "prog_io_item.m"
                    {
#line 1222 "prog_io_item.m"
                      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_38, parse_tree__prog_io_item__Attributes_26, parse_tree__prog_io_item__MaybeItem_24);
#line 1222 "prog_io_item.m"
                      return;
                    }
#line 1219 "prog_io_item.m"
                  }
#line 1223 "prog_io_item.m"
                else
#line 1224 "prog_io_item.m"
                  {
#line 1224 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__FullTermStr_39;
#line 1224 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Pieces_40;
#line 1224 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_41;
#line 1224 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_54_54;
#line 1224 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_57_57;
#line 1224 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_60_60;
#line 1224 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_62_62;
#line 1224 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_63_63;
#line 1224 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_72_72;
#line 1224 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_73_73;
#line 1224 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_74_74;
#line 1224 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_75_75;
#line 1224 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_76_76;
#line 1224 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_79_79;

#line 1224 "prog_io_item.m"
                    {
#line 1224 "prog_io_item.m"
                      parse_tree__prog_io_item__FullTermStr_39 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_131_131, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__FullTerm_18);
                    }
#line 1228 "prog_io_item.m"
                    {
#line 1228 "prog_io_item.m"
                      parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1228 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_item__FullTermStr_39));
#line 1228 "prog_io_item.m"
                    }
#line 1228 "prog_io_item.m"
                    {
#line 1228 "prog_io_item.m"
                      parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 1228 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 1228 "prog_io_item.m"
                    }
#line 1227 "prog_io_item.m"
                    {
#line 1227 "prog_io_item.m"
                      parse_tree__prog_io_item__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1227 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 1227 "prog_io_item.m"
                    }
#line 1227 "prog_io_item.m"
                    {
#line 1227 "prog_io_item.m"
                      parse_tree__prog_io_item__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[149])));
#line 1227 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_item__V_60_60));
#line 1227 "prog_io_item.m"
                    }
#line 1226 "prog_io_item.m"
                    {
#line 1226 "prog_io_item.m"
                      parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1226 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[146])));
#line 1226 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_item__V_57_57));
#line 1226 "prog_io_item.m"
                    }
#line 1225 "prog_io_item.m"
                    {
#line 1225 "prog_io_item.m"
                      parse_tree__prog_io_item__Pieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[140])));
#line 1225 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_40, 1) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 1225 "prog_io_item.m"
                    }
#line 1230 "prog_io_item.m"
                    {
#line 1230 "prog_io_item.m"
                      parse_tree__prog_io_item__V_74_74 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_131_131, parse_tree__prog_io_item__FullTerm_18);
                    }
#line 1231 "prog_io_item.m"
                    {
#line 1231 "prog_io_item.m"
                      parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1231 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_40));
#line 1231 "prog_io_item.m"
                    }
#line 1231 "prog_io_item.m"
                    {
#line 1231 "prog_io_item.m"
                      parse_tree__prog_io_item__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 1231 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1231 "prog_io_item.m"
                    }
#line 1230 "prog_io_item.m"
                    {
#line 1230 "prog_io_item.m"
                      parse_tree__prog_io_item__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1230 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_item__V_74_74));
#line 1230 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_item__V_75_75));
#line 1230 "prog_io_item.m"
                    }
#line 1231 "prog_io_item.m"
                    {
#line 1231 "prog_io_item.m"
                      parse_tree__prog_io_item__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_item__V_73_73));
#line 1231 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1231 "prog_io_item.m"
                    }
#line 1229 "prog_io_item.m"
                    {
#line 1229 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1229 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1229 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 2) = ((MR_Box) (parse_tree__prog_io_item__V_72_72));
#line 1229 "prog_io_item.m"
                    }
#line 1232 "prog_io_item.m"
                    {
#line 1232 "prog_io_item.m"
                      parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_41));
#line 1232 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1232 "prog_io_item.m"
                    }
#line 1232 "prog_io_item.m"
                    {
#line 1232 "prog_io_item.m"
                      MR_Word base;
#line 1232 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1232 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 1232 "prog_io_item.m"
                    }
#line 1224 "prog_io_item.m"
                  }
#line 1210 "prog_io_item.m"
              }
#line 1234 "prog_io_item.m"
            else
#line 1236 "prog_io_item.m"
              {
#line 1236 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_91_91;
#line 1236 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_92_92;
#line 1236 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_93_93;
#line 1236 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_98_98;
#line 1236 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_125;

#line 1238 "prog_io_item.m"
                {
#line 1238 "prog_io_item.m"
                  parse_tree__prog_io_item__V_93_93 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__RetModeTerm_17);
                }
#line 1238 "prog_io_item.m"
                {
#line 1238 "prog_io_item.m"
                  parse_tree__prog_io_item__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1238 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_item__V_93_93));
#line 1238 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[150])));
#line 1238 "prog_io_item.m"
                }
#line 1239 "prog_io_item.m"
                {
#line 1239 "prog_io_item.m"
                  parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 1239 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1239 "prog_io_item.m"
                }
#line 1237 "prog_io_item.m"
                {
#line 1237 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1237 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1237 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_125, 2) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1237 "prog_io_item.m"
                }
#line 1240 "prog_io_item.m"
                {
#line 1240 "prog_io_item.m"
                  parse_tree__prog_io_item__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_125));
#line 1240 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1240 "prog_io_item.m"
                }
#line 1240 "prog_io_item.m"
                {
#line 1240 "prog_io_item.m"
                  MR_Word base;
#line 1240 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1240 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_98_98));
#line 1240 "prog_io_item.m"
                }
#line 1236 "prog_io_item.m"
              }
#line 1203 "prog_io_item.m"
          }
#line 1201 "prog_io_item.m"
      }
#line 1246 "prog_io_item.m"
    else
#line 1248 "prog_io_item.m"
      {
#line 1248 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_135_135 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1248 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__FuncModeStr_43;
#line 1248 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_102_102;
#line 1248 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_105_105;
#line 1248 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_106_106;
#line 1248 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_115_115;
#line 1248 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_116_116;
#line 1248 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_117_117;
#line 1248 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_118_118;
#line 1248 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_119_119;
#line 1248 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_122_122;
#line 1248 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_126;
#line 1248 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_127;

#line 1248 "prog_io_item.m"
        {
#line 1248 "prog_io_item.m"
          parse_tree__prog_io_item__FuncModeStr_43 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_135_135, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__FuncMode_16);
        }
#line 1251 "prog_io_item.m"
        {
#line 1251 "prog_io_item.m"
          parse_tree__prog_io_item__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1251 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_106_106, 1) = ((MR_Box) (parse_tree__prog_io_item__FuncModeStr_43));
#line 1251 "prog_io_item.m"
        }
#line 1251 "prog_io_item.m"
        {
#line 1251 "prog_io_item.m"
          parse_tree__prog_io_item__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_105_105, 0) = ((MR_Box) (parse_tree__prog_io_item__V_106_106));
#line 1251 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 1251 "prog_io_item.m"
        }
#line 1250 "prog_io_item.m"
        {
#line 1250 "prog_io_item.m"
          parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1250 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[151])));
#line 1250 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (parse_tree__prog_io_item__V_105_105));
#line 1250 "prog_io_item.m"
        }
#line 1249 "prog_io_item.m"
        {
#line 1249 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1249 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[133])));
#line 1249 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_126, 1) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 1249 "prog_io_item.m"
        }
#line 1253 "prog_io_item.m"
        {
#line 1253 "prog_io_item.m"
          parse_tree__prog_io_item__V_117_117 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_135_135, parse_tree__prog_io_item__FuncMode_16);
        }
#line 1253 "prog_io_item.m"
        {
#line 1253 "prog_io_item.m"
          parse_tree__prog_io_item__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1253 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_119_119, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_126));
#line 1253 "prog_io_item.m"
        }
#line 1253 "prog_io_item.m"
        {
#line 1253 "prog_io_item.m"
          parse_tree__prog_io_item__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1253 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_118_118, 0) = ((MR_Box) (parse_tree__prog_io_item__V_119_119));
#line 1253 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1253 "prog_io_item.m"
        }
#line 1253 "prog_io_item.m"
        {
#line 1253 "prog_io_item.m"
          parse_tree__prog_io_item__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1253 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_item__V_117_117));
#line 1253 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_116_116, 1) = ((MR_Box) (parse_tree__prog_io_item__V_118_118));
#line 1253 "prog_io_item.m"
        }
#line 1253 "prog_io_item.m"
        {
#line 1253 "prog_io_item.m"
          parse_tree__prog_io_item__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1253 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io_item__V_116_116));
#line 1253 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1253 "prog_io_item.m"
        }
#line 1252 "prog_io_item.m"
        {
#line 1252 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1252 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1252 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1252 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 2) = ((MR_Box) (parse_tree__prog_io_item__V_115_115));
#line 1252 "prog_io_item.m"
        }
#line 1254 "prog_io_item.m"
        {
#line 1254 "prog_io_item.m"
          parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_127));
#line 1254 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1254 "prog_io_item.m"
        }
#line 1254 "prog_io_item.m"
        {
#line 1254 "prog_io_item.m"
          MR_Word base;
#line 1254 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1254 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1254 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 1254 "prog_io_item.m"
        }
#line 1248 "prog_io_item.m"
      }
#line 1246 "prog_io_item.m"
  }
#line 1192 "prog_io_item.m"
}

#line 1149 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1(
#line 1149 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1149 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1149 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1149 "prog_io_item.m"
{
#line 1149 "prog_io_item.m"
  {
#line 1149 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1149 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__3_3;

#line 1149 "prog_io_item.m"
    {
#line 1149 "prog_io_item.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__3_3);
    }
#line 1149 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__3_3));
#line 1149 "prog_io_item.m"
  }
#line 1149 "prog_io_item.m"
}

#line 1138 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_12,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_13,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_15,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_16,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 1138 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 1138 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 1138 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22)
#line 1138 "prog_io_item.m"
{
#line 1183 "prog_io_item.m"
  {
#line 1183 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1183 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgModes0_23;

#line 1144 "prog_io_item.m"
    {
#line 1144 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__ArgTerms_13, &parse_tree__prog_io_item__ArgModes0_23);
    }
#line 1183 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1146 "prog_io_item.m"
      {
#line 1146 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_24;
#line 1146 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeConstraints_25;

#line 1145 "prog_io_item.m"
        {
#line 1145 "prog_io_item.m"
          parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_14, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__Attributes0_19, &parse_tree__prog_io_item__Attributes_24, &parse_tree__prog_io_item__MaybeConstraints_25);
        }
#line 1179 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_25)) == (MR_mktag((MR_Integer) 0))))
#line 1180 "prog_io_item.m"
          {
#line 1180 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 0)));

#line 1181 "prog_io_item.m"
            {
#line 1181 "prog_io_item.m"
              MR_Word base;
#line 1181 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 1181 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_39));
#line 1181 "prog_io_item.m"
            }
#line 1180 "prog_io_item.m"
          }
#line 1179 "prog_io_item.m"
        else
#line 1148 "prog_io_item.m"
          {
#line 1148 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_104_104;
#line 1148 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_105_105;
#line 1148 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 2)));
#line 1148 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgModes_29;
#line 1148 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstVarSet_30;
#line 1148 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 1148 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 0)));
#line 1148 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 1)));

#line 1149 "prog_io_item.m"
            {
#line 1149 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1149 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[1]));
#line 1149 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1));
#line 1149 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1149 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 3) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_28));
#line 1149 "prog_io_item.m"
            }
#line 7172 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1149 "prog_io_item.m"
            {
#line 1149 "prog_io_item.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_104_104, parse_tree__prog_io_item__TypeCtorInfo_104_104, parse_tree__prog_io_item__V_41_41, parse_tree__prog_io_item__ArgModes0_23, &parse_tree__prog_io_item__ArgModes_29);
            }
#line 7179 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_105_105 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1151 "prog_io_item.m"
            {
#line 1151 "prog_io_item.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_16, &parse_tree__prog_io_item__InstVarSet_30);
            }
#line 1152 "prog_io_item.m"
            {
#line 1152 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io_item__ArgModes_29);
            }
#line 1168 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1161 "prog_io_item.m"
              {
#line 1161 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybePredOrFunc_31;
#line 1161 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemModeDecl_33;
#line 1161 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_34;
#line 1161 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeItem0_35;

#line 1156 "prog_io_item.m"
                if ((parse_tree__prog_io_item__WithInst_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1154 "prog_io_item.m"
                  {
#line 1155 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybePredOrFunc_31 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[15]);
#line 1154 "prog_io_item.m"
                  }
#line 1156 "prog_io_item.m"
                else
#line 1160 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybePredOrFunc_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1162 "prog_io_item.m"
                {
#line 1162 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemModeDecl_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1162 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_12));
#line 1162 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 1) = ((MR_Box) (parse_tree__prog_io_item__MaybePredOrFunc_31));
#line 1162 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 2) = ((MR_Box) (parse_tree__prog_io_item__ArgModes_29));
#line 1162 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 3) = ((MR_Box) (parse_tree__prog_io_item__WithInst_17));
#line 1162 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 4) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_18));
#line 1162 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 5) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_30));
#line 1162 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_20));
#line 1162 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_21));
#line 1162 "prog_io_item.m"
                }
#line 1165 "prog_io_item.m"
                {
#line 1165 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1165 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_34, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemModeDecl_33));
#line 1165 "prog_io_item.m"
                }
#line 1166 "prog_io_item.m"
                {
#line 1166 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybeItem0_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_35, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_34));
#line 1166 "prog_io_item.m"
                }
#line 1167 "prog_io_item.m"
                {
#line 1167 "prog_io_item.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_35, parse_tree__prog_io_item__Attributes_24, parse_tree__prog_io_item__MaybeItem_22);
#line 1167 "prog_io_item.m"
                  return;
                }
#line 1161 "prog_io_item.m"
              }
#line 1168 "prog_io_item.m"
            else
#line 1169 "prog_io_item.m"
              {
#line 1169 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredModeTermStr_36;
#line 1169 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_37;
#line 1169 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_38;
#line 1169 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_45_45;
#line 1169 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_48_48;
#line 1169 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_51_51;
#line 1169 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_53_53;
#line 1169 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_54_54;
#line 1169 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_63_63;
#line 1169 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_64_64;
#line 1169 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_65_65;
#line 1169 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_66_66;
#line 1169 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_67_67;
#line 1169 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_70_70;

#line 1169 "prog_io_item.m"
                {
#line 1169 "prog_io_item.m"
                  parse_tree__prog_io_item__PredModeTermStr_36 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__PredModeTerm_15);
                }
#line 1173 "prog_io_item.m"
                {
#line 1173 "prog_io_item.m"
                  parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1173 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_36));
#line 1173 "prog_io_item.m"
                }
#line 1173 "prog_io_item.m"
                {
#line 1173 "prog_io_item.m"
                  parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 1173 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 1173 "prog_io_item.m"
                }
#line 1172 "prog_io_item.m"
                {
#line 1172 "prog_io_item.m"
                  parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1172 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 1172 "prog_io_item.m"
                }
#line 1172 "prog_io_item.m"
                {
#line 1172 "prog_io_item.m"
                  parse_tree__prog_io_item__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[147])));
#line 1172 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 1) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 1172 "prog_io_item.m"
                }
#line 1171 "prog_io_item.m"
                {
#line 1171 "prog_io_item.m"
                  parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[146])));
#line 1171 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_item__V_48_48));
#line 1171 "prog_io_item.m"
                }
#line 1170 "prog_io_item.m"
                {
#line 1170 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[140])));
#line 1170 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_37, 1) = ((MR_Box) (parse_tree__prog_io_item__V_45_45));
#line 1170 "prog_io_item.m"
                }
#line 1175 "prog_io_item.m"
                {
#line 1175 "prog_io_item.m"
                  parse_tree__prog_io_item__V_65_65 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, parse_tree__prog_io_item__PredModeTerm_15);
                }
#line 1176 "prog_io_item.m"
                {
#line 1176 "prog_io_item.m"
                  parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1176 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_37));
#line 1176 "prog_io_item.m"
                }
#line 1176 "prog_io_item.m"
                {
#line 1176 "prog_io_item.m"
                  parse_tree__prog_io_item__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 1176 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1176 "prog_io_item.m"
                }
#line 1175 "prog_io_item.m"
                {
#line 1175 "prog_io_item.m"
                  parse_tree__prog_io_item__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1175 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_item__V_65_65));
#line 1175 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_item__V_66_66));
#line 1175 "prog_io_item.m"
                }
#line 1176 "prog_io_item.m"
                {
#line 1176 "prog_io_item.m"
                  parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__V_64_64));
#line 1176 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1176 "prog_io_item.m"
                }
#line 1174 "prog_io_item.m"
                {
#line 1174 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1174 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1174 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 1174 "prog_io_item.m"
                }
#line 1177 "prog_io_item.m"
                {
#line 1177 "prog_io_item.m"
                  parse_tree__prog_io_item__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_38));
#line 1177 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1177 "prog_io_item.m"
                }
#line 1177 "prog_io_item.m"
                {
#line 1177 "prog_io_item.m"
                  MR_Word base;
#line 1177 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 1177 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 1177 "prog_io_item.m"
                }
#line 1169 "prog_io_item.m"
              }
#line 1148 "prog_io_item.m"
          }
#line 1146 "prog_io_item.m"
      }
#line 1183 "prog_io_item.m"
    else
#line 1184 "prog_io_item.m"
      {
#line 1184 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_108_108 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1184 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_74_74;
#line 1184 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_77_77;
#line 1184 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_80_80;
#line 1184 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_81_81;
#line 1184 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_90_90;
#line 1184 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_91_91;
#line 1184 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_92_92;
#line 1184 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_93_93;
#line 1184 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_94_94;
#line 1184 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_97_97;
#line 1184 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__PredModeTermStr_99;
#line 1184 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_100;
#line 1184 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_101;

#line 1184 "prog_io_item.m"
        {
#line 1184 "prog_io_item.m"
          parse_tree__prog_io_item__PredModeTermStr_99 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_108_108, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__PredModeTerm_15);
        }
#line 1186 "prog_io_item.m"
        {
#line 1186 "prog_io_item.m"
          parse_tree__prog_io_item__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1186 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_81_81, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_99));
#line 1186 "prog_io_item.m"
        }
#line 1186 "prog_io_item.m"
        {
#line 1186 "prog_io_item.m"
          parse_tree__prog_io_item__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_item__V_81_81));
#line 1186 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 1186 "prog_io_item.m"
        }
#line 1186 "prog_io_item.m"
        {
#line 1186 "prog_io_item.m"
          parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[135])));
#line 1186 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 1186 "prog_io_item.m"
        }
#line 1185 "prog_io_item.m"
        {
#line 1185 "prog_io_item.m"
          parse_tree__prog_io_item__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[148])));
#line 1185 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 1185 "prog_io_item.m"
        }
#line 1185 "prog_io_item.m"
        {
#line 1185 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[130])));
#line 1185 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_100, 1) = ((MR_Box) (parse_tree__prog_io_item__V_74_74));
#line 1185 "prog_io_item.m"
        }
#line 1188 "prog_io_item.m"
        {
#line 1188 "prog_io_item.m"
          parse_tree__prog_io_item__V_92_92 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_108_108, parse_tree__prog_io_item__PredModeTerm_15);
        }
#line 1188 "prog_io_item.m"
        {
#line 1188 "prog_io_item.m"
          parse_tree__prog_io_item__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_100));
#line 1188 "prog_io_item.m"
        }
#line 1188 "prog_io_item.m"
        {
#line 1188 "prog_io_item.m"
          parse_tree__prog_io_item__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_item__V_94_94));
#line 1188 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1188 "prog_io_item.m"
        }
#line 1188 "prog_io_item.m"
        {
#line 1188 "prog_io_item.m"
          parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 1188 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (parse_tree__prog_io_item__V_93_93));
#line 1188 "prog_io_item.m"
        }
#line 1188 "prog_io_item.m"
        {
#line 1188 "prog_io_item.m"
          parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1188 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1188 "prog_io_item.m"
        }
#line 1187 "prog_io_item.m"
        {
#line 1187 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1187 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1187 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 2) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 1187 "prog_io_item.m"
        }
#line 1189 "prog_io_item.m"
        {
#line 1189 "prog_io_item.m"
          parse_tree__prog_io_item__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_101));
#line 1189 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1189 "prog_io_item.m"
        }
#line 1189 "prog_io_item.m"
        {
#line 1189 "prog_io_item.m"
          MR_Word base;
#line 1189 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 1189 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_97_97));
#line 1189 "prog_io_item.m"
        }
#line 1184 "prog_io_item.m"
      }
#line 1183 "prog_io_item.m"
  }
#line 1138 "prog_io_item.m"
}

#line 1098 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(
#line 1098 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 1098 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1098 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 1098 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1098 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_14,
#line 1098 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_15,
#line 1098 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_16,
#line 1098 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_17,
#line 1098 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_18)
#line 1098 "prog_io_item.m"
{
#line 1123 "prog_io_item.m"
  {
#line 1123 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1123 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeSugaredFuncTerm_19;
#line 1123 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnTypeTerm_20;
#line 1105 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_28_28;
#line 1105 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_29_29;
#line 1105 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 1105 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;
#line 1105 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 1106 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;

#line 1105 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1105 "prog_io_item.m"
      {
#line 1106 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_12)) == (MR_mktag((MR_Integer) 0)));
#line 1106 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1106 "prog_io_item.m"
          {
#line 1106 "prog_io_item.m"
            parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 0)));
#line 1106 "prog_io_item.m"
            parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 1)));
#line 1106 "prog_io_item.m"
            parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 2)));
#line 1106 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 1106 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1106 "prog_io_item.m"
              {
#line 1106 "prog_io_item.m"
                parse_tree__prog_io_item__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_28_28, (MR_Integer) 0)));
#line 1106 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_29_29, (MR_String) "=") == 0);
#line 1105 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1105 "prog_io_item.m"
                  {
#line 1107 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 1107 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1107 "prog_io_item.m"
                      {
#line 1107 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeSugaredFuncTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 0)));
#line 1107 "prog_io_item.m"
                        parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 1)));
#line 1107 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1107 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1107 "prog_io_item.m"
                          {
#line 1107 "prog_io_item.m"
                            parse_tree__prog_io_item__ReturnTypeTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 1107 "prog_io_item.m"
                            parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, (MR_Integer) 1)));
#line 1107 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1107 "prog_io_item.m"
                          }
#line 1107 "prog_io_item.m"
                      }
#line 1105 "prog_io_item.m"
                  }
#line 1106 "prog_io_item.m"
              }
#line 1106 "prog_io_item.m"
          }
#line 1105 "prog_io_item.m"
      }
#line 1123 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1109 "prog_io_item.m"
      {
#line 1109 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncTerm_22;
#line 1109 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_24;

#line 1109 "prog_io_item.m"
        {
#line 1109 "prog_io_item.m"
          parse_tree__prog_io_item__FuncTerm_22 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__MaybeSugaredFuncTerm_19);
        }
#line 1112 "prog_io_item.m"
        {
#line 1112 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_22, parse_tree__prog_io_item__VarSet_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[96]), &parse_tree__prog_io_item__MaybeFunctorArgs_24);
        }
#line 1117 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_24)) == (MR_mktag((MR_Integer) 0))))
#line 1115 "prog_io_item.m"
          {
#line 1115 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 0)));

#line 1116 "prog_io_item.m"
            {
#line 1116 "prog_io_item.m"
              MR_Word base;
#line 1116 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 1116 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_25));
#line 1116 "prog_io_item.m"
            }
#line 1115 "prog_io_item.m"
          }
#line 1117 "prog_io_item.m"
        else
#line 1118 "prog_io_item.m"
          {
#line 1118 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 0)));
#line 1118 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 1)));

#line 1119 "prog_io_item.m"
            {
#line 1119 "prog_io_item.m"
              parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(parse_tree__prog_io_item__Functor_26, parse_tree__prog_io_item__ArgTerms_27, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_22, parse_tree__prog_io_item__ReturnTypeTerm_20, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__MaybeDet_15, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_16, parse_tree__prog_io_item__SeqNum_17, parse_tree__prog_io_item__MaybeItem_18);
#line 1119 "prog_io_item.m"
              return;
            }
#line 1118 "prog_io_item.m"
          }
#line 1109 "prog_io_item.m"
      }
#line 1123 "prog_io_item.m"
    else
#line 1124 "prog_io_item.m"
      {
#line 1124 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_58;

#line 1125 "prog_io_item.m"
        {
#line 1125 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[97]), &parse_tree__prog_io_item__MaybeFunctorArgs_58);
        }
#line 1130 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_58)) == (MR_mktag((MR_Integer) 0))))
#line 1128 "prog_io_item.m"
          {
#line 1128 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 0)));

#line 1129 "prog_io_item.m"
            {
#line 1129 "prog_io_item.m"
              MR_Word base;
#line 1129 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1129 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 1129 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_51));
#line 1129 "prog_io_item.m"
            }
#line 1128 "prog_io_item.m"
          }
#line 1130 "prog_io_item.m"
        else
#line 1131 "prog_io_item.m"
          {
#line 1131 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 0)));
#line 1131 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 1)));

#line 1132 "prog_io_item.m"
            {
#line 1132 "prog_io_item.m"
              parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(parse_tree__prog_io_item__Functor_52, parse_tree__prog_io_item__ArgTerms_53, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__WithInst_14, parse_tree__prog_io_item__MaybeDet_15, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_16, parse_tree__prog_io_item__SeqNum_17, parse_tree__prog_io_item__MaybeItem_18);
#line 1132 "prog_io_item.m"
              return;
            }
#line 1131 "prog_io_item.m"
          }
#line 1124 "prog_io_item.m"
      }
#line 1123 "prog_io_item.m"
  }
#line 1098 "prog_io_item.m"
}

#line 1066 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_7_p_0(
#line 1066 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1066 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1066 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 1066 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 1066 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 1066 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 1066 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 1066 "prog_io_item.m"
{
#line 1070 "prog_io_item.m"
  {
#line 1070 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1070 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTerm_15;
#line 1070 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_16;
#line 1070 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithInst_18;
#line 1070 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BaseTerm_19;
#line 1506 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTermPrime_58;
#line 1506 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InstTerm_59;
#line 1493 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_64_64;
#line 1493 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_65_65;
#line 1493 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_66_66;
#line 1493 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_67_67;
#line 1493 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_68_68;
#line 1493 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_60_60;
#line 1092 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeDetism_20;
#line 1092 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithInst_21;

#line 1071 "prog_io_item.m"
    {
#line 1071 "prog_io_item.m"
      parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Term_10, &parse_tree__prog_io_item__BeforeDetismTerm_15, &parse_tree__prog_io_item__MaybeMaybeDetism_16);
    }
#line 1493 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__BeforeDetismTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 1493 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1493 "prog_io_item.m"
      {
#line 1493 "prog_io_item.m"
        parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 0)));
#line 1493 "prog_io_item.m"
        parse_tree__prog_io_item__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 1)));
#line 1493 "prog_io_item.m"
        parse_tree__prog_io_item__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 2)));
#line 1493 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 1493 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1493 "prog_io_item.m"
          {
#line 1493 "prog_io_item.m"
            parse_tree__prog_io_item__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 1493 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_65_65, (MR_String) "with_inst") == 0);
#line 1493 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1493 "prog_io_item.m"
              {
#line 1494 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_66_66)) == (MR_mktag((MR_Integer) 1)));
#line 1494 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1494 "prog_io_item.m"
                  {
#line 1494 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeWithInstTermPrime_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, (MR_Integer) 0)));
#line 1494 "prog_io_item.m"
                    parse_tree__prog_io_item__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, (MR_Integer) 1)));
#line 1494 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 1494 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1494 "prog_io_item.m"
                      {
#line 1494 "prog_io_item.m"
                        parse_tree__prog_io_item__InstTerm_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, (MR_Integer) 0)));
#line 1494 "prog_io_item.m"
                        parse_tree__prog_io_item__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, (MR_Integer) 1)));
#line 1494 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1494 "prog_io_item.m"
                      }
#line 1494 "prog_io_item.m"
                  }
#line 1493 "prog_io_item.m"
              }
#line 1493 "prog_io_item.m"
          }
#line 1493 "prog_io_item.m"
      }
#line 1506 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1496 "prog_io_item.m"
      {
#line 1499 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Inst_61;

#line 1496 "prog_io_item.m"
        parse_tree__prog_io_item__BaseTerm_19 = parse_tree__prog_io_item__BeforeWithInstTermPrime_58;
#line 1497 "prog_io_item.m"
        {
#line 1497 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__InstTerm_59, &parse_tree__prog_io_item__Inst_61);
        }
#line 1499 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1498 "prog_io_item.m"
          {
#line 1498 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_70_70;

#line 1498 "prog_io_item.m"
            {
#line 1498 "prog_io_item.m"
              parse_tree__prog_io_item__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_item__Inst_61));
#line 1498 "prog_io_item.m"
            }
#line 1498 "prog_io_item.m"
            {
#line 1498 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1498 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_18, 0) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 1498 "prog_io_item.m"
            }
#line 1498 "prog_io_item.m"
          }
#line 1499 "prog_io_item.m"
        else
#line 1501 "prog_io_item.m"
          {
#line 1501 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_63;
#line 1501 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_84_84;
#line 1501 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_85_85;
#line 1501 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_86_86;
#line 1501 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_91_91;

#line 1503 "prog_io_item.m"
            {
#line 1503 "prog_io_item.m"
              parse_tree__prog_io_item__V_86_86 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__InstTerm_59);
            }
#line 1503 "prog_io_item.m"
            {
#line 1503 "prog_io_item.m"
              parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1503 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__V_86_86));
#line 1503 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[145])));
#line 1503 "prog_io_item.m"
            }
#line 1503 "prog_io_item.m"
            {
#line 1503 "prog_io_item.m"
              parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1503 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 1503 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1503 "prog_io_item.m"
            }
#line 1502 "prog_io_item.m"
            {
#line 1502 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1502 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1502 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1502 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 2) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 1502 "prog_io_item.m"
            }
#line 1504 "prog_io_item.m"
            {
#line 1504 "prog_io_item.m"
              parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_63));
#line 1504 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1504 "prog_io_item.m"
            }
#line 1504 "prog_io_item.m"
            {
#line 1504 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeWithInst_18, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1504 "prog_io_item.m"
            }
#line 1501 "prog_io_item.m"
          }
#line 1496 "prog_io_item.m"
      }
#line 1506 "prog_io_item.m"
    else
#line 1507 "prog_io_item.m"
      {
#line 1507 "prog_io_item.m"
        parse_tree__prog_io_item__BaseTerm_19 = parse_tree__prog_io_item__BeforeDetismTerm_15;
#line 1508 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[14]);
#line 1507 "prog_io_item.m"
      }
#line 1076 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_16)) == (MR_mktag((MR_Integer) 1)));
#line 1076 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1076 "prog_io_item.m"
      {
#line 1076 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeDetism_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_16, (MR_Integer) 0)));
#line 1077 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_18)) == (MR_mktag((MR_Integer) 1)));
#line 1077 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1077 "prog_io_item.m"
          parse_tree__prog_io_item__WithInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_18, (MR_Integer) 0)));
#line 1076 "prog_io_item.m"
      }
#line 1092 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1088 "prog_io_item.m"
      {
#line 1080 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 1081 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;

#line 1080 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_20)) == (MR_mktag((MR_Integer) 1)));
#line 1080 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1080 "prog_io_item.m"
          {
#line 1080 "prog_io_item.m"
            parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_20, (MR_Integer) 0)));
#line 1081 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_21)) == (MR_mktag((MR_Integer) 1)));
#line 1081 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1081 "prog_io_item.m"
              parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_21, (MR_Integer) 0)));
#line 1080 "prog_io_item.m"
          }
#line 1088 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1084 "prog_io_item.m"
          {
#line 1084 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_25;
#line 1084 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1084 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 1084 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_42_42;
#line 1084 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_47_47;

#line 1086 "prog_io_item.m"
            {
#line 1086 "prog_io_item.m"
              parse_tree__prog_io_item__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_10);
            }
#line 1086 "prog_io_item.m"
            {
#line 1086 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1086 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 1086 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[122])));
#line 1086 "prog_io_item.m"
            }
#line 1086 "prog_io_item.m"
            {
#line 1086 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1086 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1086 "prog_io_item.m"
            }
#line 1085 "prog_io_item.m"
            {
#line 1085 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1085 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1085 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1085 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1085 "prog_io_item.m"
            }
#line 1087 "prog_io_item.m"
            {
#line 1087 "prog_io_item.m"
              parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_25));
#line 1087 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1087 "prog_io_item.m"
            }
#line 1087 "prog_io_item.m"
            {
#line 1087 "prog_io_item.m"
              MR_Word base;
#line 1087 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 1087 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 1087 "prog_io_item.m"
            }
#line 1084 "prog_io_item.m"
          }
#line 1088 "prog_io_item.m"
        else
#line 1089 "prog_io_item.m"
          {
#line 1089 "prog_io_item.m"
            parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__BaseTerm_19, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__WithInst_21, parse_tree__prog_io_item__MaybeDetism_20, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeItem_14);
#line 1089 "prog_io_item.m"
            return;
          }
#line 1088 "prog_io_item.m"
      }
#line 1092 "prog_io_item.m"
    else
#line 1094 "prog_io_item.m"
      {
#line 1094 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_26;
#line 1094 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_49_49;
#line 1094 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_50_50;

#line 1093 "prog_io_item.m"
        {
#line 1093 "prog_io_item.m"
          parse_tree__prog_io_item__V_49_49 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_16);
        }
#line 1094 "prog_io_item.m"
        {
#line 1094 "prog_io_item.m"
          parse_tree__prog_io_item__V_50_50 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_18);
        }
#line 1094 "prog_io_item.m"
        {
#line 1094 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_49_49, parse_tree__prog_io_item__V_50_50);
        }
#line 1095 "prog_io_item.m"
        {
#line 1095 "prog_io_item.m"
          MR_Word base;
#line 1095 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1095 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 1095 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_26));
#line 1095 "prog_io_item.m"
        }
#line 1094 "prog_io_item.m"
      }
#line 1070 "prog_io_item.m"
  }
#line 1066 "prog_io_item.m"
}

#line 1057 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__wrap_nth_2_p_0(
#line 1057 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__N_3,
#line 1057 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_2)
#line 1057 "prog_io_item.m"
{
#line 1059 "prog_io_item.m"
  {
#line 1059 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1059 "prog_io_item.m"
    {
#line 1059 "prog_io_item.m"
      MR_Word base;
#line 1059 "prog_io_item.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "prog_io_item.m"
      *parse_tree__prog_io_item__HeadVar__2_2 = base;
#line 1059 "prog_io_item.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1059 "prog_io_item.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_item__N_3));
#line 1059 "prog_io_item.m"
    }
#line 1059 "prog_io_item.m"
  }
#line 1057 "prog_io_item.m"
}

#line 1039 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0(
#line 1039 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__ArgNum_1,
#line 1039 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1039 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3,
#line 1039 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__4_4)
#line 1039 "prog_io_item.m"
{
#line 1042 "prog_io_item.m"
  {
#line 1042 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1042 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1042 "prog_io_item.m"
      {
#line 1042 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1042 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1042 "prog_io_item.m"
      }
#line 1042 "prog_io_item.m"
    else
#line 1044 "prog_io_item.m"
      {
#line 1044 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 1044 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 1044 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__WithModeArgNums0_11;
#line 1044 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__WithoutModeArgNums0_12;
#line 1044 "prog_io_item.m"
        MR_Integer parse_tree__prog_io_item__V_16_16 = (parse_tree__prog_io_item__ArgNum_1 + (MR_Integer) 1);

#line 1045 "prog_io_item.m"
        {
#line 1045 "prog_io_item.m"
          parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0(parse_tree__prog_io_item__V_16_16, parse_tree__prog_io_item__Tail_8, &parse_tree__prog_io_item__WithModeArgNums0_11, &parse_tree__prog_io_item__WithoutModeArgNums0_12);
        }
#line 1051 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__Head_7)) == (MR_mktag((MR_Integer) 1))))
#line 1052 "prog_io_item.m"
          {
#line 1053 "prog_io_item.m"
            {
#line 1053 "prog_io_item.m"
              MR_Word base;
#line 1053 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "prog_io_item.m"
              *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 1053 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgNum_1));
#line 1053 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__WithModeArgNums0_11));
#line 1053 "prog_io_item.m"
            }
#line 1054 "prog_io_item.m"
            *parse_tree__prog_io_item__HeadVar__4_4 = parse_tree__prog_io_item__WithoutModeArgNums0_12;
#line 1052 "prog_io_item.m"
          }
#line 1051 "prog_io_item.m"
        else
#line 1048 "prog_io_item.m"
          {
#line 1049 "prog_io_item.m"
            *parse_tree__prog_io_item__HeadVar__3_3 = parse_tree__prog_io_item__WithModeArgNums0_11;
#line 1050 "prog_io_item.m"
            {
#line 1050 "prog_io_item.m"
              MR_Word base;
#line 1050 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "prog_io_item.m"
              *parse_tree__prog_io_item__HeadVar__4_4 = base;
#line 1050 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgNum_1));
#line 1050 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__WithoutModeArgNums0_12));
#line 1050 "prog_io_item.m"
            }
#line 1048 "prog_io_item.m"
          }
#line 1044 "prog_io_item.m"
      }
#line 1042 "prog_io_item.m"
  }
#line 1039 "prog_io_item.m"
}

#line 1026 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0_1(
#line 1026 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1026 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1026 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1026 "prog_io_item.m"
{
#line 1026 "prog_io_item.m"
  {
#line 1026 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1026 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_2;

#line 1026 "prog_io_item.m"
    {
#line 1026 "prog_io_item.m"
      parse_tree__prog_io_item__wrap_nth_2_p_0(((MR_Integer) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_2);
    }
#line 1026 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_2));
#line 1026 "prog_io_item.m"
  }
#line 1026 "prog_io_item.m"
}

#line 995 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(
#line 995 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypesAndModes_4,
#line 995 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ErrorTerm_5,
#line 995 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeSpec_6)
#line 995 "prog_io_item.m"
{
#line 998 "prog_io_item.m"
  {
#line 998 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 998 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithModeArgNums_7;
#line 998 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithoutModeArgNums_8;

#line 999 "prog_io_item.m"
    {
#line 999 "prog_io_item.m"
      parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0((MR_Integer) 1, parse_tree__prog_io_item__TypesAndModes_4, &parse_tree__prog_io_item__WithModeArgNums_7, &parse_tree__prog_io_item__WithoutModeArgNums_8);
    }
#line 1006 "prog_io_item.m"
    if ((parse_tree__prog_io_item__WithModeArgNums_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1006 "prog_io_item.m"
      if ((parse_tree__prog_io_item__WithoutModeArgNums_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1006 "prog_io_item.m"
      else
#line 1010 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1006 "prog_io_item.m"
    else
#line 1006 "prog_io_item.m"
    if ((parse_tree__prog_io_item__WithoutModeArgNums_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1015 "prog_io_item.m"
      *parse_tree__prog_io_item__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1006 "prog_io_item.m"
    else
#line 1017 "prog_io_item.m"
      {
#line 1017 "prog_io_item.m"
        MR_Integer parse_tree__prog_io_item__FirstWithout_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithoutModeArgNums_8, (MR_Integer) 0)));
#line 1017 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__RestWithout_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithoutModeArgNums_8, (MR_Integer) 1)));
#line 1017 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__IdPieces_17;
#line 1017 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_22;
#line 1017 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_23;
#line 1017 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_47_47;
#line 1017 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_51_51;
#line 1017 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_52_52;
#line 1017 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_53_53;
#line 1017 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_54_54;
#line 1017 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_55_55;

#line 1024 "prog_io_item.m"
        if ((parse_tree__prog_io_item__RestWithout_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1021 "prog_io_item.m"
          {
#line 1021 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_37_37;
#line 1021 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;

#line 1023 "prog_io_item.m"
            {
#line 1023 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1023 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io_item__FirstWithout_15));
#line 1023 "prog_io_item.m"
            }
#line 1023 "prog_io_item.m"
            {
#line 1023 "prog_io_item.m"
              parse_tree__prog_io_item__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1023 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 1023 "prog_io_item.m"
            }
#line 1022 "prog_io_item.m"
            {
#line 1022 "prog_io_item.m"
              parse_tree__prog_io_item__IdPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__IdPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[142])));
#line 1022 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__IdPieces_17, 1) = ((MR_Box) (parse_tree__prog_io_item__V_37_37));
#line 1022 "prog_io_item.m"
            }
#line 1021 "prog_io_item.m"
          }
#line 1024 "prog_io_item.m"
        else
#line 1025 "prog_io_item.m"
          {
#line 1025 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1025 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__WithoutArgNumPieces_20;
#line 1025 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__WithoutArgNumsPieces_21;
#line 1025 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_26_26;

#line 1026 "prog_io_item.m"
            {
#line 1026 "prog_io_item.m"
              mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__prog_io_item__TypeCtorInfo_61_61, (MR_Word) &parse_tree__prog_io_item_scalar_common_2[4], parse_tree__prog_io_item__WithoutModeArgNums_8, &parse_tree__prog_io_item__WithoutArgNumPieces_20);
            }
#line 1027 "prog_io_item.m"
            {
#line 1027 "prog_io_item.m"
              parse_tree__prog_io_item__WithoutArgNumsPieces_21 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__prog_io_item__WithoutArgNumPieces_20);
            }
#line 1029 "prog_io_item.m"
            {
#line 1029 "prog_io_item.m"
              parse_tree__prog_io_item__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[143])));
#line 1029 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io_item__WithoutArgNumsPieces_21));
#line 1029 "prog_io_item.m"
            }
#line 1030 "prog_io_item.m"
            {
#line 1030 "prog_io_item.m"
              parse_tree__prog_io_item__IdPieces_17 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_61_61, parse_tree__prog_io_item__V_26_26, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15]));
            }
#line 1025 "prog_io_item.m"
          }
#line 1033 "prog_io_item.m"
        {
#line 1033 "prog_io_item.m"
          parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1033 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1033 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_item__IdPieces_17));
#line 1033 "prog_io_item.m"
        }
#line 1032 "prog_io_item.m"
        {
#line 1032 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1032 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[144])));
#line 1032 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_22, 1) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 1032 "prog_io_item.m"
        }
#line 1035 "prog_io_item.m"
        {
#line 1035 "prog_io_item.m"
          parse_tree__prog_io_item__V_53_53 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ErrorTerm_5);
        }
#line 1035 "prog_io_item.m"
        {
#line 1035 "prog_io_item.m"
          parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1035 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_22));
#line 1035 "prog_io_item.m"
        }
#line 1035 "prog_io_item.m"
        {
#line 1035 "prog_io_item.m"
          parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 1035 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1035 "prog_io_item.m"
        }
#line 1035 "prog_io_item.m"
        {
#line 1035 "prog_io_item.m"
          parse_tree__prog_io_item__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1035 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 1035 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 1035 "prog_io_item.m"
        }
#line 1035 "prog_io_item.m"
        {
#line 1035 "prog_io_item.m"
          parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_item__V_52_52));
#line 1035 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1035 "prog_io_item.m"
        }
#line 1034 "prog_io_item.m"
        {
#line 1034 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1034 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1034 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1034 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 1034 "prog_io_item.m"
        }
#line 1036 "prog_io_item.m"
        {
#line 1036 "prog_io_item.m"
          MR_Word base;
#line 1036 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1036 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeSpec_6 = base;
#line 1036 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_23));
#line 1036 "prog_io_item.m"
        }
#line 1017 "prog_io_item.m"
      }
#line 998 "prog_io_item.m"
  }
#line 995 "prog_io_item.m"
}

#line 974 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_3_p_0(
#line 974 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_4,
#line 974 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 974 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeTypeAndMode_6)
#line 974 "prog_io_item.m"
{
#line 983 "prog_io_item.m"
  {
#line 983 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 983 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeTerm_7;
#line 983 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModeTerm_8;
#line 978 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_13_13;
#line 978 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_14_14;
#line 978 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_15_15;
#line 978 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 978 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 978 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___Context_9;

#line 978 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 978 "prog_io_item.m"
      {
#line 978 "prog_io_item.m"
        parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 0)));
#line 978 "prog_io_item.m"
        parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 1)));
#line 978 "prog_io_item.m"
        parse_tree__prog_io_item___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 2)));
#line 978 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 978 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 978 "prog_io_item.m"
          {
#line 978 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_13_13, (MR_Integer) 0)));
#line 978 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_14_14, (MR_String) "::") == 0);
#line 978 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 978 "prog_io_item.m"
              {
#line 978 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 978 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 978 "prog_io_item.m"
                  {
#line 978 "prog_io_item.m"
                    parse_tree__prog_io_item__TypeTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 0)));
#line 978 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 1)));
#line 978 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 978 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 978 "prog_io_item.m"
                      {
#line 978 "prog_io_item.m"
                        parse_tree__prog_io_item__ModeTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 978 "prog_io_item.m"
                        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 1)));
#line 978 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 978 "prog_io_item.m"
                      }
#line 978 "prog_io_item.m"
                  }
#line 978 "prog_io_item.m"
              }
#line 978 "prog_io_item.m"
          }
#line 978 "prog_io_item.m"
      }
#line 983 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 979 "prog_io_item.m"
      {
#line 979 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Type_10;
#line 979 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Mode0_11;
#line 979 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Mode_12;
#line 979 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_18_18;

#line 979 "prog_io_item.m"
        {
#line 979 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__TypeTerm_7, &parse_tree__prog_io_item__Type_10);
        }
#line 979 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 979 "prog_io_item.m"
          {
#line 980 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = (MR_Integer) 0;
#line 980 "prog_io_item.m"
            {
#line 980 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_item__V_18_18, parse_tree__prog_io_item__ModeTerm_8, &parse_tree__prog_io_item__Mode0_11);
            }
#line 979 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 979 "prog_io_item.m"
              {
#line 981 "prog_io_item.m"
                {
#line 981 "prog_io_item.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_4, parse_tree__prog_io_item__Mode0_11, &parse_tree__prog_io_item__Mode_12);
                }
#line 982 "prog_io_item.m"
                {
#line 982 "prog_io_item.m"
                  MR_Word base;
#line 982 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeTypeAndMode_6 = base;
#line 982 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_10));
#line 982 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__Mode_12));
#line 982 "prog_io_item.m"
                }
#line 982 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 979 "prog_io_item.m"
              }
#line 979 "prog_io_item.m"
          }
#line 979 "prog_io_item.m"
      }
#line 983 "prog_io_item.m"
    else
#line 984 "prog_io_item.m"
      {
#line 984 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Type_19;

#line 984 "prog_io_item.m"
        {
#line 984 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__Term_5, &parse_tree__prog_io_item__Type_19);
        }
#line 984 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 984 "prog_io_item.m"
          {
#line 985 "prog_io_item.m"
            {
#line 985 "prog_io_item.m"
              MR_Word base;
#line 985 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 985 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeTypeAndMode_6 = base;
#line 985 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_19));
#line 985 "prog_io_item.m"
            }
#line 985 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 984 "prog_io_item.m"
          }
#line 984 "prog_io_item.m"
      }
#line 983 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 983 "prog_io_item.m"
  }
#line 974 "prog_io_item.m"
}

#line 966 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(
#line 966 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_1,
#line 966 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 966 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3)
#line 966 "prog_io_item.m"
{
#line 969 "prog_io_item.m"
  {
#line 969 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 969 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 969 "prog_io_item.m"
      {
#line 969 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 969 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 969 "prog_io_item.m"
      }
#line 969 "prog_io_item.m"
    else
#line 970 "prog_io_item.m"
      {
#line 970 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 970 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 970 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__H_8;
#line 970 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__T_9;
#line 983 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeTerm_13;
#line 983 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModeTerm_14;
#line 978 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_19_19;
#line 978 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_20_20;
#line 978 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_21_21;
#line 978 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 978 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 978 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item___Context_15;

#line 978 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__H0_6)) == (MR_mktag((MR_Integer) 0)));
#line 978 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 978 "prog_io_item.m"
          {
#line 978 "prog_io_item.m"
            parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 0)));
#line 978 "prog_io_item.m"
            parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 1)));
#line 978 "prog_io_item.m"
            parse_tree__prog_io_item___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 2)));
#line 978 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 978 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 978 "prog_io_item.m"
              {
#line 978 "prog_io_item.m"
                parse_tree__prog_io_item__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 978 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_20_20, (MR_String) "::") == 0);
#line 978 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 978 "prog_io_item.m"
                  {
#line 978 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 978 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 978 "prog_io_item.m"
                      {
#line 978 "prog_io_item.m"
                        parse_tree__prog_io_item__TypeTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 978 "prog_io_item.m"
                        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 1)));
#line 978 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 978 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 978 "prog_io_item.m"
                          {
#line 978 "prog_io_item.m"
                            parse_tree__prog_io_item__ModeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, (MR_Integer) 0)));
#line 978 "prog_io_item.m"
                            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, (MR_Integer) 1)));
#line 978 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 978 "prog_io_item.m"
                          }
#line 978 "prog_io_item.m"
                      }
#line 978 "prog_io_item.m"
                  }
#line 978 "prog_io_item.m"
              }
#line 978 "prog_io_item.m"
          }
#line 983 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 979 "prog_io_item.m"
          {
#line 979 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_16;
#line 979 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Mode0_17;
#line 979 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Mode_18;
#line 979 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_24_24;

#line 979 "prog_io_item.m"
            {
#line 979 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__TypeTerm_13, &parse_tree__prog_io_item__Type_16);
            }
#line 979 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 979 "prog_io_item.m"
              {
#line 980 "prog_io_item.m"
                parse_tree__prog_io_item__V_24_24 = (MR_Integer) 0;
#line 980 "prog_io_item.m"
                {
#line 980 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_item__V_24_24, parse_tree__prog_io_item__ModeTerm_14, &parse_tree__prog_io_item__Mode0_17);
                }
#line 979 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 979 "prog_io_item.m"
                  {
#line 981 "prog_io_item.m"
                    {
#line 981 "prog_io_item.m"
                      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_1, parse_tree__prog_io_item__Mode0_17, &parse_tree__prog_io_item__Mode_18);
                    }
#line 982 "prog_io_item.m"
                    {
#line 982 "prog_io_item.m"
                      parse_tree__prog_io_item__H_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__H_8, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_16));
#line 982 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__H_8, 1) = ((MR_Box) (parse_tree__prog_io_item__Mode_18));
#line 982 "prog_io_item.m"
                    }
#line 982 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 979 "prog_io_item.m"
                  }
#line 979 "prog_io_item.m"
              }
#line 979 "prog_io_item.m"
          }
#line 983 "prog_io_item.m"
        else
#line 984 "prog_io_item.m"
          {
#line 984 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_25;

#line 984 "prog_io_item.m"
            {
#line 984 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__H0_6, &parse_tree__prog_io_item__Type_25);
            }
#line 984 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 984 "prog_io_item.m"
              {
#line 985 "prog_io_item.m"
                {
#line 985 "prog_io_item.m"
                  parse_tree__prog_io_item__H_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 985 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H_8, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_25));
#line 985 "prog_io_item.m"
                }
#line 985 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 984 "prog_io_item.m"
              }
#line 984 "prog_io_item.m"
          }
#line 970 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 970 "prog_io_item.m"
          {
#line 972 "prog_io_item.m"
            {
#line 972 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_1, parse_tree__prog_io_item__T0_7, &parse_tree__prog_io_item__T_9);
            }
#line 970 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 970 "prog_io_item.m"
              {
#line 970 "prog_io_item.m"
                {
#line 970 "prog_io_item.m"
                  MR_Word base;
#line 970 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "prog_io_item.m"
                  *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 970 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__H_8));
#line 970 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__T_9));
#line 970 "prog_io_item.m"
                }
#line 970 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 970 "prog_io_item.m"
              }
#line 970 "prog_io_item.m"
          }
#line 970 "prog_io_item.m"
      }
#line 969 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 969 "prog_io_item.m"
  }
#line 966 "prog_io_item.m"
}

#line 893 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncName_14,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Args_15,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ReturnArg_16,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncTerm_17,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_18,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ExistQVars_21,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Constraints_22,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_23,
#line 893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_24,
#line 893 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_25,
#line 893 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_26)
#line 893 "prog_io_item.m"
{
#line 900 "prog_io_item.m"
  {
#line 900 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 900 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_132_132;
#line 900 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27;
#line 900 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InconsistentArgsSpecs_28;
#line 900 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgsOnlySpecs_36;
#line 900 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnOnlySpecs_43;
#line 900 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConsistencySpecs_44;
#line 900 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_98_98;
#line 911 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_60_60;
#line 912 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_33_33;
#line 911 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 911 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 911 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;
#line 924 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_79_79;
#line 925 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_39_39;
#line 925 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_40_40;
#line 924 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_38_38;
#line 924 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_37_37;

#line 901 "prog_io_item.m"
    {
#line 901 "prog_io_item.m"
      parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(parse_tree__prog_io_item__Args_15, parse_tree__prog_io_item__FuncTerm_17, &parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27);
    }
#line 906 "prog_io_item.m"
    if ((parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 905 "prog_io_item.m"
      parse_tree__prog_io_item__InconsistentArgsSpecs_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 906 "prog_io_item.m"
    else
#line 907 "prog_io_item.m"
      {
#line 907 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InconsistentArgsSpec_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27, (MR_Integer) 0)));

#line 908 "prog_io_item.m"
        {
#line 908 "prog_io_item.m"
          parse_tree__prog_io_item__InconsistentArgsSpecs_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__InconsistentArgsSpecs_28, 0) = ((MR_Box) (parse_tree__prog_io_item__InconsistentArgsSpec_29));
#line 908 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__InconsistentArgsSpecs_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 908 "prog_io_item.m"
        }
#line 907 "prog_io_item.m"
      }
#line 912 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_16)) == (MR_mktag((MR_Integer) 0)));
#line 912 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 912 "prog_io_item.m"
      {
#line 912 "prog_io_item.m"
        parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 0)));
#line 911 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 911 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 911 "prog_io_item.m"
          {
#line 911 "prog_io_item.m"
            parse_tree__prog_io_item__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 0)));
#line 911 "prog_io_item.m"
            parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 1)));
#line 911 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 911 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 911 "prog_io_item.m"
              {
#line 911 "prog_io_item.m"
                parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, (MR_Integer) 0)));
#line 911 "prog_io_item.m"
                parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, (MR_Integer) 1)));
#line 911 "prog_io_item.m"
              }
#line 911 "prog_io_item.m"
          }
#line 912 "prog_io_item.m"
      }
#line 920 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 915 "prog_io_item.m"
      {
#line 915 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ArgsOnlySpec_35;
#line 915 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_71_71;
#line 915 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_72_72;
#line 915 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_73_73;

#line 917 "prog_io_item.m"
        {
#line 917 "prog_io_item.m"
          parse_tree__prog_io_item__V_73_73 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 917 "prog_io_item.m"
        {
#line 917 "prog_io_item.m"
          parse_tree__prog_io_item__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 917 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_item__V_73_73));
#line 917 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[138])));
#line 917 "prog_io_item.m"
        }
#line 918 "prog_io_item.m"
        {
#line 918 "prog_io_item.m"
          parse_tree__prog_io_item__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_item__V_72_72));
#line 918 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 918 "prog_io_item.m"
        }
#line 916 "prog_io_item.m"
        {
#line 916 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 916 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 916 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 2) = ((MR_Box) (parse_tree__prog_io_item__V_71_71));
#line 916 "prog_io_item.m"
        }
#line 919 "prog_io_item.m"
        {
#line 919 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpecs_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_36, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsOnlySpec_35));
#line 919 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 919 "prog_io_item.m"
        }
#line 915 "prog_io_item.m"
      }
#line 920 "prog_io_item.m"
    else
#line 921 "prog_io_item.m"
      parse_tree__prog_io_item__ArgsOnlySpecs_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 925 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_16)) == (MR_mktag((MR_Integer) 1)));
#line 925 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 925 "prog_io_item.m"
      {
#line 925 "prog_io_item.m"
        parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 0)));
#line 925 "prog_io_item.m"
        parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 1)));
#line 924 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 924 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 924 "prog_io_item.m"
          {
#line 924 "prog_io_item.m"
            parse_tree__prog_io_item__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 0)));
#line 924 "prog_io_item.m"
            parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 1)));
#line 924 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_79_79)) == (MR_mktag((MR_Integer) 0)));
#line 924 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 924 "prog_io_item.m"
              parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, (MR_Integer) 0)));
#line 924 "prog_io_item.m"
          }
#line 925 "prog_io_item.m"
      }
#line 933 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 928 "prog_io_item.m"
      {
#line 928 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ReturnOnlySpec_42;
#line 928 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_90_90;
#line 928 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_91_91;
#line 928 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_92_92;

#line 930 "prog_io_item.m"
        {
#line 930 "prog_io_item.m"
          parse_tree__prog_io_item__V_92_92 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 930 "prog_io_item.m"
        {
#line 930 "prog_io_item.m"
          parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 930 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 930 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[139])));
#line 930 "prog_io_item.m"
        }
#line 931 "prog_io_item.m"
        {
#line 931 "prog_io_item.m"
          parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 931 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 931 "prog_io_item.m"
        }
#line 929 "prog_io_item.m"
        {
#line 929 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 929 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 929 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 929 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 2) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 929 "prog_io_item.m"
        }
#line 932 "prog_io_item.m"
        {
#line 932 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpecs_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_43, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnOnlySpec_42));
#line 932 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 932 "prog_io_item.m"
        }
#line 928 "prog_io_item.m"
      }
#line 933 "prog_io_item.m"
    else
#line 934 "prog_io_item.m"
      parse_tree__prog_io_item__ReturnOnlySpecs_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9384 "parse_tree.prog_io_item.c"
    parse_tree__prog_io_item__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 937 "prog_io_item.m"
    {
#line 937 "prog_io_item.m"
      parse_tree__prog_io_item__V_98_98 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_132_132, parse_tree__prog_io_item__ArgsOnlySpecs_36, parse_tree__prog_io_item__ReturnOnlySpecs_43);
    }
#line 937 "prog_io_item.m"
    {
#line 937 "prog_io_item.m"
      parse_tree__prog_io_item__ConsistencySpecs_44 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_132_132, parse_tree__prog_io_item__InconsistentArgsSpecs_28, parse_tree__prog_io_item__V_98_98);
    }
#line 941 "prog_io_item.m"
    if ((parse_tree__prog_io_item__ConsistencySpecs_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 942 "prog_io_item.m"
      {
#line 942 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_133_133;
#line 942 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Purity_47;
#line 942 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_48;
#line 942 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TVarSet_49;
#line 942 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__IVarSet_50;
#line 942 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__AllArgs_51;
#line 942 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_99_99;

#line 943 "prog_io_item.m"
        {
#line 943 "prog_io_item.m"
          parse_tree__prog_io_item__get_purity_3_p_0(&parse_tree__prog_io_item__Purity_47, parse_tree__prog_io_item__Attributes0_23, &parse_tree__prog_io_item__Attributes_48);
        }
#line 9420 "parse_tree.prog_io_item.c"
        parse_tree__prog_io_item__TypeCtorInfo_133_133 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 944 "prog_io_item.m"
        {
#line 944 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__TVarSet_49);
        }
#line 945 "prog_io_item.m"
        {
#line 945 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__IVarSet_50);
        }
#line 946 "prog_io_item.m"
        {
#line 946 "prog_io_item.m"
          parse_tree__prog_io_item__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnArg_16));
#line 946 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 946 "prog_io_item.m"
        }
#line 946 "prog_io_item.m"
        {
#line 946 "prog_io_item.m"
          parse_tree__prog_io_item__AllArgs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io_item__Args_15, parse_tree__prog_io_item__V_99_99);
        }
#line 947 "prog_io_item.m"
        {
#line 947 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__AllArgs_51);
        }
#line 955 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 948 "prog_io_item.m"
          {
#line 948 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ItemPredDecl_53;
#line 948 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Item_54;
#line 948 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeItem0_55;

#line 949 "prog_io_item.m"
            {
#line 949 "prog_io_item.m"
              parse_tree__prog_io_item__ItemPredDecl_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 949 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 0) = ((MR_Box) (parse_tree__prog_io_item__FuncName_14));
#line 949 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 1) = ((MR_Box) ((MR_Integer) 1));
#line 949 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 2) = ((MR_Box) (parse_tree__prog_io_item__AllArgs_51));
#line 949 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 949 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 949 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDetism_20));
#line 949 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 949 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 7) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_49));
#line 949 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 8) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_50));
#line 949 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 9) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_21));
#line 949 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 10) = ((MR_Box) (parse_tree__prog_io_item__Purity_47));
#line 949 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 11) = ((MR_Box) (parse_tree__prog_io_item__Constraints_22));
#line 949 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 12) = ((MR_Box) (parse_tree__prog_io_item__Context_24));
#line 949 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 13) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_25));
#line 949 "prog_io_item.m"
            }
#line 952 "prog_io_item.m"
            {
#line 952 "prog_io_item.m"
              parse_tree__prog_io_item__Item_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 952 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_54, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_53));
#line 952 "prog_io_item.m"
            }
#line 953 "prog_io_item.m"
            {
#line 953 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeItem0_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 953 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_54));
#line 953 "prog_io_item.m"
            }
#line 954 "prog_io_item.m"
            {
#line 954 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_55, parse_tree__prog_io_item__Attributes_48, parse_tree__prog_io_item__MaybeItem_26);
#line 954 "prog_io_item.m"
              return;
            }
#line 948 "prog_io_item.m"
          }
#line 955 "prog_io_item.m"
        else
#line 956 "prog_io_item.m"
          {
#line 956 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__TermStr_56;
#line 956 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Pieces_57;
#line 956 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_58;
#line 956 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_106_106;
#line 956 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_109_109;
#line 956 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_111_111;
#line 956 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_112_112;
#line 956 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_121_121;
#line 956 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_122_122;
#line 956 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_123_123;
#line 956 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_124_124;
#line 956 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_125_125;
#line 956 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_128_128;

#line 956 "prog_io_item.m"
            {
#line 956 "prog_io_item.m"
              parse_tree__prog_io_item__TermStr_56 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__Term_18);
            }
#line 959 "prog_io_item.m"
            {
#line 959 "prog_io_item.m"
              parse_tree__prog_io_item__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 959 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_112_112, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_56));
#line 959 "prog_io_item.m"
            }
#line 959 "prog_io_item.m"
            {
#line 959 "prog_io_item.m"
              parse_tree__prog_io_item__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_item__V_112_112));
#line 959 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 959 "prog_io_item.m"
            }
#line 958 "prog_io_item.m"
            {
#line 958 "prog_io_item.m"
              parse_tree__prog_io_item__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_109_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 958 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_109_109, 1) = ((MR_Box) (parse_tree__prog_io_item__V_111_111));
#line 958 "prog_io_item.m"
            }
#line 958 "prog_io_item.m"
            {
#line 958 "prog_io_item.m"
              parse_tree__prog_io_item__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[141])));
#line 958 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 1) = ((MR_Box) (parse_tree__prog_io_item__V_109_109));
#line 958 "prog_io_item.m"
            }
#line 957 "prog_io_item.m"
            {
#line 957 "prog_io_item.m"
              parse_tree__prog_io_item__Pieces_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[140])));
#line 957 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_57, 1) = ((MR_Box) (parse_tree__prog_io_item__V_106_106));
#line 957 "prog_io_item.m"
            }
#line 961 "prog_io_item.m"
            {
#line 961 "prog_io_item.m"
              parse_tree__prog_io_item__V_123_123 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, parse_tree__prog_io_item__Term_18);
            }
#line 961 "prog_io_item.m"
            {
#line 961 "prog_io_item.m"
              parse_tree__prog_io_item__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 961 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_57));
#line 961 "prog_io_item.m"
            }
#line 961 "prog_io_item.m"
            {
#line 961 "prog_io_item.m"
              parse_tree__prog_io_item__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_item__V_125_125));
#line 961 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 961 "prog_io_item.m"
            }
#line 961 "prog_io_item.m"
            {
#line 961 "prog_io_item.m"
              parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 961 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_item__V_123_123));
#line 961 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io_item__V_124_124));
#line 961 "prog_io_item.m"
            }
#line 961 "prog_io_item.m"
            {
#line 961 "prog_io_item.m"
              parse_tree__prog_io_item__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_121_121, 0) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 961 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 961 "prog_io_item.m"
            }
#line 960 "prog_io_item.m"
            {
#line 960 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 2) = ((MR_Box) (parse_tree__prog_io_item__V_121_121));
#line 960 "prog_io_item.m"
            }
#line 962 "prog_io_item.m"
            {
#line 962 "prog_io_item.m"
              parse_tree__prog_io_item__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 962 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_128_128, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_58));
#line 962 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 962 "prog_io_item.m"
            }
#line 962 "prog_io_item.m"
            {
#line 962 "prog_io_item.m"
              MR_Word base;
#line 962 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 962 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 962 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_128_128));
#line 962 "prog_io_item.m"
            }
#line 956 "prog_io_item.m"
          }
#line 942 "prog_io_item.m"
      }
#line 941 "prog_io_item.m"
    else
#line 940 "prog_io_item.m"
      {
#line 940 "prog_io_item.m"
        MR_Word base;
#line 940 "prog_io_item.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 940 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 940 "prog_io_item.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ConsistencySpecs_44));
#line 940 "prog_io_item.m"
      }
#line 900 "prog_io_item.m"
  }
#line 893 "prog_io_item.m"
}

#line 810 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_8_p_0(
#line 810 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 810 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 810 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_11,
#line 810 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_12,
#line 810 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_13,
#line 810 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 810 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 810 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 810 "prog_io_item.m"
{
#line 815 "prog_io_item.m"
  {
#line 815 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 815 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes_17;
#line 815 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeContext_18;

#line 816 "prog_io_item.m"
    {
#line 816 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__Attributes0_13, &parse_tree__prog_io_item__Attributes_17, &parse_tree__prog_io_item__MaybeContext_18);
    }
#line 821 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeContext_18)) == (MR_mktag((MR_Integer) 0))))
#line 819 "prog_io_item.m"
      {
#line 819 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 0)));

#line 820 "prog_io_item.m"
        {
#line 820 "prog_io_item.m"
          MR_Word base;
#line 820 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 820 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 820 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_19));
#line 820 "prog_io_item.m"
        }
#line 819 "prog_io_item.m"
      }
#line 821 "prog_io_item.m"
    else
#line 822 "prog_io_item.m"
      {
#line 822 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ExistQVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 0)));
#line 822 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Constraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 1)));
#line 822 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 2)));
#line 884 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeSugaredFuncTerm_23;
#line 884 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ReturnTerm_24;
#line 824 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_44_44;
#line 824 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_45_45;
#line 824 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_46_46;
#line 824 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_47_47;
#line 824 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_48_48;
#line 824 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_25_25;

#line 824 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_11)) == (MR_mktag((MR_Integer) 0)));
#line 824 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 824 "prog_io_item.m"
          {
#line 824 "prog_io_item.m"
            parse_tree__prog_io_item__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 0)));
#line 824 "prog_io_item.m"
            parse_tree__prog_io_item__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 1)));
#line 824 "prog_io_item.m"
            parse_tree__prog_io_item__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 2)));
#line 824 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_44_44)) == (MR_mktag((MR_Integer) 0)));
#line 824 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 824 "prog_io_item.m"
              {
#line 824 "prog_io_item.m"
                parse_tree__prog_io_item__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_44_44, (MR_Integer) 0)));
#line 824 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_45_45, (MR_String) "=") == 0);
#line 824 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 824 "prog_io_item.m"
                  {
#line 825 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 825 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 825 "prog_io_item.m"
                      {
#line 825 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeSugaredFuncTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, (MR_Integer) 0)));
#line 825 "prog_io_item.m"
                        parse_tree__prog_io_item__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, (MR_Integer) 1)));
#line 825 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 825 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 825 "prog_io_item.m"
                          {
#line 825 "prog_io_item.m"
                            parse_tree__prog_io_item__ReturnTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, (MR_Integer) 0)));
#line 825 "prog_io_item.m"
                            parse_tree__prog_io_item__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, (MR_Integer) 1)));
#line 825 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "prog_io_item.m"
                          }
#line 825 "prog_io_item.m"
                      }
#line 824 "prog_io_item.m"
                  }
#line 824 "prog_io_item.m"
              }
#line 824 "prog_io_item.m"
          }
#line 884 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 827 "prog_io_item.m"
          {
#line 827 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_148_148;
#line 827 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__FuncTerm_26;
#line 827 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFuncNameAndArgs_28;

#line 827 "prog_io_item.m"
            {
#line 827 "prog_io_item.m"
              parse_tree__prog_io_item__FuncTerm_26 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__MaybeSugaredFuncTerm_23);
            }
#line 9867 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_148_148 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 830 "prog_io_item.m"
            {
#line 830 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__FuncTerm_26, parse_tree__prog_io_item__VarSet_10, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[74]), &parse_tree__prog_io_item__MaybeFuncNameAndArgs_28);
            }
#line 835 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFuncNameAndArgs_28)) == (MR_mktag((MR_Integer) 0))))
#line 833 "prog_io_item.m"
              {
#line 833 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFuncNameAndArgs_28, (MR_Integer) 0)));

#line 834 "prog_io_item.m"
                {
#line 834 "prog_io_item.m"
                  MR_Word base;
#line 834 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 834 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 834 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_140));
#line 834 "prog_io_item.m"
                }
#line 833 "prog_io_item.m"
              }
#line 835 "prog_io_item.m"
            else
#line 836 "prog_io_item.m"
              {
#line 836 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__FuncName_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncNameAndArgs_28, (MR_Integer) 0)));
#line 836 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncNameAndArgs_28, (MR_Integer) 1)));
#line 836 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeArgs_32;
#line 836 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeReturnArg_37;
#line 842 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgsPrime_31;
#line 858 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ReturnArgPrime_36;
#line 878 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Args_40;
#line 878 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ReturnArg_41;

#line 838 "prog_io_item.m"
                {
#line 838 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_22, parse_tree__prog_io_item__ArgTerms_30, &parse_tree__prog_io_item__ArgsPrime_31);
                }
#line 842 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 841 "prog_io_item.m"
                  {
#line 841 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 841 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeArgs_32, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsPrime_31));
#line 841 "prog_io_item.m"
                  }
#line 842 "prog_io_item.m"
                else
#line 843 "prog_io_item.m"
                  {
#line 843 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__FuncTermStr_33;
#line 843 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ArgsPieces_34;
#line 843 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ArgsSpec_35;
#line 843 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_60_60;
#line 843 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_63_63;
#line 843 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_66_66;
#line 843 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_67_67;
#line 843 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_76_76;
#line 843 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_77_77;
#line 843 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_78_78;
#line 843 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_79_79;
#line 843 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_80_80;
#line 843 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_83_83;

#line 843 "prog_io_item.m"
                    {
#line 843 "prog_io_item.m"
                      parse_tree__prog_io_item__FuncTermStr_33 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__FuncTerm_26);
                    }
#line 846 "prog_io_item.m"
                    {
#line 846 "prog_io_item.m"
                      parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 846 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_item__FuncTermStr_33));
#line 846 "prog_io_item.m"
                    }
#line 846 "prog_io_item.m"
                    {
#line 846 "prog_io_item.m"
                      parse_tree__prog_io_item__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 846 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 846 "prog_io_item.m"
                    }
#line 845 "prog_io_item.m"
                    {
#line 845 "prog_io_item.m"
                      parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[135])));
#line 845 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_item__V_66_66));
#line 845 "prog_io_item.m"
                    }
#line 845 "prog_io_item.m"
                    {
#line 845 "prog_io_item.m"
                      parse_tree__prog_io_item__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[134])));
#line 845 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 845 "prog_io_item.m"
                    }
#line 844 "prog_io_item.m"
                    {
#line 844 "prog_io_item.m"
                      parse_tree__prog_io_item__ArgsPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[133])));
#line 844 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsPieces_34, 1) = ((MR_Box) (parse_tree__prog_io_item__V_60_60));
#line 844 "prog_io_item.m"
                    }
#line 849 "prog_io_item.m"
                    {
#line 849 "prog_io_item.m"
                      parse_tree__prog_io_item__V_78_78 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__FuncTerm_26);
                    }
#line 850 "prog_io_item.m"
                    {
#line 850 "prog_io_item.m"
                      parse_tree__prog_io_item__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 850 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsPieces_34));
#line 850 "prog_io_item.m"
                    }
#line 850 "prog_io_item.m"
                    {
#line 850 "prog_io_item.m"
                      parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 850 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 850 "prog_io_item.m"
                    }
#line 849 "prog_io_item.m"
                    {
#line 849 "prog_io_item.m"
                      parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 849 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 849 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 849 "prog_io_item.m"
                    }
#line 850 "prog_io_item.m"
                    {
#line 850 "prog_io_item.m"
                      parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 850 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 850 "prog_io_item.m"
                    }
#line 847 "prog_io_item.m"
                    {
#line 847 "prog_io_item.m"
                      parse_tree__prog_io_item__ArgsSpec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 847 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 847 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_35, 2) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 847 "prog_io_item.m"
                    }
#line 851 "prog_io_item.m"
                    {
#line 851 "prog_io_item.m"
                      parse_tree__prog_io_item__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsSpec_35));
#line 851 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 851 "prog_io_item.m"
                    }
#line 851 "prog_io_item.m"
                    {
#line 851 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeArgs_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 851 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeArgs_32, 0) = ((MR_Box) (parse_tree__prog_io_item__V_83_83));
#line 851 "prog_io_item.m"
                    }
#line 843 "prog_io_item.m"
                  }
#line 854 "prog_io_item.m"
                {
#line 854 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_3_p_0(parse_tree__prog_io_item__InstConstraints_22, parse_tree__prog_io_item__ReturnTerm_24, &parse_tree__prog_io_item__ReturnArgPrime_36);
                }
#line 858 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 857 "prog_io_item.m"
                  {
#line 857 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeReturnArg_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 857 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeReturnArg_37, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnArgPrime_36));
#line 857 "prog_io_item.m"
                  }
#line 858 "prog_io_item.m"
                else
#line 861 "prog_io_item.m"
                  {
#line 861 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ReturnSpec_39;
#line 861 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_101_101;
#line 861 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_102_102;
#line 861 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_103_103;
#line 861 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_108_108;

#line 864 "prog_io_item.m"
                    {
#line 864 "prog_io_item.m"
                      parse_tree__prog_io_item__V_103_103 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__ReturnTerm_24);
                    }
#line 864 "prog_io_item.m"
                    {
#line 864 "prog_io_item.m"
                      parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 864 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_item__V_103_103));
#line 864 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[136])));
#line 864 "prog_io_item.m"
                    }
#line 865 "prog_io_item.m"
                    {
#line 865 "prog_io_item.m"
                      parse_tree__prog_io_item__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 865 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 865 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 865 "prog_io_item.m"
                    }
#line 862 "prog_io_item.m"
                    {
#line 862 "prog_io_item.m"
                      parse_tree__prog_io_item__ReturnSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 862 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 862 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 862 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_39, 2) = ((MR_Box) (parse_tree__prog_io_item__V_101_101));
#line 862 "prog_io_item.m"
                    }
#line 866 "prog_io_item.m"
                    {
#line 866 "prog_io_item.m"
                      parse_tree__prog_io_item__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnSpec_39));
#line 866 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "prog_io_item.m"
                    }
#line 866 "prog_io_item.m"
                    {
#line 866 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeReturnArg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 866 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeReturnArg_37, 0) = ((MR_Box) (parse_tree__prog_io_item__V_108_108));
#line 866 "prog_io_item.m"
                    }
#line 861 "prog_io_item.m"
                  }
#line 869 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeArgs_32)) == (MR_mktag((MR_Integer) 1)));
#line 869 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 869 "prog_io_item.m"
                  {
#line 869 "prog_io_item.m"
                    parse_tree__prog_io_item__Args_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeArgs_32, (MR_Integer) 0)));
#line 870 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeReturnArg_37)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 870 "prog_io_item.m"
                      parse_tree__prog_io_item__ReturnArg_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeReturnArg_37, (MR_Integer) 0)));
#line 869 "prog_io_item.m"
                  }
#line 878 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 874 "prog_io_item.m"
                  {
#line 874 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(parse_tree__prog_io_item__FuncName_29, parse_tree__prog_io_item__Args_40, parse_tree__prog_io_item__ReturnArg_41, parse_tree__prog_io_item__FuncTerm_26, parse_tree__prog_io_item__Term_11, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__MaybeDet_12, parse_tree__prog_io_item__ExistQVars_20, parse_tree__prog_io_item__Constraints_21, parse_tree__prog_io_item__Attributes_17, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 874 "prog_io_item.m"
                    return;
                  }
#line 878 "prog_io_item.m"
                else
#line 880 "prog_io_item.m"
                  {
#line 880 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_110_110;
#line 880 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_111_111;
#line 880 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Specs_141;

#line 879 "prog_io_item.m"
                    {
#line 879 "prog_io_item.m"
                      parse_tree__prog_io_item__V_110_110 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[5], parse_tree__prog_io_item__MaybeArgs_32);
                    }
#line 880 "prog_io_item.m"
                    {
#line 880 "prog_io_item.m"
                      parse_tree__prog_io_item__V_111_111 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io_item__MaybeReturnArg_37);
                    }
#line 879 "prog_io_item.m"
                    {
#line 879 "prog_io_item.m"
                      parse_tree__prog_io_item__Specs_141 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_110_110, parse_tree__prog_io_item__V_111_111);
                    }
#line 881 "prog_io_item.m"
                    {
#line 881 "prog_io_item.m"
                      MR_Word base;
#line 881 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 881 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 881 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_141));
#line 881 "prog_io_item.m"
                    }
#line 880 "prog_io_item.m"
                  }
#line 836 "prog_io_item.m"
              }
#line 827 "prog_io_item.m"
          }
#line 884 "prog_io_item.m"
        else
#line 886 "prog_io_item.m"
          {
#line 886 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_43;
#line 886 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_131_131;
#line 886 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_132_132;
#line 886 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_133_133;
#line 886 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_138_138;

#line 888 "prog_io_item.m"
            {
#line 888 "prog_io_item.m"
              parse_tree__prog_io_item__V_133_133 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_11);
            }
#line 888 "prog_io_item.m"
            {
#line 888 "prog_io_item.m"
              parse_tree__prog_io_item__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 888 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_132_132, 0) = ((MR_Box) (parse_tree__prog_io_item__V_133_133));
#line 888 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[137])));
#line 888 "prog_io_item.m"
            }
#line 888 "prog_io_item.m"
            {
#line 888 "prog_io_item.m"
              parse_tree__prog_io_item__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_131_131, 0) = ((MR_Box) (parse_tree__prog_io_item__V_132_132));
#line 888 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 888 "prog_io_item.m"
            }
#line 887 "prog_io_item.m"
            {
#line 887 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 887 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 887 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 887 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 2) = ((MR_Box) (parse_tree__prog_io_item__V_131_131));
#line 887 "prog_io_item.m"
            }
#line 889 "prog_io_item.m"
            {
#line 889 "prog_io_item.m"
              parse_tree__prog_io_item__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_43));
#line 889 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "prog_io_item.m"
            }
#line 889 "prog_io_item.m"
            {
#line 889 "prog_io_item.m"
              MR_Word base;
#line 889 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 889 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 889 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_138_138));
#line 889 "prog_io_item.m"
            }
#line 886 "prog_io_item.m"
          }
#line 822 "prog_io_item.m"
      }
#line 815 "prog_io_item.m"
  }
#line 810 "prog_io_item.m"
}

#line 710 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_12,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_13,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_14,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_15,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_16,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 710 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 710 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 710 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22)
#line 710 "prog_io_item.m"
{
#line 717 "prog_io_item.m"
  {
#line 717 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 717 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes1_23;
#line 717 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeExistClassInstContext_24;

#line 718 "prog_io_item.m"
    {
#line 718 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_13, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__Attributes0_19, &parse_tree__prog_io_item__Attributes1_23, &parse_tree__prog_io_item__MaybeExistClassInstContext_24);
    }
#line 723 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeExistClassInstContext_24)) == (MR_mktag((MR_Integer) 0))))
#line 721 "prog_io_item.m"
      {
#line 721 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 0)));

#line 722 "prog_io_item.m"
        {
#line 722 "prog_io_item.m"
          MR_Word base;
#line 722 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 722 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 722 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_25));
#line 722 "prog_io_item.m"
        }
#line 721 "prog_io_item.m"
      }
#line 723 "prog_io_item.m"
    else
#line 725 "prog_io_item.m"
      {
#line 725 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_187_187 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 725 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_188_188;
#line 725 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ExistQVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 0)));
#line 725 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Constraints_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 1)));
#line 725 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 2)));
#line 725 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ContextPieces_29;
#line 725 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybePredNameAndArgs_30;
#line 725 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_58_58;
#line 725 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_59_59;

#line 726 "prog_io_item.m"
        {
#line 726 "prog_io_item.m"
          parse_tree__prog_io_item__V_59_59 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
        }
#line 727 "prog_io_item.m"
        {
#line 727 "prog_io_item.m"
          parse_tree__prog_io_item__V_58_58 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_59_59, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[127]));
        }
#line 726 "prog_io_item.m"
        {
#line 726 "prog_io_item.m"
          parse_tree__prog_io_item__ContextPieces_29 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[125]), parse_tree__prog_io_item__V_58_58);
        }
#line 10431 "parse_tree.prog_io_item.c"
        parse_tree__prog_io_item__TypeCtorInfo_188_188 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 728 "prog_io_item.m"
        {
#line 728 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__ModuleName_13, parse_tree__prog_io_item__PredTypeTerm_15, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__ContextPieces_29, &parse_tree__prog_io_item__MaybePredNameAndArgs_30);
        }
#line 733 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybePredNameAndArgs_30)) == (MR_mktag((MR_Integer) 0))))
#line 731 "prog_io_item.m"
          {
#line 731 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 0)));

#line 732 "prog_io_item.m"
            {
#line 732 "prog_io_item.m"
              MR_Word base;
#line 732 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 732 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 732 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_173));
#line 732 "prog_io_item.m"
            }
#line 731 "prog_io_item.m"
          }
#line 733 "prog_io_item.m"
        else
#line 734 "prog_io_item.m"
          {
#line 734 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 0)));
#line 734 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 1)));
#line 795 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Args_33;

#line 735 "prog_io_item.m"
            {
#line 735 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_28, parse_tree__prog_io_item__ArgTerms_32, &parse_tree__prog_io_item__Args_33);
            }
#line 795 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 737 "prog_io_item.m"
              {
#line 737 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34;

#line 736 "prog_io_item.m"
                {
#line 736 "prog_io_item.m"
                  parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(parse_tree__prog_io_item__Args_33, parse_tree__prog_io_item__PredTypeTerm_15, &parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34);
                }
#line 741 "prog_io_item.m"
                if ((parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 754 "prog_io_item.m"
                  {
#line 744 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_64_64;
#line 744 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_36_36;
#line 745 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_38_38;
#line 745 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_37_37;

#line 744 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_17)) == (MR_mktag((MR_Integer) 1)));
#line 744 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 744 "prog_io_item.m"
                      {
#line 744 "prog_io_item.m"
                        parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_17, (MR_Integer) 0)));
#line 745 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_33)) == (MR_mktag((MR_Integer) 1)));
#line 745 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 745 "prog_io_item.m"
                          {
#line 745 "prog_io_item.m"
                            parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 0)));
#line 745 "prog_io_item.m"
                            parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 1)));
#line 745 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 745 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 745 "prog_io_item.m"
                              parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 745 "prog_io_item.m"
                          }
#line 744 "prog_io_item.m"
                      }
#line 754 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 748 "prog_io_item.m"
                      {
#line 748 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Spec_40;
#line 748 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_78_78;
#line 748 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_79_79;
#line 748 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_80_80;
#line 748 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_85_85;

#line 751 "prog_io_item.m"
                        {
#line 751 "prog_io_item.m"
                          parse_tree__prog_io_item__V_80_80 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                        }
#line 751 "prog_io_item.m"
                        {
#line 751 "prog_io_item.m"
                          parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 751 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 751 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[128])));
#line 751 "prog_io_item.m"
                        }
#line 752 "prog_io_item.m"
                        {
#line 752 "prog_io_item.m"
                          parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 752 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 752 "prog_io_item.m"
                        }
#line 749 "prog_io_item.m"
                        {
#line 749 "prog_io_item.m"
                          parse_tree__prog_io_item__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 749 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 749 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 2) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 749 "prog_io_item.m"
                        }
#line 753 "prog_io_item.m"
                        {
#line 753 "prog_io_item.m"
                          parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_40));
#line 753 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "prog_io_item.m"
                        }
#line 753 "prog_io_item.m"
                        {
#line 753 "prog_io_item.m"
                          MR_Word base;
#line 753 "prog_io_item.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 753 "prog_io_item.m"
                          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 753 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 753 "prog_io_item.m"
                        }
#line 748 "prog_io_item.m"
                      }
#line 754 "prog_io_item.m"
                    else
#line 766 "prog_io_item.m"
                      {
#line 755 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_87_87;
#line 756 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_41_41;
#line 757 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_44_44;
#line 757 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_42_42;
#line 757 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_43_43;

#line 755 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 755 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 755 "prog_io_item.m"
                          {
#line 756 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithType_16)) == (MR_mktag((MR_Integer) 1)));
#line 756 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 756 "prog_io_item.m"
                              {
#line 756 "prog_io_item.m"
                                parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithType_16, (MR_Integer) 0)));
#line 757 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_33)) == (MR_mktag((MR_Integer) 1)));
#line 757 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 757 "prog_io_item.m"
                                  {
#line 757 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 0)));
#line 757 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 1)));
#line 757 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_87_87)) == (MR_mktag((MR_Integer) 1)));
#line 757 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 757 "prog_io_item.m"
                                      {
#line 757 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_87_87, (MR_Integer) 0)));
#line 757 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_87_87, (MR_Integer) 1)));
#line 757 "prog_io_item.m"
                                      }
#line 757 "prog_io_item.m"
                                  }
#line 756 "prog_io_item.m"
                              }
#line 755 "prog_io_item.m"
                          }
#line 766 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 760 "prog_io_item.m"
                          {
#line 760 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_101_101;
#line 760 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_102_102;
#line 760 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_103_103;
#line 760 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_108_108;
#line 760 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Spec_175;

#line 763 "prog_io_item.m"
                            {
#line 763 "prog_io_item.m"
                              parse_tree__prog_io_item__V_103_103 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                            }
#line 763 "prog_io_item.m"
                            {
#line 763 "prog_io_item.m"
                              parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 763 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_item__V_103_103));
#line 763 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[129])));
#line 763 "prog_io_item.m"
                            }
#line 764 "prog_io_item.m"
                            {
#line 764 "prog_io_item.m"
                              parse_tree__prog_io_item__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 764 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 764 "prog_io_item.m"
                            }
#line 761 "prog_io_item.m"
                            {
#line 761 "prog_io_item.m"
                              parse_tree__prog_io_item__Spec_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 761 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 761 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 761 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_175, 2) = ((MR_Box) (parse_tree__prog_io_item__V_101_101));
#line 761 "prog_io_item.m"
                            }
#line 765 "prog_io_item.m"
                            {
#line 765 "prog_io_item.m"
                              parse_tree__prog_io_item__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_175));
#line 765 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 765 "prog_io_item.m"
                            }
#line 765 "prog_io_item.m"
                            {
#line 765 "prog_io_item.m"
                              MR_Word base;
#line 765 "prog_io_item.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 765 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 765 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_108_108));
#line 765 "prog_io_item.m"
                            }
#line 760 "prog_io_item.m"
                          }
#line 766 "prog_io_item.m"
                        else
#line 780 "prog_io_item.m"
                          {
#line 767 "prog_io_item.m"
                            {
#line 767 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__Args_33);
                            }
#line 780 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 769 "prog_io_item.m"
                              {
#line 769 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Purity_45;
#line 769 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Attributes_46;
#line 769 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__TVarSet_47;
#line 769 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__IVarSet_48;
#line 769 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ItemPredDecl_50;
#line 769 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Item_51;
#line 769 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeItem0_52;

#line 769 "prog_io_item.m"
                                {
#line 769 "prog_io_item.m"
                                  parse_tree__prog_io_item__get_purity_3_p_0(&parse_tree__prog_io_item__Purity_45, parse_tree__prog_io_item__Attributes1_23, &parse_tree__prog_io_item__Attributes_46);
                                }
#line 770 "prog_io_item.m"
                                {
#line 770 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_14, &parse_tree__prog_io_item__TVarSet_47);
                                }
#line 771 "prog_io_item.m"
                                {
#line 771 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_14, &parse_tree__prog_io_item__IVarSet_48);
                                }
#line 773 "prog_io_item.m"
                                {
#line 773 "prog_io_item.m"
                                  parse_tree__prog_io_item__ItemPredDecl_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 773 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_31));
#line 773 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 1) = ((MR_Box) (parse_tree__prog_io_item__PredOrFunc_12));
#line 773 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 2) = ((MR_Box) (parse_tree__prog_io_item__Args_33));
#line 773 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 3) = ((MR_Box) (parse_tree__prog_io_item__WithType_16));
#line 773 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 4) = ((MR_Box) (parse_tree__prog_io_item__WithInst_17));
#line 773 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_18));
#line 773 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 7) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_47));
#line 773 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 8) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_48));
#line 773 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 9) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_26));
#line 773 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 10) = ((MR_Box) (parse_tree__prog_io_item__Purity_45));
#line 773 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 11) = ((MR_Box) (parse_tree__prog_io_item__Constraints_27));
#line 773 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 12) = ((MR_Box) (parse_tree__prog_io_item__Context_20));
#line 773 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 13) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_21));
#line 773 "prog_io_item.m"
                                }
#line 777 "prog_io_item.m"
                                {
#line 777 "prog_io_item.m"
                                  parse_tree__prog_io_item__Item_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 777 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_51, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_50));
#line 777 "prog_io_item.m"
                                }
#line 778 "prog_io_item.m"
                                {
#line 778 "prog_io_item.m"
                                  parse_tree__prog_io_item__MaybeItem0_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 778 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_52, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_51));
#line 778 "prog_io_item.m"
                                }
#line 779 "prog_io_item.m"
                                {
#line 779 "prog_io_item.m"
                                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_52, parse_tree__prog_io_item__Attributes_46, parse_tree__prog_io_item__MaybeItem_22);
#line 779 "prog_io_item.m"
                                  return;
                                }
#line 769 "prog_io_item.m"
                              }
#line 780 "prog_io_item.m"
                            else
#line 782 "prog_io_item.m"
                              {
#line 782 "prog_io_item.m"
                                MR_String parse_tree__prog_io_item__PredTypeTermStr_53;
#line 782 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_117_117;
#line 782 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_118_118;
#line 782 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_119_119;
#line 782 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_122_122;
#line 782 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_124_124;
#line 782 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_125_125;
#line 782 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_134_134;
#line 782 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_135_135;
#line 782 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_136_136;
#line 782 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_137_137;
#line 782 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_138_138;
#line 782 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_141_141;
#line 782 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Pieces_176;
#line 782 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Spec_177;

#line 781 "prog_io_item.m"
                                {
#line 781 "prog_io_item.m"
                                  parse_tree__prog_io_item__PredTypeTermStr_53 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__PredTypeTerm_15);
                                }
#line 785 "prog_io_item.m"
                                {
#line 785 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_118_118 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
                                }
#line 787 "prog_io_item.m"
                                {
#line 787 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 787 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_125_125, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_53));
#line 787 "prog_io_item.m"
                                }
#line 787 "prog_io_item.m"
                                {
#line 787 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_item__V_125_125));
#line 787 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 787 "prog_io_item.m"
                                }
#line 786 "prog_io_item.m"
                                {
#line 786 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 786 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io_item__V_124_124));
#line 786 "prog_io_item.m"
                                }
#line 786 "prog_io_item.m"
                                {
#line 786 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_119_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[126])));
#line 786 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_119_119, 1) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 786 "prog_io_item.m"
                                }
#line 785 "prog_io_item.m"
                                {
#line 785 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_117_117 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_118_118, parse_tree__prog_io_item__V_119_119);
                                }
#line 784 "prog_io_item.m"
                                {
#line 784 "prog_io_item.m"
                                  parse_tree__prog_io_item__Pieces_176 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[68]), parse_tree__prog_io_item__V_117_117);
                                }
#line 790 "prog_io_item.m"
                                {
#line 790 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_136_136 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                                }
#line 791 "prog_io_item.m"
                                {
#line 791 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 791 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_176));
#line 791 "prog_io_item.m"
                                }
#line 791 "prog_io_item.m"
                                {
#line 791 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_137_137, 0) = ((MR_Box) (parse_tree__prog_io_item__V_138_138));
#line 791 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "prog_io_item.m"
                                }
#line 790 "prog_io_item.m"
                                {
#line 790 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 790 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_135_135, 0) = ((MR_Box) (parse_tree__prog_io_item__V_136_136));
#line 790 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_135_135, 1) = ((MR_Box) (parse_tree__prog_io_item__V_137_137));
#line 790 "prog_io_item.m"
                                }
#line 791 "prog_io_item.m"
                                {
#line 791 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_134_134, 0) = ((MR_Box) (parse_tree__prog_io_item__V_135_135));
#line 791 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "prog_io_item.m"
                                }
#line 788 "prog_io_item.m"
                                {
#line 788 "prog_io_item.m"
                                  parse_tree__prog_io_item__Spec_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 788 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_177, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 788 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 788 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_177, 2) = ((MR_Box) (parse_tree__prog_io_item__V_134_134));
#line 788 "prog_io_item.m"
                                }
#line 792 "prog_io_item.m"
                                {
#line 792 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_141_141, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_177));
#line 792 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "prog_io_item.m"
                                }
#line 792 "prog_io_item.m"
                                {
#line 792 "prog_io_item.m"
                                  MR_Word base;
#line 792 "prog_io_item.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 792 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 792 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_141_141));
#line 792 "prog_io_item.m"
                                }
#line 782 "prog_io_item.m"
                              }
#line 780 "prog_io_item.m"
                          }
#line 766 "prog_io_item.m"
                      }
#line 754 "prog_io_item.m"
                  }
#line 741 "prog_io_item.m"
                else
#line 739 "prog_io_item.m"
                  {
#line 739 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__InconsistentArgsSpec_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34, (MR_Integer) 0)));
#line 739 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_143_143;

#line 740 "prog_io_item.m"
                    {
#line 740 "prog_io_item.m"
                      parse_tree__prog_io_item__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_143_143, 0) = ((MR_Box) (parse_tree__prog_io_item__InconsistentArgsSpec_35));
#line 740 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 740 "prog_io_item.m"
                    }
#line 740 "prog_io_item.m"
                    {
#line 740 "prog_io_item.m"
                      MR_Word base;
#line 740 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 740 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 740 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_143_143));
#line 740 "prog_io_item.m"
                    }
#line 739 "prog_io_item.m"
                  }
#line 737 "prog_io_item.m"
              }
#line 795 "prog_io_item.m"
            else
#line 796 "prog_io_item.m"
              {
#line 796 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_149_149;
#line 796 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_150_150;
#line 796 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_151_151;
#line 796 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_154_154;
#line 796 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_155_155;
#line 796 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_164_164;
#line 796 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_165_165;
#line 796 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_166_166;
#line 796 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_167_167;
#line 796 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_168_168;
#line 796 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_171_171;
#line 796 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_182;
#line 796 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_183;
#line 796 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredTypeTermStr_184;

#line 796 "prog_io_item.m"
                {
#line 796 "prog_io_item.m"
                  parse_tree__prog_io_item__PredTypeTermStr_184 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__PredTypeTerm_15);
                }
#line 798 "prog_io_item.m"
                {
#line 798 "prog_io_item.m"
                  parse_tree__prog_io_item__V_150_150 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
                }
#line 799 "prog_io_item.m"
                {
#line 799 "prog_io_item.m"
                  parse_tree__prog_io_item__V_155_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_155_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 799 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_155_155, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_184));
#line 799 "prog_io_item.m"
                }
#line 799 "prog_io_item.m"
                {
#line 799 "prog_io_item.m"
                  parse_tree__prog_io_item__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_154_154, 0) = ((MR_Box) (parse_tree__prog_io_item__V_155_155));
#line 799 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 799 "prog_io_item.m"
                }
#line 799 "prog_io_item.m"
                {
#line 799 "prog_io_item.m"
                  parse_tree__prog_io_item__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_151_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[132])));
#line 799 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_151_151, 1) = ((MR_Box) (parse_tree__prog_io_item__V_154_154));
#line 799 "prog_io_item.m"
                }
#line 798 "prog_io_item.m"
                {
#line 798 "prog_io_item.m"
                  parse_tree__prog_io_item__V_149_149 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_150_150, parse_tree__prog_io_item__V_151_151);
                }
#line 797 "prog_io_item.m"
                {
#line 797 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_182 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[131]), parse_tree__prog_io_item__V_149_149);
                }
#line 801 "prog_io_item.m"
                {
#line 801 "prog_io_item.m"
                  parse_tree__prog_io_item__V_166_166 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                }
#line 802 "prog_io_item.m"
                {
#line 802 "prog_io_item.m"
                  parse_tree__prog_io_item__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 802 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_168_168, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_182));
#line 802 "prog_io_item.m"
                }
#line 802 "prog_io_item.m"
                {
#line 802 "prog_io_item.m"
                  parse_tree__prog_io_item__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_167_167, 0) = ((MR_Box) (parse_tree__prog_io_item__V_168_168));
#line 802 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "prog_io_item.m"
                }
#line 801 "prog_io_item.m"
                {
#line 801 "prog_io_item.m"
                  parse_tree__prog_io_item__V_165_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 801 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_165_165, 0) = ((MR_Box) (parse_tree__prog_io_item__V_166_166));
#line 801 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_165_165, 1) = ((MR_Box) (parse_tree__prog_io_item__V_167_167));
#line 801 "prog_io_item.m"
                }
#line 802 "prog_io_item.m"
                {
#line 802 "prog_io_item.m"
                  parse_tree__prog_io_item__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_164_164, 0) = ((MR_Box) (parse_tree__prog_io_item__V_165_165));
#line 802 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "prog_io_item.m"
                }
#line 800 "prog_io_item.m"
                {
#line 800 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 800 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 800 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 800 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_183, 2) = ((MR_Box) (parse_tree__prog_io_item__V_164_164));
#line 800 "prog_io_item.m"
                }
#line 803 "prog_io_item.m"
                {
#line 803 "prog_io_item.m"
                  parse_tree__prog_io_item__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_171_171, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_183));
#line 803 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_171_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 803 "prog_io_item.m"
                }
#line 803 "prog_io_item.m"
                {
#line 803 "prog_io_item.m"
                  MR_Word base;
#line 803 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 803 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 803 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_171_171));
#line 803 "prog_io_item.m"
                }
#line 796 "prog_io_item.m"
              }
#line 734 "prog_io_item.m"
          }
#line 725 "prog_io_item.m"
      }
#line 717 "prog_io_item.m"
  }
#line 710 "prog_io_item.m"
}

#line 649 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0(
#line 649 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_9,
#line 649 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 649 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 649 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 649 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 649 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 649 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 649 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 649 "prog_io_item.m"
{
#line 654 "prog_io_item.m"
  {
#line 654 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 654 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTerm_17;
#line 654 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_18;
#line 654 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTerm_19;
#line 654 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithInst_20;
#line 654 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithType_22;
#line 654 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BaseTerm_23;
#line 700 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeDetism_24;
#line 700 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithInst_25;
#line 700 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithType_26;

#line 655 "prog_io_item.m"
    {
#line 655 "prog_io_item.m"
      parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__Term_12, &parse_tree__prog_io_item__BeforeDetismTerm_17, &parse_tree__prog_io_item__MaybeMaybeDetism_18);
    }
#line 657 "prog_io_item.m"
    {
#line 657 "prog_io_item.m"
      parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(parse_tree__prog_io_item__BeforeDetismTerm_17, &parse_tree__prog_io_item__BeforeWithInstTerm_19, &parse_tree__prog_io_item__MaybeWithInst_20);
    }
#line 659 "prog_io_item.m"
    {
#line 659 "prog_io_item.m"
      parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BeforeWithInstTerm_19, &parse_tree__prog_io_item__BaseTerm_23, &parse_tree__prog_io_item__MaybeWithType_22);
    }
#line 663 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_18)) == (MR_mktag((MR_Integer) 1)));
#line 663 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 663 "prog_io_item.m"
      {
#line 663 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeDetism_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_18, (MR_Integer) 0)));
#line 664 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_20)) == (MR_mktag((MR_Integer) 1)));
#line 664 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 664 "prog_io_item.m"
          {
#line 664 "prog_io_item.m"
            parse_tree__prog_io_item__WithInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_20, (MR_Integer) 0)));
#line 665 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithType_22)) == (MR_mktag((MR_Integer) 1)));
#line 665 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 665 "prog_io_item.m"
              parse_tree__prog_io_item__WithType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithType_22, (MR_Integer) 0)));
#line 664 "prog_io_item.m"
          }
#line 663 "prog_io_item.m"
      }
#line 700 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 676 "prog_io_item.m"
      {
#line 668 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_27_27;
#line 669 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_28_28;

#line 668 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_24)) == (MR_mktag((MR_Integer) 1)));
#line 668 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 668 "prog_io_item.m"
          {
#line 668 "prog_io_item.m"
            parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_24, (MR_Integer) 0)));
#line 669 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_25)) == (MR_mktag((MR_Integer) 1)));
#line 669 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 669 "prog_io_item.m"
              parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_25, (MR_Integer) 0)));
#line 668 "prog_io_item.m"
          }
#line 676 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 672 "prog_io_item.m"
          {
#line 672 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_30;
#line 672 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_46_46;
#line 672 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_47_47;
#line 672 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_48_48;
#line 672 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_53_53;

#line 674 "prog_io_item.m"
            {
#line 674 "prog_io_item.m"
              parse_tree__prog_io_item__V_48_48 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_23);
            }
#line 674 "prog_io_item.m"
            {
#line 674 "prog_io_item.m"
              parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 674 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__V_48_48));
#line 674 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[122])));
#line 674 "prog_io_item.m"
            }
#line 674 "prog_io_item.m"
            {
#line 674 "prog_io_item.m"
              parse_tree__prog_io_item__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 674 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "prog_io_item.m"
            }
#line 673 "prog_io_item.m"
            {
#line 673 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 673 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 673 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 2) = ((MR_Box) (parse_tree__prog_io_item__V_46_46));
#line 673 "prog_io_item.m"
            }
#line 675 "prog_io_item.m"
            {
#line 675 "prog_io_item.m"
              parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_30));
#line 675 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "prog_io_item.m"
            }
#line 675 "prog_io_item.m"
            {
#line 675 "prog_io_item.m"
              MR_Word base;
#line 675 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 675 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 675 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 675 "prog_io_item.m"
            }
#line 672 "prog_io_item.m"
          }
#line 676 "prog_io_item.m"
        else
#line 685 "prog_io_item.m"
          {
#line 677 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_31_31;

#line 677 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_25)) == (MR_mktag((MR_Integer) 1)));
#line 677 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 677 "prog_io_item.m"
              {
#line 677 "prog_io_item.m"
                parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_25, (MR_Integer) 0)));
#line 678 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "prog_io_item.m"
              }
#line 685 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 681 "prog_io_item.m"
              {
#line 681 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_77_77;
#line 681 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_78_78;
#line 681 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_79_79;
#line 681 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_84_84;
#line 681 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_91;

#line 683 "prog_io_item.m"
                {
#line 683 "prog_io_item.m"
                  parse_tree__prog_io_item__V_79_79 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_23);
                }
#line 683 "prog_io_item.m"
                {
#line 683 "prog_io_item.m"
                  parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 683 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 683 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[123])));
#line 683 "prog_io_item.m"
                }
#line 683 "prog_io_item.m"
                {
#line 683 "prog_io_item.m"
                  parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 683 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "prog_io_item.m"
                }
#line 682 "prog_io_item.m"
                {
#line 682 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 682 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 682 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 2) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 682 "prog_io_item.m"
                }
#line 684 "prog_io_item.m"
                {
#line 684 "prog_io_item.m"
                  parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_91));
#line 684 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "prog_io_item.m"
                }
#line 684 "prog_io_item.m"
                {
#line 684 "prog_io_item.m"
                  MR_Word base;
#line 684 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 684 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 684 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 684 "prog_io_item.m"
                }
#line 681 "prog_io_item.m"
              }
#line 685 "prog_io_item.m"
            else
#line 694 "prog_io_item.m"
              {
#line 689 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__PredOrFunc_9 == (MR_Integer) 1);
#line 689 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 690 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 694 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 692 "prog_io_item.m"
                  {
#line 692 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_func_decl_base_8_p_0(parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BaseTerm_23, parse_tree__prog_io_item__MaybeDetism_24, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 692 "prog_io_item.m"
                    return;
                  }
#line 694 "prog_io_item.m"
                else
#line 695 "prog_io_item.m"
                  {
#line 695 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(parse_tree__prog_io_item__PredOrFunc_9, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BaseTerm_23, parse_tree__prog_io_item__WithType_26, parse_tree__prog_io_item__WithInst_25, parse_tree__prog_io_item__MaybeDetism_24, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 695 "prog_io_item.m"
                    return;
                  }
#line 694 "prog_io_item.m"
              }
#line 685 "prog_io_item.m"
          }
#line 676 "prog_io_item.m"
      }
#line 700 "prog_io_item.m"
    else
#line 703 "prog_io_item.m"
      {
#line 703 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 703 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_32;
#line 703 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_86_86;
#line 703 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_87_87;
#line 703 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_88_88;
#line 703 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_89_89;

#line 701 "prog_io_item.m"
        {
#line 701 "prog_io_item.m"
          parse_tree__prog_io_item__V_86_86 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_18);
        }
#line 702 "prog_io_item.m"
        {
#line 702 "prog_io_item.m"
          parse_tree__prog_io_item__V_88_88 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_20);
        }
#line 703 "prog_io_item.m"
        {
#line 703 "prog_io_item.m"
          parse_tree__prog_io_item__V_89_89 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[4], parse_tree__prog_io_item__MaybeWithType_22);
        }
#line 703 "prog_io_item.m"
        {
#line 703 "prog_io_item.m"
          parse_tree__prog_io_item__V_87_87 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_96_96, parse_tree__prog_io_item__V_88_88, parse_tree__prog_io_item__V_89_89);
        }
#line 702 "prog_io_item.m"
        {
#line 702 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_32 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_96_96, parse_tree__prog_io_item__V_86_86, parse_tree__prog_io_item__V_87_87);
        }
#line 704 "prog_io_item.m"
        {
#line 704 "prog_io_item.m"
          MR_Word base;
#line 704 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 704 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 704 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_32));
#line 704 "prog_io_item.m"
        }
#line 703 "prog_io_item.m"
      }
#line 654 "prog_io_item.m"
  }
#line 649 "prog_io_item.m"
}

#line 430 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0(
#line 430 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 430 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 430 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_11,
#line 430 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_12,
#line 430 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 430 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 430 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 430 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 430 "prog_io_item.m"
{
#line 437 "prog_io_item.m"
  {
#line 437 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 437 "prog_io_item.m"
    {
#line 437 "prog_io_item.m"
      MR_Integer parse_tree__prog_io_item__case_num_0 = (MR_Integer) -1;

#line 437 "prog_io_item.m"
#line 437 "prog_io_item.m"
      switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 0)) {
#line 437 "prog_io_item.m"
        case (MR_Integer) 101:
#line 437 "prog_io_item.m"
          if (MR_offset_streq(1, parse_tree__prog_io_item__Functor_11, (MR_String) "external"))
#line 437 "prog_io_item.m"
            parse_tree__prog_io_item__case_num_0 = (MR_Integer) 0;
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 102:
#line 437 "prog_io_item.m"
#line 437 "prog_io_item.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) {
#line 437 "prog_io_item.m"
            case (MR_Integer) 105:
#line 437 "prog_io_item.m"
              if (((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 5)) == (MR_Integer) 105))))
#line 437 "prog_io_item.m"
#line 437 "prog_io_item.m"
                switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 6)) {
#line 437 "prog_io_item.m"
                  case (MR_Integer) 115:
#line 437 "prog_io_item.m"
                    if (MR_offset_streq(7, parse_tree__prog_io_item__Functor_11, (MR_String) "finalise"))
#line 437 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 1;
#line 437 "prog_io_item.m"
                    break;
#line 437 "prog_io_item.m"
                  case (MR_Integer) 122:
#line 437 "prog_io_item.m"
                    if (MR_offset_streq(7, parse_tree__prog_io_item__Functor_11, (MR_String) "finalize"))
#line 437 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 1;
#line 437 "prog_io_item.m"
                    break;
#line 437 "prog_io_item.m"
                }
#line 437 "prog_io_item.m"
              break;
#line 437 "prog_io_item.m"
            case (MR_Integer) 117:
#line 437 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_11, (MR_String) "func"))
#line 437 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 2;
#line 437 "prog_io_item.m"
              break;
#line 437 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 105:
#line 437 "prog_io_item.m"
          if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) == (MR_Integer) 110))
#line 437 "prog_io_item.m"
#line 437 "prog_io_item.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) {
#line 437 "prog_io_item.m"
              case (MR_Integer) 105:
#line 437 "prog_io_item.m"
                if (((((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 116)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 6)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 7)) == (MR_Integer) 105))))
#line 437 "prog_io_item.m"
#line 437 "prog_io_item.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 8)) {
#line 437 "prog_io_item.m"
                    case (MR_Integer) 115:
#line 437 "prog_io_item.m"
                      if (MR_offset_streq(9, parse_tree__prog_io_item__Functor_11, (MR_String) "initialise"))
#line 437 "prog_io_item.m"
                        parse_tree__prog_io_item__case_num_0 = (MR_Integer) 3;
#line 437 "prog_io_item.m"
                      break;
#line 437 "prog_io_item.m"
                    case (MR_Integer) 122:
#line 437 "prog_io_item.m"
                      if (MR_offset_streq(9, parse_tree__prog_io_item__Functor_11, (MR_String) "initialize"))
#line 437 "prog_io_item.m"
                        parse_tree__prog_io_item__case_num_0 = (MR_Integer) 3;
#line 437 "prog_io_item.m"
                      break;
#line 437 "prog_io_item.m"
                  }
#line 437 "prog_io_item.m"
                break;
#line 437 "prog_io_item.m"
              case (MR_Integer) 115:
#line 437 "prog_io_item.m"
                if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 116))
#line 437 "prog_io_item.m"
#line 437 "prog_io_item.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) {
#line 437 "prog_io_item.m"
                    case (MR_Integer) 0:
#line 437 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 4;
#line 437 "prog_io_item.m"
                      break;
#line 437 "prog_io_item.m"
                    case (MR_Integer) 97:
#line 437 "prog_io_item.m"
                      if (MR_offset_streq(5, parse_tree__prog_io_item__Functor_11, (MR_String) "instance"))
#line 437 "prog_io_item.m"
                        parse_tree__prog_io_item__case_num_0 = (MR_Integer) 5;
#line 437 "prog_io_item.m"
                      break;
#line 437 "prog_io_item.m"
                  }
#line 437 "prog_io_item.m"
                break;
#line 437 "prog_io_item.m"
            }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 109:
#line 437 "prog_io_item.m"
#line 437 "prog_io_item.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) {
#line 437 "prog_io_item.m"
            case (MR_Integer) 111:
#line 437 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_11, (MR_String) "mode"))
#line 437 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 6;
#line 437 "prog_io_item.m"
              break;
#line 437 "prog_io_item.m"
            case (MR_Integer) 117:
#line 437 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_11, (MR_String) "mutable"))
#line 437 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 7;
#line 437 "prog_io_item.m"
              break;
#line 437 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 112:
#line 437 "prog_io_item.m"
          if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) == (MR_Integer) 114))
#line 437 "prog_io_item.m"
#line 437 "prog_io_item.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) {
#line 437 "prog_io_item.m"
              case (MR_Integer) 97:
#line 437 "prog_io_item.m"
                if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_11, (MR_String) "pragma"))
#line 437 "prog_io_item.m"
                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 8;
#line 437 "prog_io_item.m"
                break;
#line 437 "prog_io_item.m"
              case (MR_Integer) 101:
#line 437 "prog_io_item.m"
                if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_11, (MR_String) "pred"))
#line 437 "prog_io_item.m"
                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 9;
#line 437 "prog_io_item.m"
                break;
#line 437 "prog_io_item.m"
              case (MR_Integer) 111:
#line 437 "prog_io_item.m"
                if (((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 109)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 6)) == (MR_Integer) 101))))
#line 437 "prog_io_item.m"
#line 437 "prog_io_item.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 7)) {
#line 437 "prog_io_item.m"
                    case (MR_Integer) 0:
#line 437 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 10;
#line 437 "prog_io_item.m"
                      break;
#line 437 "prog_io_item.m"
                    case (MR_Integer) 95:
#line 437 "prog_io_item.m"
                      if (((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 8)) == (MR_Integer) 101)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 9)) == (MR_Integer) 120))))
#line 437 "prog_io_item.m"
#line 437 "prog_io_item.m"
                        switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 10)) {
#line 437 "prog_io_item.m"
                          case (MR_Integer) 99:
#line 437 "prog_io_item.m"
                            if (((((((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 11)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 12)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 13)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 15)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 16)) == (MR_Integer) 101))))
#line 437 "prog_io_item.m"
#line 437 "prog_io_item.m"
                              switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 17)) {
#line 437 "prog_io_item.m"
                                case (MR_Integer) 0:
#line 437 "prog_io_item.m"
                                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 11;
#line 437 "prog_io_item.m"
                                  break;
#line 437 "prog_io_item.m"
                                case (MR_Integer) 95:
#line 437 "prog_io_item.m"
                                  if (MR_offset_streq(18, parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exclusive_exhaustive"))
#line 437 "prog_io_item.m"
                                    parse_tree__prog_io_item__case_num_0 = (MR_Integer) 12;
#line 437 "prog_io_item.m"
                                  break;
#line 437 "prog_io_item.m"
                              }
#line 437 "prog_io_item.m"
                            break;
#line 437 "prog_io_item.m"
                          case (MR_Integer) 104:
#line 437 "prog_io_item.m"
                            if (MR_offset_streq(11, parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exhaustive"))
#line 437 "prog_io_item.m"
                              parse_tree__prog_io_item__case_num_0 = (MR_Integer) 13;
#line 437 "prog_io_item.m"
                            break;
#line 437 "prog_io_item.m"
                        }
#line 437 "prog_io_item.m"
                      break;
#line 437 "prog_io_item.m"
                  }
#line 437 "prog_io_item.m"
                break;
#line 437 "prog_io_item.m"
            }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 116:
#line 437 "prog_io_item.m"
          if (((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) == (MR_Integer) 121)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 101))))
#line 437 "prog_io_item.m"
#line 437 "prog_io_item.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) {
#line 437 "prog_io_item.m"
              case (MR_Integer) 0:
#line 437 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 14;
#line 437 "prog_io_item.m"
                break;
#line 437 "prog_io_item.m"
              case (MR_Integer) 99:
#line 437 "prog_io_item.m"
                if (MR_offset_streq(5, parse_tree__prog_io_item__Functor_11, (MR_String) "typeclass"))
#line 437 "prog_io_item.m"
                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 15;
#line 437 "prog_io_item.m"
                break;
#line 437 "prog_io_item.m"
            }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 118:
#line 437 "prog_io_item.m"
          if (MR_offset_streq(1, parse_tree__prog_io_item__Functor_11, (MR_String) "version_numbers"))
#line 437 "prog_io_item.m"
            parse_tree__prog_io_item__case_num_0 = (MR_Integer) 16;
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
      }
#line 437 "prog_io_item.m"
#line 437 "prog_io_item.m"
      switch (parse_tree__prog_io_item__case_num_0) {
#line 437 "prog_io_item.m"
        default:
#line 437 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 0:
#line 471 "prog_io_item.m"
          {
#line 471 "prog_io_item.m"
            /* case "external" */
#line 471 "prog_io_item.m"
            {
#line 471 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_108_108;
#line 471 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__PredSpecTerm_26;
#line 471 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeBackEnd_27;
#line 471 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeSymSpec_32;
#line 471 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_90;
#line 471 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_129_129;
#line 471 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_130_130;

#line 473 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 473 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 473 "prog_io_item.m"
                {
#line 473 "prog_io_item.m"
                  parse_tree__prog_io_item__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 473 "prog_io_item.m"
                  parse_tree__prog_io_item__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 475 "prog_io_item.m"
                  if ((parse_tree__prog_io_item__V_129_129 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 473 "prog_io_item.m"
                    {
#line 473 "prog_io_item.m"
                      parse_tree__prog_io_item__PredSpecTerm_26 = parse_tree__prog_io_item__V_130_130;
#line 474 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeBackEnd_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 473 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 473 "prog_io_item.m"
                    }
#line 475 "prog_io_item.m"
                  else
#line 476 "prog_io_item.m"
                    {
#line 476 "prog_io_item.m"
                      MR_String parse_tree__prog_io_item__BackEndFunctor_29;
#line 476 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__BackEnd_31;
#line 476 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_56_56;
#line 476 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_57_57;
#line 476 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_58_58;
#line 477 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_30_30;

#line 476 "prog_io_item.m"
                      parse_tree__prog_io_item__PredSpecTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_129_129, (MR_Integer) 0)));
#line 476 "prog_io_item.m"
                      parse_tree__prog_io_item__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_129_129, (MR_Integer) 1)));
#line 476 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 476 "prog_io_item.m"
                        {
#line 477 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_130_130)) == (MR_mktag((MR_Integer) 0)));
#line 477 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 477 "prog_io_item.m"
                            {
#line 477 "prog_io_item.m"
                              parse_tree__prog_io_item__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_130_130, (MR_Integer) 0)));
#line 477 "prog_io_item.m"
                              parse_tree__prog_io_item__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_130_130, (MR_Integer) 1)));
#line 477 "prog_io_item.m"
                              parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_130_130, (MR_Integer) 2)));
#line 477 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 476 "prog_io_item.m"
                                {
#line 477 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_57_57)) == (MR_mktag((MR_Integer) 0)));
#line 477 "prog_io_item.m"
                                  if (parse_tree__prog_io_item__succeeded)
#line 477 "prog_io_item.m"
                                    {
#line 477 "prog_io_item.m"
                                      parse_tree__prog_io_item__BackEndFunctor_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, (MR_Integer) 0)));
#line 481 "prog_io_item.m"
                                      if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_29, (MR_String) "low_level_backend") == 0))
#line 482 "prog_io_item.m"
                                        {
#line 482 "prog_io_item.m"
                                          parse_tree__prog_io_item__BackEnd_31 = (MR_Integer) 1;
#line 482 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 482 "prog_io_item.m"
                                        }
#line 481 "prog_io_item.m"
                                      else
#line 481 "prog_io_item.m"
                                      if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_29, (MR_String) "high_level_backend") == 0))
#line 479 "prog_io_item.m"
                                        {
#line 479 "prog_io_item.m"
                                          parse_tree__prog_io_item__BackEnd_31 = (MR_Integer) 0;
#line 479 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 479 "prog_io_item.m"
                                        }
#line 481 "prog_io_item.m"
                                      else
#line 481 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 476 "prog_io_item.m"
                                      if (parse_tree__prog_io_item__succeeded)
#line 476 "prog_io_item.m"
                                        {
#line 485 "prog_io_item.m"
                                          {
#line 485 "prog_io_item.m"
                                            parse_tree__prog_io_item__MaybeBackEnd_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 485 "prog_io_item.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeBackEnd_27, 0) = ((MR_Box) (parse_tree__prog_io_item__BackEnd_31));
#line 485 "prog_io_item.m"
                                          }
#line 485 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 476 "prog_io_item.m"
                                        }
#line 477 "prog_io_item.m"
                                    }
#line 476 "prog_io_item.m"
                                }
#line 477 "prog_io_item.m"
                            }
#line 476 "prog_io_item.m"
                        }
#line 476 "prog_io_item.m"
                    }
#line 471 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 471 "prog_io_item.m"
                    {
#line 487 "prog_io_item.m"
                      {
#line 487 "prog_io_item.m"
                        parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__PredSpecTerm_26, &parse_tree__prog_io_item__MaybeSymSpec_32);
                      }
#line 492 "prog_io_item.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeSymSpec_32)) == (MR_mktag((MR_Integer) 0))))
#line 491 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeItem0_90 = (MR_Word) parse_tree__prog_io_item__MaybeSymSpec_32;
#line 492 "prog_io_item.m"
                      else
#line 493 "prog_io_item.m"
                        {
#line 493 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__SymSpec_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeSymSpec_32, (MR_Integer) 0)));

#line 502 "prog_io_item.m"
                          if (((MR_tag((MR_Word) parse_tree__prog_io_item__SymSpec_34)) == (MR_mktag((MR_Integer) 0))))
#line 495 "prog_io_item.m"
                            {
#line 495 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Msg_37;
#line 495 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Spec_38;
#line 495 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__V_77_77;
#line 495 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__V_79_79;

#line 498 "prog_io_item.m"
                              {
#line 498 "prog_io_item.m"
                                parse_tree__prog_io_item__Msg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 498 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Msg_37, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 498 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Msg_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[121])));
#line 498 "prog_io_item.m"
                              }
#line 500 "prog_io_item.m"
                              {
#line 500 "prog_io_item.m"
                                parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__Msg_37));
#line 500 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 500 "prog_io_item.m"
                              }
#line 499 "prog_io_item.m"
                              {
#line 499 "prog_io_item.m"
                                parse_tree__prog_io_item__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 499 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 499 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 499 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 499 "prog_io_item.m"
                              }
#line 501 "prog_io_item.m"
                              {
#line 501 "prog_io_item.m"
                                parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_38));
#line 501 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "prog_io_item.m"
                              }
#line 501 "prog_io_item.m"
                              {
#line 501 "prog_io_item.m"
                                parse_tree__prog_io_item__MaybeItem0_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 501 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeItem0_90, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 501 "prog_io_item.m"
                              }
#line 495 "prog_io_item.m"
                            }
#line 502 "prog_io_item.m"
                          else
#line 503 "prog_io_item.m"
                            {
#line 503 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Name_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__SymSpec_34, (MR_Integer) 0)));
#line 503 "prog_io_item.m"
                              MR_Integer parse_tree__prog_io_item__Arity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__SymSpec_34, (MR_Integer) 1)));
#line 503 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__ExternalInfo_42;
#line 503 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Pragma_43;
#line 503 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__ItemPragma_44;
#line 503 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Item_45;

#line 505 "prog_io_item.m"
                              {
#line 505 "prog_io_item.m"
                                parse_tree__prog_io_item__ExternalInfo_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 505 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_39));
#line 505 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_42, 1) = ((MR_Box) (parse_tree__prog_io_item__Arity_40));
#line 505 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_42, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_42, 3) = ((MR_Box) (parse_tree__prog_io_item__MaybeBackEnd_27));
#line 505 "prog_io_item.m"
                              }
#line 507 "prog_io_item.m"
                              {
#line 507 "prog_io_item.m"
                                parse_tree__prog_io_item__Pragma_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "prog_io_item.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Pragma_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 507 "prog_io_item.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Pragma_43, 1) = ((MR_Box) (parse_tree__prog_io_item__ExternalInfo_42));
#line 507 "prog_io_item.m"
                              }
#line 508 "prog_io_item.m"
                              {
#line 508 "prog_io_item.m"
                                parse_tree__prog_io_item__ItemPragma_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 508 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_44, 0) = ((MR_Box) (parse_tree__prog_io_item__Pragma_43));
#line 508 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 508 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_44, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 508 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_44, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 508 "prog_io_item.m"
                              }
#line 510 "prog_io_item.m"
                              {
#line 510 "prog_io_item.m"
                                parse_tree__prog_io_item__Item_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "prog_io_item.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 510 "prog_io_item.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_45, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPragma_44));
#line 510 "prog_io_item.m"
                              }
#line 511 "prog_io_item.m"
                              {
#line 511 "prog_io_item.m"
                                parse_tree__prog_io_item__MaybeItem0_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 511 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_90, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_45));
#line 511 "prog_io_item.m"
                              }
#line 503 "prog_io_item.m"
                            }
#line 493 "prog_io_item.m"
                        }
#line 12221 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_108_108 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 514 "prog_io_item.m"
                      {
#line 514 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_108_108, parse_tree__prog_io_item__MaybeItem0_90, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 514 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 471 "prog_io_item.m"
                    }
#line 473 "prog_io_item.m"
                }
#line 471 "prog_io_item.m"
            }
#line 471 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 1:
#line 572 "prog_io_item.m"
          {
#line 572 "prog_io_item.m"
            /* case "finalise", "finalize" */
#line 572 "prog_io_item.m"
            {
#line 572 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_114_114;
#line 572 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_51_51;
#line 572 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_103;
#line 572 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__SubTerm_104;

#line 573 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 573 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 573 "prog_io_item.m"
                {
#line 573 "prog_io_item.m"
                  parse_tree__prog_io_item__SubTerm_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 573 "prog_io_item.m"
                  parse_tree__prog_io_item__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 573 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 572 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 572 "prog_io_item.m"
                    {
#line 574 "prog_io_item.m"
                      {
#line 574 "prog_io_item.m"
                        parse_tree__prog_io_mutable__parse_finalise_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_104, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_103);
                      }
#line 12278 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 576 "prog_io_item.m"
                      {
#line 576 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_114_114, parse_tree__prog_io_item__MaybeItem0_103, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 576 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 572 "prog_io_item.m"
                    }
#line 573 "prog_io_item.m"
                }
#line 572 "prog_io_item.m"
            }
#line 572 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 2:
#line 466 "prog_io_item.m"
          {
#line 466 "prog_io_item.m"
            /* case "func" */
#line 466 "prog_io_item.m"
            {
#line 466 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__DeclTerm_25;
#line 466 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_81_81;

#line 467 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 467 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 467 "prog_io_item.m"
                {
#line 467 "prog_io_item.m"
                  parse_tree__prog_io_item__DeclTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 467 "prog_io_item.m"
                  parse_tree__prog_io_item__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 467 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 466 "prog_io_item.m"
                    {
#line 468 "prog_io_item.m"
                      {
#line 468 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0((MR_Integer) 1, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__DeclTerm_25, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 468 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 466 "prog_io_item.m"
                    }
#line 467 "prog_io_item.m"
                }
#line 466 "prog_io_item.m"
            }
#line 466 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 3:
#line 564 "prog_io_item.m"
          {
#line 564 "prog_io_item.m"
            /* case "initialise", "initialize" */
#line 564 "prog_io_item.m"
            {
#line 564 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_113_113;
#line 564 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_52_52;
#line 564 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_101;
#line 564 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__SubTerm_102;

#line 565 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 565 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 565 "prog_io_item.m"
                {
#line 565 "prog_io_item.m"
                  parse_tree__prog_io_item__SubTerm_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 565 "prog_io_item.m"
                  parse_tree__prog_io_item__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 565 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 564 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 564 "prog_io_item.m"
                    {
#line 566 "prog_io_item.m"
                      {
#line 566 "prog_io_item.m"
                        parse_tree__prog_io_mutable__parse_initialise_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_102, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_101);
                      }
#line 12381 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 568 "prog_io_item.m"
                      {
#line 568 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_113_113, parse_tree__prog_io_item__MaybeItem0_101, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 568 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 564 "prog_io_item.m"
                    }
#line 565 "prog_io_item.m"
                }
#line 564 "prog_io_item.m"
            }
#line 564 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 4:
#line 442 "prog_io_item.m"
          {
#line 442 "prog_io_item.m"
            /* case "inst" */
#line 442 "prog_io_item.m"
            {
#line 442 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_107_107;
#line 442 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__InstDeclTerm_18;
#line 442 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_19;
#line 442 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_88_88;

#line 443 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 443 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 443 "prog_io_item.m"
                {
#line 443 "prog_io_item.m"
                  parse_tree__prog_io_item__InstDeclTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 443 "prog_io_item.m"
                  parse_tree__prog_io_item__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 443 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 442 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 442 "prog_io_item.m"
                    {
#line 444 "prog_io_item.m"
                      {
#line 444 "prog_io_item.m"
                        parse_tree__prog_io_mode_defn__parse_inst_defn_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__InstDeclTerm_18, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_19);
                      }
#line 12438 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 446 "prog_io_item.m"
                      {
#line 446 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_107_107, parse_tree__prog_io_item__MaybeItem0_19, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 446 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 442 "prog_io_item.m"
                    }
#line 443 "prog_io_item.m"
                }
#line 442 "prog_io_item.m"
            }
#line 442 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 5:
#line 550 "prog_io_item.m"
          {
#line 550 "prog_io_item.m"
            /* case "instance" */
#line 550 "prog_io_item.m"
            {
#line 550 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_112_112;
#line 550 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItemInstance_49;
#line 550 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_99;

#line 551 "prog_io_item.m"
              {
#line 551 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_typeclass__parse_instance_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItemInstance_49);
              }
#line 550 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 550 "prog_io_item.m"
                {
#line 556 "prog_io_item.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItemInstance_49)) == (MR_mktag((MR_Integer) 0))))
#line 558 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeItem0_99 = (MR_Word) parse_tree__prog_io_item__MaybeItemInstance_49;
#line 556 "prog_io_item.m"
                  else
#line 554 "prog_io_item.m"
                    {
#line 554 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__ItemInstance_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItemInstance_49, (MR_Integer) 0)));
#line 554 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_53_53;

#line 555 "prog_io_item.m"
                      {
#line 555 "prog_io_item.m"
                        parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 555 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemInstance_50));
#line 555 "prog_io_item.m"
                      }
#line 555 "prog_io_item.m"
                      {
#line 555 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeItem0_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 555 "prog_io_item.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_99, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 555 "prog_io_item.m"
                      }
#line 554 "prog_io_item.m"
                    }
#line 12514 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 560 "prog_io_item.m"
                  {
#line 560 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_112_112, parse_tree__prog_io_item__MaybeItem0_99, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 560 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 550 "prog_io_item.m"
                }
#line 550 "prog_io_item.m"
            }
#line 550 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 6:
#line 448 "prog_io_item.m"
          {
#line 448 "prog_io_item.m"
            /* case "mode" */
#line 448 "prog_io_item.m"
            {
#line 448 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__SubTerm_20;
#line 448 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_82_82;
#line 454 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__HeadTerm_21;
#line 454 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__BodyTerm_22;
#line 450 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_83_83;
#line 450 "prog_io_item.m"
              MR_String parse_tree__prog_io_item__V_84_84;
#line 450 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_85_85;
#line 450 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_86_86;
#line 450 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_87_87;
#line 450 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_23_23;

#line 449 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 449 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 449 "prog_io_item.m"
                {
#line 449 "prog_io_item.m"
                  parse_tree__prog_io_item__SubTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 449 "prog_io_item.m"
                  parse_tree__prog_io_item__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 449 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 448 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 448 "prog_io_item.m"
                    {
#line 450 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__SubTerm_20)) == (MR_mktag((MR_Integer) 0)));
#line 450 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 450 "prog_io_item.m"
                        {
#line 450 "prog_io_item.m"
                          parse_tree__prog_io_item__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 0)));
#line 450 "prog_io_item.m"
                          parse_tree__prog_io_item__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 1)));
#line 450 "prog_io_item.m"
                          parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 2)));
#line 450 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_83_83)) == (MR_mktag((MR_Integer) 0)));
#line 450 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 450 "prog_io_item.m"
                            {
#line 450 "prog_io_item.m"
                              parse_tree__prog_io_item__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_83_83, (MR_Integer) 0)));
#line 450 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_84_84, (MR_String) "==") == 0);
#line 450 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 450 "prog_io_item.m"
                                {
#line 450 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 450 "prog_io_item.m"
                                  if (parse_tree__prog_io_item__succeeded)
#line 450 "prog_io_item.m"
                                    {
#line 450 "prog_io_item.m"
                                      parse_tree__prog_io_item__HeadTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, (MR_Integer) 0)));
#line 450 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, (MR_Integer) 1)));
#line 450 "prog_io_item.m"
                                      parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_86_86)) == (MR_mktag((MR_Integer) 1)));
#line 450 "prog_io_item.m"
                                      if (parse_tree__prog_io_item__succeeded)
#line 450 "prog_io_item.m"
                                        {
#line 450 "prog_io_item.m"
                                          parse_tree__prog_io_item__BodyTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_86_86, (MR_Integer) 0)));
#line 450 "prog_io_item.m"
                                          parse_tree__prog_io_item__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_86_86, (MR_Integer) 1)));
#line 450 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 450 "prog_io_item.m"
                                        }
#line 450 "prog_io_item.m"
                                    }
#line 450 "prog_io_item.m"
                                }
#line 450 "prog_io_item.m"
                            }
#line 450 "prog_io_item.m"
                        }
#line 454 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 452 "prog_io_item.m"
                        {
#line 452 "prog_io_item.m"
                          parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__HeadTerm_21, parse_tree__prog_io_item__BodyTerm_22, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                        }
#line 454 "prog_io_item.m"
                      else
#line 456 "prog_io_item.m"
                        {
#line 456 "prog_io_item.m"
                          parse_tree__prog_io_item__parse_mode_decl_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_20, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                        }
#line 454 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 448 "prog_io_item.m"
                    }
#line 449 "prog_io_item.m"
                }
#line 448 "prog_io_item.m"
            }
#line 448 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 7:
#line 578 "prog_io_item.m"
          {
#line 578 "prog_io_item.m"
            /* case "mutable" */
#line 578 "prog_io_item.m"
            {
#line 578 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_115_115;
#line 578 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_105;

#line 579 "prog_io_item.m"
              {
#line 579 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_mutable__parse_mutable_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_105);
              }
#line 578 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 578 "prog_io_item.m"
                {
#line 12682 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_115_115 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 581 "prog_io_item.m"
                  {
#line 581 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_115_115, parse_tree__prog_io_item__MaybeItem0_105, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 581 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 578 "prog_io_item.m"
                }
#line 578 "prog_io_item.m"
            }
#line 578 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 8:
#line 516 "prog_io_item.m"
          {
#line 516 "prog_io_item.m"
            /* case "pragma" */
#line 516 "prog_io_item.m"
            {
#line 516 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_109_109;
#line 516 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_91;

#line 517 "prog_io_item.m"
              {
#line 517 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_pragma__parse_pragma_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_91);
              }
#line 516 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 516 "prog_io_item.m"
                {
#line 12721 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_109_109 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 519 "prog_io_item.m"
                  {
#line 519 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_109_109, parse_tree__prog_io_item__MaybeItem0_91, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 519 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 516 "prog_io_item.m"
                }
#line 516 "prog_io_item.m"
            }
#line 516 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 9:
#line 466 "prog_io_item.m"
          {
#line 466 "prog_io_item.m"
            /* case "pred" */
#line 466 "prog_io_item.m"
            {
#line 466 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__DeclTerm_118;
#line 466 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_119_119;

#line 467 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 467 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 467 "prog_io_item.m"
                {
#line 467 "prog_io_item.m"
                  parse_tree__prog_io_item__DeclTerm_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 467 "prog_io_item.m"
                  parse_tree__prog_io_item__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 467 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_119_119 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 466 "prog_io_item.m"
                    {
#line 468 "prog_io_item.m"
                      {
#line 468 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0((MR_Integer) 0, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__DeclTerm_118, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 468 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 466 "prog_io_item.m"
                    }
#line 467 "prog_io_item.m"
                }
#line 466 "prog_io_item.m"
            }
#line 466 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 10:
#line 533 "prog_io_item.m"
          {
#line 533 "prog_io_item.m"
            /* case "promise" */
#line 533 "prog_io_item.m"
            {
#line 533 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_110_110;
#line 533 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_92;

#line 534 "prog_io_item.m"
              {
#line 534 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 3, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_92);
              }
#line 533 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 533 "prog_io_item.m"
                {
#line 12806 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 536 "prog_io_item.m"
                  {
#line 536 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_110_110, parse_tree__prog_io_item__MaybeItem0_92, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 536 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 533 "prog_io_item.m"
                }
#line 533 "prog_io_item.m"
            }
#line 533 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 11:
#line 533 "prog_io_item.m"
          {
#line 533 "prog_io_item.m"
            /* case "promise_exclusive" */
#line 533 "prog_io_item.m"
            {
#line 533 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_110_122;
#line 533 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_121;

#line 534 "prog_io_item.m"
              {
#line 534 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_121);
              }
#line 533 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 533 "prog_io_item.m"
                {
#line 12845 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_110_122 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 536 "prog_io_item.m"
                  {
#line 536 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_110_122, parse_tree__prog_io_item__MaybeItem0_121, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 536 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 533 "prog_io_item.m"
                }
#line 533 "prog_io_item.m"
            }
#line 533 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 12:
#line 533 "prog_io_item.m"
          {
#line 533 "prog_io_item.m"
            /* case "promise_exclusive_exhaustive" */
#line 533 "prog_io_item.m"
            {
#line 533 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_110_125;
#line 533 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_124;

#line 534 "prog_io_item.m"
              {
#line 534 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 2, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_124);
              }
#line 533 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 533 "prog_io_item.m"
                {
#line 12884 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_110_125 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 536 "prog_io_item.m"
                  {
#line 536 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_110_125, parse_tree__prog_io_item__MaybeItem0_124, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 536 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 533 "prog_io_item.m"
                }
#line 533 "prog_io_item.m"
            }
#line 533 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 13:
#line 533 "prog_io_item.m"
          {
#line 533 "prog_io_item.m"
            /* case "promise_exhaustive" */
#line 533 "prog_io_item.m"
            {
#line 533 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_110_128;
#line 533 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_127;

#line 534 "prog_io_item.m"
              {
#line 534 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_127);
              }
#line 533 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 533 "prog_io_item.m"
                {
#line 12923 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_110_128 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 536 "prog_io_item.m"
                  {
#line 536 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_110_128, parse_tree__prog_io_item__MaybeItem0_127, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 536 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 533 "prog_io_item.m"
                }
#line 533 "prog_io_item.m"
            }
#line 533 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 14:
#line 437 "prog_io_item.m"
          {
#line 437 "prog_io_item.m"
            /* case "type" */
#line 437 "prog_io_item.m"
            {
#line 437 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeDefnTerm_17;
#line 437 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_89_89;

#line 438 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 438 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 438 "prog_io_item.m"
                {
#line 438 "prog_io_item.m"
                  parse_tree__prog_io_item__TypeDefnTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 438 "prog_io_item.m"
                  parse_tree__prog_io_item__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 438 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 437 "prog_io_item.m"
                    {
#line 439 "prog_io_item.m"
                      {
#line 439 "prog_io_item.m"
                        parse_tree__prog_io_type_defn__parse_type_defn_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__TypeDefnTerm_17, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 439 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 437 "prog_io_item.m"
                    }
#line 438 "prog_io_item.m"
                }
#line 437 "prog_io_item.m"
            }
#line 437 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 15:
#line 538 "prog_io_item.m"
          {
#line 538 "prog_io_item.m"
            /* case "typeclass" */
#line 538 "prog_io_item.m"
            {
#line 538 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_111_111;
#line 538 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItemTypeClass_47;
#line 538 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_95;

#line 539 "prog_io_item.m"
              {
#line 539 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_typeclass__parse_typeclass_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItemTypeClass_47);
              }
#line 538 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 538 "prog_io_item.m"
                {
#line 544 "prog_io_item.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItemTypeClass_47)) == (MR_mktag((MR_Integer) 0))))
#line 546 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeItem0_95 = (MR_Word) parse_tree__prog_io_item__MaybeItemTypeClass_47;
#line 544 "prog_io_item.m"
                  else
#line 542 "prog_io_item.m"
                    {
#line 542 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__ItemTypeClass_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItemTypeClass_47, (MR_Integer) 0)));
#line 542 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_54_54;

#line 543 "prog_io_item.m"
                      {
#line 543 "prog_io_item.m"
                        parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 543 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemTypeClass_48));
#line 543 "prog_io_item.m"
                      }
#line 543 "prog_io_item.m"
                      {
#line 543 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeItem0_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_io_item.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_95, 0) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 543 "prog_io_item.m"
                      }
#line 542 "prog_io_item.m"
                    }
#line 13043 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_111_111 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 548 "prog_io_item.m"
                  {
#line 548 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_111_111, parse_tree__prog_io_item__MaybeItem0_95, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 548 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 538 "prog_io_item.m"
                }
#line 538 "prog_io_item.m"
            }
#line 538 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
        case (MR_Integer) 16:
#line 583 "prog_io_item.m"
          {
#line 583 "prog_io_item.m"
            /* case "version_numbers" */
#line 583 "prog_io_item.m"
            {
#line 583 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_116_116;
#line 583 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_106;

#line 584 "prog_io_item.m"
              {
#line 584 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_106);
              }
#line 583 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 583 "prog_io_item.m"
                {
#line 13082 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_116_116 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 586 "prog_io_item.m"
                  {
#line 586 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_116_116, parse_tree__prog_io_item__MaybeItem0_106, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 586 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 583 "prog_io_item.m"
                }
#line 583 "prog_io_item.m"
            }
#line 583 "prog_io_item.m"
          }
#line 437 "prog_io_item.m"
          break;
#line 437 "prog_io_item.m"
      }
#line 437 "prog_io_item.m"
    }
#line 437 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 437 "prog_io_item.m"
  }
#line 430 "prog_io_item.m"
}

#line 389 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(
#line 389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_8,
#line 389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_9,
#line 389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22,
#line 389 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 389 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_12)
#line 389 "prog_io_item.m"
{
#line 414 "prog_io_item.m"
  while (MR_TRUE)
#line 414 "prog_io_item.m"
    {
#line 414 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 414 "prog_io_item.m"
      {
#line 414 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 414 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__Functor_13;
#line 414 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Args_14;
#line 414 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_15;
#line 394 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;

#line 394 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 394 "prog_io_item.m"
          {
#line 394 "prog_io_item.m"
            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 0)));
#line 394 "prog_io_item.m"
            parse_tree__prog_io_item__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 1)));
#line 394 "prog_io_item.m"
            parse_tree__prog_io_item__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 2)));
#line 394 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 394 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 394 "prog_io_item.m"
              parse_tree__prog_io_item__Functor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_23_23, (MR_Integer) 0)));
#line 394 "prog_io_item.m"
          }
#line 414 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 401 "prog_io_item.m"
          {
#line 401 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Attribute_16;
#line 401 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__SubTerm_17;

#line 396 "prog_io_item.m"
            {
#line 396 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__parse_decl_attribute_4_p_0(parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__Args_14, &parse_tree__prog_io_item__Attribute_16, &parse_tree__prog_io_item__SubTerm_17);
            }
#line 401 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 398 "prog_io_item.m"
              {
#line 398 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24;
#line 398 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_25_25;

#line 398 "prog_io_item.m"
                {
#line 398 "prog_io_item.m"
                  parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Attribute_16));
#line 398 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 398 "prog_io_item.m"
                }
#line 398 "prog_io_item.m"
                {
#line 398 "prog_io_item.m"
                  parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24, 0) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 398 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24, 1) = ((MR_Box) (parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22));
#line 398 "prog_io_item.m"
                }
#line 399 "prog_io_item.m"
                /* direct tailcall eliminated */
#line 399 "prog_io_item.m"
                {
#line 399 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__Term__tmp_copy_9 = parse_tree__prog_io_item__SubTerm_17;
#line 399 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_22 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24;

#line 399 "prog_io_item.m"
                  parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_22;
#line 399 "prog_io_item.m"
                  parse_tree__prog_io_item__Term_9 = parse_tree__prog_io_item__Term__tmp_copy_9;
#line 399 "prog_io_item.m"
                }
#line 399 "prog_io_item.m"
                continue;
#line 398 "prog_io_item.m"
              }
#line 401 "prog_io_item.m"
            else
#line 406 "prog_io_item.m"
              {
#line 406 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeItemPrime_18;

#line 402 "prog_io_item.m"
                {
#line 402 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_attributed_decl_8_p_0(parse_tree__prog_io_item__ModuleName_7, parse_tree__prog_io_item__VarSet_8, parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__Args_14, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22, parse_tree__prog_io_item__Context_15, parse_tree__prog_io_item__SeqNum_11, &parse_tree__prog_io_item__MaybeItemPrime_18);
                }
#line 406 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 405 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_12 = parse_tree__prog_io_item__MaybeItemPrime_18;
#line 406 "prog_io_item.m"
                else
#line 407 "prog_io_item.m"
                  {
#line 407 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__TermStr_19;
#line 407 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Pieces_20;
#line 407 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_21;
#line 407 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_29_29;
#line 407 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_31_31;
#line 407 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_32_32;
#line 407 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_41_41;
#line 407 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_42_42;
#line 407 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_43_43;
#line 407 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_44_44;
#line 407 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_47_47;

#line 407 "prog_io_item.m"
                    {
#line 407 "prog_io_item.m"
                      parse_tree__prog_io_item__TermStr_19 = parse_tree__mercury_to_mercury__mercury_term_to_string_3_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__VarSet_8, (MR_Integer) 0, parse_tree__prog_io_item__Term_9);
                    }
#line 409 "prog_io_item.m"
                    {
#line 409 "prog_io_item.m"
                      parse_tree__prog_io_item__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 409 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_19));
#line 409 "prog_io_item.m"
                    }
#line 409 "prog_io_item.m"
                    {
#line 409 "prog_io_item.m"
                      parse_tree__prog_io_item__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 409 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 409 "prog_io_item.m"
                    }
#line 408 "prog_io_item.m"
                    {
#line 408 "prog_io_item.m"
                      parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 408 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_item__V_31_31));
#line 408 "prog_io_item.m"
                    }
#line 408 "prog_io_item.m"
                    {
#line 408 "prog_io_item.m"
                      parse_tree__prog_io_item__Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[120])));
#line 408 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_20, 1) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 408 "prog_io_item.m"
                    }
#line 411 "prog_io_item.m"
                    {
#line 411 "prog_io_item.m"
                      parse_tree__prog_io_item__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 411 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_20));
#line 411 "prog_io_item.m"
                    }
#line 411 "prog_io_item.m"
                    {
#line 411 "prog_io_item.m"
                      parse_tree__prog_io_item__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_item__V_44_44));
#line 411 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "prog_io_item.m"
                    }
#line 411 "prog_io_item.m"
                    {
#line 411 "prog_io_item.m"
                      parse_tree__prog_io_item__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 411 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 411 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_item__V_43_43));
#line 411 "prog_io_item.m"
                    }
#line 411 "prog_io_item.m"
                    {
#line 411 "prog_io_item.m"
                      parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 411 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "prog_io_item.m"
                    }
#line 410 "prog_io_item.m"
                    {
#line 410 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 410 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 410 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 2) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 410 "prog_io_item.m"
                    }
#line 412 "prog_io_item.m"
                    {
#line 412 "prog_io_item.m"
                      parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_21));
#line 412 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "prog_io_item.m"
                    }
#line 412 "prog_io_item.m"
                    {
#line 412 "prog_io_item.m"
                      MR_Word base;
#line 412 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 412 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 412 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 412 "prog_io_item.m"
                    }
#line 407 "prog_io_item.m"
                  }
#line 406 "prog_io_item.m"
              }
#line 401 "prog_io_item.m"
          }
#line 414 "prog_io_item.m"
        else
#line 415 "prog_io_item.m"
          {
#line 415 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_62_62;
#line 415 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_63_63;
#line 415 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_68_68;
#line 415 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Context_73;
#line 415 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_75;

#line 415 "prog_io_item.m"
            {
#line 415 "prog_io_item.m"
              parse_tree__prog_io_item__Context_73 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_9);
            }
#line 419 "prog_io_item.m"
            {
#line 419 "prog_io_item.m"
              parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 419 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_73));
#line 419 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[113])));
#line 419 "prog_io_item.m"
            }
#line 419 "prog_io_item.m"
            {
#line 419 "prog_io_item.m"
              parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 419 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 419 "prog_io_item.m"
            }
#line 418 "prog_io_item.m"
            {
#line 418 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 418 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 418 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 2) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 418 "prog_io_item.m"
            }
#line 420 "prog_io_item.m"
            {
#line 420 "prog_io_item.m"
              parse_tree__prog_io_item__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_75));
#line 420 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 420 "prog_io_item.m"
            }
#line 420 "prog_io_item.m"
            {
#line 420 "prog_io_item.m"
              MR_Word base;
#line 420 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 420 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 420 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_68_68));
#line 420 "prog_io_item.m"
            }
#line 415 "prog_io_item.m"
          }
#line 414 "prog_io_item.m"
      }
#line 414 "prog_io_item.m"
      break;
#line 414 "prog_io_item.m"
    }
#line 389 "prog_io_item.m"
}

#line 359 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_2(
#line 359 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 359 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 359 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 359 "prog_io_item.m"
{
#line 359 "prog_io_item.m"
  {
#line 359 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 359 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv1_HeadVar__2_80;

#line 359 "prog_io_item.m"
    {
#line 359 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__359__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv1_HeadVar__2_80);
    }
#line 359 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv1_HeadVar__2_80));
#line 359 "prog_io_item.m"
  }
#line 359 "prog_io_item.m"
}

#line 343 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_1(
#line 343 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 343 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 343 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 343 "prog_io_item.m"
{
#line 343 "prog_io_item.m"
  {
#line 343 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 343 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_74;

#line 343 "prog_io_item.m"
    {
#line 343 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__343__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_74);
    }
#line 343 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_74));
#line 343 "prog_io_item.m"
  }
#line 343 "prog_io_item.m"
}

#line 322 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0(
#line 322 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 322 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadTerm_9,
#line 322 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__BodyTerm0_10,
#line 322 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ProgVarSet0_11,
#line 322 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 322 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 322 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 322 "prog_io_item.m"
{
#line 326 "prog_io_item.m"
  {
#line 326 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 326 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeBodyGoal_16;
#line 326 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet_17;

#line 328 "prog_io_item.m"
    {
#line 328 "prog_io_item.m"
      parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_item__BodyTerm0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__MaybeBodyGoal_16, parse_tree__prog_io_item__ProgVarSet0_11, &parse_tree__prog_io_item__ProgVarSet_17);
    }
#line 369 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeBodyGoal_16)) == (MR_mktag((MR_Integer) 0))))
#line 371 "prog_io_item.m"
      *parse_tree__prog_io_item__MaybeItem_14 = (MR_Word) parse_tree__prog_io_item__MaybeBodyGoal_16;
#line 369 "prog_io_item.m"
    else
#line 331 "prog_io_item.m"
      {
#line 331 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_72_72 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 331 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__BodyGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeBodyGoal_16, (MR_Integer) 0)));
#line 331 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__VarSet_19;
#line 353 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncHeadTerm_23;
#line 353 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;
#line 335 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncHeadTerm0_20;
#line 335 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 335 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_34_34;
#line 335 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 335 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_37_37;
#line 334 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 335 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncResultTerm_21;

#line 332 "prog_io_item.m"
        {
#line 332 "prog_io_item.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ProgVarSet_17, &parse_tree__prog_io_item__VarSet_19);
        }
#line 334 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 334 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 334 "prog_io_item.m"
          {
#line 334 "prog_io_item.m"
            parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_9, (MR_Integer) 0)));
#line 334 "prog_io_item.m"
            parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_9, (MR_Integer) 1)));
#line 334 "prog_io_item.m"
            parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_9, (MR_Integer) 2)));
#line 334 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 334 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 334 "prog_io_item.m"
              {
#line 334 "prog_io_item.m"
                parse_tree__prog_io_item__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_33_33, (MR_Integer) 0)));
#line 334 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_34_34, (MR_String) "=") == 0);
#line 335 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 335 "prog_io_item.m"
                  {
#line 335 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 335 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 335 "prog_io_item.m"
                      {
#line 335 "prog_io_item.m"
                        parse_tree__prog_io_item__FuncHeadTerm0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 0)));
#line 335 "prog_io_item.m"
                        parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 1)));
#line 335 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 335 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 335 "prog_io_item.m"
                          {
#line 335 "prog_io_item.m"
                            parse_tree__prog_io_item__FuncResultTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 335 "prog_io_item.m"
                            parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 1)));
#line 335 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 335 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 335 "prog_io_item.m"
                              {
#line 336 "prog_io_item.m"
                                {
#line 336 "prog_io_item.m"
                                  parse_tree__prog_io_item__FuncHeadTerm_23 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__FuncHeadTerm0_20);
                                }
#line 336 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 335 "prog_io_item.m"
                              }
#line 335 "prog_io_item.m"
                          }
#line 335 "prog_io_item.m"
                      }
#line 335 "prog_io_item.m"
                  }
#line 334 "prog_io_item.m"
              }
#line 334 "prog_io_item.m"
          }
#line 353 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 338 "prog_io_item.m"
          {
#line 338 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFunctor_25;

#line 339 "prog_io_item.m"
            {
#line 339 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__FuncHeadTerm_23, parse_tree__prog_io_item__VarSet_19, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[117]), &parse_tree__prog_io_item__MaybeFunctor_25);
            }
#line 349 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctor_25)) == (MR_mktag((MR_Integer) 0))))
#line 350 "prog_io_item.m"
              {
#line 350 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctor_25, (MR_Integer) 0)));

#line 351 "prog_io_item.m"
                {
#line 351 "prog_io_item.m"
                  MR_Word base;
#line 351 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 351 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 351 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_31));
#line 351 "prog_io_item.m"
                }
#line 350 "prog_io_item.m"
              }
#line 349 "prog_io_item.m"
            else
#line 342 "prog_io_item.m"
              {
#line 342 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeInfo_77_77 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[0];
#line 342 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_25, (MR_Integer) 0)));
#line 342 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_25, (MR_Integer) 1)));
#line 342 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ProgArgTerms_28;
#line 342 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemClause_29;
#line 342 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_30;
#line 342 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_42_42;

#line 343 "prog_io_item.m"
                {
#line 343 "prog_io_item.m"
                  parse_tree__prog_io_item__V_42_42 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeInfo_77_77, parse_tree__prog_io_item__ArgTerms0_27, parse_tree__prog_io_item__V_36_36);
                }
#line 343 "prog_io_item.m"
                {
#line 343 "prog_io_item.m"
                  mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeInfo_77_77, (MR_Word) &parse_tree__prog_io_item_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[2], parse_tree__prog_io_item__V_42_42, &parse_tree__prog_io_item__ProgArgTerms_28);
                }
#line 345 "prog_io_item.m"
                {
#line 345 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemClause_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 345 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_26));
#line 345 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 1) = ((MR_Box) ((MR_Integer) 1));
#line 345 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgArgTerms_28));
#line 345 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 4) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_17));
#line 345 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 5) = ((MR_Box) (parse_tree__prog_io_item__BodyGoal_18));
#line 345 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 345 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 345 "prog_io_item.m"
                }
#line 347 "prog_io_item.m"
                parse_tree__prog_io_item__Item_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_item__ItemClause_29);
#line 348 "prog_io_item.m"
                {
#line 348 "prog_io_item.m"
                  MR_Word base;
#line 348 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 348 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 348 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_30));
#line 348 "prog_io_item.m"
                }
#line 342 "prog_io_item.m"
              }
#line 338 "prog_io_item.m"
          }
#line 353 "prog_io_item.m"
        else
#line 354 "prog_io_item.m"
          {
#line 354 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFunctor_64;

#line 355 "prog_io_item.m"
            {
#line 355 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__HeadTerm_9, parse_tree__prog_io_item__VarSet_19, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[119]), &parse_tree__prog_io_item__MaybeFunctor_64);
            }
#line 364 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctor_64)) == (MR_mktag((MR_Integer) 0))))
#line 365 "prog_io_item.m"
              {
#line 365 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 0)));

#line 366 "prog_io_item.m"
                {
#line 366 "prog_io_item.m"
                  MR_Word base;
#line 366 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 366 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 366 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_57));
#line 366 "prog_io_item.m"
                }
#line 365 "prog_io_item.m"
              }
#line 364 "prog_io_item.m"
            else
#line 358 "prog_io_item.m"
              {
#line 358 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 1)));
#line 358 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Name_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 0)));
#line 358 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ProgArgTerms_54;
#line 358 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemClause_55;
#line 358 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_56;

#line 359 "prog_io_item.m"
                {
#line 359 "prog_io_item.m"
                  mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[3], parse_tree__prog_io_item__ArgTerms_32, &parse_tree__prog_io_item__ProgArgTerms_54);
                }
#line 360 "prog_io_item.m"
                {
#line 360 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemClause_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 360 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_53));
#line 360 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 1) = ((MR_Box) ((MR_Integer) 0));
#line 360 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgArgTerms_54));
#line 360 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 360 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 4) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_17));
#line 360 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 5) = ((MR_Box) (parse_tree__prog_io_item__BodyGoal_18));
#line 360 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 360 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 360 "prog_io_item.m"
                }
#line 362 "prog_io_item.m"
                parse_tree__prog_io_item__Item_56 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_item__ItemClause_55);
#line 363 "prog_io_item.m"
                {
#line 363 "prog_io_item.m"
                  MR_Word base;
#line 363 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 363 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 363 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_56));
#line 363 "prog_io_item.m"
                }
#line 358 "prog_io_item.m"
              }
#line 354 "prog_io_item.m"
          }
#line 331 "prog_io_item.m"
      }
#line 326 "prog_io_item.m"
  }
#line 322 "prog_io_item.m"
}

#line 308 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__maybe_item_to_item_or_marker_2_p_0(
#line 308 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeItem_3,
#line 308 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItemOrMarker_4)
#line 308 "prog_io_item.m"
{
#line 313 "prog_io_item.m"
  {
#line 313 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 313 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItem_3)) == (MR_mktag((MR_Integer) 0))))
#line 317 "prog_io_item.m"
      *parse_tree__prog_io_item__MaybeItemOrMarker_4 = (MR_Word) parse_tree__prog_io_item__MaybeItem_3;
#line 313 "prog_io_item.m"
    else
#line 313 "prog_io_item.m"
      {
#line 313 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Item_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem_3, (MR_Integer) 0)));
#line 313 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_7_7;

#line 314 "prog_io_item.m"
        {
#line 314 "prog_io_item.m"
          parse_tree__prog_io_item__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 314 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_7_7, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_5));
#line 314 "prog_io_item.m"
        }
#line 314 "prog_io_item.m"
        {
#line 314 "prog_io_item.m"
          MR_Word base;
#line 314 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 314 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItemOrMarker_4 = base;
#line 314 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_7_7));
#line 314 "prog_io_item.m"
        }
#line 313 "prog_io_item.m"
      }
#line 313 "prog_io_item.m"
  }
#line 308 "prog_io_item.m"
}

#line 278 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_source_file_marker_3_p_0(
#line 278 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_4,
#line 278 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_5,
#line 278 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_6)
#line 278 "prog_io_item.m"
{
#line 281 "prog_io_item.m"
  {
#line 281 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__Functor_4, (MR_String) "pragma") == 0);
#line 281 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__PragmaTerm_7;
#line 281 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__PragmaArgTerms_8;
#line 281 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__PragmaContext_9;
#line 281 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 281 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 281 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_18_18;
#line 298 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__SourceFileTerm_10;
#line 286 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;

#line 281 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 281 "prog_io_item.m"
      {
#line 283 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_5)) == (MR_mktag((MR_Integer) 1)));
#line 283 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 283 "prog_io_item.m"
          {
#line 283 "prog_io_item.m"
            parse_tree__prog_io_item__PragmaTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_5, (MR_Integer) 0)));
#line 283 "prog_io_item.m"
            parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_5, (MR_Integer) 1)));
#line 283 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 281 "prog_io_item.m"
              {
#line 284 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__PragmaTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 284 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 284 "prog_io_item.m"
                  {
#line 284 "prog_io_item.m"
                    parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__PragmaTerm_7, (MR_Integer) 0)));
#line 284 "prog_io_item.m"
                    parse_tree__prog_io_item__PragmaArgTerms_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__PragmaTerm_7, (MR_Integer) 1)));
#line 284 "prog_io_item.m"
                    parse_tree__prog_io_item__PragmaContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__PragmaTerm_7, (MR_Integer) 2)));
#line 284 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 284 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 284 "prog_io_item.m"
                      {
#line 284 "prog_io_item.m"
                        parse_tree__prog_io_item__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_17_17, (MR_Integer) 0)));
#line 284 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_18_18, (MR_String) "source_file") == 0);
#line 281 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 281 "prog_io_item.m"
                          {
#line 286 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__PragmaArgTerms_8)) == (MR_mktag((MR_Integer) 1)));
#line 286 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 286 "prog_io_item.m"
                              {
#line 286 "prog_io_item.m"
                                parse_tree__prog_io_item__SourceFileTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__PragmaArgTerms_8, (MR_Integer) 0)));
#line 286 "prog_io_item.m"
                                parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__PragmaArgTerms_8, (MR_Integer) 1)));
#line 286 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "prog_io_item.m"
                              }
#line 298 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 290 "prog_io_item.m"
                              {
#line 290 "prog_io_item.m"
                                MR_String parse_tree__prog_io_item__SourceFile_11;
#line 287 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_20_20;
#line 287 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_21_21;
#line 287 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_12_12;

#line 287 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__SourceFileTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 287 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 287 "prog_io_item.m"
                                  {
#line 287 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SourceFileTerm_10, (MR_Integer) 0)));
#line 287 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SourceFileTerm_10, (MR_Integer) 1)));
#line 287 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SourceFileTerm_10, (MR_Integer) 2)));
#line 287 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 287 "prog_io_item.m"
                                      {
#line 287 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 287 "prog_io_item.m"
                                        if (parse_tree__prog_io_item__succeeded)
#line 287 "prog_io_item.m"
                                          parse_tree__prog_io_item__SourceFile_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_20_20, (MR_Integer) 1)));
#line 287 "prog_io_item.m"
                                      }
#line 287 "prog_io_item.m"
                                  }
#line 290 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 288 "prog_io_item.m"
                                  {
#line 288 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__Marker_13;

#line 288 "prog_io_item.m"
                                    {
#line 288 "prog_io_item.m"
                                      parse_tree__prog_io_item__Marker_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 288 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__Marker_13, 0) = ((MR_Box) (parse_tree__prog_io_item__SourceFile_11));
#line 288 "prog_io_item.m"
                                    }
#line 289 "prog_io_item.m"
                                    {
#line 289 "prog_io_item.m"
                                      MR_Word base;
#line 289 "prog_io_item.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 289 "prog_io_item.m"
                                      *parse_tree__prog_io_item__MaybeIOM_6 = base;
#line 289 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Marker_13));
#line 289 "prog_io_item.m"
                                    }
#line 288 "prog_io_item.m"
                                  }
#line 290 "prog_io_item.m"
                                else
#line 293 "prog_io_item.m"
                                  {
#line 293 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__Spec_15;
#line 293 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__V_35_35;
#line 293 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__V_36_36;
#line 293 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__V_41_41;

#line 295 "prog_io_item.m"
                                    {
#line 295 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 295 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_item__PragmaContext_9));
#line 295 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[114])));
#line 295 "prog_io_item.m"
                                    }
#line 295 "prog_io_item.m"
                                    {
#line 295 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_item__V_36_36));
#line 295 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "prog_io_item.m"
                                    }
#line 294 "prog_io_item.m"
                                    {
#line 294 "prog_io_item.m"
                                      parse_tree__prog_io_item__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 294 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 294 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_15, 2) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 294 "prog_io_item.m"
                                    }
#line 296 "prog_io_item.m"
                                    {
#line 296 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_15));
#line 296 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "prog_io_item.m"
                                    }
#line 296 "prog_io_item.m"
                                    {
#line 296 "prog_io_item.m"
                                      MR_Word base;
#line 296 "prog_io_item.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 296 "prog_io_item.m"
                                      *parse_tree__prog_io_item__MaybeIOM_6 = base;
#line 296 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 296 "prog_io_item.m"
                                    }
#line 293 "prog_io_item.m"
                                  }
#line 290 "prog_io_item.m"
                              }
#line 298 "prog_io_item.m"
                            else
#line 300 "prog_io_item.m"
                              {
#line 300 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_56_56;
#line 300 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_57_57;
#line 300 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_62_62;
#line 300 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Spec_65;

#line 302 "prog_io_item.m"
                                {
#line 302 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_item__PragmaContext_9));
#line 302 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[115])));
#line 302 "prog_io_item.m"
                                }
#line 302 "prog_io_item.m"
                                {
#line 302 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_item__V_57_57));
#line 302 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "prog_io_item.m"
                                }
#line 301 "prog_io_item.m"
                                {
#line 301 "prog_io_item.m"
                                  parse_tree__prog_io_item__Spec_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 301 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 301 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_65, 2) = ((MR_Box) (parse_tree__prog_io_item__V_56_56));
#line 301 "prog_io_item.m"
                                }
#line 303 "prog_io_item.m"
                                {
#line 303 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_65));
#line 303 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "prog_io_item.m"
                                }
#line 303 "prog_io_item.m"
                                {
#line 303 "prog_io_item.m"
                                  MR_Word base;
#line 303 "prog_io_item.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 303 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeIOM_6 = base;
#line 303 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 303 "prog_io_item.m"
                                }
#line 300 "prog_io_item.m"
                              }
#line 298 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 281 "prog_io_item.m"
                          }
#line 284 "prog_io_item.m"
                      }
#line 284 "prog_io_item.m"
                  }
#line 281 "prog_io_item.m"
              }
#line 283 "prog_io_item.m"
          }
#line 281 "prog_io_item.m"
      }
#line 281 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 281 "prog_io_item.m"
  }
#line 278 "prog_io_item.m"
}

#line 268 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_include_item_4_p_0(
#line 268 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 268 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 268 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 268 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Item_8)
#line 268 "prog_io_item.m"
{
#line 271 "prog_io_item.m"
  {
#line 271 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 271 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleDefn_9;
#line 271 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ItemModuleDefn_10;

#line 272 "prog_io_item.m"
    {
#line 272 "prog_io_item.m"
      parse_tree__prog_io_item__ModuleDefn_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 272 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ModuleDefn_9, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_7));
#line 272 "prog_io_item.m"
    }
#line 273 "prog_io_item.m"
    {
#line 273 "prog_io_item.m"
      parse_tree__prog_io_item__ItemModuleDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 273 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_9));
#line 273 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_5));
#line 273 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_6));
#line 273 "prog_io_item.m"
    }
#line 274 "prog_io_item.m"
    *parse_tree__prog_io_item__Item_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_10);
#line 271 "prog_io_item.m"
  }
#line 268 "prog_io_item.m"
}

#line 260 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_use_item_4_p_0(
#line 260 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 260 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 260 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 260 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Item_8)
#line 260 "prog_io_item.m"
{
#line 263 "prog_io_item.m"
  {
#line 263 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 263 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleDefn_9;
#line 263 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ItemModuleDefn_10;

#line 264 "prog_io_item.m"
    {
#line 264 "prog_io_item.m"
      parse_tree__prog_io_item__ModuleDefn_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io_item.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ModuleDefn_9, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_7));
#line 264 "prog_io_item.m"
    }
#line 265 "prog_io_item.m"
    {
#line 265 "prog_io_item.m"
      parse_tree__prog_io_item__ItemModuleDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 265 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_9));
#line 265 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_5));
#line 265 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_6));
#line 265 "prog_io_item.m"
    }
#line 266 "prog_io_item.m"
    *parse_tree__prog_io_item__Item_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_10);
#line 263 "prog_io_item.m"
  }
#line 260 "prog_io_item.m"
}

#line 252 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_import_item_4_p_0(
#line 252 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 252 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 252 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 252 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Item_8)
#line 252 "prog_io_item.m"
{
#line 255 "prog_io_item.m"
  {
#line 255 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 255 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleDefn_9;
#line 255 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ItemModuleDefn_10;

#line 256 "prog_io_item.m"
    {
#line 256 "prog_io_item.m"
      parse_tree__prog_io_item__ModuleDefn_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 256 "prog_io_item.m"
      MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__ModuleDefn_9, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_7));
#line 256 "prog_io_item.m"
    }
#line 257 "prog_io_item.m"
    {
#line 257 "prog_io_item.m"
      parse_tree__prog_io_item__ItemModuleDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 257 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_9));
#line 257 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_5));
#line 257 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_6));
#line 257 "prog_io_item.m"
    }
#line 258 "prog_io_item.m"
    *parse_tree__prog_io_item__Item_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_10);
#line 255 "prog_io_item.m"
  }
#line 252 "prog_io_item.m"
}

#line 238 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_6(
#line 238 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 238 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 238 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 238 "prog_io_item.m"
{
#line 238 "prog_io_item.m"
  {
#line 238 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 238 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv5_Item_8;

#line 238 "prog_io_item.m"
    {
#line 238 "prog_io_item.m"
      parse_tree__prog_io_item__make_include_item_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv5_Item_8);
    }
#line 238 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv5_Item_8));
#line 238 "prog_io_item.m"
  }
#line 238 "prog_io_item.m"
}

#line 237 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_5(
#line 237 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 237 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 237 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 237 "prog_io_item.m"
{
#line 237 "prog_io_item.m"
  {
#line 237 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 237 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv4_MaybeModule_8;

#line 237 "prog_io_item.m"
    {
#line 237 "prog_io_item.m"
      parse_tree__prog_io_item__parse_implicitly_qualified_module_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv4_MaybeModule_8);
    }
#line 237 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv4_MaybeModule_8));
#line 237 "prog_io_item.m"
  }
#line 237 "prog_io_item.m"
}

#line 230 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_4(
#line 230 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 230 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 230 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 230 "prog_io_item.m"
{
#line 230 "prog_io_item.m"
  {
#line 230 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 230 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv3_Item_8;

#line 230 "prog_io_item.m"
    {
#line 230 "prog_io_item.m"
      parse_tree__prog_io_item__make_import_item_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv3_Item_8);
    }
#line 230 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv3_Item_8));
#line 230 "prog_io_item.m"
  }
#line 230 "prog_io_item.m"
}

#line 229 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_3(
#line 229 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 229 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 229 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 229 "prog_io_item.m"
{
#line 229 "prog_io_item.m"
  {
#line 229 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 229 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv2_MaybeModuleName_6;

#line 229 "prog_io_item.m"
    {
#line 229 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_name_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv2_MaybeModuleName_6);
    }
#line 229 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv2_MaybeModuleName_6));
#line 229 "prog_io_item.m"
  }
#line 229 "prog_io_item.m"
}

#line 234 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_2(
#line 234 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 234 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 234 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 234 "prog_io_item.m"
{
#line 234 "prog_io_item.m"
  {
#line 234 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 234 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv1_Item_8;

#line 234 "prog_io_item.m"
    {
#line 234 "prog_io_item.m"
      parse_tree__prog_io_item__make_use_item_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv1_Item_8);
    }
#line 234 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv1_Item_8));
#line 234 "prog_io_item.m"
  }
#line 234 "prog_io_item.m"
}

#line 233 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_1(
#line 233 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 233 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 233 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 233 "prog_io_item.m"
{
#line 233 "prog_io_item.m"
  {
#line 233 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 233 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_MaybeModuleName_6;

#line 233 "prog_io_item.m"
    {
#line 233 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_name_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_MaybeModuleName_6);
    }
#line 233 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_MaybeModuleName_6));
#line 233 "prog_io_item.m"
  }
#line 233 "prog_io_item.m"
}

#line 221 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0(
#line 221 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 221 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 221 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_10,
#line 221 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 221 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 221 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 221 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_14)
#line 221 "prog_io_item.m"
{
#line 226 "prog_io_item.m"
  {
#line 226 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 226 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_40_40;
#line 226 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Parser_15;
#line 226 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Maker_16;
#line 226 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleNamesTerm_17;
#line 226 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeModuleNames_18;
#line 226 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_24_24;

#line 231 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_10, (MR_String) "use_module") == 0))
#line 232 "prog_io_item.m"
      {
#line 233 "prog_io_item.m"
        {
#line 233 "prog_io_item.m"
          parse_tree__prog_io_item__Parser_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 233 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[0]));
#line 233 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_1));
#line 233 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 233 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_9));
#line 233 "prog_io_item.m"
        }
#line 234 "prog_io_item.m"
        {
#line 234 "prog_io_item.m"
          parse_tree__prog_io_item__Maker_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 234 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 234 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_2));
#line 234 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 234 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 3) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 234 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 4) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 234 "prog_io_item.m"
        }
#line 232 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 232 "prog_io_item.m"
      }
#line 231 "prog_io_item.m"
    else
#line 231 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_10, (MR_String) "import_module") == 0))
#line 228 "prog_io_item.m"
      {
#line 229 "prog_io_item.m"
        {
#line 229 "prog_io_item.m"
          parse_tree__prog_io_item__Parser_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 229 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[0]));
#line 229 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_3));
#line 229 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 229 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_9));
#line 229 "prog_io_item.m"
        }
#line 230 "prog_io_item.m"
        {
#line 230 "prog_io_item.m"
          parse_tree__prog_io_item__Maker_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 230 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 230 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_4));
#line 230 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 230 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 3) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 230 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 4) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 230 "prog_io_item.m"
        }
#line 228 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 228 "prog_io_item.m"
      }
#line 231 "prog_io_item.m"
    else
#line 231 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_10, (MR_String) "include_module") == 0))
#line 236 "prog_io_item.m"
      {
#line 237 "prog_io_item.m"
        {
#line 237 "prog_io_item.m"
          parse_tree__prog_io_item__Parser_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 237 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[1]));
#line 237 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_5));
#line 237 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 237 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 3) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_8));
#line 237 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 4) = ((MR_Box) (parse_tree__prog_io_item__VarSet_9));
#line 237 "prog_io_item.m"
        }
#line 238 "prog_io_item.m"
        {
#line 238 "prog_io_item.m"
          parse_tree__prog_io_item__Maker_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 238 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 238 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_6));
#line 238 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 238 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 3) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 238 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 4) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 238 "prog_io_item.m"
        }
#line 236 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 236 "prog_io_item.m"
      }
#line 231 "prog_io_item.m"
    else
#line 231 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 226 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 226 "prog_io_item.m"
      {
#line 240 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_11)) == (MR_mktag((MR_Integer) 1)));
#line 240 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 240 "prog_io_item.m"
          {
#line 240 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleNamesTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_11, (MR_Integer) 0)));
#line 240 "prog_io_item.m"
            parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_11, (MR_Integer) 1)));
#line 240 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 226 "prog_io_item.m"
              {
#line 14765 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_40_40 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 241 "prog_io_item.m"
                {
#line 241 "prog_io_item.m"
                  parse_tree__prog_io_util__parse_one_or_more_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_40_40, parse_tree__prog_io_item__Parser_15, parse_tree__prog_io_item__ModuleNamesTerm_17, &parse_tree__prog_io_item__MaybeModuleNames_18);
                }
#line 247 "prog_io_item.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNames_18)) == (MR_mktag((MR_Integer) 0))))
#line 249 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_14 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNames_18;
#line 247 "prog_io_item.m"
                else
#line 243 "prog_io_item.m"
                  {
#line 243 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__HeadModuleName_19;
#line 243 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__TailModuleNames_20;
#line 243 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__HeadItem_21;
#line 243 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__TailItems_22;
#line 243 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNames_18, (MR_Integer) 0)));
#line 243 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_26_26;
#line 243 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_27_27;
#line 244 "prog_io_item.m"
                    void MR_CALL (* parse_tree__prog_io_item__func_6)(MR_Box, MR_Box, MR_Box *);
#line 244 "prog_io_item.m"
                    MR_Box parse_tree__prog_io_item__conv7_HeadItem_21;

#line 243 "prog_io_item.m"
                    parse_tree__prog_io_item__HeadModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, (MR_Integer) 0)));
#line 243 "prog_io_item.m"
                    parse_tree__prog_io_item__TailModuleNames_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, (MR_Integer) 1)));
#line 244 "prog_io_item.m"
                    parse_tree__prog_io_item__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, (MR_Integer) 1)));
#line 244 "prog_io_item.m"
                    {
#line 244 "prog_io_item.m"
                      parse_tree__prog_io_item__func_6(((MR_Box) parse_tree__prog_io_item__Maker_16), ((MR_Box) (parse_tree__prog_io_item__HeadModuleName_19)), &parse_tree__prog_io_item__conv7_HeadItem_21);
                    }
#line 244 "prog_io_item.m"
                    parse_tree__prog_io_item__HeadItem_21 = ((MR_Word) parse_tree__prog_io_item__conv7_HeadItem_21);
#line 245 "prog_io_item.m"
                    {
#line 245 "prog_io_item.m"
                      mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_40_40, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__Maker_16, parse_tree__prog_io_item__TailModuleNames_20, &parse_tree__prog_io_item__TailItems_22);
                    }
#line 246 "prog_io_item.m"
                    {
#line 246 "prog_io_item.m"
                      parse_tree__prog_io_item__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 246 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_item__HeadItem_21));
#line 246 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_item__TailItems_22));
#line 246 "prog_io_item.m"
                    }
#line 246 "prog_io_item.m"
                    {
#line 246 "prog_io_item.m"
                      parse_tree__prog_io_item__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 246 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_item__V_27_27));
#line 246 "prog_io_item.m"
                    }
#line 246 "prog_io_item.m"
                    {
#line 246 "prog_io_item.m"
                      MR_Word base;
#line 246 "prog_io_item.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 246 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeIOM_14 = base;
#line 246 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_26_26));
#line 246 "prog_io_item.m"
                    }
#line 243 "prog_io_item.m"
                  }
#line 247 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 226 "prog_io_item.m"
              }
#line 240 "prog_io_item.m"
          }
#line 226 "prog_io_item.m"
      }
#line 226 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 226 "prog_io_item.m"
  }
#line 221 "prog_io_item.m"
}

#line 188 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_module_marker_5_p_0(
#line 188 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_6,
#line 188 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_7,
#line 188 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_8,
#line 188 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_9,
#line 188 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Marker_10)
#line 188 "prog_io_item.m"
{
#line 198 "prog_io_item.m"
  {
#line 198 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__Functor_6, (MR_String) "module") == 0);
#line 198 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleName_12;
#line 193 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_19_19;
#line 193 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleNameTerm_11;
#line 193 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_14_14;

#line 193 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 193 "prog_io_item.m"
      {
#line 194 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_7)) == (MR_mktag((MR_Integer) 1)));
#line 194 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 194 "prog_io_item.m"
          {
#line 194 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleNameTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_7, (MR_Integer) 0)));
#line 194 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_7, (MR_Integer) 1)));
#line 194 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 193 "prog_io_item.m"
              {
#line 14912 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 195 "prog_io_item.m"
                {
#line 195 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_19_19, parse_tree__prog_io_item__ModuleNameTerm_11, &parse_tree__prog_io_item__ModuleName_12);
                }
#line 193 "prog_io_item.m"
              }
#line 194 "prog_io_item.m"
          }
#line 193 "prog_io_item.m"
      }
#line 198 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 197 "prog_io_item.m"
      {
#line 197 "prog_io_item.m"
        {
#line 197 "prog_io_item.m"
          MR_Word base;
#line 197 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 197 "prog_io_item.m"
          *parse_tree__prog_io_item__Marker_10 = base;
#line 197 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 197 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_12));
#line 197 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_8));
#line 197 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_9));
#line 197 "prog_io_item.m"
        }
#line 197 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 197 "prog_io_item.m"
      }
#line 198 "prog_io_item.m"
    else
#line 204 "prog_io_item.m"
      {
#line 204 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleName_18;
#line 199 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_20_20;
#line 199 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_15_15;
#line 199 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModuleNameTerm_16;

#line 199 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__Functor_6, (MR_String) "end_module") == 0);
#line 199 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 199 "prog_io_item.m"
          {
#line 200 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_7)) == (MR_mktag((MR_Integer) 1)));
#line 200 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 200 "prog_io_item.m"
              {
#line 200 "prog_io_item.m"
                parse_tree__prog_io_item__ModuleNameTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_7, (MR_Integer) 0)));
#line 200 "prog_io_item.m"
                parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_7, (MR_Integer) 1)));
#line 200 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 199 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 199 "prog_io_item.m"
                  {
#line 14986 "parse_tree.prog_io_item.c"
                    parse_tree__prog_io_item__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 201 "prog_io_item.m"
                    {
#line 201 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_20_20, parse_tree__prog_io_item__ModuleNameTerm_16, &parse_tree__prog_io_item__ModuleName_18);
                    }
#line 199 "prog_io_item.m"
                  }
#line 200 "prog_io_item.m"
              }
#line 199 "prog_io_item.m"
          }
#line 204 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 203 "prog_io_item.m"
          {
#line 203 "prog_io_item.m"
            {
#line 203 "prog_io_item.m"
              MR_Word base;
#line 203 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 203 "prog_io_item.m"
              *parse_tree__prog_io_item__Marker_10 = base;
#line 203 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 203 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_18));
#line 203 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_8));
#line 203 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_9));
#line 203 "prog_io_item.m"
            }
#line 203 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 203 "prog_io_item.m"
          }
#line 204 "prog_io_item.m"
        else
#line 215 "prog_io_item.m"
          {
#line 215 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Section_13;

#line 212 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__ArgTerms_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 215 "prog_io_item.m"
              {
#line 208 "prog_io_item.m"
                if ((strcmp(parse_tree__prog_io_item__Functor_6, (MR_String) "interface") == 0))
#line 207 "prog_io_item.m"
                  {
#line 207 "prog_io_item.m"
                    parse_tree__prog_io_item__Section_13 = (MR_Integer) 0;
#line 207 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 207 "prog_io_item.m"
                  }
#line 208 "prog_io_item.m"
                else
#line 208 "prog_io_item.m"
                if ((strcmp(parse_tree__prog_io_item__Functor_6, (MR_String) "implementation") == 0))
#line 210 "prog_io_item.m"
                  {
#line 210 "prog_io_item.m"
                    parse_tree__prog_io_item__Section_13 = (MR_Integer) 1;
#line 210 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 210 "prog_io_item.m"
                  }
#line 208 "prog_io_item.m"
                else
#line 208 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 215 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 215 "prog_io_item.m"
                  {
#line 214 "prog_io_item.m"
                    {
#line 214 "prog_io_item.m"
                      MR_Word base;
#line 214 "prog_io_item.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 214 "prog_io_item.m"
                      *parse_tree__prog_io_item__Marker_10 = base;
#line 214 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 214 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_item__Section_13));
#line 214 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_8));
#line 214 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_9));
#line 214 "prog_io_item.m"
                    }
#line 214 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 215 "prog_io_item.m"
                  }
#line 215 "prog_io_item.m"
              }
#line 215 "prog_io_item.m"
          }
#line 204 "prog_io_item.m"
      }
#line 198 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 198 "prog_io_item.m"
  }
#line 188 "prog_io_item.m"
}

#line 85 "prog_io_item.m"
void MR_CALL 
parse_tree__prog_io_item__parse_decl_5_p_0(
#line 85 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 85 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 85 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_8,
#line 85 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_9,
#line 85 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_10)
#line 85 "prog_io_item.m"
{
#line 376 "prog_io_item.m"
  {
#line 376 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 380 "prog_io_item.m"
    {
#line 380 "prog_io_item.m"
      parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Term_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_item__SeqNum_9, parse_tree__prog_io_item__MaybeItem_10);
#line 380 "prog_io_item.m"
      return;
    }
#line 376 "prog_io_item.m"
  }
#line 85 "prog_io_item.m"
}

#line 72 "prog_io_item.m"
void MR_CALL 
parse_tree__prog_io_item__parse_item_or_marker_5_p_0(
#line 72 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 72 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 72 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_8,
#line 72 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_9,
#line 72 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_10)
#line 72 "prog_io_item.m"
{
#line 156 "prog_io_item.m"
  {
#line 156 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 156 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DeclTerm_11;
#line 122 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 122 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_33_33;
#line 122 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_34_34;
#line 122 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_35_35;
#line 122 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___DeclContext_12;

#line 122 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 122 "prog_io_item.m"
      {
#line 122 "prog_io_item.m"
        parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 122 "prog_io_item.m"
        parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 122 "prog_io_item.m"
        parse_tree__prog_io_item___DeclContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 122 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 122 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 122 "prog_io_item.m"
          {
#line 122 "prog_io_item.m"
            parse_tree__prog_io_item__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_32_32, (MR_Integer) 0)));
#line 122 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_33_33, (MR_String) ":-") == 0);
#line 122 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 122 "prog_io_item.m"
              {
#line 122 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 122 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 122 "prog_io_item.m"
                  {
#line 122 "prog_io_item.m"
                    parse_tree__prog_io_item__DeclTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 0)));
#line 122 "prog_io_item.m"
                    parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 1)));
#line 122 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 122 "prog_io_item.m"
                  }
#line 122 "prog_io_item.m"
              }
#line 122 "prog_io_item.m"
          }
#line 122 "prog_io_item.m"
      }
#line 156 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 148 "prog_io_item.m"
      {
#line 148 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__Functor_13;
#line 148 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ArgTerms_14;
#line 148 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_15;
#line 125 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;

#line 125 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__DeclTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 125 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 125 "prog_io_item.m"
          {
#line 125 "prog_io_item.m"
            parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DeclTerm_11, (MR_Integer) 0)));
#line 125 "prog_io_item.m"
            parse_tree__prog_io_item__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DeclTerm_11, (MR_Integer) 1)));
#line 125 "prog_io_item.m"
            parse_tree__prog_io_item__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DeclTerm_11, (MR_Integer) 2)));
#line 125 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 125 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 125 "prog_io_item.m"
              parse_tree__prog_io_item__Functor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 125 "prog_io_item.m"
          }
#line 148 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 131 "prog_io_item.m"
          {
#line 131 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Marker_16;

#line 128 "prog_io_item.m"
            {
#line 128 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_module_marker_5_p_0(parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__ArgTerms_14, parse_tree__prog_io_item__Context_15, parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__Marker_16);
            }
#line 131 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 130 "prog_io_item.m"
              {
#line 130 "prog_io_item.m"
                MR_Word base;
#line 130 "prog_io_item.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 130 "prog_io_item.m"
                *parse_tree__prog_io_item__MaybeIOM_10 = base;
#line 130 "prog_io_item.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Marker_16));
#line 130 "prog_io_item.m"
              }
#line 131 "prog_io_item.m"
            else
#line 136 "prog_io_item.m"
              {
#line 136 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeIOMPrime_17;

#line 132 "prog_io_item.m"
                {
#line 132 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_items_shorthand_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__ArgTerms_14, parse_tree__prog_io_item__Context_15, parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__MaybeIOMPrime_17);
                }
#line 136 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 135 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_10 = parse_tree__prog_io_item__MaybeIOMPrime_17;
#line 136 "prog_io_item.m"
                else
#line 141 "prog_io_item.m"
                  {
#line 141 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__MaybeIOMPrime_72;
#line 137 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DeclTerm_11, (MR_Integer) 0)));
#line 137 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DeclTerm_11, (MR_Integer) 1)));
#line 137 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__V_82_82;
#line 137 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DeclTerm_11, (MR_Integer) 2)));

#line 137 "prog_io_item.m"
                    {
#line 137 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[12], ((MR_Box) (parse_tree__prog_io_item__ArgTerms_14)), ((MR_Box) (parse_tree__prog_io_item__V_81_81)));
                    }
#line 137 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 137 "prog_io_item.m"
                      {
#line 137 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_37_37)) == (MR_mktag((MR_Integer) 0)));
#line 137 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 137 "prog_io_item.m"
                          {
#line 137 "prog_io_item.m"
                            parse_tree__prog_io_item__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_37_37, (MR_Integer) 0)));
#line 137 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__V_82_82) == 0);
#line 137 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 138 "prog_io_item.m"
                              {
#line 138 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_source_file_marker_3_p_0(parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__ArgTerms_14, &parse_tree__prog_io_item__MaybeIOMPrime_72);
                              }
#line 137 "prog_io_item.m"
                          }
#line 137 "prog_io_item.m"
                      }
#line 141 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 140 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeIOM_10 = parse_tree__prog_io_item__MaybeIOMPrime_72;
#line 141 "prog_io_item.m"
                    else
#line 145 "prog_io_item.m"
                      {
#line 145 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__MaybeItem_19;

#line 380 "prog_io_item.m"
                        {
#line 380 "prog_io_item.m"
                          parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__DeclTerm_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__MaybeItem_19);
                        }
#line 313 "prog_io_item.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItem_19)) == (MR_mktag((MR_Integer) 0))))
#line 317 "prog_io_item.m"
                          *parse_tree__prog_io_item__MaybeIOM_10 = (MR_Word) parse_tree__prog_io_item__MaybeItem_19;
#line 313 "prog_io_item.m"
                        else
#line 313 "prog_io_item.m"
                          {
#line 313 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Item_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem_19, (MR_Integer) 0)));
#line 313 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_94_94;

#line 314 "prog_io_item.m"
                            {
#line 314 "prog_io_item.m"
                              parse_tree__prog_io_item__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 314 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_92));
#line 314 "prog_io_item.m"
                            }
#line 314 "prog_io_item.m"
                            {
#line 314 "prog_io_item.m"
                              MR_Word base;
#line 314 "prog_io_item.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 314 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeIOM_10 = base;
#line 314 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_94_94));
#line 314 "prog_io_item.m"
                            }
#line 313 "prog_io_item.m"
                          }
#line 145 "prog_io_item.m"
                      }
#line 141 "prog_io_item.m"
                  }
#line 136 "prog_io_item.m"
              }
#line 131 "prog_io_item.m"
          }
#line 148 "prog_io_item.m"
        else
#line 149 "prog_io_item.m"
          {
#line 149 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_21;
#line 149 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_51_51;
#line 149 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_52_52;
#line 149 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_57_57;
#line 149 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Context_73;

#line 149 "prog_io_item.m"
            {
#line 149 "prog_io_item.m"
              parse_tree__prog_io_item__Context_73 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_8);
            }
#line 153 "prog_io_item.m"
            {
#line 153 "prog_io_item.m"
              parse_tree__prog_io_item__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 153 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_73));
#line 153 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[113])));
#line 153 "prog_io_item.m"
            }
#line 153 "prog_io_item.m"
            {
#line 153 "prog_io_item.m"
              parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_item__V_52_52));
#line 153 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 153 "prog_io_item.m"
            }
#line 152 "prog_io_item.m"
            {
#line 152 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 152 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 152 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 152 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 2) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 152 "prog_io_item.m"
            }
#line 154 "prog_io_item.m"
            {
#line 154 "prog_io_item.m"
              parse_tree__prog_io_item__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_21));
#line 154 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "prog_io_item.m"
            }
#line 154 "prog_io_item.m"
            {
#line 154 "prog_io_item.m"
              MR_Word base;
#line 154 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 154 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_10 = base;
#line 154 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_57_57));
#line 154 "prog_io_item.m"
            }
#line 149 "prog_io_item.m"
          }
#line 148 "prog_io_item.m"
      }
#line 156 "prog_io_item.m"
    else
#line 164 "prog_io_item.m"
      {
#line 164 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCGHeadTerm_22;
#line 164 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCGBodyTerm_23;
#line 164 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCGContext_24;
#line 157 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_59_59;
#line 157 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_60_60;
#line 157 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_61_61;
#line 157 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_62_62;
#line 157 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_63_63;

#line 157 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 157 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 157 "prog_io_item.m"
          {
#line 157 "prog_io_item.m"
            parse_tree__prog_io_item__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 157 "prog_io_item.m"
            parse_tree__prog_io_item__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 157 "prog_io_item.m"
            parse_tree__prog_io_item__DCGContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 157 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_59_59)) == (MR_mktag((MR_Integer) 0)));
#line 157 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 157 "prog_io_item.m"
              {
#line 157 "prog_io_item.m"
                parse_tree__prog_io_item__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_59_59, (MR_Integer) 0)));
#line 157 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_60_60, (MR_String) "-->") == 0);
#line 157 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 157 "prog_io_item.m"
                  {
#line 157 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 157 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 157 "prog_io_item.m"
                      {
#line 157 "prog_io_item.m"
                        parse_tree__prog_io_item__DCGHeadTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_61_61, (MR_Integer) 0)));
#line 157 "prog_io_item.m"
                        parse_tree__prog_io_item__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_61_61, (MR_Integer) 1)));
#line 157 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 157 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 157 "prog_io_item.m"
                          {
#line 157 "prog_io_item.m"
                            parse_tree__prog_io_item__DCGBodyTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, (MR_Integer) 0)));
#line 157 "prog_io_item.m"
                            parse_tree__prog_io_item__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, (MR_Integer) 1)));
#line 157 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "prog_io_item.m"
                          }
#line 157 "prog_io_item.m"
                      }
#line 157 "prog_io_item.m"
                  }
#line 157 "prog_io_item.m"
              }
#line 157 "prog_io_item.m"
          }
#line 164 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 162 "prog_io_item.m"
          {
#line 162 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeItem_74;

#line 161 "prog_io_item.m"
            {
#line 161 "prog_io_item.m"
              parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__DCGHeadTerm_22, parse_tree__prog_io_item__DCGBodyTerm_23, parse_tree__prog_io_item__DCGContext_24, parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__MaybeItem_74);
            }
#line 163 "prog_io_item.m"
            {
#line 163 "prog_io_item.m"
              parse_tree__prog_io_item__maybe_item_to_item_or_marker_2_p_0(parse_tree__prog_io_item__MaybeItem_74, parse_tree__prog_io_item__MaybeIOM_10);
#line 163 "prog_io_item.m"
              return;
            }
#line 162 "prog_io_item.m"
          }
#line 164 "prog_io_item.m"
        else
#line 179 "prog_io_item.m"
          {
#line 179 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__HeadTerm_28;
#line 179 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__BodyTerm_29;
#line 179 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ClauseContext_30;
#line 179 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ProgVarSet_31;
#line 179 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeItem_75;
#line 174 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__HeadTermPrime_25;
#line 174 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__BodyTermPrime_26;
#line 174 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TermContext_27;
#line 167 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_64_64;
#line 167 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__V_65_65;
#line 167 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_66_66;
#line 167 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_67_67;
#line 167 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_68_68;

#line 167 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 167 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 167 "prog_io_item.m"
              {
#line 167 "prog_io_item.m"
                parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 167 "prog_io_item.m"
                parse_tree__prog_io_item__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 167 "prog_io_item.m"
                parse_tree__prog_io_item__TermContext_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 167 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 167 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 167 "prog_io_item.m"
                  {
#line 167 "prog_io_item.m"
                    parse_tree__prog_io_item__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 167 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_65_65, (MR_String) ":-") == 0);
#line 167 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 167 "prog_io_item.m"
                      {
#line 168 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_66_66)) == (MR_mktag((MR_Integer) 1)));
#line 168 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 168 "prog_io_item.m"
                          {
#line 168 "prog_io_item.m"
                            parse_tree__prog_io_item__HeadTermPrime_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, (MR_Integer) 0)));
#line 168 "prog_io_item.m"
                            parse_tree__prog_io_item__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, (MR_Integer) 1)));
#line 168 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 168 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 168 "prog_io_item.m"
                              {
#line 168 "prog_io_item.m"
                                parse_tree__prog_io_item__BodyTermPrime_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, (MR_Integer) 0)));
#line 168 "prog_io_item.m"
                                parse_tree__prog_io_item__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, (MR_Integer) 1)));
#line 168 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "prog_io_item.m"
                              }
#line 168 "prog_io_item.m"
                          }
#line 167 "prog_io_item.m"
                      }
#line 167 "prog_io_item.m"
                  }
#line 167 "prog_io_item.m"
              }
#line 174 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 171 "prog_io_item.m"
              {
#line 171 "prog_io_item.m"
                parse_tree__prog_io_item__HeadTerm_28 = parse_tree__prog_io_item__HeadTermPrime_25;
#line 172 "prog_io_item.m"
                parse_tree__prog_io_item__BodyTerm_29 = parse_tree__prog_io_item__BodyTermPrime_26;
#line 173 "prog_io_item.m"
                parse_tree__prog_io_item__ClauseContext_30 = parse_tree__prog_io_item__TermContext_27;
#line 171 "prog_io_item.m"
              }
#line 174 "prog_io_item.m"
            else
#line 176 "prog_io_item.m"
              {
#line 176 "prog_io_item.m"
                parse_tree__prog_io_item__HeadTerm_28 = parse_tree__prog_io_item__Term_8;
#line 177 "prog_io_item.m"
                {
#line 177 "prog_io_item.m"
                  parse_tree__prog_io_item__ClauseContext_30 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__HeadTerm_28);
                }
#line 178 "prog_io_item.m"
                {
#line 178 "prog_io_item.m"
                  parse_tree__prog_io_item__BodyTerm_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 178 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_29, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[1]));
#line 178 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 178 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_29, 2) = ((MR_Box) (parse_tree__prog_io_item__ClauseContext_30));
#line 178 "prog_io_item.m"
                }
#line 176 "prog_io_item.m"
              }
#line 180 "prog_io_item.m"
            {
#line 180 "prog_io_item.m"
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__VarSet_7, &parse_tree__prog_io_item__ProgVarSet_31);
            }
#line 181 "prog_io_item.m"
            {
#line 181 "prog_io_item.m"
              parse_tree__prog_io_item__parse_clause_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__HeadTerm_28, parse_tree__prog_io_item__BodyTerm_29, parse_tree__prog_io_item__ProgVarSet_31, parse_tree__prog_io_item__ClauseContext_30, parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__MaybeItem_75);
            }
#line 183 "prog_io_item.m"
            {
#line 183 "prog_io_item.m"
              parse_tree__prog_io_item__maybe_item_to_item_or_marker_2_p_0(parse_tree__prog_io_item__MaybeItem_75, parse_tree__prog_io_item__MaybeIOM_10);
#line 183 "prog_io_item.m"
              return;
            }
#line 179 "prog_io_item.m"
          }
#line 164 "prog_io_item.m"
      }
#line 156 "prog_io_item.m"
  }
#line 72 "prog_io_item.m"
}

void mercury__parse_tree__prog_io_item__init(void)
{
}

void mercury__parse_tree__prog_io_item__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_item_or_marker_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_maker_2);
}

void mercury__parse_tree__prog_io_item__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_item. */
