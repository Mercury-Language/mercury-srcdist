/*
** Automatically generated from `prog_io_item.m'
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
#include "parse_tree.file_kind.mih"
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




#line 109 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 112 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 115 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 118 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 121 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 124 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 127 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 130 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 133 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 136 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_0[1];

#line 139 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_0;

#line 142 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_0;

#line 145 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_1[1];

#line 148 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_1;

#line 151 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_2[1];

#line 154 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_2;

#line 157 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_3[1];

#line 160 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_3;

#line 163 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_4[3];

#line 166 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_4;

#line 169 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_5[3];

#line 172 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_5;

#line 175 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_6[3];

#line 178 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_6;

#line 181 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_0[1];

#line 184 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_1[1];

#line 187 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_2[1];

#line 190 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_3[4];

#line 193 "parse_tree.prog_io_item.c"
static const MR_DuPtagLayout parse_tree__prog_io_item__parse_tree__prog_io_item__du_ptag_ordered_item_or_marker_0[4];

#line 196 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_name_ordered_item_or_marker_0[7];

#line 199 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_item_or_marker_0[7];

#line 202 "parse_tree.prog_io_item.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item____vpti_pred_2__pseudo_1__pseudo_2;

#line 205 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____item_or_marker_0_0_10001(
#line 208 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 210 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2);

#line 213 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____item_or_marker_0_0_10001(
#line 216 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 218 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 220 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3);

#line 223 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0_10001(
#line 226 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 228 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 230 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3,
#line 232 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4);

#line 235 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0_10001(
#line 238 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 240 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 242 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_3,
#line 244 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4,
#line 246 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_5);

#line 1611 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1611 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 1611 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 1515 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0(
#line 1515 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1515 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13,
#line 1515 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14,
#line 1515 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15,
#line 1515 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Vars_16);

#line 1408 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1(
#line 1408 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1408 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1408 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1380 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0(
#line 1380 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PromiseType_10,
#line 1380 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1380 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__4_4,
#line 1380 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1380 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 1380 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 1380 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 591 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_109_97_114_107_101_114_95_95_91_50_93_95_48_7_p_0(
#line 591 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 591 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_10,
#line 591 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 591 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 591 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 591 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItemOrMarker_14);

#line 1408 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1408__1_2_p_0(
#line 1408 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1408 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39);

#line 1320 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1320__1_2_p_0(
#line 1320 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1320 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39);

#line 366 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__366__1_2_p_0(
#line 366 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_79,
#line 366 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_80);

#line 350 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__350__1_2_p_0(
#line 350 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_73,
#line 350 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_74);

#line 1611 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0(
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_6,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_7,
#line 1611 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 1611 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0(
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_5,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_6,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 1635 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__dummy_term_with_context_2_p_0(
#line 1635 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_3,
#line 1635 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Term_4);

#line 1602 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(
#line 1602 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1);

#line 1591 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_purity_3_p_0(
#line 1591 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Purity_4,
#line 1591 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8,
#line 1591 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9);

#line 1570 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_implicitly_qualified_module_name_4_p_0(
#line 1570 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__DefaultModuleName_5,
#line 1570 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1570 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_7,
#line 1570 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModule_8);

#line 1559 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_name_3_p_0(
#line 1559 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 1559 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1559 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModuleName_6);

#line 1536 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__desugar_field_access_1_f_0(
#line 1536 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_3);

#line 1490 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(
#line 1490 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 1490 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithInstTerm_5,
#line 1490 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithInst_6);

#line 1459 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(
#line 1459 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1459 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1459 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithTypeTerm_7,
#line 1459 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithType_8);

#line 1430 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(
#line 1430 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1430 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1430 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeDetismTerm_7,
#line 1430 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeMaybeDetism_8);

#line 1342 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_constraints_6_p_0(
#line 1342 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1342 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1342 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1342 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23,
#line 1342 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24,
#line 1342 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeClassInstConstraints_11);

#line 1320 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0_1(
#line 1320 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1320 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1320 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1277 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(
#line 1277 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 1277 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 1277 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RevAttributes0_8,
#line 1277 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__RevAttributes_9,
#line 1277 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeExistClassInstContext_10);

#line 1206 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1(
#line 1206 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1206 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1206 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1194 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_16,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_17,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_18,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 1194 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 1194 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24);

#line 1151 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1(
#line 1151 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1151 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1151 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1140 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_12,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_13,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_15,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_16,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 1140 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 1140 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22);

#line 1100 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(
#line 1100 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 1100 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1100 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 1100 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1100 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_14,
#line 1100 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_15,
#line 1100 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_16,
#line 1100 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_17,
#line 1100 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_18);

#line 1068 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_7_p_0(
#line 1068 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1068 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1068 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 1068 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 1068 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 1068 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 1068 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 1059 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__wrap_nth_2_p_0(
#line 1059 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__N_3,
#line 1059 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_2);

#line 1041 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0(
#line 1041 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__ArgNum_1,
#line 1041 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1041 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3,
#line 1041 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__4_4);

#line 1028 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0_1(
#line 1028 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1028 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1028 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 997 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(
#line 997 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypesAndModes_4,
#line 997 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ErrorTerm_5,
#line 997 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeSpec_6);

#line 976 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_3_p_0(
#line 976 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_4,
#line 976 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 976 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeTypeAndMode_6);

#line 968 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(
#line 968 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_1,
#line 968 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 968 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3);

#line 895 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncName_14,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Args_15,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ReturnArg_16,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncTerm_17,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_18,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ExistQVars_21,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Constraints_22,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_23,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_24,
#line 895 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_25,
#line 895 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_26);

#line 812 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_8_p_0(
#line 812 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 812 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 812 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_11,
#line 812 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_12,
#line 812 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_13,
#line 812 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 812 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 812 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 712 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_12,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_13,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_14,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_15,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_16,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 712 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 712 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22);

#line 651 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0(
#line 651 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_9,
#line 651 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 651 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 651 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 651 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 651 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 651 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 651 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 437 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0(
#line 437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 437 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_11,
#line 437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_12,
#line 437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 437 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 437 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 396 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(
#line 396 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 396 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_8,
#line 396 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_9,
#line 396 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22,
#line 396 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 396 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_12);

#line 366 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_2(
#line 366 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 366 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 366 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 350 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_1(
#line 350 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 350 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 350 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 329 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0(
#line 329 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 329 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadTerm_9,
#line 329 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__BodyTerm0_10,
#line 329 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ProgVarSet0_11,
#line 329 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 329 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 329 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 315 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__maybe_item_to_item_or_marker_2_p_0(
#line 315 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeItem_3,
#line 315 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItemOrMarker_4);

#line 285 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_source_file_marker_3_p_0(
#line 285 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_4,
#line 285 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_5,
#line 285 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_6);

#line 275 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_include_item_4_p_0(
#line 275 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 275 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 275 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 275 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Item_8);

#line 267 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_use_item_4_p_0(
#line 267 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 267 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 267 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 267 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Item_8);

#line 259 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_import_item_4_p_0(
#line 259 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 259 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 259 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 259 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Item_8);

#line 245 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_6(
#line 245 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 245 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 245 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 244 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_5(
#line 244 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 244 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 244 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 237 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_4(
#line 237 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 237 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 237 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 236 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_3(
#line 236 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 236 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 236 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 241 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_2(
#line 241 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 241 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 241 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 240 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_1(
#line 240 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 240 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 240 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 228 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0(
#line 228 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 228 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 228 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_10,
#line 228 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 228 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 228 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 228 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_14);


static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_1[155][2];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_3[25][1];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_4[2][6];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_5[2][7];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_6[4][5];




static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_1[155][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ":-"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: atom expected after"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration should be a string."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[12])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "source_file"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the argument of a"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[12])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: wrong number of arguments in"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration requires arity."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[12])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "external"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ":- version_numbers"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid module name in"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid version number in"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[37])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and determinism both specified."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[12])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "with_inst"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "with_type"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "without"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "specified"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "specified without argument modes."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[12])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not specified."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[12])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: arguments have modes but"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "inst variables in"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inconsistent constraints on"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[71])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[26])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in return type of"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[74])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "expected in"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[74])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "="))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[80])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[82])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but function result does not."))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[12])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: function arguments have modes,"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[85])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but function arguments do not."))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[12])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: function result has mode,"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[89])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[69])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In function"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[93])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of function mode declaration."))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[12])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in return mode"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid inst in"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[101])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(e.g. \":- module \'Foo\'.\")."))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[12])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be quoted using single quotes"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module names starting with capital letters"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[69])))
  },
  /* row 112 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 113 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 114 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In equation head:"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In clause head:"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unrecognized declaration:"))
  },
  /* row 120 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 121 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 122 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 127 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 128 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in arguments of"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration at"))
  },
  /* row 135 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 136 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 137 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 138 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inconsistent constraints"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "on inst variables in function declaration:"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The argument without a mode is the"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The arguments without modes are the"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: some but not all arguments have modes."))
  },
  /* row 144 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "on inst variables"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in predicate mode declaration:"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in function mode declaration:"))
  },
  /* row 149 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "function mode declaration at"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid determinism category"))
  },
  /* row 152 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[20])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 153 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[22])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 154 */
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[18])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "true"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[24])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[29])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[35])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[46])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[54])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[58])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[63])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[78])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[83])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[87])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[91])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[103])))
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[100])))
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[109])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[39])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 23))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[41])))
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



#line 2017 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2025 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2033 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2041 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2049 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2057 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 2066 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2074 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2082 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2090 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
};

#line 2095 "parse_tree.prog_io_item.c"
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

#line 2110 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 2118 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_item__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_0
};

#line 2123 "parse_tree.prog_io_item.c"
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

#line 2138 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_2[1] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_version_numbers_0
};

#line 2143 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_2 = {
  (MR_String) "iom_marker_version_numbers",
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

#line 2158 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2163 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_3 = {
  (MR_String) "iom_marker_src_file",
  (MR_Integer) 1,
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

#line 2178 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_4[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2185 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_4 = {
  (MR_String) "iom_marker_module_start",
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

#line 2200 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_5[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2207 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_5 = {
  (MR_String) "iom_marker_module_end",
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

#line 2222 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_6[3] = {
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2229 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_6 = {
  (MR_String) "iom_marker_section",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_6,
  NULL,
  NULL,
  NULL
};

#line 2244 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_0[1] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_0
};

#line 2249 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_1[1] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_1
};

#line 2254 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_2[1] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_2
};

#line 2259 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_3[4] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_3,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_4,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_5,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_6
};

#line 2267 "parse_tree.prog_io_item.c"
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
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_3
  }
};

#line 2291 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_name_ordered_item_or_marker_0[7] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_0,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_1,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_5,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_4,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_6,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_3,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_2
};

#line 2302 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_item_or_marker_0[7] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4
};

#line 2313 "parse_tree.prog_io_item.c"
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
  (MR_Integer) 7,
  (MR_Integer) 4,
  parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_item_or_marker_0
};

#line 2330 "parse_tree.prog_io_item.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item____vpti_pred_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2340 "parse_tree.prog_io_item.c"
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

#line 2357 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____item_or_marker_0_0_10001(
#line 2360 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 2362 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2)
#line 2364 "parse_tree.prog_io_item.c"
{
#line 2366 "parse_tree.prog_io_item.c"
  {
#line 2368 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 2371 "parse_tree.prog_io_item.c"
    {
#line 2373 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item____Unify____item_or_marker_0_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2));
    }
#line 2376 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 2378 "parse_tree.prog_io_item.c"
  }
#line 2380 "parse_tree.prog_io_item.c"
}

#line 2383 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____item_or_marker_0_0_10001(
#line 2386 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 2388 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 2390 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3)
#line 2392 "parse_tree.prog_io_item.c"
{
#line 2394 "parse_tree.prog_io_item.c"
  {
#line 2396 "parse_tree.prog_io_item.c"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__1_1;

#line 2399 "parse_tree.prog_io_item.c"
    {
#line 2401 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item____Compare____item_or_marker_0_0(&parse_tree__prog_io_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_3));
    }
#line 2404 "parse_tree.prog_io_item.c"
    *parse_tree__prog_io_item__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__1_1));
#line 2406 "parse_tree.prog_io_item.c"
  }
#line 2408 "parse_tree.prog_io_item.c"
}

#line 2411 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0_10001(
#line 2414 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 2416 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 2418 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3,
#line 2420 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4)
#line 2422 "parse_tree.prog_io_item.c"
{
#line 2424 "parse_tree.prog_io_item.c"
  {
#line 2426 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 2429 "parse_tree.prog_io_item.c"
    {
#line 2431 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item____Unify____maker_2_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_4));
    }
#line 2434 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 2436 "parse_tree.prog_io_item.c"
  }
#line 2438 "parse_tree.prog_io_item.c"
}

#line 2441 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0_10001(
#line 2444 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 2446 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 2448 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_3,
#line 2450 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4,
#line 2452 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_5)
#line 2454 "parse_tree.prog_io_item.c"
{
#line 2456 "parse_tree.prog_io_item.c"
  {
#line 2458 "parse_tree.prog_io_item.c"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__1_1;

#line 2461 "parse_tree.prog_io_item.c"
    {
#line 2463 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item____Compare____maker_2_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), &parse_tree__prog_io_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_item__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_5));
    }
#line 2466 "parse_tree.prog_io_item.c"
    *parse_tree__prog_io_item__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__1_1));
#line 2468 "parse_tree.prog_io_item.c"
  }
#line 2470 "parse_tree.prog_io_item.c"
}

#line 1611 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1611 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 1611 "prog_io_item.m"
{
#line 1611 "prog_io_item.m"
  {
#line 1611 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1611 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar1_4 = parse_tree__prog_io_item__HeadVar__2_2;
#line 1611 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar2_5 = parse_tree__prog_io_item__HeadVar__3_3;

#line 1611 "prog_io_item.m"
    {
#line 1611 "prog_io_item.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar2_5);
#line 1611 "prog_io_item.m"
      return;
    }
#line 1611 "prog_io_item.m"
  }
#line 1611 "prog_io_item.m"
}

#line 1611 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 1611 "prog_io_item.m"
{
#line 1611 "prog_io_item.m"
  {
#line 1611 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1611 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar1_3 = parse_tree__prog_io_item__HeadVar__1_1;
#line 1611 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar2_4 = parse_tree__prog_io_item__HeadVar__2_2;

#line 1611 "prog_io_item.m"
    {
#line 1611 "prog_io_item.m"
      return parse_tree__prog_io_item__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io_item__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar2_4);
    }
#line 1611 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1611 "prog_io_item.m"
  }
#line 1611 "prog_io_item.m"
}

#line 1515 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0(
#line 1515 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1515 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13,
#line 1515 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14,
#line 1515 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15,
#line 1515 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Vars_16)
#line 1515 "prog_io_item.m"
{
#line 1525 "prog_io_item.m"
  while (MR_TRUE)
#line 1525 "prog_io_item.m"
    {
#line 1525 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 1525 "prog_io_item.m"
      {
#line 1525 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13)) == (MR_mktag((MR_Integer) 1)));
#line 1525 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__QuantVars_11;
#line 1525 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17;
#line 1520 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_18_18;
#line 1520 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_19_19;
#line 1520 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;
#line 1520 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_12_12;

#line 1521 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1521 "prog_io_item.m"
          {
#line 1521 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13, (MR_Integer) 0)));
#line 1521 "prog_io_item.m"
            parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13, (MR_Integer) 1)));
#line 1520 "prog_io_item.m"
            parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1520 "prog_io_item.m"
            parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1520 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 2)));
#line 1520 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1520 "prog_io_item.m"
              {
#line 1520 "prog_io_item.m"
                parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1520 "prog_io_item.m"
                parse_tree__prog_io_item__QuantVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__V_19_19, (MR_Integer) 1)));
#line 1520 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__QuantType_7 == parse_tree__prog_io_item__V_24_24);
#line 1520 "prog_io_item.m"
              }
#line 1521 "prog_io_item.m"
          }
#line 1525 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1523 "prog_io_item.m"
          {
#line 1523 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20;

#line 1523 "prog_io_item.m"
            {
#line 1523 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15, parse_tree__prog_io_item__QuantVars_11);
            }
#line 1524 "prog_io_item.m"
            /* direct tailcall eliminated */
#line 1524 "prog_io_item.m"
            {
#line 1524 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_13 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17;
#line 1524 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0__tmp_copy_15 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20;

#line 1524 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_0__tmp_copy_15;
#line 1524 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_13;
#line 1524 "prog_io_item.m"
            }
#line 1524 "prog_io_item.m"
            continue;
#line 1523 "prog_io_item.m"
          }
#line 1525 "prog_io_item.m"
        else
#line 1526 "prog_io_item.m"
          {
#line 1526 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_Vars_16 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15;
#line 1526 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13;
#line 1526 "prog_io_item.m"
          }
#line 1525 "prog_io_item.m"
      }
#line 1525 "prog_io_item.m"
      break;
#line 1525 "prog_io_item.m"
    }
#line 1515 "prog_io_item.m"
}

#line 1408 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1(
#line 1408 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1408 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1408 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1408 "prog_io_item.m"
{
#line 1408 "prog_io_item.m"
  {
#line 1408 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1408 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_39;

#line 1408 "prog_io_item.m"
    {
#line 1408 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1408__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_39);
    }
#line 1408 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_39));
#line 1408 "prog_io_item.m"
  }
#line 1408 "prog_io_item.m"
}

#line 1380 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0(
#line 1380 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PromiseType_10,
#line 1380 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1380 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__4_4,
#line 1380 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1380 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 1380 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 1380 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 1380 "prog_io_item.m"
{
#line 1385 "prog_io_item.m"
  {
#line 1385 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1385 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_36_36;
#line 1385 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_37_37;
#line 1385 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Term_12;
#line 1385 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet0_17;
#line 1385 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ContextPieces_18;
#line 1385 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeGoal0_19;
#line 1385 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet_20;
#line 1385 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;

#line 1384 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1384 "prog_io_item.m"
      {
#line 1384 "prog_io_item.m"
        parse_tree__prog_io_item__Term_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__4_4, (MR_Integer) 0)));
#line 1384 "prog_io_item.m"
        parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__4_4, (MR_Integer) 1)));
#line 1384 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1385 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1385 "prog_io_item.m"
          {
#line 2735 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 2737 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1386 "prog_io_item.m"
            {
#line 1386 "prog_io_item.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_36_36, parse_tree__prog_io_item__TypeCtorInfo_37_37, parse_tree__prog_io_item__VarSet_11, &parse_tree__prog_io_item__ProgVarSet0_17);
            }
#line 1387 "prog_io_item.m"
            parse_tree__prog_io_item__ContextPieces_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1388 "prog_io_item.m"
            {
#line 1388 "prog_io_item.m"
              parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__ContextPieces_18, &parse_tree__prog_io_item__MaybeGoal0_19, parse_tree__prog_io_item__ProgVarSet0_17, &parse_tree__prog_io_item__ProgVarSet_20);
            }
#line 1415 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeGoal0_19)) == (MR_mktag((MR_Integer) 0))))
#line 1417 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = (MR_Word) parse_tree__prog_io_item__MaybeGoal0_19;
#line 1415 "prog_io_item.m"
            else
#line 1390 "prog_io_item.m"
              {
#line 1390 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeGoal0_19, (MR_Integer) 0)));
#line 1390 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__UnivVars_25;
#line 1390 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Goal_26;
#line 1390 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemPromise_28;
#line 1390 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_29;

#line 1401 "prog_io_item.m"
#line 1401 "prog_io_item.m"
                switch (parse_tree__prog_io_item__PromiseType_10) {
#line 1401 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1401 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 1401 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 1401 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 1405 "prog_io_item.m"
                    {
#line 1405 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__UnivVars0_35;
#line 1406 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_27_27;

#line 1406 "prog_io_item.m"
                      {
#line 1406 "prog_io_item.m"
                        parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__Attributes_13, &parse_tree__prog_io_item__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__UnivVars0_35);
                      }
#line 1408 "prog_io_item.m"
                      {
#line 1408 "prog_io_item.m"
                        mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[10], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[6], parse_tree__prog_io_item__UnivVars0_35, &parse_tree__prog_io_item__UnivVars_25);
                      }
#line 1409 "prog_io_item.m"
                      parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__Goal0_21;
#line 1405 "prog_io_item.m"
                    }
#line 1401 "prog_io_item.m"
                    break;
#line 1401 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 1397 "prog_io_item.m"
                    {
#line 1397 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__UnivVars0_23;
#line 1397 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__AllGoal_24;
#line 1394 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_22_22;

#line 1394 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__Goal0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1394 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 1394 "prog_io_item.m"
                        {
#line 1394 "prog_io_item.m"
                          parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 1)));
#line 1394 "prog_io_item.m"
                          parse_tree__prog_io_item__UnivVars0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 2)));
#line 1394 "prog_io_item.m"
                          parse_tree__prog_io_item__AllGoal_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 3)));
#line 1395 "prog_io_item.m"
                          parse_tree__prog_io_item__UnivVars_25 = parse_tree__prog_io_item__UnivVars0_23;
#line 1396 "prog_io_item.m"
                          parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__AllGoal_24;
#line 1394 "prog_io_item.m"
                        }
#line 1394 "prog_io_item.m"
                      else
#line 1398 "prog_io_item.m"
                        {
#line 1398 "prog_io_item.m"
                          parse_tree__prog_io_item__UnivVars_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1399 "prog_io_item.m"
                          parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__Goal0_21;
#line 1398 "prog_io_item.m"
                        }
#line 1397 "prog_io_item.m"
                    }
#line 1401 "prog_io_item.m"
                    break;
#line 1401 "prog_io_item.m"
                }
#line 1411 "prog_io_item.m"
                {
#line 1411 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemPromise_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1411 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 0) = ((MR_Box) (parse_tree__prog_io_item__PromiseType_10));
#line 1411 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 1) = ((MR_Box) (parse_tree__prog_io_item__Goal_26));
#line 1411 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_20));
#line 1411 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 3) = ((MR_Box) (parse_tree__prog_io_item__UnivVars_25));
#line 1411 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 4) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 1411 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 5) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 1411 "prog_io_item.m"
                }
#line 1413 "prog_io_item.m"
                {
#line 1413 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1413 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1413 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_29, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPromise_28));
#line 1413 "prog_io_item.m"
                }
#line 1414 "prog_io_item.m"
                {
#line 1414 "prog_io_item.m"
                  MR_Word base;
#line 1414 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1414 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 1414 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_29));
#line 1414 "prog_io_item.m"
                }
#line 1390 "prog_io_item.m"
              }
#line 1415 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1385 "prog_io_item.m"
          }
#line 1384 "prog_io_item.m"
      }
#line 1385 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1385 "prog_io_item.m"
  }
#line 1380 "prog_io_item.m"
}

#line 591 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_109_97_114_107_101_114_95_95_91_50_93_95_48_7_p_0(
#line 591 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 591 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_10,
#line 591 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 591 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 591 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 591 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItemOrMarker_14)
#line 591 "prog_io_item.m"
{
#line 596 "prog_io_item.m"
  {
#line 596 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__Functor_10, (MR_String) "version_numbers") == 0);
#line 596 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VersionNumberTerm_15;
#line 596 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleNameTerm_16;
#line 596 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VersionNumbersTerm_17;
#line 596 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_36_36;
#line 596 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_37_37;
#line 596 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_38_38;
#line 600 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__VersionNumber_18;
#line 600 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_39_39;
#line 600 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_40_40;
#line 600 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__V_97_97;
#line 600 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;

#line 596 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 596 "prog_io_item.m"
      {
#line 598 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_11)) == (MR_mktag((MR_Integer) 1)));
#line 598 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 598 "prog_io_item.m"
          {
#line 598 "prog_io_item.m"
            parse_tree__prog_io_item__VersionNumberTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_11, (MR_Integer) 0)));
#line 598 "prog_io_item.m"
            parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_11, (MR_Integer) 1)));
#line 598 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 598 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 598 "prog_io_item.m"
              {
#line 598 "prog_io_item.m"
                parse_tree__prog_io_item__ModuleNameTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 598 "prog_io_item.m"
                parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 1)));
#line 598 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 598 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 598 "prog_io_item.m"
                  {
#line 598 "prog_io_item.m"
                    parse_tree__prog_io_item__VersionNumbersTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, (MR_Integer) 0)));
#line 598 "prog_io_item.m"
                    parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, (MR_Integer) 1)));
#line 598 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 596 "prog_io_item.m"
                      {
#line 600 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__VersionNumberTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 600 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 600 "prog_io_item.m"
                          {
#line 600 "prog_io_item.m"
                            parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 0)));
#line 600 "prog_io_item.m"
                            parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 1)));
#line 600 "prog_io_item.m"
                            parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 2)));
#line 600 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 600 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 600 "prog_io_item.m"
                              {
#line 600 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 600 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 600 "prog_io_item.m"
                                  {
#line 600 "prog_io_item.m"
                                    parse_tree__prog_io_item__VersionNumber_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_39_39, (MR_Integer) 0)));
#line 601 "prog_io_item.m"
                                    {
#line 601 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_97_97 = recompilation__version__version_numbers_version_number_0_f_0();
                                    }
#line 601 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__VersionNumber_18 == parse_tree__prog_io_item__V_97_97);
#line 600 "prog_io_item.m"
                                  }
#line 600 "prog_io_item.m"
                              }
#line 600 "prog_io_item.m"
                          }
#line 622 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 614 "prog_io_item.m"
                          {
#line 603 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_98_98;

#line 603 "prog_io_item.m"
                            {
#line 603 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleNameTerm_16, &parse_tree__prog_io_item__V_98_98);
                            }
#line 603 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 603 "prog_io_item.m"
                              {
#line 603 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__V_98_98);
                              }
#line 614 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 605 "prog_io_item.m"
                              {
#line 605 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeVersionNumbers_20;

#line 604 "prog_io_item.m"
                                {
#line 604 "prog_io_item.m"
                                  recompilation__version__parse_version_numbers_2_p_0(parse_tree__prog_io_item__VersionNumbersTerm_17, &parse_tree__prog_io_item__MaybeVersionNumbers_20);
                                }
#line 610 "prog_io_item.m"
                                if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeVersionNumbers_20)) == (MR_mktag((MR_Integer) 0))))
#line 612 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeItemOrMarker_14 = (MR_Word) parse_tree__prog_io_item__MaybeVersionNumbers_20;
#line 610 "prog_io_item.m"
                                else
#line 607 "prog_io_item.m"
                                  {
#line 607 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__VersionNumbers_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeVersionNumbers_20, (MR_Integer) 0)));
#line 607 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__ItemOrMarker_22;

#line 608 "prog_io_item.m"
                                    {
#line 608 "prog_io_item.m"
                                      parse_tree__prog_io_item__ItemOrMarker_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 608 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__ItemOrMarker_22, 0) = ((MR_Box) (parse_tree__prog_io_item__VersionNumbers_21));
#line 608 "prog_io_item.m"
                                    }
#line 609 "prog_io_item.m"
                                    {
#line 609 "prog_io_item.m"
                                      MR_Word base;
#line 609 "prog_io_item.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 609 "prog_io_item.m"
                                      *parse_tree__prog_io_item__MaybeItemOrMarker_14 = base;
#line 609 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ItemOrMarker_22));
#line 609 "prog_io_item.m"
                                    }
#line 607 "prog_io_item.m"
                                  }
#line 605 "prog_io_item.m"
                              }
#line 614 "prog_io_item.m"
                            else
#line 616 "prog_io_item.m"
                              {
#line 616 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Spec_25;
#line 616 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_54_54;
#line 616 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_55_55;
#line 616 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_56_56;
#line 616 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_61_61;

#line 618 "prog_io_item.m"
                                {
#line 618 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_56_56 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleNameTerm_16);
                                }
#line 618 "prog_io_item.m"
                                {
#line 618 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_item__V_56_56));
#line 618 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[153])));
#line 618 "prog_io_item.m"
                                }
#line 619 "prog_io_item.m"
                                {
#line 619 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 619 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "prog_io_item.m"
                                }
#line 617 "prog_io_item.m"
                                {
#line 617 "prog_io_item.m"
                                  parse_tree__prog_io_item__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 617 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 617 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 617 "prog_io_item.m"
                                }
#line 620 "prog_io_item.m"
                                {
#line 620 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_25));
#line 620 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "prog_io_item.m"
                                }
#line 620 "prog_io_item.m"
                                {
#line 620 "prog_io_item.m"
                                  MR_Word base;
#line 620 "prog_io_item.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 620 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeItemOrMarker_14 = base;
#line 620 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_61_61));
#line 620 "prog_io_item.m"
                                }
#line 616 "prog_io_item.m"
                              }
#line 614 "prog_io_item.m"
                          }
#line 622 "prog_io_item.m"
                        else
#line 634 "prog_io_item.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io_item__VersionNumberTerm_15)) == (MR_mktag((MR_Integer) 0))))
#line 624 "prog_io_item.m"
                          {
#line 624 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__DummyTerm_30;
#line 624 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Warning_31;
#line 624 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__ItemNothing_32;
#line 624 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Item_33;
#line 624 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_88_88;
#line 624 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__ItemOrMarker_89;

#line 627 "prog_io_item.m"
                            {
#line 627 "prog_io_item.m"
                              parse_tree__prog_io_item__dummy_term_with_context_2_p_0(parse_tree__prog_io_item__Context_12, &parse_tree__prog_io_item__DummyTerm_30);
                            }
#line 628 "prog_io_item.m"
                            {
#line 628 "prog_io_item.m"
                              parse_tree__prog_io_item__Warning_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 628 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[23])));
#line 628 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_31, 1) = ((MR_Box) ((MR_String) "interface file needs to be recreated, the version numbers are out of date"));
#line 628 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_31, 2) = ((MR_Box) (parse_tree__prog_io_item__DummyTerm_30));
#line 628 "prog_io_item.m"
                            }
#line 630 "prog_io_item.m"
                            {
#line 630 "prog_io_item.m"
                              parse_tree__prog_io_item__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 630 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_item__Warning_31));
#line 630 "prog_io_item.m"
                            }
#line 630 "prog_io_item.m"
                            {
#line 630 "prog_io_item.m"
                              parse_tree__prog_io_item__ItemNothing_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 630 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_32, 0) = ((MR_Box) (parse_tree__prog_io_item__V_88_88));
#line 630 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_32, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 630 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_32, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 630 "prog_io_item.m"
                            }
#line 631 "prog_io_item.m"
                            {
#line 631 "prog_io_item.m"
                              parse_tree__prog_io_item__Item_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "prog_io_item.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 631 "prog_io_item.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_33, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemNothing_32));
#line 631 "prog_io_item.m"
                            }
#line 632 "prog_io_item.m"
                            {
#line 632 "prog_io_item.m"
                              parse_tree__prog_io_item__ItemOrMarker_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 632 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemOrMarker_89, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_33));
#line 632 "prog_io_item.m"
                            }
#line 633 "prog_io_item.m"
                            {
#line 633 "prog_io_item.m"
                              MR_Word base;
#line 633 "prog_io_item.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 633 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItemOrMarker_14 = base;
#line 633 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ItemOrMarker_89));
#line 633 "prog_io_item.m"
                            }
#line 624 "prog_io_item.m"
                          }
#line 634 "prog_io_item.m"
                        else
#line 635 "prog_io_item.m"
                          {
#line 635 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__VersionNumberContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 1)));
#line 635 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_76_76;
#line 635 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_77_77;
#line 635 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_82_82;
#line 635 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Spec_91;
#line 635 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 0)));

#line 639 "prog_io_item.m"
                            {
#line 639 "prog_io_item.m"
                              parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 639 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__VersionNumberContext_35));
#line 639 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[154])));
#line 639 "prog_io_item.m"
                            }
#line 639 "prog_io_item.m"
                            {
#line 639 "prog_io_item.m"
                              parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 639 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 639 "prog_io_item.m"
                            }
#line 638 "prog_io_item.m"
                            {
#line 638 "prog_io_item.m"
                              parse_tree__prog_io_item__Spec_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 638 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 638 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 638 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 2) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 638 "prog_io_item.m"
                            }
#line 640 "prog_io_item.m"
                            {
#line 640 "prog_io_item.m"
                              parse_tree__prog_io_item__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_91));
#line 640 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "prog_io_item.m"
                            }
#line 640 "prog_io_item.m"
                            {
#line 640 "prog_io_item.m"
                              MR_Word base;
#line 640 "prog_io_item.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 640 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItemOrMarker_14 = base;
#line 640 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_82_82));
#line 640 "prog_io_item.m"
                            }
#line 635 "prog_io_item.m"
                          }
#line 622 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 596 "prog_io_item.m"
                      }
#line 598 "prog_io_item.m"
                  }
#line 598 "prog_io_item.m"
              }
#line 598 "prog_io_item.m"
          }
#line 596 "prog_io_item.m"
      }
#line 596 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 596 "prog_io_item.m"
  }
#line 591 "prog_io_item.m"
}

#line 1408 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1408__1_2_p_0(
#line 1408 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1408 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39)
#line 1408 "prog_io_item.m"
{
#line 1408 "prog_io_item.m"
  {
#line 1408 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1408 "prog_io_item.m"
    {
#line 1408 "prog_io_item.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_38, parse_tree__prog_io_item__HeadVar__2_39);
#line 1408 "prog_io_item.m"
      return;
    }
#line 1408 "prog_io_item.m"
  }
#line 1408 "prog_io_item.m"
}

#line 1320 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1320__1_2_p_0(
#line 1320 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1320 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39)
#line 1320 "prog_io_item.m"
{
#line 1320 "prog_io_item.m"
  {
#line 1320 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1320 "prog_io_item.m"
    {
#line 1320 "prog_io_item.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__HeadVar__1_38, parse_tree__prog_io_item__HeadVar__2_39);
#line 1320 "prog_io_item.m"
      return;
    }
#line 1320 "prog_io_item.m"
  }
#line 1320 "prog_io_item.m"
}

#line 366 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__366__1_2_p_0(
#line 366 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_79,
#line 366 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_80)
#line 366 "prog_io_item.m"
{
#line 366 "prog_io_item.m"
  {
#line 366 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 366 "prog_io_item.m"
    {
#line 366 "prog_io_item.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_79, parse_tree__prog_io_item__HeadVar__2_80);
#line 366 "prog_io_item.m"
      return;
    }
#line 366 "prog_io_item.m"
  }
#line 366 "prog_io_item.m"
}

#line 350 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__350__1_2_p_0(
#line 350 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_73,
#line 350 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_74)
#line 350 "prog_io_item.m"
{
#line 350 "prog_io_item.m"
  {
#line 350 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 350 "prog_io_item.m"
    {
#line 350 "prog_io_item.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_73, parse_tree__prog_io_item__HeadVar__2_74);
#line 350 "prog_io_item.m"
      return;
    }
#line 350 "prog_io_item.m"
  }
#line 350 "prog_io_item.m"
}

#line 1611 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0(
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_6,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_7,
#line 1611 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 1611 "prog_io_item.m"
{
#line 1611 "prog_io_item.m"
  {
#line 1611 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1611 "prog_io_item.m"
    {
#line 1611 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__HeadVar__2_2, parse_tree__prog_io_item__HeadVar__3_3);
#line 1611 "prog_io_item.m"
      return;
    }
#line 1611 "prog_io_item.m"
  }
#line 1611 "prog_io_item.m"
}

#line 1611 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0(
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_5,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_6,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 1611 "prog_io_item.m"
{
#line 1611 "prog_io_item.m"
  {
#line 1611 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1611 "prog_io_item.m"
    {
#line 1611 "prog_io_item.m"
      return parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__HeadVar__2_2);
    }
#line 1611 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1611 "prog_io_item.m"
  }
#line 1611 "prog_io_item.m"
}

#line 30 "prog_io_item.m"
void MR_CALL 
parse_tree__prog_io_item____Compare____item_or_marker_0_0(
#line 30 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 30 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 30 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 30 "prog_io_item.m"
{
#line 30 "prog_io_item.m"
  {
#line 30 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 30 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastX_192 = (MR_Integer) parse_tree__prog_io_item__HeadVar__2_2;
#line 30 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastY_193 = (MR_Integer) parse_tree__prog_io_item__HeadVar__3_3;

#line 30 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__CastX_192 == parse_tree__prog_io_item__CastY_193);
#line 30 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 3543 "parse_tree.prog_io_item.c"
      *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 0;
#line 30 "prog_io_item.m"
    else
#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) {
#line 30 "prog_io_item.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
        case (MR_Integer) 0:
#line 30 "prog_io_item.m"
          {
#line 30 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));

#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 30 "prog_io_item.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
              case (MR_Integer) 0:
#line 30 "prog_io_item.m"
                {
#line 30 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)));

#line 30 "prog_io_item.m"
                  {
#line 30 "prog_io_item.m"
                    parse_tree__prog_item____Compare____item_0_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_207_207, parse_tree__prog_io_item__V_5_5);
#line 30 "prog_io_item.m"
                    return;
                  }
#line 30 "prog_io_item.m"
                }
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
              case (MR_Integer) 1:
#line 3584 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
              case (MR_Integer) 2:
#line 3590 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
              case (MR_Integer) 3:
#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)))) {
#line 30 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 3603 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 3609 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 3615 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 3621 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                }
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
            }
#line 30 "prog_io_item.m"
          }
#line 30 "prog_io_item.m"
          break;
#line 30 "prog_io_item.m"
        case (MR_Integer) 1:
#line 30 "prog_io_item.m"
          {
#line 30 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));

#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 30 "prog_io_item.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
              case (MR_Integer) 0:
#line 3649 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
              case (MR_Integer) 1:
#line 30 "prog_io_item.m"
                {
#line 30 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)));

#line 30 "prog_io_item.m"
                  {
#line 30 "prog_io_item.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[11], parse_tree__prog_io_item__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_item__V_208_208)), ((MR_Box) (parse_tree__prog_io_item__V_27_27)));
#line 30 "prog_io_item.m"
                    return;
                  }
#line 30 "prog_io_item.m"
                }
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
              case (MR_Integer) 2:
#line 3673 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
              case (MR_Integer) 3:
#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)))) {
#line 30 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 3686 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 3692 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 3698 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 3704 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                }
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
            }
#line 30 "prog_io_item.m"
          }
