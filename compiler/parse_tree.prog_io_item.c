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
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_include_0;

#line 145 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_1[1];

#line 148 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_1;

#line 151 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_avail_0;

#line 154 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_2[1];

#line 157 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_2;

#line 160 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_3[1];

#line 163 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_3;

#line 166 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_4[1];

#line 169 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_4;

#line 172 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_5[3];

#line 175 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_5;

#line 178 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_6[3];

#line 181 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_6;

#line 184 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_7[3];

#line 187 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_7;

#line 190 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_0[1];

#line 193 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_1[1];

#line 196 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_2[1];

#line 199 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_3[5];

#line 202 "parse_tree.prog_io_item.c"
static const MR_DuPtagLayout parse_tree__prog_io_item__parse_tree__prog_io_item__du_ptag_ordered_item_or_marker_0[4];

#line 205 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_name_ordered_item_or_marker_0[8];

#line 208 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_item_or_marker_0[8];

#line 211 "parse_tree.prog_io_item.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item____vpti_pred_2__pseudo_1__pseudo_2;

#line 214 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____item_or_marker_0_0_10001(
#line 217 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 219 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2);

#line 222 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____item_or_marker_0_0_10001(
#line 225 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 227 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 229 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3);

#line 232 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0_10001(
#line 235 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 237 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 239 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3,
#line 241 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4);

#line 244 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0_10001(
#line 247 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 249 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 251 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_3,
#line 253 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4,
#line 255 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_5);

#line 1620 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1620 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 1620 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 1524 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0(
#line 1524 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1524 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13,
#line 1524 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14,
#line 1524 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15,
#line 1524 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Vars_16);

#line 1417 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1(
#line 1417 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1417 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1417 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1389 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0(
#line 1389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PromiseType_10,
#line 1389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__4_4,
#line 1389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 1389 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 1389 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 600 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_109_97_114_107_101_114_95_95_91_50_93_95_48_7_p_0(
#line 600 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 600 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_10,
#line 600 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 600 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 600 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 600 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItemOrMarker_14);

#line 1417 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1417__1_2_p_0(
#line 1417 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1417 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39);

#line 1329 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1329__1_2_p_0(
#line 1329 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1329 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39);

#line 375 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__375__1_2_p_0(
#line 375 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_79,
#line 375 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_80);

#line 359 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__359__1_2_p_0(
#line 359 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_73,
#line 359 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_74);

#line 1620 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0(
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_6,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_7,
#line 1620 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 1620 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0(
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_5,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_6,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 1644 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__dummy_term_with_context_2_p_0(
#line 1644 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_3,
#line 1644 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Term_4);

#line 1611 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1);

#line 1600 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_purity_3_p_0(
#line 1600 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Purity_4,
#line 1600 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8,
#line 1600 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9);

#line 1579 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_implicitly_qualified_module_name_4_p_0(
#line 1579 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__DefaultModuleName_5,
#line 1579 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1579 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_7,
#line 1579 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModule_8);

#line 1568 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_name_3_p_0(
#line 1568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 1568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1568 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModuleName_6);

#line 1545 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__desugar_field_access_1_f_0(
#line 1545 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_3);

#line 1499 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(
#line 1499 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 1499 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithInstTerm_5,
#line 1499 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithInst_6);

#line 1468 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(
#line 1468 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1468 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1468 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithTypeTerm_7,
#line 1468 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithType_8);

#line 1439 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(
#line 1439 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1439 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1439 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeDetismTerm_7,
#line 1439 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeMaybeDetism_8);

#line 1351 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_constraints_6_p_0(
#line 1351 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1351 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1351 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1351 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23,
#line 1351 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24,
#line 1351 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeClassInstConstraints_11);

#line 1329 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0_1(
#line 1329 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1329 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1329 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1286 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(
#line 1286 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 1286 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 1286 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RevAttributes0_8,
#line 1286 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__RevAttributes_9,
#line 1286 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeExistClassInstContext_10);

#line 1215 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1(
#line 1215 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1215 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1215 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1203 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_16,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_17,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_18,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 1203 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 1203 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24);

#line 1160 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1(
#line 1160 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1160 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1160 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1149 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_12,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_13,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_15,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_16,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 1149 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 1149 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22);

#line 1109 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(
#line 1109 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 1109 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1109 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 1109 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1109 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_14,
#line 1109 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_15,
#line 1109 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_16,
#line 1109 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_17,
#line 1109 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_18);

#line 1077 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_7_p_0(
#line 1077 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1077 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1077 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 1077 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 1077 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 1077 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 1077 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 1068 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__wrap_nth_2_p_0(
#line 1068 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__N_3,
#line 1068 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_2);

#line 1050 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0(
#line 1050 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__ArgNum_1,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1050 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3,
#line 1050 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__4_4);

#line 1037 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0_1(
#line 1037 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1037 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1037 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1006 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(
#line 1006 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypesAndModes_4,
#line 1006 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ErrorTerm_5,
#line 1006 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeSpec_6);

#line 985 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_3_p_0(
#line 985 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_4,
#line 985 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 985 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeTypeAndMode_6);

#line 977 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(
#line 977 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_1,
#line 977 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 977 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3);

#line 904 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncName_14,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Args_15,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ReturnArg_16,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncTerm_17,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_18,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ExistQVars_21,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Constraints_22,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_23,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_24,
#line 904 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_25,
#line 904 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_26);

#line 821 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_8_p_0(
#line 821 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 821 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 821 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_11,
#line 821 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_12,
#line 821 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_13,
#line 821 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 821 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 821 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 721 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_12,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_13,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_14,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_15,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_16,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 721 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 721 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22);

#line 660 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0(
#line 660 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_9,
#line 660 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 660 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 660 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 660 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 660 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 660 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 660 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 446 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0(
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 446 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_11,
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_12,
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 446 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 446 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16);

#line 405 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(
#line 405 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 405 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_8,
#line 405 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_9,
#line 405 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22,
#line 405 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 405 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_12);

#line 375 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_2(
#line 375 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 375 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 375 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 359 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_1(
#line 359 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 359 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 359 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 338 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0(
#line 338 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 338 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadTerm_9,
#line 338 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__BodyTerm0_10,
#line 338 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ProgVarSet0_11,
#line 338 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 338 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 338 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14);

#line 324 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__maybe_item_to_item_or_marker_2_p_0(
#line 324 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeItem_3,
#line 324 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItemOrMarker_4);

#line 294 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_source_file_marker_3_p_0(
#line 294 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_4,
#line 294 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_5,
#line 294 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_6);

#line 285 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_item_avail_use_4_p_0(
#line 285 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 285 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 285 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 285 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Avail_8);

#line 278 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_item_avail_import_4_p_0(
#line 278 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 278 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 278 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 278 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Avail_8);

#line 272 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_item_include_4_p_0(
#line 272 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 272 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 272 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 272 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Incl_8);

#line 248 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_5(
#line 248 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 248 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 248 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 255 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_4(
#line 255 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 255 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 255 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 262 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_3(
#line 262 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 262 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 262 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 237 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_2(
#line 237 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 237 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 237 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 232 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_1(
#line 232 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 232 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 232 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 224 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0(
#line 224 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 224 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 224 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_10,
#line 224 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 224 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 224 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 224 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_14);


static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_1[156][2];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_3[25][1];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_4[3][7];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_5[2][6];

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
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
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

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_4[3][7] = {
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2029 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2037 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2045 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2053 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2061 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2069 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 2078 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2086 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2094 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2102 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
};

#line 2107 "parse_tree.prog_io_item.c"
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

#line 2122 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_include_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0
  }
};

#line 2130 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_item__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_include_0
};

#line 2135 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_1 = {
  (MR_String) "iom_marker_include",
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

#line 2150 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0
  }
};

#line 2158 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_item__list__ti_one_or_more_1parse_tree__prog_item__type_ctor_info_item_avail_0
};

#line 2163 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_2 = {
  (MR_String) "iom_marker_avail",
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

#line 2178 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_3[1] = {
  (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_version_numbers_0
};

#line 2183 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_3 = {
  (MR_String) "iom_marker_version_numbers",
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

#line 2198 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2203 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_4 = {
  (MR_String) "iom_marker_src_file",
  (MR_Integer) 1,
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

#line 2218 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_5[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2225 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_5 = {
  (MR_String) "iom_marker_module_start",
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

#line 2240 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_6[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2247 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_6 = {
  (MR_String) "iom_marker_module_end",
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

#line 2262 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_7[3] = {
  (MR_PseudoTypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_module_section_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2269 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_7 = {
  (MR_String) "iom_marker_section",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_item_or_marker_0_7,
  NULL,
  NULL,
  NULL
};

#line 2284 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_0[1] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_0
};

#line 2289 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_1[1] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_1
};

#line 2294 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_2[1] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_2
};

#line 2299 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_3[5] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_3,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_4,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_5,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_6,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_7
};

#line 2308 "parse_tree.prog_io_item.c"
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
    (MR_Integer) 5,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_item_or_marker_0_3
  }
};

#line 2332 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_name_ordered_item_or_marker_0[8] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_0,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_2,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_1,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_6,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_5,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_7,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_4,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_item_or_marker_0_3
};

#line 2344 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_item_or_marker_0[8] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 5
};

#line 2356 "parse_tree.prog_io_item.c"
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
  (MR_Integer) 8,
  (MR_Integer) 4,
  parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_item_or_marker_0
};

#line 2373 "parse_tree.prog_io_item.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item____vpti_pred_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2383 "parse_tree.prog_io_item.c"
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

#line 2400 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____item_or_marker_0_0_10001(
#line 2403 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 2405 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2)
#line 2407 "parse_tree.prog_io_item.c"
{
#line 2409 "parse_tree.prog_io_item.c"
  {
#line 2411 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 2414 "parse_tree.prog_io_item.c"
    {
#line 2416 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item____Unify____item_or_marker_0_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2));
    }
#line 2419 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 2421 "parse_tree.prog_io_item.c"
  }
#line 2423 "parse_tree.prog_io_item.c"
}

#line 2426 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____item_or_marker_0_0_10001(
#line 2429 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 2431 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 2433 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3)
#line 2435 "parse_tree.prog_io_item.c"
{
#line 2437 "parse_tree.prog_io_item.c"
  {
#line 2439 "parse_tree.prog_io_item.c"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__1_1;

#line 2442 "parse_tree.prog_io_item.c"
    {
#line 2444 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item____Compare____item_or_marker_0_0(&parse_tree__prog_io_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_3));
    }
#line 2447 "parse_tree.prog_io_item.c"
    *parse_tree__prog_io_item__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__1_1));
#line 2449 "parse_tree.prog_io_item.c"
  }
#line 2451 "parse_tree.prog_io_item.c"
}

#line 2454 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0_10001(
#line 2457 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 2459 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 2461 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3,
#line 2463 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4)
#line 2465 "parse_tree.prog_io_item.c"
{
#line 2467 "parse_tree.prog_io_item.c"
  {
#line 2469 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 2472 "parse_tree.prog_io_item.c"
    {
#line 2474 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item____Unify____maker_2_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_3), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_4));
    }
#line 2477 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 2479 "parse_tree.prog_io_item.c"
  }
#line 2481 "parse_tree.prog_io_item.c"
}

#line 2484 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0_10001(
#line 2487 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 2489 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 2491 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_3,
#line 2493 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_4,
#line 2495 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_5)
#line 2497 "parse_tree.prog_io_item.c"
{
#line 2499 "parse_tree.prog_io_item.c"
  {
#line 2501 "parse_tree.prog_io_item.c"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__1_1;

#line 2504 "parse_tree.prog_io_item.c"
    {
#line 2506 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item____Compare____maker_2_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), &parse_tree__prog_io_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_item__wrapper_arg_4), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_5));
    }
#line 2509 "parse_tree.prog_io_item.c"
    *parse_tree__prog_io_item__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__1_1));
#line 2511 "parse_tree.prog_io_item.c"
  }
#line 2513 "parse_tree.prog_io_item.c"
}

#line 1620 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 1620 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 1620 "prog_io_item.m"
{
#line 1620 "prog_io_item.m"
  {
#line 1620 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1620 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar1_4 = parse_tree__prog_io_item__HeadVar__2_2;
#line 1620 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar2_5 = parse_tree__prog_io_item__HeadVar__3_3;

#line 1620 "prog_io_item.m"
    {
#line 1620 "prog_io_item.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar2_5);
#line 1620 "prog_io_item.m"
      return;
    }
#line 1620 "prog_io_item.m"
  }
#line 1620 "prog_io_item.m"
}

#line 1620 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 1620 "prog_io_item.m"
{
#line 1620 "prog_io_item.m"
  {
#line 1620 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1620 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar1_3 = parse_tree__prog_io_item__HeadVar__1_1;
#line 1620 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Cast_HeadVar2_4 = parse_tree__prog_io_item__HeadVar__2_2;

#line 1620 "prog_io_item.m"
    {
#line 1620 "prog_io_item.m"
      return parse_tree__prog_io_item__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io_item__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io_item__Cast_HeadVar2_4);
    }
#line 1620 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1620 "prog_io_item.m"
  }
#line 1620 "prog_io_item.m"
}

#line 1524 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0(
#line 1524 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1524 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13,
#line 1524 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14,
#line 1524 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15,
#line 1524 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Vars_16)
#line 1524 "prog_io_item.m"
{
#line 1534 "prog_io_item.m"
  while (MR_TRUE)
#line 1534 "prog_io_item.m"
    {
#line 1534 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 1534 "prog_io_item.m"
      {
#line 1534 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13)) == (MR_mktag((MR_Integer) 1)));
#line 1534 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__QuantVars_11;
#line 1534 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17;
#line 1529 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_18_18;
#line 1529 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_19_19;
#line 1529 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;
#line 1529 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_12_12;

#line 1530 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1530 "prog_io_item.m"
          {
#line 1530 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13, (MR_Integer) 0)));
#line 1530 "prog_io_item.m"
            parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13, (MR_Integer) 1)));
#line 1529 "prog_io_item.m"
            parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1529 "prog_io_item.m"
            parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1529 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 2)));
#line 1529 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1529 "prog_io_item.m"
              {
#line 1529 "prog_io_item.m"
                parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1529 "prog_io_item.m"
                parse_tree__prog_io_item__QuantVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__V_19_19, (MR_Integer) 1)));
#line 1529 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__QuantType_7 == parse_tree__prog_io_item__V_24_24);
#line 1529 "prog_io_item.m"
              }
#line 1530 "prog_io_item.m"
          }
#line 1534 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1532 "prog_io_item.m"
          {
#line 1532 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20;

#line 1532 "prog_io_item.m"
            {
#line 1532 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15, parse_tree__prog_io_item__QuantVars_11);
            }
#line 1533 "prog_io_item.m"
            /* direct tailcall eliminated */
#line 1533 "prog_io_item.m"
            {
#line 1533 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_13 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_17_17;
#line 1533 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Vars_0__tmp_copy_15 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_20_20;

#line 1533 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_0__tmp_copy_15;
#line 1533 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_13;
#line 1533 "prog_io_item.m"
            }
#line 1533 "prog_io_item.m"
            continue;
#line 1532 "prog_io_item.m"
          }
#line 1534 "prog_io_item.m"
        else
#line 1535 "prog_io_item.m"
          {
#line 1535 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_Vars_16 = parse_tree__prog_io_item__STATE_VARIABLE_Vars_0_15;
#line 1535 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_14 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_13;
#line 1535 "prog_io_item.m"
          }
#line 1534 "prog_io_item.m"
      }
#line 1534 "prog_io_item.m"
      break;
#line 1534 "prog_io_item.m"
    }
#line 1524 "prog_io_item.m"
}

#line 1417 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1(
#line 1417 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1417 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1417 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1417 "prog_io_item.m"
{
#line 1417 "prog_io_item.m"
  {
#line 1417 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1417 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_39;

#line 1417 "prog_io_item.m"
    {
#line 1417 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1417__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_39);
    }
#line 1417 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_39));
#line 1417 "prog_io_item.m"
  }
#line 1417 "prog_io_item.m"
}

#line 1389 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0(
#line 1389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PromiseType_10,
#line 1389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__4_4,
#line 1389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1389 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 1389 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 1389 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 1389 "prog_io_item.m"
{
#line 1394 "prog_io_item.m"
  {
#line 1394 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 1394 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_36_36;
#line 1394 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_37_37;
#line 1394 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Term_12;
#line 1394 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet0_17;
#line 1394 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ContextPieces_18;
#line 1394 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeGoal0_19;
#line 1394 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet_20;
#line 1394 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;

#line 1393 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1393 "prog_io_item.m"
      {
#line 1393 "prog_io_item.m"
        parse_tree__prog_io_item__Term_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__4_4, (MR_Integer) 0)));
#line 1393 "prog_io_item.m"
        parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__4_4, (MR_Integer) 1)));
#line 1393 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1394 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1394 "prog_io_item.m"
          {
#line 2778 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 2780 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1395 "prog_io_item.m"
            {
#line 1395 "prog_io_item.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_36_36, parse_tree__prog_io_item__TypeCtorInfo_37_37, parse_tree__prog_io_item__VarSet_11, &parse_tree__prog_io_item__ProgVarSet0_17);
            }
#line 1396 "prog_io_item.m"
            parse_tree__prog_io_item__ContextPieces_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1397 "prog_io_item.m"
            {
#line 1397 "prog_io_item.m"
              parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__ContextPieces_18, &parse_tree__prog_io_item__MaybeGoal0_19, parse_tree__prog_io_item__ProgVarSet0_17, &parse_tree__prog_io_item__ProgVarSet_20);
            }
#line 1424 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeGoal0_19)) == (MR_mktag((MR_Integer) 0))))
#line 1426 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = (MR_Word) parse_tree__prog_io_item__MaybeGoal0_19;
#line 1424 "prog_io_item.m"
            else
#line 1399 "prog_io_item.m"
              {
#line 1399 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeGoal0_19, (MR_Integer) 0)));
#line 1399 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__UnivVars_25;
#line 1399 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Goal_26;
#line 1399 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemPromise_28;
#line 1399 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_29;

#line 1410 "prog_io_item.m"
#line 1410 "prog_io_item.m"
                switch (parse_tree__prog_io_item__PromiseType_10) {
#line 1410 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1410 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 1410 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 1410 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 1414 "prog_io_item.m"
                    {
#line 1414 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__UnivVars0_35;
#line 1415 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_27_27;

#line 1415 "prog_io_item.m"
                      {
#line 1415 "prog_io_item.m"
                        parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__Attributes_13, &parse_tree__prog_io_item__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__UnivVars0_35);
                      }
#line 1417 "prog_io_item.m"
                      {
#line 1417 "prog_io_item.m"
                        mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[10], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[6], parse_tree__prog_io_item__UnivVars0_35, &parse_tree__prog_io_item__UnivVars_25);
                      }
#line 1418 "prog_io_item.m"
                      parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__Goal0_21;
#line 1414 "prog_io_item.m"
                    }
#line 1410 "prog_io_item.m"
                    break;
#line 1410 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 1406 "prog_io_item.m"
                    {
#line 1406 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__UnivVars0_23;
#line 1406 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__AllGoal_24;
#line 1403 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_22_22;

#line 1403 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__Goal0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 1403 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 1403 "prog_io_item.m"
                        {
#line 1403 "prog_io_item.m"
                          parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 1)));
#line 1403 "prog_io_item.m"
                          parse_tree__prog_io_item__UnivVars0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 2)));
#line 1403 "prog_io_item.m"
                          parse_tree__prog_io_item__AllGoal_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_21, (MR_Integer) 3)));
#line 1404 "prog_io_item.m"
                          parse_tree__prog_io_item__UnivVars_25 = parse_tree__prog_io_item__UnivVars0_23;
#line 1405 "prog_io_item.m"
                          parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__AllGoal_24;
#line 1403 "prog_io_item.m"
                        }
#line 1403 "prog_io_item.m"
                      else
#line 1407 "prog_io_item.m"
                        {
#line 1407 "prog_io_item.m"
                          parse_tree__prog_io_item__UnivVars_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1408 "prog_io_item.m"
                          parse_tree__prog_io_item__Goal_26 = parse_tree__prog_io_item__Goal0_21;
#line 1407 "prog_io_item.m"
                        }
#line 1406 "prog_io_item.m"
                    }
#line 1410 "prog_io_item.m"
                    break;
#line 1410 "prog_io_item.m"
                }
#line 1420 "prog_io_item.m"
                {
#line 1420 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemPromise_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1420 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 0) = ((MR_Box) (parse_tree__prog_io_item__PromiseType_10));
#line 1420 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 1) = ((MR_Box) (parse_tree__prog_io_item__Goal_26));
#line 1420 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_20));
#line 1420 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 3) = ((MR_Box) (parse_tree__prog_io_item__UnivVars_25));
#line 1420 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 4) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 1420 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_28, 5) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 1420 "prog_io_item.m"
                }
#line 1422 "prog_io_item.m"
                {
#line 1422 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1422 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_29, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPromise_28));
#line 1422 "prog_io_item.m"
                }
#line 1423 "prog_io_item.m"
                {
#line 1423 "prog_io_item.m"
                  MR_Word base;
#line 1423 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 1423 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_29));
#line 1423 "prog_io_item.m"
                }
#line 1399 "prog_io_item.m"
              }
#line 1424 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1394 "prog_io_item.m"
          }
#line 1393 "prog_io_item.m"
      }
#line 1394 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1394 "prog_io_item.m"
  }
#line 1389 "prog_io_item.m"
}

#line 600 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_109_97_114_107_101_114_95_95_91_50_93_95_48_7_p_0(
#line 600 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 600 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_10,
#line 600 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 600 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 600 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 600 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItemOrMarker_14)
#line 600 "prog_io_item.m"
{
#line 605 "prog_io_item.m"
  {
#line 605 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__Functor_10, (MR_String) "version_numbers") == 0);
#line 605 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VersionNumberTerm_15;
#line 605 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleNameTerm_16;
#line 605 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VersionNumbersTerm_17;
#line 605 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_36_36;
#line 605 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_37_37;
#line 605 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_38_38;
#line 609 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__VersionNumber_18;
#line 609 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_39_39;
#line 609 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_40_40;
#line 609 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__V_97_97;
#line 609 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;

#line 605 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 605 "prog_io_item.m"
      {
#line 607 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_11)) == (MR_mktag((MR_Integer) 1)));
#line 607 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 607 "prog_io_item.m"
          {
#line 607 "prog_io_item.m"
            parse_tree__prog_io_item__VersionNumberTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_11, (MR_Integer) 0)));
#line 607 "prog_io_item.m"
            parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_11, (MR_Integer) 1)));
#line 607 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 607 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 607 "prog_io_item.m"
              {
#line 607 "prog_io_item.m"
                parse_tree__prog_io_item__ModuleNameTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 607 "prog_io_item.m"
                parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 1)));
#line 607 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 607 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 607 "prog_io_item.m"
                  {
#line 607 "prog_io_item.m"
                    parse_tree__prog_io_item__VersionNumbersTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, (MR_Integer) 0)));
#line 607 "prog_io_item.m"
                    parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, (MR_Integer) 1)));
#line 607 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 605 "prog_io_item.m"
                      {
#line 609 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__VersionNumberTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 609 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 609 "prog_io_item.m"
                          {
#line 609 "prog_io_item.m"
                            parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 0)));
#line 609 "prog_io_item.m"
                            parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 1)));
#line 609 "prog_io_item.m"
                            parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 2)));
#line 609 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 609 "prog_io_item.m"
                              {
#line 609 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 609 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 609 "prog_io_item.m"
                                  {
#line 609 "prog_io_item.m"
                                    parse_tree__prog_io_item__VersionNumber_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_39_39, (MR_Integer) 0)));
#line 610 "prog_io_item.m"
                                    {
#line 610 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_97_97 = recompilation__version__version_numbers_version_number_0_f_0();
                                    }
#line 610 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__VersionNumber_18 == parse_tree__prog_io_item__V_97_97);
#line 609 "prog_io_item.m"
                                  }
#line 609 "prog_io_item.m"
                              }
#line 609 "prog_io_item.m"
                          }
#line 631 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 623 "prog_io_item.m"
                          {
#line 612 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_98_98;

#line 612 "prog_io_item.m"
                            {
#line 612 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleNameTerm_16, &parse_tree__prog_io_item__V_98_98);
                            }
#line 612 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 612 "prog_io_item.m"
                              {
#line 612 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__V_98_98);
                              }
#line 623 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 614 "prog_io_item.m"
                              {
#line 614 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeVersionNumbers_20;

#line 613 "prog_io_item.m"
                                {
#line 613 "prog_io_item.m"
                                  recompilation__version__parse_version_numbers_2_p_0(parse_tree__prog_io_item__VersionNumbersTerm_17, &parse_tree__prog_io_item__MaybeVersionNumbers_20);
                                }
#line 619 "prog_io_item.m"
                                if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeVersionNumbers_20)) == (MR_mktag((MR_Integer) 0))))
#line 621 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeItemOrMarker_14 = (MR_Word) parse_tree__prog_io_item__MaybeVersionNumbers_20;
#line 619 "prog_io_item.m"
                                else
#line 616 "prog_io_item.m"
                                  {
#line 616 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__VersionNumbers_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeVersionNumbers_20, (MR_Integer) 0)));
#line 616 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__ItemOrMarker_22;

#line 617 "prog_io_item.m"
                                    {
#line 617 "prog_io_item.m"
                                      parse_tree__prog_io_item__ItemOrMarker_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ItemOrMarker_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 617 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__ItemOrMarker_22, 1) = ((MR_Box) (parse_tree__prog_io_item__VersionNumbers_21));
#line 617 "prog_io_item.m"
                                    }
#line 618 "prog_io_item.m"
                                    {
#line 618 "prog_io_item.m"
                                      MR_Word base;
#line 618 "prog_io_item.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 618 "prog_io_item.m"
                                      *parse_tree__prog_io_item__MaybeItemOrMarker_14 = base;
#line 618 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ItemOrMarker_22));
#line 618 "prog_io_item.m"
                                    }
#line 616 "prog_io_item.m"
                                  }
#line 614 "prog_io_item.m"
                              }
#line 623 "prog_io_item.m"
                            else
#line 625 "prog_io_item.m"
                              {
#line 625 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Spec_25;
#line 625 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_54_54;
#line 625 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_55_55;
#line 625 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_56_56;
#line 625 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_61_61;

#line 627 "prog_io_item.m"
                                {
#line 627 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_56_56 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleNameTerm_16);
                                }
#line 627 "prog_io_item.m"
                                {
#line 627 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 627 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_item__V_56_56));
#line 627 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[154])));
#line 627 "prog_io_item.m"
                                }
#line 628 "prog_io_item.m"
                                {
#line 628 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 628 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 628 "prog_io_item.m"
                                }
#line 626 "prog_io_item.m"
                                {
#line 626 "prog_io_item.m"
                                  parse_tree__prog_io_item__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 626 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 626 "prog_io_item.m"
                                }
#line 629 "prog_io_item.m"
                                {
#line 629 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_25));
#line 629 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 629 "prog_io_item.m"
                                }
#line 629 "prog_io_item.m"
                                {
#line 629 "prog_io_item.m"
                                  MR_Word base;
#line 629 "prog_io_item.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 629 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeItemOrMarker_14 = base;
#line 629 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_61_61));
#line 629 "prog_io_item.m"
                                }
#line 625 "prog_io_item.m"
                              }
#line 623 "prog_io_item.m"
                          }
#line 631 "prog_io_item.m"
                        else
#line 643 "prog_io_item.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io_item__VersionNumberTerm_15)) == (MR_mktag((MR_Integer) 0))))
#line 633 "prog_io_item.m"
                          {
#line 633 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__DummyTerm_30;
#line 633 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Warning_31;
#line 633 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__ItemNothing_32;
#line 633 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Item_33;
#line 633 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_88_88;
#line 633 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__ItemOrMarker_89;

#line 636 "prog_io_item.m"
                            {
#line 636 "prog_io_item.m"
                              parse_tree__prog_io_item__dummy_term_with_context_2_p_0(parse_tree__prog_io_item__Context_12, &parse_tree__prog_io_item__DummyTerm_30);
                            }
#line 637 "prog_io_item.m"
                            {
#line 637 "prog_io_item.m"
                              parse_tree__prog_io_item__Warning_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 637 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[23])));
#line 637 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_31, 1) = ((MR_Box) ((MR_String) "interface file needs to be recreated, the version numbers are out of date"));
#line 637 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_31, 2) = ((MR_Box) (parse_tree__prog_io_item__DummyTerm_30));
#line 637 "prog_io_item.m"
                            }
#line 639 "prog_io_item.m"
                            {
#line 639 "prog_io_item.m"
                              parse_tree__prog_io_item__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 639 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_item__Warning_31));
#line 639 "prog_io_item.m"
                            }
#line 639 "prog_io_item.m"
                            {
#line 639 "prog_io_item.m"
                              parse_tree__prog_io_item__ItemNothing_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 639 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_32, 0) = ((MR_Box) (parse_tree__prog_io_item__V_88_88));
#line 639 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_32, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 639 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_32, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 639 "prog_io_item.m"
                            }
#line 640 "prog_io_item.m"
                            {
#line 640 "prog_io_item.m"
                              parse_tree__prog_io_item__Item_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "prog_io_item.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 640 "prog_io_item.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_33, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemNothing_32));
#line 640 "prog_io_item.m"
                            }
#line 641 "prog_io_item.m"
                            {
#line 641 "prog_io_item.m"
                              parse_tree__prog_io_item__ItemOrMarker_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 641 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemOrMarker_89, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_33));
#line 641 "prog_io_item.m"
                            }
#line 642 "prog_io_item.m"
                            {
#line 642 "prog_io_item.m"
                              MR_Word base;
#line 642 "prog_io_item.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 642 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItemOrMarker_14 = base;
#line 642 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ItemOrMarker_89));
#line 642 "prog_io_item.m"
                            }
#line 633 "prog_io_item.m"
                          }
#line 643 "prog_io_item.m"
                        else
#line 644 "prog_io_item.m"
                          {
#line 644 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__VersionNumberContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 1)));
#line 644 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_76_76;
#line 644 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_77_77;
#line 644 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_82_82;
#line 644 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Spec_91;
#line 644 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__VersionNumberTerm_15, (MR_Integer) 0)));

#line 648 "prog_io_item.m"
                            {
#line 648 "prog_io_item.m"
                              parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 648 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__VersionNumberContext_35));
#line 648 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[155])));
#line 648 "prog_io_item.m"
                            }
#line 648 "prog_io_item.m"
                            {
#line 648 "prog_io_item.m"
                              parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 648 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "prog_io_item.m"
                            }
#line 647 "prog_io_item.m"
                            {
#line 647 "prog_io_item.m"
                              parse_tree__prog_io_item__Spec_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 647 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 647 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 2) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 647 "prog_io_item.m"
                            }
#line 649 "prog_io_item.m"
                            {
#line 649 "prog_io_item.m"
                              parse_tree__prog_io_item__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_91));
#line 649 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 649 "prog_io_item.m"
                            }
#line 649 "prog_io_item.m"
                            {
#line 649 "prog_io_item.m"
                              MR_Word base;
#line 649 "prog_io_item.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 649 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItemOrMarker_14 = base;
#line 649 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_82_82));
#line 649 "prog_io_item.m"
                            }
#line 644 "prog_io_item.m"
                          }
#line 631 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 605 "prog_io_item.m"
                      }
#line 607 "prog_io_item.m"
                  }
#line 607 "prog_io_item.m"
              }
#line 607 "prog_io_item.m"
          }
#line 605 "prog_io_item.m"
      }
#line 605 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 605 "prog_io_item.m"
  }
#line 600 "prog_io_item.m"
}

#line 1417 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_promise__1417__1_2_p_0(
#line 1417 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1417 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39)
#line 1417 "prog_io_item.m"
{
#line 1417 "prog_io_item.m"
  {
#line 1417 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1417 "prog_io_item.m"
    {
#line 1417 "prog_io_item.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_38, parse_tree__prog_io_item__HeadVar__2_39);
#line 1417 "prog_io_item.m"
      return;
    }
#line 1417 "prog_io_item.m"
  }
#line 1417 "prog_io_item.m"
}

#line 1329 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1329__1_2_p_0(
#line 1329 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1329 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39)
#line 1329 "prog_io_item.m"
{
#line 1329 "prog_io_item.m"
  {
#line 1329 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1329 "prog_io_item.m"
    {
#line 1329 "prog_io_item.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__HeadVar__1_38, parse_tree__prog_io_item__HeadVar__2_39);
#line 1329 "prog_io_item.m"
      return;
    }
#line 1329 "prog_io_item.m"
  }
#line 1329 "prog_io_item.m"
}

#line 375 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__375__1_2_p_0(
#line 375 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_79,
#line 375 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_80)
#line 375 "prog_io_item.m"
{
#line 375 "prog_io_item.m"
  {
#line 375 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 375 "prog_io_item.m"
    {
#line 375 "prog_io_item.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_79, parse_tree__prog_io_item__HeadVar__2_80);
#line 375 "prog_io_item.m"
      return;
    }
#line 375 "prog_io_item.m"
  }
#line 375 "prog_io_item.m"
}

#line 359 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__359__1_2_p_0(
#line 359 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_73,
#line 359 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_74)
#line 359 "prog_io_item.m"
{
#line 359 "prog_io_item.m"
  {
#line 359 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 359 "prog_io_item.m"
    {
#line 359 "prog_io_item.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_73, parse_tree__prog_io_item__HeadVar__2_74);
#line 359 "prog_io_item.m"
      return;
    }
#line 359 "prog_io_item.m"
  }
#line 359 "prog_io_item.m"
}

#line 1620 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maker_2_0(
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_6,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_7,
#line 1620 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 1620 "prog_io_item.m"
{
#line 1620 "prog_io_item.m"
  {
#line 1620 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1620 "prog_io_item.m"
    {
#line 1620 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__HeadVar__2_2, parse_tree__prog_io_item__HeadVar__3_3);
#line 1620 "prog_io_item.m"
      return;
    }
#line 1620 "prog_io_item.m"
  }
#line 1620 "prog_io_item.m"
}

#line 1620 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maker_2_0(
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T1_5,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypeInfo_for_T2_6,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1620 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 1620 "prog_io_item.m"
{
#line 1620 "prog_io_item.m"
  {
#line 1620 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1620 "prog_io_item.m"
    {
#line 1620 "prog_io_item.m"
      return parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_105_116_101_109_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__HeadVar__2_2);
    }
#line 1620 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1620 "prog_io_item.m"
  }
#line 1620 "prog_io_item.m"
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
    MR_Integer parse_tree__prog_io_item__CastX_234 = (MR_Integer) parse_tree__prog_io_item__HeadVar__2_2;
#line 30 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastY_235 = (MR_Integer) parse_tree__prog_io_item__HeadVar__3_3;

#line 30 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__CastX_234 == parse_tree__prog_io_item__CastY_235);
#line 30 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 3588 "parse_tree.prog_io_item.c"
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
            MR_Word parse_tree__prog_io_item__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));

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
                    parse_tree__prog_item____Compare____item_0_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_250_250, parse_tree__prog_io_item__V_5_5);
#line 30 "prog_io_item.m"
                    return;
                  }
#line 30 "prog_io_item.m"
                }
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
              case (MR_Integer) 1:
#line 3629 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
              case (MR_Integer) 2:
#line 3635 "parse_tree.prog_io_item.c"
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
#line 3648 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 3654 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 3660 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 3666 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 4:
#line 3672 "parse_tree.prog_io_item.c"
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
            MR_Word parse_tree__prog_io_item__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));

#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 30 "prog_io_item.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
              case (MR_Integer) 0:
#line 3700 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
              case (MR_Integer) 1:
#line 30 "prog_io_item.m"
                {
#line 30 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)));

#line 30 "prog_io_item.m"
                  {
#line 30 "prog_io_item.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[12], parse_tree__prog_io_item__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_item__V_252_252)), ((MR_Box) (parse_tree__prog_io_item__V_29_29)));
#line 30 "prog_io_item.m"
                    return;
                  }
#line 30 "prog_io_item.m"
                }
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
              case (MR_Integer) 2:
#line 3724 "parse_tree.prog_io_item.c"
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
#line 3737 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 3743 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 3749 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 3755 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 4:
#line 3761 "parse_tree.prog_io_item.c"
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
            MR_Word parse_tree__prog_io_item__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));

#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 30 "prog_io_item.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
              case (MR_Integer) 0:
#line 3789 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
              case (MR_Integer) 1:
#line 3795 "parse_tree.prog_io_item.c"
                *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                break;
#line 30 "prog_io_item.m"
              case (MR_Integer) 2:
#line 30 "prog_io_item.m"
                {
#line 30 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)));

#line 30 "prog_io_item.m"
                  {
#line 30 "prog_io_item.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[11], parse_tree__prog_io_item__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_item__V_251_251)), ((MR_Box) (parse_tree__prog_io_item__V_53_53)));
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
#line 3826 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 3832 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 3838 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 3:
#line 3844 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 4:
#line 3850 "parse_tree.prog_io_item.c"
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
                MR_Word parse_tree__prog_io_item__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));

