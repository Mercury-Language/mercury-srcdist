/*
** Automatically generated from `prog_io.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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


/* :- module parse_tree.prog_io. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io__init
ENDINIT
*/

#include "parse_tree.prog_io.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "lexer.mih"
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
#include "parser.mih"
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
#include "term_io.mih"
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




#line 148 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 151 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 154 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 157 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 163 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 166 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 169 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 172 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 175 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 178 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 181 "parse_tree.prog_io.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io____vpti_pred_2__pseudo_1__pseudo_2;

#line 184 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_return_timestamp_0_0;

#line 187 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_return_timestamp_0_1;

#line 190 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_maybe_return_timestamp_0[2];

#line 193 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_maybe_return_timestamp_0[2];

#line 196 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_return_timestamp_0[2];

#line 199 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_module_end_0_0;

#line 202 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_module_end_0_1[2];

#line 205 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_module_end_0_1;

#line 208 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_module_end_0_0[1];

#line 211 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_module_end_0_1[1];

#line 214 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_module_end_0[2];

#line 217 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_module_end_0[2];

#line 220 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_module_end_0[2];

#line 223 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_module_error_0_0;

#line 226 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_module_error_0_1;

#line 229 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_module_error_0_2;

#line 232 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_module_error_0[3];

#line 235 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_module_error_0[3];

#line 238 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_module_error_0[3];

#line 241 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_0;

#line 244 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 247 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_1[1];

#line 250 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_1;

#line 253 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_2[1];

#line 256 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_2;

#line 259 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_0[1];

#line 262 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_1[1];

#line 265 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_2[1];

#line 268 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_read_item_result_0[3];

#line 271 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_item_result_0[3];

#line 274 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_item_result_0[3];

#line 277 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maker_2_0_10001(
#line 280 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 282 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 284 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 286 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4);

#line 289 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maker_2_0_10001(
#line 292 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 294 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 296 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 298 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4,
#line 300 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_5);

#line 303 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_return_timestamp_0_0_10001(
#line 306 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 308 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 311 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_return_timestamp_0_0_10001(
#line 314 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 316 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 318 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 321 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____module_end_0_0_10001(
#line 324 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 326 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 329 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____module_end_0_0_10001(
#line 332 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 334 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 336 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 339 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____module_error_0_0_10001(
#line 342 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 344 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 347 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____module_error_0_0_10001(
#line 350 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 352 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 354 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 357 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_item_result_0_0_10001(
#line 360 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 362 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2);

#line 365 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_item_result_0_0_10001(
#line 368 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 370 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 372 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3);

#line 1267 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_p_0(
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__ParserPred_8,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_10,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_11,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_12,
#line 1267 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_13,
#line 1267 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_14);

#line 1267 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_p_0(
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__ParserPred_8,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_10,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_11,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_12,
#line 1267 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_13,
#line 1267 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_14);

#line 1267 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__ParserPred_8,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_10,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_11,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_12,
#line 1267 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_13,
#line 1267 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_14);

#line 2261 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(
#line 2261 "prog_io.m"
  MR_Word parse_tree__prog_io__V_11_11,
#line 2261 "prog_io.m"
  MR_Word parse_tree__prog_io__V_12_12,
#line 2261 "prog_io.m"
  MR_Integer parse_tree__prog_io__V_13_13,
#line 2261 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 2261 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__3_3);

#line 2258 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 2258 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 2258 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 2163 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0(
#line 2163 "prog_io.m"
  MR_Word parse_tree__prog_io__QuantType_7,
#line 2163 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Attributes_0_13,
#line 2163 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Attributes_14,
#line 2163 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Vars_0_15,
#line 2163 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Vars_16);

#line 2056 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1(
#line 2056 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 2056 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2056 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 2028 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0(
#line 2028 "prog_io.m"
  MR_Word parse_tree__prog_io__PromiseType_10,
#line 2028 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_11,
#line 2028 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__4_4,
#line 2028 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_13,
#line 2028 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_14,
#line 2028 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_15,
#line 2028 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_16);

#line 1278 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_p_0(
#line 1278 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_8,
#line 1278 "prog_io.m"
  MR_Word parse_tree__prog_io__ArgTerms_10,
#line 1278 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_11,
#line 1278 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_12,
#line 1278 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_13,
#line 1278 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_14);

#line 240 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(
#line 240 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 240 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_15,
#line 240 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_16,
#line 240 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeOldTimestamp_17,
#line 240 "prog_io.m"
  MR_Word parse_tree__prog_io__ReturnTimestamp_18,
#line 240 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeFileData_19,
#line 240 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_20,
#line 240 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_21,
#line 240 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_22,
#line 240 "prog_io.m"
  MR_Word * parse_tree__prog_io__Error_23,
#line 240 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestamp_24);

#line 2056 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__parse_promise__2056__1_2_p_0(
#line 2056 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_39,
#line 2056 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__2_40);

#line 1968 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__get_class_context_and_inst_constraints__1968__1_2_p_0(
#line 1968 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_38,
#line 1968 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__2_39);

#line 982 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__parse_clause__982__1_2_p_0(
#line 982 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_79,
#line 982 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__2_80);

#line 966 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__parse_clause__966__1_2_p_0(
#line 966 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_73,
#line 966 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__2_74);

#line 867 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_item_result_0_0(
#line 867 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 867 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 867 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 867 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_item_result_0_0(
#line 867 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 867 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 424 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____module_end_0_0(
#line 424 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 424 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 424 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 424 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____module_end_0_0(
#line 424 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 424 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 2258 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maker_2_0(
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_T1_6,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_T2_7,
#line 2258 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3);

#line 2258 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maker_2_0(
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_T1_5,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_T2_6,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2);

#line 2315 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_include_module_decl_4_p_0(
#line 2315 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 2315 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 2315 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 2315 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8);

#line 2307 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_use_module_decl_4_p_0(
#line 2307 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 2307 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 2307 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 2307 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8);

#line 2299 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_import_module_decl_4_p_0(
#line 2299 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 2299 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 2299 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 2299 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8);

#line 2249 "prog_io.m"
static MR_Word MR_CALL 
parse_tree__prog_io__pred_or_func_decl_pieces_1_f_0(
#line 2249 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1);

#line 2238 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__get_purity_3_p_0(
#line 2238 "prog_io.m"
  MR_Word * parse_tree__prog_io__Purity_4,
#line 2238 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Attributes_0_8,
#line 2238 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Attributes_9);

#line 2218 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_module_name_4_p_0(
#line 2218 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_5,
#line 2218 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_6,
#line 2218 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_7,
#line 2218 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModule_8);

#line 2207 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_module_specifier_3_p_0(
#line 2207 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_4,
#line 2207 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_5,
#line 2207 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleSpecifier_6);

#line 2184 "prog_io.m"
static MR_Word MR_CALL 
parse_tree__prog_io__desugar_field_access_1_f_0(
#line 2184 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_3);

#line 2138 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_with_inst_suffix_3_p_0(
#line 2138 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_4,
#line 2138 "prog_io.m"
  MR_Word * parse_tree__prog_io__BeforeWithInstTerm_5,
#line 2138 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeWithInst_6);

#line 2107 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_with_type_suffix_4_p_0(
#line 2107 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_5,
#line 2107 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_6,
#line 2107 "prog_io.m"
  MR_Word * parse_tree__prog_io__BeforeWithTypeTerm_7,
#line 2107 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeWithType_8);

#line 2078 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_determinism_suffix_4_p_0(
#line 2078 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_5,
#line 2078 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_6,
#line 2078 "prog_io.m"
  MR_Word * parse_tree__prog_io__BeforeDetismTerm_7,
#line 2078 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeMaybeDetism_8);

#line 1990 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__get_constraints_6_p_0(
#line 1990 "prog_io.m"
  MR_Word parse_tree__prog_io__QuantType_7,
#line 1990 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_8,
#line 1990 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_9,
#line 1990 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Attributes_0_23,
#line 1990 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Attributes_24,
#line 1990 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeClassInstConstraints_11);

#line 1968 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__get_class_context_and_inst_constraints_5_p_0_1(
#line 1968 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 1968 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 1968 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 1925 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__get_class_context_and_inst_constraints_5_p_0(
#line 1925 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_6,
#line 1925 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_7,
#line 1925 "prog_io.m"
  MR_Word parse_tree__prog_io__RevAttributes0_8,
#line 1925 "prog_io.m"
  MR_Word * parse_tree__prog_io__RevAttributes_9,
#line 1925 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeExistClassInstContext_10);

#line 1854 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_func_mode_decl_13_p_0_1(
#line 1854 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 1854 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 1854 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 1841 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_func_mode_decl_13_p_0(
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__Functor_14,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__ArgTerms_15,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_16,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__FuncMode_17,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__RetModeTerm_18,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__FullTerm_19,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_20,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeDet_21,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__Condition_22,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes0_23,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_24,
#line 1841 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_25,
#line 1841 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_26);

#line 1798 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_pred_mode_decl_12_p_0_1(
#line 1798 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 1798 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 1798 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 1785 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_pred_mode_decl_12_p_0(
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__Functor_13,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__ArgTerms_14,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_15,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__PredModeTerm_16,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_17,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__WithInst_18,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeDet_19,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__Condition_20,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes0_21,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_22,
#line 1785 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_23,
#line 1785 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_24);

#line 1745 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_mode_decl_base_10_p_0(
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_11,
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_12,
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_13,
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__Condition_14,
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_15,
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__WithInst_16,
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeDet_17,
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_18,
#line 1745 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_19,
#line 1745 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_20);

#line 1710 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_mode_decl_7_p_0(
#line 1710 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_8,
#line 1710 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_9,
#line 1710 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_10,
#line 1710 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_11,
#line 1710 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_12,
#line 1710 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_13,
#line 1710 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_14);

#line 1691 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__verify_type_and_mode_list_2_2_p_0(
#line 1691 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1691 "prog_io.m"
  MR_Word parse_tree__prog_io__First_2);

#line 1685 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__verify_type_and_mode_list_1_p_0(
#line 1685 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1);

#line 1668 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__parse_type_and_mode_3_p_0(
#line 1668 "prog_io.m"
  MR_Word parse_tree__prog_io__InstConstraints_4,
#line 1668 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_5,
#line 1668 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeTypeAndMode_6);

#line 1660 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__parse_type_and_mode_list_3_p_0(
#line 1660 "prog_io.m"
  MR_Word parse_tree__prog_io__InstConstraints_1,
#line 1660 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1660 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__3_3);

#line 1585 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_func_decl_base_2_14_p_0(
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__FuncName_15,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__Args_16,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__ReturnArg_17,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__FuncTerm_18,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_19,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_20,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeDet_21,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__Condition_22,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__ExistQVars_23,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__Constraints_24,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes0_25,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_26,
#line 1585 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_27,
#line 1585 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_28);

#line 1502 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_func_decl_base_9_p_0(
#line 1502 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_10,
#line 1502 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_11,
#line 1502 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_12,
#line 1502 "prog_io.m"
  MR_Word parse_tree__prog_io__Condition_13,
#line 1502 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeDet_14,
#line 1502 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes0_15,
#line 1502 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_16,
#line 1502 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_17,
#line 1502 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_18);

#line 1401 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_pred_decl_base_12_p_0(
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__PredOrFunc_13,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_14,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_15,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__PredTypeTerm_16,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__Condition_17,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__WithType_18,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__WithInst_19,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeDet_20,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes0_21,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_22,
#line 1401 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_23,
#line 1401 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_24);

#line 1339 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_pred_or_func_decl_8_p_0(
#line 1339 "prog_io.m"
  MR_Word parse_tree__prog_io__PredOrFunc_9,
#line 1339 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_10,
#line 1339 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_11,
#line 1339 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_12,
#line 1339 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_13,
#line 1339 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_14,
#line 1339 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_15,
#line 1339 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_16);

#line 1180 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_attributed_decl_8_p_0_4(
#line 1180 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 1180 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 1180 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 1102 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_attributed_decl_8_p_0_3(
#line 1102 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 1102 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 1102 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 1102 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_attributed_decl_8_p_0_2(
#line 1102 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 1102 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 1102 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 1102 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_attributed_decl_8_p_0_1(
#line 1102 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 1102 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 1102 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 1049 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__parse_attributed_decl_8_p_0(
#line 1049 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_9,
#line 1049 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_10,
#line 1049 "prog_io.m"
  MR_String parse_tree__prog_io__Functor_11,
#line 1049 "prog_io.m"
  MR_Word parse_tree__prog_io__ArgTerms_12,
#line 1049 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_13,
#line 1049 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_14,
#line 1049 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_15,
#line 1049 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_16);

#line 1009 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_attrs_and_decl_6_p_0(
#line 1009 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 1009 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_8,
#line 1009 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_9,
#line 1009 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Attributes_0_22,
#line 1009 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_11,
#line 1009 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_12);

#line 982 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_clause_7_p_0_2(
#line 982 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 982 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 982 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 966 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_clause_7_p_0_1(
#line 966 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 966 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 966 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 945 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_clause_7_p_0(
#line 945 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_8,
#line 945 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadTerm_9,
#line 945 "prog_io.m"
  MR_Word parse_tree__prog_io__BodyTerm0_10,
#line 945 "prog_io.m"
  MR_Word parse_tree__prog_io__ProgVarSet0_11,
#line 945 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_12,
#line 945 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_13,
#line 945 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_14);

#line 882 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_term_to_item_result_6_p_0(
#line 882 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 882 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_8,
#line 882 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadTermResult_9,
#line 882 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_23,
#line 882 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_24,
#line 882 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadItemResult_11);

#line 797 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_ok_14_p_0_3(
#line 797 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 797 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 797 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 793 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_ok_14_p_0_2(
#line 793 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 793 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 793 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 789 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_ok_14_p_0_1(
#line 789 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 789 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 789 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2);

#line 759 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_ok_14_p_0(
#line 759 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 759 "prog_io.m"
  MR_Word parse_tree__prog_io__Item_16,
#line 759 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_71,
#line 759 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleName_72,
#line 759 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_73,
#line 759 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_74,
#line 759 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Items_0_75,
#line 759 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Items_76,
#line 759 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_77,
#line 759 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_78,
#line 759 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_0_79,
#line 759 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_80);

#line 731 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_2_14_p_0(
#line 731 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 731 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeItemOrEOF_16,
#line 731 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_26,
#line 731 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_27,
#line 731 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Items_0_28,
#line 731 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Items_29,
#line 731 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_30,
#line 731 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_31,
#line 731 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_0_32,
#line 731 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_33,
#line 731 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_34,
#line 731 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_35);

#line 717 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_13_p_0(
#line 717 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 717 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_15,
#line 717 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_16,
#line 717 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Items_0_23,
#line 717 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Items_24,
#line 717 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_25,
#line 717 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_26,
#line 717 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_0_27,
#line 717 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_28,
#line 717 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_29,
#line 717 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_30);

#line 704 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_module_decl_3_p_0(
#line 704 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_4,
#line 704 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 704 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_6);

#line 616 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_first_item_12_p_0(
#line 616 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_13,
#line 616 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39,
#line 616 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_40,
#line 616 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_15,
#line 616 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleDeclItem_16,
#line 616 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeSecondTerm_17,
#line 616 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_18,
#line 616 "prog_io.m"
  MR_Word * parse_tree__prog_io__Error_19,
#line 616 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_41,
#line 616 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42);

#line 565 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_all_items_8_p_0(
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_9,
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_10,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_11,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_12,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_31,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_32);

#line 508 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__dummy_term_with_context_2_p_0(
#line 508 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_3,
#line 508 "prog_io.m"
  MR_Word * parse_tree__prog_io__Term_4);

#line 457 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__check_end_module_7_p_0(
#line 457 "prog_io.m"
  MR_Word parse_tree__prog_io__EndModule_8,
#line 457 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Items_0_21,
#line 457 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Items_22,
#line 457 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_23,
#line 457 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_24,
#line 457 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_0_25,
#line 457 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_26);

#line 430 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__get_end_module_4_p_0(
#line 430 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 430 "prog_io.m"
  MR_Word parse_tree__prog_io__RevItems0_6,
#line 430 "prog_io.m"
  MR_Word * parse_tree__prog_io__RevItems_7,
#line 430 "prog_io.m"
  MR_Word * parse_tree__prog_io__EndModule_8);

#line 409 "prog_io.m"
static MR_Word MR_CALL 
parse_tree__prog_io__drop_one_qualifier_2_2_f_0(
#line 409 "prog_io.m"
  MR_Word parse_tree__prog_io__ParentQual_4,
#line 409 "prog_io.m"
  MR_String parse_tree__prog_io__ChildName_5);

#line 382 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__search_for_module_source_2_7_p_0(
#line 382 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 382 "prog_io.m"
  MR_Word parse_tree__prog_io__Dirs_9,
#line 382 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_10,
#line 382 "prog_io.m"
  MR_Word parse_tree__prog_io__PartialModuleName_11,
#line 382 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeFileName_12);

#line 212 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_opt_file_8_p_0_1(
#line 212 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 212 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 212 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 212 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_io_scalar_common_1[152][2];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_2[6][3];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_3[35][1];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_4[1][4];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_5[1][9];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_6[2][7];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_7[3][5];

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_8[2][6];




static /* final */ const MR_Box parse_tree__prog_io_scalar_common_1[152][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "does not match"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: module must start with a"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[17])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: atom expected after \140:-\'."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_scalar_common_3[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid module name in"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid version number in"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[29])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "and determinism both specified."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_scalar_common_3[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_scalar_common_3[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "without"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "specified"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_scalar_common_3[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "specified without argument modes."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_scalar_common_3[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "not specified."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_scalar_common_3[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: arguments have modes but"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "inst variables in"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: inconsistent constraints on"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[55])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "have modes."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: some but not all arguments"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_scalar_common_3[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_scalar_common_3[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[16])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in return type of"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[66])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[68])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "expected in"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[66])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_scalar_common_3[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[73])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: some but not all arguments have modes."))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but function result does not."))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: function arguments have modes,"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[78])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "but function arguments do not."))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: function result has mode,"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_scalar_common_3[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[62])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In function"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[85])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[85])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of function mode declaration."))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error in return mode"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[90])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_scalar_common_3[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid inst in"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(e.g. \":- module \'Foo\'.\")."))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must be quoted using single quotes"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[97])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: module names starting with capital letters"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_scalar_common_3[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[62])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: file"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "contains the wrong module."))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Expected module"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "found module"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error opening"))
  },
  /* row 110 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: source file"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "contains module named"))
  },
  /* row 113 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: "))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In equation head:"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In clause head:"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: unrecognized declaration:"))
  },
  /* row 120 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 121 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[14])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 122 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[15])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 126 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[16])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 127 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 128 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[18])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error in"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "at"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error in arguments of"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration at"))
  },
  /* row 134 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[19])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 135 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[20])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 136 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[21])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 137 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[22])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 138 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[23])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: inconsistent constraints"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "on inst variables in function declaration:"))
  },
  /* row 141 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[24])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "on inst variables"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in predicate mode declaration:"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: syntax error in mode declaration at"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "in function mode declaration:"))
  },
  /* row 146 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[28])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "function mode declaration at"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: invalid determinism category"))
  },
  /* row 149 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[31])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 150 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[32])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 151 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_3[34])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_decl_attribute_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_io_scalar_common_1[8])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_7[0])),
    ((MR_Box) (parse_tree__prog_io__parse_clause_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_7[0])),
    ((MR_Box) (parse_tree__prog_io__parse_clause_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_7[1])),
    ((MR_Box) (parse_tree__prog_io__get_class_context_and_inst_constraints_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_io_scalar_common_7[2])),
    ((MR_Box) (parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_3[35][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ":- module"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) ":- end_module"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ":- version_numbers"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "with_inst"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "with_type"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ":- func"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "="))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ":- mode"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ":- pred"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "true"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[24])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[26])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[28])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[37])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[44])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[48])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[53])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[61])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[70])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[74])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[76])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[80])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[84])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[95])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[92])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[101])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 23))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[33])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__file_util__libs__file_util__type_ctor_info_maybe_open_file_0)),
    ((MR_Box) (&parse_tree__prog_io__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_io__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_7[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_scalar_common_8[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_io__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_io__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 2487 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2495 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io__maybe__pti_maybe_error_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2504 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2512 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2520 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2528 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__parse_tree__prog_io_util__pti_maybe1_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 2536 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2544 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 2553 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2561 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2569 "parse_tree.prog_io.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2577 "parse_tree.prog_io.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__prog_io____vpti_pred_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2587 "parse_tree.prog_io.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_maker_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__prog_io____Unify____maker_2_0_10001)),
  ((MR_Box) (parse_tree__prog_io____Compare____maker_2_0_10001)),
  (MR_String) "parse_tree.prog_io",
  (MR_String) "maker",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io____vpti_pred_2__pseudo_1__pseudo_2
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2608 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_return_timestamp_0_0 = {
  (MR_String) "do_return_timestamp",
  (MR_Integer) 0
};

#line 2614 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_return_timestamp_0_1 = {
  (MR_String) "do_not_return_timestamp",
  (MR_Integer) 1
};

#line 2620 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_maybe_return_timestamp_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_return_timestamp_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_return_timestamp_0_1
};

#line 2626 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_maybe_return_timestamp_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_return_timestamp_0_1,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_maybe_return_timestamp_0_0
};

#line 2632 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_return_timestamp_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2638 "parse_tree.prog_io.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_maybe_return_timestamp_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io____Unify____maybe_return_timestamp_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io____Compare____maybe_return_timestamp_0_0_10001)),
  (MR_String) "parse_tree.prog_io",
  (MR_String) "maybe_return_timestamp",
  {
    parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_maybe_return_timestamp_0
  },
  {
    parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_maybe_return_timestamp_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io__parse_tree__prog_io__functor_number_map_maybe_return_timestamp_0
};

#line 2659 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_module_end_0_0 = {
  (MR_String) "module_end_no",
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

#line 2674 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_module_end_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 2680 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_module_end_0_1 = {
  (MR_String) "module_end_yes",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io__parse_tree__prog_io__field_types_module_end_0_1,
  NULL,
  NULL,
  NULL
};

#line 2695 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_module_end_0_0[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_module_end_0_0
};

#line 2700 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_module_end_0_1[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_module_end_0_1
};

#line 2705 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_module_end_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_module_end_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_module_end_0_1
  }
};

#line 2719 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_module_end_0[2] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_module_end_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_module_end_0_1
};

#line 2725 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_module_end_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2731 "parse_tree.prog_io.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_module_end_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io____Unify____module_end_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io____Compare____module_end_0_0_10001)),
  (MR_String) "parse_tree.prog_io",
  (MR_String) "module_end",
  {
    parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_module_end_0
  },
  {
    parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_module_end_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io__parse_tree__prog_io__functor_number_map_module_end_0
};

#line 2752 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_module_error_0_0 = {
  (MR_String) "no_module_errors",
  (MR_Integer) 0
};

#line 2758 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_module_error_0_1 = {
  (MR_String) "some_module_errors",
  (MR_Integer) 1
};

#line 2764 "parse_tree.prog_io.c"
static const MR_EnumFunctorDesc parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_module_error_0_2 = {
  (MR_String) "fatal_module_errors",
  (MR_Integer) 2
};

#line 2770 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_module_error_0[3] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_module_error_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_module_error_0_1,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_module_error_0_2
};

#line 2777 "parse_tree.prog_io.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_module_error_0[3] = {
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_module_error_0_2,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_module_error_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__enum_functor_desc_module_error_0_1
};

#line 2784 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_module_error_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2791 "parse_tree.prog_io.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_module_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io____Unify____module_error_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io____Compare____module_error_0_0_10001)),
  (MR_String) "parse_tree.prog_io",
  (MR_String) "module_error",
  {
    parse_tree__prog_io__parse_tree__prog_io__enum_name_ordered_module_error_0
  },
  {
    parse_tree__prog_io__parse_tree__prog_io__enum_value_ordered_module_error_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_io__parse_tree__prog_io__functor_number_map_module_error_0
};

#line 2812 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_0 = {
  (MR_String) "read_item_eof",
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

#line 2827 "parse_tree.prog_io.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2835 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

#line 2840 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_1 = {
  (MR_String) "read_item_errors",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 2855 "parse_tree.prog_io.c"
static const MR_PseudoTypeInfo parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
};

#line 2860 "parse_tree.prog_io.c"
static const MR_DuFunctorDesc parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_2 = {
  (MR_String) "read_item_ok",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io__parse_tree__prog_io__field_types_read_item_result_0_2,
  NULL,
  NULL,
  NULL
};

#line 2875 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_0[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_0
};

#line 2880 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_1[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_1
};

#line 2885 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_2[1] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_2
};

#line 2890 "parse_tree.prog_io.c"
static const MR_DuPtagLayout parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_read_item_result_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io__parse_tree__prog_io__du_stag_ordered_read_item_result_0_2
  }
};

#line 2909 "parse_tree.prog_io.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_item_result_0[3] = {
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_0,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_1,
  &parse_tree__prog_io__parse_tree__prog_io__du_functor_desc_read_item_result_0_2
};

#line 2916 "parse_tree.prog_io.c"
static const MR_Integer parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_item_result_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2923 "parse_tree.prog_io.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_read_item_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io____Unify____read_item_result_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io____Compare____read_item_result_0_0_10001)),
  (MR_String) "parse_tree.prog_io",
  (MR_String) "read_item_result",
  {
    parse_tree__prog_io__parse_tree__prog_io__du_name_ordered_read_item_result_0
  },
  {
    parse_tree__prog_io__parse_tree__prog_io__du_ptag_ordered_read_item_result_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_io__parse_tree__prog_io__functor_number_map_read_item_result_0
};

#line 2944 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maker_2_0_10001(
#line 2947 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2949 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2951 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3,
#line 2953 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4)
#line 2955 "parse_tree.prog_io.c"
{
#line 2957 "parse_tree.prog_io.c"
  {
#line 2959 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 2962 "parse_tree.prog_io.c"
    {
#line 2964 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____maker_2_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3), ((MR_Word) parse_tree__prog_io__wrapper_arg_4));
    }
#line 2967 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 2969 "parse_tree.prog_io.c"
  }
#line 2971 "parse_tree.prog_io.c"
}

#line 2974 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maker_2_0_10001(
#line 2977 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2979 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 2981 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_3,
#line 2983 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_4,
#line 2985 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_5)
#line 2987 "parse_tree.prog_io.c"
{
#line 2989 "parse_tree.prog_io.c"
  {
#line 2991 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 2994 "parse_tree.prog_io.c"
    {
#line 2996 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____maker_2_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2), &parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_4), ((MR_Word) parse_tree__prog_io__wrapper_arg_5));
    }
#line 2999 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_3 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 3001 "parse_tree.prog_io.c"
  }
#line 3003 "parse_tree.prog_io.c"
}

#line 3006 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_return_timestamp_0_0_10001(
#line 3009 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 3011 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 3013 "parse_tree.prog_io.c"
{
#line 3015 "parse_tree.prog_io.c"
  {
#line 3017 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 3020 "parse_tree.prog_io.c"
    {
#line 3022 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____maybe_return_timestamp_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 3025 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 3027 "parse_tree.prog_io.c"
  }
#line 3029 "parse_tree.prog_io.c"
}

#line 3032 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____maybe_return_timestamp_0_0_10001(
#line 3035 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 3037 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 3039 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 3041 "parse_tree.prog_io.c"
{
#line 3043 "parse_tree.prog_io.c"
  {
#line 3045 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 3048 "parse_tree.prog_io.c"
    {
#line 3050 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____maybe_return_timestamp_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 3053 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 3055 "parse_tree.prog_io.c"
  }
#line 3057 "parse_tree.prog_io.c"
}

#line 3060 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____module_end_0_0_10001(
#line 3063 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 3065 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 3067 "parse_tree.prog_io.c"
{
#line 3069 "parse_tree.prog_io.c"
  {
#line 3071 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 3074 "parse_tree.prog_io.c"
    {
#line 3076 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____module_end_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 3079 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 3081 "parse_tree.prog_io.c"
  }
#line 3083 "parse_tree.prog_io.c"
}

#line 3086 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____module_end_0_0_10001(
#line 3089 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 3091 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 3093 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 3095 "parse_tree.prog_io.c"
{
#line 3097 "parse_tree.prog_io.c"
  {
#line 3099 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 3102 "parse_tree.prog_io.c"
    {
#line 3104 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____module_end_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 3107 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 3109 "parse_tree.prog_io.c"
  }
#line 3111 "parse_tree.prog_io.c"
}

#line 3114 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____module_error_0_0_10001(
#line 3117 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 3119 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 3121 "parse_tree.prog_io.c"
{
#line 3123 "parse_tree.prog_io.c"
  {
#line 3125 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 3128 "parse_tree.prog_io.c"
    {
#line 3130 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____module_error_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 3133 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 3135 "parse_tree.prog_io.c"
  }
#line 3137 "parse_tree.prog_io.c"
}

#line 3140 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____module_error_0_0_10001(
#line 3143 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 3145 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 3147 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 3149 "parse_tree.prog_io.c"
{
#line 3151 "parse_tree.prog_io.c"
  {
#line 3153 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 3156 "parse_tree.prog_io.c"
    {
#line 3158 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____module_error_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 3161 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 3163 "parse_tree.prog_io.c"
  }
#line 3165 "parse_tree.prog_io.c"
}

#line 3168 "parse_tree.prog_io.c"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_item_result_0_0_10001(
#line 3171 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 3173 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2)
#line 3175 "parse_tree.prog_io.c"
{
#line 3177 "parse_tree.prog_io.c"
  {
#line 3179 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded;

#line 3182 "parse_tree.prog_io.c"
    {
#line 3184 "parse_tree.prog_io.c"
      parse_tree__prog_io__succeeded = parse_tree__prog_io____Unify____read_item_result_0_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), ((MR_Word) parse_tree__prog_io__wrapper_arg_2));
    }
#line 3187 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 3189 "parse_tree.prog_io.c"
  }
#line 3191 "parse_tree.prog_io.c"
}

#line 3194 "parse_tree.prog_io.c"
static void MR_CALL 
parse_tree__prog_io____Compare____read_item_result_0_0_10001(
#line 3197 "parse_tree.prog_io.c"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 3199 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 3201 "parse_tree.prog_io.c"
  MR_Box parse_tree__prog_io__wrapper_arg_3)
#line 3203 "parse_tree.prog_io.c"
{
#line 3205 "parse_tree.prog_io.c"
  {
#line 3207 "parse_tree.prog_io.c"
    MR_Word parse_tree__prog_io__conv0_HeadVar__1_1;

#line 3210 "parse_tree.prog_io.c"
    {
#line 3212 "parse_tree.prog_io.c"
      parse_tree__prog_io____Compare____read_item_result_0_0(&parse_tree__prog_io__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io__wrapper_arg_2), ((MR_Word) parse_tree__prog_io__wrapper_arg_3));
    }
#line 3215 "parse_tree.prog_io.c"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__1_1));
#line 3217 "parse_tree.prog_io.c"
  }
#line 3219 "parse_tree.prog_io.c"
}

#line 1267 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_p_0(
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__ParserPred_8,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_10,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_11,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_12,
#line 1267 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_13,
#line 1267 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_14)
#line 1267 "prog_io.m"
{
#line 1272 "prog_io.m"
  {
#line 1272 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1272 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeModuleSpecs_15;
#line 1272 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeItem0_16;

#line 1273 "prog_io.m"
    {
#line 1273 "prog_io.m"
      parse_tree__prog_io_util__parse_list_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__prog_io__ParserPred_8, parse_tree__prog_io__Term_10, &parse_tree__prog_io__MaybeModuleSpecs_15);
    }
#line 2264 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeModuleSpecs_15)) == (MR_mktag((MR_Integer) 0))))
#line 2266 "prog_io.m"
      parse_tree__prog_io__MaybeItem0_16 = (MR_Word) parse_tree__prog_io__MaybeModuleSpecs_15;
#line 2264 "prog_io.m"
    else
#line 2264 "prog_io.m"
      {
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__X_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeModuleSpecs_15, (MR_Integer) 0)));
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__Y_26;
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__ModuleDefn_38;
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__ItemModuleDefn_39;

#line 2287 "prog_io.m"
        {
#line 2287 "prog_io.m"
          parse_tree__prog_io__ModuleDefn_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2287 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2287 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_38, 1) = ((MR_Box) (parse_tree__prog_io__X_25));
#line 2287 "prog_io.m"
        }
#line 2296 "prog_io.m"
        {
#line 2296 "prog_io.m"
          parse_tree__prog_io__ItemModuleDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2296 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_39, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_38));
#line 2296 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_39, 1) = ((MR_Box) (parse_tree__prog_io__Context_12));
#line 2296 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_39, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_13));
#line 2296 "prog_io.m"
        }
#line 2297 "prog_io.m"
        parse_tree__prog_io__Y_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_39);
#line 2264 "prog_io.m"
        {
#line 2264 "prog_io.m"
          parse_tree__prog_io__MaybeItem0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2264 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem0_16, 0) = ((MR_Box) (parse_tree__prog_io__Y_26));
#line 2264 "prog_io.m"
        }
#line 2264 "prog_io.m"
      }
#line 1276 "prog_io.m"
    {
#line 1276 "prog_io.m"
      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__MaybeItem0_16, parse_tree__prog_io__Attributes_11, parse_tree__prog_io__MaybeItem_14);
#line 1276 "prog_io.m"
      return;
    }
#line 1272 "prog_io.m"
  }
#line 1267 "prog_io.m"
}

#line 1267 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_p_0(
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__ParserPred_8,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_10,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_11,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_12,
#line 1267 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_13,
#line 1267 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_14)
#line 1267 "prog_io.m"
{
#line 1272 "prog_io.m"
  {
#line 1272 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1272 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeModuleSpecs_15;
#line 1272 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeItem0_16;

#line 1273 "prog_io.m"
    {
#line 1273 "prog_io.m"
      parse_tree__prog_io_util__parse_list_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__prog_io__ParserPred_8, parse_tree__prog_io__Term_10, &parse_tree__prog_io__MaybeModuleSpecs_15);
    }
#line 2264 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeModuleSpecs_15)) == (MR_mktag((MR_Integer) 0))))
#line 2266 "prog_io.m"
      parse_tree__prog_io__MaybeItem0_16 = (MR_Word) parse_tree__prog_io__MaybeModuleSpecs_15;
#line 2264 "prog_io.m"
    else
#line 2264 "prog_io.m"
      {
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__X_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeModuleSpecs_15, (MR_Integer) 0)));
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__Y_26;
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__ModuleDefn_38;
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__ItemModuleDefn_39;

#line 2283 "prog_io.m"
        {
#line 2283 "prog_io.m"
          parse_tree__prog_io__ModuleDefn_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2283 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2283 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_38, 1) = ((MR_Box) (parse_tree__prog_io__X_25));
#line 2283 "prog_io.m"
        }
#line 2296 "prog_io.m"
        {
#line 2296 "prog_io.m"
          parse_tree__prog_io__ItemModuleDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2296 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_39, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_38));
#line 2296 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_39, 1) = ((MR_Box) (parse_tree__prog_io__Context_12));
#line 2296 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_39, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_13));
#line 2296 "prog_io.m"
        }
#line 2297 "prog_io.m"
        parse_tree__prog_io__Y_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_39);
#line 2264 "prog_io.m"
        {
#line 2264 "prog_io.m"
          parse_tree__prog_io__MaybeItem0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2264 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem0_16, 0) = ((MR_Box) (parse_tree__prog_io__Y_26));
#line 2264 "prog_io.m"
        }
#line 2264 "prog_io.m"
      }
#line 1276 "prog_io.m"
    {
#line 1276 "prog_io.m"
      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__MaybeItem0_16, parse_tree__prog_io__Attributes_11, parse_tree__prog_io__MaybeItem_14);
#line 1276 "prog_io.m"
      return;
    }
#line 1272 "prog_io.m"
  }
#line 1267 "prog_io.m"
}

#line 1267 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__ParserPred_8,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_10,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_11,
#line 1267 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_12,
#line 1267 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_13,
#line 1267 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_14)
#line 1267 "prog_io.m"
{
#line 1272 "prog_io.m"
  {
#line 1272 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1272 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeModuleSpecs_15;
#line 1272 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeItem0_16;

#line 1273 "prog_io.m"
    {
#line 1273 "prog_io.m"
      parse_tree__prog_io_util__parse_list_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__prog_io__ParserPred_8, parse_tree__prog_io__Term_10, &parse_tree__prog_io__MaybeModuleSpecs_15);
    }
#line 2264 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeModuleSpecs_15)) == (MR_mktag((MR_Integer) 0))))
#line 2266 "prog_io.m"
      parse_tree__prog_io__MaybeItem0_16 = (MR_Word) parse_tree__prog_io__MaybeModuleSpecs_15;
#line 2264 "prog_io.m"
    else
#line 2264 "prog_io.m"
      {
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__X_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeModuleSpecs_15, (MR_Integer) 0)));
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__Y_26;
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__ModuleDefn_38;
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__ItemModuleDefn_39;

#line 2279 "prog_io.m"
        {
#line 2279 "prog_io.m"
          parse_tree__prog_io__ModuleDefn_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2279 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2279 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_38, 1) = ((MR_Box) (parse_tree__prog_io__X_25));
#line 2279 "prog_io.m"
        }
#line 2296 "prog_io.m"
        {
#line 2296 "prog_io.m"
          parse_tree__prog_io__ItemModuleDefn_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2296 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_39, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_38));
#line 2296 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_39, 1) = ((MR_Box) (parse_tree__prog_io__Context_12));
#line 2296 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_39, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_13));
#line 2296 "prog_io.m"
        }
#line 2297 "prog_io.m"
        parse_tree__prog_io__Y_26 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_39);
#line 2264 "prog_io.m"
        {
#line 2264 "prog_io.m"
          parse_tree__prog_io__MaybeItem0_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2264 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem0_16, 0) = ((MR_Box) (parse_tree__prog_io__Y_26));
#line 2264 "prog_io.m"
        }
#line 2264 "prog_io.m"
      }
#line 1276 "prog_io.m"
    {
#line 1276 "prog_io.m"
      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__MaybeItem0_16, parse_tree__prog_io__Attributes_11, parse_tree__prog_io__MaybeItem_14);
#line 1276 "prog_io.m"
      return;
    }
#line 1272 "prog_io.m"
  }
#line 1267 "prog_io.m"
}

#line 2261 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(
#line 2261 "prog_io.m"
  MR_Word parse_tree__prog_io__V_11_11,
#line 2261 "prog_io.m"
  MR_Word parse_tree__prog_io__V_12_12,
#line 2261 "prog_io.m"
  MR_Integer parse_tree__prog_io__V_13_13,
#line 2261 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 2261 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__3_3)
#line 2261 "prog_io.m"
{
#line 2264 "prog_io.m"
  {
#line 2264 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 2264 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 2266 "prog_io.m"
      *parse_tree__prog_io__HeadVar__3_3 = (MR_Word) parse_tree__prog_io__HeadVar__2_2;
#line 2264 "prog_io.m"
    else
#line 2264 "prog_io.m"
      {
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__X_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__Y_6;
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__ModuleDefn_19;
#line 2264 "prog_io.m"
        MR_Word parse_tree__prog_io__ItemModuleDefn_20;

#line 2327 "prog_io.m"
        {
#line 2327 "prog_io.m"
          parse_tree__prog_io__ModuleDefn_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 2327 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2327 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_19, 1) = ((MR_Box) (parse_tree__prog_io__V_11_11));
#line 2327 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_19, 2) = ((MR_Box) (parse_tree__prog_io__X_5));
#line 2327 "prog_io.m"
        }
#line 2328 "prog_io.m"
        {
#line 2328 "prog_io.m"
          parse_tree__prog_io__ItemModuleDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2328 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_20, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_19));
#line 2328 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_20, 1) = ((MR_Box) (parse_tree__prog_io__V_12_12));
#line 2328 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_20, 2) = ((MR_Box) (parse_tree__prog_io__V_13_13));
#line 2328 "prog_io.m"
        }
#line 2329 "prog_io.m"
        parse_tree__prog_io__Y_6 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_20);
#line 2264 "prog_io.m"
        {
#line 2264 "prog_io.m"
          MR_Word base;
#line 2264 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2264 "prog_io.m"
          *parse_tree__prog_io__HeadVar__3_3 = base;
#line 2264 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Y_6));
#line 2264 "prog_io.m"
        }
#line 2264 "prog_io.m"
      }
#line 2264 "prog_io.m"
  }
#line 2261 "prog_io.m"
}

#line 2258 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 2258 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 2258 "prog_io.m"
{
#line 2258 "prog_io.m"
  {
#line 2258 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 2258 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_4 = parse_tree__prog_io__HeadVar__2_2;
#line 2258 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_5 = parse_tree__prog_io__HeadVar__3_3;

#line 2258 "prog_io.m"
    {
#line 2258 "prog_io.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__prog_io__HeadVar__1_1, (MR_Word) parse_tree__prog_io__Cast_HeadVar1_4, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_5);
#line 2258 "prog_io.m"
      return;
    }
#line 2258 "prog_io.m"
  }
#line 2258 "prog_io.m"
}

#line 2258 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 2258 "prog_io.m"
{
#line 2258 "prog_io.m"
  {
#line 2258 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 2258 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar1_3 = parse_tree__prog_io__HeadVar__1_1;
#line 2258 "prog_io.m"
    MR_Word parse_tree__prog_io__Cast_HeadVar2_4 = parse_tree__prog_io__HeadVar__2_2;

#line 2258 "prog_io.m"
    {
#line 2258 "prog_io.m"
      return parse_tree__prog_io__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__prog_io__Cast_HeadVar1_3, (MR_Word) parse_tree__prog_io__Cast_HeadVar2_4);
    }
#line 2258 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 2258 "prog_io.m"
  }
#line 2258 "prog_io.m"
}

#line 2163 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0(
#line 2163 "prog_io.m"
  MR_Word parse_tree__prog_io__QuantType_7,
#line 2163 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Attributes_0_13,
#line 2163 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Attributes_14,
#line 2163 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Vars_0_15,
#line 2163 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Vars_16)
#line 2163 "prog_io.m"
{
#line 2173 "prog_io.m"
  while (MR_TRUE)
#line 2173 "prog_io.m"
    {
#line 2173 "prog_io.m"
      /* tailcall optimized into a loop */
#line 2173 "prog_io.m"
      {
#line 2173 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__STATE_VARIABLE_Attributes_0_13)) == (MR_mktag((MR_Integer) 1)));
#line 2173 "prog_io.m"
        MR_Word parse_tree__prog_io__QuantVars_11;
#line 2173 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_Attributes_17_17;
#line 2168 "prog_io.m"
        MR_Word parse_tree__prog_io__V_18_18;
#line 2168 "prog_io.m"
        MR_Word parse_tree__prog_io__V_19_19;
#line 2168 "prog_io.m"
        MR_Word parse_tree__prog_io__V_24_24;
#line 2169 "prog_io.m"
        MR_Word parse_tree__prog_io__V_12_12;

#line 2168 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2168 "prog_io.m"
          {
#line 2168 "prog_io.m"
            parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Attributes_0_13, (MR_Integer) 0)));
#line 2168 "prog_io.m"
            parse_tree__prog_io__STATE_VARIABLE_Attributes_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Attributes_0_13, (MR_Integer) 1)));
#line 2169 "prog_io.m"
            parse_tree__prog_io__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_18_18, (MR_Integer) 0)));
#line 2169 "prog_io.m"
            parse_tree__prog_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_18_18, (MR_Integer) 1)));
#line 2168 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_19_19)) == (MR_mktag((MR_Integer) 2)));
#line 2168 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 2168 "prog_io.m"
              {
#line 2168 "prog_io.m"
                parse_tree__prog_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_19_19, (MR_Integer) 0)));
#line 2168 "prog_io.m"
                parse_tree__prog_io__QuantVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_19_19, (MR_Integer) 1)));
#line 2168 "prog_io.m"
                parse_tree__prog_io__succeeded = (parse_tree__prog_io__QuantType_7 == parse_tree__prog_io__V_24_24);
#line 2168 "prog_io.m"
              }
#line 2168 "prog_io.m"
          }
#line 2173 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2171 "prog_io.m"
          {
#line 2171 "prog_io.m"
            MR_Word parse_tree__prog_io__STATE_VARIABLE_Vars_20_20;

#line 2171 "prog_io.m"
            {
#line 2171 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_Vars_20_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_scalar_common_1[6], parse_tree__prog_io__STATE_VARIABLE_Vars_0_15, parse_tree__prog_io__QuantVars_11);
            }
#line 2172 "prog_io.m"
            /* direct tailcall eliminated */
#line 2172 "prog_io.m"
            {
#line 2172 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Attributes_0__tmp_copy_13 = parse_tree__prog_io__STATE_VARIABLE_Attributes_17_17;
#line 2172 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Vars_0__tmp_copy_15 = parse_tree__prog_io__STATE_VARIABLE_Vars_20_20;

#line 2172 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_Vars_0_15 = parse_tree__prog_io__STATE_VARIABLE_Vars_0__tmp_copy_15;
#line 2172 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_Attributes_0_13 = parse_tree__prog_io__STATE_VARIABLE_Attributes_0__tmp_copy_13;
#line 2172 "prog_io.m"
            }
#line 2172 "prog_io.m"
            continue;
#line 2171 "prog_io.m"
          }
#line 2173 "prog_io.m"
        else
#line 2174 "prog_io.m"
          {
#line 2174 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Vars_16 = parse_tree__prog_io__STATE_VARIABLE_Vars_0_15;
#line 2174 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Attributes_14 = parse_tree__prog_io__STATE_VARIABLE_Attributes_0_13;
#line 2174 "prog_io.m"
          }
#line 2173 "prog_io.m"
      }
#line 2173 "prog_io.m"
      break;
#line 2173 "prog_io.m"
    }
#line 2163 "prog_io.m"
}

#line 2056 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0_1(
#line 2056 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 2056 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 2056 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 2056 "prog_io.m"
{
#line 2056 "prog_io.m"
  {
#line 2056 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 2056 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_HeadVar__2_40;

#line 2056 "prog_io.m"
    {
#line 2056 "prog_io.m"
      parse_tree__prog_io__IntroducedFrom__pred__parse_promise__2056__1_2_p_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_HeadVar__2_40);
    }
#line 2056 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__2_40));
#line 2056 "prog_io.m"
  }
#line 2056 "prog_io.m"
}

#line 2028 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0(
#line 2028 "prog_io.m"
  MR_Word parse_tree__prog_io__PromiseType_10,
#line 2028 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_11,
#line 2028 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__4_4,
#line 2028 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_13,
#line 2028 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_14,
#line 2028 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_15,
#line 2028 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_16)
#line 2028 "prog_io.m"
{
#line 2033 "prog_io.m"
  {
#line 2033 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 2033 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_37_37;
#line 2033 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_38_38;
#line 2033 "prog_io.m"
    MR_Word parse_tree__prog_io__Term_12;
#line 2033 "prog_io.m"
    MR_Word parse_tree__prog_io__ProgVarSet0_17;
#line 2033 "prog_io.m"
    MR_Word parse_tree__prog_io__ContextPieces_18;
#line 2033 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeGoal0_19;
#line 2033 "prog_io.m"
    MR_Word parse_tree__prog_io__ProgVarSet_20;
#line 2033 "prog_io.m"
    MR_Word parse_tree__prog_io__V_31_31;

#line 2033 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 2033 "prog_io.m"
      {
#line 2033 "prog_io.m"
        parse_tree__prog_io__Term_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__4_4, (MR_Integer) 0)));
#line 2033 "prog_io.m"
        parse_tree__prog_io__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__4_4, (MR_Integer) 1)));
#line 2032 "prog_io.m"
        parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2033 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2033 "prog_io.m"
          {
#line 3848 "parse_tree.prog_io.c"
            parse_tree__prog_io__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 3850 "parse_tree.prog_io.c"
            parse_tree__prog_io__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 2034 "prog_io.m"
            {
#line 2034 "prog_io.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io__TypeCtorInfo_37_37, parse_tree__prog_io__TypeCtorInfo_38_38, parse_tree__prog_io__VarSet_11, &parse_tree__prog_io__ProgVarSet0_17);
            }
#line 2035 "prog_io.m"
            parse_tree__prog_io__ContextPieces_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2036 "prog_io.m"
            {
#line 2036 "prog_io.m"
              parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io__Term_12, parse_tree__prog_io__ContextPieces_18, &parse_tree__prog_io__MaybeGoal0_19, parse_tree__prog_io__ProgVarSet0_17, &parse_tree__prog_io__ProgVarSet_20);
            }
#line 2063 "prog_io.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeGoal0_19)) == (MR_mktag((MR_Integer) 0))))
#line 2065 "prog_io.m"
              *parse_tree__prog_io__MaybeItem_16 = (MR_Word) parse_tree__prog_io__MaybeGoal0_19;
#line 2063 "prog_io.m"
            else
#line 2038 "prog_io.m"
              {
#line 2038 "prog_io.m"
                MR_Word parse_tree__prog_io__Goal0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeGoal0_19, (MR_Integer) 0)));
#line 2038 "prog_io.m"
                MR_Word parse_tree__prog_io__UnivVars_25;
#line 2038 "prog_io.m"
                MR_Word parse_tree__prog_io__Goal_26;
#line 2038 "prog_io.m"
                MR_Word parse_tree__prog_io__ItemPromise_28;
#line 2038 "prog_io.m"
                MR_Word parse_tree__prog_io__Item_29;

#line 2049 "prog_io.m"
                if ((parse_tree__prog_io__PromiseType_10 == (MR_Integer) 3))
#line 2045 "prog_io.m"
                  {
#line 2045 "prog_io.m"
                    MR_Word parse_tree__prog_io__UnivVars0_22;
#line 2045 "prog_io.m"
                    MR_Word parse_tree__prog_io__AllGoal_23;
#line 2042 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Goal0_21, (MR_Integer) 0)));
#line 2042 "prog_io.m"
                    MR_Word parse_tree__prog_io___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Goal0_21, (MR_Integer) 1)));

#line 2042 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__V_35_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_35_35, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2042 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 2042 "prog_io.m"
                      {
#line 2042 "prog_io.m"
                        parse_tree__prog_io__UnivVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_35_35, (MR_Integer) 1)));
#line 2042 "prog_io.m"
                        parse_tree__prog_io__AllGoal_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_35_35, (MR_Integer) 2)));
#line 2043 "prog_io.m"
                        parse_tree__prog_io__UnivVars_25 = parse_tree__prog_io__UnivVars0_22;
#line 2044 "prog_io.m"
                        parse_tree__prog_io__Goal_26 = parse_tree__prog_io__AllGoal_23;
#line 2042 "prog_io.m"
                      }
#line 2042 "prog_io.m"
                    else
#line 2046 "prog_io.m"
                      {
#line 2046 "prog_io.m"
                        parse_tree__prog_io__UnivVars_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2047 "prog_io.m"
                        parse_tree__prog_io__Goal_26 = parse_tree__prog_io__Goal0_21;
#line 2046 "prog_io.m"
                      }
#line 2045 "prog_io.m"
                  }
#line 2049 "prog_io.m"
                else
#line 2053 "prog_io.m"
                  {
#line 2053 "prog_io.m"
                    MR_Word parse_tree__prog_io__UnivVars0_36;
#line 2054 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_27_27;

#line 2054 "prog_io.m"
                    {
#line 2054 "prog_io.m"
                      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 1, parse_tree__prog_io__Attributes_13, &parse_tree__prog_io__V_27_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__UnivVars0_36);
                    }
#line 2056 "prog_io.m"
                    {
#line 2056 "prog_io.m"
                      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[6], (MR_Word) &parse_tree__prog_io_scalar_common_1[10], (MR_Word) &parse_tree__prog_io_scalar_common_2[5], parse_tree__prog_io__UnivVars0_36, &parse_tree__prog_io__UnivVars_25);
                    }
#line 2057 "prog_io.m"
                    parse_tree__prog_io__Goal_26 = parse_tree__prog_io__Goal0_21;
#line 2053 "prog_io.m"
                  }
#line 2059 "prog_io.m"
                {
#line 2059 "prog_io.m"
                  parse_tree__prog_io__ItemPromise_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2059 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPromise_28, 0) = ((MR_Box) (parse_tree__prog_io__PromiseType_10));
#line 2059 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPromise_28, 1) = ((MR_Box) (parse_tree__prog_io__Goal_26));
#line 2059 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPromise_28, 2) = ((MR_Box) (parse_tree__prog_io__ProgVarSet_20));
#line 2059 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPromise_28, 3) = ((MR_Box) (parse_tree__prog_io__UnivVars_25));
#line 2059 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPromise_28, 4) = ((MR_Box) (parse_tree__prog_io__Context_14));
#line 2059 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPromise_28, 5) = ((MR_Box) (parse_tree__prog_io__SeqNum_15));
#line 2059 "prog_io.m"
                }
#line 2061 "prog_io.m"
                {
#line 2061 "prog_io.m"
                  parse_tree__prog_io__Item_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 2061 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_29, 1) = ((MR_Box) (parse_tree__prog_io__ItemPromise_28));
#line 2061 "prog_io.m"
                }
#line 2062 "prog_io.m"
                {
#line 2062 "prog_io.m"
                  MR_Word base;
#line 2062 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "prog_io.m"
                  *parse_tree__prog_io__MaybeItem_16 = base;
#line 2062 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_29));
#line 2062 "prog_io.m"
                }
#line 2038 "prog_io.m"
              }
#line 2063 "prog_io.m"
            parse_tree__prog_io__succeeded = MR_TRUE;
#line 2033 "prog_io.m"
          }
#line 2033 "prog_io.m"
      }
#line 2033 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 2033 "prog_io.m"
  }
#line 2028 "prog_io.m"
}

#line 1278 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_p_0(
#line 1278 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_8,
#line 1278 "prog_io.m"
  MR_Word parse_tree__prog_io__ArgTerms_10,
#line 1278 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_11,
#line 1278 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_12,
#line 1278 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_13,
#line 1278 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_14)
#line 1278 "prog_io.m"
{
#line 1282 "prog_io.m"
  {
#line 1282 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
#line 1282 "prog_io.m"
    MR_Word parse_tree__prog_io__VersionNumberTerm_15;
#line 1282 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleNameTerm_16;
#line 1282 "prog_io.m"
    MR_Word parse_tree__prog_io__VersionNumbersTerm_17;
#line 1282 "prog_io.m"
    MR_Word parse_tree__prog_io__V_38_38;
#line 1282 "prog_io.m"
    MR_Word parse_tree__prog_io__V_39_39;
#line 1282 "prog_io.m"
    MR_Word parse_tree__prog_io__V_40_40;
#line 1285 "prog_io.m"
    MR_Integer parse_tree__prog_io__VersionNumber_18;
#line 1285 "prog_io.m"
    MR_Word parse_tree__prog_io__V_41_41;
#line 1285 "prog_io.m"
    MR_Word parse_tree__prog_io__V_42_42;
#line 1285 "prog_io.m"
    MR_Integer parse_tree__prog_io__V_100_100;
#line 1285 "prog_io.m"
    MR_Word parse_tree__prog_io__V_19_19;

#line 1283 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1283 "prog_io.m"
      {
#line 1283 "prog_io.m"
        parse_tree__prog_io__VersionNumberTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_10, (MR_Integer) 0)));
#line 1283 "prog_io.m"
        parse_tree__prog_io__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_10, (MR_Integer) 1)));
#line 1283 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 1283 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1283 "prog_io.m"
          {
#line 1283 "prog_io.m"
            parse_tree__prog_io__ModuleNameTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_38_38, (MR_Integer) 0)));
#line 1283 "prog_io.m"
            parse_tree__prog_io__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_38_38, (MR_Integer) 1)));
#line 1283 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 1283 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1283 "prog_io.m"
              {
#line 1283 "prog_io.m"
                parse_tree__prog_io__VersionNumbersTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, (MR_Integer) 0)));
#line 1283 "prog_io.m"
                parse_tree__prog_io__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, (MR_Integer) 1)));
#line 1283 "prog_io.m"
                parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1282 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1282 "prog_io.m"
                  {
#line 1285 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__VersionNumberTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 1285 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1285 "prog_io.m"
                      {
#line 1285 "prog_io.m"
                        parse_tree__prog_io__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__VersionNumberTerm_15, (MR_Integer) 0)));
#line 1285 "prog_io.m"
                        parse_tree__prog_io__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__VersionNumberTerm_15, (MR_Integer) 1)));
#line 1285 "prog_io.m"
                        parse_tree__prog_io__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__VersionNumberTerm_15, (MR_Integer) 2)));
#line 1285 "prog_io.m"
                        parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1285 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1285 "prog_io.m"
                          {
#line 1285 "prog_io.m"
                            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 1285 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 1285 "prog_io.m"
                              {
#line 1285 "prog_io.m"
                                parse_tree__prog_io__VersionNumber_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, (MR_Integer) 0)));
#line 1286 "prog_io.m"
                                {
#line 1286 "prog_io.m"
                                  parse_tree__prog_io__V_100_100 = recompilation__version__version_numbers_version_number_0_f_0();
                                }
#line 1286 "prog_io.m"
                                parse_tree__prog_io__succeeded = (parse_tree__prog_io__VersionNumber_18 == parse_tree__prog_io__V_100_100);
#line 1285 "prog_io.m"
                              }
#line 1285 "prog_io.m"
                          }
#line 1285 "prog_io.m"
                      }
#line 1311 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1303 "prog_io.m"
                      {
#line 1288 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_101_101;

#line 1288 "prog_io.m"
                        {
#line 1288 "prog_io.m"
                          parse_tree__prog_io__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__ModuleNameTerm_16, &parse_tree__prog_io__V_101_101);
                        }
#line 1288 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1288 "prog_io.m"
                          {
#line 1288 "prog_io.m"
                            parse_tree__prog_io__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_io__ModuleName_8, parse_tree__prog_io__V_101_101);
                          }
#line 1303 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1290 "prog_io.m"
                          {
#line 1290 "prog_io.m"
                            MR_Word parse_tree__prog_io__MaybeItem0_20;

#line 1289 "prog_io.m"
                            {
#line 1289 "prog_io.m"
                              recompilation__version__parse_version_numbers_2_p_0(parse_tree__prog_io__VersionNumbersTerm_17, &parse_tree__prog_io__MaybeItem0_20);
                            }
#line 1299 "prog_io.m"
                            if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItem0_20)) == (MR_mktag((MR_Integer) 0))))
#line 1301 "prog_io.m"
                              *parse_tree__prog_io__MaybeItem_14 = (MR_Word) parse_tree__prog_io__MaybeItem0_20;
#line 1299 "prog_io.m"
                            else
#line 1292 "prog_io.m"
                              {
#line 1292 "prog_io.m"
                                MR_Word parse_tree__prog_io__VersionNumbers_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem0_20, (MR_Integer) 0)));
#line 1292 "prog_io.m"
                                MR_Word parse_tree__prog_io__ModuleDefn_22;
#line 1292 "prog_io.m"
                                MR_Word parse_tree__prog_io__ItemModuleDefn_23;
#line 1292 "prog_io.m"
                                MR_Word parse_tree__prog_io__Item_24;
#line 1292 "prog_io.m"
                                MR_Word parse_tree__prog_io__MaybeItem1_25;

#line 1293 "prog_io.m"
                                {
#line 1293 "prog_io.m"
                                  parse_tree__prog_io__ModuleDefn_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1293 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1293 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_22, 1) = ((MR_Box) (parse_tree__prog_io__ModuleName_8));
#line 1293 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_22, 2) = ((MR_Box) (parse_tree__prog_io__VersionNumbers_21));
#line 1293 "prog_io.m"
                                }
#line 1294 "prog_io.m"
                                {
#line 1294 "prog_io.m"
                                  parse_tree__prog_io__ItemModuleDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1294 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_23, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_22));
#line 1294 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_23, 1) = ((MR_Box) (parse_tree__prog_io__Context_12));
#line 1294 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_23, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_13));
#line 1294 "prog_io.m"
                                }
#line 1296 "prog_io.m"
                                parse_tree__prog_io__Item_24 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_23);
#line 1297 "prog_io.m"
                                {
#line 1297 "prog_io.m"
                                  parse_tree__prog_io__MaybeItem1_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1297 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem1_25, 0) = ((MR_Box) (parse_tree__prog_io__Item_24));
#line 1297 "prog_io.m"
                                }
#line 1298 "prog_io.m"
                                {
#line 1298 "prog_io.m"
                                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__MaybeItem1_25, parse_tree__prog_io__Attributes_11, parse_tree__prog_io__MaybeItem_14);
                                }
#line 1292 "prog_io.m"
                              }
#line 1290 "prog_io.m"
                          }
#line 1303 "prog_io.m"
                        else
#line 1305 "prog_io.m"
                          {
#line 1305 "prog_io.m"
                            MR_Word parse_tree__prog_io__Spec_28;
#line 1305 "prog_io.m"
                            MR_Word parse_tree__prog_io__V_56_56;
#line 1305 "prog_io.m"
                            MR_Word parse_tree__prog_io__V_57_57;
#line 1305 "prog_io.m"
                            MR_Word parse_tree__prog_io__V_58_58;
#line 1305 "prog_io.m"
                            MR_Word parse_tree__prog_io__V_63_63;

#line 1307 "prog_io.m"
                            {
#line 1307 "prog_io.m"
                              parse_tree__prog_io__V_58_58 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__ModuleNameTerm_16);
                            }
#line 1308 "prog_io.m"
                            {
#line 1308 "prog_io.m"
                              parse_tree__prog_io__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1308 "prog_io.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io__V_58_58));
#line 1308 "prog_io.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[150])));
#line 1308 "prog_io.m"
                            }
#line 1306 "prog_io.m"
                            {
#line 1306 "prog_io.m"
                              parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 1306 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1306 "prog_io.m"
                            }
#line 1306 "prog_io.m"
                            {
#line 1306 "prog_io.m"
                              parse_tree__prog_io__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1306 "prog_io.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1306 "prog_io.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1306 "prog_io.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_28, 2) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 1306 "prog_io.m"
                            }
#line 1309 "prog_io.m"
                            {
#line 1309 "prog_io.m"
                              parse_tree__prog_io__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io__Spec_28));
#line 1309 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1309 "prog_io.m"
                            }
#line 1309 "prog_io.m"
                            {
#line 1309 "prog_io.m"
                              MR_Word base;
#line 1309 "prog_io.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1309 "prog_io.m"
                              *parse_tree__prog_io__MaybeItem_14 = base;
#line 1309 "prog_io.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_63_63));
#line 1309 "prog_io.m"
                            }
#line 1305 "prog_io.m"
                          }
#line 1303 "prog_io.m"
                      }
#line 1311 "prog_io.m"
                    else
#line 1322 "prog_io.m"
                      if (((MR_tag((MR_Word) parse_tree__prog_io__VersionNumberTerm_15)) == (MR_mktag((MR_Integer) 0))))
#line 1313 "prog_io.m"
                        {
#line 1313 "prog_io.m"
                          MR_Word parse_tree__prog_io__DummyTerm_33;
#line 1313 "prog_io.m"
                          MR_Word parse_tree__prog_io__Warning_34;
#line 1313 "prog_io.m"
                          MR_Word parse_tree__prog_io__ItemNothing_35;
#line 1313 "prog_io.m"
                          MR_Word parse_tree__prog_io__V_90_90;
#line 1313 "prog_io.m"
                          MR_Word parse_tree__prog_io__Item_91;

#line 1316 "prog_io.m"
                          {
#line 1316 "prog_io.m"
                            parse_tree__prog_io__dummy_term_with_context_2_p_0(parse_tree__prog_io__Context_12, &parse_tree__prog_io__DummyTerm_33);
                          }
#line 1317 "prog_io.m"
                          {
#line 1317 "prog_io.m"
                            parse_tree__prog_io__Warning_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1317 "prog_io.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[33])));
#line 1317 "prog_io.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_34, 1) = ((MR_Box) ((MR_String) "interface file needs to be recreated, the version numbers are out of date"));
#line 1317 "prog_io.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_34, 2) = ((MR_Box) (parse_tree__prog_io__DummyTerm_33));
#line 1317 "prog_io.m"
                          }
#line 1319 "prog_io.m"
                          {
#line 1319 "prog_io.m"
                            parse_tree__prog_io__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1319 "prog_io.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io__Warning_34));
#line 1319 "prog_io.m"
                          }
#line 1319 "prog_io.m"
                          {
#line 1319 "prog_io.m"
                            parse_tree__prog_io__ItemNothing_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1319 "prog_io.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothing_35, 0) = ((MR_Box) (parse_tree__prog_io__V_90_90));
#line 1319 "prog_io.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothing_35, 1) = ((MR_Box) (parse_tree__prog_io__Context_12));
#line 1319 "prog_io.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothing_35, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_13));
#line 1319 "prog_io.m"
                          }
#line 1320 "prog_io.m"
                          {
#line 1320 "prog_io.m"
                            parse_tree__prog_io__Item_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "prog_io.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 1320 "prog_io.m"
                            MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_91, 1) = ((MR_Box) (parse_tree__prog_io__ItemNothing_35));
#line 1320 "prog_io.m"
                          }
#line 1321 "prog_io.m"
                          {
#line 1321 "prog_io.m"
                            MR_Word base;
#line 1321 "prog_io.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1321 "prog_io.m"
                            *parse_tree__prog_io__MaybeItem_14 = base;
#line 1321 "prog_io.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_91));
#line 1321 "prog_io.m"
                          }
#line 1313 "prog_io.m"
                        }
#line 1322 "prog_io.m"
                      else
#line 1323 "prog_io.m"
                        {
#line 1323 "prog_io.m"
                          MR_Word parse_tree__prog_io__VersionNumberContext_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__VersionNumberTerm_15, (MR_Integer) 1)));
#line 1323 "prog_io.m"
                          MR_Word parse_tree__prog_io__V_78_78;
#line 1323 "prog_io.m"
                          MR_Word parse_tree__prog_io__V_79_79;
#line 1323 "prog_io.m"
                          MR_Word parse_tree__prog_io__V_84_84;
#line 1323 "prog_io.m"
                          MR_Word parse_tree__prog_io__Spec_93;
#line 1323 "prog_io.m"
                          MR_Word parse_tree__prog_io__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__VersionNumberTerm_15, (MR_Integer) 0)));

#line 1327 "prog_io.m"
                          {
#line 1327 "prog_io.m"
                            parse_tree__prog_io__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1327 "prog_io.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io__VersionNumberContext_37));
#line 1327 "prog_io.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[151])));
#line 1327 "prog_io.m"
                          }
#line 1326 "prog_io.m"
                          {
#line 1326 "prog_io.m"
                            parse_tree__prog_io__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "prog_io.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io__V_79_79));
#line 1326 "prog_io.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1326 "prog_io.m"
                          }
#line 1326 "prog_io.m"
                          {
#line 1326 "prog_io.m"
                            parse_tree__prog_io__Spec_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1326 "prog_io.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1326 "prog_io.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1326 "prog_io.m"
                            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_93, 2) = ((MR_Box) (parse_tree__prog_io__V_78_78));
#line 1326 "prog_io.m"
                          }
#line 1328 "prog_io.m"
                          {
#line 1328 "prog_io.m"
                            parse_tree__prog_io__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1328 "prog_io.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io__Spec_93));
#line 1328 "prog_io.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1328 "prog_io.m"
                          }
#line 1328 "prog_io.m"
                          {
#line 1328 "prog_io.m"
                            MR_Word base;
#line 1328 "prog_io.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1328 "prog_io.m"
                            *parse_tree__prog_io__MaybeItem_14 = base;
#line 1328 "prog_io.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_84_84));
#line 1328 "prog_io.m"
                          }
#line 1323 "prog_io.m"
                        }
#line 1311 "prog_io.m"
                    parse_tree__prog_io__succeeded = MR_TRUE;
#line 1282 "prog_io.m"
                  }
#line 1283 "prog_io.m"
              }
#line 1283 "prog_io.m"
          }
#line 1283 "prog_io.m"
      }
#line 1282 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1282 "prog_io.m"
  }
#line 1278 "prog_io.m"
}

#line 240 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(
#line 240 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 240 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_15,
#line 240 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_16,
#line 240 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeOldTimestamp_17,
#line 240 "prog_io.m"
  MR_Word parse_tree__prog_io__ReturnTimestamp_18,
#line 240 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeFileData_19,
#line 240 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_20,
#line 240 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_21,
#line 240 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_22,
#line 240 "prog_io.m"
  MR_Word * parse_tree__prog_io__Error_23,
#line 240 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestamp_24)
#line 240 "prog_io.m"
{
#line 248 "prog_io.m"
  {
#line 248 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 248 "prog_io.m"
    MR_Word parse_tree__prog_io__OldInputStream_26;
#line 248 "prog_io.m"
    MR_Word parse_tree__prog_io__OpenResult_27;
#line 250 "prog_io.m"
    void MR_CALL (* parse_tree__prog_io__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 250 "prog_io.m"
    MR_Box parse_tree__prog_io__conv2_OpenResult_27;
#line 250 "prog_io.m"
    MR_Box parse_tree__prog_io__conv1_STATE_VARIABLE_IO_42_42;

#line 249 "prog_io.m"
    {
#line 249 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__OldInputStream_26);
    }
#line 250 "prog_io.m"
    parse_tree__prog_io__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenFile_15, (MR_Integer) 1)));
#line 250 "prog_io.m"
    {
#line 250 "prog_io.m"
      parse_tree__prog_io__func_0(((MR_Box) parse_tree__prog_io__OpenFile_15), &parse_tree__prog_io__conv2_OpenResult_27, ((MR_Box) ((MR_Integer) 0)), &parse_tree__prog_io__conv1_STATE_VARIABLE_IO_42_42);
    }
#line 250 "prog_io.m"
    parse_tree__prog_io__OpenResult_27 = ((MR_Word) parse_tree__prog_io__conv2_OpenResult_27);
#line 288 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__OpenResult_27)) == (MR_mktag((MR_Integer) 1))))
#line 289 "prog_io.m"
      {
#line 289 "prog_io.m"
        MR_String parse_tree__prog_io__ErrorMsg_35 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__OpenResult_27, (MR_Integer) 0)));
#line 289 "prog_io.m"
        MR_String parse_tree__prog_io__Progname_36;
#line 289 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_37;
#line 289 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_38;
#line 289 "prog_io.m"
        MR_Word parse_tree__prog_io__V_45_45;
#line 289 "prog_io.m"
        MR_Word parse_tree__prog_io__V_46_46;
#line 289 "prog_io.m"
        MR_Word parse_tree__prog_io__V_49_49;
#line 289 "prog_io.m"
        MR_Word parse_tree__prog_io__V_50_50;
#line 289 "prog_io.m"
        MR_Word parse_tree__prog_io__V_56_56;
#line 289 "prog_io.m"
        MR_Word parse_tree__prog_io__V_57_57;
#line 289 "prog_io.m"
        MR_Word parse_tree__prog_io__V_61_61;
#line 289 "prog_io.m"
        MR_Word parse_tree__prog_io__V_62_62;

#line 290 "prog_io.m"
        *parse_tree__prog_io__MaybeFileData_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 291 "prog_io.m"
        *parse_tree__prog_io__ModuleName_20 = parse_tree__prog_io__DefaultModuleName_16;
#line 292 "prog_io.m"
        *parse_tree__prog_io__Items_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 293 "prog_io.m"
        *parse_tree__prog_io__MaybeModuleTimestamp_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 295 "prog_io.m"
        {
#line 295 "prog_io.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__prog_io__Progname_36);
        }
#line 296 "prog_io.m"
        {
#line 296 "prog_io.m"
          parse_tree__prog_io__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io__Progname_36));
#line 296 "prog_io.m"
        }
#line 296 "prog_io.m"
        {
#line 296 "prog_io.m"
          parse_tree__prog_io__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 296 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_35));
#line 296 "prog_io.m"
        }
#line 296 "prog_io.m"
        {
#line 296 "prog_io.m"
          parse_tree__prog_io__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io__V_50_50));
#line 296 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])));
#line 296 "prog_io.m"
        }
#line 296 "prog_io.m"
        {
#line 296 "prog_io.m"
          parse_tree__prog_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[108])));
#line 296 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 296 "prog_io.m"
        }
#line 296 "prog_io.m"
        {
#line 296 "prog_io.m"
          parse_tree__prog_io__Pieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_37, 0) = ((MR_Box) (parse_tree__prog_io__V_45_45));
#line 296 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_37, 1) = ((MR_Box) (parse_tree__prog_io__V_46_46));
#line 296 "prog_io.m"
        }
#line 298 "prog_io.m"
        {
#line 298 "prog_io.m"
          parse_tree__prog_io__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 298 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_37));
#line 298 "prog_io.m"
        }
#line 298 "prog_io.m"
        {
#line 298 "prog_io.m"
          parse_tree__prog_io__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io__V_62_62));
#line 298 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "prog_io.m"
        }
#line 298 "prog_io.m"
        {
#line 298 "prog_io.m"
          parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 298 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) ((MR_Integer) 0));
#line 298 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 2) = ((MR_Box) ((MR_Integer) 0));
#line 298 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_57_57, 3) = ((MR_Box) (parse_tree__prog_io__V_61_61));
#line 298 "prog_io.m"
        }
#line 297 "prog_io.m"
        {
#line 297 "prog_io.m"
          parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 297 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 297 "prog_io.m"
        }
#line 297 "prog_io.m"
        {
#line 297 "prog_io.m"
          parse_tree__prog_io__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 297 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 297 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 297 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 297 "prog_io.m"
        }
#line 299 "prog_io.m"
        {
#line 299 "prog_io.m"
          MR_Word base;
#line 299 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "prog_io.m"
          *parse_tree__prog_io__Specs_22 = base;
#line 299 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_38));
#line 299 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "prog_io.m"
        }
#line 300 "prog_io.m"
        *parse_tree__prog_io__Error_23 = (MR_Integer) 2;
#line 289 "prog_io.m"
      }
#line 288 "prog_io.m"
    else
#line 252 "prog_io.m"
      {
#line 252 "prog_io.m"
        MR_Box parse_tree__prog_io__FileData_28 = (MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenResult_27, (MR_Integer) 0));
#line 252 "prog_io.m"
        MR_Word parse_tree__prog_io__ModuleInputStream_34;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__OldTimestamp_33;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_71_71;
#line 270 "prog_io.m"
        MR_Word parse_tree__prog_io__V_76_76;

#line 253 "prog_io.m"
        {
#line 253 "prog_io.m"
          MR_Word base;
#line 253 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 253 "prog_io.m"
          *parse_tree__prog_io__MaybeFileData_19 = base;
#line 253 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_io__FileData_28;
#line 253 "prog_io.m"
        }
#line 265 "prog_io.m"
        if ((parse_tree__prog_io__ReturnTimestamp_18 == (MR_Integer) 1))
#line 267 "prog_io.m"
          *parse_tree__prog_io__MaybeModuleTimestamp_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 265 "prog_io.m"
        else
#line 255 "prog_io.m"
          {
#line 255 "prog_io.m"
            MR_String parse_tree__prog_io__InputStreamName_29;
#line 255 "prog_io.m"
            MR_Word parse_tree__prog_io__TimestampResult_30;

#line 256 "prog_io.m"
            {
#line 256 "prog_io.m"
              mercury__io__input_stream_name_3_p_0(&parse_tree__prog_io__InputStreamName_29);
            }
#line 257 "prog_io.m"
            {
#line 257 "prog_io.m"
              mercury__io__file_modification_time_4_p_0(parse_tree__prog_io__InputStreamName_29, &parse_tree__prog_io__TimestampResult_30);
            }
#line 261 "prog_io.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io__TimestampResult_30)) == (MR_mktag((MR_Integer) 1))))
#line 262 "prog_io.m"
              {
#line 262 "prog_io.m"
                MR_Word parse_tree__prog_io__V_68_68 = (MR_Word) parse_tree__prog_io__TimestampResult_30;

#line 263 "prog_io.m"
                {
#line 263 "prog_io.m"
                  MR_Word base;
#line 263 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 263 "prog_io.m"
                  *parse_tree__prog_io__MaybeModuleTimestamp_24 = base;
#line 263 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 263 "prog_io.m"
                }
#line 262 "prog_io.m"
              }
#line 261 "prog_io.m"
            else
#line 259 "prog_io.m"
              {
#line 259 "prog_io.m"
                MR_Word parse_tree__prog_io__Timestamp_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__TimestampResult_30, (MR_Integer) 0)));
#line 259 "prog_io.m"
                MR_Word parse_tree__prog_io__V_69_69;
#line 259 "prog_io.m"
                MR_Word parse_tree__prog_io__V_70_70;

#line 260 "prog_io.m"
                {
#line 260 "prog_io.m"
                  parse_tree__prog_io__V_70_70 = libs__timestamp__time_t_to_timestamp_1_f_0(parse_tree__prog_io__Timestamp_31);
                }
#line 260 "prog_io.m"
                {
#line 260 "prog_io.m"
                  parse_tree__prog_io__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 260 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io__V_70_70));
#line 260 "prog_io.m"
                }
#line 260 "prog_io.m"
                {
#line 260 "prog_io.m"
                  MR_Word base;
#line 260 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 260 "prog_io.m"
                  *parse_tree__prog_io__MaybeModuleTimestamp_24 = base;
#line 260 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_69_69));
#line 260 "prog_io.m"
                }
#line 259 "prog_io.m"
              }
#line 255 "prog_io.m"
          }
#line 270 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeOldTimestamp_17)) == (MR_mktag((MR_Integer) 1)));
#line 270 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 270 "prog_io.m"
          {
#line 270 "prog_io.m"
            parse_tree__prog_io__OldTimestamp_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeOldTimestamp_17, (MR_Integer) 0)));
#line 271 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) *parse_tree__prog_io__MaybeModuleTimestamp_24)) == (MR_mktag((MR_Integer) 1)));
#line 271 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 271 "prog_io.m"
              {
#line 271 "prog_io.m"
                parse_tree__prog_io__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__prog_io__MaybeModuleTimestamp_24, (MR_Integer) 0)));
#line 271 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_71_71)) == (MR_mktag((MR_Integer) 0)));
#line 271 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 271 "prog_io.m"
                  {
#line 271 "prog_io.m"
                    parse_tree__prog_io__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_71_71, (MR_Integer) 0)));
#line 271 "prog_io.m"
                    {
#line 271 "prog_io.m"
                      parse_tree__prog_io__succeeded = libs__timestamp____Unify____timestamp_0_0(parse_tree__prog_io__OldTimestamp_33, parse_tree__prog_io__V_76_76);
                    }
#line 271 "prog_io.m"
                  }
#line 271 "prog_io.m"
              }
#line 270 "prog_io.m"
          }
#line 282 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 278 "prog_io.m"
          {
#line 278 "prog_io.m"
            *parse_tree__prog_io__ModuleName_20 = parse_tree__prog_io__DefaultModuleName_16;
#line 279 "prog_io.m"
            *parse_tree__prog_io__Items_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 280 "prog_io.m"
            *parse_tree__prog_io__Specs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 281 "prog_io.m"
            *parse_tree__prog_io__Error_23 = (MR_Integer) 0;
#line 278 "prog_io.m"
          }
#line 282 "prog_io.m"
        else
#line 283 "prog_io.m"
          {
#line 283 "prog_io.m"
            parse_tree__prog_io__read_all_items_8_p_0(parse_tree__prog_io__Globals_14, parse_tree__prog_io__DefaultModuleName_16, parse_tree__prog_io__ModuleName_20, parse_tree__prog_io__Items_21, parse_tree__prog_io__Specs_22, parse_tree__prog_io__Error_23);
          }
#line 286 "prog_io.m"
        {
#line 286 "prog_io.m"
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io__OldInputStream_26, &parse_tree__prog_io__ModuleInputStream_34);
        }
#line 287 "prog_io.m"
        {
#line 287 "prog_io.m"
          mercury__io__close_input_3_p_0(parse_tree__prog_io__ModuleInputStream_34);
#line 287 "prog_io.m"
          return;
        }
#line 252 "prog_io.m"
      }
#line 248 "prog_io.m"
  }
#line 240 "prog_io.m"
}

#line 2056 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__parse_promise__2056__1_2_p_0(
#line 2056 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_39,
#line 2056 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__2_40)
#line 2056 "prog_io.m"
{
#line 2056 "prog_io.m"
  {
#line 2056 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 2056 "prog_io.m"
    {
#line 2056 "prog_io.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io__HeadVar__1_39, parse_tree__prog_io__HeadVar__2_40);
#line 2056 "prog_io.m"
      return;
    }
#line 2056 "prog_io.m"
  }
#line 2056 "prog_io.m"
}

#line 1968 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__get_class_context_and_inst_constraints__1968__1_2_p_0(
#line 1968 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_38,
#line 1968 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__2_39)
#line 1968 "prog_io.m"
{
#line 1968 "prog_io.m"
  {
#line 1968 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1968 "prog_io.m"
    {
#line 1968 "prog_io.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io__HeadVar__1_38, parse_tree__prog_io__HeadVar__2_39);
#line 1968 "prog_io.m"
      return;
    }
#line 1968 "prog_io.m"
  }
#line 1968 "prog_io.m"
}

#line 982 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__parse_clause__982__1_2_p_0(
#line 982 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_79,
#line 982 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__2_80)
#line 982 "prog_io.m"
{
#line 982 "prog_io.m"
  {
#line 982 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 982 "prog_io.m"
    {
#line 982 "prog_io.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io__HeadVar__1_79, parse_tree__prog_io__HeadVar__2_80);
#line 982 "prog_io.m"
      return;
    }
#line 982 "prog_io.m"
  }
#line 982 "prog_io.m"
}

#line 966 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__IntroducedFrom__pred__parse_clause__966__1_2_p_0(
#line 966 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_73,
#line 966 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__2_74)
#line 966 "prog_io.m"
{
#line 966 "prog_io.m"
  {
#line 966 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 966 "prog_io.m"
    {
#line 966 "prog_io.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io__HeadVar__1_73, parse_tree__prog_io__HeadVar__2_74);
#line 966 "prog_io.m"
      return;
    }
#line 966 "prog_io.m"
  }
#line 966 "prog_io.m"
}

#line 867 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____read_item_result_0_0(
#line 867 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 867 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 867 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 867 "prog_io.m"
{
#line 867 "prog_io.m"
  {
#line 867 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 867 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_16 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 867 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_17 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 867 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_16 == parse_tree__prog_io__CastY_17);
#line 867 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 4990 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 867 "prog_io.m"
    else
#line 867 "prog_io.m"
      if ((parse_tree__prog_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "prog_io.m"
        if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "prog_io.m"
          *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 867 "prog_io.m"
        else
#line 867 "prog_io.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5004 "parse_tree.prog_io.c"
            *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 867 "prog_io.m"
          else
#line 5008 "parse_tree.prog_io.c"
            *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 867 "prog_io.m"
      else
#line 867 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 867 "prog_io.m"
          {
#line 867 "prog_io.m"
            MR_Word parse_tree__prog_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 867 "prog_io.m"
            if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5021 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 867 "prog_io.m"
            else
#line 867 "prog_io.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 867 "prog_io.m"
                {
#line 867 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));

#line 867 "prog_io.m"
                  {
#line 867 "prog_io.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[11], parse_tree__prog_io__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io__V_20_20)), ((MR_Box) (parse_tree__prog_io__V_8_8)));
#line 867 "prog_io.m"
                    return;
                  }
#line 867 "prog_io.m"
                }
#line 867 "prog_io.m"
              else
#line 5043 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 867 "prog_io.m"
          }
#line 867 "prog_io.m"
        else
#line 867 "prog_io.m"
          {
#line 867 "prog_io.m"
            MR_Word parse_tree__prog_io__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 867 "prog_io.m"
            if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5056 "parse_tree.prog_io.c"
              *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 867 "prog_io.m"
            else
#line 867 "prog_io.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5062 "parse_tree.prog_io.c"
                *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 867 "prog_io.m"
              else
#line 867 "prog_io.m"
                {
#line 867 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));

#line 867 "prog_io.m"
                  {
#line 867 "prog_io.m"
                    parse_tree__prog_item____Compare____item_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_21_21, parse_tree__prog_io__V_15_15);
#line 867 "prog_io.m"
                    return;
                  }
#line 867 "prog_io.m"
                }
#line 867 "prog_io.m"
          }
#line 867 "prog_io.m"
  }
#line 867 "prog_io.m"
}

#line 867 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____read_item_result_0_0(
#line 867 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 867 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 867 "prog_io.m"
{
#line 867 "prog_io.m"
  {
#line 867 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 867 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_9 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 867 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_10 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 867 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_9 == parse_tree__prog_io__CastY_10);
#line 867 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 867 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 867 "prog_io.m"
    else
#line 867 "prog_io.m"
      if ((parse_tree__prog_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "prog_io.m"
        {
#line 867 "prog_io.m"
          MR_Integer parse_tree__prog_io__CastX_3 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 867 "prog_io.m"
          MR_Integer parse_tree__prog_io__CastY_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 867 "prog_io.m"
          parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_4 == parse_tree__prog_io__CastX_3);
#line 867 "prog_io.m"
        }
#line 867 "prog_io.m"
      else
#line 867 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 867 "prog_io.m"
          {
#line 867 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_11_11;
#line 867 "prog_io.m"
            MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 867 "prog_io.m"
            MR_Word parse_tree__prog_io__V_6_6;

#line 867 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 867 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 867 "prog_io.m"
              {
#line 867 "prog_io.m"
                parse_tree__prog_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 5147 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeInfo_11_11 = (MR_Word) &parse_tree__prog_io_scalar_common_1[11];
#line 5149 "parse_tree.prog_io.c"
                {
#line 5151 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io__TypeInfo_11_11, ((MR_Box) (parse_tree__prog_io__V_5_5)), ((MR_Box) (parse_tree__prog_io__V_6_6)));
                }
#line 867 "prog_io.m"
              }
#line 867 "prog_io.m"
          }
#line 867 "prog_io.m"
        else
#line 867 "prog_io.m"
          {
#line 867 "prog_io.m"
            MR_Word parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 867 "prog_io.m"
            MR_Word parse_tree__prog_io__V_8_8;

#line 867 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 867 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 867 "prog_io.m"
              {
#line 867 "prog_io.m"
                parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 5175 "parse_tree.prog_io.c"
                {
#line 5177 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = parse_tree__prog_item____Unify____item_0_0(parse_tree__prog_io__V_7_7, parse_tree__prog_io__V_8_8);
                }
#line 867 "prog_io.m"
              }
#line 867 "prog_io.m"
          }
#line 867 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 867 "prog_io.m"
  }
#line 867 "prog_io.m"
}

#line 68 "prog_io.m"
void MR_CALL 
parse_tree__prog_io____Compare____module_error_0_0(
#line 68 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 68 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 68 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 68 "prog_io.m"
{
#line 68 "prog_io.m"
  {
#line 68 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 68 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 68 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 68 "prog_io.m"
    {
#line 68 "prog_io.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__Cast_HeadVar1_4, parse_tree__prog_io__Cast_HeadVar2_5);
#line 68 "prog_io.m"
      return;
    }
#line 68 "prog_io.m"
  }
#line 68 "prog_io.m"
}

#line 68 "prog_io.m"
MR_bool MR_CALL 
parse_tree__prog_io____Unify____module_error_0_0(
#line 68 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_1,
#line 68 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 68 "prog_io.m"
{
#line 5232 "parse_tree.prog_io.c"
  {
#line 5234 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded = (parse_tree__prog_io__HeadVar__2_1 == parse_tree__prog_io__HeadVar__2_2);

#line 5237 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 5239 "parse_tree.prog_io.c"
  }
#line 68 "prog_io.m"
}

#line 424 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____module_end_0_0(
#line 424 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 424 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 424 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 424 "prog_io.m"
{
#line 424 "prog_io.m"
  {
#line 424 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 424 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_13 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 424 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_14 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 424 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_13 == parse_tree__prog_io__CastY_14);
#line 424 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 5268 "parse_tree.prog_io.c"
      *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 424 "prog_io.m"
    else
#line 424 "prog_io.m"
      if ((parse_tree__prog_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 424 "prog_io.m"
        if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 424 "prog_io.m"
          *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 0;
#line 424 "prog_io.m"
        else
#line 5280 "parse_tree.prog_io.c"
          *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 1;
#line 424 "prog_io.m"
      else
#line 424 "prog_io.m"
        {
#line 424 "prog_io.m"
          MR_Word parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 424 "prog_io.m"
          MR_Word parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));

#line 424 "prog_io.m"
          if ((parse_tree__prog_io__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5293 "parse_tree.prog_io.c"
            *parse_tree__prog_io__HeadVar__1_1 = (MR_Integer) 2;
#line 424 "prog_io.m"
          else
#line 424 "prog_io.m"
            {
#line 424 "prog_io.m"
              MR_Word parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 0)));
#line 424 "prog_io.m"
              MR_Word parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__3_3, (MR_Integer) 1)));
#line 424 "prog_io.m"
              MR_Word parse_tree__prog_io__V_12_12;

#line 424 "prog_io.m"
              {
#line 424 "prog_io.m"
                mdbcomp__prim_data____Compare____sym_name_0_0(&parse_tree__prog_io__V_12_12, parse_tree__prog_io__V_18_18, parse_tree__prog_io__V_10_10);
              }
#line 5311 "parse_tree.prog_io.c"
              parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_12_12 == (MR_Integer) 0);
#line 424 "prog_io.m"
              parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 424 "prog_io.m"
              if (parse_tree__prog_io__succeeded)
#line 424 "prog_io.m"
                *parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__V_12_12;
#line 424 "prog_io.m"
              else
#line 424 "prog_io.m"
                {
#line 424 "prog_io.m"
                  mercury__term____Compare____context_0_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__V_17_17, parse_tree__prog_io__V_11_11);
#line 424 "prog_io.m"
                  return;
                }
#line 424 "prog_io.m"
            }
#line 424 "prog_io.m"
        }
#line 424 "prog_io.m"
  }
#line 424 "prog_io.m"
}

#line 424 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____module_end_0_0(
#line 424 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 424 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 424 "prog_io.m"
{
#line 424 "prog_io.m"
  {
#line 424 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 424 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastX_9 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 424 "prog_io.m"
    MR_Integer parse_tree__prog_io__CastY_10 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 424 "prog_io.m"
    parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastX_9 == parse_tree__prog_io__CastY_10);
#line 424 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 424 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 424 "prog_io.m"
    else
#line 424 "prog_io.m"
      if ((parse_tree__prog_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 424 "prog_io.m"
        {
#line 424 "prog_io.m"
          MR_Integer parse_tree__prog_io__CastX_3 = (MR_Integer) parse_tree__prog_io__HeadVar__1_1;
#line 424 "prog_io.m"
          MR_Integer parse_tree__prog_io__CastY_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;

#line 424 "prog_io.m"
          parse_tree__prog_io__succeeded = (parse_tree__prog_io__CastY_4 == parse_tree__prog_io__CastX_3);
#line 424 "prog_io.m"
        }
#line 424 "prog_io.m"
      else
#line 424 "prog_io.m"
        {
#line 424 "prog_io.m"
          MR_Word parse_tree__prog_io__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 424 "prog_io.m"
          MR_Word parse_tree__prog_io__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));
#line 424 "prog_io.m"
          MR_Word parse_tree__prog_io__V_7_7;
#line 424 "prog_io.m"
          MR_Word parse_tree__prog_io__V_8_8;

#line 424 "prog_io.m"
          parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 424 "prog_io.m"
          if (parse_tree__prog_io__succeeded)
#line 424 "prog_io.m"
            {
#line 424 "prog_io.m"
              parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 424 "prog_io.m"
              parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 5399 "parse_tree.prog_io.c"
              {
#line 5401 "parse_tree.prog_io.c"
                parse_tree__prog_io__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_io__V_5_5, parse_tree__prog_io__V_7_7);
              }
#line 424 "prog_io.m"
              if (parse_tree__prog_io__succeeded)
#line 5406 "parse_tree.prog_io.c"
                {
#line 5408 "parse_tree.prog_io.c"
                  return parse_tree__prog_io__succeeded = mercury__term____Unify____context_0_0(parse_tree__prog_io__V_6_6, parse_tree__prog_io__V_8_8);
                }
#line 424 "prog_io.m"
            }
#line 424 "prog_io.m"
        }
#line 424 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 424 "prog_io.m"
  }
#line 424 "prog_io.m"
}

#line 73 "prog_io.m"
void MR_CALL 
parse_tree__prog_io____Compare____maybe_return_timestamp_0_0(
#line 73 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 73 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 73 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 73 "prog_io.m"
{
#line 73 "prog_io.m"
  {
#line 73 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 73 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io__HeadVar__2_2;
#line 73 "prog_io.m"
    MR_Integer parse_tree__prog_io__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io__HeadVar__3_3;

#line 73 "prog_io.m"
    {
#line 73 "prog_io.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__Cast_HeadVar1_4, parse_tree__prog_io__Cast_HeadVar2_5);
#line 73 "prog_io.m"
      return;
    }
#line 73 "prog_io.m"
  }
#line 73 "prog_io.m"
}

#line 73 "prog_io.m"
MR_bool MR_CALL 
parse_tree__prog_io____Unify____maybe_return_timestamp_0_0(
#line 73 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_1,
#line 73 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 73 "prog_io.m"
{
#line 5463 "parse_tree.prog_io.c"
  {
#line 5465 "parse_tree.prog_io.c"
    MR_bool parse_tree__prog_io__succeeded = (parse_tree__prog_io__HeadVar__2_1 == parse_tree__prog_io__HeadVar__2_2);

#line 5468 "parse_tree.prog_io.c"
    return parse_tree__prog_io__succeeded;
#line 5470 "parse_tree.prog_io.c"
  }
#line 73 "prog_io.m"
}

#line 2258 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io____Compare____maker_2_0(
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_T1_6,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_T2_7,
#line 2258 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__1_1,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__3_3)
#line 2258 "prog_io.m"
{
#line 2258 "prog_io.m"
  {
#line 2258 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 2258 "prog_io.m"
    {
#line 2258 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_3_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2, parse_tree__prog_io__HeadVar__3_3);
#line 2258 "prog_io.m"
      return;
    }
#line 2258 "prog_io.m"
  }
#line 2258 "prog_io.m"
}

#line 2258 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io____Unify____maker_2_0(
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_T1_5,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_T2_6,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 2258 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2)
#line 2258 "prog_io.m"
{
#line 2258 "prog_io.m"
  {
#line 2258 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 2258 "prog_io.m"
    {
#line 2258 "prog_io.m"
      return parse_tree__prog_io__succeeded = parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_105_111_95_95_109_97_107_101_114_95_50_95_95_91_49_44_32_50_93_95_48_2_p_0(parse_tree__prog_io__HeadVar__1_1, parse_tree__prog_io__HeadVar__2_2);
    }
#line 2258 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 2258 "prog_io.m"
  }
#line 2258 "prog_io.m"
}

#line 2315 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_include_module_decl_4_p_0(
#line 2315 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 2315 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 2315 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 2315 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8)
#line 2315 "prog_io.m"
{
#line 2318 "prog_io.m"
  {
#line 2318 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 2318 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDefn_9;
#line 2318 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemModuleDefn_10;
#line 2318 "prog_io.m"
    MR_Word parse_tree__prog_io__V_11_11;

#line 2319 "prog_io.m"
    {
#line 2319 "prog_io.m"
      parse_tree__prog_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2319 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 0) = ((MR_Box) (parse_tree__prog_io__ModuleSpecifier_7));
#line 2319 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2319 "prog_io.m"
    }
#line 2319 "prog_io.m"
    {
#line 2319 "prog_io.m"
      parse_tree__prog_io__ModuleDefn_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2319 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2319 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 1) = ((MR_Box) (parse_tree__prog_io__V_11_11));
#line 2319 "prog_io.m"
    }
#line 2320 "prog_io.m"
    {
#line 2320 "prog_io.m"
      parse_tree__prog_io__ItemModuleDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2320 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_9));
#line 2320 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 1) = ((MR_Box) (parse_tree__prog_io__Context_5));
#line 2320 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_6));
#line 2320 "prog_io.m"
    }
#line 2321 "prog_io.m"
    *parse_tree__prog_io__Item_8 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_10);
#line 2318 "prog_io.m"
  }
#line 2315 "prog_io.m"
}

#line 2307 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_use_module_decl_4_p_0(
#line 2307 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 2307 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 2307 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 2307 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8)
#line 2307 "prog_io.m"
{
#line 2310 "prog_io.m"
  {
#line 2310 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 2310 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDefn_9;
#line 2310 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemModuleDefn_10;
#line 2310 "prog_io.m"
    MR_Word parse_tree__prog_io__V_11_11;

#line 2311 "prog_io.m"
    {
#line 2311 "prog_io.m"
      parse_tree__prog_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2311 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 0) = ((MR_Box) (parse_tree__prog_io__ModuleSpecifier_7));
#line 2311 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2311 "prog_io.m"
    }
#line 2311 "prog_io.m"
    {
#line 2311 "prog_io.m"
      parse_tree__prog_io__ModuleDefn_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2311 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 2311 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 1) = ((MR_Box) (parse_tree__prog_io__V_11_11));
#line 2311 "prog_io.m"
    }
#line 2312 "prog_io.m"
    {
#line 2312 "prog_io.m"
      parse_tree__prog_io__ItemModuleDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2312 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_9));
#line 2312 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 1) = ((MR_Box) (parse_tree__prog_io__Context_5));
#line 2312 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_6));
#line 2312 "prog_io.m"
    }
#line 2313 "prog_io.m"
    *parse_tree__prog_io__Item_8 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_10);
#line 2310 "prog_io.m"
  }
#line 2307 "prog_io.m"
}

#line 2299 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_pseudo_import_module_decl_4_p_0(
#line 2299 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 2299 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_6,
#line 2299 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleSpecifier_7,
#line 2299 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_8)
#line 2299 "prog_io.m"
{
#line 2302 "prog_io.m"
  {
#line 2302 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 2302 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDefn_9;
#line 2302 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemModuleDefn_10;
#line 2302 "prog_io.m"
    MR_Word parse_tree__prog_io__V_11_11;

#line 2303 "prog_io.m"
    {
#line 2303 "prog_io.m"
      parse_tree__prog_io__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2303 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 0) = ((MR_Box) (parse_tree__prog_io__ModuleSpecifier_7));
#line 2303 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2303 "prog_io.m"
    }
#line 2303 "prog_io.m"
    {
#line 2303 "prog_io.m"
      parse_tree__prog_io__ModuleDefn_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2303 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2303 "prog_io.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_9, 1) = ((MR_Box) (parse_tree__prog_io__V_11_11));
#line 2303 "prog_io.m"
    }
#line 2304 "prog_io.m"
    {
#line 2304 "prog_io.m"
      parse_tree__prog_io__ItemModuleDefn_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2304 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_9));
#line 2304 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 1) = ((MR_Box) (parse_tree__prog_io__Context_5));
#line 2304 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_10, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_6));
#line 2304 "prog_io.m"
    }
#line 2305 "prog_io.m"
    *parse_tree__prog_io__Item_8 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_10);
#line 2302 "prog_io.m"
  }
#line 2299 "prog_io.m"
}

#line 2249 "prog_io.m"
static MR_Word MR_CALL 
parse_tree__prog_io__pred_or_func_decl_pieces_1_f_0(
#line 2249 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1)
#line 2249 "prog_io.m"
{
#line 2251 "prog_io.m"
  {
#line 2251 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 2251 "prog_io.m"
    MR_Word parse_tree__prog_io__HeadVar__2_2;

#line 2251 "prog_io.m"
    if ((parse_tree__prog_io__HeadVar__1_1 == (MR_Integer) 1))
#line 2251 "prog_io.m"
      parse_tree__prog_io__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[63]);
#line 2251 "prog_io.m"
    else
#line 2253 "prog_io.m"
      parse_tree__prog_io__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[102]);
#line 2251 "prog_io.m"
    return parse_tree__prog_io__HeadVar__2_2;
#line 2251 "prog_io.m"
  }
#line 2249 "prog_io.m"
}

#line 2238 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__get_purity_3_p_0(
#line 2238 "prog_io.m"
  MR_Word * parse_tree__prog_io__Purity_4,
#line 2238 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Attributes_0_8,
#line 2238 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Attributes_9)
#line 2238 "prog_io.m"
{
#line 2243 "prog_io.m"
  {
#line 2243 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__STATE_VARIABLE_Attributes_0_8)) == (MR_mktag((MR_Integer) 1)));
#line 2243 "prog_io.m"
    MR_Word parse_tree__prog_io__Purity0_6;
#line 2243 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Attributes_10_10;
#line 2241 "prog_io.m"
    MR_Word parse_tree__prog_io__V_11_11;
#line 2241 "prog_io.m"
    MR_Word parse_tree__prog_io__V_12_12;
#line 2241 "prog_io.m"
    MR_Word parse_tree__prog_io__V_7_7;

#line 2241 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 2241 "prog_io.m"
      {
#line 2241 "prog_io.m"
        parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Attributes_0_8, (MR_Integer) 0)));
#line 2241 "prog_io.m"
        parse_tree__prog_io__STATE_VARIABLE_Attributes_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Attributes_0_8, (MR_Integer) 1)));
#line 2241 "prog_io.m"
        parse_tree__prog_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_11_11, (MR_Integer) 0)));
#line 2241 "prog_io.m"
        parse_tree__prog_io__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_11_11, (MR_Integer) 1)));
#line 2241 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 2241 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2241 "prog_io.m"
          parse_tree__prog_io__Purity0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_12_12, (MR_Integer) 0)));
#line 2241 "prog_io.m"
      }
#line 2243 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 2242 "prog_io.m"
      {
#line 2242 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Attributes_9 = parse_tree__prog_io__STATE_VARIABLE_Attributes_10_10;
#line 2242 "prog_io.m"
        *parse_tree__prog_io__Purity_4 = parse_tree__prog_io__Purity0_6;
#line 2242 "prog_io.m"
      }
#line 2243 "prog_io.m"
    else
#line 2244 "prog_io.m"
      {
#line 2244 "prog_io.m"
        *parse_tree__prog_io__Purity_4 = (MR_Integer) 0;
#line 2244 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Attributes_9 = parse_tree__prog_io__STATE_VARIABLE_Attributes_0_8;
#line 2244 "prog_io.m"
      }
#line 2243 "prog_io.m"
  }
#line 2238 "prog_io.m"
}

#line 2218 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_module_name_4_p_0(
#line 2218 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_5,
#line 2218 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_6,
#line 2218 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_7,
#line 2218 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModule_8)
#line 2218 "prog_io.m"
{
#line 2223 "prog_io.m"
  {
#line 2223 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 2223 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__Term_7)) == (MR_mktag((MR_Integer) 0))))
#line 2232 "prog_io.m"
      {
#line 2232 "prog_io.m"
        parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io__DefaultModuleName_5, parse_tree__prog_io__VarSet_6, parse_tree__prog_io__Term_7, parse_tree__prog_io__MaybeModule_8);
#line 2232 "prog_io.m"
        return;
      }
#line 2223 "prog_io.m"
    else
#line 2223 "prog_io.m"
      {
#line 2223 "prog_io.m"
        MR_Word parse_tree__prog_io__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__Term_7, (MR_Integer) 1)));
#line 2223 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_12;
#line 2223 "prog_io.m"
        MR_Word parse_tree__prog_io__V_29_29;
#line 2223 "prog_io.m"
        MR_Word parse_tree__prog_io__V_30_30;
#line 2223 "prog_io.m"
        MR_Word parse_tree__prog_io__V_35_35;
#line 2223 "prog_io.m"
        MR_Word parse_tree__prog_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__Term_7, (MR_Integer) 0)));

#line 2228 "prog_io.m"
        {
#line 2228 "prog_io.m"
          parse_tree__prog_io__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2228 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io__Context_10));
#line 2228 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[149])));
#line 2228 "prog_io.m"
        }
#line 2227 "prog_io.m"
        {
#line 2227 "prog_io.m"
          parse_tree__prog_io__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2227 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io__V_30_30));
#line 2227 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2227 "prog_io.m"
        }
#line 2227 "prog_io.m"
        {
#line 2227 "prog_io.m"
          parse_tree__prog_io__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2227 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2227 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2227 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io__V_29_29));
#line 2227 "prog_io.m"
        }
#line 2229 "prog_io.m"
        {
#line 2229 "prog_io.m"
          parse_tree__prog_io__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2229 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io__Spec_12));
#line 2229 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2229 "prog_io.m"
        }
#line 2229 "prog_io.m"
        {
#line 2229 "prog_io.m"
          MR_Word base;
#line 2229 "prog_io.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2229 "prog_io.m"
          *parse_tree__prog_io__MaybeModule_8 = base;
#line 2229 "prog_io.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_35_35));
#line 2229 "prog_io.m"
        }
#line 2223 "prog_io.m"
      }
#line 2223 "prog_io.m"
  }
#line 2218 "prog_io.m"
}

#line 2207 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_module_specifier_3_p_0(
#line 2207 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_4,
#line 2207 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_5,
#line 2207 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleSpecifier_6)
#line 2207 "prog_io.m"
{
#line 2211 "prog_io.m"
  {
#line 2211 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 2211 "prog_io.m"
    {
#line 2211 "prog_io.m"
      parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__VarSet_4, parse_tree__prog_io__Term_5, parse_tree__prog_io__MaybeModuleSpecifier_6);
#line 2211 "prog_io.m"
      return;
    }
#line 2211 "prog_io.m"
  }
#line 2207 "prog_io.m"
}

#line 2184 "prog_io.m"
static MR_Word MR_CALL 
parse_tree__prog_io__desugar_field_access_1_f_0(
#line 2184 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_3)
#line 2184 "prog_io.m"
{
#line 2192 "prog_io.m"
  {
#line 2192 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 2192 "prog_io.m"
    MR_Word parse_tree__prog_io__DesugaredTerm_4;
#line 2192 "prog_io.m"
    MR_Word parse_tree__prog_io__A_5;
#line 2192 "prog_io.m"
    MR_Word parse_tree__prog_io__Context_7;
#line 2192 "prog_io.m"
    MR_Word parse_tree__prog_io__Bs_9;
#line 2192 "prog_io.m"
    MR_Word parse_tree__prog_io__V_21_21;
#line 2188 "prog_io.m"
    MR_Word parse_tree__prog_io__RHS_6;
#line 2188 "prog_io.m"
    MR_Word parse_tree__prog_io__V_16_16;
#line 2188 "prog_io.m"
    MR_String parse_tree__prog_io__V_17_17;
#line 2188 "prog_io.m"
    MR_Word parse_tree__prog_io__V_18_18;
#line 2188 "prog_io.m"
    MR_Word parse_tree__prog_io__V_19_19;
#line 2188 "prog_io.m"
    MR_Word parse_tree__prog_io__V_20_20;
#line 2189 "prog_io.m"
    MR_Word parse_tree__prog_io__V_10_10;
#line 2189 "prog_io.m"
    MR_String parse_tree__prog_io__FieldName_8;

#line 2188 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 2188 "prog_io.m"
      {
#line 2188 "prog_io.m"
        parse_tree__prog_io__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_3, (MR_Integer) 0)));
#line 2188 "prog_io.m"
        parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_3, (MR_Integer) 1)));
#line 2188 "prog_io.m"
        parse_tree__prog_io__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_3, (MR_Integer) 2)));
#line 2188 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 2188 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2188 "prog_io.m"
          {
#line 2188 "prog_io.m"
            parse_tree__prog_io__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_16_16, (MR_Integer) 0)));
#line 2188 "prog_io.m"
            parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__V_17_17, (MR_String) "^") == 0);
#line 2188 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 2188 "prog_io.m"
              {
#line 2188 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 2188 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 2188 "prog_io.m"
                  {
#line 2188 "prog_io.m"
                    parse_tree__prog_io__A_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_18_18, (MR_Integer) 0)));
#line 2188 "prog_io.m"
                    parse_tree__prog_io__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_18_18, (MR_Integer) 1)));
#line 2188 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 2188 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 2188 "prog_io.m"
                      {
#line 2188 "prog_io.m"
                        parse_tree__prog_io__RHS_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_19_19, (MR_Integer) 0)));
#line 2188 "prog_io.m"
                        parse_tree__prog_io__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_19_19, (MR_Integer) 1)));
#line 2188 "prog_io.m"
                        parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2188 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 2188 "prog_io.m"
                          {
#line 2189 "prog_io.m"
                            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__RHS_6)) == (MR_mktag((MR_Integer) 0)));
#line 2189 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 2189 "prog_io.m"
                              {
#line 2189 "prog_io.m"
                                parse_tree__prog_io__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__RHS_6, (MR_Integer) 0)));
#line 2189 "prog_io.m"
                                parse_tree__prog_io__Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__RHS_6, (MR_Integer) 1)));
#line 2189 "prog_io.m"
                                parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__RHS_6, (MR_Integer) 2)));
#line 2189 "prog_io.m"
                                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 2189 "prog_io.m"
                                if (parse_tree__prog_io__succeeded)
#line 2189 "prog_io.m"
                                  parse_tree__prog_io__FieldName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_21_21, (MR_Integer) 0)));
#line 2189 "prog_io.m"
                              }
#line 2188 "prog_io.m"
                          }
#line 2188 "prog_io.m"
                      }
#line 2188 "prog_io.m"
                  }
#line 2188 "prog_io.m"
              }
#line 2188 "prog_io.m"
          }
#line 2188 "prog_io.m"
      }
#line 2192 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 2191 "prog_io.m"
      {
#line 2191 "prog_io.m"
        MR_Word parse_tree__prog_io__V_23_23;
#line 2191 "prog_io.m"
        MR_Word parse_tree__prog_io__V_24_24;

#line 2191 "prog_io.m"
        {
#line 2191 "prog_io.m"
          parse_tree__prog_io__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2191 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io__A_5));
#line 2191 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2191 "prog_io.m"
        }
#line 2191 "prog_io.m"
        {
#line 2191 "prog_io.m"
          parse_tree__prog_io__V_23_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_scalar_common_1[0], parse_tree__prog_io__Bs_9, parse_tree__prog_io__V_24_24);
        }
#line 2191 "prog_io.m"
        {
#line 2191 "prog_io.m"
          parse_tree__prog_io__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2191 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io__V_21_21));
#line 2191 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io__V_23_23));
#line 2191 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io__Context_7));
#line 2191 "prog_io.m"
        }
#line 2191 "prog_io.m"
      }
#line 2192 "prog_io.m"
    else
#line 2199 "prog_io.m"
      {
#line 2199 "prog_io.m"
        MR_Word parse_tree__prog_io__X_12;
#line 2199 "prog_io.m"
        MR_Word parse_tree__prog_io__A_44;
#line 2199 "prog_io.m"
        MR_Word parse_tree__prog_io__Context_46;
#line 2199 "prog_io.m"
        MR_String parse_tree__prog_io__FieldName_47;
#line 2199 "prog_io.m"
        MR_Word parse_tree__prog_io__Bs_48;
#line 2193 "prog_io.m"
        MR_Word parse_tree__prog_io__LHS_11;
#line 2193 "prog_io.m"
        MR_Word parse_tree__prog_io__V_26_26;
#line 2193 "prog_io.m"
        MR_String parse_tree__prog_io__V_27_27;
#line 2193 "prog_io.m"
        MR_Word parse_tree__prog_io__V_28_28;
#line 2193 "prog_io.m"
        MR_Word parse_tree__prog_io__V_29_29;
#line 2193 "prog_io.m"
        MR_Word parse_tree__prog_io__V_30_30;
#line 2193 "prog_io.m"
        MR_Word parse_tree__prog_io__V_31_31;
#line 2193 "prog_io.m"
        MR_String parse_tree__prog_io__V_32_32;
#line 2193 "prog_io.m"
        MR_Word parse_tree__prog_io__V_33_33;
#line 2193 "prog_io.m"
        MR_Word parse_tree__prog_io__V_34_34;
#line 2193 "prog_io.m"
        MR_Word parse_tree__prog_io__V_35_35;
#line 2193 "prog_io.m"
        MR_Word parse_tree__prog_io__V_36_36;
#line 2193 "prog_io.m"
        MR_Word parse_tree__prog_io__RHS_43;
#line 2193 "prog_io.m"
        MR_Word parse_tree__prog_io__V_13_13;
#line 2195 "prog_io.m"
        MR_Word parse_tree__prog_io__V_14_14;

#line 2193 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 2193 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2193 "prog_io.m"
          {
#line 2193 "prog_io.m"
            parse_tree__prog_io__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_3, (MR_Integer) 0)));
#line 2193 "prog_io.m"
            parse_tree__prog_io__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_3, (MR_Integer) 1)));
#line 2193 "prog_io.m"
            parse_tree__prog_io__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_3, (MR_Integer) 2)));
#line 2193 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_26_26)) == (MR_mktag((MR_Integer) 0)));
#line 2193 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 2193 "prog_io.m"
              {
#line 2193 "prog_io.m"
                parse_tree__prog_io__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, (MR_Integer) 0)));
#line 2193 "prog_io.m"
                parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__V_27_27, (MR_String) ":=") == 0);
#line 2193 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 2193 "prog_io.m"
                  {
#line 2193 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 2193 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 2193 "prog_io.m"
                      {
#line 2193 "prog_io.m"
                        parse_tree__prog_io__LHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, (MR_Integer) 0)));
#line 2193 "prog_io.m"
                        parse_tree__prog_io__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, (MR_Integer) 1)));
#line 2193 "prog_io.m"
                        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 2193 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 2193 "prog_io.m"
                          {
#line 2193 "prog_io.m"
                            parse_tree__prog_io__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, (MR_Integer) 0)));
#line 2193 "prog_io.m"
                            parse_tree__prog_io__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, (MR_Integer) 1)));
#line 2193 "prog_io.m"
                            parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2193 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 2193 "prog_io.m"
                              {
#line 2194 "prog_io.m"
                                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__LHS_11)) == (MR_mktag((MR_Integer) 0)));
#line 2194 "prog_io.m"
                                if (parse_tree__prog_io__succeeded)
#line 2194 "prog_io.m"
                                  {
#line 2194 "prog_io.m"
                                    parse_tree__prog_io__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__LHS_11, (MR_Integer) 0)));
#line 2194 "prog_io.m"
                                    parse_tree__prog_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__LHS_11, (MR_Integer) 1)));
#line 2194 "prog_io.m"
                                    parse_tree__prog_io__Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__LHS_11, (MR_Integer) 2)));
#line 2194 "prog_io.m"
                                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 2194 "prog_io.m"
                                    if (parse_tree__prog_io__succeeded)
#line 2194 "prog_io.m"
                                      {
#line 2194 "prog_io.m"
                                        parse_tree__prog_io__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_31_31, (MR_Integer) 0)));
#line 2194 "prog_io.m"
                                        parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__V_32_32, (MR_String) "^") == 0);
#line 2193 "prog_io.m"
                                        if (parse_tree__prog_io__succeeded)
#line 2193 "prog_io.m"
                                          {
#line 2194 "prog_io.m"
                                            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 2194 "prog_io.m"
                                            if (parse_tree__prog_io__succeeded)
#line 2194 "prog_io.m"
                                              {
#line 2194 "prog_io.m"
                                                parse_tree__prog_io__A_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, (MR_Integer) 0)));
#line 2194 "prog_io.m"
                                                parse_tree__prog_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, (MR_Integer) 1)));
#line 2194 "prog_io.m"
                                                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 2194 "prog_io.m"
                                                if (parse_tree__prog_io__succeeded)
#line 2194 "prog_io.m"
                                                  {
#line 2194 "prog_io.m"
                                                    parse_tree__prog_io__RHS_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_34_34, (MR_Integer) 0)));
#line 2194 "prog_io.m"
                                                    parse_tree__prog_io__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_34_34, (MR_Integer) 1)));
#line 2194 "prog_io.m"
                                                    parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2193 "prog_io.m"
                                                    if (parse_tree__prog_io__succeeded)
#line 2193 "prog_io.m"
                                                      {
#line 2195 "prog_io.m"
                                                        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__RHS_43)) == (MR_mktag((MR_Integer) 0)));
#line 2195 "prog_io.m"
                                                        if (parse_tree__prog_io__succeeded)
#line 2195 "prog_io.m"
                                                          {
#line 2195 "prog_io.m"
                                                            parse_tree__prog_io__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__RHS_43, (MR_Integer) 0)));
#line 2195 "prog_io.m"
                                                            parse_tree__prog_io__Bs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__RHS_43, (MR_Integer) 1)));
#line 2195 "prog_io.m"
                                                            parse_tree__prog_io__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__RHS_43, (MR_Integer) 2)));
#line 2195 "prog_io.m"
                                                            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 2195 "prog_io.m"
                                                            if (parse_tree__prog_io__succeeded)
#line 2195 "prog_io.m"
                                                              parse_tree__prog_io__FieldName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_36_36, (MR_Integer) 0)));
#line 2195 "prog_io.m"
                                                          }
#line 2193 "prog_io.m"
                                                      }
#line 2194 "prog_io.m"
                                                  }
#line 2194 "prog_io.m"
                                              }
#line 2193 "prog_io.m"
                                          }
#line 2194 "prog_io.m"
                                      }
#line 2194 "prog_io.m"
                                  }
#line 2193 "prog_io.m"
                              }
#line 2193 "prog_io.m"
                          }
#line 2193 "prog_io.m"
                      }
#line 2193 "prog_io.m"
                  }
#line 2193 "prog_io.m"
              }
#line 2193 "prog_io.m"
          }
#line 2199 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2197 "prog_io.m"
          {
#line 2197 "prog_io.m"
            MR_String parse_tree__prog_io__FunctionName_15;
#line 2197 "prog_io.m"
            MR_Word parse_tree__prog_io__V_38_38;
#line 2197 "prog_io.m"
            MR_Word parse_tree__prog_io__V_39_39;
#line 2197 "prog_io.m"
            MR_Word parse_tree__prog_io__V_40_40;
#line 2197 "prog_io.m"
            MR_Word parse_tree__prog_io__V_41_41;

#line 2197 "prog_io.m"
            {
#line 2197 "prog_io.m"
              parse_tree__prog_io__FunctionName_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io__FieldName_47, (MR_String) " :=");
            }
#line 2198 "prog_io.m"
            {
#line 2198 "prog_io.m"
              parse_tree__prog_io__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2198 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io__FunctionName_15));
#line 2198 "prog_io.m"
            }
#line 2198 "prog_io.m"
            {
#line 2198 "prog_io.m"
              parse_tree__prog_io__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io__X_12));
#line 2198 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2198 "prog_io.m"
            }
#line 2198 "prog_io.m"
            {
#line 2198 "prog_io.m"
              parse_tree__prog_io__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io__A_44));
#line 2198 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io__V_41_41));
#line 2198 "prog_io.m"
            }
#line 2198 "prog_io.m"
            {
#line 2198 "prog_io.m"
              parse_tree__prog_io__V_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_scalar_common_1[0], parse_tree__prog_io__Bs_48, parse_tree__prog_io__V_40_40);
            }
#line 2198 "prog_io.m"
            {
#line 2198 "prog_io.m"
              parse_tree__prog_io__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2198 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io__V_38_38));
#line 2198 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io__V_39_39));
#line 2198 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io__Context_46));
#line 2198 "prog_io.m"
            }
#line 2197 "prog_io.m"
          }
#line 2199 "prog_io.m"
        else
#line 2200 "prog_io.m"
          parse_tree__prog_io__DesugaredTerm_4 = parse_tree__prog_io__Term_3;
#line 2199 "prog_io.m"
      }
#line 2192 "prog_io.m"
    return parse_tree__prog_io__DesugaredTerm_4;
#line 2192 "prog_io.m"
  }
#line 2184 "prog_io.m"
}

#line 2138 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_with_inst_suffix_3_p_0(
#line 2138 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_4,
#line 2138 "prog_io.m"
  MR_Word * parse_tree__prog_io__BeforeWithInstTerm_5,
#line 2138 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeWithInst_6)
#line 2138 "prog_io.m"
{
#line 2156 "prog_io.m"
  {
#line 2156 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 2156 "prog_io.m"
    MR_Word parse_tree__prog_io__BeforeWithInstTermPrime_7;
#line 2156 "prog_io.m"
    MR_Word parse_tree__prog_io__InstTerm_8;
#line 2143 "prog_io.m"
    MR_Word parse_tree__prog_io__V_13_13;
#line 2143 "prog_io.m"
    MR_String parse_tree__prog_io__V_14_14;
#line 2143 "prog_io.m"
    MR_Word parse_tree__prog_io__V_15_15;
#line 2143 "prog_io.m"
    MR_Word parse_tree__prog_io__V_16_16;
#line 2143 "prog_io.m"
    MR_Word parse_tree__prog_io__V_17_17;
#line 2143 "prog_io.m"
    MR_Word parse_tree__prog_io__V_9_9;

#line 2143 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 2143 "prog_io.m"
      {
#line 2143 "prog_io.m"
        parse_tree__prog_io__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_4, (MR_Integer) 0)));
#line 2143 "prog_io.m"
        parse_tree__prog_io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_4, (MR_Integer) 1)));
#line 2143 "prog_io.m"
        parse_tree__prog_io__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_4, (MR_Integer) 2)));
#line 2143 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 2143 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2143 "prog_io.m"
          {
#line 2143 "prog_io.m"
            parse_tree__prog_io__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_13_13, (MR_Integer) 0)));
#line 2143 "prog_io.m"
            parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__V_14_14, (MR_String) "with_inst") == 0);
#line 2143 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 2143 "prog_io.m"
              {
#line 2143 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 2143 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 2143 "prog_io.m"
                  {
#line 2143 "prog_io.m"
                    parse_tree__prog_io__BeforeWithInstTermPrime_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_15_15, (MR_Integer) 0)));
#line 2143 "prog_io.m"
                    parse_tree__prog_io__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_15_15, (MR_Integer) 1)));
#line 2144 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 2144 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 2144 "prog_io.m"
                      {
#line 2144 "prog_io.m"
                        parse_tree__prog_io__InstTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, (MR_Integer) 0)));
#line 2144 "prog_io.m"
                        parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, (MR_Integer) 1)));
#line 2144 "prog_io.m"
                        parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2144 "prog_io.m"
                      }
#line 2143 "prog_io.m"
                  }
#line 2143 "prog_io.m"
              }
#line 2143 "prog_io.m"
          }
#line 2143 "prog_io.m"
      }
#line 2156 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 2146 "prog_io.m"
      {
#line 2149 "prog_io.m"
        MR_Word parse_tree__prog_io__Inst_10;

#line 2146 "prog_io.m"
        *parse_tree__prog_io__BeforeWithInstTerm_5 = parse_tree__prog_io__BeforeWithInstTermPrime_7;
#line 2147 "prog_io.m"
        {
#line 2147 "prog_io.m"
          parse_tree__prog_io__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io__InstTerm_8, &parse_tree__prog_io__Inst_10);
        }
#line 2149 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2148 "prog_io.m"
          {
#line 2148 "prog_io.m"
            MR_Word parse_tree__prog_io__V_19_19;

#line 2148 "prog_io.m"
            {
#line 2148 "prog_io.m"
              parse_tree__prog_io__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2148 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io__Inst_10));
#line 2148 "prog_io.m"
            }
#line 2148 "prog_io.m"
            {
#line 2148 "prog_io.m"
              MR_Word base;
#line 2148 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2148 "prog_io.m"
              *parse_tree__prog_io__MaybeWithInst_6 = base;
#line 2148 "prog_io.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_19_19));
#line 2148 "prog_io.m"
            }
#line 2148 "prog_io.m"
          }
#line 2149 "prog_io.m"
        else
#line 2151 "prog_io.m"
          {
#line 2151 "prog_io.m"
            MR_Word parse_tree__prog_io__Spec_12;
#line 2151 "prog_io.m"
            MR_Word parse_tree__prog_io__V_33_33;
#line 2151 "prog_io.m"
            MR_Word parse_tree__prog_io__V_34_34;
#line 2151 "prog_io.m"
            MR_Word parse_tree__prog_io__V_35_35;
#line 2151 "prog_io.m"
            MR_Word parse_tree__prog_io__V_40_40;

#line 2153 "prog_io.m"
            {
#line 2153 "prog_io.m"
              parse_tree__prog_io__V_35_35 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__InstTerm_8);
            }
#line 2153 "prog_io.m"
            {
#line 2153 "prog_io.m"
              parse_tree__prog_io__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2153 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io__V_35_35));
#line 2153 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[141])));
#line 2153 "prog_io.m"
            }
#line 2152 "prog_io.m"
            {
#line 2152 "prog_io.m"
              parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2152 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io__V_34_34));
#line 2152 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2152 "prog_io.m"
            }
#line 2152 "prog_io.m"
            {
#line 2152 "prog_io.m"
              parse_tree__prog_io__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2152 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2152 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2152 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 2152 "prog_io.m"
            }
#line 2154 "prog_io.m"
            {
#line 2154 "prog_io.m"
              parse_tree__prog_io__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2154 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io__Spec_12));
#line 2154 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2154 "prog_io.m"
            }
#line 2154 "prog_io.m"
            {
#line 2154 "prog_io.m"
              MR_Word base;
#line 2154 "prog_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2154 "prog_io.m"
              *parse_tree__prog_io__MaybeWithInst_6 = base;
#line 2154 "prog_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_40_40));
#line 2154 "prog_io.m"
            }
#line 2151 "prog_io.m"
          }
#line 2146 "prog_io.m"
      }
#line 2156 "prog_io.m"
    else
#line 2157 "prog_io.m"
      {
#line 2157 "prog_io.m"
        *parse_tree__prog_io__BeforeWithInstTerm_5 = parse_tree__prog_io__Term_4;
#line 2158 "prog_io.m"
        *parse_tree__prog_io__MaybeWithInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[25]);
#line 2157 "prog_io.m"
      }
#line 2156 "prog_io.m"
  }
#line 2138 "prog_io.m"
}

#line 2107 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_with_type_suffix_4_p_0(
#line 2107 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_5,
#line 2107 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_6,
#line 2107 "prog_io.m"
  MR_Word * parse_tree__prog_io__BeforeWithTypeTerm_7,
#line 2107 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeWithType_8)
#line 2107 "prog_io.m"
{
#line 2131 "prog_io.m"
  {
#line 2131 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 2131 "prog_io.m"
    MR_Word parse_tree__prog_io__BeforeWithTypeTermPrime_10;
#line 2131 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeTerm_11;
#line 2113 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeQualifier_9;
#line 2113 "prog_io.m"
    MR_Word parse_tree__prog_io__V_17_17;
#line 2113 "prog_io.m"
    MR_Word parse_tree__prog_io__V_18_18;
#line 2113 "prog_io.m"
    MR_Word parse_tree__prog_io__V_19_19;
#line 2113 "prog_io.m"
    MR_String parse_tree__prog_io__V_24_24;
#line 2112 "prog_io.m"
    MR_Word parse_tree__prog_io__V_12_12;

#line 2112 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 2112 "prog_io.m"
      {
#line 2112 "prog_io.m"
        parse_tree__prog_io__TypeQualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_6, (MR_Integer) 0)));
#line 2112 "prog_io.m"
        parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_6, (MR_Integer) 1)));
#line 2112 "prog_io.m"
        parse_tree__prog_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_6, (MR_Integer) 2)));
#line 2112 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 2112 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2112 "prog_io.m"
          {
#line 2112 "prog_io.m"
            parse_tree__prog_io__BeforeWithTypeTermPrime_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_17_17, (MR_Integer) 0)));
#line 2112 "prog_io.m"
            parse_tree__prog_io__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_17_17, (MR_Integer) 1)));
#line 2113 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 2113 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 2113 "prog_io.m"
              {
#line 2113 "prog_io.m"
                parse_tree__prog_io__TypeTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_18_18, (MR_Integer) 0)));
#line 2113 "prog_io.m"
                parse_tree__prog_io__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_18_18, (MR_Integer) 1)));
#line 2113 "prog_io.m"
                parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2113 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 2113 "prog_io.m"
                  {
#line 2115 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__TypeQualifier_9)) == (MR_mktag((MR_Integer) 0)));
#line 2115 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 2115 "prog_io.m"
                      {
#line 2115 "prog_io.m"
                        parse_tree__prog_io__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__TypeQualifier_9, (MR_Integer) 0)));
#line 2116 "prog_io.m"
                        if ((strcmp(parse_tree__prog_io__V_24_24, (MR_String) ":") == 0))
#line 2117 "prog_io.m"
                          parse_tree__prog_io__succeeded = MR_TRUE;
#line 2116 "prog_io.m"
                        else
#line 2116 "prog_io.m"
                          if ((strcmp(parse_tree__prog_io__V_24_24, (MR_String) "with_type") == 0))
#line 2115 "prog_io.m"
                            parse_tree__prog_io__succeeded = MR_TRUE;
#line 2116 "prog_io.m"
                          else
#line 2116 "prog_io.m"
                            parse_tree__prog_io__succeeded = MR_FALSE;
#line 2115 "prog_io.m"
                      }
#line 2113 "prog_io.m"
                  }
#line 2113 "prog_io.m"
              }
#line 2112 "prog_io.m"
          }
#line 2112 "prog_io.m"
      }
#line 2131 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 2120 "prog_io.m"
      {
#line 2120 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeType_14;

#line 2120 "prog_io.m"
        *parse_tree__prog_io__BeforeWithTypeTerm_7 = parse_tree__prog_io__BeforeWithTypeTermPrime_10;
#line 2123 "prog_io.m"
        {
#line 2123 "prog_io.m"
          parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io__TypeTerm_11, parse_tree__prog_io__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__MaybeType_14);
        }
#line 2127 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
#line 2129 "prog_io.m"
          *parse_tree__prog_io__MaybeWithType_8 = (MR_Word) parse_tree__prog_io__MaybeType_14;
#line 2127 "prog_io.m"
        else
#line 2125 "prog_io.m"
          {
#line 2125 "prog_io.m"
            MR_Word parse_tree__prog_io__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeType_14, (MR_Integer) 0)));
#line 2125 "prog_io.m"
            MR_Word parse_tree__prog_io__V_22_22;

#line 2126 "prog_io.m"
            {
#line 2126 "prog_io.m"
              parse_tree__prog_io__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2126 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io__Type_15));
#line 2126 "prog_io.m"
            }
#line 2126 "prog_io.m"
            {
#line 2126 "prog_io.m"
              MR_Word base;
#line 2126 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2126 "prog_io.m"
              *parse_tree__prog_io__MaybeWithType_8 = base;
#line 2126 "prog_io.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_22_22));
#line 2126 "prog_io.m"
            }
#line 2125 "prog_io.m"
          }
#line 2120 "prog_io.m"
      }
#line 2131 "prog_io.m"
    else
#line 2132 "prog_io.m"
      {
#line 2132 "prog_io.m"
        *parse_tree__prog_io__BeforeWithTypeTerm_7 = parse_tree__prog_io__Term_6;
#line 2133 "prog_io.m"
        *parse_tree__prog_io__MaybeWithType_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[30]);
#line 2132 "prog_io.m"
      }
#line 2131 "prog_io.m"
  }
#line 2107 "prog_io.m"
}

#line 2078 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_determinism_suffix_4_p_0(
#line 2078 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_5,
#line 2078 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_6,
#line 2078 "prog_io.m"
  MR_Word * parse_tree__prog_io__BeforeDetismTerm_7,
#line 2078 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeMaybeDetism_8)
#line 2078 "prog_io.m"
{
#line 2100 "prog_io.m"
  {
#line 2100 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 2100 "prog_io.m"
    MR_Word parse_tree__prog_io__BeforeDetismTermPrime_11;
#line 2100 "prog_io.m"
    MR_Word parse_tree__prog_io__DetismTerm_12;
#line 2083 "prog_io.m"
    MR_Word parse_tree__prog_io__Args_9;
#line 2083 "prog_io.m"
    MR_Word parse_tree__prog_io__V_19_19;
#line 2083 "prog_io.m"
    MR_String parse_tree__prog_io__V_20_20;
#line 2083 "prog_io.m"
    MR_Word parse_tree__prog_io__V_21_21;
#line 2083 "prog_io.m"
    MR_Word parse_tree__prog_io__V_22_22;
#line 2083 "prog_io.m"
    MR_Word parse_tree__prog_io__V_10_10;

#line 2083 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 2083 "prog_io.m"
      {
#line 2083 "prog_io.m"
        parse_tree__prog_io__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_6, (MR_Integer) 0)));
#line 2083 "prog_io.m"
        parse_tree__prog_io__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_6, (MR_Integer) 1)));
#line 2083 "prog_io.m"
        parse_tree__prog_io__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_6, (MR_Integer) 2)));
#line 2083 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 2083 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2083 "prog_io.m"
          {
#line 2083 "prog_io.m"
            parse_tree__prog_io__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_19_19, (MR_Integer) 0)));
#line 2083 "prog_io.m"
            parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__V_20_20, (MR_String) "is") == 0);
#line 2083 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 2083 "prog_io.m"
              {
#line 2084 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 2084 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 2084 "prog_io.m"
                  {
#line 2084 "prog_io.m"
                    parse_tree__prog_io__BeforeDetismTermPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__Args_9, (MR_Integer) 0)));
#line 2084 "prog_io.m"
                    parse_tree__prog_io__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__Args_9, (MR_Integer) 1)));
#line 2084 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 2084 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 2084 "prog_io.m"
                      {
#line 2084 "prog_io.m"
                        parse_tree__prog_io__DetismTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, (MR_Integer) 0)));
#line 2084 "prog_io.m"
                        parse_tree__prog_io__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, (MR_Integer) 1)));
#line 2084 "prog_io.m"
                        parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2084 "prog_io.m"
                      }
#line 2084 "prog_io.m"
                  }
#line 2083 "prog_io.m"
              }
#line 2083 "prog_io.m"
          }
#line 2083 "prog_io.m"
      }
#line 2100 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 2086 "prog_io.m"
      {
#line 2092 "prog_io.m"
        MR_Word parse_tree__prog_io__Detism_15;
#line 2088 "prog_io.m"
        MR_String parse_tree__prog_io__DetismFunctor_13;
#line 2088 "prog_io.m"
        MR_Word parse_tree__prog_io__V_23_23;
#line 2088 "prog_io.m"
        MR_Word parse_tree__prog_io__V_24_24;
#line 2088 "prog_io.m"
        MR_Word parse_tree__prog_io__V_14_14;

#line 2086 "prog_io.m"
        *parse_tree__prog_io__BeforeDetismTerm_7 = parse_tree__prog_io__BeforeDetismTermPrime_11;
#line 2088 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__DetismTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 2088 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2088 "prog_io.m"
          {
#line 2088 "prog_io.m"
            parse_tree__prog_io__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__DetismTerm_12, (MR_Integer) 0)));
#line 2088 "prog_io.m"
            parse_tree__prog_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__DetismTerm_12, (MR_Integer) 1)));
#line 2088 "prog_io.m"
            parse_tree__prog_io__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__DetismTerm_12, (MR_Integer) 2)));
#line 2088 "prog_io.m"
            parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2088 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 2088 "prog_io.m"
              {
#line 2088 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 2088 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 2088 "prog_io.m"
                  {
#line 2088 "prog_io.m"
                    parse_tree__prog_io__DetismFunctor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_23_23, (MR_Integer) 0)));
#line 2089 "prog_io.m"
                    {
#line 2089 "prog_io.m"
                      parse_tree__prog_io__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io__DetismFunctor_13, &parse_tree__prog_io__Detism_15);
                    }
#line 2088 "prog_io.m"
                  }
#line 2088 "prog_io.m"
              }
#line 2088 "prog_io.m"
          }
#line 2092 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2091 "prog_io.m"
          {
#line 2091 "prog_io.m"
            MR_Word parse_tree__prog_io__V_25_25;

#line 2091 "prog_io.m"
            {
#line 2091 "prog_io.m"
              parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2091 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io__Detism_15));
#line 2091 "prog_io.m"
            }
#line 2091 "prog_io.m"
            {
#line 2091 "prog_io.m"
              MR_Word base;
#line 2091 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2091 "prog_io.m"
              *parse_tree__prog_io__MaybeMaybeDetism_8 = base;
#line 2091 "prog_io.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 2091 "prog_io.m"
            }
#line 2091 "prog_io.m"
          }
#line 2092 "prog_io.m"
        else
#line 2093 "prog_io.m"
          {
#line 2093 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 2093 "prog_io.m"
            MR_String parse_tree__prog_io__TermStr_16;
#line 2093 "prog_io.m"
            MR_Word parse_tree__prog_io__Pieces_17;
#line 2093 "prog_io.m"
            MR_Word parse_tree__prog_io__Spec_18;
#line 2093 "prog_io.m"
            MR_Word parse_tree__prog_io__V_28_28;
#line 2093 "prog_io.m"
            MR_Word parse_tree__prog_io__V_29_29;
#line 2093 "prog_io.m"
            MR_Word parse_tree__prog_io__V_38_38;
#line 2093 "prog_io.m"
            MR_Word parse_tree__prog_io__V_39_39;
#line 2093 "prog_io.m"
            MR_Word parse_tree__prog_io__V_40_40;
#line 2093 "prog_io.m"
            MR_Word parse_tree__prog_io__V_41_41;
#line 2093 "prog_io.m"
            MR_Word parse_tree__prog_io__V_42_42;
#line 2093 "prog_io.m"
            MR_Word parse_tree__prog_io__V_45_45;

#line 2093 "prog_io.m"
            {
#line 2093 "prog_io.m"
              parse_tree__prog_io__TermStr_16 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io__TypeCtorInfo_48_48, parse_tree__prog_io__VarSet_5, parse_tree__prog_io__Term_6);
            }
#line 2095 "prog_io.m"
            {
#line 2095 "prog_io.m"
              parse_tree__prog_io__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2095 "prog_io.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2095 "prog_io.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io__TermStr_16));
#line 2095 "prog_io.m"
            }
#line 2094 "prog_io.m"
            {
#line 2094 "prog_io.m"
              parse_tree__prog_io__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2094 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io__V_29_29));
#line 2094 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 2094 "prog_io.m"
            }
#line 2094 "prog_io.m"
            {
#line 2094 "prog_io.m"
              parse_tree__prog_io__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2094 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[148])));
#line 2094 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_17, 1) = ((MR_Box) (parse_tree__prog_io__V_28_28));
#line 2094 "prog_io.m"
            }
#line 2097 "prog_io.m"
            {
#line 2097 "prog_io.m"
              parse_tree__prog_io__V_40_40 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_48_48, parse_tree__prog_io__DetismTerm_12);
            }
#line 2097 "prog_io.m"
            {
#line 2097 "prog_io.m"
              parse_tree__prog_io__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2097 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_17));
#line 2097 "prog_io.m"
            }
#line 2097 "prog_io.m"
            {
#line 2097 "prog_io.m"
              parse_tree__prog_io__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2097 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io__V_42_42));
#line 2097 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2097 "prog_io.m"
            }
#line 2097 "prog_io.m"
            {
#line 2097 "prog_io.m"
              parse_tree__prog_io__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2097 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io__V_40_40));
#line 2097 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_39_39, 1) = ((MR_Box) (parse_tree__prog_io__V_41_41));
#line 2097 "prog_io.m"
            }
#line 2096 "prog_io.m"
            {
#line 2096 "prog_io.m"
              parse_tree__prog_io__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2096 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io__V_39_39));
#line 2096 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2096 "prog_io.m"
            }
#line 2096 "prog_io.m"
            {
#line 2096 "prog_io.m"
              parse_tree__prog_io__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2096 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2096 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2096 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io__V_38_38));
#line 2096 "prog_io.m"
            }
#line 2098 "prog_io.m"
            {
#line 2098 "prog_io.m"
              parse_tree__prog_io__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2098 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io__Spec_18));
#line 2098 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2098 "prog_io.m"
            }
#line 2098 "prog_io.m"
            {
#line 2098 "prog_io.m"
              MR_Word base;
#line 2098 "prog_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2098 "prog_io.m"
              *parse_tree__prog_io__MaybeMaybeDetism_8 = base;
#line 2098 "prog_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_45_45));
#line 2098 "prog_io.m"
            }
#line 2093 "prog_io.m"
          }
#line 2086 "prog_io.m"
      }
#line 2100 "prog_io.m"
    else
#line 2101 "prog_io.m"
      {
#line 2101 "prog_io.m"
        *parse_tree__prog_io__BeforeDetismTerm_7 = parse_tree__prog_io__Term_6;
#line 2102 "prog_io.m"
        *parse_tree__prog_io__MaybeMaybeDetism_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[29]);
#line 2101 "prog_io.m"
      }
#line 2100 "prog_io.m"
  }
#line 2078 "prog_io.m"
}

#line 1990 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__get_constraints_6_p_0(
#line 1990 "prog_io.m"
  MR_Word parse_tree__prog_io__QuantType_7,
#line 1990 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_8,
#line 1990 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_9,
#line 1990 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Attributes_0_23,
#line 1990 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Attributes_24,
#line 1990 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeClassInstConstraints_11)
#line 1990 "prog_io.m"
{
#line 2022 "prog_io.m"
  {
#line 2022 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__STATE_VARIABLE_Attributes_0_23)) == (MR_mktag((MR_Integer) 1)));
#line 2022 "prog_io.m"
    MR_Word parse_tree__prog_io__ConstraintsTerm_12;
#line 2022 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Attributes_25_25;
#line 1997 "prog_io.m"
    MR_Word parse_tree__prog_io__V_26_26;
#line 1997 "prog_io.m"
    MR_Word parse_tree__prog_io__V_27_27;
#line 1997 "prog_io.m"
    MR_Word parse_tree__prog_io__V_41_41;
#line 1999 "prog_io.m"
    MR_Word parse_tree__prog_io___Term_13;

#line 1997 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1997 "prog_io.m"
      {
#line 1997 "prog_io.m"
        parse_tree__prog_io__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Attributes_0_23, (MR_Integer) 0)));
#line 1997 "prog_io.m"
        parse_tree__prog_io__STATE_VARIABLE_Attributes_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Attributes_0_23, (MR_Integer) 1)));
#line 1999 "prog_io.m"
        parse_tree__prog_io__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, (MR_Integer) 0)));
#line 1999 "prog_io.m"
        parse_tree__prog_io___Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_26_26, (MR_Integer) 1)));
#line 1998 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_27_27)) == (MR_mktag((MR_Integer) 3)));
#line 1998 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1998 "prog_io.m"
          {
#line 1998 "prog_io.m"
            parse_tree__prog_io__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_27_27, (MR_Integer) 0)));
#line 1998 "prog_io.m"
            parse_tree__prog_io__ConstraintsTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_27_27, (MR_Integer) 1)));
#line 1998 "prog_io.m"
            parse_tree__prog_io__succeeded = (parse_tree__prog_io__QuantType_7 == parse_tree__prog_io__V_41_41);
#line 1998 "prog_io.m"
          }
#line 1997 "prog_io.m"
      }
#line 2022 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 2002 "prog_io.m"
      {
#line 2002 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeHeadConstraints_14;
#line 2002 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeTailConstraints_15;
#line 2017 "prog_io.m"
        MR_Word parse_tree__prog_io__HeadClassConstraints_16;
#line 2017 "prog_io.m"
        MR_Word parse_tree__prog_io__HeadInstConstraint_17;
#line 2017 "prog_io.m"
        MR_Word parse_tree__prog_io__TailClassConstraints_18;
#line 2017 "prog_io.m"
        MR_Word parse_tree__prog_io__TailInstConstraint_19;

#line 2001 "prog_io.m"
        {
#line 2001 "prog_io.m"
          parse_tree__prog_io_typeclass__parse_class_and_inst_constraints_4_p_0(parse_tree__prog_io__ModuleName_8, parse_tree__prog_io__VarSet_9, parse_tree__prog_io__ConstraintsTerm_12, &parse_tree__prog_io__MaybeHeadConstraints_14);
        }
#line 2005 "prog_io.m"
        {
#line 2005 "prog_io.m"
          parse_tree__prog_io__get_constraints_6_p_0(parse_tree__prog_io__QuantType_7, parse_tree__prog_io__ModuleName_8, parse_tree__prog_io__VarSet_9, parse_tree__prog_io__STATE_VARIABLE_Attributes_25_25, parse_tree__prog_io__STATE_VARIABLE_Attributes_24, &parse_tree__prog_io__MaybeTailConstraints_15);
        }
#line 2008 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeHeadConstraints_14)) == (MR_mktag((MR_Integer) 1)));
#line 2008 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2008 "prog_io.m"
          {
#line 2008 "prog_io.m"
            parse_tree__prog_io__HeadClassConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeHeadConstraints_14, (MR_Integer) 0)));
#line 2008 "prog_io.m"
            parse_tree__prog_io__HeadInstConstraint_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeHeadConstraints_14, (MR_Integer) 1)));
#line 2010 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeTailConstraints_15)) == (MR_mktag((MR_Integer) 1)));
#line 2010 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 2010 "prog_io.m"
              {
#line 2010 "prog_io.m"
                parse_tree__prog_io__TailClassConstraints_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeTailConstraints_15, (MR_Integer) 0)));
#line 2010 "prog_io.m"
                parse_tree__prog_io__TailInstConstraint_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeTailConstraints_15, (MR_Integer) 1)));
#line 2010 "prog_io.m"
              }
#line 2008 "prog_io.m"
          }
#line 2017 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2013 "prog_io.m"
          {
#line 2013 "prog_io.m"
            MR_Word parse_tree__prog_io__ClassConstraints_20;
#line 2013 "prog_io.m"
            MR_Word parse_tree__prog_io__InstConstraints_21;

#line 2013 "prog_io.m"
            {
#line 2013 "prog_io.m"
              parse_tree__prog_io__ClassConstraints_20 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, parse_tree__prog_io__HeadClassConstraints_16, parse_tree__prog_io__TailClassConstraints_18);
            }
#line 2014 "prog_io.m"
            {
#line 2014 "prog_io.m"
              parse_tree__prog_io__InstConstraints_21 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io__HeadInstConstraint_17, parse_tree__prog_io__TailInstConstraint_19);
            }
#line 2016 "prog_io.m"
            {
#line 2016 "prog_io.m"
              MR_Word base;
#line 2016 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2016 "prog_io.m"
              *parse_tree__prog_io__MaybeClassInstConstraints_11 = base;
#line 2016 "prog_io.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__ClassConstraints_20));
#line 2016 "prog_io.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__InstConstraints_21));
#line 2016 "prog_io.m"
            }
#line 2013 "prog_io.m"
          }
#line 2017 "prog_io.m"
        else
#line 2019 "prog_io.m"
          {
#line 2019 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_37_37 = (MR_Word) &parse_tree__prog_io_scalar_common_1[9];
#line 2019 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeInfo_38_38 = (MR_Word) &parse_tree__prog_io_scalar_common_2[1];
#line 2019 "prog_io.m"
            MR_Word parse_tree__prog_io__Specs_22;
#line 2019 "prog_io.m"
            MR_Word parse_tree__prog_io__V_29_29;
#line 2019 "prog_io.m"
            MR_Word parse_tree__prog_io__V_30_30;

#line 2018 "prog_io.m"
            {
#line 2018 "prog_io.m"
              parse_tree__prog_io__V_29_29 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io__TypeInfo_37_37, parse_tree__prog_io__TypeInfo_38_38, parse_tree__prog_io__MaybeHeadConstraints_14);
            }
#line 2018 "prog_io.m"
            {
#line 2018 "prog_io.m"
              parse_tree__prog_io__V_30_30 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io__TypeInfo_37_37, parse_tree__prog_io__TypeInfo_38_38, parse_tree__prog_io__MaybeTailConstraints_15);
            }
#line 2018 "prog_io.m"
            {
#line 2018 "prog_io.m"
              parse_tree__prog_io__Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__V_29_29, parse_tree__prog_io__V_30_30);
            }
#line 2020 "prog_io.m"
            {
#line 2020 "prog_io.m"
              MR_Word base;
#line 2020 "prog_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2020 "prog_io.m"
              *parse_tree__prog_io__MaybeClassInstConstraints_11 = base;
#line 2020 "prog_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_22));
#line 2020 "prog_io.m"
            }
#line 2019 "prog_io.m"
          }
#line 2002 "prog_io.m"
      }
#line 2022 "prog_io.m"
    else
#line 2023 "prog_io.m"
      {
#line 2023 "prog_io.m"
        MR_Word parse_tree__prog_io__V_32_32;

#line 2023 "prog_io.m"
        {
#line 2023 "prog_io.m"
          parse_tree__prog_io__V_32_32 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_io_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        }
#line 2023 "prog_io.m"
        {
#line 2023 "prog_io.m"
          MR_Word base;
#line 2023 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2023 "prog_io.m"
          *parse_tree__prog_io__MaybeClassInstConstraints_11 = base;
#line 2023 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2023 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 2023 "prog_io.m"
        }
#line 2023 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Attributes_24 = parse_tree__prog_io__STATE_VARIABLE_Attributes_0_23;
#line 2023 "prog_io.m"
      }
#line 2022 "prog_io.m"
  }
#line 1990 "prog_io.m"
}

#line 1968 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__get_class_context_and_inst_constraints_5_p_0_1(
#line 1968 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 1968 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 1968 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 1968 "prog_io.m"
{
#line 1968 "prog_io.m"
  {
#line 1968 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 1968 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_HeadVar__2_39;

#line 1968 "prog_io.m"
    {
#line 1968 "prog_io.m"
      parse_tree__prog_io__IntroducedFrom__pred__get_class_context_and_inst_constraints__1968__1_2_p_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_HeadVar__2_39);
    }
#line 1968 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__2_39));
#line 1968 "prog_io.m"
  }
#line 1968 "prog_io.m"
}

#line 1925 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__get_class_context_and_inst_constraints_5_p_0(
#line 1925 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_6,
#line 1925 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_7,
#line 1925 "prog_io.m"
  MR_Word parse_tree__prog_io__RevAttributes0_8,
#line 1925 "prog_io.m"
  MR_Word * parse_tree__prog_io__RevAttributes_9,
#line 1925 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeExistClassInstContext_10)
#line 1925 "prog_io.m"
{
#line 1930 "prog_io.m"
  {
#line 1930 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1930 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeInfo_37_37 = (MR_Word) &parse_tree__prog_io_scalar_common_2[0];
#line 1930 "prog_io.m"
    MR_Word parse_tree__prog_io__Attributes0_11;
#line 1930 "prog_io.m"
    MR_Word parse_tree__prog_io__Attributes1_12;
#line 1930 "prog_io.m"
    MR_Word parse_tree__prog_io__Attributes2_14;
#line 1930 "prog_io.m"
    MR_Word parse_tree__prog_io__ExistQVars0_15;
#line 1930 "prog_io.m"
    MR_Word parse_tree__prog_io__ExistQVars_16;
#line 1930 "prog_io.m"
    MR_Word parse_tree__prog_io__Attributes3_17;
#line 1930 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeUnivConstraints_18;
#line 1930 "prog_io.m"
    MR_Word parse_tree__prog_io__Attributes_19;
#line 1930 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeExistConstraints_20;
#line 1964 "prog_io.m"
    MR_Word parse_tree__prog_io___UnivQVars_13;
#line 1984 "prog_io.m"
    MR_Word parse_tree__prog_io__UnivConstraints_21;
#line 1984 "prog_io.m"
    MR_Word parse_tree__prog_io__UnivInstConstraints_22;
#line 1984 "prog_io.m"
    MR_Word parse_tree__prog_io__ExistConstraints_23;
#line 1984 "prog_io.m"
    MR_Word parse_tree__prog_io__ExistInstConstraints_24;

#line 1963 "prog_io.m"
    {
#line 1963 "prog_io.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_io__TypeInfo_37_37, parse_tree__prog_io__RevAttributes0_8, &parse_tree__prog_io__Attributes0_11);
    }
#line 1964 "prog_io.m"
    {
#line 1964 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 1, parse_tree__prog_io__Attributes0_11, &parse_tree__prog_io__Attributes1_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io___UnivQVars_13);
    }
#line 1966 "prog_io.m"
    {
#line 1966 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_113_117_97_110_116_95_118_97_114_115_95_95_91_50_93_95_48_6_p_0((MR_Integer) 0, parse_tree__prog_io__Attributes1_12, &parse_tree__prog_io__Attributes2_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__ExistQVars0_15);
    }
#line 1968 "prog_io.m"
    {
#line 1968 "prog_io.m"
      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[6], (MR_Word) &parse_tree__prog_io_scalar_common_1[7], (MR_Word) &parse_tree__prog_io_scalar_common_2[4], parse_tree__prog_io__ExistQVars0_15, &parse_tree__prog_io__ExistQVars_16);
    }
#line 1969 "prog_io.m"
    {
#line 1969 "prog_io.m"
      parse_tree__prog_io__get_constraints_6_p_0((MR_Integer) 1, parse_tree__prog_io__ModuleName_6, parse_tree__prog_io__VarSet_7, parse_tree__prog_io__Attributes2_14, &parse_tree__prog_io__Attributes3_17, &parse_tree__prog_io__MaybeUnivConstraints_18);
    }
#line 1971 "prog_io.m"
    {
#line 1971 "prog_io.m"
      parse_tree__prog_io__get_constraints_6_p_0((MR_Integer) 0, parse_tree__prog_io__ModuleName_6, parse_tree__prog_io__VarSet_7, parse_tree__prog_io__Attributes3_17, &parse_tree__prog_io__Attributes_19, &parse_tree__prog_io__MaybeExistConstraints_20);
    }
#line 1973 "prog_io.m"
    {
#line 1973 "prog_io.m"
      mercury__list__reverse_2_p_0(parse_tree__prog_io__TypeInfo_37_37, parse_tree__prog_io__Attributes_19, parse_tree__prog_io__RevAttributes_9);
    }
#line 1976 "prog_io.m"
    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeUnivConstraints_18)) == (MR_mktag((MR_Integer) 1)));
#line 1976 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1976 "prog_io.m"
      {
#line 1976 "prog_io.m"
        parse_tree__prog_io__UnivConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeUnivConstraints_18, (MR_Integer) 0)));
#line 1976 "prog_io.m"
        parse_tree__prog_io__UnivInstConstraints_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeUnivConstraints_18, (MR_Integer) 1)));
#line 1977 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeExistConstraints_20)) == (MR_mktag((MR_Integer) 1)));
#line 1977 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1977 "prog_io.m"
          {
#line 1977 "prog_io.m"
            parse_tree__prog_io__ExistConstraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeExistConstraints_20, (MR_Integer) 0)));
#line 1977 "prog_io.m"
            parse_tree__prog_io__ExistInstConstraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeExistConstraints_20, (MR_Integer) 1)));
#line 1977 "prog_io.m"
          }
#line 1976 "prog_io.m"
      }
#line 1984 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1979 "prog_io.m"
      {
#line 1979 "prog_io.m"
        MR_Word parse_tree__prog_io__ClassConstraints_25;
#line 1979 "prog_io.m"
        MR_Word parse_tree__prog_io__InstConstraints_26;

#line 1979 "prog_io.m"
        {
#line 1979 "prog_io.m"
          parse_tree__prog_io__ClassConstraints_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1979 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ClassConstraints_25, 0) = ((MR_Box) (parse_tree__prog_io__UnivConstraints_21));
#line 1979 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ClassConstraints_25, 1) = ((MR_Box) (parse_tree__prog_io__ExistConstraints_23));
#line 1979 "prog_io.m"
        }
#line 1980 "prog_io.m"
        {
#line 1980 "prog_io.m"
          parse_tree__prog_io__InstConstraints_26 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_scalar_common_1[8], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io__UnivInstConstraints_22, parse_tree__prog_io__ExistInstConstraints_24);
        }
#line 1982 "prog_io.m"
        {
#line 1982 "prog_io.m"
          MR_Word base;
#line 1982 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1982 "prog_io.m"
          *parse_tree__prog_io__MaybeExistClassInstContext_10 = base;
#line 1982 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__ExistQVars_16));
#line 1982 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__ClassConstraints_25));
#line 1982 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io__InstConstraints_26));
#line 1982 "prog_io.m"
        }
#line 1979 "prog_io.m"
      }
#line 1984 "prog_io.m"
    else
#line 1986 "prog_io.m"
      {
#line 1986 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeInfo_47_47 = (MR_Word) &parse_tree__prog_io_scalar_common_1[9];
#line 1986 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeInfo_48_48 = (MR_Word) &parse_tree__prog_io_scalar_common_2[1];
#line 1986 "prog_io.m"
        MR_Word parse_tree__prog_io__Specs_27;
#line 1986 "prog_io.m"
        MR_Word parse_tree__prog_io__V_35_35;
#line 1986 "prog_io.m"
        MR_Word parse_tree__prog_io__V_36_36;

#line 1985 "prog_io.m"
        {
#line 1985 "prog_io.m"
          parse_tree__prog_io__V_35_35 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io__TypeInfo_47_47, parse_tree__prog_io__TypeInfo_48_48, parse_tree__prog_io__MaybeUnivConstraints_18);
        }
#line 1985 "prog_io.m"
        {
#line 1985 "prog_io.m"
          parse_tree__prog_io__V_36_36 = parse_tree__prog_io_util__get_any_errors2_1_f_0(parse_tree__prog_io__TypeInfo_47_47, parse_tree__prog_io__TypeInfo_48_48, parse_tree__prog_io__MaybeExistConstraints_20);
        }
#line 1985 "prog_io.m"
        {
#line 1985 "prog_io.m"
          parse_tree__prog_io__Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__V_35_35, parse_tree__prog_io__V_36_36);
        }
#line 1987 "prog_io.m"
        {
#line 1987 "prog_io.m"
          MR_Word base;
#line 1987 "prog_io.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1987 "prog_io.m"
          *parse_tree__prog_io__MaybeExistClassInstContext_10 = base;
#line 1987 "prog_io.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_27));
#line 1987 "prog_io.m"
        }
#line 1986 "prog_io.m"
      }
#line 1930 "prog_io.m"
  }
#line 1925 "prog_io.m"
}

#line 1854 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_func_mode_decl_13_p_0_1(
#line 1854 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 1854 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 1854 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 1854 "prog_io.m"
{
#line 1854 "prog_io.m"
  {
#line 1854 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 1854 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_HeadVar__3_3;

#line 1854 "prog_io.m"
    {
#line 1854 "prog_io.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_HeadVar__3_3);
    }
#line 1854 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__3_3));
#line 1854 "prog_io.m"
  }
#line 1854 "prog_io.m"
}

#line 1841 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_func_mode_decl_13_p_0(
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__Functor_14,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__ArgTerms_15,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_16,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__FuncMode_17,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__RetModeTerm_18,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__FullTerm_19,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_20,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeDet_21,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__Condition_22,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes0_23,
#line 1841 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_24,
#line 1841 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_25,
#line 1841 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_26)
#line 1841 "prog_io.m"
{
#line 1896 "prog_io.m"
  {
#line 1896 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1896 "prog_io.m"
    MR_Word parse_tree__prog_io__ArgModes0_27;

#line 1849 "prog_io.m"
    {
#line 1849 "prog_io.m"
      parse_tree__prog_io__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io__ArgTerms_15, &parse_tree__prog_io__ArgModes0_27);
    }
#line 1896 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1851 "prog_io.m"
      {
#line 1851 "prog_io.m"
        MR_Word parse_tree__prog_io__Attributes_28;
#line 1851 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeConstraints_29;

#line 1850 "prog_io.m"
        {
#line 1850 "prog_io.m"
          parse_tree__prog_io__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io__ModuleName_16, parse_tree__prog_io__VarSet_20, parse_tree__prog_io__Attributes0_23, &parse_tree__prog_io__Attributes_28, &parse_tree__prog_io__MaybeConstraints_29);
        }
#line 1892 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeConstraints_29)) == (MR_mktag((MR_Integer) 0))))
#line 1893 "prog_io.m"
          {
#line 1893 "prog_io.m"
            MR_Word parse_tree__prog_io__Specs_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeConstraints_29, (MR_Integer) 0)));

#line 1894 "prog_io.m"
            {
#line 1894 "prog_io.m"
              MR_Word base;
#line 1894 "prog_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1894 "prog_io.m"
              *parse_tree__prog_io__MaybeItem_26 = base;
#line 1894 "prog_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_44));
#line 1894 "prog_io.m"
            }
#line 1893 "prog_io.m"
          }
#line 1892 "prog_io.m"
        else
#line 1853 "prog_io.m"
          {
#line 1853 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeCtorInfo_132_132;
#line 1853 "prog_io.m"
            MR_Word parse_tree__prog_io__InstConstraints_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeConstraints_29, (MR_Integer) 2)));
#line 1853 "prog_io.m"
            MR_Word parse_tree__prog_io__ArgModes_33;
#line 1853 "prog_io.m"
            MR_Word parse_tree__prog_io__V_47_47;
#line 1853 "prog_io.m"
            MR_Word parse_tree__prog_io__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeConstraints_29, (MR_Integer) 0)));
#line 1853 "prog_io.m"
            MR_Word parse_tree__prog_io__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeConstraints_29, (MR_Integer) 1)));
#line 1884 "prog_io.m"
            MR_Word parse_tree__prog_io__RetMode0_34;

#line 1854 "prog_io.m"
            {
#line 1854 "prog_io.m"
              parse_tree__prog_io__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1854 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_8[1]));
#line 1854 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io__parse_func_mode_decl_13_p_0_1));
#line 1854 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1854 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_47_47, 3) = ((MR_Box) (parse_tree__prog_io__InstConstraints_32));
#line 1854 "prog_io.m"
            }
#line 7715 "parse_tree.prog_io.c"
            parse_tree__prog_io__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1854 "prog_io.m"
            {
#line 1854 "prog_io.m"
              mercury__list__map_3_p_0(parse_tree__prog_io__TypeCtorInfo_132_132, parse_tree__prog_io__TypeCtorInfo_132_132, parse_tree__prog_io__V_47_47, parse_tree__prog_io__ArgModes0_27, &parse_tree__prog_io__ArgModes_33);
            }
#line 1857 "prog_io.m"
            {
#line 1857 "prog_io.m"
              parse_tree__prog_io__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0((MR_Integer) 0, parse_tree__prog_io__RetModeTerm_18, &parse_tree__prog_io__RetMode0_34);
            }
#line 1884 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1860 "prog_io.m"
              {
#line 1860 "prog_io.m"
                MR_Word parse_tree__prog_io__TypeCtorInfo_133_133;
#line 1860 "prog_io.m"
                MR_Word parse_tree__prog_io__RetMode_35;
#line 1860 "prog_io.m"
                MR_Word parse_tree__prog_io__InstVarSet_36;
#line 1860 "prog_io.m"
                MR_Word parse_tree__prog_io__ArgReturnModes_37;
#line 1860 "prog_io.m"
                MR_Word parse_tree__prog_io__V_49_49;

#line 1859 "prog_io.m"
                {
#line 1859 "prog_io.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io__InstConstraints_32, parse_tree__prog_io__RetMode0_34, &parse_tree__prog_io__RetMode_35);
                }
#line 7747 "parse_tree.prog_io.c"
                parse_tree__prog_io__TypeCtorInfo_133_133 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1861 "prog_io.m"
                {
#line 1861 "prog_io.m"
                  mercury__varset__coerce_2_p_0(parse_tree__prog_io__TypeCtorInfo_133_133, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io__VarSet_20, &parse_tree__prog_io__InstVarSet_36);
                }
#line 1862 "prog_io.m"
                {
#line 1862 "prog_io.m"
                  parse_tree__prog_io__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1862 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io__RetMode_35));
#line 1862 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1862 "prog_io.m"
                }
#line 1862 "prog_io.m"
                {
#line 1862 "prog_io.m"
                  parse_tree__prog_io__ArgReturnModes_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_132_132, parse_tree__prog_io__ArgModes_33, parse_tree__prog_io__V_49_49);
                }
#line 1864 "prog_io.m"
                {
#line 1864 "prog_io.m"
                  parse_tree__prog_io__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io__ArgReturnModes_37);
                }
#line 1873 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1869 "prog_io.m"
                  {
#line 1869 "prog_io.m"
                    MR_Word parse_tree__prog_io__ItemModeDecl_38;
#line 1869 "prog_io.m"
                    MR_Word parse_tree__prog_io__Item_39;
#line 1869 "prog_io.m"
                    MR_Word parse_tree__prog_io__MaybeItem0_40;

#line 1867 "prog_io.m"
                    {
#line 1867 "prog_io.m"
                      parse_tree__prog_io__ItemModeDecl_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1867 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_38, 0) = ((MR_Box) (parse_tree__prog_io__InstVarSet_36));
#line 1867 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[27])));
#line 1867 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_38, 2) = ((MR_Box) (parse_tree__prog_io__Functor_14));
#line 1867 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_38, 3) = ((MR_Box) (parse_tree__prog_io__ArgReturnModes_37));
#line 1867 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_38, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1867 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_38, 5) = ((MR_Box) (parse_tree__prog_io__MaybeDet_21));
#line 1867 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_38, 6) = ((MR_Box) (parse_tree__prog_io__Condition_22));
#line 1867 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_38, 7) = ((MR_Box) (parse_tree__prog_io__Context_24));
#line 1867 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_38, 8) = ((MR_Box) (parse_tree__prog_io__SeqNum_25));
#line 1867 "prog_io.m"
                    }
#line 1870 "prog_io.m"
                    {
#line 1870 "prog_io.m"
                      parse_tree__prog_io__Item_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1870 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1870 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_39, 1) = ((MR_Box) (parse_tree__prog_io__ItemModeDecl_38));
#line 1870 "prog_io.m"
                    }
#line 1871 "prog_io.m"
                    {
#line 1871 "prog_io.m"
                      parse_tree__prog_io__MaybeItem0_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1871 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem0_40, 0) = ((MR_Box) (parse_tree__prog_io__Item_39));
#line 1871 "prog_io.m"
                    }
#line 1872 "prog_io.m"
                    {
#line 1872 "prog_io.m"
                      parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__MaybeItem0_40, parse_tree__prog_io__Attributes_28, parse_tree__prog_io__MaybeItem_26);
#line 1872 "prog_io.m"
                      return;
                    }
#line 1869 "prog_io.m"
                  }
#line 1873 "prog_io.m"
                else
#line 1874 "prog_io.m"
                  {
#line 1874 "prog_io.m"
                    MR_String parse_tree__prog_io__FullTermStr_41;
#line 1874 "prog_io.m"
                    MR_Word parse_tree__prog_io__Pieces_42;
#line 1874 "prog_io.m"
                    MR_Word parse_tree__prog_io__Spec_43;
#line 1874 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_56_56;
#line 1874 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_59_59;
#line 1874 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_62_62;
#line 1874 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_64_64;
#line 1874 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_65_65;
#line 1874 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_74_74;
#line 1874 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_75_75;
#line 1874 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_76_76;
#line 1874 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_77_77;
#line 1874 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_78_78;
#line 1874 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_81_81;

#line 1874 "prog_io.m"
                    {
#line 1874 "prog_io.m"
                      parse_tree__prog_io__FullTermStr_41 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io__TypeCtorInfo_133_133, parse_tree__prog_io__VarSet_20, parse_tree__prog_io__FullTerm_19);
                    }
#line 1878 "prog_io.m"
                    {
#line 1878 "prog_io.m"
                      parse_tree__prog_io__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1878 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1878 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io__FullTermStr_41));
#line 1878 "prog_io.m"
                    }
#line 1877 "prog_io.m"
                    {
#line 1877 "prog_io.m"
                      parse_tree__prog_io__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1877 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io__V_65_65));
#line 1877 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 1877 "prog_io.m"
                    }
#line 1877 "prog_io.m"
                    {
#line 1877 "prog_io.m"
                      parse_tree__prog_io__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1877 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1877 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io__V_64_64));
#line 1877 "prog_io.m"
                    }
#line 1876 "prog_io.m"
                    {
#line 1876 "prog_io.m"
                      parse_tree__prog_io__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1876 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[145])));
#line 1876 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_59_59, 1) = ((MR_Box) (parse_tree__prog_io__V_62_62));
#line 1876 "prog_io.m"
                    }
#line 1875 "prog_io.m"
                    {
#line 1875 "prog_io.m"
                      parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1875 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[142])));
#line 1875 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io__V_59_59));
#line 1875 "prog_io.m"
                    }
#line 1875 "prog_io.m"
                    {
#line 1875 "prog_io.m"
                      parse_tree__prog_io__Pieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1875 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[139])));
#line 1875 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_42, 1) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 1875 "prog_io.m"
                    }
#line 1880 "prog_io.m"
                    {
#line 1880 "prog_io.m"
                      parse_tree__prog_io__V_76_76 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_133_133, parse_tree__prog_io__FullTerm_19);
                    }
#line 1881 "prog_io.m"
                    {
#line 1881 "prog_io.m"
                      parse_tree__prog_io__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1881 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_42));
#line 1881 "prog_io.m"
                    }
#line 1880 "prog_io.m"
                    {
#line 1880 "prog_io.m"
                      parse_tree__prog_io__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1880 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io__V_78_78));
#line 1880 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1880 "prog_io.m"
                    }
#line 1881 "prog_io.m"
                    {
#line 1881 "prog_io.m"
                      parse_tree__prog_io__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1881 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io__V_76_76));
#line 1881 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_75_75, 1) = ((MR_Box) (parse_tree__prog_io__V_77_77));
#line 1881 "prog_io.m"
                    }
#line 1879 "prog_io.m"
                    {
#line 1879 "prog_io.m"
                      parse_tree__prog_io__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1879 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io__V_75_75));
#line 1879 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1879 "prog_io.m"
                    }
#line 1879 "prog_io.m"
                    {
#line 1879 "prog_io.m"
                      parse_tree__prog_io__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1879 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1879 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1879 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_43, 2) = ((MR_Box) (parse_tree__prog_io__V_74_74));
#line 1879 "prog_io.m"
                    }
#line 1882 "prog_io.m"
                    {
#line 1882 "prog_io.m"
                      parse_tree__prog_io__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1882 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io__Spec_43));
#line 1882 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1882 "prog_io.m"
                    }
#line 1882 "prog_io.m"
                    {
#line 1882 "prog_io.m"
                      MR_Word base;
#line 1882 "prog_io.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1882 "prog_io.m"
                      *parse_tree__prog_io__MaybeItem_26 = base;
#line 1882 "prog_io.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_81_81));
#line 1882 "prog_io.m"
                    }
#line 1874 "prog_io.m"
                  }
#line 1860 "prog_io.m"
              }
#line 1884 "prog_io.m"
            else
#line 1886 "prog_io.m"
              {
#line 1886 "prog_io.m"
                MR_Word parse_tree__prog_io__V_93_93;
#line 1886 "prog_io.m"
                MR_Word parse_tree__prog_io__V_94_94;
#line 1886 "prog_io.m"
                MR_Word parse_tree__prog_io__V_95_95;
#line 1886 "prog_io.m"
                MR_Word parse_tree__prog_io__V_100_100;
#line 1886 "prog_io.m"
                MR_Word parse_tree__prog_io__Spec_127;

#line 1888 "prog_io.m"
                {
#line 1888 "prog_io.m"
                  parse_tree__prog_io__V_95_95 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__RetModeTerm_18);
                }
#line 1889 "prog_io.m"
                {
#line 1889 "prog_io.m"
                  parse_tree__prog_io__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1889 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_94_94, 0) = ((MR_Box) (parse_tree__prog_io__V_95_95));
#line 1889 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[146])));
#line 1889 "prog_io.m"
                }
#line 1887 "prog_io.m"
                {
#line 1887 "prog_io.m"
                  parse_tree__prog_io__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1887 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io__V_94_94));
#line 1887 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1887 "prog_io.m"
                }
#line 1887 "prog_io.m"
                {
#line 1887 "prog_io.m"
                  parse_tree__prog_io__Spec_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1887 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1887 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1887 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_127, 2) = ((MR_Box) (parse_tree__prog_io__V_93_93));
#line 1887 "prog_io.m"
                }
#line 1890 "prog_io.m"
                {
#line 1890 "prog_io.m"
                  parse_tree__prog_io__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1890 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io__Spec_127));
#line 1890 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1890 "prog_io.m"
                }
#line 1890 "prog_io.m"
                {
#line 1890 "prog_io.m"
                  MR_Word base;
#line 1890 "prog_io.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1890 "prog_io.m"
                  *parse_tree__prog_io__MaybeItem_26 = base;
#line 1890 "prog_io.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_100_100));
#line 1890 "prog_io.m"
                }
#line 1886 "prog_io.m"
              }
#line 1853 "prog_io.m"
          }
#line 1851 "prog_io.m"
      }
#line 1896 "prog_io.m"
    else
#line 1898 "prog_io.m"
      {
#line 1898 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeCtorInfo_137_137 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1898 "prog_io.m"
        MR_String parse_tree__prog_io__FuncModeStr_45;
#line 1898 "prog_io.m"
        MR_Word parse_tree__prog_io__V_104_104;
#line 1898 "prog_io.m"
        MR_Word parse_tree__prog_io__V_107_107;
#line 1898 "prog_io.m"
        MR_Word parse_tree__prog_io__V_108_108;
#line 1898 "prog_io.m"
        MR_Word parse_tree__prog_io__V_117_117;
#line 1898 "prog_io.m"
        MR_Word parse_tree__prog_io__V_118_118;
#line 1898 "prog_io.m"
        MR_Word parse_tree__prog_io__V_119_119;
#line 1898 "prog_io.m"
        MR_Word parse_tree__prog_io__V_120_120;
#line 1898 "prog_io.m"
        MR_Word parse_tree__prog_io__V_121_121;
#line 1898 "prog_io.m"
        MR_Word parse_tree__prog_io__V_124_124;
#line 1898 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_128;
#line 1898 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_129;

#line 1898 "prog_io.m"
        {
#line 1898 "prog_io.m"
          parse_tree__prog_io__FuncModeStr_45 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io__TypeCtorInfo_137_137, parse_tree__prog_io__VarSet_20, parse_tree__prog_io__FuncMode_17);
        }
#line 1901 "prog_io.m"
        {
#line 1901 "prog_io.m"
          parse_tree__prog_io__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1901 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1901 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_108_108, 1) = ((MR_Box) (parse_tree__prog_io__FuncModeStr_45));
#line 1901 "prog_io.m"
        }
#line 1900 "prog_io.m"
        {
#line 1900 "prog_io.m"
          parse_tree__prog_io__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1900 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io__V_108_108));
#line 1900 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 1900 "prog_io.m"
        }
#line 1899 "prog_io.m"
        {
#line 1899 "prog_io.m"
          parse_tree__prog_io__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1899 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_104_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[147])));
#line 1899 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_104_104, 1) = ((MR_Box) (parse_tree__prog_io__V_107_107));
#line 1899 "prog_io.m"
        }
#line 1899 "prog_io.m"
        {
#line 1899 "prog_io.m"
          parse_tree__prog_io__Pieces_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1899 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[132])));
#line 1899 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_128, 1) = ((MR_Box) (parse_tree__prog_io__V_104_104));
#line 1899 "prog_io.m"
        }
#line 1903 "prog_io.m"
        {
#line 1903 "prog_io.m"
          parse_tree__prog_io__V_119_119 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_137_137, parse_tree__prog_io__FuncMode_17);
        }
#line 1903 "prog_io.m"
        {
#line 1903 "prog_io.m"
          parse_tree__prog_io__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1903 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_121_121, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_128));
#line 1903 "prog_io.m"
        }
#line 1903 "prog_io.m"
        {
#line 1903 "prog_io.m"
          parse_tree__prog_io__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1903 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_120_120, 0) = ((MR_Box) (parse_tree__prog_io__V_121_121));
#line 1903 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1903 "prog_io.m"
        }
#line 1903 "prog_io.m"
        {
#line 1903 "prog_io.m"
          parse_tree__prog_io__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1903 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_118_118, 0) = ((MR_Box) (parse_tree__prog_io__V_119_119));
#line 1903 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_118_118, 1) = ((MR_Box) (parse_tree__prog_io__V_120_120));
#line 1903 "prog_io.m"
        }
#line 1902 "prog_io.m"
        {
#line 1902 "prog_io.m"
          parse_tree__prog_io__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1902 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_117_117, 0) = ((MR_Box) (parse_tree__prog_io__V_118_118));
#line 1902 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1902 "prog_io.m"
        }
#line 1902 "prog_io.m"
        {
#line 1902 "prog_io.m"
          parse_tree__prog_io__Spec_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1902 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1902 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1902 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_129, 2) = ((MR_Box) (parse_tree__prog_io__V_117_117));
#line 1902 "prog_io.m"
        }
#line 1904 "prog_io.m"
        {
#line 1904 "prog_io.m"
          parse_tree__prog_io__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1904 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io__Spec_129));
#line 1904 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1904 "prog_io.m"
        }
#line 1904 "prog_io.m"
        {
#line 1904 "prog_io.m"
          MR_Word base;
#line 1904 "prog_io.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1904 "prog_io.m"
          *parse_tree__prog_io__MaybeItem_26 = base;
#line 1904 "prog_io.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_124_124));
#line 1904 "prog_io.m"
        }
#line 1898 "prog_io.m"
      }
#line 1896 "prog_io.m"
  }
#line 1841 "prog_io.m"
}

#line 1798 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_pred_mode_decl_12_p_0_1(
#line 1798 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 1798 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 1798 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 1798 "prog_io.m"
{
#line 1798 "prog_io.m"
  {
#line 1798 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 1798 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_HeadVar__3_3;

#line 1798 "prog_io.m"
    {
#line 1798 "prog_io.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_HeadVar__3_3);
    }
#line 1798 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__3_3));
#line 1798 "prog_io.m"
  }
#line 1798 "prog_io.m"
}

#line 1785 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_pred_mode_decl_12_p_0(
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__Functor_13,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__ArgTerms_14,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_15,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__PredModeTerm_16,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_17,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__WithInst_18,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeDet_19,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__Condition_20,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes0_21,
#line 1785 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_22,
#line 1785 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_23,
#line 1785 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_24)
#line 1785 "prog_io.m"
{
#line 1832 "prog_io.m"
  {
#line 1832 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1832 "prog_io.m"
    MR_Word parse_tree__prog_io__ArgModes0_25;

#line 1793 "prog_io.m"
    {
#line 1793 "prog_io.m"
      parse_tree__prog_io__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io__ArgTerms_14, &parse_tree__prog_io__ArgModes0_25);
    }
#line 1832 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1795 "prog_io.m"
      {
#line 1795 "prog_io.m"
        MR_Word parse_tree__prog_io__Attributes_26;
#line 1795 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeConstraints_27;

#line 1794 "prog_io.m"
        {
#line 1794 "prog_io.m"
          parse_tree__prog_io__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io__ModuleName_15, parse_tree__prog_io__VarSet_17, parse_tree__prog_io__Attributes0_21, &parse_tree__prog_io__Attributes_26, &parse_tree__prog_io__MaybeConstraints_27);
        }
#line 1828 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeConstraints_27)) == (MR_mktag((MR_Integer) 0))))
#line 1829 "prog_io.m"
          {
#line 1829 "prog_io.m"
            MR_Word parse_tree__prog_io__Specs_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeConstraints_27, (MR_Integer) 0)));

#line 1830 "prog_io.m"
            {
#line 1830 "prog_io.m"
              MR_Word base;
#line 1830 "prog_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1830 "prog_io.m"
              *parse_tree__prog_io__MaybeItem_24 = base;
#line 1830 "prog_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_41));
#line 1830 "prog_io.m"
            }
#line 1829 "prog_io.m"
          }
#line 1828 "prog_io.m"
        else
#line 1797 "prog_io.m"
          {
#line 1797 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeCtorInfo_100_100;
#line 1797 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeCtorInfo_101_101;
#line 1797 "prog_io.m"
            MR_Word parse_tree__prog_io__InstConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeConstraints_27, (MR_Integer) 2)));
#line 1797 "prog_io.m"
            MR_Word parse_tree__prog_io__ArgModes_31;
#line 1797 "prog_io.m"
            MR_Word parse_tree__prog_io__ProgVarSet_32;
#line 1797 "prog_io.m"
            MR_Word parse_tree__prog_io__V_43_43;
#line 1797 "prog_io.m"
            MR_Word parse_tree__prog_io__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeConstraints_27, (MR_Integer) 0)));
#line 1797 "prog_io.m"
            MR_Word parse_tree__prog_io__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeConstraints_27, (MR_Integer) 1)));

#line 1798 "prog_io.m"
            {
#line 1798 "prog_io.m"
              parse_tree__prog_io__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1798 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_8[1]));
#line 1798 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io__parse_pred_mode_decl_12_p_0_1));
#line 1798 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1798 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_43_43, 3) = ((MR_Box) (parse_tree__prog_io__InstConstraints_30));
#line 1798 "prog_io.m"
            }
#line 8396 "parse_tree.prog_io.c"
            parse_tree__prog_io__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1798 "prog_io.m"
            {
#line 1798 "prog_io.m"
              mercury__list__map_3_p_0(parse_tree__prog_io__TypeCtorInfo_100_100, parse_tree__prog_io__TypeCtorInfo_100_100, parse_tree__prog_io__V_43_43, parse_tree__prog_io__ArgModes0_25, &parse_tree__prog_io__ArgModes_31);
            }
#line 8403 "parse_tree.prog_io.c"
            parse_tree__prog_io__TypeCtorInfo_101_101 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1800 "prog_io.m"
            {
#line 1800 "prog_io.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io__TypeCtorInfo_101_101, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io__VarSet_17, &parse_tree__prog_io__ProgVarSet_32);
            }
#line 1801 "prog_io.m"
            {
#line 1801 "prog_io.m"
              parse_tree__prog_io__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io__ArgModes_31);
            }
#line 1817 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1810 "prog_io.m"
              {
#line 1810 "prog_io.m"
                MR_Word parse_tree__prog_io__PredOrFunc_33;
#line 1810 "prog_io.m"
                MR_Word parse_tree__prog_io__ItemModeDecl_35;
#line 1810 "prog_io.m"
                MR_Word parse_tree__prog_io__Item_36;
#line 1810 "prog_io.m"
                MR_Word parse_tree__prog_io__MaybeItem0_37;

#line 1805 "prog_io.m"
                if ((parse_tree__prog_io__WithInst_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1803 "prog_io.m"
                  {
#line 1804 "prog_io.m"
                    parse_tree__prog_io__PredOrFunc_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[26]);
#line 1803 "prog_io.m"
                  }
#line 1805 "prog_io.m"
                else
#line 1809 "prog_io.m"
                  parse_tree__prog_io__PredOrFunc_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1811 "prog_io.m"
                {
#line 1811 "prog_io.m"
                  parse_tree__prog_io__ItemModeDecl_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1811 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_35, 0) = ((MR_Box) (parse_tree__prog_io__ProgVarSet_32));
#line 1811 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_35, 1) = ((MR_Box) (parse_tree__prog_io__PredOrFunc_33));
#line 1811 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_35, 2) = ((MR_Box) (parse_tree__prog_io__Functor_13));
#line 1811 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_35, 3) = ((MR_Box) (parse_tree__prog_io__ArgModes_31));
#line 1811 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_35, 4) = ((MR_Box) (parse_tree__prog_io__WithInst_18));
#line 1811 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_35, 5) = ((MR_Box) (parse_tree__prog_io__MaybeDet_19));
#line 1811 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_35, 6) = ((MR_Box) (parse_tree__prog_io__Condition_20));
#line 1811 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_35, 7) = ((MR_Box) (parse_tree__prog_io__Context_22));
#line 1811 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModeDecl_35, 8) = ((MR_Box) (parse_tree__prog_io__SeqNum_23));
#line 1811 "prog_io.m"
                }
#line 1814 "prog_io.m"
                {
#line 1814 "prog_io.m"
                  parse_tree__prog_io__Item_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1814 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1814 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_36, 1) = ((MR_Box) (parse_tree__prog_io__ItemModeDecl_35));
#line 1814 "prog_io.m"
                }
#line 1815 "prog_io.m"
                {
#line 1815 "prog_io.m"
                  parse_tree__prog_io__MaybeItem0_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem0_37, 0) = ((MR_Box) (parse_tree__prog_io__Item_36));
#line 1815 "prog_io.m"
                }
#line 1816 "prog_io.m"
                {
#line 1816 "prog_io.m"
                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__MaybeItem0_37, parse_tree__prog_io__Attributes_26, parse_tree__prog_io__MaybeItem_24);
#line 1816 "prog_io.m"
                  return;
                }
#line 1810 "prog_io.m"
              }
#line 1817 "prog_io.m"
            else
#line 1818 "prog_io.m"
              {
#line 1818 "prog_io.m"
                MR_String parse_tree__prog_io__PredModeTermStr_38;
#line 1818 "prog_io.m"
                MR_Word parse_tree__prog_io__Pieces_39;
#line 1818 "prog_io.m"
                MR_Word parse_tree__prog_io__Spec_40;
#line 1818 "prog_io.m"
                MR_Word parse_tree__prog_io__V_47_47;
#line 1818 "prog_io.m"
                MR_Word parse_tree__prog_io__V_50_50;
#line 1818 "prog_io.m"
                MR_Word parse_tree__prog_io__V_53_53;
#line 1818 "prog_io.m"
                MR_Word parse_tree__prog_io__V_55_55;
#line 1818 "prog_io.m"
                MR_Word parse_tree__prog_io__V_56_56;
#line 1818 "prog_io.m"
                MR_Word parse_tree__prog_io__V_65_65;
#line 1818 "prog_io.m"
                MR_Word parse_tree__prog_io__V_66_66;
#line 1818 "prog_io.m"
                MR_Word parse_tree__prog_io__V_67_67;
#line 1818 "prog_io.m"
                MR_Word parse_tree__prog_io__V_68_68;
#line 1818 "prog_io.m"
                MR_Word parse_tree__prog_io__V_69_69;
#line 1818 "prog_io.m"
                MR_Word parse_tree__prog_io__V_72_72;

#line 1818 "prog_io.m"
                {
#line 1818 "prog_io.m"
                  parse_tree__prog_io__PredModeTermStr_38 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io__TypeCtorInfo_101_101, parse_tree__prog_io__VarSet_17, parse_tree__prog_io__PredModeTerm_16);
                }
#line 1822 "prog_io.m"
                {
#line 1822 "prog_io.m"
                  parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1822 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1822 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io__PredModeTermStr_38));
#line 1822 "prog_io.m"
                }
#line 1821 "prog_io.m"
                {
#line 1821 "prog_io.m"
                  parse_tree__prog_io__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1821 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 1821 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 1821 "prog_io.m"
                }
#line 1821 "prog_io.m"
                {
#line 1821 "prog_io.m"
                  parse_tree__prog_io__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1821 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1821 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_53_53, 1) = ((MR_Box) (parse_tree__prog_io__V_55_55));
#line 1821 "prog_io.m"
                }
#line 1820 "prog_io.m"
                {
#line 1820 "prog_io.m"
                  parse_tree__prog_io__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1820 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[143])));
#line 1820 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io__V_53_53));
#line 1820 "prog_io.m"
                }
#line 1819 "prog_io.m"
                {
#line 1819 "prog_io.m"
                  parse_tree__prog_io__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[142])));
#line 1819 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io__V_50_50));
#line 1819 "prog_io.m"
                }
#line 1819 "prog_io.m"
                {
#line 1819 "prog_io.m"
                  parse_tree__prog_io__Pieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[139])));
#line 1819 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_39, 1) = ((MR_Box) (parse_tree__prog_io__V_47_47));
#line 1819 "prog_io.m"
                }
#line 1824 "prog_io.m"
                {
#line 1824 "prog_io.m"
                  parse_tree__prog_io__V_67_67 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_101_101, parse_tree__prog_io__PredModeTerm_16);
                }
#line 1825 "prog_io.m"
                {
#line 1825 "prog_io.m"
                  parse_tree__prog_io__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1825 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_39));
#line 1825 "prog_io.m"
                }
#line 1824 "prog_io.m"
                {
#line 1824 "prog_io.m"
                  parse_tree__prog_io__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1824 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io__V_69_69));
#line 1824 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1824 "prog_io.m"
                }
#line 1825 "prog_io.m"
                {
#line 1825 "prog_io.m"
                  parse_tree__prog_io__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1825 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io__V_67_67));
#line 1825 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_66_66, 1) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 1825 "prog_io.m"
                }
#line 1823 "prog_io.m"
                {
#line 1823 "prog_io.m"
                  parse_tree__prog_io__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1823 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io__V_66_66));
#line 1823 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1823 "prog_io.m"
                }
#line 1823 "prog_io.m"
                {
#line 1823 "prog_io.m"
                  parse_tree__prog_io__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1823 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1823 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1823 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_40, 2) = ((MR_Box) (parse_tree__prog_io__V_65_65));
#line 1823 "prog_io.m"
                }
#line 1826 "prog_io.m"
                {
#line 1826 "prog_io.m"
                  parse_tree__prog_io__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1826 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io__Spec_40));
#line 1826 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1826 "prog_io.m"
                }
#line 1826 "prog_io.m"
                {
#line 1826 "prog_io.m"
                  MR_Word base;
#line 1826 "prog_io.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1826 "prog_io.m"
                  *parse_tree__prog_io__MaybeItem_24 = base;
#line 1826 "prog_io.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_72_72));
#line 1826 "prog_io.m"
                }
#line 1818 "prog_io.m"
              }
#line 1797 "prog_io.m"
          }
#line 1795 "prog_io.m"
      }
#line 1832 "prog_io.m"
    else
#line 1833 "prog_io.m"
      {
#line 1833 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeCtorInfo_104_104 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1833 "prog_io.m"
        MR_Word parse_tree__prog_io__V_76_76;
#line 1833 "prog_io.m"
        MR_Word parse_tree__prog_io__V_77_77;
#line 1833 "prog_io.m"
        MR_Word parse_tree__prog_io__V_86_86;
#line 1833 "prog_io.m"
        MR_Word parse_tree__prog_io__V_87_87;
#line 1833 "prog_io.m"
        MR_Word parse_tree__prog_io__V_88_88;
#line 1833 "prog_io.m"
        MR_Word parse_tree__prog_io__V_89_89;
#line 1833 "prog_io.m"
        MR_Word parse_tree__prog_io__V_90_90;
#line 1833 "prog_io.m"
        MR_Word parse_tree__prog_io__V_93_93;
#line 1833 "prog_io.m"
        MR_String parse_tree__prog_io__PredModeTermStr_95;
#line 1833 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_96;
#line 1833 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_97;

#line 1833 "prog_io.m"
        {
#line 1833 "prog_io.m"
          parse_tree__prog_io__PredModeTermStr_95 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io__TypeCtorInfo_104_104, parse_tree__prog_io__VarSet_17, parse_tree__prog_io__PredModeTerm_16);
        }
#line 1835 "prog_io.m"
        {
#line 1835 "prog_io.m"
          parse_tree__prog_io__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1835 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1835 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io__PredModeTermStr_95));
#line 1835 "prog_io.m"
        }
#line 1834 "prog_io.m"
        {
#line 1834 "prog_io.m"
          parse_tree__prog_io__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1834 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io__V_77_77));
#line 1834 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 1834 "prog_io.m"
        }
#line 1834 "prog_io.m"
        {
#line 1834 "prog_io.m"
          parse_tree__prog_io__Pieces_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1834 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[144])));
#line 1834 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_96, 1) = ((MR_Box) (parse_tree__prog_io__V_76_76));
#line 1834 "prog_io.m"
        }
#line 1837 "prog_io.m"
        {
#line 1837 "prog_io.m"
          parse_tree__prog_io__V_88_88 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_104_104, parse_tree__prog_io__PredModeTerm_16);
        }
#line 1837 "prog_io.m"
        {
#line 1837 "prog_io.m"
          parse_tree__prog_io__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1837 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_96));
#line 1837 "prog_io.m"
        }
#line 1837 "prog_io.m"
        {
#line 1837 "prog_io.m"
          parse_tree__prog_io__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1837 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io__V_90_90));
#line 1837 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1837 "prog_io.m"
        }
#line 1837 "prog_io.m"
        {
#line 1837 "prog_io.m"
          parse_tree__prog_io__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1837 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io__V_88_88));
#line 1837 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io__V_89_89));
#line 1837 "prog_io.m"
        }
#line 1836 "prog_io.m"
        {
#line 1836 "prog_io.m"
          parse_tree__prog_io__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1836 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io__V_87_87));
#line 1836 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1836 "prog_io.m"
        }
#line 1836 "prog_io.m"
        {
#line 1836 "prog_io.m"
          parse_tree__prog_io__Spec_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1836 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1836 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1836 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_97, 2) = ((MR_Box) (parse_tree__prog_io__V_86_86));
#line 1836 "prog_io.m"
        }
#line 1838 "prog_io.m"
        {
#line 1838 "prog_io.m"
          parse_tree__prog_io__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1838 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io__Spec_97));
#line 1838 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1838 "prog_io.m"
        }
#line 1838 "prog_io.m"
        {
#line 1838 "prog_io.m"
          MR_Word base;
#line 1838 "prog_io.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1838 "prog_io.m"
          *parse_tree__prog_io__MaybeItem_24 = base;
#line 1838 "prog_io.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_93_93));
#line 1838 "prog_io.m"
        }
#line 1833 "prog_io.m"
      }
#line 1832 "prog_io.m"
  }
#line 1785 "prog_io.m"
}

#line 1745 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_mode_decl_base_10_p_0(
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_11,
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_12,
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_13,
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__Condition_14,
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_15,
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__WithInst_16,
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeDet_17,
#line 1745 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_18,
#line 1745 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_19,
#line 1745 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_20)
#line 1745 "prog_io.m"
{
#line 1770 "prog_io.m"
  {
#line 1770 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded = (parse_tree__prog_io__WithInst_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1770 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeSugaredFuncTerm_21;
#line 1770 "prog_io.m"
    MR_Word parse_tree__prog_io__ReturnTypeTerm_22;
#line 1752 "prog_io.m"
    MR_Word parse_tree__prog_io__V_30_30;
#line 1752 "prog_io.m"
    MR_String parse_tree__prog_io__V_31_31;
#line 1752 "prog_io.m"
    MR_Word parse_tree__prog_io__V_32_32;
#line 1752 "prog_io.m"
    MR_Word parse_tree__prog_io__V_33_33;
#line 1752 "prog_io.m"
    MR_Word parse_tree__prog_io__V_34_34;
#line 1753 "prog_io.m"
    MR_Word parse_tree__prog_io__V_23_23;

#line 1752 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1752 "prog_io.m"
      {
#line 1753 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Term_13)) == (MR_mktag((MR_Integer) 0)));
#line 1753 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1753 "prog_io.m"
          {
#line 1753 "prog_io.m"
            parse_tree__prog_io__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_13, (MR_Integer) 0)));
#line 1753 "prog_io.m"
            parse_tree__prog_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_13, (MR_Integer) 1)));
#line 1753 "prog_io.m"
            parse_tree__prog_io__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_13, (MR_Integer) 2)));
#line 1753 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 1753 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1753 "prog_io.m"
              {
#line 1753 "prog_io.m"
                parse_tree__prog_io__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_30_30, (MR_Integer) 0)));
#line 1753 "prog_io.m"
                parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__V_31_31, (MR_String) "=") == 0);
#line 1752 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1752 "prog_io.m"
                  {
#line 1753 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 1753 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1753 "prog_io.m"
                      {
#line 1753 "prog_io.m"
                        parse_tree__prog_io__MaybeSugaredFuncTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, (MR_Integer) 0)));
#line 1753 "prog_io.m"
                        parse_tree__prog_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, (MR_Integer) 1)));
#line 1754 "prog_io.m"
                        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1754 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1754 "prog_io.m"
                          {
#line 1754 "prog_io.m"
                            parse_tree__prog_io__ReturnTypeTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, (MR_Integer) 0)));
#line 1754 "prog_io.m"
                            parse_tree__prog_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_33_33, (MR_Integer) 1)));
#line 1754 "prog_io.m"
                            parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1754 "prog_io.m"
                          }
#line 1753 "prog_io.m"
                      }
#line 1752 "prog_io.m"
                  }
#line 1753 "prog_io.m"
              }
#line 1753 "prog_io.m"
          }
#line 1752 "prog_io.m"
      }
#line 1770 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1756 "prog_io.m"
      {
#line 1756 "prog_io.m"
        MR_Word parse_tree__prog_io__FuncTerm_24;
#line 1756 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeFunctorArgs_26;

#line 1756 "prog_io.m"
        {
#line 1756 "prog_io.m"
          parse_tree__prog_io__FuncTerm_24 = parse_tree__prog_io__desugar_field_access_1_f_0(parse_tree__prog_io__MaybeSugaredFuncTerm_21);
        }
#line 1759 "prog_io.m"
        {
#line 1759 "prog_io.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__FuncTerm_24, parse_tree__prog_io__VarSet_12, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[87]), &parse_tree__prog_io__MaybeFunctorArgs_26);
        }
#line 1764 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeFunctorArgs_26)) == (MR_mktag((MR_Integer) 0))))
#line 1762 "prog_io.m"
          {
#line 1762 "prog_io.m"
            MR_Word parse_tree__prog_io__Specs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeFunctorArgs_26, (MR_Integer) 0)));

#line 1763 "prog_io.m"
            {
#line 1763 "prog_io.m"
              MR_Word base;
#line 1763 "prog_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1763 "prog_io.m"
              *parse_tree__prog_io__MaybeItem_20 = base;
#line 1763 "prog_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_27));
#line 1763 "prog_io.m"
            }
#line 1762 "prog_io.m"
          }
#line 1764 "prog_io.m"
        else
#line 1765 "prog_io.m"
          {
#line 1765 "prog_io.m"
            MR_Word parse_tree__prog_io__Functor_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeFunctorArgs_26, (MR_Integer) 0)));
#line 1765 "prog_io.m"
            MR_Word parse_tree__prog_io__ArgTerms_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeFunctorArgs_26, (MR_Integer) 1)));

#line 1766 "prog_io.m"
            {
#line 1766 "prog_io.m"
              parse_tree__prog_io__parse_func_mode_decl_13_p_0(parse_tree__prog_io__Functor_28, parse_tree__prog_io__ArgTerms_29, parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__FuncTerm_24, parse_tree__prog_io__ReturnTypeTerm_22, parse_tree__prog_io__Term_13, parse_tree__prog_io__VarSet_12, parse_tree__prog_io__MaybeDet_17, parse_tree__prog_io__Condition_14, parse_tree__prog_io__Attributes_15, parse_tree__prog_io__Context_18, parse_tree__prog_io__SeqNum_19, parse_tree__prog_io__MaybeItem_20);
#line 1766 "prog_io.m"
              return;
            }
#line 1765 "prog_io.m"
          }
#line 1756 "prog_io.m"
      }
#line 1770 "prog_io.m"
    else
#line 1771 "prog_io.m"
      {
#line 1771 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeFunctorArgs_60;

#line 1772 "prog_io.m"
        {
#line 1772 "prog_io.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__Term_13, parse_tree__prog_io__VarSet_12, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[88]), &parse_tree__prog_io__MaybeFunctorArgs_60);
        }
#line 1777 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeFunctorArgs_60)) == (MR_mktag((MR_Integer) 0))))
#line 1775 "prog_io.m"
          {
#line 1775 "prog_io.m"
            MR_Word parse_tree__prog_io__Specs_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeFunctorArgs_60, (MR_Integer) 0)));

#line 1776 "prog_io.m"
            {
#line 1776 "prog_io.m"
              MR_Word base;
#line 1776 "prog_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1776 "prog_io.m"
              *parse_tree__prog_io__MaybeItem_20 = base;
#line 1776 "prog_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_53));
#line 1776 "prog_io.m"
            }
#line 1775 "prog_io.m"
          }
#line 1777 "prog_io.m"
        else
#line 1778 "prog_io.m"
          {
#line 1778 "prog_io.m"
            MR_Word parse_tree__prog_io__Functor_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeFunctorArgs_60, (MR_Integer) 0)));
#line 1778 "prog_io.m"
            MR_Word parse_tree__prog_io__ArgTerms_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeFunctorArgs_60, (MR_Integer) 1)));

#line 1779 "prog_io.m"
            {
#line 1779 "prog_io.m"
              parse_tree__prog_io__parse_pred_mode_decl_12_p_0(parse_tree__prog_io__Functor_54, parse_tree__prog_io__ArgTerms_55, parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__Term_13, parse_tree__prog_io__VarSet_12, parse_tree__prog_io__WithInst_16, parse_tree__prog_io__MaybeDet_17, parse_tree__prog_io__Condition_14, parse_tree__prog_io__Attributes_15, parse_tree__prog_io__Context_18, parse_tree__prog_io__SeqNum_19, parse_tree__prog_io__MaybeItem_20);
#line 1779 "prog_io.m"
              return;
            }
#line 1778 "prog_io.m"
          }
#line 1771 "prog_io.m"
      }
#line 1770 "prog_io.m"
  }
#line 1745 "prog_io.m"
}

#line 1710 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_mode_decl_7_p_0(
#line 1710 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_8,
#line 1710 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_9,
#line 1710 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_10,
#line 1710 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_11,
#line 1710 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_12,
#line 1710 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_13,
#line 1710 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_14)
#line 1710 "prog_io.m"
{
#line 1714 "prog_io.m"
  {
#line 1714 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1714 "prog_io.m"
    MR_Word parse_tree__prog_io__BeforeCondTerm_15;
#line 1714 "prog_io.m"
    MR_Word parse_tree__prog_io__Condition_16;
#line 1714 "prog_io.m"
    MR_Word parse_tree__prog_io__BeforeDetismTerm_17;
#line 1714 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeMaybeDetism_18;
#line 1714 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeWithInst_20;
#line 1714 "prog_io.m"
    MR_Word parse_tree__prog_io__BaseTerm_21;
#line 2156 "prog_io.m"
    MR_Word parse_tree__prog_io__BeforeWithInstTermPrime_60;
#line 2156 "prog_io.m"
    MR_Word parse_tree__prog_io__InstTerm_61;
#line 2143 "prog_io.m"
    MR_Word parse_tree__prog_io__V_66_66;
#line 2143 "prog_io.m"
    MR_String parse_tree__prog_io__V_67_67;
#line 2143 "prog_io.m"
    MR_Word parse_tree__prog_io__V_68_68;
#line 2143 "prog_io.m"
    MR_Word parse_tree__prog_io__V_69_69;
#line 2143 "prog_io.m"
    MR_Word parse_tree__prog_io__V_70_70;
#line 2143 "prog_io.m"
    MR_Word parse_tree__prog_io__V_62_62;
#line 1739 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeDetism_22;
#line 1739 "prog_io.m"
    MR_Word parse_tree__prog_io__WithInst_23;

#line 1715 "prog_io.m"
    {
#line 1715 "prog_io.m"
      parse_tree__prog_io_util__parse_condition_suffix_3_p_0(parse_tree__prog_io__Term_10, &parse_tree__prog_io__BeforeCondTerm_15, &parse_tree__prog_io__Condition_16);
    }
#line 1716 "prog_io.m"
    {
#line 1716 "prog_io.m"
      parse_tree__prog_io__parse_determinism_suffix_4_p_0(parse_tree__prog_io__VarSet_9, parse_tree__prog_io__BeforeCondTerm_15, &parse_tree__prog_io__BeforeDetismTerm_17, &parse_tree__prog_io__MaybeMaybeDetism_18);
    }
#line 2143 "prog_io.m"
    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__BeforeDetismTerm_17)) == (MR_mktag((MR_Integer) 0)));
#line 2143 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 2143 "prog_io.m"
      {
#line 2143 "prog_io.m"
        parse_tree__prog_io__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__BeforeDetismTerm_17, (MR_Integer) 0)));
#line 2143 "prog_io.m"
        parse_tree__prog_io__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__BeforeDetismTerm_17, (MR_Integer) 1)));
#line 2143 "prog_io.m"
        parse_tree__prog_io__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__BeforeDetismTerm_17, (MR_Integer) 2)));
#line 2143 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_66_66)) == (MR_mktag((MR_Integer) 0)));
#line 2143 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2143 "prog_io.m"
          {
#line 2143 "prog_io.m"
            parse_tree__prog_io__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_66_66, (MR_Integer) 0)));
#line 2143 "prog_io.m"
            parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__V_67_67, (MR_String) "with_inst") == 0);
#line 2143 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 2143 "prog_io.m"
              {
#line 2143 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_68_68)) == (MR_mktag((MR_Integer) 1)));
#line 2143 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 2143 "prog_io.m"
                  {
#line 2143 "prog_io.m"
                    parse_tree__prog_io__BeforeWithInstTermPrime_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, (MR_Integer) 0)));
#line 2143 "prog_io.m"
                    parse_tree__prog_io__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, (MR_Integer) 1)));
#line 2144 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 2144 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 2144 "prog_io.m"
                      {
#line 2144 "prog_io.m"
                        parse_tree__prog_io__InstTerm_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_69_69, (MR_Integer) 0)));
#line 2144 "prog_io.m"
                        parse_tree__prog_io__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_69_69, (MR_Integer) 1)));
#line 2144 "prog_io.m"
                        parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2144 "prog_io.m"
                      }
#line 2143 "prog_io.m"
                  }
#line 2143 "prog_io.m"
              }
#line 2143 "prog_io.m"
          }
#line 2143 "prog_io.m"
      }
#line 2156 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 2146 "prog_io.m"
      {
#line 2149 "prog_io.m"
        MR_Word parse_tree__prog_io__Inst_63;

#line 2146 "prog_io.m"
        parse_tree__prog_io__BaseTerm_21 = parse_tree__prog_io__BeforeWithInstTermPrime_60;
#line 2147 "prog_io.m"
        {
#line 2147 "prog_io.m"
          parse_tree__prog_io__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io__InstTerm_61, &parse_tree__prog_io__Inst_63);
        }
#line 2149 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 2148 "prog_io.m"
          {
#line 2148 "prog_io.m"
            MR_Word parse_tree__prog_io__V_72_72;

#line 2148 "prog_io.m"
            {
#line 2148 "prog_io.m"
              parse_tree__prog_io__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2148 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io__Inst_63));
#line 2148 "prog_io.m"
            }
#line 2148 "prog_io.m"
            {
#line 2148 "prog_io.m"
              parse_tree__prog_io__MaybeWithInst_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2148 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeWithInst_20, 0) = ((MR_Box) (parse_tree__prog_io__V_72_72));
#line 2148 "prog_io.m"
            }
#line 2148 "prog_io.m"
          }
#line 2149 "prog_io.m"
        else
#line 2151 "prog_io.m"
          {
#line 2151 "prog_io.m"
            MR_Word parse_tree__prog_io__Spec_65;
#line 2151 "prog_io.m"
            MR_Word parse_tree__prog_io__V_86_86;
#line 2151 "prog_io.m"
            MR_Word parse_tree__prog_io__V_87_87;
#line 2151 "prog_io.m"
            MR_Word parse_tree__prog_io__V_88_88;
#line 2151 "prog_io.m"
            MR_Word parse_tree__prog_io__V_93_93;

#line 2153 "prog_io.m"
            {
#line 2153 "prog_io.m"
              parse_tree__prog_io__V_88_88 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__InstTerm_61);
            }
#line 2153 "prog_io.m"
            {
#line 2153 "prog_io.m"
              parse_tree__prog_io__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2153 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io__V_88_88));
#line 2153 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[141])));
#line 2153 "prog_io.m"
            }
#line 2152 "prog_io.m"
            {
#line 2152 "prog_io.m"
              parse_tree__prog_io__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2152 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io__V_87_87));
#line 2152 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2152 "prog_io.m"
            }
#line 2152 "prog_io.m"
            {
#line 2152 "prog_io.m"
              parse_tree__prog_io__Spec_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2152 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2152 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2152 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_65, 2) = ((MR_Box) (parse_tree__prog_io__V_86_86));
#line 2152 "prog_io.m"
            }
#line 2154 "prog_io.m"
            {
#line 2154 "prog_io.m"
              parse_tree__prog_io__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2154 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io__Spec_65));
#line 2154 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2154 "prog_io.m"
            }
#line 2154 "prog_io.m"
            {
#line 2154 "prog_io.m"
              parse_tree__prog_io__MaybeWithInst_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2154 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeWithInst_20, 0) = ((MR_Box) (parse_tree__prog_io__V_93_93));
#line 2154 "prog_io.m"
            }
#line 2151 "prog_io.m"
          }
#line 2146 "prog_io.m"
      }
#line 2156 "prog_io.m"
    else
#line 2157 "prog_io.m"
      {
#line 2157 "prog_io.m"
        parse_tree__prog_io__BaseTerm_21 = parse_tree__prog_io__BeforeDetismTerm_17;
#line 2158 "prog_io.m"
        parse_tree__prog_io__MaybeWithInst_20 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_3[25]);
#line 2157 "prog_io.m"
      }
#line 1722 "prog_io.m"
    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeMaybeDetism_18)) == (MR_mktag((MR_Integer) 1)));
#line 1722 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1722 "prog_io.m"
      {
#line 1722 "prog_io.m"
        parse_tree__prog_io__MaybeDetism_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeMaybeDetism_18, (MR_Integer) 0)));
#line 1723 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeWithInst_20)) == (MR_mktag((MR_Integer) 1)));
#line 1723 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1723 "prog_io.m"
          parse_tree__prog_io__WithInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeWithInst_20, (MR_Integer) 0)));
#line 1722 "prog_io.m"
      }
#line 1739 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1735 "prog_io.m"
      {
#line 1726 "prog_io.m"
        MR_Word parse_tree__prog_io__V_24_24;
#line 1727 "prog_io.m"
        MR_Word parse_tree__prog_io__V_25_25;

#line 1726 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeDetism_22)) == (MR_mktag((MR_Integer) 1)));
#line 1726 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1726 "prog_io.m"
          {
#line 1726 "prog_io.m"
            parse_tree__prog_io__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeDetism_22, (MR_Integer) 0)));
#line 1727 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__WithInst_23)) == (MR_mktag((MR_Integer) 1)));
#line 1727 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1727 "prog_io.m"
              parse_tree__prog_io__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__WithInst_23, (MR_Integer) 0)));
#line 1726 "prog_io.m"
          }
#line 1735 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1730 "prog_io.m"
          {
#line 1730 "prog_io.m"
            MR_Word parse_tree__prog_io__Spec_27;
#line 1730 "prog_io.m"
            MR_Word parse_tree__prog_io__V_42_42;
#line 1730 "prog_io.m"
            MR_Word parse_tree__prog_io__V_43_43;
#line 1730 "prog_io.m"
            MR_Word parse_tree__prog_io__V_44_44;
#line 1730 "prog_io.m"
            MR_Word parse_tree__prog_io__V_49_49;

#line 1732 "prog_io.m"
            {
#line 1732 "prog_io.m"
              parse_tree__prog_io__V_44_44 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__BeforeCondTerm_15);
            }
#line 1733 "prog_io.m"
            {
#line 1733 "prog_io.m"
              parse_tree__prog_io__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1733 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io__V_44_44));
#line 1733 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[121])));
#line 1733 "prog_io.m"
            }
#line 1731 "prog_io.m"
            {
#line 1731 "prog_io.m"
              parse_tree__prog_io__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1731 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io__V_43_43));
#line 1731 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1731 "prog_io.m"
            }
#line 1731 "prog_io.m"
            {
#line 1731 "prog_io.m"
              parse_tree__prog_io__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1731 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1731 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1731 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_27, 2) = ((MR_Box) (parse_tree__prog_io__V_42_42));
#line 1731 "prog_io.m"
            }
#line 1734 "prog_io.m"
            {
#line 1734 "prog_io.m"
              parse_tree__prog_io__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1734 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io__Spec_27));
#line 1734 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1734 "prog_io.m"
            }
#line 1734 "prog_io.m"
            {
#line 1734 "prog_io.m"
              MR_Word base;
#line 1734 "prog_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1734 "prog_io.m"
              *parse_tree__prog_io__MaybeItem_14 = base;
#line 1734 "prog_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 1734 "prog_io.m"
            }
#line 1730 "prog_io.m"
          }
#line 1735 "prog_io.m"
        else
#line 1736 "prog_io.m"
          {
#line 1736 "prog_io.m"
            parse_tree__prog_io__parse_mode_decl_base_10_p_0(parse_tree__prog_io__ModuleName_8, parse_tree__prog_io__VarSet_9, parse_tree__prog_io__BaseTerm_21, parse_tree__prog_io__Condition_16, parse_tree__prog_io__Attributes_11, parse_tree__prog_io__WithInst_23, parse_tree__prog_io__MaybeDetism_22, parse_tree__prog_io__Context_12, parse_tree__prog_io__SeqNum_13, parse_tree__prog_io__MaybeItem_14);
#line 1736 "prog_io.m"
            return;
          }
#line 1735 "prog_io.m"
      }
#line 1739 "prog_io.m"
    else
#line 1741 "prog_io.m"
      {
#line 1741 "prog_io.m"
        MR_Word parse_tree__prog_io__Specs_28;
#line 1741 "prog_io.m"
        MR_Word parse_tree__prog_io__V_51_51;
#line 1741 "prog_io.m"
        MR_Word parse_tree__prog_io__V_52_52;

#line 1741 "prog_io.m"
        {
#line 1741 "prog_io.m"
          parse_tree__prog_io__V_51_51 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_scalar_common_1[2], parse_tree__prog_io__MaybeMaybeDetism_18);
        }
#line 1741 "prog_io.m"
        {
#line 1741 "prog_io.m"
          parse_tree__prog_io__V_52_52 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_scalar_common_1[3], parse_tree__prog_io__MaybeWithInst_20);
        }
#line 1740 "prog_io.m"
        {
#line 1740 "prog_io.m"
          parse_tree__prog_io__Specs_28 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__V_51_51, parse_tree__prog_io__V_52_52);
        }
#line 1742 "prog_io.m"
        {
#line 1742 "prog_io.m"
          MR_Word base;
#line 1742 "prog_io.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1742 "prog_io.m"
          *parse_tree__prog_io__MaybeItem_14 = base;
#line 1742 "prog_io.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_28));
#line 1742 "prog_io.m"
        }
#line 1741 "prog_io.m"
      }
#line 1714 "prog_io.m"
  }
#line 1710 "prog_io.m"
}

#line 1691 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__verify_type_and_mode_list_2_2_p_0(
#line 1691 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1,
#line 1691 "prog_io.m"
  MR_Word parse_tree__prog_io__First_2)
#line 1691 "prog_io.m"
{
#line 1694 "prog_io.m"
  while (MR_TRUE)
#line 1694 "prog_io.m"
    {
#line 1694 "prog_io.m"
      /* tailcall optimized into a loop */
#line 1694 "prog_io.m"
      {
#line 1694 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;

#line 1694 "prog_io.m"
        if ((parse_tree__prog_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1694 "prog_io.m"
          parse_tree__prog_io__succeeded = MR_TRUE;
#line 1694 "prog_io.m"
        else
#line 1695 "prog_io.m"
          {
#line 1695 "prog_io.m"
            MR_Word parse_tree__prog_io__Head_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1695 "prog_io.m"
            MR_Word parse_tree__prog_io__Tail_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));

#line 1699 "prog_io.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io__Head_4)) == (MR_mktag((MR_Integer) 1))))
#line 1701 "prog_io.m"
              {
#line 1701 "prog_io.m"
                MR_Word parse_tree__prog_io__V_11_11;
#line 1701 "prog_io.m"
                MR_Word parse_tree__prog_io__V_12_12;

#line 1701 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__First_2)) == (MR_mktag((MR_Integer) 1)));
#line 1701 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1701 "prog_io.m"
                  {
#line 1701 "prog_io.m"
                    parse_tree__prog_io__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__First_2, (MR_Integer) 0)));
#line 1701 "prog_io.m"
                    parse_tree__prog_io__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__First_2, (MR_Integer) 1)));
#line 1701 "prog_io.m"
                  }
#line 1701 "prog_io.m"
              }
#line 1699 "prog_io.m"
            else
#line 1698 "prog_io.m"
              {
#line 1698 "prog_io.m"
                MR_Word parse_tree__prog_io__V_8_8;

#line 1698 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__First_2)) == (MR_mktag((MR_Integer) 0)));
#line 1698 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1698 "prog_io.m"
                  parse_tree__prog_io__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__First_2, (MR_Integer) 0)));
#line 1698 "prog_io.m"
              }
#line 1695 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1703 "prog_io.m"
              {
#line 1703 "prog_io.m"
                /* direct tailcall eliminated */
#line 1703 "prog_io.m"
                {
#line 1703 "prog_io.m"
                  MR_Word parse_tree__prog_io__HeadVar__1__tmp_copy_1 = parse_tree__prog_io__Tail_5;

#line 1703 "prog_io.m"
                  parse_tree__prog_io__HeadVar__1_1 = parse_tree__prog_io__HeadVar__1__tmp_copy_1;
#line 1703 "prog_io.m"
                }
#line 1703 "prog_io.m"
                continue;
#line 1703 "prog_io.m"
              }
#line 1695 "prog_io.m"
          }
#line 1694 "prog_io.m"
        return parse_tree__prog_io__succeeded;
#line 1694 "prog_io.m"
      }
#line 1694 "prog_io.m"
      break;
#line 1694 "prog_io.m"
    }
#line 1691 "prog_io.m"
}

#line 1685 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__verify_type_and_mode_list_1_p_0(
#line 1685 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__1_1)
#line 1685 "prog_io.m"
{
#line 1687 "prog_io.m"
  {
#line 1687 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1687 "prog_io.m"
    if ((parse_tree__prog_io__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1687 "prog_io.m"
      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1687 "prog_io.m"
    else
#line 1688 "prog_io.m"
      {
#line 1688 "prog_io.m"
        MR_Word parse_tree__prog_io__First_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 0)));
#line 1688 "prog_io.m"
        MR_Word parse_tree__prog_io__Rest_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__1_1, (MR_Integer) 1)));

#line 1689 "prog_io.m"
        {
#line 1689 "prog_io.m"
          return parse_tree__prog_io__succeeded = parse_tree__prog_io__verify_type_and_mode_list_2_2_p_0(parse_tree__prog_io__Rest_3, parse_tree__prog_io__First_2);
        }
#line 1688 "prog_io.m"
      }
#line 1687 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1687 "prog_io.m"
  }
#line 1685 "prog_io.m"
}

#line 1668 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__parse_type_and_mode_3_p_0(
#line 1668 "prog_io.m"
  MR_Word parse_tree__prog_io__InstConstraints_4,
#line 1668 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_5,
#line 1668 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeTypeAndMode_6)
#line 1668 "prog_io.m"
{
#line 1677 "prog_io.m"
  {
#line 1677 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1677 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeTerm_7;
#line 1677 "prog_io.m"
    MR_Word parse_tree__prog_io__ModeTerm_8;
#line 1672 "prog_io.m"
    MR_Word parse_tree__prog_io__V_13_13;
#line 1672 "prog_io.m"
    MR_String parse_tree__prog_io__V_14_14;
#line 1672 "prog_io.m"
    MR_Word parse_tree__prog_io__V_15_15;
#line 1672 "prog_io.m"
    MR_Word parse_tree__prog_io__V_16_16;
#line 1672 "prog_io.m"
    MR_Word parse_tree__prog_io__V_17_17;
#line 1672 "prog_io.m"
    MR_Word parse_tree__prog_io___Context_9;

#line 1672 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1672 "prog_io.m"
      {
#line 1672 "prog_io.m"
        parse_tree__prog_io__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_5, (MR_Integer) 0)));
#line 1672 "prog_io.m"
        parse_tree__prog_io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_5, (MR_Integer) 1)));
#line 1672 "prog_io.m"
        parse_tree__prog_io___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_5, (MR_Integer) 2)));
#line 1672 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 1672 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1672 "prog_io.m"
          {
#line 1672 "prog_io.m"
            parse_tree__prog_io__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_13_13, (MR_Integer) 0)));
#line 1672 "prog_io.m"
            parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__V_14_14, (MR_String) "::") == 0);
#line 1672 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1672 "prog_io.m"
              {
#line 1672 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1672 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1672 "prog_io.m"
                  {
#line 1672 "prog_io.m"
                    parse_tree__prog_io__TypeTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_15_15, (MR_Integer) 0)));
#line 1672 "prog_io.m"
                    parse_tree__prog_io__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_15_15, (MR_Integer) 1)));
#line 1672 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1672 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1672 "prog_io.m"
                      {
#line 1672 "prog_io.m"
                        parse_tree__prog_io__ModeTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, (MR_Integer) 0)));
#line 1672 "prog_io.m"
                        parse_tree__prog_io__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, (MR_Integer) 1)));
#line 1672 "prog_io.m"
                        parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1672 "prog_io.m"
                      }
#line 1672 "prog_io.m"
                  }
#line 1672 "prog_io.m"
              }
#line 1672 "prog_io.m"
          }
#line 1672 "prog_io.m"
      }
#line 1677 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1673 "prog_io.m"
      {
#line 1673 "prog_io.m"
        MR_Word parse_tree__prog_io__Type_10;
#line 1673 "prog_io.m"
        MR_Word parse_tree__prog_io__Mode0_11;
#line 1673 "prog_io.m"
        MR_Word parse_tree__prog_io__Mode_12;
#line 1673 "prog_io.m"
        MR_Word parse_tree__prog_io__V_18_18;

#line 1673 "prog_io.m"
        {
#line 1673 "prog_io.m"
          parse_tree__prog_io__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io__TypeTerm_7, &parse_tree__prog_io__Type_10);
        }
#line 1673 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1673 "prog_io.m"
          {
#line 1674 "prog_io.m"
            parse_tree__prog_io__V_18_18 = (MR_Integer) 0;
#line 1674 "prog_io.m"
            {
#line 1674 "prog_io.m"
              parse_tree__prog_io__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io__V_18_18, parse_tree__prog_io__ModeTerm_8, &parse_tree__prog_io__Mode0_11);
            }
#line 1673 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1673 "prog_io.m"
              {
#line 1675 "prog_io.m"
                {
#line 1675 "prog_io.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io__InstConstraints_4, parse_tree__prog_io__Mode0_11, &parse_tree__prog_io__Mode_12);
                }
#line 1676 "prog_io.m"
                {
#line 1676 "prog_io.m"
                  MR_Word base;
#line 1676 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1676 "prog_io.m"
                  *parse_tree__prog_io__MaybeTypeAndMode_6 = base;
#line 1676 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Type_10));
#line 1676 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__Mode_12));
#line 1676 "prog_io.m"
                }
#line 1676 "prog_io.m"
                parse_tree__prog_io__succeeded = MR_TRUE;
#line 1673 "prog_io.m"
              }
#line 1673 "prog_io.m"
          }
#line 1673 "prog_io.m"
      }
#line 1677 "prog_io.m"
    else
#line 1678 "prog_io.m"
      {
#line 1678 "prog_io.m"
        MR_Word parse_tree__prog_io__Type_19;

#line 1678 "prog_io.m"
        {
#line 1678 "prog_io.m"
          parse_tree__prog_io__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io__Term_5, &parse_tree__prog_io__Type_19);
        }
#line 1678 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1678 "prog_io.m"
          {
#line 1679 "prog_io.m"
            {
#line 1679 "prog_io.m"
              MR_Word base;
#line 1679 "prog_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1679 "prog_io.m"
              *parse_tree__prog_io__MaybeTypeAndMode_6 = base;
#line 1679 "prog_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Type_19));
#line 1679 "prog_io.m"
            }
#line 1679 "prog_io.m"
            parse_tree__prog_io__succeeded = MR_TRUE;
#line 1678 "prog_io.m"
          }
#line 1678 "prog_io.m"
      }
#line 1677 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1677 "prog_io.m"
  }
#line 1668 "prog_io.m"
}

#line 1660 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__parse_type_and_mode_list_3_p_0(
#line 1660 "prog_io.m"
  MR_Word parse_tree__prog_io__InstConstraints_1,
#line 1660 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadVar__2_2,
#line 1660 "prog_io.m"
  MR_Word * parse_tree__prog_io__HeadVar__3_3)
#line 1660 "prog_io.m"
{
#line 1663 "prog_io.m"
  {
#line 1663 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1663 "prog_io.m"
    if ((parse_tree__prog_io__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1663 "prog_io.m"
      {
#line 1663 "prog_io.m"
        *parse_tree__prog_io__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1663 "prog_io.m"
        parse_tree__prog_io__succeeded = MR_TRUE;
#line 1663 "prog_io.m"
      }
#line 1663 "prog_io.m"
    else
#line 1664 "prog_io.m"
      {
#line 1664 "prog_io.m"
        MR_Word parse_tree__prog_io__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 0)));
#line 1664 "prog_io.m"
        MR_Word parse_tree__prog_io__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__HeadVar__2_2, (MR_Integer) 1)));
#line 1664 "prog_io.m"
        MR_Word parse_tree__prog_io__H_8;
#line 1664 "prog_io.m"
        MR_Word parse_tree__prog_io__T_9;
#line 1677 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeTerm_13;
#line 1677 "prog_io.m"
        MR_Word parse_tree__prog_io__ModeTerm_14;
#line 1672 "prog_io.m"
        MR_Word parse_tree__prog_io__V_19_19;
#line 1672 "prog_io.m"
        MR_String parse_tree__prog_io__V_20_20;
#line 1672 "prog_io.m"
        MR_Word parse_tree__prog_io__V_21_21;
#line 1672 "prog_io.m"
        MR_Word parse_tree__prog_io__V_22_22;
#line 1672 "prog_io.m"
        MR_Word parse_tree__prog_io__V_23_23;
#line 1672 "prog_io.m"
        MR_Word parse_tree__prog_io___Context_15;

#line 1672 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__H0_6)) == (MR_mktag((MR_Integer) 0)));
#line 1672 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1672 "prog_io.m"
          {
#line 1672 "prog_io.m"
            parse_tree__prog_io__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__H0_6, (MR_Integer) 0)));
#line 1672 "prog_io.m"
            parse_tree__prog_io__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__H0_6, (MR_Integer) 1)));
#line 1672 "prog_io.m"
            parse_tree__prog_io___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__H0_6, (MR_Integer) 2)));
#line 1672 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 1672 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1672 "prog_io.m"
              {
#line 1672 "prog_io.m"
                parse_tree__prog_io__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_19_19, (MR_Integer) 0)));
#line 1672 "prog_io.m"
                parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__V_20_20, (MR_String) "::") == 0);
#line 1672 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1672 "prog_io.m"
                  {
#line 1672 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 1672 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1672 "prog_io.m"
                      {
#line 1672 "prog_io.m"
                        parse_tree__prog_io__TypeTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, (MR_Integer) 0)));
#line 1672 "prog_io.m"
                        parse_tree__prog_io__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, (MR_Integer) 1)));
#line 1672 "prog_io.m"
                        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 1672 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1672 "prog_io.m"
                          {
#line 1672 "prog_io.m"
                            parse_tree__prog_io__ModeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_22_22, (MR_Integer) 0)));
#line 1672 "prog_io.m"
                            parse_tree__prog_io__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_22_22, (MR_Integer) 1)));
#line 1672 "prog_io.m"
                            parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1672 "prog_io.m"
                          }
#line 1672 "prog_io.m"
                      }
#line 1672 "prog_io.m"
                  }
#line 1672 "prog_io.m"
              }
#line 1672 "prog_io.m"
          }
#line 1677 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1673 "prog_io.m"
          {
#line 1673 "prog_io.m"
            MR_Word parse_tree__prog_io__Type_16;
#line 1673 "prog_io.m"
            MR_Word parse_tree__prog_io__Mode0_17;
#line 1673 "prog_io.m"
            MR_Word parse_tree__prog_io__Mode_18;
#line 1673 "prog_io.m"
            MR_Word parse_tree__prog_io__V_24_24;

#line 1673 "prog_io.m"
            {
#line 1673 "prog_io.m"
              parse_tree__prog_io__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io__TypeTerm_13, &parse_tree__prog_io__Type_16);
            }
#line 1673 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1673 "prog_io.m"
              {
#line 1674 "prog_io.m"
                parse_tree__prog_io__V_24_24 = (MR_Integer) 0;
#line 1674 "prog_io.m"
                {
#line 1674 "prog_io.m"
                  parse_tree__prog_io__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io__V_24_24, parse_tree__prog_io__ModeTerm_14, &parse_tree__prog_io__Mode0_17);
                }
#line 1673 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1673 "prog_io.m"
                  {
#line 1675 "prog_io.m"
                    {
#line 1675 "prog_io.m"
                      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io__InstConstraints_1, parse_tree__prog_io__Mode0_17, &parse_tree__prog_io__Mode_18);
                    }
#line 1676 "prog_io.m"
                    {
#line 1676 "prog_io.m"
                      parse_tree__prog_io__H_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1676 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__H_8, 0) = ((MR_Box) (parse_tree__prog_io__Type_16));
#line 1676 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__H_8, 1) = ((MR_Box) (parse_tree__prog_io__Mode_18));
#line 1676 "prog_io.m"
                    }
#line 1676 "prog_io.m"
                    parse_tree__prog_io__succeeded = MR_TRUE;
#line 1673 "prog_io.m"
                  }
#line 1673 "prog_io.m"
              }
#line 1673 "prog_io.m"
          }
#line 1677 "prog_io.m"
        else
#line 1678 "prog_io.m"
          {
#line 1678 "prog_io.m"
            MR_Word parse_tree__prog_io__Type_25;

#line 1678 "prog_io.m"
            {
#line 1678 "prog_io.m"
              parse_tree__prog_io__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io__H0_6, &parse_tree__prog_io__Type_25);
            }
#line 1678 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1678 "prog_io.m"
              {
#line 1679 "prog_io.m"
                {
#line 1679 "prog_io.m"
                  parse_tree__prog_io__H_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1679 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__H_8, 0) = ((MR_Box) (parse_tree__prog_io__Type_25));
#line 1679 "prog_io.m"
                }
#line 1679 "prog_io.m"
                parse_tree__prog_io__succeeded = MR_TRUE;
#line 1678 "prog_io.m"
              }
#line 1678 "prog_io.m"
          }
#line 1664 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1664 "prog_io.m"
          {
#line 1666 "prog_io.m"
            {
#line 1666 "prog_io.m"
              parse_tree__prog_io__succeeded = parse_tree__prog_io__parse_type_and_mode_list_3_p_0(parse_tree__prog_io__InstConstraints_1, parse_tree__prog_io__T0_7, &parse_tree__prog_io__T_9);
            }
#line 1664 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1664 "prog_io.m"
              {
#line 1664 "prog_io.m"
                {
#line 1664 "prog_io.m"
                  MR_Word base;
#line 1664 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1664 "prog_io.m"
                  *parse_tree__prog_io__HeadVar__3_3 = base;
#line 1664 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__H_8));
#line 1664 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__T_9));
#line 1664 "prog_io.m"
                }
#line 1664 "prog_io.m"
                parse_tree__prog_io__succeeded = MR_TRUE;
#line 1664 "prog_io.m"
              }
#line 1664 "prog_io.m"
          }
#line 1664 "prog_io.m"
      }
#line 1663 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1663 "prog_io.m"
  }
#line 1660 "prog_io.m"
}

#line 1585 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_func_decl_base_2_14_p_0(
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__FuncName_15,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__Args_16,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__ReturnArg_17,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__FuncTerm_18,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_19,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_20,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeDet_21,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__Condition_22,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__ExistQVars_23,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__Constraints_24,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes0_25,
#line 1585 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_26,
#line 1585 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_27,
#line 1585 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_28)
#line 1585 "prog_io.m"
{
#line 1592 "prog_io.m"
  {
#line 1592 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1592 "prog_io.m"
    MR_Word parse_tree__prog_io__TypeCtorInfo_149_149;
#line 1592 "prog_io.m"
    MR_Word parse_tree__prog_io__ConsistentArgsSpecs_29;
#line 1592 "prog_io.m"
    MR_Word parse_tree__prog_io__ArgsOnlySpecs_38;
#line 1592 "prog_io.m"
    MR_Word parse_tree__prog_io__ReturnOnlySpecs_45;
#line 1592 "prog_io.m"
    MR_Word parse_tree__prog_io__ConsistencySpecs_46;
#line 1592 "prog_io.m"
    MR_Word parse_tree__prog_io__V_114_114;
#line 1606 "prog_io.m"
    MR_Word parse_tree__prog_io__V_76_76;
#line 1607 "prog_io.m"
    MR_Word parse_tree__prog_io__V_35_35;
#line 1606 "prog_io.m"
    MR_Word parse_tree__prog_io__V_34_34;
#line 1606 "prog_io.m"
    MR_Word parse_tree__prog_io__V_32_32;
#line 1606 "prog_io.m"
    MR_Word parse_tree__prog_io__V_33_33;
#line 1619 "prog_io.m"
    MR_Word parse_tree__prog_io__V_95_95;
#line 1620 "prog_io.m"
    MR_Word parse_tree__prog_io__V_41_41;
#line 1620 "prog_io.m"
    MR_Word parse_tree__prog_io__V_42_42;
#line 1619 "prog_io.m"
    MR_Word parse_tree__prog_io__V_40_40;
#line 1619 "prog_io.m"
    MR_Word parse_tree__prog_io__V_39_39;

#line 1594 "prog_io.m"
    {
#line 1594 "prog_io.m"
      parse_tree__prog_io__succeeded = parse_tree__prog_io__verify_type_and_mode_list_1_p_0(parse_tree__prog_io__Args_16);
    }
#line 1597 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1596 "prog_io.m"
      parse_tree__prog_io__ConsistentArgsSpecs_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1597 "prog_io.m"
    else
#line 1599 "prog_io.m"
      {
#line 1599 "prog_io.m"
        MR_Word parse_tree__prog_io__ConsistentSpec_31;
#line 1599 "prog_io.m"
        MR_Word parse_tree__prog_io__V_68_68;
#line 1599 "prog_io.m"
        MR_Word parse_tree__prog_io__V_69_69;
#line 1599 "prog_io.m"
        MR_Word parse_tree__prog_io__V_70_70;

#line 1601 "prog_io.m"
        {
#line 1601 "prog_io.m"
          parse_tree__prog_io__V_70_70 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__FuncTerm_18);
        }
#line 1602 "prog_io.m"
        {
#line 1602 "prog_io.m"
          parse_tree__prog_io__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1602 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io__V_70_70));
#line 1602 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[136])));
#line 1602 "prog_io.m"
        }
#line 1600 "prog_io.m"
        {
#line 1600 "prog_io.m"
          parse_tree__prog_io__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1600 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io__V_69_69));
#line 1600 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1600 "prog_io.m"
        }
#line 1600 "prog_io.m"
        {
#line 1600 "prog_io.m"
          parse_tree__prog_io__ConsistentSpec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1600 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ConsistentSpec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1600 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ConsistentSpec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1600 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ConsistentSpec_31, 2) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 1600 "prog_io.m"
        }
#line 1603 "prog_io.m"
        {
#line 1603 "prog_io.m"
          parse_tree__prog_io__ConsistentArgsSpecs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1603 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__ConsistentArgsSpecs_29, 0) = ((MR_Box) (parse_tree__prog_io__ConsistentSpec_31));
#line 1603 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__ConsistentArgsSpecs_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1603 "prog_io.m"
        }
#line 1599 "prog_io.m"
      }
#line 1607 "prog_io.m"
    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ReturnArg_17)) == (MR_mktag((MR_Integer) 0)));
#line 1607 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1607 "prog_io.m"
      {
#line 1607 "prog_io.m"
        parse_tree__prog_io__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ReturnArg_17, (MR_Integer) 0)));
#line 1606 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 1606 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1606 "prog_io.m"
          {
#line 1606 "prog_io.m"
            parse_tree__prog_io__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__Args_16, (MR_Integer) 0)));
#line 1606 "prog_io.m"
            parse_tree__prog_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__Args_16, (MR_Integer) 1)));
#line 1606 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_76_76)) == (MR_mktag((MR_Integer) 1)));
#line 1606 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1606 "prog_io.m"
              {
#line 1606 "prog_io.m"
                parse_tree__prog_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_76_76, (MR_Integer) 0)));
#line 1606 "prog_io.m"
                parse_tree__prog_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_76_76, (MR_Integer) 1)));
#line 1606 "prog_io.m"
              }
#line 1606 "prog_io.m"
          }
#line 1607 "prog_io.m"
      }
#line 1615 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1610 "prog_io.m"
      {
#line 1610 "prog_io.m"
        MR_Word parse_tree__prog_io__ArgsOnlySpec_37;
#line 1610 "prog_io.m"
        MR_Word parse_tree__prog_io__V_87_87;
#line 1610 "prog_io.m"
        MR_Word parse_tree__prog_io__V_88_88;
#line 1610 "prog_io.m"
        MR_Word parse_tree__prog_io__V_89_89;

#line 1612 "prog_io.m"
        {
#line 1612 "prog_io.m"
          parse_tree__prog_io__V_89_89 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__FuncTerm_18);
        }
#line 1613 "prog_io.m"
        {
#line 1613 "prog_io.m"
          parse_tree__prog_io__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1613 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io__V_89_89));
#line 1613 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[137])));
#line 1613 "prog_io.m"
        }
#line 1611 "prog_io.m"
        {
#line 1611 "prog_io.m"
          parse_tree__prog_io__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1611 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io__V_88_88));
#line 1611 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1611 "prog_io.m"
        }
#line 1611 "prog_io.m"
        {
#line 1611 "prog_io.m"
          parse_tree__prog_io__ArgsOnlySpec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1611 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ArgsOnlySpec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1611 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ArgsOnlySpec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1611 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ArgsOnlySpec_37, 2) = ((MR_Box) (parse_tree__prog_io__V_87_87));
#line 1611 "prog_io.m"
        }
#line 1614 "prog_io.m"
        {
#line 1614 "prog_io.m"
          parse_tree__prog_io__ArgsOnlySpecs_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1614 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgsOnlySpecs_38, 0) = ((MR_Box) (parse_tree__prog_io__ArgsOnlySpec_37));
#line 1614 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgsOnlySpecs_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1614 "prog_io.m"
        }
#line 1610 "prog_io.m"
      }
#line 1615 "prog_io.m"
    else
#line 1616 "prog_io.m"
      parse_tree__prog_io__ArgsOnlySpecs_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1620 "prog_io.m"
    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ReturnArg_17)) == (MR_mktag((MR_Integer) 1)));
#line 1620 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1620 "prog_io.m"
      {
#line 1620 "prog_io.m"
        parse_tree__prog_io__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReturnArg_17, (MR_Integer) 0)));
#line 1620 "prog_io.m"
        parse_tree__prog_io__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReturnArg_17, (MR_Integer) 1)));
#line 1619 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Args_16)) == (MR_mktag((MR_Integer) 1)));
#line 1619 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1619 "prog_io.m"
          {
#line 1619 "prog_io.m"
            parse_tree__prog_io__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__Args_16, (MR_Integer) 0)));
#line 1619 "prog_io.m"
            parse_tree__prog_io__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__Args_16, (MR_Integer) 1)));
#line 1619 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_95_95)) == (MR_mktag((MR_Integer) 0)));
#line 1619 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1619 "prog_io.m"
              parse_tree__prog_io__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_95_95, (MR_Integer) 0)));
#line 1619 "prog_io.m"
          }
#line 1620 "prog_io.m"
      }
#line 1628 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1623 "prog_io.m"
      {
#line 1623 "prog_io.m"
        MR_Word parse_tree__prog_io__ReturnOnlySpec_44;
#line 1623 "prog_io.m"
        MR_Word parse_tree__prog_io__V_106_106;
#line 1623 "prog_io.m"
        MR_Word parse_tree__prog_io__V_107_107;
#line 1623 "prog_io.m"
        MR_Word parse_tree__prog_io__V_108_108;

#line 1625 "prog_io.m"
        {
#line 1625 "prog_io.m"
          parse_tree__prog_io__V_108_108 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__FuncTerm_18);
        }
#line 1626 "prog_io.m"
        {
#line 1626 "prog_io.m"
          parse_tree__prog_io__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1626 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io__V_108_108));
#line 1626 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[138])));
#line 1626 "prog_io.m"
        }
#line 1624 "prog_io.m"
        {
#line 1624 "prog_io.m"
          parse_tree__prog_io__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1624 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_106_106, 0) = ((MR_Box) (parse_tree__prog_io__V_107_107));
#line 1624 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1624 "prog_io.m"
        }
#line 1624 "prog_io.m"
        {
#line 1624 "prog_io.m"
          parse_tree__prog_io__ReturnOnlySpec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1624 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ReturnOnlySpec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1624 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ReturnOnlySpec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1624 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ReturnOnlySpec_44, 2) = ((MR_Box) (parse_tree__prog_io__V_106_106));
#line 1624 "prog_io.m"
        }
#line 1627 "prog_io.m"
        {
#line 1627 "prog_io.m"
          parse_tree__prog_io__ReturnOnlySpecs_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1627 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReturnOnlySpecs_45, 0) = ((MR_Box) (parse_tree__prog_io__ReturnOnlySpec_44));
#line 1627 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReturnOnlySpecs_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1627 "prog_io.m"
        }
#line 1623 "prog_io.m"
      }
#line 1628 "prog_io.m"
    else
#line 1629 "prog_io.m"
      parse_tree__prog_io__ReturnOnlySpecs_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10377 "parse_tree.prog_io.c"
    parse_tree__prog_io__TypeCtorInfo_149_149 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 1631 "prog_io.m"
    {
#line 1631 "prog_io.m"
      parse_tree__prog_io__V_114_114 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_149_149, parse_tree__prog_io__ArgsOnlySpecs_38, parse_tree__prog_io__ReturnOnlySpecs_45);
    }
#line 1631 "prog_io.m"
    {
#line 1631 "prog_io.m"
      parse_tree__prog_io__ConsistencySpecs_46 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_149_149, parse_tree__prog_io__ConsistentArgsSpecs_29, parse_tree__prog_io__V_114_114);
    }
#line 1635 "prog_io.m"
    if ((parse_tree__prog_io__ConsistencySpecs_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1636 "prog_io.m"
      {
#line 1636 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeCtorInfo_150_150;
#line 1636 "prog_io.m"
        MR_Word parse_tree__prog_io__Purity_49;
#line 1636 "prog_io.m"
        MR_Word parse_tree__prog_io__Attributes_50;
#line 1636 "prog_io.m"
        MR_Word parse_tree__prog_io__TVarSet_51;
#line 1636 "prog_io.m"
        MR_Word parse_tree__prog_io__IVarSet_52;
#line 1636 "prog_io.m"
        MR_Word parse_tree__prog_io__AllArgs_53;
#line 1636 "prog_io.m"
        MR_Word parse_tree__prog_io__V_115_115;

#line 1637 "prog_io.m"
        {
#line 1637 "prog_io.m"
          parse_tree__prog_io__get_purity_3_p_0(&parse_tree__prog_io__Purity_49, parse_tree__prog_io__Attributes0_25, &parse_tree__prog_io__Attributes_50);
        }
#line 10413 "parse_tree.prog_io.c"
        parse_tree__prog_io__TypeCtorInfo_150_150 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1638 "prog_io.m"
        {
#line 1638 "prog_io.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io__TypeCtorInfo_150_150, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io__VarSet_20, &parse_tree__prog_io__TVarSet_51);
        }
#line 1639 "prog_io.m"
        {
#line 1639 "prog_io.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io__TypeCtorInfo_150_150, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io__VarSet_20, &parse_tree__prog_io__IVarSet_52);
        }
#line 1640 "prog_io.m"
        {
#line 1640 "prog_io.m"
          parse_tree__prog_io__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1640 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io__ReturnArg_17));
#line 1640 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1640 "prog_io.m"
        }
#line 1640 "prog_io.m"
        {
#line 1640 "prog_io.m"
          parse_tree__prog_io__AllArgs_53 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io__Args_16, parse_tree__prog_io__V_115_115);
        }
#line 1641 "prog_io.m"
        {
#line 1641 "prog_io.m"
          parse_tree__prog_io__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io__AllArgs_53);
        }
#line 1649 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1642 "prog_io.m"
          {
#line 1642 "prog_io.m"
            MR_Word parse_tree__prog_io__ItemPredDecl_55;
#line 1642 "prog_io.m"
            MR_Word parse_tree__prog_io__Item_56;
#line 1642 "prog_io.m"
            MR_Word parse_tree__prog_io__MaybeItem0_57;

#line 1643 "prog_io.m"
            {
#line 1643 "prog_io.m"
              parse_tree__prog_io__ItemPredDecl_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 1643 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1643 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_55, 1) = ((MR_Box) (parse_tree__prog_io__TVarSet_51));
#line 1643 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_55, 2) = ((MR_Box) (parse_tree__prog_io__IVarSet_52));
#line 1643 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_55, 3) = ((MR_Box) (parse_tree__prog_io__ExistQVars_23));
#line 1643 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_55, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1643 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_55, 5) = ((MR_Box) (parse_tree__prog_io__FuncName_15));
#line 1643 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_55, 6) = ((MR_Box) (parse_tree__prog_io__AllArgs_53));
#line 1643 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_55, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1643 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_55, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1643 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_55, 9) = ((MR_Box) (parse_tree__prog_io__MaybeDet_21));
#line 1643 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_55, 10) = ((MR_Box) (parse_tree__prog_io__Condition_22));
#line 1643 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_55, 11) = ((MR_Box) (parse_tree__prog_io__Purity_49));
#line 1643 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_55, 12) = ((MR_Box) (parse_tree__prog_io__Constraints_24));
#line 1643 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_55, 13) = ((MR_Box) (parse_tree__prog_io__Context_26));
#line 1643 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_55, 14) = ((MR_Box) (parse_tree__prog_io__SeqNum_27));
#line 1643 "prog_io.m"
            }
#line 1646 "prog_io.m"
            {
#line 1646 "prog_io.m"
              parse_tree__prog_io__Item_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1646 "prog_io.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1646 "prog_io.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_56, 1) = ((MR_Box) (parse_tree__prog_io__ItemPredDecl_55));
#line 1646 "prog_io.m"
            }
#line 1647 "prog_io.m"
            {
#line 1647 "prog_io.m"
              parse_tree__prog_io__MaybeItem0_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1647 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem0_57, 0) = ((MR_Box) (parse_tree__prog_io__Item_56));
#line 1647 "prog_io.m"
            }
#line 1648 "prog_io.m"
            {
#line 1648 "prog_io.m"
              parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__MaybeItem0_57, parse_tree__prog_io__Attributes_50, parse_tree__prog_io__MaybeItem_28);
#line 1648 "prog_io.m"
              return;
            }
#line 1642 "prog_io.m"
          }
#line 1649 "prog_io.m"
        else
#line 1650 "prog_io.m"
          {
#line 1650 "prog_io.m"
            MR_String parse_tree__prog_io__TermStr_58;
#line 1650 "prog_io.m"
            MR_Word parse_tree__prog_io__Pieces_59;
#line 1650 "prog_io.m"
            MR_Word parse_tree__prog_io__Spec_60;
#line 1650 "prog_io.m"
            MR_Word parse_tree__prog_io__V_122_122;
#line 1650 "prog_io.m"
            MR_Word parse_tree__prog_io__V_125_125;
#line 1650 "prog_io.m"
            MR_Word parse_tree__prog_io__V_127_127;
#line 1650 "prog_io.m"
            MR_Word parse_tree__prog_io__V_128_128;
#line 1650 "prog_io.m"
            MR_Word parse_tree__prog_io__V_137_137;
#line 1650 "prog_io.m"
            MR_Word parse_tree__prog_io__V_138_138;
#line 1650 "prog_io.m"
            MR_Word parse_tree__prog_io__V_139_139;
#line 1650 "prog_io.m"
            MR_Word parse_tree__prog_io__V_140_140;
#line 1650 "prog_io.m"
            MR_Word parse_tree__prog_io__V_141_141;
#line 1650 "prog_io.m"
            MR_Word parse_tree__prog_io__V_144_144;

#line 1650 "prog_io.m"
            {
#line 1650 "prog_io.m"
              parse_tree__prog_io__TermStr_58 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io__TypeCtorInfo_150_150, parse_tree__prog_io__VarSet_20, parse_tree__prog_io__Term_19);
            }
#line 1653 "prog_io.m"
            {
#line 1653 "prog_io.m"
              parse_tree__prog_io__V_128_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1653 "prog_io.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_128_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1653 "prog_io.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_128_128, 1) = ((MR_Box) (parse_tree__prog_io__TermStr_58));
#line 1653 "prog_io.m"
            }
#line 1652 "prog_io.m"
            {
#line 1652 "prog_io.m"
              parse_tree__prog_io__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1652 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_127_127, 0) = ((MR_Box) (parse_tree__prog_io__V_128_128));
#line 1652 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 1652 "prog_io.m"
            }
#line 1652 "prog_io.m"
            {
#line 1652 "prog_io.m"
              parse_tree__prog_io__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1652 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_125_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1652 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_125_125, 1) = ((MR_Box) (parse_tree__prog_io__V_127_127));
#line 1652 "prog_io.m"
            }
#line 1651 "prog_io.m"
            {
#line 1651 "prog_io.m"
              parse_tree__prog_io__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1651 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[140])));
#line 1651 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io__V_125_125));
#line 1651 "prog_io.m"
            }
#line 1651 "prog_io.m"
            {
#line 1651 "prog_io.m"
              parse_tree__prog_io__Pieces_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1651 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[139])));
#line 1651 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_59, 1) = ((MR_Box) (parse_tree__prog_io__V_122_122));
#line 1651 "prog_io.m"
            }
#line 1655 "prog_io.m"
            {
#line 1655 "prog_io.m"
              parse_tree__prog_io__V_139_139 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_150_150, parse_tree__prog_io__Term_19);
            }
#line 1655 "prog_io.m"
            {
#line 1655 "prog_io.m"
              parse_tree__prog_io__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1655 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_141_141, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_59));
#line 1655 "prog_io.m"
            }
#line 1655 "prog_io.m"
            {
#line 1655 "prog_io.m"
              parse_tree__prog_io__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1655 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_140_140, 0) = ((MR_Box) (parse_tree__prog_io__V_141_141));
#line 1655 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1655 "prog_io.m"
            }
#line 1655 "prog_io.m"
            {
#line 1655 "prog_io.m"
              parse_tree__prog_io__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1655 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io__V_139_139));
#line 1655 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_138_138, 1) = ((MR_Box) (parse_tree__prog_io__V_140_140));
#line 1655 "prog_io.m"
            }
#line 1654 "prog_io.m"
            {
#line 1654 "prog_io.m"
              parse_tree__prog_io__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1654 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_137_137, 0) = ((MR_Box) (parse_tree__prog_io__V_138_138));
#line 1654 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1654 "prog_io.m"
            }
#line 1654 "prog_io.m"
            {
#line 1654 "prog_io.m"
              parse_tree__prog_io__Spec_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1654 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1654 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1654 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_60, 2) = ((MR_Box) (parse_tree__prog_io__V_137_137));
#line 1654 "prog_io.m"
            }
#line 1656 "prog_io.m"
            {
#line 1656 "prog_io.m"
              parse_tree__prog_io__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1656 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_144_144, 0) = ((MR_Box) (parse_tree__prog_io__Spec_60));
#line 1656 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1656 "prog_io.m"
            }
#line 1656 "prog_io.m"
            {
#line 1656 "prog_io.m"
              MR_Word base;
#line 1656 "prog_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1656 "prog_io.m"
              *parse_tree__prog_io__MaybeItem_28 = base;
#line 1656 "prog_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_144_144));
#line 1656 "prog_io.m"
            }
#line 1650 "prog_io.m"
          }
#line 1636 "prog_io.m"
      }
#line 1635 "prog_io.m"
    else
#line 1634 "prog_io.m"
      {
#line 1634 "prog_io.m"
        MR_Word base;
#line 1634 "prog_io.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1634 "prog_io.m"
        *parse_tree__prog_io__MaybeItem_28 = base;
#line 1634 "prog_io.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__ConsistencySpecs_46));
#line 1634 "prog_io.m"
      }
#line 1592 "prog_io.m"
  }
#line 1585 "prog_io.m"
}

#line 1502 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_func_decl_base_9_p_0(
#line 1502 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_10,
#line 1502 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_11,
#line 1502 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_12,
#line 1502 "prog_io.m"
  MR_Word parse_tree__prog_io__Condition_13,
#line 1502 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeDet_14,
#line 1502 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes0_15,
#line 1502 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_16,
#line 1502 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_17,
#line 1502 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_18)
#line 1502 "prog_io.m"
{
#line 1507 "prog_io.m"
  {
#line 1507 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1507 "prog_io.m"
    MR_Word parse_tree__prog_io__Attributes_19;
#line 1507 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeContext_20;

#line 1508 "prog_io.m"
    {
#line 1508 "prog_io.m"
      parse_tree__prog_io__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io__ModuleName_10, parse_tree__prog_io__VarSet_11, parse_tree__prog_io__Attributes0_15, &parse_tree__prog_io__Attributes_19, &parse_tree__prog_io__MaybeContext_20);
    }
#line 1513 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeContext_20)) == (MR_mktag((MR_Integer) 0))))
#line 1511 "prog_io.m"
      {
#line 1511 "prog_io.m"
        MR_Word parse_tree__prog_io__Specs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeContext_20, (MR_Integer) 0)));

#line 1512 "prog_io.m"
        {
#line 1512 "prog_io.m"
          MR_Word base;
#line 1512 "prog_io.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1512 "prog_io.m"
          *parse_tree__prog_io__MaybeItem_18 = base;
#line 1512 "prog_io.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_21));
#line 1512 "prog_io.m"
        }
#line 1511 "prog_io.m"
      }
#line 1513 "prog_io.m"
    else
#line 1514 "prog_io.m"
      {
#line 1514 "prog_io.m"
        MR_Word parse_tree__prog_io__ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeContext_20, (MR_Integer) 0)));
#line 1514 "prog_io.m"
        MR_Word parse_tree__prog_io__Constraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeContext_20, (MR_Integer) 1)));
#line 1514 "prog_io.m"
        MR_Word parse_tree__prog_io__InstConstraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeContext_20, (MR_Integer) 2)));
#line 1576 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeSugaredFuncTerm_25;
#line 1576 "prog_io.m"
        MR_Word parse_tree__prog_io__ReturnTerm_26;
#line 1516 "prog_io.m"
        MR_Word parse_tree__prog_io__V_46_46;
#line 1516 "prog_io.m"
        MR_String parse_tree__prog_io__V_47_47;
#line 1516 "prog_io.m"
        MR_Word parse_tree__prog_io__V_48_48;
#line 1516 "prog_io.m"
        MR_Word parse_tree__prog_io__V_49_49;
#line 1516 "prog_io.m"
        MR_Word parse_tree__prog_io__V_50_50;
#line 1516 "prog_io.m"
        MR_Word parse_tree__prog_io__V_27_27;

#line 1516 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Term_12)) == (MR_mktag((MR_Integer) 0)));
#line 1516 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1516 "prog_io.m"
          {
#line 1516 "prog_io.m"
            parse_tree__prog_io__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_12, (MR_Integer) 0)));
#line 1516 "prog_io.m"
            parse_tree__prog_io__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_12, (MR_Integer) 1)));
#line 1516 "prog_io.m"
            parse_tree__prog_io__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_12, (MR_Integer) 2)));
#line 1516 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_46_46)) == (MR_mktag((MR_Integer) 0)));
#line 1516 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1516 "prog_io.m"
              {
#line 1516 "prog_io.m"
                parse_tree__prog_io__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_46_46, (MR_Integer) 0)));
#line 1516 "prog_io.m"
                parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__V_47_47, (MR_String) "=") == 0);
#line 1516 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1516 "prog_io.m"
                  {
#line 1516 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 1516 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1516 "prog_io.m"
                      {
#line 1516 "prog_io.m"
                        parse_tree__prog_io__MaybeSugaredFuncTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, (MR_Integer) 0)));
#line 1516 "prog_io.m"
                        parse_tree__prog_io__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, (MR_Integer) 1)));
#line 1517 "prog_io.m"
                        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 1517 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1517 "prog_io.m"
                          {
#line 1517 "prog_io.m"
                            parse_tree__prog_io__ReturnTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_49_49, (MR_Integer) 0)));
#line 1517 "prog_io.m"
                            parse_tree__prog_io__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_49_49, (MR_Integer) 1)));
#line 1517 "prog_io.m"
                            parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1517 "prog_io.m"
                          }
#line 1516 "prog_io.m"
                      }
#line 1516 "prog_io.m"
                  }
#line 1516 "prog_io.m"
              }
#line 1516 "prog_io.m"
          }
#line 1576 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1519 "prog_io.m"
          {
#line 1519 "prog_io.m"
            MR_Word parse_tree__prog_io__TypeCtorInfo_150_150;
#line 1519 "prog_io.m"
            MR_Word parse_tree__prog_io__FuncTerm_28;
#line 1519 "prog_io.m"
            MR_Word parse_tree__prog_io__MaybeFuncNameAndArgs_30;

#line 1519 "prog_io.m"
            {
#line 1519 "prog_io.m"
              parse_tree__prog_io__FuncTerm_28 = parse_tree__prog_io__desugar_field_access_1_f_0(parse_tree__prog_io__MaybeSugaredFuncTerm_25);
            }
#line 10864 "parse_tree.prog_io.c"
            parse_tree__prog_io__TypeCtorInfo_150_150 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1522 "prog_io.m"
            {
#line 1522 "prog_io.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io__TypeCtorInfo_150_150, parse_tree__prog_io__ModuleName_10, parse_tree__prog_io__FuncTerm_28, parse_tree__prog_io__VarSet_11, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[65]), &parse_tree__prog_io__MaybeFuncNameAndArgs_30);
            }
#line 1527 "prog_io.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeFuncNameAndArgs_30)) == (MR_mktag((MR_Integer) 0))))
#line 1525 "prog_io.m"
              {
#line 1525 "prog_io.m"
                MR_Word parse_tree__prog_io__Specs_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeFuncNameAndArgs_30, (MR_Integer) 0)));

#line 1526 "prog_io.m"
                {
#line 1526 "prog_io.m"
                  MR_Word base;
#line 1526 "prog_io.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1526 "prog_io.m"
                  *parse_tree__prog_io__MaybeItem_18 = base;
#line 1526 "prog_io.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_142));
#line 1526 "prog_io.m"
                }
#line 1525 "prog_io.m"
              }
#line 1527 "prog_io.m"
            else
#line 1528 "prog_io.m"
              {
#line 1528 "prog_io.m"
                MR_Word parse_tree__prog_io__FuncName_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeFuncNameAndArgs_30, (MR_Integer) 0)));
#line 1528 "prog_io.m"
                MR_Word parse_tree__prog_io__ArgTerms_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeFuncNameAndArgs_30, (MR_Integer) 1)));
#line 1528 "prog_io.m"
                MR_Word parse_tree__prog_io__MaybeArgs_34;
#line 1528 "prog_io.m"
                MR_Word parse_tree__prog_io__MaybeReturnArg_39;
#line 1534 "prog_io.m"
                MR_Word parse_tree__prog_io__ArgsPrime_33;
#line 1550 "prog_io.m"
                MR_Word parse_tree__prog_io__ReturnArgPrime_38;
#line 1570 "prog_io.m"
                MR_Word parse_tree__prog_io__Args_42;
#line 1570 "prog_io.m"
                MR_Word parse_tree__prog_io__ReturnArg_43;

#line 1530 "prog_io.m"
                {
#line 1530 "prog_io.m"
                  parse_tree__prog_io__succeeded = parse_tree__prog_io__parse_type_and_mode_list_3_p_0(parse_tree__prog_io__InstConstraints_24, parse_tree__prog_io__ArgTerms_32, &parse_tree__prog_io__ArgsPrime_33);
                }
#line 1534 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1533 "prog_io.m"
                  {
#line 1533 "prog_io.m"
                    parse_tree__prog_io__MaybeArgs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeArgs_34, 0) = ((MR_Box) (parse_tree__prog_io__ArgsPrime_33));
#line 1533 "prog_io.m"
                  }
#line 1534 "prog_io.m"
                else
#line 1535 "prog_io.m"
                  {
#line 1535 "prog_io.m"
                    MR_String parse_tree__prog_io__FuncTermStr_35;
#line 1535 "prog_io.m"
                    MR_Word parse_tree__prog_io__ArgsPieces_36;
#line 1535 "prog_io.m"
                    MR_Word parse_tree__prog_io__ArgsSpec_37;
#line 1535 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_62_62;
#line 1535 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_65_65;
#line 1535 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_68_68;
#line 1535 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_69_69;
#line 1535 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_78_78;
#line 1535 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_79_79;
#line 1535 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_80_80;
#line 1535 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_81_81;
#line 1535 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_82_82;
#line 1535 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_85_85;

#line 1535 "prog_io.m"
                    {
#line 1535 "prog_io.m"
                      parse_tree__prog_io__FuncTermStr_35 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io__TypeCtorInfo_150_150, parse_tree__prog_io__VarSet_11, parse_tree__prog_io__FuncTerm_28);
                    }
#line 1538 "prog_io.m"
                    {
#line 1538 "prog_io.m"
                      parse_tree__prog_io__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1538 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io__FuncTermStr_35));
#line 1538 "prog_io.m"
                    }
#line 1537 "prog_io.m"
                    {
#line 1537 "prog_io.m"
                      parse_tree__prog_io__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io__V_69_69));
#line 1537 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 1537 "prog_io.m"
                    }
#line 1537 "prog_io.m"
                    {
#line 1537 "prog_io.m"
                      parse_tree__prog_io__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[133])));
#line 1537 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io__V_68_68));
#line 1537 "prog_io.m"
                    }
#line 1536 "prog_io.m"
                    {
#line 1536 "prog_io.m"
                      parse_tree__prog_io__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__prog_io_scalar_common_3[5])));
#line 1536 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io__V_65_65));
#line 1536 "prog_io.m"
                    }
#line 1536 "prog_io.m"
                    {
#line 1536 "prog_io.m"
                      parse_tree__prog_io__ArgsPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgsPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[132])));
#line 1536 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgsPieces_36, 1) = ((MR_Box) (parse_tree__prog_io__V_62_62));
#line 1536 "prog_io.m"
                    }
#line 1541 "prog_io.m"
                    {
#line 1541 "prog_io.m"
                      parse_tree__prog_io__V_80_80 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_150_150, parse_tree__prog_io__FuncTerm_28);
                    }
#line 1542 "prog_io.m"
                    {
#line 1542 "prog_io.m"
                      parse_tree__prog_io__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1542 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io__ArgsPieces_36));
#line 1542 "prog_io.m"
                    }
#line 1541 "prog_io.m"
                    {
#line 1541 "prog_io.m"
                      parse_tree__prog_io__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1541 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io__V_82_82));
#line 1541 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1541 "prog_io.m"
                    }
#line 1542 "prog_io.m"
                    {
#line 1542 "prog_io.m"
                      parse_tree__prog_io__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1542 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io__V_80_80));
#line 1542 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_79_79, 1) = ((MR_Box) (parse_tree__prog_io__V_81_81));
#line 1542 "prog_io.m"
                    }
#line 1539 "prog_io.m"
                    {
#line 1539 "prog_io.m"
                      parse_tree__prog_io__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io__V_79_79));
#line 1539 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1539 "prog_io.m"
                    }
#line 1539 "prog_io.m"
                    {
#line 1539 "prog_io.m"
                      parse_tree__prog_io__ArgsSpec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1539 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ArgsSpec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1539 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ArgsSpec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1539 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ArgsSpec_37, 2) = ((MR_Box) (parse_tree__prog_io__V_78_78));
#line 1539 "prog_io.m"
                    }
#line 1543 "prog_io.m"
                    {
#line 1543 "prog_io.m"
                      parse_tree__prog_io__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1543 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io__ArgsSpec_37));
#line 1543 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1543 "prog_io.m"
                    }
#line 1543 "prog_io.m"
                    {
#line 1543 "prog_io.m"
                      parse_tree__prog_io__MaybeArgs_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1543 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeArgs_34, 0) = ((MR_Box) (parse_tree__prog_io__V_85_85));
#line 1543 "prog_io.m"
                    }
#line 1535 "prog_io.m"
                  }
#line 1546 "prog_io.m"
                {
#line 1546 "prog_io.m"
                  parse_tree__prog_io__succeeded = parse_tree__prog_io__parse_type_and_mode_3_p_0(parse_tree__prog_io__InstConstraints_24, parse_tree__prog_io__ReturnTerm_26, &parse_tree__prog_io__ReturnArgPrime_38);
                }
#line 1550 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1549 "prog_io.m"
                  {
#line 1549 "prog_io.m"
                    parse_tree__prog_io__MaybeReturnArg_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeReturnArg_39, 0) = ((MR_Box) (parse_tree__prog_io__ReturnArgPrime_38));
#line 1549 "prog_io.m"
                  }
#line 1550 "prog_io.m"
                else
#line 1553 "prog_io.m"
                  {
#line 1553 "prog_io.m"
                    MR_Word parse_tree__prog_io__ReturnSpec_41;
#line 1553 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_103_103;
#line 1553 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_104_104;
#line 1553 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_105_105;
#line 1553 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_110_110;

#line 1556 "prog_io.m"
                    {
#line 1556 "prog_io.m"
                      parse_tree__prog_io__V_105_105 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_150_150, parse_tree__prog_io__ReturnTerm_26);
                    }
#line 1557 "prog_io.m"
                    {
#line 1557 "prog_io.m"
                      parse_tree__prog_io__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1557 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_104_104, 0) = ((MR_Box) (parse_tree__prog_io__V_105_105));
#line 1557 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[134])));
#line 1557 "prog_io.m"
                    }
#line 1554 "prog_io.m"
                    {
#line 1554 "prog_io.m"
                      parse_tree__prog_io__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1554 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_103_103, 0) = ((MR_Box) (parse_tree__prog_io__V_104_104));
#line 1554 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1554 "prog_io.m"
                    }
#line 1554 "prog_io.m"
                    {
#line 1554 "prog_io.m"
                      parse_tree__prog_io__ReturnSpec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1554 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ReturnSpec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1554 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ReturnSpec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1554 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ReturnSpec_41, 2) = ((MR_Box) (parse_tree__prog_io__V_103_103));
#line 1554 "prog_io.m"
                    }
#line 1558 "prog_io.m"
                    {
#line 1558 "prog_io.m"
                      parse_tree__prog_io__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1558 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io__ReturnSpec_41));
#line 1558 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1558 "prog_io.m"
                    }
#line 1558 "prog_io.m"
                    {
#line 1558 "prog_io.m"
                      parse_tree__prog_io__MaybeReturnArg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1558 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeReturnArg_39, 0) = ((MR_Box) (parse_tree__prog_io__V_110_110));
#line 1558 "prog_io.m"
                    }
#line 1553 "prog_io.m"
                  }
#line 1561 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeArgs_34)) == (MR_mktag((MR_Integer) 1)));
#line 1561 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1561 "prog_io.m"
                  {
#line 1561 "prog_io.m"
                    parse_tree__prog_io__Args_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeArgs_34, (MR_Integer) 0)));
#line 1562 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeReturnArg_39)) == (MR_mktag((MR_Integer) 1)));
#line 1562 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1562 "prog_io.m"
                      parse_tree__prog_io__ReturnArg_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeReturnArg_39, (MR_Integer) 0)));
#line 1561 "prog_io.m"
                  }
#line 1570 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1566 "prog_io.m"
                  {
#line 1566 "prog_io.m"
                    parse_tree__prog_io__parse_func_decl_base_2_14_p_0(parse_tree__prog_io__FuncName_31, parse_tree__prog_io__Args_42, parse_tree__prog_io__ReturnArg_43, parse_tree__prog_io__FuncTerm_28, parse_tree__prog_io__Term_12, parse_tree__prog_io__VarSet_11, parse_tree__prog_io__MaybeDet_14, parse_tree__prog_io__Condition_13, parse_tree__prog_io__ExistQVars_22, parse_tree__prog_io__Constraints_23, parse_tree__prog_io__Attributes_19, parse_tree__prog_io__Context_16, parse_tree__prog_io__SeqNum_17, parse_tree__prog_io__MaybeItem_18);
#line 1566 "prog_io.m"
                    return;
                  }
#line 1570 "prog_io.m"
                else
#line 1572 "prog_io.m"
                  {
#line 1572 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_112_112;
#line 1572 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_113_113;
#line 1572 "prog_io.m"
                    MR_Word parse_tree__prog_io__Specs_143;

#line 1571 "prog_io.m"
                    {
#line 1571 "prog_io.m"
                      parse_tree__prog_io__V_112_112 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_scalar_common_1[5], parse_tree__prog_io__MaybeArgs_34);
                    }
#line 1571 "prog_io.m"
                    {
#line 1571 "prog_io.m"
                      parse_tree__prog_io__V_113_113 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io__MaybeReturnArg_39);
                    }
#line 1571 "prog_io.m"
                    {
#line 1571 "prog_io.m"
                      parse_tree__prog_io__Specs_143 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__V_112_112, parse_tree__prog_io__V_113_113);
                    }
#line 1573 "prog_io.m"
                    {
#line 1573 "prog_io.m"
                      MR_Word base;
#line 1573 "prog_io.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1573 "prog_io.m"
                      *parse_tree__prog_io__MaybeItem_18 = base;
#line 1573 "prog_io.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_143));
#line 1573 "prog_io.m"
                    }
#line 1572 "prog_io.m"
                  }
#line 1528 "prog_io.m"
              }
#line 1519 "prog_io.m"
          }
#line 1576 "prog_io.m"
        else
#line 1578 "prog_io.m"
          {
#line 1578 "prog_io.m"
            MR_Word parse_tree__prog_io__Spec_45;
#line 1578 "prog_io.m"
            MR_Word parse_tree__prog_io__V_133_133;
#line 1578 "prog_io.m"
            MR_Word parse_tree__prog_io__V_134_134;
#line 1578 "prog_io.m"
            MR_Word parse_tree__prog_io__V_135_135;
#line 1578 "prog_io.m"
            MR_Word parse_tree__prog_io__V_140_140;

#line 1580 "prog_io.m"
            {
#line 1580 "prog_io.m"
              parse_tree__prog_io__V_135_135 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__Term_12);
            }
#line 1580 "prog_io.m"
            {
#line 1580 "prog_io.m"
              parse_tree__prog_io__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1580 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_134_134, 0) = ((MR_Box) (parse_tree__prog_io__V_135_135));
#line 1580 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[135])));
#line 1580 "prog_io.m"
            }
#line 1579 "prog_io.m"
            {
#line 1579 "prog_io.m"
              parse_tree__prog_io__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1579 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_133_133, 0) = ((MR_Box) (parse_tree__prog_io__V_134_134));
#line 1579 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1579 "prog_io.m"
            }
#line 1579 "prog_io.m"
            {
#line 1579 "prog_io.m"
              parse_tree__prog_io__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1579 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1579 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1579 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_45, 2) = ((MR_Box) (parse_tree__prog_io__V_133_133));
#line 1579 "prog_io.m"
            }
#line 1581 "prog_io.m"
            {
#line 1581 "prog_io.m"
              parse_tree__prog_io__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1581 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_140_140, 0) = ((MR_Box) (parse_tree__prog_io__Spec_45));
#line 1581 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1581 "prog_io.m"
            }
#line 1581 "prog_io.m"
            {
#line 1581 "prog_io.m"
              MR_Word base;
#line 1581 "prog_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1581 "prog_io.m"
              *parse_tree__prog_io__MaybeItem_18 = base;
#line 1581 "prog_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_140_140));
#line 1581 "prog_io.m"
            }
#line 1578 "prog_io.m"
          }
#line 1514 "prog_io.m"
      }
#line 1507 "prog_io.m"
  }
#line 1502 "prog_io.m"
}

#line 1401 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_pred_decl_base_12_p_0(
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__PredOrFunc_13,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_14,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_15,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__PredTypeTerm_16,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__Condition_17,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__WithType_18,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__WithInst_19,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeDet_20,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes0_21,
#line 1401 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_22,
#line 1401 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_23,
#line 1401 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_24)
#line 1401 "prog_io.m"
{
#line 1408 "prog_io.m"
  {
#line 1408 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1408 "prog_io.m"
    MR_Word parse_tree__prog_io__Attributes1_25;
#line 1408 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeExistClassInstContext_26;

#line 1409 "prog_io.m"
    {
#line 1409 "prog_io.m"
      parse_tree__prog_io__get_class_context_and_inst_constraints_5_p_0(parse_tree__prog_io__ModuleName_14, parse_tree__prog_io__VarSet_15, parse_tree__prog_io__Attributes0_21, &parse_tree__prog_io__Attributes1_25, &parse_tree__prog_io__MaybeExistClassInstContext_26);
    }
#line 1414 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeExistClassInstContext_26)) == (MR_mktag((MR_Integer) 0))))
#line 1412 "prog_io.m"
      {
#line 1412 "prog_io.m"
        MR_Word parse_tree__prog_io__Specs_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeExistClassInstContext_26, (MR_Integer) 0)));

#line 1413 "prog_io.m"
        {
#line 1413 "prog_io.m"
          MR_Word base;
#line 1413 "prog_io.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1413 "prog_io.m"
          *parse_tree__prog_io__MaybeItem_24 = base;
#line 1413 "prog_io.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_27));
#line 1413 "prog_io.m"
        }
#line 1412 "prog_io.m"
      }
#line 1414 "prog_io.m"
    else
#line 1416 "prog_io.m"
      {
#line 1416 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeCtorInfo_206_206 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1416 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeCtorInfo_207_207;
#line 1416 "prog_io.m"
        MR_Word parse_tree__prog_io__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeExistClassInstContext_26, (MR_Integer) 0)));
#line 1416 "prog_io.m"
        MR_Word parse_tree__prog_io__Constraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeExistClassInstContext_26, (MR_Integer) 1)));
#line 1416 "prog_io.m"
        MR_Word parse_tree__prog_io__InstConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeExistClassInstContext_26, (MR_Integer) 2)));
#line 1416 "prog_io.m"
        MR_Word parse_tree__prog_io__ContextPieces_31;
#line 1416 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybePredNameAndArgs_32;
#line 1416 "prog_io.m"
        MR_Word parse_tree__prog_io__V_58_58;
#line 1416 "prog_io.m"
        MR_Word parse_tree__prog_io__V_59_59;

#line 1418 "prog_io.m"
        {
#line 1418 "prog_io.m"
          parse_tree__prog_io__V_59_59 = parse_tree__prog_io__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io__PredOrFunc_13);
        }
#line 1417 "prog_io.m"
        {
#line 1417 "prog_io.m"
          parse_tree__prog_io__V_58_58 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_206_206, parse_tree__prog_io__V_59_59, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[125]));
        }
#line 1417 "prog_io.m"
        {
#line 1417 "prog_io.m"
          parse_tree__prog_io__ContextPieces_31 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_206_206, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[124]), parse_tree__prog_io__V_58_58);
        }
#line 11430 "parse_tree.prog_io.c"
        parse_tree__prog_io__TypeCtorInfo_207_207 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1419 "prog_io.m"
        {
#line 1419 "prog_io.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io__TypeCtorInfo_207_207, parse_tree__prog_io__ModuleName_14, parse_tree__prog_io__PredTypeTerm_16, parse_tree__prog_io__VarSet_15, parse_tree__prog_io__ContextPieces_31, &parse_tree__prog_io__MaybePredNameAndArgs_32);
        }
#line 1424 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__MaybePredNameAndArgs_32)) == (MR_mktag((MR_Integer) 0))))
#line 1422 "prog_io.m"
          {
#line 1422 "prog_io.m"
            MR_Word parse_tree__prog_io__Specs_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybePredNameAndArgs_32, (MR_Integer) 0)));

#line 1423 "prog_io.m"
            {
#line 1423 "prog_io.m"
              MR_Word base;
#line 1423 "prog_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1423 "prog_io.m"
              *parse_tree__prog_io__MaybeItem_24 = base;
#line 1423 "prog_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_190));
#line 1423 "prog_io.m"
            }
#line 1422 "prog_io.m"
          }
#line 1424 "prog_io.m"
        else
#line 1425 "prog_io.m"
          {
#line 1425 "prog_io.m"
            MR_Word parse_tree__prog_io__Functor_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybePredNameAndArgs_32, (MR_Integer) 0)));
#line 1425 "prog_io.m"
            MR_Word parse_tree__prog_io__ArgTerms_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybePredNameAndArgs_32, (MR_Integer) 1)));
#line 1487 "prog_io.m"
            MR_Word parse_tree__prog_io__Args_35;

#line 1426 "prog_io.m"
            {
#line 1426 "prog_io.m"
              parse_tree__prog_io__succeeded = parse_tree__prog_io__parse_type_and_mode_list_3_p_0(parse_tree__prog_io__InstConstraints_30, parse_tree__prog_io__ArgTerms_34, &parse_tree__prog_io__Args_35);
            }
#line 1487 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1479 "prog_io.m"
              {
#line 1427 "prog_io.m"
                {
#line 1427 "prog_io.m"
                  parse_tree__prog_io__succeeded = parse_tree__prog_io__verify_type_and_mode_list_1_p_0(parse_tree__prog_io__Args_35);
                }
#line 1479 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1439 "prog_io.m"
                  {
#line 1429 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_64_64;
#line 1429 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_36_36;
#line 1430 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_38_38;
#line 1430 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_37_37;

#line 1429 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__WithInst_19)) == (MR_mktag((MR_Integer) 1)));
#line 1429 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1429 "prog_io.m"
                      {
#line 1429 "prog_io.m"
                        parse_tree__prog_io__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__WithInst_19, (MR_Integer) 0)));
#line 1430 "prog_io.m"
                        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Args_35)) == (MR_mktag((MR_Integer) 1)));
#line 1430 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1430 "prog_io.m"
                          {
#line 1430 "prog_io.m"
                            parse_tree__prog_io__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__Args_35, (MR_Integer) 0)));
#line 1430 "prog_io.m"
                            parse_tree__prog_io__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__Args_35, (MR_Integer) 1)));
#line 1430 "prog_io.m"
                            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 1430 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 1430 "prog_io.m"
                              parse_tree__prog_io__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_64_64, (MR_Integer) 0)));
#line 1430 "prog_io.m"
                          }
#line 1429 "prog_io.m"
                      }
#line 1439 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1433 "prog_io.m"
                      {
#line 1433 "prog_io.m"
                        MR_Word parse_tree__prog_io__Spec_40;
#line 1433 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_78_78;
#line 1433 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_79_79;
#line 1433 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_80_80;
#line 1433 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_85_85;

#line 1436 "prog_io.m"
                        {
#line 1436 "prog_io.m"
                          parse_tree__prog_io__V_80_80 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_207_207, parse_tree__prog_io__PredTypeTerm_16);
                        }
#line 1437 "prog_io.m"
                        {
#line 1437 "prog_io.m"
                          parse_tree__prog_io__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io__V_80_80));
#line 1437 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[126])));
#line 1437 "prog_io.m"
                        }
#line 1434 "prog_io.m"
                        {
#line 1434 "prog_io.m"
                          parse_tree__prog_io__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1434 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io__V_79_79));
#line 1434 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1434 "prog_io.m"
                        }
#line 1434 "prog_io.m"
                        {
#line 1434 "prog_io.m"
                          parse_tree__prog_io__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1434 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1434 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1434 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_40, 2) = ((MR_Box) (parse_tree__prog_io__V_78_78));
#line 1434 "prog_io.m"
                        }
#line 1438 "prog_io.m"
                        {
#line 1438 "prog_io.m"
                          parse_tree__prog_io__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1438 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io__Spec_40));
#line 1438 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1438 "prog_io.m"
                        }
#line 1438 "prog_io.m"
                        {
#line 1438 "prog_io.m"
                          MR_Word base;
#line 1438 "prog_io.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1438 "prog_io.m"
                          *parse_tree__prog_io__MaybeItem_24 = base;
#line 1438 "prog_io.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_85_85));
#line 1438 "prog_io.m"
                        }
#line 1433 "prog_io.m"
                      }
#line 1439 "prog_io.m"
                    else
#line 1451 "prog_io.m"
                      {
#line 1440 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_87_87;
#line 1441 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_41_41;
#line 1442 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_44_44;
#line 1442 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_42_42;
#line 1442 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_43_43;

#line 1440 "prog_io.m"
                        parse_tree__prog_io__succeeded = (parse_tree__prog_io__WithInst_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1440 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1440 "prog_io.m"
                          {
#line 1441 "prog_io.m"
                            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__WithType_18)) == (MR_mktag((MR_Integer) 1)));
#line 1441 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 1441 "prog_io.m"
                              {
#line 1441 "prog_io.m"
                                parse_tree__prog_io__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__WithType_18, (MR_Integer) 0)));
#line 1442 "prog_io.m"
                                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Args_35)) == (MR_mktag((MR_Integer) 1)));
#line 1442 "prog_io.m"
                                if (parse_tree__prog_io__succeeded)
#line 1442 "prog_io.m"
                                  {
#line 1442 "prog_io.m"
                                    parse_tree__prog_io__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__Args_35, (MR_Integer) 0)));
#line 1442 "prog_io.m"
                                    parse_tree__prog_io__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__Args_35, (MR_Integer) 1)));
#line 1442 "prog_io.m"
                                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_87_87)) == (MR_mktag((MR_Integer) 1)));
#line 1442 "prog_io.m"
                                    if (parse_tree__prog_io__succeeded)
#line 1442 "prog_io.m"
                                      {
#line 1442 "prog_io.m"
                                        parse_tree__prog_io__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_87_87, (MR_Integer) 0)));
#line 1442 "prog_io.m"
                                        parse_tree__prog_io__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_87_87, (MR_Integer) 1)));
#line 1442 "prog_io.m"
                                      }
#line 1442 "prog_io.m"
                                  }
#line 1441 "prog_io.m"
                              }
#line 1440 "prog_io.m"
                          }
#line 1451 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1445 "prog_io.m"
                          {
#line 1445 "prog_io.m"
                            MR_Word parse_tree__prog_io__V_101_101;
#line 1445 "prog_io.m"
                            MR_Word parse_tree__prog_io__V_102_102;
#line 1445 "prog_io.m"
                            MR_Word parse_tree__prog_io__V_103_103;
#line 1445 "prog_io.m"
                            MR_Word parse_tree__prog_io__V_108_108;
#line 1445 "prog_io.m"
                            MR_Word parse_tree__prog_io__Spec_192;

#line 1448 "prog_io.m"
                            {
#line 1448 "prog_io.m"
                              parse_tree__prog_io__V_103_103 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_207_207, parse_tree__prog_io__PredTypeTerm_16);
                            }
#line 1449 "prog_io.m"
                            {
#line 1449 "prog_io.m"
                              parse_tree__prog_io__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1449 "prog_io.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io__V_103_103));
#line 1449 "prog_io.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[127])));
#line 1449 "prog_io.m"
                            }
#line 1446 "prog_io.m"
                            {
#line 1446 "prog_io.m"
                              parse_tree__prog_io__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io__V_102_102));
#line 1446 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1446 "prog_io.m"
                            }
#line 1446 "prog_io.m"
                            {
#line 1446 "prog_io.m"
                              parse_tree__prog_io__Spec_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1446 "prog_io.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_192, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1446 "prog_io.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1446 "prog_io.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_192, 2) = ((MR_Box) (parse_tree__prog_io__V_101_101));
#line 1446 "prog_io.m"
                            }
#line 1450 "prog_io.m"
                            {
#line 1450 "prog_io.m"
                              parse_tree__prog_io__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io__Spec_192));
#line 1450 "prog_io.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1450 "prog_io.m"
                            }
#line 1450 "prog_io.m"
                            {
#line 1450 "prog_io.m"
                              MR_Word base;
#line 1450 "prog_io.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1450 "prog_io.m"
                              *parse_tree__prog_io__MaybeItem_24 = base;
#line 1450 "prog_io.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_108_108));
#line 1450 "prog_io.m"
                            }
#line 1445 "prog_io.m"
                          }
#line 1451 "prog_io.m"
                        else
#line 1465 "prog_io.m"
                          {
#line 1452 "prog_io.m"
                            {
#line 1452 "prog_io.m"
                              parse_tree__prog_io__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io__Args_35);
                            }
#line 1465 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 1454 "prog_io.m"
                              {
#line 1454 "prog_io.m"
                                MR_Word parse_tree__prog_io__Purity_45;
#line 1454 "prog_io.m"
                                MR_Word parse_tree__prog_io__Attributes_46;
#line 1454 "prog_io.m"
                                MR_Word parse_tree__prog_io__TVarSet_47;
#line 1454 "prog_io.m"
                                MR_Word parse_tree__prog_io__IVarSet_48;
#line 1454 "prog_io.m"
                                MR_Word parse_tree__prog_io__ItemPredDecl_50;
#line 1454 "prog_io.m"
                                MR_Word parse_tree__prog_io__Item_51;
#line 1454 "prog_io.m"
                                MR_Word parse_tree__prog_io__MaybeItem0_52;

#line 1454 "prog_io.m"
                                {
#line 1454 "prog_io.m"
                                  parse_tree__prog_io__get_purity_3_p_0(&parse_tree__prog_io__Purity_45, parse_tree__prog_io__Attributes1_25, &parse_tree__prog_io__Attributes_46);
                                }
#line 1455 "prog_io.m"
                                {
#line 1455 "prog_io.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io__TypeCtorInfo_207_207, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io__VarSet_15, &parse_tree__prog_io__TVarSet_47);
                                }
#line 1456 "prog_io.m"
                                {
#line 1456 "prog_io.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io__TypeCtorInfo_207_207, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io__VarSet_15, &parse_tree__prog_io__IVarSet_48);
                                }
#line 1458 "prog_io.m"
                                {
#line 1458 "prog_io.m"
                                  parse_tree__prog_io__ItemPredDecl_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1458 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_50, 1) = ((MR_Box) (parse_tree__prog_io__TVarSet_47));
#line 1458 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_50, 2) = ((MR_Box) (parse_tree__prog_io__IVarSet_48));
#line 1458 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_50, 3) = ((MR_Box) (parse_tree__prog_io__ExistQVars_28));
#line 1458 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_50, 4) = ((MR_Box) (parse_tree__prog_io__PredOrFunc_13));
#line 1458 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_50, 5) = ((MR_Box) (parse_tree__prog_io__Functor_33));
#line 1458 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_50, 6) = ((MR_Box) (parse_tree__prog_io__Args_35));
#line 1458 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_50, 7) = ((MR_Box) (parse_tree__prog_io__WithType_18));
#line 1458 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_50, 8) = ((MR_Box) (parse_tree__prog_io__WithInst_19));
#line 1458 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_50, 9) = ((MR_Box) (parse_tree__prog_io__MaybeDet_20));
#line 1458 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_50, 10) = ((MR_Box) (parse_tree__prog_io__Condition_17));
#line 1458 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_50, 11) = ((MR_Box) (parse_tree__prog_io__Purity_45));
#line 1458 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_50, 12) = ((MR_Box) (parse_tree__prog_io__Constraints_29));
#line 1458 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_50, 13) = ((MR_Box) (parse_tree__prog_io__Context_22));
#line 1458 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPredDecl_50, 14) = ((MR_Box) (parse_tree__prog_io__SeqNum_23));
#line 1458 "prog_io.m"
                                }
#line 1462 "prog_io.m"
                                {
#line 1462 "prog_io.m"
                                  parse_tree__prog_io__Item_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1462 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_51, 1) = ((MR_Box) (parse_tree__prog_io__ItemPredDecl_50));
#line 1462 "prog_io.m"
                                }
#line 1463 "prog_io.m"
                                {
#line 1463 "prog_io.m"
                                  parse_tree__prog_io__MaybeItem0_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1463 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem0_52, 0) = ((MR_Box) (parse_tree__prog_io__Item_51));
#line 1463 "prog_io.m"
                                }
#line 1464 "prog_io.m"
                                {
#line 1464 "prog_io.m"
                                  parse_tree__prog_io_util__check_no_attributes_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__MaybeItem0_52, parse_tree__prog_io__Attributes_46, parse_tree__prog_io__MaybeItem_24);
#line 1464 "prog_io.m"
                                  return;
                                }
#line 1454 "prog_io.m"
                              }
#line 1465 "prog_io.m"
                            else
#line 1467 "prog_io.m"
                              {
#line 1467 "prog_io.m"
                                MR_String parse_tree__prog_io__PredTypeTermStr_53;
#line 1467 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_117_117;
#line 1467 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_118_118;
#line 1467 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_119_119;
#line 1467 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_122_122;
#line 1467 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_124_124;
#line 1467 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_125_125;
#line 1467 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_134_134;
#line 1467 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_135_135;
#line 1467 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_136_136;
#line 1467 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_137_137;
#line 1467 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_138_138;
#line 1467 "prog_io.m"
                                MR_Word parse_tree__prog_io__V_141_141;
#line 1467 "prog_io.m"
                                MR_Word parse_tree__prog_io__Pieces_193;
#line 1467 "prog_io.m"
                                MR_Word parse_tree__prog_io__Spec_194;

#line 1466 "prog_io.m"
                                {
#line 1466 "prog_io.m"
                                  parse_tree__prog_io__PredTypeTermStr_53 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io__TypeCtorInfo_207_207, parse_tree__prog_io__VarSet_15, parse_tree__prog_io__PredTypeTerm_16);
                                }
#line 1470 "prog_io.m"
                                {
#line 1470 "prog_io.m"
                                  parse_tree__prog_io__V_118_118 = parse_tree__prog_io__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io__PredOrFunc_13);
                                }
#line 1472 "prog_io.m"
                                {
#line 1472 "prog_io.m"
                                  parse_tree__prog_io__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1472 "prog_io.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_125_125, 1) = ((MR_Box) (parse_tree__prog_io__PredTypeTermStr_53));
#line 1472 "prog_io.m"
                                }
#line 1471 "prog_io.m"
                                {
#line 1471 "prog_io.m"
                                  parse_tree__prog_io__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io__V_125_125));
#line 1471 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 1471 "prog_io.m"
                                }
#line 1471 "prog_io.m"
                                {
#line 1471 "prog_io.m"
                                  parse_tree__prog_io__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1471 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io__V_124_124));
#line 1471 "prog_io.m"
                                }
#line 1470 "prog_io.m"
                                {
#line 1470 "prog_io.m"
                                  parse_tree__prog_io__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1470 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_119_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[108])));
#line 1470 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_119_119, 1) = ((MR_Box) (parse_tree__prog_io__V_122_122));
#line 1470 "prog_io.m"
                                }
#line 1469 "prog_io.m"
                                {
#line 1469 "prog_io.m"
                                  parse_tree__prog_io__V_117_117 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_206_206, parse_tree__prog_io__V_118_118, parse_tree__prog_io__V_119_119);
                                }
#line 1468 "prog_io.m"
                                {
#line 1468 "prog_io.m"
                                  parse_tree__prog_io__Pieces_193 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_206_206, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[57]), parse_tree__prog_io__V_117_117);
                                }
#line 1475 "prog_io.m"
                                {
#line 1475 "prog_io.m"
                                  parse_tree__prog_io__V_136_136 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_207_207, parse_tree__prog_io__PredTypeTerm_16);
                                }
#line 1476 "prog_io.m"
                                {
#line 1476 "prog_io.m"
                                  parse_tree__prog_io__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1476 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_193));
#line 1476 "prog_io.m"
                                }
#line 1475 "prog_io.m"
                                {
#line 1475 "prog_io.m"
                                  parse_tree__prog_io__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1475 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_137_137, 0) = ((MR_Box) (parse_tree__prog_io__V_138_138));
#line 1475 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1475 "prog_io.m"
                                }
#line 1476 "prog_io.m"
                                {
#line 1476 "prog_io.m"
                                  parse_tree__prog_io__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1476 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_135_135, 0) = ((MR_Box) (parse_tree__prog_io__V_136_136));
#line 1476 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_135_135, 1) = ((MR_Box) (parse_tree__prog_io__V_137_137));
#line 1476 "prog_io.m"
                                }
#line 1473 "prog_io.m"
                                {
#line 1473 "prog_io.m"
                                  parse_tree__prog_io__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1473 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_134_134, 0) = ((MR_Box) (parse_tree__prog_io__V_135_135));
#line 1473 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1473 "prog_io.m"
                                }
#line 1473 "prog_io.m"
                                {
#line 1473 "prog_io.m"
                                  parse_tree__prog_io__Spec_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1473 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_194, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1473 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1473 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_194, 2) = ((MR_Box) (parse_tree__prog_io__V_134_134));
#line 1473 "prog_io.m"
                                }
#line 1477 "prog_io.m"
                                {
#line 1477 "prog_io.m"
                                  parse_tree__prog_io__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1477 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_141_141, 0) = ((MR_Box) (parse_tree__prog_io__Spec_194));
#line 1477 "prog_io.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1477 "prog_io.m"
                                }
#line 1477 "prog_io.m"
                                {
#line 1477 "prog_io.m"
                                  MR_Word base;
#line 1477 "prog_io.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1477 "prog_io.m"
                                  *parse_tree__prog_io__MaybeItem_24 = base;
#line 1477 "prog_io.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_141_141));
#line 1477 "prog_io.m"
                                }
#line 1467 "prog_io.m"
                              }
#line 1465 "prog_io.m"
                          }
#line 1451 "prog_io.m"
                      }
#line 1439 "prog_io.m"
                  }
#line 1479 "prog_io.m"
                else
#line 1481 "prog_io.m"
                  {
#line 1481 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_153_153;
#line 1481 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_154_154;
#line 1481 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_155_155;
#line 1481 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_160_160;
#line 1481 "prog_io.m"
                    MR_Word parse_tree__prog_io__Spec_200;

#line 1483 "prog_io.m"
                    {
#line 1483 "prog_io.m"
                      parse_tree__prog_io__V_155_155 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_207_207, parse_tree__prog_io__PredTypeTerm_16);
                    }
#line 1484 "prog_io.m"
                    {
#line 1484 "prog_io.m"
                      parse_tree__prog_io__V_154_154 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1484 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_154_154, 0) = ((MR_Box) (parse_tree__prog_io__V_155_155));
#line 1484 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[128])));
#line 1484 "prog_io.m"
                    }
#line 1482 "prog_io.m"
                    {
#line 1482 "prog_io.m"
                      parse_tree__prog_io__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_153_153, 0) = ((MR_Box) (parse_tree__prog_io__V_154_154));
#line 1482 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_153_153, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1482 "prog_io.m"
                    }
#line 1482 "prog_io.m"
                    {
#line 1482 "prog_io.m"
                      parse_tree__prog_io__Spec_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1482 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_200, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1482 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1482 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_200, 2) = ((MR_Box) (parse_tree__prog_io__V_153_153));
#line 1482 "prog_io.m"
                    }
#line 1485 "prog_io.m"
                    {
#line 1485 "prog_io.m"
                      parse_tree__prog_io__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1485 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_160_160, 0) = ((MR_Box) (parse_tree__prog_io__Spec_200));
#line 1485 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_160_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1485 "prog_io.m"
                    }
#line 1485 "prog_io.m"
                    {
#line 1485 "prog_io.m"
                      MR_Word base;
#line 1485 "prog_io.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1485 "prog_io.m"
                      *parse_tree__prog_io__MaybeItem_24 = base;
#line 1485 "prog_io.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_160_160));
#line 1485 "prog_io.m"
                    }
#line 1481 "prog_io.m"
                  }
#line 1479 "prog_io.m"
              }
#line 1487 "prog_io.m"
            else
#line 1488 "prog_io.m"
              {
#line 1488 "prog_io.m"
                MR_Word parse_tree__prog_io__V_166_166;
#line 1488 "prog_io.m"
                MR_Word parse_tree__prog_io__V_167_167;
#line 1488 "prog_io.m"
                MR_Word parse_tree__prog_io__V_168_168;
#line 1488 "prog_io.m"
                MR_Word parse_tree__prog_io__V_171_171;
#line 1488 "prog_io.m"
                MR_Word parse_tree__prog_io__V_172_172;
#line 1488 "prog_io.m"
                MR_Word parse_tree__prog_io__V_181_181;
#line 1488 "prog_io.m"
                MR_Word parse_tree__prog_io__V_182_182;
#line 1488 "prog_io.m"
                MR_Word parse_tree__prog_io__V_183_183;
#line 1488 "prog_io.m"
                MR_Word parse_tree__prog_io__V_184_184;
#line 1488 "prog_io.m"
                MR_Word parse_tree__prog_io__V_185_185;
#line 1488 "prog_io.m"
                MR_Word parse_tree__prog_io__V_188_188;
#line 1488 "prog_io.m"
                MR_Word parse_tree__prog_io__Pieces_201;
#line 1488 "prog_io.m"
                MR_Word parse_tree__prog_io__Spec_202;
#line 1488 "prog_io.m"
                MR_String parse_tree__prog_io__PredTypeTermStr_203;

#line 1488 "prog_io.m"
                {
#line 1488 "prog_io.m"
                  parse_tree__prog_io__PredTypeTermStr_203 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io__TypeCtorInfo_207_207, parse_tree__prog_io__VarSet_15, parse_tree__prog_io__PredTypeTerm_16);
                }
#line 1490 "prog_io.m"
                {
#line 1490 "prog_io.m"
                  parse_tree__prog_io__V_167_167 = parse_tree__prog_io__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io__PredOrFunc_13);
                }
#line 1491 "prog_io.m"
                {
#line 1491 "prog_io.m"
                  parse_tree__prog_io__V_172_172 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1491 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_172_172, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1491 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_172_172, 1) = ((MR_Box) (parse_tree__prog_io__PredTypeTermStr_203));
#line 1491 "prog_io.m"
                }
#line 1491 "prog_io.m"
                {
#line 1491 "prog_io.m"
                  parse_tree__prog_io__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1491 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_171_171, 0) = ((MR_Box) (parse_tree__prog_io__V_172_172));
#line 1491 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_171_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 1491 "prog_io.m"
                }
#line 1490 "prog_io.m"
                {
#line 1490 "prog_io.m"
                  parse_tree__prog_io__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1490 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_168_168, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[131])));
#line 1490 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_168_168, 1) = ((MR_Box) (parse_tree__prog_io__V_171_171));
#line 1490 "prog_io.m"
                }
#line 1489 "prog_io.m"
                {
#line 1489 "prog_io.m"
                  parse_tree__prog_io__V_166_166 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_206_206, parse_tree__prog_io__V_167_167, parse_tree__prog_io__V_168_168);
                }
#line 1489 "prog_io.m"
                {
#line 1489 "prog_io.m"
                  parse_tree__prog_io__Pieces_201 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_206_206, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[130]), parse_tree__prog_io__V_166_166);
                }
#line 1493 "prog_io.m"
                {
#line 1493 "prog_io.m"
                  parse_tree__prog_io__V_183_183 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io__TypeCtorInfo_207_207, parse_tree__prog_io__PredTypeTerm_16);
                }
#line 1494 "prog_io.m"
                {
#line 1494 "prog_io.m"
                  parse_tree__prog_io__V_185_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1494 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_185_185, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_201));
#line 1494 "prog_io.m"
                }
#line 1493 "prog_io.m"
                {
#line 1493 "prog_io.m"
                  parse_tree__prog_io__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_184_184, 0) = ((MR_Box) (parse_tree__prog_io__V_185_185));
#line 1493 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1493 "prog_io.m"
                }
#line 1494 "prog_io.m"
                {
#line 1494 "prog_io.m"
                  parse_tree__prog_io__V_182_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1494 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_182_182, 0) = ((MR_Box) (parse_tree__prog_io__V_183_183));
#line 1494 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_182_182, 1) = ((MR_Box) (parse_tree__prog_io__V_184_184));
#line 1494 "prog_io.m"
                }
#line 1492 "prog_io.m"
                {
#line 1492 "prog_io.m"
                  parse_tree__prog_io__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1492 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_181_181, 0) = ((MR_Box) (parse_tree__prog_io__V_182_182));
#line 1492 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1492 "prog_io.m"
                }
#line 1492 "prog_io.m"
                {
#line 1492 "prog_io.m"
                  parse_tree__prog_io__Spec_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1492 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_202, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1492 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1492 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_202, 2) = ((MR_Box) (parse_tree__prog_io__V_181_181));
#line 1492 "prog_io.m"
                }
#line 1495 "prog_io.m"
                {
#line 1495 "prog_io.m"
                  parse_tree__prog_io__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_188_188, 0) = ((MR_Box) (parse_tree__prog_io__Spec_202));
#line 1495 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_188_188, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1495 "prog_io.m"
                }
#line 1495 "prog_io.m"
                {
#line 1495 "prog_io.m"
                  MR_Word base;
#line 1495 "prog_io.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1495 "prog_io.m"
                  *parse_tree__prog_io__MaybeItem_24 = base;
#line 1495 "prog_io.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_188_188));
#line 1495 "prog_io.m"
                }
#line 1488 "prog_io.m"
              }
#line 1425 "prog_io.m"
          }
#line 1416 "prog_io.m"
      }
#line 1408 "prog_io.m"
  }
#line 1401 "prog_io.m"
}

#line 1339 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_pred_or_func_decl_8_p_0(
#line 1339 "prog_io.m"
  MR_Word parse_tree__prog_io__PredOrFunc_9,
#line 1339 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_10,
#line 1339 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_11,
#line 1339 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_12,
#line 1339 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_13,
#line 1339 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_14,
#line 1339 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_15,
#line 1339 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_16)
#line 1339 "prog_io.m"
{
#line 1344 "prog_io.m"
  {
#line 1344 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 1344 "prog_io.m"
    MR_Word parse_tree__prog_io__BeforeCondTerm_17;
#line 1344 "prog_io.m"
    MR_Word parse_tree__prog_io__Condition_18;
#line 1344 "prog_io.m"
    MR_Word parse_tree__prog_io__BeforeDetismTerm_19;
#line 1344 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeMaybeDetism_20;
#line 1344 "prog_io.m"
    MR_Word parse_tree__prog_io__BeforeWithInstTerm_21;
#line 1344 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeWithInst_22;
#line 1344 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeWithType_24;
#line 1344 "prog_io.m"
    MR_Word parse_tree__prog_io__BaseTerm_25;
#line 1391 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeDetism_26;
#line 1391 "prog_io.m"
    MR_Word parse_tree__prog_io__WithInst_27;
#line 1391 "prog_io.m"
    MR_Word parse_tree__prog_io__WithType_28;

#line 1345 "prog_io.m"
    {
#line 1345 "prog_io.m"
      parse_tree__prog_io_util__parse_condition_suffix_3_p_0(parse_tree__prog_io__Term_12, &parse_tree__prog_io__BeforeCondTerm_17, &parse_tree__prog_io__Condition_18);
    }
#line 1346 "prog_io.m"
    {
#line 1346 "prog_io.m"
      parse_tree__prog_io__parse_determinism_suffix_4_p_0(parse_tree__prog_io__VarSet_11, parse_tree__prog_io__BeforeCondTerm_17, &parse_tree__prog_io__BeforeDetismTerm_19, &parse_tree__prog_io__MaybeMaybeDetism_20);
    }
#line 1348 "prog_io.m"
    {
#line 1348 "prog_io.m"
      parse_tree__prog_io__parse_with_inst_suffix_3_p_0(parse_tree__prog_io__BeforeDetismTerm_19, &parse_tree__prog_io__BeforeWithInstTerm_21, &parse_tree__prog_io__MaybeWithInst_22);
    }
#line 1350 "prog_io.m"
    {
#line 1350 "prog_io.m"
      parse_tree__prog_io__parse_with_type_suffix_4_p_0(parse_tree__prog_io__VarSet_11, parse_tree__prog_io__BeforeWithInstTerm_21, &parse_tree__prog_io__BaseTerm_25, &parse_tree__prog_io__MaybeWithType_24);
    }
#line 1354 "prog_io.m"
    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeMaybeDetism_20)) == (MR_mktag((MR_Integer) 1)));
#line 1354 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1354 "prog_io.m"
      {
#line 1354 "prog_io.m"
        parse_tree__prog_io__MaybeDetism_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeMaybeDetism_20, (MR_Integer) 0)));
#line 1355 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeWithInst_22)) == (MR_mktag((MR_Integer) 1)));
#line 1355 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1355 "prog_io.m"
          {
#line 1355 "prog_io.m"
            parse_tree__prog_io__WithInst_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeWithInst_22, (MR_Integer) 0)));
#line 1356 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeWithType_24)) == (MR_mktag((MR_Integer) 1)));
#line 1356 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1356 "prog_io.m"
              parse_tree__prog_io__WithType_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeWithType_24, (MR_Integer) 0)));
#line 1355 "prog_io.m"
          }
#line 1354 "prog_io.m"
      }
#line 1391 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 1367 "prog_io.m"
      {
#line 1359 "prog_io.m"
        MR_Word parse_tree__prog_io__V_29_29;
#line 1360 "prog_io.m"
        MR_Word parse_tree__prog_io__V_30_30;

#line 1359 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeDetism_26)) == (MR_mktag((MR_Integer) 1)));
#line 1359 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1359 "prog_io.m"
          {
#line 1359 "prog_io.m"
            parse_tree__prog_io__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeDetism_26, (MR_Integer) 0)));
#line 1360 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__WithInst_27)) == (MR_mktag((MR_Integer) 1)));
#line 1360 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1360 "prog_io.m"
              parse_tree__prog_io__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__WithInst_27, (MR_Integer) 0)));
#line 1359 "prog_io.m"
          }
#line 1367 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1363 "prog_io.m"
          {
#line 1363 "prog_io.m"
            MR_Word parse_tree__prog_io__Spec_32;
#line 1363 "prog_io.m"
            MR_Word parse_tree__prog_io__V_48_48;
#line 1363 "prog_io.m"
            MR_Word parse_tree__prog_io__V_49_49;
#line 1363 "prog_io.m"
            MR_Word parse_tree__prog_io__V_50_50;
#line 1363 "prog_io.m"
            MR_Word parse_tree__prog_io__V_55_55;

#line 1365 "prog_io.m"
            {
#line 1365 "prog_io.m"
              parse_tree__prog_io__V_50_50 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__BaseTerm_25);
            }
#line 1365 "prog_io.m"
            {
#line 1365 "prog_io.m"
              parse_tree__prog_io__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1365 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io__V_50_50));
#line 1365 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[121])));
#line 1365 "prog_io.m"
            }
#line 1364 "prog_io.m"
            {
#line 1364 "prog_io.m"
              parse_tree__prog_io__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io__V_49_49));
#line 1364 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1364 "prog_io.m"
            }
#line 1364 "prog_io.m"
            {
#line 1364 "prog_io.m"
              parse_tree__prog_io__Spec_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1364 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1364 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1364 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_32, 2) = ((MR_Box) (parse_tree__prog_io__V_48_48));
#line 1364 "prog_io.m"
            }
#line 1366 "prog_io.m"
            {
#line 1366 "prog_io.m"
              parse_tree__prog_io__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io__Spec_32));
#line 1366 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1366 "prog_io.m"
            }
#line 1366 "prog_io.m"
            {
#line 1366 "prog_io.m"
              MR_Word base;
#line 1366 "prog_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1366 "prog_io.m"
              *parse_tree__prog_io__MaybeItem_16 = base;
#line 1366 "prog_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_55_55));
#line 1366 "prog_io.m"
            }
#line 1363 "prog_io.m"
          }
#line 1367 "prog_io.m"
        else
#line 1376 "prog_io.m"
          {
#line 1368 "prog_io.m"
            MR_Word parse_tree__prog_io__V_33_33;

#line 1368 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__WithInst_27)) == (MR_mktag((MR_Integer) 1)));
#line 1368 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1368 "prog_io.m"
              {
#line 1368 "prog_io.m"
                parse_tree__prog_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__WithInst_27, (MR_Integer) 0)));
#line 1369 "prog_io.m"
                parse_tree__prog_io__succeeded = (parse_tree__prog_io__WithType_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1368 "prog_io.m"
              }
#line 1376 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1372 "prog_io.m"
              {
#line 1372 "prog_io.m"
                MR_Word parse_tree__prog_io__V_79_79;
#line 1372 "prog_io.m"
                MR_Word parse_tree__prog_io__V_80_80;
#line 1372 "prog_io.m"
                MR_Word parse_tree__prog_io__V_81_81;
#line 1372 "prog_io.m"
                MR_Word parse_tree__prog_io__V_86_86;
#line 1372 "prog_io.m"
                MR_Word parse_tree__prog_io__Spec_93;

#line 1374 "prog_io.m"
                {
#line 1374 "prog_io.m"
                  parse_tree__prog_io__V_81_81 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__BaseTerm_25);
                }
#line 1374 "prog_io.m"
                {
#line 1374 "prog_io.m"
                  parse_tree__prog_io__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1374 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io__V_81_81));
#line 1374 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[122])));
#line 1374 "prog_io.m"
                }
#line 1373 "prog_io.m"
                {
#line 1373 "prog_io.m"
                  parse_tree__prog_io__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io__V_80_80));
#line 1373 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1373 "prog_io.m"
                }
#line 1373 "prog_io.m"
                {
#line 1373 "prog_io.m"
                  parse_tree__prog_io__Spec_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1373 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1373 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1373 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_93, 2) = ((MR_Box) (parse_tree__prog_io__V_79_79));
#line 1373 "prog_io.m"
                }
#line 1375 "prog_io.m"
                {
#line 1375 "prog_io.m"
                  parse_tree__prog_io__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io__Spec_93));
#line 1375 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1375 "prog_io.m"
                }
#line 1375 "prog_io.m"
                {
#line 1375 "prog_io.m"
                  MR_Word base;
#line 1375 "prog_io.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1375 "prog_io.m"
                  *parse_tree__prog_io__MaybeItem_16 = base;
#line 1375 "prog_io.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_86_86));
#line 1375 "prog_io.m"
                }
#line 1372 "prog_io.m"
              }
#line 1376 "prog_io.m"
            else
#line 1385 "prog_io.m"
              {
#line 1380 "prog_io.m"
                parse_tree__prog_io__succeeded = (parse_tree__prog_io__PredOrFunc_9 == (MR_Integer) 1);
#line 1380 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1381 "prog_io.m"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__WithType_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1385 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1383 "prog_io.m"
                  {
#line 1383 "prog_io.m"
                    parse_tree__prog_io__parse_func_decl_base_9_p_0(parse_tree__prog_io__ModuleName_10, parse_tree__prog_io__VarSet_11, parse_tree__prog_io__BaseTerm_25, parse_tree__prog_io__Condition_18, parse_tree__prog_io__MaybeDetism_26, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, parse_tree__prog_io__MaybeItem_16);
#line 1383 "prog_io.m"
                    return;
                  }
#line 1385 "prog_io.m"
                else
#line 1386 "prog_io.m"
                  {
#line 1386 "prog_io.m"
                    parse_tree__prog_io__parse_pred_decl_base_12_p_0(parse_tree__prog_io__PredOrFunc_9, parse_tree__prog_io__ModuleName_10, parse_tree__prog_io__VarSet_11, parse_tree__prog_io__BaseTerm_25, parse_tree__prog_io__Condition_18, parse_tree__prog_io__WithType_28, parse_tree__prog_io__WithInst_27, parse_tree__prog_io__MaybeDetism_26, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, parse_tree__prog_io__MaybeItem_16);
#line 1386 "prog_io.m"
                    return;
                  }
#line 1385 "prog_io.m"
              }
#line 1376 "prog_io.m"
          }
#line 1367 "prog_io.m"
      }
#line 1391 "prog_io.m"
    else
#line 1394 "prog_io.m"
      {
#line 1394 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeCtorInfo_98_98 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 1394 "prog_io.m"
        MR_Word parse_tree__prog_io__Specs_34;
#line 1394 "prog_io.m"
        MR_Word parse_tree__prog_io__V_88_88;
#line 1394 "prog_io.m"
        MR_Word parse_tree__prog_io__V_89_89;
#line 1394 "prog_io.m"
        MR_Word parse_tree__prog_io__V_90_90;
#line 1394 "prog_io.m"
        MR_Word parse_tree__prog_io__V_91_91;

#line 1393 "prog_io.m"
        {
#line 1393 "prog_io.m"
          parse_tree__prog_io__V_88_88 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_scalar_common_1[2], parse_tree__prog_io__MaybeMaybeDetism_20);
        }
#line 1394 "prog_io.m"
        {
#line 1394 "prog_io.m"
          parse_tree__prog_io__V_90_90 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_scalar_common_1[3], parse_tree__prog_io__MaybeWithInst_22);
        }
#line 1394 "prog_io.m"
        {
#line 1394 "prog_io.m"
          parse_tree__prog_io__V_91_91 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_scalar_common_1[4], parse_tree__prog_io__MaybeWithType_24);
        }
#line 1393 "prog_io.m"
        {
#line 1393 "prog_io.m"
          parse_tree__prog_io__V_89_89 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_98_98, parse_tree__prog_io__V_90_90, parse_tree__prog_io__V_91_91);
        }
#line 1392 "prog_io.m"
        {
#line 1392 "prog_io.m"
          parse_tree__prog_io__Specs_34 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_98_98, parse_tree__prog_io__V_88_88, parse_tree__prog_io__V_89_89);
        }
#line 1395 "prog_io.m"
        {
#line 1395 "prog_io.m"
          MR_Word base;
#line 1395 "prog_io.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1395 "prog_io.m"
          *parse_tree__prog_io__MaybeItem_16 = base;
#line 1395 "prog_io.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_34));
#line 1395 "prog_io.m"
        }
#line 1394 "prog_io.m"
      }
#line 1344 "prog_io.m"
  }
#line 1339 "prog_io.m"
}

#line 1180 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_attributed_decl_8_p_0_4(
#line 1180 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 1180 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 1180 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 1180 "prog_io.m"
{
#line 1180 "prog_io.m"
  {
#line 1180 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 1180 "prog_io.m"
    MR_Word parse_tree__prog_io__conv3_MaybeModule_8;

#line 1180 "prog_io.m"
    {
#line 1180 "prog_io.m"
      parse_tree__prog_io__parse_module_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv3_MaybeModule_8);
    }
#line 1180 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv3_MaybeModule_8));
#line 1180 "prog_io.m"
  }
#line 1180 "prog_io.m"
}

#line 1102 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_attributed_decl_8_p_0_3(
#line 1102 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 1102 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 1102 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 1102 "prog_io.m"
{
#line 1102 "prog_io.m"
  {
#line 1102 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 1102 "prog_io.m"
    MR_Word parse_tree__prog_io__conv2_MaybeModuleSpecifier_6;

#line 1102 "prog_io.m"
    {
#line 1102 "prog_io.m"
      parse_tree__prog_io__parse_module_specifier_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv2_MaybeModuleSpecifier_6);
    }
#line 1102 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv2_MaybeModuleSpecifier_6));
#line 1102 "prog_io.m"
  }
#line 1102 "prog_io.m"
}

#line 1102 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_attributed_decl_8_p_0_2(
#line 1102 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 1102 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 1102 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 1102 "prog_io.m"
{
#line 1102 "prog_io.m"
  {
#line 1102 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 1102 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_MaybeModuleSpecifier_6;

#line 1102 "prog_io.m"
    {
#line 1102 "prog_io.m"
      parse_tree__prog_io__parse_module_specifier_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv1_MaybeModuleSpecifier_6);
    }
#line 1102 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv1_MaybeModuleSpecifier_6));
#line 1102 "prog_io.m"
  }
#line 1102 "prog_io.m"
}

#line 1102 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_attributed_decl_8_p_0_1(
#line 1102 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 1102 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 1102 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 1102 "prog_io.m"
{
#line 1102 "prog_io.m"
  {
#line 1102 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 1102 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_MaybeModuleSpecifier_6;

#line 1102 "prog_io.m"
    {
#line 1102 "prog_io.m"
      parse_tree__prog_io__parse_module_specifier_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_MaybeModuleSpecifier_6);
    }
#line 1102 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_MaybeModuleSpecifier_6));
#line 1102 "prog_io.m"
  }
#line 1102 "prog_io.m"
}

#line 1049 "prog_io.m"
static MR_bool MR_CALL 
parse_tree__prog_io__parse_attributed_decl_8_p_0(
#line 1049 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_9,
#line 1049 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_10,
#line 1049 "prog_io.m"
  MR_String parse_tree__prog_io__Functor_11,
#line 1049 "prog_io.m"
  MR_Word parse_tree__prog_io__ArgTerms_12,
#line 1049 "prog_io.m"
  MR_Word parse_tree__prog_io__Attributes_13,
#line 1049 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_14,
#line 1049 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_15,
#line 1049 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_16)
#line 1049 "prog_io.m"
{
#line 1056 "prog_io.m"
  {
#line 1056 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1056 "prog_io.m"
    if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "func") == 0))
#line 1086 "prog_io.m"
      {
#line 1086 "prog_io.m"
        MR_Word parse_tree__prog_io__DeclTerm_27;
#line 1086 "prog_io.m"
        MR_Word parse_tree__prog_io__V_72_72;

#line 1087 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 1087 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1087 "prog_io.m"
          {
#line 1087 "prog_io.m"
            parse_tree__prog_io__DeclTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 0)));
#line 1087 "prog_io.m"
            parse_tree__prog_io__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 1)));
#line 1087 "prog_io.m"
            parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1086 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1086 "prog_io.m"
              {
#line 1088 "prog_io.m"
                {
#line 1088 "prog_io.m"
                  parse_tree__prog_io__parse_pred_or_func_decl_8_p_0((MR_Integer) 1, parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__DeclTerm_27, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, parse_tree__prog_io__MaybeItem_16);
                }
#line 1088 "prog_io.m"
                parse_tree__prog_io__succeeded = MR_TRUE;
#line 1086 "prog_io.m"
              }
#line 1087 "prog_io.m"
          }
#line 1086 "prog_io.m"
      }
#line 1056 "prog_io.m"
    else
#line 1056 "prog_io.m"
      if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "inst") == 0))
#line 1061 "prog_io.m"
        {
#line 1061 "prog_io.m"
          MR_Word parse_tree__prog_io__TypeCtorInfo_127_127;
#line 1061 "prog_io.m"
          MR_Word parse_tree__prog_io__InstDeclTerm_18;
#line 1061 "prog_io.m"
          MR_Word parse_tree__prog_io__MaybeItem0_19;
#line 1061 "prog_io.m"
          MR_Word parse_tree__prog_io__V_79_79;

#line 1062 "prog_io.m"
          parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 1062 "prog_io.m"
          if (parse_tree__prog_io__succeeded)
#line 1062 "prog_io.m"
            {
#line 1062 "prog_io.m"
              parse_tree__prog_io__InstDeclTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 0)));
#line 1062 "prog_io.m"
              parse_tree__prog_io__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 1)));
#line 1062 "prog_io.m"
              parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_79_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1061 "prog_io.m"
              if (parse_tree__prog_io__succeeded)
#line 1061 "prog_io.m"
                {
#line 1063 "prog_io.m"
                  {
#line 1063 "prog_io.m"
                    parse_tree__prog_io_mode_defn__parse_inst_defn_6_p_0(parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__InstDeclTerm_18, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, &parse_tree__prog_io__MaybeItem0_19);
                  }
#line 12873 "parse_tree.prog_io.c"
                  parse_tree__prog_io__TypeCtorInfo_127_127 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1065 "prog_io.m"
                  {
#line 1065 "prog_io.m"
                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_127_127, parse_tree__prog_io__MaybeItem0_19, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                  }
#line 1065 "prog_io.m"
                  parse_tree__prog_io__succeeded = MR_TRUE;
#line 1061 "prog_io.m"
                }
#line 1062 "prog_io.m"
            }
#line 1061 "prog_io.m"
        }
#line 1056 "prog_io.m"
      else
#line 1056 "prog_io.m"
        if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "mode") == 0))
#line 1067 "prog_io.m"
          {
#line 1067 "prog_io.m"
            MR_Word parse_tree__prog_io__SubTerm_20;
#line 1067 "prog_io.m"
            MR_Word parse_tree__prog_io__V_73_73;
#line 1074 "prog_io.m"
            MR_Word parse_tree__prog_io__HeadTerm_21;
#line 1074 "prog_io.m"
            MR_Word parse_tree__prog_io__BodyTerm_22;
#line 1069 "prog_io.m"
            MR_Word parse_tree__prog_io__V_74_74;
#line 1069 "prog_io.m"
            MR_String parse_tree__prog_io__V_75_75;
#line 1069 "prog_io.m"
            MR_Word parse_tree__prog_io__V_76_76;
#line 1069 "prog_io.m"
            MR_Word parse_tree__prog_io__V_77_77;
#line 1069 "prog_io.m"
            MR_Word parse_tree__prog_io__V_78_78;
#line 1069 "prog_io.m"
            MR_Word parse_tree__prog_io__V_23_23;

#line 1068 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 1068 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1068 "prog_io.m"
              {
#line 1068 "prog_io.m"
                parse_tree__prog_io__SubTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 0)));
#line 1068 "prog_io.m"
                parse_tree__prog_io__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 1)));
#line 1068 "prog_io.m"
                parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1067 "prog_io.m"
                  {
#line 1069 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__SubTerm_20)) == (MR_mktag((MR_Integer) 0)));
#line 1069 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1069 "prog_io.m"
                      {
#line 1069 "prog_io.m"
                        parse_tree__prog_io__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__SubTerm_20, (MR_Integer) 0)));
#line 1069 "prog_io.m"
                        parse_tree__prog_io__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__SubTerm_20, (MR_Integer) 1)));
#line 1069 "prog_io.m"
                        parse_tree__prog_io__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__SubTerm_20, (MR_Integer) 2)));
#line 1069 "prog_io.m"
                        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_74_74)) == (MR_mktag((MR_Integer) 0)));
#line 1069 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1069 "prog_io.m"
                          {
#line 1069 "prog_io.m"
                            parse_tree__prog_io__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_74_74, (MR_Integer) 0)));
#line 1069 "prog_io.m"
                            parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__V_75_75, (MR_String) "==") == 0);
#line 1069 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 1069 "prog_io.m"
                              {
#line 1069 "prog_io.m"
                                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_76_76)) == (MR_mktag((MR_Integer) 1)));
#line 1069 "prog_io.m"
                                if (parse_tree__prog_io__succeeded)
#line 1069 "prog_io.m"
                                  {
#line 1069 "prog_io.m"
                                    parse_tree__prog_io__HeadTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_76_76, (MR_Integer) 0)));
#line 1069 "prog_io.m"
                                    parse_tree__prog_io__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_76_76, (MR_Integer) 1)));
#line 1069 "prog_io.m"
                                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 1069 "prog_io.m"
                                    if (parse_tree__prog_io__succeeded)
#line 1069 "prog_io.m"
                                      {
#line 1069 "prog_io.m"
                                        parse_tree__prog_io__BodyTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_77_77, (MR_Integer) 0)));
#line 1069 "prog_io.m"
                                        parse_tree__prog_io__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_77_77, (MR_Integer) 1)));
#line 1069 "prog_io.m"
                                        parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1069 "prog_io.m"
                                      }
#line 1069 "prog_io.m"
                                  }
#line 1069 "prog_io.m"
                              }
#line 1069 "prog_io.m"
                          }
#line 1069 "prog_io.m"
                      }
#line 1074 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1071 "prog_io.m"
                      {
#line 1071 "prog_io.m"
                        MR_Word parse_tree__prog_io__BeforeCondTerm_24;
#line 1071 "prog_io.m"
                        MR_Word parse_tree__prog_io__Condition_25;

#line 1071 "prog_io.m"
                        {
#line 1071 "prog_io.m"
                          parse_tree__prog_io_util__parse_condition_suffix_3_p_0(parse_tree__prog_io__BodyTerm_22, &parse_tree__prog_io__BeforeCondTerm_24, &parse_tree__prog_io__Condition_25);
                        }
#line 1072 "prog_io.m"
                        {
#line 1072 "prog_io.m"
                          parse_tree__prog_io_mode_defn__parse_mode_defn_8_p_0(parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__HeadTerm_21, parse_tree__prog_io__BeforeCondTerm_24, parse_tree__prog_io__Condition_25, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, parse_tree__prog_io__MaybeItem_16);
                        }
#line 1071 "prog_io.m"
                      }
#line 1074 "prog_io.m"
                    else
#line 1076 "prog_io.m"
                      {
#line 1076 "prog_io.m"
                        parse_tree__prog_io__parse_mode_decl_7_p_0(parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__SubTerm_20, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, parse_tree__prog_io__MaybeItem_16);
                      }
#line 1074 "prog_io.m"
                    parse_tree__prog_io__succeeded = MR_TRUE;
#line 1067 "prog_io.m"
                  }
#line 1068 "prog_io.m"
              }
#line 1067 "prog_io.m"
          }
#line 1056 "prog_io.m"
        else
#line 1056 "prog_io.m"
          if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "pred") == 0))
#line 1086 "prog_io.m"
            {
#line 1086 "prog_io.m"
              MR_Word parse_tree__prog_io__DeclTerm_166;
#line 1086 "prog_io.m"
              MR_Word parse_tree__prog_io__V_167_167;

#line 1087 "prog_io.m"
              parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 1087 "prog_io.m"
              if (parse_tree__prog_io__succeeded)
#line 1087 "prog_io.m"
                {
#line 1087 "prog_io.m"
                  parse_tree__prog_io__DeclTerm_166 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 0)));
#line 1087 "prog_io.m"
                  parse_tree__prog_io__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 1)));
#line 1087 "prog_io.m"
                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_167_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1086 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1086 "prog_io.m"
                    {
#line 1088 "prog_io.m"
                      {
#line 1088 "prog_io.m"
                        parse_tree__prog_io__parse_pred_or_func_decl_8_p_0((MR_Integer) 0, parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__DeclTerm_166, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, parse_tree__prog_io__MaybeItem_16);
                      }
#line 1088 "prog_io.m"
                      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1086 "prog_io.m"
                    }
#line 1087 "prog_io.m"
                }
#line 1086 "prog_io.m"
            }
#line 1056 "prog_io.m"
          else
#line 1056 "prog_io.m"
            if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "type") == 0))
#line 1056 "prog_io.m"
              {
#line 1056 "prog_io.m"
                MR_Word parse_tree__prog_io__TypeDefnTerm_17;
#line 1056 "prog_io.m"
                MR_Word parse_tree__prog_io__V_80_80;

#line 1057 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 1057 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1057 "prog_io.m"
                  {
#line 1057 "prog_io.m"
                    parse_tree__prog_io__TypeDefnTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 0)));
#line 1057 "prog_io.m"
                    parse_tree__prog_io__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 1)));
#line 1057 "prog_io.m"
                    parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1056 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1056 "prog_io.m"
                      {
#line 1058 "prog_io.m"
                        {
#line 1058 "prog_io.m"
                          parse_tree__prog_io_type_defn__parse_type_defn_7_p_0(parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__TypeDefnTerm_17, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, parse_tree__prog_io__MaybeItem_16);
                        }
#line 1058 "prog_io.m"
                        parse_tree__prog_io__succeeded = MR_TRUE;
#line 1056 "prog_io.m"
                      }
#line 1057 "prog_io.m"
                  }
#line 1056 "prog_io.m"
              }
#line 1056 "prog_io.m"
            else
#line 1056 "prog_io.m"
              if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "module") == 0))
#line 1140 "prog_io.m"
                {
#line 1140 "prog_io.m"
                  MR_Word parse_tree__prog_io__TypeCtorInfo_141_141;
#line 1140 "prog_io.m"
                  MR_Word parse_tree__prog_io__ModuleNameTerm_40;
#line 1140 "prog_io.m"
                  MR_Word parse_tree__prog_io__MaybeModuleNameSym_41;
#line 1140 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_63_63;
#line 1140 "prog_io.m"
                  MR_Word parse_tree__prog_io__MaybeItem0_85;

#line 1141 "prog_io.m"
                  parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 1141 "prog_io.m"
                  if (parse_tree__prog_io__succeeded)
#line 1141 "prog_io.m"
                    {
#line 1141 "prog_io.m"
                      parse_tree__prog_io__ModuleNameTerm_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 0)));
#line 1141 "prog_io.m"
                      parse_tree__prog_io__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 1)));
#line 1141 "prog_io.m"
                      parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1140 "prog_io.m"
                      if (parse_tree__prog_io__succeeded)
#line 1140 "prog_io.m"
                        {
#line 1142 "prog_io.m"
                          {
#line 1142 "prog_io.m"
                            parse_tree__prog_io__parse_module_name_4_p_0(parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__ModuleNameTerm_40, &parse_tree__prog_io__MaybeModuleNameSym_41);
                          }
#line 1150 "prog_io.m"
                          if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeModuleNameSym_41)) == (MR_mktag((MR_Integer) 0))))
#line 1152 "prog_io.m"
                            parse_tree__prog_io__MaybeItem0_85 = (MR_Word) parse_tree__prog_io__MaybeModuleNameSym_41;
#line 1150 "prog_io.m"
                          else
#line 1145 "prog_io.m"
                            {
#line 1145 "prog_io.m"
                              MR_Word parse_tree__prog_io__ModuleNameSym_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeModuleNameSym_41, (MR_Integer) 0)));
#line 1145 "prog_io.m"
                              MR_Word parse_tree__prog_io__ItemModuleStart_43;
#line 1145 "prog_io.m"
                              MR_Word parse_tree__prog_io__Item_83;

#line 1146 "prog_io.m"
                              {
#line 1146 "prog_io.m"
                                parse_tree__prog_io__ItemModuleStart_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1146 "prog_io.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_43, 0) = ((MR_Box) (parse_tree__prog_io__ModuleNameSym_42));
#line 1146 "prog_io.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_43, 1) = ((MR_Box) (parse_tree__prog_io__Context_14));
#line 1146 "prog_io.m"
                                MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_43, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_15));
#line 1146 "prog_io.m"
                              }
#line 1148 "prog_io.m"
                              parse_tree__prog_io__Item_83 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io__ItemModuleStart_43);
#line 1149 "prog_io.m"
                              {
#line 1149 "prog_io.m"
                                parse_tree__prog_io__MaybeItem0_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "prog_io.m"
                                MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem0_85, 0) = ((MR_Box) (parse_tree__prog_io__Item_83));
#line 1149 "prog_io.m"
                              }
#line 1145 "prog_io.m"
                            }
#line 13182 "parse_tree.prog_io.c"
                          parse_tree__prog_io__TypeCtorInfo_141_141 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1154 "prog_io.m"
                          {
#line 1154 "prog_io.m"
                            parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_141_141, parse_tree__prog_io__MaybeItem0_85, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                          }
#line 1154 "prog_io.m"
                          parse_tree__prog_io__succeeded = MR_TRUE;
#line 1140 "prog_io.m"
                        }
#line 1141 "prog_io.m"
                    }
#line 1140 "prog_io.m"
                }
#line 1056 "prog_io.m"
              else
#line 1056 "prog_io.m"
                if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "pragma") == 0))
#line 1195 "prog_io.m"
                  {
#line 1195 "prog_io.m"
                    MR_Word parse_tree__prog_io__TypeCtorInfo_147_147;
#line 1195 "prog_io.m"
                    MR_Word parse_tree__prog_io__MaybeItem0_112;

#line 1196 "prog_io.m"
                    {
#line 1196 "prog_io.m"
                      parse_tree__prog_io__succeeded = parse_tree__prog_io_pragma__parse_pragma_6_p_0(parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__ArgTerms_12, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, &parse_tree__prog_io__MaybeItem0_112);
                    }
#line 1195 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 1195 "prog_io.m"
                      {
#line 13217 "parse_tree.prog_io.c"
                        parse_tree__prog_io__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1198 "prog_io.m"
                        {
#line 1198 "prog_io.m"
                          parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_147_147, parse_tree__prog_io__MaybeItem0_112, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                        }
#line 1198 "prog_io.m"
                        parse_tree__prog_io__succeeded = MR_TRUE;
#line 1195 "prog_io.m"
                      }
#line 1195 "prog_io.m"
                  }
#line 1056 "prog_io.m"
                else
#line 1056 "prog_io.m"
                  if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "mutable") == 0))
#line 1257 "prog_io.m"
                    {
#line 1257 "prog_io.m"
                      MR_Word parse_tree__prog_io__TypeCtorInfo_153_153;
#line 1257 "prog_io.m"
                      MR_Word parse_tree__prog_io__MaybeItem0_126;

#line 1258 "prog_io.m"
                      {
#line 1258 "prog_io.m"
                        parse_tree__prog_io__succeeded = parse_tree__prog_io_mutable__parse_mutable_decl_6_p_0(parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__ArgTerms_12, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, &parse_tree__prog_io__MaybeItem0_126);
                      }
#line 1257 "prog_io.m"
                      if (parse_tree__prog_io__succeeded)
#line 1257 "prog_io.m"
                        {
#line 13250 "parse_tree.prog_io.c"
                          parse_tree__prog_io__TypeCtorInfo_153_153 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1260 "prog_io.m"
                          {
#line 1260 "prog_io.m"
                            parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_153_153, parse_tree__prog_io__MaybeItem0_126, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                          }
#line 1260 "prog_io.m"
                          parse_tree__prog_io__succeeded = MR_TRUE;
#line 1257 "prog_io.m"
                        }
#line 1257 "prog_io.m"
                    }
#line 1056 "prog_io.m"
                  else
#line 1056 "prog_io.m"
                    if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "promise") == 0))
#line 1212 "prog_io.m"
                      {
#line 1212 "prog_io.m"
                        MR_Word parse_tree__prog_io__TypeCtorInfo_148_148;
#line 1212 "prog_io.m"
                        MR_Word parse_tree__prog_io__MaybeItem0_113;

#line 1213 "prog_io.m"
                        {
#line 1213 "prog_io.m"
                          parse_tree__prog_io__succeeded = parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 3, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__ArgTerms_12, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, &parse_tree__prog_io__MaybeItem0_113);
                        }
#line 1212 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 1212 "prog_io.m"
                          {
#line 13283 "parse_tree.prog_io.c"
                            parse_tree__prog_io__TypeCtorInfo_148_148 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1215 "prog_io.m"
                            {
#line 1215 "prog_io.m"
                              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_148_148, parse_tree__prog_io__MaybeItem0_113, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                            }
#line 1215 "prog_io.m"
                            parse_tree__prog_io__succeeded = MR_TRUE;
#line 1212 "prog_io.m"
                          }
#line 1212 "prog_io.m"
                      }
#line 1056 "prog_io.m"
                    else
#line 1056 "prog_io.m"
                      if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "external") == 0))
#line 1118 "prog_io.m"
                        {
#line 1118 "prog_io.m"
                          MR_Word parse_tree__prog_io__TypeCtorInfo_140_140;
#line 1118 "prog_io.m"
                          MR_Word parse_tree__prog_io__PredSpecTerm_33;
#line 1118 "prog_io.m"
                          MR_Word parse_tree__prog_io__MaybeBackEnd_34;
#line 1118 "prog_io.m"
                          MR_Word parse_tree__prog_io__MaybeSymSpec_39;
#line 1118 "prog_io.m"
                          MR_Word parse_tree__prog_io__MaybeItem0_82;
#line 1118 "prog_io.m"
                          MR_Word parse_tree__prog_io__V_183_183;
#line 1118 "prog_io.m"
                          MR_Word parse_tree__prog_io__V_184_184;

#line 1120 "prog_io.m"
                          parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 1120 "prog_io.m"
                          if (parse_tree__prog_io__succeeded)
#line 1120 "prog_io.m"
                            {
#line 1120 "prog_io.m"
                              parse_tree__prog_io__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 0)));
#line 1120 "prog_io.m"
                              parse_tree__prog_io__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 1)));
#line 1122 "prog_io.m"
                              if ((parse_tree__prog_io__V_183_183 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1120 "prog_io.m"
                                {
#line 1120 "prog_io.m"
                                  parse_tree__prog_io__PredSpecTerm_33 = parse_tree__prog_io__V_184_184;
#line 1121 "prog_io.m"
                                  parse_tree__prog_io__MaybeBackEnd_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1120 "prog_io.m"
                                  parse_tree__prog_io__succeeded = MR_TRUE;
#line 1120 "prog_io.m"
                                }
#line 1122 "prog_io.m"
                              else
#line 1123 "prog_io.m"
                                {
#line 1123 "prog_io.m"
                                  MR_String parse_tree__prog_io__BackEndFunctor_36;
#line 1123 "prog_io.m"
                                  MR_Word parse_tree__prog_io__BackEnd_38;
#line 1123 "prog_io.m"
                                  MR_Word parse_tree__prog_io__V_65_65;
#line 1123 "prog_io.m"
                                  MR_Word parse_tree__prog_io__V_66_66;
#line 1123 "prog_io.m"
                                  MR_Word parse_tree__prog_io__V_67_67;
#line 1124 "prog_io.m"
                                  MR_Word parse_tree__prog_io__V_37_37;

#line 1123 "prog_io.m"
                                  parse_tree__prog_io__PredSpecTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_183_183, (MR_Integer) 0)));
#line 1123 "prog_io.m"
                                  parse_tree__prog_io__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_183_183, (MR_Integer) 1)));
#line 1123 "prog_io.m"
                                  parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1123 "prog_io.m"
                                  if (parse_tree__prog_io__succeeded)
#line 1123 "prog_io.m"
                                    {
#line 1124 "prog_io.m"
                                      parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_184_184)) == (MR_mktag((MR_Integer) 0)));
#line 1124 "prog_io.m"
                                      if (parse_tree__prog_io__succeeded)
#line 1124 "prog_io.m"
                                        {
#line 1124 "prog_io.m"
                                          parse_tree__prog_io__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_184_184, (MR_Integer) 0)));
#line 1124 "prog_io.m"
                                          parse_tree__prog_io__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_184_184, (MR_Integer) 1)));
#line 1124 "prog_io.m"
                                          parse_tree__prog_io__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_184_184, (MR_Integer) 2)));
#line 1124 "prog_io.m"
                                          parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1123 "prog_io.m"
                                          if (parse_tree__prog_io__succeeded)
#line 1123 "prog_io.m"
                                            {
#line 1124 "prog_io.m"
                                              parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_66_66)) == (MR_mktag((MR_Integer) 0)));
#line 1124 "prog_io.m"
                                              if (parse_tree__prog_io__succeeded)
#line 1124 "prog_io.m"
                                                {
#line 1124 "prog_io.m"
                                                  parse_tree__prog_io__BackEndFunctor_36 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_66_66, (MR_Integer) 0)));
#line 1128 "prog_io.m"
                                                  if ((strcmp(parse_tree__prog_io__BackEndFunctor_36, (MR_String) "low_level_backend") == 0))
#line 1129 "prog_io.m"
                                                    {
#line 1129 "prog_io.m"
                                                      parse_tree__prog_io__BackEnd_38 = (MR_Integer) 1;
#line 1129 "prog_io.m"
                                                      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1129 "prog_io.m"
                                                    }
#line 1128 "prog_io.m"
                                                  else
#line 1128 "prog_io.m"
                                                    if ((strcmp(parse_tree__prog_io__BackEndFunctor_36, (MR_String) "high_level_backend") == 0))
#line 1126 "prog_io.m"
                                                      {
#line 1126 "prog_io.m"
                                                        parse_tree__prog_io__BackEnd_38 = (MR_Integer) 0;
#line 1126 "prog_io.m"
                                                        parse_tree__prog_io__succeeded = MR_TRUE;
#line 1126 "prog_io.m"
                                                      }
#line 1128 "prog_io.m"
                                                    else
#line 1128 "prog_io.m"
                                                      parse_tree__prog_io__succeeded = MR_FALSE;
#line 1123 "prog_io.m"
                                                  if (parse_tree__prog_io__succeeded)
#line 1123 "prog_io.m"
                                                    {
#line 1132 "prog_io.m"
                                                      {
#line 1132 "prog_io.m"
                                                        parse_tree__prog_io__MaybeBackEnd_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "prog_io.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeBackEnd_34, 0) = ((MR_Box) (parse_tree__prog_io__BackEnd_38));
#line 1132 "prog_io.m"
                                                      }
#line 1132 "prog_io.m"
                                                      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1123 "prog_io.m"
                                                    }
#line 1124 "prog_io.m"
                                                }
#line 1123 "prog_io.m"
                                            }
#line 1124 "prog_io.m"
                                        }
#line 1123 "prog_io.m"
                                    }
#line 1123 "prog_io.m"
                                }
#line 1118 "prog_io.m"
                              if (parse_tree__prog_io__succeeded)
#line 1118 "prog_io.m"
                                {
#line 1134 "prog_io.m"
                                  {
#line 1134 "prog_io.m"
                                    parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0(parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__PredSpecTerm_33, &parse_tree__prog_io__MaybeSymSpec_39);
                                  }
#line 13453 "parse_tree.prog_io.c"
                                  parse_tree__prog_io__TypeCtorInfo_140_140 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1136 "prog_io.m"
                                  {
#line 1136 "prog_io.m"
                                    parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_109_97_121_98_101_49_95_95_104_111_50_95_95_91_52_93_95_48_3_p_0(parse_tree__prog_io__MaybeBackEnd_34, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, parse_tree__prog_io__MaybeSymSpec_39, &parse_tree__prog_io__MaybeItem0_82);
                                  }
#line 1138 "prog_io.m"
                                  {
#line 1138 "prog_io.m"
                                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_140_140, parse_tree__prog_io__MaybeItem0_82, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                                  }
#line 1138 "prog_io.m"
                                  parse_tree__prog_io__succeeded = MR_TRUE;
#line 1118 "prog_io.m"
                                }
#line 1120 "prog_io.m"
                            }
#line 1118 "prog_io.m"
                        }
#line 1056 "prog_io.m"
                      else
#line 1056 "prog_io.m"
                        if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "instance") == 0))
#line 1229 "prog_io.m"
                          {
#line 1229 "prog_io.m"
                            MR_Word parse_tree__prog_io__TypeCtorInfo_150_150;
#line 1229 "prog_io.m"
                            MR_Word parse_tree__prog_io__MaybeItemInstance_53;
#line 1229 "prog_io.m"
                            MR_Word parse_tree__prog_io__MaybeItem0_120;

#line 1230 "prog_io.m"
                            {
#line 1230 "prog_io.m"
                              parse_tree__prog_io__succeeded = parse_tree__prog_io_typeclass__parse_instance_6_p_0(parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__ArgTerms_12, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, &parse_tree__prog_io__MaybeItemInstance_53);
                            }
#line 1229 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 1229 "prog_io.m"
                              {
#line 1235 "prog_io.m"
                                if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItemInstance_53)) == (MR_mktag((MR_Integer) 0))))
#line 1237 "prog_io.m"
                                  parse_tree__prog_io__MaybeItem0_120 = (MR_Word) parse_tree__prog_io__MaybeItemInstance_53;
#line 1235 "prog_io.m"
                                else
#line 1233 "prog_io.m"
                                  {
#line 1233 "prog_io.m"
                                    MR_Word parse_tree__prog_io__ItemInstance_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItemInstance_53, (MR_Integer) 0)));
#line 1233 "prog_io.m"
                                    MR_Word parse_tree__prog_io__V_57_57;

#line 1234 "prog_io.m"
                                    {
#line 1234 "prog_io.m"
                                      parse_tree__prog_io__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "prog_io.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1234 "prog_io.m"
                                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) (parse_tree__prog_io__ItemInstance_54));
#line 1234 "prog_io.m"
                                    }
#line 1234 "prog_io.m"
                                    {
#line 1234 "prog_io.m"
                                      parse_tree__prog_io__MaybeItem0_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "prog_io.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem0_120, 0) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 1234 "prog_io.m"
                                    }
#line 1233 "prog_io.m"
                                  }
#line 13528 "parse_tree.prog_io.c"
                                parse_tree__prog_io__TypeCtorInfo_150_150 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1239 "prog_io.m"
                                {
#line 1239 "prog_io.m"
                                  parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_150_150, parse_tree__prog_io__MaybeItem0_120, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                                }
#line 1239 "prog_io.m"
                                parse_tree__prog_io__succeeded = MR_TRUE;
#line 1229 "prog_io.m"
                              }
#line 1229 "prog_io.m"
                          }
#line 1056 "prog_io.m"
                        else
#line 1056 "prog_io.m"
                          if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "interface") == 0))
#line 1111 "prog_io.m"
                            {
#line 1111 "prog_io.m"
                              MR_Word parse_tree__prog_io__TypeCtorInfo_136_164;
#line 1111 "prog_io.m"
                              MR_Word parse_tree__prog_io__ModuleDefn_160;
#line 1111 "prog_io.m"
                              MR_Word parse_tree__prog_io__ItemModuleDefn_161;
#line 1111 "prog_io.m"
                              MR_Word parse_tree__prog_io__Item_162;
#line 1111 "prog_io.m"
                              MR_Word parse_tree__prog_io__MaybeItem0_163;

#line 1112 "prog_io.m"
                              parse_tree__prog_io__succeeded = (parse_tree__prog_io__ArgTerms_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1111 "prog_io.m"
                              if (parse_tree__prog_io__succeeded)
#line 1111 "prog_io.m"
                                {
#line 1107 "prog_io.m"
                                  parse_tree__prog_io__ModuleDefn_160 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13566 "parse_tree.prog_io.c"
                                  parse_tree__prog_io__TypeCtorInfo_136_164 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1113 "prog_io.m"
                                  {
#line 1113 "prog_io.m"
                                    parse_tree__prog_io__ItemModuleDefn_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1113 "prog_io.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_161, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_160));
#line 1113 "prog_io.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_161, 1) = ((MR_Box) (parse_tree__prog_io__Context_14));
#line 1113 "prog_io.m"
                                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_161, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_15));
#line 1113 "prog_io.m"
                                  }
#line 1114 "prog_io.m"
                                  parse_tree__prog_io__Item_162 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_161);
#line 1115 "prog_io.m"
                                  {
#line 1115 "prog_io.m"
                                    parse_tree__prog_io__MaybeItem0_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "prog_io.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem0_163, 0) = ((MR_Box) (parse_tree__prog_io__Item_162));
#line 1115 "prog_io.m"
                                  }
#line 1116 "prog_io.m"
                                  {
#line 1116 "prog_io.m"
                                    parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_136_164, parse_tree__prog_io__MaybeItem0_163, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                                  }
#line 1116 "prog_io.m"
                                  parse_tree__prog_io__succeeded = MR_TRUE;
#line 1111 "prog_io.m"
                                }
#line 1111 "prog_io.m"
                            }
#line 1056 "prog_io.m"
                          else
#line 1056 "prog_io.m"
                            if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "typeclass") == 0))
#line 1217 "prog_io.m"
                              {
#line 1217 "prog_io.m"
                                MR_Word parse_tree__prog_io__TypeCtorInfo_149_149;
#line 1217 "prog_io.m"
                                MR_Word parse_tree__prog_io__MaybeItemTypeClass_51;
#line 1217 "prog_io.m"
                                MR_Word parse_tree__prog_io__MaybeItem0_116;

#line 1218 "prog_io.m"
                                {
#line 1218 "prog_io.m"
                                  parse_tree__prog_io__succeeded = parse_tree__prog_io_typeclass__parse_typeclass_6_p_0(parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__ArgTerms_12, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, &parse_tree__prog_io__MaybeItemTypeClass_51);
                                }
#line 1217 "prog_io.m"
                                if (parse_tree__prog_io__succeeded)
#line 1217 "prog_io.m"
                                  {
#line 1223 "prog_io.m"
                                    if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItemTypeClass_51)) == (MR_mktag((MR_Integer) 0))))
#line 1225 "prog_io.m"
                                      parse_tree__prog_io__MaybeItem0_116 = (MR_Word) parse_tree__prog_io__MaybeItemTypeClass_51;
#line 1223 "prog_io.m"
                                    else
#line 1221 "prog_io.m"
                                      {
#line 1221 "prog_io.m"
                                        MR_Word parse_tree__prog_io__ItemTypeClass_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItemTypeClass_51, (MR_Integer) 0)));
#line 1221 "prog_io.m"
                                        MR_Word parse_tree__prog_io__V_58_58;

#line 1222 "prog_io.m"
                                        {
#line 1222 "prog_io.m"
                                          parse_tree__prog_io__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "prog_io.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1222 "prog_io.m"
                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io__ItemTypeClass_52));
#line 1222 "prog_io.m"
                                        }
#line 1222 "prog_io.m"
                                        {
#line 1222 "prog_io.m"
                                          parse_tree__prog_io__MaybeItem0_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "prog_io.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem0_116, 0) = ((MR_Box) (parse_tree__prog_io__V_58_58));
#line 1222 "prog_io.m"
                                        }
#line 1221 "prog_io.m"
                                      }
#line 13656 "parse_tree.prog_io.c"
                                    parse_tree__prog_io__TypeCtorInfo_149_149 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1227 "prog_io.m"
                                    {
#line 1227 "prog_io.m"
                                      parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_149_149, parse_tree__prog_io__MaybeItem0_116, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                                    }
#line 1227 "prog_io.m"
                                    parse_tree__prog_io__succeeded = MR_TRUE;
#line 1217 "prog_io.m"
                                  }
#line 1217 "prog_io.m"
                              }
#line 1056 "prog_io.m"
                            else
#line 1056 "prog_io.m"
                              if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "end_module") == 0))
#line 1156 "prog_io.m"
                                {
#line 1156 "prog_io.m"
                                  MR_Word parse_tree__prog_io__TypeCtorInfo_142_142;
#line 1156 "prog_io.m"
                                  MR_Word parse_tree__prog_io__ParentOfModuleName_45;
#line 1156 "prog_io.m"
                                  MR_Word parse_tree__prog_io__V_61_61;
#line 1156 "prog_io.m"
                                  MR_Word parse_tree__prog_io__V_62_62;
#line 1156 "prog_io.m"
                                  MR_Word parse_tree__prog_io__MaybeItem0_93;
#line 1156 "prog_io.m"
                                  MR_Word parse_tree__prog_io__ModuleNameTerm_95;
#line 1156 "prog_io.m"
                                  MR_Word parse_tree__prog_io__MaybeModuleNameSym_96;

#line 1157 "prog_io.m"
                                  parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 1157 "prog_io.m"
                                  if (parse_tree__prog_io__succeeded)
#line 1157 "prog_io.m"
                                    {
#line 1157 "prog_io.m"
                                      parse_tree__prog_io__ModuleNameTerm_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 0)));
#line 1157 "prog_io.m"
                                      parse_tree__prog_io__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 1)));
#line 1157 "prog_io.m"
                                      parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1156 "prog_io.m"
                                      if (parse_tree__prog_io__succeeded)
#line 1156 "prog_io.m"
                                        {
#line 1162 "prog_io.m"
                                          {
#line 1162 "prog_io.m"
                                            parse_tree__prog_io__V_62_62 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
                                          }
#line 1162 "prog_io.m"
                                          {
#line 1162 "prog_io.m"
                                            mdbcomp__prim_data__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__V_62_62, &parse_tree__prog_io__ParentOfModuleName_45);
                                          }
#line 1164 "prog_io.m"
                                          {
#line 1164 "prog_io.m"
                                            parse_tree__prog_io__parse_module_name_4_p_0(parse_tree__prog_io__ParentOfModuleName_45, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__ModuleNameTerm_95, &parse_tree__prog_io__MaybeModuleNameSym_96);
                                          }
#line 1172 "prog_io.m"
                                          if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeModuleNameSym_96)) == (MR_mktag((MR_Integer) 0))))
#line 1174 "prog_io.m"
                                            parse_tree__prog_io__MaybeItem0_93 = (MR_Word) parse_tree__prog_io__MaybeModuleNameSym_96;
#line 1172 "prog_io.m"
                                          else
#line 1167 "prog_io.m"
                                            {
#line 1167 "prog_io.m"
                                              MR_Word parse_tree__prog_io__ItemModuleEnd_46;
#line 1167 "prog_io.m"
                                              MR_Word parse_tree__prog_io__Item_87;
#line 1167 "prog_io.m"
                                              MR_Word parse_tree__prog_io__ModuleNameSym_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeModuleNameSym_96, (MR_Integer) 0)));

#line 1168 "prog_io.m"
                                              {
#line 1168 "prog_io.m"
                                                parse_tree__prog_io__ItemModuleEnd_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "prog_io.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_46, 0) = ((MR_Box) (parse_tree__prog_io__ModuleNameSym_88));
#line 1168 "prog_io.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_46, 1) = ((MR_Box) (parse_tree__prog_io__Context_14));
#line 1168 "prog_io.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_46, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_15));
#line 1168 "prog_io.m"
                                              }
#line 1170 "prog_io.m"
                                              parse_tree__prog_io__Item_87 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io__ItemModuleEnd_46);
#line 1171 "prog_io.m"
                                              {
#line 1171 "prog_io.m"
                                                parse_tree__prog_io__MaybeItem0_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "prog_io.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem0_93, 0) = ((MR_Box) (parse_tree__prog_io__Item_87));
#line 1171 "prog_io.m"
                                              }
#line 1167 "prog_io.m"
                                            }
#line 13760 "parse_tree.prog_io.c"
                                          parse_tree__prog_io__TypeCtorInfo_142_142 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1176 "prog_io.m"
                                          {
#line 1176 "prog_io.m"
                                            parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_142_142, parse_tree__prog_io__MaybeItem0_93, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                                          }
#line 1176 "prog_io.m"
                                          parse_tree__prog_io__succeeded = MR_TRUE;
#line 1156 "prog_io.m"
                                        }
#line 1157 "prog_io.m"
                                    }
#line 1156 "prog_io.m"
                                }
#line 1056 "prog_io.m"
                              else
#line 1056 "prog_io.m"
                                if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "use_module") == 0))
#line 1100 "prog_io.m"
                                  {
#line 1100 "prog_io.m"
                                    MR_Word parse_tree__prog_io__ModuleSpecTerm_180;
#line 1100 "prog_io.m"
                                    MR_Word parse_tree__prog_io__V_181_181;
#line 1100 "prog_io.m"
                                    MR_Word parse_tree__prog_io__V_182_182;

#line 1101 "prog_io.m"
                                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 1101 "prog_io.m"
                                    if (parse_tree__prog_io__succeeded)
#line 1101 "prog_io.m"
                                      {
#line 1101 "prog_io.m"
                                        parse_tree__prog_io__ModuleSpecTerm_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 0)));
#line 1101 "prog_io.m"
                                        parse_tree__prog_io__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 1)));
#line 1101 "prog_io.m"
                                        parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_181_181 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1100 "prog_io.m"
                                        if (parse_tree__prog_io__succeeded)
#line 1100 "prog_io.m"
                                          {
#line 1102 "prog_io.m"
                                            {
#line 1102 "prog_io.m"
                                              parse_tree__prog_io__V_182_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "prog_io.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_182_182, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_8[0]));
#line 1102 "prog_io.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_182_182, 1) = ((MR_Box) (parse_tree__prog_io__parse_attributed_decl_8_p_0_1));
#line 1102 "prog_io.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_182_182, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1102 "prog_io.m"
                                              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_182_182, 3) = ((MR_Box) (parse_tree__prog_io__VarSet_10));
#line 1102 "prog_io.m"
                                            }
#line 1102 "prog_io.m"
                                            {
#line 1102 "prog_io.m"
                                              parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_51_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io__V_182_182, parse_tree__prog_io__ModuleSpecTerm_180, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, parse_tree__prog_io__MaybeItem_16);
                                            }
#line 1102 "prog_io.m"
                                            parse_tree__prog_io__succeeded = MR_TRUE;
#line 1100 "prog_io.m"
                                          }
#line 1101 "prog_io.m"
                                      }
#line 1100 "prog_io.m"
                                  }
#line 1056 "prog_io.m"
                                else
#line 1056 "prog_io.m"
                                  if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "export_module") == 0))
#line 1100 "prog_io.m"
                                    {
#line 1100 "prog_io.m"
                                      MR_Word parse_tree__prog_io__ModuleSpecTerm_29;
#line 1100 "prog_io.m"
                                      MR_Word parse_tree__prog_io__V_70_70;
#line 1100 "prog_io.m"
                                      MR_Word parse_tree__prog_io__V_71_71;

#line 1101 "prog_io.m"
                                      parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 1101 "prog_io.m"
                                      if (parse_tree__prog_io__succeeded)
#line 1101 "prog_io.m"
                                        {
#line 1101 "prog_io.m"
                                          parse_tree__prog_io__ModuleSpecTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 0)));
#line 1101 "prog_io.m"
                                          parse_tree__prog_io__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 1)));
#line 1101 "prog_io.m"
                                          parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1100 "prog_io.m"
                                          if (parse_tree__prog_io__succeeded)
#line 1100 "prog_io.m"
                                            {
#line 1102 "prog_io.m"
                                              {
#line 1102 "prog_io.m"
                                                parse_tree__prog_io__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "prog_io.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_71_71, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_8[0]));
#line 1102 "prog_io.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_71_71, 1) = ((MR_Box) (parse_tree__prog_io__parse_attributed_decl_8_p_0_2));
#line 1102 "prog_io.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1102 "prog_io.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_71_71, 3) = ((MR_Box) (parse_tree__prog_io__VarSet_10));
#line 1102 "prog_io.m"
                                              }
#line 1102 "prog_io.m"
                                              {
#line 1102 "prog_io.m"
                                                parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_53_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io__V_71_71, parse_tree__prog_io__ModuleSpecTerm_29, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, parse_tree__prog_io__MaybeItem_16);
                                              }
#line 1102 "prog_io.m"
                                              parse_tree__prog_io__succeeded = MR_TRUE;
#line 1100 "prog_io.m"
                                            }
#line 1101 "prog_io.m"
                                        }
#line 1100 "prog_io.m"
                                    }
#line 1056 "prog_io.m"
                                  else
#line 1056 "prog_io.m"
                                    if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "import_module") == 0))
#line 1100 "prog_io.m"
                                      {
#line 1100 "prog_io.m"
                                        MR_Word parse_tree__prog_io__ModuleSpecTerm_157;
#line 1100 "prog_io.m"
                                        MR_Word parse_tree__prog_io__V_158_158;
#line 1100 "prog_io.m"
                                        MR_Word parse_tree__prog_io__V_159_159;

#line 1101 "prog_io.m"
                                        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 1101 "prog_io.m"
                                        if (parse_tree__prog_io__succeeded)
#line 1101 "prog_io.m"
                                          {
#line 1101 "prog_io.m"
                                            parse_tree__prog_io__ModuleSpecTerm_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 0)));
#line 1101 "prog_io.m"
                                            parse_tree__prog_io__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 1)));
#line 1101 "prog_io.m"
                                            parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_158_158 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1100 "prog_io.m"
                                            if (parse_tree__prog_io__succeeded)
#line 1100 "prog_io.m"
                                              {
#line 1102 "prog_io.m"
                                                {
#line 1102 "prog_io.m"
                                                  parse_tree__prog_io__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "prog_io.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_159_159, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_8[0]));
#line 1102 "prog_io.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_159_159, 1) = ((MR_Box) (parse_tree__prog_io__parse_attributed_decl_8_p_0_3));
#line 1102 "prog_io.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_159_159, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1102 "prog_io.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_159_159, 3) = ((MR_Box) (parse_tree__prog_io__VarSet_10));
#line 1102 "prog_io.m"
                                                }
#line 1102 "prog_io.m"
                                                {
#line 1102 "prog_io.m"
                                                  parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_121_109_108_105_115_116_95_100_101_99_108_95_95_104_111_52_95_95_91_49_93_95_48_7_p_0(parse_tree__prog_io__V_159_159, parse_tree__prog_io__ModuleSpecTerm_157, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, parse_tree__prog_io__MaybeItem_16);
                                                }
#line 1102 "prog_io.m"
                                                parse_tree__prog_io__succeeded = MR_TRUE;
#line 1100 "prog_io.m"
                                              }
#line 1101 "prog_io.m"
                                          }
#line 1100 "prog_io.m"
                                      }
#line 1056 "prog_io.m"
                                    else
#line 1056 "prog_io.m"
                                      if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "implementation") == 0))
#line 1111 "prog_io.m"
                                        {
#line 1111 "prog_io.m"
                                          MR_Word parse_tree__prog_io__TypeCtorInfo_136_136;
#line 1111 "prog_io.m"
                                          MR_Word parse_tree__prog_io__ModuleDefn_30;
#line 1111 "prog_io.m"
                                          MR_Word parse_tree__prog_io__ItemModuleDefn_31;
#line 1111 "prog_io.m"
                                          MR_Word parse_tree__prog_io__Item_32;
#line 1111 "prog_io.m"
                                          MR_Word parse_tree__prog_io__MaybeItem0_81;

#line 1112 "prog_io.m"
                                          parse_tree__prog_io__succeeded = (parse_tree__prog_io__ArgTerms_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1111 "prog_io.m"
                                          if (parse_tree__prog_io__succeeded)
#line 1111 "prog_io.m"
                                            {
#line 1110 "prog_io.m"
                                              parse_tree__prog_io__ModuleDefn_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 13968 "parse_tree.prog_io.c"
                                              parse_tree__prog_io__TypeCtorInfo_136_136 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1113 "prog_io.m"
                                              {
#line 1113 "prog_io.m"
                                                parse_tree__prog_io__ItemModuleDefn_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1113 "prog_io.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_31, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_30));
#line 1113 "prog_io.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_31, 1) = ((MR_Box) (parse_tree__prog_io__Context_14));
#line 1113 "prog_io.m"
                                                MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_31, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_15));
#line 1113 "prog_io.m"
                                              }
#line 1114 "prog_io.m"
                                              parse_tree__prog_io__Item_32 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_31);
#line 1115 "prog_io.m"
                                              {
#line 1115 "prog_io.m"
                                                parse_tree__prog_io__MaybeItem0_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "prog_io.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem0_81, 0) = ((MR_Box) (parse_tree__prog_io__Item_32));
#line 1115 "prog_io.m"
                                              }
#line 1116 "prog_io.m"
                                              {
#line 1116 "prog_io.m"
                                                parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_136_136, parse_tree__prog_io__MaybeItem0_81, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                                              }
#line 1116 "prog_io.m"
                                              parse_tree__prog_io__succeeded = MR_TRUE;
#line 1111 "prog_io.m"
                                            }
#line 1111 "prog_io.m"
                                        }
#line 1056 "prog_io.m"
                                      else
#line 1056 "prog_io.m"
                                        if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "include_module") == 0))
#line 1178 "prog_io.m"
                                          {
#line 1178 "prog_io.m"
                                            MR_Word parse_tree__prog_io__TypeCtorInfo_145_145;
#line 1178 "prog_io.m"
                                            MR_Word parse_tree__prog_io__TypeCtorInfo_146_146;
#line 1178 "prog_io.m"
                                            MR_Word parse_tree__prog_io__ModuleNamesTerm_47;
#line 1178 "prog_io.m"
                                            MR_Word parse_tree__prog_io__MaybeModuleNameSyms_48;
#line 1178 "prog_io.m"
                                            MR_Word parse_tree__prog_io__V_59_59;
#line 1178 "prog_io.m"
                                            MR_Word parse_tree__prog_io__V_60_60;
#line 1178 "prog_io.m"
                                            MR_Word parse_tree__prog_io__MaybeItem0_107;

#line 1179 "prog_io.m"
                                            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 1179 "prog_io.m"
                                            if (parse_tree__prog_io__succeeded)
#line 1179 "prog_io.m"
                                              {
#line 1179 "prog_io.m"
                                                parse_tree__prog_io__ModuleNamesTerm_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 0)));
#line 1179 "prog_io.m"
                                                parse_tree__prog_io__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 1)));
#line 1179 "prog_io.m"
                                                parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1178 "prog_io.m"
                                                if (parse_tree__prog_io__succeeded)
#line 1178 "prog_io.m"
                                                  {
#line 14040 "parse_tree.prog_io.c"
                                                    parse_tree__prog_io__TypeCtorInfo_145_145 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 1180 "prog_io.m"
                                                    {
#line 1180 "prog_io.m"
                                                      parse_tree__prog_io__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1180 "prog_io.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_6[1]));
#line 1180 "prog_io.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io__parse_attributed_decl_8_p_0_4));
#line 1180 "prog_io.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1180 "prog_io.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io__ModuleName_9));
#line 1180 "prog_io.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_60_60, 4) = ((MR_Box) (parse_tree__prog_io__VarSet_10));
#line 1180 "prog_io.m"
                                                    }
#line 1180 "prog_io.m"
                                                    {
#line 1180 "prog_io.m"
                                                      parse_tree__prog_io_util__parse_list_3_p_0(parse_tree__prog_io__TypeCtorInfo_145_145, parse_tree__prog_io__V_60_60, parse_tree__prog_io__ModuleNamesTerm_47, &parse_tree__prog_io__MaybeModuleNameSyms_48);
                                                    }
#line 1189 "prog_io.m"
                                                    if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeModuleNameSyms_48)) == (MR_mktag((MR_Integer) 0))))
#line 1191 "prog_io.m"
                                                      parse_tree__prog_io__MaybeItem0_107 = (MR_Word) parse_tree__prog_io__MaybeModuleNameSyms_48;
#line 1189 "prog_io.m"
                                                    else
#line 1183 "prog_io.m"
                                                      {
#line 1183 "prog_io.m"
                                                        MR_Word parse_tree__prog_io__ModuleNameSyms_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeModuleNameSyms_48, (MR_Integer) 0)));
#line 1183 "prog_io.m"
                                                        MR_Word parse_tree__prog_io__ModuleDefn_99;
#line 1183 "prog_io.m"
                                                        MR_Word parse_tree__prog_io__ItemModuleDefn_100;
#line 1183 "prog_io.m"
                                                        MR_Word parse_tree__prog_io__Item_101;

#line 1184 "prog_io.m"
                                                        {
#line 1184 "prog_io.m"
                                                          parse_tree__prog_io__ModuleDefn_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "prog_io.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1184 "prog_io.m"
                                                          MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_99, 1) = ((MR_Box) (parse_tree__prog_io__ModuleNameSyms_49));
#line 1184 "prog_io.m"
                                                        }
#line 1185 "prog_io.m"
                                                        {
#line 1185 "prog_io.m"
                                                          parse_tree__prog_io__ItemModuleDefn_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1185 "prog_io.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_100, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDefn_99));
#line 1185 "prog_io.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_100, 1) = ((MR_Box) (parse_tree__prog_io__Context_14));
#line 1185 "prog_io.m"
                                                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_100, 2) = ((MR_Box) (parse_tree__prog_io__SeqNum_15));
#line 1185 "prog_io.m"
                                                        }
#line 1187 "prog_io.m"
                                                        parse_tree__prog_io__Item_101 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io__ItemModuleDefn_100);
#line 1188 "prog_io.m"
                                                        {
#line 1188 "prog_io.m"
                                                          parse_tree__prog_io__MaybeItem0_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "prog_io.m"
                                                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem0_107, 0) = ((MR_Box) (parse_tree__prog_io__Item_101));
#line 1188 "prog_io.m"
                                                        }
#line 1183 "prog_io.m"
                                                      }
#line 14114 "parse_tree.prog_io.c"
                                                    parse_tree__prog_io__TypeCtorInfo_146_146 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1193 "prog_io.m"
                                                    {
#line 1193 "prog_io.m"
                                                      parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_146_146, parse_tree__prog_io__MaybeItem0_107, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                                                    }
#line 1193 "prog_io.m"
                                                    parse_tree__prog_io__succeeded = MR_TRUE;
#line 1178 "prog_io.m"
                                                  }
#line 1179 "prog_io.m"
                                              }
#line 1178 "prog_io.m"
                                          }
#line 1056 "prog_io.m"
                                        else
#line 1056 "prog_io.m"
                                          if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "version_numbers") == 0))
#line 1262 "prog_io.m"
                                            {
#line 1262 "prog_io.m"
                                              return parse_tree__prog_io__succeeded = parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_118_101_114_115_105_111_110_95_110_117_109_98_101_114_115_95_95_91_50_93_95_48_7_p_0(parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__ArgTerms_12, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, parse_tree__prog_io__MaybeItem_16);
                                            }
#line 1056 "prog_io.m"
                                          else
#line 1056 "prog_io.m"
                                            if ((((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "finalise") == 0)) || ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "finalize") == 0))))
#line 1251 "prog_io.m"
                                              {
#line 1251 "prog_io.m"
                                                MR_Word parse_tree__prog_io__TypeCtorInfo_152_152;
#line 1251 "prog_io.m"
                                                MR_Word parse_tree__prog_io__V_55_55;
#line 1251 "prog_io.m"
                                                MR_Word parse_tree__prog_io__MaybeItem0_124;
#line 1251 "prog_io.m"
                                                MR_Word parse_tree__prog_io__SubTerm_125;

#line 1252 "prog_io.m"
                                                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 1252 "prog_io.m"
                                                if (parse_tree__prog_io__succeeded)
#line 1252 "prog_io.m"
                                                  {
#line 1252 "prog_io.m"
                                                    parse_tree__prog_io__SubTerm_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 0)));
#line 1252 "prog_io.m"
                                                    parse_tree__prog_io__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 1)));
#line 1252 "prog_io.m"
                                                    parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1251 "prog_io.m"
                                                    if (parse_tree__prog_io__succeeded)
#line 1251 "prog_io.m"
                                                      {
#line 1253 "prog_io.m"
                                                        {
#line 1253 "prog_io.m"
                                                          parse_tree__prog_io_mutable__parse_finalise_decl_6_p_0(parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__SubTerm_125, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, &parse_tree__prog_io__MaybeItem0_124);
                                                        }
#line 14174 "parse_tree.prog_io.c"
                                                        parse_tree__prog_io__TypeCtorInfo_152_152 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1255 "prog_io.m"
                                                        {
#line 1255 "prog_io.m"
                                                          parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_152_152, parse_tree__prog_io__MaybeItem0_124, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                                                        }
#line 1255 "prog_io.m"
                                                        parse_tree__prog_io__succeeded = MR_TRUE;
#line 1251 "prog_io.m"
                                                      }
#line 1252 "prog_io.m"
                                                  }
#line 1251 "prog_io.m"
                                              }
#line 1056 "prog_io.m"
                                            else
#line 1056 "prog_io.m"
                                              if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "promise_exclusive") == 0))
#line 1212 "prog_io.m"
                                                {
#line 1212 "prog_io.m"
                                                  MR_Word parse_tree__prog_io__TypeCtorInfo_148_170;
#line 1212 "prog_io.m"
                                                  MR_Word parse_tree__prog_io__MaybeItem0_169;

#line 1213 "prog_io.m"
                                                  {
#line 1213 "prog_io.m"
                                                    parse_tree__prog_io__succeeded = parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__ArgTerms_12, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, &parse_tree__prog_io__MaybeItem0_169);
                                                  }
#line 1212 "prog_io.m"
                                                  if (parse_tree__prog_io__succeeded)
#line 1212 "prog_io.m"
                                                    {
#line 14209 "parse_tree.prog_io.c"
                                                      parse_tree__prog_io__TypeCtorInfo_148_170 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1215 "prog_io.m"
                                                      {
#line 1215 "prog_io.m"
                                                        parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_148_170, parse_tree__prog_io__MaybeItem0_169, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                                                      }
#line 1215 "prog_io.m"
                                                      parse_tree__prog_io__succeeded = MR_TRUE;
#line 1212 "prog_io.m"
                                                    }
#line 1212 "prog_io.m"
                                                }
#line 1056 "prog_io.m"
                                              else
#line 1056 "prog_io.m"
                                                if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "promise_exhaustive") == 0))
#line 1212 "prog_io.m"
                                                  {
#line 1212 "prog_io.m"
                                                    MR_Word parse_tree__prog_io__TypeCtorInfo_148_176;
#line 1212 "prog_io.m"
                                                    MR_Word parse_tree__prog_io__MaybeItem0_175;

#line 1213 "prog_io.m"
                                                    {
#line 1213 "prog_io.m"
                                                      parse_tree__prog_io__succeeded = parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__ArgTerms_12, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, &parse_tree__prog_io__MaybeItem0_175);
                                                    }
#line 1212 "prog_io.m"
                                                    if (parse_tree__prog_io__succeeded)
#line 1212 "prog_io.m"
                                                      {
#line 14242 "parse_tree.prog_io.c"
                                                        parse_tree__prog_io__TypeCtorInfo_148_176 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1215 "prog_io.m"
                                                        {
#line 1215 "prog_io.m"
                                                          parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_148_176, parse_tree__prog_io__MaybeItem0_175, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                                                        }
#line 1215 "prog_io.m"
                                                        parse_tree__prog_io__succeeded = MR_TRUE;
#line 1212 "prog_io.m"
                                                      }
#line 1212 "prog_io.m"
                                                  }
#line 1056 "prog_io.m"
                                                else
#line 1056 "prog_io.m"
                                                  if ((((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "initialise") == 0)) || ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "initialize") == 0))))
#line 1243 "prog_io.m"
                                                    {
#line 1243 "prog_io.m"
                                                      MR_Word parse_tree__prog_io__TypeCtorInfo_151_151;
#line 1243 "prog_io.m"
                                                      MR_Word parse_tree__prog_io__V_56_56;
#line 1243 "prog_io.m"
                                                      MR_Word parse_tree__prog_io__MaybeItem0_122;
#line 1243 "prog_io.m"
                                                      MR_Word parse_tree__prog_io__SubTerm_123;

#line 1244 "prog_io.m"
                                                      parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 1244 "prog_io.m"
                                                      if (parse_tree__prog_io__succeeded)
#line 1244 "prog_io.m"
                                                        {
#line 1244 "prog_io.m"
                                                          parse_tree__prog_io__SubTerm_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 0)));
#line 1244 "prog_io.m"
                                                          parse_tree__prog_io__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ArgTerms_12, (MR_Integer) 1)));
#line 1244 "prog_io.m"
                                                          parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1243 "prog_io.m"
                                                          if (parse_tree__prog_io__succeeded)
#line 1243 "prog_io.m"
                                                            {
#line 1245 "prog_io.m"
                                                              {
#line 1245 "prog_io.m"
                                                                parse_tree__prog_io_mutable__parse_initialise_decl_6_p_0(parse_tree__prog_io__ModuleName_9, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__SubTerm_123, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, &parse_tree__prog_io__MaybeItem0_122);
                                                              }
#line 14291 "parse_tree.prog_io.c"
                                                              parse_tree__prog_io__TypeCtorInfo_151_151 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1247 "prog_io.m"
                                                              {
#line 1247 "prog_io.m"
                                                                parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_151_151, parse_tree__prog_io__MaybeItem0_122, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                                                              }
#line 1247 "prog_io.m"
                                                              parse_tree__prog_io__succeeded = MR_TRUE;
#line 1243 "prog_io.m"
                                                            }
#line 1244 "prog_io.m"
                                                        }
#line 1243 "prog_io.m"
                                                    }
#line 1056 "prog_io.m"
                                                  else
#line 1056 "prog_io.m"
                                                    if ((strcmp(parse_tree__prog_io__Functor_11, (MR_String) "promise_exclusive_exhaustive") == 0))
#line 1212 "prog_io.m"
                                                      {
#line 1212 "prog_io.m"
                                                        MR_Word parse_tree__prog_io__TypeCtorInfo_148_173;
#line 1212 "prog_io.m"
                                                        MR_Word parse_tree__prog_io__MaybeItem0_172;

#line 1213 "prog_io.m"
                                                        {
#line 1213 "prog_io.m"
                                                          parse_tree__prog_io__succeeded = parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_95_91_49_93_95_48_8_p_0((MR_Integer) 2, parse_tree__prog_io__VarSet_10, parse_tree__prog_io__ArgTerms_12, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__Context_14, parse_tree__prog_io__SeqNum_15, &parse_tree__prog_io__MaybeItem0_172);
                                                        }
#line 1212 "prog_io.m"
                                                        if (parse_tree__prog_io__succeeded)
#line 1212 "prog_io.m"
                                                          {
#line 14326 "parse_tree.prog_io.c"
                                                            parse_tree__prog_io__TypeCtorInfo_148_173 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 1215 "prog_io.m"
                                                            {
#line 1215 "prog_io.m"
                                                              parse_tree__prog_io_util__check_no_attributes_3_p_0(parse_tree__prog_io__TypeCtorInfo_148_173, parse_tree__prog_io__MaybeItem0_172, parse_tree__prog_io__Attributes_13, parse_tree__prog_io__MaybeItem_16);
                                                            }
#line 1215 "prog_io.m"
                                                            parse_tree__prog_io__succeeded = MR_TRUE;
#line 1212 "prog_io.m"
                                                          }
#line 1212 "prog_io.m"
                                                      }
#line 1056 "prog_io.m"
                                                    else
#line 1056 "prog_io.m"
                                                      parse_tree__prog_io__succeeded = MR_FALSE;
#line 1056 "prog_io.m"
    return parse_tree__prog_io__succeeded;
#line 1056 "prog_io.m"
  }
#line 1049 "prog_io.m"
}

#line 1009 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_attrs_and_decl_6_p_0(
#line 1009 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 1009 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_8,
#line 1009 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_9,
#line 1009 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Attributes_0_22,
#line 1009 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_11,
#line 1009 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_12)
#line 1009 "prog_io.m"
{
#line 1034 "prog_io.m"
  while (MR_TRUE)
#line 1034 "prog_io.m"
    {
#line 1034 "prog_io.m"
      /* tailcall optimized into a loop */
#line 1034 "prog_io.m"
      {
#line 1034 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Term_9)) == (MR_mktag((MR_Integer) 0)));
#line 1034 "prog_io.m"
        MR_String parse_tree__prog_io__Functor_13;
#line 1034 "prog_io.m"
        MR_Word parse_tree__prog_io__Args_14;
#line 1034 "prog_io.m"
        MR_Word parse_tree__prog_io__Context_15;
#line 1014 "prog_io.m"
        MR_Word parse_tree__prog_io__V_23_23;

#line 1014 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1014 "prog_io.m"
          {
#line 1014 "prog_io.m"
            parse_tree__prog_io__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_9, (MR_Integer) 0)));
#line 1014 "prog_io.m"
            parse_tree__prog_io__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_9, (MR_Integer) 1)));
#line 1014 "prog_io.m"
            parse_tree__prog_io__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_9, (MR_Integer) 2)));
#line 1014 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 1014 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1014 "prog_io.m"
              parse_tree__prog_io__Functor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_23_23, (MR_Integer) 0)));
#line 1014 "prog_io.m"
          }
#line 1034 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 1021 "prog_io.m"
          {
#line 1021 "prog_io.m"
            MR_Word parse_tree__prog_io__Attribute_16;
#line 1021 "prog_io.m"
            MR_Word parse_tree__prog_io__SubTerm_17;

#line 1016 "prog_io.m"
            {
#line 1016 "prog_io.m"
              parse_tree__prog_io__succeeded = parse_tree__prog_io_util__parse_decl_attribute_4_p_0(parse_tree__prog_io__Functor_13, parse_tree__prog_io__Args_14, &parse_tree__prog_io__Attribute_16, &parse_tree__prog_io__SubTerm_17);
            }
#line 1021 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 1018 "prog_io.m"
              {
#line 1018 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Attributes_24_24;
#line 1018 "prog_io.m"
                MR_Word parse_tree__prog_io__V_25_25;

#line 1018 "prog_io.m"
                {
#line 1018 "prog_io.m"
                  parse_tree__prog_io__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io__Attribute_16));
#line 1018 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__Context_15));
#line 1018 "prog_io.m"
                }
#line 1018 "prog_io.m"
                {
#line 1018 "prog_io.m"
                  parse_tree__prog_io__STATE_VARIABLE_Attributes_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Attributes_24_24, 0) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 1018 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Attributes_24_24, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Attributes_0_22));
#line 1018 "prog_io.m"
                }
#line 1019 "prog_io.m"
                /* direct tailcall eliminated */
#line 1019 "prog_io.m"
                {
#line 1019 "prog_io.m"
                  MR_Word parse_tree__prog_io__Term__tmp_copy_9 = parse_tree__prog_io__SubTerm_17;
#line 1019 "prog_io.m"
                  MR_Word parse_tree__prog_io__STATE_VARIABLE_Attributes_0__tmp_copy_22 = parse_tree__prog_io__STATE_VARIABLE_Attributes_24_24;

#line 1019 "prog_io.m"
                  parse_tree__prog_io__STATE_VARIABLE_Attributes_0_22 = parse_tree__prog_io__STATE_VARIABLE_Attributes_0__tmp_copy_22;
#line 1019 "prog_io.m"
                  parse_tree__prog_io__Term_9 = parse_tree__prog_io__Term__tmp_copy_9;
#line 1019 "prog_io.m"
                }
#line 1019 "prog_io.m"
                continue;
#line 1018 "prog_io.m"
              }
#line 1021 "prog_io.m"
            else
#line 1026 "prog_io.m"
              {
#line 1026 "prog_io.m"
                MR_Word parse_tree__prog_io__MaybeItemPrime_18;

#line 1022 "prog_io.m"
                {
#line 1022 "prog_io.m"
                  parse_tree__prog_io__succeeded = parse_tree__prog_io__parse_attributed_decl_8_p_0(parse_tree__prog_io__ModuleName_7, parse_tree__prog_io__VarSet_8, parse_tree__prog_io__Functor_13, parse_tree__prog_io__Args_14, parse_tree__prog_io__STATE_VARIABLE_Attributes_0_22, parse_tree__prog_io__Context_15, parse_tree__prog_io__SeqNum_11, &parse_tree__prog_io__MaybeItemPrime_18);
                }
#line 1026 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 1025 "prog_io.m"
                  *parse_tree__prog_io__MaybeItem_12 = parse_tree__prog_io__MaybeItemPrime_18;
#line 1026 "prog_io.m"
                else
#line 1027 "prog_io.m"
                  {
#line 1027 "prog_io.m"
                    MR_String parse_tree__prog_io__TermStr_19;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__Pieces_20;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__Spec_21;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_29_29;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_31_31;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_32_32;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_41_41;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_42_42;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_43_43;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_44_44;
#line 1027 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_47_47;

#line 1027 "prog_io.m"
                    {
#line 1027 "prog_io.m"
                      parse_tree__prog_io__TermStr_19 = parse_tree__mercury_to_mercury__mercury_term_to_string_3_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__VarSet_8, (MR_Integer) 0, parse_tree__prog_io__Term_9);
                    }
#line 1029 "prog_io.m"
                    {
#line 1029 "prog_io.m"
                      parse_tree__prog_io__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1029 "prog_io.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io__TermStr_19));
#line 1029 "prog_io.m"
                    }
#line 1028 "prog_io.m"
                    {
#line 1028 "prog_io.m"
                      parse_tree__prog_io__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 1028 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 1028 "prog_io.m"
                    }
#line 1028 "prog_io.m"
                    {
#line 1028 "prog_io.m"
                      parse_tree__prog_io__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1028 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io__V_31_31));
#line 1028 "prog_io.m"
                    }
#line 1028 "prog_io.m"
                    {
#line 1028 "prog_io.m"
                      parse_tree__prog_io__Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[119])));
#line 1028 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_20, 1) = ((MR_Box) (parse_tree__prog_io__V_29_29));
#line 1028 "prog_io.m"
                    }
#line 1031 "prog_io.m"
                    {
#line 1031 "prog_io.m"
                      parse_tree__prog_io__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1031 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_20));
#line 1031 "prog_io.m"
                    }
#line 1031 "prog_io.m"
                    {
#line 1031 "prog_io.m"
                      parse_tree__prog_io__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io__V_44_44));
#line 1031 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1031 "prog_io.m"
                    }
#line 1031 "prog_io.m"
                    {
#line 1031 "prog_io.m"
                      parse_tree__prog_io__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1031 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io__Context_15));
#line 1031 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_42_42, 1) = ((MR_Box) (parse_tree__prog_io__V_43_43));
#line 1031 "prog_io.m"
                    }
#line 1030 "prog_io.m"
                    {
#line 1030 "prog_io.m"
                      parse_tree__prog_io__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io__V_42_42));
#line 1030 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1030 "prog_io.m"
                    }
#line 1030 "prog_io.m"
                    {
#line 1030 "prog_io.m"
                      parse_tree__prog_io__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1030 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1030 "prog_io.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_21, 2) = ((MR_Box) (parse_tree__prog_io__V_41_41));
#line 1030 "prog_io.m"
                    }
#line 1032 "prog_io.m"
                    {
#line 1032 "prog_io.m"
                      parse_tree__prog_io__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1032 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io__Spec_21));
#line 1032 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1032 "prog_io.m"
                    }
#line 1032 "prog_io.m"
                    {
#line 1032 "prog_io.m"
                      MR_Word base;
#line 1032 "prog_io.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1032 "prog_io.m"
                      *parse_tree__prog_io__MaybeItem_12 = base;
#line 1032 "prog_io.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_47_47));
#line 1032 "prog_io.m"
                    }
#line 1027 "prog_io.m"
                  }
#line 1026 "prog_io.m"
              }
#line 1021 "prog_io.m"
          }
#line 1034 "prog_io.m"
        else
#line 1035 "prog_io.m"
          {
#line 1035 "prog_io.m"
            MR_Word parse_tree__prog_io__V_56_56;
#line 1035 "prog_io.m"
            MR_Word parse_tree__prog_io__V_57_57;
#line 1035 "prog_io.m"
            MR_Word parse_tree__prog_io__V_62_62;
#line 1035 "prog_io.m"
            MR_Word parse_tree__prog_io__Context_67;
#line 1035 "prog_io.m"
            MR_Word parse_tree__prog_io__Spec_69;

#line 1035 "prog_io.m"
            {
#line 1035 "prog_io.m"
              parse_tree__prog_io__Context_67 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__Term_9);
            }
#line 1038 "prog_io.m"
            {
#line 1038 "prog_io.m"
              parse_tree__prog_io__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io__Context_67));
#line 1038 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[120])));
#line 1038 "prog_io.m"
            }
#line 1037 "prog_io.m"
            {
#line 1037 "prog_io.m"
              parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io__V_57_57));
#line 1037 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1037 "prog_io.m"
            }
#line 1037 "prog_io.m"
            {
#line 1037 "prog_io.m"
              parse_tree__prog_io__Spec_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1037 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1037 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1037 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_69, 2) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 1037 "prog_io.m"
            }
#line 1039 "prog_io.m"
            {
#line 1039 "prog_io.m"
              parse_tree__prog_io__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io__Spec_69));
#line 1039 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "prog_io.m"
            }
#line 1039 "prog_io.m"
            {
#line 1039 "prog_io.m"
              MR_Word base;
#line 1039 "prog_io.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "prog_io.m"
              *parse_tree__prog_io__MaybeItem_12 = base;
#line 1039 "prog_io.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__V_62_62));
#line 1039 "prog_io.m"
            }
#line 1035 "prog_io.m"
          }
#line 1034 "prog_io.m"
      }
#line 1034 "prog_io.m"
      break;
#line 1034 "prog_io.m"
    }
#line 1009 "prog_io.m"
}

#line 982 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_clause_7_p_0_2(
#line 982 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 982 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 982 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 982 "prog_io.m"
{
#line 982 "prog_io.m"
  {
#line 982 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 982 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_HeadVar__2_80;

#line 982 "prog_io.m"
    {
#line 982 "prog_io.m"
      parse_tree__prog_io__IntroducedFrom__pred__parse_clause__982__1_2_p_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv1_HeadVar__2_80);
    }
#line 982 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv1_HeadVar__2_80));
#line 982 "prog_io.m"
  }
#line 982 "prog_io.m"
}

#line 966 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_clause_7_p_0_1(
#line 966 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 966 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 966 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 966 "prog_io.m"
{
#line 966 "prog_io.m"
  {
#line 966 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 966 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_HeadVar__2_74;

#line 966 "prog_io.m"
    {
#line 966 "prog_io.m"
      parse_tree__prog_io__IntroducedFrom__pred__parse_clause__966__1_2_p_0(((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_HeadVar__2_74);
    }
#line 966 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__2_74));
#line 966 "prog_io.m"
  }
#line 966 "prog_io.m"
}

#line 945 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__parse_clause_7_p_0(
#line 945 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_8,
#line 945 "prog_io.m"
  MR_Word parse_tree__prog_io__HeadTerm_9,
#line 945 "prog_io.m"
  MR_Word parse_tree__prog_io__BodyTerm0_10,
#line 945 "prog_io.m"
  MR_Word parse_tree__prog_io__ProgVarSet0_11,
#line 945 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_12,
#line 945 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_13,
#line 945 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_14)
#line 945 "prog_io.m"
{
#line 949 "prog_io.m"
  {
#line 949 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 949 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeBodyGoal_16;
#line 949 "prog_io.m"
    MR_Word parse_tree__prog_io__ProgVarSet_17;

#line 951 "prog_io.m"
    {
#line 951 "prog_io.m"
      parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io__BodyTerm0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io__MaybeBodyGoal_16, parse_tree__prog_io__ProgVarSet0_11, &parse_tree__prog_io__ProgVarSet_17);
    }
#line 992 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeBodyGoal_16)) == (MR_mktag((MR_Integer) 0))))
#line 994 "prog_io.m"
      *parse_tree__prog_io__MaybeItem_14 = (MR_Word) parse_tree__prog_io__MaybeBodyGoal_16;
#line 992 "prog_io.m"
    else
#line 954 "prog_io.m"
      {
#line 954 "prog_io.m"
        MR_Word parse_tree__prog_io__TypeCtorInfo_72_72 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 954 "prog_io.m"
        MR_Word parse_tree__prog_io__BodyGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeBodyGoal_16, (MR_Integer) 0)));
#line 954 "prog_io.m"
        MR_Word parse_tree__prog_io__VarSet_19;
#line 976 "prog_io.m"
        MR_Word parse_tree__prog_io__FuncHeadTerm_23;
#line 976 "prog_io.m"
        MR_Word parse_tree__prog_io__V_36_36;
#line 958 "prog_io.m"
        MR_Word parse_tree__prog_io__FuncHeadTerm0_20;
#line 958 "prog_io.m"
        MR_Word parse_tree__prog_io__V_33_33;
#line 958 "prog_io.m"
        MR_String parse_tree__prog_io__V_34_34;
#line 958 "prog_io.m"
        MR_Word parse_tree__prog_io__V_35_35;
#line 958 "prog_io.m"
        MR_Word parse_tree__prog_io__V_37_37;
#line 957 "prog_io.m"
        MR_Word parse_tree__prog_io__V_22_22;
#line 958 "prog_io.m"
        MR_Word parse_tree__prog_io__FuncResultTerm_21;

#line 955 "prog_io.m"
        {
#line 955 "prog_io.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io__TypeCtorInfo_72_72, parse_tree__prog_io__ProgVarSet_17, &parse_tree__prog_io__VarSet_19);
        }
#line 957 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__HeadTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 957 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 957 "prog_io.m"
          {
#line 957 "prog_io.m"
            parse_tree__prog_io__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadTerm_9, (MR_Integer) 0)));
#line 957 "prog_io.m"
            parse_tree__prog_io__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadTerm_9, (MR_Integer) 1)));
#line 957 "prog_io.m"
            parse_tree__prog_io__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__HeadTerm_9, (MR_Integer) 2)));
#line 957 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_33_33)) == (MR_mktag((MR_Integer) 0)));
#line 957 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 957 "prog_io.m"
              {
#line 957 "prog_io.m"
                parse_tree__prog_io__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_33_33, (MR_Integer) 0)));
#line 957 "prog_io.m"
                parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__V_34_34, (MR_String) "=") == 0);
#line 958 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 958 "prog_io.m"
                  {
#line 957 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 957 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 957 "prog_io.m"
                      {
#line 957 "prog_io.m"
                        parse_tree__prog_io__FuncHeadTerm0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, (MR_Integer) 0)));
#line 957 "prog_io.m"
                        parse_tree__prog_io__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, (MR_Integer) 1)));
#line 958 "prog_io.m"
                        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 958 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 958 "prog_io.m"
                          {
#line 958 "prog_io.m"
                            parse_tree__prog_io__FuncResultTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_36_36, (MR_Integer) 0)));
#line 958 "prog_io.m"
                            parse_tree__prog_io__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_36_36, (MR_Integer) 1)));
#line 958 "prog_io.m"
                            parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 958 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 958 "prog_io.m"
                              {
#line 959 "prog_io.m"
                                {
#line 959 "prog_io.m"
                                  parse_tree__prog_io__FuncHeadTerm_23 = parse_tree__prog_io__desugar_field_access_1_f_0(parse_tree__prog_io__FuncHeadTerm0_20);
                                }
#line 959 "prog_io.m"
                                parse_tree__prog_io__succeeded = MR_TRUE;
#line 958 "prog_io.m"
                              }
#line 958 "prog_io.m"
                          }
#line 957 "prog_io.m"
                      }
#line 958 "prog_io.m"
                  }
#line 957 "prog_io.m"
              }
#line 957 "prog_io.m"
          }
#line 976 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 961 "prog_io.m"
          {
#line 961 "prog_io.m"
            MR_Word parse_tree__prog_io__MaybeFunctor_25;

#line 962 "prog_io.m"
            {
#line 962 "prog_io.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io__TypeCtorInfo_72_72, parse_tree__prog_io__ModuleName_8, parse_tree__prog_io__FuncHeadTerm_23, parse_tree__prog_io__VarSet_19, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[116]), &parse_tree__prog_io__MaybeFunctor_25);
            }
#line 972 "prog_io.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeFunctor_25)) == (MR_mktag((MR_Integer) 0))))
#line 973 "prog_io.m"
              {
#line 973 "prog_io.m"
                MR_Word parse_tree__prog_io__Specs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeFunctor_25, (MR_Integer) 0)));

#line 974 "prog_io.m"
                {
#line 974 "prog_io.m"
                  MR_Word base;
#line 974 "prog_io.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 974 "prog_io.m"
                  *parse_tree__prog_io__MaybeItem_14 = base;
#line 974 "prog_io.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_31));
#line 974 "prog_io.m"
                }
#line 973 "prog_io.m"
              }
#line 972 "prog_io.m"
            else
#line 965 "prog_io.m"
              {
#line 965 "prog_io.m"
                MR_Word parse_tree__prog_io__TypeInfo_77_77 = (MR_Word) &parse_tree__prog_io_scalar_common_1[0];
#line 965 "prog_io.m"
                MR_Word parse_tree__prog_io__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeFunctor_25, (MR_Integer) 0)));
#line 965 "prog_io.m"
                MR_Word parse_tree__prog_io__ArgTerms0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeFunctor_25, (MR_Integer) 1)));
#line 965 "prog_io.m"
                MR_Word parse_tree__prog_io__ProgArgTerms_28;
#line 965 "prog_io.m"
                MR_Word parse_tree__prog_io__ItemClause_29;
#line 965 "prog_io.m"
                MR_Word parse_tree__prog_io__Item_30;
#line 965 "prog_io.m"
                MR_Word parse_tree__prog_io__V_42_42;

#line 966 "prog_io.m"
                {
#line 966 "prog_io.m"
                  parse_tree__prog_io__V_42_42 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeInfo_77_77, parse_tree__prog_io__ArgTerms0_27, parse_tree__prog_io__V_36_36);
                }
#line 966 "prog_io.m"
                {
#line 966 "prog_io.m"
                  mercury__list__map_3_p_0(parse_tree__prog_io__TypeInfo_77_77, (MR_Word) &parse_tree__prog_io_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_scalar_common_2[2], parse_tree__prog_io__V_42_42, &parse_tree__prog_io__ProgArgTerms_28);
                }
#line 968 "prog_io.m"
                {
#line 968 "prog_io.m"
                  parse_tree__prog_io__ItemClause_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 968 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 968 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_29, 1) = ((MR_Box) (parse_tree__prog_io__ProgVarSet_17));
#line 968 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_29, 2) = ((MR_Box) ((MR_Integer) 1));
#line 968 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_29, 3) = ((MR_Box) (parse_tree__prog_io__Name_26));
#line 968 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_29, 4) = ((MR_Box) (parse_tree__prog_io__ProgArgTerms_28));
#line 968 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_29, 5) = ((MR_Box) (parse_tree__prog_io__BodyGoal_18));
#line 968 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_29, 6) = ((MR_Box) (parse_tree__prog_io__Context_12));
#line 968 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_29, 7) = ((MR_Box) (parse_tree__prog_io__SeqNum_13));
#line 968 "prog_io.m"
                }
#line 970 "prog_io.m"
                {
#line 970 "prog_io.m"
                  parse_tree__prog_io__Item_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 970 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_30, 1) = ((MR_Box) (parse_tree__prog_io__ItemClause_29));
#line 970 "prog_io.m"
                }
#line 971 "prog_io.m"
                {
#line 971 "prog_io.m"
                  MR_Word base;
#line 971 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 971 "prog_io.m"
                  *parse_tree__prog_io__MaybeItem_14 = base;
#line 971 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_30));
#line 971 "prog_io.m"
                }
#line 965 "prog_io.m"
              }
#line 961 "prog_io.m"
          }
#line 976 "prog_io.m"
        else
#line 977 "prog_io.m"
          {
#line 977 "prog_io.m"
            MR_Word parse_tree__prog_io__MaybeFunctor_64;

#line 978 "prog_io.m"
            {
#line 978 "prog_io.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io__TypeCtorInfo_72_72, parse_tree__prog_io__ModuleName_8, parse_tree__prog_io__HeadTerm_9, parse_tree__prog_io__VarSet_19, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[118]), &parse_tree__prog_io__MaybeFunctor_64);
            }
#line 987 "prog_io.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeFunctor_64)) == (MR_mktag((MR_Integer) 0))))
#line 988 "prog_io.m"
              {
#line 988 "prog_io.m"
                MR_Word parse_tree__prog_io__Specs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeFunctor_64, (MR_Integer) 0)));

#line 989 "prog_io.m"
                {
#line 989 "prog_io.m"
                  MR_Word base;
#line 989 "prog_io.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 989 "prog_io.m"
                  *parse_tree__prog_io__MaybeItem_14 = base;
#line 989 "prog_io.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_57));
#line 989 "prog_io.m"
                }
#line 988 "prog_io.m"
              }
#line 987 "prog_io.m"
            else
#line 981 "prog_io.m"
              {
#line 981 "prog_io.m"
                MR_Word parse_tree__prog_io__ArgTerms_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeFunctor_64, (MR_Integer) 1)));
#line 981 "prog_io.m"
                MR_Word parse_tree__prog_io__Name_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeFunctor_64, (MR_Integer) 0)));
#line 981 "prog_io.m"
                MR_Word parse_tree__prog_io__ProgArgTerms_54;
#line 981 "prog_io.m"
                MR_Word parse_tree__prog_io__ItemClause_55;
#line 981 "prog_io.m"
                MR_Word parse_tree__prog_io__Item_56;

#line 982 "prog_io.m"
                {
#line 982 "prog_io.m"
                  mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_scalar_common_2[3], parse_tree__prog_io__ArgTerms_32, &parse_tree__prog_io__ProgArgTerms_54);
                }
#line 983 "prog_io.m"
                {
#line 983 "prog_io.m"
                  parse_tree__prog_io__ItemClause_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 983 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_55, 1) = ((MR_Box) (parse_tree__prog_io__ProgVarSet_17));
#line 983 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_55, 2) = ((MR_Box) ((MR_Integer) 0));
#line 983 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_55, 3) = ((MR_Box) (parse_tree__prog_io__Name_53));
#line 983 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_55, 4) = ((MR_Box) (parse_tree__prog_io__ProgArgTerms_54));
#line 983 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_55, 5) = ((MR_Box) (parse_tree__prog_io__BodyGoal_18));
#line 983 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_55, 6) = ((MR_Box) (parse_tree__prog_io__Context_12));
#line 983 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemClause_55, 7) = ((MR_Box) (parse_tree__prog_io__SeqNum_13));
#line 983 "prog_io.m"
                }
#line 985 "prog_io.m"
                {
#line 985 "prog_io.m"
                  parse_tree__prog_io__Item_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 985 "prog_io.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_56, 1) = ((MR_Box) (parse_tree__prog_io__ItemClause_55));
#line 985 "prog_io.m"
                }
#line 986 "prog_io.m"
                {
#line 986 "prog_io.m"
                  MR_Word base;
#line 986 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 986 "prog_io.m"
                  *parse_tree__prog_io__MaybeItem_14 = base;
#line 986 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_56));
#line 986 "prog_io.m"
                }
#line 981 "prog_io.m"
              }
#line 977 "prog_io.m"
          }
#line 954 "prog_io.m"
      }
#line 949 "prog_io.m"
  }
#line 945 "prog_io.m"
}

#line 882 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_term_to_item_result_6_p_0(
#line 882 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_7,
#line 882 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_8,
#line 882 "prog_io.m"
  MR_Word parse_tree__prog_io__ReadTermResult_9,
#line 882 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_23,
#line 882 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_24,
#line 882 "prog_io.m"
  MR_Word * parse_tree__prog_io__ReadItemResult_11)
#line 882 "prog_io.m"
{
#line 888 "prog_io.m"
  {
#line 888 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 888 "prog_io.m"
    if ((parse_tree__prog_io__ReadTermResult_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "prog_io.m"
      {
#line 889 "prog_io.m"
        *parse_tree__prog_io__ReadItemResult_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 889 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_24 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_23;
#line 888 "prog_io.m"
      }
#line 888 "prog_io.m"
    else
#line 888 "prog_io.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io__ReadTermResult_9)) == (MR_mktag((MR_Integer) 1))))
#line 891 "prog_io.m"
        {
#line 891 "prog_io.m"
          MR_String parse_tree__prog_io__ErrorMsg_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 0)));
#line 891 "prog_io.m"
          MR_Integer parse_tree__prog_io__LineNumber_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 1)));
#line 891 "prog_io.m"
          MR_Word parse_tree__prog_io__Pieces_14;
#line 891 "prog_io.m"
          MR_Word parse_tree__prog_io__Context_15;
#line 891 "prog_io.m"
          MR_Word parse_tree__prog_io__Spec_16;
#line 891 "prog_io.m"
          MR_Word parse_tree__prog_io__V_26_26;
#line 891 "prog_io.m"
          MR_Word parse_tree__prog_io__V_35_35;
#line 891 "prog_io.m"
          MR_Word parse_tree__prog_io__V_36_36;
#line 891 "prog_io.m"
          MR_Word parse_tree__prog_io__V_37_37;
#line 891 "prog_io.m"
          MR_Word parse_tree__prog_io__V_38_38;
#line 891 "prog_io.m"
          MR_Word parse_tree__prog_io__V_41_41;

#line 893 "prog_io.m"
          {
#line 893 "prog_io.m"
            parse_tree__prog_io__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 893 "prog_io.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_12));
#line 893 "prog_io.m"
          }
#line 893 "prog_io.m"
          {
#line 893 "prog_io.m"
            parse_tree__prog_io__Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 0) = ((MR_Box) (parse_tree__prog_io__V_26_26));
#line 893 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 893 "prog_io.m"
          }
#line 894 "prog_io.m"
          {
#line 894 "prog_io.m"
            parse_tree__prog_io__Context_15 = mercury__term__context_init_2_f_0(parse_tree__prog_io__FileName_8, parse_tree__prog_io__LineNumber_13);
          }
#line 896 "prog_io.m"
          {
#line 896 "prog_io.m"
            parse_tree__prog_io__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 896 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_14));
#line 896 "prog_io.m"
          }
#line 896 "prog_io.m"
          {
#line 896 "prog_io.m"
            parse_tree__prog_io__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io__V_38_38));
#line 896 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 896 "prog_io.m"
          }
#line 896 "prog_io.m"
          {
#line 896 "prog_io.m"
            parse_tree__prog_io__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 896 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io__Context_15));
#line 896 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io__V_37_37));
#line 896 "prog_io.m"
          }
#line 895 "prog_io.m"
          {
#line 895 "prog_io.m"
            parse_tree__prog_io__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io__V_36_36));
#line 895 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 895 "prog_io.m"
          }
#line 895 "prog_io.m"
          {
#line 895 "prog_io.m"
            parse_tree__prog_io__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 895 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 895 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 895 "prog_io.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io__V_35_35));
#line 895 "prog_io.m"
          }
#line 897 "prog_io.m"
          {
#line 897 "prog_io.m"
            parse_tree__prog_io__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io__Spec_16));
#line 897 "prog_io.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "prog_io.m"
          }
#line 897 "prog_io.m"
          {
#line 897 "prog_io.m"
            MR_Word base;
#line 897 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 897 "prog_io.m"
            *parse_tree__prog_io__ReadItemResult_11 = base;
#line 897 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_41_41));
#line 897 "prog_io.m"
          }
#line 897 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_24 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_23;
#line 891 "prog_io.m"
        }
#line 888 "prog_io.m"
      else
#line 899 "prog_io.m"
        {
#line 899 "prog_io.m"
          MR_Word parse_tree__prog_io__VarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 0)));
#line 899 "prog_io.m"
          MR_Word parse_tree__prog_io__Term_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__ReadTermResult_9, (MR_Integer) 1)));
#line 899 "prog_io.m"
          MR_Integer parse_tree__prog_io__SeqNum_19;
#line 899 "prog_io.m"
          MR_Word parse_tree__prog_io__MaybeItem_20;

#line 900 "prog_io.m"
          {
#line 900 "prog_io.m"
            mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_19, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_23, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_24);
          }
#line 901 "prog_io.m"
          {
#line 901 "prog_io.m"
            parse_tree__prog_io__parse_item_5_p_0(parse_tree__prog_io__ModuleName_7, parse_tree__prog_io__VarSet_17, parse_tree__prog_io__Term_18, parse_tree__prog_io__SeqNum_19, &parse_tree__prog_io__MaybeItem_20);
          }
#line 905 "prog_io.m"
          if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItem_20)) == (MR_mktag((MR_Integer) 0))))
#line 906 "prog_io.m"
            {
#line 906 "prog_io.m"
              MR_Word parse_tree__prog_io__Specs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItem_20, (MR_Integer) 0)));

#line 907 "prog_io.m"
              {
#line 907 "prog_io.m"
                MR_Word base;
#line 907 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 907 "prog_io.m"
                *parse_tree__prog_io__ReadItemResult_11 = base;
#line 907 "prog_io.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Specs_22));
#line 907 "prog_io.m"
              }
#line 906 "prog_io.m"
            }
#line 905 "prog_io.m"
          else
#line 903 "prog_io.m"
            {
#line 903 "prog_io.m"
              MR_Word parse_tree__prog_io__Item_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem_20, (MR_Integer) 0)));

#line 904 "prog_io.m"
              {
#line 904 "prog_io.m"
                MR_Word base;
#line 904 "prog_io.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io.m"
                *parse_tree__prog_io__ReadItemResult_11 = base;
#line 904 "prog_io.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_21));
#line 904 "prog_io.m"
              }
#line 903 "prog_io.m"
            }
#line 899 "prog_io.m"
        }
#line 888 "prog_io.m"
  }
#line 882 "prog_io.m"
}

#line 797 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_ok_14_p_0_3(
#line 797 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 797 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 797 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 797 "prog_io.m"
{
#line 797 "prog_io.m"
  {
#line 797 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 797 "prog_io.m"
    MR_Word parse_tree__prog_io__conv2_Item_8;

#line 797 "prog_io.m"
    {
#line 797 "prog_io.m"
      parse_tree__prog_io__make_pseudo_include_module_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv2_Item_8);
    }
#line 797 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv2_Item_8));
#line 797 "prog_io.m"
  }
#line 797 "prog_io.m"
}

#line 793 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_ok_14_p_0_2(
#line 793 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 793 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 793 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 793 "prog_io.m"
{
#line 793 "prog_io.m"
  {
#line 793 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 793 "prog_io.m"
    MR_Word parse_tree__prog_io__conv1_Item_8;

#line 793 "prog_io.m"
    {
#line 793 "prog_io.m"
      parse_tree__prog_io__make_pseudo_use_module_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv1_Item_8);
    }
#line 793 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv1_Item_8));
#line 793 "prog_io.m"
  }
#line 793 "prog_io.m"
}

#line 789 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_ok_14_p_0_1(
#line 789 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 789 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_1,
#line 789 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_2)
#line 789 "prog_io.m"
{
#line 789 "prog_io.m"
  {
#line 789 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 789 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_Item_8;

#line 789 "prog_io.m"
    {
#line 789 "prog_io.m"
      parse_tree__prog_io__make_pseudo_import_module_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io__wrapper_arg_1), &parse_tree__prog_io__conv0_Item_8);
    }
#line 789 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io__conv0_Item_8));
#line 789 "prog_io.m"
  }
#line 789 "prog_io.m"
}

#line 759 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_ok_14_p_0(
#line 759 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 759 "prog_io.m"
  MR_Word parse_tree__prog_io__Item_16,
#line 759 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_71,
#line 759 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_ModuleName_72,
#line 759 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_73,
#line 759 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_74,
#line 759 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Items_0_75,
#line 759 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Items_76,
#line 759 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_77,
#line 759 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_78,
#line 759 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_0_79,
#line 759 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_80)
#line 759 "prog_io.m"
{
#line 766 "prog_io.m"
  {
#line 766 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 778 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__Item_16)) == (MR_mktag((MR_Integer) 2))))
#line 786 "prog_io.m"
      {
#line 786 "prog_io.m"
        MR_Word parse_tree__prog_io__ItemModuleDefn_31 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__Item_16), (MR_Integer) 2);
#line 786 "prog_io.m"
        MR_Word parse_tree__prog_io__ModuleDefn_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_31, (MR_Integer) 0)));
#line 786 "prog_io.m"
        MR_Word parse_tree__prog_io__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_31, (MR_Integer) 1)));
#line 786 "prog_io.m"
        MR_Integer parse_tree__prog_io__SeqNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleDefn_31, (MR_Integer) 2)));
#line 792 "prog_io.m"
        MR_Word parse_tree__prog_io__Modules_35;

#line 788 "prog_io.m"
        parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__ModuleDefn_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 788 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 788 "prog_io.m"
          {
#line 788 "prog_io.m"
            parse_tree__prog_io__Modules_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_32, (MR_Integer) 1)));
#line 790 "prog_io.m"
            {
#line 790 "prog_io.m"
              MR_Word parse_tree__prog_io__TypeCtorInfo_127_127;
#line 790 "prog_io.m"
              MR_Word parse_tree__prog_io__ImportItems_36;
#line 790 "prog_io.m"
              MR_Word parse_tree__prog_io__V_108_108;

#line 789 "prog_io.m"
              {
#line 789 "prog_io.m"
                parse_tree__prog_io__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 789 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_108_108, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_6[0]));
#line 789 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_108_108, 1) = ((MR_Box) (parse_tree__prog_io__read_items_loop_ok_14_p_0_1));
#line 789 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_108_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 789 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_108_108, 3) = ((MR_Box) (parse_tree__prog_io__Context_33));
#line 789 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_108_108, 4) = ((MR_Box) (parse_tree__prog_io__SeqNum_34));
#line 789 "prog_io.m"
              }
#line 15543 "parse_tree.prog_io.c"
              parse_tree__prog_io__TypeCtorInfo_127_127 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 789 "prog_io.m"
              {
#line 789 "prog_io.m"
                mercury__list__map_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__prog_io__TypeCtorInfo_127_127, parse_tree__prog_io__V_108_108, parse_tree__prog_io__Modules_35, &parse_tree__prog_io__ImportItems_36);
              }
#line 791 "prog_io.m"
              {
#line 791 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Items_76 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_127_127, parse_tree__prog_io__ImportItems_36, parse_tree__prog_io__STATE_VARIABLE_Items_0_75);
              }
#line 790 "prog_io.m"
            }
#line 788 "prog_io.m"
          }
#line 788 "prog_io.m"
        else
#line 796 "prog_io.m"
          {
#line 796 "prog_io.m"
            MR_Word parse_tree__prog_io__Modules_122;

#line 792 "prog_io.m"
            parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__ModuleDefn_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_32, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 792 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 792 "prog_io.m"
              {
#line 792 "prog_io.m"
                parse_tree__prog_io__Modules_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_32, (MR_Integer) 1)));
#line 794 "prog_io.m"
                {
#line 794 "prog_io.m"
                  MR_Word parse_tree__prog_io__TypeCtorInfo_131_131;
#line 794 "prog_io.m"
                  MR_Word parse_tree__prog_io__UseItems_37;
#line 794 "prog_io.m"
                  MR_Word parse_tree__prog_io__V_110_110;

#line 793 "prog_io.m"
                  {
#line 793 "prog_io.m"
                    parse_tree__prog_io__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 793 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_110_110, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_6[0]));
#line 793 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_110_110, 1) = ((MR_Box) (parse_tree__prog_io__read_items_loop_ok_14_p_0_2));
#line 793 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_110_110, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 793 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_110_110, 3) = ((MR_Box) (parse_tree__prog_io__Context_33));
#line 793 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_110_110, 4) = ((MR_Box) (parse_tree__prog_io__SeqNum_34));
#line 793 "prog_io.m"
                  }
#line 15599 "parse_tree.prog_io.c"
                  parse_tree__prog_io__TypeCtorInfo_131_131 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 793 "prog_io.m"
                  {
#line 793 "prog_io.m"
                    mercury__list__map_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__prog_io__TypeCtorInfo_131_131, parse_tree__prog_io__V_110_110, parse_tree__prog_io__Modules_122, &parse_tree__prog_io__UseItems_37);
                  }
#line 795 "prog_io.m"
                  {
#line 795 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_Items_76 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_131_131, parse_tree__prog_io__UseItems_37, parse_tree__prog_io__STATE_VARIABLE_Items_0_75);
                  }
#line 794 "prog_io.m"
                }
#line 792 "prog_io.m"
              }
#line 792 "prog_io.m"
            else
#line 800 "prog_io.m"
              {
#line 800 "prog_io.m"
                MR_Word parse_tree__prog_io__Modules_121;

#line 796 "prog_io.m"
                parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__ModuleDefn_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_32, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 796 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 796 "prog_io.m"
                  {
#line 796 "prog_io.m"
                    parse_tree__prog_io__Modules_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__ModuleDefn_32, (MR_Integer) 1)));
#line 798 "prog_io.m"
                    {
#line 798 "prog_io.m"
                      MR_Word parse_tree__prog_io__TypeCtorInfo_135_135;
#line 798 "prog_io.m"
                      MR_Word parse_tree__prog_io__IncludeItems_38;
#line 798 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_112_112;

#line 797 "prog_io.m"
                      {
#line 797 "prog_io.m"
                        parse_tree__prog_io__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 797 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_112_112, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_6[0]));
#line 797 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_112_112, 1) = ((MR_Box) (parse_tree__prog_io__read_items_loop_ok_14_p_0_3));
#line 797 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_112_112, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 797 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_112_112, 3) = ((MR_Box) (parse_tree__prog_io__Context_33));
#line 797 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_112_112, 4) = ((MR_Box) (parse_tree__prog_io__SeqNum_34));
#line 797 "prog_io.m"
                      }
#line 15655 "parse_tree.prog_io.c"
                      parse_tree__prog_io__TypeCtorInfo_135_135 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 797 "prog_io.m"
                      {
#line 797 "prog_io.m"
                        mercury__list__map_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, parse_tree__prog_io__TypeCtorInfo_135_135, parse_tree__prog_io__V_112_112, parse_tree__prog_io__Modules_121, &parse_tree__prog_io__IncludeItems_38);
                      }
#line 799 "prog_io.m"
                      {
#line 799 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Items_76 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io__TypeCtorInfo_135_135, parse_tree__prog_io__IncludeItems_38, parse_tree__prog_io__STATE_VARIABLE_Items_0_75);
                      }
#line 798 "prog_io.m"
                    }
#line 796 "prog_io.m"
                  }
#line 796 "prog_io.m"
                else
#line 801 "prog_io.m"
                  {
#line 801 "prog_io.m"
                    MR_Word base;
#line 801 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_Items_76 = base;
#line 801 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 801 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Items_0_75));
#line 801 "prog_io.m"
                  }
#line 800 "prog_io.m"
              }
#line 796 "prog_io.m"
          }
#line 801 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_ModuleName_72 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_71;
#line 801 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_73;
#line 801 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_77;
#line 801 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Error_80 = parse_tree__prog_io__STATE_VARIABLE_Error_0_79;
#line 786 "prog_io.m"
      }
#line 778 "prog_io.m"
    else
#line 778 "prog_io.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io__Item_16)) == (MR_mktag((MR_Integer) 1))))
#line 779 "prog_io.m"
        {
#line 779 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemModuleEnd_27 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__Item_16), (MR_Integer) 1);
#line 779 "prog_io.m"
          MR_Word parse_tree__prog_io__V_115_115;
#line 779 "prog_io.m"
          MR_Word parse_tree__prog_io__NestedModuleName_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_27, (MR_Integer) 0)));
#line 780 "prog_io.m"
          MR_Word parse_tree__prog_io__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_27, (MR_Integer) 1)));
#line 780 "prog_io.m"
          MR_Integer parse_tree__prog_io__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_27, (MR_Integer) 2)));

#line 781 "prog_io.m"
          {
#line 781 "prog_io.m"
            parse_tree__prog_io__V_115_115 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
          }
#line 781 "prog_io.m"
          {
#line 781 "prog_io.m"
            mdbcomp__prim_data__sym_name_get_module_name_default_3_p_0(parse_tree__prog_io__NestedModuleName_120, parse_tree__prog_io__V_115_115, parse_tree__prog_io__STATE_VARIABLE_ModuleName_72);
          }
#line 784 "prog_io.m"
          {
#line 784 "prog_io.m"
            MR_Word base;
#line 784 "prog_io.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 784 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Items_76 = base;
#line 784 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 784 "prog_io.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Items_0_75));
#line 784 "prog_io.m"
          }
#line 784 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_73;
#line 784 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Specs_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_77;
#line 784 "prog_io.m"
          *parse_tree__prog_io__STATE_VARIABLE_Error_80 = parse_tree__prog_io__STATE_VARIABLE_Error_0_79;
#line 779 "prog_io.m"
        }
#line 778 "prog_io.m"
      else
#line 778 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__Item_16)) == (MR_mktag((MR_Integer) 0))))
#line 774 "prog_io.m"
          {
#line 774 "prog_io.m"
            MR_Word parse_tree__prog_io__ItemModuleStart_23 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__Item_16), (MR_Integer) 0);
#line 775 "prog_io.m"
            MR_Word parse_tree__prog_io__V_25_25;
#line 775 "prog_io.m"
            MR_Integer parse_tree__prog_io__V_26_26;

#line 775 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_ModuleName_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_23, (MR_Integer) 0)));
#line 775 "prog_io.m"
            parse_tree__prog_io__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_23, (MR_Integer) 1)));
#line 775 "prog_io.m"
            parse_tree__prog_io__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_23, (MR_Integer) 2)));
#line 777 "prog_io.m"
            {
#line 777 "prog_io.m"
              MR_Word base;
#line 777 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Items_76 = base;
#line 777 "prog_io.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 777 "prog_io.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Items_0_75));
#line 777 "prog_io.m"
            }
#line 777 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_73;
#line 777 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_77;
#line 777 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Error_80 = parse_tree__prog_io__STATE_VARIABLE_Error_0_79;
#line 774 "prog_io.m"
          }
#line 778 "prog_io.m"
        else
#line 778 "prog_io.m"
          if (((((MR_tag((MR_Word) parse_tree__prog_io__Item_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_16, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 827 "prog_io.m"
            {
#line 827 "prog_io.m"
              MR_Word parse_tree__prog_io__ItemNothing_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_16, (MR_Integer) 1)));
#line 827 "prog_io.m"
              MR_Word parse_tree__prog_io__MaybeWarning_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothing_57, (MR_Integer) 0)));
#line 827 "prog_io.m"
              MR_Integer parse_tree__prog_io__NothingSeqNum_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothing_57, (MR_Integer) 2)));
#line 827 "prog_io.m"
              MR_Word parse_tree__prog_io__Context_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemNothing_57, (MR_Integer) 1)));

#line 832 "prog_io.m"
              if ((parse_tree__prog_io__MaybeWarning_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 830 "prog_io.m"
                {
#line 831 "prog_io.m"
                  {
#line 831 "prog_io.m"
                    MR_Word base;
#line 831 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_Items_76 = base;
#line 831 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 831 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Items_0_75));
#line 831 "prog_io.m"
                  }
#line 831 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Specs_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_77;
#line 831 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Error_80 = parse_tree__prog_io__STATE_VARIABLE_Error_0_79;
#line 830 "prog_io.m"
                }
#line 832 "prog_io.m"
              else
#line 833 "prog_io.m"
                {
#line 833 "prog_io.m"
                  MR_Word parse_tree__prog_io__Warning_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeWarning_58, (MR_Integer) 0)));
#line 833 "prog_io.m"
                  MR_Word parse_tree__prog_io__MaybeOption_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_60, (MR_Integer) 0)));
#line 833 "prog_io.m"
                  MR_String parse_tree__prog_io__Msg_62 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_60, (MR_Integer) 1)));
#line 833 "prog_io.m"
                  MR_Word parse_tree__prog_io__Term_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Warning_60, (MR_Integer) 2)));
#line 833 "prog_io.m"
                  MR_Word parse_tree__prog_io__Warn_65;
#line 833 "prog_io.m"
                  MR_Word parse_tree__prog_io__NoWarnItemNothing_69;
#line 833 "prog_io.m"
                  MR_Word parse_tree__prog_io__NoWarnItem_70;

#line 838 "prog_io.m"
                  if ((parse_tree__prog_io__MaybeOption_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 840 "prog_io.m"
                    parse_tree__prog_io__Warn_65 = (MR_Integer) 1;
#line 838 "prog_io.m"
                  else
#line 836 "prog_io.m"
                    {
#line 836 "prog_io.m"
                      MR_Word parse_tree__prog_io__Option_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeOption_61, (MR_Integer) 0)));

#line 837 "prog_io.m"
                      {
#line 837 "prog_io.m"
                        libs__globals__lookup_bool_option_3_p_0(parse_tree__prog_io__Globals_15, parse_tree__prog_io__Option_64, &parse_tree__prog_io__Warn_65);
                      }
#line 836 "prog_io.m"
                    }
#line 856 "prog_io.m"
                  if ((parse_tree__prog_io__Warn_65 == (MR_Integer) 0))
#line 857 "prog_io.m"
                    {
#line 857 "prog_io.m"
                      *parse_tree__prog_io__STATE_VARIABLE_Specs_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_77;
#line 857 "prog_io.m"
                      *parse_tree__prog_io__STATE_VARIABLE_Error_80 = parse_tree__prog_io__STATE_VARIABLE_Error_0_79;
#line 857 "prog_io.m"
                    }
#line 856 "prog_io.m"
                  else
#line 843 "prog_io.m"
                    {
#line 843 "prog_io.m"
                      MR_Word parse_tree__prog_io__Pieces_66;
#line 843 "prog_io.m"
                      MR_Word parse_tree__prog_io__Spec_67;
#line 843 "prog_io.m"
                      MR_Word parse_tree__prog_io__Halt_68;
#line 843 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_85_85;
#line 843 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_86_86;
#line 843 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_92_92;
#line 843 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_93_93;
#line 843 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_94_94;
#line 843 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_95_95;
#line 843 "prog_io.m"
                      MR_Word parse_tree__prog_io__V_96_96;

#line 844 "prog_io.m"
                      {
#line 844 "prog_io.m"
                        parse_tree__prog_io__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "prog_io.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 844 "prog_io.m"
                        MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_86_86, 1) = ((MR_Box) (parse_tree__prog_io__Msg_62));
#line 844 "prog_io.m"
                      }
#line 844 "prog_io.m"
                      {
#line 844 "prog_io.m"
                        parse_tree__prog_io__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io__V_86_86));
#line 844 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[12])));
#line 844 "prog_io.m"
                      }
#line 844 "prog_io.m"
                      {
#line 844 "prog_io.m"
                        parse_tree__prog_io__Pieces_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[114])));
#line 844 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_66, 1) = ((MR_Box) (parse_tree__prog_io__V_85_85));
#line 844 "prog_io.m"
                      }
#line 846 "prog_io.m"
                      {
#line 846 "prog_io.m"
                        parse_tree__prog_io__V_94_94 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__Term_63);
                      }
#line 846 "prog_io.m"
                      {
#line 846 "prog_io.m"
                        parse_tree__prog_io__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 846 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_96_96, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_66));
#line 846 "prog_io.m"
                      }
#line 846 "prog_io.m"
                      {
#line 846 "prog_io.m"
                        parse_tree__prog_io__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_95_95, 0) = ((MR_Box) (parse_tree__prog_io__V_96_96));
#line 846 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 846 "prog_io.m"
                      }
#line 846 "prog_io.m"
                      {
#line 846 "prog_io.m"
                        parse_tree__prog_io__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 846 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_93_93, 0) = ((MR_Box) (parse_tree__prog_io__V_94_94));
#line 846 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_93_93, 1) = ((MR_Box) (parse_tree__prog_io__V_95_95));
#line 846 "prog_io.m"
                      }
#line 845 "prog_io.m"
                      {
#line 845 "prog_io.m"
                        parse_tree__prog_io__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io__V_93_93));
#line 845 "prog_io.m"
                        MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 845 "prog_io.m"
                      }
#line 845 "prog_io.m"
                      {
#line 845 "prog_io.m"
                        parse_tree__prog_io__Spec_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 845 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 845 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 845 "prog_io.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_67, 2) = ((MR_Box) (parse_tree__prog_io__V_92_92));
#line 845 "prog_io.m"
                      }
#line 847 "prog_io.m"
                      {
#line 847 "prog_io.m"
                        MR_Word base;
#line 847 "prog_io.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Specs_78 = base;
#line 847 "prog_io.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_67));
#line 847 "prog_io.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_77));
#line 847 "prog_io.m"
                      }
#line 849 "prog_io.m"
                      {
#line 849 "prog_io.m"
                        libs__globals__lookup_bool_option_3_p_0(parse_tree__prog_io__Globals_15, (MR_Integer) 2, &parse_tree__prog_io__Halt_68);
                      }
#line 853 "prog_io.m"
                      if ((parse_tree__prog_io__Halt_68 == (MR_Integer) 0))
#line 854 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Error_80 = parse_tree__prog_io__STATE_VARIABLE_Error_0_79;
#line 853 "prog_io.m"
                      else
#line 852 "prog_io.m"
                        *parse_tree__prog_io__STATE_VARIABLE_Error_80 = (MR_Integer) 1;
#line 843 "prog_io.m"
                    }
#line 859 "prog_io.m"
                  {
#line 859 "prog_io.m"
                    parse_tree__prog_io__NoWarnItemNothing_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 859 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothing_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 859 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothing_69, 1) = ((MR_Box) (parse_tree__prog_io__Context_123));
#line 859 "prog_io.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io__NoWarnItemNothing_69, 2) = ((MR_Box) (parse_tree__prog_io__NothingSeqNum_59));
#line 859 "prog_io.m"
                  }
#line 860 "prog_io.m"
                  {
#line 860 "prog_io.m"
                    parse_tree__prog_io__NoWarnItem_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "prog_io.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io__NoWarnItem_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 860 "prog_io.m"
                    MR_hl_field(MR_mktag(3), parse_tree__prog_io__NoWarnItem_70, 1) = ((MR_Box) (parse_tree__prog_io__NoWarnItemNothing_69));
#line 860 "prog_io.m"
                  }
#line 861 "prog_io.m"
                  {
#line 861 "prog_io.m"
                    MR_Word base;
#line 861 "prog_io.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_Items_76 = base;
#line 861 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__NoWarnItem_70));
#line 861 "prog_io.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Items_0_75));
#line 861 "prog_io.m"
                  }
#line 833 "prog_io.m"
                }
#line 861 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_ModuleName_72 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_71;
#line 861 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_73;
#line 827 "prog_io.m"
            }
#line 778 "prog_io.m"
          else
#line 778 "prog_io.m"
            if (((((MR_tag((MR_Word) parse_tree__prog_io__Item_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_16, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 804 "prog_io.m"
              {
#line 804 "prog_io.m"
                MR_Word parse_tree__prog_io__ItemPragma_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Item_16, (MR_Integer) 1)));
#line 804 "prog_io.m"
                MR_Word parse_tree__prog_io__Pragma_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPragma_39, (MR_Integer) 1)));
#line 805 "prog_io.m"
                MR_Word parse_tree__prog_io__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPragma_39, (MR_Integer) 0)));
#line 805 "prog_io.m"
                MR_Word parse_tree__prog_io__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPragma_39, (MR_Integer) 2)));
#line 805 "prog_io.m"
                MR_Integer parse_tree__prog_io__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemPragma_39, (MR_Integer) 3)));
#line 808 "prog_io.m"
                MR_Word parse_tree__prog_io__SFNInfo_44;

#line 806 "prog_io.m"
                parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__Pragma_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Pragma_41, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 806 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 806 "prog_io.m"
                  {
#line 806 "prog_io.m"
                    parse_tree__prog_io__SFNInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Pragma_41, (MR_Integer) 1)));
#line 807 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_74 = (MR_String) parse_tree__prog_io__SFNInfo_44;
#line 807 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_Items_76 = parse_tree__prog_io__STATE_VARIABLE_Items_0_75;
#line 806 "prog_io.m"
                  }
#line 806 "prog_io.m"
                else
#line 809 "prog_io.m"
                  {
#line 809 "prog_io.m"
                    {
#line 809 "prog_io.m"
                      MR_Word base;
#line 809 "prog_io.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "prog_io.m"
                      *parse_tree__prog_io__STATE_VARIABLE_Items_76 = base;
#line 809 "prog_io.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 809 "prog_io.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Items_0_75));
#line 809 "prog_io.m"
                    }
#line 809 "prog_io.m"
                    *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_73;
#line 809 "prog_io.m"
                  }
#line 809 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_ModuleName_72 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_71;
#line 809 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_77;
#line 809 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Error_80 = parse_tree__prog_io__STATE_VARIABLE_Error_0_79;
#line 804 "prog_io.m"
              }
#line 778 "prog_io.m"
            else
#line 824 "prog_io.m"
              {
#line 825 "prog_io.m"
                {
#line 825 "prog_io.m"
                  MR_Word base;
#line 825 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "prog_io.m"
                  *parse_tree__prog_io__STATE_VARIABLE_Items_76 = base;
#line 825 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Item_16));
#line 825 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Items_0_75));
#line 825 "prog_io.m"
                }
#line 825 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_ModuleName_72 = parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_71;
#line 825 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_74 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_73;
#line 825 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Specs_78 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_77;
#line 825 "prog_io.m"
                *parse_tree__prog_io__STATE_VARIABLE_Error_80 = parse_tree__prog_io__STATE_VARIABLE_Error_0_79;
#line 824 "prog_io.m"
              }
#line 766 "prog_io.m"
  }
#line 759 "prog_io.m"
}

#line 731 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_2_14_p_0(
#line 731 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_15,
#line 731 "prog_io.m"
  MR_Word parse_tree__prog_io__MaybeItemOrEOF_16,
#line 731 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_26,
#line 731 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_27,
#line 731 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Items_0_28,
#line 731 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Items_29,
#line 731 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_30,
#line 731 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_31,
#line 731 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_0_32,
#line 731 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_33,
#line 731 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_34,
#line 731 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_35)
#line 731 "prog_io.m"
{
#line 740 "prog_io.m"
  {
#line 740 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 740 "prog_io.m"
    if ((parse_tree__prog_io__MaybeItemOrEOF_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "prog_io.m"
      {
#line 740 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Items_29 = parse_tree__prog_io__STATE_VARIABLE_Items_0_28;
#line 740 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Specs_31 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_30;
#line 740 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Error_33 = parse_tree__prog_io__STATE_VARIABLE_Error_0_32;
#line 740 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_35 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_34;
#line 740 "prog_io.m"
      }
#line 740 "prog_io.m"
    else
#line 740 "prog_io.m"
      if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItemOrEOF_16)) == (MR_mktag((MR_Integer) 1))))
#line 746 "prog_io.m"
        {
#line 746 "prog_io.m"
          MR_Word parse_tree__prog_io__ItemSpecs_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItemOrEOF_16, (MR_Integer) 0)));
#line 746 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_49_49;

#line 747 "prog_io.m"
          {
#line 747 "prog_io.m"
            parse_tree__prog_io__STATE_VARIABLE_Specs_49_49 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_24, parse_tree__prog_io__STATE_VARIABLE_Specs_0_30);
          }
#line 749 "prog_io.m"
          {
#line 749 "prog_io.m"
            parse_tree__prog_io__read_items_loop_13_p_0(parse_tree__prog_io__Globals_15, parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_26, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_27, parse_tree__prog_io__STATE_VARIABLE_Items_0_28, parse_tree__prog_io__STATE_VARIABLE_Items_29, parse_tree__prog_io__STATE_VARIABLE_Specs_49_49, parse_tree__prog_io__STATE_VARIABLE_Specs_31, (MR_Integer) 1, parse_tree__prog_io__STATE_VARIABLE_Error_33, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_34, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_35);
#line 749 "prog_io.m"
            return;
          }
#line 746 "prog_io.m"
        }
#line 740 "prog_io.m"
      else
#line 752 "prog_io.m"
        {
#line 752 "prog_io.m"
          MR_Word parse_tree__prog_io__Item_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeItemOrEOF_16, (MR_Integer) 0)));
#line 752 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Items_40_40;
#line 752 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_41_41;
#line 752 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_42_42;
#line 752 "prog_io.m"
          MR_Word parse_tree__prog_io__STATE_VARIABLE_ModuleName_38_60;
#line 752 "prog_io.m"
          MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39_61;

#line 753 "prog_io.m"
          {
#line 753 "prog_io.m"
            parse_tree__prog_io__read_items_loop_ok_14_p_0(parse_tree__prog_io__Globals_15, parse_tree__prog_io__Item_25, parse_tree__prog_io__STATE_VARIABLE_ModuleName_0_26, &parse_tree__prog_io__STATE_VARIABLE_ModuleName_38_60, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_27, &parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39_61, parse_tree__prog_io__STATE_VARIABLE_Items_0_28, &parse_tree__prog_io__STATE_VARIABLE_Items_40_40, parse_tree__prog_io__STATE_VARIABLE_Specs_0_30, &parse_tree__prog_io__STATE_VARIABLE_Specs_41_41, parse_tree__prog_io__STATE_VARIABLE_Error_0_32, &parse_tree__prog_io__STATE_VARIABLE_Error_42_42);
          }
#line 755 "prog_io.m"
          {
#line 755 "prog_io.m"
            parse_tree__prog_io__read_items_loop_13_p_0(parse_tree__prog_io__Globals_15, parse_tree__prog_io__STATE_VARIABLE_ModuleName_38_60, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_39_61, parse_tree__prog_io__STATE_VARIABLE_Items_40_40, parse_tree__prog_io__STATE_VARIABLE_Items_29, parse_tree__prog_io__STATE_VARIABLE_Specs_41_41, parse_tree__prog_io__STATE_VARIABLE_Specs_31, parse_tree__prog_io__STATE_VARIABLE_Error_42_42, parse_tree__prog_io__STATE_VARIABLE_Error_33, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_34, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_35);
#line 755 "prog_io.m"
            return;
          }
#line 752 "prog_io.m"
        }
#line 740 "prog_io.m"
  }
#line 731 "prog_io.m"
}

#line 717 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_items_loop_13_p_0(
#line 717 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_14,
#line 717 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_15,
#line 717 "prog_io.m"
  MR_String parse_tree__prog_io__SourceFileName_16,
#line 717 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Items_0_23,
#line 717 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Items_24,
#line 717 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_25,
#line 717 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_26,
#line 717 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_0_27,
#line 717 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_28,
#line 717 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_29,
#line 717 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_30)
#line 717 "prog_io.m"
{
#line 724 "prog_io.m"
  while (MR_TRUE)
#line 724 "prog_io.m"
    {
#line 724 "prog_io.m"
      /* tailcall optimized into a loop */
#line 724 "prog_io.m"
      {
#line 724 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 724 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeTerm_49;

#line 878 "prog_io.m"
        {
#line 878 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__SourceFileName_16, &parse_tree__prog_io__MaybeTerm_49);
        }
#line 16310 "parse_tree.prog_io.c"
        if ((parse_tree__prog_io__MaybeTerm_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 16312 "parse_tree.prog_io.c"
          {
#line 740 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Items_24 = parse_tree__prog_io__STATE_VARIABLE_Items_0_23;
#line 740 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_26 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_25;
#line 740 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Error_28 = parse_tree__prog_io__STATE_VARIABLE_Error_0_27;
#line 740 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_30 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_29;
#line 16322 "parse_tree.prog_io.c"
          }
#line 16324 "parse_tree.prog_io.c"
        else
#line 16326 "parse_tree.prog_io.c"
          if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeTerm_49)) == (MR_mktag((MR_Integer) 1))))
#line 16328 "parse_tree.prog_io.c"
            {
#line 16330 "parse_tree.prog_io.c"
              MR_String parse_tree__prog_io__ErrorMsg_60 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeTerm_49, (MR_Integer) 0)));
#line 16332 "parse_tree.prog_io.c"
              MR_Integer parse_tree__prog_io__LineNumber_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeTerm_49, (MR_Integer) 1)));
#line 16334 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__Pieces_62;
#line 16336 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__Context_63;
#line 16338 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__Spec_64;
#line 16340 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__V_72_72;
#line 16342 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__V_81_81;
#line 16344 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__V_82_82;
#line 16346 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__V_83_83;
#line 16348 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__V_84_84;
#line 16350 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__ItemSpecs_158;
#line 16352 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_49_171;

#line 893 "prog_io.m"
              {
#line 893 "prog_io.m"
                parse_tree__prog_io__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 893 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_72_72, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_60));
#line 893 "prog_io.m"
              }
#line 893 "prog_io.m"
              {
#line 893 "prog_io.m"
                parse_tree__prog_io__Pieces_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_62, 0) = ((MR_Box) (parse_tree__prog_io__V_72_72));
#line 893 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 893 "prog_io.m"
              }
#line 894 "prog_io.m"
              {
#line 894 "prog_io.m"
                parse_tree__prog_io__Context_63 = mercury__term__context_init_2_f_0(parse_tree__prog_io__SourceFileName_16, parse_tree__prog_io__LineNumber_61);
              }
#line 896 "prog_io.m"
              {
#line 896 "prog_io.m"
                parse_tree__prog_io__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 896 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_62));
#line 896 "prog_io.m"
              }
#line 896 "prog_io.m"
              {
#line 896 "prog_io.m"
                parse_tree__prog_io__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io__V_84_84));
#line 896 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 896 "prog_io.m"
              }
#line 896 "prog_io.m"
              {
#line 896 "prog_io.m"
                parse_tree__prog_io__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 896 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io__Context_63));
#line 896 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_82_82, 1) = ((MR_Box) (parse_tree__prog_io__V_83_83));
#line 896 "prog_io.m"
              }
#line 895 "prog_io.m"
              {
#line 895 "prog_io.m"
                parse_tree__prog_io__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io__V_82_82));
#line 895 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 895 "prog_io.m"
              }
#line 895 "prog_io.m"
              {
#line 895 "prog_io.m"
                parse_tree__prog_io__Spec_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 895 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 895 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 895 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_64, 2) = ((MR_Box) (parse_tree__prog_io__V_81_81));
#line 895 "prog_io.m"
              }
#line 897 "prog_io.m"
              {
#line 897 "prog_io.m"
                parse_tree__prog_io__ItemSpecs_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSpecs_158, 0) = ((MR_Box) (parse_tree__prog_io__Spec_64));
#line 897 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSpecs_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "prog_io.m"
              }
#line 747 "prog_io.m"
              {
#line 747 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_49_171 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_158, parse_tree__prog_io__STATE_VARIABLE_Specs_0_25);
              }
#line 749 "prog_io.m"
              /* direct tailcall eliminated */
#line 749 "prog_io.m"
              {
#line 749 "prog_io.m"
                MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_25 = parse_tree__prog_io__STATE_VARIABLE_Specs_49_171;

#line 749 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Error_0_27 = (MR_Integer) 1;
#line 749 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_0_25 = parse_tree__prog_io__STATE_VARIABLE_Specs_0__tmp_copy_25;
#line 749 "prog_io.m"
              }
#line 749 "prog_io.m"
              continue;
#line 16460 "parse_tree.prog_io.c"
            }
#line 16462 "parse_tree.prog_io.c"
          else
#line 16464 "parse_tree.prog_io.c"
            {
#line 16466 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__VarSet_65 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeTerm_49, (MR_Integer) 0)));
#line 16468 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__Term_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeTerm_49, (MR_Integer) 1)));
#line 16470 "parse_tree.prog_io.c"
              MR_Integer parse_tree__prog_io__SeqNum_67;
#line 16472 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__MaybeItem_68;
#line 16474 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__MaybeItem_188;
#line 16476 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_33_189;

#line 900 "prog_io.m"
              {
#line 900 "prog_io.m"
                mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_67, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_29, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_33_189);
              }
#line 901 "prog_io.m"
              {
#line 901 "prog_io.m"
                parse_tree__prog_io__parse_item_5_p_0(parse_tree__prog_io__ModuleName_15, parse_tree__prog_io__VarSet_65, parse_tree__prog_io__Term_66, parse_tree__prog_io__SeqNum_67, &parse_tree__prog_io__MaybeItem_68);
              }
#line 905 "prog_io.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItem_68)) == (MR_mktag((MR_Integer) 0))))
#line 906 "prog_io.m"
                {
#line 906 "prog_io.m"
                  MR_Word parse_tree__prog_io__Specs_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItem_68, (MR_Integer) 0)));

#line 907 "prog_io.m"
                  {
#line 907 "prog_io.m"
                    parse_tree__prog_io__MaybeItem_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 907 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem_188, 0) = ((MR_Box) (parse_tree__prog_io__Specs_70));
#line 907 "prog_io.m"
                  }
#line 906 "prog_io.m"
                }
#line 905 "prog_io.m"
              else
#line 903 "prog_io.m"
                {
#line 903 "prog_io.m"
                  MR_Word parse_tree__prog_io__Item_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem_68, (MR_Integer) 0)));

#line 904 "prog_io.m"
                  {
#line 904 "prog_io.m"
                    parse_tree__prog_io__MaybeItem_188 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io.m"
                    MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeItem_188, 0) = ((MR_Box) (parse_tree__prog_io__Item_69));
#line 904 "prog_io.m"
                  }
#line 903 "prog_io.m"
                }
#line 726 "prog_io.m"
              {
#line 726 "prog_io.m"
                parse_tree__prog_io__read_items_loop_2_14_p_0(parse_tree__prog_io__Globals_14, parse_tree__prog_io__MaybeItem_188, parse_tree__prog_io__ModuleName_15, parse_tree__prog_io__SourceFileName_16, parse_tree__prog_io__STATE_VARIABLE_Items_0_23, parse_tree__prog_io__STATE_VARIABLE_Items_24, parse_tree__prog_io__STATE_VARIABLE_Specs_0_25, parse_tree__prog_io__STATE_VARIABLE_Specs_26, parse_tree__prog_io__STATE_VARIABLE_Error_0_27, parse_tree__prog_io__STATE_VARIABLE_Error_28, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_33_189, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_30);
#line 726 "prog_io.m"
                return;
              }
#line 16530 "parse_tree.prog_io.c"
            }
#line 724 "prog_io.m"
      }
#line 724 "prog_io.m"
      break;
#line 724 "prog_io.m"
    }
#line 717 "prog_io.m"
}

#line 704 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__make_module_decl_3_p_0(
#line 704 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_4,
#line 704 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_5,
#line 704 "prog_io.m"
  MR_Word * parse_tree__prog_io__Item_6)
#line 704 "prog_io.m"
{
#line 706 "prog_io.m"
  {
#line 706 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 706 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemInfo_7;

#line 707 "prog_io.m"
    {
#line 707 "prog_io.m"
      parse_tree__prog_io__ItemInfo_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 707 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemInfo_7, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_4));
#line 707 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemInfo_7, 1) = ((MR_Box) (parse_tree__prog_io__Context_5));
#line 707 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemInfo_7, 2) = ((MR_Box) ((MR_Integer) -1));
#line 707 "prog_io.m"
    }
#line 708 "prog_io.m"
    *parse_tree__prog_io__Item_6 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io__ItemInfo_7);
#line 706 "prog_io.m"
  }
#line 704 "prog_io.m"
}

#line 616 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_first_item_12_p_0(
#line 616 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_13,
#line 616 "prog_io.m"
  MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39,
#line 616 "prog_io.m"
  MR_String * parse_tree__prog_io__STATE_VARIABLE_SourceFileName_40,
#line 616 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_15,
#line 616 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleDeclItem_16,
#line 616 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeSecondTerm_17,
#line 616 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_18,
#line 616 "prog_io.m"
  MR_Word * parse_tree__prog_io__Error_19,
#line 616 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_41,
#line 616 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42)
#line 616 "prog_io.m"
{
#line 622 "prog_io.m"
  while (MR_TRUE)
#line 622 "prog_io.m"
    {
#line 622 "prog_io.m"
      /* tailcall optimized into a loop */
#line 622 "prog_io.m"
      {
#line 622 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 622 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeFirstTerm_22;
#line 622 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeFirstItem_23;
#line 622 "prog_io.m"
        MR_Word parse_tree__prog_io__V_46_46;
#line 622 "prog_io.m"
        MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47;
#line 640 "prog_io.m"
        MR_Word parse_tree__prog_io__SFNInfo_30;
#line 632 "prog_io.m"
        MR_Word parse_tree__prog_io__FirstItem_24;
#line 632 "prog_io.m"
        MR_Word parse_tree__prog_io__FirstItemPragma_25;
#line 632 "prog_io.m"
        MR_Word parse_tree__prog_io__Pragma_27;
#line 634 "prog_io.m"
        MR_Word parse_tree__prog_io__V_26_26;
#line 634 "prog_io.m"
        MR_Word parse_tree__prog_io__V_28_28;
#line 634 "prog_io.m"
        MR_Integer parse_tree__prog_io__V_29_29;

#line 626 "prog_io.m"
        {
#line 626 "prog_io.m"
          mercury__parser__read_term_filename_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39, &parse_tree__prog_io__MaybeFirstTerm_22);
        }
#line 627 "prog_io.m"
        {
#line 627 "prog_io.m"
          parse_tree__prog_io__V_46_46 = parse_tree__prog_io_sym_name__root_module_name_0_f_0();
        }
#line 627 "prog_io.m"
        {
#line 627 "prog_io.m"
          parse_tree__prog_io__read_term_to_item_result_6_p_0(parse_tree__prog_io__V_46_46, parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39, parse_tree__prog_io__MaybeFirstTerm_22, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_41, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47, &parse_tree__prog_io__MaybeFirstItem_23);
        }
#line 632 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeFirstItem_23)) == (MR_mktag((MR_Integer) 2)));
#line 632 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 632 "prog_io.m"
          {
#line 632 "prog_io.m"
            parse_tree__prog_io__FirstItem_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstItem_23, (MR_Integer) 0)));
#line 633 "prog_io.m"
            parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__FirstItem_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstItem_24, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 633 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 633 "prog_io.m"
              {
#line 633 "prog_io.m"
                parse_tree__prog_io__FirstItemPragma_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__FirstItem_24, (MR_Integer) 1)));
#line 634 "prog_io.m"
                parse_tree__prog_io__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemPragma_25, (MR_Integer) 0)));
#line 634 "prog_io.m"
                parse_tree__prog_io__Pragma_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemPragma_25, (MR_Integer) 1)));
#line 634 "prog_io.m"
                parse_tree__prog_io__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemPragma_25, (MR_Integer) 2)));
#line 634 "prog_io.m"
                parse_tree__prog_io__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemPragma_25, (MR_Integer) 3)));
#line 635 "prog_io.m"
                parse_tree__prog_io__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io__Pragma_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Pragma_27, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 635 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 635 "prog_io.m"
                  parse_tree__prog_io__SFNInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io__Pragma_27, (MR_Integer) 1)));
#line 633 "prog_io.m"
              }
#line 632 "prog_io.m"
          }
#line 640 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 637 "prog_io.m"
          {
#line 637 "prog_io.m"
            MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_48_48 = (MR_String) parse_tree__prog_io__SFNInfo_30;

#line 638 "prog_io.m"
            /* direct tailcall eliminated */
#line 638 "prog_io.m"
            {
#line 638 "prog_io.m"
              MR_String parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_39 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_48_48;
#line 638 "prog_io.m"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_41 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47;

#line 638 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0_41 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_0__tmp_copy_41;
#line 638 "prog_io.m"
              parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0__tmp_copy_39;
#line 638 "prog_io.m"
            }
#line 638 "prog_io.m"
            continue;
#line 637 "prog_io.m"
          }
#line 640 "prog_io.m"
        else
#line 678 "prog_io.m"
          {
#line 678 "prog_io.m"
            MR_Word parse_tree__prog_io__StartModuleName_32;
#line 678 "prog_io.m"
            MR_Word parse_tree__prog_io__FirstContext_33;
#line 642 "prog_io.m"
            MR_Word parse_tree__prog_io__FirstItemModuleStart_31;
#line 642 "prog_io.m"
            MR_Word parse_tree__prog_io__FirstItem_102;
#line 644 "prog_io.m"
            MR_Integer parse_tree__prog_io___FirstItemSeqNum_34;

#line 642 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeFirstItem_23)) == (MR_mktag((MR_Integer) 2)));
#line 642 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 642 "prog_io.m"
              {
#line 642 "prog_io.m"
                parse_tree__prog_io__FirstItem_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstItem_23, (MR_Integer) 0)));
#line 643 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__FirstItem_102)) == (MR_mktag((MR_Integer) 0)));
#line 643 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 643 "prog_io.m"
                  {
#line 643 "prog_io.m"
                    parse_tree__prog_io__FirstItemModuleStart_31 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__FirstItem_102), (MR_Integer) 0);
#line 644 "prog_io.m"
                    parse_tree__prog_io__StartModuleName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemModuleStart_31, (MR_Integer) 0)));
#line 644 "prog_io.m"
                    parse_tree__prog_io__FirstContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemModuleStart_31, (MR_Integer) 1)));
#line 644 "prog_io.m"
                    parse_tree__prog_io___FirstItemSeqNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__FirstItemModuleStart_31, (MR_Integer) 2)));
#line 644 "prog_io.m"
                    parse_tree__prog_io__succeeded = MR_TRUE;
#line 643 "prog_io.m"
                  }
#line 642 "prog_io.m"
              }
#line 678 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 675 "prog_io.m"
              {
#line 649 "prog_io.m"
                {
#line 649 "prog_io.m"
                  parse_tree__prog_io__succeeded = mdbcomp__prim_data__match_sym_name_2_p_0(parse_tree__prog_io__StartModuleName_32, parse_tree__prog_io__DefaultModuleName_13);
                }
#line 653 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 650 "prog_io.m"
                  {
#line 650 "prog_io.m"
                    *parse_tree__prog_io__ModuleName_15 = parse_tree__prog_io__DefaultModuleName_13;
#line 651 "prog_io.m"
                    *parse_tree__prog_io__Specs_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "prog_io.m"
                    *parse_tree__prog_io__Error_19 = (MR_Integer) 0;
#line 650 "prog_io.m"
                  }
#line 653 "prog_io.m"
                else
#line 657 "prog_io.m"
                  {
#line 653 "prog_io.m"
                    {
#line 653 "prog_io.m"
                      parse_tree__prog_io__succeeded = mdbcomp__prim_data__match_sym_name_2_p_0(parse_tree__prog_io__DefaultModuleName_13, parse_tree__prog_io__StartModuleName_32);
                    }
#line 657 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 654 "prog_io.m"
                      {
#line 654 "prog_io.m"
                        *parse_tree__prog_io__ModuleName_15 = parse_tree__prog_io__StartModuleName_32;
#line 655 "prog_io.m"
                        *parse_tree__prog_io__Specs_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "prog_io.m"
                        *parse_tree__prog_io__Error_19 = (MR_Integer) 0;
#line 654 "prog_io.m"
                      }
#line 657 "prog_io.m"
                    else
#line 661 "prog_io.m"
                      {
#line 661 "prog_io.m"
                        MR_Word parse_tree__prog_io__Pieces_35;
#line 661 "prog_io.m"
                        MR_Word parse_tree__prog_io__Msgs_37;
#line 661 "prog_io.m"
                        MR_Word parse_tree__prog_io__Spec_38;
#line 661 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_54_54;
#line 661 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_55_55;
#line 661 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_56_56;
#line 661 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_59_59;
#line 661 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_60_60;
#line 661 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_71_71;
#line 661 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_74_74;
#line 661 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_75_75;
#line 661 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_79_79;
#line 661 "prog_io.m"
                        MR_Word parse_tree__prog_io__V_80_80;

#line 659 "prog_io.m"
                        {
#line 659 "prog_io.m"
                          parse_tree__prog_io__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_io.m"
                          MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39));
#line 659 "prog_io.m"
                        }
#line 660 "prog_io.m"
                        {
#line 660 "prog_io.m"
                          parse_tree__prog_io__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "prog_io.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 660 "prog_io.m"
                          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io__StartModuleName_32));
#line 660 "prog_io.m"
                        }
#line 660 "prog_io.m"
                        {
#line 660 "prog_io.m"
                          parse_tree__prog_io__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io__V_60_60));
#line 660 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 660 "prog_io.m"
                        }
#line 659 "prog_io.m"
                        {
#line 659 "prog_io.m"
                          parse_tree__prog_io__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[112])));
#line 659 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_56_56, 1) = ((MR_Box) (parse_tree__prog_io__V_59_59));
#line 659 "prog_io.m"
                        }
#line 659 "prog_io.m"
                        {
#line 659 "prog_io.m"
                          parse_tree__prog_io__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io__V_55_55));
#line 659 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io__V_56_56));
#line 659 "prog_io.m"
                        }
#line 659 "prog_io.m"
                        {
#line 659 "prog_io.m"
                          parse_tree__prog_io__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[111])));
#line 659 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_35, 1) = ((MR_Box) (parse_tree__prog_io__V_54_54));
#line 659 "prog_io.m"
                        }
#line 665 "prog_io.m"
                        {
#line 665 "prog_io.m"
                          parse_tree__prog_io__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 665 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_35));
#line 665 "prog_io.m"
                        }
#line 664 "prog_io.m"
                        {
#line 664 "prog_io.m"
                          parse_tree__prog_io__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io__V_75_75));
#line 664 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "prog_io.m"
                        }
#line 665 "prog_io.m"
                        {
#line 665 "prog_io.m"
                          parse_tree__prog_io__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_71_71, 0) = ((MR_Box) (((MR_Integer) 22 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 665 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_71_71, 1) = ((MR_Box) (parse_tree__prog_io__V_74_74));
#line 665 "prog_io.m"
                        }
#line 664 "prog_io.m"
                        {
#line 664 "prog_io.m"
                          parse_tree__prog_io__Msgs_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msgs_37, 0) = ((MR_Box) (parse_tree__prog_io__V_71_71));
#line 664 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msgs_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "prog_io.m"
                        }
#line 667 "prog_io.m"
                        {
#line 667 "prog_io.m"
                          parse_tree__prog_io__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io__FirstContext_33));
#line 667 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_80_80, 1) = ((MR_Box) (parse_tree__prog_io__Msgs_37));
#line 667 "prog_io.m"
                        }
#line 666 "prog_io.m"
                        {
#line 666 "prog_io.m"
                          parse_tree__prog_io__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io__V_80_80));
#line 666 "prog_io.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "prog_io.m"
                        }
#line 666 "prog_io.m"
                        {
#line 666 "prog_io.m"
                          parse_tree__prog_io__Spec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 666 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_4[0])));
#line 666 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 666 "prog_io.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_38, 2) = ((MR_Box) (parse_tree__prog_io__V_79_79));
#line 666 "prog_io.m"
                        }
#line 668 "prog_io.m"
                        {
#line 668 "prog_io.m"
                          MR_Word base;
#line 668 "prog_io.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "prog_io.m"
                          *parse_tree__prog_io__Specs_18 = base;
#line 668 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_38));
#line 668 "prog_io.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "prog_io.m"
                        }
#line 673 "prog_io.m"
                        *parse_tree__prog_io__ModuleName_15 = parse_tree__prog_io__StartModuleName_32;
#line 674 "prog_io.m"
                        *parse_tree__prog_io__Error_19 = (MR_Integer) 1;
#line 661 "prog_io.m"
                      }
#line 657 "prog_io.m"
                  }
#line 676 "prog_io.m"
                {
#line 676 "prog_io.m"
                  parse_tree__prog_io__make_module_decl_3_p_0(*parse_tree__prog_io__ModuleName_15, parse_tree__prog_io__FirstContext_33, parse_tree__prog_io__ModuleDeclItem_16);
                }
#line 677 "prog_io.m"
                *parse_tree__prog_io__MaybeSecondTerm_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 675 "prog_io.m"
              }
#line 678 "prog_io.m"
            else
#line 685 "prog_io.m"
              {
#line 685 "prog_io.m"
                MR_Word parse_tree__prog_io__V_98_98;
#line 685 "prog_io.m"
                MR_Word parse_tree__prog_io__V_99_99;
#line 685 "prog_io.m"
                MR_Word parse_tree__prog_io__FirstContext_105;
#line 685 "prog_io.m"
                MR_Word parse_tree__prog_io__Spec_109;
#line 683 "prog_io.m"
                MR_Word parse_tree__prog_io__FirstItem_103;

#line 681 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeFirstItem_23)) == (MR_mktag((MR_Integer) 2)));
#line 681 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 681 "prog_io.m"
                  {
#line 681 "prog_io.m"
                    parse_tree__prog_io__FirstItem_103 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeFirstItem_23, (MR_Integer) 0)));
#line 682 "prog_io.m"
                    {
#line 682 "prog_io.m"
                      parse_tree__prog_io__FirstContext_105 = parse_tree__prog_item__get_item_context_1_f_0(parse_tree__prog_io__FirstItem_103);
                    }
#line 681 "prog_io.m"
                  }
#line 681 "prog_io.m"
                else
#line 684 "prog_io.m"
                  {
#line 684 "prog_io.m"
                    {
#line 684 "prog_io.m"
                      mercury__term__context_init_3_p_0(parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39, (MR_Integer) 1, &parse_tree__prog_io__FirstContext_105);
                    }
#line 684 "prog_io.m"
                  }
#line 691 "prog_io.m"
                {
#line 691 "prog_io.m"
                  parse_tree__prog_io__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 691 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_99_99, 0) = ((MR_Box) (parse_tree__prog_io__FirstContext_105));
#line 691 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[113])));
#line 691 "prog_io.m"
                }
#line 690 "prog_io.m"
                {
#line 690 "prog_io.m"
                  parse_tree__prog_io__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io__V_99_99));
#line 690 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "prog_io.m"
                }
#line 690 "prog_io.m"
                {
#line 690 "prog_io.m"
                  parse_tree__prog_io__Spec_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 690 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 690 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 690 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_109, 2) = ((MR_Box) (parse_tree__prog_io__V_98_98));
#line 690 "prog_io.m"
                }
#line 692 "prog_io.m"
                {
#line 692 "prog_io.m"
                  MR_Word base;
#line 692 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "prog_io.m"
                  *parse_tree__prog_io__Specs_18 = base;
#line 692 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_109));
#line 692 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "prog_io.m"
                }
#line 693 "prog_io.m"
                *parse_tree__prog_io__Error_19 = (MR_Integer) 1;
#line 695 "prog_io.m"
                *parse_tree__prog_io__ModuleName_15 = parse_tree__prog_io__DefaultModuleName_13;
#line 696 "prog_io.m"
                {
#line 696 "prog_io.m"
                  parse_tree__prog_io__make_module_decl_3_p_0(*parse_tree__prog_io__ModuleName_15, parse_tree__prog_io__FirstContext_105, parse_tree__prog_io__ModuleDeclItem_16);
                }
#line 701 "prog_io.m"
                {
#line 701 "prog_io.m"
                  MR_Word base;
#line 701 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 701 "prog_io.m"
                  *parse_tree__prog_io__MaybeSecondTerm_17 = base;
#line 701 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__MaybeFirstTerm_22));
#line 701 "prog_io.m"
                }
#line 685 "prog_io.m"
              }
#line 701 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_42 = parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_47;
#line 701 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_SourceFileName_40 = parse_tree__prog_io__STATE_VARIABLE_SourceFileName_0_39;
#line 678 "prog_io.m"
          }
#line 622 "prog_io.m"
      }
#line 622 "prog_io.m"
      break;
#line 622 "prog_io.m"
    }
#line 616 "prog_io.m"
}

#line 565 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__read_all_items_8_p_0(
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_9,
#line 565 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_10,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_11,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_12,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_31,
#line 565 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_32)
#line 565 "prog_io.m"
{
#line 572 "prog_io.m"
  {
#line 572 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 572 "prog_io.m"
    MR_Word parse_tree__prog_io__Stream_17;
#line 572 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName0_18;
#line 572 "prog_io.m"
    MR_String parse_tree__prog_io__SourceFileName_19;
#line 572 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleDeclItem_20;
#line 572 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeSecondTerm_21;
#line 572 "prog_io.m"
    MR_Word parse_tree__prog_io__RevItems0_22;
#line 572 "prog_io.m"
    MR_Word parse_tree__prog_io__RevItems1_25;
#line 572 "prog_io.m"
    MR_Word parse_tree__prog_io__RevItems_28;
#line 572 "prog_io.m"
    MR_Word parse_tree__prog_io__EndModule_29;
#line 572 "prog_io.m"
    MR_Word parse_tree__prog_io__Items0_30;
#line 572 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_36_36;
#line 572 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_39_39;
#line 572 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_40_40;
#line 572 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41_41;
#line 572 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_48_48;
#line 572 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_49_49;

#line 572 "prog_io.m"
    {
#line 572 "prog_io.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_36_36);
    }
#line 575 "prog_io.m"
    {
#line 575 "prog_io.m"
      mercury__io__input_stream_3_p_0(&parse_tree__prog_io__Stream_17);
    }
#line 576 "prog_io.m"
    {
#line 576 "prog_io.m"
      mercury__io__input_stream_name_4_p_0(parse_tree__prog_io__Stream_17, &parse_tree__prog_io__SourceFileName0_18);
    }
#line 577 "prog_io.m"
    {
#line 577 "prog_io.m"
      parse_tree__prog_io__read_first_item_12_p_0(parse_tree__prog_io__DefaultModuleName_10, parse_tree__prog_io__SourceFileName0_18, &parse_tree__prog_io__SourceFileName_19, parse_tree__prog_io__ModuleName_11, &parse_tree__prog_io__ModuleDeclItem_20, &parse_tree__prog_io__MaybeSecondTerm_21, &parse_tree__prog_io__STATE_VARIABLE_Specs_39_39, &parse_tree__prog_io__STATE_VARIABLE_Error_40_40, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_36_36, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41_41);
    }
#line 580 "prog_io.m"
    {
#line 580 "prog_io.m"
      parse_tree__prog_io__RevItems0_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__RevItems0_22, 0) = ((MR_Box) (parse_tree__prog_io__ModuleDeclItem_20));
#line 580 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__RevItems0_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "prog_io.m"
    }
#line 590 "prog_io.m"
    if ((parse_tree__prog_io__MaybeSecondTerm_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "prog_io.m"
      {
#line 592 "prog_io.m"
        MR_Word parse_tree__prog_io__V_27_27;

#line 592 "prog_io.m"
        {
#line 592 "prog_io.m"
          parse_tree__prog_io__read_items_loop_13_p_0(parse_tree__prog_io__Globals_9, *parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__SourceFileName_19, parse_tree__prog_io__RevItems0_22, &parse_tree__prog_io__RevItems1_25, parse_tree__prog_io__STATE_VARIABLE_Specs_39_39, &parse_tree__prog_io__STATE_VARIABLE_Specs_48_48, parse_tree__prog_io__STATE_VARIABLE_Error_40_40, &parse_tree__prog_io__STATE_VARIABLE_Error_49_49, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41_41, &parse_tree__prog_io__V_27_27);
        }
#line 592 "prog_io.m"
      }
#line 590 "prog_io.m"
    else
#line 582 "prog_io.m"
      {
#line 582 "prog_io.m"
        MR_Word parse_tree__prog_io__SecondTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeSecondTerm_21, (MR_Integer) 0)));

#line 17216 "parse_tree.prog_io.c"
        if ((parse_tree__prog_io__SecondTerm_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 17218 "parse_tree.prog_io.c"
          {
#line 740 "prog_io.m"
            parse_tree__prog_io__RevItems1_25 = parse_tree__prog_io__RevItems0_22;
#line 740 "prog_io.m"
            parse_tree__prog_io__STATE_VARIABLE_Specs_48_48 = parse_tree__prog_io__STATE_VARIABLE_Specs_39_39;
#line 740 "prog_io.m"
            parse_tree__prog_io__STATE_VARIABLE_Error_49_49 = parse_tree__prog_io__STATE_VARIABLE_Error_40_40;
#line 17226 "parse_tree.prog_io.c"
          }
#line 17228 "parse_tree.prog_io.c"
        else
#line 17230 "parse_tree.prog_io.c"
          if (((MR_tag((MR_Word) parse_tree__prog_io__SecondTerm_23)) == (MR_mktag((MR_Integer) 1))))
#line 17232 "parse_tree.prog_io.c"
            {
#line 17234 "parse_tree.prog_io.c"
              MR_String parse_tree__prog_io__ErrorMsg_63 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__SecondTerm_23, (MR_Integer) 0)));
#line 17236 "parse_tree.prog_io.c"
              MR_Integer parse_tree__prog_io__LineNumber_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__SecondTerm_23, (MR_Integer) 1)));
#line 17238 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__Pieces_65;
#line 17240 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__Context_66;
#line 17242 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__Spec_67;
#line 17244 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__V_75_75;
#line 17246 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__V_84_84;
#line 17248 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__V_85_85;
#line 17250 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__V_86_86;
#line 17252 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__V_87_87;
#line 17254 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__ItemSpecs_161;
#line 17256 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_49_174;
#line 749 "prog_io.m"
              MR_Word parse_tree__prog_io__V_189_189;

#line 893 "prog_io.m"
              {
#line 893 "prog_io.m"
                parse_tree__prog_io__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 893 "prog_io.m"
                MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_75_75, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_63));
#line 893 "prog_io.m"
              }
#line 893 "prog_io.m"
              {
#line 893 "prog_io.m"
                parse_tree__prog_io__Pieces_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_65, 0) = ((MR_Box) (parse_tree__prog_io__V_75_75));
#line 893 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 893 "prog_io.m"
              }
#line 894 "prog_io.m"
              {
#line 894 "prog_io.m"
                parse_tree__prog_io__Context_66 = mercury__term__context_init_2_f_0(parse_tree__prog_io__SourceFileName0_18, parse_tree__prog_io__LineNumber_64);
              }
#line 896 "prog_io.m"
              {
#line 896 "prog_io.m"
                parse_tree__prog_io__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 896 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_65));
#line 896 "prog_io.m"
              }
#line 896 "prog_io.m"
              {
#line 896 "prog_io.m"
                parse_tree__prog_io__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io__V_87_87));
#line 896 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 896 "prog_io.m"
              }
#line 896 "prog_io.m"
              {
#line 896 "prog_io.m"
                parse_tree__prog_io__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 896 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io__Context_66));
#line 896 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_85_85, 1) = ((MR_Box) (parse_tree__prog_io__V_86_86));
#line 896 "prog_io.m"
              }
#line 895 "prog_io.m"
              {
#line 895 "prog_io.m"
                parse_tree__prog_io__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io__V_85_85));
#line 895 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 895 "prog_io.m"
              }
#line 895 "prog_io.m"
              {
#line 895 "prog_io.m"
                parse_tree__prog_io__Spec_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 895 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 895 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 895 "prog_io.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_67, 2) = ((MR_Box) (parse_tree__prog_io__V_84_84));
#line 895 "prog_io.m"
              }
#line 897 "prog_io.m"
              {
#line 897 "prog_io.m"
                parse_tree__prog_io__ItemSpecs_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSpecs_161, 0) = ((MR_Box) (parse_tree__prog_io__Spec_67));
#line 897 "prog_io.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io__ItemSpecs_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "prog_io.m"
              }
#line 747 "prog_io.m"
              {
#line 747 "prog_io.m"
                parse_tree__prog_io__STATE_VARIABLE_Specs_49_174 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_161, parse_tree__prog_io__STATE_VARIABLE_Specs_39_39);
              }
#line 749 "prog_io.m"
              {
#line 749 "prog_io.m"
                parse_tree__prog_io__read_items_loop_13_p_0(parse_tree__prog_io__Globals_9, *parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__SourceFileName_19, parse_tree__prog_io__RevItems0_22, &parse_tree__prog_io__RevItems1_25, parse_tree__prog_io__STATE_VARIABLE_Specs_49_174, &parse_tree__prog_io__STATE_VARIABLE_Specs_48_48, (MR_Integer) 1, &parse_tree__prog_io__STATE_VARIABLE_Error_49_49, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41_41, &parse_tree__prog_io__V_189_189);
              }
#line 17356 "parse_tree.prog_io.c"
            }
#line 17358 "parse_tree.prog_io.c"
          else
#line 17360 "parse_tree.prog_io.c"
            {
#line 17362 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__VarSet_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__SecondTerm_23, (MR_Integer) 0)));
#line 17364 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__Term_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__prog_io__SecondTerm_23, (MR_Integer) 1)));
#line 17366 "parse_tree.prog_io.c"
              MR_Integer parse_tree__prog_io__SeqNum_70;
#line 17368 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__MaybeItem_71;
#line 17370 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__MaybeSecondItem_194;
#line 17372 "parse_tree.prog_io.c"
              MR_Word parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_196;
#line 587 "prog_io.m"
              MR_Word parse_tree__prog_io__V_193_193;

#line 900 "prog_io.m"
              {
#line 900 "prog_io.m"
                mercury__counter__allocate_3_p_0(&parse_tree__prog_io__SeqNum_70, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_41_41, &parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_196);
              }
#line 901 "prog_io.m"
              {
#line 901 "prog_io.m"
                parse_tree__prog_io__parse_item_5_p_0(*parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__VarSet_68, parse_tree__prog_io__Term_69, parse_tree__prog_io__SeqNum_70, &parse_tree__prog_io__MaybeItem_71);
              }
#line 905 "prog_io.m"
              if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeItem_71)) == (MR_mktag((MR_Integer) 0))))
#line 906 "prog_io.m"
                {
#line 906 "prog_io.m"
                  MR_Word parse_tree__prog_io__Specs_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeItem_71, (MR_Integer) 0)));

#line 907 "prog_io.m"
                  {
#line 907 "prog_io.m"
                    parse_tree__prog_io__MaybeSecondItem_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 907 "prog_io.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeSecondItem_194, 0) = ((MR_Box) (parse_tree__prog_io__Specs_73));
#line 907 "prog_io.m"
                  }
#line 906 "prog_io.m"
                }
#line 905 "prog_io.m"
              else
#line 903 "prog_io.m"
                {
#line 903 "prog_io.m"
                  MR_Word parse_tree__prog_io__Item_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__MaybeItem_71, (MR_Integer) 0)));

#line 904 "prog_io.m"
                  {
#line 904 "prog_io.m"
                    parse_tree__prog_io__MaybeSecondItem_194 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io.m"
                    MR_hl_field(MR_mktag(2), parse_tree__prog_io__MaybeSecondItem_194, 0) = ((MR_Box) (parse_tree__prog_io__Item_72));
#line 904 "prog_io.m"
                  }
#line 903 "prog_io.m"
                }
#line 587 "prog_io.m"
              {
#line 587 "prog_io.m"
                parse_tree__prog_io__read_items_loop_2_14_p_0(parse_tree__prog_io__Globals_9, parse_tree__prog_io__MaybeSecondItem_194, *parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__SourceFileName_19, parse_tree__prog_io__RevItems0_22, &parse_tree__prog_io__RevItems1_25, parse_tree__prog_io__STATE_VARIABLE_Specs_39_39, &parse_tree__prog_io__STATE_VARIABLE_Specs_48_48, parse_tree__prog_io__STATE_VARIABLE_Error_40_40, &parse_tree__prog_io__STATE_VARIABLE_Error_49_49, parse_tree__prog_io__STATE_VARIABLE_SeqNumCounter_47_196, &parse_tree__prog_io__V_193_193);
              }
#line 17426 "parse_tree.prog_io.c"
            }
#line 582 "prog_io.m"
      }
#line 599 "prog_io.m"
    {
#line 599 "prog_io.m"
      parse_tree__prog_io__get_end_module_4_p_0(*parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__RevItems1_25, &parse_tree__prog_io__RevItems_28, &parse_tree__prog_io__EndModule_29);
    }
#line 600 "prog_io.m"
    {
#line 600 "prog_io.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__prog_io__RevItems_28, &parse_tree__prog_io__Items0_30);
    }
#line 601 "prog_io.m"
    {
#line 601 "prog_io.m"
      parse_tree__prog_io__check_end_module_7_p_0(parse_tree__prog_io__EndModule_29, parse_tree__prog_io__Items0_30, parse_tree__prog_io__Items_12, parse_tree__prog_io__STATE_VARIABLE_Specs_48_48, parse_tree__prog_io__STATE_VARIABLE_Specs_31, parse_tree__prog_io__STATE_VARIABLE_Error_49_49, parse_tree__prog_io__STATE_VARIABLE_Error_32);
#line 601 "prog_io.m"
      return;
    }
#line 572 "prog_io.m"
  }
#line 565 "prog_io.m"
}

#line 508 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__dummy_term_with_context_2_p_0(
#line 508 "prog_io.m"
  MR_Word parse_tree__prog_io__Context_3,
#line 508 "prog_io.m"
  MR_Word * parse_tree__prog_io__Term_4)
#line 508 "prog_io.m"
{
#line 510 "prog_io.m"
  {
#line 510 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 511 "prog_io.m"
    {
#line 511 "prog_io.m"
      MR_Word base;
#line 511 "prog_io.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 511 "prog_io.m"
      *parse_tree__prog_io__Term_4 = base;
#line 511 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_3[11]));
#line 511 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "prog_io.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io__Context_3));
#line 511 "prog_io.m"
    }
#line 510 "prog_io.m"
  }
#line 508 "prog_io.m"
}

#line 457 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__check_end_module_7_p_0(
#line 457 "prog_io.m"
  MR_Word parse_tree__prog_io__EndModule_8,
#line 457 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Items_0_21,
#line 457 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Items_22,
#line 457 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Specs_0_23,
#line 457 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Specs_24,
#line 457 "prog_io.m"
  MR_Word parse_tree__prog_io__STATE_VARIABLE_Error_0_25,
#line 457 "prog_io.m"
  MR_Word * parse_tree__prog_io__STATE_VARIABLE_Error_26)
#line 457 "prog_io.m"
{
#line 486 "prog_io.m"
  {
#line 486 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__STATE_VARIABLE_Items_0_21)) == (MR_mktag((MR_Integer) 1)));
#line 486 "prog_io.m"
    MR_Word parse_tree__prog_io__StartModuleName_14;
#line 486 "prog_io.m"
    MR_Word parse_tree__prog_io__STATE_VARIABLE_Items_27_27;
#line 465 "prog_io.m"
    MR_Word parse_tree__prog_io__Item_12;
#line 465 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemModuleStart_13;
#line 467 "prog_io.m"
    MR_Word parse_tree__prog_io__V_15_15;
#line 467 "prog_io.m"
    MR_Integer parse_tree__prog_io__V_16_16;

#line 465 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 465 "prog_io.m"
      {
#line 465 "prog_io.m"
        parse_tree__prog_io__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Items_0_21, (MR_Integer) 0)));
#line 465 "prog_io.m"
        parse_tree__prog_io__STATE_VARIABLE_Items_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__STATE_VARIABLE_Items_0_21, (MR_Integer) 1)));
#line 466 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Item_12)) == (MR_mktag((MR_Integer) 0)));
#line 466 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 466 "prog_io.m"
          {
#line 466 "prog_io.m"
            parse_tree__prog_io__ItemModuleStart_13 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__Item_12), (MR_Integer) 0);
#line 467 "prog_io.m"
            parse_tree__prog_io__StartModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_13, (MR_Integer) 0)));
#line 467 "prog_io.m"
            parse_tree__prog_io__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_13, (MR_Integer) 1)));
#line 467 "prog_io.m"
            parse_tree__prog_io__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleStart_13, (MR_Integer) 2)));
#line 467 "prog_io.m"
            parse_tree__prog_io__succeeded = MR_TRUE;
#line 466 "prog_io.m"
          }
#line 465 "prog_io.m"
      }
#line 486 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 483 "prog_io.m"
      {
#line 483 "prog_io.m"
        MR_Word parse_tree__prog_io__EndModuleContext_18;
#line 472 "prog_io.m"
        MR_Word parse_tree__prog_io__EndModuleName_17;

#line 483 "prog_io.m"
        *parse_tree__prog_io__STATE_VARIABLE_Items_22 = parse_tree__prog_io__STATE_VARIABLE_Items_27_27;
#line 472 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__EndModule_8)) == (MR_mktag((MR_Integer) 1)));
#line 472 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 472 "prog_io.m"
          {
#line 472 "prog_io.m"
            parse_tree__prog_io__EndModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__EndModule_8, (MR_Integer) 0)));
#line 472 "prog_io.m"
            parse_tree__prog_io__EndModuleContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__EndModule_8, (MR_Integer) 1)));
#line 473 "prog_io.m"
            {
#line 473 "prog_io.m"
              parse_tree__prog_io__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_io__StartModuleName_14, parse_tree__prog_io__EndModuleName_17);
            }
#line 473 "prog_io.m"
            parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 472 "prog_io.m"
          }
#line 483 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 478 "prog_io.m"
          {
#line 478 "prog_io.m"
            MR_Word parse_tree__prog_io__Spec_20;
#line 478 "prog_io.m"
            MR_Word parse_tree__prog_io__V_50_50;
#line 478 "prog_io.m"
            MR_Word parse_tree__prog_io__V_51_51;

#line 480 "prog_io.m"
            {
#line 480 "prog_io.m"
              parse_tree__prog_io__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io__EndModuleContext_18));
#line 480 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[110])));
#line 480 "prog_io.m"
            }
#line 479 "prog_io.m"
            {
#line 479 "prog_io.m"
              parse_tree__prog_io__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io__V_51_51));
#line 479 "prog_io.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "prog_io.m"
            }
#line 479 "prog_io.m"
            {
#line 479 "prog_io.m"
              parse_tree__prog_io__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 479 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 479 "prog_io.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_20, 2) = ((MR_Box) (parse_tree__prog_io__V_50_50));
#line 479 "prog_io.m"
            }
#line 481 "prog_io.m"
            {
#line 481 "prog_io.m"
              MR_Word base;
#line 481 "prog_io.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "prog_io.m"
              *parse_tree__prog_io__STATE_VARIABLE_Specs_24 = base;
#line 481 "prog_io.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_20));
#line 481 "prog_io.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__STATE_VARIABLE_Specs_0_23));
#line 481 "prog_io.m"
            }
#line 482 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Error_26 = (MR_Integer) 1;
#line 478 "prog_io.m"
          }
#line 483 "prog_io.m"
        else
#line 484 "prog_io.m"
          {
#line 484 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Error_26 = parse_tree__prog_io__STATE_VARIABLE_Error_0_25;
#line 484 "prog_io.m"
            *parse_tree__prog_io__STATE_VARIABLE_Specs_24 = parse_tree__prog_io__STATE_VARIABLE_Specs_0_23;
#line 484 "prog_io.m"
          }
#line 483 "prog_io.m"
      }
#line 486 "prog_io.m"
    else
#line 489 "prog_io.m"
      {
#line 489 "prog_io.m"
        {
#line 489 "prog_io.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io", (MR_String) "predicate \140parse_tree.prog_io.check_end_module\'/7", (MR_String) "no \140:- module\' declaration");
#line 489 "prog_io.m"
          return;
        }
#line 489 "prog_io.m"
      }
#line 486 "prog_io.m"
  }
#line 457 "prog_io.m"
}

#line 430 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__get_end_module_4_p_0(
#line 430 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_5,
#line 430 "prog_io.m"
  MR_Word parse_tree__prog_io__RevItems0_6,
#line 430 "prog_io.m"
  MR_Word * parse_tree__prog_io__RevItems_7,
#line 430 "prog_io.m"
  MR_Word * parse_tree__prog_io__EndModule_8)
#line 430 "prog_io.m"
{
#line 446 "prog_io.m"
  {
#line 446 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__RevItems0_6)) == (MR_mktag((MR_Integer) 1)));
#line 446 "prog_io.m"
    MR_Word parse_tree__prog_io__RevItemsPrime_10;
#line 446 "prog_io.m"
    MR_Word parse_tree__prog_io__Context_12;
#line 440 "prog_io.m"
    MR_Word parse_tree__prog_io__Item_9;
#line 440 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemModuleEnd_11;
#line 440 "prog_io.m"
    MR_Word parse_tree__prog_io__V_14_14;
#line 442 "prog_io.m"
    MR_Integer parse_tree__prog_io___SeqNum_13;

#line 440 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 440 "prog_io.m"
      {
#line 440 "prog_io.m"
        parse_tree__prog_io__Item_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__RevItems0_6, (MR_Integer) 0)));
#line 440 "prog_io.m"
        parse_tree__prog_io__RevItemsPrime_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__RevItems0_6, (MR_Integer) 1)));
#line 441 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Item_9)) == (MR_mktag((MR_Integer) 1)));
#line 441 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 441 "prog_io.m"
          {
#line 441 "prog_io.m"
            parse_tree__prog_io__ItemModuleEnd_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io__Item_9), (MR_Integer) 1);
#line 442 "prog_io.m"
            parse_tree__prog_io__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_11, (MR_Integer) 0)));
#line 442 "prog_io.m"
            parse_tree__prog_io__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_11, (MR_Integer) 1)));
#line 442 "prog_io.m"
            parse_tree__prog_io___SeqNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__ItemModuleEnd_11, (MR_Integer) 2)));
#line 442 "prog_io.m"
            {
#line 442 "prog_io.m"
              parse_tree__prog_io__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_io__ModuleName_5, parse_tree__prog_io__V_14_14);
            }
#line 441 "prog_io.m"
          }
#line 440 "prog_io.m"
      }
#line 446 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 444 "prog_io.m"
      {
#line 444 "prog_io.m"
        *parse_tree__prog_io__RevItems_7 = parse_tree__prog_io__RevItemsPrime_10;
#line 445 "prog_io.m"
        {
#line 445 "prog_io.m"
          MR_Word base;
#line 445 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "prog_io.m"
          *parse_tree__prog_io__EndModule_8 = base;
#line 445 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_5));
#line 445 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io__Context_12));
#line 445 "prog_io.m"
        }
#line 444 "prog_io.m"
      }
#line 446 "prog_io.m"
    else
#line 447 "prog_io.m"
      {
#line 447 "prog_io.m"
        *parse_tree__prog_io__RevItems_7 = parse_tree__prog_io__RevItems0_6;
#line 448 "prog_io.m"
        *parse_tree__prog_io__EndModule_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 447 "prog_io.m"
      }
#line 446 "prog_io.m"
  }
#line 430 "prog_io.m"
}

#line 409 "prog_io.m"
static MR_Word MR_CALL 
parse_tree__prog_io__drop_one_qualifier_2_2_f_0(
#line 409 "prog_io.m"
  MR_Word parse_tree__prog_io__ParentQual_4,
#line 409 "prog_io.m"
  MR_String parse_tree__prog_io__ChildName_5)
#line 409 "prog_io.m"
{
#line 413 "prog_io.m"
  {
#line 413 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 413 "prog_io.m"
    MR_Word parse_tree__prog_io__PartialQual_6;

#line 413 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__ParentQual_4)) == (MR_mktag((MR_Integer) 1))))
#line 416 "prog_io.m"
      {
#line 416 "prog_io.m"
        MR_Word parse_tree__prog_io__GrandParentQual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ParentQual_4, (MR_Integer) 0)));
#line 416 "prog_io.m"
        MR_String parse_tree__prog_io__ParentName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__ParentQual_4, (MR_Integer) 1)));
#line 416 "prog_io.m"
        MR_Word parse_tree__prog_io__PartialGrandParentQual_10;

#line 417 "prog_io.m"
        {
#line 417 "prog_io.m"
          parse_tree__prog_io__PartialGrandParentQual_10 = parse_tree__prog_io__drop_one_qualifier_2_2_f_0(parse_tree__prog_io__GrandParentQual_8, parse_tree__prog_io__ParentName_9);
        }
#line 419 "prog_io.m"
        {
#line 419 "prog_io.m"
          parse_tree__prog_io__PartialQual_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__PartialQual_6, 0) = ((MR_Box) (parse_tree__prog_io__PartialGrandParentQual_10));
#line 419 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__PartialQual_6, 1) = ((MR_Box) (parse_tree__prog_io__ChildName_5));
#line 419 "prog_io.m"
        }
#line 416 "prog_io.m"
      }
#line 413 "prog_io.m"
    else
#line 414 "prog_io.m"
      {
#line 414 "prog_io.m"
        parse_tree__prog_io__PartialQual_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 414 "prog_io.m"
        MR_hl_field(MR_mktag(0), parse_tree__prog_io__PartialQual_6, 0) = ((MR_Box) (parse_tree__prog_io__ChildName_5));
#line 414 "prog_io.m"
      }
#line 413 "prog_io.m"
    return parse_tree__prog_io__PartialQual_6;
#line 413 "prog_io.m"
  }
#line 409 "prog_io.m"
}

#line 382 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__search_for_module_source_2_7_p_0(
#line 382 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 382 "prog_io.m"
  MR_Word parse_tree__prog_io__Dirs_9,
#line 382 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_10,
#line 382 "prog_io.m"
  MR_Word parse_tree__prog_io__PartialModuleName_11,
#line 382 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeFileName_12)
#line 382 "prog_io.m"
{
#line 387 "prog_io.m"
  while (MR_TRUE)
#line 387 "prog_io.m"
    {
#line 387 "prog_io.m"
      /* tailcall optimized into a loop */
#line 387 "prog_io.m"
      {
#line 387 "prog_io.m"
        MR_bool parse_tree__prog_io__succeeded;
#line 387 "prog_io.m"
        MR_String parse_tree__prog_io__FileName_14;
#line 387 "prog_io.m"
        MR_Word parse_tree__prog_io__MaybeFileName0_15;

#line 388 "prog_io.m"
        {
#line 388 "prog_io.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__prog_io__Globals_8, parse_tree__prog_io__PartialModuleName_11, (MR_String) ".m", (MR_Integer) 1, &parse_tree__prog_io__FileName_14);
        }
#line 390 "prog_io.m"
        {
#line 390 "prog_io.m"
          libs__file_util__search_for_file_6_p_0((MR_Integer) 0, parse_tree__prog_io__Dirs_9, parse_tree__prog_io__FileName_14, &parse_tree__prog_io__MaybeFileName0_15);
        }
#line 394 "prog_io.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeFileName0_15)) == (MR_mktag((MR_Integer) 1))))
#line 399 "prog_io.m"
          {
#line 399 "prog_io.m"
            MR_Word parse_tree__prog_io__PartialModuleName1_18;
#line 406 "prog_io.m"
            MR_Word parse_tree__prog_io__ParentQual_29;
#line 406 "prog_io.m"
            MR_String parse_tree__prog_io__ChildName_30;

#line 406 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__PartialModuleName_11)) == (MR_mktag((MR_Integer) 1)));
#line 406 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 406 "prog_io.m"
              {
#line 406 "prog_io.m"
                parse_tree__prog_io__ParentQual_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__PartialModuleName_11, (MR_Integer) 0)));
#line 406 "prog_io.m"
                parse_tree__prog_io__ChildName_30 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__PartialModuleName_11, (MR_Integer) 1)));
#line 406 "prog_io.m"
                {
#line 406 "prog_io.m"
                  parse_tree__prog_io__PartialModuleName1_18 = parse_tree__prog_io__drop_one_qualifier_2_2_f_0(parse_tree__prog_io__ParentQual_29, parse_tree__prog_io__ChildName_30);
                }
#line 406 "prog_io.m"
                parse_tree__prog_io__succeeded = MR_TRUE;
#line 406 "prog_io.m"
              }
#line 399 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 397 "prog_io.m"
              {
#line 397 "prog_io.m"
                /* direct tailcall eliminated */
#line 397 "prog_io.m"
                {
#line 397 "prog_io.m"
                  MR_Word parse_tree__prog_io__PartialModuleName__tmp_copy_11 = parse_tree__prog_io__PartialModuleName1_18;

#line 397 "prog_io.m"
                  parse_tree__prog_io__PartialModuleName_11 = parse_tree__prog_io__PartialModuleName__tmp_copy_11;
#line 397 "prog_io.m"
                }
#line 397 "prog_io.m"
                continue;
#line 397 "prog_io.m"
              }
#line 399 "prog_io.m"
            else
#line 400 "prog_io.m"
              {
#line 400 "prog_io.m"
                MR_String parse_tree__prog_io__ModuleNameStr_35;
#line 400 "prog_io.m"
                MR_String parse_tree__prog_io__Msg0_36;
#line 400 "prog_io.m"
                MR_String parse_tree__prog_io__V_39_39;
#line 400 "prog_io.m"
                MR_String parse_tree__prog_io__V_40_40;
#line 400 "prog_io.m"
                MR_String parse_tree__prog_io__V_42_42;

#line 370 "prog_io.m"
                {
#line 370 "prog_io.m"
                  parse_tree__prog_io__ModuleNameStr_35 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__prog_io__ModuleName_10);
                }
#line 372 "prog_io.m"
                {
#line 372 "prog_io.m"
                  parse_tree__prog_io__V_42_42 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_io__Dirs_9);
                }
#line 371 "prog_io.m"
                {
#line 371 "prog_io.m"
                  parse_tree__prog_io__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__prog_io__V_42_42);
                }
#line 371 "prog_io.m"
                {
#line 371 "prog_io.m"
                  parse_tree__prog_io__V_39_39 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io__ModuleNameStr_35, parse_tree__prog_io__V_40_40);
                }
#line 371 "prog_io.m"
                {
#line 371 "prog_io.m"
                  parse_tree__prog_io__Msg0_36 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__prog_io__V_39_39);
                }
#line 400 "prog_io.m"
                {
#line 400 "prog_io.m"
                  MR_Word base;
#line 400 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 400 "prog_io.m"
                  *parse_tree__prog_io__MaybeFileName_12 = base;
#line 400 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Msg0_36));
#line 400 "prog_io.m"
                }
#line 400 "prog_io.m"
              }
#line 399 "prog_io.m"
          }
#line 394 "prog_io.m"
        else
#line 393 "prog_io.m"
          *parse_tree__prog_io__MaybeFileName_12 = parse_tree__prog_io__MaybeFileName0_15;
#line 387 "prog_io.m"
      }
#line 387 "prog_io.m"
      break;
#line 387 "prog_io.m"
    }
#line 382 "prog_io.m"
}

#line 156 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__parse_decl_5_p_0(
#line 156 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_6,
#line 156 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_7,
#line 156 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_8,
#line 156 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_9,
#line 156 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeItem_10)
#line 156 "prog_io.m"
{
#line 999 "prog_io.m"
  {
#line 999 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 1000 "prog_io.m"
    {
#line 1000 "prog_io.m"
      parse_tree__prog_io__parse_attrs_and_decl_6_p_0(parse_tree__prog_io__ModuleName_6, parse_tree__prog_io__VarSet_7, parse_tree__prog_io__Term_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__SeqNum_9, parse_tree__prog_io__MaybeItem_10);
#line 1000 "prog_io.m"
      return;
    }
#line 999 "prog_io.m"
  }
#line 156 "prog_io.m"
}

#line 146 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__parse_item_5_p_0(
#line 146 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_6,
#line 146 "prog_io.m"
  MR_Word parse_tree__prog_io__VarSet_7,
#line 146 "prog_io.m"
  MR_Word parse_tree__prog_io__Term_8,
#line 146 "prog_io.m"
  MR_Integer parse_tree__prog_io__SeqNum_9,
#line 146 "prog_io.m"
  MR_Word * parse_tree__prog_io__Result_10)
#line 146 "prog_io.m"
{
#line 917 "prog_io.m"
  {
#line 917 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 917 "prog_io.m"
    MR_Word parse_tree__prog_io__DeclTerm_11;
#line 913 "prog_io.m"
    MR_Word parse_tree__prog_io__V_23_23;
#line 913 "prog_io.m"
    MR_String parse_tree__prog_io__V_24_24;
#line 913 "prog_io.m"
    MR_Word parse_tree__prog_io__V_25_25;
#line 913 "prog_io.m"
    MR_Word parse_tree__prog_io__V_26_26;
#line 913 "prog_io.m"
    MR_Word parse_tree__prog_io___DeclContext_12;

#line 913 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 913 "prog_io.m"
      {
#line 913 "prog_io.m"
        parse_tree__prog_io__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_8, (MR_Integer) 0)));
#line 913 "prog_io.m"
        parse_tree__prog_io__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_8, (MR_Integer) 1)));
#line 913 "prog_io.m"
        parse_tree__prog_io___DeclContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_8, (MR_Integer) 2)));
#line 913 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 913 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 913 "prog_io.m"
          {
#line 913 "prog_io.m"
            parse_tree__prog_io__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_23_23, (MR_Integer) 0)));
#line 913 "prog_io.m"
            parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__V_24_24, (MR_String) ":-") == 0);
#line 913 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 913 "prog_io.m"
              {
#line 913 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 913 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 913 "prog_io.m"
                  {
#line 913 "prog_io.m"
                    parse_tree__prog_io__DeclTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, (MR_Integer) 0)));
#line 913 "prog_io.m"
                    parse_tree__prog_io__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_25_25, (MR_Integer) 1)));
#line 913 "prog_io.m"
                    parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 913 "prog_io.m"
                  }
#line 913 "prog_io.m"
              }
#line 913 "prog_io.m"
          }
#line 913 "prog_io.m"
      }
#line 917 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 999 "prog_io.m"
      {
#line 1000 "prog_io.m"
        {
#line 1000 "prog_io.m"
          parse_tree__prog_io__parse_attrs_and_decl_6_p_0(parse_tree__prog_io__ModuleName_6, parse_tree__prog_io__VarSet_7, parse_tree__prog_io__DeclTerm_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__SeqNum_9, parse_tree__prog_io__Result_10);
#line 1000 "prog_io.m"
          return;
        }
#line 999 "prog_io.m"
      }
#line 917 "prog_io.m"
    else
#line 924 "prog_io.m"
      {
#line 924 "prog_io.m"
        MR_Word parse_tree__prog_io__DCG_H_Term_13;
#line 924 "prog_io.m"
        MR_Word parse_tree__prog_io__DCG_B_Term_14;
#line 924 "prog_io.m"
        MR_Word parse_tree__prog_io__DCG_Context_15;
#line 918 "prog_io.m"
        MR_Word parse_tree__prog_io__V_27_27;
#line 918 "prog_io.m"
        MR_String parse_tree__prog_io__V_28_28;
#line 918 "prog_io.m"
        MR_Word parse_tree__prog_io__V_29_29;
#line 918 "prog_io.m"
        MR_Word parse_tree__prog_io__V_30_30;
#line 918 "prog_io.m"
        MR_Word parse_tree__prog_io__V_31_31;

#line 918 "prog_io.m"
        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 918 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 918 "prog_io.m"
          {
#line 918 "prog_io.m"
            parse_tree__prog_io__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_8, (MR_Integer) 0)));
#line 918 "prog_io.m"
            parse_tree__prog_io__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_8, (MR_Integer) 1)));
#line 918 "prog_io.m"
            parse_tree__prog_io__DCG_Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_8, (MR_Integer) 2)));
#line 918 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 918 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 918 "prog_io.m"
              {
#line 918 "prog_io.m"
                parse_tree__prog_io__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_27_27, (MR_Integer) 0)));
#line 918 "prog_io.m"
                parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__V_28_28, (MR_String) "-->") == 0);
#line 918 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 918 "prog_io.m"
                  {
#line 918 "prog_io.m"
                    parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 918 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 918 "prog_io.m"
                      {
#line 918 "prog_io.m"
                        parse_tree__prog_io__DCG_H_Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, (MR_Integer) 0)));
#line 918 "prog_io.m"
                        parse_tree__prog_io__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, (MR_Integer) 1)));
#line 918 "prog_io.m"
                        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 918 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 918 "prog_io.m"
                          {
#line 918 "prog_io.m"
                            parse_tree__prog_io__DCG_B_Term_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, (MR_Integer) 0)));
#line 918 "prog_io.m"
                            parse_tree__prog_io__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_30_30, (MR_Integer) 1)));
#line 918 "prog_io.m"
                            parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 918 "prog_io.m"
                          }
#line 918 "prog_io.m"
                      }
#line 918 "prog_io.m"
                  }
#line 918 "prog_io.m"
              }
#line 918 "prog_io.m"
          }
#line 924 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 922 "prog_io.m"
          {
#line 922 "prog_io.m"
            parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0(parse_tree__prog_io__ModuleName_6, parse_tree__prog_io__VarSet_7, parse_tree__prog_io__DCG_H_Term_13, parse_tree__prog_io__DCG_B_Term_14, parse_tree__prog_io__DCG_Context_15, parse_tree__prog_io__SeqNum_9, parse_tree__prog_io__Result_10);
#line 922 "prog_io.m"
            return;
          }
#line 924 "prog_io.m"
        else
#line 939 "prog_io.m"
          {
#line 939 "prog_io.m"
            MR_Word parse_tree__prog_io__HeadTerm_19;
#line 939 "prog_io.m"
            MR_Word parse_tree__prog_io__BodyTerm_20;
#line 939 "prog_io.m"
            MR_Word parse_tree__prog_io__ClauseContext_21;
#line 939 "prog_io.m"
            MR_Word parse_tree__prog_io__ProgVarSet_22;
#line 934 "prog_io.m"
            MR_Word parse_tree__prog_io__HeadTermPrime_16;
#line 934 "prog_io.m"
            MR_Word parse_tree__prog_io__BodyTermPrime_17;
#line 934 "prog_io.m"
            MR_Word parse_tree__prog_io__TermContext_18;
#line 927 "prog_io.m"
            MR_Word parse_tree__prog_io__V_32_32;
#line 927 "prog_io.m"
            MR_String parse_tree__prog_io__V_33_33;
#line 927 "prog_io.m"
            MR_Word parse_tree__prog_io__V_34_34;
#line 927 "prog_io.m"
            MR_Word parse_tree__prog_io__V_35_35;
#line 927 "prog_io.m"
            MR_Word parse_tree__prog_io__V_36_36;

#line 927 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 927 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 927 "prog_io.m"
              {
#line 927 "prog_io.m"
                parse_tree__prog_io__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_8, (MR_Integer) 0)));
#line 927 "prog_io.m"
                parse_tree__prog_io__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_8, (MR_Integer) 1)));
#line 927 "prog_io.m"
                parse_tree__prog_io__TermContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__Term_8, (MR_Integer) 2)));
#line 927 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 927 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 927 "prog_io.m"
                  {
#line 927 "prog_io.m"
                    parse_tree__prog_io__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_32_32, (MR_Integer) 0)));
#line 927 "prog_io.m"
                    parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__V_33_33, (MR_String) ":-") == 0);
#line 927 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 927 "prog_io.m"
                      {
#line 927 "prog_io.m"
                        parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 927 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 927 "prog_io.m"
                          {
#line 927 "prog_io.m"
                            parse_tree__prog_io__HeadTermPrime_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_34_34, (MR_Integer) 0)));
#line 927 "prog_io.m"
                            parse_tree__prog_io__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_34_34, (MR_Integer) 1)));
#line 928 "prog_io.m"
                            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 928 "prog_io.m"
                            if (parse_tree__prog_io__succeeded)
#line 928 "prog_io.m"
                              {
#line 928 "prog_io.m"
                                parse_tree__prog_io__BodyTermPrime_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, (MR_Integer) 0)));
#line 928 "prog_io.m"
                                parse_tree__prog_io__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_35_35, (MR_Integer) 1)));
#line 928 "prog_io.m"
                                parse_tree__prog_io__succeeded = (parse_tree__prog_io__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 928 "prog_io.m"
                              }
#line 927 "prog_io.m"
                          }
#line 927 "prog_io.m"
                      }
#line 927 "prog_io.m"
                  }
#line 927 "prog_io.m"
              }
#line 934 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 931 "prog_io.m"
              {
#line 931 "prog_io.m"
                parse_tree__prog_io__HeadTerm_19 = parse_tree__prog_io__HeadTermPrime_16;
#line 932 "prog_io.m"
                parse_tree__prog_io__BodyTerm_20 = parse_tree__prog_io__BodyTermPrime_17;
#line 933 "prog_io.m"
                parse_tree__prog_io__ClauseContext_21 = parse_tree__prog_io__TermContext_18;
#line 931 "prog_io.m"
              }
#line 934 "prog_io.m"
            else
#line 936 "prog_io.m"
              {
#line 936 "prog_io.m"
                parse_tree__prog_io__HeadTerm_19 = parse_tree__prog_io__Term_8;
#line 937 "prog_io.m"
                {
#line 937 "prog_io.m"
                  parse_tree__prog_io__ClauseContext_21 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io__HeadTerm_19);
                }
#line 938 "prog_io.m"
                {
#line 938 "prog_io.m"
                  parse_tree__prog_io__BodyTerm_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 938 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__BodyTerm_20, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_3[9]));
#line 938 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__BodyTerm_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 938 "prog_io.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io__BodyTerm_20, 2) = ((MR_Box) (parse_tree__prog_io__ClauseContext_21));
#line 938 "prog_io.m"
                }
#line 936 "prog_io.m"
              }
#line 940 "prog_io.m"
            {
#line 940 "prog_io.m"
              mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io__VarSet_7, &parse_tree__prog_io__ProgVarSet_22);
            }
#line 941 "prog_io.m"
            {
#line 941 "prog_io.m"
              parse_tree__prog_io__parse_clause_7_p_0(parse_tree__prog_io__ModuleName_6, parse_tree__prog_io__HeadTerm_19, parse_tree__prog_io__BodyTerm_20, parse_tree__prog_io__ProgVarSet_22, parse_tree__prog_io__ClauseContext_21, parse_tree__prog_io__SeqNum_9, parse_tree__prog_io__Result_10);
#line 941 "prog_io.m"
              return;
            }
#line 939 "prog_io.m"
          }
#line 924 "prog_io.m"
      }
#line 917 "prog_io.m"
  }
#line 146 "prog_io.m"
}

#line 136 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__find_module_name_5_p_0(
#line 136 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_6,
#line 136 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_7,
#line 136 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleName_8)
#line 136 "prog_io.m"
{
#line 515 "prog_io.m"
  {
#line 515 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 515 "prog_io.m"
    MR_Word parse_tree__prog_io__OpenRes_10;

#line 516 "prog_io.m"
    {
#line 516 "prog_io.m"
      mercury__io__open_input_4_p_0(parse_tree__prog_io__FileName_7, &parse_tree__prog_io__OpenRes_10);
    }
#line 539 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__OpenRes_10)) == (MR_mktag((MR_Integer) 1))))
#line 540 "prog_io.m"
      {
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__Error_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__OpenRes_10, (MR_Integer) 0)));
#line 540 "prog_io.m"
        MR_String parse_tree__prog_io__ErrorMsg_30;
#line 540 "prog_io.m"
        MR_String parse_tree__prog_io__Progname_31;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_32;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_33;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__V_39_39;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__V_40_40;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__V_41_41;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__V_43_43;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__V_46_46;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__V_47_47;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__V_48_48;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__V_51_51;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__V_52_52;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__V_61_61;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__V_62_62;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__V_66_66;
#line 540 "prog_io.m"
        MR_Word parse_tree__prog_io__V_67_67;
#line 548 "prog_io.m"
        MR_Integer parse_tree__prog_io___NumWarnings_82;
#line 548 "prog_io.m"
        MR_Integer parse_tree__prog_io___NumErrors_83;

#line 541 "prog_io.m"
        {
#line 541 "prog_io.m"
          parse_tree__prog_io__ErrorMsg_30 = mercury__io__error_message_1_f_0(parse_tree__prog_io__Error_29);
        }
#line 542 "prog_io.m"
        {
#line 542 "prog_io.m"
          mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &parse_tree__prog_io__Progname_31);
        }
#line 543 "prog_io.m"
        {
#line 543 "prog_io.m"
          parse_tree__prog_io__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io__Progname_31));
#line 543 "prog_io.m"
        }
#line 543 "prog_io.m"
        parse_tree__prog_io__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[108]);
#line 544 "prog_io.m"
        {
#line 544 "prog_io.m"
          parse_tree__prog_io__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 544 "prog_io.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io__FileName_7));
#line 544 "prog_io.m"
        }
#line 544 "prog_io.m"
        {
#line 544 "prog_io.m"
          parse_tree__prog_io__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 544 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io__ErrorMsg_30));
#line 544 "prog_io.m"
        }
#line 544 "prog_io.m"
        {
#line 544 "prog_io.m"
          parse_tree__prog_io__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io__V_52_52));
#line 544 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 544 "prog_io.m"
        }
#line 544 "prog_io.m"
        {
#line 544 "prog_io.m"
          parse_tree__prog_io__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io__V_41_41));
#line 544 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 1) = ((MR_Box) (parse_tree__prog_io__V_51_51));
#line 544 "prog_io.m"
        }
#line 543 "prog_io.m"
        {
#line 543 "prog_io.m"
          parse_tree__prog_io__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io__V_47_47));
#line 543 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io__V_48_48));
#line 543 "prog_io.m"
        }
#line 543 "prog_io.m"
        {
#line 543 "prog_io.m"
          parse_tree__prog_io__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[109])));
#line 543 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io__V_46_46));
#line 543 "prog_io.m"
        }
#line 543 "prog_io.m"
        {
#line 543 "prog_io.m"
          parse_tree__prog_io__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io__V_41_41));
#line 543 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io__V_43_43));
#line 543 "prog_io.m"
        }
#line 543 "prog_io.m"
        {
#line 543 "prog_io.m"
          parse_tree__prog_io__Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_32, 0) = ((MR_Box) (parse_tree__prog_io__V_39_39));
#line 543 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_32, 1) = ((MR_Box) (parse_tree__prog_io__V_40_40));
#line 543 "prog_io.m"
        }
#line 546 "prog_io.m"
        {
#line 546 "prog_io.m"
          parse_tree__prog_io__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 546 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_32));
#line 546 "prog_io.m"
        }
#line 546 "prog_io.m"
        {
#line 546 "prog_io.m"
          parse_tree__prog_io__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io__V_67_67));
#line 546 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "prog_io.m"
        }
#line 546 "prog_io.m"
        {
#line 546 "prog_io.m"
          parse_tree__prog_io__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 546 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 1) = ((MR_Box) ((MR_Integer) 0));
#line 546 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 2) = ((MR_Box) ((MR_Integer) 0));
#line 546 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_62_62, 3) = ((MR_Box) (parse_tree__prog_io__V_66_66));
#line 546 "prog_io.m"
        }
#line 545 "prog_io.m"
        {
#line 545 "prog_io.m"
          parse_tree__prog_io__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io__V_62_62));
#line 545 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "prog_io.m"
        }
#line 545 "prog_io.m"
        {
#line 545 "prog_io.m"
          parse_tree__prog_io__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 545 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_33, 2) = ((MR_Box) (parse_tree__prog_io__V_61_61));
#line 545 "prog_io.m"
        }
#line 548 "prog_io.m"
        {
#line 548 "prog_io.m"
          parse_tree__error_util__write_error_spec_8_p_0(parse_tree__prog_io__Spec_33, parse_tree__prog_io__Globals_6, (MR_Integer) 0, &parse_tree__prog_io___NumWarnings_82, (MR_Integer) 0, &parse_tree__prog_io___NumErrors_83);
        }
#line 549 "prog_io.m"
        *parse_tree__prog_io__MaybeModuleName_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 540 "prog_io.m"
      }
#line 539 "prog_io.m"
    else
#line 518 "prog_io.m"
      {
#line 518 "prog_io.m"
        MR_Word parse_tree__prog_io__InputStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__OpenRes_10, (MR_Integer) 0)));
#line 518 "prog_io.m"
        MR_Word parse_tree__prog_io__OldInputStream_12;
#line 518 "prog_io.m"
        MR_String parse_tree__prog_io__PartialFileName_14;
#line 518 "prog_io.m"
        MR_String parse_tree__prog_io__BaseName_16;
#line 518 "prog_io.m"
        MR_Word parse_tree__prog_io__DefaultModuleName_17;
#line 518 "prog_io.m"
        MR_Word parse_tree__prog_io__SeqNumCounter0_18;
#line 518 "prog_io.m"
        MR_Word parse_tree__prog_io__ModuleName_20;
#line 518 "prog_io.m"
        MR_Word parse_tree__prog_io__Specs_23;
#line 522 "prog_io.m"
        MR_String parse_tree__prog_io__PartialFileName0_13;
#line 527 "prog_io.m"
        MR_String parse_tree__prog_io__BaseName0_15;
#line 532 "prog_io.m"
        MR_String parse_tree__prog_io__V_19_19;
#line 532 "prog_io.m"
        MR_Word parse_tree__prog_io__V_21_21;
#line 532 "prog_io.m"
        MR_Word parse_tree__prog_io__V_22_22;
#line 532 "prog_io.m"
        MR_Word parse_tree__prog_io__V_24_24;
#line 532 "prog_io.m"
        MR_Word parse_tree__prog_io__V_25_25;
#line 536 "prog_io.m"
        MR_Integer parse_tree__prog_io___NumWarnings_26;
#line 536 "prog_io.m"
        MR_Integer parse_tree__prog_io___NumErrors_27;
#line 537 "prog_io.m"
        MR_Word parse_tree__prog_io__V_28_28;

#line 519 "prog_io.m"
        {
#line 519 "prog_io.m"
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io__InputStream_11, &parse_tree__prog_io__OldInputStream_12);
        }
#line 520 "prog_io.m"
        {
#line 520 "prog_io.m"
          parse_tree__prog_io__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__prog_io__FileName_7, (MR_String) ".m", &parse_tree__prog_io__PartialFileName0_13);
        }
#line 522 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 521 "prog_io.m"
          parse_tree__prog_io__PartialFileName_14 = parse_tree__prog_io__PartialFileName0_13;
#line 522 "prog_io.m"
        else
#line 523 "prog_io.m"
          parse_tree__prog_io__PartialFileName_14 = parse_tree__prog_io__FileName_7;
#line 525 "prog_io.m"
        {
#line 525 "prog_io.m"
          parse_tree__prog_io__succeeded = mercury__dir__basename_2_p_0(parse_tree__prog_io__PartialFileName_14, &parse_tree__prog_io__BaseName0_15);
        }
#line 527 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 526 "prog_io.m"
          parse_tree__prog_io__BaseName_16 = parse_tree__prog_io__BaseName0_15;
#line 527 "prog_io.m"
        else
#line 528 "prog_io.m"
          parse_tree__prog_io__BaseName_16 = (MR_String) "";
#line 530 "prog_io.m"
        {
#line 530 "prog_io.m"
          parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__prog_io__BaseName_16, &parse_tree__prog_io__DefaultModuleName_17);
        }
#line 531 "prog_io.m"
        {
#line 531 "prog_io.m"
          mercury__counter__init_2_p_0((MR_Integer) 1, &parse_tree__prog_io__SeqNumCounter0_18);
        }
#line 532 "prog_io.m"
        {
#line 532 "prog_io.m"
          parse_tree__prog_io__read_first_item_12_p_0(parse_tree__prog_io__DefaultModuleName_17, parse_tree__prog_io__FileName_7, &parse_tree__prog_io__V_19_19, &parse_tree__prog_io__ModuleName_20, &parse_tree__prog_io__V_21_21, &parse_tree__prog_io__V_22_22, &parse_tree__prog_io__Specs_23, &parse_tree__prog_io__V_24_24, parse_tree__prog_io__SeqNumCounter0_18, &parse_tree__prog_io__V_25_25);
        }
#line 534 "prog_io.m"
        {
#line 534 "prog_io.m"
          MR_Word base;
#line 534 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 534 "prog_io.m"
          *parse_tree__prog_io__MaybeModuleName_8 = base;
#line 534 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__ModuleName_20));
#line 534 "prog_io.m"
        }
#line 536 "prog_io.m"
        {
#line 536 "prog_io.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__prog_io__Specs_23, parse_tree__prog_io__Globals_6, (MR_Integer) 0, &parse_tree__prog_io___NumWarnings_26, (MR_Integer) 0, &parse_tree__prog_io___NumErrors_27);
        }
#line 537 "prog_io.m"
        {
#line 537 "prog_io.m"
          mercury__io__set_input_stream_4_p_0(parse_tree__prog_io__OldInputStream_12, &parse_tree__prog_io__V_28_28);
        }
#line 538 "prog_io.m"
        {
#line 538 "prog_io.m"
          mercury__io__close_input_3_p_0(parse_tree__prog_io__InputStream_11);
#line 538 "prog_io.m"
          return;
        }
#line 518 "prog_io.m"
      }
#line 515 "prog_io.m"
  }
#line 136 "prog_io.m"
}

#line 130 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__search_for_module_source_7_p_0(
#line 130 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_8,
#line 130 "prog_io.m"
  MR_Word parse_tree__prog_io__Dirs_9,
#line 130 "prog_io.m"
  MR_Word parse_tree__prog_io__InterfaceDirs_10,
#line 130 "prog_io.m"
  MR_Word parse_tree__prog_io__ModuleName_11,
#line 130 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeFileName_12)
#line 130 "prog_io.m"
{
#line 304 "prog_io.m"
  {
#line 304 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 304 "prog_io.m"
    MR_Word parse_tree__prog_io__MaybeFileName0_14;

#line 305 "prog_io.m"
    {
#line 305 "prog_io.m"
      parse_tree__prog_io__search_for_module_source_2_7_p_0(parse_tree__prog_io__Globals_8, parse_tree__prog_io__Dirs_9, parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__ModuleName_11, &parse_tree__prog_io__MaybeFileName0_14);
    }
#line 361 "prog_io.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io__MaybeFileName0_14)) == (MR_mktag((MR_Integer) 1))))
#line 363 "prog_io.m"
      *parse_tree__prog_io__MaybeFileName_12 = parse_tree__prog_io__MaybeFileName0_14;
#line 361 "prog_io.m"
    else
#line 308 "prog_io.m"
      {
#line 308 "prog_io.m"
        MR_String parse_tree__prog_io__SourceFileName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeFileName0_14, (MR_Integer) 0)));
#line 358 "prog_io.m"
        MR_Word parse_tree__prog_io__SourceFileModuleName_17;
#line 311 "prog_io.m"
        MR_String parse_tree__prog_io__SourceFileBaseName_16;
#line 311 "prog_io.m"
        MR_String parse_tree__prog_io__V_33_33;
#line 311 "prog_io.m"
        MR_String parse_tree__prog_io__V_34_34;

#line 310 "prog_io.m"
        {
#line 310 "prog_io.m"
          parse_tree__prog_io__succeeded = mercury__dir__basename_1_f_0(parse_tree__prog_io__SourceFileName_15, &parse_tree__prog_io__V_33_33);
        }
#line 311 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 311 "prog_io.m"
          {
#line 310 "prog_io.m"
            parse_tree__prog_io__V_34_34 = (MR_String) ".m";
#line 310 "prog_io.m"
            {
#line 310 "prog_io.m"
              parse_tree__prog_io__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__prog_io__V_33_33, parse_tree__prog_io__V_34_34, &parse_tree__prog_io__SourceFileBaseName_16);
            }
#line 311 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 311 "prog_io.m"
              {
#line 312 "prog_io.m"
                {
#line 312 "prog_io.m"
                  parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__prog_io__SourceFileBaseName_16, &parse_tree__prog_io__SourceFileModuleName_17);
                }
#line 313 "prog_io.m"
                {
#line 313 "prog_io.m"
                  parse_tree__prog_io__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__SourceFileModuleName_17);
                }
#line 313 "prog_io.m"
                parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 311 "prog_io.m"
              }
#line 311 "prog_io.m"
          }
#line 358 "prog_io.m"
        if (parse_tree__prog_io__succeeded)
#line 321 "prog_io.m"
          {
#line 321 "prog_io.m"
            MR_Word parse_tree__prog_io__SourceStream_18;
#line 321 "prog_io.m"
            MR_Word parse_tree__prog_io__MaybeFileName2_19;
#line 324 "prog_io.m"
            MR_String parse_tree__prog_io__V_20_20;
#line 341 "prog_io.m"
            MR_String parse_tree__prog_io__SourceFileName2_21;
#line 330 "prog_io.m"
            MR_String parse_tree__prog_io__SourceFileBaseName2_22;
#line 330 "prog_io.m"
            MR_Word parse_tree__prog_io__SourceFileModuleName2_23;
#line 330 "prog_io.m"
            MR_String parse_tree__prog_io__V_39_39;
#line 330 "prog_io.m"
            MR_String parse_tree__prog_io__V_40_40;

#line 321 "prog_io.m"
            {
#line 321 "prog_io.m"
              mercury__io__input_stream_3_p_0(&parse_tree__prog_io__SourceStream_18);
            }
#line 322 "prog_io.m"
            {
#line 322 "prog_io.m"
              parse_tree__prog_io__search_for_module_source_2_7_p_0(parse_tree__prog_io__Globals_8, parse_tree__prog_io__InterfaceDirs_10, parse_tree__prog_io__ModuleName_11, parse_tree__prog_io__ModuleName_11, &parse_tree__prog_io__MaybeFileName2_19);
            }
#line 324 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeFileName2_19)) == (MR_mktag((MR_Integer) 0)));
#line 324 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 324 "prog_io.m"
              {
#line 324 "prog_io.m"
                parse_tree__prog_io__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeFileName2_19, (MR_Integer) 0)));
#line 325 "prog_io.m"
                {
#line 325 "prog_io.m"
                  mercury__io__seen_2_p_0();
                }
#line 324 "prog_io.m"
              }
#line 324 "prog_io.m"
            else
#line 325 "prog_io.m"
              {
#line 325 "prog_io.m"
              }
#line 330 "prog_io.m"
            parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeFileName2_19)) == (MR_mktag((MR_Integer) 0)));
#line 330 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 330 "prog_io.m"
              {
#line 330 "prog_io.m"
                parse_tree__prog_io__SourceFileName2_21 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeFileName2_19, (MR_Integer) 0)));
#line 331 "prog_io.m"
                parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__SourceFileName2_21, parse_tree__prog_io__SourceFileName_15) == 0);
#line 331 "prog_io.m"
                parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 330 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 330 "prog_io.m"
                  {
#line 332 "prog_io.m"
                    {
#line 332 "prog_io.m"
                      parse_tree__prog_io__succeeded = mercury__dir__basename_1_f_0(parse_tree__prog_io__SourceFileName2_21, &parse_tree__prog_io__V_39_39);
                    }
#line 330 "prog_io.m"
                    if (parse_tree__prog_io__succeeded)
#line 330 "prog_io.m"
                      {
#line 332 "prog_io.m"
                        parse_tree__prog_io__V_40_40 = (MR_String) ".m";
#line 332 "prog_io.m"
                        {
#line 332 "prog_io.m"
                          parse_tree__prog_io__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__prog_io__V_39_39, parse_tree__prog_io__V_40_40, &parse_tree__prog_io__SourceFileBaseName2_22);
                        }
#line 330 "prog_io.m"
                        if (parse_tree__prog_io__succeeded)
#line 330 "prog_io.m"
                          {
#line 334 "prog_io.m"
                            {
#line 334 "prog_io.m"
                              parse_tree__file_names__file_name_to_module_name_2_p_0(parse_tree__prog_io__SourceFileBaseName2_22, &parse_tree__prog_io__SourceFileModuleName2_23);
                            }
#line 336 "prog_io.m"
                            {
#line 336 "prog_io.m"
                              parse_tree__prog_io__succeeded = mdbcomp__prim_data__match_sym_name_2_p_0(parse_tree__prog_io__SourceFileModuleName_17, parse_tree__prog_io__SourceFileModuleName2_23);
                            }
#line 330 "prog_io.m"
                          }
#line 330 "prog_io.m"
                      }
#line 330 "prog_io.m"
                  }
#line 330 "prog_io.m"
              }
#line 341 "prog_io.m"
            if (parse_tree__prog_io__succeeded)
#line 338 "prog_io.m"
              {
#line 338 "prog_io.m"
                MR_String parse_tree__prog_io__V_42_42;
#line 338 "prog_io.m"
                MR_Word parse_tree__prog_io__V_43_43;
#line 338 "prog_io.m"
                MR_String parse_tree__prog_io__ModuleNameStr_60;
#line 338 "prog_io.m"
                MR_String parse_tree__prog_io__Msg0_61;
#line 338 "prog_io.m"
                MR_String parse_tree__prog_io__BetterMatchFile_62;
#line 338 "prog_io.m"
                MR_String parse_tree__prog_io__V_64_64;
#line 338 "prog_io.m"
                MR_String parse_tree__prog_io__V_65_65;
#line 338 "prog_io.m"
                MR_String parse_tree__prog_io__V_67_67;
#line 338 "prog_io.m"
                MR_String parse_tree__prog_io__V_69_69;
#line 338 "prog_io.m"
                MR_String parse_tree__prog_io__V_71_71;

#line 338 "prog_io.m"
                {
#line 338 "prog_io.m"
                  mercury__io__close_input_3_p_0(parse_tree__prog_io__SourceStream_18);
                }
#line 339 "prog_io.m"
                {
#line 339 "prog_io.m"
                  parse_tree__prog_io__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 339 "prog_io.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io__SourceFileName2_21));
#line 339 "prog_io.m"
                }
#line 370 "prog_io.m"
                {
#line 370 "prog_io.m"
                  parse_tree__prog_io__ModuleNameStr_60 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__prog_io__ModuleName_11);
                }
#line 372 "prog_io.m"
                {
#line 372 "prog_io.m"
                  parse_tree__prog_io__V_67_67 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_io__Dirs_9);
                }
#line 371 "prog_io.m"
                {
#line 371 "prog_io.m"
                  parse_tree__prog_io__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__prog_io__V_67_67);
                }
#line 371 "prog_io.m"
                {
#line 371 "prog_io.m"
                  parse_tree__prog_io__V_64_64 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io__ModuleNameStr_60, parse_tree__prog_io__V_65_65);
                }
#line 371 "prog_io.m"
                {
#line 371 "prog_io.m"
                  parse_tree__prog_io__Msg0_61 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__prog_io__V_64_64);
                }
#line 377 "prog_io.m"
                parse_tree__prog_io__BetterMatchFile_62 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, (MR_Integer) 0)));
#line 378 "prog_io.m"
                {
#line 378 "prog_io.m"
                  parse_tree__prog_io__V_71_71 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io__BetterMatchFile_62, (MR_String) " in interface search path");
                }
#line 378 "prog_io.m"
                {
#line 378 "prog_io.m"
                  parse_tree__prog_io__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) ", but found ", parse_tree__prog_io__V_71_71);
                }
#line 378 "prog_io.m"
                {
#line 378 "prog_io.m"
                  parse_tree__prog_io__V_42_42 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io__Msg0_61, parse_tree__prog_io__V_69_69);
                }
#line 339 "prog_io.m"
                {
#line 339 "prog_io.m"
                  MR_Word base;
#line 339 "prog_io.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 339 "prog_io.m"
                  *parse_tree__prog_io__MaybeFileName_12 = base;
#line 339 "prog_io.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_42_42));
#line 339 "prog_io.m"
                }
#line 338 "prog_io.m"
              }
#line 341 "prog_io.m"
            else
#line 343 "prog_io.m"
              {
#line 343 "prog_io.m"
                MR_String parse_tree__prog_io__IntFile_24;
#line 343 "prog_io.m"
                MR_Word parse_tree__prog_io__MaybeIntDir_25;
#line 353 "prog_io.m"
                MR_String parse_tree__prog_io__IntDir_26;
#line 348 "prog_io.m"
                MR_String parse_tree__prog_io__V_54_54;

#line 342 "prog_io.m"
                {
#line 342 "prog_io.m"
                  parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__prog_io__Globals_8, parse_tree__prog_io__ModuleName_11, (MR_String) ".int", (MR_Integer) 1, &parse_tree__prog_io__IntFile_24);
                }
#line 344 "prog_io.m"
                {
#line 344 "prog_io.m"
                  libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__prog_io__InterfaceDirs_10, parse_tree__prog_io__IntFile_24, &parse_tree__prog_io__MaybeIntDir_25);
                }
#line 347 "prog_io.m"
                parse_tree__prog_io__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io__MaybeIntDir_25)) == (MR_mktag((MR_Integer) 0)));
#line 347 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 347 "prog_io.m"
                  {
#line 347 "prog_io.m"
                    parse_tree__prog_io__IntDir_26 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__MaybeIntDir_25, (MR_Integer) 0)));
#line 348 "prog_io.m"
                    {
#line 348 "prog_io.m"
                      parse_tree__prog_io__V_54_54 = mercury__dir__this_directory_0_f_0();
                    }
#line 348 "prog_io.m"
                    parse_tree__prog_io__succeeded = (strcmp(parse_tree__prog_io__IntDir_26, parse_tree__prog_io__V_54_54) == 0);
#line 348 "prog_io.m"
                    parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 347 "prog_io.m"
                  }
#line 353 "prog_io.m"
                if (parse_tree__prog_io__succeeded)
#line 350 "prog_io.m"
                  {
#line 350 "prog_io.m"
                    MR_String parse_tree__prog_io__V_50_50;
#line 350 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_51_51;
#line 350 "prog_io.m"
                    MR_String parse_tree__prog_io__V_52_52;
#line 350 "prog_io.m"
                    MR_String parse_tree__prog_io__ModuleNameStr_77;
#line 350 "prog_io.m"
                    MR_String parse_tree__prog_io__Msg0_78;
#line 350 "prog_io.m"
                    MR_String parse_tree__prog_io__BetterMatchFile_79;
#line 350 "prog_io.m"
                    MR_String parse_tree__prog_io__V_81_81;
#line 350 "prog_io.m"
                    MR_String parse_tree__prog_io__V_82_82;
#line 350 "prog_io.m"
                    MR_String parse_tree__prog_io__V_84_84;
#line 350 "prog_io.m"
                    MR_String parse_tree__prog_io__V_86_86;
#line 350 "prog_io.m"
                    MR_String parse_tree__prog_io__V_88_88;

#line 350 "prog_io.m"
                    {
#line 350 "prog_io.m"
                      mercury__io__close_input_3_p_0(parse_tree__prog_io__SourceStream_18);
                    }
#line 352 "prog_io.m"
                    {
#line 352 "prog_io.m"
                      parse_tree__prog_io__V_52_52 = mercury__dir__f_slash_2_f_0(parse_tree__prog_io__IntDir_26, parse_tree__prog_io__IntFile_24);
                    }
#line 351 "prog_io.m"
                    {
#line 351 "prog_io.m"
                      parse_tree__prog_io__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 351 "prog_io.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io__V_52_52));
#line 351 "prog_io.m"
                    }
#line 370 "prog_io.m"
                    {
#line 370 "prog_io.m"
                      parse_tree__prog_io__ModuleNameStr_77 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__prog_io__ModuleName_11);
                    }
#line 372 "prog_io.m"
                    {
#line 372 "prog_io.m"
                      parse_tree__prog_io__V_84_84 = mercury__string__join_list_2_f_0((MR_String) ", ", parse_tree__prog_io__Dirs_9);
                    }
#line 371 "prog_io.m"
                    {
#line 371 "prog_io.m"
                      parse_tree__prog_io__V_82_82 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", parse_tree__prog_io__V_84_84);
                    }
#line 371 "prog_io.m"
                    {
#line 371 "prog_io.m"
                      parse_tree__prog_io__V_81_81 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io__ModuleNameStr_77, parse_tree__prog_io__V_82_82);
                    }
#line 371 "prog_io.m"
                    {
#line 371 "prog_io.m"
                      parse_tree__prog_io__Msg0_78 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", parse_tree__prog_io__V_81_81);
                    }
#line 377 "prog_io.m"
                    parse_tree__prog_io__BetterMatchFile_79 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_51_51, (MR_Integer) 0)));
#line 378 "prog_io.m"
                    {
#line 378 "prog_io.m"
                      parse_tree__prog_io__V_88_88 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io__BetterMatchFile_79, (MR_String) " in interface search path");
                    }
#line 378 "prog_io.m"
                    {
#line 378 "prog_io.m"
                      parse_tree__prog_io__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) ", but found ", parse_tree__prog_io__V_88_88);
                    }
#line 378 "prog_io.m"
                    {
#line 378 "prog_io.m"
                      parse_tree__prog_io__V_50_50 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io__Msg0_78, parse_tree__prog_io__V_86_86);
                    }
#line 351 "prog_io.m"
                    {
#line 351 "prog_io.m"
                      MR_Word base;
#line 351 "prog_io.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 351 "prog_io.m"
                      *parse_tree__prog_io__MaybeFileName_12 = base;
#line 351 "prog_io.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__V_50_50));
#line 351 "prog_io.m"
                    }
#line 350 "prog_io.m"
                  }
#line 353 "prog_io.m"
                else
#line 354 "prog_io.m"
                  {
#line 354 "prog_io.m"
                    MR_Word parse_tree__prog_io__V_27_27;

#line 354 "prog_io.m"
                    {
#line 354 "prog_io.m"
                      mercury__io__set_input_stream_4_p_0(parse_tree__prog_io__SourceStream_18, &parse_tree__prog_io__V_27_27);
                    }
#line 355 "prog_io.m"
                    *parse_tree__prog_io__MaybeFileName_12 = parse_tree__prog_io__MaybeFileName0_14;
#line 354 "prog_io.m"
                  }
#line 343 "prog_io.m"
              }
#line 321 "prog_io.m"
          }
#line 358 "prog_io.m"
        else
#line 359 "prog_io.m"
          *parse_tree__prog_io__MaybeFileName_12 = parse_tree__prog_io__MaybeFileName0_14;
#line 308 "prog_io.m"
      }
#line 304 "prog_io.m"
  }
#line 130 "prog_io.m"
}

#line 118 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__check_module_has_expected_name_4_p_0(
#line 118 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_5,
#line 118 "prog_io.m"
  MR_Word parse_tree__prog_io__ExpectedName_6,
#line 118 "prog_io.m"
  MR_Word parse_tree__prog_io__ActualName_7,
#line 118 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_8)
#line 118 "prog_io.m"
{
#line 229 "prog_io.m"
  {
#line 229 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 221 "prog_io.m"
    {
#line 221 "prog_io.m"
      parse_tree__prog_io__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__prog_io__ActualName_7, parse_tree__prog_io__ExpectedName_6);
    }
#line 221 "prog_io.m"
    parse_tree__prog_io__succeeded = !(parse_tree__prog_io__succeeded);
#line 229 "prog_io.m"
    if (parse_tree__prog_io__succeeded)
#line 225 "prog_io.m"
      {
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__Pieces_9;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__Msg_10;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__Spec_11;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__V_14_14;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__V_15_15;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__V_16_16;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__V_19_19;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__V_21_21;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__V_24_24;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__V_25_25;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__V_26_26;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__V_29_29;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__V_32_32;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__V_33_33;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__V_43_43;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__V_44_44;
#line 225 "prog_io.m"
        MR_Word parse_tree__prog_io__V_48_48;

#line 222 "prog_io.m"
        {
#line 222 "prog_io.m"
          parse_tree__prog_io__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 222 "prog_io.m"
          MR_hl_field(MR_mktag(2), parse_tree__prog_io__V_15_15, 0) = ((MR_Box) (parse_tree__prog_io__FileName_5));
#line 222 "prog_io.m"
        }
#line 224 "prog_io.m"
        {
#line 224 "prog_io.m"
          parse_tree__prog_io__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 224 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__ExpectedName_6));
#line 224 "prog_io.m"
        }
#line 225 "prog_io.m"
        {
#line 225 "prog_io.m"
          parse_tree__prog_io__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 225 "prog_io.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io__V_33_33, 1) = ((MR_Box) (parse_tree__prog_io__ActualName_7));
#line 225 "prog_io.m"
        }
#line 225 "prog_io.m"
        {
#line 225 "prog_io.m"
          parse_tree__prog_io__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io__V_33_33));
#line 225 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_scalar_common_1[14])));
#line 225 "prog_io.m"
        }
#line 224 "prog_io.m"
        {
#line 224 "prog_io.m"
          parse_tree__prog_io__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[107])));
#line 224 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io__V_32_32));
#line 224 "prog_io.m"
        }
#line 224 "prog_io.m"
        {
#line 224 "prog_io.m"
          parse_tree__prog_io__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[106])));
#line 224 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io__V_29_29));
#line 224 "prog_io.m"
        }
#line 224 "prog_io.m"
        {
#line 224 "prog_io.m"
          parse_tree__prog_io__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io__V_25_25));
#line 224 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_24_24, 1) = ((MR_Box) (parse_tree__prog_io__V_26_26));
#line 224 "prog_io.m"
        }
#line 223 "prog_io.m"
        {
#line 223 "prog_io.m"
          parse_tree__prog_io__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[105])));
#line 223 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io__V_24_24));
#line 223 "prog_io.m"
        }
#line 223 "prog_io.m"
        {
#line 223 "prog_io.m"
          parse_tree__prog_io__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 223 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_19_19, 1) = ((MR_Box) (parse_tree__prog_io__V_21_21));
#line 223 "prog_io.m"
        }
#line 222 "prog_io.m"
        {
#line 222 "prog_io.m"
          parse_tree__prog_io__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[104])));
#line 222 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_16_16, 1) = ((MR_Box) (parse_tree__prog_io__V_19_19));
#line 222 "prog_io.m"
        }
#line 222 "prog_io.m"
        {
#line 222 "prog_io.m"
          parse_tree__prog_io__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_14_14, 0) = ((MR_Box) (parse_tree__prog_io__V_15_15));
#line 222 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io__V_16_16));
#line 222 "prog_io.m"
        }
#line 222 "prog_io.m"
        {
#line 222 "prog_io.m"
          parse_tree__prog_io__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_scalar_common_1[103])));
#line 222 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Pieces_9, 1) = ((MR_Box) (parse_tree__prog_io__V_14_14));
#line 222 "prog_io.m"
        }
#line 226 "prog_io.m"
        {
#line 226 "prog_io.m"
          parse_tree__prog_io__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 226 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io__Pieces_9));
#line 226 "prog_io.m"
        }
#line 226 "prog_io.m"
        {
#line 226 "prog_io.m"
          parse_tree__prog_io__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io__V_44_44));
#line 226 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "prog_io.m"
        }
#line 226 "prog_io.m"
        {
#line 226 "prog_io.m"
          parse_tree__prog_io__Msg_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 226 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 1) = ((MR_Box) ((MR_Integer) 0));
#line 226 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 2) = ((MR_Box) ((MR_Integer) 0));
#line 226 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__Msg_10, 3) = ((MR_Box) (parse_tree__prog_io__V_43_43));
#line 226 "prog_io.m"
        }
#line 227 "prog_io.m"
        {
#line 227 "prog_io.m"
          parse_tree__prog_io__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io__Msg_10));
#line 227 "prog_io.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "prog_io.m"
        }
#line 227 "prog_io.m"
        {
#line 227 "prog_io.m"
          parse_tree__prog_io__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 227 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 227 "prog_io.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io__V_48_48));
#line 227 "prog_io.m"
        }
#line 228 "prog_io.m"
        {
#line 228 "prog_io.m"
          MR_Word base;
#line 228 "prog_io.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "prog_io.m"
          *parse_tree__prog_io__Specs_8 = base;
#line 228 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io__Spec_11));
#line 228 "prog_io.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "prog_io.m"
        }
#line 225 "prog_io.m"
      }
#line 229 "prog_io.m"
    else
#line 230 "prog_io.m"
      *parse_tree__prog_io__Specs_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 229 "prog_io.m"
  }
#line 118 "prog_io.m"
}

#line 212 "prog_io.m"
static void MR_CALL 
parse_tree__prog_io__actually_read_opt_file_8_p_0_1(
#line 212 "prog_io.m"
  MR_Box parse_tree__prog_io__closure_arg,
#line 212 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_1,
#line 212 "prog_io.m"
  MR_Box parse_tree__prog_io__wrapper_arg_2,
#line 212 "prog_io.m"
  MR_Box * parse_tree__prog_io__wrapper_arg_3)
#line 212 "prog_io.m"
{
#line 212 "prog_io.m"
  {
#line 212 "prog_io.m"
    MR_Box parse_tree__prog_io__closure = parse_tree__prog_io__closure_arg;
#line 212 "prog_io.m"
    MR_Word parse_tree__prog_io__conv0_HeadVar__4_4;

#line 212 "prog_io.m"
    {
#line 212 "prog_io.m"
      libs__file_util__search_for_file_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io__closure, (MR_Integer) 5))), &parse_tree__prog_io__conv0_HeadVar__4_4);
    }
#line 212 "prog_io.m"
    *parse_tree__prog_io__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io__conv0_HeadVar__4_4));
#line 212 "prog_io.m"
  }
#line 212 "prog_io.m"
}

#line 109 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_opt_file_8_p_0(
#line 109 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_9,
#line 109 "prog_io.m"
  MR_String parse_tree__prog_io__FileName_10,
#line 109 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_11,
#line 109 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_12,
#line 109 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_13,
#line 109 "prog_io.m"
  MR_Word * parse_tree__prog_io__Error_14)
#line 109 "prog_io.m"
{
#line 210 "prog_io.m"
  {
#line 210 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 210 "prog_io.m"
    MR_Word parse_tree__prog_io__Dirs_16;
#line 210 "prog_io.m"
    MR_Word parse_tree__prog_io__ModuleName_18;
#line 210 "prog_io.m"
    MR_Word parse_tree__prog_io__ItemSpecs_19;
#line 210 "prog_io.m"
    MR_Word parse_tree__prog_io__NameSpecs_21;
#line 210 "prog_io.m"
    MR_Word parse_tree__prog_io__V_25_25;
#line 212 "prog_io.m"
    MR_Word parse_tree__prog_io__V_17_17;
#line 212 "prog_io.m"
    MR_Word parse_tree__prog_io__V_20_20;

#line 211 "prog_io.m"
    {
#line 211 "prog_io.m"
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__prog_io__Globals_9, (MR_Integer) 646, &parse_tree__prog_io__Dirs_16);
    }
#line 212 "prog_io.m"
    {
#line 212 "prog_io.m"
      parse_tree__prog_io__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 212 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 0) = ((MR_Box) (&parse_tree__prog_io_scalar_common_5[0]));
#line 212 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 1) = ((MR_Box) (parse_tree__prog_io__actually_read_opt_file_8_p_0_1));
#line 212 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 212 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 3) = ((MR_Box) ((MR_Integer) 0));
#line 212 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 4) = ((MR_Box) (parse_tree__prog_io__Dirs_16));
#line 212 "prog_io.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io__V_25_25, 5) = ((MR_Box) (parse_tree__prog_io__FileName_10));
#line 212 "prog_io.m"
    }
#line 212 "prog_io.m"
    {
#line 212 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(parse_tree__prog_io__Globals_9, parse_tree__prog_io__V_25_25, parse_tree__prog_io__DefaultModuleName_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, &parse_tree__prog_io__V_17_17, &parse_tree__prog_io__ModuleName_18, parse_tree__prog_io__Items_12, &parse_tree__prog_io__ItemSpecs_19, parse_tree__prog_io__Error_14, &parse_tree__prog_io__V_20_20);
    }
#line 216 "prog_io.m"
    {
#line 216 "prog_io.m"
      parse_tree__prog_io__check_module_has_expected_name_4_p_0(parse_tree__prog_io__FileName_10, parse_tree__prog_io__DefaultModuleName_11, parse_tree__prog_io__ModuleName_18, &parse_tree__prog_io__NameSpecs_21);
    }
#line 218 "prog_io.m"
    {
#line 218 "prog_io.m"
      *parse_tree__prog_io__Specs_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io__ItemSpecs_19, parse_tree__prog_io__NameSpecs_21);
    }
#line 210 "prog_io.m"
  }
#line 109 "prog_io.m"
}

#line 98 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_module_if_changed_12_p_0(
#line 98 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_FileInfo_29,
#line 98 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_13,
#line 98 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_14,
#line 98 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 98 "prog_io.m"
  MR_Word parse_tree__prog_io__OldTimestamp_16,
#line 98 "prog_io.m"
  MR_Word * parse_tree__prog_io__FileData_17,
#line 98 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_18,
#line 98 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_19,
#line 98 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_20,
#line 98 "prog_io.m"
  MR_Word * parse_tree__prog_io__Error_21,
#line 98 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestamp_22)
#line 98 "prog_io.m"
{
#line 204 "prog_io.m"
  {
#line 204 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;
#line 204 "prog_io.m"
    MR_Word parse_tree__prog_io__V_26_26;

#line 205 "prog_io.m"
    {
#line 205 "prog_io.m"
      parse_tree__prog_io__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 205 "prog_io.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io__OldTimestamp_16));
#line 205 "prog_io.m"
    }
#line 205 "prog_io.m"
    {
#line 205 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(parse_tree__prog_io__Globals_13, parse_tree__prog_io__OpenFile_14, parse_tree__prog_io__DefaultModuleName_15, parse_tree__prog_io__V_26_26, (MR_Integer) 0, parse_tree__prog_io__FileData_17, parse_tree__prog_io__ModuleName_18, parse_tree__prog_io__Items_19, parse_tree__prog_io__Specs_20, parse_tree__prog_io__Error_21, parse_tree__prog_io__MaybeModuleTimestamp_22);
#line 205 "prog_io.m"
      return;
    }
#line 204 "prog_io.m"
  }
#line 98 "prog_io.m"
}

#line 92 "prog_io.m"
void MR_CALL 
parse_tree__prog_io__actually_read_module_12_p_0(
#line 92 "prog_io.m"
  MR_Word parse_tree__prog_io__TypeInfo_for_FileInfo_28,
#line 92 "prog_io.m"
  MR_Word parse_tree__prog_io__Globals_13,
#line 92 "prog_io.m"
  MR_Word parse_tree__prog_io__OpenFile_14,
#line 92 "prog_io.m"
  MR_Word parse_tree__prog_io__DefaultModuleName_15,
#line 92 "prog_io.m"
  MR_Word parse_tree__prog_io__ReturnTimestamp_16,
#line 92 "prog_io.m"
  MR_Word * parse_tree__prog_io__FileData_17,
#line 92 "prog_io.m"
  MR_Word * parse_tree__prog_io__ModuleName_18,
#line 92 "prog_io.m"
  MR_Word * parse_tree__prog_io__Items_19,
#line 92 "prog_io.m"
  MR_Word * parse_tree__prog_io__Specs_20,
#line 92 "prog_io.m"
  MR_Word * parse_tree__prog_io__Error_21,
#line 92 "prog_io.m"
  MR_Word * parse_tree__prog_io__MaybeModuleTimestamp_22)
#line 92 "prog_io.m"
{
#line 197 "prog_io.m"
  {
#line 197 "prog_io.m"
    MR_bool parse_tree__prog_io__succeeded;

#line 198 "prog_io.m"
    {
#line 198 "prog_io.m"
      parse_tree__prog_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_97_99_116_117_97_108_108_121_95_114_101_97_100_95_109_111_100_117_108_101_95_95_91_49_93_95_48_13_p_0(parse_tree__prog_io__Globals_13, parse_tree__prog_io__OpenFile_14, parse_tree__prog_io__DefaultModuleName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io__ReturnTimestamp_16, parse_tree__prog_io__FileData_17, parse_tree__prog_io__ModuleName_18, parse_tree__prog_io__Items_19, parse_tree__prog_io__Specs_20, parse_tree__prog_io__Error_21, parse_tree__prog_io__MaybeModuleTimestamp_22);
#line 198 "prog_io.m"
      return;
    }
#line 197 "prog_io.m"
  }
#line 92 "prog_io.m"
}

void mercury__parse_tree__prog_io__init(void)
{
}

void mercury__parse_tree__prog_io__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_maker_2);
	MR_register_type_ctor_info(&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_maybe_return_timestamp_0);
	MR_register_type_ctor_info(&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_module_end_0);
	MR_register_type_ctor_info(&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_module_error_0);
	MR_register_type_ctor_info(&parse_tree__prog_io__parse_tree__prog_io__type_ctor_info_read_item_result_0);
}

void mercury__parse_tree__prog_io__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io. */