#line 30 "prog_io_item.m"
          break;
#line 30 "prog_io_item.m"
        case (MR_Integer) 2:
#line 30 "prog_io_item.m"
          {
#line 30 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));

#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 30 "prog_io_item.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
              case (MR_Integer) 0:
#line 3732 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
              case (MR_Integer) 1:
#line 3738 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
              case (MR_Integer) 2:
#line 30 "prog_io_item.m"
                {
#line 30 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)));

#line 30 "prog_io_item.m"
                  {
#line 30 "prog_io_item.m"
                    recompilation____Compare____version_numbers_0_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_219_219, parse_tree__prog_io_item__V_49_49);
#line 30 "prog_io_item.m"
                    return;
                  }
#line 30 "prog_io_item.m"
                }
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
              case (MR_Integer) 3:
#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)))) {
#line 30 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 3769 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 3775 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 3781 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 3787 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                }
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
            }
#line 30 "prog_io_item.m"
          }
#line 30 "prog_io_item.m"
          break;
#line 30 "prog_io_item.m"
        case (MR_Integer) 3:
#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)))) {
#line 30 "prog_io_item.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
            case (MR_Integer) 0:
#line 30 "prog_io_item.m"
              {
#line 30 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__V_218_218 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));

#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 30 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 3822 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 3828 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 3834 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)))) {
#line 30 "prog_io_item.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                      case (MR_Integer) 0:
#line 30 "prog_io_item.m"
                        {
#line 30 "prog_io_item.m"
                          MR_String parse_tree__prog_io_item__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 1)));

#line 30 "prog_io_item.m"
                          {
#line 30 "prog_io_item.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_218_218, parse_tree__prog_io_item__V_71_71);
#line 30 "prog_io_item.m"
                            return;
                          }
#line 30 "prog_io_item.m"
                        }
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 1:
#line 3865 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 2:
#line 3871 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 3:
#line 3877 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                    }
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                }
#line 30 "prog_io_item.m"
              }
#line 30 "prog_io_item.m"
              break;
#line 30 "prog_io_item.m"
            case (MR_Integer) 1:
#line 30 "prog_io_item.m"
              {
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_212_212 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));

#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 30 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 3909 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 3915 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 3921 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)))) {
#line 30 "prog_io_item.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                      case (MR_Integer) 0:
#line 3934 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 1:
#line 30 "prog_io_item.m"
                        {
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                          MR_Integer parse_tree__prog_io_item__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_106_106;

#line 30 "prog_io_item.m"
                          {
#line 30 "prog_io_item.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io_item__V_106_106, parse_tree__prog_io_item__V_214_214, parse_tree__prog_io_item__V_103_103);
                          }
#line 3956 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_106_106 == (MR_Integer) 0);
#line 30 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 30 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                            *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_106_106;
#line 30 "prog_io_item.m"
                          else
#line 30 "prog_io_item.m"
                            {
#line 30 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__V_107_107;

#line 30 "prog_io_item.m"
                              {
#line 30 "prog_io_item.m"
                                mercury__term____Compare____context_0_0(&parse_tree__prog_io_item__V_107_107, parse_tree__prog_io_item__V_213_213, parse_tree__prog_io_item__V_104_104);
                              }
#line 3976 "parse_tree.prog_io_item.c"
                              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_107_107 == (MR_Integer) 0);
#line 30 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 30 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                                *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_107_107;
#line 30 "prog_io_item.m"
                              else
#line 30 "prog_io_item.m"
                                {
#line 30 "prog_io_item.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_212_212, parse_tree__prog_io_item__V_105_105);
#line 30 "prog_io_item.m"
                                  return;
                                }
#line 30 "prog_io_item.m"
                            }
#line 30 "prog_io_item.m"
                        }
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 2:
#line 4001 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 3:
#line 4007 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                    }
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                }
#line 30 "prog_io_item.m"
              }
#line 30 "prog_io_item.m"
              break;
#line 30 "prog_io_item.m"
            case (MR_Integer) 2:
#line 30 "prog_io_item.m"
              {
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_209_209 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));

#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 30 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 4039 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 4045 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 4051 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)))) {
#line 30 "prog_io_item.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                      case (MR_Integer) 0:
#line 4064 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 1:
#line 4070 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 2:
#line 30 "prog_io_item.m"
                        {
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                          MR_Integer parse_tree__prog_io_item__V_147_147 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_148_148;

#line 30 "prog_io_item.m"
                          {
#line 30 "prog_io_item.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io_item__V_148_148, parse_tree__prog_io_item__V_211_211, parse_tree__prog_io_item__V_145_145);
                          }
#line 4092 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_148_148 == (MR_Integer) 0);
#line 30 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 30 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                            *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_148_148;
#line 30 "prog_io_item.m"
                          else
#line 30 "prog_io_item.m"
                            {
#line 30 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__V_149_149;

#line 30 "prog_io_item.m"
                              {
#line 30 "prog_io_item.m"
                                mercury__term____Compare____context_0_0(&parse_tree__prog_io_item__V_149_149, parse_tree__prog_io_item__V_210_210, parse_tree__prog_io_item__V_146_146);
                              }
#line 4112 "parse_tree.prog_io_item.c"
                              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_149_149 == (MR_Integer) 0);
#line 30 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 30 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                                *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_149_149;
#line 30 "prog_io_item.m"
                              else
#line 30 "prog_io_item.m"
                                {
#line 30 "prog_io_item.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_209_209, parse_tree__prog_io_item__V_147_147);
#line 30 "prog_io_item.m"
                                  return;
                                }
#line 30 "prog_io_item.m"
                            }
#line 30 "prog_io_item.m"
                        }
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 3:
#line 4137 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                    }
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                }
#line 30 "prog_io_item.m"
              }
#line 30 "prog_io_item.m"
              break;
#line 30 "prog_io_item.m"
            case (MR_Integer) 3:
#line 30 "prog_io_item.m"
              {
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_215_215 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));

#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 30 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 4169 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 4175 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 4181 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)))) {
#line 30 "prog_io_item.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                      case (MR_Integer) 0:
#line 4194 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 1:
#line 4200 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 2:
#line 4206 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 3:
#line 30 "prog_io_item.m"
                        {
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                          MR_Integer parse_tree__prog_io_item__V_189_189 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_190_190;
#line 30 "prog_io_item.m"
                          MR_Integer parse_tree__prog_io_item__V_220_220 = (MR_Integer) parse_tree__prog_io_item__V_217_217;
#line 30 "prog_io_item.m"
                          MR_Integer parse_tree__prog_io_item__V_221_221 = (MR_Integer) parse_tree__prog_io_item__V_187_187;

#line 30 "prog_io_item.m"
                          {
#line 30 "prog_io_item.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_item__V_190_190, parse_tree__prog_io_item__V_220_220, parse_tree__prog_io_item__V_221_221);
                          }
#line 4232 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_190_190 == (MR_Integer) 0);
#line 30 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 30 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                            *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_190_190;
#line 30 "prog_io_item.m"
                          else
#line 30 "prog_io_item.m"
                            {
#line 30 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__V_191_191;

#line 30 "prog_io_item.m"
                              {
#line 30 "prog_io_item.m"
                                mercury__term____Compare____context_0_0(&parse_tree__prog_io_item__V_191_191, parse_tree__prog_io_item__V_216_216, parse_tree__prog_io_item__V_188_188);
                              }
#line 4252 "parse_tree.prog_io_item.c"
                              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_191_191 == (MR_Integer) 0);
#line 30 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 30 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                                *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_191_191;
#line 30 "prog_io_item.m"
                              else
#line 30 "prog_io_item.m"
                                {
#line 30 "prog_io_item.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_215_215, parse_tree__prog_io_item__V_189_189);
#line 30 "prog_io_item.m"
                                  return;
                                }
#line 30 "prog_io_item.m"
                            }
#line 30 "prog_io_item.m"
                        }
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                    }
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                }
#line 30 "prog_io_item.m"
              }
#line 30 "prog_io_item.m"
              break;
#line 30 "prog_io_item.m"
          }
#line 30 "prog_io_item.m"
          break;
#line 30 "prog_io_item.m"
      }
#line 30 "prog_io_item.m"
  }
#line 30 "prog_io_item.m"
}

#line 30 "prog_io_item.m"
MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____item_or_marker_0_0(
#line 30 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 30 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 30 "prog_io_item.m"
{
#line 30 "prog_io_item.m"
  {
#line 30 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 30 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastX_29 = (MR_Integer) parse_tree__prog_io_item__HeadVar__1_1;
#line 30 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastY_30 = (MR_Integer) parse_tree__prog_io_item__HeadVar__2_2;

#line 30 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__CastX_29 == parse_tree__prog_io_item__CastY_30);
#line 30 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 30 "prog_io_item.m"
    else
#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__1_1)) {
#line 30 "prog_io_item.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
        case (MR_Integer) 0:
#line 30 "prog_io_item.m"
          {
#line 30 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)));
#line 30 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_4_4;

#line 30 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 30 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
              {
#line 30 "prog_io_item.m"
                parse_tree__prog_io_item__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 4344 "parse_tree.prog_io_item.c"
                {
#line 4346 "parse_tree.prog_io_item.c"
                  return parse_tree__prog_io_item__succeeded = parse_tree__prog_item____Unify____item_0_0(parse_tree__prog_io_item__V_3_3, parse_tree__prog_io_item__V_4_4);
                }
#line 30 "prog_io_item.m"
              }
#line 30 "prog_io_item.m"
          }
#line 30 "prog_io_item.m"
          break;
#line 30 "prog_io_item.m"
        case (MR_Integer) 1:
#line 30 "prog_io_item.m"
          {
#line 30 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeInfo_32_32;
#line 30 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)));
#line 30 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_6_6;

#line 30 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 30 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
              {
#line 30 "prog_io_item.m"
                parse_tree__prog_io_item__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 4374 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeInfo_32_32 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[11];
#line 4376 "parse_tree.prog_io_item.c"
                {
#line 4378 "parse_tree.prog_io_item.c"
                  return parse_tree__prog_io_item__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_item__TypeInfo_32_32, ((MR_Box) (parse_tree__prog_io_item__V_5_5)), ((MR_Box) (parse_tree__prog_io_item__V_6_6)));
                }
#line 30 "prog_io_item.m"
              }
#line 30 "prog_io_item.m"
          }
#line 30 "prog_io_item.m"
          break;
#line 30 "prog_io_item.m"
        case (MR_Integer) 2:
#line 30 "prog_io_item.m"
          {
#line 30 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)));
#line 30 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_8_8;

#line 30 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 30 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
              {
#line 30 "prog_io_item.m"
                parse_tree__prog_io_item__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 4404 "parse_tree.prog_io_item.c"
                {
#line 4406 "parse_tree.prog_io_item.c"
                  return parse_tree__prog_io_item__succeeded = recompilation____Unify____version_numbers_0_0(parse_tree__prog_io_item__V_7_7, parse_tree__prog_io_item__V_8_8);
                }
#line 30 "prog_io_item.m"
              }
#line 30 "prog_io_item.m"
          }
#line 30 "prog_io_item.m"
          break;
#line 30 "prog_io_item.m"
        case (MR_Integer) 3:
#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)))) {
#line 30 "prog_io_item.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
            case (MR_Integer) 0:
#line 30 "prog_io_item.m"
              {
#line 30 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__V_10_10;

#line 30 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 30 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                  {
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 4439 "parse_tree.prog_io_item.c"
                    parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_9_9, parse_tree__prog_io_item__V_10_10) == 0);
#line 30 "prog_io_item.m"
                  }
#line 30 "prog_io_item.m"
              }
#line 30 "prog_io_item.m"
              break;
#line 30 "prog_io_item.m"
            case (MR_Integer) 1:
#line 30 "prog_io_item.m"
              {
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_14_14;
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_15_15;
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_16_16;

#line 30 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                  {
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 4476 "parse_tree.prog_io_item.c"
                    {
#line 4478 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_item__V_11_11, parse_tree__prog_io_item__V_14_14);
                    }
#line 30 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                      {
#line 4485 "parse_tree.prog_io_item.c"
                        {
#line 4487 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io_item__V_12_12, parse_tree__prog_io_item__V_15_15);
                        }
#line 30 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 4492 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_13_13 == parse_tree__prog_io_item__V_16_16);
#line 30 "prog_io_item.m"
                      }
#line 30 "prog_io_item.m"
                  }
#line 30 "prog_io_item.m"
              }
#line 30 "prog_io_item.m"
              break;
#line 30 "prog_io_item.m"
            case (MR_Integer) 2:
#line 30 "prog_io_item.m"
              {
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_20_20;
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_21_21;
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_22_22;

#line 30 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                  {
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 4531 "parse_tree.prog_io_item.c"
                    {
#line 4533 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_item__V_17_17, parse_tree__prog_io_item__V_20_20);
                    }
#line 30 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                      {
#line 4540 "parse_tree.prog_io_item.c"
                        {
#line 4542 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io_item__V_18_18, parse_tree__prog_io_item__V_21_21);
                        }
#line 30 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 4547 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_19_19 == parse_tree__prog_io_item__V_22_22);
#line 30 "prog_io_item.m"
                      }
#line 30 "prog_io_item.m"
                  }
#line 30 "prog_io_item.m"
              }
#line 30 "prog_io_item.m"
              break;
#line 30 "prog_io_item.m"
            case (MR_Integer) 3:
#line 30 "prog_io_item.m"
              {
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_26_26;
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_27_27;
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_28_28;

#line 30 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                  {
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 4586 "parse_tree.prog_io_item.c"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_23_23 == parse_tree__prog_io_item__V_26_26);
#line 30 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                      {
#line 4592 "parse_tree.prog_io_item.c"
                        {
#line 4594 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io_item__V_24_24, parse_tree__prog_io_item__V_27_27);
                        }
#line 30 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 4599 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_25_25 == parse_tree__prog_io_item__V_28_28);
#line 30 "prog_io_item.m"
                      }
#line 30 "prog_io_item.m"
                  }
#line 30 "prog_io_item.m"
              }
#line 30 "prog_io_item.m"
              break;
#line 30 "prog_io_item.m"
          }
#line 30 "prog_io_item.m"
          break;
#line 30 "prog_io_item.m"
      }
#line 30 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 30 "prog_io_item.m"
  }
#line 30 "prog_io_item.m"
}

#line 1635 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__dummy_term_with_context_2_p_0(
#line 1635 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_3,
#line 1635 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Term_4)
#line 1635 "prog_io_item.m"
{
#line 1637 "prog_io_item.m"
  {
#line 1637 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1638 "prog_io_item.m"
    {
#line 1638 "prog_io_item.m"
      MR_Word base;
#line 1638 "prog_io_item.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1638 "prog_io_item.m"
      *parse_tree__prog_io_item__Term_4 = base;
#line 1638 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[21]));
#line 1638 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1638 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_3));
#line 1638 "prog_io_item.m"
    }
#line 1637 "prog_io_item.m"
  }
#line 1635 "prog_io_item.m"
}

#line 1602 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(
#line 1602 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1)
#line 1602 "prog_io_item.m"
{
#line 1604 "prog_io_item.m"
  {
#line 1604 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1604 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__HeadVar__2_2;

#line 1604 "prog_io_item.m"
#line 1604 "prog_io_item.m"
    switch (parse_tree__prog_io_item__HeadVar__1_1) {
#line 1604 "prog_io_item.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1604 "prog_io_item.m"
      case (MR_Integer) 1:
#line 1604 "prog_io_item.m"
        parse_tree__prog_io_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[71]);
#line 1604 "prog_io_item.m"
        break;
#line 1604 "prog_io_item.m"
      case (MR_Integer) 0:
#line 1606 "prog_io_item.m"
        parse_tree__prog_io_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[111]);
#line 1604 "prog_io_item.m"
        break;
#line 1604 "prog_io_item.m"
    }
#line 1604 "prog_io_item.m"
    return parse_tree__prog_io_item__HeadVar__2_2;
#line 1604 "prog_io_item.m"
  }
#line 1602 "prog_io_item.m"
}

#line 1591 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_purity_3_p_0(
#line 1591 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Purity_4,
#line 1591 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8,
#line 1591 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9)
#line 1591 "prog_io_item.m"
{
#line 1596 "prog_io_item.m"
  {
#line 1596 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8)) == (MR_mktag((MR_Integer) 1)));
#line 1596 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Purity0_6;
#line 1596 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10;
#line 1594 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_11_11;
#line 1594 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_12_12;
#line 1594 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_7_7;

#line 1594 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1594 "prog_io_item.m"
      {
#line 1594 "prog_io_item.m"
        parse_tree__prog_io_item__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8, (MR_Integer) 0)));
#line 1594 "prog_io_item.m"
        parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8, (MR_Integer) 1)));
#line 1594 "prog_io_item.m"
        parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_11_11, (MR_Integer) 0)));
#line 1594 "prog_io_item.m"
        parse_tree__prog_io_item__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_11_11, (MR_Integer) 1)));
#line 1594 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1594 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1594 "prog_io_item.m"
          parse_tree__prog_io_item__Purity0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_12_12, (MR_Integer) 0)));
#line 1594 "prog_io_item.m"
      }
#line 1596 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1595 "prog_io_item.m"
      {
#line 1595 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10;
#line 1595 "prog_io_item.m"
        *parse_tree__prog_io_item__Purity_4 = parse_tree__prog_io_item__Purity0_6;
#line 1595 "prog_io_item.m"
      }
#line 1596 "prog_io_item.m"
    else
#line 1597 "prog_io_item.m"
      {
#line 1597 "prog_io_item.m"
        *parse_tree__prog_io_item__Purity_4 = (MR_Integer) 0;
#line 1597 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8;
#line 1597 "prog_io_item.m"
      }
#line 1596 "prog_io_item.m"
  }
#line 1591 "prog_io_item.m"
}

#line 1570 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_implicitly_qualified_module_name_4_p_0(
#line 1570 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__DefaultModuleName_5,
#line 1570 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1570 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_7,
#line 1570 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModule_8)
#line 1570 "prog_io_item.m"
{
#line 1576 "prog_io_item.m"
  {
#line 1576 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1576 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__Term_7)) == (MR_mktag((MR_Integer) 0))))
#line 1585 "prog_io_item.m"
      {
#line 1585 "prog_io_item.m"
        parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_item__DefaultModuleName_5, parse_tree__prog_io_item__VarSet_6, parse_tree__prog_io_item__Term_7, parse_tree__prog_io_item__MaybeModule_8);
#line 1585 "prog_io_item.m"
        return;
      }
#line 1576 "prog_io_item.m"
    else
#line 1576 "prog_io_item.m"
      {
#line 1576 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Term_7, (MR_Integer) 1)));
#line 1576 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_12;
#line 1576 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 1576 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 1576 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1576 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Term_7, (MR_Integer) 0)));

#line 1581 "prog_io_item.m"
        {
#line 1581 "prog_io_item.m"
          parse_tree__prog_io_item__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1581 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_10));
#line 1581 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[152])));
#line 1581 "prog_io_item.m"
        }
#line 1581 "prog_io_item.m"
        {
#line 1581 "prog_io_item.m"
          parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_item__V_30_30));
#line 1581 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1581 "prog_io_item.m"
        }
#line 1580 "prog_io_item.m"
        {
#line 1580 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1580 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1580 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1580 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 1580 "prog_io_item.m"
        }
#line 1582 "prog_io_item.m"
        {
#line 1582 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1582 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_12));
#line 1582 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1582 "prog_io_item.m"
        }
#line 1582 "prog_io_item.m"
        {
#line 1582 "prog_io_item.m"
          MR_Word base;
#line 1582 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1582 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeModule_8 = base;
#line 1582 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 1582 "prog_io_item.m"
        }
#line 1576 "prog_io_item.m"
      }
#line 1576 "prog_io_item.m"
  }
#line 1570 "prog_io_item.m"
}

#line 1559 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_name_3_p_0(
#line 1559 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 1559 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1559 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModuleName_6)
#line 1559 "prog_io_item.m"
{
#line 1563 "prog_io_item.m"
  {
#line 1563 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1563 "prog_io_item.m"
    {
#line 1563 "prog_io_item.m"
      parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__VarSet_4, parse_tree__prog_io_item__Term_5, parse_tree__prog_io_item__MaybeModuleName_6);
#line 1563 "prog_io_item.m"
      return;
    }
#line 1563 "prog_io_item.m"
  }
#line 1559 "prog_io_item.m"
}

#line 1536 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__desugar_field_access_1_f_0(
#line 1536 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_3)
#line 1536 "prog_io_item.m"
{
#line 1544 "prog_io_item.m"
  {
#line 1544 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1544 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DesugaredTerm_4;
#line 1544 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__A_5;
#line 1544 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Context_7;
#line 1544 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Bs_9;
#line 1544 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;
#line 1540 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__RHS_6;
#line 1540 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 1540 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_17_17;
#line 1540 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_18_18;
#line 1540 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1540 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_20_20;
#line 1541 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_10_10;
#line 1541 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__FieldName_8;

#line 1540 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1540 "prog_io_item.m"
      {
#line 1540 "prog_io_item.m"
        parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 0)));
#line 1540 "prog_io_item.m"
        parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 1)));
#line 1540 "prog_io_item.m"
        parse_tree__prog_io_item__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 2)));
#line 1540 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 1540 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1540 "prog_io_item.m"
          {
#line 1540 "prog_io_item.m"
            parse_tree__prog_io_item__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 1540 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_17_17, (MR_String) "^") == 0);
#line 1540 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1540 "prog_io_item.m"
              {
#line 1540 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 1540 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1540 "prog_io_item.m"
                  {
#line 1540 "prog_io_item.m"
                    parse_tree__prog_io_item__A_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1540 "prog_io_item.m"
                    parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1540 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 1540 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1540 "prog_io_item.m"
                      {
#line 1540 "prog_io_item.m"
                        parse_tree__prog_io_item__RHS_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1540 "prog_io_item.m"
                        parse_tree__prog_io_item__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, (MR_Integer) 1)));
#line 1540 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1540 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1540 "prog_io_item.m"
                          {
#line 1541 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__RHS_6)) == (MR_mktag((MR_Integer) 0)));
#line 1541 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 1541 "prog_io_item.m"
                              {
#line 1541 "prog_io_item.m"
                                parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 0)));
#line 1541 "prog_io_item.m"
                                parse_tree__prog_io_item__Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 1)));
#line 1541 "prog_io_item.m"
                                parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 2)));
#line 1541 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 1541 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 1541 "prog_io_item.m"
                                  parse_tree__prog_io_item__FieldName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 1541 "prog_io_item.m"
                              }
#line 1540 "prog_io_item.m"
                          }
#line 1540 "prog_io_item.m"
                      }
#line 1540 "prog_io_item.m"
                  }
#line 1540 "prog_io_item.m"
              }
#line 1540 "prog_io_item.m"
          }
#line 1540 "prog_io_item.m"
      }
#line 1544 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1543 "prog_io_item.m"
      {
#line 1543 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 1543 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;

#line 1543 "prog_io_item.m"
        {
#line 1543 "prog_io_item.m"
          parse_tree__prog_io_item__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1543 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_item__A_5));
#line 1543 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1543 "prog_io_item.m"
        }
#line 1543 "prog_io_item.m"
        {
#line 1543 "prog_io_item.m"
          parse_tree__prog_io_item__V_23_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__Bs_9, parse_tree__prog_io_item__V_24_24);
        }
#line 1543 "prog_io_item.m"
        {
#line 1543 "prog_io_item.m"
          parse_tree__prog_io_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1543 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io_item__V_21_21));
#line 1543 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io_item__V_23_23));
#line 1543 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_7));
#line 1543 "prog_io_item.m"
        }
#line 1543 "prog_io_item.m"
      }
#line 1544 "prog_io_item.m"
    else
#line 1551 "prog_io_item.m"
      {
#line 1551 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_12;
#line 1551 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__A_44;
#line 1551 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_46;
#line 1551 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__FieldName_47;
#line 1551 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Bs_48;
#line 1545 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__LHS_11;
#line 1545 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_26_26;
#line 1545 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_27_27;
#line 1545 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_28_28;
#line 1545 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 1545 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 1545 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_31_31;
#line 1545 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_32_32;
#line 1545 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 1545 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_34_34;
#line 1545 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1545 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;
#line 1545 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__RHS_43;
#line 1545 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_13_13;
#line 1547 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_14_14;

#line 1545 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1545 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1545 "prog_io_item.m"
          {
#line 1545 "prog_io_item.m"
            parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 0)));
#line 1545 "prog_io_item.m"
            parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 1)));
#line 1545 "prog_io_item.m"
            parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 2)));
#line 1545 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_26_26)) == (MR_mktag((MR_Integer) 0)));
#line 1545 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1545 "prog_io_item.m"
              {
#line 1545 "prog_io_item.m"
                parse_tree__prog_io_item__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 0)));
#line 1545 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_27_27, (MR_String) ":=") == 0);
#line 1545 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1545 "prog_io_item.m"
                  {
#line 1545 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1545 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1545 "prog_io_item.m"
                      {
#line 1545 "prog_io_item.m"
                        parse_tree__prog_io_item__LHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 0)));
#line 1545 "prog_io_item.m"
                        parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 1)));
#line 1545 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 1545 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1545 "prog_io_item.m"
                          {
#line 1545 "prog_io_item.m"
                            parse_tree__prog_io_item__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 0)));
#line 1545 "prog_io_item.m"
                            parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 1)));
#line 1545 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1545 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 1545 "prog_io_item.m"
                              {
#line 1546 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__LHS_11)) == (MR_mktag((MR_Integer) 0)));
#line 1546 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 1546 "prog_io_item.m"
                                  {
#line 1546 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 0)));
#line 1546 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 1)));
#line 1546 "prog_io_item.m"
                                    parse_tree__prog_io_item__Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 2)));
#line 1546 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 1546 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 1546 "prog_io_item.m"
                                      {
#line 1546 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 1546 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_32_32, (MR_String) "^") == 0);
#line 1545 "prog_io_item.m"
                                        if (parse_tree__prog_io_item__succeeded)
#line 1545 "prog_io_item.m"
                                          {
#line 1546 "prog_io_item.m"
                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1546 "prog_io_item.m"
                                            if (parse_tree__prog_io_item__succeeded)
#line 1546 "prog_io_item.m"
                                              {
#line 1546 "prog_io_item.m"
                                                parse_tree__prog_io_item__A_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 0)));
#line 1546 "prog_io_item.m"
                                                parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 1)));
#line 1546 "prog_io_item.m"
                                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1546 "prog_io_item.m"
                                                if (parse_tree__prog_io_item__succeeded)
#line 1546 "prog_io_item.m"
                                                  {
#line 1546 "prog_io_item.m"
                                                    parse_tree__prog_io_item__RHS_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 0)));
#line 1546 "prog_io_item.m"
                                                    parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 1)));
#line 1546 "prog_io_item.m"
                                                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1545 "prog_io_item.m"
                                                    if (parse_tree__prog_io_item__succeeded)
#line 1545 "prog_io_item.m"
                                                      {
#line 1547 "prog_io_item.m"
                                                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__RHS_43)) == (MR_mktag((MR_Integer) 0)));
#line 1547 "prog_io_item.m"
                                                        if (parse_tree__prog_io_item__succeeded)
#line 1547 "prog_io_item.m"
                                                          {
#line 1547 "prog_io_item.m"
                                                            parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 0)));
#line 1547 "prog_io_item.m"
                                                            parse_tree__prog_io_item__Bs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 1)));
#line 1547 "prog_io_item.m"
                                                            parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 2)));
#line 1547 "prog_io_item.m"
                                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 1547 "prog_io_item.m"
                                                            if (parse_tree__prog_io_item__succeeded)
#line 1547 "prog_io_item.m"
                                                              parse_tree__prog_io_item__FieldName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 1547 "prog_io_item.m"
                                                          }
#line 1545 "prog_io_item.m"
                                                      }
#line 1546 "prog_io_item.m"
                                                  }
#line 1546 "prog_io_item.m"
                                              }
#line 1545 "prog_io_item.m"
                                          }
#line 1546 "prog_io_item.m"
                                      }
#line 1546 "prog_io_item.m"
                                  }
#line 1545 "prog_io_item.m"
                              }
#line 1545 "prog_io_item.m"
                          }
#line 1545 "prog_io_item.m"
                      }
#line 1545 "prog_io_item.m"
                  }
#line 1545 "prog_io_item.m"
              }
#line 1545 "prog_io_item.m"
          }
#line 1551 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1549 "prog_io_item.m"
          {
#line 1549 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__FunctionName_15;
#line 1549 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;
#line 1549 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_39_39;
#line 1549 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1549 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;

#line 1549 "prog_io_item.m"
            {
#line 1549 "prog_io_item.m"
              parse_tree__prog_io_item__FunctionName_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_item__FieldName_47, (MR_String) " :=");
            }
#line 1550 "prog_io_item.m"
            {
#line 1550 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1550 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_item__FunctionName_15));
#line 1550 "prog_io_item.m"
            }
#line 1550 "prog_io_item.m"
            {
#line 1550 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1550 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__X_12));
#line 1550 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1550 "prog_io_item.m"
            }
#line 1550 "prog_io_item.m"
            {
#line 1550 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1550 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__A_44));
#line 1550 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1550 "prog_io_item.m"
            }
#line 1550 "prog_io_item.m"
            {
#line 1550 "prog_io_item.m"
              parse_tree__prog_io_item__V_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__Bs_48, parse_tree__prog_io_item__V_40_40);
            }
#line 1550 "prog_io_item.m"
            {
#line 1550 "prog_io_item.m"
              parse_tree__prog_io_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1550 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1550 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 1550 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_46));
#line 1550 "prog_io_item.m"
            }
#line 1549 "prog_io_item.m"
          }
#line 1551 "prog_io_item.m"
        else
#line 1552 "prog_io_item.m"
          parse_tree__prog_io_item__DesugaredTerm_4 = parse_tree__prog_io_item__Term_3;
#line 1551 "prog_io_item.m"
      }
#line 1544 "prog_io_item.m"
    return parse_tree__prog_io_item__DesugaredTerm_4;
#line 1544 "prog_io_item.m"
  }
#line 1536 "prog_io_item.m"
}

#line 1490 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(
#line 1490 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 1490 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithInstTerm_5,
#line 1490 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithInst_6)
#line 1490 "prog_io_item.m"
{
#line 1508 "prog_io_item.m"
  {
#line 1508 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 1508 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTermPrime_7;
#line 1508 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InstTerm_8;
#line 1495 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_13_13;
#line 1495 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_14_14;
#line 1495 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_15_15;
#line 1495 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 1495 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 1495 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_9_9;

#line 1495 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1495 "prog_io_item.m"
      {
#line 1495 "prog_io_item.m"
        parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 0)));
#line 1495 "prog_io_item.m"
        parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 1)));
#line 1495 "prog_io_item.m"
        parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 2)));
#line 1495 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 1495 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1495 "prog_io_item.m"
          {
#line 1495 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_13_13, (MR_Integer) 0)));
#line 1495 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_14_14, (MR_String) "with_inst") == 0);
#line 1495 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1495 "prog_io_item.m"
              {
#line 1496 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1496 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1496 "prog_io_item.m"
                  {
#line 1496 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeWithInstTermPrime_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 0)));
#line 1496 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 1)));
#line 1496 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1496 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1496 "prog_io_item.m"
                      {
#line 1496 "prog_io_item.m"
                        parse_tree__prog_io_item__InstTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 1496 "prog_io_item.m"
                        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 1)));
#line 1496 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1496 "prog_io_item.m"
                      }
#line 1496 "prog_io_item.m"
                  }
#line 1495 "prog_io_item.m"
              }
#line 1495 "prog_io_item.m"
          }
#line 1495 "prog_io_item.m"
      }
#line 1508 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1498 "prog_io_item.m"
      {
#line 1501 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Inst_10;

#line 1498 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithInstTerm_5 = parse_tree__prog_io_item__BeforeWithInstTermPrime_7;
#line 1499 "prog_io_item.m"
        {
#line 1499 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__InstTerm_8, &parse_tree__prog_io_item__Inst_10);
        }
#line 1501 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1500 "prog_io_item.m"
          {
#line 1500 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_19_19;

#line 1500 "prog_io_item.m"
            {
#line 1500 "prog_io_item.m"
              parse_tree__prog_io_item__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_item__Inst_10));
#line 1500 "prog_io_item.m"
            }
#line 1500 "prog_io_item.m"
            {
#line 1500 "prog_io_item.m"
              MR_Word base;
#line 1500 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithInst_6 = base;
#line 1500 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_19_19));
#line 1500 "prog_io_item.m"
            }
#line 1500 "prog_io_item.m"
          }
#line 1501 "prog_io_item.m"
        else
#line 1503 "prog_io_item.m"
          {
#line 1503 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_12;
#line 1503 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_33_33;
#line 1503 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_34_34;
#line 1503 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_35_35;
#line 1503 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;

#line 1505 "prog_io_item.m"
            {
#line 1505 "prog_io_item.m"
              parse_tree__prog_io_item__V_35_35 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__InstTerm_8);
            }
#line 1505 "prog_io_item.m"
            {
#line 1505 "prog_io_item.m"
              parse_tree__prog_io_item__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1505 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 1505 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[144])));
#line 1505 "prog_io_item.m"
            }
#line 1505 "prog_io_item.m"
            {
#line 1505 "prog_io_item.m"
              parse_tree__prog_io_item__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_item__V_34_34));
#line 1505 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1505 "prog_io_item.m"
            }
#line 1504 "prog_io_item.m"
            {
#line 1504 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1504 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1504 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_item__V_33_33));
#line 1504 "prog_io_item.m"
            }
#line 1506 "prog_io_item.m"
            {
#line 1506 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_12));
#line 1506 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1506 "prog_io_item.m"
            }
#line 1506 "prog_io_item.m"
            {
#line 1506 "prog_io_item.m"
              MR_Word base;
#line 1506 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1506 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithInst_6 = base;
#line 1506 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1506 "prog_io_item.m"
            }
#line 1503 "prog_io_item.m"
          }
#line 1498 "prog_io_item.m"
      }
#line 1508 "prog_io_item.m"
    else
#line 1509 "prog_io_item.m"
      {
#line 1509 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithInstTerm_5 = parse_tree__prog_io_item__Term_4;
#line 1510 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeWithInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[14]);
#line 1509 "prog_io_item.m"
      }
#line 1508 "prog_io_item.m"
  }
#line 1490 "prog_io_item.m"
}

#line 1459 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(
#line 1459 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1459 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1459 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithTypeTerm_7,
#line 1459 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithType_8)
#line 1459 "prog_io_item.m"
{
#line 1483 "prog_io_item.m"
  {
#line 1483 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1483 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithTypeTermPrime_10;
#line 1483 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeTerm_11;
#line 1465 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeQualifier_9;
#line 1465 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 1465 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_18_18;
#line 1465 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1465 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_24_24;
#line 1464 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_12_12;

#line 1464 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1464 "prog_io_item.m"
      {
#line 1464 "prog_io_item.m"
        parse_tree__prog_io_item__TypeQualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 0)));
#line 1464 "prog_io_item.m"
        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 1)));
#line 1464 "prog_io_item.m"
        parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 2)));
#line 1465 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 1465 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1465 "prog_io_item.m"
          {
#line 1465 "prog_io_item.m"
            parse_tree__prog_io_item__BeforeWithTypeTermPrime_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_17_17, (MR_Integer) 0)));
#line 1465 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_17_17, (MR_Integer) 1)));
#line 1465 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 1465 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1465 "prog_io_item.m"
              {
#line 1465 "prog_io_item.m"
                parse_tree__prog_io_item__TypeTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1465 "prog_io_item.m"
                parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1465 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1465 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1465 "prog_io_item.m"
                  {
#line 1467 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__TypeQualifier_9)) == (MR_mktag((MR_Integer) 0)));
#line 1467 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1467 "prog_io_item.m"
                      {
#line 1467 "prog_io_item.m"
                        parse_tree__prog_io_item__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__TypeQualifier_9, (MR_Integer) 0)));