#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 30 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 3885 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 3891 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 3897 "parse_tree.prog_io_item.c"
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
                          MR_Word parse_tree__prog_io_item__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 1)));

#line 30 "prog_io_item.m"
                          {
#line 30 "prog_io_item.m"
                            recompilation____Compare____version_numbers_0_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_263_263, parse_tree__prog_io_item__V_77_77);
#line 30 "prog_io_item.m"
                            return;
                          }
#line 30 "prog_io_item.m"
                        }
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 1:
#line 3928 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 2:
#line 3934 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 3:
#line 3940 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 4:
#line 3946 "parse_tree.prog_io_item.c"
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
                MR_String parse_tree__prog_io_item__V_262_262 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));

#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 30 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 3974 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 3980 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 3986 "parse_tree.prog_io_item.c"
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
#line 3999 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 1:
#line 30 "prog_io_item.m"
                        {
#line 30 "prog_io_item.m"
                          MR_String parse_tree__prog_io_item__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 1)));

#line 30 "prog_io_item.m"
                          {
#line 30 "prog_io_item.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_262_262, parse_tree__prog_io_item__V_101_101);
#line 30 "prog_io_item.m"
                            return;
                          }
#line 30 "prog_io_item.m"
                        }
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 2:
#line 4023 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 3:
#line 4029 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 4:
#line 4035 "parse_tree.prog_io_item.c"
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
                MR_Integer parse_tree__prog_io_item__V_256_256 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));

#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 30 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 4067 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 4073 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 4079 "parse_tree.prog_io_item.c"
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
#line 4092 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 1:
#line 4098 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 2:
#line 30 "prog_io_item.m"
                        {
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                          MR_Integer parse_tree__prog_io_item__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_140_140;

#line 30 "prog_io_item.m"
                          {
#line 30 "prog_io_item.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io_item__V_140_140, parse_tree__prog_io_item__V_258_258, parse_tree__prog_io_item__V_137_137);
                          }
#line 4120 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_140_140 == (MR_Integer) 0);
#line 30 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 30 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                            *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_140_140;
#line 30 "prog_io_item.m"
                          else
#line 30 "prog_io_item.m"
                            {
#line 30 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__V_141_141;

#line 30 "prog_io_item.m"
                              {
#line 30 "prog_io_item.m"
                                mercury__term____Compare____context_0_0(&parse_tree__prog_io_item__V_141_141, parse_tree__prog_io_item__V_257_257, parse_tree__prog_io_item__V_138_138);
                              }
#line 4140 "parse_tree.prog_io_item.c"
                              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_141_141 == (MR_Integer) 0);
#line 30 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 30 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                                *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_141_141;
#line 30 "prog_io_item.m"
                              else
#line 30 "prog_io_item.m"
                                {
#line 30 "prog_io_item.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_256_256, parse_tree__prog_io_item__V_139_139);
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
#line 4165 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 4:
#line 4171 "parse_tree.prog_io_item.c"
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
                MR_Integer parse_tree__prog_io_item__V_253_253 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));

#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 30 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 4203 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 4209 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 4215 "parse_tree.prog_io_item.c"
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
#line 4228 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 1:
#line 4234 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 2:
#line 4240 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 3:
#line 30 "prog_io_item.m"
                        {
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                          MR_Integer parse_tree__prog_io_item__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_186_186;

#line 30 "prog_io_item.m"
                          {
#line 30 "prog_io_item.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__prog_io_item__V_186_186, parse_tree__prog_io_item__V_255_255, parse_tree__prog_io_item__V_183_183);
                          }
#line 4262 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_186_186 == (MR_Integer) 0);
#line 30 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 30 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                            *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_186_186;
#line 30 "prog_io_item.m"
                          else
#line 30 "prog_io_item.m"
                            {
#line 30 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__V_187_187;

#line 30 "prog_io_item.m"
                              {
#line 30 "prog_io_item.m"
                                mercury__term____Compare____context_0_0(&parse_tree__prog_io_item__V_187_187, parse_tree__prog_io_item__V_254_254, parse_tree__prog_io_item__V_184_184);
                              }
#line 4282 "parse_tree.prog_io_item.c"
                              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_187_187 == (MR_Integer) 0);
#line 30 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 30 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                                *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_187_187;
#line 30 "prog_io_item.m"
                              else
#line 30 "prog_io_item.m"
                                {
#line 30 "prog_io_item.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_253_253, parse_tree__prog_io_item__V_185_185);
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
                      case (MR_Integer) 4:
#line 4307 "parse_tree.prog_io_item.c"
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
            case (MR_Integer) 4:
#line 30 "prog_io_item.m"
              {
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_259_259 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));

#line 30 "prog_io_item.m"
#line 30 "prog_io_item.m"
                switch (MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) {
#line 30 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 4339 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 4345 "parse_tree.prog_io_item.c"
                    *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                    break;
#line 30 "prog_io_item.m"
                  case (MR_Integer) 2:
#line 4351 "parse_tree.prog_io_item.c"
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
#line 4364 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 1:
#line 4370 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 2:
#line 4376 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 3:
#line 4382 "parse_tree.prog_io_item.c"
                        *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "prog_io_item.m"
                        break;
#line 30 "prog_io_item.m"
                      case (MR_Integer) 4:
#line 30 "prog_io_item.m"
                        {
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                          MR_Integer parse_tree__prog_io_item__V_231_231 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_232_232;
#line 30 "prog_io_item.m"
                          MR_Integer parse_tree__prog_io_item__V_264_264 = (MR_Integer) parse_tree__prog_io_item__V_261_261;
#line 30 "prog_io_item.m"
                          MR_Integer parse_tree__prog_io_item__V_265_265 = (MR_Integer) parse_tree__prog_io_item__V_229_229;

#line 30 "prog_io_item.m"
                          {
#line 30 "prog_io_item.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_item__V_232_232, parse_tree__prog_io_item__V_264_264, parse_tree__prog_io_item__V_265_265);
                          }
#line 4408 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_232_232 == (MR_Integer) 0);
#line 30 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 30 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                            *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_232_232;
#line 30 "prog_io_item.m"
                          else
#line 30 "prog_io_item.m"
                            {
#line 30 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__V_233_233;

#line 30 "prog_io_item.m"
                              {
#line 30 "prog_io_item.m"
                                mercury__term____Compare____context_0_0(&parse_tree__prog_io_item__V_233_233, parse_tree__prog_io_item__V_260_260, parse_tree__prog_io_item__V_230_230);
                              }
#line 4428 "parse_tree.prog_io_item.c"
                              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_233_233 == (MR_Integer) 0);
#line 30 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 30 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                                *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_233_233;
#line 30 "prog_io_item.m"
                              else
#line 30 "prog_io_item.m"
                                {
#line 30 "prog_io_item.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_259_259, parse_tree__prog_io_item__V_231_231);
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
    MR_Integer parse_tree__prog_io_item__CastX_31 = (MR_Integer) parse_tree__prog_io_item__HeadVar__1_1;
#line 30 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastY_32 = (MR_Integer) parse_tree__prog_io_item__HeadVar__2_2;

#line 30 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__CastX_31 == parse_tree__prog_io_item__CastY_32);
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
#line 4520 "parse_tree.prog_io_item.c"
                {
#line 4522 "parse_tree.prog_io_item.c"
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
            MR_Word parse_tree__prog_io_item__TypeInfo_35_35;
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
#line 4550 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeInfo_35_35 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[12];
#line 4552 "parse_tree.prog_io_item.c"
                {
#line 4554 "parse_tree.prog_io_item.c"
                  return parse_tree__prog_io_item__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_item__TypeInfo_35_35, ((MR_Box) (parse_tree__prog_io_item__V_5_5)), ((MR_Box) (parse_tree__prog_io_item__V_6_6)));
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
            MR_Word parse_tree__prog_io_item__TypeInfo_34_34;
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
#line 4582 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeInfo_34_34 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[11];
#line 4584 "parse_tree.prog_io_item.c"
                {
#line 4586 "parse_tree.prog_io_item.c"
                  return parse_tree__prog_io_item__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_item__TypeInfo_34_34, ((MR_Box) (parse_tree__prog_io_item__V_7_7)), ((MR_Box) (parse_tree__prog_io_item__V_8_8)));
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
                MR_Word parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_10_10;

#line 30 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 30 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                  {
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 4619 "parse_tree.prog_io_item.c"
                    {
#line 4621 "parse_tree.prog_io_item.c"
                      return parse_tree__prog_io_item__succeeded = recompilation____Unify____version_numbers_0_0(parse_tree__prog_io_item__V_9_9, parse_tree__prog_io_item__V_10_10);
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
                MR_String parse_tree__prog_io_item__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__V_12_12;

#line 30 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                  {
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 4647 "parse_tree.prog_io_item.c"
                    parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_11_11, parse_tree__prog_io_item__V_12_12) == 0);
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
                MR_Word parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_16_16;
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_17_17;
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_18_18;

#line 30 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                  {
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 4684 "parse_tree.prog_io_item.c"
                    {
#line 4686 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_item__V_13_13, parse_tree__prog_io_item__V_16_16);
                    }
#line 30 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                      {
#line 4693 "parse_tree.prog_io_item.c"
                        {
#line 4695 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io_item__V_14_14, parse_tree__prog_io_item__V_17_17);
                        }
#line 30 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 4700 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_15_15 == parse_tree__prog_io_item__V_18_18);
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
                MR_Word parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_22_22;
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_23_23;
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_24_24;

#line 30 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                  {
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 4739 "parse_tree.prog_io_item.c"
                    {
#line 4741 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_item__V_19_19, parse_tree__prog_io_item__V_22_22);
                    }
#line 30 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                      {
#line 4748 "parse_tree.prog_io_item.c"
                        {
#line 4750 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io_item__V_20_20, parse_tree__prog_io_item__V_23_23);
                        }
#line 30 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 4755 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_21_21 == parse_tree__prog_io_item__V_24_24);
#line 30 "prog_io_item.m"
                      }
#line 30 "prog_io_item.m"
                  }
#line 30 "prog_io_item.m"
              }
#line 30 "prog_io_item.m"
              break;
#line 30 "prog_io_item.m"
            case (MR_Integer) 4:
#line 30 "prog_io_item.m"
              {
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 3)));
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_28_28;
#line 30 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_29_29;
#line 30 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__V_30_30;

#line 30 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 30 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                  {
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 2)));
#line 30 "prog_io_item.m"
                    parse_tree__prog_io_item__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 3)));
#line 4794 "parse_tree.prog_io_item.c"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_25_25 == parse_tree__prog_io_item__V_28_28);
#line 30 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 30 "prog_io_item.m"
                      {
#line 4800 "parse_tree.prog_io_item.c"
                        {
#line 4802 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io_item__V_26_26, parse_tree__prog_io_item__V_29_29);
                        }
#line 30 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 4807 "parse_tree.prog_io_item.c"
                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_27_27 == parse_tree__prog_io_item__V_30_30);
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

#line 1644 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__dummy_term_with_context_2_p_0(
#line 1644 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_3,
#line 1644 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Term_4)
#line 1644 "prog_io_item.m"
{
#line 1646 "prog_io_item.m"
  {
#line 1646 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1647 "prog_io_item.m"
    {
#line 1647 "prog_io_item.m"
      MR_Word base;
#line 1647 "prog_io_item.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1647 "prog_io_item.m"
      *parse_tree__prog_io_item__Term_4 = base;
#line 1647 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[21]));
#line 1647 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1647 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_3));
#line 1647 "prog_io_item.m"
    }
#line 1646 "prog_io_item.m"
  }
#line 1644 "prog_io_item.m"
}

#line 1611 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(
#line 1611 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1)
#line 1611 "prog_io_item.m"
{
#line 1613 "prog_io_item.m"
  {
#line 1613 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1613 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__HeadVar__2_2;

#line 1613 "prog_io_item.m"
#line 1613 "prog_io_item.m"
    switch (parse_tree__prog_io_item__HeadVar__1_1) {
#line 1613 "prog_io_item.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1613 "prog_io_item.m"
      case (MR_Integer) 1:
#line 1613 "prog_io_item.m"
        parse_tree__prog_io_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[72]);
#line 1613 "prog_io_item.m"
        break;
#line 1613 "prog_io_item.m"
      case (MR_Integer) 0:
#line 1615 "prog_io_item.m"
        parse_tree__prog_io_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[112]);
#line 1613 "prog_io_item.m"
        break;
#line 1613 "prog_io_item.m"
    }
#line 1613 "prog_io_item.m"
    return parse_tree__prog_io_item__HeadVar__2_2;
#line 1613 "prog_io_item.m"
  }
#line 1611 "prog_io_item.m"
}

#line 1600 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_purity_3_p_0(
#line 1600 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Purity_4,
#line 1600 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8,
#line 1600 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9)
#line 1600 "prog_io_item.m"
{
#line 1605 "prog_io_item.m"
  {
#line 1605 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8)) == (MR_mktag((MR_Integer) 1)));
#line 1605 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Purity0_6;
#line 1605 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10;
#line 1603 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_11_11;
#line 1603 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_12_12;
#line 1603 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_7_7;

#line 1603 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1603 "prog_io_item.m"
      {
#line 1603 "prog_io_item.m"
        parse_tree__prog_io_item__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8, (MR_Integer) 0)));
#line 1603 "prog_io_item.m"
        parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8, (MR_Integer) 1)));
#line 1603 "prog_io_item.m"
        parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_11_11, (MR_Integer) 0)));
#line 1603 "prog_io_item.m"
        parse_tree__prog_io_item__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_11_11, (MR_Integer) 1)));
#line 1603 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 1603 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1603 "prog_io_item.m"
          parse_tree__prog_io_item__Purity0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_12_12, (MR_Integer) 0)));
#line 1603 "prog_io_item.m"
      }
#line 1605 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1604 "prog_io_item.m"
      {
#line 1604 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_10_10;
#line 1604 "prog_io_item.m"
        *parse_tree__prog_io_item__Purity_4 = parse_tree__prog_io_item__Purity0_6;
#line 1604 "prog_io_item.m"
      }
#line 1605 "prog_io_item.m"
    else
#line 1606 "prog_io_item.m"
      {
#line 1606 "prog_io_item.m"
        *parse_tree__prog_io_item__Purity_4 = (MR_Integer) 0;
#line 1606 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_9 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_8;
#line 1606 "prog_io_item.m"
      }
#line 1605 "prog_io_item.m"
  }
#line 1600 "prog_io_item.m"
}

#line 1579 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_implicitly_qualified_module_name_4_p_0(
#line 1579 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__DefaultModuleName_5,
#line 1579 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1579 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_7,
#line 1579 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModule_8)
#line 1579 "prog_io_item.m"
{
#line 1585 "prog_io_item.m"
  {
#line 1585 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1585 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__Term_7)) == (MR_mktag((MR_Integer) 0))))
#line 1594 "prog_io_item.m"
      {
#line 1594 "prog_io_item.m"
        parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_item__DefaultModuleName_5, parse_tree__prog_io_item__VarSet_6, parse_tree__prog_io_item__Term_7, parse_tree__prog_io_item__MaybeModule_8);
#line 1594 "prog_io_item.m"
        return;
      }
#line 1585 "prog_io_item.m"
    else
#line 1585 "prog_io_item.m"
      {
#line 1585 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Term_7, (MR_Integer) 1)));
#line 1585 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_12;
#line 1585 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 1585 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 1585 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1585 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Term_7, (MR_Integer) 0)));

#line 1590 "prog_io_item.m"
        {
#line 1590 "prog_io_item.m"
          parse_tree__prog_io_item__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1590 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_10));
#line 1590 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[153])));
#line 1590 "prog_io_item.m"
        }
#line 1590 "prog_io_item.m"
        {
#line 1590 "prog_io_item.m"
          parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1590 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_item__V_30_30));
#line 1590 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1590 "prog_io_item.m"
        }
#line 1589 "prog_io_item.m"
        {
#line 1589 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1589 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1589 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1589 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 1589 "prog_io_item.m"
        }
#line 1591 "prog_io_item.m"
        {
#line 1591 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1591 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_12));
#line 1591 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1591 "prog_io_item.m"
        }
#line 1591 "prog_io_item.m"
        {
#line 1591 "prog_io_item.m"
          MR_Word base;
#line 1591 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1591 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeModule_8 = base;
#line 1591 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 1591 "prog_io_item.m"
        }
#line 1585 "prog_io_item.m"
      }
#line 1585 "prog_io_item.m"
  }
#line 1579 "prog_io_item.m"
}

#line 1568 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_name_3_p_0(
#line 1568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 1568 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1568 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModuleName_6)
#line 1568 "prog_io_item.m"
{
#line 1572 "prog_io_item.m"
  {
#line 1572 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1572 "prog_io_item.m"
    {
#line 1572 "prog_io_item.m"
      parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__VarSet_4, parse_tree__prog_io_item__Term_5, parse_tree__prog_io_item__MaybeModuleName_6);
#line 1572 "prog_io_item.m"
      return;
    }
#line 1572 "prog_io_item.m"
  }
#line 1568 "prog_io_item.m"
}

#line 1545 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__desugar_field_access_1_f_0(
#line 1545 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_3)
#line 1545 "prog_io_item.m"
{
#line 1553 "prog_io_item.m"
  {
#line 1553 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1553 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DesugaredTerm_4;
#line 1553 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__A_5;
#line 1553 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Context_7;
#line 1553 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Bs_9;
#line 1553 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;
#line 1549 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__RHS_6;
#line 1549 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 1549 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_17_17;
#line 1549 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_18_18;
#line 1549 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1549 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_20_20;
#line 1550 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_10_10;
#line 1550 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__FieldName_8;

#line 1549 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1549 "prog_io_item.m"
      {
#line 1549 "prog_io_item.m"
        parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 0)));
#line 1549 "prog_io_item.m"
        parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 1)));
#line 1549 "prog_io_item.m"
        parse_tree__prog_io_item__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 2)));
#line 1549 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 1549 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1549 "prog_io_item.m"
          {
#line 1549 "prog_io_item.m"
            parse_tree__prog_io_item__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 1549 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_17_17, (MR_String) "^") == 0);
#line 1549 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1549 "prog_io_item.m"
              {
#line 1549 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 1549 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1549 "prog_io_item.m"
                  {
#line 1549 "prog_io_item.m"
                    parse_tree__prog_io_item__A_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1549 "prog_io_item.m"
                    parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1549 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 1549 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1549 "prog_io_item.m"
                      {
#line 1549 "prog_io_item.m"
                        parse_tree__prog_io_item__RHS_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1549 "prog_io_item.m"
                        parse_tree__prog_io_item__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, (MR_Integer) 1)));
#line 1549 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1549 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1549 "prog_io_item.m"
                          {
#line 1550 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__RHS_6)) == (MR_mktag((MR_Integer) 0)));
#line 1550 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 1550 "prog_io_item.m"
                              {
#line 1550 "prog_io_item.m"
                                parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 0)));
#line 1550 "prog_io_item.m"
                                parse_tree__prog_io_item__Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 1)));
#line 1550 "prog_io_item.m"
                                parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 2)));
#line 1550 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 1550 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 1550 "prog_io_item.m"
                                  parse_tree__prog_io_item__FieldName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 1550 "prog_io_item.m"
                              }
#line 1549 "prog_io_item.m"
                          }
#line 1549 "prog_io_item.m"
                      }
#line 1549 "prog_io_item.m"
                  }
#line 1549 "prog_io_item.m"
              }
#line 1549 "prog_io_item.m"
          }
#line 1549 "prog_io_item.m"
      }
#line 1553 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1552 "prog_io_item.m"
      {
#line 1552 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 1552 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;

#line 1552 "prog_io_item.m"
        {
#line 1552 "prog_io_item.m"
          parse_tree__prog_io_item__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_item__A_5));
#line 1552 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1552 "prog_io_item.m"
        }
#line 1552 "prog_io_item.m"
        {
#line 1552 "prog_io_item.m"
          parse_tree__prog_io_item__V_23_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__Bs_9, parse_tree__prog_io_item__V_24_24);
        }
#line 1552 "prog_io_item.m"
        {
#line 1552 "prog_io_item.m"
          parse_tree__prog_io_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1552 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io_item__V_21_21));
#line 1552 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io_item__V_23_23));
#line 1552 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_7));
#line 1552 "prog_io_item.m"
        }
#line 1552 "prog_io_item.m"
      }
#line 1553 "prog_io_item.m"
    else
#line 1560 "prog_io_item.m"
      {
#line 1560 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_12;
#line 1560 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__A_44;
#line 1560 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_46;
#line 1560 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__FieldName_47;
#line 1560 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Bs_48;
#line 1554 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__LHS_11;
#line 1554 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_26_26;
#line 1554 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_27_27;
#line 1554 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_28_28;
#line 1554 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 1554 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 1554 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_31_31;
#line 1554 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_32_32;
#line 1554 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 1554 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_34_34;
#line 1554 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1554 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;
#line 1554 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__RHS_43;
#line 1554 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_13_13;
#line 1556 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_14_14;

#line 1554 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1554 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1554 "prog_io_item.m"
          {
#line 1554 "prog_io_item.m"
            parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 0)));
#line 1554 "prog_io_item.m"
            parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 1)));
#line 1554 "prog_io_item.m"
            parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 2)));
#line 1554 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_26_26)) == (MR_mktag((MR_Integer) 0)));
#line 1554 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1554 "prog_io_item.m"
              {
#line 1554 "prog_io_item.m"
                parse_tree__prog_io_item__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 0)));
#line 1554 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_27_27, (MR_String) ":=") == 0);
#line 1554 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1554 "prog_io_item.m"
                  {
#line 1554 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1554 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1554 "prog_io_item.m"
                      {
#line 1554 "prog_io_item.m"
                        parse_tree__prog_io_item__LHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 0)));
#line 1554 "prog_io_item.m"
                        parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 1)));
#line 1554 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 1554 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1554 "prog_io_item.m"
                          {
#line 1554 "prog_io_item.m"
                            parse_tree__prog_io_item__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 0)));
#line 1554 "prog_io_item.m"
                            parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 1)));
#line 1554 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1554 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 1554 "prog_io_item.m"
                              {
#line 1555 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__LHS_11)) == (MR_mktag((MR_Integer) 0)));
#line 1555 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 1555 "prog_io_item.m"
                                  {
#line 1555 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 0)));
#line 1555 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 1)));
#line 1555 "prog_io_item.m"
                                    parse_tree__prog_io_item__Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 2)));
#line 1555 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 1555 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 1555 "prog_io_item.m"
                                      {
#line 1555 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 1555 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_32_32, (MR_String) "^") == 0);
#line 1554 "prog_io_item.m"
                                        if (parse_tree__prog_io_item__succeeded)
#line 1554 "prog_io_item.m"
                                          {
#line 1555 "prog_io_item.m"
                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1555 "prog_io_item.m"
                                            if (parse_tree__prog_io_item__succeeded)
#line 1555 "prog_io_item.m"
                                              {
#line 1555 "prog_io_item.m"
                                                parse_tree__prog_io_item__A_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 0)));
#line 1555 "prog_io_item.m"
                                                parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 1)));
#line 1555 "prog_io_item.m"
                                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1555 "prog_io_item.m"
                                                if (parse_tree__prog_io_item__succeeded)
#line 1555 "prog_io_item.m"
                                                  {
#line 1555 "prog_io_item.m"
                                                    parse_tree__prog_io_item__RHS_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 0)));
#line 1555 "prog_io_item.m"
                                                    parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 1)));
#line 1555 "prog_io_item.m"
                                                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1554 "prog_io_item.m"
                                                    if (parse_tree__prog_io_item__succeeded)
#line 1554 "prog_io_item.m"
                                                      {
#line 1556 "prog_io_item.m"
                                                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__RHS_43)) == (MR_mktag((MR_Integer) 0)));
#line 1556 "prog_io_item.m"
                                                        if (parse_tree__prog_io_item__succeeded)
#line 1556 "prog_io_item.m"
                                                          {
#line 1556 "prog_io_item.m"
                                                            parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 0)));
#line 1556 "prog_io_item.m"
                                                            parse_tree__prog_io_item__Bs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 1)));
#line 1556 "prog_io_item.m"
                                                            parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 2)));
#line 1556 "prog_io_item.m"
                                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 1556 "prog_io_item.m"
                                                            if (parse_tree__prog_io_item__succeeded)
#line 1556 "prog_io_item.m"
                                                              parse_tree__prog_io_item__FieldName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 1556 "prog_io_item.m"
                                                          }
#line 1554 "prog_io_item.m"
                                                      }
#line 1555 "prog_io_item.m"
                                                  }
#line 1555 "prog_io_item.m"
                                              }
#line 1554 "prog_io_item.m"
                                          }
#line 1555 "prog_io_item.m"
                                      }
#line 1555 "prog_io_item.m"
                                  }
#line 1554 "prog_io_item.m"
                              }
#line 1554 "prog_io_item.m"
                          }
#line 1554 "prog_io_item.m"
                      }
#line 1554 "prog_io_item.m"
                  }
#line 1554 "prog_io_item.m"
              }
#line 1554 "prog_io_item.m"
          }
#line 1560 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1558 "prog_io_item.m"
          {
#line 1558 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__FunctionName_15;
#line 1558 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;
#line 1558 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_39_39;
#line 1558 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1558 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;

#line 1558 "prog_io_item.m"
            {
#line 1558 "prog_io_item.m"
              parse_tree__prog_io_item__FunctionName_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_item__FieldName_47, (MR_String) " :=");
            }
#line 1559 "prog_io_item.m"
            {
#line 1559 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1559 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_item__FunctionName_15));
#line 1559 "prog_io_item.m"
            }
#line 1559 "prog_io_item.m"
            {
#line 1559 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1559 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__X_12));
#line 1559 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1559 "prog_io_item.m"
            }
#line 1559 "prog_io_item.m"
            {
#line 1559 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1559 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__A_44));
#line 1559 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1559 "prog_io_item.m"
            }
#line 1559 "prog_io_item.m"
            {
#line 1559 "prog_io_item.m"
              parse_tree__prog_io_item__V_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__Bs_48, parse_tree__prog_io_item__V_40_40);
            }
#line 1559 "prog_io_item.m"
            {
#line 1559 "prog_io_item.m"
              parse_tree__prog_io_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1559 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1559 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 1559 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_46));
#line 1559 "prog_io_item.m"
            }
#line 1558 "prog_io_item.m"
          }
#line 1560 "prog_io_item.m"
        else
#line 1561 "prog_io_item.m"
          parse_tree__prog_io_item__DesugaredTerm_4 = parse_tree__prog_io_item__Term_3;
#line 1560 "prog_io_item.m"
      }
#line 1553 "prog_io_item.m"
    return parse_tree__prog_io_item__DesugaredTerm_4;
#line 1553 "prog_io_item.m"
  }
#line 1545 "prog_io_item.m"
}

#line 1499 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(
#line 1499 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 1499 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithInstTerm_5,
#line 1499 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithInst_6)
#line 1499 "prog_io_item.m"
{
#line 1517 "prog_io_item.m"
  {
#line 1517 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 1517 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTermPrime_7;
#line 1517 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InstTerm_8;
#line 1504 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_13_13;
#line 1504 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_14_14;
#line 1504 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_15_15;
#line 1504 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 1504 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 1504 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_9_9;

#line 1504 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1504 "prog_io_item.m"
      {
#line 1504 "prog_io_item.m"
        parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 0)));
#line 1504 "prog_io_item.m"
        parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 1)));
#line 1504 "prog_io_item.m"
        parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 2)));
#line 1504 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 1504 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1504 "prog_io_item.m"
          {
#line 1504 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_13_13, (MR_Integer) 0)));
#line 1504 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_14_14, (MR_String) "with_inst") == 0);
#line 1504 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1504 "prog_io_item.m"
              {
#line 1505 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1505 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1505 "prog_io_item.m"
                  {
#line 1505 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeWithInstTermPrime_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 0)));
#line 1505 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 1)));
#line 1505 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1505 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1505 "prog_io_item.m"
                      {
#line 1505 "prog_io_item.m"
                        parse_tree__prog_io_item__InstTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 1505 "prog_io_item.m"
                        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 1)));
#line 1505 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1505 "prog_io_item.m"
                      }
#line 1505 "prog_io_item.m"
                  }
#line 1504 "prog_io_item.m"
              }
#line 1504 "prog_io_item.m"
          }
#line 1504 "prog_io_item.m"
      }
#line 1517 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1507 "prog_io_item.m"
      {
#line 1510 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Inst_10;

#line 1507 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithInstTerm_5 = parse_tree__prog_io_item__BeforeWithInstTermPrime_7;
#line 1508 "prog_io_item.m"
        {
#line 1508 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__InstTerm_8, &parse_tree__prog_io_item__Inst_10);
        }
#line 1510 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1509 "prog_io_item.m"
          {
#line 1509 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_19_19;

#line 1509 "prog_io_item.m"
            {
#line 1509 "prog_io_item.m"
              parse_tree__prog_io_item__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_item__Inst_10));
#line 1509 "prog_io_item.m"
            }
#line 1509 "prog_io_item.m"
            {
#line 1509 "prog_io_item.m"
              MR_Word base;
#line 1509 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithInst_6 = base;
#line 1509 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_19_19));
#line 1509 "prog_io_item.m"
            }
#line 1509 "prog_io_item.m"
          }
#line 1510 "prog_io_item.m"
        else
#line 1512 "prog_io_item.m"
          {
#line 1512 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_12;
#line 1512 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_33_33;
#line 1512 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_34_34;
#line 1512 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_35_35;
#line 1512 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;

#line 1514 "prog_io_item.m"
            {
#line 1514 "prog_io_item.m"
              parse_tree__prog_io_item__V_35_35 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__InstTerm_8);
            }
#line 1514 "prog_io_item.m"
            {
#line 1514 "prog_io_item.m"
              parse_tree__prog_io_item__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1514 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 1514 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[145])));
#line 1514 "prog_io_item.m"
            }
#line 1514 "prog_io_item.m"
            {
#line 1514 "prog_io_item.m"
              parse_tree__prog_io_item__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1514 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_item__V_34_34));
#line 1514 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1514 "prog_io_item.m"
            }
#line 1513 "prog_io_item.m"
            {
#line 1513 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1513 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1513 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1513 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_item__V_33_33));
#line 1513 "prog_io_item.m"
            }
#line 1515 "prog_io_item.m"
            {
#line 1515 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_12));
#line 1515 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1515 "prog_io_item.m"
            }
#line 1515 "prog_io_item.m"
            {
#line 1515 "prog_io_item.m"
              MR_Word base;
#line 1515 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1515 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithInst_6 = base;
#line 1515 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1515 "prog_io_item.m"
            }
#line 1512 "prog_io_item.m"
          }
#line 1507 "prog_io_item.m"
      }
#line 1517 "prog_io_item.m"
    else
#line 1518 "prog_io_item.m"
      {
#line 1518 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithInstTerm_5 = parse_tree__prog_io_item__Term_4;
#line 1519 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeWithInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[14]);
#line 1518 "prog_io_item.m"
      }
#line 1517 "prog_io_item.m"
  }
#line 1499 "prog_io_item.m"
}

#line 1468 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(
#line 1468 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1468 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1468 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithTypeTerm_7,
#line 1468 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithType_8)
#line 1468 "prog_io_item.m"
{
#line 1492 "prog_io_item.m"
  {
#line 1492 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1492 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithTypeTermPrime_10;
#line 1492 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeTerm_11;
#line 1474 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeQualifier_9;
#line 1474 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 1474 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_18_18;
#line 1474 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1474 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_24_24;
#line 1473 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_12_12;

#line 1473 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1473 "prog_io_item.m"
      {
#line 1473 "prog_io_item.m"
        parse_tree__prog_io_item__TypeQualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 0)));
#line 1473 "prog_io_item.m"
        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 1)));
#line 1473 "prog_io_item.m"
        parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 2)));
#line 1474 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 1474 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1474 "prog_io_item.m"
          {
#line 1474 "prog_io_item.m"
            parse_tree__prog_io_item__BeforeWithTypeTermPrime_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_17_17, (MR_Integer) 0)));
#line 1474 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_17_17, (MR_Integer) 1)));
#line 1474 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 1474 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1474 "prog_io_item.m"
              {
#line 1474 "prog_io_item.m"
                parse_tree__prog_io_item__TypeTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1474 "prog_io_item.m"
                parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1474 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1474 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1474 "prog_io_item.m"
                  {
#line 1476 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__TypeQualifier_9)) == (MR_mktag((MR_Integer) 0)));
#line 1476 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1476 "prog_io_item.m"
                      {
#line 1476 "prog_io_item.m"
                        parse_tree__prog_io_item__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__TypeQualifier_9, (MR_Integer) 0)));
#line 1477 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__V_24_24, (MR_String) ":") == 0))
#line 1478 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1477 "prog_io_item.m"
                        else
#line 1477 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__V_24_24, (MR_String) "with_type") == 0))
#line 1476 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1477 "prog_io_item.m"
                        else
#line 1477 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 1476 "prog_io_item.m"
                      }
#line 1474 "prog_io_item.m"
                  }
#line 1474 "prog_io_item.m"
              }
#line 1474 "prog_io_item.m"
          }
#line 1473 "prog_io_item.m"
      }
#line 1492 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1481 "prog_io_item.m"
      {
#line 1481 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeType_14;

#line 1481 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithTypeTerm_7 = parse_tree__prog_io_item__BeforeWithTypeTermPrime_10;
#line 1484 "prog_io_item.m"
        {
#line 1484 "prog_io_item.m"
          parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_item__TypeTerm_11, parse_tree__prog_io_item__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__MaybeType_14);
        }
#line 1488 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
#line 1490 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeWithType_8 = (MR_Word) parse_tree__prog_io_item__MaybeType_14;
#line 1488 "prog_io_item.m"
        else
#line 1486 "prog_io_item.m"
          {
#line 1486 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeType_14, (MR_Integer) 0)));
#line 1486 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_22_22;

#line 1487 "prog_io_item.m"
            {
#line 1487 "prog_io_item.m"
              parse_tree__prog_io_item__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_15));
#line 1487 "prog_io_item.m"
            }
#line 1487 "prog_io_item.m"
            {
#line 1487 "prog_io_item.m"
              MR_Word base;
#line 1487 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithType_8 = base;
#line 1487 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_22_22));
#line 1487 "prog_io_item.m"
            }
#line 1486 "prog_io_item.m"
          }
#line 1481 "prog_io_item.m"
      }
#line 1492 "prog_io_item.m"
    else
#line 1493 "prog_io_item.m"
      {
#line 1493 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithTypeTerm_7 = parse_tree__prog_io_item__Term_6;
#line 1494 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeWithType_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[19]);
#line 1493 "prog_io_item.m"
      }
#line 1492 "prog_io_item.m"
  }
#line 1468 "prog_io_item.m"
}

#line 1439 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(
#line 1439 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1439 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1439 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeDetismTerm_7,
#line 1439 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeMaybeDetism_8)
#line 1439 "prog_io_item.m"
{
#line 1461 "prog_io_item.m"
  {
#line 1461 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1461 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTermPrime_11;
#line 1461 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DetismTerm_12;
#line 1444 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Args_9;
#line 1444 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1444 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_20_20;
#line 1444 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;
#line 1444 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_22_22;
#line 1444 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_10_10;

#line 1444 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1444 "prog_io_item.m"
      {
#line 1444 "prog_io_item.m"
        parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 0)));
#line 1444 "prog_io_item.m"
        parse_tree__prog_io_item__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 1)));
#line 1444 "prog_io_item.m"
        parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 2)));
#line 1444 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 1444 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1444 "prog_io_item.m"
          {
#line 1444 "prog_io_item.m"
            parse_tree__prog_io_item__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1444 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_20_20, (MR_String) "is") == 0);
#line 1444 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1444 "prog_io_item.m"
              {
#line 1445 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 1445 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1445 "prog_io_item.m"
                  {
#line 1445 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeDetismTermPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_9, (MR_Integer) 0)));
#line 1445 "prog_io_item.m"
                    parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_9, (MR_Integer) 1)));
#line 1445 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 1445 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1445 "prog_io_item.m"
                      {
#line 1445 "prog_io_item.m"
                        parse_tree__prog_io_item__DetismTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 1445 "prog_io_item.m"
                        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 1)));
#line 1445 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1445 "prog_io_item.m"
                      }
#line 1445 "prog_io_item.m"
                  }
#line 1444 "prog_io_item.m"
              }
#line 1444 "prog_io_item.m"
          }
#line 1444 "prog_io_item.m"
      }
#line 1461 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1447 "prog_io_item.m"
      {
#line 1453 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Detism_15;
#line 1449 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__DetismFunctor_13;
#line 1449 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 1449 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;
#line 1449 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_14_14;

#line 1447 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeDetismTerm_7 = parse_tree__prog_io_item__BeforeDetismTermPrime_11;
#line 1449 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__DetismTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 1449 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1449 "prog_io_item.m"
          {
#line 1449 "prog_io_item.m"
            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 0)));
#line 1449 "prog_io_item.m"
            parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 1)));
#line 1449 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 2)));
#line 1449 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1449 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1449 "prog_io_item.m"
              {
#line 1449 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 1449 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1449 "prog_io_item.m"
                  {
#line 1449 "prog_io_item.m"
                    parse_tree__prog_io_item__DetismFunctor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_23_23, (MR_Integer) 0)));