#line 1468 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__V_24_24, (MR_String) ":") == 0))
#line 1469 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1468 "prog_io_item.m"
                        else
#line 1468 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__V_24_24, (MR_String) "with_type") == 0))
#line 1467 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1468 "prog_io_item.m"
                        else
#line 1468 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 1467 "prog_io_item.m"
                      }
#line 1465 "prog_io_item.m"
                  }
#line 1465 "prog_io_item.m"
              }
#line 1465 "prog_io_item.m"
          }
#line 1464 "prog_io_item.m"
      }
#line 1483 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1472 "prog_io_item.m"
      {
#line 1472 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeType_14;

#line 1472 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithTypeTerm_7 = parse_tree__prog_io_item__BeforeWithTypeTermPrime_10;
#line 1475 "prog_io_item.m"
        {
#line 1475 "prog_io_item.m"
          parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_item__TypeTerm_11, parse_tree__prog_io_item__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__MaybeType_14);
        }
#line 1479 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
#line 1481 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeWithType_8 = (MR_Word) parse_tree__prog_io_item__MaybeType_14;
#line 1479 "prog_io_item.m"
        else
#line 1477 "prog_io_item.m"
          {
#line 1477 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeType_14, (MR_Integer) 0)));
#line 1477 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_22_22;

#line 1478 "prog_io_item.m"
            {
#line 1478 "prog_io_item.m"
              parse_tree__prog_io_item__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_15));
#line 1478 "prog_io_item.m"
            }
#line 1478 "prog_io_item.m"
            {
#line 1478 "prog_io_item.m"
              MR_Word base;
#line 1478 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithType_8 = base;
#line 1478 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_22_22));
#line 1478 "prog_io_item.m"
            }
#line 1477 "prog_io_item.m"
          }
#line 1472 "prog_io_item.m"
      }
#line 1483 "prog_io_item.m"
    else
#line 1484 "prog_io_item.m"
      {
#line 1484 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithTypeTerm_7 = parse_tree__prog_io_item__Term_6;
#line 1485 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeWithType_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[19]);
#line 1484 "prog_io_item.m"
      }
#line 1483 "prog_io_item.m"
  }
#line 1459 "prog_io_item.m"
}

#line 1430 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(
#line 1430 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1430 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1430 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeDetismTerm_7,
#line 1430 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeMaybeDetism_8)
#line 1430 "prog_io_item.m"
{
#line 1452 "prog_io_item.m"
  {
#line 1452 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1452 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTermPrime_11;
#line 1452 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DetismTerm_12;
#line 1435 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Args_9;
#line 1435 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1435 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_20_20;
#line 1435 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;
#line 1435 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_22_22;
#line 1435 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_10_10;

#line 1435 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1435 "prog_io_item.m"
      {
#line 1435 "prog_io_item.m"
        parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 0)));
#line 1435 "prog_io_item.m"
        parse_tree__prog_io_item__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 1)));
#line 1435 "prog_io_item.m"
        parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 2)));
#line 1435 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 1435 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1435 "prog_io_item.m"
          {
#line 1435 "prog_io_item.m"
            parse_tree__prog_io_item__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1435 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_20_20, (MR_String) "is") == 0);
#line 1435 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1435 "prog_io_item.m"
              {
#line 1436 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 1436 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1436 "prog_io_item.m"
                  {
#line 1436 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeDetismTermPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_9, (MR_Integer) 0)));
#line 1436 "prog_io_item.m"
                    parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_9, (MR_Integer) 1)));
#line 1436 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 1436 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1436 "prog_io_item.m"
                      {
#line 1436 "prog_io_item.m"
                        parse_tree__prog_io_item__DetismTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 1436 "prog_io_item.m"
                        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 1)));
#line 1436 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1436 "prog_io_item.m"
                      }
#line 1436 "prog_io_item.m"
                  }
#line 1435 "prog_io_item.m"
              }
#line 1435 "prog_io_item.m"
          }
#line 1435 "prog_io_item.m"
      }
#line 1452 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1438 "prog_io_item.m"
      {
#line 1444 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Detism_15;
#line 1440 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__DetismFunctor_13;
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;
#line 1440 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_14_14;

#line 1438 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeDetismTerm_7 = parse_tree__prog_io_item__BeforeDetismTermPrime_11;
#line 1440 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__DetismTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 1440 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1440 "prog_io_item.m"
          {
#line 1440 "prog_io_item.m"
            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 0)));
#line 1440 "prog_io_item.m"
            parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 1)));
#line 1440 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 2)));
#line 1440 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1440 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1440 "prog_io_item.m"
              {
#line 1440 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 1440 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1440 "prog_io_item.m"
                  {
#line 1440 "prog_io_item.m"
                    parse_tree__prog_io_item__DetismFunctor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_23_23, (MR_Integer) 0)));
#line 1441 "prog_io_item.m"
                    {
#line 1441 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_item__DetismFunctor_13, &parse_tree__prog_io_item__Detism_15);
                    }
#line 1440 "prog_io_item.m"
                  }
#line 1440 "prog_io_item.m"
              }
#line 1440 "prog_io_item.m"
          }
#line 1444 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1443 "prog_io_item.m"
          {
#line 1443 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_25_25;

#line 1443 "prog_io_item.m"
            {
#line 1443 "prog_io_item.m"
              parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Detism_15));
#line 1443 "prog_io_item.m"
            }
#line 1443 "prog_io_item.m"
            {
#line 1443 "prog_io_item.m"
              MR_Word base;
#line 1443 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeMaybeDetism_8 = base;
#line 1443 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 1443 "prog_io_item.m"
            }
#line 1443 "prog_io_item.m"
          }
#line 1444 "prog_io_item.m"
        else
#line 1445 "prog_io_item.m"
          {
#line 1445 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1445 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__TermStr_16;
#line 1445 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Pieces_17;
#line 1445 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_18;
#line 1445 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_28_28;
#line 1445 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29;
#line 1445 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;
#line 1445 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_39_39;
#line 1445 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1445 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 1445 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_42_42;
#line 1445 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_45_45;

#line 1445 "prog_io_item.m"
            {
#line 1445 "prog_io_item.m"
              parse_tree__prog_io_item__TermStr_16 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_48_48, parse_tree__prog_io_item__VarSet_5, parse_tree__prog_io_item__Term_6);
            }
#line 1447 "prog_io_item.m"
            {
#line 1447 "prog_io_item.m"
              parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1447 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_16));
#line 1447 "prog_io_item.m"
            }
#line 1447 "prog_io_item.m"
            {
#line 1447 "prog_io_item.m"
              parse_tree__prog_io_item__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 1447 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])));
#line 1447 "prog_io_item.m"
            }
#line 1446 "prog_io_item.m"
            {
#line 1446 "prog_io_item.m"
              parse_tree__prog_io_item__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[151])));
#line 1446 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_17, 1) = ((MR_Box) (parse_tree__prog_io_item__V_28_28));
#line 1446 "prog_io_item.m"
            }
#line 1449 "prog_io_item.m"
            {
#line 1449 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_48_48, parse_tree__prog_io_item__DetismTerm_12);
            }
#line 1449 "prog_io_item.m"
            {
#line 1449 "prog_io_item.m"
              parse_tree__prog_io_item__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1449 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_17));
#line 1449 "prog_io_item.m"
            }
#line 1449 "prog_io_item.m"
            {
#line 1449 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 1449 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1449 "prog_io_item.m"
            }
#line 1449 "prog_io_item.m"
            {
#line 1449 "prog_io_item.m"
              parse_tree__prog_io_item__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1449 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1449 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 1) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1449 "prog_io_item.m"
            }
#line 1449 "prog_io_item.m"
            {
#line 1449 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 1449 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1449 "prog_io_item.m"
            }
#line 1448 "prog_io_item.m"
            {
#line 1448 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1448 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1448 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1448 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1448 "prog_io_item.m"
            }
#line 1450 "prog_io_item.m"
            {
#line 1450 "prog_io_item.m"
              parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_18));
#line 1450 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1450 "prog_io_item.m"
            }
#line 1450 "prog_io_item.m"
            {
#line 1450 "prog_io_item.m"
              MR_Word base;
#line 1450 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1450 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeMaybeDetism_8 = base;
#line 1450 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_45_45));
#line 1450 "prog_io_item.m"
            }
#line 1445 "prog_io_item.m"
          }
#line 1438 "prog_io_item.m"
      }
#line 1452 "prog_io_item.m"
    else
#line 1453 "prog_io_item.m"
      {
#line 1453 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeDetismTerm_7 = parse_tree__prog_io_item__Term_6;
#line 1454 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeMaybeDetism_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[18]);
#line 1453 "prog_io_item.m"
      }
#line 1452 "prog_io_item.m"
  }
#line 1430 "prog_io_item.m"
}

#line 1342 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_constraints_6_p_0(
#line 1342 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1342 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1342 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1342 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23,
#line 1342 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24,
#line 1342 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeClassInstConstraints_11)
#line 1342 "prog_io_item.m"
{
#line 1374 "prog_io_item.m"
  {
#line 1374 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23)) == (MR_mktag((MR_Integer) 1)));
#line 1374 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConstraintsTerm_12;
#line 1374 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25;
#line 1349 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_26_26;
#line 1349 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_27_27;
#line 1349 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_41_41;
#line 1350 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___Term_13;

#line 1351 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1351 "prog_io_item.m"
      {
#line 1351 "prog_io_item.m"
        parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23, (MR_Integer) 0)));
#line 1351 "prog_io_item.m"
        parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23, (MR_Integer) 1)));
#line 1350 "prog_io_item.m"
        parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 0)));
#line 1350 "prog_io_item.m"
        parse_tree__prog_io_item___Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 1)));
#line 1350 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_27_27)) == (MR_mktag((MR_Integer) 3)));
#line 1350 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1350 "prog_io_item.m"
          {
#line 1350 "prog_io_item.m"
            parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_27_27, (MR_Integer) 0)));
#line 1350 "prog_io_item.m"
            parse_tree__prog_io_item__ConstraintsTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_27_27, (MR_Integer) 1)));
#line 1350 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__QuantType_7 == parse_tree__prog_io_item__V_41_41);
#line 1350 "prog_io_item.m"
          }
#line 1351 "prog_io_item.m"
      }
#line 1374 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1354 "prog_io_item.m"
      {
#line 1354 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeHeadConstraints_14;
#line 1354 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeTailConstraints_15;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadClassConstraints_16;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadInstConstraint_17;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TailClassConstraints_18;
#line 1369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TailInstConstraint_19;

#line 1353 "prog_io_item.m"
        {
#line 1353 "prog_io_item.m"
          parse_tree__prog_io_typeclass__parse_class_and_inst_constraints_4_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ConstraintsTerm_12, &parse_tree__prog_io_item__MaybeHeadConstraints_14);
        }
#line 1357 "prog_io_item.m"
        {
#line 1357 "prog_io_item.m"
          parse_tree__prog_io_item__get_constraints_6_p_0(parse_tree__prog_io_item__QuantType_7, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24, &parse_tree__prog_io_item__MaybeTailConstraints_15);
        }
#line 1360 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeHeadConstraints_14)) == (MR_mktag((MR_Integer) 1)));
#line 1360 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1360 "prog_io_item.m"
          {
#line 1360 "prog_io_item.m"
            parse_tree__prog_io_item__HeadClassConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeHeadConstraints_14, (MR_Integer) 0)));
#line 1360 "prog_io_item.m"
            parse_tree__prog_io_item__HeadInstConstraint_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeHeadConstraints_14, (MR_Integer) 1)));
#line 1362 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeTailConstraints_15)) == (MR_mktag((MR_Integer) 1)));
#line 1362 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1362 "prog_io_item.m"
              {
#line 1362 "prog_io_item.m"
                parse_tree__prog_io_item__TailClassConstraints_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeTailConstraints_15, (MR_Integer) 0)));
#line 1362 "prog_io_item.m"
                parse_tree__prog_io_item__TailInstConstraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeTailConstraints_15, (MR_Integer) 1)));
#line 1362 "prog_io_item.m"
              }
#line 1360 "prog_io_item.m"
          }
#line 1369 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1365 "prog_io_item.m"
          {
#line 1365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ClassConstraints_20;
#line 1365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_21;

#line 1365 "prog_io_item.m"
            {
#line 1365 "prog_io_item.m"
              parse_tree__prog_io_item__ClassConstraints_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, parse_tree__prog_io_item__HeadClassConstraints_16, parse_tree__prog_io_item__TailClassConstraints_18);
            }
#line 1366 "prog_io_item.m"
            {
#line 1366 "prog_io_item.m"
              parse_tree__prog_io_item__InstConstraints_21 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_item__HeadInstConstraint_17, parse_tree__prog_io_item__TailInstConstraint_19);
            }
#line 1368 "prog_io_item.m"
            {
#line 1368 "prog_io_item.m"
              MR_Word base;
#line 1368 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1368 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ClassConstraints_20));
#line 1368 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_21));
#line 1368 "prog_io_item.m"
            }
#line 1365 "prog_io_item.m"
          }
#line 1369 "prog_io_item.m"
        else
#line 1371 "prog_io_item.m"
          {
#line 1371 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeInfo_37_37 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[9];
#line 1371 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeInfo_38_38 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[1];
#line 1371 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_22;
#line 1371 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29;
#line 1371 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_30_30;

#line 1370 "prog_io_item.m"
            {
#line 1370 "prog_io_item.m"
              parse_tree__prog_io_item__V_29_29 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__TypeInfo_38_38, parse_tree__prog_io_item__MaybeHeadConstraints_14);
            }
#line 1371 "prog_io_item.m"
            {
#line 1371 "prog_io_item.m"
              parse_tree__prog_io_item__V_30_30 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__TypeInfo_38_38, parse_tree__prog_io_item__MaybeTailConstraints_15);
            }
#line 1370 "prog_io_item.m"
            {
#line 1370 "prog_io_item.m"
              parse_tree__prog_io_item__Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_29_29, parse_tree__prog_io_item__V_30_30);
            }
#line 1372 "prog_io_item.m"
            {
#line 1372 "prog_io_item.m"
              MR_Word base;
#line 1372 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1372 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1372 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_22));
#line 1372 "prog_io_item.m"
            }
#line 1371 "prog_io_item.m"
          }
#line 1354 "prog_io_item.m"
      }
#line 1374 "prog_io_item.m"
    else
#line 1375 "prog_io_item.m"
      {
#line 1375 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_32_32;

#line 1375 "prog_io_item.m"
        {
#line 1375 "prog_io_item.m"
          parse_tree__prog_io_item__V_32_32 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        }
#line 1375 "prog_io_item.m"
        {
#line 1375 "prog_io_item.m"
          MR_Word base;
#line 1375 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1375 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1375 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 1375 "prog_io_item.m"
        }
#line 1375 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23;
#line 1375 "prog_io_item.m"
      }
#line 1374 "prog_io_item.m"
  }
#line 1342 "prog_io_item.m"
}

#line 1320 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0_1(
#line 1320 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1320 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1320 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1320 "prog_io_item.m"
{
#line 1320 "prog_io_item.m"
  {
#line 1320 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1320 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_39;

#line 1320 "prog_io_item.m"
    {
#line 1320 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1320__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_39);
    }
#line 1320 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_39));
#line 1320 "prog_io_item.m"
  }
#line 1320 "prog_io_item.m"
}

#line 1277 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(
#line 1277 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 1277 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 1277 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RevAttributes0_8,
#line 1277 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__RevAttributes_9,
#line 1277 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeExistClassInstContext_10)
#line 1277 "prog_io_item.m"
{
#line 1282 "prog_io_item.m"
  {
#line 1282 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1282 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeInfo_37_37 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[0];
#line 1282 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes0_11;
#line 1282 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes1_12;
#line 1282 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes2_14;
#line 1282 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVars0_15;
#line 1282 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVars_16;
#line 1282 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes3_17;
#line 1282 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeUnivConstraints_18;
#line 1282 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes_19;
#line 1282 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeExistConstraints_20;
#line 1316 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___UnivQVars_13;
#line 1336 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__UnivConstraints_21;
#line 1336 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__UnivInstConstraints_22;
#line 1336 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistConstraints_23;
#line 1336 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistInstConstraints_24;

#line 1315 "prog_io_item.m"
    {
#line 1315 "prog_io_item.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__RevAttributes0_8, &parse_tree__prog_io_item__Attributes0_11);
    }
#line 1316 "prog_io_item.m"
    {
#line 1316 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__Attributes0_11, &parse_tree__prog_io_item__Attributes1_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item___UnivQVars_13);
    }
#line 1318 "prog_io_item.m"
    {
#line 1318 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 0, parse_tree__prog_io_item__Attributes1_12, &parse_tree__prog_io_item__Attributes2_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__ExistQVars0_15);
    }
#line 1320 "prog_io_item.m"
    {
#line 1320 "prog_io_item.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[7], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[5], parse_tree__prog_io_item__ExistQVars0_15, &parse_tree__prog_io_item__ExistQVars_16);
    }
#line 1321 "prog_io_item.m"
    {
#line 1321 "prog_io_item.m"
      parse_tree__prog_io_item__get_constraints_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Attributes2_14, &parse_tree__prog_io_item__Attributes3_17, &parse_tree__prog_io_item__MaybeUnivConstraints_18);
    }
#line 1323 "prog_io_item.m"
    {
#line 1323 "prog_io_item.m"
      parse_tree__prog_io_item__get_constraints_6_p_0((MR_Integer) 0, parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Attributes3_17, &parse_tree__prog_io_item__Attributes_19, &parse_tree__prog_io_item__MaybeExistConstraints_20);
    }
#line 1325 "prog_io_item.m"
    {
#line 1325 "prog_io_item.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__Attributes_19, parse_tree__prog_io_item__RevAttributes_9);
    }
#line 1328 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeUnivConstraints_18)) == (MR_mktag((MR_Integer) 1)));
#line 1328 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1328 "prog_io_item.m"
      {
#line 1328 "prog_io_item.m"
        parse_tree__prog_io_item__UnivConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeUnivConstraints_18, (MR_Integer) 0)));
#line 1328 "prog_io_item.m"
        parse_tree__prog_io_item__UnivInstConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeUnivConstraints_18, (MR_Integer) 1)));
#line 1329 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeExistConstraints_20)) == (MR_mktag((MR_Integer) 1)));
#line 1329 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1329 "prog_io_item.m"
          {
#line 1329 "prog_io_item.m"
            parse_tree__prog_io_item__ExistConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistConstraints_20, (MR_Integer) 0)));
#line 1329 "prog_io_item.m"
            parse_tree__prog_io_item__ExistInstConstraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistConstraints_20, (MR_Integer) 1)));
#line 1329 "prog_io_item.m"
          }
#line 1328 "prog_io_item.m"
      }
#line 1336 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1331 "prog_io_item.m"
      {
#line 1331 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ClassConstraints_25;
#line 1331 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_26;

#line 1331 "prog_io_item.m"
        {
#line 1331 "prog_io_item.m"
          parse_tree__prog_io_item__ClassConstraints_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1331 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassConstraints_25, 0) = ((MR_Box) (parse_tree__prog_io_item__UnivConstraints_21));
#line 1331 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassConstraints_25, 1) = ((MR_Box) (parse_tree__prog_io_item__ExistConstraints_23));
#line 1331 "prog_io_item.m"
        }
#line 1332 "prog_io_item.m"
        {
#line 1332 "prog_io_item.m"
          parse_tree__prog_io_item__InstConstraints_26 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_item__UnivInstConstraints_22, parse_tree__prog_io_item__ExistInstConstraints_24);
        }
#line 1334 "prog_io_item.m"
        {
#line 1334 "prog_io_item.m"
          MR_Word base;
#line 1334 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeExistClassInstContext_10 = base;
#line 1334 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_16));
#line 1334 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__ClassConstraints_25));
#line 1334 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_26));
#line 1334 "prog_io_item.m"
        }
#line 1331 "prog_io_item.m"
      }
#line 1336 "prog_io_item.m"
    else
#line 1338 "prog_io_item.m"
      {
#line 1338 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeInfo_47_47 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[9];
#line 1338 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeInfo_48_48 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[1];
#line 1338 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_27;
#line 1338 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1338 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;

#line 1337 "prog_io_item.m"
        {
#line 1337 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_47_47, parse_tree__prog_io_item__TypeInfo_48_48, parse_tree__prog_io_item__MaybeUnivConstraints_18);
        }
#line 1338 "prog_io_item.m"
        {
#line 1338 "prog_io_item.m"
          parse_tree__prog_io_item__V_36_36 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_47_47, parse_tree__prog_io_item__TypeInfo_48_48, parse_tree__prog_io_item__MaybeExistConstraints_20);
        }
#line 1337 "prog_io_item.m"
        {
#line 1337 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_35_35, parse_tree__prog_io_item__V_36_36);
        }
#line 1339 "prog_io_item.m"
        {
#line 1339 "prog_io_item.m"
          MR_Word base;
#line 1339 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1339 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeExistClassInstContext_10 = base;
#line 1339 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_27));
#line 1339 "prog_io_item.m"
        }
#line 1338 "prog_io_item.m"
      }
#line 1282 "prog_io_item.m"
  }
#line 1277 "prog_io_item.m"
}

#line 1206 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1(
#line 1206 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1206 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1206 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1206 "prog_io_item.m"
{
#line 1206 "prog_io_item.m"
  {
#line 1206 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1206 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__3_3;

#line 1206 "prog_io_item.m"
    {
#line 1206 "prog_io_item.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__3_3);
    }
#line 1206 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__3_3));
#line 1206 "prog_io_item.m"
  }
#line 1206 "prog_io_item.m"
}

#line 1194 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_16,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_17,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_18,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 1194 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 1194 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 1194 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24)
#line 1194 "prog_io_item.m"
{
#line 1248 "prog_io_item.m"
  {
#line 1248 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1248 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgModes0_25;

#line 1201 "prog_io_item.m"
    {
#line 1201 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__ArgTerms_14, &parse_tree__prog_io_item__ArgModes0_25);
    }
#line 1248 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1203 "prog_io_item.m"
      {
#line 1203 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_26;
#line 1203 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeConstraints_27;

#line 1202 "prog_io_item.m"
        {
#line 1202 "prog_io_item.m"
          parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_15, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__Attributes0_21, &parse_tree__prog_io_item__Attributes_26, &parse_tree__prog_io_item__MaybeConstraints_27);
        }
#line 1244 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_27)) == (MR_mktag((MR_Integer) 0))))
#line 1245 "prog_io_item.m"
          {
#line 1245 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 0)));

#line 1246 "prog_io_item.m"
            {
#line 1246 "prog_io_item.m"
              MR_Word base;
#line 1246 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1246 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1246 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_42));
#line 1246 "prog_io_item.m"
            }
#line 1245 "prog_io_item.m"
          }
#line 1244 "prog_io_item.m"
        else
#line 1205 "prog_io_item.m"
          {
#line 1205 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_130_130;
#line 1205 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 2)));
#line 1205 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgModes_31;
#line 1205 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_45_45;
#line 1205 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 0)));
#line 1205 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 1)));
#line 1236 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__RetMode0_32;

#line 1206 "prog_io_item.m"
            {
#line 1206 "prog_io_item.m"
              parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1206 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[1]));
#line 1206 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1));
#line 1206 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1206 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 3) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_30));
#line 1206 "prog_io_item.m"
            }
#line 6655 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1206 "prog_io_item.m"
            {
#line 1206 "prog_io_item.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_130_130, parse_tree__prog_io_item__TypeCtorInfo_130_130, parse_tree__prog_io_item__V_45_45, parse_tree__prog_io_item__ArgModes0_25, &parse_tree__prog_io_item__ArgModes_31);
            }
#line 1209 "prog_io_item.m"
            {
#line 1209 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__RetModeTerm_17, &parse_tree__prog_io_item__RetMode0_32);
            }
#line 1236 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1212 "prog_io_item.m"
              {
#line 1212 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeCtorInfo_131_131;
#line 1212 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__RetMode_33;
#line 1212 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__InstVarSet_34;
#line 1212 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgReturnModes_35;
#line 1212 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_47_47;

#line 1211 "prog_io_item.m"
                {
#line 1211 "prog_io_item.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_30, parse_tree__prog_io_item__RetMode0_32, &parse_tree__prog_io_item__RetMode_33);
                }
#line 6687 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_131_131 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1213 "prog_io_item.m"
                {
#line 1213 "prog_io_item.m"
                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_131_131, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__InstVarSet_34);
                }
#line 1214 "prog_io_item.m"
                {
#line 1214 "prog_io_item.m"
                  parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__RetMode_33));
#line 1214 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1214 "prog_io_item.m"
                }
#line 1214 "prog_io_item.m"
                {
#line 1214 "prog_io_item.m"
                  parse_tree__prog_io_item__ArgReturnModes_35 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_130_130, parse_tree__prog_io_item__ArgModes_31, parse_tree__prog_io_item__V_47_47);
                }
#line 1216 "prog_io_item.m"
                {
#line 1216 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io_item__ArgReturnModes_35);
                }
#line 1225 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1221 "prog_io_item.m"
                  {
#line 1221 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ItemModeDecl_36;
#line 1221 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Item_37;
#line 1221 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__MaybeItem0_38;

#line 1219 "prog_io_item.m"
                    {
#line 1219 "prog_io_item.m"
                      parse_tree__prog_io_item__ItemModeDecl_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1219 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_13));
#line 1219 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[16])));
#line 1219 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 2) = ((MR_Box) (parse_tree__prog_io_item__ArgReturnModes_35));
#line 1219 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1219 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 4) = ((MR_Box) (parse_tree__prog_io_item__MaybeDetism_20));
#line 1219 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 5) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_34));
#line 1219 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_22));
#line 1219 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_23));
#line 1219 "prog_io_item.m"
                    }
#line 1222 "prog_io_item.m"
                    {
#line 1222 "prog_io_item.m"
                      parse_tree__prog_io_item__Item_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1222 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_37, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemModeDecl_36));
#line 1222 "prog_io_item.m"
                    }
#line 1223 "prog_io_item.m"
                    {
#line 1223 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeItem0_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_38, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_37));
#line 1223 "prog_io_item.m"
                    }
#line 1224 "prog_io_item.m"
                    {
#line 1224 "prog_io_item.m"
                      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_38, parse_tree__prog_io_item__Attributes_26, parse_tree__prog_io_item__MaybeItem_24);
#line 1224 "prog_io_item.m"
                      return;
                    }
#line 1221 "prog_io_item.m"
                  }
#line 1225 "prog_io_item.m"
                else
#line 1226 "prog_io_item.m"
                  {
#line 1226 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__FullTermStr_39;
#line 1226 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Pieces_40;
#line 1226 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_41;
#line 1226 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_54_54;
#line 1226 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_57_57;
#line 1226 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_60_60;
#line 1226 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_62_62;
#line 1226 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_63_63;
#line 1226 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_72_72;
#line 1226 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_73_73;
#line 1226 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_74_74;
#line 1226 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_75_75;
#line 1226 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_76_76;
#line 1226 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_79_79;

#line 1226 "prog_io_item.m"
                    {
#line 1226 "prog_io_item.m"
                      parse_tree__prog_io_item__FullTermStr_39 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_131_131, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__FullTerm_18);
                    }
#line 1230 "prog_io_item.m"
                    {
#line 1230 "prog_io_item.m"
                      parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1230 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_item__FullTermStr_39));
#line 1230 "prog_io_item.m"
                    }
#line 1230 "prog_io_item.m"
                    {
#line 1230 "prog_io_item.m"
                      parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 1230 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])));
#line 1230 "prog_io_item.m"
                    }
#line 1229 "prog_io_item.m"
                    {
#line 1229 "prog_io_item.m"
                      parse_tree__prog_io_item__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1229 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 1229 "prog_io_item.m"
                    }
#line 1229 "prog_io_item.m"
                    {
#line 1229 "prog_io_item.m"
                      parse_tree__prog_io_item__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[148])));
#line 1229 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_item__V_60_60));
#line 1229 "prog_io_item.m"
                    }
#line 1228 "prog_io_item.m"
                    {
#line 1228 "prog_io_item.m"
                      parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[145])));
#line 1228 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_item__V_57_57));
#line 1228 "prog_io_item.m"
                    }
#line 1227 "prog_io_item.m"
                    {
#line 1227 "prog_io_item.m"
                      parse_tree__prog_io_item__Pieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[139])));
#line 1227 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_40, 1) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 1227 "prog_io_item.m"
                    }
#line 1232 "prog_io_item.m"
                    {
#line 1232 "prog_io_item.m"
                      parse_tree__prog_io_item__V_74_74 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_131_131, parse_tree__prog_io_item__FullTerm_18);
                    }
#line 1233 "prog_io_item.m"
                    {
#line 1233 "prog_io_item.m"
                      parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1233 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_40));
#line 1233 "prog_io_item.m"
                    }
#line 1233 "prog_io_item.m"
                    {
#line 1233 "prog_io_item.m"
                      parse_tree__prog_io_item__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 1233 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1233 "prog_io_item.m"
                    }
#line 1232 "prog_io_item.m"
                    {
#line 1232 "prog_io_item.m"
                      parse_tree__prog_io_item__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_item__V_74_74));
#line 1232 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_item__V_75_75));
#line 1232 "prog_io_item.m"
                    }
#line 1233 "prog_io_item.m"
                    {
#line 1233 "prog_io_item.m"
                      parse_tree__prog_io_item__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_item__V_73_73));
#line 1233 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1233 "prog_io_item.m"
                    }
#line 1231 "prog_io_item.m"
                    {
#line 1231 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1231 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1231 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1231 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 2) = ((MR_Box) (parse_tree__prog_io_item__V_72_72));
#line 1231 "prog_io_item.m"
                    }
#line 1234 "prog_io_item.m"
                    {
#line 1234 "prog_io_item.m"
                      parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_41));
#line 1234 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1234 "prog_io_item.m"
                    }
#line 1234 "prog_io_item.m"
                    {
#line 1234 "prog_io_item.m"
                      MR_Word base;
#line 1234 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1234 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1234 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 1234 "prog_io_item.m"
                    }
#line 1226 "prog_io_item.m"
                  }
#line 1212 "prog_io_item.m"
              }
#line 1236 "prog_io_item.m"
            else
#line 1238 "prog_io_item.m"
              {
#line 1238 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_91_91;
#line 1238 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_92_92;
#line 1238 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_93_93;
#line 1238 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_98_98;
#line 1238 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_125;

#line 1240 "prog_io_item.m"
                {
#line 1240 "prog_io_item.m"
                  parse_tree__prog_io_item__V_93_93 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__RetModeTerm_17);
                }
#line 1240 "prog_io_item.m"
                {
#line 1240 "prog_io_item.m"
                  parse_tree__prog_io_item__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_item__V_93_93));
#line 1240 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[149])));
#line 1240 "prog_io_item.m"
                }
#line 1241 "prog_io_item.m"
                {
#line 1241 "prog_io_item.m"
                  parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 1241 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1241 "prog_io_item.m"
                }
#line 1239 "prog_io_item.m"
                {
#line 1239 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1239 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1239 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1239 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_125, 2) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1239 "prog_io_item.m"
                }
#line 1242 "prog_io_item.m"
                {
#line 1242 "prog_io_item.m"
                  parse_tree__prog_io_item__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_125));
#line 1242 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1242 "prog_io_item.m"
                }
#line 1242 "prog_io_item.m"
                {
#line 1242 "prog_io_item.m"
                  MR_Word base;
#line 1242 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1242 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1242 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_98_98));
#line 1242 "prog_io_item.m"
                }
#line 1238 "prog_io_item.m"
              }
#line 1205 "prog_io_item.m"
          }
#line 1203 "prog_io_item.m"
      }
#line 1248 "prog_io_item.m"
    else
#line 1250 "prog_io_item.m"
      {
#line 1250 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_135_135 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1250 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__FuncModeStr_43;
#line 1250 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_102_102;
#line 1250 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_105_105;
#line 1250 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_106_106;
#line 1250 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_115_115;
#line 1250 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_116_116;
#line 1250 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_117_117;
#line 1250 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_118_118;
#line 1250 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_119_119;
#line 1250 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_122_122;
#line 1250 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_126;
#line 1250 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_127;

#line 1250 "prog_io_item.m"
        {
#line 1250 "prog_io_item.m"
          parse_tree__prog_io_item__FuncModeStr_43 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_135_135, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__FuncMode_16);
        }
#line 1253 "prog_io_item.m"
        {
#line 1253 "prog_io_item.m"
          parse_tree__prog_io_item__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1253 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1253 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_106_106, 1) = ((MR_Box) (parse_tree__prog_io_item__FuncModeStr_43));
#line 1253 "prog_io_item.m"
        }
#line 1253 "prog_io_item.m"
        {
#line 1253 "prog_io_item.m"
          parse_tree__prog_io_item__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1253 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_105_105, 0) = ((MR_Box) (parse_tree__prog_io_item__V_106_106));
#line 1253 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])));
#line 1253 "prog_io_item.m"
        }
#line 1252 "prog_io_item.m"
        {
#line 1252 "prog_io_item.m"
          parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[150])));
#line 1252 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (parse_tree__prog_io_item__V_105_105));
#line 1252 "prog_io_item.m"
        }
#line 1251 "prog_io_item.m"
        {
#line 1251 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[132])));
#line 1251 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_126, 1) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 1251 "prog_io_item.m"
        }
#line 1255 "prog_io_item.m"
        {
#line 1255 "prog_io_item.m"
          parse_tree__prog_io_item__V_117_117 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_135_135, parse_tree__prog_io_item__FuncMode_16);
        }
#line 1255 "prog_io_item.m"
        {
#line 1255 "prog_io_item.m"
          parse_tree__prog_io_item__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1255 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_119_119, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_126));
#line 1255 "prog_io_item.m"
        }
#line 1255 "prog_io_item.m"
        {
#line 1255 "prog_io_item.m"
          parse_tree__prog_io_item__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1255 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_118_118, 0) = ((MR_Box) (parse_tree__prog_io_item__V_119_119));
#line 1255 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1255 "prog_io_item.m"
        }
#line 1255 "prog_io_item.m"
        {
#line 1255 "prog_io_item.m"
          parse_tree__prog_io_item__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1255 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_item__V_117_117));
#line 1255 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_116_116, 1) = ((MR_Box) (parse_tree__prog_io_item__V_118_118));
#line 1255 "prog_io_item.m"
        }
#line 1255 "prog_io_item.m"
        {
#line 1255 "prog_io_item.m"
          parse_tree__prog_io_item__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1255 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io_item__V_116_116));
#line 1255 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1255 "prog_io_item.m"
        }
#line 1254 "prog_io_item.m"
        {
#line 1254 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1254 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1254 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1254 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 2) = ((MR_Box) (parse_tree__prog_io_item__V_115_115));
#line 1254 "prog_io_item.m"
        }
#line 1256 "prog_io_item.m"
        {
#line 1256 "prog_io_item.m"
          parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1256 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_127));
#line 1256 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1256 "prog_io_item.m"
        }
#line 1256 "prog_io_item.m"
        {
#line 1256 "prog_io_item.m"
          MR_Word base;
#line 1256 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1256 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1256 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 1256 "prog_io_item.m"
        }
#line 1250 "prog_io_item.m"
      }
#line 1248 "prog_io_item.m"
  }
#line 1194 "prog_io_item.m"
}

#line 1151 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1(
#line 1151 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1151 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1151 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1151 "prog_io_item.m"
{
#line 1151 "prog_io_item.m"
  {
#line 1151 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1151 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__3_3;

#line 1151 "prog_io_item.m"
    {
#line 1151 "prog_io_item.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__3_3);
    }
#line 1151 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__3_3));
#line 1151 "prog_io_item.m"
  }
#line 1151 "prog_io_item.m"
}

#line 1140 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_12,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_13,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_15,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_16,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 1140 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 1140 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 1140 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22)
#line 1140 "prog_io_item.m"
{
#line 1185 "prog_io_item.m"
  {
#line 1185 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1185 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgModes0_23;

#line 1146 "prog_io_item.m"
    {
#line 1146 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__ArgTerms_13, &parse_tree__prog_io_item__ArgModes0_23);
    }
#line 1185 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1148 "prog_io_item.m"
      {
#line 1148 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_24;
#line 1148 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeConstraints_25;

#line 1147 "prog_io_item.m"
        {
#line 1147 "prog_io_item.m"
          parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_14, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__Attributes0_19, &parse_tree__prog_io_item__Attributes_24, &parse_tree__prog_io_item__MaybeConstraints_25);
        }
#line 1181 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_25)) == (MR_mktag((MR_Integer) 0))))
#line 1182 "prog_io_item.m"
          {
#line 1182 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 0)));

#line 1183 "prog_io_item.m"
            {
#line 1183 "prog_io_item.m"
              MR_Word base;
#line 1183 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 1183 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_39));
#line 1183 "prog_io_item.m"
            }
#line 1182 "prog_io_item.m"
          }
#line 1181 "prog_io_item.m"
        else
#line 1150 "prog_io_item.m"
          {
#line 1150 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_104_104;
#line 1150 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_105_105;
#line 1150 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 2)));
#line 1150 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgModes_29;
#line 1150 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstVarSet_30;
#line 1150 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 1150 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 0)));
#line 1150 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 1)));

#line 1151 "prog_io_item.m"
            {
#line 1151 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1151 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[1]));
#line 1151 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1));
#line 1151 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1151 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 3) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_28));
#line 1151 "prog_io_item.m"
            }
#line 7332 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1151 "prog_io_item.m"
            {
#line 1151 "prog_io_item.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_104_104, parse_tree__prog_io_item__TypeCtorInfo_104_104, parse_tree__prog_io_item__V_41_41, parse_tree__prog_io_item__ArgModes0_23, &parse_tree__prog_io_item__ArgModes_29);
            }
#line 7339 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_105_105 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1153 "prog_io_item.m"
            {
#line 1153 "prog_io_item.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_16, &parse_tree__prog_io_item__InstVarSet_30);
            }
#line 1154 "prog_io_item.m"
            {
#line 1154 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io_item__ArgModes_29);
            }
#line 1170 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1163 "prog_io_item.m"
              {
#line 1163 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybePredOrFunc_31;
#line 1163 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemModeDecl_33;
#line 1163 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_34;
#line 1163 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeItem0_35;

#line 1158 "prog_io_item.m"
                if ((parse_tree__prog_io_item__WithInst_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1156 "prog_io_item.m"
                  {
#line 1157 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybePredOrFunc_31 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[15]);
#line 1156 "prog_io_item.m"
                  }
#line 1158 "prog_io_item.m"
                else
#line 1162 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybePredOrFunc_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1164 "prog_io_item.m"
                {
#line 1164 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemModeDecl_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1164 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_12));
#line 1164 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 1) = ((MR_Box) (parse_tree__prog_io_item__MaybePredOrFunc_31));
#line 1164 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 2) = ((MR_Box) (parse_tree__prog_io_item__ArgModes_29));
#line 1164 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 3) = ((MR_Box) (parse_tree__prog_io_item__WithInst_17));
#line 1164 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 4) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_18));
#line 1164 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 5) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_30));
#line 1164 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_20));
#line 1164 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_21));
#line 1164 "prog_io_item.m"
                }
#line 1167 "prog_io_item.m"
                {
#line 1167 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1167 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1167 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_34, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemModeDecl_33));
#line 1167 "prog_io_item.m"
                }
#line 1168 "prog_io_item.m"
                {
#line 1168 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybeItem0_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1168 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_35, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_34));
#line 1168 "prog_io_item.m"
                }
#line 1169 "prog_io_item.m"
                {
#line 1169 "prog_io_item.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_35, parse_tree__prog_io_item__Attributes_24, parse_tree__prog_io_item__MaybeItem_22);
#line 1169 "prog_io_item.m"
                  return;
                }
#line 1163 "prog_io_item.m"
              }
#line 1170 "prog_io_item.m"
            else
#line 1171 "prog_io_item.m"
              {
#line 1171 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredModeTermStr_36;
#line 1171 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_37;
#line 1171 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_38;
#line 1171 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_45_45;
#line 1171 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_48_48;
#line 1171 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_51_51;
#line 1171 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_53_53;
#line 1171 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_54_54;
#line 1171 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_63_63;
#line 1171 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_64_64;
#line 1171 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_65_65;
#line 1171 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_66_66;
#line 1171 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_67_67;
#line 1171 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_70_70;

#line 1171 "prog_io_item.m"
                {
#line 1171 "prog_io_item.m"
                  parse_tree__prog_io_item__PredModeTermStr_36 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__PredModeTerm_15);
                }
#line 1175 "prog_io_item.m"
                {
#line 1175 "prog_io_item.m"
                  parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1175 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_36));
#line 1175 "prog_io_item.m"
                }
#line 1175 "prog_io_item.m"
                {
#line 1175 "prog_io_item.m"
                  parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 1175 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])));
#line 1175 "prog_io_item.m"
                }
#line 1174 "prog_io_item.m"
                {
#line 1174 "prog_io_item.m"
                  parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1174 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 1174 "prog_io_item.m"
                }
#line 1174 "prog_io_item.m"
                {
#line 1174 "prog_io_item.m"
                  parse_tree__prog_io_item__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[146])));
#line 1174 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 1) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 1174 "prog_io_item.m"
                }
#line 1173 "prog_io_item.m"
                {
#line 1173 "prog_io_item.m"
                  parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[145])));
#line 1173 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_item__V_48_48));
#line 1173 "prog_io_item.m"
                }
#line 1172 "prog_io_item.m"
                {
#line 1172 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[139])));
#line 1172 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_37, 1) = ((MR_Box) (parse_tree__prog_io_item__V_45_45));
#line 1172 "prog_io_item.m"
                }
#line 1177 "prog_io_item.m"
                {
#line 1177 "prog_io_item.m"
                  parse_tree__prog_io_item__V_65_65 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, parse_tree__prog_io_item__PredModeTerm_15);
                }
#line 1178 "prog_io_item.m"
                {
#line 1178 "prog_io_item.m"
                  parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1178 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_37));
#line 1178 "prog_io_item.m"
                }
#line 1178 "prog_io_item.m"
                {
#line 1178 "prog_io_item.m"
                  parse_tree__prog_io_item__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 1178 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1178 "prog_io_item.m"
                }
#line 1177 "prog_io_item.m"
                {
#line 1177 "prog_io_item.m"
                  parse_tree__prog_io_item__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_item__V_65_65));
#line 1177 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_item__V_66_66));
#line 1177 "prog_io_item.m"
                }
#line 1178 "prog_io_item.m"
                {
#line 1178 "prog_io_item.m"
                  parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__V_64_64));
#line 1178 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1178 "prog_io_item.m"
                }
#line 1176 "prog_io_item.m"
                {
#line 1176 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1176 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1176 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1176 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 1176 "prog_io_item.m"
                }
#line 1179 "prog_io_item.m"
                {
#line 1179 "prog_io_item.m"
                  parse_tree__prog_io_item__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_38));
#line 1179 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1179 "prog_io_item.m"
                }
#line 1179 "prog_io_item.m"
                {
#line 1179 "prog_io_item.m"
                  MR_Word base;
#line 1179 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1179 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 1179 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 1179 "prog_io_item.m"
                }
#line 1171 "prog_io_item.m"
              }
#line 1150 "prog_io_item.m"
          }
#line 1148 "prog_io_item.m"
      }
#line 1185 "prog_io_item.m"
    else
#line 1186 "prog_io_item.m"
      {
#line 1186 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_108_108 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1186 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_74_74;
#line 1186 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_77_77;
#line 1186 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_80_80;
#line 1186 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_81_81;
#line 1186 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_90_90;
#line 1186 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_91_91;
#line 1186 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_92_92;
#line 1186 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_93_93;
#line 1186 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_94_94;
#line 1186 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_97_97;
#line 1186 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__PredModeTermStr_99;
#line 1186 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_100;
#line 1186 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_101;

#line 1186 "prog_io_item.m"
        {
#line 1186 "prog_io_item.m"
          parse_tree__prog_io_item__PredModeTermStr_99 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_108_108, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__PredModeTerm_15);
        }
#line 1188 "prog_io_item.m"
        {
#line 1188 "prog_io_item.m"
          parse_tree__prog_io_item__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1188 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_81_81, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_99));
#line 1188 "prog_io_item.m"
        }
#line 1188 "prog_io_item.m"
        {
#line 1188 "prog_io_item.m"
          parse_tree__prog_io_item__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_item__V_81_81));
#line 1188 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])));
#line 1188 "prog_io_item.m"
        }
#line 1188 "prog_io_item.m"
        {
#line 1188 "prog_io_item.m"
          parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[134])));
#line 1188 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 1188 "prog_io_item.m"
        }
#line 1187 "prog_io_item.m"
        {
#line 1187 "prog_io_item.m"
          parse_tree__prog_io_item__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[147])));
#line 1187 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 1187 "prog_io_item.m"
        }
#line 1187 "prog_io_item.m"
        {
#line 1187 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[129])));
#line 1187 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_100, 1) = ((MR_Box) (parse_tree__prog_io_item__V_74_74));
#line 1187 "prog_io_item.m"
        }
#line 1190 "prog_io_item.m"
        {
#line 1190 "prog_io_item.m"
          parse_tree__prog_io_item__V_92_92 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_108_108, parse_tree__prog_io_item__PredModeTerm_15);
        }
#line 1190 "prog_io_item.m"
        {
#line 1190 "prog_io_item.m"
          parse_tree__prog_io_item__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1190 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_100));
#line 1190 "prog_io_item.m"
        }
#line 1190 "prog_io_item.m"
        {
#line 1190 "prog_io_item.m"
          parse_tree__prog_io_item__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_item__V_94_94));
#line 1190 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1190 "prog_io_item.m"
        }
#line 1190 "prog_io_item.m"
        {
#line 1190 "prog_io_item.m"
          parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1190 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 1190 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (parse_tree__prog_io_item__V_93_93));
#line 1190 "prog_io_item.m"
        }
#line 1190 "prog_io_item.m"
        {
#line 1190 "prog_io_item.m"
          parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1190 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1190 "prog_io_item.m"
        }
#line 1189 "prog_io_item.m"
        {
#line 1189 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1189 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1189 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 2) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 1189 "prog_io_item.m"
        }
#line 1191 "prog_io_item.m"
        {
#line 1191 "prog_io_item.m"
          parse_tree__prog_io_item__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_101));
#line 1191 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1191 "prog_io_item.m"
        }
#line 1191 "prog_io_item.m"
        {
#line 1191 "prog_io_item.m"
          MR_Word base;
#line 1191 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 1191 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_97_97));
#line 1191 "prog_io_item.m"
        }
#line 1186 "prog_io_item.m"
      }
#line 1185 "prog_io_item.m"
  }
#line 1140 "prog_io_item.m"
}

#line 1100 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(
#line 1100 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 1100 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1100 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 1100 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1100 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_14,
#line 1100 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_15,
#line 1100 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_16,
#line 1100 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_17,
#line 1100 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_18)
#line 1100 "prog_io_item.m"
{
#line 1125 "prog_io_item.m"
  {
#line 1125 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1125 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeSugaredFuncTerm_19;
#line 1125 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnTypeTerm_20;
#line 1107 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_28_28;
#line 1107 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_29_29;
#line 1107 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 1107 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;
#line 1107 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 1108 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;

#line 1107 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1107 "prog_io_item.m"
      {
#line 1108 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_12)) == (MR_mktag((MR_Integer) 0)));
#line 1108 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1108 "prog_io_item.m"
          {
#line 1108 "prog_io_item.m"
            parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 0)));
#line 1108 "prog_io_item.m"
            parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 1)));
#line 1108 "prog_io_item.m"
            parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 2)));
#line 1108 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 1108 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1108 "prog_io_item.m"
              {
#line 1108 "prog_io_item.m"
                parse_tree__prog_io_item__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_28_28, (MR_Integer) 0)));
#line 1108 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_29_29, (MR_String) "=") == 0);
#line 1107 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1107 "prog_io_item.m"
                  {
#line 1109 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 1109 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1109 "prog_io_item.m"
                      {
#line 1109 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeSugaredFuncTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 0)));
#line 1109 "prog_io_item.m"
                        parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 1)));
#line 1109 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1109 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1109 "prog_io_item.m"
                          {
#line 1109 "prog_io_item.m"
                            parse_tree__prog_io_item__ReturnTypeTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 1109 "prog_io_item.m"
                            parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, (MR_Integer) 1)));
#line 1109 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1109 "prog_io_item.m"
                          }
#line 1109 "prog_io_item.m"
                      }
#line 1107 "prog_io_item.m"
                  }
#line 1108 "prog_io_item.m"
              }
#line 1108 "prog_io_item.m"
          }
#line 1107 "prog_io_item.m"
      }
#line 1125 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1111 "prog_io_item.m"
      {
#line 1111 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncTerm_22;
#line 1111 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_24;

#line 1111 "prog_io_item.m"
        {
#line 1111 "prog_io_item.m"
          parse_tree__prog_io_item__FuncTerm_22 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__MaybeSugaredFuncTerm_19);
        }
#line 1114 "prog_io_item.m"
        {
#line 1114 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_22, parse_tree__prog_io_item__VarSet_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[95]), &parse_tree__prog_io_item__MaybeFunctorArgs_24);
        }
#line 1119 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_24)) == (MR_mktag((MR_Integer) 0))))
#line 1117 "prog_io_item.m"
          {
#line 1117 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 0)));

#line 1118 "prog_io_item.m"
            {
#line 1118 "prog_io_item.m"
              MR_Word base;
#line 1118 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 1118 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_25));
#line 1118 "prog_io_item.m"
            }
#line 1117 "prog_io_item.m"
          }
#line 1119 "prog_io_item.m"
        else
#line 1120 "prog_io_item.m"
          {
#line 1120 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 0)));
#line 1120 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 1)));

#line 1121 "prog_io_item.m"
            {
#line 1121 "prog_io_item.m"
              parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(parse_tree__prog_io_item__Functor_26, parse_tree__prog_io_item__ArgTerms_27, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_22, parse_tree__prog_io_item__ReturnTypeTerm_20, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__MaybeDet_15, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_16, parse_tree__prog_io_item__SeqNum_17, parse_tree__prog_io_item__MaybeItem_18);
#line 1121 "prog_io_item.m"
              return;
            }
#line 1120 "prog_io_item.m"
          }
#line 1111 "prog_io_item.m"
      }
#line 1125 "prog_io_item.m"
    else
#line 1126 "prog_io_item.m"
      {
#line 1126 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_58;

#line 1127 "prog_io_item.m"
        {
#line 1127 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[96]), &parse_tree__prog_io_item__MaybeFunctorArgs_58);
        }
#line 1132 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_58)) == (MR_mktag((MR_Integer) 0))))
#line 1130 "prog_io_item.m"
          {
#line 1130 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 0)));

#line 1131 "prog_io_item.m"
            {
#line 1131 "prog_io_item.m"
              MR_Word base;
#line 1131 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1131 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 1131 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_51));
#line 1131 "prog_io_item.m"
            }
#line 1130 "prog_io_item.m"
          }
#line 1132 "prog_io_item.m"
        else
#line 1133 "prog_io_item.m"
          {
#line 1133 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 0)));
#line 1133 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 1)));

#line 1134 "prog_io_item.m"
            {
#line 1134 "prog_io_item.m"
              parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(parse_tree__prog_io_item__Functor_52, parse_tree__prog_io_item__ArgTerms_53, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__WithInst_14, parse_tree__prog_io_item__MaybeDet_15, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_16, parse_tree__prog_io_item__SeqNum_17, parse_tree__prog_io_item__MaybeItem_18);
#line 1134 "prog_io_item.m"
              return;
            }
#line 1133 "prog_io_item.m"
          }
#line 1126 "prog_io_item.m"
      }
#line 1125 "prog_io_item.m"
  }
#line 1100 "prog_io_item.m"
}

#line 1068 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_7_p_0(
#line 1068 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1068 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1068 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 1068 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 1068 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 1068 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 1068 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 1068 "prog_io_item.m"
{
#line 1072 "prog_io_item.m"
  {
#line 1072 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1072 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTerm_15;
#line 1072 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_16;
#line 1072 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithInst_18;
#line 1072 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BaseTerm_19;
#line 1508 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTermPrime_58;
#line 1508 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InstTerm_59;
#line 1495 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_64_64;
#line 1495 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_65_65;
#line 1495 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_66_66;
#line 1495 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_67_67;
#line 1495 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_68_68;
#line 1495 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_60_60;
#line 1094 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeDetism_20;
#line 1094 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithInst_21;

#line 1073 "prog_io_item.m"
    {
#line 1073 "prog_io_item.m"
      parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Term_10, &parse_tree__prog_io_item__BeforeDetismTerm_15, &parse_tree__prog_io_item__MaybeMaybeDetism_16);
    }
#line 1495 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__BeforeDetismTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 1495 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1495 "prog_io_item.m"
      {
#line 1495 "prog_io_item.m"
        parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 0)));
#line 1495 "prog_io_item.m"
        parse_tree__prog_io_item__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 1)));
#line 1495 "prog_io_item.m"
        parse_tree__prog_io_item__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 2)));
#line 1495 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 1495 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1495 "prog_io_item.m"
          {
#line 1495 "prog_io_item.m"
            parse_tree__prog_io_item__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 1495 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_65_65, (MR_String) "with_inst") == 0);
#line 1495 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1495 "prog_io_item.m"
              {
#line 1496 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_66_66)) == (MR_mktag((MR_Integer) 1)));
#line 1496 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1496 "prog_io_item.m"
                  {
#line 1496 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeWithInstTermPrime_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, (MR_Integer) 0)));
#line 1496 "prog_io_item.m"
                    parse_tree__prog_io_item__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, (MR_Integer) 1)));
#line 1496 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 1496 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1496 "prog_io_item.m"
                      {
#line 1496 "prog_io_item.m"
                        parse_tree__prog_io_item__InstTerm_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, (MR_Integer) 0)));
#line 1496 "prog_io_item.m"
                        parse_tree__prog_io_item__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, (MR_Integer) 1)));
#line 1496 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1496 "prog_io_item.m"
                      }
#line 1496 "prog_io_item.m"
                  }
#line 1495 "prog_io_item.m"
              }
#line 1495 "prog_io_item.m"
          }
#line 1495 "prog_io_item.m"
      }
#line 1508 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1498 "prog_io_item.m"
      {
#line 1501 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Inst_61;

#line 1498 "prog_io_item.m"
        parse_tree__prog_io_item__BaseTerm_19 = parse_tree__prog_io_item__BeforeWithInstTermPrime_58;
#line 1499 "prog_io_item.m"
        {
#line 1499 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__InstTerm_59, &parse_tree__prog_io_item__Inst_61);
        }
#line 1501 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1500 "prog_io_item.m"
          {
#line 1500 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_70_70;

#line 1500 "prog_io_item.m"
            {
#line 1500 "prog_io_item.m"
              parse_tree__prog_io_item__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_item__Inst_61));
#line 1500 "prog_io_item.m"
            }
#line 1500 "prog_io_item.m"
            {
#line 1500 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_18, 0) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 1500 "prog_io_item.m"
            }
#line 1500 "prog_io_item.m"
          }
#line 1501 "prog_io_item.m"
        else
#line 1503 "prog_io_item.m"
          {
#line 1503 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_63;
#line 1503 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_84_84;
#line 1503 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_85_85;
#line 1503 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_86_86;
#line 1503 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_91_91;

#line 1505 "prog_io_item.m"
            {
#line 1505 "prog_io_item.m"
              parse_tree__prog_io_item__V_86_86 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__InstTerm_59);
            }
#line 1505 "prog_io_item.m"
            {
#line 1505 "prog_io_item.m"
              parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1505 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__V_86_86));
#line 1505 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[144])));
#line 1505 "prog_io_item.m"
            }
#line 1505 "prog_io_item.m"
            {
#line 1505 "prog_io_item.m"
              parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 1505 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1505 "prog_io_item.m"
            }
#line 1504 "prog_io_item.m"
            {
#line 1504 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1504 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1504 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 2) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 1504 "prog_io_item.m"
            }
#line 1506 "prog_io_item.m"
            {
#line 1506 "prog_io_item.m"
              parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_63));
#line 1506 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1506 "prog_io_item.m"
            }
#line 1506 "prog_io_item.m"
            {
#line 1506 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1506 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeWithInst_18, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1506 "prog_io_item.m"
            }
#line 1503 "prog_io_item.m"
          }
#line 1498 "prog_io_item.m"
      }
#line 1508 "prog_io_item.m"
    else
#line 1509 "prog_io_item.m"
      {
#line 1509 "prog_io_item.m"
        parse_tree__prog_io_item__BaseTerm_19 = parse_tree__prog_io_item__BeforeDetismTerm_15;
#line 1510 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[14]);
#line 1509 "prog_io_item.m"
      }
#line 1078 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_16)) == (MR_mktag((MR_Integer) 1)));
#line 1078 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1078 "prog_io_item.m"
      {
#line 1078 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeDetism_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_16, (MR_Integer) 0)));
#line 1079 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_18)) == (MR_mktag((MR_Integer) 1)));
#line 1079 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1079 "prog_io_item.m"
          parse_tree__prog_io_item__WithInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_18, (MR_Integer) 0)));
#line 1078 "prog_io_item.m"
      }
#line 1094 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1090 "prog_io_item.m"
      {
#line 1082 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 1083 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;

#line 1082 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_20)) == (MR_mktag((MR_Integer) 1)));
#line 1082 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1082 "prog_io_item.m"
          {
#line 1082 "prog_io_item.m"
            parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_20, (MR_Integer) 0)));
#line 1083 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_21)) == (MR_mktag((MR_Integer) 1)));
#line 1083 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1083 "prog_io_item.m"
              parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_21, (MR_Integer) 0)));
#line 1082 "prog_io_item.m"
          }
#line 1090 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1086 "prog_io_item.m"
          {
#line 1086 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_25;
#line 1086 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1086 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 1086 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_42_42;
#line 1086 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_47_47;

#line 1088 "prog_io_item.m"
            {
#line 1088 "prog_io_item.m"
              parse_tree__prog_io_item__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_10);
            }
#line 1088 "prog_io_item.m"
            {
#line 1088 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1088 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 1088 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[121])));
#line 1088 "prog_io_item.m"
            }
#line 1088 "prog_io_item.m"
            {
#line 1088 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1088 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1088 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1088 "prog_io_item.m"
            }
#line 1087 "prog_io_item.m"
            {
#line 1087 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1087 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1087 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1087 "prog_io_item.m"
            }
#line 1089 "prog_io_item.m"
            {
#line 1089 "prog_io_item.m"
              parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_25));
#line 1089 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1089 "prog_io_item.m"
            }
#line 1089 "prog_io_item.m"
            {
#line 1089 "prog_io_item.m"
              MR_Word base;
#line 1089 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 1089 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 1089 "prog_io_item.m"
            }
#line 1086 "prog_io_item.m"
          }
#line 1090 "prog_io_item.m"
        else
#line 1091 "prog_io_item.m"
          {
#line 1091 "prog_io_item.m"
            parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__BaseTerm_19, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__WithInst_21, parse_tree__prog_io_item__MaybeDetism_20, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeItem_14);
#line 1091 "prog_io_item.m"
            return;
          }
#line 1090 "prog_io_item.m"
      }
#line 1094 "prog_io_item.m"
    else
#line 1096 "prog_io_item.m"
      {
#line 1096 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_26;
#line 1096 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_49_49;
#line 1096 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_50_50;

#line 1095 "prog_io_item.m"
        {
#line 1095 "prog_io_item.m"
          parse_tree__prog_io_item__V_49_49 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_16);
        }
#line 1096 "prog_io_item.m"
        {
#line 1096 "prog_io_item.m"
          parse_tree__prog_io_item__V_50_50 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_18);
        }
#line 1096 "prog_io_item.m"
        {
#line 1096 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_49_49, parse_tree__prog_io_item__V_50_50);
        }
#line 1097 "prog_io_item.m"
        {
#line 1097 "prog_io_item.m"
          MR_Word base;
#line 1097 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1097 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 1097 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_26));
#line 1097 "prog_io_item.m"
        }
#line 1096 "prog_io_item.m"
      }
#line 1072 "prog_io_item.m"
  }
#line 1068 "prog_io_item.m"
}

#line 1059 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__wrap_nth_2_p_0(
#line 1059 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__N_3,
#line 1059 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_2)
#line 1059 "prog_io_item.m"
{
#line 1061 "prog_io_item.m"
  {
#line 1061 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1061 "prog_io_item.m"
    {
#line 1061 "prog_io_item.m"
      MR_Word base;
#line 1061 "prog_io_item.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "prog_io_item.m"
      *parse_tree__prog_io_item__HeadVar__2_2 = base;
#line 1061 "prog_io_item.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1061 "prog_io_item.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_item__N_3));
#line 1061 "prog_io_item.m"
    }
#line 1061 "prog_io_item.m"
  }
#line 1059 "prog_io_item.m"
}

#line 1041 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0(
#line 1041 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__ArgNum_1,
#line 1041 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1041 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3,
#line 1041 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__4_4)
#line 1041 "prog_io_item.m"
{
#line 1044 "prog_io_item.m"
  {
#line 1044 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1044 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1044 "prog_io_item.m"
      {
#line 1044 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1044 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1044 "prog_io_item.m"
      }
#line 1044 "prog_io_item.m"
    else
#line 1046 "prog_io_item.m"
      {
#line 1046 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 1046 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 1046 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__WithModeArgNums0_11;
#line 1046 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__WithoutModeArgNums0_12;
#line 1046 "prog_io_item.m"
        MR_Integer parse_tree__prog_io_item__V_16_16 = (parse_tree__prog_io_item__ArgNum_1 + (MR_Integer) 1);

#line 1047 "prog_io_item.m"
        {
#line 1047 "prog_io_item.m"
          parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0(parse_tree__prog_io_item__V_16_16, parse_tree__prog_io_item__Tail_8, &parse_tree__prog_io_item__WithModeArgNums0_11, &parse_tree__prog_io_item__WithoutModeArgNums0_12);
        }
#line 1053 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__Head_7)) == (MR_mktag((MR_Integer) 1))))
#line 1054 "prog_io_item.m"
          {
#line 1055 "prog_io_item.m"
            {
#line 1055 "prog_io_item.m"
              MR_Word base;
#line 1055 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "prog_io_item.m"
              *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 1055 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgNum_1));
#line 1055 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__WithModeArgNums0_11));
#line 1055 "prog_io_item.m"
            }
#line 1056 "prog_io_item.m"
            *parse_tree__prog_io_item__HeadVar__4_4 = parse_tree__prog_io_item__WithoutModeArgNums0_12;
#line 1054 "prog_io_item.m"
          }
#line 1053 "prog_io_item.m"
        else
#line 1050 "prog_io_item.m"
          {
#line 1051 "prog_io_item.m"
            *parse_tree__prog_io_item__HeadVar__3_3 = parse_tree__prog_io_item__WithModeArgNums0_11;
#line 1052 "prog_io_item.m"
            {
#line 1052 "prog_io_item.m"
              MR_Word base;
#line 1052 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "prog_io_item.m"
              *parse_tree__prog_io_item__HeadVar__4_4 = base;
#line 1052 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgNum_1));
#line 1052 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__WithoutModeArgNums0_12));
#line 1052 "prog_io_item.m"
            }
#line 1050 "prog_io_item.m"
          }
#line 1046 "prog_io_item.m"
      }
#line 1044 "prog_io_item.m"
  }
#line 1041 "prog_io_item.m"
}

#line 1028 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0_1(
#line 1028 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1028 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1028 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1028 "prog_io_item.m"
{
#line 1028 "prog_io_item.m"
  {
#line 1028 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1028 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_2;

#line 1028 "prog_io_item.m"
    {
#line 1028 "prog_io_item.m"
      parse_tree__prog_io_item__wrap_nth_2_p_0(((MR_Integer) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_2);
    }
#line 1028 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_2));
#line 1028 "prog_io_item.m"
  }
#line 1028 "prog_io_item.m"
}

#line 997 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(
#line 997 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypesAndModes_4,
#line 997 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ErrorTerm_5,
#line 997 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeSpec_6)
#line 997 "prog_io_item.m"
{
#line 1000 "prog_io_item.m"
  {
#line 1000 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1000 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithModeArgNums_7;
#line 1000 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithoutModeArgNums_8;

#line 1001 "prog_io_item.m"
    {
#line 1001 "prog_io_item.m"
      parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0((MR_Integer) 1, parse_tree__prog_io_item__TypesAndModes_4, &parse_tree__prog_io_item__WithModeArgNums_7, &parse_tree__prog_io_item__WithoutModeArgNums_8);
    }
#line 1008 "prog_io_item.m"
    if ((parse_tree__prog_io_item__WithModeArgNums_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1008 "prog_io_item.m"
      if ((parse_tree__prog_io_item__WithoutModeArgNums_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1004 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1008 "prog_io_item.m"
      else
#line 1012 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1008 "prog_io_item.m"
    else
#line 1008 "prog_io_item.m"
    if ((parse_tree__prog_io_item__WithoutModeArgNums_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1017 "prog_io_item.m"
      *parse_tree__prog_io_item__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1008 "prog_io_item.m"
    else
#line 1019 "prog_io_item.m"
      {
#line 1019 "prog_io_item.m"
        MR_Integer parse_tree__prog_io_item__FirstWithout_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithoutModeArgNums_8, (MR_Integer) 0)));
#line 1019 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__RestWithout_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithoutModeArgNums_8, (MR_Integer) 1)));
#line 1019 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__IdPieces_17;
#line 1019 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_22;
#line 1019 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_23;
#line 1019 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_47_47;
#line 1019 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_51_51;
#line 1019 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_52_52;
#line 1019 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_53_53;
#line 1019 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_54_54;
#line 1019 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_55_55;

#line 1026 "prog_io_item.m"
        if ((parse_tree__prog_io_item__RestWithout_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1023 "prog_io_item.m"
          {
#line 1023 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_37_37;
#line 1023 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;

#line 1025 "prog_io_item.m"
            {
#line 1025 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1025 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io_item__FirstWithout_15));
#line 1025 "prog_io_item.m"
            }
#line 1025 "prog_io_item.m"
            {
#line 1025 "prog_io_item.m"
              parse_tree__prog_io_item__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1025 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])));
#line 1025 "prog_io_item.m"
            }
#line 1024 "prog_io_item.m"
            {
#line 1024 "prog_io_item.m"
              parse_tree__prog_io_item__IdPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__IdPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[141])));
#line 1024 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__IdPieces_17, 1) = ((MR_Box) (parse_tree__prog_io_item__V_37_37));
#line 1024 "prog_io_item.m"
            }
#line 1023 "prog_io_item.m"
          }
#line 1026 "prog_io_item.m"
        else
#line 1027 "prog_io_item.m"
          {
#line 1027 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1027 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__WithoutArgNumPieces_20;
#line 1027 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__WithoutArgNumsPieces_21;
#line 1027 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_26_26;

#line 1028 "prog_io_item.m"
            {
#line 1028 "prog_io_item.m"
              mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__prog_io_item__TypeCtorInfo_61_61, (MR_Word) &parse_tree__prog_io_item_scalar_common_2[4], parse_tree__prog_io_item__WithoutModeArgNums_8, &parse_tree__prog_io_item__WithoutArgNumPieces_20);
            }
#line 1029 "prog_io_item.m"
            {
#line 1029 "prog_io_item.m"
              parse_tree__prog_io_item__WithoutArgNumsPieces_21 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__prog_io_item__WithoutArgNumPieces_20);
            }
#line 1031 "prog_io_item.m"
            {
#line 1031 "prog_io_item.m"
              parse_tree__prog_io_item__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[142])));
#line 1031 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io_item__WithoutArgNumsPieces_21));
#line 1031 "prog_io_item.m"
            }
#line 1032 "prog_io_item.m"
            {
#line 1032 "prog_io_item.m"
              parse_tree__prog_io_item__IdPieces_17 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_61_61, parse_tree__prog_io_item__V_26_26, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14]));
            }
#line 1027 "prog_io_item.m"
          }
#line 1035 "prog_io_item.m"
        {
#line 1035 "prog_io_item.m"
          parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1035 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_item__IdPieces_17));
#line 1035 "prog_io_item.m"
        }
#line 1034 "prog_io_item.m"
        {
#line 1034 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[143])));
#line 1034 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_22, 1) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 1034 "prog_io_item.m"
        }
#line 1037 "prog_io_item.m"
        {
#line 1037 "prog_io_item.m"
          parse_tree__prog_io_item__V_53_53 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ErrorTerm_5);
        }
#line 1037 "prog_io_item.m"
        {
#line 1037 "prog_io_item.m"
          parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1037 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_22));
#line 1037 "prog_io_item.m"
        }
#line 1037 "prog_io_item.m"
        {
#line 1037 "prog_io_item.m"
          parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 1037 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1037 "prog_io_item.m"
        }
#line 1037 "prog_io_item.m"
        {
#line 1037 "prog_io_item.m"
          parse_tree__prog_io_item__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1037 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 1037 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 1037 "prog_io_item.m"
        }
#line 1037 "prog_io_item.m"
        {
#line 1037 "prog_io_item.m"
          parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_item__V_52_52));
#line 1037 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1037 "prog_io_item.m"
        }
#line 1036 "prog_io_item.m"
        {
#line 1036 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1036 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1036 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1036 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 1036 "prog_io_item.m"
        }
#line 1038 "prog_io_item.m"
        {
#line 1038 "prog_io_item.m"
          MR_Word base;
#line 1038 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeSpec_6 = base;
#line 1038 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_23));
#line 1038 "prog_io_item.m"
        }
#line 1019 "prog_io_item.m"
      }
#line 1000 "prog_io_item.m"
  }
#line 997 "prog_io_item.m"
}

#line 976 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_3_p_0(
#line 976 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_4,
#line 976 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 976 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeTypeAndMode_6)
#line 976 "prog_io_item.m"
{
#line 985 "prog_io_item.m"
  {
#line 985 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 985 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeTerm_7;
#line 985 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModeTerm_8;
#line 980 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_13_13;
#line 980 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_14_14;
#line 980 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_15_15;
#line 980 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 980 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 980 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___Context_9;

#line 980 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 980 "prog_io_item.m"
      {
#line 980 "prog_io_item.m"
        parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 0)));
#line 980 "prog_io_item.m"
        parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 1)));
#line 980 "prog_io_item.m"
        parse_tree__prog_io_item___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 2)));
#line 980 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 980 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 980 "prog_io_item.m"
          {
#line 980 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_13_13, (MR_Integer) 0)));
#line 980 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_14_14, (MR_String) "::") == 0);
#line 980 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 980 "prog_io_item.m"
              {
#line 980 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 980 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 980 "prog_io_item.m"
                  {
#line 980 "prog_io_item.m"
                    parse_tree__prog_io_item__TypeTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 0)));
#line 980 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 1)));
#line 980 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 980 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 980 "prog_io_item.m"
                      {
#line 980 "prog_io_item.m"
                        parse_tree__prog_io_item__ModeTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 980 "prog_io_item.m"
                        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 1)));
#line 980 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 980 "prog_io_item.m"
                      }
#line 980 "prog_io_item.m"
                  }
#line 980 "prog_io_item.m"
              }
#line 980 "prog_io_item.m"
          }
#line 980 "prog_io_item.m"
      }
#line 985 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 981 "prog_io_item.m"
      {
#line 981 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Type_10;
#line 981 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Mode0_11;
#line 981 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Mode_12;
#line 981 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_18_18;

#line 981 "prog_io_item.m"
        {
#line 981 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__TypeTerm_7, &parse_tree__prog_io_item__Type_10);
        }
#line 981 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 981 "prog_io_item.m"
          {
#line 982 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = (MR_Integer) 0;
#line 982 "prog_io_item.m"
            {
#line 982 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_item__V_18_18, parse_tree__prog_io_item__ModeTerm_8, &parse_tree__prog_io_item__Mode0_11);
            }
#line 981 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 981 "prog_io_item.m"
              {
#line 983 "prog_io_item.m"
                {
#line 983 "prog_io_item.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_4, parse_tree__prog_io_item__Mode0_11, &parse_tree__prog_io_item__Mode_12);
                }
#line 984 "prog_io_item.m"
                {
#line 984 "prog_io_item.m"
                  MR_Word base;
#line 984 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeTypeAndMode_6 = base;
#line 984 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_10));
#line 984 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__Mode_12));
#line 984 "prog_io_item.m"
                }
#line 984 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 981 "prog_io_item.m"
              }
#line 981 "prog_io_item.m"
          }
#line 981 "prog_io_item.m"
      }
#line 985 "prog_io_item.m"
    else
#line 986 "prog_io_item.m"
      {
#line 986 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Type_19;

#line 986 "prog_io_item.m"
        {
#line 986 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__Term_5, &parse_tree__prog_io_item__Type_19);
        }
#line 986 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 986 "prog_io_item.m"
          {
#line 987 "prog_io_item.m"
            {
#line 987 "prog_io_item.m"
              MR_Word base;
#line 987 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 987 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeTypeAndMode_6 = base;
#line 987 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_19));
#line 987 "prog_io_item.m"
            }
#line 987 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 986 "prog_io_item.m"
          }
#line 986 "prog_io_item.m"
      }
#line 985 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 985 "prog_io_item.m"
  }
#line 976 "prog_io_item.m"
}

#line 968 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(
#line 968 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_1,
#line 968 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 968 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3)
#line 968 "prog_io_item.m"
{
#line 971 "prog_io_item.m"
  {
#line 971 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 971 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 971 "prog_io_item.m"
      {
#line 971 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 971 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 971 "prog_io_item.m"
      }
#line 971 "prog_io_item.m"
    else
#line 972 "prog_io_item.m"
      {
#line 972 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 972 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 972 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__H_8;
#line 972 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__T_9;
#line 985 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeTerm_13;
#line 985 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModeTerm_14;
#line 980 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_19_19;
#line 980 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_20_20;
#line 980 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_21_21;
#line 980 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 980 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 980 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item___Context_15;

#line 980 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__H0_6)) == (MR_mktag((MR_Integer) 0)));
#line 980 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 980 "prog_io_item.m"
          {
#line 980 "prog_io_item.m"
            parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 0)));
#line 980 "prog_io_item.m"
            parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 1)));