#line 1450 "prog_io_item.m"
                    {
#line 1450 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_item__DetismFunctor_13, &parse_tree__prog_io_item__Detism_15);
                    }
#line 1449 "prog_io_item.m"
                  }
#line 1449 "prog_io_item.m"
              }
#line 1449 "prog_io_item.m"
          }
#line 1453 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1452 "prog_io_item.m"
          {
#line 1452 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_25_25;

#line 1452 "prog_io_item.m"
            {
#line 1452 "prog_io_item.m"
              parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1452 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Detism_15));
#line 1452 "prog_io_item.m"
            }
#line 1452 "prog_io_item.m"
            {
#line 1452 "prog_io_item.m"
              MR_Word base;
#line 1452 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1452 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeMaybeDetism_8 = base;
#line 1452 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 1452 "prog_io_item.m"
            }
#line 1452 "prog_io_item.m"
          }
#line 1453 "prog_io_item.m"
        else
#line 1454 "prog_io_item.m"
          {
#line 1454 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1454 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__TermStr_16;
#line 1454 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Pieces_17;
#line 1454 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_18;
#line 1454 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_28_28;
#line 1454 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29;
#line 1454 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;
#line 1454 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_39_39;
#line 1454 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1454 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 1454 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_42_42;
#line 1454 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_45_45;

#line 1454 "prog_io_item.m"
            {
#line 1454 "prog_io_item.m"
              parse_tree__prog_io_item__TermStr_16 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_48_48, parse_tree__prog_io_item__VarSet_5, parse_tree__prog_io_item__Term_6);
            }
#line 1456 "prog_io_item.m"
            {
#line 1456 "prog_io_item.m"
              parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1456 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_16));
#line 1456 "prog_io_item.m"
            }
#line 1456 "prog_io_item.m"
            {
#line 1456 "prog_io_item.m"
              parse_tree__prog_io_item__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 1456 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 1456 "prog_io_item.m"
            }
#line 1455 "prog_io_item.m"
            {
#line 1455 "prog_io_item.m"
              parse_tree__prog_io_item__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[152])));
#line 1455 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_17, 1) = ((MR_Box) (parse_tree__prog_io_item__V_28_28));
#line 1455 "prog_io_item.m"
            }
#line 1458 "prog_io_item.m"
            {
#line 1458 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_48_48, parse_tree__prog_io_item__DetismTerm_12);
            }
#line 1458 "prog_io_item.m"
            {
#line 1458 "prog_io_item.m"
              parse_tree__prog_io_item__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_17));
#line 1458 "prog_io_item.m"
            }
#line 1458 "prog_io_item.m"
            {
#line 1458 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 1458 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1458 "prog_io_item.m"
            }
#line 1458 "prog_io_item.m"
            {
#line 1458 "prog_io_item.m"
              parse_tree__prog_io_item__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1458 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 1) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1458 "prog_io_item.m"
            }
#line 1458 "prog_io_item.m"
            {
#line 1458 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 1458 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1458 "prog_io_item.m"
            }
#line 1457 "prog_io_item.m"
            {
#line 1457 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1457 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1457 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1457 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1457 "prog_io_item.m"
            }
#line 1459 "prog_io_item.m"
            {
#line 1459 "prog_io_item.m"
              parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1459 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_18));
#line 1459 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1459 "prog_io_item.m"
            }
#line 1459 "prog_io_item.m"
            {
#line 1459 "prog_io_item.m"
              MR_Word base;
#line 1459 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1459 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeMaybeDetism_8 = base;
#line 1459 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_45_45));
#line 1459 "prog_io_item.m"
            }
#line 1454 "prog_io_item.m"
          }
#line 1447 "prog_io_item.m"
      }
#line 1461 "prog_io_item.m"
    else
#line 1462 "prog_io_item.m"
      {
#line 1462 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeDetismTerm_7 = parse_tree__prog_io_item__Term_6;
#line 1463 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeMaybeDetism_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[18]);
#line 1462 "prog_io_item.m"
      }
#line 1461 "prog_io_item.m"
  }
#line 1439 "prog_io_item.m"
}

#line 1351 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_constraints_6_p_0(
#line 1351 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_7,
#line 1351 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1351 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1351 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23,
#line 1351 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24,
#line 1351 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeClassInstConstraints_11)
#line 1351 "prog_io_item.m"
{
#line 1383 "prog_io_item.m"
  {
#line 1383 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23)) == (MR_mktag((MR_Integer) 1)));
#line 1383 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConstraintsTerm_12;
#line 1383 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25;
#line 1358 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_26_26;
#line 1358 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_27_27;
#line 1358 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_41_41;
#line 1359 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___Term_13;

#line 1360 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1360 "prog_io_item.m"
      {
#line 1360 "prog_io_item.m"
        parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23, (MR_Integer) 0)));
#line 1360 "prog_io_item.m"
        parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23, (MR_Integer) 1)));
#line 1359 "prog_io_item.m"
        parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 0)));
#line 1359 "prog_io_item.m"
        parse_tree__prog_io_item___Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 1)));
#line 1359 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_27_27)) == (MR_mktag((MR_Integer) 3)));
#line 1359 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1359 "prog_io_item.m"
          {
#line 1359 "prog_io_item.m"
            parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_27_27, (MR_Integer) 0)));
#line 1359 "prog_io_item.m"
            parse_tree__prog_io_item__ConstraintsTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_27_27, (MR_Integer) 1)));
#line 1359 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__QuantType_7 == parse_tree__prog_io_item__V_41_41);
#line 1359 "prog_io_item.m"
          }
#line 1360 "prog_io_item.m"
      }
#line 1383 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1363 "prog_io_item.m"
      {
#line 1363 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeHeadConstraints_14;
#line 1363 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeTailConstraints_15;
#line 1378 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadClassConstraints_16;
#line 1378 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadInstConstraint_17;
#line 1378 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TailClassConstraints_18;
#line 1378 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TailInstConstraint_19;

#line 1362 "prog_io_item.m"
        {
#line 1362 "prog_io_item.m"
          parse_tree__prog_io_typeclass__parse_class_and_inst_constraints_4_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ConstraintsTerm_12, &parse_tree__prog_io_item__MaybeHeadConstraints_14);
        }
#line 1366 "prog_io_item.m"
        {
#line 1366 "prog_io_item.m"
          parse_tree__prog_io_item__get_constraints_6_p_0(parse_tree__prog_io_item__QuantType_7, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_25_25, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24, &parse_tree__prog_io_item__MaybeTailConstraints_15);
        }
#line 1369 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeHeadConstraints_14)) == (MR_mktag((MR_Integer) 1)));
#line 1369 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1369 "prog_io_item.m"
          {
#line 1369 "prog_io_item.m"
            parse_tree__prog_io_item__HeadClassConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeHeadConstraints_14, (MR_Integer) 0)));
#line 1369 "prog_io_item.m"
            parse_tree__prog_io_item__HeadInstConstraint_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeHeadConstraints_14, (MR_Integer) 1)));
#line 1371 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeTailConstraints_15)) == (MR_mktag((MR_Integer) 1)));
#line 1371 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1371 "prog_io_item.m"
              {
#line 1371 "prog_io_item.m"
                parse_tree__prog_io_item__TailClassConstraints_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeTailConstraints_15, (MR_Integer) 0)));
#line 1371 "prog_io_item.m"
                parse_tree__prog_io_item__TailInstConstraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeTailConstraints_15, (MR_Integer) 1)));
#line 1371 "prog_io_item.m"
              }
#line 1369 "prog_io_item.m"
          }
#line 1378 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1374 "prog_io_item.m"
          {
#line 1374 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ClassConstraints_20;
#line 1374 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_21;

#line 1374 "prog_io_item.m"
            {
#line 1374 "prog_io_item.m"
              parse_tree__prog_io_item__ClassConstraints_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, parse_tree__prog_io_item__HeadClassConstraints_16, parse_tree__prog_io_item__TailClassConstraints_18);
            }
#line 1375 "prog_io_item.m"
            {
#line 1375 "prog_io_item.m"
              parse_tree__prog_io_item__InstConstraints_21 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_item__HeadInstConstraint_17, parse_tree__prog_io_item__TailInstConstraint_19);
            }
#line 1377 "prog_io_item.m"
            {
#line 1377 "prog_io_item.m"
              MR_Word base;
#line 1377 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1377 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ClassConstraints_20));
#line 1377 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_21));
#line 1377 "prog_io_item.m"
            }
#line 1374 "prog_io_item.m"
          }
#line 1378 "prog_io_item.m"
        else
#line 1380 "prog_io_item.m"
          {
#line 1380 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeInfo_37_37 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[9];
#line 1380 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeInfo_38_38 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[1];
#line 1380 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_22;
#line 1380 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29;
#line 1380 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_30_30;

#line 1379 "prog_io_item.m"
            {
#line 1379 "prog_io_item.m"
              parse_tree__prog_io_item__V_29_29 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__TypeInfo_38_38, parse_tree__prog_io_item__MaybeHeadConstraints_14);
            }
#line 1380 "prog_io_item.m"
            {
#line 1380 "prog_io_item.m"
              parse_tree__prog_io_item__V_30_30 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__TypeInfo_38_38, parse_tree__prog_io_item__MaybeTailConstraints_15);
            }
#line 1379 "prog_io_item.m"
            {
#line 1379 "prog_io_item.m"
              parse_tree__prog_io_item__Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_29_29, parse_tree__prog_io_item__V_30_30);
            }
#line 1381 "prog_io_item.m"
            {
#line 1381 "prog_io_item.m"
              MR_Word base;
#line 1381 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1381 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1381 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_22));
#line 1381 "prog_io_item.m"
            }
#line 1380 "prog_io_item.m"
          }
#line 1363 "prog_io_item.m"
      }
#line 1383 "prog_io_item.m"
    else
#line 1384 "prog_io_item.m"
      {
#line 1384 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_32_32;

#line 1384 "prog_io_item.m"
        {
#line 1384 "prog_io_item.m"
          parse_tree__prog_io_item__V_32_32 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        }
#line 1384 "prog_io_item.m"
        {
#line 1384 "prog_io_item.m"
          MR_Word base;
#line 1384 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeClassInstConstraints_11 = base;
#line 1384 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1384 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 1384 "prog_io_item.m"
        }
#line 1384 "prog_io_item.m"
        *parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_23;
#line 1384 "prog_io_item.m"
      }
#line 1383 "prog_io_item.m"
  }
#line 1351 "prog_io_item.m"
}

#line 1329 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0_1(
#line 1329 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1329 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1329 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1329 "prog_io_item.m"
{
#line 1329 "prog_io_item.m"
  {
#line 1329 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1329 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_39;

#line 1329 "prog_io_item.m"
    {
#line 1329 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints__1329__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_39);
    }
#line 1329 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_39));
#line 1329 "prog_io_item.m"
  }
#line 1329 "prog_io_item.m"
}

#line 1286 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(
#line 1286 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 1286 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 1286 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RevAttributes0_8,
#line 1286 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__RevAttributes_9,
#line 1286 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeExistClassInstContext_10)
#line 1286 "prog_io_item.m"
{
#line 1291 "prog_io_item.m"
  {
#line 1291 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1291 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeInfo_37_37 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[0];
#line 1291 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes0_11;
#line 1291 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes1_12;
#line 1291 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes2_14;
#line 1291 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVars0_15;
#line 1291 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVars_16;
#line 1291 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes3_17;
#line 1291 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeUnivConstraints_18;
#line 1291 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes_19;
#line 1291 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeExistConstraints_20;
#line 1325 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___UnivQVars_13;
#line 1345 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__UnivConstraints_21;
#line 1345 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__UnivInstConstraints_22;
#line 1345 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistConstraints_23;
#line 1345 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistInstConstraints_24;

#line 1324 "prog_io_item.m"
    {
#line 1324 "prog_io_item.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__RevAttributes0_8, &parse_tree__prog_io_item__Attributes0_11);
    }
#line 1325 "prog_io_item.m"
    {
#line 1325 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__Attributes0_11, &parse_tree__prog_io_item__Attributes1_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item___UnivQVars_13);
    }
#line 1327 "prog_io_item.m"
    {
#line 1327 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 0, parse_tree__prog_io_item__Attributes1_12, &parse_tree__prog_io_item__Attributes2_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__ExistQVars0_15);
    }
#line 1329 "prog_io_item.m"
    {
#line 1329 "prog_io_item.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[7], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[5], parse_tree__prog_io_item__ExistQVars0_15, &parse_tree__prog_io_item__ExistQVars_16);
    }
#line 1330 "prog_io_item.m"
    {
#line 1330 "prog_io_item.m"
      parse_tree__prog_io_item__get_constraints_6_p_0((MR_Integer) 1, parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Attributes2_14, &parse_tree__prog_io_item__Attributes3_17, &parse_tree__prog_io_item__MaybeUnivConstraints_18);
    }
#line 1332 "prog_io_item.m"
    {
#line 1332 "prog_io_item.m"
      parse_tree__prog_io_item__get_constraints_6_p_0((MR_Integer) 0, parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Attributes3_17, &parse_tree__prog_io_item__Attributes_19, &parse_tree__prog_io_item__MaybeExistConstraints_20);
    }
#line 1334 "prog_io_item.m"
    {
#line 1334 "prog_io_item.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_io_item__TypeInfo_37_37, parse_tree__prog_io_item__Attributes_19, parse_tree__prog_io_item__RevAttributes_9);
    }
#line 1337 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeUnivConstraints_18)) == (MR_mktag((MR_Integer) 1)));
#line 1337 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1337 "prog_io_item.m"
      {
#line 1337 "prog_io_item.m"
        parse_tree__prog_io_item__UnivConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeUnivConstraints_18, (MR_Integer) 0)));
#line 1337 "prog_io_item.m"
        parse_tree__prog_io_item__UnivInstConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeUnivConstraints_18, (MR_Integer) 1)));
#line 1338 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeExistConstraints_20)) == (MR_mktag((MR_Integer) 1)));
#line 1338 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1338 "prog_io_item.m"
          {
#line 1338 "prog_io_item.m"
            parse_tree__prog_io_item__ExistConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistConstraints_20, (MR_Integer) 0)));
#line 1338 "prog_io_item.m"
            parse_tree__prog_io_item__ExistInstConstraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistConstraints_20, (MR_Integer) 1)));
#line 1338 "prog_io_item.m"
          }
#line 1337 "prog_io_item.m"
      }
#line 1345 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1340 "prog_io_item.m"
      {
#line 1340 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ClassConstraints_25;
#line 1340 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_26;

#line 1340 "prog_io_item.m"
        {
#line 1340 "prog_io_item.m"
          parse_tree__prog_io_item__ClassConstraints_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1340 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassConstraints_25, 0) = ((MR_Box) (parse_tree__prog_io_item__UnivConstraints_21));
#line 1340 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassConstraints_25, 1) = ((MR_Box) (parse_tree__prog_io_item__ExistConstraints_23));
#line 1340 "prog_io_item.m"
        }
#line 1341 "prog_io_item.m"
        {
#line 1341 "prog_io_item.m"
          parse_tree__prog_io_item__InstConstraints_26 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_item__UnivInstConstraints_22, parse_tree__prog_io_item__ExistInstConstraints_24);
        }
#line 1343 "prog_io_item.m"
        {
#line 1343 "prog_io_item.m"
          MR_Word base;
#line 1343 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeExistClassInstContext_10 = base;
#line 1343 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_16));
#line 1343 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__ClassConstraints_25));
#line 1343 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_26));
#line 1343 "prog_io_item.m"
        }
#line 1340 "prog_io_item.m"
      }
#line 1345 "prog_io_item.m"
    else
#line 1347 "prog_io_item.m"
      {
#line 1347 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeInfo_47_47 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[9];
#line 1347 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeInfo_48_48 = (MR_Word) &parse_tree__prog_io_item_scalar_common_2[1];
#line 1347 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_27;
#line 1347 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1347 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;

#line 1346 "prog_io_item.m"
        {
#line 1346 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_47_47, parse_tree__prog_io_item__TypeInfo_48_48, parse_tree__prog_io_item__MaybeUnivConstraints_18);
        }
#line 1347 "prog_io_item.m"
        {
#line 1347 "prog_io_item.m"
          parse_tree__prog_io_item__V_36_36 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io_item__TypeInfo_47_47, parse_tree__prog_io_item__TypeInfo_48_48, parse_tree__prog_io_item__MaybeExistConstraints_20);
        }
#line 1346 "prog_io_item.m"
        {
#line 1346 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_35_35, parse_tree__prog_io_item__V_36_36);
        }
#line 1348 "prog_io_item.m"
        {
#line 1348 "prog_io_item.m"
          MR_Word base;
#line 1348 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1348 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeExistClassInstContext_10 = base;
#line 1348 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_27));
#line 1348 "prog_io_item.m"
        }
#line 1347 "prog_io_item.m"
      }
#line 1291 "prog_io_item.m"
  }
#line 1286 "prog_io_item.m"
}

#line 1215 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1(
#line 1215 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1215 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1215 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1215 "prog_io_item.m"
{
#line 1215 "prog_io_item.m"
  {
#line 1215 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1215 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__3_3;

#line 1215 "prog_io_item.m"
    {
#line 1215 "prog_io_item.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__3_3);
    }
#line 1215 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__3_3));
#line 1215 "prog_io_item.m"
  }
#line 1215 "prog_io_item.m"
}

#line 1203 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_16,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_17,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_18,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_21,
#line 1203 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_22,
#line 1203 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_23,
#line 1203 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_24)
#line 1203 "prog_io_item.m"
{
#line 1257 "prog_io_item.m"
  {
#line 1257 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1257 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgModes0_25;

#line 1210 "prog_io_item.m"
    {
#line 1210 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__ArgTerms_14, &parse_tree__prog_io_item__ArgModes0_25);
    }
#line 1257 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1212 "prog_io_item.m"
      {
#line 1212 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_26;
#line 1212 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeConstraints_27;

#line 1211 "prog_io_item.m"
        {
#line 1211 "prog_io_item.m"
          parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_15, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__Attributes0_21, &parse_tree__prog_io_item__Attributes_26, &parse_tree__prog_io_item__MaybeConstraints_27);
        }
#line 1253 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_27)) == (MR_mktag((MR_Integer) 0))))
#line 1254 "prog_io_item.m"
          {
#line 1254 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 0)));

#line 1255 "prog_io_item.m"
            {
#line 1255 "prog_io_item.m"
              MR_Word base;
#line 1255 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1255 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1255 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_42));
#line 1255 "prog_io_item.m"
            }
#line 1254 "prog_io_item.m"
          }
#line 1253 "prog_io_item.m"
        else
#line 1214 "prog_io_item.m"
          {
#line 1214 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_130_130;
#line 1214 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 2)));
#line 1214 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgModes_31;
#line 1214 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_45_45;
#line 1214 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 0)));
#line 1214 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 1)));
#line 1245 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__RetMode0_32;

#line 1215 "prog_io_item.m"
            {
#line 1215 "prog_io_item.m"
              parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1215 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[1]));
#line 1215 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1));
#line 1215 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1215 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 3) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_30));
#line 1215 "prog_io_item.m"
            }
#line 6863 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1215 "prog_io_item.m"
            {
#line 1215 "prog_io_item.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_130_130, parse_tree__prog_io_item__TypeCtorInfo_130_130, parse_tree__prog_io_item__V_45_45, parse_tree__prog_io_item__ArgModes0_25, &parse_tree__prog_io_item__ArgModes_31);
            }
#line 1218 "prog_io_item.m"
            {
#line 1218 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__RetModeTerm_17, &parse_tree__prog_io_item__RetMode0_32);
            }
#line 1245 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1221 "prog_io_item.m"
              {
#line 1221 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeCtorInfo_131_131;
#line 1221 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__RetMode_33;
#line 1221 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__InstVarSet_34;
#line 1221 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgReturnModes_35;
#line 1221 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_47_47;

#line 1220 "prog_io_item.m"
                {
#line 1220 "prog_io_item.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_30, parse_tree__prog_io_item__RetMode0_32, &parse_tree__prog_io_item__RetMode_33);
                }
#line 6895 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_131_131 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1222 "prog_io_item.m"
                {
#line 1222 "prog_io_item.m"
                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_131_131, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__InstVarSet_34);
                }
#line 1223 "prog_io_item.m"
                {
#line 1223 "prog_io_item.m"
                  parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__RetMode_33));
#line 1223 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1223 "prog_io_item.m"
                }
#line 1223 "prog_io_item.m"
                {
#line 1223 "prog_io_item.m"
                  parse_tree__prog_io_item__ArgReturnModes_35 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_130_130, parse_tree__prog_io_item__ArgModes_31, parse_tree__prog_io_item__V_47_47);
                }
#line 1225 "prog_io_item.m"
                {
#line 1225 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io_item__ArgReturnModes_35);
                }
#line 1234 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1230 "prog_io_item.m"
                  {
#line 1230 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ItemModeDecl_36;
#line 1230 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Item_37;
#line 1230 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__MaybeItem0_38;

#line 1228 "prog_io_item.m"
                    {
#line 1228 "prog_io_item.m"
                      parse_tree__prog_io_item__ItemModeDecl_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1228 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_13));
#line 1228 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[16])));
#line 1228 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 2) = ((MR_Box) (parse_tree__prog_io_item__ArgReturnModes_35));
#line 1228 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1228 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 4) = ((MR_Box) (parse_tree__prog_io_item__MaybeDetism_20));
#line 1228 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 5) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_34));
#line 1228 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_22));
#line 1228 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_23));
#line 1228 "prog_io_item.m"
                    }
#line 1231 "prog_io_item.m"
                    {
#line 1231 "prog_io_item.m"
                      parse_tree__prog_io_item__Item_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1231 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_37, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemModeDecl_36));
#line 1231 "prog_io_item.m"
                    }
#line 1232 "prog_io_item.m"
                    {
#line 1232 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeItem0_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_38, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_37));
#line 1232 "prog_io_item.m"
                    }
#line 1233 "prog_io_item.m"
                    {
#line 1233 "prog_io_item.m"
                      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_38, parse_tree__prog_io_item__Attributes_26, parse_tree__prog_io_item__MaybeItem_24);
#line 1233 "prog_io_item.m"
                      return;
                    }
#line 1230 "prog_io_item.m"
                  }
#line 1234 "prog_io_item.m"
                else
#line 1235 "prog_io_item.m"
                  {
#line 1235 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__FullTermStr_39;
#line 1235 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Pieces_40;
#line 1235 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_41;
#line 1235 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_54_54;
#line 1235 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_57_57;
#line 1235 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_60_60;
#line 1235 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_62_62;
#line 1235 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_63_63;
#line 1235 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_72_72;
#line 1235 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_73_73;
#line 1235 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_74_74;
#line 1235 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_75_75;
#line 1235 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_76_76;
#line 1235 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_79_79;

#line 1235 "prog_io_item.m"
                    {
#line 1235 "prog_io_item.m"
                      parse_tree__prog_io_item__FullTermStr_39 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_131_131, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__FullTerm_18);
                    }
#line 1239 "prog_io_item.m"
                    {
#line 1239 "prog_io_item.m"
                      parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1239 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_item__FullTermStr_39));
#line 1239 "prog_io_item.m"
                    }
#line 1239 "prog_io_item.m"
                    {
#line 1239 "prog_io_item.m"
                      parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 1239 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 1239 "prog_io_item.m"
                    }
#line 1238 "prog_io_item.m"
                    {
#line 1238 "prog_io_item.m"
                      parse_tree__prog_io_item__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1238 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 1238 "prog_io_item.m"
                    }
#line 1238 "prog_io_item.m"
                    {
#line 1238 "prog_io_item.m"
                      parse_tree__prog_io_item__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[149])));
#line 1238 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io_item__V_60_60));
#line 1238 "prog_io_item.m"
                    }
#line 1237 "prog_io_item.m"
                    {
#line 1237 "prog_io_item.m"
                      parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[146])));
#line 1237 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_item__V_57_57));
#line 1237 "prog_io_item.m"
                    }
#line 1236 "prog_io_item.m"
                    {
#line 1236 "prog_io_item.m"
                      parse_tree__prog_io_item__Pieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[140])));
#line 1236 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_40, 1) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 1236 "prog_io_item.m"
                    }
#line 1241 "prog_io_item.m"
                    {
#line 1241 "prog_io_item.m"
                      parse_tree__prog_io_item__V_74_74 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_131_131, parse_tree__prog_io_item__FullTerm_18);
                    }
#line 1242 "prog_io_item.m"
                    {
#line 1242 "prog_io_item.m"
                      parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1242 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_40));
#line 1242 "prog_io_item.m"
                    }
#line 1242 "prog_io_item.m"
                    {
#line 1242 "prog_io_item.m"
                      parse_tree__prog_io_item__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 1242 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1242 "prog_io_item.m"
                    }
#line 1241 "prog_io_item.m"
                    {
#line 1241 "prog_io_item.m"
                      parse_tree__prog_io_item__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1241 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_item__V_74_74));
#line 1241 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_item__V_75_75));
#line 1241 "prog_io_item.m"
                    }
#line 1242 "prog_io_item.m"
                    {
#line 1242 "prog_io_item.m"
                      parse_tree__prog_io_item__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_item__V_73_73));
#line 1242 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1242 "prog_io_item.m"
                    }
#line 1240 "prog_io_item.m"
                    {
#line 1240 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1240 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1240 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 2) = ((MR_Box) (parse_tree__prog_io_item__V_72_72));
#line 1240 "prog_io_item.m"
                    }
#line 1243 "prog_io_item.m"
                    {
#line 1243 "prog_io_item.m"
                      parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_41));
#line 1243 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1243 "prog_io_item.m"
                    }
#line 1243 "prog_io_item.m"
                    {
#line 1243 "prog_io_item.m"
                      MR_Word base;
#line 1243 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1243 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1243 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 1243 "prog_io_item.m"
                    }
#line 1235 "prog_io_item.m"
                  }
#line 1221 "prog_io_item.m"
              }
#line 1245 "prog_io_item.m"
            else
#line 1247 "prog_io_item.m"
              {
#line 1247 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_91_91;
#line 1247 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_92_92;
#line 1247 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_93_93;
#line 1247 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_98_98;
#line 1247 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_125;

#line 1249 "prog_io_item.m"
                {
#line 1249 "prog_io_item.m"
                  parse_tree__prog_io_item__V_93_93 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__RetModeTerm_17);
                }
#line 1249 "prog_io_item.m"
                {
#line 1249 "prog_io_item.m"
                  parse_tree__prog_io_item__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1249 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_item__V_93_93));
#line 1249 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[150])));
#line 1249 "prog_io_item.m"
                }
#line 1250 "prog_io_item.m"
                {
#line 1250 "prog_io_item.m"
                  parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1250 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 1250 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1250 "prog_io_item.m"
                }
#line 1248 "prog_io_item.m"
                {
#line 1248 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1248 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1248 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1248 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_125, 2) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1248 "prog_io_item.m"
                }
#line 1251 "prog_io_item.m"
                {
#line 1251 "prog_io_item.m"
                  parse_tree__prog_io_item__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_125));
#line 1251 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1251 "prog_io_item.m"
                }
#line 1251 "prog_io_item.m"
                {
#line 1251 "prog_io_item.m"
                  MR_Word base;
#line 1251 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1251 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1251 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_98_98));
#line 1251 "prog_io_item.m"
                }
#line 1247 "prog_io_item.m"
              }
#line 1214 "prog_io_item.m"
          }
#line 1212 "prog_io_item.m"
      }
#line 1257 "prog_io_item.m"
    else
#line 1259 "prog_io_item.m"
      {
#line 1259 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_135_135 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1259 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__FuncModeStr_43;
#line 1259 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_102_102;
#line 1259 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_105_105;
#line 1259 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_106_106;
#line 1259 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_115_115;
#line 1259 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_116_116;
#line 1259 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_117_117;
#line 1259 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_118_118;
#line 1259 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_119_119;
#line 1259 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_122_122;
#line 1259 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_126;
#line 1259 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_127;

#line 1259 "prog_io_item.m"
        {
#line 1259 "prog_io_item.m"
          parse_tree__prog_io_item__FuncModeStr_43 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_135_135, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__FuncMode_16);
        }
#line 1262 "prog_io_item.m"
        {
#line 1262 "prog_io_item.m"
          parse_tree__prog_io_item__V_106_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_106_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1262 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_106_106, 1) = ((MR_Box) (parse_tree__prog_io_item__FuncModeStr_43));
#line 1262 "prog_io_item.m"
        }
#line 1262 "prog_io_item.m"
        {
#line 1262 "prog_io_item.m"
          parse_tree__prog_io_item__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_105_105, 0) = ((MR_Box) (parse_tree__prog_io_item__V_106_106));
#line 1262 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 1262 "prog_io_item.m"
        }
#line 1261 "prog_io_item.m"
        {
#line 1261 "prog_io_item.m"
          parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[151])));
#line 1261 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (parse_tree__prog_io_item__V_105_105));
#line 1261 "prog_io_item.m"
        }
#line 1260 "prog_io_item.m"
        {
#line 1260 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1260 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[133])));
#line 1260 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_126, 1) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 1260 "prog_io_item.m"
        }
#line 1264 "prog_io_item.m"
        {
#line 1264 "prog_io_item.m"
          parse_tree__prog_io_item__V_117_117 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_135_135, parse_tree__prog_io_item__FuncMode_16);
        }
#line 1264 "prog_io_item.m"
        {
#line 1264 "prog_io_item.m"
          parse_tree__prog_io_item__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_119_119, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_126));
#line 1264 "prog_io_item.m"
        }
#line 1264 "prog_io_item.m"
        {
#line 1264 "prog_io_item.m"
          parse_tree__prog_io_item__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_118_118, 0) = ((MR_Box) (parse_tree__prog_io_item__V_119_119));
#line 1264 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1264 "prog_io_item.m"
        }
#line 1264 "prog_io_item.m"
        {
#line 1264 "prog_io_item.m"
          parse_tree__prog_io_item__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_item__V_117_117));
#line 1264 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_116_116, 1) = ((MR_Box) (parse_tree__prog_io_item__V_118_118));
#line 1264 "prog_io_item.m"
        }
#line 1264 "prog_io_item.m"
        {
#line 1264 "prog_io_item.m"
          parse_tree__prog_io_item__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io_item__V_116_116));
#line 1264 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1264 "prog_io_item.m"
        }
#line 1263 "prog_io_item.m"
        {
#line 1263 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1263 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1263 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1263 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_127, 2) = ((MR_Box) (parse_tree__prog_io_item__V_115_115));
#line 1263 "prog_io_item.m"
        }
#line 1265 "prog_io_item.m"
        {
#line 1265 "prog_io_item.m"
          parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_127));
#line 1265 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1265 "prog_io_item.m"
        }
#line 1265 "prog_io_item.m"
        {
#line 1265 "prog_io_item.m"
          MR_Word base;
#line 1265 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_24 = base;
#line 1265 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 1265 "prog_io_item.m"
        }
#line 1259 "prog_io_item.m"
      }
#line 1257 "prog_io_item.m"
  }
#line 1203 "prog_io_item.m"
}

#line 1160 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1(
#line 1160 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1160 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1160 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1160 "prog_io_item.m"
{
#line 1160 "prog_io_item.m"
  {
#line 1160 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1160 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__3_3;

#line 1160 "prog_io_item.m"
    {
#line 1160 "prog_io_item.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__3_3);
    }
#line 1160 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__3_3));
#line 1160 "prog_io_item.m"
  }
#line 1160 "prog_io_item.m"
}

#line 1149 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_12,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_13,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_15,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_16,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 1149 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 1149 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 1149 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22)
#line 1149 "prog_io_item.m"
{
#line 1194 "prog_io_item.m"
  {
#line 1194 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1194 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgModes0_23;

#line 1155 "prog_io_item.m"
    {
#line 1155 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__ArgTerms_13, &parse_tree__prog_io_item__ArgModes0_23);
    }
#line 1194 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1157 "prog_io_item.m"
      {
#line 1157 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_24;
#line 1157 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeConstraints_25;

#line 1156 "prog_io_item.m"
        {
#line 1156 "prog_io_item.m"
          parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_14, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__Attributes0_19, &parse_tree__prog_io_item__Attributes_24, &parse_tree__prog_io_item__MaybeConstraints_25);
        }
#line 1190 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_25)) == (MR_mktag((MR_Integer) 0))))
#line 1191 "prog_io_item.m"
          {
#line 1191 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 0)));

#line 1192 "prog_io_item.m"
            {
#line 1192 "prog_io_item.m"
              MR_Word base;
#line 1192 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 1192 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_39));
#line 1192 "prog_io_item.m"
            }
#line 1191 "prog_io_item.m"
          }
#line 1190 "prog_io_item.m"
        else
#line 1159 "prog_io_item.m"
          {
#line 1159 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_104_104;
#line 1159 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_105_105;
#line 1159 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 2)));
#line 1159 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgModes_29;
#line 1159 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstVarSet_30;
#line 1159 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 1159 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 0)));
#line 1159 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 1)));

#line 1160 "prog_io_item.m"
            {
#line 1160 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1160 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[1]));
#line 1160 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1));
#line 1160 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1160 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 3) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_28));
#line 1160 "prog_io_item.m"
            }
#line 7540 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1160 "prog_io_item.m"
            {
#line 1160 "prog_io_item.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_104_104, parse_tree__prog_io_item__TypeCtorInfo_104_104, parse_tree__prog_io_item__V_41_41, parse_tree__prog_io_item__ArgModes0_23, &parse_tree__prog_io_item__ArgModes_29);
            }
#line 7547 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_105_105 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1162 "prog_io_item.m"
            {
#line 1162 "prog_io_item.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_16, &parse_tree__prog_io_item__InstVarSet_30);
            }
#line 1163 "prog_io_item.m"
            {
#line 1163 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io_item__ArgModes_29);
            }
#line 1179 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1172 "prog_io_item.m"
              {
#line 1172 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybePredOrFunc_31;
#line 1172 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemModeDecl_33;
#line 1172 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_34;
#line 1172 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeItem0_35;

#line 1167 "prog_io_item.m"
                if ((parse_tree__prog_io_item__WithInst_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1165 "prog_io_item.m"
                  {
#line 1166 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybePredOrFunc_31 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[15]);
#line 1165 "prog_io_item.m"
                  }
#line 1167 "prog_io_item.m"
                else
#line 1171 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybePredOrFunc_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1173 "prog_io_item.m"
                {
#line 1173 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemModeDecl_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_12));
#line 1173 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 1) = ((MR_Box) (parse_tree__prog_io_item__MaybePredOrFunc_31));
#line 1173 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 2) = ((MR_Box) (parse_tree__prog_io_item__ArgModes_29));
#line 1173 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 3) = ((MR_Box) (parse_tree__prog_io_item__WithInst_17));
#line 1173 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 4) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_18));
#line 1173 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 5) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_30));
#line 1173 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_20));
#line 1173 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_21));
#line 1173 "prog_io_item.m"
                }
#line 1176 "prog_io_item.m"
                {
#line 1176 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1176 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_34, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemModeDecl_33));
#line 1176 "prog_io_item.m"
                }
#line 1177 "prog_io_item.m"
                {
#line 1177 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybeItem0_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_35, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_34));
#line 1177 "prog_io_item.m"
                }
#line 1178 "prog_io_item.m"
                {
#line 1178 "prog_io_item.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_35, parse_tree__prog_io_item__Attributes_24, parse_tree__prog_io_item__MaybeItem_22);
#line 1178 "prog_io_item.m"
                  return;
                }
#line 1172 "prog_io_item.m"
              }
#line 1179 "prog_io_item.m"
            else
#line 1180 "prog_io_item.m"
              {
#line 1180 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredModeTermStr_36;
#line 1180 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_37;
#line 1180 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_38;
#line 1180 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_45_45;
#line 1180 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_48_48;
#line 1180 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_51_51;
#line 1180 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_53_53;
#line 1180 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_54_54;
#line 1180 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_63_63;
#line 1180 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_64_64;
#line 1180 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_65_65;
#line 1180 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_66_66;
#line 1180 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_67_67;
#line 1180 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_70_70;

#line 1180 "prog_io_item.m"
                {
#line 1180 "prog_io_item.m"
                  parse_tree__prog_io_item__PredModeTermStr_36 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__PredModeTerm_15);
                }
#line 1184 "prog_io_item.m"
                {
#line 1184 "prog_io_item.m"
                  parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1184 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_36));
#line 1184 "prog_io_item.m"
                }
#line 1184 "prog_io_item.m"
                {
#line 1184 "prog_io_item.m"
                  parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 1184 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 1184 "prog_io_item.m"
                }
#line 1183 "prog_io_item.m"
                {
#line 1183 "prog_io_item.m"
                  parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1183 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 1183 "prog_io_item.m"
                }
#line 1183 "prog_io_item.m"
                {
#line 1183 "prog_io_item.m"
                  parse_tree__prog_io_item__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[147])));
#line 1183 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 1) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 1183 "prog_io_item.m"
                }
#line 1182 "prog_io_item.m"
                {
#line 1182 "prog_io_item.m"
                  parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[146])));