#line 980 "prog_io_item.m"
            parse_tree__prog_io_item___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 2)));
#line 980 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 980 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 980 "prog_io_item.m"
              {
#line 980 "prog_io_item.m"
                parse_tree__prog_io_item__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 980 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_20_20, (MR_String) "::") == 0);
#line 980 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 980 "prog_io_item.m"
                  {
#line 980 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 980 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 980 "prog_io_item.m"
                      {
#line 980 "prog_io_item.m"
                        parse_tree__prog_io_item__TypeTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 980 "prog_io_item.m"
                        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 1)));
#line 980 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 980 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 980 "prog_io_item.m"
                          {
#line 980 "prog_io_item.m"
                            parse_tree__prog_io_item__ModeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, (MR_Integer) 0)));
#line 980 "prog_io_item.m"
                            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, (MR_Integer) 1)));
#line 980 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 980 "prog_io_item.m"
                          }
#line 980 "prog_io_item.m"
                      }
#line 980 "prog_io_item.m"
                  }
#line 980 "prog_io_item.m"
              }
#line 980 "prog_io_item.m"
          }
#line 985 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 981 "prog_io_item.m"
          {
#line 981 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_16;
#line 981 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Mode0_17;
#line 981 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Mode_18;
#line 981 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_24_24;

#line 981 "prog_io_item.m"
            {
#line 981 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__TypeTerm_13, &parse_tree__prog_io_item__Type_16);
            }
#line 981 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 981 "prog_io_item.m"
              {
#line 982 "prog_io_item.m"
                parse_tree__prog_io_item__V_24_24 = (MR_Integer) 0;
#line 982 "prog_io_item.m"
                {
#line 982 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_item__V_24_24, parse_tree__prog_io_item__ModeTerm_14, &parse_tree__prog_io_item__Mode0_17);
                }
#line 981 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 981 "prog_io_item.m"
                  {
#line 983 "prog_io_item.m"
                    {
#line 983 "prog_io_item.m"
                      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_1, parse_tree__prog_io_item__Mode0_17, &parse_tree__prog_io_item__Mode_18);
                    }
#line 984 "prog_io_item.m"
                    {
#line 984 "prog_io_item.m"
                      parse_tree__prog_io_item__H_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__H_8, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_16));
#line 984 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__H_8, 1) = ((MR_Box) (parse_tree__prog_io_item__Mode_18));
#line 984 "prog_io_item.m"
                    }
#line 984 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 981 "prog_io_item.m"
                  }
#line 981 "prog_io_item.m"
              }
#line 981 "prog_io_item.m"
          }
#line 985 "prog_io_item.m"
        else
#line 986 "prog_io_item.m"
          {
#line 986 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_25;

#line 986 "prog_io_item.m"
            {
#line 986 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__H0_6, &parse_tree__prog_io_item__Type_25);
            }
#line 986 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 986 "prog_io_item.m"
              {
#line 987 "prog_io_item.m"
                {
#line 987 "prog_io_item.m"
                  parse_tree__prog_io_item__H_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 987 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H_8, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_25));
#line 987 "prog_io_item.m"
                }
#line 987 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 986 "prog_io_item.m"
              }
#line 986 "prog_io_item.m"
          }
#line 972 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 972 "prog_io_item.m"
          {
#line 974 "prog_io_item.m"
            {
#line 974 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_1, parse_tree__prog_io_item__T0_7, &parse_tree__prog_io_item__T_9);
            }
#line 972 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 972 "prog_io_item.m"
              {
#line 972 "prog_io_item.m"
                {
#line 972 "prog_io_item.m"
                  MR_Word base;
#line 972 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "prog_io_item.m"
                  *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 972 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__H_8));
#line 972 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__T_9));
#line 972 "prog_io_item.m"
                }
#line 972 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 972 "prog_io_item.m"
              }
#line 972 "prog_io_item.m"
          }
#line 972 "prog_io_item.m"
      }
#line 971 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 971 "prog_io_item.m"
  }
#line 968 "prog_io_item.m"
}

#line 895 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncName_14,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Args_15,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ReturnArg_16,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncTerm_17,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_18,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ExistQVars_21,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Constraints_22,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_23,
#line 895 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_24,
#line 895 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_25,
#line 895 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_26)
#line 895 "prog_io_item.m"
{
#line 902 "prog_io_item.m"
  {
#line 902 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 902 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_132_132;
#line 902 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27;
#line 902 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InconsistentArgsSpecs_28;
#line 902 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgsOnlySpecs_36;
#line 902 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnOnlySpecs_43;
#line 902 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConsistencySpecs_44;
#line 902 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_98_98;
#line 913 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_60_60;
#line 914 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_33_33;
#line 913 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 913 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 913 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;
#line 926 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_79_79;
#line 927 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_39_39;
#line 927 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_40_40;
#line 926 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_38_38;
#line 926 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_37_37;

#line 903 "prog_io_item.m"
    {
#line 903 "prog_io_item.m"
      parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(parse_tree__prog_io_item__Args_15, parse_tree__prog_io_item__FuncTerm_17, &parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27);
    }
#line 908 "prog_io_item.m"
    if ((parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 907 "prog_io_item.m"
      parse_tree__prog_io_item__InconsistentArgsSpecs_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 908 "prog_io_item.m"
    else
#line 909 "prog_io_item.m"
      {
#line 909 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InconsistentArgsSpec_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27, (MR_Integer) 0)));

#line 910 "prog_io_item.m"
        {
#line 910 "prog_io_item.m"
          parse_tree__prog_io_item__InconsistentArgsSpecs_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__InconsistentArgsSpecs_28, 0) = ((MR_Box) (parse_tree__prog_io_item__InconsistentArgsSpec_29));
#line 910 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__InconsistentArgsSpecs_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 910 "prog_io_item.m"
        }
#line 909 "prog_io_item.m"
      }
#line 914 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_16)) == (MR_mktag((MR_Integer) 0)));
#line 914 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 914 "prog_io_item.m"
      {
#line 914 "prog_io_item.m"
        parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 0)));
#line 913 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 913 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 913 "prog_io_item.m"
          {
#line 913 "prog_io_item.m"
            parse_tree__prog_io_item__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 0)));
#line 913 "prog_io_item.m"
            parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 1)));
#line 913 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 913 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 913 "prog_io_item.m"
              {
#line 913 "prog_io_item.m"
                parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, (MR_Integer) 0)));
#line 913 "prog_io_item.m"
                parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, (MR_Integer) 1)));
#line 913 "prog_io_item.m"
              }
#line 913 "prog_io_item.m"
          }
#line 914 "prog_io_item.m"
      }
#line 922 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 917 "prog_io_item.m"
      {
#line 917 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ArgsOnlySpec_35;
#line 917 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_71_71;
#line 917 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_72_72;
#line 917 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_73_73;

#line 919 "prog_io_item.m"
        {
#line 919 "prog_io_item.m"
          parse_tree__prog_io_item__V_73_73 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 919 "prog_io_item.m"
        {
#line 919 "prog_io_item.m"
          parse_tree__prog_io_item__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 919 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_item__V_73_73));
#line 919 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[137])));
#line 919 "prog_io_item.m"
        }
#line 920 "prog_io_item.m"
        {
#line 920 "prog_io_item.m"
          parse_tree__prog_io_item__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_item__V_72_72));
#line 920 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 920 "prog_io_item.m"
        }
#line 918 "prog_io_item.m"
        {
#line 918 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 918 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 918 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 918 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 2) = ((MR_Box) (parse_tree__prog_io_item__V_71_71));
#line 918 "prog_io_item.m"
        }
#line 921 "prog_io_item.m"
        {
#line 921 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpecs_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_36, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsOnlySpec_35));
#line 921 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 921 "prog_io_item.m"
        }
#line 917 "prog_io_item.m"
      }
#line 922 "prog_io_item.m"
    else
#line 923 "prog_io_item.m"
      parse_tree__prog_io_item__ArgsOnlySpecs_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 927 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_16)) == (MR_mktag((MR_Integer) 1)));
#line 927 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 927 "prog_io_item.m"
      {
#line 927 "prog_io_item.m"
        parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 0)));
#line 927 "prog_io_item.m"
        parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 1)));
#line 926 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 926 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 926 "prog_io_item.m"
          {
#line 926 "prog_io_item.m"
            parse_tree__prog_io_item__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 0)));
#line 926 "prog_io_item.m"
            parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 1)));
#line 926 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_79_79)) == (MR_mktag((MR_Integer) 0)));
#line 926 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 926 "prog_io_item.m"
              parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, (MR_Integer) 0)));
#line 926 "prog_io_item.m"
          }
#line 927 "prog_io_item.m"
      }
#line 935 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 930 "prog_io_item.m"
      {
#line 930 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ReturnOnlySpec_42;
#line 930 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_90_90;
#line 930 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_91_91;
#line 930 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_92_92;

#line 932 "prog_io_item.m"
        {
#line 932 "prog_io_item.m"
          parse_tree__prog_io_item__V_92_92 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 932 "prog_io_item.m"
        {
#line 932 "prog_io_item.m"
          parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 932 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 932 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[138])));
#line 932 "prog_io_item.m"
        }
#line 933 "prog_io_item.m"
        {
#line 933 "prog_io_item.m"
          parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 933 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "prog_io_item.m"
        }
#line 931 "prog_io_item.m"
        {
#line 931 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 931 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 931 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 931 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 2) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 931 "prog_io_item.m"
        }
#line 934 "prog_io_item.m"
        {
#line 934 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpecs_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_43, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnOnlySpec_42));
#line 934 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 934 "prog_io_item.m"
        }
#line 930 "prog_io_item.m"
      }
#line 935 "prog_io_item.m"
    else
#line 936 "prog_io_item.m"
      parse_tree__prog_io_item__ReturnOnlySpecs_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9544 "parse_tree.prog_io_item.c"
    parse_tree__prog_io_item__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 939 "prog_io_item.m"
    {
#line 939 "prog_io_item.m"
      parse_tree__prog_io_item__V_98_98 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_132_132, parse_tree__prog_io_item__ArgsOnlySpecs_36, parse_tree__prog_io_item__ReturnOnlySpecs_43);
    }
#line 939 "prog_io_item.m"
    {
#line 939 "prog_io_item.m"
      parse_tree__prog_io_item__ConsistencySpecs_44 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_132_132, parse_tree__prog_io_item__InconsistentArgsSpecs_28, parse_tree__prog_io_item__V_98_98);
    }
#line 943 "prog_io_item.m"
    if ((parse_tree__prog_io_item__ConsistencySpecs_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 944 "prog_io_item.m"
      {
#line 944 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_133_133;
#line 944 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Purity_47;
#line 944 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_48;
#line 944 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TVarSet_49;
#line 944 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__IVarSet_50;
#line 944 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__AllArgs_51;
#line 944 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_99_99;

#line 945 "prog_io_item.m"
        {
#line 945 "prog_io_item.m"
          parse_tree__prog_io_item__get_purity_3_p_0(&parse_tree__prog_io_item__Purity_47, parse_tree__prog_io_item__Attributes0_23, &parse_tree__prog_io_item__Attributes_48);
        }
#line 9580 "parse_tree.prog_io_item.c"
        parse_tree__prog_io_item__TypeCtorInfo_133_133 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 946 "prog_io_item.m"
        {
#line 946 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__TVarSet_49);
        }
#line 947 "prog_io_item.m"
        {
#line 947 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__IVarSet_50);
        }
#line 948 "prog_io_item.m"
        {
#line 948 "prog_io_item.m"
          parse_tree__prog_io_item__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnArg_16));
#line 948 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 948 "prog_io_item.m"
        }
#line 948 "prog_io_item.m"
        {
#line 948 "prog_io_item.m"
          parse_tree__prog_io_item__AllArgs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io_item__Args_15, parse_tree__prog_io_item__V_99_99);
        }
#line 949 "prog_io_item.m"
        {
#line 949 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__AllArgs_51);
        }
#line 957 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 950 "prog_io_item.m"
          {
#line 950 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ItemPredDecl_53;
#line 950 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Item_54;
#line 950 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeItem0_55;

#line 951 "prog_io_item.m"
            {
#line 951 "prog_io_item.m"
              parse_tree__prog_io_item__ItemPredDecl_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 951 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 0) = ((MR_Box) (parse_tree__prog_io_item__FuncName_14));
#line 951 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 1) = ((MR_Box) ((MR_Integer) 1));
#line 951 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 2) = ((MR_Box) (parse_tree__prog_io_item__AllArgs_51));
#line 951 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 951 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 951 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDetism_20));
#line 951 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 951 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 7) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_49));
#line 951 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 8) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_50));
#line 951 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 9) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_21));
#line 951 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 10) = ((MR_Box) (parse_tree__prog_io_item__Purity_47));
#line 951 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 11) = ((MR_Box) (parse_tree__prog_io_item__Constraints_22));
#line 951 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 12) = ((MR_Box) (parse_tree__prog_io_item__Context_24));
#line 951 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 13) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_25));
#line 951 "prog_io_item.m"
            }
#line 954 "prog_io_item.m"
            {
#line 954 "prog_io_item.m"
              parse_tree__prog_io_item__Item_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 954 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_54, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_53));
#line 954 "prog_io_item.m"
            }
#line 955 "prog_io_item.m"
            {
#line 955 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeItem0_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 955 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_54));
#line 955 "prog_io_item.m"
            }
#line 956 "prog_io_item.m"
            {
#line 956 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_55, parse_tree__prog_io_item__Attributes_48, parse_tree__prog_io_item__MaybeItem_26);
#line 956 "prog_io_item.m"
              return;
            }
#line 950 "prog_io_item.m"
          }
#line 957 "prog_io_item.m"
        else
#line 958 "prog_io_item.m"
          {
#line 958 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__TermStr_56;
#line 958 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Pieces_57;
#line 958 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_58;
#line 958 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_106_106;
#line 958 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_109_109;
#line 958 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_111_111;
#line 958 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_112_112;
#line 958 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_121_121;
#line 958 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_122_122;
#line 958 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_123_123;
#line 958 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_124_124;
#line 958 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_125_125;
#line 958 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_128_128;

#line 958 "prog_io_item.m"
            {
#line 958 "prog_io_item.m"
              parse_tree__prog_io_item__TermStr_56 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__Term_18);
            }
#line 961 "prog_io_item.m"
            {
#line 961 "prog_io_item.m"
              parse_tree__prog_io_item__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 961 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_112_112, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_56));
#line 961 "prog_io_item.m"
            }
#line 961 "prog_io_item.m"
            {
#line 961 "prog_io_item.m"
              parse_tree__prog_io_item__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_item__V_112_112));
#line 961 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])));
#line 961 "prog_io_item.m"
            }
#line 960 "prog_io_item.m"
            {
#line 960 "prog_io_item.m"
              parse_tree__prog_io_item__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_109_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_109_109, 1) = ((MR_Box) (parse_tree__prog_io_item__V_111_111));
#line 960 "prog_io_item.m"
            }
#line 960 "prog_io_item.m"
            {
#line 960 "prog_io_item.m"
              parse_tree__prog_io_item__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[140])));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 1) = ((MR_Box) (parse_tree__prog_io_item__V_109_109));
#line 960 "prog_io_item.m"
            }
#line 959 "prog_io_item.m"
            {
#line 959 "prog_io_item.m"
              parse_tree__prog_io_item__Pieces_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[139])));
#line 959 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_57, 1) = ((MR_Box) (parse_tree__prog_io_item__V_106_106));
#line 959 "prog_io_item.m"
            }
#line 963 "prog_io_item.m"
            {
#line 963 "prog_io_item.m"
              parse_tree__prog_io_item__V_123_123 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, parse_tree__prog_io_item__Term_18);
            }
#line 963 "prog_io_item.m"
            {
#line 963 "prog_io_item.m"
              parse_tree__prog_io_item__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 963 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_57));
#line 963 "prog_io_item.m"
            }
#line 963 "prog_io_item.m"
            {
#line 963 "prog_io_item.m"
              parse_tree__prog_io_item__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_item__V_125_125));
#line 963 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 963 "prog_io_item.m"
            }
#line 963 "prog_io_item.m"
            {
#line 963 "prog_io_item.m"
              parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 963 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_item__V_123_123));
#line 963 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io_item__V_124_124));
#line 963 "prog_io_item.m"
            }
#line 963 "prog_io_item.m"
            {
#line 963 "prog_io_item.m"
              parse_tree__prog_io_item__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_121_121, 0) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 963 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 963 "prog_io_item.m"
            }
#line 962 "prog_io_item.m"
            {
#line 962 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 962 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 962 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 962 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 2) = ((MR_Box) (parse_tree__prog_io_item__V_121_121));
#line 962 "prog_io_item.m"
            }
#line 964 "prog_io_item.m"
            {
#line 964 "prog_io_item.m"
              parse_tree__prog_io_item__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_128_128, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_58));
#line 964 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 964 "prog_io_item.m"
            }
#line 964 "prog_io_item.m"
            {
#line 964 "prog_io_item.m"
              MR_Word base;
#line 964 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 964 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 964 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_128_128));
#line 964 "prog_io_item.m"
            }
#line 958 "prog_io_item.m"
          }
#line 944 "prog_io_item.m"
      }
#line 943 "prog_io_item.m"
    else
#line 942 "prog_io_item.m"
      {
#line 942 "prog_io_item.m"
        MR_Word base;
#line 942 "prog_io_item.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 942 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 942 "prog_io_item.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ConsistencySpecs_44));
#line 942 "prog_io_item.m"
      }
#line 902 "prog_io_item.m"
  }
#line 895 "prog_io_item.m"
}

#line 812 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_8_p_0(
#line 812 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 812 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 812 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_11,
#line 812 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_12,
#line 812 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_13,
#line 812 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 812 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 812 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 812 "prog_io_item.m"
{
#line 817 "prog_io_item.m"
  {
#line 817 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 817 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes_17;
#line 817 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeContext_18;

#line 818 "prog_io_item.m"
    {
#line 818 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__Attributes0_13, &parse_tree__prog_io_item__Attributes_17, &parse_tree__prog_io_item__MaybeContext_18);
    }
#line 823 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeContext_18)) == (MR_mktag((MR_Integer) 0))))
#line 821 "prog_io_item.m"
      {
#line 821 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 0)));

#line 822 "prog_io_item.m"
        {
#line 822 "prog_io_item.m"
          MR_Word base;
#line 822 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 822 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 822 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_19));
#line 822 "prog_io_item.m"
        }
#line 821 "prog_io_item.m"
      }
#line 823 "prog_io_item.m"
    else
#line 824 "prog_io_item.m"
      {
#line 824 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ExistQVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 0)));
#line 824 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Constraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 1)));
#line 824 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 2)));
#line 886 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeSugaredFuncTerm_23;
#line 886 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ReturnTerm_24;
#line 826 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_44_44;
#line 826 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_45_45;
#line 826 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_46_46;
#line 826 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_47_47;
#line 826 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_48_48;
#line 826 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_25_25;

#line 826 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_11)) == (MR_mktag((MR_Integer) 0)));
#line 826 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 826 "prog_io_item.m"
          {
#line 826 "prog_io_item.m"
            parse_tree__prog_io_item__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 0)));
#line 826 "prog_io_item.m"
            parse_tree__prog_io_item__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 1)));
#line 826 "prog_io_item.m"
            parse_tree__prog_io_item__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 2)));
#line 826 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_44_44)) == (MR_mktag((MR_Integer) 0)));
#line 826 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 826 "prog_io_item.m"
              {
#line 826 "prog_io_item.m"
                parse_tree__prog_io_item__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_44_44, (MR_Integer) 0)));
#line 826 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_45_45, (MR_String) "=") == 0);
#line 826 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 826 "prog_io_item.m"
                  {
#line 827 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 827 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 827 "prog_io_item.m"
                      {
#line 827 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeSugaredFuncTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, (MR_Integer) 0)));
#line 827 "prog_io_item.m"
                        parse_tree__prog_io_item__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, (MR_Integer) 1)));
#line 827 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 827 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 827 "prog_io_item.m"
                          {
#line 827 "prog_io_item.m"
                            parse_tree__prog_io_item__ReturnTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, (MR_Integer) 0)));
#line 827 "prog_io_item.m"
                            parse_tree__prog_io_item__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, (MR_Integer) 1)));
#line 827 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 827 "prog_io_item.m"
                          }
#line 827 "prog_io_item.m"
                      }
#line 826 "prog_io_item.m"
                  }
#line 826 "prog_io_item.m"
              }
#line 826 "prog_io_item.m"
          }
#line 886 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 829 "prog_io_item.m"
          {
#line 829 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_148_148;
#line 829 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__FuncTerm_26;
#line 829 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFuncNameAndArgs_28;

#line 829 "prog_io_item.m"
            {
#line 829 "prog_io_item.m"
              parse_tree__prog_io_item__FuncTerm_26 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__MaybeSugaredFuncTerm_23);
            }
#line 10027 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_148_148 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 832 "prog_io_item.m"
            {
#line 832 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__FuncTerm_26, parse_tree__prog_io_item__VarSet_10, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[73]), &parse_tree__prog_io_item__MaybeFuncNameAndArgs_28);
            }
#line 837 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFuncNameAndArgs_28)) == (MR_mktag((MR_Integer) 0))))
#line 835 "prog_io_item.m"
              {
#line 835 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFuncNameAndArgs_28, (MR_Integer) 0)));

#line 836 "prog_io_item.m"
                {
#line 836 "prog_io_item.m"
                  MR_Word base;
#line 836 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 836 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 836 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_140));
#line 836 "prog_io_item.m"
                }
#line 835 "prog_io_item.m"
              }
#line 837 "prog_io_item.m"
            else
#line 838 "prog_io_item.m"
              {
#line 838 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__FuncName_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncNameAndArgs_28, (MR_Integer) 0)));
#line 838 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncNameAndArgs_28, (MR_Integer) 1)));
#line 838 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeArgs_32;
#line 838 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeReturnArg_37;
#line 844 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgsPrime_31;
#line 860 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ReturnArgPrime_36;
#line 880 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Args_40;
#line 880 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ReturnArg_41;

#line 840 "prog_io_item.m"
                {
#line 840 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_22, parse_tree__prog_io_item__ArgTerms_30, &parse_tree__prog_io_item__ArgsPrime_31);
                }
#line 844 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 843 "prog_io_item.m"
                  {
#line 843 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 843 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeArgs_32, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsPrime_31));
#line 843 "prog_io_item.m"
                  }
#line 844 "prog_io_item.m"
                else
#line 845 "prog_io_item.m"
                  {
#line 845 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__FuncTermStr_33;
#line 845 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ArgsPieces_34;
#line 845 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ArgsSpec_35;
#line 845 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_60_60;
#line 845 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_63_63;
#line 845 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_66_66;
#line 845 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_67_67;
#line 845 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_76_76;
#line 845 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_77_77;
#line 845 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_78_78;
#line 845 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_79_79;
#line 845 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_80_80;
#line 845 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_83_83;

#line 845 "prog_io_item.m"
                    {
#line 845 "prog_io_item.m"
                      parse_tree__prog_io_item__FuncTermStr_33 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__FuncTerm_26);
                    }
#line 848 "prog_io_item.m"
                    {
#line 848 "prog_io_item.m"
                      parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 848 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_item__FuncTermStr_33));
#line 848 "prog_io_item.m"
                    }
#line 848 "prog_io_item.m"
                    {
#line 848 "prog_io_item.m"
                      parse_tree__prog_io_item__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 848 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])));
#line 848 "prog_io_item.m"
                    }
#line 847 "prog_io_item.m"
                    {
#line 847 "prog_io_item.m"
                      parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[134])));
#line 847 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_item__V_66_66));
#line 847 "prog_io_item.m"
                    }
#line 847 "prog_io_item.m"
                    {
#line 847 "prog_io_item.m"
                      parse_tree__prog_io_item__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[133])));
#line 847 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 847 "prog_io_item.m"
                    }
#line 846 "prog_io_item.m"
                    {
#line 846 "prog_io_item.m"
                      parse_tree__prog_io_item__ArgsPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[132])));
#line 846 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsPieces_34, 1) = ((MR_Box) (parse_tree__prog_io_item__V_60_60));
#line 846 "prog_io_item.m"
                    }
#line 851 "prog_io_item.m"
                    {
#line 851 "prog_io_item.m"
                      parse_tree__prog_io_item__V_78_78 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__FuncTerm_26);
                    }
#line 852 "prog_io_item.m"
                    {
#line 852 "prog_io_item.m"
                      parse_tree__prog_io_item__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 852 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsPieces_34));
#line 852 "prog_io_item.m"
                    }
#line 852 "prog_io_item.m"
                    {
#line 852 "prog_io_item.m"
                      parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 852 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 852 "prog_io_item.m"
                    }
#line 851 "prog_io_item.m"
                    {
#line 851 "prog_io_item.m"
                      parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 851 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 851 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 851 "prog_io_item.m"
                    }
#line 852 "prog_io_item.m"
                    {
#line 852 "prog_io_item.m"
                      parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 852 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 852 "prog_io_item.m"
                    }
#line 849 "prog_io_item.m"
                    {
#line 849 "prog_io_item.m"
                      parse_tree__prog_io_item__ArgsSpec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 849 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 849 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 849 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_35, 2) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 849 "prog_io_item.m"
                    }
#line 853 "prog_io_item.m"
                    {
#line 853 "prog_io_item.m"
                      parse_tree__prog_io_item__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsSpec_35));
#line 853 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "prog_io_item.m"
                    }
#line 853 "prog_io_item.m"
                    {
#line 853 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeArgs_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 853 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeArgs_32, 0) = ((MR_Box) (parse_tree__prog_io_item__V_83_83));
#line 853 "prog_io_item.m"
                    }
#line 845 "prog_io_item.m"
                  }
#line 856 "prog_io_item.m"
                {
#line 856 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_3_p_0(parse_tree__prog_io_item__InstConstraints_22, parse_tree__prog_io_item__ReturnTerm_24, &parse_tree__prog_io_item__ReturnArgPrime_36);
                }
#line 860 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 859 "prog_io_item.m"
                  {
#line 859 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeReturnArg_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 859 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeReturnArg_37, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnArgPrime_36));
#line 859 "prog_io_item.m"
                  }
#line 860 "prog_io_item.m"
                else
#line 863 "prog_io_item.m"
                  {
#line 863 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ReturnSpec_39;
#line 863 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_101_101;
#line 863 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_102_102;
#line 863 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_103_103;
#line 863 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_108_108;

#line 866 "prog_io_item.m"
                    {
#line 866 "prog_io_item.m"
                      parse_tree__prog_io_item__V_103_103 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__ReturnTerm_24);
                    }
#line 866 "prog_io_item.m"
                    {
#line 866 "prog_io_item.m"
                      parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 866 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_item__V_103_103));
#line 866 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[135])));
#line 866 "prog_io_item.m"
                    }
#line 867 "prog_io_item.m"
                    {
#line 867 "prog_io_item.m"
                      parse_tree__prog_io_item__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 867 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 867 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 867 "prog_io_item.m"
                    }
#line 864 "prog_io_item.m"
                    {
#line 864 "prog_io_item.m"
                      parse_tree__prog_io_item__ReturnSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 864 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 864 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 864 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_39, 2) = ((MR_Box) (parse_tree__prog_io_item__V_101_101));
#line 864 "prog_io_item.m"
                    }
#line 868 "prog_io_item.m"
                    {
#line 868 "prog_io_item.m"
                      parse_tree__prog_io_item__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnSpec_39));
#line 868 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 868 "prog_io_item.m"
                    }
#line 868 "prog_io_item.m"
                    {
#line 868 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeReturnArg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 868 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeReturnArg_37, 0) = ((MR_Box) (parse_tree__prog_io_item__V_108_108));
#line 868 "prog_io_item.m"
                    }
#line 863 "prog_io_item.m"
                  }
#line 871 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeArgs_32)) == (MR_mktag((MR_Integer) 1)));
#line 871 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 871 "prog_io_item.m"
                  {
#line 871 "prog_io_item.m"
                    parse_tree__prog_io_item__Args_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeArgs_32, (MR_Integer) 0)));
#line 872 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeReturnArg_37)) == (MR_mktag((MR_Integer) 1)));
#line 872 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 872 "prog_io_item.m"
                      parse_tree__prog_io_item__ReturnArg_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeReturnArg_37, (MR_Integer) 0)));
#line 871 "prog_io_item.m"
                  }
#line 880 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 876 "prog_io_item.m"
                  {
#line 876 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(parse_tree__prog_io_item__FuncName_29, parse_tree__prog_io_item__Args_40, parse_tree__prog_io_item__ReturnArg_41, parse_tree__prog_io_item__FuncTerm_26, parse_tree__prog_io_item__Term_11, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__MaybeDet_12, parse_tree__prog_io_item__ExistQVars_20, parse_tree__prog_io_item__Constraints_21, parse_tree__prog_io_item__Attributes_17, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 876 "prog_io_item.m"
                    return;
                  }
#line 880 "prog_io_item.m"
                else
#line 882 "prog_io_item.m"
                  {
#line 882 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_110_110;
#line 882 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_111_111;
#line 882 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Specs_141;

#line 881 "prog_io_item.m"
                    {
#line 881 "prog_io_item.m"
                      parse_tree__prog_io_item__V_110_110 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[5], parse_tree__prog_io_item__MaybeArgs_32);
                    }
#line 882 "prog_io_item.m"
                    {
#line 882 "prog_io_item.m"
                      parse_tree__prog_io_item__V_111_111 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io_item__MaybeReturnArg_37);
                    }
#line 881 "prog_io_item.m"
                    {
#line 881 "prog_io_item.m"
                      parse_tree__prog_io_item__Specs_141 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_110_110, parse_tree__prog_io_item__V_111_111);
                    }
#line 883 "prog_io_item.m"
                    {
#line 883 "prog_io_item.m"
                      MR_Word base;
#line 883 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 883 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 883 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_141));
#line 883 "prog_io_item.m"
                    }
#line 882 "prog_io_item.m"
                  }
#line 838 "prog_io_item.m"
              }
#line 829 "prog_io_item.m"
          }
#line 886 "prog_io_item.m"
        else
#line 888 "prog_io_item.m"
          {
#line 888 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_43;
#line 888 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_131_131;
#line 888 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_132_132;
#line 888 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_133_133;
#line 888 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_138_138;

#line 890 "prog_io_item.m"
            {
#line 890 "prog_io_item.m"
              parse_tree__prog_io_item__V_133_133 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_11);
            }
#line 890 "prog_io_item.m"
            {
#line 890 "prog_io_item.m"
              parse_tree__prog_io_item__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 890 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_132_132, 0) = ((MR_Box) (parse_tree__prog_io_item__V_133_133));
#line 890 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[136])));
#line 890 "prog_io_item.m"
            }
#line 890 "prog_io_item.m"
            {
#line 890 "prog_io_item.m"
              parse_tree__prog_io_item__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_131_131, 0) = ((MR_Box) (parse_tree__prog_io_item__V_132_132));
#line 890 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 890 "prog_io_item.m"
            }
#line 889 "prog_io_item.m"
            {
#line 889 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 889 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 889 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 2) = ((MR_Box) (parse_tree__prog_io_item__V_131_131));
#line 889 "prog_io_item.m"
            }
#line 891 "prog_io_item.m"
            {
#line 891 "prog_io_item.m"
              parse_tree__prog_io_item__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_43));
#line 891 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 891 "prog_io_item.m"
            }
#line 891 "prog_io_item.m"
            {
#line 891 "prog_io_item.m"
              MR_Word base;
#line 891 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 891 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 891 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_138_138));
#line 891 "prog_io_item.m"
            }
#line 888 "prog_io_item.m"
          }
#line 824 "prog_io_item.m"
      }
#line 817 "prog_io_item.m"
  }
#line 812 "prog_io_item.m"
}

#line 712 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_12,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_13,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_14,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_15,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_16,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 712 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 712 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 712 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22)
#line 712 "prog_io_item.m"
{
#line 719 "prog_io_item.m"
  {
#line 719 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 719 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes1_23;
#line 719 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeExistClassInstContext_24;

#line 720 "prog_io_item.m"
    {
#line 720 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_13, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__Attributes0_19, &parse_tree__prog_io_item__Attributes1_23, &parse_tree__prog_io_item__MaybeExistClassInstContext_24);
    }
#line 725 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeExistClassInstContext_24)) == (MR_mktag((MR_Integer) 0))))
#line 723 "prog_io_item.m"
      {
#line 723 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 0)));

#line 724 "prog_io_item.m"
        {
#line 724 "prog_io_item.m"
          MR_Word base;
#line 724 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 724 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 724 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_25));
#line 724 "prog_io_item.m"
        }
#line 723 "prog_io_item.m"
      }
#line 725 "prog_io_item.m"
    else
#line 727 "prog_io_item.m"
      {
#line 727 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_187_187 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 727 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_188_188;
#line 727 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ExistQVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 0)));
#line 727 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Constraints_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 1)));
#line 727 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 2)));
#line 727 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ContextPieces_29;
#line 727 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybePredNameAndArgs_30;
#line 727 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_58_58;
#line 727 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_59_59;

#line 728 "prog_io_item.m"
        {
#line 728 "prog_io_item.m"
          parse_tree__prog_io_item__V_59_59 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
        }
#line 729 "prog_io_item.m"
        {
#line 729 "prog_io_item.m"
          parse_tree__prog_io_item__V_58_58 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_59_59, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[126]));
        }
#line 728 "prog_io_item.m"
        {
#line 728 "prog_io_item.m"
          parse_tree__prog_io_item__ContextPieces_29 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[124]), parse_tree__prog_io_item__V_58_58);
        }
#line 10591 "parse_tree.prog_io_item.c"
        parse_tree__prog_io_item__TypeCtorInfo_188_188 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 730 "prog_io_item.m"
        {
#line 730 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__ModuleName_13, parse_tree__prog_io_item__PredTypeTerm_15, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__ContextPieces_29, &parse_tree__prog_io_item__MaybePredNameAndArgs_30);
        }
#line 735 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybePredNameAndArgs_30)) == (MR_mktag((MR_Integer) 0))))
#line 733 "prog_io_item.m"
          {
#line 733 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 0)));

#line 734 "prog_io_item.m"
            {
#line 734 "prog_io_item.m"
              MR_Word base;
#line 734 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 734 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 734 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_173));
#line 734 "prog_io_item.m"
            }
#line 733 "prog_io_item.m"
          }
#line 735 "prog_io_item.m"
        else
#line 736 "prog_io_item.m"
          {
#line 736 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 0)));
#line 736 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 1)));
#line 797 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Args_33;

#line 737 "prog_io_item.m"
            {
#line 737 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_28, parse_tree__prog_io_item__ArgTerms_32, &parse_tree__prog_io_item__Args_33);
            }
#line 797 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 739 "prog_io_item.m"
              {
#line 739 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34;

#line 738 "prog_io_item.m"
                {
#line 738 "prog_io_item.m"
                  parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(parse_tree__prog_io_item__Args_33, parse_tree__prog_io_item__PredTypeTerm_15, &parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34);
                }
#line 743 "prog_io_item.m"
                if ((parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 756 "prog_io_item.m"
                  {
#line 746 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_64_64;
#line 746 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_36_36;
#line 747 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_38_38;
#line 747 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_37_37;

#line 746 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_17)) == (MR_mktag((MR_Integer) 1)));
#line 746 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 746 "prog_io_item.m"
                      {
#line 746 "prog_io_item.m"
                        parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_17, (MR_Integer) 0)));
#line 747 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_33)) == (MR_mktag((MR_Integer) 1)));
#line 747 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 747 "prog_io_item.m"
                          {
#line 747 "prog_io_item.m"
                            parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 0)));
#line 747 "prog_io_item.m"
                            parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 1)));
#line 747 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 747 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 747 "prog_io_item.m"
                              parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 747 "prog_io_item.m"
                          }
#line 746 "prog_io_item.m"
                      }
#line 756 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 750 "prog_io_item.m"
                      {
#line 750 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Spec_40;
#line 750 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_78_78;
#line 750 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_79_79;
#line 750 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_80_80;
#line 750 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_85_85;

#line 753 "prog_io_item.m"
                        {
#line 753 "prog_io_item.m"
                          parse_tree__prog_io_item__V_80_80 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                        }
#line 753 "prog_io_item.m"
                        {
#line 753 "prog_io_item.m"
                          parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 753 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 753 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[127])));
#line 753 "prog_io_item.m"
                        }
#line 754 "prog_io_item.m"
                        {
#line 754 "prog_io_item.m"
                          parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 754 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 754 "prog_io_item.m"
                        }
#line 751 "prog_io_item.m"
                        {
#line 751 "prog_io_item.m"
                          parse_tree__prog_io_item__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 751 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 751 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 751 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 2) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 751 "prog_io_item.m"
                        }
#line 755 "prog_io_item.m"
                        {
#line 755 "prog_io_item.m"
                          parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 755 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_40));
#line 755 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 755 "prog_io_item.m"
                        }
#line 755 "prog_io_item.m"
                        {
#line 755 "prog_io_item.m"
                          MR_Word base;
#line 755 "prog_io_item.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 755 "prog_io_item.m"
                          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 755 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 755 "prog_io_item.m"
                        }
#line 750 "prog_io_item.m"
                      }
#line 756 "prog_io_item.m"
                    else
#line 768 "prog_io_item.m"
                      {
#line 757 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_87_87;
#line 758 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_41_41;
#line 759 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_44_44;
#line 759 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_42_42;
#line 759 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_43_43;

#line 757 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 757 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 757 "prog_io_item.m"
                          {
#line 758 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithType_16)) == (MR_mktag((MR_Integer) 1)));
#line 758 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 758 "prog_io_item.m"
                              {
#line 758 "prog_io_item.m"
                                parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithType_16, (MR_Integer) 0)));
#line 759 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_33)) == (MR_mktag((MR_Integer) 1)));
#line 759 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 759 "prog_io_item.m"
                                  {
#line 759 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 0)));
#line 759 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 1)));
#line 759 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_87_87)) == (MR_mktag((MR_Integer) 1)));
#line 759 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 759 "prog_io_item.m"
                                      {
#line 759 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_87_87, (MR_Integer) 0)));
#line 759 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_87_87, (MR_Integer) 1)));
#line 759 "prog_io_item.m"
                                      }
#line 759 "prog_io_item.m"
                                  }
#line 758 "prog_io_item.m"
                              }
#line 757 "prog_io_item.m"
                          }
#line 768 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 762 "prog_io_item.m"
                          {
#line 762 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_101_101;
#line 762 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_102_102;
#line 762 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_103_103;
#line 762 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_108_108;
#line 762 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Spec_175;

#line 765 "prog_io_item.m"
                            {
#line 765 "prog_io_item.m"
                              parse_tree__prog_io_item__V_103_103 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                            }
#line 765 "prog_io_item.m"
                            {
#line 765 "prog_io_item.m"
                              parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 765 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_item__V_103_103));
#line 765 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[128])));
#line 765 "prog_io_item.m"
                            }
#line 766 "prog_io_item.m"
                            {
#line 766 "prog_io_item.m"
                              parse_tree__prog_io_item__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 766 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "prog_io_item.m"
                            }
#line 763 "prog_io_item.m"
                            {
#line 763 "prog_io_item.m"
                              parse_tree__prog_io_item__Spec_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 763 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 763 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 763 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_175, 2) = ((MR_Box) (parse_tree__prog_io_item__V_101_101));
#line 763 "prog_io_item.m"
                            }
#line 767 "prog_io_item.m"
                            {
#line 767 "prog_io_item.m"
                              parse_tree__prog_io_item__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_175));
#line 767 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 767 "prog_io_item.m"
                            }
#line 767 "prog_io_item.m"
                            {
#line 767 "prog_io_item.m"
                              MR_Word base;
#line 767 "prog_io_item.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 767 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 767 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_108_108));
#line 767 "prog_io_item.m"
                            }
#line 762 "prog_io_item.m"
                          }
#line 768 "prog_io_item.m"
                        else
#line 782 "prog_io_item.m"
                          {
#line 769 "prog_io_item.m"
                            {
#line 769 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__Args_33);
                            }
#line 782 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 771 "prog_io_item.m"
                              {
#line 771 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Purity_45;
#line 771 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Attributes_46;
#line 771 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__TVarSet_47;
#line 771 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__IVarSet_48;
#line 771 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ItemPredDecl_50;
#line 771 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Item_51;
#line 771 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeItem0_52;

#line 771 "prog_io_item.m"
                                {
#line 771 "prog_io_item.m"
                                  parse_tree__prog_io_item__get_purity_3_p_0(&parse_tree__prog_io_item__Purity_45, parse_tree__prog_io_item__Attributes1_23, &parse_tree__prog_io_item__Attributes_46);
                                }
#line 772 "prog_io_item.m"
                                {
#line 772 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_14, &parse_tree__prog_io_item__TVarSet_47);
                                }
#line 773 "prog_io_item.m"
                                {
#line 773 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_14, &parse_tree__prog_io_item__IVarSet_48);
                                }
#line 775 "prog_io_item.m"
                                {
#line 775 "prog_io_item.m"
                                  parse_tree__prog_io_item__ItemPredDecl_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 775 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_31));
#line 775 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 1) = ((MR_Box) (parse_tree__prog_io_item__PredOrFunc_12));
#line 775 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 2) = ((MR_Box) (parse_tree__prog_io_item__Args_33));
#line 775 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 3) = ((MR_Box) (parse_tree__prog_io_item__WithType_16));
#line 775 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 4) = ((MR_Box) (parse_tree__prog_io_item__WithInst_17));
#line 775 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_18));
#line 775 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 7) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_47));
#line 775 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 8) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_48));
#line 775 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 9) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_26));
#line 775 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 10) = ((MR_Box) (parse_tree__prog_io_item__Purity_45));
#line 775 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 11) = ((MR_Box) (parse_tree__prog_io_item__Constraints_27));
#line 775 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 12) = ((MR_Box) (parse_tree__prog_io_item__Context_20));
#line 775 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 13) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_21));
#line 775 "prog_io_item.m"
                                }
#line 779 "prog_io_item.m"
                                {
#line 779 "prog_io_item.m"
                                  parse_tree__prog_io_item__Item_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 779 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_51, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_50));
#line 779 "prog_io_item.m"
                                }
#line 780 "prog_io_item.m"
                                {
#line 780 "prog_io_item.m"
                                  parse_tree__prog_io_item__MaybeItem0_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 780 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_52, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_51));
#line 780 "prog_io_item.m"
                                }
#line 781 "prog_io_item.m"
                                {
#line 781 "prog_io_item.m"
                                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_52, parse_tree__prog_io_item__Attributes_46, parse_tree__prog_io_item__MaybeItem_22);
#line 781 "prog_io_item.m"
                                  return;
                                }
#line 771 "prog_io_item.m"
                              }
#line 782 "prog_io_item.m"
                            else
#line 784 "prog_io_item.m"
                              {
#line 784 "prog_io_item.m"
                                MR_String parse_tree__prog_io_item__PredTypeTermStr_53;
#line 784 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_117_117;
#line 784 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_118_118;
#line 784 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_119_119;
#line 784 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_122_122;
#line 784 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_124_124;
#line 784 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_125_125;
#line 784 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_134_134;
#line 784 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_135_135;
#line 784 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_136_136;
#line 784 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_137_137;
#line 784 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_138_138;
#line 784 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_141_141;
#line 784 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Pieces_176;
#line 784 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Spec_177;

#line 783 "prog_io_item.m"
                                {
#line 783 "prog_io_item.m"
                                  parse_tree__prog_io_item__PredTypeTermStr_53 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__PredTypeTerm_15);
                                }
#line 787 "prog_io_item.m"
                                {
#line 787 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_118_118 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
                                }
#line 789 "prog_io_item.m"
                                {
#line 789 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 789 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_125_125, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_53));
#line 789 "prog_io_item.m"
                                }
#line 789 "prog_io_item.m"
                                {
#line 789 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_item__V_125_125));
#line 789 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])));
#line 789 "prog_io_item.m"
                                }
#line 788 "prog_io_item.m"
                                {
#line 788 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 788 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io_item__V_124_124));
#line 788 "prog_io_item.m"
                                }
#line 788 "prog_io_item.m"
                                {
#line 788 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_119_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[125])));
#line 788 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_119_119, 1) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 788 "prog_io_item.m"
                                }
#line 787 "prog_io_item.m"
                                {
#line 787 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_117_117 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_118_118, parse_tree__prog_io_item__V_119_119);
                                }
#line 786 "prog_io_item.m"
                                {
#line 786 "prog_io_item.m"
                                  parse_tree__prog_io_item__Pieces_176 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[67]), parse_tree__prog_io_item__V_117_117);
                                }
#line 792 "prog_io_item.m"
                                {
#line 792 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_136_136 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                                }
#line 793 "prog_io_item.m"
                                {
#line 793 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 793 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_176));
#line 793 "prog_io_item.m"
                                }
#line 793 "prog_io_item.m"
                                {
#line 793 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_137_137, 0) = ((MR_Box) (parse_tree__prog_io_item__V_138_138));
#line 793 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 793 "prog_io_item.m"
                                }
#line 792 "prog_io_item.m"
                                {
#line 792 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_135_135, 0) = ((MR_Box) (parse_tree__prog_io_item__V_136_136));
#line 792 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_135_135, 1) = ((MR_Box) (parse_tree__prog_io_item__V_137_137));
#line 792 "prog_io_item.m"
                                }
#line 793 "prog_io_item.m"
                                {
#line 793 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_134_134, 0) = ((MR_Box) (parse_tree__prog_io_item__V_135_135));
#line 793 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 793 "prog_io_item.m"
                                }
#line 790 "prog_io_item.m"
                                {
#line 790 "prog_io_item.m"
                                  parse_tree__prog_io_item__Spec_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 790 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_177, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 790 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 790 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_177, 2) = ((MR_Box) (parse_tree__prog_io_item__V_134_134));
#line 790 "prog_io_item.m"
                                }
#line 794 "prog_io_item.m"
                                {
#line 794 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_141_141, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_177));
#line 794 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 794 "prog_io_item.m"
                                }
#line 794 "prog_io_item.m"
                                {
#line 794 "prog_io_item.m"
                                  MR_Word base;
#line 794 "prog_io_item.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 794 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 794 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_141_141));
#line 794 "prog_io_item.m"
                                }
#line 784 "prog_io_item.m"
                              }
#line 782 "prog_io_item.m"
                          }
#line 768 "prog_io_item.m"
                      }
#line 756 "prog_io_item.m"
                  }
#line 743 "prog_io_item.m"
                else
#line 741 "prog_io_item.m"
                  {
#line 741 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__InconsistentArgsSpec_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34, (MR_Integer) 0)));
#line 741 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_143_143;

#line 742 "prog_io_item.m"
                    {
#line 742 "prog_io_item.m"
                      parse_tree__prog_io_item__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_143_143, 0) = ((MR_Box) (parse_tree__prog_io_item__InconsistentArgsSpec_35));
#line 742 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "prog_io_item.m"
                    }
#line 742 "prog_io_item.m"
                    {
#line 742 "prog_io_item.m"
                      MR_Word base;
#line 742 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 742 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 742 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_143_143));
#line 742 "prog_io_item.m"
                    }
#line 741 "prog_io_item.m"
                  }
#line 739 "prog_io_item.m"
              }
#line 797 "prog_io_item.m"
            else
#line 798 "prog_io_item.m"
              {
#line 798 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_149_149;
#line 798 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_150_150;
#line 798 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_151_151;
#line 798 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_154_154;
#line 798 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_155_155;
#line 798 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_164_164;
#line 798 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_165_165;
#line 798 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_166_166;
#line 798 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_167_167;
#line 798 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_168_168;
#line 798 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_171_171;
#line 798 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_182;
#line 798 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_183;
#line 798 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredTypeTermStr_184;

#line 798 "prog_io_item.m"
                {
#line 798 "prog_io_item.m"
                  parse_tree__prog_io_item__PredTypeTermStr_184 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__PredTypeTerm_15);
                }
#line 800 "prog_io_item.m"
                {
#line 800 "prog_io_item.m"
                  parse_tree__prog_io_item__V_150_150 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
                }
#line 801 "prog_io_item.m"
                {
#line 801 "prog_io_item.m"
                  parse_tree__prog_io_item__V_155_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_155_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 801 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_155_155, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_184));
#line 801 "prog_io_item.m"
                }
#line 801 "prog_io_item.m"
                {
#line 801 "prog_io_item.m"
                  parse_tree__prog_io_item__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_154_154, 0) = ((MR_Box) (parse_tree__prog_io_item__V_155_155));
#line 801 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])));
#line 801 "prog_io_item.m"
                }
#line 801 "prog_io_item.m"
                {
#line 801 "prog_io_item.m"
                  parse_tree__prog_io_item__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_151_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[131])));
#line 801 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_151_151, 1) = ((MR_Box) (parse_tree__prog_io_item__V_154_154));
#line 801 "prog_io_item.m"
                }
#line 800 "prog_io_item.m"
                {
#line 800 "prog_io_item.m"
                  parse_tree__prog_io_item__V_149_149 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_150_150, parse_tree__prog_io_item__V_151_151);
                }
#line 799 "prog_io_item.m"
                {
#line 799 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_182 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[130]), parse_tree__prog_io_item__V_149_149);
                }
#line 803 "prog_io_item.m"
                {
#line 803 "prog_io_item.m"
                  parse_tree__prog_io_item__V_166_166 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                }
#line 804 "prog_io_item.m"
                {
#line 804 "prog_io_item.m"
                  parse_tree__prog_io_item__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 804 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_168_168, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_182));
#line 804 "prog_io_item.m"
                }
#line 804 "prog_io_item.m"
                {
#line 804 "prog_io_item.m"
                  parse_tree__prog_io_item__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_167_167, 0) = ((MR_Box) (parse_tree__prog_io_item__V_168_168));
#line 804 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 804 "prog_io_item.m"
                }
#line 803 "prog_io_item.m"
                {
#line 803 "prog_io_item.m"
                  parse_tree__prog_io_item__V_165_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 803 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_165_165, 0) = ((MR_Box) (parse_tree__prog_io_item__V_166_166));
#line 803 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_165_165, 1) = ((MR_Box) (parse_tree__prog_io_item__V_167_167));
#line 803 "prog_io_item.m"
                }
#line 804 "prog_io_item.m"
                {
#line 804 "prog_io_item.m"
                  parse_tree__prog_io_item__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_164_164, 0) = ((MR_Box) (parse_tree__prog_io_item__V_165_165));
#line 804 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 804 "prog_io_item.m"
                }
#line 802 "prog_io_item.m"
                {
#line 802 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 802 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 802 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_183, 2) = ((MR_Box) (parse_tree__prog_io_item__V_164_164));
#line 802 "prog_io_item.m"
                }
#line 805 "prog_io_item.m"
                {
#line 805 "prog_io_item.m"
                  parse_tree__prog_io_item__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_171_171, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_183));
#line 805 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_171_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 805 "prog_io_item.m"
                }
#line 805 "prog_io_item.m"
                {
#line 805 "prog_io_item.m"
                  MR_Word base;
#line 805 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 805 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 805 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_171_171));
#line 805 "prog_io_item.m"
                }
#line 798 "prog_io_item.m"
              }
#line 736 "prog_io_item.m"
          }
#line 727 "prog_io_item.m"
      }
#line 719 "prog_io_item.m"
  }
#line 712 "prog_io_item.m"
}

#line 651 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0(
#line 651 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_9,
#line 651 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 651 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 651 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 651 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 651 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 651 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 651 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 651 "prog_io_item.m"
{
#line 656 "prog_io_item.m"
  {
#line 656 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 656 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTerm_17;
#line 656 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_18;
#line 656 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTerm_19;
#line 656 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithInst_20;
#line 656 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithType_22;
#line 656 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BaseTerm_23;
#line 702 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeDetism_24;
#line 702 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithInst_25;
#line 702 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithType_26;

#line 657 "prog_io_item.m"
    {
#line 657 "prog_io_item.m"
      parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__Term_12, &parse_tree__prog_io_item__BeforeDetismTerm_17, &parse_tree__prog_io_item__MaybeMaybeDetism_18);
    }
#line 659 "prog_io_item.m"
    {
#line 659 "prog_io_item.m"
      parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(parse_tree__prog_io_item__BeforeDetismTerm_17, &parse_tree__prog_io_item__BeforeWithInstTerm_19, &parse_tree__prog_io_item__MaybeWithInst_20);
    }
#line 661 "prog_io_item.m"
    {
#line 661 "prog_io_item.m"
      parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BeforeWithInstTerm_19, &parse_tree__prog_io_item__BaseTerm_23, &parse_tree__prog_io_item__MaybeWithType_22);
    }
#line 665 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_18)) == (MR_mktag((MR_Integer) 1)));
#line 665 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 665 "prog_io_item.m"
      {
#line 665 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeDetism_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_18, (MR_Integer) 0)));
#line 666 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_20)) == (MR_mktag((MR_Integer) 1)));
#line 666 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 666 "prog_io_item.m"
          {
#line 666 "prog_io_item.m"
            parse_tree__prog_io_item__WithInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_20, (MR_Integer) 0)));
#line 667 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithType_22)) == (MR_mktag((MR_Integer) 1)));
#line 667 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 667 "prog_io_item.m"
              parse_tree__prog_io_item__WithType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithType_22, (MR_Integer) 0)));
#line 666 "prog_io_item.m"
          }
#line 665 "prog_io_item.m"
      }
#line 702 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 678 "prog_io_item.m"
      {
#line 670 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_27_27;
#line 671 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_28_28;

#line 670 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_24)) == (MR_mktag((MR_Integer) 1)));
#line 670 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 670 "prog_io_item.m"
          {
#line 670 "prog_io_item.m"
            parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_24, (MR_Integer) 0)));
#line 671 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_25)) == (MR_mktag((MR_Integer) 1)));
#line 671 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 671 "prog_io_item.m"
              parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_25, (MR_Integer) 0)));
#line 670 "prog_io_item.m"
          }
#line 678 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 674 "prog_io_item.m"
          {
#line 674 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_30;
#line 674 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_46_46;
#line 674 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_47_47;
#line 674 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_48_48;
#line 674 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_53_53;

#line 676 "prog_io_item.m"
            {
#line 676 "prog_io_item.m"
              parse_tree__prog_io_item__V_48_48 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_23);
            }
#line 676 "prog_io_item.m"
            {
#line 676 "prog_io_item.m"
              parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 676 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__V_48_48));
#line 676 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[121])));
#line 676 "prog_io_item.m"
            }
#line 676 "prog_io_item.m"
            {
#line 676 "prog_io_item.m"
              parse_tree__prog_io_item__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 676 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 676 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 676 "prog_io_item.m"
            }
#line 675 "prog_io_item.m"
            {
#line 675 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 675 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 675 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 2) = ((MR_Box) (parse_tree__prog_io_item__V_46_46));
#line 675 "prog_io_item.m"
            }
#line 677 "prog_io_item.m"
            {
#line 677 "prog_io_item.m"
              parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_30));
#line 677 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "prog_io_item.m"
            }
#line 677 "prog_io_item.m"
            {
#line 677 "prog_io_item.m"
              MR_Word base;
#line 677 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 677 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 677 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 677 "prog_io_item.m"
            }
#line 674 "prog_io_item.m"
          }
#line 678 "prog_io_item.m"
        else
#line 687 "prog_io_item.m"
          {
#line 679 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_31_31;

#line 679 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_25)) == (MR_mktag((MR_Integer) 1)));
#line 679 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 679 "prog_io_item.m"
              {
#line 679 "prog_io_item.m"
                parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_25, (MR_Integer) 0)));
#line 680 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "prog_io_item.m"
              }
#line 687 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 683 "prog_io_item.m"
              {
#line 683 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_77_77;
#line 683 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_78_78;
#line 683 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_79_79;
#line 683 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_84_84;
#line 683 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_91;

#line 685 "prog_io_item.m"
                {
#line 685 "prog_io_item.m"
                  parse_tree__prog_io_item__V_79_79 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_23);
                }
#line 685 "prog_io_item.m"
                {
#line 685 "prog_io_item.m"
                  parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 685 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 685 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[122])));
#line 685 "prog_io_item.m"
                }
#line 685 "prog_io_item.m"
                {
#line 685 "prog_io_item.m"
                  parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 685 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 685 "prog_io_item.m"
                }
#line 684 "prog_io_item.m"
                {
#line 684 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 684 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 684 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 2) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 684 "prog_io_item.m"
                }
#line 686 "prog_io_item.m"
                {
#line 686 "prog_io_item.m"
                  parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_91));
#line 686 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 686 "prog_io_item.m"
                }
#line 686 "prog_io_item.m"
                {
#line 686 "prog_io_item.m"
                  MR_Word base;
#line 686 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 686 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 686 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 686 "prog_io_item.m"
                }
#line 683 "prog_io_item.m"
              }
#line 687 "prog_io_item.m"
            else
#line 696 "prog_io_item.m"
              {
#line 691 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__PredOrFunc_9 == (MR_Integer) 1);
#line 691 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 692 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 696 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 694 "prog_io_item.m"
                  {
#line 694 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_func_decl_base_8_p_0(parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BaseTerm_23, parse_tree__prog_io_item__MaybeDetism_24, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 694 "prog_io_item.m"
                    return;
                  }
#line 696 "prog_io_item.m"
                else
#line 697 "prog_io_item.m"
                  {
#line 697 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(parse_tree__prog_io_item__PredOrFunc_9, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BaseTerm_23, parse_tree__prog_io_item__WithType_26, parse_tree__prog_io_item__WithInst_25, parse_tree__prog_io_item__MaybeDetism_24, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 697 "prog_io_item.m"
                    return;
                  }
#line 696 "prog_io_item.m"
              }
#line 687 "prog_io_item.m"
          }
#line 678 "prog_io_item.m"
      }
#line 702 "prog_io_item.m"
    else
#line 705 "prog_io_item.m"
      {
#line 705 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 705 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_32;
#line 705 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_86_86;
#line 705 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_87_87;
#line 705 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_88_88;
#line 705 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_89_89;

#line 703 "prog_io_item.m"
        {
#line 703 "prog_io_item.m"
          parse_tree__prog_io_item__V_86_86 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_18);
        }
#line 704 "prog_io_item.m"
        {
#line 704 "prog_io_item.m"
          parse_tree__prog_io_item__V_88_88 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_20);
        }
#line 705 "prog_io_item.m"
        {
#line 705 "prog_io_item.m"
          parse_tree__prog_io_item__V_89_89 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[4], parse_tree__prog_io_item__MaybeWithType_22);
        }
#line 705 "prog_io_item.m"
        {
#line 705 "prog_io_item.m"
          parse_tree__prog_io_item__V_87_87 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_96_96, parse_tree__prog_io_item__V_88_88, parse_tree__prog_io_item__V_89_89);
        }
#line 704 "prog_io_item.m"
        {
#line 704 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_32 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_96_96, parse_tree__prog_io_item__V_86_86, parse_tree__prog_io_item__V_87_87);
        }
#line 706 "prog_io_item.m"
        {
#line 706 "prog_io_item.m"
          MR_Word base;
#line 706 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 706 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 706 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_32));
#line 706 "prog_io_item.m"
        }
#line 705 "prog_io_item.m"
      }
#line 656 "prog_io_item.m"
  }
#line 651 "prog_io_item.m"
}

#line 437 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0(
#line 437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 437 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_11,
#line 437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_12,
#line 437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 437 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 437 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 437 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 437 "prog_io_item.m"
{
#line 444 "prog_io_item.m"
  {
#line 444 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 444 "prog_io_item.m"
    {
#line 444 "prog_io_item.m"
      MR_Integer parse_tree__prog_io_item__case_num_0 = (MR_Integer) -1;

#line 444 "prog_io_item.m"
#line 444 "prog_io_item.m"
      switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 0)) {
#line 444 "prog_io_item.m"
        case (MR_Integer) 101:
#line 444 "prog_io_item.m"
          if (MR_offset_streq(1, parse_tree__prog_io_item__Functor_11, (MR_String) "external"))
#line 444 "prog_io_item.m"
            parse_tree__prog_io_item__case_num_0 = (MR_Integer) 0;
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 102:
#line 444 "prog_io_item.m"
#line 444 "prog_io_item.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) {
#line 444 "prog_io_item.m"
            case (MR_Integer) 105:
#line 444 "prog_io_item.m"
              if (((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 5)) == (MR_Integer) 105))))
#line 444 "prog_io_item.m"
#line 444 "prog_io_item.m"
                switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 6)) {
#line 444 "prog_io_item.m"
                  case (MR_Integer) 115:
#line 444 "prog_io_item.m"
                    if (MR_offset_streq(7, parse_tree__prog_io_item__Functor_11, (MR_String) "finalise"))
#line 444 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 1;
#line 444 "prog_io_item.m"
                    break;
#line 444 "prog_io_item.m"
                  case (MR_Integer) 122:
#line 444 "prog_io_item.m"
                    if (MR_offset_streq(7, parse_tree__prog_io_item__Functor_11, (MR_String) "finalize"))
#line 444 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 1;
#line 444 "prog_io_item.m"
                    break;
#line 444 "prog_io_item.m"
                }
#line 444 "prog_io_item.m"
              break;
#line 444 "prog_io_item.m"
            case (MR_Integer) 117:
#line 444 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_11, (MR_String) "func"))
#line 444 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 2;
#line 444 "prog_io_item.m"
              break;
#line 444 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 105:
#line 444 "prog_io_item.m"
          if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) == (MR_Integer) 110))
#line 444 "prog_io_item.m"
#line 444 "prog_io_item.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) {
#line 444 "prog_io_item.m"
              case (MR_Integer) 105:
#line 444 "prog_io_item.m"
                if (((((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 116)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 6)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 7)) == (MR_Integer) 105))))
#line 444 "prog_io_item.m"
#line 444 "prog_io_item.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 8)) {
#line 444 "prog_io_item.m"
                    case (MR_Integer) 115:
#line 444 "prog_io_item.m"
                      if (MR_offset_streq(9, parse_tree__prog_io_item__Functor_11, (MR_String) "initialise"))
#line 444 "prog_io_item.m"
                        parse_tree__prog_io_item__case_num_0 = (MR_Integer) 3;
#line 444 "prog_io_item.m"
                      break;
#line 444 "prog_io_item.m"
                    case (MR_Integer) 122:
#line 444 "prog_io_item.m"
                      if (MR_offset_streq(9, parse_tree__prog_io_item__Functor_11, (MR_String) "initialize"))
#line 444 "prog_io_item.m"
                        parse_tree__prog_io_item__case_num_0 = (MR_Integer) 3;
#line 444 "prog_io_item.m"
                      break;
#line 444 "prog_io_item.m"
                  }
#line 444 "prog_io_item.m"
                break;
#line 444 "prog_io_item.m"
              case (MR_Integer) 115:
#line 444 "prog_io_item.m"
                if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 116))
#line 444 "prog_io_item.m"
#line 444 "prog_io_item.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) {
#line 444 "prog_io_item.m"
                    case (MR_Integer) 0:
#line 444 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 4;
#line 444 "prog_io_item.m"
                      break;
#line 444 "prog_io_item.m"
                    case (MR_Integer) 97:
#line 444 "prog_io_item.m"
                      if (MR_offset_streq(5, parse_tree__prog_io_item__Functor_11, (MR_String) "instance"))
#line 444 "prog_io_item.m"
                        parse_tree__prog_io_item__case_num_0 = (MR_Integer) 5;
#line 444 "prog_io_item.m"
                      break;
#line 444 "prog_io_item.m"
                  }
#line 444 "prog_io_item.m"
                break;
#line 444 "prog_io_item.m"
            }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 109:
#line 444 "prog_io_item.m"
#line 444 "prog_io_item.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) {
#line 444 "prog_io_item.m"
            case (MR_Integer) 111:
#line 444 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_11, (MR_String) "mode"))
#line 444 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 6;
#line 444 "prog_io_item.m"
              break;
#line 444 "prog_io_item.m"
            case (MR_Integer) 117:
#line 444 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_11, (MR_String) "mutable"))
#line 444 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 7;
#line 444 "prog_io_item.m"
              break;
#line 444 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 112:
#line 444 "prog_io_item.m"
          if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) == (MR_Integer) 114))
#line 444 "prog_io_item.m"
#line 444 "prog_io_item.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) {
#line 444 "prog_io_item.m"
              case (MR_Integer) 97:
#line 444 "prog_io_item.m"
                if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_11, (MR_String) "pragma"))
#line 444 "prog_io_item.m"
                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 8;
#line 444 "prog_io_item.m"
                break;
#line 444 "prog_io_item.m"
              case (MR_Integer) 101:
#line 444 "prog_io_item.m"
                if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_11, (MR_String) "pred"))
#line 444 "prog_io_item.m"
                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 9;
#line 444 "prog_io_item.m"
                break;
#line 444 "prog_io_item.m"
              case (MR_Integer) 111:
#line 444 "prog_io_item.m"
                if (((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 109)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 6)) == (MR_Integer) 101))))
#line 444 "prog_io_item.m"
#line 444 "prog_io_item.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 7)) {
#line 444 "prog_io_item.m"
                    case (MR_Integer) 0:
#line 444 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 10;
#line 444 "prog_io_item.m"
                      break;
#line 444 "prog_io_item.m"
                    case (MR_Integer) 95:
#line 444 "prog_io_item.m"
                      if (((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 8)) == (MR_Integer) 101)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 9)) == (MR_Integer) 120))))
#line 444 "prog_io_item.m"
#line 444 "prog_io_item.m"
                        switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 10)) {
#line 444 "prog_io_item.m"
                          case (MR_Integer) 99:
#line 444 "prog_io_item.m"
                            if (((((((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 11)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 12)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 13)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 15)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 16)) == (MR_Integer) 101))))
#line 444 "prog_io_item.m"
#line 444 "prog_io_item.m"
                              switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 17)) {
#line 444 "prog_io_item.m"
                                case (MR_Integer) 0:
#line 444 "prog_io_item.m"
                                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 11;
#line 444 "prog_io_item.m"
                                  break;
#line 444 "prog_io_item.m"
                                case (MR_Integer) 95:
#line 444 "prog_io_item.m"
                                  if (MR_offset_streq(18, parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exclusive_exhaustive"))
#line 444 "prog_io_item.m"
                                    parse_tree__prog_io_item__case_num_0 = (MR_Integer) 12;
#line 444 "prog_io_item.m"
                                  break;
#line 444 "prog_io_item.m"
                              }
#line 444 "prog_io_item.m"
                            break;
#line 444 "prog_io_item.m"
                          case (MR_Integer) 104:
#line 444 "prog_io_item.m"
                            if (MR_offset_streq(11, parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exhaustive"))
#line 444 "prog_io_item.m"
                              parse_tree__prog_io_item__case_num_0 = (MR_Integer) 13;
#line 444 "prog_io_item.m"
                            break;
#line 444 "prog_io_item.m"
                        }
#line 444 "prog_io_item.m"
                      break;
#line 444 "prog_io_item.m"
                  }
#line 444 "prog_io_item.m"
                break;
#line 444 "prog_io_item.m"
            }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 116:
#line 444 "prog_io_item.m"
          if (((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) == (MR_Integer) 121)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 101))))
#line 444 "prog_io_item.m"
#line 444 "prog_io_item.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) {
#line 444 "prog_io_item.m"
              case (MR_Integer) 0:
#line 444 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 14;
#line 444 "prog_io_item.m"
                break;
#line 444 "prog_io_item.m"
              case (MR_Integer) 99:
#line 444 "prog_io_item.m"
                if (MR_offset_streq(5, parse_tree__prog_io_item__Functor_11, (MR_String) "typeclass"))
#line 444 "prog_io_item.m"
                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 15;
#line 444 "prog_io_item.m"
                break;
#line 444 "prog_io_item.m"
            }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
      }
#line 444 "prog_io_item.m"
#line 444 "prog_io_item.m"
      switch (parse_tree__prog_io_item__case_num_0) {
#line 444 "prog_io_item.m"
        default:
#line 444 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 0:
#line 478 "prog_io_item.m"
          {
#line 478 "prog_io_item.m"
            /* case "external" */
#line 478 "prog_io_item.m"
            {
#line 478 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_107_107;
#line 478 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__PredSpecTerm_26;
#line 478 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeBackEnd_27;
#line 478 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeSymSpec_32;
#line 478 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_90;
#line 478 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_127_127;
#line 478 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_128_128;

#line 480 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 480 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 480 "prog_io_item.m"
                {
#line 480 "prog_io_item.m"
                  parse_tree__prog_io_item__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 480 "prog_io_item.m"
                  parse_tree__prog_io_item__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 482 "prog_io_item.m"
                  if ((parse_tree__prog_io_item__V_127_127 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "prog_io_item.m"
                    {
#line 480 "prog_io_item.m"
                      parse_tree__prog_io_item__PredSpecTerm_26 = parse_tree__prog_io_item__V_128_128;
#line 481 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeBackEnd_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 480 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 480 "prog_io_item.m"
                    }
#line 482 "prog_io_item.m"
                  else
#line 483 "prog_io_item.m"
                    {
#line 483 "prog_io_item.m"
                      MR_String parse_tree__prog_io_item__BackEndFunctor_29;
#line 483 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__BackEnd_31;
#line 483 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_56_56;
#line 483 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_57_57;
#line 483 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_58_58;
#line 484 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_30_30;

#line 483 "prog_io_item.m"
                      parse_tree__prog_io_item__PredSpecTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_127_127, (MR_Integer) 0)));
#line 483 "prog_io_item.m"
                      parse_tree__prog_io_item__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_127_127, (MR_Integer) 1)));
#line 483 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 483 "prog_io_item.m"
                        {
#line 484 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_128_128)) == (MR_mktag((MR_Integer) 0)));
#line 484 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 484 "prog_io_item.m"
                            {
#line 484 "prog_io_item.m"
                              parse_tree__prog_io_item__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_128_128, (MR_Integer) 0)));
#line 484 "prog_io_item.m"
                              parse_tree__prog_io_item__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_128_128, (MR_Integer) 1)));
#line 484 "prog_io_item.m"
                              parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_128_128, (MR_Integer) 2)));
#line 484 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 483 "prog_io_item.m"
                                {
#line 484 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_57_57)) == (MR_mktag((MR_Integer) 0)));
#line 484 "prog_io_item.m"
                                  if (parse_tree__prog_io_item__succeeded)
#line 484 "prog_io_item.m"
                                    {
#line 484 "prog_io_item.m"
                                      parse_tree__prog_io_item__BackEndFunctor_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, (MR_Integer) 0)));
#line 488 "prog_io_item.m"
                                      if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_29, (MR_String) "low_level_backend") == 0))
#line 489 "prog_io_item.m"
                                        {
#line 489 "prog_io_item.m"
                                          parse_tree__prog_io_item__BackEnd_31 = (MR_Integer) 1;
#line 489 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 489 "prog_io_item.m"
                                        }
#line 488 "prog_io_item.m"
                                      else
#line 488 "prog_io_item.m"
                                      if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_29, (MR_String) "high_level_backend") == 0))
#line 486 "prog_io_item.m"
                                        {
#line 486 "prog_io_item.m"
                                          parse_tree__prog_io_item__BackEnd_31 = (MR_Integer) 0;
#line 486 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 486 "prog_io_item.m"
                                        }
#line 488 "prog_io_item.m"
                                      else
#line 488 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 483 "prog_io_item.m"
                                      if (parse_tree__prog_io_item__succeeded)
#line 483 "prog_io_item.m"
                                        {
#line 492 "prog_io_item.m"
                                          {
#line 492 "prog_io_item.m"
                                            parse_tree__prog_io_item__MaybeBackEnd_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "prog_io_item.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeBackEnd_27, 0) = ((MR_Box) (parse_tree__prog_io_item__BackEnd_31));
#line 492 "prog_io_item.m"
                                          }
#line 492 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 483 "prog_io_item.m"
                                        }
#line 484 "prog_io_item.m"
                                    }
#line 483 "prog_io_item.m"
                                }
#line 484 "prog_io_item.m"
                            }
#line 483 "prog_io_item.m"
                        }
#line 483 "prog_io_item.m"
                    }
#line 478 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 478 "prog_io_item.m"
                    {
#line 494 "prog_io_item.m"
                      {
#line 494 "prog_io_item.m"
                        parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__PredSpecTerm_26, &parse_tree__prog_io_item__MaybeSymSpec_32);
                      }
#line 499 "prog_io_item.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeSymSpec_32)) == (MR_mktag((MR_Integer) 0))))
#line 498 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeItem0_90 = (MR_Word) parse_tree__prog_io_item__MaybeSymSpec_32;
#line 499 "prog_io_item.m"
                      else
#line 500 "prog_io_item.m"
                        {
#line 500 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__SymSpec_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeSymSpec_32, (MR_Integer) 0)));

#line 509 "prog_io_item.m"
                          if (((MR_tag((MR_Word) parse_tree__prog_io_item__SymSpec_34)) == (MR_mktag((MR_Integer) 0))))
#line 502 "prog_io_item.m"
                            {
#line 502 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Msg_37;
#line 502 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Spec_38;
#line 502 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__V_77_77;
#line 502 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__V_79_79;

#line 505 "prog_io_item.m"
                              {
#line 505 "prog_io_item.m"
                                parse_tree__prog_io_item__Msg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 505 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Msg_37, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 505 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Msg_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[120])));
#line 505 "prog_io_item.m"
                              }
#line 507 "prog_io_item.m"
                              {
#line 507 "prog_io_item.m"
                                parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__Msg_37));
#line 507 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 507 "prog_io_item.m"
                              }
#line 506 "prog_io_item.m"
                              {
#line 506 "prog_io_item.m"
                                parse_tree__prog_io_item__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 506 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 506 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 506 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 506 "prog_io_item.m"
                              }
#line 508 "prog_io_item.m"
                              {
#line 508 "prog_io_item.m"
                                parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_38));
#line 508 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 508 "prog_io_item.m"
                              }