#line 1182 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_item__V_48_48));
#line 1182 "prog_io_item.m"
                }
#line 1181 "prog_io_item.m"
                {
#line 1181 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[140])));
#line 1181 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_37, 1) = ((MR_Box) (parse_tree__prog_io_item__V_45_45));
#line 1181 "prog_io_item.m"
                }
#line 1186 "prog_io_item.m"
                {
#line 1186 "prog_io_item.m"
                  parse_tree__prog_io_item__V_65_65 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_105_105, parse_tree__prog_io_item__PredModeTerm_15);
                }
#line 1187 "prog_io_item.m"
                {
#line 1187 "prog_io_item.m"
                  parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_37));
#line 1187 "prog_io_item.m"
                }
#line 1187 "prog_io_item.m"
                {
#line 1187 "prog_io_item.m"
                  parse_tree__prog_io_item__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 1187 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1187 "prog_io_item.m"
                }
#line 1186 "prog_io_item.m"
                {
#line 1186 "prog_io_item.m"
                  parse_tree__prog_io_item__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1186 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_item__V_65_65));
#line 1186 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_item__V_66_66));
#line 1186 "prog_io_item.m"
                }
#line 1187 "prog_io_item.m"
                {
#line 1187 "prog_io_item.m"
                  parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__V_64_64));
#line 1187 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1187 "prog_io_item.m"
                }
#line 1185 "prog_io_item.m"
                {
#line 1185 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1185 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1185 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1185 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 1185 "prog_io_item.m"
                }
#line 1188 "prog_io_item.m"
                {
#line 1188 "prog_io_item.m"
                  parse_tree__prog_io_item__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_38));
#line 1188 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1188 "prog_io_item.m"
                }
#line 1188 "prog_io_item.m"
                {
#line 1188 "prog_io_item.m"
                  MR_Word base;
#line 1188 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 1188 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 1188 "prog_io_item.m"
                }
#line 1180 "prog_io_item.m"
              }
#line 1159 "prog_io_item.m"
          }
#line 1157 "prog_io_item.m"
      }
#line 1194 "prog_io_item.m"
    else
#line 1195 "prog_io_item.m"
      {
#line 1195 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_108_108 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1195 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_74_74;
#line 1195 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_77_77;
#line 1195 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_80_80;
#line 1195 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_81_81;
#line 1195 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_90_90;
#line 1195 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_91_91;
#line 1195 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_92_92;
#line 1195 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_93_93;
#line 1195 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_94_94;
#line 1195 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_97_97;
#line 1195 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__PredModeTermStr_99;
#line 1195 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_100;
#line 1195 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_101;

#line 1195 "prog_io_item.m"
        {
#line 1195 "prog_io_item.m"
          parse_tree__prog_io_item__PredModeTermStr_99 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_108_108, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__PredModeTerm_15);
        }
#line 1197 "prog_io_item.m"
        {
#line 1197 "prog_io_item.m"
          parse_tree__prog_io_item__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1197 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_81_81, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_99));
#line 1197 "prog_io_item.m"
        }
#line 1197 "prog_io_item.m"
        {
#line 1197 "prog_io_item.m"
          parse_tree__prog_io_item__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_item__V_81_81));
#line 1197 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 1197 "prog_io_item.m"
        }
#line 1197 "prog_io_item.m"
        {
#line 1197 "prog_io_item.m"
          parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[135])));
#line 1197 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 1197 "prog_io_item.m"
        }
#line 1196 "prog_io_item.m"
        {
#line 1196 "prog_io_item.m"
          parse_tree__prog_io_item__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[148])));
#line 1196 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 1196 "prog_io_item.m"
        }
#line 1196 "prog_io_item.m"
        {
#line 1196 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[130])));
#line 1196 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_100, 1) = ((MR_Box) (parse_tree__prog_io_item__V_74_74));
#line 1196 "prog_io_item.m"
        }
#line 1199 "prog_io_item.m"
        {
#line 1199 "prog_io_item.m"
          parse_tree__prog_io_item__V_92_92 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_108_108, parse_tree__prog_io_item__PredModeTerm_15);
        }
#line 1199 "prog_io_item.m"
        {
#line 1199 "prog_io_item.m"
          parse_tree__prog_io_item__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1199 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_100));
#line 1199 "prog_io_item.m"
        }
#line 1199 "prog_io_item.m"
        {
#line 1199 "prog_io_item.m"
          parse_tree__prog_io_item__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io_item__V_94_94));
#line 1199 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1199 "prog_io_item.m"
        }
#line 1199 "prog_io_item.m"
        {
#line 1199 "prog_io_item.m"
          parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1199 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 1199 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (parse_tree__prog_io_item__V_93_93));
#line 1199 "prog_io_item.m"
        }
#line 1199 "prog_io_item.m"
        {
#line 1199 "prog_io_item.m"
          parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1199 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1199 "prog_io_item.m"
        }
#line 1198 "prog_io_item.m"
        {
#line 1198 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1198 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1198 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1198 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_101, 2) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 1198 "prog_io_item.m"
        }
#line 1200 "prog_io_item.m"
        {
#line 1200 "prog_io_item.m"
          parse_tree__prog_io_item__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1200 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_101));
#line 1200 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1200 "prog_io_item.m"
        }
#line 1200 "prog_io_item.m"
        {
#line 1200 "prog_io_item.m"
          MR_Word base;
#line 1200 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1200 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 1200 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_97_97));
#line 1200 "prog_io_item.m"
        }
#line 1195 "prog_io_item.m"
      }
#line 1194 "prog_io_item.m"
  }
#line 1149 "prog_io_item.m"
}

#line 1109 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(
#line 1109 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 1109 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1109 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 1109 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 1109 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_14,
#line 1109 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_15,
#line 1109 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_16,
#line 1109 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_17,
#line 1109 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_18)
#line 1109 "prog_io_item.m"
{
#line 1134 "prog_io_item.m"
  {
#line 1134 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1134 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeSugaredFuncTerm_19;
#line 1134 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnTypeTerm_20;
#line 1116 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_28_28;
#line 1116 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_29_29;
#line 1116 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 1116 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;
#line 1116 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 1117 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;

#line 1116 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1116 "prog_io_item.m"
      {
#line 1117 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_12)) == (MR_mktag((MR_Integer) 0)));
#line 1117 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1117 "prog_io_item.m"
          {
#line 1117 "prog_io_item.m"
            parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 0)));
#line 1117 "prog_io_item.m"
            parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 1)));
#line 1117 "prog_io_item.m"
            parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 2)));
#line 1117 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 1117 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1117 "prog_io_item.m"
              {
#line 1117 "prog_io_item.m"
                parse_tree__prog_io_item__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_28_28, (MR_Integer) 0)));
#line 1117 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_29_29, (MR_String) "=") == 0);
#line 1116 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1116 "prog_io_item.m"
                  {
#line 1118 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 1118 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1118 "prog_io_item.m"
                      {
#line 1118 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeSugaredFuncTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 0)));
#line 1118 "prog_io_item.m"
                        parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_30_30, (MR_Integer) 1)));
#line 1118 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1118 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1118 "prog_io_item.m"
                          {
#line 1118 "prog_io_item.m"
                            parse_tree__prog_io_item__ReturnTypeTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 1118 "prog_io_item.m"
                            parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, (MR_Integer) 1)));
#line 1118 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1118 "prog_io_item.m"
                          }
#line 1118 "prog_io_item.m"
                      }
#line 1116 "prog_io_item.m"
                  }
#line 1117 "prog_io_item.m"
              }
#line 1117 "prog_io_item.m"
          }
#line 1116 "prog_io_item.m"
      }
#line 1134 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1120 "prog_io_item.m"
      {
#line 1120 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncTerm_22;
#line 1120 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_24;

#line 1120 "prog_io_item.m"
        {
#line 1120 "prog_io_item.m"
          parse_tree__prog_io_item__FuncTerm_22 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__MaybeSugaredFuncTerm_19);
        }
#line 1123 "prog_io_item.m"
        {
#line 1123 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_22, parse_tree__prog_io_item__VarSet_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[96]), &parse_tree__prog_io_item__MaybeFunctorArgs_24);
        }
#line 1128 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_24)) == (MR_mktag((MR_Integer) 0))))
#line 1126 "prog_io_item.m"
          {
#line 1126 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 0)));

#line 1127 "prog_io_item.m"
            {
#line 1127 "prog_io_item.m"
              MR_Word base;
#line 1127 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 1127 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_25));
#line 1127 "prog_io_item.m"
            }
#line 1126 "prog_io_item.m"
          }
#line 1128 "prog_io_item.m"
        else
#line 1129 "prog_io_item.m"
          {
#line 1129 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 0)));
#line 1129 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_24, (MR_Integer) 1)));

#line 1130 "prog_io_item.m"
            {
#line 1130 "prog_io_item.m"
              parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(parse_tree__prog_io_item__Functor_26, parse_tree__prog_io_item__ArgTerms_27, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_22, parse_tree__prog_io_item__ReturnTypeTerm_20, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__MaybeDet_15, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_16, parse_tree__prog_io_item__SeqNum_17, parse_tree__prog_io_item__MaybeItem_18);
#line 1130 "prog_io_item.m"
              return;
            }
#line 1129 "prog_io_item.m"
          }
#line 1120 "prog_io_item.m"
      }
#line 1134 "prog_io_item.m"
    else
#line 1135 "prog_io_item.m"
      {
#line 1135 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_58;

#line 1136 "prog_io_item.m"
        {
#line 1136 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[97]), &parse_tree__prog_io_item__MaybeFunctorArgs_58);
        }
#line 1141 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_58)) == (MR_mktag((MR_Integer) 0))))
#line 1139 "prog_io_item.m"
          {
#line 1139 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 0)));

#line 1140 "prog_io_item.m"
            {
#line 1140 "prog_io_item.m"
              MR_Word base;
#line 1140 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1140 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_18 = base;
#line 1140 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_51));
#line 1140 "prog_io_item.m"
            }
#line 1139 "prog_io_item.m"
          }
#line 1141 "prog_io_item.m"
        else
#line 1142 "prog_io_item.m"
          {
#line 1142 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 0)));
#line 1142 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_58, (MR_Integer) 1)));

#line 1143 "prog_io_item.m"
            {
#line 1143 "prog_io_item.m"
              parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(parse_tree__prog_io_item__Functor_52, parse_tree__prog_io_item__ArgTerms_53, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__WithInst_14, parse_tree__prog_io_item__MaybeDet_15, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_16, parse_tree__prog_io_item__SeqNum_17, parse_tree__prog_io_item__MaybeItem_18);
#line 1143 "prog_io_item.m"
              return;
            }
#line 1142 "prog_io_item.m"
          }
#line 1135 "prog_io_item.m"
      }
#line 1134 "prog_io_item.m"
  }
#line 1109 "prog_io_item.m"
}

#line 1077 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_7_p_0(
#line 1077 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1077 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1077 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 1077 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_11,
#line 1077 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 1077 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 1077 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 1077 "prog_io_item.m"
{
#line 1081 "prog_io_item.m"
  {
#line 1081 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1081 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTerm_15;
#line 1081 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_16;
#line 1081 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithInst_18;
#line 1081 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BaseTerm_19;
#line 1517 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTermPrime_58;
#line 1517 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InstTerm_59;
#line 1504 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_64_64;
#line 1504 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_65_65;
#line 1504 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_66_66;
#line 1504 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_67_67;
#line 1504 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_68_68;
#line 1504 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_60_60;
#line 1103 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeDetism_20;
#line 1103 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithInst_21;

#line 1082 "prog_io_item.m"
    {
#line 1082 "prog_io_item.m"
      parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Term_10, &parse_tree__prog_io_item__BeforeDetismTerm_15, &parse_tree__prog_io_item__MaybeMaybeDetism_16);
    }
#line 1504 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__BeforeDetismTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 1504 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1504 "prog_io_item.m"
      {
#line 1504 "prog_io_item.m"
        parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 0)));
#line 1504 "prog_io_item.m"
        parse_tree__prog_io_item__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 1)));
#line 1504 "prog_io_item.m"
        parse_tree__prog_io_item__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 2)));
#line 1504 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 1504 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1504 "prog_io_item.m"
          {
#line 1504 "prog_io_item.m"
            parse_tree__prog_io_item__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 1504 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_65_65, (MR_String) "with_inst") == 0);
#line 1504 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1504 "prog_io_item.m"
              {
#line 1505 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_66_66)) == (MR_mktag((MR_Integer) 1)));
#line 1505 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1505 "prog_io_item.m"
                  {
#line 1505 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeWithInstTermPrime_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, (MR_Integer) 0)));
#line 1505 "prog_io_item.m"
                    parse_tree__prog_io_item__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, (MR_Integer) 1)));
#line 1505 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 1505 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1505 "prog_io_item.m"
                      {
#line 1505 "prog_io_item.m"
                        parse_tree__prog_io_item__InstTerm_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, (MR_Integer) 0)));
#line 1505 "prog_io_item.m"
                        parse_tree__prog_io_item__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, (MR_Integer) 1)));
#line 1505 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1505 "prog_io_item.m"
                      }
#line 1505 "prog_io_item.m"
                  }
#line 1504 "prog_io_item.m"
              }
#line 1504 "prog_io_item.m"
          }
#line 1504 "prog_io_item.m"
      }
#line 1517 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1507 "prog_io_item.m"
      {
#line 1510 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Inst_61;

#line 1507 "prog_io_item.m"
        parse_tree__prog_io_item__BaseTerm_19 = parse_tree__prog_io_item__BeforeWithInstTermPrime_58;
#line 1508 "prog_io_item.m"
        {
#line 1508 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__InstTerm_59, &parse_tree__prog_io_item__Inst_61);
        }
#line 1510 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1509 "prog_io_item.m"
          {
#line 1509 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_70_70;

#line 1509 "prog_io_item.m"
            {
#line 1509 "prog_io_item.m"
              parse_tree__prog_io_item__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_item__Inst_61));
#line 1509 "prog_io_item.m"
            }
#line 1509 "prog_io_item.m"
            {
#line 1509 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_18, 0) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 1509 "prog_io_item.m"
            }
#line 1509 "prog_io_item.m"
          }
#line 1510 "prog_io_item.m"
        else
#line 1512 "prog_io_item.m"
          {
#line 1512 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_63;
#line 1512 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_84_84;
#line 1512 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_85_85;
#line 1512 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_86_86;
#line 1512 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_91_91;

#line 1514 "prog_io_item.m"
            {
#line 1514 "prog_io_item.m"
              parse_tree__prog_io_item__V_86_86 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__InstTerm_59);
            }
#line 1514 "prog_io_item.m"
            {
#line 1514 "prog_io_item.m"
              parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1514 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__V_86_86));
#line 1514 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[145])));
#line 1514 "prog_io_item.m"
            }
#line 1514 "prog_io_item.m"
            {
#line 1514 "prog_io_item.m"
              parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1514 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 1514 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1514 "prog_io_item.m"
            }
#line 1513 "prog_io_item.m"
            {
#line 1513 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1513 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1513 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1513 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 2) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 1513 "prog_io_item.m"
            }
#line 1515 "prog_io_item.m"
            {
#line 1515 "prog_io_item.m"
              parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_63));
#line 1515 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1515 "prog_io_item.m"
            }
#line 1515 "prog_io_item.m"
            {
#line 1515 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1515 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeWithInst_18, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1515 "prog_io_item.m"
            }
#line 1512 "prog_io_item.m"
          }
#line 1507 "prog_io_item.m"
      }
#line 1517 "prog_io_item.m"
    else
#line 1518 "prog_io_item.m"
      {
#line 1518 "prog_io_item.m"
        parse_tree__prog_io_item__BaseTerm_19 = parse_tree__prog_io_item__BeforeDetismTerm_15;
#line 1519 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[14]);
#line 1518 "prog_io_item.m"
      }
#line 1087 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_16)) == (MR_mktag((MR_Integer) 1)));
#line 1087 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1087 "prog_io_item.m"
      {
#line 1087 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeDetism_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_16, (MR_Integer) 0)));
#line 1088 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_18)) == (MR_mktag((MR_Integer) 1)));
#line 1088 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1088 "prog_io_item.m"
          parse_tree__prog_io_item__WithInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_18, (MR_Integer) 0)));
#line 1087 "prog_io_item.m"
      }
#line 1103 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1099 "prog_io_item.m"
      {
#line 1091 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 1092 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;

#line 1091 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_20)) == (MR_mktag((MR_Integer) 1)));
#line 1091 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1091 "prog_io_item.m"
          {
#line 1091 "prog_io_item.m"
            parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_20, (MR_Integer) 0)));
#line 1092 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_21)) == (MR_mktag((MR_Integer) 1)));
#line 1092 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1092 "prog_io_item.m"
              parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_21, (MR_Integer) 0)));
#line 1091 "prog_io_item.m"
          }
#line 1099 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1095 "prog_io_item.m"
          {
#line 1095 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_25;
#line 1095 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1095 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 1095 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_42_42;
#line 1095 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_47_47;

#line 1097 "prog_io_item.m"
            {
#line 1097 "prog_io_item.m"
              parse_tree__prog_io_item__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_10);
            }
#line 1097 "prog_io_item.m"
            {
#line 1097 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1097 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 1097 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[122])));
#line 1097 "prog_io_item.m"
            }
#line 1097 "prog_io_item.m"
            {
#line 1097 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1097 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1097 "prog_io_item.m"
            }
#line 1096 "prog_io_item.m"
            {
#line 1096 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1096 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1096 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1096 "prog_io_item.m"
            }
#line 1098 "prog_io_item.m"
            {
#line 1098 "prog_io_item.m"
              parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_25));
#line 1098 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1098 "prog_io_item.m"
            }
#line 1098 "prog_io_item.m"
            {
#line 1098 "prog_io_item.m"
              MR_Word base;
#line 1098 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1098 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 1098 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 1098 "prog_io_item.m"
            }
#line 1095 "prog_io_item.m"
          }
#line 1099 "prog_io_item.m"
        else
#line 1100 "prog_io_item.m"
          {
#line 1100 "prog_io_item.m"
            parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__BaseTerm_19, parse_tree__prog_io_item__Attributes_11, parse_tree__prog_io_item__WithInst_21, parse_tree__prog_io_item__MaybeDetism_20, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeItem_14);
#line 1100 "prog_io_item.m"
            return;
          }
#line 1099 "prog_io_item.m"
      }
#line 1103 "prog_io_item.m"
    else
#line 1105 "prog_io_item.m"
      {
#line 1105 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_26;
#line 1105 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_49_49;
#line 1105 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_50_50;

#line 1104 "prog_io_item.m"
        {
#line 1104 "prog_io_item.m"
          parse_tree__prog_io_item__V_49_49 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_16);
        }
#line 1105 "prog_io_item.m"
        {
#line 1105 "prog_io_item.m"
          parse_tree__prog_io_item__V_50_50 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_18);
        }
#line 1105 "prog_io_item.m"
        {
#line 1105 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_49_49, parse_tree__prog_io_item__V_50_50);
        }
#line 1106 "prog_io_item.m"
        {
#line 1106 "prog_io_item.m"
          MR_Word base;
#line 1106 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1106 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 1106 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_26));
#line 1106 "prog_io_item.m"
        }
#line 1105 "prog_io_item.m"
      }
#line 1081 "prog_io_item.m"
  }
#line 1077 "prog_io_item.m"
}

#line 1068 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__wrap_nth_2_p_0(
#line 1068 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__N_3,
#line 1068 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_2)
#line 1068 "prog_io_item.m"
{
#line 1070 "prog_io_item.m"
  {
#line 1070 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1070 "prog_io_item.m"
    {
#line 1070 "prog_io_item.m"
      MR_Word base;
#line 1070 "prog_io_item.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "prog_io_item.m"
      *parse_tree__prog_io_item__HeadVar__2_2 = base;
#line 1070 "prog_io_item.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1070 "prog_io_item.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_item__N_3));
#line 1070 "prog_io_item.m"
    }
#line 1070 "prog_io_item.m"
  }
#line 1068 "prog_io_item.m"
}

#line 1050 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0(
#line 1050 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__ArgNum_1,
#line 1050 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1050 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3,
#line 1050 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__4_4)
#line 1050 "prog_io_item.m"
{
#line 1053 "prog_io_item.m"
  {
#line 1053 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1053 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1053 "prog_io_item.m"
      {
#line 1053 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1053 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1053 "prog_io_item.m"
      }
#line 1053 "prog_io_item.m"
    else
#line 1055 "prog_io_item.m"
      {
#line 1055 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 1055 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 1055 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__WithModeArgNums0_11;
#line 1055 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__WithoutModeArgNums0_12;
#line 1055 "prog_io_item.m"
        MR_Integer parse_tree__prog_io_item__V_16_16 = (parse_tree__prog_io_item__ArgNum_1 + (MR_Integer) 1);

#line 1056 "prog_io_item.m"
        {
#line 1056 "prog_io_item.m"
          parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0(parse_tree__prog_io_item__V_16_16, parse_tree__prog_io_item__Tail_8, &parse_tree__prog_io_item__WithModeArgNums0_11, &parse_tree__prog_io_item__WithoutModeArgNums0_12);
        }
#line 1062 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__Head_7)) == (MR_mktag((MR_Integer) 1))))
#line 1063 "prog_io_item.m"
          {
#line 1064 "prog_io_item.m"
            {
#line 1064 "prog_io_item.m"
              MR_Word base;
#line 1064 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "prog_io_item.m"
              *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 1064 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgNum_1));
#line 1064 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__WithModeArgNums0_11));
#line 1064 "prog_io_item.m"
            }
#line 1065 "prog_io_item.m"
            *parse_tree__prog_io_item__HeadVar__4_4 = parse_tree__prog_io_item__WithoutModeArgNums0_12;
#line 1063 "prog_io_item.m"
          }
#line 1062 "prog_io_item.m"
        else
#line 1059 "prog_io_item.m"
          {
#line 1060 "prog_io_item.m"
            *parse_tree__prog_io_item__HeadVar__3_3 = parse_tree__prog_io_item__WithModeArgNums0_11;
#line 1061 "prog_io_item.m"
            {
#line 1061 "prog_io_item.m"
              MR_Word base;
#line 1061 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "prog_io_item.m"
              *parse_tree__prog_io_item__HeadVar__4_4 = base;
#line 1061 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgNum_1));
#line 1061 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__WithoutModeArgNums0_12));
#line 1061 "prog_io_item.m"
            }
#line 1059 "prog_io_item.m"
          }
#line 1055 "prog_io_item.m"
      }
#line 1053 "prog_io_item.m"
  }
#line 1050 "prog_io_item.m"
}

#line 1037 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0_1(
#line 1037 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1037 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1037 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1037 "prog_io_item.m"
{
#line 1037 "prog_io_item.m"
  {
#line 1037 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1037 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_2;

#line 1037 "prog_io_item.m"
    {
#line 1037 "prog_io_item.m"
      parse_tree__prog_io_item__wrap_nth_2_p_0(((MR_Integer) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_2);
    }
#line 1037 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_2));
#line 1037 "prog_io_item.m"
  }
#line 1037 "prog_io_item.m"
}

#line 1006 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(
#line 1006 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypesAndModes_4,
#line 1006 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ErrorTerm_5,
#line 1006 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeSpec_6)
#line 1006 "prog_io_item.m"
{
#line 1009 "prog_io_item.m"
  {
#line 1009 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1009 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithModeArgNums_7;
#line 1009 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithoutModeArgNums_8;

#line 1010 "prog_io_item.m"
    {
#line 1010 "prog_io_item.m"
      parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0((MR_Integer) 1, parse_tree__prog_io_item__TypesAndModes_4, &parse_tree__prog_io_item__WithModeArgNums_7, &parse_tree__prog_io_item__WithoutModeArgNums_8);
    }
#line 1017 "prog_io_item.m"
    if ((parse_tree__prog_io_item__WithModeArgNums_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1017 "prog_io_item.m"
      if ((parse_tree__prog_io_item__WithoutModeArgNums_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1013 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1017 "prog_io_item.m"
      else
#line 1021 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1017 "prog_io_item.m"
    else
#line 1017 "prog_io_item.m"
    if ((parse_tree__prog_io_item__WithoutModeArgNums_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1026 "prog_io_item.m"
      *parse_tree__prog_io_item__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1017 "prog_io_item.m"
    else
#line 1028 "prog_io_item.m"
      {
#line 1028 "prog_io_item.m"
        MR_Integer parse_tree__prog_io_item__FirstWithout_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithoutModeArgNums_8, (MR_Integer) 0)));
#line 1028 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__RestWithout_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithoutModeArgNums_8, (MR_Integer) 1)));
#line 1028 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__IdPieces_17;
#line 1028 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_22;
#line 1028 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_23;
#line 1028 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_47_47;
#line 1028 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_51_51;
#line 1028 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_52_52;
#line 1028 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_53_53;
#line 1028 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_54_54;
#line 1028 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_55_55;

#line 1035 "prog_io_item.m"
        if ((parse_tree__prog_io_item__RestWithout_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "prog_io_item.m"
          {
#line 1032 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_37_37;
#line 1032 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;

#line 1034 "prog_io_item.m"
            {
#line 1034 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1034 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io_item__FirstWithout_15));
#line 1034 "prog_io_item.m"
            }
#line 1034 "prog_io_item.m"
            {
#line 1034 "prog_io_item.m"
              parse_tree__prog_io_item__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1034 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 1034 "prog_io_item.m"
            }
#line 1033 "prog_io_item.m"
            {
#line 1033 "prog_io_item.m"
              parse_tree__prog_io_item__IdPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1033 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__IdPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[142])));
#line 1033 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__IdPieces_17, 1) = ((MR_Box) (parse_tree__prog_io_item__V_37_37));
#line 1033 "prog_io_item.m"
            }
#line 1032 "prog_io_item.m"
          }
#line 1035 "prog_io_item.m"
        else
#line 1036 "prog_io_item.m"
          {
#line 1036 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1036 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__WithoutArgNumPieces_20;
#line 1036 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__WithoutArgNumsPieces_21;
#line 1036 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_26_26;

#line 1037 "prog_io_item.m"
            {
#line 1037 "prog_io_item.m"
              mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__prog_io_item__TypeCtorInfo_61_61, (MR_Word) &parse_tree__prog_io_item_scalar_common_2[4], parse_tree__prog_io_item__WithoutModeArgNums_8, &parse_tree__prog_io_item__WithoutArgNumPieces_20);
            }
#line 1038 "prog_io_item.m"
            {
#line 1038 "prog_io_item.m"
              parse_tree__prog_io_item__WithoutArgNumsPieces_21 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__prog_io_item__WithoutArgNumPieces_20);
            }
#line 1040 "prog_io_item.m"
            {
#line 1040 "prog_io_item.m"
              parse_tree__prog_io_item__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[143])));
#line 1040 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io_item__WithoutArgNumsPieces_21));
#line 1040 "prog_io_item.m"
            }
#line 1041 "prog_io_item.m"
            {
#line 1041 "prog_io_item.m"
              parse_tree__prog_io_item__IdPieces_17 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_61_61, parse_tree__prog_io_item__V_26_26, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15]));
            }
#line 1036 "prog_io_item.m"
          }
#line 1044 "prog_io_item.m"
        {
#line 1044 "prog_io_item.m"
          parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1044 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_item__IdPieces_17));
#line 1044 "prog_io_item.m"
        }
#line 1043 "prog_io_item.m"
        {
#line 1043 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[144])));
#line 1043 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_22, 1) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 1043 "prog_io_item.m"
        }
#line 1046 "prog_io_item.m"
        {
#line 1046 "prog_io_item.m"
          parse_tree__prog_io_item__V_53_53 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ErrorTerm_5);
        }
#line 1046 "prog_io_item.m"
        {
#line 1046 "prog_io_item.m"
          parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_22));
#line 1046 "prog_io_item.m"
        }
#line 1046 "prog_io_item.m"
        {
#line 1046 "prog_io_item.m"
          parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 1046 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1046 "prog_io_item.m"
        }
#line 1046 "prog_io_item.m"
        {
#line 1046 "prog_io_item.m"
          parse_tree__prog_io_item__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 1046 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 1046 "prog_io_item.m"
        }
#line 1046 "prog_io_item.m"
        {
#line 1046 "prog_io_item.m"
          parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_item__V_52_52));
#line 1046 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1046 "prog_io_item.m"
        }
#line 1045 "prog_io_item.m"
        {
#line 1045 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1045 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1045 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1045 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 1045 "prog_io_item.m"
        }
#line 1047 "prog_io_item.m"
        {
#line 1047 "prog_io_item.m"
          MR_Word base;
#line 1047 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeSpec_6 = base;
#line 1047 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_23));
#line 1047 "prog_io_item.m"
        }
#line 1028 "prog_io_item.m"
      }
#line 1009 "prog_io_item.m"
  }
#line 1006 "prog_io_item.m"
}

#line 985 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_3_p_0(
#line 985 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_4,
#line 985 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 985 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeTypeAndMode_6)
#line 985 "prog_io_item.m"
{
#line 994 "prog_io_item.m"
  {
#line 994 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 994 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeTerm_7;
#line 994 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModeTerm_8;
#line 989 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_13_13;
#line 989 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_14_14;
#line 989 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_15_15;
#line 989 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 989 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 989 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___Context_9;

#line 989 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 989 "prog_io_item.m"
      {
#line 989 "prog_io_item.m"
        parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 0)));
#line 989 "prog_io_item.m"
        parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 1)));
#line 989 "prog_io_item.m"
        parse_tree__prog_io_item___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 2)));
#line 989 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 989 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 989 "prog_io_item.m"
          {
#line 989 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_13_13, (MR_Integer) 0)));
#line 989 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_14_14, (MR_String) "::") == 0);
#line 989 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 989 "prog_io_item.m"
              {
#line 989 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 989 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 989 "prog_io_item.m"
                  {
#line 989 "prog_io_item.m"
                    parse_tree__prog_io_item__TypeTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 0)));
#line 989 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 1)));
#line 989 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 989 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 989 "prog_io_item.m"
                      {
#line 989 "prog_io_item.m"
                        parse_tree__prog_io_item__ModeTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 989 "prog_io_item.m"
                        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 1)));
#line 989 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 989 "prog_io_item.m"
                      }
#line 989 "prog_io_item.m"
                  }
#line 989 "prog_io_item.m"
              }
#line 989 "prog_io_item.m"
          }
#line 989 "prog_io_item.m"
      }
#line 994 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 990 "prog_io_item.m"
      {
#line 990 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Type_10;
#line 990 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Mode0_11;
#line 990 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Mode_12;
#line 990 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_18_18;

#line 990 "prog_io_item.m"
        {
#line 990 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__TypeTerm_7, &parse_tree__prog_io_item__Type_10);
        }
#line 990 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 990 "prog_io_item.m"
          {
#line 991 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = (MR_Integer) 0;
#line 991 "prog_io_item.m"
            {
#line 991 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_item__V_18_18, parse_tree__prog_io_item__ModeTerm_8, &parse_tree__prog_io_item__Mode0_11);
            }
#line 990 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 990 "prog_io_item.m"
              {
#line 992 "prog_io_item.m"
                {
#line 992 "prog_io_item.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_4, parse_tree__prog_io_item__Mode0_11, &parse_tree__prog_io_item__Mode_12);
                }
#line 993 "prog_io_item.m"
                {
#line 993 "prog_io_item.m"
                  MR_Word base;
#line 993 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeTypeAndMode_6 = base;
#line 993 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_10));
#line 993 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__Mode_12));
#line 993 "prog_io_item.m"
                }
#line 993 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 990 "prog_io_item.m"
              }
#line 990 "prog_io_item.m"
          }
#line 990 "prog_io_item.m"
      }
#line 994 "prog_io_item.m"
    else
#line 995 "prog_io_item.m"
      {
#line 995 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Type_19;

#line 995 "prog_io_item.m"
        {
#line 995 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__Term_5, &parse_tree__prog_io_item__Type_19);
        }
#line 995 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 995 "prog_io_item.m"
          {
#line 996 "prog_io_item.m"
            {
#line 996 "prog_io_item.m"
              MR_Word base;
#line 996 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 996 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeTypeAndMode_6 = base;
#line 996 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_19));
#line 996 "prog_io_item.m"
            }
#line 996 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 995 "prog_io_item.m"
          }
#line 995 "prog_io_item.m"
      }
#line 994 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 994 "prog_io_item.m"
  }
#line 985 "prog_io_item.m"
}

#line 977 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(
#line 977 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_1,
#line 977 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 977 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3)
#line 977 "prog_io_item.m"
{
#line 980 "prog_io_item.m"
  {
#line 980 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 980 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 980 "prog_io_item.m"
      {
#line 980 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 980 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 980 "prog_io_item.m"
      }
#line 980 "prog_io_item.m"
    else
#line 981 "prog_io_item.m"
      {
#line 981 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 981 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 981 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__H_8;
#line 981 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__T_9;
#line 994 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeTerm_13;
#line 994 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModeTerm_14;
#line 989 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_19_19;
#line 989 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_20_20;
#line 989 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_21_21;
#line 989 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 989 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 989 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item___Context_15;

#line 989 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__H0_6)) == (MR_mktag((MR_Integer) 0)));
#line 989 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 989 "prog_io_item.m"
          {
#line 989 "prog_io_item.m"
            parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 0)));
#line 989 "prog_io_item.m"
            parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 1)));
#line 989 "prog_io_item.m"
            parse_tree__prog_io_item___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 2)));
#line 989 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 989 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 989 "prog_io_item.m"
              {
#line 989 "prog_io_item.m"
                parse_tree__prog_io_item__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 989 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_20_20, (MR_String) "::") == 0);
#line 989 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 989 "prog_io_item.m"
                  {
#line 989 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 989 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 989 "prog_io_item.m"
                      {
#line 989 "prog_io_item.m"
                        parse_tree__prog_io_item__TypeTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 989 "prog_io_item.m"
                        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 1)));
#line 989 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 989 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 989 "prog_io_item.m"
                          {
#line 989 "prog_io_item.m"
                            parse_tree__prog_io_item__ModeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, (MR_Integer) 0)));
#line 989 "prog_io_item.m"
                            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, (MR_Integer) 1)));
#line 989 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 989 "prog_io_item.m"
                          }
#line 989 "prog_io_item.m"
                      }
#line 989 "prog_io_item.m"
                  }
#line 989 "prog_io_item.m"
              }
#line 989 "prog_io_item.m"
          }
#line 994 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 990 "prog_io_item.m"
          {
#line 990 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_16;
#line 990 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Mode0_17;
#line 990 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Mode_18;
#line 990 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_24_24;

#line 990 "prog_io_item.m"
            {
#line 990 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__TypeTerm_13, &parse_tree__prog_io_item__Type_16);
            }
#line 990 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 990 "prog_io_item.m"
              {
#line 991 "prog_io_item.m"
                parse_tree__prog_io_item__V_24_24 = (MR_Integer) 0;
#line 991 "prog_io_item.m"
                {
#line 991 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_item__V_24_24, parse_tree__prog_io_item__ModeTerm_14, &parse_tree__prog_io_item__Mode0_17);
                }
#line 990 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 990 "prog_io_item.m"
                  {
#line 992 "prog_io_item.m"
                    {
#line 992 "prog_io_item.m"
                      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_1, parse_tree__prog_io_item__Mode0_17, &parse_tree__prog_io_item__Mode_18);
                    }
#line 993 "prog_io_item.m"
                    {
#line 993 "prog_io_item.m"
                      parse_tree__prog_io_item__H_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__H_8, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_16));
#line 993 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__H_8, 1) = ((MR_Box) (parse_tree__prog_io_item__Mode_18));
#line 993 "prog_io_item.m"
                    }
#line 993 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 990 "prog_io_item.m"
                  }
#line 990 "prog_io_item.m"
              }
#line 990 "prog_io_item.m"
          }
#line 994 "prog_io_item.m"
        else
#line 995 "prog_io_item.m"
          {
#line 995 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_25;

#line 995 "prog_io_item.m"
            {
#line 995 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__H0_6, &parse_tree__prog_io_item__Type_25);
            }
#line 995 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 995 "prog_io_item.m"
              {
#line 996 "prog_io_item.m"
                {
#line 996 "prog_io_item.m"
                  parse_tree__prog_io_item__H_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 996 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H_8, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_25));
#line 996 "prog_io_item.m"
                }
#line 996 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 995 "prog_io_item.m"
              }
#line 995 "prog_io_item.m"
          }
#line 981 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 981 "prog_io_item.m"
          {
#line 983 "prog_io_item.m"
            {
#line 983 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_1, parse_tree__prog_io_item__T0_7, &parse_tree__prog_io_item__T_9);
            }
#line 981 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 981 "prog_io_item.m"
              {
#line 981 "prog_io_item.m"
                {
#line 981 "prog_io_item.m"
                  MR_Word base;
#line 981 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 981 "prog_io_item.m"
                  *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 981 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__H_8));
#line 981 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__T_9));
#line 981 "prog_io_item.m"
                }
#line 981 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 981 "prog_io_item.m"
              }
#line 981 "prog_io_item.m"
          }
#line 981 "prog_io_item.m"
      }
#line 980 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 980 "prog_io_item.m"
  }
#line 977 "prog_io_item.m"
}