#line 508 "prog_io_item.m"
                              {
#line 508 "prog_io_item.m"
                                parse_tree__prog_io_item__MaybeItem0_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 508 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeItem0_90, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 508 "prog_io_item.m"
                              }
#line 502 "prog_io_item.m"
                            }
#line 509 "prog_io_item.m"
                          else
#line 510 "prog_io_item.m"
                            {
#line 510 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Name_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__SymSpec_34, (MR_Integer) 0)));
#line 510 "prog_io_item.m"
                              MR_Integer parse_tree__prog_io_item__Arity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__SymSpec_34, (MR_Integer) 1)));
#line 510 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__ExternalInfo_42;
#line 510 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Pragma_43;
#line 510 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__ItemPragma_44;
#line 510 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Item_45;

#line 512 "prog_io_item.m"
                              {
#line 512 "prog_io_item.m"
                                parse_tree__prog_io_item__ExternalInfo_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 512 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_39));
#line 512 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_42, 1) = ((MR_Box) (parse_tree__prog_io_item__Arity_40));
#line 512 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_42, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_42, 3) = ((MR_Box) (parse_tree__prog_io_item__MaybeBackEnd_27));
#line 512 "prog_io_item.m"
                              }
#line 514 "prog_io_item.m"
                              {
#line 514 "prog_io_item.m"
                                parse_tree__prog_io_item__Pragma_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "prog_io_item.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Pragma_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 514 "prog_io_item.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Pragma_43, 1) = ((MR_Box) (parse_tree__prog_io_item__ExternalInfo_42));
#line 514 "prog_io_item.m"
                              }
#line 515 "prog_io_item.m"
                              {
#line 515 "prog_io_item.m"
                                parse_tree__prog_io_item__ItemPragma_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 515 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_44, 0) = ((MR_Box) (parse_tree__prog_io_item__Pragma_43));
#line 515 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_44, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 515 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_44, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 515 "prog_io_item.m"
                              }
#line 517 "prog_io_item.m"
                              {
#line 517 "prog_io_item.m"
                                parse_tree__prog_io_item__Item_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "prog_io_item.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 517 "prog_io_item.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_45, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPragma_44));
#line 517 "prog_io_item.m"
                              }
#line 518 "prog_io_item.m"
                              {
#line 518 "prog_io_item.m"
                                parse_tree__prog_io_item__MaybeItem0_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 518 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_90, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_45));
#line 518 "prog_io_item.m"
                              }
#line 510 "prog_io_item.m"
                            }
#line 500 "prog_io_item.m"
                        }
#line 12373 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 521 "prog_io_item.m"
                      {
#line 521 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_107_107, parse_tree__prog_io_item__MaybeItem0_90, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 521 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 478 "prog_io_item.m"
                    }
#line 480 "prog_io_item.m"
                }
#line 478 "prog_io_item.m"
            }
#line 478 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 1:
#line 579 "prog_io_item.m"
          {
#line 579 "prog_io_item.m"
            /* case "finalise", "finalize" */
#line 579 "prog_io_item.m"
            {
#line 579 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_113_113;
#line 579 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_51_51;
#line 579 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_103;
#line 579 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__SubTerm_104;

#line 580 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 580 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 580 "prog_io_item.m"
                {
#line 580 "prog_io_item.m"
                  parse_tree__prog_io_item__SubTerm_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 580 "prog_io_item.m"
                  parse_tree__prog_io_item__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 580 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 579 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 579 "prog_io_item.m"
                    {
#line 581 "prog_io_item.m"
                      {
#line 581 "prog_io_item.m"
                        parse_tree__prog_io_mutable__parse_finalise_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_104, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_103);
                      }
#line 12430 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 583 "prog_io_item.m"
                      {
#line 583 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_113_113, parse_tree__prog_io_item__MaybeItem0_103, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 583 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 579 "prog_io_item.m"
                    }
#line 580 "prog_io_item.m"
                }
#line 579 "prog_io_item.m"
            }
#line 579 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 2:
#line 473 "prog_io_item.m"
          {
#line 473 "prog_io_item.m"
            /* case "func" */
#line 473 "prog_io_item.m"
            {
#line 473 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__DeclTerm_25;
#line 473 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_81_81;

#line 474 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 474 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 474 "prog_io_item.m"
                {
#line 474 "prog_io_item.m"
                  parse_tree__prog_io_item__DeclTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 474 "prog_io_item.m"
                  parse_tree__prog_io_item__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 474 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 473 "prog_io_item.m"
                    {
#line 475 "prog_io_item.m"
                      {
#line 475 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0((MR_Integer) 1, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__DeclTerm_25, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 475 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 473 "prog_io_item.m"
                    }
#line 474 "prog_io_item.m"
                }
#line 473 "prog_io_item.m"
            }
#line 473 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 3:
#line 571 "prog_io_item.m"
          {
#line 571 "prog_io_item.m"
            /* case "initialise", "initialize" */
#line 571 "prog_io_item.m"
            {
#line 571 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_112_112;
#line 571 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_52_52;
#line 571 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_101;
#line 571 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__SubTerm_102;

#line 572 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 572 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 572 "prog_io_item.m"
                {
#line 572 "prog_io_item.m"
                  parse_tree__prog_io_item__SubTerm_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 572 "prog_io_item.m"
                  parse_tree__prog_io_item__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 572 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 571 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 571 "prog_io_item.m"
                    {
#line 573 "prog_io_item.m"
                      {
#line 573 "prog_io_item.m"
                        parse_tree__prog_io_mutable__parse_initialise_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_102, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_101);
                      }
#line 12533 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 575 "prog_io_item.m"
                      {
#line 575 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_112_112, parse_tree__prog_io_item__MaybeItem0_101, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 575 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 571 "prog_io_item.m"
                    }
#line 572 "prog_io_item.m"
                }
#line 571 "prog_io_item.m"
            }
#line 571 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 4:
#line 449 "prog_io_item.m"
          {
#line 449 "prog_io_item.m"
            /* case "inst" */
#line 449 "prog_io_item.m"
            {
#line 449 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_106_106;
#line 449 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__InstDeclTerm_18;
#line 449 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_19;
#line 449 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_88_88;

#line 450 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 450 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 450 "prog_io_item.m"
                {
#line 450 "prog_io_item.m"
                  parse_tree__prog_io_item__InstDeclTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 450 "prog_io_item.m"
                  parse_tree__prog_io_item__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 450 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 449 "prog_io_item.m"
                    {
#line 451 "prog_io_item.m"
                      {
#line 451 "prog_io_item.m"
                        parse_tree__prog_io_mode_defn__parse_inst_defn_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__InstDeclTerm_18, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_19);
                      }
#line 12590 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_106_106 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 453 "prog_io_item.m"
                      {
#line 453 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_106_106, parse_tree__prog_io_item__MaybeItem0_19, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 453 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 449 "prog_io_item.m"
                    }
#line 450 "prog_io_item.m"
                }
#line 449 "prog_io_item.m"
            }
#line 449 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 5:
#line 557 "prog_io_item.m"
          {
#line 557 "prog_io_item.m"
            /* case "instance" */
#line 557 "prog_io_item.m"
            {
#line 557 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_111_111;
#line 557 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItemInstance_49;
#line 557 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_99;

#line 558 "prog_io_item.m"
              {
#line 558 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_typeclass__parse_instance_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItemInstance_49);
              }
#line 557 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 557 "prog_io_item.m"
                {
#line 563 "prog_io_item.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItemInstance_49)) == (MR_mktag((MR_Integer) 0))))
#line 565 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeItem0_99 = (MR_Word) parse_tree__prog_io_item__MaybeItemInstance_49;
#line 563 "prog_io_item.m"
                  else
#line 561 "prog_io_item.m"
                    {
#line 561 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__ItemInstance_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItemInstance_49, (MR_Integer) 0)));
#line 561 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_53_53;

#line 562 "prog_io_item.m"
                      {
#line 562 "prog_io_item.m"
                        parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 562 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemInstance_50));
#line 562 "prog_io_item.m"
                      }
#line 562 "prog_io_item.m"
                      {
#line 562 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeItem0_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 562 "prog_io_item.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_99, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 562 "prog_io_item.m"
                      }
#line 561 "prog_io_item.m"
                    }
#line 12666 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_111_111 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 567 "prog_io_item.m"
                  {
#line 567 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_111_111, parse_tree__prog_io_item__MaybeItem0_99, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 567 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 557 "prog_io_item.m"
                }
#line 557 "prog_io_item.m"
            }
#line 557 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 6:
#line 455 "prog_io_item.m"
          {
#line 455 "prog_io_item.m"
            /* case "mode" */
#line 455 "prog_io_item.m"
            {
#line 455 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__SubTerm_20;
#line 455 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_82_82;
#line 461 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__HeadTerm_21;
#line 461 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__BodyTerm_22;
#line 457 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_83_83;
#line 457 "prog_io_item.m"
              MR_String parse_tree__prog_io_item__V_84_84;
#line 457 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_85_85;
#line 457 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_86_86;
#line 457 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_87_87;
#line 457 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_23_23;

#line 456 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 456 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 456 "prog_io_item.m"
                {
#line 456 "prog_io_item.m"
                  parse_tree__prog_io_item__SubTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 456 "prog_io_item.m"
                  parse_tree__prog_io_item__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 456 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 455 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 455 "prog_io_item.m"
                    {
#line 457 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__SubTerm_20)) == (MR_mktag((MR_Integer) 0)));
#line 457 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 457 "prog_io_item.m"
                        {
#line 457 "prog_io_item.m"
                          parse_tree__prog_io_item__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 0)));
#line 457 "prog_io_item.m"
                          parse_tree__prog_io_item__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 1)));
#line 457 "prog_io_item.m"
                          parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 2)));
#line 457 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_83_83)) == (MR_mktag((MR_Integer) 0)));
#line 457 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 457 "prog_io_item.m"
                            {
#line 457 "prog_io_item.m"
                              parse_tree__prog_io_item__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_83_83, (MR_Integer) 0)));
#line 457 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_84_84, (MR_String) "==") == 0);
#line 457 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 457 "prog_io_item.m"
                                {
#line 457 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 457 "prog_io_item.m"
                                  if (parse_tree__prog_io_item__succeeded)
#line 457 "prog_io_item.m"
                                    {
#line 457 "prog_io_item.m"
                                      parse_tree__prog_io_item__HeadTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, (MR_Integer) 0)));
#line 457 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, (MR_Integer) 1)));
#line 457 "prog_io_item.m"
                                      parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_86_86)) == (MR_mktag((MR_Integer) 1)));
#line 457 "prog_io_item.m"
                                      if (parse_tree__prog_io_item__succeeded)
#line 457 "prog_io_item.m"
                                        {
#line 457 "prog_io_item.m"
                                          parse_tree__prog_io_item__BodyTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_86_86, (MR_Integer) 0)));
#line 457 "prog_io_item.m"
                                          parse_tree__prog_io_item__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_86_86, (MR_Integer) 1)));
#line 457 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 457 "prog_io_item.m"
                                        }
#line 457 "prog_io_item.m"
                                    }
#line 457 "prog_io_item.m"
                                }
#line 457 "prog_io_item.m"
                            }
#line 457 "prog_io_item.m"
                        }
#line 461 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 459 "prog_io_item.m"
                        {
#line 459 "prog_io_item.m"
                          parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__HeadTerm_21, parse_tree__prog_io_item__BodyTerm_22, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                        }
#line 461 "prog_io_item.m"
                      else
#line 463 "prog_io_item.m"
                        {
#line 463 "prog_io_item.m"
                          parse_tree__prog_io_item__parse_mode_decl_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_20, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                        }
#line 461 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 455 "prog_io_item.m"
                    }
#line 456 "prog_io_item.m"
                }
#line 455 "prog_io_item.m"
            }
#line 455 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 7:
#line 585 "prog_io_item.m"
          {
#line 585 "prog_io_item.m"
            /* case "mutable" */
#line 585 "prog_io_item.m"
            {
#line 585 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_114_114;
#line 585 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_105;

#line 586 "prog_io_item.m"
              {
#line 586 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_mutable__parse_mutable_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_105);
              }
#line 585 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 585 "prog_io_item.m"
                {
#line 12834 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 588 "prog_io_item.m"
                  {
#line 588 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_114_114, parse_tree__prog_io_item__MaybeItem0_105, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 588 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 585 "prog_io_item.m"
                }
#line 585 "prog_io_item.m"
            }
#line 585 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 8:
#line 523 "prog_io_item.m"
          {
#line 523 "prog_io_item.m"
            /* case "pragma" */
#line 523 "prog_io_item.m"
            {
#line 523 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_108_108;
#line 523 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_91;

#line 524 "prog_io_item.m"
              {
#line 524 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_pragma__parse_pragma_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_91);
              }
#line 523 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 523 "prog_io_item.m"
                {
#line 12873 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_108_108 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 526 "prog_io_item.m"
                  {
#line 526 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_108_108, parse_tree__prog_io_item__MaybeItem0_91, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 526 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 523 "prog_io_item.m"
                }
#line 523 "prog_io_item.m"
            }
#line 523 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 9:
#line 473 "prog_io_item.m"
          {
#line 473 "prog_io_item.m"
            /* case "pred" */
#line 473 "prog_io_item.m"
            {
#line 473 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__DeclTerm_116;
#line 473 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_117_117;

#line 474 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 474 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 474 "prog_io_item.m"
                {
#line 474 "prog_io_item.m"
                  parse_tree__prog_io_item__DeclTerm_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 474 "prog_io_item.m"
                  parse_tree__prog_io_item__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 474 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_117_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 473 "prog_io_item.m"
                    {
#line 475 "prog_io_item.m"
                      {
#line 475 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0((MR_Integer) 0, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__DeclTerm_116, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 475 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 473 "prog_io_item.m"
                    }
#line 474 "prog_io_item.m"
                }
#line 473 "prog_io_item.m"
            }
#line 473 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 10:
#line 540 "prog_io_item.m"
          {
#line 540 "prog_io_item.m"
            /* case "promise" */
#line 540 "prog_io_item.m"
            {
#line 540 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_109_109;
#line 540 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_92;

#line 541 "prog_io_item.m"
              {
#line 541 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 3, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_92);
              }
#line 540 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 540 "prog_io_item.m"
                {
#line 12958 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_109_109 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 543 "prog_io_item.m"
                  {
#line 543 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_109_109, parse_tree__prog_io_item__MaybeItem0_92, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 543 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 540 "prog_io_item.m"
                }
#line 540 "prog_io_item.m"
            }
#line 540 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 11:
#line 540 "prog_io_item.m"
          {
#line 540 "prog_io_item.m"
            /* case "promise_exclusive" */
#line 540 "prog_io_item.m"
            {
#line 540 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_109_120;
#line 540 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_119;

#line 541 "prog_io_item.m"
              {
#line 541 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_119);
              }
#line 540 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 540 "prog_io_item.m"
                {
#line 12997 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_109_120 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 543 "prog_io_item.m"
                  {
#line 543 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_109_120, parse_tree__prog_io_item__MaybeItem0_119, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 543 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 540 "prog_io_item.m"
                }
#line 540 "prog_io_item.m"
            }
#line 540 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 12:
#line 540 "prog_io_item.m"
          {
#line 540 "prog_io_item.m"
            /* case "promise_exclusive_exhaustive" */
#line 540 "prog_io_item.m"
            {
#line 540 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_109_123;
#line 540 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_122;

#line 541 "prog_io_item.m"
              {
#line 541 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 2, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_122);
              }
#line 540 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 540 "prog_io_item.m"
                {
#line 13036 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_109_123 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 543 "prog_io_item.m"
                  {
#line 543 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_109_123, parse_tree__prog_io_item__MaybeItem0_122, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 543 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 540 "prog_io_item.m"
                }
#line 540 "prog_io_item.m"
            }
#line 540 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 13:
#line 540 "prog_io_item.m"
          {
#line 540 "prog_io_item.m"
            /* case "promise_exhaustive" */
#line 540 "prog_io_item.m"
            {
#line 540 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_109_126;
#line 540 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_125;

#line 541 "prog_io_item.m"
              {
#line 541 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_125);
              }
#line 540 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 540 "prog_io_item.m"
                {
#line 13075 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_109_126 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 543 "prog_io_item.m"
                  {
#line 543 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_109_126, parse_tree__prog_io_item__MaybeItem0_125, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 543 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 540 "prog_io_item.m"
                }
#line 540 "prog_io_item.m"
            }
#line 540 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 14:
#line 444 "prog_io_item.m"
          {
#line 444 "prog_io_item.m"
            /* case "type" */
#line 444 "prog_io_item.m"
            {
#line 444 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeDefnTerm_17;
#line 444 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_89_89;

#line 445 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 445 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 445 "prog_io_item.m"
                {
#line 445 "prog_io_item.m"
                  parse_tree__prog_io_item__TypeDefnTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 445 "prog_io_item.m"
                  parse_tree__prog_io_item__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 445 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 444 "prog_io_item.m"
                    {
#line 446 "prog_io_item.m"
                      {
#line 446 "prog_io_item.m"
                        parse_tree__prog_io_type_defn__parse_type_defn_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__TypeDefnTerm_17, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 446 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 444 "prog_io_item.m"
                    }
#line 445 "prog_io_item.m"
                }
#line 444 "prog_io_item.m"
            }
#line 444 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
        case (MR_Integer) 15:
#line 545 "prog_io_item.m"
          {
#line 545 "prog_io_item.m"
            /* case "typeclass" */
#line 545 "prog_io_item.m"
            {
#line 545 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_110_110;
#line 545 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItemTypeClass_47;
#line 545 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_95;

#line 546 "prog_io_item.m"
              {
#line 546 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_typeclass__parse_typeclass_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItemTypeClass_47);
              }
#line 545 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 545 "prog_io_item.m"
                {
#line 551 "prog_io_item.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItemTypeClass_47)) == (MR_mktag((MR_Integer) 0))))
#line 553 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeItem0_95 = (MR_Word) parse_tree__prog_io_item__MaybeItemTypeClass_47;
#line 551 "prog_io_item.m"
                  else
#line 549 "prog_io_item.m"
                    {
#line 549 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__ItemTypeClass_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItemTypeClass_47, (MR_Integer) 0)));
#line 549 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_54_54;

#line 550 "prog_io_item.m"
                      {
#line 550 "prog_io_item.m"
                        parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 550 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemTypeClass_48));
#line 550 "prog_io_item.m"
                      }
#line 550 "prog_io_item.m"
                      {
#line 550 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeItem0_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 550 "prog_io_item.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_95, 0) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 550 "prog_io_item.m"
                      }
#line 549 "prog_io_item.m"
                    }
#line 13195 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 555 "prog_io_item.m"
                  {
#line 555 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_110_110, parse_tree__prog_io_item__MaybeItem0_95, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 555 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 545 "prog_io_item.m"
                }
#line 545 "prog_io_item.m"
            }
#line 545 "prog_io_item.m"
          }
#line 444 "prog_io_item.m"
          break;
#line 444 "prog_io_item.m"
      }
#line 444 "prog_io_item.m"
    }
#line 444 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 444 "prog_io_item.m"
  }
#line 437 "prog_io_item.m"
}

#line 396 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(
#line 396 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 396 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_8,
#line 396 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_9,
#line 396 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22,
#line 396 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 396 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_12)
#line 396 "prog_io_item.m"
{
#line 421 "prog_io_item.m"
  while (MR_TRUE)
#line 421 "prog_io_item.m"
    {
#line 421 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 421 "prog_io_item.m"
      {
#line 421 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 421 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__Functor_13;
#line 421 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Args_14;
#line 421 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_15;
#line 401 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;

#line 401 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 401 "prog_io_item.m"
          {
#line 401 "prog_io_item.m"
            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 0)));
#line 401 "prog_io_item.m"
            parse_tree__prog_io_item__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 1)));
#line 401 "prog_io_item.m"
            parse_tree__prog_io_item__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 2)));
#line 401 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 401 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 401 "prog_io_item.m"
              parse_tree__prog_io_item__Functor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_23_23, (MR_Integer) 0)));
#line 401 "prog_io_item.m"
          }
#line 421 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 408 "prog_io_item.m"
          {
#line 408 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Attribute_16;
#line 408 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__SubTerm_17;

#line 403 "prog_io_item.m"
            {
#line 403 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__parse_decl_attribute_4_p_0(parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__Args_14, &parse_tree__prog_io_item__Attribute_16, &parse_tree__prog_io_item__SubTerm_17);
            }
#line 408 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 405 "prog_io_item.m"
              {
#line 405 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24;
#line 405 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_25_25;

#line 405 "prog_io_item.m"
                {
#line 405 "prog_io_item.m"
                  parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 405 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Attribute_16));
#line 405 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 405 "prog_io_item.m"
                }
#line 405 "prog_io_item.m"
                {
#line 405 "prog_io_item.m"
                  parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24, 0) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 405 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24, 1) = ((MR_Box) (parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22));
#line 405 "prog_io_item.m"
                }
#line 406 "prog_io_item.m"
                /* direct tailcall eliminated */
#line 406 "prog_io_item.m"
                {
#line 406 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__Term__tmp_copy_9 = parse_tree__prog_io_item__SubTerm_17;
#line 406 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_22 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24;

#line 406 "prog_io_item.m"
                  parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_22;
#line 406 "prog_io_item.m"
                  parse_tree__prog_io_item__Term_9 = parse_tree__prog_io_item__Term__tmp_copy_9;
#line 406 "prog_io_item.m"
                }
#line 406 "prog_io_item.m"
                continue;
#line 405 "prog_io_item.m"
              }
#line 408 "prog_io_item.m"
            else
#line 413 "prog_io_item.m"
              {
#line 413 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeItemPrime_18;

#line 409 "prog_io_item.m"
                {
#line 409 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_attributed_decl_8_p_0(parse_tree__prog_io_item__ModuleName_7, parse_tree__prog_io_item__VarSet_8, parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__Args_14, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22, parse_tree__prog_io_item__Context_15, parse_tree__prog_io_item__SeqNum_11, &parse_tree__prog_io_item__MaybeItemPrime_18);
                }
#line 413 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 412 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_12 = parse_tree__prog_io_item__MaybeItemPrime_18;
#line 413 "prog_io_item.m"
                else
#line 414 "prog_io_item.m"
                  {
#line 414 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__TermStr_19;
#line 414 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Pieces_20;
#line 414 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_21;
#line 414 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_29_29;
#line 414 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_31_31;
#line 414 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_32_32;
#line 414 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_41_41;
#line 414 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_42_42;
#line 414 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_43_43;
#line 414 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_44_44;
#line 414 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_47_47;

#line 414 "prog_io_item.m"
                    {
#line 414 "prog_io_item.m"
                      parse_tree__prog_io_item__TermStr_19 = parse_tree__mercury_to_mercury__mercury_term_to_string_3_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__VarSet_8, (MR_Integer) 0, parse_tree__prog_io_item__Term_9);
                    }
#line 416 "prog_io_item.m"
                    {
#line 416 "prog_io_item.m"
                      parse_tree__prog_io_item__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 416 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_19));
#line 416 "prog_io_item.m"
                    }
#line 416 "prog_io_item.m"
                    {
#line 416 "prog_io_item.m"
                      parse_tree__prog_io_item__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 416 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])));
#line 416 "prog_io_item.m"
                    }
#line 415 "prog_io_item.m"
                    {
#line 415 "prog_io_item.m"
                      parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 415 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_item__V_31_31));
#line 415 "prog_io_item.m"
                    }
#line 415 "prog_io_item.m"
                    {
#line 415 "prog_io_item.m"
                      parse_tree__prog_io_item__Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[119])));
#line 415 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_20, 1) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 415 "prog_io_item.m"
                    }
#line 418 "prog_io_item.m"
                    {
#line 418 "prog_io_item.m"
                      parse_tree__prog_io_item__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 418 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_20));
#line 418 "prog_io_item.m"
                    }
#line 418 "prog_io_item.m"
                    {
#line 418 "prog_io_item.m"
                      parse_tree__prog_io_item__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_item__V_44_44));
#line 418 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "prog_io_item.m"
                    }
#line 418 "prog_io_item.m"
                    {
#line 418 "prog_io_item.m"
                      parse_tree__prog_io_item__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 418 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 418 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_item__V_43_43));
#line 418 "prog_io_item.m"
                    }
#line 418 "prog_io_item.m"
                    {
#line 418 "prog_io_item.m"
                      parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 418 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "prog_io_item.m"
                    }
#line 417 "prog_io_item.m"
                    {
#line 417 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 417 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 417 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 2) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 417 "prog_io_item.m"
                    }
#line 419 "prog_io_item.m"
                    {
#line 419 "prog_io_item.m"
                      parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_21));
#line 419 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 419 "prog_io_item.m"
                    }
#line 419 "prog_io_item.m"
                    {
#line 419 "prog_io_item.m"
                      MR_Word base;
#line 419 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 419 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 419 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 419 "prog_io_item.m"
                    }
#line 414 "prog_io_item.m"
                  }
#line 413 "prog_io_item.m"
              }
#line 408 "prog_io_item.m"
          }
#line 421 "prog_io_item.m"
        else
#line 422 "prog_io_item.m"
          {
#line 422 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_62_62;
#line 422 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_63_63;
#line 422 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_68_68;
#line 422 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Context_73;
#line 422 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_75;

#line 422 "prog_io_item.m"
            {
#line 422 "prog_io_item.m"
              parse_tree__prog_io_item__Context_73 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_9);
            }
#line 426 "prog_io_item.m"
            {
#line 426 "prog_io_item.m"
              parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 426 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_73));
#line 426 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[112])));
#line 426 "prog_io_item.m"
            }
#line 426 "prog_io_item.m"
            {
#line 426 "prog_io_item.m"
              parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 426 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "prog_io_item.m"
            }
#line 425 "prog_io_item.m"
            {
#line 425 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 425 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 425 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 425 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 2) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 425 "prog_io_item.m"
            }
#line 427 "prog_io_item.m"
            {
#line 427 "prog_io_item.m"
              parse_tree__prog_io_item__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_75));
#line 427 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "prog_io_item.m"
            }
#line 427 "prog_io_item.m"
            {
#line 427 "prog_io_item.m"
              MR_Word base;
#line 427 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 427 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 427 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_68_68));
#line 427 "prog_io_item.m"
            }
#line 422 "prog_io_item.m"
          }
#line 421 "prog_io_item.m"
      }
#line 421 "prog_io_item.m"
      break;
#line 421 "prog_io_item.m"
    }
#line 396 "prog_io_item.m"
}

#line 366 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_2(
#line 366 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 366 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 366 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 366 "prog_io_item.m"
{
#line 366 "prog_io_item.m"
  {
#line 366 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 366 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv1_HeadVar__2_80;

#line 366 "prog_io_item.m"
    {
#line 366 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__366__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv1_HeadVar__2_80);
    }
#line 366 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv1_HeadVar__2_80));
#line 366 "prog_io_item.m"
  }
#line 366 "prog_io_item.m"
}

#line 350 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_1(
#line 350 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 350 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 350 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 350 "prog_io_item.m"
{
#line 350 "prog_io_item.m"
  {
#line 350 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 350 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_74;

#line 350 "prog_io_item.m"
    {
#line 350 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__350__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_74);
    }
#line 350 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_74));
#line 350 "prog_io_item.m"
  }
#line 350 "prog_io_item.m"
}

#line 329 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0(
#line 329 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 329 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadTerm_9,
#line 329 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__BodyTerm0_10,
#line 329 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ProgVarSet0_11,
#line 329 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 329 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 329 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 329 "prog_io_item.m"
{
#line 333 "prog_io_item.m"
  {
#line 333 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 333 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeBodyGoal_16;
#line 333 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet_17;

#line 335 "prog_io_item.m"
    {
#line 335 "prog_io_item.m"
      parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_item__BodyTerm0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__MaybeBodyGoal_16, parse_tree__prog_io_item__ProgVarSet0_11, &parse_tree__prog_io_item__ProgVarSet_17);
    }
#line 376 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeBodyGoal_16)) == (MR_mktag((MR_Integer) 0))))
#line 378 "prog_io_item.m"
      *parse_tree__prog_io_item__MaybeItem_14 = (MR_Word) parse_tree__prog_io_item__MaybeBodyGoal_16;
#line 376 "prog_io_item.m"
    else
#line 338 "prog_io_item.m"
      {
#line 338 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_72_72 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 338 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__BodyGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeBodyGoal_16, (MR_Integer) 0)));
#line 338 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__VarSet_19;
#line 360 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncHeadTerm_23;
#line 360 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;
#line 342 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncHeadTerm0_20;
#line 342 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 342 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_34_34;
#line 342 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 342 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_37_37;
#line 341 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 342 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncResultTerm_21;

#line 339 "prog_io_item.m"
        {
#line 339 "prog_io_item.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ProgVarSet_17, &parse_tree__prog_io_item__VarSet_19);
        }
#line 341 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 341 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 341 "prog_io_item.m"
          {
#line 341 "prog_io_item.m"
            parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_9, (MR_Integer) 0)));
#line 341 "prog_io_item.m"
            parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_9, (MR_Integer) 1)));
#line 341 "prog_io_item.m"
            parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_9, (MR_Integer) 2)));
#line 341 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 341 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 341 "prog_io_item.m"
              {
#line 341 "prog_io_item.m"
                parse_tree__prog_io_item__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_33_33, (MR_Integer) 0)));
#line 341 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_34_34, (MR_String) "=") == 0);
#line 342 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 342 "prog_io_item.m"
                  {
#line 342 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 342 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 342 "prog_io_item.m"
                      {
#line 342 "prog_io_item.m"
                        parse_tree__prog_io_item__FuncHeadTerm0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 0)));
#line 342 "prog_io_item.m"
                        parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 1)));
#line 342 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 342 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 342 "prog_io_item.m"
                          {
#line 342 "prog_io_item.m"
                            parse_tree__prog_io_item__FuncResultTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 342 "prog_io_item.m"
                            parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 1)));
#line 342 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 342 "prog_io_item.m"
                              {
#line 343 "prog_io_item.m"
                                {
#line 343 "prog_io_item.m"
                                  parse_tree__prog_io_item__FuncHeadTerm_23 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__FuncHeadTerm0_20);
                                }
#line 343 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 342 "prog_io_item.m"
                              }
#line 342 "prog_io_item.m"
                          }
#line 342 "prog_io_item.m"
                      }
#line 342 "prog_io_item.m"
                  }
#line 341 "prog_io_item.m"
              }
#line 341 "prog_io_item.m"
          }
#line 360 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 345 "prog_io_item.m"
          {
#line 345 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFunctor_25;

#line 346 "prog_io_item.m"
            {
#line 346 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__FuncHeadTerm_23, parse_tree__prog_io_item__VarSet_19, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[116]), &parse_tree__prog_io_item__MaybeFunctor_25);
            }
#line 356 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctor_25)) == (MR_mktag((MR_Integer) 0))))
#line 357 "prog_io_item.m"
              {
#line 357 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctor_25, (MR_Integer) 0)));

#line 358 "prog_io_item.m"
                {
#line 358 "prog_io_item.m"
                  MR_Word base;
#line 358 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 358 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 358 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_31));
#line 358 "prog_io_item.m"
                }
#line 357 "prog_io_item.m"
              }
#line 356 "prog_io_item.m"
            else
#line 349 "prog_io_item.m"
              {
#line 349 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeInfo_77_77 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[0];
#line 349 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_25, (MR_Integer) 0)));
#line 349 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_25, (MR_Integer) 1)));
#line 349 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ProgArgTerms_28;
#line 349 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemClause_29;
#line 349 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_30;
#line 349 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_42_42;

#line 350 "prog_io_item.m"
                {
#line 350 "prog_io_item.m"
                  parse_tree__prog_io_item__V_42_42 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeInfo_77_77, parse_tree__prog_io_item__ArgTerms0_27, parse_tree__prog_io_item__V_36_36);
                }
#line 350 "prog_io_item.m"
                {
#line 350 "prog_io_item.m"
                  mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeInfo_77_77, (MR_Word) &parse_tree__prog_io_item_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[2], parse_tree__prog_io_item__V_42_42, &parse_tree__prog_io_item__ProgArgTerms_28);
                }
#line 352 "prog_io_item.m"
                {
#line 352 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemClause_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 352 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_26));
#line 352 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 1) = ((MR_Box) ((MR_Integer) 1));
#line 352 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgArgTerms_28));
#line 352 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 4) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_17));
#line 352 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 5) = ((MR_Box) (parse_tree__prog_io_item__BodyGoal_18));
#line 352 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 352 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 352 "prog_io_item.m"
                }
#line 354 "prog_io_item.m"
                parse_tree__prog_io_item__Item_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_item__ItemClause_29);
#line 355 "prog_io_item.m"
                {
#line 355 "prog_io_item.m"
                  MR_Word base;
#line 355 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 355 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 355 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_30));
#line 355 "prog_io_item.m"
                }
#line 349 "prog_io_item.m"
              }
#line 345 "prog_io_item.m"
          }
#line 360 "prog_io_item.m"
        else
#line 361 "prog_io_item.m"
          {
#line 361 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFunctor_64;

#line 362 "prog_io_item.m"
            {
#line 362 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__HeadTerm_9, parse_tree__prog_io_item__VarSet_19, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[118]), &parse_tree__prog_io_item__MaybeFunctor_64);
            }
#line 371 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctor_64)) == (MR_mktag((MR_Integer) 0))))
#line 372 "prog_io_item.m"
              {
#line 372 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 0)));

#line 373 "prog_io_item.m"
                {
#line 373 "prog_io_item.m"
                  MR_Word base;
#line 373 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 373 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 373 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_57));
#line 373 "prog_io_item.m"
                }
#line 372 "prog_io_item.m"
              }
#line 371 "prog_io_item.m"
            else
#line 365 "prog_io_item.m"
              {
#line 365 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 1)));
#line 365 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Name_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 0)));
#line 365 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ProgArgTerms_54;
#line 365 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemClause_55;
#line 365 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_56;

#line 366 "prog_io_item.m"
                {
#line 366 "prog_io_item.m"
                  mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[3], parse_tree__prog_io_item__ArgTerms_32, &parse_tree__prog_io_item__ProgArgTerms_54);
                }
#line 367 "prog_io_item.m"
                {
#line 367 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemClause_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 367 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_53));
#line 367 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 1) = ((MR_Box) ((MR_Integer) 0));
#line 367 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgArgTerms_54));
#line 367 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 4) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_17));
#line 367 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 5) = ((MR_Box) (parse_tree__prog_io_item__BodyGoal_18));
#line 367 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 367 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 367 "prog_io_item.m"
                }
#line 369 "prog_io_item.m"
                parse_tree__prog_io_item__Item_56 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_item__ItemClause_55);
#line 370 "prog_io_item.m"
                {
#line 370 "prog_io_item.m"
                  MR_Word base;
#line 370 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 370 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 370 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_56));
#line 370 "prog_io_item.m"
                }
#line 365 "prog_io_item.m"
              }
#line 361 "prog_io_item.m"
          }
#line 338 "prog_io_item.m"
      }
#line 333 "prog_io_item.m"
  }
#line 329 "prog_io_item.m"
}

#line 315 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__maybe_item_to_item_or_marker_2_p_0(
#line 315 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeItem_3,
#line 315 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItemOrMarker_4)
#line 315 "prog_io_item.m"
{
#line 320 "prog_io_item.m"
  {
#line 320 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 320 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItem_3)) == (MR_mktag((MR_Integer) 0))))
#line 324 "prog_io_item.m"
      *parse_tree__prog_io_item__MaybeItemOrMarker_4 = (MR_Word) parse_tree__prog_io_item__MaybeItem_3;
#line 320 "prog_io_item.m"
    else
#line 320 "prog_io_item.m"
      {
#line 320 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Item_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem_3, (MR_Integer) 0)));
#line 320 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_7_7;

#line 321 "prog_io_item.m"
        {
#line 321 "prog_io_item.m"
          parse_tree__prog_io_item__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 321 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_7_7, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_5));
#line 321 "prog_io_item.m"
        }
#line 321 "prog_io_item.m"
        {
#line 321 "prog_io_item.m"
          MR_Word base;
#line 321 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 321 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItemOrMarker_4 = base;
#line 321 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_7_7));
#line 321 "prog_io_item.m"
        }
#line 320 "prog_io_item.m"
      }
#line 320 "prog_io_item.m"
  }
#line 315 "prog_io_item.m"
}

#line 285 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_source_file_marker_3_p_0(
#line 285 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_4,
#line 285 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_5,
#line 285 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_6)
#line 285 "prog_io_item.m"
{
#line 288 "prog_io_item.m"
  {
#line 288 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__Functor_4, (MR_String) "pragma") == 0);
#line 288 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__PragmaTerm_7;
#line 288 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__PragmaArgTerms_8;
#line 288 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__PragmaContext_9;
#line 288 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 288 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 288 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_18_18;
#line 305 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__SourceFileTerm_10;
#line 293 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;

#line 288 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 288 "prog_io_item.m"
      {
#line 290 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_5)) == (MR_mktag((MR_Integer) 1)));
#line 290 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 290 "prog_io_item.m"
          {
#line 290 "prog_io_item.m"
            parse_tree__prog_io_item__PragmaTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_5, (MR_Integer) 0)));
#line 290 "prog_io_item.m"
            parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_5, (MR_Integer) 1)));
#line 290 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 288 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 288 "prog_io_item.m"
              {
#line 291 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__PragmaTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 291 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 291 "prog_io_item.m"
                  {
#line 291 "prog_io_item.m"
                    parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__PragmaTerm_7, (MR_Integer) 0)));
#line 291 "prog_io_item.m"
                    parse_tree__prog_io_item__PragmaArgTerms_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__PragmaTerm_7, (MR_Integer) 1)));
#line 291 "prog_io_item.m"
                    parse_tree__prog_io_item__PragmaContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__PragmaTerm_7, (MR_Integer) 2)));
#line 291 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 291 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 291 "prog_io_item.m"
                      {
#line 291 "prog_io_item.m"
                        parse_tree__prog_io_item__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_17_17, (MR_Integer) 0)));
#line 291 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_18_18, (MR_String) "source_file") == 0);
#line 288 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 288 "prog_io_item.m"
                          {
#line 293 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__PragmaArgTerms_8)) == (MR_mktag((MR_Integer) 1)));
#line 293 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 293 "prog_io_item.m"
                              {
#line 293 "prog_io_item.m"
                                parse_tree__prog_io_item__SourceFileTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__PragmaArgTerms_8, (MR_Integer) 0)));
#line 293 "prog_io_item.m"
                                parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__PragmaArgTerms_8, (MR_Integer) 1)));
#line 293 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "prog_io_item.m"
                              }
#line 305 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 297 "prog_io_item.m"
                              {
#line 297 "prog_io_item.m"
                                MR_String parse_tree__prog_io_item__SourceFile_11;
#line 294 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_20_20;
#line 294 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_21_21;
#line 294 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_12_12;

#line 294 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__SourceFileTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 294 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 294 "prog_io_item.m"
                                  {
#line 294 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SourceFileTerm_10, (MR_Integer) 0)));
#line 294 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SourceFileTerm_10, (MR_Integer) 1)));
#line 294 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SourceFileTerm_10, (MR_Integer) 2)));
#line 294 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 294 "prog_io_item.m"
                                      {
#line 294 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 294 "prog_io_item.m"
                                        if (parse_tree__prog_io_item__succeeded)
#line 294 "prog_io_item.m"
                                          parse_tree__prog_io_item__SourceFile_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_20_20, (MR_Integer) 1)));
#line 294 "prog_io_item.m"
                                      }
#line 294 "prog_io_item.m"
                                  }
#line 297 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 295 "prog_io_item.m"
                                  {
#line 295 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__Marker_13;

#line 295 "prog_io_item.m"
                                    {
#line 295 "prog_io_item.m"
                                      parse_tree__prog_io_item__Marker_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 295 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_13, 1) = ((MR_Box) (parse_tree__prog_io_item__SourceFile_11));
#line 295 "prog_io_item.m"
                                    }
#line 296 "prog_io_item.m"
                                    {
#line 296 "prog_io_item.m"
                                      MR_Word base;
#line 296 "prog_io_item.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_io_item.m"
                                      *parse_tree__prog_io_item__MaybeIOM_6 = base;
#line 296 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Marker_13));
#line 296 "prog_io_item.m"
                                    }
#line 295 "prog_io_item.m"
                                  }
#line 297 "prog_io_item.m"
                                else
#line 300 "prog_io_item.m"
                                  {
#line 300 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__Spec_15;
#line 300 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__V_35_35;
#line 300 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__V_36_36;
#line 300 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__V_41_41;

#line 302 "prog_io_item.m"
                                    {
#line 302 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_item__PragmaContext_9));
#line 302 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[113])));
#line 302 "prog_io_item.m"
                                    }
#line 302 "prog_io_item.m"
                                    {
#line 302 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_item__V_36_36));
#line 302 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "prog_io_item.m"
                                    }
#line 301 "prog_io_item.m"
                                    {
#line 301 "prog_io_item.m"
                                      parse_tree__prog_io_item__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 301 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 301 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_15, 2) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 301 "prog_io_item.m"
                                    }
#line 303 "prog_io_item.m"
                                    {
#line 303 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_15));
#line 303 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 303 "prog_io_item.m"
                                    }
#line 300 "prog_io_item.m"
                                  }
#line 297 "prog_io_item.m"
                              }
#line 305 "prog_io_item.m"
                            else
#line 307 "prog_io_item.m"
                              {
#line 307 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_56_56;
#line 307 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_57_57;
#line 307 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_62_62;
#line 307 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Spec_65;

#line 309 "prog_io_item.m"
                                {
#line 309 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_item__PragmaContext_9));
#line 309 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[114])));
#line 309 "prog_io_item.m"
                                }
#line 309 "prog_io_item.m"
                                {
#line 309 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_item__V_57_57));
#line 309 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "prog_io_item.m"
                                }
#line 308 "prog_io_item.m"
                                {
#line 308 "prog_io_item.m"
                                  parse_tree__prog_io_item__Spec_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 308 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 308 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 308 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_65, 2) = ((MR_Box) (parse_tree__prog_io_item__V_56_56));
#line 308 "prog_io_item.m"
                                }
#line 310 "prog_io_item.m"
                                {
#line 310 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_65));
#line 310 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "prog_io_item.m"
                                }
#line 310 "prog_io_item.m"
                                {
#line 310 "prog_io_item.m"
                                  MR_Word base;
#line 310 "prog_io_item.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 310 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeIOM_6 = base;
#line 310 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 310 "prog_io_item.m"
                                }
#line 307 "prog_io_item.m"
                              }
#line 305 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 288 "prog_io_item.m"
                          }
#line 291 "prog_io_item.m"
                      }
#line 291 "prog_io_item.m"
                  }
#line 288 "prog_io_item.m"
              }
#line 290 "prog_io_item.m"
          }
#line 288 "prog_io_item.m"
      }
#line 288 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 288 "prog_io_item.m"
  }
#line 285 "prog_io_item.m"
}

#line 275 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_include_item_4_p_0(
#line 275 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 275 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 275 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 275 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Item_8)
#line 275 "prog_io_item.m"
{
#line 278 "prog_io_item.m"
  {
#line 278 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 278 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleDefn_9;
#line 278 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ItemModuleDefn_10;

#line 279 "prog_io_item.m"
    {
#line 279 "prog_io_item.m"
      parse_tree__prog_io_item__ModuleDefn_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 279 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ModuleDefn_9, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_7));
#line 279 "prog_io_item.m"
    }
#line 280 "prog_io_item.m"
    {
#line 280 "prog_io_item.m"
      parse_tree__prog_io_item__ItemModuleDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 280 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_9));
#line 280 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_5));
#line 280 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_6));
#line 280 "prog_io_item.m"
    }
#line 281 "prog_io_item.m"
    *parse_tree__prog_io_item__Item_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_10);
#line 278 "prog_io_item.m"
  }
#line 275 "prog_io_item.m"
}

#line 267 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_use_item_4_p_0(
#line 267 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 267 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 267 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 267 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Item_8)
#line 267 "prog_io_item.m"
{
#line 270 "prog_io_item.m"
  {
#line 270 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 270 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleDefn_9;
#line 270 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ItemModuleDefn_10;

#line 271 "prog_io_item.m"
    {
#line 271 "prog_io_item.m"
      parse_tree__prog_io_item__ModuleDefn_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 271 "prog_io_item.m"
      MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__ModuleDefn_9, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_7));
#line 271 "prog_io_item.m"
    }
#line 272 "prog_io_item.m"
    {
#line 272 "prog_io_item.m"
      parse_tree__prog_io_item__ItemModuleDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 272 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_9));
#line 272 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_5));
#line 272 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_6));
#line 272 "prog_io_item.m"
    }
#line 273 "prog_io_item.m"
    *parse_tree__prog_io_item__Item_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_10);
#line 270 "prog_io_item.m"
  }
#line 267 "prog_io_item.m"
}

#line 259 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_import_item_4_p_0(
#line 259 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 259 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 259 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 259 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Item_8)
#line 259 "prog_io_item.m"
{
#line 262 "prog_io_item.m"
  {
#line 262 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 262 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleDefn_9;
#line 262 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ItemModuleDefn_10;

#line 263 "prog_io_item.m"
    {
#line 263 "prog_io_item.m"
      parse_tree__prog_io_item__ModuleDefn_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 263 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ModuleDefn_9, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_7));
#line 263 "prog_io_item.m"
    }
#line 264 "prog_io_item.m"
    {
#line 264 "prog_io_item.m"
      parse_tree__prog_io_item__ItemModuleDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 264 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleDefn_9));
#line 264 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_5));
#line 264 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModuleDefn_10, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_6));
#line 264 "prog_io_item.m"
    }
#line 265 "prog_io_item.m"
    *parse_tree__prog_io_item__Item_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__ItemModuleDefn_10);
#line 262 "prog_io_item.m"
  }
#line 259 "prog_io_item.m"
}

#line 245 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_6(
#line 245 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 245 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 245 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 245 "prog_io_item.m"
{
#line 245 "prog_io_item.m"
  {
#line 245 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 245 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv5_Item_8;

#line 245 "prog_io_item.m"
    {
#line 245 "prog_io_item.m"
      parse_tree__prog_io_item__make_include_item_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv5_Item_8);
    }
#line 245 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv5_Item_8));
#line 245 "prog_io_item.m"
  }
#line 245 "prog_io_item.m"
}

#line 244 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_5(
#line 244 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 244 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 244 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 244 "prog_io_item.m"
{
#line 244 "prog_io_item.m"
  {
#line 244 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 244 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv4_MaybeModule_8;

#line 244 "prog_io_item.m"
    {
#line 244 "prog_io_item.m"
      parse_tree__prog_io_item__parse_implicitly_qualified_module_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv4_MaybeModule_8);
    }
#line 244 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv4_MaybeModule_8));
#line 244 "prog_io_item.m"
  }
#line 244 "prog_io_item.m"
}

#line 237 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_4(
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
    MR_Word parse_tree__prog_io_item__conv3_Item_8;

#line 237 "prog_io_item.m"
    {
#line 237 "prog_io_item.m"
      parse_tree__prog_io_item__make_import_item_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv3_Item_8);
    }
#line 237 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv3_Item_8));
#line 237 "prog_io_item.m"
  }
#line 237 "prog_io_item.m"
}

#line 236 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_3(
#line 236 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 236 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 236 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 236 "prog_io_item.m"
{
#line 236 "prog_io_item.m"
  {
#line 236 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 236 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv2_MaybeModuleName_6;

#line 236 "prog_io_item.m"
    {
#line 236 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_name_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv2_MaybeModuleName_6);
    }
#line 236 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv2_MaybeModuleName_6));
#line 236 "prog_io_item.m"
  }
#line 236 "prog_io_item.m"
}

#line 241 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_2(
#line 241 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 241 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 241 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 241 "prog_io_item.m"
{
#line 241 "prog_io_item.m"
  {
#line 241 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 241 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv1_Item_8;

#line 241 "prog_io_item.m"
    {
#line 241 "prog_io_item.m"
      parse_tree__prog_io_item__make_use_item_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv1_Item_8);
    }
#line 241 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv1_Item_8));
#line 241 "prog_io_item.m"
  }
#line 241 "prog_io_item.m"
}

#line 240 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_1(
#line 240 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 240 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 240 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 240 "prog_io_item.m"
{
#line 240 "prog_io_item.m"
  {
#line 240 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 240 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_MaybeModuleName_6;

#line 240 "prog_io_item.m"
    {
#line 240 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_name_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_MaybeModuleName_6);
    }
#line 240 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_MaybeModuleName_6));
#line 240 "prog_io_item.m"
  }
#line 240 "prog_io_item.m"
}

#line 228 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0(
#line 228 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 228 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 228 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_10,
#line 228 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 228 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 228 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 228 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_14)
#line 228 "prog_io_item.m"
{
#line 233 "prog_io_item.m"
  {
#line 233 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 233 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_40_40;
#line 233 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Parser_15;
#line 233 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Maker_16;
#line 233 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleNamesTerm_17;
#line 233 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeModuleNames_18;
#line 233 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_24_24;

#line 238 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_10, (MR_String) "use_module") == 0))
#line 239 "prog_io_item.m"
      {
#line 240 "prog_io_item.m"
        {
#line 240 "prog_io_item.m"
          parse_tree__prog_io_item__Parser_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 240 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[0]));
#line 240 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_1));
#line 240 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 240 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_9));
#line 240 "prog_io_item.m"
        }
#line 241 "prog_io_item.m"
        {
#line 241 "prog_io_item.m"
          parse_tree__prog_io_item__Maker_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 241 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 241 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_2));
#line 241 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 241 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 3) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 241 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 4) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 241 "prog_io_item.m"
        }
#line 239 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 239 "prog_io_item.m"
      }
#line 238 "prog_io_item.m"
    else
#line 238 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_10, (MR_String) "import_module") == 0))
#line 235 "prog_io_item.m"
      {
#line 236 "prog_io_item.m"
        {
#line 236 "prog_io_item.m"
          parse_tree__prog_io_item__Parser_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 236 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[0]));
#line 236 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_3));
#line 236 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 236 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_9));
#line 236 "prog_io_item.m"
        }
#line 237 "prog_io_item.m"
        {
#line 237 "prog_io_item.m"
          parse_tree__prog_io_item__Maker_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 237 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 237 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_4));
#line 237 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 237 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 3) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 237 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 4) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 237 "prog_io_item.m"
        }
#line 235 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 235 "prog_io_item.m"
      }
#line 238 "prog_io_item.m"
    else
#line 238 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_10, (MR_String) "include_module") == 0))
#line 243 "prog_io_item.m"
      {
#line 244 "prog_io_item.m"
        {
#line 244 "prog_io_item.m"
          parse_tree__prog_io_item__Parser_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 244 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[1]));
#line 244 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_5));
#line 244 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 244 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 3) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_8));
#line 244 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 4) = ((MR_Box) (parse_tree__prog_io_item__VarSet_9));
#line 244 "prog_io_item.m"
        }
#line 245 "prog_io_item.m"
        {
#line 245 "prog_io_item.m"
          parse_tree__prog_io_item__Maker_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 245 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 245 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_6));
#line 245 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 245 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 3) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 245 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, 4) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 245 "prog_io_item.m"
        }
#line 243 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 243 "prog_io_item.m"
      }
#line 238 "prog_io_item.m"
    else
#line 238 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 233 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 233 "prog_io_item.m"
      {
#line 247 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_11)) == (MR_mktag((MR_Integer) 1)));
#line 247 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 247 "prog_io_item.m"
          {
#line 247 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleNamesTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_11, (MR_Integer) 0)));
#line 247 "prog_io_item.m"
            parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_11, (MR_Integer) 1)));
#line 247 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 233 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 233 "prog_io_item.m"
              {
#line 14880 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_40_40 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 248 "prog_io_item.m"
                {
#line 248 "prog_io_item.m"
                  parse_tree__prog_io_util__parse_one_or_more_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_40_40, parse_tree__prog_io_item__Parser_15, parse_tree__prog_io_item__ModuleNamesTerm_17, &parse_tree__prog_io_item__MaybeModuleNames_18);
                }
#line 254 "prog_io_item.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNames_18)) == (MR_mktag((MR_Integer) 0))))
#line 256 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_14 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNames_18;
#line 254 "prog_io_item.m"
                else
#line 250 "prog_io_item.m"
                  {
#line 250 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__HeadModuleName_19;
#line 250 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__TailModuleNames_20;
#line 250 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__HeadItem_21;
#line 250 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__TailItems_22;
#line 250 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNames_18, (MR_Integer) 0)));
#line 250 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_26_26;
#line 250 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_27_27;
#line 251 "prog_io_item.m"
                    void MR_CALL (* parse_tree__prog_io_item__func_6)(MR_Box, MR_Box, MR_Box *);
#line 251 "prog_io_item.m"
                    MR_Box parse_tree__prog_io_item__conv7_HeadItem_21;

#line 250 "prog_io_item.m"
                    parse_tree__prog_io_item__HeadModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, (MR_Integer) 0)));
#line 250 "prog_io_item.m"
                    parse_tree__prog_io_item__TailModuleNames_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, (MR_Integer) 1)));
#line 251 "prog_io_item.m"
                    parse_tree__prog_io_item__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Maker_16, (MR_Integer) 1)));
#line 251 "prog_io_item.m"
                    {
#line 251 "prog_io_item.m"
                      parse_tree__prog_io_item__func_6(((MR_Box) parse_tree__prog_io_item__Maker_16), ((MR_Box) (parse_tree__prog_io_item__HeadModuleName_19)), &parse_tree__prog_io_item__conv7_HeadItem_21);
                    }
#line 251 "prog_io_item.m"
                    parse_tree__prog_io_item__HeadItem_21 = ((MR_Word) parse_tree__prog_io_item__conv7_HeadItem_21);
#line 252 "prog_io_item.m"
                    {
#line 252 "prog_io_item.m"
                      mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_40_40, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__Maker_16, parse_tree__prog_io_item__TailModuleNames_20, &parse_tree__prog_io_item__TailItems_22);
                    }
#line 253 "prog_io_item.m"
                    {
#line 253 "prog_io_item.m"
                      parse_tree__prog_io_item__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 253 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_item__HeadItem_21));
#line 253 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_item__TailItems_22));
#line 253 "prog_io_item.m"
                    }
#line 253 "prog_io_item.m"
                    {
#line 253 "prog_io_item.m"
                      parse_tree__prog_io_item__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 253 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_item__V_27_27));
#line 253 "prog_io_item.m"
                    }
#line 253 "prog_io_item.m"
                    {
#line 253 "prog_io_item.m"
                      MR_Word base;
#line 253 "prog_io_item.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 253 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeIOM_14 = base;
#line 253 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_26_26));
#line 253 "prog_io_item.m"
                    }
#line 250 "prog_io_item.m"
                  }
#line 254 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 233 "prog_io_item.m"
              }
#line 247 "prog_io_item.m"
          }
#line 233 "prog_io_item.m"
      }
#line 233 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 233 "prog_io_item.m"
  }
#line 228 "prog_io_item.m"
}

#line 89 "prog_io_item.m"
void MR_CALL 
parse_tree__prog_io_item__parse_decl_5_p_0(
#line 89 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 89 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 89 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_8,
#line 89 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_9,
#line 89 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_10)
#line 89 "prog_io_item.m"
{
#line 383 "prog_io_item.m"
  {
#line 383 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 387 "prog_io_item.m"
    {
#line 387 "prog_io_item.m"
      parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Term_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_item__SeqNum_9, parse_tree__prog_io_item__MaybeItem_10);
#line 387 "prog_io_item.m"
      return;
    }
#line 383 "prog_io_item.m"
  }
#line 89 "prog_io_item.m"
}

#line 76 "prog_io_item.m"
void MR_CALL 
parse_tree__prog_io_item__parse_item_or_marker_5_p_0(
#line 76 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 76 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 76 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_8,
#line 76 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_9,
#line 76 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_10)
#line 76 "prog_io_item.m"
{
#line 163 "prog_io_item.m"
  {
#line 163 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 163 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DeclTerm_11;
#line 125 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;
#line 125 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_32_32;
#line 125 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_33_33;
#line 125 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_34_34;
#line 125 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___DeclContext_12;

#line 125 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 125 "prog_io_item.m"
      {
#line 125 "prog_io_item.m"
        parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 125 "prog_io_item.m"
        parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 125 "prog_io_item.m"
        parse_tree__prog_io_item___DeclContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 125 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 125 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 125 "prog_io_item.m"
          {
#line 125 "prog_io_item.m"
            parse_tree__prog_io_item__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 125 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_32_32, (MR_String) ":-") == 0);
#line 125 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 125 "prog_io_item.m"
              {
#line 125 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 125 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 125 "prog_io_item.m"
                  {
#line 125 "prog_io_item.m"
                    parse_tree__prog_io_item__DeclTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 0)));
#line 125 "prog_io_item.m"
                    parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 1)));
#line 125 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 125 "prog_io_item.m"
                  }
#line 125 "prog_io_item.m"
              }
#line 125 "prog_io_item.m"
          }
#line 125 "prog_io_item.m"
      }
#line 163 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 155 "prog_io_item.m"
      {
#line 155 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__Functor_13;
#line 155 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ArgTerms_14;
#line 155 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_15;
#line 128 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;

#line 128 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__DeclTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 128 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 128 "prog_io_item.m"
          {
#line 128 "prog_io_item.m"
            parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DeclTerm_11, (MR_Integer) 0)));
#line 128 "prog_io_item.m"
            parse_tree__prog_io_item__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DeclTerm_11, (MR_Integer) 1)));
#line 128 "prog_io_item.m"
            parse_tree__prog_io_item__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DeclTerm_11, (MR_Integer) 2)));
#line 128 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_35_35)) == (MR_mktag((MR_Integer) 0)));
#line 128 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 128 "prog_io_item.m"
              parse_tree__prog_io_item__Functor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_35_35, (MR_Integer) 0)));
#line 128 "prog_io_item.m"
          }
#line 155 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 134 "prog_io_item.m"
          {
#line 134 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Marker_16;
#line 205 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ModuleName_86;
#line 200 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_19_93;
#line 200 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ModuleNameTerm_85;
#line 200 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_88_88;

#line 200 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__Functor_13, (MR_String) "module") == 0);
#line 200 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 200 "prog_io_item.m"
              {
#line 201 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_14)) == (MR_mktag((MR_Integer) 1)));
#line 201 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 201 "prog_io_item.m"
                  {
#line 201 "prog_io_item.m"
                    parse_tree__prog_io_item__ModuleNameTerm_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 0)));
#line 201 "prog_io_item.m"
                    parse_tree__prog_io_item__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 1)));
#line 201 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 200 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 200 "prog_io_item.m"
                      {
#line 15157 "parse_tree.prog_io_item.c"
                        parse_tree__prog_io_item__TypeCtorInfo_19_93 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 202 "prog_io_item.m"
                        {
#line 202 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_19_93, parse_tree__prog_io_item__ModuleNameTerm_85, &parse_tree__prog_io_item__ModuleName_86);
                        }
#line 200 "prog_io_item.m"
                      }
#line 201 "prog_io_item.m"
                  }
#line 200 "prog_io_item.m"
              }
#line 205 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 204 "prog_io_item.m"
              {
#line 204 "prog_io_item.m"
                {
#line 204 "prog_io_item.m"
                  parse_tree__prog_io_item__Marker_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 204 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 204 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 1) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_86));
#line 204 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 204 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_9));
#line 204 "prog_io_item.m"
                }
#line 204 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 204 "prog_io_item.m"
              }
#line 205 "prog_io_item.m"
            else
#line 211 "prog_io_item.m"
              {
#line 211 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ModuleName_92;
#line 206 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeCtorInfo_20_94;
#line 206 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_89_89;
#line 206 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ModuleNameTerm_90;

#line 206 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__Functor_13, (MR_String) "end_module") == 0);
#line 206 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 206 "prog_io_item.m"
                  {
#line 207 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_14)) == (MR_mktag((MR_Integer) 1)));
#line 207 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 207 "prog_io_item.m"
                      {
#line 207 "prog_io_item.m"
                        parse_tree__prog_io_item__ModuleNameTerm_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 0)));
#line 207 "prog_io_item.m"
                        parse_tree__prog_io_item__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 1)));
#line 207 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 206 "prog_io_item.m"
                          {
#line 15227 "parse_tree.prog_io_item.c"
                            parse_tree__prog_io_item__TypeCtorInfo_20_94 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 208 "prog_io_item.m"
                            {
#line 208 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_20_94, parse_tree__prog_io_item__ModuleNameTerm_90, &parse_tree__prog_io_item__ModuleName_92);
                            }
#line 206 "prog_io_item.m"
                          }
#line 207 "prog_io_item.m"
                      }
#line 206 "prog_io_item.m"
                  }
#line 211 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 210 "prog_io_item.m"
                  {
#line 210 "prog_io_item.m"
                    {
#line 210 "prog_io_item.m"
                      parse_tree__prog_io_item__Marker_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 210 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 210 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 1) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_92));
#line 210 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 210 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_9));
#line 210 "prog_io_item.m"
                    }
#line 210 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 210 "prog_io_item.m"
                  }
#line 211 "prog_io_item.m"
                else
#line 222 "prog_io_item.m"
                  {
#line 222 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Section_87;

#line 219 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__ArgTerms_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 222 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 222 "prog_io_item.m"
                      {
#line 215 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__Functor_13, (MR_String) "interface") == 0))
#line 214 "prog_io_item.m"
                          {
#line 214 "prog_io_item.m"
                            parse_tree__prog_io_item__Section_87 = (MR_Integer) 0;
#line 214 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 214 "prog_io_item.m"
                          }
#line 215 "prog_io_item.m"
                        else
#line 215 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__Functor_13, (MR_String) "implementation") == 0))
#line 217 "prog_io_item.m"
                          {
#line 217 "prog_io_item.m"
                            parse_tree__prog_io_item__Section_87 = (MR_Integer) 1;
#line 217 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 217 "prog_io_item.m"
                          }
#line 215 "prog_io_item.m"
                        else
#line 215 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 222 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 222 "prog_io_item.m"
                          {
#line 221 "prog_io_item.m"
                            {
#line 221 "prog_io_item.m"
                              parse_tree__prog_io_item__Marker_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 221 "prog_io_item.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 221 "prog_io_item.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 1) = ((MR_Box) (parse_tree__prog_io_item__Section_87));
#line 221 "prog_io_item.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 221 "prog_io_item.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_9));
#line 221 "prog_io_item.m"
                            }
#line 221 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 222 "prog_io_item.m"
                          }
#line 222 "prog_io_item.m"
                      }
#line 222 "prog_io_item.m"
                  }
#line 211 "prog_io_item.m"
              }
#line 134 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 133 "prog_io_item.m"
              {
#line 133 "prog_io_item.m"
                MR_Word base;
#line 133 "prog_io_item.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 133 "prog_io_item.m"
                *parse_tree__prog_io_item__MaybeIOM_10 = base;
#line 133 "prog_io_item.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Marker_16));
#line 133 "prog_io_item.m"
              }
#line 134 "prog_io_item.m"
            else
#line 139 "prog_io_item.m"
              {
#line 139 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeIOMPrime_17;

#line 135 "prog_io_item.m"
                {
#line 135 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_items_shorthand_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__ArgTerms_14, parse_tree__prog_io_item__Context_15, parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__MaybeIOMPrime_17);
                }
#line 139 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 138 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_10 = parse_tree__prog_io_item__MaybeIOMPrime_17;
#line 139 "prog_io_item.m"
                else
#line 143 "prog_io_item.m"
                  {
#line 143 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__MaybeIOMPrime_71;

#line 140 "prog_io_item.m"
                    {
#line 140 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_source_file_marker_3_p_0(parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__ArgTerms_14, &parse_tree__prog_io_item__MaybeIOMPrime_71);
                    }
#line 143 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 142 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeIOM_10 = parse_tree__prog_io_item__MaybeIOMPrime_71;
#line 143 "prog_io_item.m"
                    else
#line 148 "prog_io_item.m"
                      {
#line 148 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__MaybeIOMPrime_70;

#line 144 "prog_io_item.m"
                        {
#line 144 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_109_97_114_107_101_114_95_95_91_50_93_95_48_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__ArgTerms_14, parse_tree__prog_io_item__Context_15, parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__MaybeIOMPrime_70);
                        }
#line 148 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 147 "prog_io_item.m"
                          *parse_tree__prog_io_item__MaybeIOM_10 = parse_tree__prog_io_item__MaybeIOMPrime_70;
#line 148 "prog_io_item.m"
                        else
#line 152 "prog_io_item.m"
                          {
#line 152 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__MaybeItem_18;

#line 152 "prog_io_item.m"
                            {
#line 152 "prog_io_item.m"
                              parse_tree__prog_io_item__parse_decl_5_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__DeclTerm_11, parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__MaybeItem_18);
                            }
#line 153 "prog_io_item.m"
                            {
#line 153 "prog_io_item.m"
                              parse_tree__prog_io_item__maybe_item_to_item_or_marker_2_p_0(parse_tree__prog_io_item__MaybeItem_18, parse_tree__prog_io_item__MaybeIOM_10);
#line 153 "prog_io_item.m"
                              return;
                            }
#line 152 "prog_io_item.m"
                          }
#line 148 "prog_io_item.m"
                      }
#line 143 "prog_io_item.m"
                  }
#line 139 "prog_io_item.m"
              }
#line 134 "prog_io_item.m"
          }
#line 155 "prog_io_item.m"
        else
#line 156 "prog_io_item.m"
          {
#line 156 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_20;
#line 156 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_49_49;
#line 156 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_50_50;
#line 156 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_55_55;
#line 156 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Context_72;

#line 156 "prog_io_item.m"
            {
#line 156 "prog_io_item.m"
              parse_tree__prog_io_item__Context_72 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_8);
            }
#line 160 "prog_io_item.m"
            {
#line 160 "prog_io_item.m"
              parse_tree__prog_io_item__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 160 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_72));
#line 160 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[112])));
#line 160 "prog_io_item.m"
            }
#line 160 "prog_io_item.m"
            {
#line 160 "prog_io_item.m"
              parse_tree__prog_io_item__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_item__V_50_50));
#line 160 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "prog_io_item.m"
            }
#line 159 "prog_io_item.m"
            {
#line 159 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 159 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 159 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 159 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_20, 2) = ((MR_Box) (parse_tree__prog_io_item__V_49_49));
#line 159 "prog_io_item.m"
            }
#line 161 "prog_io_item.m"
            {
#line 161 "prog_io_item.m"
              parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 161 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_20));
#line 161 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 161 "prog_io_item.m"
            }
#line 161 "prog_io_item.m"
            {
#line 161 "prog_io_item.m"
              MR_Word base;
#line 161 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 161 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_10 = base;
#line 161 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 161 "prog_io_item.m"
            }
#line 156 "prog_io_item.m"
          }
#line 155 "prog_io_item.m"
      }
#line 163 "prog_io_item.m"
    else
#line 171 "prog_io_item.m"
      {
#line 171 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCGHeadTerm_21;
#line 171 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCGBodyTerm_22;
#line 171 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCGContext_23;
#line 164 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_57_57;
#line 164 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_58_58;
#line 164 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_59_59;
#line 164 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_60_60;
#line 164 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_61_61;

#line 164 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 164 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 164 "prog_io_item.m"
          {
#line 164 "prog_io_item.m"
            parse_tree__prog_io_item__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 164 "prog_io_item.m"
            parse_tree__prog_io_item__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 164 "prog_io_item.m"
            parse_tree__prog_io_item__DCGContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 164 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_57_57)) == (MR_mktag((MR_Integer) 0)));
#line 164 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 164 "prog_io_item.m"
              {
#line 164 "prog_io_item.m"
                parse_tree__prog_io_item__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, (MR_Integer) 0)));
#line 164 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_58_58, (MR_String) "-->") == 0);
#line 164 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 164 "prog_io_item.m"
                  {
#line 164 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 164 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 164 "prog_io_item.m"
                      {
#line 164 "prog_io_item.m"
                        parse_tree__prog_io_item__DCGHeadTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_59_59, (MR_Integer) 0)));
#line 164 "prog_io_item.m"
                        parse_tree__prog_io_item__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_59_59, (MR_Integer) 1)));
#line 164 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 164 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 164 "prog_io_item.m"
                          {
#line 164 "prog_io_item.m"
                            parse_tree__prog_io_item__DCGBodyTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, (MR_Integer) 0)));
#line 164 "prog_io_item.m"
                            parse_tree__prog_io_item__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, (MR_Integer) 1)));
#line 164 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 164 "prog_io_item.m"
                          }
#line 164 "prog_io_item.m"
                      }
#line 164 "prog_io_item.m"
                  }
#line 164 "prog_io_item.m"
              }
#line 164 "prog_io_item.m"
          }
#line 171 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 169 "prog_io_item.m"
          {
#line 169 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeItem_73;

#line 168 "prog_io_item.m"
            {
#line 168 "prog_io_item.m"
              parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__DCGHeadTerm_21, parse_tree__prog_io_item__DCGBodyTerm_22, parse_tree__prog_io_item__DCGContext_23, parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__MaybeItem_73);
            }
#line 170 "prog_io_item.m"
            {
#line 170 "prog_io_item.m"
              parse_tree__prog_io_item__maybe_item_to_item_or_marker_2_p_0(parse_tree__prog_io_item__MaybeItem_73, parse_tree__prog_io_item__MaybeIOM_10);
#line 170 "prog_io_item.m"
              return;
            }
#line 169 "prog_io_item.m"
          }
#line 171 "prog_io_item.m"
        else
#line 186 "prog_io_item.m"
          {
#line 186 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__HeadTerm_27;
#line 186 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__BodyTerm_28;
#line 186 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ClauseContext_29;
#line 186 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ProgVarSet_30;
#line 186 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeItem_74;
#line 181 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__HeadTermPrime_24;
#line 181 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__BodyTermPrime_25;
#line 181 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TermContext_26;
#line 174 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_62_62;
#line 174 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__V_63_63;
#line 174 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_64_64;
#line 174 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_65_65;
#line 174 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_66_66;

#line 174 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 174 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 174 "prog_io_item.m"
              {
#line 174 "prog_io_item.m"
                parse_tree__prog_io_item__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 174 "prog_io_item.m"
                parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 174 "prog_io_item.m"
                parse_tree__prog_io_item__TermContext_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 174 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 174 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 174 "prog_io_item.m"
                  {
#line 174 "prog_io_item.m"
                    parse_tree__prog_io_item__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_62_62, (MR_Integer) 0)));
#line 174 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_63_63, (MR_String) ":-") == 0);
#line 174 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 174 "prog_io_item.m"
                      {
#line 175 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 175 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 175 "prog_io_item.m"
                          {
#line 175 "prog_io_item.m"
                            parse_tree__prog_io_item__HeadTermPrime_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 175 "prog_io_item.m"
                            parse_tree__prog_io_item__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_64_64, (MR_Integer) 1)));
#line 175 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_65_65)) == (MR_mktag((MR_Integer) 1)));
#line 175 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 175 "prog_io_item.m"
                              {
#line 175 "prog_io_item.m"
                                parse_tree__prog_io_item__BodyTermPrime_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_65_65, (MR_Integer) 0)));
#line 175 "prog_io_item.m"
                                parse_tree__prog_io_item__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_65_65, (MR_Integer) 1)));
#line 175 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "prog_io_item.m"
                              }
#line 175 "prog_io_item.m"
                          }
#line 174 "prog_io_item.m"
                      }
#line 174 "prog_io_item.m"
                  }
#line 174 "prog_io_item.m"
              }
#line 181 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 178 "prog_io_item.m"
              {
#line 178 "prog_io_item.m"
                parse_tree__prog_io_item__HeadTerm_27 = parse_tree__prog_io_item__HeadTermPrime_24;
#line 179 "prog_io_item.m"
                parse_tree__prog_io_item__BodyTerm_28 = parse_tree__prog_io_item__BodyTermPrime_25;
#line 180 "prog_io_item.m"
                parse_tree__prog_io_item__ClauseContext_29 = parse_tree__prog_io_item__TermContext_26;
#line 178 "prog_io_item.m"
              }
#line 181 "prog_io_item.m"
            else
#line 183 "prog_io_item.m"
              {
#line 183 "prog_io_item.m"
                parse_tree__prog_io_item__HeadTerm_27 = parse_tree__prog_io_item__Term_8;
#line 184 "prog_io_item.m"
                {
#line 184 "prog_io_item.m"
                  parse_tree__prog_io_item__ClauseContext_29 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__HeadTerm_27);
                }
#line 185 "prog_io_item.m"
                {
#line 185 "prog_io_item.m"
                  parse_tree__prog_io_item__BodyTerm_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 185 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_28, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[1]));
#line 185 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_28, 2) = ((MR_Box) (parse_tree__prog_io_item__ClauseContext_29));
#line 185 "prog_io_item.m"
                }
#line 183 "prog_io_item.m"
              }
#line 187 "prog_io_item.m"
            {
#line 187 "prog_io_item.m"
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__VarSet_7, &parse_tree__prog_io_item__ProgVarSet_30);
            }
#line 188 "prog_io_item.m"
            {
#line 188 "prog_io_item.m"
              parse_tree__prog_io_item__parse_clause_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__HeadTerm_27, parse_tree__prog_io_item__BodyTerm_28, parse_tree__prog_io_item__ProgVarSet_30, parse_tree__prog_io_item__ClauseContext_29, parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__MaybeItem_74);
            }
#line 190 "prog_io_item.m"
            {
#line 190 "prog_io_item.m"
              parse_tree__prog_io_item__maybe_item_to_item_or_marker_2_p_0(parse_tree__prog_io_item__MaybeItem_74, parse_tree__prog_io_item__MaybeIOM_10);
#line 190 "prog_io_item.m"
              return;
            }
#line 186 "prog_io_item.m"
          }
#line 171 "prog_io_item.m"
      }
#line 163 "prog_io_item.m"
  }
#line 76 "prog_io_item.m"
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