#line 904 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncName_14,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Args_15,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ReturnArg_16,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncTerm_17,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_18,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ExistQVars_21,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Constraints_22,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_23,
#line 904 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_24,
#line 904 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_25,
#line 904 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_26)
#line 904 "prog_io_item.m"
{
#line 911 "prog_io_item.m"
  {
#line 911 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 911 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_132_132;
#line 911 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27;
#line 911 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InconsistentArgsSpecs_28;
#line 911 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgsOnlySpecs_36;
#line 911 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnOnlySpecs_43;
#line 911 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConsistencySpecs_44;
#line 911 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_98_98;
#line 922 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_60_60;
#line 923 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_33_33;
#line 922 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 922 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 922 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;
#line 935 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_79_79;
#line 936 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_39_39;
#line 936 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_40_40;
#line 935 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_38_38;
#line 935 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_37_37;

#line 912 "prog_io_item.m"
    {
#line 912 "prog_io_item.m"
      parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(parse_tree__prog_io_item__Args_15, parse_tree__prog_io_item__FuncTerm_17, &parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27);
    }
#line 917 "prog_io_item.m"
    if ((parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 916 "prog_io_item.m"
      parse_tree__prog_io_item__InconsistentArgsSpecs_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 917 "prog_io_item.m"
    else
#line 918 "prog_io_item.m"
      {
#line 918 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InconsistentArgsSpec_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27, (MR_Integer) 0)));

#line 919 "prog_io_item.m"
        {
#line 919 "prog_io_item.m"
          parse_tree__prog_io_item__InconsistentArgsSpecs_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__InconsistentArgsSpecs_28, 0) = ((MR_Box) (parse_tree__prog_io_item__InconsistentArgsSpec_29));
#line 919 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__InconsistentArgsSpecs_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 919 "prog_io_item.m"
        }
#line 918 "prog_io_item.m"
      }
#line 923 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_16)) == (MR_mktag((MR_Integer) 0)));
#line 923 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 923 "prog_io_item.m"
      {
#line 923 "prog_io_item.m"
        parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 0)));
#line 922 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 922 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 922 "prog_io_item.m"
          {
#line 922 "prog_io_item.m"
            parse_tree__prog_io_item__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 0)));
#line 922 "prog_io_item.m"
            parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 1)));
#line 922 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 922 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 922 "prog_io_item.m"
              {
#line 922 "prog_io_item.m"
                parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, (MR_Integer) 0)));
#line 922 "prog_io_item.m"
                parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, (MR_Integer) 1)));
#line 922 "prog_io_item.m"
              }
#line 922 "prog_io_item.m"
          }
#line 923 "prog_io_item.m"
      }
#line 931 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 926 "prog_io_item.m"
      {
#line 926 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ArgsOnlySpec_35;
#line 926 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_71_71;
#line 926 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_72_72;
#line 926 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_73_73;

#line 928 "prog_io_item.m"
        {
#line 928 "prog_io_item.m"
          parse_tree__prog_io_item__V_73_73 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 928 "prog_io_item.m"
        {
#line 928 "prog_io_item.m"
          parse_tree__prog_io_item__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 928 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_item__V_73_73));
#line 928 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[138])));
#line 928 "prog_io_item.m"
        }
#line 929 "prog_io_item.m"
        {
#line 929 "prog_io_item.m"
          parse_tree__prog_io_item__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 929 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_item__V_72_72));
#line 929 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 929 "prog_io_item.m"
        }
#line 927 "prog_io_item.m"
        {
#line 927 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 927 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 927 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 2) = ((MR_Box) (parse_tree__prog_io_item__V_71_71));
#line 927 "prog_io_item.m"
        }
#line 930 "prog_io_item.m"
        {
#line 930 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpecs_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_36, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsOnlySpec_35));
#line 930 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 930 "prog_io_item.m"
        }
#line 926 "prog_io_item.m"
      }
#line 931 "prog_io_item.m"
    else
#line 932 "prog_io_item.m"
      parse_tree__prog_io_item__ArgsOnlySpecs_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 936 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_16)) == (MR_mktag((MR_Integer) 1)));
#line 936 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 936 "prog_io_item.m"
      {
#line 936 "prog_io_item.m"
        parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 0)));
#line 936 "prog_io_item.m"
        parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 1)));
#line 935 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 935 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 935 "prog_io_item.m"
          {
#line 935 "prog_io_item.m"
            parse_tree__prog_io_item__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 0)));
#line 935 "prog_io_item.m"
            parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 1)));
#line 935 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_79_79)) == (MR_mktag((MR_Integer) 0)));
#line 935 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 935 "prog_io_item.m"
              parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, (MR_Integer) 0)));
#line 935 "prog_io_item.m"
          }
#line 936 "prog_io_item.m"
      }
#line 944 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 939 "prog_io_item.m"
      {
#line 939 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ReturnOnlySpec_42;
#line 939 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_90_90;
#line 939 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_91_91;
#line 939 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_92_92;

#line 941 "prog_io_item.m"
        {
#line 941 "prog_io_item.m"
          parse_tree__prog_io_item__V_92_92 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 941 "prog_io_item.m"
        {
#line 941 "prog_io_item.m"
          parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 941 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 941 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[139])));
#line 941 "prog_io_item.m"
        }
#line 942 "prog_io_item.m"
        {
#line 942 "prog_io_item.m"
          parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 942 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 942 "prog_io_item.m"
        }
#line 940 "prog_io_item.m"
        {
#line 940 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 940 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 940 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 940 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 2) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 940 "prog_io_item.m"
        }
#line 943 "prog_io_item.m"
        {
#line 943 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpecs_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_43, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnOnlySpec_42));
#line 943 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 943 "prog_io_item.m"
        }
#line 939 "prog_io_item.m"
      }
#line 944 "prog_io_item.m"
    else
#line 945 "prog_io_item.m"
      parse_tree__prog_io_item__ReturnOnlySpecs_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9752 "parse_tree.prog_io_item.c"
    parse_tree__prog_io_item__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 948 "prog_io_item.m"
    {
#line 948 "prog_io_item.m"
      parse_tree__prog_io_item__V_98_98 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_132_132, parse_tree__prog_io_item__ArgsOnlySpecs_36, parse_tree__prog_io_item__ReturnOnlySpecs_43);
    }
#line 948 "prog_io_item.m"
    {
#line 948 "prog_io_item.m"
      parse_tree__prog_io_item__ConsistencySpecs_44 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_132_132, parse_tree__prog_io_item__InconsistentArgsSpecs_28, parse_tree__prog_io_item__V_98_98);
    }
#line 952 "prog_io_item.m"
    if ((parse_tree__prog_io_item__ConsistencySpecs_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 953 "prog_io_item.m"
      {
#line 953 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_133_133;
#line 953 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Purity_47;
#line 953 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Attributes_48;
#line 953 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TVarSet_49;
#line 953 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__IVarSet_50;
#line 953 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__AllArgs_51;
#line 953 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_99_99;

#line 954 "prog_io_item.m"
        {
#line 954 "prog_io_item.m"
          parse_tree__prog_io_item__get_purity_3_p_0(&parse_tree__prog_io_item__Purity_47, parse_tree__prog_io_item__Attributes0_23, &parse_tree__prog_io_item__Attributes_48);
        }
#line 9788 "parse_tree.prog_io_item.c"
        parse_tree__prog_io_item__TypeCtorInfo_133_133 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 955 "prog_io_item.m"
        {
#line 955 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__TVarSet_49);
        }
#line 956 "prog_io_item.m"
        {
#line 956 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__IVarSet_50);
        }
#line 957 "prog_io_item.m"
        {
#line 957 "prog_io_item.m"
          parse_tree__prog_io_item__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnArg_16));
#line 957 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 957 "prog_io_item.m"
        }
#line 957 "prog_io_item.m"
        {
#line 957 "prog_io_item.m"
          parse_tree__prog_io_item__AllArgs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io_item__Args_15, parse_tree__prog_io_item__V_99_99);
        }
#line 958 "prog_io_item.m"
        {
#line 958 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__AllArgs_51);
        }
#line 966 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 959 "prog_io_item.m"
          {
#line 959 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ItemPredDecl_53;
#line 959 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Item_54;
#line 959 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeItem0_55;

#line 960 "prog_io_item.m"
            {
#line 960 "prog_io_item.m"
              parse_tree__prog_io_item__ItemPredDecl_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 0) = ((MR_Box) (parse_tree__prog_io_item__FuncName_14));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 1) = ((MR_Box) ((MR_Integer) 1));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 2) = ((MR_Box) (parse_tree__prog_io_item__AllArgs_51));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDetism_20));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 7) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_49));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 8) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_50));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 9) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_21));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 10) = ((MR_Box) (parse_tree__prog_io_item__Purity_47));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 11) = ((MR_Box) (parse_tree__prog_io_item__Constraints_22));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 12) = ((MR_Box) (parse_tree__prog_io_item__Context_24));
#line 960 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_53, 13) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_25));
#line 960 "prog_io_item.m"
            }
#line 963 "prog_io_item.m"
            {
#line 963 "prog_io_item.m"
              parse_tree__prog_io_item__Item_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 963 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_54, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_53));
#line 963 "prog_io_item.m"
            }
#line 964 "prog_io_item.m"
            {
#line 964 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeItem0_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 964 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_54));
#line 964 "prog_io_item.m"
            }
#line 965 "prog_io_item.m"
            {
#line 965 "prog_io_item.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_55, parse_tree__prog_io_item__Attributes_48, parse_tree__prog_io_item__MaybeItem_26);
#line 965 "prog_io_item.m"
              return;
            }
#line 959 "prog_io_item.m"
          }
#line 966 "prog_io_item.m"
        else
#line 967 "prog_io_item.m"
          {
#line 967 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__TermStr_56;
#line 967 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Pieces_57;
#line 967 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_58;
#line 967 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_106_106;
#line 967 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_109_109;
#line 967 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_111_111;
#line 967 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_112_112;
#line 967 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_121_121;
#line 967 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_122_122;
#line 967 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_123_123;
#line 967 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_124_124;
#line 967 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_125_125;
#line 967 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_128_128;

#line 967 "prog_io_item.m"
            {
#line 967 "prog_io_item.m"
              parse_tree__prog_io_item__TermStr_56 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__Term_18);
            }
#line 970 "prog_io_item.m"
            {
#line 970 "prog_io_item.m"
              parse_tree__prog_io_item__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 970 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_112_112, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_56));
#line 970 "prog_io_item.m"
            }
#line 970 "prog_io_item.m"
            {
#line 970 "prog_io_item.m"
              parse_tree__prog_io_item__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_item__V_112_112));
#line 970 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 970 "prog_io_item.m"
            }
#line 969 "prog_io_item.m"
            {
#line 969 "prog_io_item.m"
              parse_tree__prog_io_item__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_109_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 969 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_109_109, 1) = ((MR_Box) (parse_tree__prog_io_item__V_111_111));
#line 969 "prog_io_item.m"
            }
#line 969 "prog_io_item.m"
            {
#line 969 "prog_io_item.m"
              parse_tree__prog_io_item__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[141])));
#line 969 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 1) = ((MR_Box) (parse_tree__prog_io_item__V_109_109));
#line 969 "prog_io_item.m"
            }
#line 968 "prog_io_item.m"
            {
#line 968 "prog_io_item.m"
              parse_tree__prog_io_item__Pieces_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[140])));
#line 968 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_57, 1) = ((MR_Box) (parse_tree__prog_io_item__V_106_106));
#line 968 "prog_io_item.m"
            }
#line 972 "prog_io_item.m"
            {
#line 972 "prog_io_item.m"
              parse_tree__prog_io_item__V_123_123 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, parse_tree__prog_io_item__Term_18);
            }
#line 972 "prog_io_item.m"
            {
#line 972 "prog_io_item.m"
              parse_tree__prog_io_item__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 972 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_57));
#line 972 "prog_io_item.m"
            }
#line 972 "prog_io_item.m"
            {
#line 972 "prog_io_item.m"
              parse_tree__prog_io_item__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_item__V_125_125));
#line 972 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 972 "prog_io_item.m"
            }
#line 972 "prog_io_item.m"
            {
#line 972 "prog_io_item.m"
              parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 972 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_item__V_123_123));
#line 972 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io_item__V_124_124));
#line 972 "prog_io_item.m"
            }
#line 972 "prog_io_item.m"
            {
#line 972 "prog_io_item.m"
              parse_tree__prog_io_item__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_121_121, 0) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 972 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 972 "prog_io_item.m"
            }
#line 971 "prog_io_item.m"
            {
#line 971 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 971 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 971 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 971 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_58, 2) = ((MR_Box) (parse_tree__prog_io_item__V_121_121));
#line 971 "prog_io_item.m"
            }
#line 973 "prog_io_item.m"
            {
#line 973 "prog_io_item.m"
              parse_tree__prog_io_item__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_128_128, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_58));
#line 973 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 973 "prog_io_item.m"
            }
#line 973 "prog_io_item.m"
            {
#line 973 "prog_io_item.m"
              MR_Word base;
#line 973 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 973 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 973 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_128_128));
#line 973 "prog_io_item.m"
            }
#line 967 "prog_io_item.m"
          }
#line 953 "prog_io_item.m"
      }
#line 952 "prog_io_item.m"
    else
#line 951 "prog_io_item.m"
      {
#line 951 "prog_io_item.m"
        MR_Word base;
#line 951 "prog_io_item.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 951 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeItem_26 = base;
#line 951 "prog_io_item.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ConsistencySpecs_44));
#line 951 "prog_io_item.m"
      }
#line 911 "prog_io_item.m"
  }
#line 904 "prog_io_item.m"
}

#line 821 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_8_p_0(
#line 821 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 821 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 821 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_11,
#line 821 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_12,
#line 821 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_13,
#line 821 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 821 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 821 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 821 "prog_io_item.m"
{
#line 826 "prog_io_item.m"
  {
#line 826 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 826 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes_17;
#line 826 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeContext_18;

#line 827 "prog_io_item.m"
    {
#line 827 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__Attributes0_13, &parse_tree__prog_io_item__Attributes_17, &parse_tree__prog_io_item__MaybeContext_18);
    }
#line 832 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeContext_18)) == (MR_mktag((MR_Integer) 0))))
#line 830 "prog_io_item.m"
      {
#line 830 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 0)));

#line 831 "prog_io_item.m"
        {
#line 831 "prog_io_item.m"
          MR_Word base;
#line 831 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 831 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 831 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_19));
#line 831 "prog_io_item.m"
        }
#line 830 "prog_io_item.m"
      }
#line 832 "prog_io_item.m"
    else
#line 833 "prog_io_item.m"
      {
#line 833 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ExistQVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 0)));
#line 833 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Constraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 1)));
#line 833 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_18, (MR_Integer) 2)));
#line 895 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeSugaredFuncTerm_23;
#line 895 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ReturnTerm_24;
#line 835 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_44_44;
#line 835 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_45_45;
#line 835 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_46_46;
#line 835 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_47_47;
#line 835 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_48_48;
#line 835 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_25_25;

#line 835 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_11)) == (MR_mktag((MR_Integer) 0)));
#line 835 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 835 "prog_io_item.m"
          {
#line 835 "prog_io_item.m"
            parse_tree__prog_io_item__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 0)));
#line 835 "prog_io_item.m"
            parse_tree__prog_io_item__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 1)));
#line 835 "prog_io_item.m"
            parse_tree__prog_io_item__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 2)));
#line 835 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_44_44)) == (MR_mktag((MR_Integer) 0)));
#line 835 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 835 "prog_io_item.m"
              {
#line 835 "prog_io_item.m"
                parse_tree__prog_io_item__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_44_44, (MR_Integer) 0)));
#line 835 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_45_45, (MR_String) "=") == 0);
#line 835 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 835 "prog_io_item.m"
                  {
#line 836 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 836 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 836 "prog_io_item.m"
                      {
#line 836 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeSugaredFuncTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, (MR_Integer) 0)));
#line 836 "prog_io_item.m"
                        parse_tree__prog_io_item__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, (MR_Integer) 1)));
#line 836 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 836 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 836 "prog_io_item.m"
                          {
#line 836 "prog_io_item.m"
                            parse_tree__prog_io_item__ReturnTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, (MR_Integer) 0)));
#line 836 "prog_io_item.m"
                            parse_tree__prog_io_item__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, (MR_Integer) 1)));
#line 836 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 836 "prog_io_item.m"
                          }
#line 836 "prog_io_item.m"
                      }
#line 835 "prog_io_item.m"
                  }
#line 835 "prog_io_item.m"
              }
#line 835 "prog_io_item.m"
          }
#line 895 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 838 "prog_io_item.m"
          {
#line 838 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_148_148;
#line 838 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__FuncTerm_26;
#line 838 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFuncNameAndArgs_28;

#line 838 "prog_io_item.m"
            {
#line 838 "prog_io_item.m"
              parse_tree__prog_io_item__FuncTerm_26 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__MaybeSugaredFuncTerm_23);
            }
#line 10235 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_148_148 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 841 "prog_io_item.m"
            {
#line 841 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__FuncTerm_26, parse_tree__prog_io_item__VarSet_10, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[74]), &parse_tree__prog_io_item__MaybeFuncNameAndArgs_28);
            }
#line 846 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFuncNameAndArgs_28)) == (MR_mktag((MR_Integer) 0))))
#line 844 "prog_io_item.m"
              {
#line 844 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFuncNameAndArgs_28, (MR_Integer) 0)));

#line 845 "prog_io_item.m"
                {
#line 845 "prog_io_item.m"
                  MR_Word base;
#line 845 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 845 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 845 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_140));
#line 845 "prog_io_item.m"
                }
#line 844 "prog_io_item.m"
              }
#line 846 "prog_io_item.m"
            else
#line 847 "prog_io_item.m"
              {
#line 847 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__FuncName_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncNameAndArgs_28, (MR_Integer) 0)));
#line 847 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncNameAndArgs_28, (MR_Integer) 1)));
#line 847 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeArgs_32;
#line 847 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeReturnArg_37;
#line 853 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgsPrime_31;
#line 869 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ReturnArgPrime_36;
#line 889 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Args_40;
#line 889 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ReturnArg_41;

#line 849 "prog_io_item.m"
                {
#line 849 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_22, parse_tree__prog_io_item__ArgTerms_30, &parse_tree__prog_io_item__ArgsPrime_31);
                }
#line 853 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 852 "prog_io_item.m"
                  {
#line 852 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 852 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeArgs_32, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsPrime_31));
#line 852 "prog_io_item.m"
                  }
#line 853 "prog_io_item.m"
                else
#line 854 "prog_io_item.m"
                  {
#line 854 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__FuncTermStr_33;
#line 854 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ArgsPieces_34;
#line 854 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ArgsSpec_35;
#line 854 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_60_60;
#line 854 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_63_63;
#line 854 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_66_66;
#line 854 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_67_67;
#line 854 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_76_76;
#line 854 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_77_77;
#line 854 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_78_78;
#line 854 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_79_79;
#line 854 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_80_80;
#line 854 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_83_83;

#line 854 "prog_io_item.m"
                    {
#line 854 "prog_io_item.m"
                      parse_tree__prog_io_item__FuncTermStr_33 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__FuncTerm_26);
                    }
#line 857 "prog_io_item.m"
                    {
#line 857 "prog_io_item.m"
                      parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 857 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_item__FuncTermStr_33));
#line 857 "prog_io_item.m"
                    }
#line 857 "prog_io_item.m"
                    {
#line 857 "prog_io_item.m"
                      parse_tree__prog_io_item__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 857 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 857 "prog_io_item.m"
                    }
#line 856 "prog_io_item.m"
                    {
#line 856 "prog_io_item.m"
                      parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[135])));
#line 856 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (parse_tree__prog_io_item__V_66_66));
#line 856 "prog_io_item.m"
                    }
#line 856 "prog_io_item.m"
                    {
#line 856 "prog_io_item.m"
                      parse_tree__prog_io_item__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[134])));
#line 856 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 856 "prog_io_item.m"
                    }
#line 855 "prog_io_item.m"
                    {
#line 855 "prog_io_item.m"
                      parse_tree__prog_io_item__ArgsPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[133])));
#line 855 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsPieces_34, 1) = ((MR_Box) (parse_tree__prog_io_item__V_60_60));
#line 855 "prog_io_item.m"
                    }
#line 860 "prog_io_item.m"
                    {
#line 860 "prog_io_item.m"
                      parse_tree__prog_io_item__V_78_78 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__FuncTerm_26);
                    }
#line 861 "prog_io_item.m"
                    {
#line 861 "prog_io_item.m"
                      parse_tree__prog_io_item__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 861 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsPieces_34));
#line 861 "prog_io_item.m"
                    }
#line 861 "prog_io_item.m"
                    {
#line 861 "prog_io_item.m"
                      parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 861 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "prog_io_item.m"
                    }
#line 860 "prog_io_item.m"
                    {
#line 860 "prog_io_item.m"
                      parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 860 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 860 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 860 "prog_io_item.m"
                    }
#line 861 "prog_io_item.m"
                    {
#line 861 "prog_io_item.m"
                      parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 861 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 861 "prog_io_item.m"
                    }
#line 858 "prog_io_item.m"
                    {
#line 858 "prog_io_item.m"
                      parse_tree__prog_io_item__ArgsSpec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 858 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 858 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 858 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_35, 2) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 858 "prog_io_item.m"
                    }
#line 862 "prog_io_item.m"
                    {
#line 862 "prog_io_item.m"
                      parse_tree__prog_io_item__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsSpec_35));
#line 862 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 862 "prog_io_item.m"
                    }
#line 862 "prog_io_item.m"
                    {
#line 862 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeArgs_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 862 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeArgs_32, 0) = ((MR_Box) (parse_tree__prog_io_item__V_83_83));
#line 862 "prog_io_item.m"
                    }
#line 854 "prog_io_item.m"
                  }
#line 865 "prog_io_item.m"
                {
#line 865 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_3_p_0(parse_tree__prog_io_item__InstConstraints_22, parse_tree__prog_io_item__ReturnTerm_24, &parse_tree__prog_io_item__ReturnArgPrime_36);
                }
#line 869 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 868 "prog_io_item.m"
                  {
#line 868 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeReturnArg_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 868 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeReturnArg_37, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnArgPrime_36));
#line 868 "prog_io_item.m"
                  }
#line 869 "prog_io_item.m"
                else
#line 872 "prog_io_item.m"
                  {
#line 872 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ReturnSpec_39;
#line 872 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_101_101;
#line 872 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_102_102;
#line 872 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_103_103;
#line 872 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_108_108;

#line 875 "prog_io_item.m"
                    {
#line 875 "prog_io_item.m"
                      parse_tree__prog_io_item__V_103_103 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_148_148, parse_tree__prog_io_item__ReturnTerm_24);
                    }
#line 875 "prog_io_item.m"
                    {
#line 875 "prog_io_item.m"
                      parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 875 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_item__V_103_103));
#line 875 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[136])));
#line 875 "prog_io_item.m"
                    }
#line 876 "prog_io_item.m"
                    {
#line 876 "prog_io_item.m"
                      parse_tree__prog_io_item__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 876 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 876 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 876 "prog_io_item.m"
                    }
#line 873 "prog_io_item.m"
                    {
#line 873 "prog_io_item.m"
                      parse_tree__prog_io_item__ReturnSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 873 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 873 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 873 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_39, 2) = ((MR_Box) (parse_tree__prog_io_item__V_101_101));
#line 873 "prog_io_item.m"
                    }
#line 877 "prog_io_item.m"
                    {
#line 877 "prog_io_item.m"
                      parse_tree__prog_io_item__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 877 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnSpec_39));
#line 877 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 877 "prog_io_item.m"
                    }
#line 877 "prog_io_item.m"
                    {
#line 877 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeReturnArg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 877 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeReturnArg_37, 0) = ((MR_Box) (parse_tree__prog_io_item__V_108_108));
#line 877 "prog_io_item.m"
                    }
#line 872 "prog_io_item.m"
                  }
#line 880 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeArgs_32)) == (MR_mktag((MR_Integer) 1)));
#line 880 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 880 "prog_io_item.m"
                  {
#line 880 "prog_io_item.m"
                    parse_tree__prog_io_item__Args_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeArgs_32, (MR_Integer) 0)));
#line 881 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeReturnArg_37)) == (MR_mktag((MR_Integer) 1)));
#line 881 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 881 "prog_io_item.m"
                      parse_tree__prog_io_item__ReturnArg_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeReturnArg_37, (MR_Integer) 0)));
#line 880 "prog_io_item.m"
                  }
#line 889 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 885 "prog_io_item.m"
                  {
#line 885 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(parse_tree__prog_io_item__FuncName_29, parse_tree__prog_io_item__Args_40, parse_tree__prog_io_item__ReturnArg_41, parse_tree__prog_io_item__FuncTerm_26, parse_tree__prog_io_item__Term_11, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__MaybeDet_12, parse_tree__prog_io_item__ExistQVars_20, parse_tree__prog_io_item__Constraints_21, parse_tree__prog_io_item__Attributes_17, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 885 "prog_io_item.m"
                    return;
                  }
#line 889 "prog_io_item.m"
                else
#line 891 "prog_io_item.m"
                  {
#line 891 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_110_110;
#line 891 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_111_111;
#line 891 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Specs_141;

#line 890 "prog_io_item.m"
                    {
#line 890 "prog_io_item.m"
                      parse_tree__prog_io_item__V_110_110 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[5], parse_tree__prog_io_item__MaybeArgs_32);
                    }
#line 891 "prog_io_item.m"
                    {
#line 891 "prog_io_item.m"
                      parse_tree__prog_io_item__V_111_111 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io_item__MaybeReturnArg_37);
                    }
#line 890 "prog_io_item.m"
                    {
#line 890 "prog_io_item.m"
                      parse_tree__prog_io_item__Specs_141 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_110_110, parse_tree__prog_io_item__V_111_111);
                    }
#line 892 "prog_io_item.m"
                    {
#line 892 "prog_io_item.m"
                      MR_Word base;
#line 892 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 892 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 892 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_141));
#line 892 "prog_io_item.m"
                    }
#line 891 "prog_io_item.m"
                  }
#line 847 "prog_io_item.m"
              }
#line 838 "prog_io_item.m"
          }
#line 895 "prog_io_item.m"
        else
#line 897 "prog_io_item.m"
          {
#line 897 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_43;
#line 897 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_131_131;
#line 897 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_132_132;
#line 897 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_133_133;
#line 897 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_138_138;

#line 899 "prog_io_item.m"
            {
#line 899 "prog_io_item.m"
              parse_tree__prog_io_item__V_133_133 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_11);
            }
#line 899 "prog_io_item.m"
            {
#line 899 "prog_io_item.m"
              parse_tree__prog_io_item__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 899 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_132_132, 0) = ((MR_Box) (parse_tree__prog_io_item__V_133_133));
#line 899 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[137])));
#line 899 "prog_io_item.m"
            }
#line 899 "prog_io_item.m"
            {
#line 899 "prog_io_item.m"
              parse_tree__prog_io_item__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_131_131, 0) = ((MR_Box) (parse_tree__prog_io_item__V_132_132));
#line 899 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 899 "prog_io_item.m"
            }
#line 898 "prog_io_item.m"
            {
#line 898 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 898 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 898 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 898 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 2) = ((MR_Box) (parse_tree__prog_io_item__V_131_131));
#line 898 "prog_io_item.m"
            }
#line 900 "prog_io_item.m"
            {
#line 900 "prog_io_item.m"
              parse_tree__prog_io_item__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_43));
#line 900 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 900 "prog_io_item.m"
            }
#line 900 "prog_io_item.m"
            {
#line 900 "prog_io_item.m"
              MR_Word base;
#line 900 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 900 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 900 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_138_138));
#line 900 "prog_io_item.m"
            }
#line 897 "prog_io_item.m"
          }
#line 833 "prog_io_item.m"
      }
#line 826 "prog_io_item.m"
  }
#line 821 "prog_io_item.m"
}

#line 721 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_12,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_13,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_14,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_15,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_16,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes0_19,
#line 721 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 721 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 721 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_22)
#line 721 "prog_io_item.m"
{
#line 728 "prog_io_item.m"
  {
#line 728 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 728 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Attributes1_23;
#line 728 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeExistClassInstContext_24;

#line 729 "prog_io_item.m"
    {
#line 729 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io_item__ModuleName_13, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__Attributes0_19, &parse_tree__prog_io_item__Attributes1_23, &parse_tree__prog_io_item__MaybeExistClassInstContext_24);
    }
#line 734 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeExistClassInstContext_24)) == (MR_mktag((MR_Integer) 0))))
#line 732 "prog_io_item.m"
      {
#line 732 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 0)));

#line 733 "prog_io_item.m"
        {
#line 733 "prog_io_item.m"
          MR_Word base;
#line 733 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 733 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 733 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_25));
#line 733 "prog_io_item.m"
        }
#line 732 "prog_io_item.m"
      }
#line 734 "prog_io_item.m"
    else
#line 736 "prog_io_item.m"
      {
#line 736 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_187_187 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 736 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_188_188;
#line 736 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ExistQVars_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 0)));
#line 736 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Constraints_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 1)));
#line 736 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_24, (MR_Integer) 2)));
#line 736 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ContextPieces_29;
#line 736 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybePredNameAndArgs_30;
#line 736 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_58_58;
#line 736 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_59_59;

#line 737 "prog_io_item.m"
        {
#line 737 "prog_io_item.m"
          parse_tree__prog_io_item__V_59_59 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
        }
#line 738 "prog_io_item.m"
        {
#line 738 "prog_io_item.m"
          parse_tree__prog_io_item__V_58_58 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_59_59, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[127]));
        }
#line 737 "prog_io_item.m"
        {
#line 737 "prog_io_item.m"
          parse_tree__prog_io_item__ContextPieces_29 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[125]), parse_tree__prog_io_item__V_58_58);
        }
#line 10799 "parse_tree.prog_io_item.c"
        parse_tree__prog_io_item__TypeCtorInfo_188_188 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 739 "prog_io_item.m"
        {
#line 739 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__ModuleName_13, parse_tree__prog_io_item__PredTypeTerm_15, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__ContextPieces_29, &parse_tree__prog_io_item__MaybePredNameAndArgs_30);
        }
#line 744 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybePredNameAndArgs_30)) == (MR_mktag((MR_Integer) 0))))
#line 742 "prog_io_item.m"
          {
#line 742 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 0)));

#line 743 "prog_io_item.m"
            {
#line 743 "prog_io_item.m"
              MR_Word base;
#line 743 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 743 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 743 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_173));
#line 743 "prog_io_item.m"
            }
#line 742 "prog_io_item.m"
          }
#line 744 "prog_io_item.m"
        else
#line 745 "prog_io_item.m"
          {
#line 745 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 0)));
#line 745 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_30, (MR_Integer) 1)));
#line 806 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Args_33;

#line 746 "prog_io_item.m"
            {
#line 746 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_28, parse_tree__prog_io_item__ArgTerms_32, &parse_tree__prog_io_item__Args_33);
            }
#line 806 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 748 "prog_io_item.m"
              {
#line 748 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34;

#line 747 "prog_io_item.m"
                {
#line 747 "prog_io_item.m"
                  parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(parse_tree__prog_io_item__Args_33, parse_tree__prog_io_item__PredTypeTerm_15, &parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34);
                }
#line 752 "prog_io_item.m"
                if ((parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "prog_io_item.m"
                  {
#line 755 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_64_64;
#line 755 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_36_36;
#line 756 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_38_38;
#line 756 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_37_37;

#line 755 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_17)) == (MR_mktag((MR_Integer) 1)));
#line 755 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 755 "prog_io_item.m"
                      {
#line 755 "prog_io_item.m"
                        parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_17, (MR_Integer) 0)));
#line 756 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_33)) == (MR_mktag((MR_Integer) 1)));
#line 756 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 756 "prog_io_item.m"
                          {
#line 756 "prog_io_item.m"
                            parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 0)));
#line 756 "prog_io_item.m"
                            parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 1)));
#line 756 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 756 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 756 "prog_io_item.m"
                              parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 756 "prog_io_item.m"
                          }
#line 755 "prog_io_item.m"
                      }
#line 765 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 759 "prog_io_item.m"
                      {
#line 759 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Spec_40;
#line 759 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_78_78;
#line 759 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_79_79;
#line 759 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_80_80;
#line 759 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_85_85;

#line 762 "prog_io_item.m"
                        {
#line 762 "prog_io_item.m"
                          parse_tree__prog_io_item__V_80_80 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                        }
#line 762 "prog_io_item.m"
                        {
#line 762 "prog_io_item.m"
                          parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 762 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[128])));
#line 762 "prog_io_item.m"
                        }
#line 763 "prog_io_item.m"
                        {
#line 763 "prog_io_item.m"
                          parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 763 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 763 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 763 "prog_io_item.m"
                        }
#line 760 "prog_io_item.m"
                        {
#line 760 "prog_io_item.m"
                          parse_tree__prog_io_item__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 760 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 760 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 760 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 2) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 760 "prog_io_item.m"
                        }
#line 764 "prog_io_item.m"
                        {
#line 764 "prog_io_item.m"
                          parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_40));
#line 764 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 764 "prog_io_item.m"
                        }
#line 764 "prog_io_item.m"
                        {
#line 764 "prog_io_item.m"
                          MR_Word base;
#line 764 "prog_io_item.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 764 "prog_io_item.m"
                          *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 764 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 764 "prog_io_item.m"
                        }
#line 759 "prog_io_item.m"
                      }
#line 765 "prog_io_item.m"
                    else
#line 777 "prog_io_item.m"
                      {
#line 766 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_87_87;
#line 767 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_41_41;
#line 768 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_44_44;
#line 768 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_42_42;
#line 768 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_43_43;

#line 766 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 766 "prog_io_item.m"
                          {
#line 767 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithType_16)) == (MR_mktag((MR_Integer) 1)));
#line 767 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 767 "prog_io_item.m"
                              {
#line 767 "prog_io_item.m"
                                parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithType_16, (MR_Integer) 0)));
#line 768 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_33)) == (MR_mktag((MR_Integer) 1)));
#line 768 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 768 "prog_io_item.m"
                                  {
#line 768 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 0)));
#line 768 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_33, (MR_Integer) 1)));
#line 768 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_87_87)) == (MR_mktag((MR_Integer) 1)));
#line 768 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 768 "prog_io_item.m"
                                      {
#line 768 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_87_87, (MR_Integer) 0)));
#line 768 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_87_87, (MR_Integer) 1)));
#line 768 "prog_io_item.m"
                                      }
#line 768 "prog_io_item.m"
                                  }
#line 767 "prog_io_item.m"
                              }
#line 766 "prog_io_item.m"
                          }
#line 777 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 771 "prog_io_item.m"
                          {
#line 771 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_101_101;
#line 771 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_102_102;
#line 771 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_103_103;
#line 771 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_108_108;
#line 771 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Spec_175;

#line 774 "prog_io_item.m"
                            {
#line 774 "prog_io_item.m"
                              parse_tree__prog_io_item__V_103_103 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                            }
#line 774 "prog_io_item.m"
                            {
#line 774 "prog_io_item.m"
                              parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 774 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_item__V_103_103));
#line 774 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[129])));
#line 774 "prog_io_item.m"
                            }
#line 775 "prog_io_item.m"
                            {
#line 775 "prog_io_item.m"
                              parse_tree__prog_io_item__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 775 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "prog_io_item.m"
                            }
#line 772 "prog_io_item.m"
                            {
#line 772 "prog_io_item.m"
                              parse_tree__prog_io_item__Spec_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 772 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_175, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 772 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_175, 2) = ((MR_Box) (parse_tree__prog_io_item__V_101_101));
#line 772 "prog_io_item.m"
                            }
#line 776 "prog_io_item.m"
                            {
#line 776 "prog_io_item.m"
                              parse_tree__prog_io_item__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_175));
#line 776 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 776 "prog_io_item.m"
                            }
#line 776 "prog_io_item.m"
                            {
#line 776 "prog_io_item.m"
                              MR_Word base;
#line 776 "prog_io_item.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 776 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 776 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_108_108));
#line 776 "prog_io_item.m"
                            }
#line 771 "prog_io_item.m"
                          }
#line 777 "prog_io_item.m"
                        else
#line 791 "prog_io_item.m"
                          {
#line 778 "prog_io_item.m"
                            {
#line 778 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__Args_33);
                            }
#line 791 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 780 "prog_io_item.m"
                              {
#line 780 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Purity_45;
#line 780 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Attributes_46;
#line 780 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__TVarSet_47;
#line 780 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__IVarSet_48;
#line 780 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ItemPredDecl_50;
#line 780 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Item_51;
#line 780 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__MaybeItem0_52;

#line 780 "prog_io_item.m"
                                {
#line 780 "prog_io_item.m"
                                  parse_tree__prog_io_item__get_purity_3_p_0(&parse_tree__prog_io_item__Purity_45, parse_tree__prog_io_item__Attributes1_23, &parse_tree__prog_io_item__Attributes_46);
                                }
#line 781 "prog_io_item.m"
                                {
#line 781 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_14, &parse_tree__prog_io_item__TVarSet_47);
                                }
#line 782 "prog_io_item.m"
                                {
#line 782 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_14, &parse_tree__prog_io_item__IVarSet_48);
                                }
#line 784 "prog_io_item.m"
                                {
#line 784 "prog_io_item.m"
                                  parse_tree__prog_io_item__ItemPredDecl_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 784 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_31));
#line 784 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 1) = ((MR_Box) (parse_tree__prog_io_item__PredOrFunc_12));
#line 784 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 2) = ((MR_Box) (parse_tree__prog_io_item__Args_33));
#line 784 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 3) = ((MR_Box) (parse_tree__prog_io_item__WithType_16));
#line 784 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 4) = ((MR_Box) (parse_tree__prog_io_item__WithInst_17));
#line 784 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_18));
#line 784 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 784 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 7) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_47));
#line 784 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 8) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_48));
#line 784 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 9) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_26));
#line 784 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 10) = ((MR_Box) (parse_tree__prog_io_item__Purity_45));
#line 784 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 11) = ((MR_Box) (parse_tree__prog_io_item__Constraints_27));
#line 784 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 12) = ((MR_Box) (parse_tree__prog_io_item__Context_20));
#line 784 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_50, 13) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_21));
#line 784 "prog_io_item.m"
                                }
#line 788 "prog_io_item.m"
                                {
#line 788 "prog_io_item.m"
                                  parse_tree__prog_io_item__Item_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 788 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_51, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_50));
#line 788 "prog_io_item.m"
                                }
#line 789 "prog_io_item.m"
                                {
#line 789 "prog_io_item.m"
                                  parse_tree__prog_io_item__MaybeItem0_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 789 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_52, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_51));
#line 789 "prog_io_item.m"
                                }
#line 790 "prog_io_item.m"
                                {
#line 790 "prog_io_item.m"
                                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io_item__MaybeItem0_52, parse_tree__prog_io_item__Attributes_46, parse_tree__prog_io_item__MaybeItem_22);
#line 790 "prog_io_item.m"
                                  return;
                                }
#line 780 "prog_io_item.m"
                              }
#line 791 "prog_io_item.m"
                            else
#line 793 "prog_io_item.m"
                              {
#line 793 "prog_io_item.m"
                                MR_String parse_tree__prog_io_item__PredTypeTermStr_53;
#line 793 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_117_117;
#line 793 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_118_118;
#line 793 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_119_119;
#line 793 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_122_122;
#line 793 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_124_124;
#line 793 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_125_125;
#line 793 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_134_134;
#line 793 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_135_135;
#line 793 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_136_136;
#line 793 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_137_137;
#line 793 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_138_138;
#line 793 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_141_141;
#line 793 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Pieces_176;
#line 793 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Spec_177;

#line 792 "prog_io_item.m"
                                {
#line 792 "prog_io_item.m"
                                  parse_tree__prog_io_item__PredTypeTermStr_53 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__PredTypeTerm_15);
                                }
#line 796 "prog_io_item.m"
                                {
#line 796 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_118_118 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
                                }
#line 798 "prog_io_item.m"
                                {
#line 798 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 798 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_125_125, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_53));
#line 798 "prog_io_item.m"
                                }
#line 798 "prog_io_item.m"
                                {
#line 798 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_item__V_125_125));
#line 798 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 798 "prog_io_item.m"
                                }
#line 797 "prog_io_item.m"
                                {
#line 797 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 797 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io_item__V_124_124));
#line 797 "prog_io_item.m"
                                }
#line 797 "prog_io_item.m"
                                {
#line 797 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_119_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[126])));
#line 797 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_119_119, 1) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 797 "prog_io_item.m"
                                }
#line 796 "prog_io_item.m"
                                {
#line 796 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_117_117 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_118_118, parse_tree__prog_io_item__V_119_119);
                                }
#line 795 "prog_io_item.m"
                                {
#line 795 "prog_io_item.m"
                                  parse_tree__prog_io_item__Pieces_176 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[68]), parse_tree__prog_io_item__V_117_117);
                                }
#line 801 "prog_io_item.m"
                                {
#line 801 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_136_136 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                                }
#line 802 "prog_io_item.m"
                                {
#line 802 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 802 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_176));
#line 802 "prog_io_item.m"
                                }
#line 802 "prog_io_item.m"
                                {
#line 802 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_137_137, 0) = ((MR_Box) (parse_tree__prog_io_item__V_138_138));
#line 802 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "prog_io_item.m"
                                }
#line 801 "prog_io_item.m"
                                {
#line 801 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 801 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_135_135, 0) = ((MR_Box) (parse_tree__prog_io_item__V_136_136));
#line 801 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_135_135, 1) = ((MR_Box) (parse_tree__prog_io_item__V_137_137));
#line 801 "prog_io_item.m"
                                }
#line 802 "prog_io_item.m"
                                {
#line 802 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_134_134, 0) = ((MR_Box) (parse_tree__prog_io_item__V_135_135));
#line 802 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "prog_io_item.m"
                                }
#line 799 "prog_io_item.m"
                                {
#line 799 "prog_io_item.m"
                                  parse_tree__prog_io_item__Spec_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 799 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_177, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 799 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 799 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_177, 2) = ((MR_Box) (parse_tree__prog_io_item__V_134_134));
#line 799 "prog_io_item.m"
                                }
#line 803 "prog_io_item.m"
                                {
#line 803 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_141_141, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_177));
#line 803 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_141_141));
#line 803 "prog_io_item.m"
                                }
#line 793 "prog_io_item.m"
                              }
#line 791 "prog_io_item.m"
                          }
#line 777 "prog_io_item.m"
                      }
#line 765 "prog_io_item.m"
                  }
#line 752 "prog_io_item.m"
                else
#line 750 "prog_io_item.m"
                  {
#line 750 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__InconsistentArgsSpec_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeInconsistentArgsSpec_34, (MR_Integer) 0)));
#line 750 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_143_143;

#line 751 "prog_io_item.m"
                    {
#line 751 "prog_io_item.m"
                      parse_tree__prog_io_item__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_143_143, 0) = ((MR_Box) (parse_tree__prog_io_item__InconsistentArgsSpec_35));
#line 751 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 751 "prog_io_item.m"
                    }
#line 751 "prog_io_item.m"
                    {
#line 751 "prog_io_item.m"
                      MR_Word base;
#line 751 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 751 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 751 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_143_143));
#line 751 "prog_io_item.m"
                    }
#line 750 "prog_io_item.m"
                  }
#line 748 "prog_io_item.m"
              }
#line 806 "prog_io_item.m"
            else
#line 807 "prog_io_item.m"
              {
#line 807 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_149_149;
#line 807 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_150_150;
#line 807 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_151_151;
#line 807 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_154_154;
#line 807 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_155_155;
#line 807 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_164_164;
#line 807 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_165_165;
#line 807 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_166_166;
#line 807 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_167_167;
#line 807 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_168_168;
#line 807 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_171_171;
#line 807 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_182;
#line 807 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_183;
#line 807 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredTypeTermStr_184;

#line 807 "prog_io_item.m"
                {
#line 807 "prog_io_item.m"
                  parse_tree__prog_io_item__PredTypeTermStr_184 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__VarSet_14, parse_tree__prog_io_item__PredTypeTerm_15);
                }
#line 809 "prog_io_item.m"
                {
#line 809 "prog_io_item.m"
                  parse_tree__prog_io_item__V_150_150 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_12);
                }
#line 810 "prog_io_item.m"
                {
#line 810 "prog_io_item.m"
                  parse_tree__prog_io_item__V_155_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_155_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 810 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_155_155, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_184));
#line 810 "prog_io_item.m"
                }
#line 810 "prog_io_item.m"
                {
#line 810 "prog_io_item.m"
                  parse_tree__prog_io_item__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_154_154, 0) = ((MR_Box) (parse_tree__prog_io_item__V_155_155));
#line 810 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 810 "prog_io_item.m"
                }
#line 810 "prog_io_item.m"
                {
#line 810 "prog_io_item.m"
                  parse_tree__prog_io_item__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_151_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[132])));
#line 810 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_151_151, 1) = ((MR_Box) (parse_tree__prog_io_item__V_154_154));
#line 810 "prog_io_item.m"
                }
#line 809 "prog_io_item.m"
                {
#line 809 "prog_io_item.m"
                  parse_tree__prog_io_item__V_149_149 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_150_150, parse_tree__prog_io_item__V_151_151);
                }
#line 808 "prog_io_item.m"
                {
#line 808 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_182 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[131]), parse_tree__prog_io_item__V_149_149);
                }
#line 812 "prog_io_item.m"
                {
#line 812 "prog_io_item.m"
                  parse_tree__prog_io_item__V_166_166 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_15);
                }
#line 813 "prog_io_item.m"
                {
#line 813 "prog_io_item.m"
                  parse_tree__prog_io_item__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 813 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_168_168, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_182));
#line 813 "prog_io_item.m"
                }
#line 813 "prog_io_item.m"
                {
#line 813 "prog_io_item.m"
                  parse_tree__prog_io_item__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_167_167, 0) = ((MR_Box) (parse_tree__prog_io_item__V_168_168));
#line 813 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 813 "prog_io_item.m"
                }
#line 812 "prog_io_item.m"
                {
#line 812 "prog_io_item.m"
                  parse_tree__prog_io_item__V_165_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 812 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_165_165, 0) = ((MR_Box) (parse_tree__prog_io_item__V_166_166));
#line 812 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_165_165, 1) = ((MR_Box) (parse_tree__prog_io_item__V_167_167));
#line 812 "prog_io_item.m"
                }
#line 813 "prog_io_item.m"
                {
#line 813 "prog_io_item.m"
                  parse_tree__prog_io_item__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_164_164, 0) = ((MR_Box) (parse_tree__prog_io_item__V_165_165));
#line 813 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 813 "prog_io_item.m"
                }
#line 811 "prog_io_item.m"
                {
#line 811 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 811 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_183, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 811 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_183, 2) = ((MR_Box) (parse_tree__prog_io_item__V_164_164));
#line 811 "prog_io_item.m"
                }
#line 814 "prog_io_item.m"
                {
#line 814 "prog_io_item.m"
                  parse_tree__prog_io_item__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_171_171, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_183));
#line 814 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_171_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 814 "prog_io_item.m"
                }
#line 814 "prog_io_item.m"
                {
#line 814 "prog_io_item.m"
                  MR_Word base;
#line 814 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 814 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_22 = base;
#line 814 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_171_171));
#line 814 "prog_io_item.m"
                }
#line 807 "prog_io_item.m"
              }
#line 745 "prog_io_item.m"
          }
#line 736 "prog_io_item.m"
      }
#line 728 "prog_io_item.m"
  }
#line 721 "prog_io_item.m"
}

#line 660 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0(
#line 660 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_9,
#line 660 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 660 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 660 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 660 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 660 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 660 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 660 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 660 "prog_io_item.m"
{
#line 665 "prog_io_item.m"
  {
#line 665 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 665 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTerm_17;
#line 665 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_18;
#line 665 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTerm_19;
#line 665 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithInst_20;
#line 665 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithType_22;
#line 665 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BaseTerm_23;
#line 711 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeDetism_24;
#line 711 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithInst_25;
#line 711 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithType_26;

#line 666 "prog_io_item.m"
    {
#line 666 "prog_io_item.m"
      parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__Term_12, &parse_tree__prog_io_item__BeforeDetismTerm_17, &parse_tree__prog_io_item__MaybeMaybeDetism_18);
    }
#line 668 "prog_io_item.m"
    {
#line 668 "prog_io_item.m"
      parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(parse_tree__prog_io_item__BeforeDetismTerm_17, &parse_tree__prog_io_item__BeforeWithInstTerm_19, &parse_tree__prog_io_item__MaybeWithInst_20);
    }
#line 670 "prog_io_item.m"
    {
#line 670 "prog_io_item.m"
      parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BeforeWithInstTerm_19, &parse_tree__prog_io_item__BaseTerm_23, &parse_tree__prog_io_item__MaybeWithType_22);
    }
#line 674 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_18)) == (MR_mktag((MR_Integer) 1)));
#line 674 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 674 "prog_io_item.m"
      {
#line 674 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeDetism_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_18, (MR_Integer) 0)));
#line 675 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_20)) == (MR_mktag((MR_Integer) 1)));
#line 675 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 675 "prog_io_item.m"
          {
#line 675 "prog_io_item.m"
            parse_tree__prog_io_item__WithInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_20, (MR_Integer) 0)));
#line 676 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithType_22)) == (MR_mktag((MR_Integer) 1)));
#line 676 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 676 "prog_io_item.m"
              parse_tree__prog_io_item__WithType_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithType_22, (MR_Integer) 0)));
#line 675 "prog_io_item.m"
          }
#line 674 "prog_io_item.m"
      }
#line 711 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 687 "prog_io_item.m"
      {
#line 679 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_27_27;
#line 680 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_28_28;

#line 679 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_24)) == (MR_mktag((MR_Integer) 1)));
#line 679 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 679 "prog_io_item.m"
          {
#line 679 "prog_io_item.m"
            parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_24, (MR_Integer) 0)));
#line 680 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_25)) == (MR_mktag((MR_Integer) 1)));
#line 680 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 680 "prog_io_item.m"
              parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_25, (MR_Integer) 0)));
#line 679 "prog_io_item.m"
          }
#line 687 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 683 "prog_io_item.m"
          {
#line 683 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_30;
#line 683 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_46_46;
#line 683 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_47_47;
#line 683 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_48_48;
#line 683 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_53_53;

#line 685 "prog_io_item.m"
            {
#line 685 "prog_io_item.m"
              parse_tree__prog_io_item__V_48_48 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_23);
            }
#line 685 "prog_io_item.m"
            {
#line 685 "prog_io_item.m"
              parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 685 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__V_48_48));
#line 685 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[122])));
#line 685 "prog_io_item.m"
            }
#line 685 "prog_io_item.m"
            {
#line 685 "prog_io_item.m"
              parse_tree__prog_io_item__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 685 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 685 "prog_io_item.m"
            }
#line 684 "prog_io_item.m"
            {
#line 684 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 684 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 684 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_30, 2) = ((MR_Box) (parse_tree__prog_io_item__V_46_46));
#line 684 "prog_io_item.m"
            }
#line 686 "prog_io_item.m"
            {
#line 686 "prog_io_item.m"
              parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_30));
#line 686 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 686 "prog_io_item.m"
            }
#line 683 "prog_io_item.m"
          }
#line 687 "prog_io_item.m"
        else
#line 696 "prog_io_item.m"
          {
#line 688 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_31_31;

#line 688 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_25)) == (MR_mktag((MR_Integer) 1)));
#line 688 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 688 "prog_io_item.m"
              {
#line 688 "prog_io_item.m"
                parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_25, (MR_Integer) 0)));
#line 689 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 688 "prog_io_item.m"
              }
#line 696 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 692 "prog_io_item.m"
              {
#line 692 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_77_77;
#line 692 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_78_78;
#line 692 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_79_79;
#line 692 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_84_84;
#line 692 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_91;

#line 694 "prog_io_item.m"
                {
#line 694 "prog_io_item.m"
                  parse_tree__prog_io_item__V_79_79 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_23);
                }
#line 694 "prog_io_item.m"
                {
#line 694 "prog_io_item.m"
                  parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 694 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 694 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[123])));
#line 694 "prog_io_item.m"
                }
#line 694 "prog_io_item.m"
                {
#line 694 "prog_io_item.m"
                  parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 694 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 694 "prog_io_item.m"
                }
#line 693 "prog_io_item.m"
                {
#line 693 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 693 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 693 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_91, 2) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 693 "prog_io_item.m"
                }
#line 695 "prog_io_item.m"
                {
#line 695 "prog_io_item.m"
                  parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_91));
#line 695 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 695 "prog_io_item.m"
                }
#line 695 "prog_io_item.m"
                {
#line 695 "prog_io_item.m"
                  MR_Word base;
#line 695 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 695 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 695 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 695 "prog_io_item.m"
                }
#line 692 "prog_io_item.m"
              }
#line 696 "prog_io_item.m"
            else
#line 705 "prog_io_item.m"
              {
#line 700 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__PredOrFunc_9 == (MR_Integer) 1);
#line 700 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 701 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 705 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 703 "prog_io_item.m"
                  {
#line 703 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_func_decl_base_8_p_0(parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BaseTerm_23, parse_tree__prog_io_item__MaybeDetism_24, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 703 "prog_io_item.m"
                    return;
                  }
#line 705 "prog_io_item.m"
                else
#line 706 "prog_io_item.m"
                  {
#line 706 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_pred_decl_base_11_p_0(parse_tree__prog_io_item__PredOrFunc_9, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__BaseTerm_23, parse_tree__prog_io_item__WithType_26, parse_tree__prog_io_item__WithInst_25, parse_tree__prog_io_item__MaybeDetism_24, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
#line 706 "prog_io_item.m"
                    return;
                  }
#line 705 "prog_io_item.m"
              }
#line 696 "prog_io_item.m"
          }
#line 687 "prog_io_item.m"
      }
#line 711 "prog_io_item.m"
    else
#line 714 "prog_io_item.m"
      {
#line 714 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 714 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_32;
#line 714 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_86_86;
#line 714 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_87_87;
#line 714 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_88_88;
#line 714 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_89_89;

#line 712 "prog_io_item.m"
        {
#line 712 "prog_io_item.m"
          parse_tree__prog_io_item__V_86_86 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_18);
        }
#line 713 "prog_io_item.m"
        {
#line 713 "prog_io_item.m"
          parse_tree__prog_io_item__V_88_88 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_20);
        }
#line 714 "prog_io_item.m"
        {
#line 714 "prog_io_item.m"
          parse_tree__prog_io_item__V_89_89 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[4], parse_tree__prog_io_item__MaybeWithType_22);
        }
#line 714 "prog_io_item.m"
        {
#line 714 "prog_io_item.m"
          parse_tree__prog_io_item__V_87_87 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_96_96, parse_tree__prog_io_item__V_88_88, parse_tree__prog_io_item__V_89_89);
        }
#line 713 "prog_io_item.m"
        {
#line 713 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_32 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_96_96, parse_tree__prog_io_item__V_86_86, parse_tree__prog_io_item__V_87_87);
        }
#line 715 "prog_io_item.m"
        {
#line 715 "prog_io_item.m"
          MR_Word base;
#line 715 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 715 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItem_16 = base;
#line 715 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_32));
#line 715 "prog_io_item.m"
        }
#line 714 "prog_io_item.m"
      }
#line 665 "prog_io_item.m"
  }
#line 660 "prog_io_item.m"
}

#line 446 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_attributed_decl_8_p_0(
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 446 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_11,
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_12,
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Attributes_13,
#line 446 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 446 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 446 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_16)
#line 446 "prog_io_item.m"
{
#line 453 "prog_io_item.m"
  {
#line 453 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 453 "prog_io_item.m"
    {
#line 453 "prog_io_item.m"
      MR_Integer parse_tree__prog_io_item__case_num_0 = (MR_Integer) -1;

#line 453 "prog_io_item.m"
#line 453 "prog_io_item.m"
      switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 0)) {
#line 453 "prog_io_item.m"
        case (MR_Integer) 101:
#line 453 "prog_io_item.m"
          if (MR_offset_streq(1, parse_tree__prog_io_item__Functor_11, (MR_String) "external"))
#line 453 "prog_io_item.m"
            parse_tree__prog_io_item__case_num_0 = (MR_Integer) 0;
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 102:
#line 453 "prog_io_item.m"
#line 453 "prog_io_item.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) {
#line 453 "prog_io_item.m"
            case (MR_Integer) 105:
#line 453 "prog_io_item.m"
              if (((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 5)) == (MR_Integer) 105))))
#line 453 "prog_io_item.m"
#line 453 "prog_io_item.m"
                switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 6)) {
#line 453 "prog_io_item.m"
                  case (MR_Integer) 115:
#line 453 "prog_io_item.m"
                    if (MR_offset_streq(7, parse_tree__prog_io_item__Functor_11, (MR_String) "finalise"))
#line 453 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 1;
#line 453 "prog_io_item.m"
                    break;
#line 453 "prog_io_item.m"
                  case (MR_Integer) 122:
#line 453 "prog_io_item.m"
                    if (MR_offset_streq(7, parse_tree__prog_io_item__Functor_11, (MR_String) "finalize"))
#line 453 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 1;
#line 453 "prog_io_item.m"
                    break;
#line 453 "prog_io_item.m"
                }
#line 453 "prog_io_item.m"
              break;
#line 453 "prog_io_item.m"
            case (MR_Integer) 117:
#line 453 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_11, (MR_String) "func"))
#line 453 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 2;
#line 453 "prog_io_item.m"
              break;
#line 453 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 105:
#line 453 "prog_io_item.m"
          if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) == (MR_Integer) 110))
#line 453 "prog_io_item.m"
#line 453 "prog_io_item.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) {
#line 453 "prog_io_item.m"
              case (MR_Integer) 105:
#line 453 "prog_io_item.m"
                if (((((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 116)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 6)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 7)) == (MR_Integer) 105))))
#line 453 "prog_io_item.m"
#line 453 "prog_io_item.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 8)) {
#line 453 "prog_io_item.m"
                    case (MR_Integer) 115:
#line 453 "prog_io_item.m"
                      if (MR_offset_streq(9, parse_tree__prog_io_item__Functor_11, (MR_String) "initialise"))
#line 453 "prog_io_item.m"
                        parse_tree__prog_io_item__case_num_0 = (MR_Integer) 3;
#line 453 "prog_io_item.m"
                      break;
#line 453 "prog_io_item.m"
                    case (MR_Integer) 122:
#line 453 "prog_io_item.m"
                      if (MR_offset_streq(9, parse_tree__prog_io_item__Functor_11, (MR_String) "initialize"))
#line 453 "prog_io_item.m"
                        parse_tree__prog_io_item__case_num_0 = (MR_Integer) 3;
#line 453 "prog_io_item.m"
                      break;
#line 453 "prog_io_item.m"
                  }
#line 453 "prog_io_item.m"
                break;
#line 453 "prog_io_item.m"
              case (MR_Integer) 115:
#line 453 "prog_io_item.m"
                if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 116))
#line 453 "prog_io_item.m"
#line 453 "prog_io_item.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) {
#line 453 "prog_io_item.m"
                    case (MR_Integer) 0:
#line 453 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 4;
#line 453 "prog_io_item.m"
                      break;
#line 453 "prog_io_item.m"
                    case (MR_Integer) 97:
#line 453 "prog_io_item.m"
                      if (MR_offset_streq(5, parse_tree__prog_io_item__Functor_11, (MR_String) "instance"))
#line 453 "prog_io_item.m"
                        parse_tree__prog_io_item__case_num_0 = (MR_Integer) 5;
#line 453 "prog_io_item.m"
                      break;
#line 453 "prog_io_item.m"
                  }
#line 453 "prog_io_item.m"
                break;
#line 453 "prog_io_item.m"
            }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 109:
#line 453 "prog_io_item.m"
#line 453 "prog_io_item.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) {
#line 453 "prog_io_item.m"
            case (MR_Integer) 111:
#line 453 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_11, (MR_String) "mode"))
#line 453 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 6;
#line 453 "prog_io_item.m"
              break;
#line 453 "prog_io_item.m"
            case (MR_Integer) 117:
#line 453 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_11, (MR_String) "mutable"))
#line 453 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 7;
#line 453 "prog_io_item.m"
              break;
#line 453 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 112:
#line 453 "prog_io_item.m"
          if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) == (MR_Integer) 114))
#line 453 "prog_io_item.m"
#line 453 "prog_io_item.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) {
#line 453 "prog_io_item.m"
              case (MR_Integer) 97:
#line 453 "prog_io_item.m"
                if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_11, (MR_String) "pragma"))
#line 453 "prog_io_item.m"
                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 8;
#line 453 "prog_io_item.m"
                break;
#line 453 "prog_io_item.m"
              case (MR_Integer) 101:
#line 453 "prog_io_item.m"
                if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_11, (MR_String) "pred"))
#line 453 "prog_io_item.m"
                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 9;
#line 453 "prog_io_item.m"
                break;
#line 453 "prog_io_item.m"
              case (MR_Integer) 111:
#line 453 "prog_io_item.m"
                if (((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 109)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 6)) == (MR_Integer) 101))))
#line 453 "prog_io_item.m"
#line 453 "prog_io_item.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 7)) {
#line 453 "prog_io_item.m"
                    case (MR_Integer) 0:
#line 453 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 10;
#line 453 "prog_io_item.m"
                      break;
#line 453 "prog_io_item.m"
                    case (MR_Integer) 95:
#line 453 "prog_io_item.m"
                      if (((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 8)) == (MR_Integer) 101)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 9)) == (MR_Integer) 120))))
#line 453 "prog_io_item.m"
#line 453 "prog_io_item.m"
                        switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 10)) {
#line 453 "prog_io_item.m"
                          case (MR_Integer) 99:
#line 453 "prog_io_item.m"
                            if (((((((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 11)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 12)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 13)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 15)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 16)) == (MR_Integer) 101))))
#line 453 "prog_io_item.m"
#line 453 "prog_io_item.m"
                              switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 17)) {
#line 453 "prog_io_item.m"
                                case (MR_Integer) 0:
#line 453 "prog_io_item.m"
                                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 11;
#line 453 "prog_io_item.m"
                                  break;
#line 453 "prog_io_item.m"
                                case (MR_Integer) 95:
#line 453 "prog_io_item.m"
                                  if (MR_offset_streq(18, parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exclusive_exhaustive"))
#line 453 "prog_io_item.m"
                                    parse_tree__prog_io_item__case_num_0 = (MR_Integer) 12;
#line 453 "prog_io_item.m"
                                  break;
#line 453 "prog_io_item.m"
                              }
#line 453 "prog_io_item.m"
                            break;
#line 453 "prog_io_item.m"
                          case (MR_Integer) 104:
#line 453 "prog_io_item.m"
                            if (MR_offset_streq(11, parse_tree__prog_io_item__Functor_11, (MR_String) "promise_exhaustive"))
#line 453 "prog_io_item.m"
                              parse_tree__prog_io_item__case_num_0 = (MR_Integer) 13;
#line 453 "prog_io_item.m"
                            break;
#line 453 "prog_io_item.m"
                        }
#line 453 "prog_io_item.m"
                      break;
#line 453 "prog_io_item.m"
                  }
#line 453 "prog_io_item.m"
                break;
#line 453 "prog_io_item.m"
            }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 116:
#line 453 "prog_io_item.m"
          if (((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 1)) == (MR_Integer) 121)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 2)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 3)) == (MR_Integer) 101))))
#line 453 "prog_io_item.m"
#line 453 "prog_io_item.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_11, 4)) {
#line 453 "prog_io_item.m"
              case (MR_Integer) 0:
#line 453 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 14;
#line 453 "prog_io_item.m"
                break;
#line 453 "prog_io_item.m"
              case (MR_Integer) 99:
#line 453 "prog_io_item.m"
                if (MR_offset_streq(5, parse_tree__prog_io_item__Functor_11, (MR_String) "typeclass"))
#line 453 "prog_io_item.m"
                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 15;
#line 453 "prog_io_item.m"
                break;
#line 453 "prog_io_item.m"
            }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
      }
#line 453 "prog_io_item.m"
#line 453 "prog_io_item.m"
      switch (parse_tree__prog_io_item__case_num_0) {
#line 453 "prog_io_item.m"
        default:
#line 453 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 0:
#line 487 "prog_io_item.m"
          {
#line 487 "prog_io_item.m"
            /* case "external" */
#line 487 "prog_io_item.m"
            {
#line 487 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_107_107;
#line 487 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__PredSpecTerm_26;
#line 487 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeBackEnd_27;
#line 487 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeSymSpec_32;
#line 487 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_90;
#line 487 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_127_127;
#line 487 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_128_128;

#line 489 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 489 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 489 "prog_io_item.m"
                {
#line 489 "prog_io_item.m"
                  parse_tree__prog_io_item__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 489 "prog_io_item.m"
                  parse_tree__prog_io_item__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 491 "prog_io_item.m"
                  if ((parse_tree__prog_io_item__V_127_127 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "prog_io_item.m"
                    {
#line 489 "prog_io_item.m"
                      parse_tree__prog_io_item__PredSpecTerm_26 = parse_tree__prog_io_item__V_128_128;
#line 490 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeBackEnd_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 489 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 489 "prog_io_item.m"
                    }
#line 491 "prog_io_item.m"
                  else
#line 492 "prog_io_item.m"
                    {
#line 492 "prog_io_item.m"
                      MR_String parse_tree__prog_io_item__BackEndFunctor_29;
#line 492 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__BackEnd_31;
#line 492 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_56_56;
#line 492 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_57_57;
#line 492 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_58_58;
#line 493 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_30_30;

#line 492 "prog_io_item.m"
                      parse_tree__prog_io_item__PredSpecTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_127_127, (MR_Integer) 0)));
#line 492 "prog_io_item.m"
                      parse_tree__prog_io_item__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_127_127, (MR_Integer) 1)));
#line 492 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 492 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 492 "prog_io_item.m"
                        {
#line 493 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_128_128)) == (MR_mktag((MR_Integer) 0)));
#line 493 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 493 "prog_io_item.m"
                            {
#line 493 "prog_io_item.m"
                              parse_tree__prog_io_item__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_128_128, (MR_Integer) 0)));
#line 493 "prog_io_item.m"
                              parse_tree__prog_io_item__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_128_128, (MR_Integer) 1)));
#line 493 "prog_io_item.m"
                              parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_128_128, (MR_Integer) 2)));
#line 493 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 492 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 492 "prog_io_item.m"
                                {
#line 493 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_57_57)) == (MR_mktag((MR_Integer) 0)));
#line 493 "prog_io_item.m"
                                  if (parse_tree__prog_io_item__succeeded)
#line 493 "prog_io_item.m"
                                    {
#line 493 "prog_io_item.m"
                                      parse_tree__prog_io_item__BackEndFunctor_29 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, (MR_Integer) 0)));
#line 497 "prog_io_item.m"
                                      if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_29, (MR_String) "low_level_backend") == 0))
#line 498 "prog_io_item.m"
                                        {
#line 498 "prog_io_item.m"
                                          parse_tree__prog_io_item__BackEnd_31 = (MR_Integer) 1;
#line 498 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 498 "prog_io_item.m"
                                        }
#line 497 "prog_io_item.m"
                                      else
#line 497 "prog_io_item.m"
                                      if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_29, (MR_String) "high_level_backend") == 0))
#line 495 "prog_io_item.m"
                                        {
#line 495 "prog_io_item.m"
                                          parse_tree__prog_io_item__BackEnd_31 = (MR_Integer) 0;
#line 495 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 495 "prog_io_item.m"
                                        }
#line 497 "prog_io_item.m"
                                      else
#line 497 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 492 "prog_io_item.m"
                                      if (parse_tree__prog_io_item__succeeded)
#line 492 "prog_io_item.m"
                                        {
#line 501 "prog_io_item.m"
                                          {
#line 501 "prog_io_item.m"
                                            parse_tree__prog_io_item__MaybeBackEnd_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 501 "prog_io_item.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeBackEnd_27, 0) = ((MR_Box) (parse_tree__prog_io_item__BackEnd_31));
#line 501 "prog_io_item.m"
                                          }
#line 501 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 492 "prog_io_item.m"
                                        }
#line 493 "prog_io_item.m"
                                    }
#line 492 "prog_io_item.m"
                                }
#line 493 "prog_io_item.m"
                            }
#line 492 "prog_io_item.m"
                        }
#line 492 "prog_io_item.m"
                    }
#line 487 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 487 "prog_io_item.m"
                    {
#line 503 "prog_io_item.m"
                      {
#line 503 "prog_io_item.m"
                        parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__PredSpecTerm_26, &parse_tree__prog_io_item__MaybeSymSpec_32);
                      }
#line 508 "prog_io_item.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeSymSpec_32)) == (MR_mktag((MR_Integer) 0))))
#line 507 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeItem0_90 = (MR_Word) parse_tree__prog_io_item__MaybeSymSpec_32;
#line 508 "prog_io_item.m"
                      else
#line 509 "prog_io_item.m"
                        {
#line 509 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__SymSpec_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeSymSpec_32, (MR_Integer) 0)));

#line 518 "prog_io_item.m"
                          if (((MR_tag((MR_Word) parse_tree__prog_io_item__SymSpec_34)) == (MR_mktag((MR_Integer) 0))))
#line 511 "prog_io_item.m"
                            {
#line 511 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Msg_37;
#line 511 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Spec_38;
#line 511 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__V_77_77;
#line 511 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__V_79_79;

#line 514 "prog_io_item.m"
                              {
#line 514 "prog_io_item.m"
                                parse_tree__prog_io_item__Msg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 514 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Msg_37, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 514 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Msg_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[121])));
#line 514 "prog_io_item.m"
                              }
#line 516 "prog_io_item.m"
                              {
#line 516 "prog_io_item.m"
                                parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__Msg_37));
#line 516 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 516 "prog_io_item.m"
                              }
#line 515 "prog_io_item.m"
                              {
#line 515 "prog_io_item.m"
                                parse_tree__prog_io_item__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 515 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 515 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 515 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 515 "prog_io_item.m"
                              }
#line 517 "prog_io_item.m"
                              {
#line 517 "prog_io_item.m"
                                parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_38));
#line 517 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 517 "prog_io_item.m"
                              }
#line 517 "prog_io_item.m"
                              {
#line 517 "prog_io_item.m"
                                parse_tree__prog_io_item__MaybeItem0_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 517 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeItem0_90, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 517 "prog_io_item.m"
                              }
#line 511 "prog_io_item.m"
                            }
#line 518 "prog_io_item.m"
                          else
#line 519 "prog_io_item.m"
                            {
#line 519 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Name_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__SymSpec_34, (MR_Integer) 0)));
#line 519 "prog_io_item.m"
                              MR_Integer parse_tree__prog_io_item__Arity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__SymSpec_34, (MR_Integer) 1)));
#line 519 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__ExternalInfo_42;
#line 519 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Pragma_43;
#line 519 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__ItemPragma_44;
#line 519 "prog_io_item.m"
                              MR_Word parse_tree__prog_io_item__Item_45;

#line 521 "prog_io_item.m"
                              {
#line 521 "prog_io_item.m"
                                parse_tree__prog_io_item__ExternalInfo_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 521 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_39));
#line 521 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_42, 1) = ((MR_Box) (parse_tree__prog_io_item__Arity_40));
#line 521 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_42, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 521 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_42, 3) = ((MR_Box) (parse_tree__prog_io_item__MaybeBackEnd_27));
#line 521 "prog_io_item.m"
                              }
#line 523 "prog_io_item.m"
                              {
#line 523 "prog_io_item.m"
                                parse_tree__prog_io_item__Pragma_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "prog_io_item.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Pragma_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 523 "prog_io_item.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Pragma_43, 1) = ((MR_Box) (parse_tree__prog_io_item__ExternalInfo_42));
#line 523 "prog_io_item.m"
                              }
#line 524 "prog_io_item.m"
                              {
#line 524 "prog_io_item.m"
                                parse_tree__prog_io_item__ItemPragma_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 524 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_44, 0) = ((MR_Box) (parse_tree__prog_io_item__Pragma_43));
#line 524 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_44, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_14));
#line 524 "prog_io_item.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_44, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_15));
#line 524 "prog_io_item.m"
                              }
#line 526 "prog_io_item.m"
                              {
#line 526 "prog_io_item.m"
                                parse_tree__prog_io_item__Item_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "prog_io_item.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 526 "prog_io_item.m"
                                MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_45, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPragma_44));
#line 526 "prog_io_item.m"
                              }
#line 527 "prog_io_item.m"
                              {
#line 527 "prog_io_item.m"
                                parse_tree__prog_io_item__MaybeItem0_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 527 "prog_io_item.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_90, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_45));
#line 527 "prog_io_item.m"
                              }
#line 519 "prog_io_item.m"
                            }
#line 509 "prog_io_item.m"
                        }
#line 12581 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 530 "prog_io_item.m"
                      {
#line 530 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_107_107, parse_tree__prog_io_item__MaybeItem0_90, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 530 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 487 "prog_io_item.m"
                    }
#line 489 "prog_io_item.m"
                }
#line 487 "prog_io_item.m"
            }
#line 487 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 1:
#line 588 "prog_io_item.m"
          {
#line 588 "prog_io_item.m"
            /* case "finalise", "finalize" */
#line 588 "prog_io_item.m"
            {
#line 588 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_113_113;
#line 588 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_51_51;
#line 588 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_103;
#line 588 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__SubTerm_104;

#line 589 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 589 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 589 "prog_io_item.m"
                {
#line 589 "prog_io_item.m"
                  parse_tree__prog_io_item__SubTerm_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 589 "prog_io_item.m"
                  parse_tree__prog_io_item__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 589 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 588 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 588 "prog_io_item.m"
                    {
#line 590 "prog_io_item.m"
                      {
#line 590 "prog_io_item.m"
                        parse_tree__prog_io_mutable__parse_finalise_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_104, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_103);
                      }
#line 12638 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_113_113 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 592 "prog_io_item.m"
                      {
#line 592 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_113_113, parse_tree__prog_io_item__MaybeItem0_103, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 592 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 588 "prog_io_item.m"
                    }
#line 589 "prog_io_item.m"
                }
#line 588 "prog_io_item.m"
            }
#line 588 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 2:
#line 482 "prog_io_item.m"
          {
#line 482 "prog_io_item.m"
            /* case "func" */
#line 482 "prog_io_item.m"
            {
#line 482 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__DeclTerm_25;
#line 482 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_81_81;

#line 483 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 483 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 483 "prog_io_item.m"
                {
#line 483 "prog_io_item.m"
                  parse_tree__prog_io_item__DeclTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 483 "prog_io_item.m"
                  parse_tree__prog_io_item__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 483 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 482 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 482 "prog_io_item.m"
                    {
#line 484 "prog_io_item.m"
                      {
#line 484 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0((MR_Integer) 1, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__DeclTerm_25, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 484 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 482 "prog_io_item.m"
                    }
#line 483 "prog_io_item.m"
                }
#line 482 "prog_io_item.m"
            }
#line 482 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 3:
#line 580 "prog_io_item.m"
          {
#line 580 "prog_io_item.m"
            /* case "initialise", "initialize" */
#line 580 "prog_io_item.m"
            {
#line 580 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_112_112;
#line 580 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_52_52;
#line 580 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_101;
#line 580 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__SubTerm_102;

#line 581 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 581 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 581 "prog_io_item.m"
                {
#line 581 "prog_io_item.m"
                  parse_tree__prog_io_item__SubTerm_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 581 "prog_io_item.m"
                  parse_tree__prog_io_item__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 581 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 580 "prog_io_item.m"
                    {
#line 582 "prog_io_item.m"
                      {
#line 582 "prog_io_item.m"
                        parse_tree__prog_io_mutable__parse_initialise_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_102, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_101);
                      }
#line 12741 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 584 "prog_io_item.m"
                      {
#line 584 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_112_112, parse_tree__prog_io_item__MaybeItem0_101, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 584 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 580 "prog_io_item.m"
                    }
#line 581 "prog_io_item.m"
                }
#line 580 "prog_io_item.m"
            }
#line 580 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 4:
#line 458 "prog_io_item.m"
          {
#line 458 "prog_io_item.m"
            /* case "inst" */
#line 458 "prog_io_item.m"
            {
#line 458 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_106_106;
#line 458 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__InstDeclTerm_18;
#line 458 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_19;
#line 458 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_88_88;

#line 459 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 459 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 459 "prog_io_item.m"
                {
#line 459 "prog_io_item.m"
                  parse_tree__prog_io_item__InstDeclTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 459 "prog_io_item.m"
                  parse_tree__prog_io_item__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 459 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 458 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 458 "prog_io_item.m"
                    {
#line 460 "prog_io_item.m"
                      {
#line 460 "prog_io_item.m"
                        parse_tree__prog_io_mode_defn__parse_inst_defn_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__InstDeclTerm_18, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_19);
                      }
#line 12798 "parse_tree.prog_io_item.c"
                      parse_tree__prog_io_item__TypeCtorInfo_106_106 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 462 "prog_io_item.m"
                      {
#line 462 "prog_io_item.m"
                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_106_106, parse_tree__prog_io_item__MaybeItem0_19, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 462 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 458 "prog_io_item.m"
                    }
#line 459 "prog_io_item.m"
                }
#line 458 "prog_io_item.m"
            }
#line 458 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 5:
#line 566 "prog_io_item.m"
          {
#line 566 "prog_io_item.m"
            /* case "instance" */
#line 566 "prog_io_item.m"
            {
#line 566 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_111_111;
#line 566 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItemInstance_49;
#line 566 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_99;

#line 567 "prog_io_item.m"
              {
#line 567 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_typeclass__parse_instance_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItemInstance_49);
              }
#line 566 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 566 "prog_io_item.m"
                {
#line 572 "prog_io_item.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItemInstance_49)) == (MR_mktag((MR_Integer) 0))))
#line 574 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeItem0_99 = (MR_Word) parse_tree__prog_io_item__MaybeItemInstance_49;
#line 572 "prog_io_item.m"
                  else
#line 570 "prog_io_item.m"
                    {
#line 570 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__ItemInstance_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItemInstance_49, (MR_Integer) 0)));
#line 570 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_53_53;

#line 571 "prog_io_item.m"
                      {
#line 571 "prog_io_item.m"
                        parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 571 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemInstance_50));
#line 571 "prog_io_item.m"
                      }
#line 571 "prog_io_item.m"
                      {
#line 571 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeItem0_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 571 "prog_io_item.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_99, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 571 "prog_io_item.m"
                      }
#line 570 "prog_io_item.m"
                    }
#line 12874 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_111_111 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 576 "prog_io_item.m"
                  {
#line 576 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_111_111, parse_tree__prog_io_item__MaybeItem0_99, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 576 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 566 "prog_io_item.m"
                }
#line 566 "prog_io_item.m"
            }
#line 566 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 6:
#line 464 "prog_io_item.m"
          {
#line 464 "prog_io_item.m"
            /* case "mode" */
#line 464 "prog_io_item.m"
            {
#line 464 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__SubTerm_20;
#line 464 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_82_82;
#line 470 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__HeadTerm_21;
#line 470 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__BodyTerm_22;
#line 466 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_83_83;
#line 466 "prog_io_item.m"
              MR_String parse_tree__prog_io_item__V_84_84;
#line 466 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_85_85;
#line 466 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_86_86;
#line 466 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_87_87;
#line 466 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_23_23;

#line 465 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 465 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 465 "prog_io_item.m"
                {
#line 465 "prog_io_item.m"
                  parse_tree__prog_io_item__SubTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 465 "prog_io_item.m"
                  parse_tree__prog_io_item__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 465 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 464 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 464 "prog_io_item.m"
                    {
#line 466 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__SubTerm_20)) == (MR_mktag((MR_Integer) 0)));
#line 466 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 466 "prog_io_item.m"
                        {
#line 466 "prog_io_item.m"
                          parse_tree__prog_io_item__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 0)));
#line 466 "prog_io_item.m"
                          parse_tree__prog_io_item__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 1)));
#line 466 "prog_io_item.m"
                          parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_20, (MR_Integer) 2)));
#line 466 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_83_83)) == (MR_mktag((MR_Integer) 0)));
#line 466 "prog_io_item.m"
                          if (parse_tree__prog_io_item__succeeded)
#line 466 "prog_io_item.m"
                            {
#line 466 "prog_io_item.m"
                              parse_tree__prog_io_item__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_83_83, (MR_Integer) 0)));
#line 466 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_84_84, (MR_String) "==") == 0);
#line 466 "prog_io_item.m"
                              if (parse_tree__prog_io_item__succeeded)
#line 466 "prog_io_item.m"
                                {
#line 466 "prog_io_item.m"
                                  parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 466 "prog_io_item.m"
                                  if (parse_tree__prog_io_item__succeeded)
#line 466 "prog_io_item.m"
                                    {
#line 466 "prog_io_item.m"
                                      parse_tree__prog_io_item__HeadTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, (MR_Integer) 0)));
#line 466 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, (MR_Integer) 1)));
#line 466 "prog_io_item.m"
                                      parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_86_86)) == (MR_mktag((MR_Integer) 1)));
#line 466 "prog_io_item.m"
                                      if (parse_tree__prog_io_item__succeeded)
#line 466 "prog_io_item.m"
                                        {
#line 466 "prog_io_item.m"
                                          parse_tree__prog_io_item__BodyTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_86_86, (MR_Integer) 0)));
#line 466 "prog_io_item.m"
                                          parse_tree__prog_io_item__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_86_86, (MR_Integer) 1)));
#line 466 "prog_io_item.m"
                                          parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "prog_io_item.m"
                                        }
#line 466 "prog_io_item.m"
                                    }
#line 466 "prog_io_item.m"
                                }
#line 466 "prog_io_item.m"
                            }
#line 466 "prog_io_item.m"
                        }
#line 470 "prog_io_item.m"
                      if (parse_tree__prog_io_item__succeeded)
#line 468 "prog_io_item.m"
                        {
#line 468 "prog_io_item.m"
                          parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__HeadTerm_21, parse_tree__prog_io_item__BodyTerm_22, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                        }
#line 470 "prog_io_item.m"
                      else
#line 472 "prog_io_item.m"
                        {
#line 472 "prog_io_item.m"
                          parse_tree__prog_io_item__parse_mode_decl_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_20, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                        }
#line 470 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 464 "prog_io_item.m"
                    }
#line 465 "prog_io_item.m"
                }
#line 464 "prog_io_item.m"
            }
#line 464 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 7:
#line 594 "prog_io_item.m"
          {
#line 594 "prog_io_item.m"
            /* case "mutable" */
#line 594 "prog_io_item.m"
            {
#line 594 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_114_114;
#line 594 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_105;

#line 595 "prog_io_item.m"
              {
#line 595 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_mutable__parse_mutable_decl_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_105);
              }
#line 594 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 594 "prog_io_item.m"
                {
#line 13042 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 597 "prog_io_item.m"
                  {
#line 597 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_114_114, parse_tree__prog_io_item__MaybeItem0_105, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 597 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 594 "prog_io_item.m"
                }
#line 594 "prog_io_item.m"
            }
#line 594 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 8:
#line 532 "prog_io_item.m"
          {
#line 532 "prog_io_item.m"
            /* case "pragma" */
#line 532 "prog_io_item.m"
            {
#line 532 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_108_108;
#line 532 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_91;

#line 533 "prog_io_item.m"
              {
#line 533 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_pragma__parse_pragma_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_91);
              }
#line 532 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 532 "prog_io_item.m"
                {
#line 13081 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_108_108 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 535 "prog_io_item.m"
                  {
#line 535 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_108_108, parse_tree__prog_io_item__MaybeItem0_91, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 535 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 532 "prog_io_item.m"
                }
#line 532 "prog_io_item.m"
            }
#line 532 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 9:
#line 482 "prog_io_item.m"
          {
#line 482 "prog_io_item.m"
            /* case "pred" */
#line 482 "prog_io_item.m"
            {
#line 482 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__DeclTerm_116;
#line 482 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_117_117;

#line 483 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 483 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 483 "prog_io_item.m"
                {
#line 483 "prog_io_item.m"
                  parse_tree__prog_io_item__DeclTerm_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 483 "prog_io_item.m"
                  parse_tree__prog_io_item__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 483 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_117_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 482 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 482 "prog_io_item.m"
                    {
#line 484 "prog_io_item.m"
                      {
#line 484 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_pred_or_func_decl_8_p_0((MR_Integer) 0, parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__DeclTerm_116, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 484 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 482 "prog_io_item.m"
                    }
#line 483 "prog_io_item.m"
                }
#line 482 "prog_io_item.m"
            }
#line 482 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 10:
#line 549 "prog_io_item.m"
          {
#line 549 "prog_io_item.m"
            /* case "promise" */
#line 549 "prog_io_item.m"
            {
#line 549 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_109_109;
#line 549 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_92;

#line 550 "prog_io_item.m"
              {
#line 550 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 3, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_92);
              }
#line 549 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 549 "prog_io_item.m"
                {
#line 13166 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_109_109 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 552 "prog_io_item.m"
                  {
#line 552 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_109_109, parse_tree__prog_io_item__MaybeItem0_92, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 552 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 549 "prog_io_item.m"
                }
#line 549 "prog_io_item.m"
            }
#line 549 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 11:
#line 549 "prog_io_item.m"
          {
#line 549 "prog_io_item.m"
            /* case "promise_exclusive" */
#line 549 "prog_io_item.m"
            {
#line 549 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_109_120;
#line 549 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_119;

#line 550 "prog_io_item.m"
              {
#line 550 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_119);
              }
#line 549 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 549 "prog_io_item.m"
                {
#line 13205 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_109_120 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 552 "prog_io_item.m"
                  {
#line 552 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_109_120, parse_tree__prog_io_item__MaybeItem0_119, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 552 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 549 "prog_io_item.m"
                }
#line 549 "prog_io_item.m"
            }
#line 549 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 12:
#line 549 "prog_io_item.m"
          {
#line 549 "prog_io_item.m"
            /* case "promise_exclusive_exhaustive" */
#line 549 "prog_io_item.m"
            {
#line 549 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_109_123;
#line 549 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_122;

#line 550 "prog_io_item.m"
              {
#line 550 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 2, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_122);
              }
#line 549 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 549 "prog_io_item.m"
                {
#line 13244 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_109_123 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 552 "prog_io_item.m"
                  {
#line 552 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_109_123, parse_tree__prog_io_item__MaybeItem0_122, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 552 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 549 "prog_io_item.m"
                }
#line 549 "prog_io_item.m"
            }
#line 549 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 13:
#line 549 "prog_io_item.m"
          {
#line 549 "prog_io_item.m"
            /* case "promise_exhaustive" */
#line 549 "prog_io_item.m"
            {
#line 549 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_109_126;
#line 549 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_125;

#line 550 "prog_io_item.m"
              {
#line 550 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItem0_125);
              }
#line 549 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 549 "prog_io_item.m"
                {
#line 13283 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_109_126 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 552 "prog_io_item.m"
                  {
#line 552 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_109_126, parse_tree__prog_io_item__MaybeItem0_125, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 552 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 549 "prog_io_item.m"
                }
#line 549 "prog_io_item.m"
            }
#line 549 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 14:
#line 453 "prog_io_item.m"
          {
#line 453 "prog_io_item.m"
            /* case "type" */
#line 453 "prog_io_item.m"
            {
#line 453 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeDefnTerm_17;
#line 453 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_89_89;

#line 454 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 454 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 454 "prog_io_item.m"
                {
#line 454 "prog_io_item.m"
                  parse_tree__prog_io_item__TypeDefnTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 454 "prog_io_item.m"
                  parse_tree__prog_io_item__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 454 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "prog_io_item.m"
                  if (parse_tree__prog_io_item__succeeded)
#line 453 "prog_io_item.m"
                    {
#line 455 "prog_io_item.m"
                      {
#line 455 "prog_io_item.m"
                        parse_tree__prog_io_type_defn__parse_type_defn_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__TypeDefnTerm_17, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__MaybeItem_16);
                      }
#line 455 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 453 "prog_io_item.m"
                    }
#line 454 "prog_io_item.m"
                }
#line 453 "prog_io_item.m"
            }
#line 453 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
        case (MR_Integer) 15:
#line 554 "prog_io_item.m"
          {
#line 554 "prog_io_item.m"
            /* case "typeclass" */
#line 554 "prog_io_item.m"
            {
#line 554 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__TypeCtorInfo_110_110;
#line 554 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItemTypeClass_47;
#line 554 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__MaybeItem0_95;

#line 555 "prog_io_item.m"
              {
#line 555 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = parse_tree__prog_io_typeclass__parse_typeclass_6_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_12, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, &parse_tree__prog_io_item__MaybeItemTypeClass_47);
              }
#line 554 "prog_io_item.m"
              if (parse_tree__prog_io_item__succeeded)
#line 554 "prog_io_item.m"
                {
#line 560 "prog_io_item.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItemTypeClass_47)) == (MR_mktag((MR_Integer) 0))))
#line 562 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeItem0_95 = (MR_Word) parse_tree__prog_io_item__MaybeItemTypeClass_47;
#line 560 "prog_io_item.m"
                  else
#line 558 "prog_io_item.m"
                    {
#line 558 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__ItemTypeClass_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItemTypeClass_47, (MR_Integer) 0)));
#line 558 "prog_io_item.m"
                      MR_Word parse_tree__prog_io_item__V_54_54;

#line 559 "prog_io_item.m"
                      {
#line 559 "prog_io_item.m"
                        parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 559 "prog_io_item.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemTypeClass_48));
#line 559 "prog_io_item.m"
                      }
#line 559 "prog_io_item.m"
                      {
#line 559 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeItem0_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 559 "prog_io_item.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem0_95, 0) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 559 "prog_io_item.m"
                      }
#line 558 "prog_io_item.m"
                    }
#line 13403 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__TypeCtorInfo_110_110 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 564 "prog_io_item.m"
                  {
#line 564 "prog_io_item.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_110_110, parse_tree__prog_io_item__MaybeItem0_95, parse_tree__prog_io_item__Attributes_13, parse_tree__prog_io_item__MaybeItem_16);
                  }
#line 564 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 554 "prog_io_item.m"
                }
#line 554 "prog_io_item.m"
            }
#line 554 "prog_io_item.m"
          }
#line 453 "prog_io_item.m"
          break;
#line 453 "prog_io_item.m"
      }
#line 453 "prog_io_item.m"
    }
#line 453 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 453 "prog_io_item.m"
  }
#line 446 "prog_io_item.m"
}

#line 405 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(
#line 405 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 405 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_8,
#line 405 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_9,
#line 405 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22,
#line 405 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 405 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_12)
#line 405 "prog_io_item.m"
{
#line 430 "prog_io_item.m"
  while (MR_TRUE)
#line 430 "prog_io_item.m"
    {
#line 430 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 430 "prog_io_item.m"
      {
#line 430 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 430 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__Functor_13;
#line 430 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Args_14;
#line 430 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_15;
#line 410 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;

#line 410 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 410 "prog_io_item.m"
          {
#line 410 "prog_io_item.m"
            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 0)));
#line 410 "prog_io_item.m"
            parse_tree__prog_io_item__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 1)));
#line 410 "prog_io_item.m"
            parse_tree__prog_io_item__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_9, (MR_Integer) 2)));
#line 410 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 410 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 410 "prog_io_item.m"
              parse_tree__prog_io_item__Functor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_23_23, (MR_Integer) 0)));
#line 410 "prog_io_item.m"
          }
#line 430 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 417 "prog_io_item.m"
          {
#line 417 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Attribute_16;
#line 417 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__SubTerm_17;

#line 412 "prog_io_item.m"
            {
#line 412 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__parse_decl_attribute_4_p_0(parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__Args_14, &parse_tree__prog_io_item__Attribute_16, &parse_tree__prog_io_item__SubTerm_17);
            }
#line 417 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 414 "prog_io_item.m"
              {
#line 414 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24;
#line 414 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_25_25;

#line 414 "prog_io_item.m"
                {
#line 414 "prog_io_item.m"
                  parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 414 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Attribute_16));
#line 414 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 414 "prog_io_item.m"
                }
#line 414 "prog_io_item.m"
                {
#line 414 "prog_io_item.m"
                  parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24, 0) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 414 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24, 1) = ((MR_Box) (parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22));
#line 414 "prog_io_item.m"
                }
#line 415 "prog_io_item.m"
                /* direct tailcall eliminated */
#line 415 "prog_io_item.m"
                {
#line 415 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__Term__tmp_copy_9 = parse_tree__prog_io_item__SubTerm_17;
#line 415 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_22 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_24_24;

#line 415 "prog_io_item.m"
                  parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22 = parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0__tmp_copy_22;
#line 415 "prog_io_item.m"
                  parse_tree__prog_io_item__Term_9 = parse_tree__prog_io_item__Term__tmp_copy_9;
#line 415 "prog_io_item.m"
                }
#line 415 "prog_io_item.m"
                continue;
#line 414 "prog_io_item.m"
              }
#line 417 "prog_io_item.m"
            else
#line 422 "prog_io_item.m"
              {
#line 422 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeItemPrime_18;

#line 418 "prog_io_item.m"
                {
#line 418 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_attributed_decl_8_p_0(parse_tree__prog_io_item__ModuleName_7, parse_tree__prog_io_item__VarSet_8, parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__Args_14, parse_tree__prog_io_item__STATE_VARIABLE_Attributes_0_22, parse_tree__prog_io_item__Context_15, parse_tree__prog_io_item__SeqNum_11, &parse_tree__prog_io_item__MaybeItemPrime_18);
                }
#line 422 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 421 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_12 = parse_tree__prog_io_item__MaybeItemPrime_18;
#line 422 "prog_io_item.m"
                else
#line 423 "prog_io_item.m"
                  {
#line 423 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__TermStr_19;
#line 423 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Pieces_20;
#line 423 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_21;
#line 423 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_29_29;
#line 423 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_31_31;
#line 423 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_32_32;
#line 423 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_41_41;
#line 423 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_42_42;
#line 423 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_43_43;
#line 423 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_44_44;
#line 423 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_47_47;

#line 423 "prog_io_item.m"
                    {
#line 423 "prog_io_item.m"
                      parse_tree__prog_io_item__TermStr_19 = parse_tree__mercury_to_mercury__mercury_term_to_string_3_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__VarSet_8, (MR_Integer) 0, parse_tree__prog_io_item__Term_9);
                    }
#line 425 "prog_io_item.m"
                    {
#line 425 "prog_io_item.m"
                      parse_tree__prog_io_item__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 425 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_19));
#line 425 "prog_io_item.m"
                    }
#line 425 "prog_io_item.m"
                    {
#line 425 "prog_io_item.m"
                      parse_tree__prog_io_item__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 425 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[15])));
#line 425 "prog_io_item.m"
                    }
#line 424 "prog_io_item.m"
                    {
#line 424 "prog_io_item.m"
                      parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 424 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_item__V_31_31));
#line 424 "prog_io_item.m"
                    }
#line 424 "prog_io_item.m"
                    {
#line 424 "prog_io_item.m"
                      parse_tree__prog_io_item__Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[120])));
#line 424 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_20, 1) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 424 "prog_io_item.m"
                    }
#line 427 "prog_io_item.m"
                    {
#line 427 "prog_io_item.m"
                      parse_tree__prog_io_item__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 427 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_20));
#line 427 "prog_io_item.m"
                    }
#line 427 "prog_io_item.m"
                    {
#line 427 "prog_io_item.m"
                      parse_tree__prog_io_item__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_item__V_44_44));
#line 427 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "prog_io_item.m"
                    }
#line 427 "prog_io_item.m"
                    {
#line 427 "prog_io_item.m"
                      parse_tree__prog_io_item__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 427 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 427 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io_item__V_43_43));
#line 427 "prog_io_item.m"
                    }
#line 427 "prog_io_item.m"
                    {
#line 427 "prog_io_item.m"
                      parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 427 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "prog_io_item.m"
                    }
#line 426 "prog_io_item.m"
                    {
#line 426 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 426 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 426 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_21, 2) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 426 "prog_io_item.m"
                    }
#line 428 "prog_io_item.m"
                    {
#line 428 "prog_io_item.m"
                      parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_21));
#line 428 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "prog_io_item.m"
                    }
#line 428 "prog_io_item.m"
                    {
#line 428 "prog_io_item.m"
                      MR_Word base;
#line 428 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 428 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 428 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 428 "prog_io_item.m"
                    }
#line 423 "prog_io_item.m"
                  }
#line 422 "prog_io_item.m"
              }
#line 417 "prog_io_item.m"
          }
#line 430 "prog_io_item.m"
        else
#line 431 "prog_io_item.m"
          {
#line 431 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_62_62;
#line 431 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_63_63;
#line 431 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_68_68;
#line 431 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Context_73;
#line 431 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_75;

#line 431 "prog_io_item.m"
            {
#line 431 "prog_io_item.m"
              parse_tree__prog_io_item__Context_73 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_9);
            }
#line 435 "prog_io_item.m"
            {
#line 435 "prog_io_item.m"
              parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 435 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_73));
#line 435 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[113])));
#line 435 "prog_io_item.m"
            }
#line 435 "prog_io_item.m"
            {
#line 435 "prog_io_item.m"
              parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 435 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "prog_io_item.m"
            }
#line 434 "prog_io_item.m"
            {
#line 434 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 434 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 434 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_75, 2) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 434 "prog_io_item.m"
            }
#line 436 "prog_io_item.m"
            {
#line 436 "prog_io_item.m"
              parse_tree__prog_io_item__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_75));
#line 436 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "prog_io_item.m"
            }
#line 436 "prog_io_item.m"
            {
#line 436 "prog_io_item.m"
              MR_Word base;
#line 436 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 436 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeItem_12 = base;
#line 436 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_68_68));
#line 436 "prog_io_item.m"
            }
#line 431 "prog_io_item.m"
          }
#line 430 "prog_io_item.m"
      }
#line 430 "prog_io_item.m"
      break;
#line 430 "prog_io_item.m"
    }
#line 405 "prog_io_item.m"
}

#line 375 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_2(
#line 375 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 375 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 375 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 375 "prog_io_item.m"
{
#line 375 "prog_io_item.m"
  {
#line 375 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 375 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv1_HeadVar__2_80;

#line 375 "prog_io_item.m"
    {
#line 375 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__375__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv1_HeadVar__2_80);
    }
#line 375 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv1_HeadVar__2_80));
#line 375 "prog_io_item.m"
  }
#line 375 "prog_io_item.m"
}

#line 359 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_1(
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
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_74;

#line 359 "prog_io_item.m"
    {
#line 359 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__359__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_74);
    }
#line 359 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_74));
#line 359 "prog_io_item.m"
  }
#line 359 "prog_io_item.m"
}

#line 338 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0(
#line 338 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 338 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadTerm_9,
#line 338 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__BodyTerm0_10,
#line 338 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ProgVarSet0_11,
#line 338 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 338 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 338 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_14)
#line 338 "prog_io_item.m"
{
#line 342 "prog_io_item.m"
  {
#line 342 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 342 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeBodyGoal_16;
#line 342 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet_17;

#line 344 "prog_io_item.m"
    {
#line 344 "prog_io_item.m"
      parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_item__BodyTerm0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__MaybeBodyGoal_16, parse_tree__prog_io_item__ProgVarSet0_11, &parse_tree__prog_io_item__ProgVarSet_17);
    }
#line 385 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeBodyGoal_16)) == (MR_mktag((MR_Integer) 0))))
#line 387 "prog_io_item.m"
      *parse_tree__prog_io_item__MaybeItem_14 = (MR_Word) parse_tree__prog_io_item__MaybeBodyGoal_16;
#line 385 "prog_io_item.m"
    else
#line 347 "prog_io_item.m"
      {
#line 347 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_72_72 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 347 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__BodyGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeBodyGoal_16, (MR_Integer) 0)));
#line 347 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__VarSet_19;
#line 369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncHeadTerm_23;
#line 369 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;
#line 351 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncHeadTerm0_20;
#line 351 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 351 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_34_34;
#line 351 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 351 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_37_37;
#line 350 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 351 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FuncResultTerm_21;

#line 348 "prog_io_item.m"
        {
#line 348 "prog_io_item.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ProgVarSet_17, &parse_tree__prog_io_item__VarSet_19);
        }
#line 350 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 350 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 350 "prog_io_item.m"
          {
#line 350 "prog_io_item.m"
            parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_9, (MR_Integer) 0)));
#line 350 "prog_io_item.m"
            parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_9, (MR_Integer) 1)));
#line 350 "prog_io_item.m"
            parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_9, (MR_Integer) 2)));
#line 350 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 350 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 350 "prog_io_item.m"
              {
#line 350 "prog_io_item.m"
                parse_tree__prog_io_item__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_33_33, (MR_Integer) 0)));
#line 350 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_34_34, (MR_String) "=") == 0);
#line 351 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 351 "prog_io_item.m"
                  {
#line 351 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 351 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 351 "prog_io_item.m"
                      {
#line 351 "prog_io_item.m"
                        parse_tree__prog_io_item__FuncHeadTerm0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 0)));
#line 351 "prog_io_item.m"
                        parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 1)));
#line 351 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 351 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 351 "prog_io_item.m"
                          {
#line 351 "prog_io_item.m"
                            parse_tree__prog_io_item__FuncResultTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 351 "prog_io_item.m"
                            parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 1)));
#line 351 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 351 "prog_io_item.m"
                              {
#line 352 "prog_io_item.m"
                                {
#line 352 "prog_io_item.m"
                                  parse_tree__prog_io_item__FuncHeadTerm_23 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__FuncHeadTerm0_20);
                                }
#line 352 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 351 "prog_io_item.m"
                              }
#line 351 "prog_io_item.m"
                          }
#line 351 "prog_io_item.m"
                      }
#line 351 "prog_io_item.m"
                  }
#line 350 "prog_io_item.m"
              }
#line 350 "prog_io_item.m"
          }
#line 369 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 354 "prog_io_item.m"
          {
#line 354 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFunctor_25;

#line 355 "prog_io_item.m"
            {
#line 355 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__FuncHeadTerm_23, parse_tree__prog_io_item__VarSet_19, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[117]), &parse_tree__prog_io_item__MaybeFunctor_25);
            }
#line 365 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctor_25)) == (MR_mktag((MR_Integer) 0))))
#line 366 "prog_io_item.m"
              {
#line 366 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctor_25, (MR_Integer) 0)));

#line 367 "prog_io_item.m"
                {
#line 367 "prog_io_item.m"
                  MR_Word base;
#line 367 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 367 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 367 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_31));
#line 367 "prog_io_item.m"
                }
#line 366 "prog_io_item.m"
              }
#line 365 "prog_io_item.m"
            else
#line 358 "prog_io_item.m"
              {
#line 358 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeInfo_77_77 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[0];
#line 358 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_25, (MR_Integer) 0)));
#line 358 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_25, (MR_Integer) 1)));
#line 358 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ProgArgTerms_28;
#line 358 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemClause_29;
#line 358 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_30;
#line 358 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_42_42;

#line 359 "prog_io_item.m"
                {
#line 359 "prog_io_item.m"
                  parse_tree__prog_io_item__V_42_42 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeInfo_77_77, parse_tree__prog_io_item__ArgTerms0_27, parse_tree__prog_io_item__V_36_36);
                }
#line 359 "prog_io_item.m"
                {
#line 359 "prog_io_item.m"
                  mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeInfo_77_77, (MR_Word) &parse_tree__prog_io_item_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[2], parse_tree__prog_io_item__V_42_42, &parse_tree__prog_io_item__ProgArgTerms_28);
                }
#line 361 "prog_io_item.m"
                {
#line 361 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemClause_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 361 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_26));
#line 361 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 1) = ((MR_Box) ((MR_Integer) 1));
#line 361 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgArgTerms_28));
#line 361 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 4) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_17));
#line 361 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 5) = ((MR_Box) (parse_tree__prog_io_item__BodyGoal_18));
#line 361 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 361 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_29, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 361 "prog_io_item.m"
                }
#line 363 "prog_io_item.m"
                parse_tree__prog_io_item__Item_30 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__ItemClause_29);
#line 364 "prog_io_item.m"
                {
#line 364 "prog_io_item.m"
                  MR_Word base;
#line 364 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 364 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 364 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_30));
#line 364 "prog_io_item.m"
                }
#line 358 "prog_io_item.m"
              }
#line 354 "prog_io_item.m"
          }
#line 369 "prog_io_item.m"
        else
#line 370 "prog_io_item.m"
          {
#line 370 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFunctor_64;

#line 371 "prog_io_item.m"
            {
#line 371 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_72_72, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__HeadTerm_9, parse_tree__prog_io_item__VarSet_19, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[119]), &parse_tree__prog_io_item__MaybeFunctor_64);
            }
#line 380 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctor_64)) == (MR_mktag((MR_Integer) 0))))
#line 381 "prog_io_item.m"
              {
#line 381 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 0)));

#line 382 "prog_io_item.m"
                {
#line 382 "prog_io_item.m"
                  MR_Word base;
#line 382 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 382 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 382 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_57));
#line 382 "prog_io_item.m"
                }
#line 381 "prog_io_item.m"
              }
#line 380 "prog_io_item.m"
            else
#line 374 "prog_io_item.m"
              {
#line 374 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 1)));
#line 374 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Name_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_64, (MR_Integer) 0)));
#line 374 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ProgArgTerms_54;
#line 374 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemClause_55;
#line 374 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_56;

#line 375 "prog_io_item.m"
                {
#line 375 "prog_io_item.m"
                  mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[3], parse_tree__prog_io_item__ArgTerms_32, &parse_tree__prog_io_item__ProgArgTerms_54);
                }
#line 376 "prog_io_item.m"
                {
#line 376 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemClause_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 376 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_53));
#line 376 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 1) = ((MR_Box) ((MR_Integer) 0));
#line 376 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgArgTerms_54));
#line 376 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 4) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_17));
#line 376 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 5) = ((MR_Box) (parse_tree__prog_io_item__BodyGoal_18));
#line 376 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 376 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_55, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 376 "prog_io_item.m"
                }
#line 378 "prog_io_item.m"
                parse_tree__prog_io_item__Item_56 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__ItemClause_55);
#line 379 "prog_io_item.m"
                {
#line 379 "prog_io_item.m"
                  MR_Word base;
#line 379 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 379 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeItem_14 = base;
#line 379 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_56));
#line 379 "prog_io_item.m"
                }
#line 374 "prog_io_item.m"
              }
#line 370 "prog_io_item.m"
          }
#line 347 "prog_io_item.m"
      }
#line 342 "prog_io_item.m"
  }
#line 338 "prog_io_item.m"
}

#line 324 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__maybe_item_to_item_or_marker_2_p_0(
#line 324 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeItem_3,
#line 324 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItemOrMarker_4)
#line 324 "prog_io_item.m"
{
#line 329 "prog_io_item.m"
  {
#line 329 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 329 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeItem_3)) == (MR_mktag((MR_Integer) 0))))
#line 333 "prog_io_item.m"
      *parse_tree__prog_io_item__MaybeItemOrMarker_4 = (MR_Word) parse_tree__prog_io_item__MaybeItem_3;
#line 329 "prog_io_item.m"
    else
#line 329 "prog_io_item.m"
      {
#line 329 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Item_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeItem_3, (MR_Integer) 0)));
#line 329 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_7_7;

#line 330 "prog_io_item.m"
        {
#line 330 "prog_io_item.m"
          parse_tree__prog_io_item__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 330 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_7_7, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_5));
#line 330 "prog_io_item.m"
        }
#line 330 "prog_io_item.m"
        {
#line 330 "prog_io_item.m"
          MR_Word base;
#line 330 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 330 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeItemOrMarker_4 = base;
#line 330 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_7_7));
#line 330 "prog_io_item.m"
        }
#line 329 "prog_io_item.m"
      }
#line 329 "prog_io_item.m"
  }
#line 324 "prog_io_item.m"
}

#line 294 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_source_file_marker_3_p_0(
#line 294 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_4,
#line 294 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_5,
#line 294 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_6)
#line 294 "prog_io_item.m"
{
#line 297 "prog_io_item.m"
  {
#line 297 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__Functor_4, (MR_String) "pragma") == 0);
#line 297 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__PragmaTerm_7;
#line 297 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__PragmaArgTerms_8;
#line 297 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__PragmaContext_9;
#line 297 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 297 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 297 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_18_18;
#line 314 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__SourceFileTerm_10;
#line 302 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;

#line 297 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 297 "prog_io_item.m"
      {
#line 299 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_5)) == (MR_mktag((MR_Integer) 1)));
#line 299 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 299 "prog_io_item.m"
          {
#line 299 "prog_io_item.m"
            parse_tree__prog_io_item__PragmaTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_5, (MR_Integer) 0)));
#line 299 "prog_io_item.m"
            parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_5, (MR_Integer) 1)));
#line 299 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 297 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 297 "prog_io_item.m"
              {
#line 300 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__PragmaTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 300 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 300 "prog_io_item.m"
                  {
#line 300 "prog_io_item.m"
                    parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__PragmaTerm_7, (MR_Integer) 0)));
#line 300 "prog_io_item.m"
                    parse_tree__prog_io_item__PragmaArgTerms_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__PragmaTerm_7, (MR_Integer) 1)));
#line 300 "prog_io_item.m"
                    parse_tree__prog_io_item__PragmaContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__PragmaTerm_7, (MR_Integer) 2)));
#line 300 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 300 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 300 "prog_io_item.m"
                      {
#line 300 "prog_io_item.m"
                        parse_tree__prog_io_item__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_17_17, (MR_Integer) 0)));
#line 300 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_18_18, (MR_String) "source_file") == 0);
#line 297 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 297 "prog_io_item.m"
                          {
#line 302 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__PragmaArgTerms_8)) == (MR_mktag((MR_Integer) 1)));
#line 302 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 302 "prog_io_item.m"
                              {
#line 302 "prog_io_item.m"
                                parse_tree__prog_io_item__SourceFileTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__PragmaArgTerms_8, (MR_Integer) 0)));
#line 302 "prog_io_item.m"
                                parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__PragmaArgTerms_8, (MR_Integer) 1)));
#line 302 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "prog_io_item.m"
                              }
#line 314 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 306 "prog_io_item.m"
                              {
#line 306 "prog_io_item.m"
                                MR_String parse_tree__prog_io_item__SourceFile_11;
#line 303 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_20_20;
#line 303 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_21_21;
#line 303 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_12_12;

#line 303 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__SourceFileTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 303 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 303 "prog_io_item.m"
                                  {
#line 303 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SourceFileTerm_10, (MR_Integer) 0)));
#line 303 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SourceFileTerm_10, (MR_Integer) 1)));
#line 303 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SourceFileTerm_10, (MR_Integer) 2)));
#line 303 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 303 "prog_io_item.m"
                                      {
#line 303 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__V_20_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_20_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 303 "prog_io_item.m"
                                        if (parse_tree__prog_io_item__succeeded)
#line 303 "prog_io_item.m"
                                          parse_tree__prog_io_item__SourceFile_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_20_20, (MR_Integer) 1)));
#line 303 "prog_io_item.m"
                                      }
#line 303 "prog_io_item.m"
                                  }
#line 306 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 304 "prog_io_item.m"
                                  {
#line 304 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__Marker_13;

#line 304 "prog_io_item.m"
                                    {
#line 304 "prog_io_item.m"
                                      parse_tree__prog_io_item__Marker_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 304 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_13, 1) = ((MR_Box) (parse_tree__prog_io_item__SourceFile_11));
#line 304 "prog_io_item.m"
                                    }
#line 305 "prog_io_item.m"
                                    {
#line 305 "prog_io_item.m"
                                      MR_Word base;
#line 305 "prog_io_item.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 305 "prog_io_item.m"
                                      *parse_tree__prog_io_item__MaybeIOM_6 = base;
#line 305 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Marker_13));
#line 305 "prog_io_item.m"
                                    }
#line 304 "prog_io_item.m"
                                  }
#line 306 "prog_io_item.m"
                                else
#line 309 "prog_io_item.m"
                                  {
#line 309 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__Spec_15;
#line 309 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__V_35_35;
#line 309 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__V_36_36;
#line 309 "prog_io_item.m"
                                    MR_Word parse_tree__prog_io_item__V_41_41;

#line 311 "prog_io_item.m"
                                    {
#line 311 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 311 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_item__PragmaContext_9));
#line 311 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[114])));
#line 311 "prog_io_item.m"
                                    }
#line 311 "prog_io_item.m"
                                    {
#line 311 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_item__V_36_36));
#line 311 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 311 "prog_io_item.m"
                                    }
#line 310 "prog_io_item.m"
                                    {
#line 310 "prog_io_item.m"
                                      parse_tree__prog_io_item__Spec_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 310 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 310 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_15, 2) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 310 "prog_io_item.m"
                                    }
#line 312 "prog_io_item.m"
                                    {
#line 312 "prog_io_item.m"
                                      parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_15));
#line 312 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "prog_io_item.m"
                                    }
#line 312 "prog_io_item.m"
                                    {
#line 312 "prog_io_item.m"
                                      MR_Word base;
#line 312 "prog_io_item.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 312 "prog_io_item.m"
                                      *parse_tree__prog_io_item__MaybeIOM_6 = base;
#line 312 "prog_io_item.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 312 "prog_io_item.m"
                                    }
#line 309 "prog_io_item.m"
                                  }
#line 306 "prog_io_item.m"
                              }
#line 314 "prog_io_item.m"
                            else
#line 316 "prog_io_item.m"
                              {
#line 316 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_56_56;
#line 316 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_57_57;
#line 316 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_62_62;
#line 316 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Spec_65;

#line 318 "prog_io_item.m"
                                {
#line 318 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_item__PragmaContext_9));
#line 318 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[115])));
#line 318 "prog_io_item.m"
                                }
#line 318 "prog_io_item.m"
                                {
#line 318 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_item__V_57_57));
#line 318 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_item.m"
                                }
#line 317 "prog_io_item.m"
                                {
#line 317 "prog_io_item.m"
                                  parse_tree__prog_io_item__Spec_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 317 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 317 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_65, 2) = ((MR_Box) (parse_tree__prog_io_item__V_56_56));
#line 317 "prog_io_item.m"
                                }
#line 319 "prog_io_item.m"
                                {
#line 319 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_65));
#line 319 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "prog_io_item.m"
                                }
#line 319 "prog_io_item.m"
                                {
#line 319 "prog_io_item.m"
                                  MR_Word base;
#line 319 "prog_io_item.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 319 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeIOM_6 = base;
#line 319 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 319 "prog_io_item.m"
                                }
#line 316 "prog_io_item.m"
                              }
#line 314 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 297 "prog_io_item.m"
                          }
#line 300 "prog_io_item.m"
                      }
#line 300 "prog_io_item.m"
                  }
#line 297 "prog_io_item.m"
              }
#line 299 "prog_io_item.m"
          }
#line 297 "prog_io_item.m"
      }
#line 297 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 297 "prog_io_item.m"
  }
#line 294 "prog_io_item.m"
}

#line 285 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_item_avail_use_4_p_0(
#line 285 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 285 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 285 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 285 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Avail_8)
#line 285 "prog_io_item.m"
{
#line 288 "prog_io_item.m"
  {
#line 288 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 288 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__AvailUseInfo_9;

#line 289 "prog_io_item.m"
    {
#line 289 "prog_io_item.m"
      parse_tree__prog_io_item__AvailUseInfo_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 289 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailUseInfo_9, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_7));
#line 289 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailUseInfo_9, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_5));
#line 289 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailUseInfo_9, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_6));
#line 289 "prog_io_item.m"
    }
#line 290 "prog_io_item.m"
    *parse_tree__prog_io_item__Avail_8 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_item__AvailUseInfo_9);
#line 288 "prog_io_item.m"
  }
#line 285 "prog_io_item.m"
}

#line 278 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_item_avail_import_4_p_0(
#line 278 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 278 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 278 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 278 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Avail_8)
#line 278 "prog_io_item.m"
{
#line 281 "prog_io_item.m"
  {
#line 281 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 281 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__AvailImportInfo_9;

#line 282 "prog_io_item.m"
    {
#line 282 "prog_io_item.m"
      parse_tree__prog_io_item__AvailImportInfo_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 282 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailImportInfo_9, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_7));
#line 282 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailImportInfo_9, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_5));
#line 282 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailImportInfo_9, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_6));
#line 282 "prog_io_item.m"
    }
#line 283 "prog_io_item.m"
    *parse_tree__prog_io_item__Avail_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__AvailImportInfo_9);
#line 281 "prog_io_item.m"
  }
#line 278 "prog_io_item.m"
}

#line 272 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_item_include_4_p_0(
#line 272 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 272 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 272 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 272 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Incl_8)
#line 272 "prog_io_item.m"
{
#line 276 "prog_io_item.m"
  {
#line 276 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 276 "prog_io_item.m"
    {
#line 276 "prog_io_item.m"
      MR_Word base;
#line 276 "prog_io_item.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 276 "prog_io_item.m"
      *parse_tree__prog_io_item__Incl_8 = base;
#line 276 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_7));
#line 276 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_5));
#line 276 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_6));
#line 276 "prog_io_item.m"
    }
#line 276 "prog_io_item.m"
  }
#line 272 "prog_io_item.m"
}

#line 248 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_5(
#line 248 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 248 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 248 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 248 "prog_io_item.m"
{
#line 248 "prog_io_item.m"
  {
#line 248 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 248 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv4_Incl_8;

#line 248 "prog_io_item.m"
    {
#line 248 "prog_io_item.m"
      parse_tree__prog_io_item__make_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv4_Incl_8);
    }
#line 248 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv4_Incl_8));
#line 248 "prog_io_item.m"
  }
#line 248 "prog_io_item.m"
}

#line 255 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_4(
#line 255 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 255 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 255 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 255 "prog_io_item.m"
{
#line 255 "prog_io_item.m"
  {
#line 255 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 255 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv3_Avail_8;

#line 255 "prog_io_item.m"
    {
#line 255 "prog_io_item.m"
      parse_tree__prog_io_item__make_item_avail_import_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv3_Avail_8);
    }
#line 255 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv3_Avail_8));
#line 255 "prog_io_item.m"
  }
#line 255 "prog_io_item.m"
}

#line 262 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_3(
#line 262 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 262 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 262 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 262 "prog_io_item.m"
{
#line 262 "prog_io_item.m"
  {
#line 262 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 262 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv2_Avail_8;

#line 262 "prog_io_item.m"
    {
#line 262 "prog_io_item.m"
      parse_tree__prog_io_item__make_item_avail_use_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv2_Avail_8);
    }
#line 262 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv2_Avail_8));
#line 262 "prog_io_item.m"
  }
#line 262 "prog_io_item.m"
}

#line 237 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_2(
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
    MR_Word parse_tree__prog_io_item__conv1_MaybeModuleName_6;

#line 237 "prog_io_item.m"
    {
#line 237 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_name_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv1_MaybeModuleName_6);
    }
#line 237 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv1_MaybeModuleName_6));
#line 237 "prog_io_item.m"
  }
#line 237 "prog_io_item.m"
}

#line 232 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0_1(
#line 232 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 232 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 232 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 232 "prog_io_item.m"
{
#line 232 "prog_io_item.m"
  {
#line 232 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 232 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_MaybeModule_8;

#line 232 "prog_io_item.m"
    {
#line 232 "prog_io_item.m"
      parse_tree__prog_io_item__parse_implicitly_qualified_module_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_MaybeModule_8);
    }
#line 232 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_MaybeModule_8));
#line 232 "prog_io_item.m"
  }
#line 232 "prog_io_item.m"
}

#line 224 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_items_shorthand_7_p_0(
#line 224 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 224 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 224 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_10,
#line 224 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 224 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 224 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 224 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_14)
#line 224 "prog_io_item.m"
{
#line 229 "prog_io_item.m"
  {
#line 229 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 229 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_40_40;
#line 229 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Parser_15;
#line 229 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleNamesTerm_16;
#line 229 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeModuleNames_17;
#line 229 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_29_29;

#line 233 "prog_io_item.m"
    if ((strcmp(parse_tree__prog_io_item__Functor_10, (MR_String) "include_module") == 0))
#line 232 "prog_io_item.m"
      {
#line 232 "prog_io_item.m"
        {
#line 232 "prog_io_item.m"
          parse_tree__prog_io_item__Parser_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 232 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[0]));
#line 232 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_1));
#line 232 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 232 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 3) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_8));
#line 232 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 4) = ((MR_Box) (parse_tree__prog_io_item__VarSet_9));
#line 232 "prog_io_item.m"
        }
#line 232 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 232 "prog_io_item.m"
      }
#line 233 "prog_io_item.m"
    else
#line 233 "prog_io_item.m"
    if ((((strcmp(parse_tree__prog_io_item__Functor_10, (MR_String) "import_module") == 0)) || ((strcmp(parse_tree__prog_io_item__Functor_10, (MR_String) "use_module") == 0))))
#line 237 "prog_io_item.m"
      {
#line 237 "prog_io_item.m"
        {
#line 237 "prog_io_item.m"
          parse_tree__prog_io_item__Parser_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 237 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 237 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_2));
#line 237 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 237 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_15, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_9));
#line 237 "prog_io_item.m"
        }
#line 237 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 237 "prog_io_item.m"
      }
#line 233 "prog_io_item.m"
    else
#line 233 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 229 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 229 "prog_io_item.m"
      {
#line 239 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_11)) == (MR_mktag((MR_Integer) 1)));
#line 239 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 239 "prog_io_item.m"
          {
#line 239 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleNamesTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_11, (MR_Integer) 0)));
#line 239 "prog_io_item.m"
            parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_11, (MR_Integer) 1)));
#line 239 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 229 "prog_io_item.m"
              {
#line 14954 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_40_40 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 240 "prog_io_item.m"
                {
#line 240 "prog_io_item.m"
                  parse_tree__prog_io_util__parse_one_or_more_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_40_40, parse_tree__prog_io_item__Parser_15, parse_tree__prog_io_item__ModuleNamesTerm_16, &parse_tree__prog_io_item__MaybeModuleNames_17);
                }
#line 267 "prog_io_item.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNames_17)) == (MR_mktag((MR_Integer) 0))))
#line 269 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_14 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNames_17;
#line 267 "prog_io_item.m"
                else
#line 242 "prog_io_item.m"
                  {
#line 242 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ModuleNames_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNames_17, (MR_Integer) 0)));
#line 242 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__HeadModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ModuleNames_18, (MR_Integer) 0)));
#line 242 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__TailModuleNames_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ModuleNames_18, (MR_Integer) 1)));
#line 242 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__IOM_23;

#line 251 "prog_io_item.m"
                    if ((strcmp(parse_tree__prog_io_item__Functor_10, (MR_String) "use_module") == 0))
#line 259 "prog_io_item.m"
                      {
#line 259 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__HeadUse_26;
#line 259 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__TailUses_27;
#line 259 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_30_30;
#line 259 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_31_31;
#line 259 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__AvailUseInfo_63;

#line 289 "prog_io_item.m"
                        {
#line 289 "prog_io_item.m"
                          parse_tree__prog_io_item__AvailUseInfo_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 289 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailUseInfo_63, 0) = ((MR_Box) (parse_tree__prog_io_item__HeadModuleName_19));
#line 289 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailUseInfo_63, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 289 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailUseInfo_63, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 289 "prog_io_item.m"
                        }
#line 290 "prog_io_item.m"
                        parse_tree__prog_io_item__HeadUse_26 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_item__AvailUseInfo_63);
#line 262 "prog_io_item.m"
                        {
#line 262 "prog_io_item.m"
                          parse_tree__prog_io_item__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 262 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[1]));
#line 262 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_3));
#line 262 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 262 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 3) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 262 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 4) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 262 "prog_io_item.m"
                        }
#line 262 "prog_io_item.m"
                        {
#line 262 "prog_io_item.m"
                          mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_40_40, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__prog_io_item__V_30_30, parse_tree__prog_io_item__TailModuleNames_20, &parse_tree__prog_io_item__TailUses_27);
                        }
#line 264 "prog_io_item.m"
                        {
#line 264 "prog_io_item.m"
                          parse_tree__prog_io_item__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 264 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_item__HeadUse_26));
#line 264 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_31_31, 1) = ((MR_Box) (parse_tree__prog_io_item__TailUses_27));
#line 264 "prog_io_item.m"
                        }
#line 264 "prog_io_item.m"
                        {
#line 264 "prog_io_item.m"
                          parse_tree__prog_io_item__IOM_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io_item.m"
                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__IOM_23, 0) = ((MR_Box) (parse_tree__prog_io_item__V_31_31));
#line 264 "prog_io_item.m"
                        }
#line 259 "prog_io_item.m"
                      }
#line 251 "prog_io_item.m"
                    else
#line 251 "prog_io_item.m"
                    if ((strcmp(parse_tree__prog_io_item__Functor_10, (MR_String) "import_module") == 0))
#line 252 "prog_io_item.m"
                      {
#line 252 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__HeadImport_24;
#line 252 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__TailImports_25;
#line 252 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_32_32;
#line 252 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_33_33;
#line 252 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__AvailImportInfo_54;

#line 282 "prog_io_item.m"
                        {
#line 282 "prog_io_item.m"
                          parse_tree__prog_io_item__AvailImportInfo_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 282 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailImportInfo_54, 0) = ((MR_Box) (parse_tree__prog_io_item__HeadModuleName_19));
#line 282 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailImportInfo_54, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 282 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailImportInfo_54, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 282 "prog_io_item.m"
                        }
#line 283 "prog_io_item.m"
                        parse_tree__prog_io_item__HeadImport_24 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__AvailImportInfo_54);
#line 255 "prog_io_item.m"
                        {
#line 255 "prog_io_item.m"
                          parse_tree__prog_io_item__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 255 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_32_32, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[1]));
#line 255 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_4));
#line 255 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 255 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_32_32, 3) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 255 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_32_32, 4) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 255 "prog_io_item.m"
                        }
#line 255 "prog_io_item.m"
                        {
#line 255 "prog_io_item.m"
                          mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_40_40, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__prog_io_item__V_32_32, parse_tree__prog_io_item__TailModuleNames_20, &parse_tree__prog_io_item__TailImports_25);
                        }
#line 257 "prog_io_item.m"
                        {
#line 257 "prog_io_item.m"
                          parse_tree__prog_io_item__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_item__HeadImport_24));
#line 257 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io_item__TailImports_25));
#line 257 "prog_io_item.m"
                        }
#line 257 "prog_io_item.m"
                        {
#line 257 "prog_io_item.m"
                          parse_tree__prog_io_item__IOM_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 257 "prog_io_item.m"
                          MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__IOM_23, 0) = ((MR_Box) (parse_tree__prog_io_item__V_33_33));
#line 257 "prog_io_item.m"
                        }
#line 252 "prog_io_item.m"
                      }
#line 251 "prog_io_item.m"
                    else
#line 245 "prog_io_item.m"
                      {
#line 245 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__HeadIncl_21;
#line 245 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__TailIncls_22;
#line 245 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_34_34;
#line 245 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_35_35;

#line 276 "prog_io_item.m"
                        {
#line 276 "prog_io_item.m"
                          parse_tree__prog_io_item__HeadIncl_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 276 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadIncl_21, 0) = ((MR_Box) (parse_tree__prog_io_item__HeadModuleName_19));
#line 276 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadIncl_21, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 276 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadIncl_21, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 276 "prog_io_item.m"
                        }
#line 248 "prog_io_item.m"
                        {
#line 248 "prog_io_item.m"
                          parse_tree__prog_io_item__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 248 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[2]));
#line 248 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_items_shorthand_7_p_0_5));
#line 248 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 248 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 3) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 248 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 4) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 248 "prog_io_item.m"
                        }
#line 248 "prog_io_item.m"
                        {
#line 248 "prog_io_item.m"
                          mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_40_40, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__prog_io_item__V_34_34, parse_tree__prog_io_item__TailModuleNames_20, &parse_tree__prog_io_item__TailIncls_22);
                        }
#line 250 "prog_io_item.m"
                        {
#line 250 "prog_io_item.m"
                          parse_tree__prog_io_item__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 250 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_item__HeadIncl_21));
#line 250 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_35_35, 1) = ((MR_Box) (parse_tree__prog_io_item__TailIncls_22));
#line 250 "prog_io_item.m"
                        }
#line 250 "prog_io_item.m"
                        {
#line 250 "prog_io_item.m"
                          parse_tree__prog_io_item__IOM_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 250 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__IOM_23, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 250 "prog_io_item.m"
                        }
#line 245 "prog_io_item.m"
                      }
#line 266 "prog_io_item.m"
                    {
#line 266 "prog_io_item.m"
                      MR_Word base;
#line 266 "prog_io_item.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 266 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeIOM_14 = base;
#line 266 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__IOM_23));
#line 266 "prog_io_item.m"
                    }
#line 242 "prog_io_item.m"
                  }
#line 267 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 229 "prog_io_item.m"
              }
#line 239 "prog_io_item.m"
          }
#line 229 "prog_io_item.m"
      }
#line 229 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 229 "prog_io_item.m"
  }
#line 224 "prog_io_item.m"
}

#line 88 "prog_io_item.m"
void MR_CALL 
parse_tree__prog_io_item__parse_decl_5_p_0(
#line 88 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 88 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 88 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_8,
#line 88 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_9,
#line 88 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeItem_10)
#line 88 "prog_io_item.m"
{
#line 392 "prog_io_item.m"
  {
#line 392 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 396 "prog_io_item.m"
    {
#line 396 "prog_io_item.m"
      parse_tree__prog_io_item__parse_attrs_and_decl_6_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Term_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_item__SeqNum_9, parse_tree__prog_io_item__MaybeItem_10);
#line 396 "prog_io_item.m"
      return;
    }
#line 392 "prog_io_item.m"
  }
#line 88 "prog_io_item.m"
}

#line 75 "prog_io_item.m"
void MR_CALL 
parse_tree__prog_io_item__parse_item_or_marker_5_p_0(
#line 75 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 75 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 75 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_8,
#line 75 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_9,
#line 75 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_10)
#line 75 "prog_io_item.m"
{
#line 159 "prog_io_item.m"
  {
#line 159 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 159 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DeclTerm_11;
#line 121 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;
#line 121 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_32_32;
#line 121 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_33_33;
#line 121 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_34_34;
#line 121 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___DeclContext_12;

#line 121 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 121 "prog_io_item.m"
      {
#line 121 "prog_io_item.m"
        parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 121 "prog_io_item.m"
        parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 121 "prog_io_item.m"
        parse_tree__prog_io_item___DeclContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 121 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 121 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 121 "prog_io_item.m"
          {
#line 121 "prog_io_item.m"
            parse_tree__prog_io_item__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 121 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_32_32, (MR_String) ":-") == 0);
#line 121 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 121 "prog_io_item.m"
              {
#line 121 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 121 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 121 "prog_io_item.m"
                  {
#line 121 "prog_io_item.m"
                    parse_tree__prog_io_item__DeclTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 0)));
#line 121 "prog_io_item.m"
                    parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 1)));
#line 121 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 121 "prog_io_item.m"
                  }
#line 121 "prog_io_item.m"
              }
#line 121 "prog_io_item.m"
          }
#line 121 "prog_io_item.m"
      }
#line 159 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 151 "prog_io_item.m"
      {
#line 151 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__Functor_13;
#line 151 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ArgTerms_14;
#line 151 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_15;
#line 124 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;

#line 124 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__DeclTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 124 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 124 "prog_io_item.m"
          {
#line 124 "prog_io_item.m"
            parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DeclTerm_11, (MR_Integer) 0)));
#line 124 "prog_io_item.m"
            parse_tree__prog_io_item__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DeclTerm_11, (MR_Integer) 1)));
#line 124 "prog_io_item.m"
            parse_tree__prog_io_item__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DeclTerm_11, (MR_Integer) 2)));
#line 124 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_35_35)) == (MR_mktag((MR_Integer) 0)));
#line 124 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 124 "prog_io_item.m"
              parse_tree__prog_io_item__Functor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_35_35, (MR_Integer) 0)));
#line 124 "prog_io_item.m"
          }
#line 151 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 130 "prog_io_item.m"
          {
#line 130 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Marker_16;
#line 201 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ModuleName_86;
#line 196 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_19_93;
#line 196 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ModuleNameTerm_85;
#line 196 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_88_88;

#line 196 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__Functor_13, (MR_String) "module") == 0);
#line 196 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 196 "prog_io_item.m"
              {
#line 197 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_14)) == (MR_mktag((MR_Integer) 1)));
#line 197 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 197 "prog_io_item.m"
                  {
#line 197 "prog_io_item.m"
                    parse_tree__prog_io_item__ModuleNameTerm_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 0)));
#line 197 "prog_io_item.m"
                    parse_tree__prog_io_item__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 1)));
#line 197 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 196 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 196 "prog_io_item.m"
                      {
#line 15393 "parse_tree.prog_io_item.c"
                        parse_tree__prog_io_item__TypeCtorInfo_19_93 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 198 "prog_io_item.m"
                        {
#line 198 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_19_93, parse_tree__prog_io_item__ModuleNameTerm_85, &parse_tree__prog_io_item__ModuleName_86);
                        }
#line 196 "prog_io_item.m"
                      }
#line 197 "prog_io_item.m"
                  }
#line 196 "prog_io_item.m"
              }
#line 201 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 200 "prog_io_item.m"
              {
#line 200 "prog_io_item.m"
                {
#line 200 "prog_io_item.m"
                  parse_tree__prog_io_item__Marker_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 200 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 200 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 1) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_86));
#line 200 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 200 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_9));
#line 200 "prog_io_item.m"
                }
#line 200 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 200 "prog_io_item.m"
              }
#line 201 "prog_io_item.m"
            else
#line 207 "prog_io_item.m"
              {
#line 207 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ModuleName_92;
#line 202 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeCtorInfo_20_94;
#line 202 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_89_89;
#line 202 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ModuleNameTerm_90;

#line 202 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__Functor_13, (MR_String) "end_module") == 0);
#line 202 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 202 "prog_io_item.m"
                  {
#line 203 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_14)) == (MR_mktag((MR_Integer) 1)));
#line 203 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 203 "prog_io_item.m"
                      {
#line 203 "prog_io_item.m"
                        parse_tree__prog_io_item__ModuleNameTerm_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 0)));
#line 203 "prog_io_item.m"
                        parse_tree__prog_io_item__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 1)));
#line 203 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 202 "prog_io_item.m"
                          {
#line 15463 "parse_tree.prog_io_item.c"
                            parse_tree__prog_io_item__TypeCtorInfo_20_94 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 204 "prog_io_item.m"
                            {
#line 204 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_20_94, parse_tree__prog_io_item__ModuleNameTerm_90, &parse_tree__prog_io_item__ModuleName_92);
                            }
#line 202 "prog_io_item.m"
                          }
#line 203 "prog_io_item.m"
                      }
#line 202 "prog_io_item.m"
                  }
#line 207 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 206 "prog_io_item.m"
                  {
#line 206 "prog_io_item.m"
                    {
#line 206 "prog_io_item.m"
                      parse_tree__prog_io_item__Marker_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 206 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 206 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 1) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_92));
#line 206 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 206 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_9));
#line 206 "prog_io_item.m"
                    }
#line 206 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 206 "prog_io_item.m"
                  }
#line 207 "prog_io_item.m"
                else
#line 218 "prog_io_item.m"
                  {
#line 218 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Section_87;

#line 215 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__ArgTerms_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 218 "prog_io_item.m"
                      {
#line 211 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__Functor_13, (MR_String) "interface") == 0))
#line 210 "prog_io_item.m"
                          {
#line 210 "prog_io_item.m"
                            parse_tree__prog_io_item__Section_87 = (MR_Integer) 0;
#line 210 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 210 "prog_io_item.m"
                          }
#line 211 "prog_io_item.m"
                        else
#line 211 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__Functor_13, (MR_String) "implementation") == 0))
#line 213 "prog_io_item.m"
                          {
#line 213 "prog_io_item.m"
                            parse_tree__prog_io_item__Section_87 = (MR_Integer) 1;
#line 213 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 213 "prog_io_item.m"
                          }
#line 211 "prog_io_item.m"
                        else
#line 211 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 218 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 218 "prog_io_item.m"
                          {
#line 217 "prog_io_item.m"
                            {
#line 217 "prog_io_item.m"
                              parse_tree__prog_io_item__Marker_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 217 "prog_io_item.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 217 "prog_io_item.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 1) = ((MR_Box) (parse_tree__prog_io_item__Section_87));
#line 217 "prog_io_item.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 217 "prog_io_item.m"
                              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_16, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_9));
#line 217 "prog_io_item.m"
                            }
#line 217 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 218 "prog_io_item.m"
                          }
#line 218 "prog_io_item.m"
                      }
#line 218 "prog_io_item.m"
                  }
#line 207 "prog_io_item.m"
              }
#line 130 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 129 "prog_io_item.m"
              {
#line 129 "prog_io_item.m"
                MR_Word base;
#line 129 "prog_io_item.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 129 "prog_io_item.m"
                *parse_tree__prog_io_item__MaybeIOM_10 = base;
#line 129 "prog_io_item.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Marker_16));
#line 129 "prog_io_item.m"
              }
#line 130 "prog_io_item.m"
            else
#line 135 "prog_io_item.m"
              {
#line 135 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeIOMPrime_17;

#line 131 "prog_io_item.m"
                {
#line 131 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_items_shorthand_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__ArgTerms_14, parse_tree__prog_io_item__Context_15, parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__MaybeIOMPrime_17);
                }
#line 135 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 134 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_10 = parse_tree__prog_io_item__MaybeIOMPrime_17;
#line 135 "prog_io_item.m"
                else
#line 139 "prog_io_item.m"
                  {
#line 139 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__MaybeIOMPrime_71;

#line 136 "prog_io_item.m"
                    {
#line 136 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_source_file_marker_3_p_0(parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__ArgTerms_14, &parse_tree__prog_io_item__MaybeIOMPrime_71);
                    }
#line 139 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 138 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeIOM_10 = parse_tree__prog_io_item__MaybeIOMPrime_71;
#line 139 "prog_io_item.m"
                    else
#line 144 "prog_io_item.m"
                      {
#line 144 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__MaybeIOMPrime_70;

#line 140 "prog_io_item.m"
                        {
#line 140 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_109_97_114_107_101_114_95_95_91_50_93_95_48_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__ArgTerms_14, parse_tree__prog_io_item__Context_15, parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__MaybeIOMPrime_70);
                        }
#line 144 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 143 "prog_io_item.m"
                          *parse_tree__prog_io_item__MaybeIOM_10 = parse_tree__prog_io_item__MaybeIOMPrime_70;
#line 144 "prog_io_item.m"
                        else
#line 148 "prog_io_item.m"
                          {
#line 148 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__MaybeItem_18;

#line 148 "prog_io_item.m"
                            {
#line 148 "prog_io_item.m"
                              parse_tree__prog_io_item__parse_decl_5_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__DeclTerm_11, parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__MaybeItem_18);
                            }
#line 149 "prog_io_item.m"
                            {
#line 149 "prog_io_item.m"
                              parse_tree__prog_io_item__maybe_item_to_item_or_marker_2_p_0(parse_tree__prog_io_item__MaybeItem_18, parse_tree__prog_io_item__MaybeIOM_10);
#line 149 "prog_io_item.m"
                              return;
                            }
#line 148 "prog_io_item.m"
                          }
#line 144 "prog_io_item.m"
                      }
#line 139 "prog_io_item.m"
                  }
#line 135 "prog_io_item.m"
              }
#line 130 "prog_io_item.m"
          }
#line 151 "prog_io_item.m"
        else
#line 152 "prog_io_item.m"
          {
#line 152 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_20;
#line 152 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_49_49;
#line 152 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_50_50;
#line 152 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_55_55;
#line 152 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Context_72;

#line 152 "prog_io_item.m"
            {
#line 152 "prog_io_item.m"
              parse_tree__prog_io_item__Context_72 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_8);
            }
#line 156 "prog_io_item.m"
            {
#line 156 "prog_io_item.m"
              parse_tree__prog_io_item__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 156 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_72));
#line 156 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[113])));
#line 156 "prog_io_item.m"
            }
#line 156 "prog_io_item.m"
            {
#line 156 "prog_io_item.m"
              parse_tree__prog_io_item__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_item__V_50_50));
#line 156 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 156 "prog_io_item.m"
            }
#line 155 "prog_io_item.m"
            {
#line 155 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 155 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 155 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 155 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_20, 2) = ((MR_Box) (parse_tree__prog_io_item__V_49_49));
#line 155 "prog_io_item.m"
            }
#line 157 "prog_io_item.m"
            {
#line 157 "prog_io_item.m"
              parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 157 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_20));
#line 157 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 157 "prog_io_item.m"
            }
#line 157 "prog_io_item.m"
            {
#line 157 "prog_io_item.m"
              MR_Word base;
#line 157 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 157 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_10 = base;
#line 157 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 157 "prog_io_item.m"
            }
#line 152 "prog_io_item.m"
          }
#line 151 "prog_io_item.m"
      }
#line 159 "prog_io_item.m"
    else
#line 167 "prog_io_item.m"
      {
#line 167 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCGHeadTerm_21;
#line 167 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCGBodyTerm_22;
#line 167 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCGContext_23;
#line 160 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_57_57;
#line 160 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_58_58;
#line 160 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_59_59;
#line 160 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_60_60;
#line 160 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_61_61;

#line 160 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 160 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 160 "prog_io_item.m"
          {
#line 160 "prog_io_item.m"
            parse_tree__prog_io_item__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 160 "prog_io_item.m"
            parse_tree__prog_io_item__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 160 "prog_io_item.m"
            parse_tree__prog_io_item__DCGContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 160 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_57_57)) == (MR_mktag((MR_Integer) 0)));
#line 160 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 160 "prog_io_item.m"
              {
#line 160 "prog_io_item.m"
                parse_tree__prog_io_item__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_57_57, (MR_Integer) 0)));
#line 160 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_58_58, (MR_String) "-->") == 0);
#line 160 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 160 "prog_io_item.m"
                  {
#line 160 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 160 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 160 "prog_io_item.m"
                      {
#line 160 "prog_io_item.m"
                        parse_tree__prog_io_item__DCGHeadTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_59_59, (MR_Integer) 0)));
#line 160 "prog_io_item.m"
                        parse_tree__prog_io_item__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_59_59, (MR_Integer) 1)));
#line 160 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 160 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 160 "prog_io_item.m"
                          {
#line 160 "prog_io_item.m"
                            parse_tree__prog_io_item__DCGBodyTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, (MR_Integer) 0)));
#line 160 "prog_io_item.m"
                            parse_tree__prog_io_item__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, (MR_Integer) 1)));
#line 160 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "prog_io_item.m"
                          }
#line 160 "prog_io_item.m"
                      }
#line 160 "prog_io_item.m"
                  }
#line 160 "prog_io_item.m"
              }
#line 160 "prog_io_item.m"
          }
#line 167 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 165 "prog_io_item.m"
          {
#line 165 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeItem_73;

#line 164 "prog_io_item.m"
            {
#line 164 "prog_io_item.m"
              parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__DCGHeadTerm_21, parse_tree__prog_io_item__DCGBodyTerm_22, parse_tree__prog_io_item__DCGContext_23, parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__MaybeItem_73);
            }
#line 166 "prog_io_item.m"
            {
#line 166 "prog_io_item.m"
              parse_tree__prog_io_item__maybe_item_to_item_or_marker_2_p_0(parse_tree__prog_io_item__MaybeItem_73, parse_tree__prog_io_item__MaybeIOM_10);
#line 166 "prog_io_item.m"
              return;
            }
#line 165 "prog_io_item.m"
          }
#line 167 "prog_io_item.m"
        else
#line 182 "prog_io_item.m"
          {
#line 182 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__HeadTerm_27;
#line 182 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__BodyTerm_28;
#line 182 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ClauseContext_29;
#line 182 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ProgVarSet_30;
#line 182 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeItem_74;
#line 177 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__HeadTermPrime_24;
#line 177 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__BodyTermPrime_25;
#line 177 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TermContext_26;
#line 170 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_62_62;
#line 170 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__V_63_63;
#line 170 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_64_64;
#line 170 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_65_65;
#line 170 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_66_66;

#line 170 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 170 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 170 "prog_io_item.m"
              {
#line 170 "prog_io_item.m"
                parse_tree__prog_io_item__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 170 "prog_io_item.m"
                parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 170 "prog_io_item.m"
                parse_tree__prog_io_item__TermContext_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 170 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 170 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 170 "prog_io_item.m"
                  {
#line 170 "prog_io_item.m"
                    parse_tree__prog_io_item__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_62_62, (MR_Integer) 0)));
#line 170 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_63_63, (MR_String) ":-") == 0);
#line 170 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 170 "prog_io_item.m"
                      {
#line 171 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 171 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 171 "prog_io_item.m"
                          {
#line 171 "prog_io_item.m"
                            parse_tree__prog_io_item__HeadTermPrime_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 171 "prog_io_item.m"
                            parse_tree__prog_io_item__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_64_64, (MR_Integer) 1)));
#line 171 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_65_65)) == (MR_mktag((MR_Integer) 1)));
#line 171 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 171 "prog_io_item.m"
                              {
#line 171 "prog_io_item.m"
                                parse_tree__prog_io_item__BodyTermPrime_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_65_65, (MR_Integer) 0)));
#line 171 "prog_io_item.m"
                                parse_tree__prog_io_item__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_65_65, (MR_Integer) 1)));
#line 171 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "prog_io_item.m"
                              }
#line 171 "prog_io_item.m"
                          }
#line 170 "prog_io_item.m"
                      }
#line 170 "prog_io_item.m"
                  }
#line 170 "prog_io_item.m"
              }
#line 177 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 174 "prog_io_item.m"
              {
#line 174 "prog_io_item.m"
                parse_tree__prog_io_item__HeadTerm_27 = parse_tree__prog_io_item__HeadTermPrime_24;
#line 175 "prog_io_item.m"
                parse_tree__prog_io_item__BodyTerm_28 = parse_tree__prog_io_item__BodyTermPrime_25;
#line 176 "prog_io_item.m"
                parse_tree__prog_io_item__ClauseContext_29 = parse_tree__prog_io_item__TermContext_26;
#line 174 "prog_io_item.m"
              }
#line 177 "prog_io_item.m"
            else
#line 179 "prog_io_item.m"
              {
#line 179 "prog_io_item.m"
                parse_tree__prog_io_item__HeadTerm_27 = parse_tree__prog_io_item__Term_8;
#line 180 "prog_io_item.m"
                {
#line 180 "prog_io_item.m"
                  parse_tree__prog_io_item__ClauseContext_29 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__HeadTerm_27);
                }
#line 181 "prog_io_item.m"
                {
#line 181 "prog_io_item.m"
                  parse_tree__prog_io_item__BodyTerm_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 181 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_28, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[1]));
#line 181 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_28, 2) = ((MR_Box) (parse_tree__prog_io_item__ClauseContext_29));
#line 181 "prog_io_item.m"
                }
#line 179 "prog_io_item.m"
              }
#line 183 "prog_io_item.m"
            {
#line 183 "prog_io_item.m"
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__VarSet_7, &parse_tree__prog_io_item__ProgVarSet_30);
            }
#line 184 "prog_io_item.m"
            {
#line 184 "prog_io_item.m"
              parse_tree__prog_io_item__parse_clause_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__HeadTerm_27, parse_tree__prog_io_item__BodyTerm_28, parse_tree__prog_io_item__ProgVarSet_30, parse_tree__prog_io_item__ClauseContext_29, parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__MaybeItem_74);
            }
#line 186 "prog_io_item.m"
            {
#line 186 "prog_io_item.m"
              parse_tree__prog_io_item__maybe_item_to_item_or_marker_2_p_0(parse_tree__prog_io_item__MaybeItem_74, parse_tree__prog_io_item__MaybeIOM_10);
#line 186 "prog_io_item.m"
              return;
            }
#line 182 "prog_io_item.m"
          }
#line 167 "prog_io_item.m"
      }
#line 159 "prog_io_item.m"
  }
#line 75 "prog_io_item.m"
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
