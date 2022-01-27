/*
** Automatically generated from `equiv_type_hlds.m'
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


/* :- module transform_hlds.equiv_type_hlds. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__equiv_type_hlds__init
ENDINIT
*/

#include "transform_hlds.equiv_type_hlds.mih"


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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 145 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

#line 148 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 151 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 154 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 157 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0;

#line 160 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 163 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 166 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 169 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 175 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 178 "transform_hlds.equiv_type_hlds.c"
static const MR_VA_PseudoTypeInfo_Struct3 transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 181 "transform_hlds.equiv_type_hlds.c"
static const MR_PseudoTypeInfo transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_types_replace_info_0_0[6];

#line 184 "transform_hlds.equiv_type_hlds.c"
static const MR_ConstString transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_names_replace_info_0_0[6];

#line 187 "transform_hlds.equiv_type_hlds.c"
static const MR_DuFunctorDesc transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0;

#line 190 "transform_hlds.equiv_type_hlds.c"
static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_stag_ordered_replace_info_0_0[1];

#line 193 "transform_hlds.equiv_type_hlds.c"
static const MR_DuPtagLayout transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_ptag_ordered_replace_info_0[1];

#line 196 "transform_hlds.equiv_type_hlds.c"
static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_name_ordered_replace_info_0[1];

#line 199 "transform_hlds.equiv_type_hlds.c"
static const MR_Integer transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__functor_number_map_replace_info_0[1];

#line 202 "transform_hlds.equiv_type_hlds.c"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0_10001(
#line 205 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 207 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2);

#line 210 "transform_hlds.equiv_type_hlds.c"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0_10001(
#line 213 "transform_hlds.equiv_type_hlds.c"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 215 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 217 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3);

#line 220 "transform_hlds.equiv_type_hlds.c"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0_10001(
#line 223 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 225 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2);

#line 228 "transform_hlds.equiv_type_hlds.c"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0_10001(
#line 231 "transform_hlds.equiv_type_hlds.c"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 233 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 235 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3);

#line 1303 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_103_111_97_108_95_95_49_51_48_51_95_95_49_95_95_91_50_93_95_48_6_p_0(
#line 1303 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1303 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_39,
#line 1303 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_40,
#line 1303 "equiv_type_hlds.m"
  MR_Tuple transform_hlds__equiv_type_hlds__HeadVar__5_41,
#line 1303 "equiv_type_hlds.m"
  MR_Tuple * transform_hlds__equiv_type_hlds__HeadVar__6_42);

#line 315 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho10_10_p_0(
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10);

#line 315 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho9_10_p_0(
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10);

#line 315 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho8_10_p_0(
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10);

#line 315 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho7_10_p_0(
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10);

#line 315 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho6_10_p_0(
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10);

#line 292 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho5_7_p_0(
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);

#line 292 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho4_7_p_0(
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);

#line 292 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho3_7_p_0(
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);

#line 292 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho2_7_p_0(
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);

#line 292 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);

#line 1303 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal__1303__1_6_p_0(
#line 1303 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1303 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_38,
#line 1303 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_39,
#line 1303 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_40,
#line 1303 "equiv_type_hlds.m"
  MR_Tuple transform_hlds__equiv_type_hlds__HeadVar__5_41,
#line 1303 "equiv_type_hlds.m"
  MR_Tuple * transform_hlds__equiv_type_hlds__HeadVar__6_42);

#line 590 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__590__1_3_p_0(
#line 590 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeMap_30,
#line 590 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_99,
#line 590 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_100);

#line 584 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__584__1_6_p_0(
#line 584 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 584 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_65,
#line 584 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_66,
#line 584 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_67,
#line 584 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__5_68,
#line 584 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__6_69);

#line 1282 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0(
#line 1282 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1282 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1282 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3);

#line 1282 "equiv_type_hlds.m"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0(
#line 1282 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1282 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2);

#line 1267 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0(
#line 1267 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1267 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1267 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3);

#line 1267 "equiv_type_hlds.m"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0(
#line 1267 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1267 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2);

#line 1654 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(
#line 1654 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1654 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1654 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1654 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1654 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_5,
#line 1654 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_6,
#line 1654 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_7,
#line 1654 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_8);

#line 1625 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_uni_modes_6_p_0(
#line 1625 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1625 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1625 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1625 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1625 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
#line 1625 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6);

#line 1603 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_uni_mode_6_p_0(
#line 1603 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1603 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1603 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1603 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_16,
#line 1603 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_24,
#line 1603 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_25);

#line 1570 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unification_6_p_0(
#line 1570 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1570 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Uni0_8,
#line 1570 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Uni_9,
#line 1570 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 1570 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_35,
#line 1570 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_36);

#line 1558 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(
#line 1558 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1558 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1558 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1558 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1558 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
#line 1558 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6);

#line 1335 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0(
#line 1335 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1335 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__GoalExpr0_8,
#line 1335 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__GoalExpr_9,
#line 1335 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 1335 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130,
#line 1335 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131);

#line 1322 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(
#line 1322 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1322 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1322 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1322 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1322 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
#line 1322 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6);

#line 1303 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0_1(
#line 1303 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 1303 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 1303 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 1303 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 1303 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 1303 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5);

#line 1292 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(
#line 1292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Goal0_8,
#line 1292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Goal_9,
#line 1292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 1292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_32,
#line 1292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33);

#line 1250 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(
#line 1250 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1250 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1250 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1250 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1250 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
#line 1250 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
#line 1250 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
#line 1250 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);

#line 1233 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(
#line 1233 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1233 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1233 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1233 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1233 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
#line 1233 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
#line 1233 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
#line 1233 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);

#line 1160 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(
#line 1160 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 1160 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__InstName0_10,
#line 1160 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__InstName_11,
#line 1160 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 1160 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34,
#line 1160 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35,
#line 1160 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36,
#line 1160 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);

#line 1041 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_2_8_p_0(
#line 1041 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 1041 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst0_10,
#line 1041 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Inst_11,
#line 1041 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 1041 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49,
#line 1041 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50,
#line 1041 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51,
#line 1041 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);

#line 1020 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__record_inst_may_occur_2_p_0(
#line 1020 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst_1,
#line 1020 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MayOccur_2);

#line 994 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__lookup_inst_may_occur_3_p_0(
#line 994 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst_1,
#line 994 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Found_2,
#line 994 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MayOccur_3);

#line 935 "equiv_type_hlds.m"
static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(
#line 935 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1);

#line 919 "equiv_type_hlds.m"
static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(
#line 919 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1);

#line 849 "equiv_type_hlds.m"
static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(
#line 849 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst_3);

#line 806 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(
#line 806 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 806 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst0_10,
#line 806 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Inst_11,
#line 806 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 806 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_17,
#line 806 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_18,
#line 806 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_19,
#line 806 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20);

#line 785 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_mode_8_p_0(
#line 785 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 785 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Mode0_10,
#line 785 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Mode_11,
#line 785 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 785 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_24,
#line 785 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25,
#line 785 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_26,
#line 785 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_27);

#line 771 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(
#line 771 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 771 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 771 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 771 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 771 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
#line 771 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
#line 771 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
#line 771 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);

#line 719 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_type_ctor_11_p_0(
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_12,
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded0_13,
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type0_14,
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_15,
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__ArgTypes_16,
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Kind_17,
#line 719 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Type_18,
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_35,
#line 719 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_36,
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_37,
#line 719 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_38);

#line 706 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(
#line 706 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 706 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 706 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 706 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 706 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_5,
#line 706 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_6,
#line 706 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_7,
#line 706 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_8);

#line 628 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(
#line 628 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_8,
#line 628 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9,
#line 628 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type0_10,
#line 628 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Type_11,
#line 628 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 628 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38,
#line 628 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39);

#line 622 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(
#line 622 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
#line 622 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type0_7,
#line 622 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Type_8,
#line 622 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_11,
#line 622 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_12);

#line 590 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_3(
#line 590 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 590 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 590 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2);

#line 584 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_2(
#line 584 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 584 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 584 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 584 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 584 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 584 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5);

#line 578 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_1(
#line 578 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 578 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 578 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 578 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 578 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4);

#line 555 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0(
#line 555 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 555 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_0_39,
#line 555 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_40,
#line 555 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_41,
#line 555 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_42,
#line 555 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_0_43,
#line 555 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_44,
#line 555 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_45,
#line 555 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46);

#line 549 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0_1(
#line 549 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 549 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 549 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 549 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 549 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 549 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_5,
#line 549 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_6,
#line 549 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_7,
#line 549 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_8);

#line 511 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0(
#line 511 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 511 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__PredId_8,
#line 511 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29,
#line 511 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30,
#line 511 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_31,
#line 511 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_32);

#line 484 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_constructor_arg_5_p_0(
#line 484 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
#line 484 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__CtorArg0_7,
#line 484 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__CtorArg_8,
#line 484 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_20,
#line 484 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_21);

#line 479 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0_1(
#line 479 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 479 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 479 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 479 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 479 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4);

#line 473 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0(
#line 473 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_4,
#line 473 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__ConsDefn0_5,
#line 473 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__ConsDefn_6);

#line 440 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(
#line 440 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 440 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MaybeInstDet0_8,
#line 440 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MaybeInstDet_9,
#line 440 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 440 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_17,
#line 440 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_18);

#line 417 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(
#line 417 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 417 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MaybeInst0_8,
#line 417 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MaybeInst_9,
#line 417 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 417 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_16,
#line 417 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_17);

#line 369 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_merge_inst_info_6_p_0(
#line 369 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 369 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MergeInstInfo0_8,
#line 369 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MergeInstInfo_9,
#line 369 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 369 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_21,
#line 369 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22);

#line 351 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_inst_info_6_p_0(
#line 351 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 351 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__UnifyInstInfo0_8,
#line 351 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__UnifyInstInfo_9,
#line 351 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 351 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_23,
#line 351 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_24);

#line 202 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_table_5_p_0(
#line 202 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
#line 202 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34,
#line 202 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_35,
#line 202 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36,
#line 202 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);

#line 153 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0(
#line 153 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__ModuleName_8,
#line 153 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 153 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_10,
#line 153 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_0_48,
#line 153 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_49,
#line 153 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_0_50,
#line 153 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_51);

#line 137 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__mark_eqv_exported_types_3_p_0(
#line 137 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_4,
#line 137 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_0_8,
#line 137 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_9);

#line 130 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0_1(
#line 130 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 130 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 130 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 130 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3);

#line 124 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(
#line 124 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type_4,
#line 124 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_0_8,
#line 124 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_9);

#line 96 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_to_eqv_map_6_p_0(
#line 96 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_7,
#line 96 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Defn_8,
#line 96 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_30,
#line 96 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_31,
#line 96 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32,
#line 96 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33);

#line 91 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_5(
#line 91 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 91 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 91 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 91 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 91 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 91 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5);

#line 470 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_4(
#line 470 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 470 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 470 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2);

#line 76 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_3(
#line 76 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 76 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 76 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 76 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 76 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 76 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5);

#line 71 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_2(
#line 71 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 71 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 71 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 71 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3);

#line 69 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_1(
#line 69 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 69 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 69 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 69 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 69 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 69 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_5,
#line 69 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_1[14][3];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_2[5][2];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_3[1][5];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_4[4][9];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_5[4][6];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_6[1][10];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_7[2][8];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_8[1][12];




static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_1[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_any_inst_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ground_inst_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_merge_inst_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unify_inst_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_maybe_inst_det_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_2[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_3[1][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_2[2])),
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_4[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_5[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_6[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_7[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_8[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};



#include "transform_hlds.equiv_type_hlds.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1561 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 1570 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 1578 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 1587 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 1596 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_recompilation_info_0
  }
};

#line 1604 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1613 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1621 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1630 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1638 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1646 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1655 "transform_hlds.equiv_type_hlds.c"
static const MR_VA_PseudoTypeInfo_Struct3 transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1666 "transform_hlds.equiv_type_hlds.c"
const MR_TypeCtorInfo_Struct transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__type_ctor_info_inst_cache_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0_10001)),
  ((MR_Box) (transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0_10001)),
  (MR_String) "transform_hlds.equiv_type_hlds",
  (MR_String) "inst_cache",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1683 "transform_hlds.equiv_type_hlds.c"
static const MR_PseudoTypeInfo transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_types_replace_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1693 "transform_hlds.equiv_type_hlds.c"
static const MR_ConstString transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_names_replace_info_0_0[6] = {
  (MR_String) "ethri_module_info",
  (MR_String) "ethri_pred_info",
  (MR_String) "ethri_proc_info",
  (MR_String) "ethri_tvarset",
  (MR_String) "ethri_inst_cache",
  (MR_String) "ethri_recompute"
};

#line 1703 "transform_hlds.equiv_type_hlds.c"
static const MR_DuFunctorDesc transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0 = {
  (MR_String) "replace_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_types_replace_info_0_0,
  transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_names_replace_info_0_0,
  NULL,
  NULL
};

#line 1718 "transform_hlds.equiv_type_hlds.c"
static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_stag_ordered_replace_info_0_0[1] = {
  &transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0
};

#line 1723 "transform_hlds.equiv_type_hlds.c"
static const MR_DuPtagLayout transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_ptag_ordered_replace_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_stag_ordered_replace_info_0_0
  }
};

#line 1732 "transform_hlds.equiv_type_hlds.c"
static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_name_ordered_replace_info_0[1] = {
  &transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0
};

#line 1737 "transform_hlds.equiv_type_hlds.c"
static const MR_Integer transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__functor_number_map_replace_info_0[1] = {
  (MR_Integer) 0
};

#line 1742 "transform_hlds.equiv_type_hlds.c"
const MR_TypeCtorInfo_Struct transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__type_ctor_info_replace_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__equiv_type_hlds____Unify____replace_info_0_0_10001)),
  ((MR_Box) (transform_hlds__equiv_type_hlds____Compare____replace_info_0_0_10001)),
  (MR_String) "transform_hlds.equiv_type_hlds",
  (MR_String) "replace_info",
  {     transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_name_ordered_replace_info_0 },
  {     transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_ptag_ordered_replace_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__functor_number_map_replace_info_0
};

#line 1759 "transform_hlds.equiv_type_hlds.c"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0_10001(
#line 1762 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 1764 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2)
#line 1766 "transform_hlds.equiv_type_hlds.c"
{
#line 1768 "transform_hlds.equiv_type_hlds.c"
  {
#line 1770 "transform_hlds.equiv_type_hlds.c"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1773 "transform_hlds.equiv_type_hlds.c"
    {
#line 1775 "transform_hlds.equiv_type_hlds.c"
      transform_hlds__equiv_type_hlds__succeeded = transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0(((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2));
    }
#line 1778 "transform_hlds.equiv_type_hlds.c"
    return transform_hlds__equiv_type_hlds__succeeded;
#line 1780 "transform_hlds.equiv_type_hlds.c"
  }
#line 1782 "transform_hlds.equiv_type_hlds.c"
}

#line 1785 "transform_hlds.equiv_type_hlds.c"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0_10001(
#line 1788 "transform_hlds.equiv_type_hlds.c"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 1790 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 1792 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3)
#line 1794 "transform_hlds.equiv_type_hlds.c"
{
#line 1796 "transform_hlds.equiv_type_hlds.c"
  {
#line 1798 "transform_hlds.equiv_type_hlds.c"
    MR_Word transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1;

#line 1801 "transform_hlds.equiv_type_hlds.c"
    {
#line 1803 "transform_hlds.equiv_type_hlds.c"
      transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0(&transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3));
    }
#line 1806 "transform_hlds.equiv_type_hlds.c"
    *transform_hlds__equiv_type_hlds__wrapper_arg_1 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1));
#line 1808 "transform_hlds.equiv_type_hlds.c"
  }
#line 1810 "transform_hlds.equiv_type_hlds.c"
}

#line 1813 "transform_hlds.equiv_type_hlds.c"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0_10001(
#line 1816 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 1818 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2)
#line 1820 "transform_hlds.equiv_type_hlds.c"
{
#line 1822 "transform_hlds.equiv_type_hlds.c"
  {
#line 1824 "transform_hlds.equiv_type_hlds.c"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1827 "transform_hlds.equiv_type_hlds.c"
    {
#line 1829 "transform_hlds.equiv_type_hlds.c"
      transform_hlds__equiv_type_hlds__succeeded = transform_hlds__equiv_type_hlds____Unify____replace_info_0_0(((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2));
    }
#line 1832 "transform_hlds.equiv_type_hlds.c"
    return transform_hlds__equiv_type_hlds__succeeded;
#line 1834 "transform_hlds.equiv_type_hlds.c"
  }
#line 1836 "transform_hlds.equiv_type_hlds.c"
}

#line 1839 "transform_hlds.equiv_type_hlds.c"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0_10001(
#line 1842 "transform_hlds.equiv_type_hlds.c"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 1844 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 1846 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3)
#line 1848 "transform_hlds.equiv_type_hlds.c"
{
#line 1850 "transform_hlds.equiv_type_hlds.c"
  {
#line 1852 "transform_hlds.equiv_type_hlds.c"
    MR_Word transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1;

#line 1855 "transform_hlds.equiv_type_hlds.c"
    {
#line 1857 "transform_hlds.equiv_type_hlds.c"
      transform_hlds__equiv_type_hlds____Compare____replace_info_0_0(&transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3));
    }
#line 1860 "transform_hlds.equiv_type_hlds.c"
    *transform_hlds__equiv_type_hlds__wrapper_arg_1 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1));
#line 1862 "transform_hlds.equiv_type_hlds.c"
  }
#line 1864 "transform_hlds.equiv_type_hlds.c"
}

#line 1303 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_103_111_97_108_95_95_49_51_48_51_95_95_49_95_95_91_50_93_95_48_6_p_0(
#line 1303 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1303 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_39,
#line 1303 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_40,
#line 1303 "equiv_type_hlds.m"
  MR_Tuple transform_hlds__equiv_type_hlds__HeadVar__5_41,
#line 1303 "equiv_type_hlds.m"
  MR_Tuple * transform_hlds__equiv_type_hlds__HeadVar__6_42)
#line 1303 "equiv_type_hlds.m"
{
#line 1303 "equiv_type_hlds.m"
  {
#line 1303 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 1303 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_43_43;
#line 1303 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed1_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__5_41, (MR_Integer) 0)));
#line 1303 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet1_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__5_41, (MR_Integer) 1)));
#line 1303 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cache1_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__5_41, (MR_Integer) 2)));
#line 1303 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstChanged_53;
#line 1303 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet2_54;
#line 1303 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cache2_55;

#line 1307 "equiv_type_hlds.m"
    {
#line 1307 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__HeadVar__3_39, transform_hlds__equiv_type_hlds__HeadVar__4_40, &transform_hlds__equiv_type_hlds__InstChanged_53, transform_hlds__equiv_type_hlds__TVarSet1_51, &transform_hlds__equiv_type_hlds__TVarSet2_54, transform_hlds__equiv_type_hlds__Cache1_52, &transform_hlds__equiv_type_hlds__Cache2_55);
    }
#line 1306 "equiv_type_hlds.m"
    {
#line 1306 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_43_43 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_50, transform_hlds__equiv_type_hlds__InstChanged_53);
    }
#line 1306 "equiv_type_hlds.m"
    {
#line 1306 "equiv_type_hlds.m"
      MR_Tuple base;
#line 1306 "equiv_type_hlds.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1306 "equiv_type_hlds.m"
      *transform_hlds__equiv_type_hlds__HeadVar__6_42 = base;
#line 1306 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_43_43));
#line 1306 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet2_54));
#line 1306 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cache2_55));
#line 1306 "equiv_type_hlds.m"
    }
#line 1303 "equiv_type_hlds.m"
  }
#line 1303 "equiv_type_hlds.m"
}

#line 315 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho10_10_p_0(
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10)
#line 315 "equiv_type_hlds.m"
{
#line 325 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 325 "equiv_type_hlds.m"
    {
#line 325 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 325 "equiv_type_hlds.m"
      {
#line 325 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 325 "equiv_type_hlds.m"
        if ((transform_hlds__equiv_type_hlds__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "equiv_type_hlds.m"
          {
#line 326 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9;
#line 326 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 326 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 325 "equiv_type_hlds.m"
          }
#line 325 "equiv_type_hlds.m"
        else
#line 329 "equiv_type_hlds.m"
          {
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Element0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 0)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Elements0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 1)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 0)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 1)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key_33;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__KeyChanged_34;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value_35;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__ValueChanged_36;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__TVarSet0_61;
#line 1157 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds___TVarSet_62;

#line 1156 "equiv_type_hlds.m"
            {
#line 1156 "equiv_type_hlds.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet0_61);
            }
#line 1157 "equiv_type_hlds.m"
            {
#line 1157 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Key0_31, &transform_hlds__equiv_type_hlds__Key_33, &transform_hlds__equiv_type_hlds__KeyChanged_34, transform_hlds__equiv_type_hlds__TVarSet0_61, &transform_hlds__equiv_type_hlds___TVarSet_62, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44);
            }
#line 332 "equiv_type_hlds.m"
            {
#line 332 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Value0_32, &transform_hlds__equiv_type_hlds__Value_35, &transform_hlds__equiv_type_hlds__ValueChanged_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45);
            }
#line 343 "equiv_type_hlds.m"
#line 343 "equiv_type_hlds.m"
            switch (transform_hlds__equiv_type_hlds__KeyChanged_34) {
#line 343 "equiv_type_hlds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 343 "equiv_type_hlds.m"
              case (MR_Integer) 0:
#line 334 "equiv_type_hlds.m"
                {
#line 334 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Element_37;

#line 338 "equiv_type_hlds.m"
#line 338 "equiv_type_hlds.m"
                  switch (transform_hlds__equiv_type_hlds__ValueChanged_36) {
#line 338 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 337 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__Element_37 = transform_hlds__equiv_type_hlds__Element0_26;
#line 338 "equiv_type_hlds.m"
                      break;
#line 338 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 340 "equiv_type_hlds.m"
                      {
#line 340 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key0_31));
#line 340 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 340 "equiv_type_hlds.m"
                      }
#line 338 "equiv_type_hlds.m"
                      break;
#line 338 "equiv_type_hlds.m"
                  }
#line 342 "equiv_type_hlds.m"
                  {
#line 342 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_37));
#line 342 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5));
#line 342 "equiv_type_hlds.m"
                  }
#line 334 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 334 "equiv_type_hlds.m"
                }
#line 343 "equiv_type_hlds.m"
                break;
#line 343 "equiv_type_hlds.m"
              case (MR_Integer) 1:
#line 344 "equiv_type_hlds.m"
                {
#line 344 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Element_51;

#line 345 "equiv_type_hlds.m"
                  {
#line 345 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key_33));
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 345 "equiv_type_hlds.m"
                  }
#line 346 "equiv_type_hlds.m"
                  {
#line 346 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_51));
#line 346 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7));
#line 346 "equiv_type_hlds.m"
                  }
#line 344 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 344 "equiv_type_hlds.m"
                }
#line 343 "equiv_type_hlds.m"
                break;
#line 343 "equiv_type_hlds.m"
            }
#line 348 "equiv_type_hlds.m"
            /* direct tailcall eliminated */
#line 348 "equiv_type_hlds.m"
            {
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4 = transform_hlds__equiv_type_hlds__Elements0_27;
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;

#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9;
#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7;
#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5;
#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__HeadVar__4_4 = transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4;
#line 348 "equiv_type_hlds.m"
            }
#line 348 "equiv_type_hlds.m"
            continue;
#line 329 "equiv_type_hlds.m"
          }
#line 325 "equiv_type_hlds.m"
      }
#line 325 "equiv_type_hlds.m"
      break;
#line 325 "equiv_type_hlds.m"
    }
#line 315 "equiv_type_hlds.m"
}

#line 315 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho9_10_p_0(
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10)
#line 315 "equiv_type_hlds.m"
{
#line 325 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 325 "equiv_type_hlds.m"
    {
#line 325 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 325 "equiv_type_hlds.m"
      {
#line 325 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 325 "equiv_type_hlds.m"
        if ((transform_hlds__equiv_type_hlds__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "equiv_type_hlds.m"
          {
#line 326 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9;
#line 326 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 326 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 325 "equiv_type_hlds.m"
          }
#line 325 "equiv_type_hlds.m"
        else
#line 329 "equiv_type_hlds.m"
          {
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Element0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 0)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Elements0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 1)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 0)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 1)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__KeyChanged_34;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value_35;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__ValueChanged_36;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__InstName0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 0)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Uniq_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Live_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Real_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__InstName_65;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__TVarSet0_74;
#line 1157 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds___TVarSet_75;

#line 1156 "equiv_type_hlds.m"
            {
#line 1156 "equiv_type_hlds.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet0_74);
            }
#line 1157 "equiv_type_hlds.m"
            {
#line 1157 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__InstName0_61, &transform_hlds__equiv_type_hlds__InstName_65, &transform_hlds__equiv_type_hlds__KeyChanged_34, transform_hlds__equiv_type_hlds__TVarSet0_74, &transform_hlds__equiv_type_hlds___TVarSet_75, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44);
            }
#line 332 "equiv_type_hlds.m"
            {
#line 332 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Value0_32, &transform_hlds__equiv_type_hlds__Value_35, &transform_hlds__equiv_type_hlds__ValueChanged_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45);
            }
#line 2250 "transform_hlds.equiv_type_hlds.c"
#line 2251 "transform_hlds.equiv_type_hlds.c"
            switch (transform_hlds__equiv_type_hlds__KeyChanged_34) {
#line 2253 "transform_hlds.equiv_type_hlds.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2255 "transform_hlds.equiv_type_hlds.c"
              case (MR_Integer) 0:
#line 2257 "transform_hlds.equiv_type_hlds.c"
                {
#line 2259 "transform_hlds.equiv_type_hlds.c"
                  MR_Word transform_hlds__equiv_type_hlds__Element_37;

#line 338 "equiv_type_hlds.m"
#line 338 "equiv_type_hlds.m"
                  switch (transform_hlds__equiv_type_hlds__ValueChanged_36) {
#line 338 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 337 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__Element_37 = transform_hlds__equiv_type_hlds__Element0_26;
#line 338 "equiv_type_hlds.m"
                      break;
#line 338 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 340 "equiv_type_hlds.m"
                      {
#line 340 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key0_31));
#line 340 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 340 "equiv_type_hlds.m"
                      }
#line 338 "equiv_type_hlds.m"
                      break;
#line 338 "equiv_type_hlds.m"
                  }
#line 342 "equiv_type_hlds.m"
                  {
#line 342 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_37));
#line 342 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5));
#line 342 "equiv_type_hlds.m"
                  }
#line 334 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 2301 "transform_hlds.equiv_type_hlds.c"
                }
#line 2303 "transform_hlds.equiv_type_hlds.c"
                break;
#line 2305 "transform_hlds.equiv_type_hlds.c"
              case (MR_Integer) 1:
#line 2307 "transform_hlds.equiv_type_hlds.c"
                {
#line 2309 "transform_hlds.equiv_type_hlds.c"
                  MR_Word transform_hlds__equiv_type_hlds__Element_51;
#line 2311 "transform_hlds.equiv_type_hlds.c"
                  MR_Word transform_hlds__equiv_type_hlds__Key_78;

#line 413 "equiv_type_hlds.m"
                  {
#line 413 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Key_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 413 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key_78, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstName_65));
#line 413 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key_78, 1) = ((MR_Box) ((transform_hlds__equiv_type_hlds__Uniq_62 | ((((transform_hlds__equiv_type_hlds__Live_63 << (MR_Integer) 3)) | ((transform_hlds__equiv_type_hlds__Real_64 << (MR_Integer) 4)))))));
#line 413 "equiv_type_hlds.m"
                  }
#line 345 "equiv_type_hlds.m"
                  {
#line 345 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key_78));
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 345 "equiv_type_hlds.m"
                  }
#line 346 "equiv_type_hlds.m"
                  {
#line 346 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_51));
#line 346 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7));
#line 346 "equiv_type_hlds.m"
                  }
#line 344 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 2346 "transform_hlds.equiv_type_hlds.c"
                }
#line 2348 "transform_hlds.equiv_type_hlds.c"
                break;
#line 2350 "transform_hlds.equiv_type_hlds.c"
            }
#line 348 "equiv_type_hlds.m"
            /* direct tailcall eliminated */
#line 348 "equiv_type_hlds.m"
            {
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4 = transform_hlds__equiv_type_hlds__Elements0_27;
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;

#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9;
#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7;
#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5;
#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__HeadVar__4_4 = transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4;
#line 348 "equiv_type_hlds.m"
            }
#line 348 "equiv_type_hlds.m"
            continue;
#line 329 "equiv_type_hlds.m"
          }
#line 325 "equiv_type_hlds.m"
      }
#line 325 "equiv_type_hlds.m"
      break;
#line 325 "equiv_type_hlds.m"
    }
#line 315 "equiv_type_hlds.m"
}

#line 315 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho8_10_p_0(
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10)
#line 315 "equiv_type_hlds.m"
{
#line 325 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 325 "equiv_type_hlds.m"
    {
#line 325 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 325 "equiv_type_hlds.m"
      {
#line 325 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 325 "equiv_type_hlds.m"
        if ((transform_hlds__equiv_type_hlds__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "equiv_type_hlds.m"
          {
#line 326 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9;
#line 326 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 326 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 325 "equiv_type_hlds.m"
          }
#line 325 "equiv_type_hlds.m"
        else
#line 329 "equiv_type_hlds.m"
          {
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Element0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 0)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Elements0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 1)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 0)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 1)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__KeyChanged_34;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value_35;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__ValueChanged_36;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__InstName0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 0)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Uniq_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Live_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Real_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__InstName_65;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__TVarSet0_74;
#line 1157 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds___TVarSet_75;

#line 1156 "equiv_type_hlds.m"
            {
#line 1156 "equiv_type_hlds.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet0_74);
            }
#line 1157 "equiv_type_hlds.m"
            {
#line 1157 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__InstName0_61, &transform_hlds__equiv_type_hlds__InstName_65, &transform_hlds__equiv_type_hlds__KeyChanged_34, transform_hlds__equiv_type_hlds__TVarSet0_74, &transform_hlds__equiv_type_hlds___TVarSet_75, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44);
            }
#line 332 "equiv_type_hlds.m"
            {
#line 332 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Value0_32, &transform_hlds__equiv_type_hlds__Value_35, &transform_hlds__equiv_type_hlds__ValueChanged_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45);
            }
#line 2488 "transform_hlds.equiv_type_hlds.c"
#line 2489 "transform_hlds.equiv_type_hlds.c"
            switch (transform_hlds__equiv_type_hlds__KeyChanged_34) {
#line 2491 "transform_hlds.equiv_type_hlds.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2493 "transform_hlds.equiv_type_hlds.c"
              case (MR_Integer) 0:
#line 2495 "transform_hlds.equiv_type_hlds.c"
                {
#line 2497 "transform_hlds.equiv_type_hlds.c"
                  MR_Word transform_hlds__equiv_type_hlds__Element_37;

#line 338 "equiv_type_hlds.m"
#line 338 "equiv_type_hlds.m"
                  switch (transform_hlds__equiv_type_hlds__ValueChanged_36) {
#line 338 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 337 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__Element_37 = transform_hlds__equiv_type_hlds__Element0_26;
#line 338 "equiv_type_hlds.m"
                      break;
#line 338 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 340 "equiv_type_hlds.m"
                      {
#line 340 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key0_31));
#line 340 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 340 "equiv_type_hlds.m"
                      }
#line 338 "equiv_type_hlds.m"
                      break;
#line 338 "equiv_type_hlds.m"
                  }
#line 342 "equiv_type_hlds.m"
                  {
#line 342 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_37));
#line 342 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5));
#line 342 "equiv_type_hlds.m"
                  }
#line 334 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 2539 "transform_hlds.equiv_type_hlds.c"
                }
#line 2541 "transform_hlds.equiv_type_hlds.c"
                break;
#line 2543 "transform_hlds.equiv_type_hlds.c"
              case (MR_Integer) 1:
#line 2545 "transform_hlds.equiv_type_hlds.c"
                {
#line 2547 "transform_hlds.equiv_type_hlds.c"
                  MR_Word transform_hlds__equiv_type_hlds__Element_51;
#line 2549 "transform_hlds.equiv_type_hlds.c"
                  MR_Word transform_hlds__equiv_type_hlds__Key_78;

#line 398 "equiv_type_hlds.m"
                  {
#line 398 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Key_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key_78, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstName_65));
#line 398 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key_78, 1) = ((MR_Box) ((transform_hlds__equiv_type_hlds__Uniq_62 | ((((transform_hlds__equiv_type_hlds__Live_63 << (MR_Integer) 3)) | ((transform_hlds__equiv_type_hlds__Real_64 << (MR_Integer) 4)))))));
#line 398 "equiv_type_hlds.m"
                  }
#line 345 "equiv_type_hlds.m"
                  {
#line 345 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key_78));
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 345 "equiv_type_hlds.m"
                  }
#line 346 "equiv_type_hlds.m"
                  {
#line 346 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_51));
#line 346 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7));
#line 346 "equiv_type_hlds.m"
                  }
#line 344 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 2584 "transform_hlds.equiv_type_hlds.c"
                }
#line 2586 "transform_hlds.equiv_type_hlds.c"
                break;
#line 2588 "transform_hlds.equiv_type_hlds.c"
            }
#line 348 "equiv_type_hlds.m"
            /* direct tailcall eliminated */
#line 348 "equiv_type_hlds.m"
            {
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4 = transform_hlds__equiv_type_hlds__Elements0_27;
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;

#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9;
#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7;
#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5;
#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__HeadVar__4_4 = transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4;
#line 348 "equiv_type_hlds.m"
            }
#line 348 "equiv_type_hlds.m"
            continue;
#line 329 "equiv_type_hlds.m"
          }
#line 325 "equiv_type_hlds.m"
      }
#line 325 "equiv_type_hlds.m"
      break;
#line 325 "equiv_type_hlds.m"
    }
#line 315 "equiv_type_hlds.m"
}

#line 315 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho7_10_p_0(
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10)
#line 315 "equiv_type_hlds.m"
{
#line 325 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 325 "equiv_type_hlds.m"
    {
#line 325 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 325 "equiv_type_hlds.m"
      {
#line 325 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 325 "equiv_type_hlds.m"
        if ((transform_hlds__equiv_type_hlds__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "equiv_type_hlds.m"
          {
#line 326 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9;
#line 326 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 326 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 325 "equiv_type_hlds.m"
          }
#line 325 "equiv_type_hlds.m"
        else
#line 329 "equiv_type_hlds.m"
          {
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Element0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 0)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Elements0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 1)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 0)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 1)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key_33;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__KeyChanged_34;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value_35;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__ValueChanged_36;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;

#line 331 "equiv_type_hlds.m"
            {
#line 331 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_merge_inst_info_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Key0_31, &transform_hlds__equiv_type_hlds__Key_33, &transform_hlds__equiv_type_hlds__KeyChanged_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44);
            }
#line 332 "equiv_type_hlds.m"
            {
#line 332 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Value0_32, &transform_hlds__equiv_type_hlds__Value_35, &transform_hlds__equiv_type_hlds__ValueChanged_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45);
            }
#line 343 "equiv_type_hlds.m"
#line 343 "equiv_type_hlds.m"
            switch (transform_hlds__equiv_type_hlds__KeyChanged_34) {
#line 343 "equiv_type_hlds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 343 "equiv_type_hlds.m"
              case (MR_Integer) 0:
#line 334 "equiv_type_hlds.m"
                {
#line 334 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Element_37;

#line 338 "equiv_type_hlds.m"
#line 338 "equiv_type_hlds.m"
                  switch (transform_hlds__equiv_type_hlds__ValueChanged_36) {
#line 338 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 337 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__Element_37 = transform_hlds__equiv_type_hlds__Element0_26;
#line 338 "equiv_type_hlds.m"
                      break;
#line 338 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 340 "equiv_type_hlds.m"
                      {
#line 340 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key0_31));
#line 340 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 340 "equiv_type_hlds.m"
                      }
#line 338 "equiv_type_hlds.m"
                      break;
#line 338 "equiv_type_hlds.m"
                  }
#line 342 "equiv_type_hlds.m"
                  {
#line 342 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_37));
#line 342 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5));
#line 342 "equiv_type_hlds.m"
                  }
#line 334 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 334 "equiv_type_hlds.m"
                }
#line 343 "equiv_type_hlds.m"
                break;
#line 343 "equiv_type_hlds.m"
              case (MR_Integer) 1:
#line 344 "equiv_type_hlds.m"
                {
#line 344 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Element_51;

#line 345 "equiv_type_hlds.m"
                  {
#line 345 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key_33));
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 345 "equiv_type_hlds.m"
                  }
#line 346 "equiv_type_hlds.m"
                  {
#line 346 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_51));
#line 346 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7));
#line 346 "equiv_type_hlds.m"
                  }
#line 344 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 344 "equiv_type_hlds.m"
                }
#line 343 "equiv_type_hlds.m"
                break;
#line 343 "equiv_type_hlds.m"
            }
#line 348 "equiv_type_hlds.m"
            /* direct tailcall eliminated */
#line 348 "equiv_type_hlds.m"
            {
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4 = transform_hlds__equiv_type_hlds__Elements0_27;
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;

#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9;
#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7;
#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5;
#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__HeadVar__4_4 = transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4;
#line 348 "equiv_type_hlds.m"
            }
#line 348 "equiv_type_hlds.m"
            continue;
#line 329 "equiv_type_hlds.m"
          }
#line 325 "equiv_type_hlds.m"
      }
#line 325 "equiv_type_hlds.m"
      break;
#line 325 "equiv_type_hlds.m"
    }
#line 315 "equiv_type_hlds.m"
}

#line 315 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho6_10_p_0(
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 315 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 315 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10)
#line 315 "equiv_type_hlds.m"
{
#line 325 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 325 "equiv_type_hlds.m"
    {
#line 325 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 325 "equiv_type_hlds.m"
      {
#line 325 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 325 "equiv_type_hlds.m"
        if ((transform_hlds__equiv_type_hlds__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "equiv_type_hlds.m"
          {
#line 326 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9;
#line 326 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 326 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 325 "equiv_type_hlds.m"
          }
#line 325 "equiv_type_hlds.m"
        else
#line 329 "equiv_type_hlds.m"
          {
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Element0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 0)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Elements0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 1)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 0)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 1)));
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key_33;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__KeyChanged_34;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value_35;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__ValueChanged_36;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 329 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;

#line 331 "equiv_type_hlds.m"
            {
#line 331 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_unify_inst_info_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Key0_31, &transform_hlds__equiv_type_hlds__Key_33, &transform_hlds__equiv_type_hlds__KeyChanged_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44);
            }
#line 332 "equiv_type_hlds.m"
            {
#line 332 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Value0_32, &transform_hlds__equiv_type_hlds__Value_35, &transform_hlds__equiv_type_hlds__ValueChanged_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45);
            }
#line 343 "equiv_type_hlds.m"
#line 343 "equiv_type_hlds.m"
            switch (transform_hlds__equiv_type_hlds__KeyChanged_34) {
#line 343 "equiv_type_hlds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 343 "equiv_type_hlds.m"
              case (MR_Integer) 0:
#line 334 "equiv_type_hlds.m"
                {
#line 334 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Element_37;

#line 338 "equiv_type_hlds.m"
#line 338 "equiv_type_hlds.m"
                  switch (transform_hlds__equiv_type_hlds__ValueChanged_36) {
#line 338 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 338 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 337 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__Element_37 = transform_hlds__equiv_type_hlds__Element0_26;
#line 338 "equiv_type_hlds.m"
                      break;
#line 338 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 340 "equiv_type_hlds.m"
                      {
#line 340 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key0_31));
#line 340 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 340 "equiv_type_hlds.m"
                      }
#line 338 "equiv_type_hlds.m"
                      break;
#line 338 "equiv_type_hlds.m"
                  }
#line 342 "equiv_type_hlds.m"
                  {
#line 342 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_37));
#line 342 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5));
#line 342 "equiv_type_hlds.m"
                  }
#line 334 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 334 "equiv_type_hlds.m"
                }
#line 343 "equiv_type_hlds.m"
                break;
#line 343 "equiv_type_hlds.m"
              case (MR_Integer) 1:
#line 344 "equiv_type_hlds.m"
                {
#line 344 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Element_51;

#line 345 "equiv_type_hlds.m"
                  {
#line 345 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key_33));
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 345 "equiv_type_hlds.m"
                  }
#line 346 "equiv_type_hlds.m"
                  {
#line 346 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_51));
#line 346 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7));
#line 346 "equiv_type_hlds.m"
                  }
#line 344 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 344 "equiv_type_hlds.m"
                }
#line 343 "equiv_type_hlds.m"
                break;
#line 343 "equiv_type_hlds.m"
            }
#line 348 "equiv_type_hlds.m"
            /* direct tailcall eliminated */
#line 348 "equiv_type_hlds.m"
            {
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4 = transform_hlds__equiv_type_hlds__Elements0_27;
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 348 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;

#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9;
#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7;
#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5;
#line 348 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__HeadVar__4_4 = transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4;
#line 348 "equiv_type_hlds.m"
            }
#line 348 "equiv_type_hlds.m"
            continue;
#line 329 "equiv_type_hlds.m"
          }
#line 325 "equiv_type_hlds.m"
      }
#line 325 "equiv_type_hlds.m"
      break;
#line 325 "equiv_type_hlds.m"
    }
#line 315 "equiv_type_hlds.m"
}

#line 292 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho5_7_p_0(
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21)
#line 292 "equiv_type_hlds.m"
{
#line 301 "equiv_type_hlds.m"
  {
#line 301 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__RevSortedElements1_14;
#line 301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnSortedElements_15;

#line 302 "equiv_type_hlds.m"
    {
#line 302 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho6_10_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__SortedElements0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__RevSortedElements1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__UnSortedElements_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);
    }
#line 307 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__UnSortedElements_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "equiv_type_hlds.m"
      {
#line 306 "equiv_type_hlds.m"
        {
#line 306 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[13], transform_hlds__equiv_type_hlds__RevSortedElements1_14, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 306 "equiv_type_hlds.m"
          return;
        }
#line 305 "equiv_type_hlds.m"
      }
#line 307 "equiv_type_hlds.m"
    else
#line 308 "equiv_type_hlds.m"
      {
#line 308 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_30_30 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[13];
#line 308 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__SortedElements1_18;
#line 308 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__NowSortedElements_19;

#line 309 "equiv_type_hlds.m"
        {
#line 309 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__RevSortedElements1_14, &transform_hlds__equiv_type_hlds__SortedElements1_18);
        }
#line 310 "equiv_type_hlds.m"
        {
#line 310 "equiv_type_hlds.m"
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__UnSortedElements_15, &transform_hlds__equiv_type_hlds__NowSortedElements_19);
        }
#line 311 "equiv_type_hlds.m"
        {
#line 311 "equiv_type_hlds.m"
          mercury__list__merge_and_remove_dups_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__SortedElements1_18, transform_hlds__equiv_type_hlds__NowSortedElements_19, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 311 "equiv_type_hlds.m"
          return;
        }
#line 308 "equiv_type_hlds.m"
      }
#line 301 "equiv_type_hlds.m"
  }
#line 292 "equiv_type_hlds.m"
}

#line 292 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho4_7_p_0(
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21)
#line 292 "equiv_type_hlds.m"
{
#line 301 "equiv_type_hlds.m"
  {
#line 301 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__RevSortedElements1_14;
#line 301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnSortedElements_15;

#line 302 "equiv_type_hlds.m"
    {
#line 302 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho7_10_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__SortedElements0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__RevSortedElements1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__UnSortedElements_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);
    }
#line 307 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__UnSortedElements_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "equiv_type_hlds.m"
      {
#line 306 "equiv_type_hlds.m"
        {
#line 306 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[12], transform_hlds__equiv_type_hlds__RevSortedElements1_14, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 306 "equiv_type_hlds.m"
          return;
        }
#line 305 "equiv_type_hlds.m"
      }
#line 307 "equiv_type_hlds.m"
    else
#line 308 "equiv_type_hlds.m"
      {
#line 308 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_30_30 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[12];
#line 308 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__SortedElements1_18;
#line 308 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__NowSortedElements_19;

#line 309 "equiv_type_hlds.m"
        {
#line 309 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__RevSortedElements1_14, &transform_hlds__equiv_type_hlds__SortedElements1_18);
        }
#line 310 "equiv_type_hlds.m"
        {
#line 310 "equiv_type_hlds.m"
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__UnSortedElements_15, &transform_hlds__equiv_type_hlds__NowSortedElements_19);
        }
#line 311 "equiv_type_hlds.m"
        {
#line 311 "equiv_type_hlds.m"
          mercury__list__merge_and_remove_dups_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__SortedElements1_18, transform_hlds__equiv_type_hlds__NowSortedElements_19, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 311 "equiv_type_hlds.m"
          return;
        }
#line 308 "equiv_type_hlds.m"
      }
#line 301 "equiv_type_hlds.m"
  }
#line 292 "equiv_type_hlds.m"
}

#line 292 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho3_7_p_0(
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21)
#line 292 "equiv_type_hlds.m"
{
#line 301 "equiv_type_hlds.m"
  {
#line 301 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__RevSortedElements1_14;
#line 301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnSortedElements_15;

#line 302 "equiv_type_hlds.m"
    {
#line 302 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho8_10_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__SortedElements0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__RevSortedElements1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__UnSortedElements_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);
    }
#line 307 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__UnSortedElements_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "equiv_type_hlds.m"
      {
#line 306 "equiv_type_hlds.m"
        {
#line 306 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[11], transform_hlds__equiv_type_hlds__RevSortedElements1_14, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 306 "equiv_type_hlds.m"
          return;
        }
#line 305 "equiv_type_hlds.m"
      }
#line 307 "equiv_type_hlds.m"
    else
#line 308 "equiv_type_hlds.m"
      {
#line 308 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_30_30 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[11];
#line 308 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__SortedElements1_18;
#line 308 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__NowSortedElements_19;

#line 309 "equiv_type_hlds.m"
        {
#line 309 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__RevSortedElements1_14, &transform_hlds__equiv_type_hlds__SortedElements1_18);
        }
#line 310 "equiv_type_hlds.m"
        {
#line 310 "equiv_type_hlds.m"
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__UnSortedElements_15, &transform_hlds__equiv_type_hlds__NowSortedElements_19);
        }
#line 311 "equiv_type_hlds.m"
        {
#line 311 "equiv_type_hlds.m"
          mercury__list__merge_and_remove_dups_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__SortedElements1_18, transform_hlds__equiv_type_hlds__NowSortedElements_19, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 311 "equiv_type_hlds.m"
          return;
        }
#line 308 "equiv_type_hlds.m"
      }
#line 301 "equiv_type_hlds.m"
  }
#line 292 "equiv_type_hlds.m"
}

#line 292 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho2_7_p_0(
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21)
#line 292 "equiv_type_hlds.m"
{
#line 301 "equiv_type_hlds.m"
  {
#line 301 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__RevSortedElements1_14;
#line 301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnSortedElements_15;

#line 302 "equiv_type_hlds.m"
    {
#line 302 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho9_10_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__SortedElements0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__RevSortedElements1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__UnSortedElements_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);
    }
#line 307 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__UnSortedElements_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "equiv_type_hlds.m"
      {
#line 306 "equiv_type_hlds.m"
        {
#line 306 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[10], transform_hlds__equiv_type_hlds__RevSortedElements1_14, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 306 "equiv_type_hlds.m"
          return;
        }
#line 305 "equiv_type_hlds.m"
      }
#line 307 "equiv_type_hlds.m"
    else
#line 308 "equiv_type_hlds.m"
      {
#line 308 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_30_30 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[10];
#line 308 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__SortedElements1_18;
#line 308 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__NowSortedElements_19;

#line 309 "equiv_type_hlds.m"
        {
#line 309 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__RevSortedElements1_14, &transform_hlds__equiv_type_hlds__SortedElements1_18);
        }
#line 310 "equiv_type_hlds.m"
        {
#line 310 "equiv_type_hlds.m"
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__UnSortedElements_15, &transform_hlds__equiv_type_hlds__NowSortedElements_19);
        }
#line 311 "equiv_type_hlds.m"
        {
#line 311 "equiv_type_hlds.m"
          mercury__list__merge_and_remove_dups_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__SortedElements1_18, transform_hlds__equiv_type_hlds__NowSortedElements_19, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 311 "equiv_type_hlds.m"
          return;
        }
#line 308 "equiv_type_hlds.m"
      }
#line 301 "equiv_type_hlds.m"
  }
#line 292 "equiv_type_hlds.m"
}

#line 292 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21)
#line 292 "equiv_type_hlds.m"
{
#line 301 "equiv_type_hlds.m"
  {
#line 301 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__RevSortedElements1_14;
#line 301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnSortedElements_15;

#line 302 "equiv_type_hlds.m"
    {
#line 302 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho10_10_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__SortedElements0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__RevSortedElements1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__UnSortedElements_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);
    }
#line 307 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__UnSortedElements_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "equiv_type_hlds.m"
      {
#line 306 "equiv_type_hlds.m"
        {
#line 306 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[9], transform_hlds__equiv_type_hlds__RevSortedElements1_14, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 306 "equiv_type_hlds.m"
          return;
        }
#line 305 "equiv_type_hlds.m"
      }
#line 307 "equiv_type_hlds.m"
    else
#line 308 "equiv_type_hlds.m"
      {
#line 308 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_30_30 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[9];
#line 308 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__SortedElements1_18;
#line 308 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__NowSortedElements_19;

#line 309 "equiv_type_hlds.m"
        {
#line 309 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__RevSortedElements1_14, &transform_hlds__equiv_type_hlds__SortedElements1_18);
        }
#line 310 "equiv_type_hlds.m"
        {
#line 310 "equiv_type_hlds.m"
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__UnSortedElements_15, &transform_hlds__equiv_type_hlds__NowSortedElements_19);
        }
#line 311 "equiv_type_hlds.m"
        {
#line 311 "equiv_type_hlds.m"
          mercury__list__merge_and_remove_dups_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__SortedElements1_18, transform_hlds__equiv_type_hlds__NowSortedElements_19, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 311 "equiv_type_hlds.m"
          return;
        }
#line 308 "equiv_type_hlds.m"
      }
#line 301 "equiv_type_hlds.m"
  }
#line 292 "equiv_type_hlds.m"
}

#line 1303 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal__1303__1_6_p_0(
#line 1303 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1303 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_38,
#line 1303 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_39,
#line 1303 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_40,
#line 1303 "equiv_type_hlds.m"
  MR_Tuple transform_hlds__equiv_type_hlds__HeadVar__5_41,
#line 1303 "equiv_type_hlds.m"
  MR_Tuple * transform_hlds__equiv_type_hlds__HeadVar__6_42)
#line 1303 "equiv_type_hlds.m"
{
#line 1303 "equiv_type_hlds.m"
  {
#line 1303 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1303 "equiv_type_hlds.m"
    {
#line 1303 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_103_111_97_108_95_95_49_51_48_51_95_95_49_95_95_91_50_93_95_48_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__HeadVar__3_39, transform_hlds__equiv_type_hlds__HeadVar__4_40, transform_hlds__equiv_type_hlds__HeadVar__5_41, transform_hlds__equiv_type_hlds__HeadVar__6_42);
#line 1303 "equiv_type_hlds.m"
      return;
    }
#line 1303 "equiv_type_hlds.m"
  }
#line 1303 "equiv_type_hlds.m"
}

#line 590 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__590__1_3_p_0(
#line 590 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeMap_30,
#line 590 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_99,
#line 590 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_100)
#line 590 "equiv_type_hlds.m"
{
#line 590 "equiv_type_hlds.m"
  {
#line 590 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 590 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_101_101 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 590 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv0_HeadVar__3_100;

#line 590 "equiv_type_hlds.m"
    {
#line 590 "equiv_type_hlds.m"
      mercury__map__lookup_3_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_101_101, transform_hlds__equiv_type_hlds__TypeCtorInfo_101_101, transform_hlds__equiv_type_hlds__TypeMap_30, ((MR_Box) (transform_hlds__equiv_type_hlds__HeadVar__2_99)), &transform_hlds__equiv_type_hlds__conv0_HeadVar__3_100);
    }
#line 590 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__HeadVar__3_100 = ((MR_Word) transform_hlds__equiv_type_hlds__conv0_HeadVar__3_100);
#line 590 "equiv_type_hlds.m"
  }
#line 590 "equiv_type_hlds.m"
}

#line 584 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__584__1_6_p_0(
#line 584 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 584 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_65,
#line 584 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_66,
#line 584 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_67,
#line 584 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__5_68,
#line 584 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__6_69)
#line 584 "equiv_type_hlds.m"
{
#line 584 "equiv_type_hlds.m"
  {
#line 584 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 584 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_96_96;
#line 584 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__NewType_29;

#line 587 "equiv_type_hlds.m"
    {
#line 587 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__HeadVar__2_65, &transform_hlds__equiv_type_hlds__NewType_29, transform_hlds__equiv_type_hlds__HeadVar__5_68, transform_hlds__equiv_type_hlds__HeadVar__6_69);
    }
#line 3526 "transform_hlds.equiv_type_hlds.c"
    transform_hlds__equiv_type_hlds__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 588 "equiv_type_hlds.m"
    {
#line 588 "equiv_type_hlds.m"
      mercury__map__set_4_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_96_96, transform_hlds__equiv_type_hlds__TypeCtorInfo_96_96, ((MR_Box) (transform_hlds__equiv_type_hlds__HeadVar__2_65)), ((MR_Box) (transform_hlds__equiv_type_hlds__NewType_29)), transform_hlds__equiv_type_hlds__HeadVar__3_66, transform_hlds__equiv_type_hlds__HeadVar__4_67);
#line 588 "equiv_type_hlds.m"
      return;
    }
#line 584 "equiv_type_hlds.m"
  }
#line 584 "equiv_type_hlds.m"
}

#line 1282 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0(
#line 1282 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1282 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1282 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3)
#line 1282 "equiv_type_hlds.m"
{
#line 1282 "equiv_type_hlds.m"
  {
#line 1282 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 1282 "equiv_type_hlds.m"
    MR_Integer transform_hlds__equiv_type_hlds__CastX_21 = (MR_Integer) transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1282 "equiv_type_hlds.m"
    MR_Integer transform_hlds__equiv_type_hlds__CastY_22 = (MR_Integer) transform_hlds__equiv_type_hlds__HeadVar__3_3;

#line 1282 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__CastX_21 == transform_hlds__equiv_type_hlds__CastY_22);
#line 1282 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 3564 "transform_hlds.equiv_type_hlds.c"
      *transform_hlds__equiv_type_hlds__HeadVar__1_1 = (MR_Integer) 0;
#line 1282 "equiv_type_hlds.m"
    else
#line 1282 "equiv_type_hlds.m"
      {
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 2)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 3)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 4)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 5)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 0)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 1)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 2)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 3)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 4)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 5)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_16_16;

#line 1282 "equiv_type_hlds.m"
        {
#line 1282 "equiv_type_hlds.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__equiv_type_hlds__V_16_16, transform_hlds__equiv_type_hlds__V_4_4, transform_hlds__equiv_type_hlds__V_10_10);
        }
#line 3602 "transform_hlds.equiv_type_hlds.c"
        transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_16_16 == (MR_Integer) 0);
#line 1282 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__succeeded = !(transform_hlds__equiv_type_hlds__succeeded);
#line 1282 "equiv_type_hlds.m"
        if (transform_hlds__equiv_type_hlds__succeeded)
#line 1282 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__V_16_16;
#line 1282 "equiv_type_hlds.m"
        else
#line 1282 "equiv_type_hlds.m"
          {
#line 1282 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__V_17_17;

#line 1282 "equiv_type_hlds.m"
            {
#line 1282 "equiv_type_hlds.m"
              hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__equiv_type_hlds__V_17_17, transform_hlds__equiv_type_hlds__V_5_5, transform_hlds__equiv_type_hlds__V_11_11);
            }
#line 3622 "transform_hlds.equiv_type_hlds.c"
            transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_17_17 == (MR_Integer) 0);
#line 1282 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__succeeded = !(transform_hlds__equiv_type_hlds__succeeded);
#line 1282 "equiv_type_hlds.m"
            if (transform_hlds__equiv_type_hlds__succeeded)
#line 1282 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__V_17_17;
#line 1282 "equiv_type_hlds.m"
            else
#line 1282 "equiv_type_hlds.m"
              {
#line 1282 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_18_18;

#line 1282 "equiv_type_hlds.m"
                {
#line 1282 "equiv_type_hlds.m"
                  hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__equiv_type_hlds__V_18_18, transform_hlds__equiv_type_hlds__V_6_6, transform_hlds__equiv_type_hlds__V_12_12);
                }
#line 3642 "transform_hlds.equiv_type_hlds.c"
                transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_18_18 == (MR_Integer) 0);
#line 1282 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__succeeded = !(transform_hlds__equiv_type_hlds__succeeded);
#line 1282 "equiv_type_hlds.m"
                if (transform_hlds__equiv_type_hlds__succeeded)
#line 1282 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__V_18_18;
#line 1282 "equiv_type_hlds.m"
                else
#line 1282 "equiv_type_hlds.m"
                  {
#line 1282 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_19_19;

#line 1282 "equiv_type_hlds.m"
                    {
#line 1282 "equiv_type_hlds.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[2], &transform_hlds__equiv_type_hlds__V_19_19, ((MR_Box) (transform_hlds__equiv_type_hlds__V_7_7)), ((MR_Box) (transform_hlds__equiv_type_hlds__V_13_13)));
                    }
#line 3662 "transform_hlds.equiv_type_hlds.c"
                    transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_19_19 == (MR_Integer) 0);
#line 1282 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__succeeded = !(transform_hlds__equiv_type_hlds__succeeded);
#line 1282 "equiv_type_hlds.m"
                    if (transform_hlds__equiv_type_hlds__succeeded)
#line 1282 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__V_19_19;
#line 1282 "equiv_type_hlds.m"
                    else
#line 1282 "equiv_type_hlds.m"
                      {
#line 1282 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_20_20;

#line 1282 "equiv_type_hlds.m"
                        {
#line 1282 "equiv_type_hlds.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3], &transform_hlds__equiv_type_hlds__V_20_20, ((MR_Box) (transform_hlds__equiv_type_hlds__V_8_8)), ((MR_Box) (transform_hlds__equiv_type_hlds__V_14_14)));
                        }
#line 3682 "transform_hlds.equiv_type_hlds.c"
                        transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_20_20 == (MR_Integer) 0);
#line 1282 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__succeeded = !(transform_hlds__equiv_type_hlds__succeeded);
#line 1282 "equiv_type_hlds.m"
                        if (transform_hlds__equiv_type_hlds__succeeded)
#line 1282 "equiv_type_hlds.m"
                          *transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__V_20_20;
#line 1282 "equiv_type_hlds.m"
                        else
#line 1282 "equiv_type_hlds.m"
                          {
#line 1282 "equiv_type_hlds.m"
                            MR_Integer transform_hlds__equiv_type_hlds__V_29_29 = (MR_Integer) transform_hlds__equiv_type_hlds__V_9_9;
#line 1282 "equiv_type_hlds.m"
                            MR_Integer transform_hlds__equiv_type_hlds__V_30_30 = (MR_Integer) transform_hlds__equiv_type_hlds__V_15_15;

#line 1282 "equiv_type_hlds.m"
                            {
#line 1282 "equiv_type_hlds.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__V_29_29, transform_hlds__equiv_type_hlds__V_30_30);
#line 1282 "equiv_type_hlds.m"
                              return;
                            }
#line 1282 "equiv_type_hlds.m"
                          }
#line 1282 "equiv_type_hlds.m"
                      }
#line 1282 "equiv_type_hlds.m"
                  }
#line 1282 "equiv_type_hlds.m"
              }
#line 1282 "equiv_type_hlds.m"
          }
#line 1282 "equiv_type_hlds.m"
      }
#line 1282 "equiv_type_hlds.m"
  }
#line 1282 "equiv_type_hlds.m"
}

#line 1282 "equiv_type_hlds.m"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0(
#line 1282 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1282 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2)
#line 1282 "equiv_type_hlds.m"
{
#line 1282 "equiv_type_hlds.m"
  {
#line 1282 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 1282 "equiv_type_hlds.m"
    MR_Integer transform_hlds__equiv_type_hlds__CastX_15 = (MR_Integer) transform_hlds__equiv_type_hlds__HeadVar__1_1;
#line 1282 "equiv_type_hlds.m"
    MR_Integer transform_hlds__equiv_type_hlds__CastY_16 = (MR_Integer) transform_hlds__equiv_type_hlds__HeadVar__2_2;

#line 1282 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__CastX_15 == transform_hlds__equiv_type_hlds__CastY_16);
#line 1282 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 1282 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__succeeded = MR_TRUE;
#line 1282 "equiv_type_hlds.m"
    else
#line 1282 "equiv_type_hlds.m"
      {
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_20_20;
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_21_21;
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 0)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 1)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 2)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 3)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 4)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 5)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 2)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 3)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 4)));
#line 1282 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 5)));

#line 3780 "transform_hlds.equiv_type_hlds.c"
        {
#line 3782 "transform_hlds.equiv_type_hlds.c"
          transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__equiv_type_hlds__V_3_3, transform_hlds__equiv_type_hlds__V_9_9);
        }
#line 1282 "equiv_type_hlds.m"
        if (transform_hlds__equiv_type_hlds__succeeded)
#line 1282 "equiv_type_hlds.m"
          {
#line 3789 "transform_hlds.equiv_type_hlds.c"
            {
#line 3791 "transform_hlds.equiv_type_hlds.c"
              transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__equiv_type_hlds__V_4_4, transform_hlds__equiv_type_hlds__V_10_10);
            }
#line 1282 "equiv_type_hlds.m"
            if (transform_hlds__equiv_type_hlds__succeeded)
#line 1282 "equiv_type_hlds.m"
              {
#line 3798 "transform_hlds.equiv_type_hlds.c"
                {
#line 3800 "transform_hlds.equiv_type_hlds.c"
                  transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__equiv_type_hlds__V_5_5, transform_hlds__equiv_type_hlds__V_11_11);
                }
#line 1282 "equiv_type_hlds.m"
                if (transform_hlds__equiv_type_hlds__succeeded)
#line 1282 "equiv_type_hlds.m"
                  {
#line 3807 "transform_hlds.equiv_type_hlds.c"
                    transform_hlds__equiv_type_hlds__TypeInfo_20_20 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[2];
#line 3809 "transform_hlds.equiv_type_hlds.c"
                    {
#line 3811 "transform_hlds.equiv_type_hlds.c"
                      transform_hlds__equiv_type_hlds__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_20_20, ((MR_Box) (transform_hlds__equiv_type_hlds__V_6_6)), ((MR_Box) (transform_hlds__equiv_type_hlds__V_12_12)));
                    }
#line 1282 "equiv_type_hlds.m"
                    if (transform_hlds__equiv_type_hlds__succeeded)
#line 1282 "equiv_type_hlds.m"
                      {
#line 3818 "transform_hlds.equiv_type_hlds.c"
                        transform_hlds__equiv_type_hlds__TypeInfo_21_21 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3];
#line 3820 "transform_hlds.equiv_type_hlds.c"
                        {
#line 3822 "transform_hlds.equiv_type_hlds.c"
                          transform_hlds__equiv_type_hlds__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_21_21, ((MR_Box) (transform_hlds__equiv_type_hlds__V_7_7)), ((MR_Box) (transform_hlds__equiv_type_hlds__V_13_13)));
                        }
#line 1282 "equiv_type_hlds.m"
                        if (transform_hlds__equiv_type_hlds__succeeded)
#line 3827 "transform_hlds.equiv_type_hlds.c"
                          transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_8_8 == transform_hlds__equiv_type_hlds__V_14_14);
#line 1282 "equiv_type_hlds.m"
                      }
#line 1282 "equiv_type_hlds.m"
                  }
#line 1282 "equiv_type_hlds.m"
              }
#line 1282 "equiv_type_hlds.m"
          }
#line 1282 "equiv_type_hlds.m"
      }
#line 1282 "equiv_type_hlds.m"
    return transform_hlds__equiv_type_hlds__succeeded;
#line 1282 "equiv_type_hlds.m"
  }
#line 1282 "equiv_type_hlds.m"
}

#line 1267 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0(
#line 1267 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1267 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1267 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3)
#line 1267 "equiv_type_hlds.m"
{
#line 1267 "equiv_type_hlds.m"
  {
#line 1267 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 1267 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cast_HeadVar1_4 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1267 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cast_HeadVar2_5 = transform_hlds__equiv_type_hlds__HeadVar__3_3;

#line 1267 "equiv_type_hlds.m"
    {
#line 1267 "equiv_type_hlds.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3], transform_hlds__equiv_type_hlds__HeadVar__1_1, ((MR_Box) (transform_hlds__equiv_type_hlds__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__equiv_type_hlds__Cast_HeadVar2_5)));
#line 1267 "equiv_type_hlds.m"
      return;
    }
#line 1267 "equiv_type_hlds.m"
  }
#line 1267 "equiv_type_hlds.m"
}

#line 1267 "equiv_type_hlds.m"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0(
#line 1267 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1267 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2)
#line 1267 "equiv_type_hlds.m"
{
#line 1267 "equiv_type_hlds.m"
  {
#line 1267 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 1267 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cast_HeadVar1_3 = transform_hlds__equiv_type_hlds__HeadVar__1_1;
#line 1267 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cast_HeadVar2_4 = transform_hlds__equiv_type_hlds__HeadVar__2_2;

#line 1267 "equiv_type_hlds.m"
    {
#line 1267 "equiv_type_hlds.m"
      return transform_hlds__equiv_type_hlds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3], ((MR_Box) (transform_hlds__equiv_type_hlds__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__equiv_type_hlds__Cast_HeadVar2_4)));
    }
#line 1267 "equiv_type_hlds.m"
    return transform_hlds__equiv_type_hlds__succeeded;
#line 1267 "equiv_type_hlds.m"
  }
#line 1267 "equiv_type_hlds.m"
}

#line 1654 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(
#line 1654 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1654 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1654 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1654 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1654 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_5,
#line 1654 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_6,
#line 1654 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_7,
#line 1654 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_8)
#line 1654 "equiv_type_hlds.m"
{
#line 1659 "equiv_type_hlds.m"
  {
#line 1659 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1659 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1659 "equiv_type_hlds.m"
      {
#line 1659 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1659 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
#line 1659 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_7;
#line 1659 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_5;
#line 1659 "equiv_type_hlds.m"
      }
#line 1659 "equiv_type_hlds.m"
    else
#line 1661 "equiv_type_hlds.m"
      {
#line 1661 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__A0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1661 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__As0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1661 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__A_24;
#line 1661 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed0_25;
#line 1661 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__As_26;
#line 1661 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed1_27;
#line 1661 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_32_32;
#line 1661 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33_33;
#line 1661 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A0_18, (MR_Integer) 0)));
#line 1661 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__NameMode_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A0_18, (MR_Integer) 1)));
#line 1661 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Type0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A0_18, (MR_Integer) 2)));
#line 1661 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__BoxPolicy_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A0_18, (MR_Integer) 3)));
#line 1661 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Type_50;

#line 1649 "equiv_type_hlds.m"
        {
#line 1649 "equiv_type_hlds.m"
          parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Type0_48, &transform_hlds__equiv_type_hlds__Type_50, &transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33_33);
        }
#line 1651 "equiv_type_hlds.m"
#line 1651 "equiv_type_hlds.m"
        switch (transform_hlds__equiv_type_hlds__Changed0_25) {
#line 1651 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1651 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1651 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__A_24 = transform_hlds__equiv_type_hlds__A0_18;
#line 1651 "equiv_type_hlds.m"
            break;
#line 1651 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1650 "equiv_type_hlds.m"
            {
#line 1650 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__A_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1650 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A_24, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_46));
#line 1650 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A_24, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__NameMode_47));
#line 1650 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A_24, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_50));
#line 1650 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A_24, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__BoxPolicy_49));
#line 1650 "equiv_type_hlds.m"
            }
#line 1651 "equiv_type_hlds.m"
            break;
#line 1651 "equiv_type_hlds.m"
        }
#line 1663 "equiv_type_hlds.m"
        {
#line 1663 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__As0_19, &transform_hlds__equiv_type_hlds__As_26, &transform_hlds__equiv_type_hlds__Changed1_27, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_6, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_8);
        }
#line 1664 "equiv_type_hlds.m"
        {
#line 1664 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__Changed1_27);
        }
#line 1666 "equiv_type_hlds.m"
#line 1666 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
#line 1666 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1666 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1666 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1666 "equiv_type_hlds.m"
            break;
#line 1666 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1665 "equiv_type_hlds.m"
            {
#line 1665 "equiv_type_hlds.m"
              MR_Word base;
#line 1665 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1665 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
#line 1665 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__A_24));
#line 1665 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__As_26));
#line 1665 "equiv_type_hlds.m"
            }
#line 1666 "equiv_type_hlds.m"
            break;
#line 1666 "equiv_type_hlds.m"
        }
#line 1661 "equiv_type_hlds.m"
      }
#line 1659 "equiv_type_hlds.m"
  }
#line 1654 "equiv_type_hlds.m"
}

#line 1625 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_uni_modes_6_p_0(
#line 1625 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1625 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1625 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1625 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1625 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
#line 1625 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6)
#line 1625 "equiv_type_hlds.m"
{
#line 1629 "equiv_type_hlds.m"
  {
#line 1629 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1629 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1629 "equiv_type_hlds.m"
      {
#line 1629 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1629 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
#line 1629 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5;
#line 1629 "equiv_type_hlds.m"
      }
#line 1629 "equiv_type_hlds.m"
    else
#line 1630 "equiv_type_hlds.m"
      {
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__H0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__T0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__T_18;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed0_19;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__H_20;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed1_21;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstA0_30;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstB0_31;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstC0_32;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstD0_33;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstA_34;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstB_35;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstC_36;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstD_37;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed1_41;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed2_42;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed3_43;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed4_44;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_45_45;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_46_46;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_47_47;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_48_48;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_49;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_50;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_51;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_52;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_53;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_54;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_36_55;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37_56;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_57;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_39_58;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_59_59;
#line 1630 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_60_60;
#line 1609 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_63_63;
#line 1609 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_64_64;
#line 1609 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_65_65;
#line 1609 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_67_67;

#line 1631 "equiv_type_hlds.m"
        {
#line 1631 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_uni_modes_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__T0_14, &transform_hlds__equiv_type_hlds__T_18, &transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24);
        }
#line 1606 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H0_13, (MR_Integer) 0)));
#line 1606 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H0_13, (MR_Integer) 1)));
#line 1606 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__InstA0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_45_45, (MR_Integer) 0)));
#line 1606 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__InstB0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_45_45, (MR_Integer) 1)));
#line 1606 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__InstC0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_46_46, (MR_Integer) 0)));
#line 1606 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__InstD0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_46_46, (MR_Integer) 1)));
#line 1609 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 0)));
#line 1609 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 1)));
#line 1609 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 2)));
#line 1609 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 3)));
#line 1609 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 4)));
#line 1609 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 5)));
#line 1611 "equiv_type_hlds.m"
        {
#line 1611 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__InstA0_30, &transform_hlds__equiv_type_hlds__InstA_34, &transform_hlds__equiv_type_hlds__Changed1_41, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_49, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_50, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_52);
        }
#line 1612 "equiv_type_hlds.m"
        {
#line 1612 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__InstB0_31, &transform_hlds__equiv_type_hlds__InstB_35, &transform_hlds__equiv_type_hlds__Changed2_42, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_51, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_53, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_52, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_54);
        }
#line 1613 "equiv_type_hlds.m"
        {
#line 1613 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__InstC0_32, &transform_hlds__equiv_type_hlds__InstC_36, &transform_hlds__equiv_type_hlds__Changed3_43, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_53, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_36_55, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_54, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37_56);
        }
#line 1614 "equiv_type_hlds.m"
        {
#line 1614 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__InstD0_33, &transform_hlds__equiv_type_hlds__InstD_37, &transform_hlds__equiv_type_hlds__Changed4_44, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_36_55, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_57, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37_56, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_39_58);
        }
#line 1615 "equiv_type_hlds.m"
        {
#line 1615 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_60_60 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_41, transform_hlds__equiv_type_hlds__Changed2_42);
        }
#line 1615 "equiv_type_hlds.m"
        {
#line 1615 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_59_59 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__V_60_60, transform_hlds__equiv_type_hlds__Changed3_43);
        }
#line 1615 "equiv_type_hlds.m"
        {
#line 1615 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__Changed1_21 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__V_59_59, transform_hlds__equiv_type_hlds__Changed4_44);
        }
#line 1620 "equiv_type_hlds.m"
#line 1620 "equiv_type_hlds.m"
        switch (transform_hlds__equiv_type_hlds__Changed1_21) {
#line 1620 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1620 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1621 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24;
#line 1620 "equiv_type_hlds.m"
            break;
#line 1620 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1617 "equiv_type_hlds.m"
            {
#line 1617 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 0)));
#line 1617 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 1)));
#line 1617 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 2)));
#line 1617 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 5)));
#line 1618 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 3)));
#line 1618 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 4)));

#line 1619 "equiv_type_hlds.m"
              {
#line 1619 "equiv_type_hlds.m"
                MR_Word base;
#line 1619 "equiv_type_hlds.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1619 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6 = base;
#line 1619 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_73_73));
#line 1619 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_74_74));
#line 1619 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_75_75));
#line 1619 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_57));
#line 1619 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_39_58));
#line 1619 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_78_78));
#line 1619 "equiv_type_hlds.m"
              }
#line 1617 "equiv_type_hlds.m"
            }
#line 1620 "equiv_type_hlds.m"
            break;
#line 1620 "equiv_type_hlds.m"
        }
#line 1607 "equiv_type_hlds.m"
        {
#line 1607 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1607 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_34));
#line 1607 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_35));
#line 1607 "equiv_type_hlds.m"
        }
#line 1607 "equiv_type_hlds.m"
        {
#line 1607 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1607 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_48_48, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstC_36));
#line 1607 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_48_48, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstD_37));
#line 1607 "equiv_type_hlds.m"
        }
#line 1607 "equiv_type_hlds.m"
        {
#line 1607 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__H_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1607 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H_20, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_47_47));
#line 1607 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H_20, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_48_48));
#line 1607 "equiv_type_hlds.m"
        }
#line 1633 "equiv_type_hlds.m"
        {
#line 1633 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__Changed1_21);
        }
#line 1635 "equiv_type_hlds.m"
#line 1635 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
#line 1635 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1635 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1635 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1635 "equiv_type_hlds.m"
            break;
#line 1635 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1634 "equiv_type_hlds.m"
            {
#line 1634 "equiv_type_hlds.m"
              MR_Word base;
#line 1634 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1634 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
#line 1634 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__H_20));
#line 1634 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__T_18));
#line 1634 "equiv_type_hlds.m"
            }
#line 1635 "equiv_type_hlds.m"
            break;
#line 1635 "equiv_type_hlds.m"
        }
#line 1630 "equiv_type_hlds.m"
      }
#line 1629 "equiv_type_hlds.m"
  }
#line 1625 "equiv_type_hlds.m"
}

#line 1603 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_uni_mode_6_p_0(
#line 1603 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1603 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1603 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1603 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_16,
#line 1603 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_24,
#line 1603 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_25)
#line 1603 "equiv_type_hlds.m"
{
#line 1607 "equiv_type_hlds.m"
  {
#line 1607 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstA0_8;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstB0_9;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstC0_10;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstD0_11;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstA_12;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstB_13;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstC_14;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstD_15;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed1_20;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed2_21;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed3_22;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed4_23;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_28_28;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_29_29;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_30;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_31;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_34;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_35;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_36_36;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37_37;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_38;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_39_39;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_40_40;
#line 1607 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_41_41;
#line 1609 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_44_44;
#line 1609 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_45_45;
#line 1609 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_46_46;
#line 1609 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_48_48;

#line 1606 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__InstA0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_26_26, (MR_Integer) 0)));
#line 1606 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__InstB0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_26_26, (MR_Integer) 1)));
#line 1606 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__InstC0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_27_27, (MR_Integer) 0)));
#line 1606 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__InstD0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_27_27, (MR_Integer) 1)));
#line 1609 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 1609 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 1609 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 1609 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 1609 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 1609 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 1611 "equiv_type_hlds.m"
    {
#line 1611 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstA0_8, &transform_hlds__equiv_type_hlds__InstA_12, &transform_hlds__equiv_type_hlds__Changed1_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_30, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_31, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33);
    }
#line 1612 "equiv_type_hlds.m"
    {
#line 1612 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstB0_9, &transform_hlds__equiv_type_hlds__InstB_13, &transform_hlds__equiv_type_hlds__Changed2_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_35);
    }
#line 1613 "equiv_type_hlds.m"
    {
#line 1613 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstC0_10, &transform_hlds__equiv_type_hlds__InstC_14, &transform_hlds__equiv_type_hlds__Changed3_22, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_34, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_36_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_35, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37_37);
    }
#line 1614 "equiv_type_hlds.m"
    {
#line 1614 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstD0_11, &transform_hlds__equiv_type_hlds__InstD_15, &transform_hlds__equiv_type_hlds__Changed4_23, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_36_36, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_38, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37_37, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_39_39);
    }
#line 1615 "equiv_type_hlds.m"
    {
#line 1615 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_41_41 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_20, transform_hlds__equiv_type_hlds__Changed2_21);
    }
#line 1615 "equiv_type_hlds.m"
    {
#line 1615 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_40_40 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__V_41_41, transform_hlds__equiv_type_hlds__Changed3_22);
    }
#line 1615 "equiv_type_hlds.m"
    {
#line 1615 "equiv_type_hlds.m"
      *transform_hlds__equiv_type_hlds__Changed_16 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__V_40_40, transform_hlds__equiv_type_hlds__Changed4_23);
    }
#line 1620 "equiv_type_hlds.m"
#line 1620 "equiv_type_hlds.m"
    switch (*transform_hlds__equiv_type_hlds__Changed_16) {
#line 1620 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1620 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 1621 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_25 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_24;
#line 1620 "equiv_type_hlds.m"
        break;
#line 1620 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 1617 "equiv_type_hlds.m"
        {
#line 1617 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 1617 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 1617 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 1617 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 1618 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 1618 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));

#line 1619 "equiv_type_hlds.m"
          {
#line 1619 "equiv_type_hlds.m"
            MR_Word base;
#line 1619 "equiv_type_hlds.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1619 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_25 = base;
#line 1619 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_54_54));
#line 1619 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_55_55));
#line 1619 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_56_56));
#line 1619 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_38));
#line 1619 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_39_39));
#line 1619 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_59_59));
#line 1619 "equiv_type_hlds.m"
          }
#line 1617 "equiv_type_hlds.m"
        }
#line 1620 "equiv_type_hlds.m"
        break;
#line 1620 "equiv_type_hlds.m"
    }
#line 1607 "equiv_type_hlds.m"
    {
#line 1607 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1607 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_28_28, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_12));
#line 1607 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_28_28, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_13));
#line 1607 "equiv_type_hlds.m"
    }
#line 1607 "equiv_type_hlds.m"
    {
#line 1607 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1607 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_29_29, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstC_14));
#line 1607 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_29_29, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstD_15));
#line 1607 "equiv_type_hlds.m"
    }
#line 1607 "equiv_type_hlds.m"
    {
#line 1607 "equiv_type_hlds.m"
      MR_Word base;
#line 1607 "equiv_type_hlds.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1607 "equiv_type_hlds.m"
      *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
#line 1607 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_28_28));
#line 1607 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_29_29));
#line 1607 "equiv_type_hlds.m"
    }
#line 1607 "equiv_type_hlds.m"
  }
#line 1603 "equiv_type_hlds.m"
}

#line 1570 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unification_6_p_0(
#line 1570 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1570 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Uni0_8,
#line 1570 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Uni_9,
#line 1570 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 1570 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_35,
#line 1570 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_36)
#line 1570 "equiv_type_hlds.m"
{
#line 1578 "equiv_type_hlds.m"
  {
#line 1578 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1578 "equiv_type_hlds.m"
#line 1578 "equiv_type_hlds.m"
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Uni0_8)) {
#line 1578 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1578 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 1588 "equiv_type_hlds.m"
        {
#line 1588 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__UniModes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 3)));
#line 1588 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__UniModes_28;
#line 1589 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 0)));
#line 1589 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 1)));
#line 1589 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 2)));
#line 1589 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 4)));
#line 1589 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 5)));
#line 1589 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 6)));

#line 1590 "equiv_type_hlds.m"
          {
#line 1590 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_uni_modes_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__UniModes0_27, &transform_hlds__equiv_type_hlds__UniModes_28, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_36);
          }
#line 1592 "equiv_type_hlds.m"
#line 1592 "equiv_type_hlds.m"
          switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1592 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1592 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 1592 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Uni_9 = transform_hlds__equiv_type_hlds__Uni0_8;
#line 1592 "equiv_type_hlds.m"
              break;
#line 1592 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 1591 "equiv_type_hlds.m"
              {
#line 1591 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 0)));
#line 1591 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 1)));
#line 1591 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 2)));
#line 1591 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 4)));
#line 1591 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 5)));
#line 1591 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 6)));
#line 1591 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 3)));

#line 1591 "equiv_type_hlds.m"
                {
#line 1591 "equiv_type_hlds.m"
                  MR_Word base;
#line 1591 "equiv_type_hlds.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1591 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Uni_9 = base;
#line 1591 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_48_48));
#line 1591 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_49_49));
#line 1591 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_50_50));
#line 1591 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__UniModes_28));
#line 1591 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_52_52));
#line 1591 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_53_53));
#line 1591 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_54_54));
#line 1591 "equiv_type_hlds.m"
                }
#line 1591 "equiv_type_hlds.m"
              }
#line 1592 "equiv_type_hlds.m"
              break;
#line 1592 "equiv_type_hlds.m"
          }
#line 1588 "equiv_type_hlds.m"
        }
#line 1578 "equiv_type_hlds.m"
        break;
#line 1578 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 1595 "equiv_type_hlds.m"
        {
#line 1595 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__UniModes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 3)));
#line 1595 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__UniModes_41;
#line 1596 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 0)));
#line 1596 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 1)));
#line 1596 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 2)));
#line 1596 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 4)));
#line 1596 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 5)));

#line 1597 "equiv_type_hlds.m"
          {
#line 1597 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_uni_modes_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__UniModes0_40, &transform_hlds__equiv_type_hlds__UniModes_41, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_36);
          }
#line 1599 "equiv_type_hlds.m"
#line 1599 "equiv_type_hlds.m"
          switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1599 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1599 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 1599 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Uni_9 = transform_hlds__equiv_type_hlds__Uni0_8;
#line 1599 "equiv_type_hlds.m"
              break;
#line 1599 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 1598 "equiv_type_hlds.m"
              {
#line 1598 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 0)));
#line 1598 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 1)));
#line 1598 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 2)));
#line 1598 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 4)));
#line 1598 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 5)));
#line 1598 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 3)));

#line 1598 "equiv_type_hlds.m"
                {
#line 1598 "equiv_type_hlds.m"
                  MR_Word base;
#line 1598 "equiv_type_hlds.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1598 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Uni_9 = base;
#line 1598 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_60_60));
#line 1598 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_61_61));
#line 1598 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_62_62));
#line 1598 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__UniModes_41));
#line 1598 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_64_64));
#line 1598 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_65_65));
#line 1598 "equiv_type_hlds.m"
                }
#line 1598 "equiv_type_hlds.m"
              }
#line 1599 "equiv_type_hlds.m"
              break;
#line 1599 "equiv_type_hlds.m"
          }
#line 1595 "equiv_type_hlds.m"
        }
#line 1578 "equiv_type_hlds.m"
        break;
#line 1578 "equiv_type_hlds.m"
      case (MR_Integer) 2:
#line 1578 "equiv_type_hlds.m"
        {
#line 1579 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Uni_9 = transform_hlds__equiv_type_hlds__Uni0_8;
#line 1580 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
#line 1578 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_36 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_35;
#line 1578 "equiv_type_hlds.m"
        }
#line 1578 "equiv_type_hlds.m"
        break;
#line 1578 "equiv_type_hlds.m"
      case (MR_Integer) 3:
#line 1578 "equiv_type_hlds.m"
#line 1578 "equiv_type_hlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 0)))) {
#line 1578 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1578 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1578 "equiv_type_hlds.m"
            {
#line 1579 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Uni_9 = transform_hlds__equiv_type_hlds__Uni0_8;
#line 1580 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
#line 1578 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_36 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_35;
#line 1578 "equiv_type_hlds.m"
            }
#line 1578 "equiv_type_hlds.m"
            break;
#line 1578 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1582 "equiv_type_hlds.m"
            {
#line 1582 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__UniMode0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 1)));
#line 1582 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__B_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 2)));
#line 1582 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__C_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 3)));
#line 1582 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__UniMode_19;

#line 1583 "equiv_type_hlds.m"
              {
#line 1583 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_uni_mode_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__UniMode0_16, &transform_hlds__equiv_type_hlds__UniMode_19, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_36);
              }
#line 1585 "equiv_type_hlds.m"
#line 1585 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1585 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1585 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1585 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Uni_9 = transform_hlds__equiv_type_hlds__Uni0_8;
#line 1585 "equiv_type_hlds.m"
                  break;
#line 1585 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1584 "equiv_type_hlds.m"
                  {
#line 1584 "equiv_type_hlds.m"
                    MR_Word base;
#line 1584 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1584 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Uni_9 = base;
#line 1584 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1584 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__UniMode_19));
#line 1584 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__B_17));
#line 1584 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__C_18));
#line 1584 "equiv_type_hlds.m"
                  }
#line 1585 "equiv_type_hlds.m"
                  break;
#line 1585 "equiv_type_hlds.m"
              }
#line 1582 "equiv_type_hlds.m"
            }
#line 1578 "equiv_type_hlds.m"
            break;
#line 1578 "equiv_type_hlds.m"
        }
#line 1578 "equiv_type_hlds.m"
        break;
#line 1578 "equiv_type_hlds.m"
    }
#line 1578 "equiv_type_hlds.m"
  }
#line 1570 "equiv_type_hlds.m"
}

#line 1558 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(
#line 1558 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1558 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1558 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1558 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1558 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
#line 1558 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6)
#line 1558 "equiv_type_hlds.m"
{
#line 1561 "equiv_type_hlds.m"
  {
#line 1561 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1561 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1561 "equiv_type_hlds.m"
      {
#line 1561 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1561 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
#line 1561 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5;
#line 1561 "equiv_type_hlds.m"
      }
#line 1561 "equiv_type_hlds.m"
    else
#line 1562 "equiv_type_hlds.m"
      {
#line 1562 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__H0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1562 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__T0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1562 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__T_18;
#line 1562 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed0_19;
#line 1562 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__H_20;
#line 1562 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed1_21;
#line 1562 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24;
#line 1562 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__MainConsId_33;
#line 1562 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__OtherConsIds_34;
#line 1562 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__CaseGoal0_35;
#line 1562 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__CaseGoal_36;

#line 1563 "equiv_type_hlds.m"
        {
#line 1563 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__T0_14, &transform_hlds__equiv_type_hlds__T_18, &transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24);
        }
#line 1552 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__MainConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H0_13, (MR_Integer) 0)));
#line 1552 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__OtherConsIds_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H0_13, (MR_Integer) 1)));
#line 1552 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__CaseGoal0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H0_13, (MR_Integer) 2)));
#line 1553 "equiv_type_hlds.m"
        {
#line 1553 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__CaseGoal0_35, &transform_hlds__equiv_type_hlds__CaseGoal_36, &transform_hlds__equiv_type_hlds__Changed1_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6);
        }
#line 1555 "equiv_type_hlds.m"
#line 1555 "equiv_type_hlds.m"
        switch (transform_hlds__equiv_type_hlds__Changed1_21) {
#line 1555 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1555 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1555 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__H_20 = transform_hlds__equiv_type_hlds__H0_13;
#line 1555 "equiv_type_hlds.m"
            break;
#line 1555 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1554 "equiv_type_hlds.m"
            {
#line 1554 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__H_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1554 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H_20, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__MainConsId_33));
#line 1554 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H_20, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__OtherConsIds_34));
#line 1554 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H_20, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__CaseGoal_36));
#line 1554 "equiv_type_hlds.m"
            }
#line 1555 "equiv_type_hlds.m"
            break;
#line 1555 "equiv_type_hlds.m"
        }
#line 1565 "equiv_type_hlds.m"
        {
#line 1565 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__Changed1_21);
        }
#line 1567 "equiv_type_hlds.m"
#line 1567 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
#line 1567 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1567 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1567 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1567 "equiv_type_hlds.m"
            break;
#line 1567 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1566 "equiv_type_hlds.m"
            {
#line 1566 "equiv_type_hlds.m"
              MR_Word base;
#line 1566 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1566 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
#line 1566 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__H_20));
#line 1566 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__T_18));
#line 1566 "equiv_type_hlds.m"
            }
#line 1567 "equiv_type_hlds.m"
            break;
#line 1567 "equiv_type_hlds.m"
        }
#line 1562 "equiv_type_hlds.m"
      }
#line 1561 "equiv_type_hlds.m"
  }
#line 1558 "equiv_type_hlds.m"
}

#line 1335 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0(
#line 1335 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1335 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__GoalExpr0_8,
#line 1335 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__GoalExpr_9,
#line 1335 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 1335 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130,
#line 1335 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131)
#line 1335 "equiv_type_hlds.m"
{
#line 1341 "equiv_type_hlds.m"
  {
#line 1341 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1341 "equiv_type_hlds.m"
#line 1341 "equiv_type_hlds.m"
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__GoalExpr0_8)) {
#line 1341 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1341 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 1359 "equiv_type_hlds.m"
        {
#line 1359 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__NegGoal0_19 = (MR_Word) MR_body(((MR_Word) transform_hlds__equiv_type_hlds__GoalExpr0_8), (MR_Integer) 0);
#line 1359 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__NegGoal_20;

#line 1360 "equiv_type_hlds.m"
          {
#line 1360 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__NegGoal0_19, &transform_hlds__equiv_type_hlds__NegGoal_20, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131);
          }
#line 1362 "equiv_type_hlds.m"
#line 1362 "equiv_type_hlds.m"
          switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1362 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1362 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 1362 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1362 "equiv_type_hlds.m"
              break;
#line 1362 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 1361 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__equiv_type_hlds__NegGoal_20);
#line 1362 "equiv_type_hlds.m"
              break;
#line 1362 "equiv_type_hlds.m"
          }
#line 1359 "equiv_type_hlds.m"
        }
#line 1341 "equiv_type_hlds.m"
        break;
#line 1341 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 1423 "equiv_type_hlds.m"
        {
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TypeTable_68;
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__VarTypes_69;
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__RttiVarMaps_70;
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__VarType_71;
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TypeCtorCat_72;
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 0)));
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_139_139;
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_140_140;
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_141_141;
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Var_242 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_451_451;
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_452_452;
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_453_453;
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_454_454;
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_455_455;
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1423 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1424 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 1)));
#line 1424 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 2)));
#line 1424 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 3)));
#line 1424 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 4)));
#line 1424 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 5)));
#line 1425 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_324_324;
#line 1425 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_325_325;
#line 1425 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_326_326;
#line 1425 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_327_327;
#line 1425 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_328_328;
#line 1426 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_329_329;
#line 1426 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_330_330;
#line 1426 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_331_331;
#line 1426 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_332_332;
#line 1426 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_333_333;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_334_334;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_335_335;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_336_336;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_337_337;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_338_338;
#line 1442 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_450_450;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__ConsId_74;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TypeCtor_80;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TypeDefn_81;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Body_82;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_142_142;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_143_143;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_339_339;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_340_340;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_341_341;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_342_342;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_73_73;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_75_75;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_76_76;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_77_77;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_78_78;
#line 1434 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_79_79;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_83_83;

#line 1424 "equiv_type_hlds.m"
          {
#line 1424 "equiv_type_hlds.m"
            hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__equiv_type_hlds__V_138_138, &transform_hlds__equiv_type_hlds__TypeTable_68);
          }
#line 1425 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 0)));
#line 1425 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 1)));
#line 1425 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 2)));
#line 1425 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 3)));
#line 1425 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 4)));
#line 1425 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 5)));
#line 1425 "equiv_type_hlds.m"
          {
#line 1425 "equiv_type_hlds.m"
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__equiv_type_hlds__V_139_139, &transform_hlds__equiv_type_hlds__VarTypes_69);
          }
#line 1426 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 0)));
#line 1426 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 1)));
#line 1426 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 2)));
#line 1426 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 3)));
#line 1426 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 4)));
#line 1426 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 5)));
#line 1426 "equiv_type_hlds.m"
          {
#line 1426 "equiv_type_hlds.m"
            hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__equiv_type_hlds__V_140_140, &transform_hlds__equiv_type_hlds__RttiVarMaps_70);
          }
#line 1427 "equiv_type_hlds.m"
          {
#line 1427 "equiv_type_hlds.m"
            hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__equiv_type_hlds__VarTypes_69, transform_hlds__equiv_type_hlds__Var_242, &transform_hlds__equiv_type_hlds__VarType_71);
          }
#line 1428 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 0)));
#line 1428 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 1)));
#line 1428 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 2)));
#line 1428 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 3)));
#line 1428 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 4)));
#line 1428 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 5)));
#line 1428 "equiv_type_hlds.m"
          {
#line 1428 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__TypeCtorCat_72 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__equiv_type_hlds__V_141_141, transform_hlds__equiv_type_hlds__VarType_71);
          }
#line 1442 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_455_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 0)));
#line 1442 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_454_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 1)));
#line 1442 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_453_453 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 2)));
#line 1442 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_452_452 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 3)));
#line 1442 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_451_451 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 4)));
#line 1442 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_450_450 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 5)));
#line 1434 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
#line 1434 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1434 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1434 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1434 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1434 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__V_142_142)) == (MR_mktag((MR_Integer) 0)));
#line 1434 "equiv_type_hlds.m"
          if (transform_hlds__equiv_type_hlds__succeeded)
#line 1434 "equiv_type_hlds.m"
            {
#line 1434 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_142_142, (MR_Integer) 0)));
#line 1434 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__ConsId_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_142_142, (MR_Integer) 1)));
#line 1434 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_142_142, (MR_Integer) 2)));
#line 1434 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_142_142, (MR_Integer) 3)));
#line 1434 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_142_142, (MR_Integer) 4)));
#line 1434 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_142_142, (MR_Integer) 5)));
#line 1434 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_142_142, (MR_Integer) 6)));
#line 1435 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__ConsId_74)) == (MR_mktag((MR_Integer) 1)));
#line 1435 "equiv_type_hlds.m"
              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1435 "equiv_type_hlds.m"
                {
#line 1435 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__TypeCtor_80 = (MR_Word) MR_body(((MR_Word) transform_hlds__equiv_type_hlds__ConsId_74), (MR_Integer) 1);
#line 1436 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__succeeded = ((((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__TypeCtorCat_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__TypeCtorCat_72, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1436 "equiv_type_hlds.m"
                  if (transform_hlds__equiv_type_hlds__succeeded)
#line 1436 "equiv_type_hlds.m"
                    {
#line 1436 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__TypeCtorCat_72, (MR_Integer) 1)));
#line 1436 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_143_143 == (MR_Integer) 0);
#line 1434 "equiv_type_hlds.m"
                      if (transform_hlds__equiv_type_hlds__succeeded)
#line 1434 "equiv_type_hlds.m"
                        {
#line 1437 "equiv_type_hlds.m"
                          {
#line 1437 "equiv_type_hlds.m"
                            transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__equiv_type_hlds__TypeTable_68, transform_hlds__equiv_type_hlds__TypeCtor_80, &transform_hlds__equiv_type_hlds__TypeDefn_81);
                          }
#line 1434 "equiv_type_hlds.m"
                          if (transform_hlds__equiv_type_hlds__succeeded)
#line 1434 "equiv_type_hlds.m"
                            {
#line 1438 "equiv_type_hlds.m"
                              {
#line 1438 "equiv_type_hlds.m"
                                hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__equiv_type_hlds__TypeDefn_81, &transform_hlds__equiv_type_hlds__Body_82);
                              }
#line 1439 "equiv_type_hlds.m"
                              transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Body_82)) == (MR_mktag((MR_Integer) 2)));
#line 1439 "equiv_type_hlds.m"
                              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1439 "equiv_type_hlds.m"
                                transform_hlds__equiv_type_hlds__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Body_82, (MR_Integer) 0)));
#line 1434 "equiv_type_hlds.m"
                            }
#line 1434 "equiv_type_hlds.m"
                        }
#line 1436 "equiv_type_hlds.m"
                    }
#line 1435 "equiv_type_hlds.m"
                }
#line 1434 "equiv_type_hlds.m"
            }
#line 1476 "equiv_type_hlds.m"
          if (transform_hlds__equiv_type_hlds__succeeded)
#line 1441 "equiv_type_hlds.m"
            {
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TypeInfo_443_443;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__PredInfo0_85;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ProcInfo0_86;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__PredInfo1_87;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__PolyInfo0_88;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__VarInfo_89;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TypeInfoType_91;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TypeInfoVar_93;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__PolyInfo_94;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__PredInfo_95;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ProcInfo_96;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ModuleInfo_97;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_147_147;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_151_151;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_153_153;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_154_154;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_155_155;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Goals0_198;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Goals_199;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TVarSet0_200;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TVarSet_201;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_367_367;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_368_368;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_369_369;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_373_373;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_374_374;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_375_375;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_376_376;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_379_379;
#line 1441 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_380_380;
#line 1443 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_348_348;
#line 1443 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_351_351;
#line 1443 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_352_352;
#line 1463 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_363_363;
#line 1463 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_364_364;
#line 1463 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_365_365;
#line 1463 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_366_366;
#line 1472 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__GoalExpr1_98;
#line 1470 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_157_157;
#line 1470 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_158_158;
#line 1470 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_99_99;
#line 1475 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_387_387;
#line 1475 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_388_388;
#line 1475 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_389_389;
#line 1475 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_390_390;
#line 1475 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_391_391;
#line 1475 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_392_392;

#line 1441 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 1;
#line 1443 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 0)));
#line 1443 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__PredInfo0_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 1)));
#line 1443 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__ProcInfo0_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 2)));
#line 1443 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__TVarSet0_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 3)));
#line 1443 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 4)));
#line 1443 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 5)));
#line 1446 "equiv_type_hlds.m"
              {
#line 1446 "equiv_type_hlds.m"
                hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__equiv_type_hlds__TVarSet0_200, transform_hlds__equiv_type_hlds__PredInfo0_85, &transform_hlds__equiv_type_hlds__PredInfo1_87);
              }
#line 1447 "equiv_type_hlds.m"
              {
#line 1447 "equiv_type_hlds.m"
                check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__equiv_type_hlds__V_455_455, transform_hlds__equiv_type_hlds__PredInfo1_87, transform_hlds__equiv_type_hlds__ProcInfo0_86, &transform_hlds__equiv_type_hlds__PolyInfo0_88);
              }
#line 1448 "equiv_type_hlds.m"
              {
#line 1448 "equiv_type_hlds.m"
                hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(transform_hlds__equiv_type_hlds__RttiVarMaps_70, transform_hlds__equiv_type_hlds__Var_242, &transform_hlds__equiv_type_hlds__VarInfo_89);
              }
#line 1452 "equiv_type_hlds.m"
#line 1452 "equiv_type_hlds.m"
              switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__VarInfo_89)) {
#line 1452 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1452 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1455 "equiv_type_hlds.m"
                  {
#line 1456 "equiv_type_hlds.m"
                    {
#line 1456 "equiv_type_hlds.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "info not found");
#line 1456 "equiv_type_hlds.m"
                      return;
                    }
#line 1455 "equiv_type_hlds.m"
                  }
#line 1452 "equiv_type_hlds.m"
                  break;
#line 1452 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1450 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__TypeInfoType_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__VarInfo_89, (MR_Integer) 0)));
#line 1452 "equiv_type_hlds.m"
                  break;
#line 1452 "equiv_type_hlds.m"
                case (MR_Integer) 2:
#line 1455 "equiv_type_hlds.m"
                  {
#line 1456 "equiv_type_hlds.m"
                    {
#line 1456 "equiv_type_hlds.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "info not found");
#line 1456 "equiv_type_hlds.m"
                      return;
                    }
#line 1455 "equiv_type_hlds.m"
                  }
#line 1452 "equiv_type_hlds.m"
                  break;
#line 1452 "equiv_type_hlds.m"
              }
#line 1459 "equiv_type_hlds.m"
              {
#line 1459 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__V_147_147 = mercury__term__context_init_0_f_0();
              }
#line 1458 "equiv_type_hlds.m"
              {
#line 1458 "equiv_type_hlds.m"
                check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__equiv_type_hlds__TypeInfoType_91, transform_hlds__equiv_type_hlds__V_147_147, &transform_hlds__equiv_type_hlds__TypeInfoVar_93, &transform_hlds__equiv_type_hlds__Goals0_198, transform_hlds__equiv_type_hlds__PolyInfo0_88, &transform_hlds__equiv_type_hlds__PolyInfo_94);
              }
#line 1460 "equiv_type_hlds.m"
              {
#line 1460 "equiv_type_hlds.m"
                check_hlds__polymorphism__poly_info_extract_6_p_0(transform_hlds__equiv_type_hlds__PolyInfo_94, transform_hlds__equiv_type_hlds__PredInfo1_87, &transform_hlds__equiv_type_hlds__PredInfo_95, transform_hlds__equiv_type_hlds__ProcInfo0_86, &transform_hlds__equiv_type_hlds__ProcInfo_96, &transform_hlds__equiv_type_hlds__ModuleInfo_97);
              }
#line 1462 "equiv_type_hlds.m"
              {
#line 1462 "equiv_type_hlds.m"
                hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__equiv_type_hlds__PredInfo_95, &transform_hlds__equiv_type_hlds__TVarSet_201);
              }
#line 1463 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 0)));
#line 1463 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 1)));
#line 1463 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_365_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 2)));
#line 1463 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_366_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 3)));
#line 1463 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_367_367 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 4)));
#line 1463 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_368_368 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 5)));
#line 1464 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_369_369 = transform_hlds__equiv_type_hlds__ModuleInfo_97;
#line 1464 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_373_373 = transform_hlds__equiv_type_hlds__V_367_367;
#line 1464 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_374_374 = transform_hlds__equiv_type_hlds__V_368_368;
#line 1465 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_375_375 = transform_hlds__equiv_type_hlds__V_369_369;
#line 1465 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_376_376 = transform_hlds__equiv_type_hlds__PredInfo_95;
#line 1465 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_379_379 = transform_hlds__equiv_type_hlds__V_373_373;
#line 1465 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_380_380 = transform_hlds__equiv_type_hlds__V_374_374;
#line 1466 "equiv_type_hlds.m"
              {
#line 1466 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1466 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_151_151, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_375_375));
#line 1466 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_151_151, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_376_376));
#line 1466 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_151_151, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__ProcInfo_96));
#line 1466 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_151_151, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_201));
#line 1466 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_151_151, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_379_379));
#line 1466 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_151_151, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_380_380));
#line 1466 "equiv_type_hlds.m"
              }
#line 5635 "transform_hlds.equiv_type_hlds.c"
              transform_hlds__equiv_type_hlds__TypeInfo_443_443 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[4];
#line 1469 "equiv_type_hlds.m"
              {
#line 1469 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__V_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1469 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_155_155, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeInfoVar_93));
#line 1469 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_155_155, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_242));
#line 1469 "equiv_type_hlds.m"
              }
#line 1469 "equiv_type_hlds.m"
              {
#line 1469 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1469 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__V_154_154, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_155_155));
#line 1469 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1469 "equiv_type_hlds.m"
              }
#line 1469 "equiv_type_hlds.m"
              {
#line 1469 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__V_153_153 = mercury__map__from_assoc_list_1_f_0(transform_hlds__equiv_type_hlds__TypeInfo_443_443, transform_hlds__equiv_type_hlds__TypeInfo_443_443, transform_hlds__equiv_type_hlds__V_154_154);
              }
#line 1468 "equiv_type_hlds.m"
              {
#line 1468 "equiv_type_hlds.m"
                hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, transform_hlds__equiv_type_hlds__V_153_153, transform_hlds__equiv_type_hlds__Goals0_198, &transform_hlds__equiv_type_hlds__Goals_199);
              }
#line 1470 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Goals_199)) == (MR_mktag((MR_Integer) 1)));
#line 1470 "equiv_type_hlds.m"
              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1470 "equiv_type_hlds.m"
                {
#line 1470 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Goals_199, (MR_Integer) 0)));
#line 1470 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Goals_199, (MR_Integer) 1)));
#line 1470 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_158_158 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1470 "equiv_type_hlds.m"
                  if (transform_hlds__equiv_type_hlds__succeeded)
#line 1470 "equiv_type_hlds.m"
                    {
#line 1470 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__GoalExpr1_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_157_157, (MR_Integer) 0)));
#line 1470 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_157_157, (MR_Integer) 1)));
#line 1470 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__succeeded = MR_TRUE;
#line 1470 "equiv_type_hlds.m"
                    }
#line 1470 "equiv_type_hlds.m"
                }
#line 1472 "equiv_type_hlds.m"
              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1471 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr1_98;
#line 1472 "equiv_type_hlds.m"
              else
#line 1473 "equiv_type_hlds.m"
                {
#line 1473 "equiv_type_hlds.m"
                  {
#line 1473 "equiv_type_hlds.m"
                    MR_Word base;
#line 1473 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1473 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1473 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1473 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1473 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Goals_199));
#line 1473 "equiv_type_hlds.m"
                  }
#line 1473 "equiv_type_hlds.m"
                }
#line 1475 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_387_387 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_151_151, (MR_Integer) 0)));
#line 1475 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_388_388 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_151_151, (MR_Integer) 1)));
#line 1475 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_389_389 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_151_151, (MR_Integer) 2)));
#line 1475 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_390_390 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_151_151, (MR_Integer) 3)));
#line 1475 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_391_391 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_151_151, (MR_Integer) 4)));
#line 1475 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_392_392 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_151_151, (MR_Integer) 5)));
#line 1475 "equiv_type_hlds.m"
              {
#line 1475 "equiv_type_hlds.m"
                MR_Word base;
#line 1475 "equiv_type_hlds.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1475 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131 = base;
#line 1475 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_387_387));
#line 1475 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_388_388));
#line 1475 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_389_389));
#line 1475 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_390_390));
#line 1475 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_391_391));
#line 1475 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1475 "equiv_type_hlds.m"
              }
#line 1441 "equiv_type_hlds.m"
            }
#line 1476 "equiv_type_hlds.m"
          else
#line 1491 "equiv_type_hlds.m"
            {
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_163_163;
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ConsId_202;
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TypeCtor_203;
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TypeDefn_204;
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Body_205;
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_393_393 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_394_394 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_396_396 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_100_100;
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_101_101;
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_102_102;
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_103_103;
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_104_104;
#line 1481 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_105_105;
#line 1486 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_106_106;

#line 1481 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__V_162_162)) == (MR_mktag((MR_Integer) 0)));
#line 1481 "equiv_type_hlds.m"
              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1481 "equiv_type_hlds.m"
                {
#line 1481 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_162_162, (MR_Integer) 0)));
#line 1481 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__ConsId_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_162_162, (MR_Integer) 1)));
#line 1481 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_162_162, (MR_Integer) 2)));
#line 1481 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_162_162, (MR_Integer) 3)));
#line 1481 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_162_162, (MR_Integer) 4)));
#line 1481 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_162_162, (MR_Integer) 5)));
#line 1481 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_162_162, (MR_Integer) 6)));
#line 1482 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__ConsId_202)) == (MR_mktag((MR_Integer) 1)));
#line 1482 "equiv_type_hlds.m"
                  if (transform_hlds__equiv_type_hlds__succeeded)
#line 1482 "equiv_type_hlds.m"
                    {
#line 1482 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__TypeCtor_203 = (MR_Word) MR_body(((MR_Word) transform_hlds__equiv_type_hlds__ConsId_202), (MR_Integer) 1);
#line 1483 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__succeeded = ((((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__TypeCtorCat_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__TypeCtorCat_72, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1483 "equiv_type_hlds.m"
                      if (transform_hlds__equiv_type_hlds__succeeded)
#line 1483 "equiv_type_hlds.m"
                        {
#line 1483 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__TypeCtorCat_72, (MR_Integer) 1)));
#line 1483 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_163_163 == (MR_Integer) 1);
#line 1481 "equiv_type_hlds.m"
                          if (transform_hlds__equiv_type_hlds__succeeded)
#line 1481 "equiv_type_hlds.m"
                            {
#line 1484 "equiv_type_hlds.m"
                              {
#line 1484 "equiv_type_hlds.m"
                                transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__equiv_type_hlds__TypeTable_68, transform_hlds__equiv_type_hlds__TypeCtor_203, &transform_hlds__equiv_type_hlds__TypeDefn_204);
                              }
#line 1481 "equiv_type_hlds.m"
                              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1481 "equiv_type_hlds.m"
                                {
#line 1485 "equiv_type_hlds.m"
                                  {
#line 1485 "equiv_type_hlds.m"
                                    hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__equiv_type_hlds__TypeDefn_204, &transform_hlds__equiv_type_hlds__Body_205);
                                  }
#line 1486 "equiv_type_hlds.m"
                                  transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Body_205)) == (MR_mktag((MR_Integer) 2)));
#line 1486 "equiv_type_hlds.m"
                                  if (transform_hlds__equiv_type_hlds__succeeded)
#line 1486 "equiv_type_hlds.m"
                                    transform_hlds__equiv_type_hlds__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Body_205, (MR_Integer) 0)));
#line 1481 "equiv_type_hlds.m"
                                }
#line 1481 "equiv_type_hlds.m"
                            }
#line 1483 "equiv_type_hlds.m"
                        }
#line 1482 "equiv_type_hlds.m"
                    }
#line 1481 "equiv_type_hlds.m"
                }
#line 1491 "equiv_type_hlds.m"
              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1488 "equiv_type_hlds.m"
                {
#line 1488 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 1;
#line 1489 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__equiv_type_hlds_scalar_common_1[8]);
#line 1490 "equiv_type_hlds.m"
                  {
#line 1490 "equiv_type_hlds.m"
                    MR_Word base;
#line 1490 "equiv_type_hlds.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1490 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131 = base;
#line 1490 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_455_455));
#line 1490 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_454_454));
#line 1490 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_453_453));
#line 1490 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_452_452));
#line 1490 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_451_451));
#line 1490 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1490 "equiv_type_hlds.m"
                  }
#line 1488 "equiv_type_hlds.m"
                }
#line 1491 "equiv_type_hlds.m"
              else
#line 1492 "equiv_type_hlds.m"
                {
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__LMode0_107;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__RMode0_108;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__LMode_109;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Cache1_110;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__RMode_111;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Unification_112;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_170_170;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_171_171;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_173_173;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Changed1_208;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Changed2_209;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Changed3_210;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__TVarSet1_212;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__TVarSet_213;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Cache0_214;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Cache_215;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_417_417;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_418_418;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_419_419;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_422_422;
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_403_403 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_404_404 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1492 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_406_406 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1494 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_412_412;
#line 1494 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_413_413;
#line 1494 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_414_414;
#line 1494 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_415_415;
#line 1494 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_416_416;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_420_420;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_421_421;
#line 1501 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_429_429;
#line 1501 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_430_430;
#line 1501 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_431_431;
#line 1501 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_432_432;

#line 1492 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__LMode0_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_168_168, (MR_Integer) 0)));
#line 1492 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__RMode0_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_168_168, (MR_Integer) 1)));
#line 1494 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_412_412 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 0)));
#line 1494 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_413_413 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 1)));
#line 1494 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_414_414 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 2)));
#line 1494 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 3)));
#line 1494 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__Cache0_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 4)));
#line 1494 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_416_416 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 5)));
#line 1495 "equiv_type_hlds.m"
                  {
#line 1495 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__replace_in_mode_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__LMode0_107, &transform_hlds__equiv_type_hlds__LMode_109, &transform_hlds__equiv_type_hlds__Changed1_208, transform_hlds__equiv_type_hlds__V_452_452, &transform_hlds__equiv_type_hlds__TVarSet1_212, transform_hlds__equiv_type_hlds__Cache0_214, &transform_hlds__equiv_type_hlds__Cache1_110);
                  }
#line 1497 "equiv_type_hlds.m"
                  {
#line 1497 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__replace_in_mode_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__RMode0_108, &transform_hlds__equiv_type_hlds__RMode_111, &transform_hlds__equiv_type_hlds__Changed2_209, transform_hlds__equiv_type_hlds__TVarSet1_212, &transform_hlds__equiv_type_hlds__TVarSet_213, transform_hlds__equiv_type_hlds__Cache1_110, &transform_hlds__equiv_type_hlds__Cache_215);
                  }
#line 1499 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 0)));
#line 1499 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 1)));
#line 1499 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 2)));
#line 1499 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 3)));
#line 1499 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_421_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 4)));
#line 1499 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 5)));
#line 1500 "equiv_type_hlds.m"
                  {
#line 1500 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_170_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1500 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_170_170, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_417_417));
#line 1500 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_170_170, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_418_418));
#line 1500 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_170_170, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_419_419));
#line 1500 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_170_170, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_213));
#line 1500 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_170_170, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cache_215));
#line 1500 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_170_170, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_422_422));
#line 1500 "equiv_type_hlds.m"
                  }
#line 1501 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_429_429 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
#line 1501 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_430_430 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1501 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_431_431 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1501 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1501 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_432_432 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1501 "equiv_type_hlds.m"
                  {
#line 1501 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__replace_in_unification_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__V_171_171, &transform_hlds__equiv_type_hlds__Unification_112, &transform_hlds__equiv_type_hlds__Changed3_210, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_170_170, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131);
                  }
#line 1503 "equiv_type_hlds.m"
                  {
#line 1503 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_173_173 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_208, transform_hlds__equiv_type_hlds__Changed2_209);
                  }
#line 1503 "equiv_type_hlds.m"
                  {
#line 1503 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__V_173_173, transform_hlds__equiv_type_hlds__Changed3_210);
                  }
#line 1508 "equiv_type_hlds.m"
#line 1508 "equiv_type_hlds.m"
                  switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1508 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1508 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 1509 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1508 "equiv_type_hlds.m"
                      break;
#line 1508 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 1505 "equiv_type_hlds.m"
                      {
#line 1505 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_174_174;
#line 1505 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_433_433;
#line 1505 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_434_434;
#line 1505 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_437_437;
#line 1506 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_435_435;
#line 1506 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_436_436;

#line 1506 "equiv_type_hlds.m"
                        {
#line 1506 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__V_174_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1506 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_174_174, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__LMode_109));
#line 1506 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_174_174, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__RMode_111));
#line 1506 "equiv_type_hlds.m"
                        }
#line 1506 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__V_433_433 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
#line 1506 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__V_434_434 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1506 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1506 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__V_436_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1506 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__V_437_437 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1507 "equiv_type_hlds.m"
                        {
#line 1507 "equiv_type_hlds.m"
                          MR_Word base;
#line 1507 "equiv_type_hlds.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "equiv_type_hlds.m"
                          *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1507 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_433_433));
#line 1507 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_434_434));
#line 1507 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_174_174));
#line 1507 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Unification_112));
#line 1507 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_437_437));
#line 1507 "equiv_type_hlds.m"
                        }
#line 1505 "equiv_type_hlds.m"
                      }
#line 1508 "equiv_type_hlds.m"
                      break;
#line 1508 "equiv_type_hlds.m"
                  }
#line 1492 "equiv_type_hlds.m"
                }
#line 1491 "equiv_type_hlds.m"
            }
#line 1423 "equiv_type_hlds.m"
        }
#line 1341 "equiv_type_hlds.m"
        break;
#line 1341 "equiv_type_hlds.m"
      case (MR_Integer) 2:
#line 1387 "equiv_type_hlds.m"
        {
#line 1388 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1389 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
#line 1387 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130;
#line 1387 "equiv_type_hlds.m"
        }
#line 1341 "equiv_type_hlds.m"
        break;
#line 1341 "equiv_type_hlds.m"
      case (MR_Integer) 3:
#line 1341 "equiv_type_hlds.m"
#line 1341 "equiv_type_hlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)))) {
#line 1341 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1341 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1408 "equiv_type_hlds.m"
            {
#line 1408 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Details_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1408 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Modes0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1408 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__MaybeArgRegs_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1408 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Detism_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 5)));
#line 1408 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Cache0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 4)));
#line 1408 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Modes_62;
#line 1408 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Cache_63;
#line 1408 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TVarSet0_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 3)));
#line 1408 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Args_196 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1408 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TVarSet_197;
#line 1409 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 0)));
#line 1409 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 1)));
#line 1409 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 2)));
#line 1409 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 5)));

#line 1411 "equiv_type_hlds.m"
              {
#line 1411 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Modes0_58, &transform_hlds__equiv_type_hlds__Modes_62, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__TVarSet0_195, &transform_hlds__equiv_type_hlds__TVarSet_197, transform_hlds__equiv_type_hlds__Cache0_61, &transform_hlds__equiv_type_hlds__Cache_63);
              }
#line 1418 "equiv_type_hlds.m"
#line 1418 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1418 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1418 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1419 "equiv_type_hlds.m"
                  {
#line 1420 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1419 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130;
#line 1419 "equiv_type_hlds.m"
                  }
#line 1418 "equiv_type_hlds.m"
                  break;
#line 1418 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1414 "equiv_type_hlds.m"
                  {
#line 1414 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 0)));
#line 1414 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 1)));
#line 1414 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 2)));
#line 1414 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 5)));
#line 1415 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 3)));
#line 1415 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 4)));

#line 1416 "equiv_type_hlds.m"
                    {
#line 1416 "equiv_type_hlds.m"
                      MR_Word base;
#line 1416 "equiv_type_hlds.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1416 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131 = base;
#line 1416 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_307_307));
#line 1416 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_308_308));
#line 1416 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_309_309));
#line 1416 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_197));
#line 1416 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cache_63));
#line 1416 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_312_312));
#line 1416 "equiv_type_hlds.m"
                    }
#line 1417 "equiv_type_hlds.m"
                    {
#line 1417 "equiv_type_hlds.m"
                      MR_Word base;
#line 1417 "equiv_type_hlds.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1417 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1417 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1417 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Details_57));
#line 1417 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Args_196));
#line 1417 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Modes_62));
#line 1417 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeArgRegs_59));
#line 1417 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__Detism_60));
#line 1417 "equiv_type_hlds.m"
                    }
#line 1414 "equiv_type_hlds.m"
                  }
#line 1418 "equiv_type_hlds.m"
                  break;
#line 1418 "equiv_type_hlds.m"
              }
#line 1408 "equiv_type_hlds.m"
            }
#line 1341 "equiv_type_hlds.m"
            break;
#line 1341 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1391 "equiv_type_hlds.m"
            {
#line 1391 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TVarSet0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 3)));
#line 1391 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Args_49;
#line 1391 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ChangedArgs_50;
#line 1391 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TVarSet1_51;
#line 1391 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ExtraArgs_53;
#line 1391 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ChangedExtraArgs_54;
#line 1391 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TVarSet_55;
#line 1391 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1391 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_179_179;
#line 1392 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 0)));
#line 1392 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 1)));
#line 1392 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 2)));
#line 1392 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 4)));
#line 1392 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 5)));
#line 1393 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1393 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1393 "equiv_type_hlds.m"
              MR_Integer transform_hlds__equiv_type_hlds__V_267_267 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1393 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 5)));
#line 1393 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 6)));
#line 1393 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 7)));
#line 1393 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_52_52;
#line 1395 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_271_271;
#line 1395 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_272_272;
#line 1395 "equiv_type_hlds.m"
              MR_Integer transform_hlds__equiv_type_hlds__V_273_273;
#line 1395 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_274_274;
#line 1395 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_275_275;
#line 1395 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_276_276;
#line 1395 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_56_56;

#line 1393 "equiv_type_hlds.m"
              {
#line 1393 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__V_177_177, &transform_hlds__equiv_type_hlds__Args_49, &transform_hlds__equiv_type_hlds__ChangedArgs_50, transform_hlds__equiv_type_hlds__TVarSet0_48, &transform_hlds__equiv_type_hlds__TVarSet1_51, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__V_52_52);
              }
#line 1395 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1395 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1395 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_273_273 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1395 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1395 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 5)));
#line 1395 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 6)));
#line 1395 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 7)));
#line 1395 "equiv_type_hlds.m"
              {
#line 1395 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__V_179_179, &transform_hlds__equiv_type_hlds__ExtraArgs_53, &transform_hlds__equiv_type_hlds__ChangedExtraArgs_54, transform_hlds__equiv_type_hlds__TVarSet1_51, &transform_hlds__equiv_type_hlds__TVarSet_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__V_56_56);
              }
#line 1397 "equiv_type_hlds.m"
              {
#line 1397 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedArgs_50, transform_hlds__equiv_type_hlds__ChangedExtraArgs_54);
              }
#line 1403 "equiv_type_hlds.m"
#line 1403 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1403 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1403 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1404 "equiv_type_hlds.m"
                  {
#line 1405 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1404 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130;
#line 1404 "equiv_type_hlds.m"
                  }
#line 1403 "equiv_type_hlds.m"
                  break;
#line 1403 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1399 "equiv_type_hlds.m"
                  {
#line 1399 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_283_283;
#line 1399 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_284_284;
#line 1399 "equiv_type_hlds.m"
                    MR_Integer transform_hlds__equiv_type_hlds__V_285_285;
#line 1399 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_288_288;
#line 1399 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_289_289;
#line 1400 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 0)));
#line 1400 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 1)));
#line 1400 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 2)));
#line 1400 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 4)));
#line 1400 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 5)));
#line 1400 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, (MR_Integer) 3)));
#line 1401 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_286_286;
#line 1401 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_287_287;

#line 1400 "equiv_type_hlds.m"
                    {
#line 1400 "equiv_type_hlds.m"
                      MR_Word base;
#line 1400 "equiv_type_hlds.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1400 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131 = base;
#line 1400 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_277_277));
#line 1400 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_278_278));
#line 1400 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_279_279));
#line 1400 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_55));
#line 1400 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_281_281));
#line 1400 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_282_282));
#line 1400 "equiv_type_hlds.m"
                    }
#line 1401 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1401 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1401 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_285_285 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1401 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1401 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 5)));
#line 1401 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 6)));
#line 1401 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 7)));
#line 1401 "equiv_type_hlds.m"
                    {
#line 1401 "equiv_type_hlds.m"
                      MR_Word base;
#line 1401 "equiv_type_hlds.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1401 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1401 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1401 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_283_283));
#line 1401 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_284_284));
#line 1401 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_285_285));
#line 1401 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Args_49));
#line 1401 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__ExtraArgs_53));
#line 1401 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_288_288));
#line 1401 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_289_289));
#line 1401 "equiv_type_hlds.m"
                    }
#line 1399 "equiv_type_hlds.m"
                  }
#line 1403 "equiv_type_hlds.m"
                  break;
#line 1403 "equiv_type_hlds.m"
              }
#line 1391 "equiv_type_hlds.m"
            }
#line 1341 "equiv_type_hlds.m"
            break;
#line 1341 "equiv_type_hlds.m"
          case (MR_Integer) 2:
#line 1341 "equiv_type_hlds.m"
            {
#line 1341 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1341 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1341 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Goals_14;

#line 1342 "equiv_type_hlds.m"
              {
#line 1342 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Goals0_13, &transform_hlds__equiv_type_hlds__Goals_14, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131);
              }
#line 1344 "equiv_type_hlds.m"
#line 1344 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1344 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1344 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1344 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1344 "equiv_type_hlds.m"
                  break;
#line 1344 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1343 "equiv_type_hlds.m"
                  {
#line 1343 "equiv_type_hlds.m"
                    MR_Word base;
#line 1343 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1343 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1343 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ConjType_12));
#line 1343 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Goals_14));
#line 1343 "equiv_type_hlds.m"
                  }
#line 1344 "equiv_type_hlds.m"
                  break;
#line 1344 "equiv_type_hlds.m"
              }
#line 1341 "equiv_type_hlds.m"
            }
#line 1341 "equiv_type_hlds.m"
            break;
#line 1341 "equiv_type_hlds.m"
          case (MR_Integer) 3:
#line 1347 "equiv_type_hlds.m"
            {
#line 1347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Goals0_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Goals_194;

#line 1348 "equiv_type_hlds.m"
              {
#line 1348 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Goals0_193, &transform_hlds__equiv_type_hlds__Goals_194, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131);
              }
#line 1350 "equiv_type_hlds.m"
#line 1350 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1350 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1350 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1350 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1350 "equiv_type_hlds.m"
                  break;
#line 1350 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1349 "equiv_type_hlds.m"
                  {
#line 1349 "equiv_type_hlds.m"
                    MR_Word base;
#line 1349 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1349 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1349 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Goals_194));
#line 1349 "equiv_type_hlds.m"
                  }
#line 1350 "equiv_type_hlds.m"
                  break;
#line 1350 "equiv_type_hlds.m"
              }
#line 1347 "equiv_type_hlds.m"
            }
#line 1341 "equiv_type_hlds.m"
            break;
#line 1341 "equiv_type_hlds.m"
          case (MR_Integer) 4:
#line 1353 "equiv_type_hlds.m"
            {
#line 1353 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1353 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__CanFail_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1353 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Cases0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1353 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Cases_18;

#line 1354 "equiv_type_hlds.m"
              {
#line 1354 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Cases0_17, &transform_hlds__equiv_type_hlds__Cases_18, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131);
              }
#line 1356 "equiv_type_hlds.m"
#line 1356 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1356 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1356 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1356 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1356 "equiv_type_hlds.m"
                  break;
#line 1356 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1355 "equiv_type_hlds.m"
                  {
#line 1355 "equiv_type_hlds.m"
                    MR_Word base;
#line 1355 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1355 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1355 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1355 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_15));
#line 1355 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__CanFail_16));
#line 1355 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cases_18));
#line 1355 "equiv_type_hlds.m"
                  }
#line 1356 "equiv_type_hlds.m"
                  break;
#line 1356 "equiv_type_hlds.m"
              }
#line 1353 "equiv_type_hlds.m"
            }
#line 1341 "equiv_type_hlds.m"
            break;
#line 1341 "equiv_type_hlds.m"
          case (MR_Integer) 5:
#line 1365 "equiv_type_hlds.m"
            {
#line 1365 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Reason_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1365 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__SomeGoal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1366 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_187_187;
#line 1366 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_23_23;

#line 1366 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__succeeded = ((((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Reason_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Reason_21, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1366 "equiv_type_hlds.m"
              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1366 "equiv_type_hlds.m"
                {
#line 1366 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Reason_21, (MR_Integer) 1)));
#line 1366 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Reason_21, (MR_Integer) 2)));
#line 1366 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_187_187 == (MR_Integer) 1);
#line 1366 "equiv_type_hlds.m"
                }
#line 1371 "equiv_type_hlds.m"
              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1369 "equiv_type_hlds.m"
                {
#line 1369 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1370 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
#line 1369 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130;
#line 1369 "equiv_type_hlds.m"
                }
#line 1371 "equiv_type_hlds.m"
              else
#line 1372 "equiv_type_hlds.m"
                {
#line 1372 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__SomeGoal_24;

#line 1372 "equiv_type_hlds.m"
                  {
#line 1372 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__SomeGoal0_22, &transform_hlds__equiv_type_hlds__SomeGoal_24, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131);
                  }
#line 1374 "equiv_type_hlds.m"
#line 1374 "equiv_type_hlds.m"
                  switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1374 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1374 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 1374 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1374 "equiv_type_hlds.m"
                      break;
#line 1374 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 1373 "equiv_type_hlds.m"
                      {
#line 1373 "equiv_type_hlds.m"
                        MR_Word base;
#line 1373 "equiv_type_hlds.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "equiv_type_hlds.m"
                        *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1373 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1373 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Reason_21));
#line 1373 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__SomeGoal_24));
#line 1373 "equiv_type_hlds.m"
                      }
#line 1374 "equiv_type_hlds.m"
                      break;
#line 1374 "equiv_type_hlds.m"
                  }
#line 1372 "equiv_type_hlds.m"
                }
#line 1365 "equiv_type_hlds.m"
            }
#line 1341 "equiv_type_hlds.m"
            break;
#line 1341 "equiv_type_hlds.m"
          case (MR_Integer) 6:
#line 1378 "equiv_type_hlds.m"
            {
#line 1378 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1378 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Cond0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1378 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1378 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1378 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Cond_29;
#line 1378 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Changed1_30;
#line 1378 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Then_31;
#line 1378 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Changed2_32;
#line 1378 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Else_33;
#line 1378 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Changed3_34;
#line 1378 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_183_183;
#line 1378 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_184_184;
#line 1378 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_186_186;

#line 1379 "equiv_type_hlds.m"
              {
#line 1379 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Cond0_26, &transform_hlds__equiv_type_hlds__Cond_29, &transform_hlds__equiv_type_hlds__Changed1_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_183_183);
              }
#line 1380 "equiv_type_hlds.m"
              {
#line 1380 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Then0_27, &transform_hlds__equiv_type_hlds__Then_31, &transform_hlds__equiv_type_hlds__Changed2_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_183_183, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_184_184);
              }
#line 1381 "equiv_type_hlds.m"
              {
#line 1381 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Else0_28, &transform_hlds__equiv_type_hlds__Else_33, &transform_hlds__equiv_type_hlds__Changed3_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_184_184, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131);
              }
#line 1382 "equiv_type_hlds.m"
              {
#line 1382 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__V_186_186 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_30, transform_hlds__equiv_type_hlds__Changed2_32);
              }
#line 1382 "equiv_type_hlds.m"
              {
#line 1382 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__V_186_186, transform_hlds__equiv_type_hlds__Changed3_34);
              }
#line 1384 "equiv_type_hlds.m"
#line 1384 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1384 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1384 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1384 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1384 "equiv_type_hlds.m"
                  break;
#line 1384 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1383 "equiv_type_hlds.m"
                  {
#line 1383 "equiv_type_hlds.m"
                    MR_Word base;
#line 1383 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1383 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1383 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Vars_25));
#line 1383 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cond_29));
#line 1383 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Then_31));
#line 1383 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Else_33));
#line 1383 "equiv_type_hlds.m"
                  }
#line 1384 "equiv_type_hlds.m"
                  break;
#line 1384 "equiv_type_hlds.m"
              }
#line 1378 "equiv_type_hlds.m"
            }
#line 1341 "equiv_type_hlds.m"
            break;
#line 1341 "equiv_type_hlds.m"
          case (MR_Integer) 7:
#line 1514 "equiv_type_hlds.m"
            {
#line 1514 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ShortHand0_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));

#line 1531 "equiv_type_hlds.m"
#line 1531 "equiv_type_hlds.m"
              switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__ShortHand0_113)) {
#line 1531 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1531 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1543 "equiv_type_hlds.m"
                  {
#line 1544 "equiv_type_hlds.m"
                    {
#line 1544 "equiv_type_hlds.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "bi_implication");
#line 1544 "equiv_type_hlds.m"
                      return;
                    }
#line 1543 "equiv_type_hlds.m"
                  }
#line 1531 "equiv_type_hlds.m"
                  break;
#line 1531 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1517 "equiv_type_hlds.m"
                  {
#line 1517 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__GoalType_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_113, (MR_Integer) 0)));
#line 1517 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__Outer_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_113, (MR_Integer) 1)));
#line 1517 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__Inner_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_113, (MR_Integer) 2)));
#line 1517 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__MaybeOutputVars_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_113, (MR_Integer) 3)));
#line 1517 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__MainGoal0_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_113, (MR_Integer) 4)));
#line 1517 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__OrElseGoals0_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_113, (MR_Integer) 5)));
#line 1517 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__OrElseInners_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_113, (MR_Integer) 6)));
#line 1517 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__MainGoal_121;
#line 1517 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__OrElseGoals_122;
#line 1517 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_136_136;
#line 1517 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__Changed1_251;
#line 1517 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__Changed2_252;

#line 1518 "equiv_type_hlds.m"
                    {
#line 1518 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__MainGoal0_118, &transform_hlds__equiv_type_hlds__MainGoal_121, &transform_hlds__equiv_type_hlds__Changed1_251, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_136_136);
                    }
#line 1519 "equiv_type_hlds.m"
                    {
#line 1519 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__OrElseGoals0_119, &transform_hlds__equiv_type_hlds__OrElseGoals_122, &transform_hlds__equiv_type_hlds__Changed2_252, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_136_136, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131);
                    }
#line 1521 "equiv_type_hlds.m"
                    {
#line 1521 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_251, transform_hlds__equiv_type_hlds__Changed2_252);
                    }
#line 1527 "equiv_type_hlds.m"
#line 1527 "equiv_type_hlds.m"
                    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1527 "equiv_type_hlds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1527 "equiv_type_hlds.m"
                      case (MR_Integer) 0:
#line 1528 "equiv_type_hlds.m"
                        *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1527 "equiv_type_hlds.m"
                        break;
#line 1527 "equiv_type_hlds.m"
                      case (MR_Integer) 1:
#line 1523 "equiv_type_hlds.m"
                        {
#line 1523 "equiv_type_hlds.m"
                          MR_Word transform_hlds__equiv_type_hlds__ShortHand_123;

#line 1524 "equiv_type_hlds.m"
                          {
#line 1524 "equiv_type_hlds.m"
                            transform_hlds__equiv_type_hlds__ShortHand_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_123, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__GoalType_114));
#line 1524 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_123, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Outer_115));
#line 1524 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_123, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Inner_116));
#line 1524 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_123, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeOutputVars_117));
#line 1524 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_123, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__MainGoal_121));
#line 1524 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_123, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__OrElseGoals_122));
#line 1524 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_123, 6) = ((MR_Box) (transform_hlds__equiv_type_hlds__OrElseInners_120));
#line 1524 "equiv_type_hlds.m"
                          }
#line 1526 "equiv_type_hlds.m"
                          {
#line 1526 "equiv_type_hlds.m"
                            MR_Word base;
#line 1526 "equiv_type_hlds.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1526 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1526 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1526 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ShortHand_123));
#line 1526 "equiv_type_hlds.m"
                          }
#line 1523 "equiv_type_hlds.m"
                        }
#line 1527 "equiv_type_hlds.m"
                        break;
#line 1527 "equiv_type_hlds.m"
                    }
#line 1517 "equiv_type_hlds.m"
                  }
#line 1531 "equiv_type_hlds.m"
                  break;
#line 1531 "equiv_type_hlds.m"
                case (MR_Integer) 2:
#line 1532 "equiv_type_hlds.m"
                  {
#line 1532 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__MaybeIO_124 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand0_113, (MR_Integer) 0)));
#line 1532 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__ResultVar_125 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand0_113, (MR_Integer) 1)));
#line 1532 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__SubGoal0_126 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand0_113, (MR_Integer) 2)));
#line 1532 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__SubGoal_127;

#line 1533 "equiv_type_hlds.m"
                    {
#line 1533 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__SubGoal0_126, &transform_hlds__equiv_type_hlds__SubGoal_127, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_130, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_131);
                    }
#line 1538 "equiv_type_hlds.m"
#line 1538 "equiv_type_hlds.m"
                    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1538 "equiv_type_hlds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1538 "equiv_type_hlds.m"
                      case (MR_Integer) 0:
#line 1539 "equiv_type_hlds.m"
                        *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1538 "equiv_type_hlds.m"
                        break;
#line 1538 "equiv_type_hlds.m"
                      case (MR_Integer) 1:
#line 1535 "equiv_type_hlds.m"
                        {
#line 1535 "equiv_type_hlds.m"
                          MR_Word transform_hlds__equiv_type_hlds__ShortHand_253;

#line 1536 "equiv_type_hlds.m"
                          {
#line 1536 "equiv_type_hlds.m"
                            transform_hlds__equiv_type_hlds__ShortHand_253 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand_253, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeIO_124));
#line 1536 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand_253, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ResultVar_125));
#line 1536 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand_253, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__SubGoal_127));
#line 1536 "equiv_type_hlds.m"
                          }
#line 1537 "equiv_type_hlds.m"
                          {
#line 1537 "equiv_type_hlds.m"
                            MR_Word base;
#line 1537 "equiv_type_hlds.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1537 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1537 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ShortHand_253));
#line 1537 "equiv_type_hlds.m"
                          }
#line 1535 "equiv_type_hlds.m"
                        }
#line 1538 "equiv_type_hlds.m"
                        break;
#line 1538 "equiv_type_hlds.m"
                    }
#line 1532 "equiv_type_hlds.m"
                  }
#line 1531 "equiv_type_hlds.m"
                  break;
#line 1531 "equiv_type_hlds.m"
              }
#line 1514 "equiv_type_hlds.m"
            }
#line 1341 "equiv_type_hlds.m"
            break;
#line 1341 "equiv_type_hlds.m"
        }
#line 1341 "equiv_type_hlds.m"
        break;
#line 1341 "equiv_type_hlds.m"
    }
#line 1341 "equiv_type_hlds.m"
  }
#line 1335 "equiv_type_hlds.m"
}

#line 1322 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(
#line 1322 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1322 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1322 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1322 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1322 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
#line 1322 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6)
#line 1322 "equiv_type_hlds.m"
{
#line 1326 "equiv_type_hlds.m"
  {
#line 1326 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1326 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1326 "equiv_type_hlds.m"
      {
#line 1326 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1326 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
#line 1326 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5;
#line 1326 "equiv_type_hlds.m"
      }
#line 1326 "equiv_type_hlds.m"
    else
#line 1327 "equiv_type_hlds.m"
      {
#line 1327 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__H0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1327 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__T0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1327 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__T_18;
#line 1327 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed0_19;
#line 1327 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__H_20;
#line 1327 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed1_21;
#line 1327 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24;

#line 1328 "equiv_type_hlds.m"
        {
#line 1328 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__T0_14, &transform_hlds__equiv_type_hlds__T_18, &transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24);
        }
#line 1329 "equiv_type_hlds.m"
        {
#line 1329 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__H0_13, &transform_hlds__equiv_type_hlds__H_20, &transform_hlds__equiv_type_hlds__Changed1_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6);
        }
#line 1330 "equiv_type_hlds.m"
        {
#line 1330 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__Changed1_21);
        }
#line 1332 "equiv_type_hlds.m"
#line 1332 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
#line 1332 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1332 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1332 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1332 "equiv_type_hlds.m"
            break;
#line 1332 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1331 "equiv_type_hlds.m"
            {
#line 1331 "equiv_type_hlds.m"
              MR_Word base;
#line 1331 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
#line 1331 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__H_20));
#line 1331 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__T_18));
#line 1331 "equiv_type_hlds.m"
            }
#line 1332 "equiv_type_hlds.m"
            break;
#line 1332 "equiv_type_hlds.m"
        }
#line 1327 "equiv_type_hlds.m"
      }
#line 1326 "equiv_type_hlds.m"
  }
#line 1322 "equiv_type_hlds.m"
}

#line 1303 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0_1(
#line 1303 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 1303 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 1303 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 1303 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 1303 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 1303 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5)
#line 1303 "equiv_type_hlds.m"
{
#line 1303 "equiv_type_hlds.m"
  {
#line 1303 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 1303 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv1_HeadVar__4_40;
#line 1303 "equiv_type_hlds.m"
    MR_Tuple transform_hlds__equiv_type_hlds__conv0_HeadVar__6_42;

#line 1303 "equiv_type_hlds.m"
    {
#line 1303 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal__1303__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv1_HeadVar__4_40, ((MR_Tuple) transform_hlds__equiv_type_hlds__wrapper_arg_4), &transform_hlds__equiv_type_hlds__conv0_HeadVar__6_42);
    }
#line 1303 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv1_HeadVar__4_40));
#line 1303 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_5 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_HeadVar__6_42));
#line 1303 "equiv_type_hlds.m"
  }
#line 1303 "equiv_type_hlds.m"
}

#line 1292 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(
#line 1292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Goal0_8,
#line 1292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Goal_9,
#line 1292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 1292 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_32,
#line 1292 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33)
#line 1292 "equiv_type_hlds.m"
{
#line 1296 "equiv_type_hlds.m"
  {
#line 1296 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 1296 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Goal0_8, (MR_Integer) 0)));
#line 1296 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Goal0_8, (MR_Integer) 1)));
#line 1296 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__GoalExpr_14;
#line 1296 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed0_15;
#line 1296 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstMapDelta0_16;
#line 1296 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet0_17;
#line 1296 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cache0_18;
#line 1296 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstMapDelta_28;
#line 1296 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet_29;
#line 1296 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cache_30;
#line 1296 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34;
#line 1296 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_35_35;
#line 1296 "equiv_type_hlds.m"
    MR_Tuple transform_hlds__equiv_type_hlds__V_36_36;
#line 1296 "equiv_type_hlds.m"
    MR_Tuple transform_hlds__equiv_type_hlds__V_37_37;
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_56_56;
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_57_57;
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_58_58;
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_60_60;
#line 1303 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv2_V_37_37;

#line 1298 "equiv_type_hlds.m"
    {
#line 1298 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__GoalExpr0_12, &transform_hlds__equiv_type_hlds__GoalExpr_14, &transform_hlds__equiv_type_hlds__Changed0_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_32, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34);
    }
#line 1300 "equiv_type_hlds.m"
    {
#line 1300 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__InstMapDelta0_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__equiv_type_hlds__GoalInfo0_13);
    }
#line 1301 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 0)));
#line 1301 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 1)));
#line 1301 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 2)));
#line 1301 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__TVarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 3)));
#line 1301 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__Cache0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 4)));
#line 1301 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 5)));
#line 1303 "equiv_type_hlds.m"
    {
#line 1303 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1303 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_35_35, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[3]));
#line 1303 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_35_35, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0_1));
#line 1303 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1303 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_35_35, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_7));
#line 1303 "equiv_type_hlds.m"
    }
#line 1310 "equiv_type_hlds.m"
    {
#line 1310 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_36_36 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1310 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_36_36, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Changed0_15));
#line 1310 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_36_36, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet0_17));
#line 1310 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_36_36, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cache0_18));
#line 1310 "equiv_type_hlds.m"
    }
#line 1303 "equiv_type_hlds.m"
    {
#line 1303 "equiv_type_hlds.m"
      hlds__instmap__instmap_delta_map_foldl_5_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_3[0], transform_hlds__equiv_type_hlds__V_35_35, transform_hlds__equiv_type_hlds__InstMapDelta0_16, &transform_hlds__equiv_type_hlds__InstMapDelta_28, ((MR_Box) (transform_hlds__equiv_type_hlds__V_36_36)), &transform_hlds__equiv_type_hlds__conv2_V_37_37);
    }
#line 1303 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_37_37 = ((MR_Tuple) transform_hlds__equiv_type_hlds__conv2_V_37_37);
#line 1310 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__Changed_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_37_37, (MR_Integer) 0)));
#line 1310 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__TVarSet_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_37_37, (MR_Integer) 1)));
#line 1310 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__Cache_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_37_37, (MR_Integer) 2)));
#line 1317 "equiv_type_hlds.m"
#line 1317 "equiv_type_hlds.m"
    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1317 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1317 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 1318 "equiv_type_hlds.m"
        {
#line 1319 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Goal_9 = transform_hlds__equiv_type_hlds__Goal0_8;
#line 1318 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34;
#line 1318 "equiv_type_hlds.m"
        }
#line 1317 "equiv_type_hlds.m"
        break;
#line 1317 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 1312 "equiv_type_hlds.m"
        {
#line 1312 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__GoalInfo_31;
#line 1312 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 0)));
#line 1312 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 1)));
#line 1312 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 2)));
#line 1312 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 5)));
#line 1313 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 3)));
#line 1313 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 4)));

#line 1314 "equiv_type_hlds.m"
          {
#line 1314 "equiv_type_hlds.m"
            MR_Word base;
#line 1314 "equiv_type_hlds.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1314 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33 = base;
#line 1314 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_66_66));
#line 1314 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_67_67));
#line 1314 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_68_68));
#line 1314 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_29));
#line 1314 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cache_30));
#line 1314 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_71_71));
#line 1314 "equiv_type_hlds.m"
          }
#line 1315 "equiv_type_hlds.m"
          {
#line 1315 "equiv_type_hlds.m"
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__equiv_type_hlds__InstMapDelta_28, transform_hlds__equiv_type_hlds__GoalInfo0_13, &transform_hlds__equiv_type_hlds__GoalInfo_31);
          }
#line 1316 "equiv_type_hlds.m"
          {
#line 1316 "equiv_type_hlds.m"
            MR_Word base;
#line 1316 "equiv_type_hlds.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1316 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__Goal_9 = base;
#line 1316 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__GoalExpr_14));
#line 1316 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__GoalInfo_31));
#line 1316 "equiv_type_hlds.m"
          }
#line 1312 "equiv_type_hlds.m"
        }
#line 1317 "equiv_type_hlds.m"
        break;
#line 1317 "equiv_type_hlds.m"
    }
#line 1296 "equiv_type_hlds.m"
  }
#line 1292 "equiv_type_hlds.m"
}

#line 1250 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(
#line 1250 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1250 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1250 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1250 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1250 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
#line 1250 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
#line 1250 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
#line 1250 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8)
#line 1250 "equiv_type_hlds.m"
{
#line 1254 "equiv_type_hlds.m"
  {
#line 1254 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1254 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1254 "equiv_type_hlds.m"
      {
#line 1254 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1254 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
#line 1254 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7;
#line 1254 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5;
#line 1254 "equiv_type_hlds.m"
      }
#line 1254 "equiv_type_hlds.m"
    else
#line 1256 "equiv_type_hlds.m"
      {
#line 1256 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Inst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1256 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Insts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1256 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Inst_24;
#line 1256 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed0_25;
#line 1256 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Insts_26;
#line 1256 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed1_27;
#line 1256 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32;
#line 1256 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33;

#line 1257 "equiv_type_hlds.m"
        {
#line 1257 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Inst0_18, &transform_hlds__equiv_type_hlds__Inst_24, &transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33);
        }
#line 1258 "equiv_type_hlds.m"
        {
#line 1258 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Insts0_19, &transform_hlds__equiv_type_hlds__Insts_26, &transform_hlds__equiv_type_hlds__Changed1_27, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);
        }
#line 1259 "equiv_type_hlds.m"
        {
#line 1259 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__Changed1_27);
        }
#line 1261 "equiv_type_hlds.m"
#line 1261 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
#line 1261 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1261 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1261 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1261 "equiv_type_hlds.m"
            break;
#line 1261 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1260 "equiv_type_hlds.m"
            {
#line 1260 "equiv_type_hlds.m"
              MR_Word base;
#line 1260 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1260 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
#line 1260 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Inst_24));
#line 1260 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Insts_26));
#line 1260 "equiv_type_hlds.m"
            }
#line 1261 "equiv_type_hlds.m"
            break;
#line 1261 "equiv_type_hlds.m"
        }
#line 1256 "equiv_type_hlds.m"
      }
#line 1254 "equiv_type_hlds.m"
  }
#line 1250 "equiv_type_hlds.m"
}

#line 1233 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(
#line 1233 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1233 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1233 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1233 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1233 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
#line 1233 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
#line 1233 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
#line 1233 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8)
#line 1233 "equiv_type_hlds.m"
{
#line 1237 "equiv_type_hlds.m"
  {
#line 1237 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1237 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1237 "equiv_type_hlds.m"
      {
#line 1237 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1237 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
#line 1237 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7;
#line 1237 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5;
#line 1237 "equiv_type_hlds.m"
      }
#line 1237 "equiv_type_hlds.m"
    else
#line 1240 "equiv_type_hlds.m"
      {
#line 1240 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__ConsId_18;
#line 1240 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Insts0_19;
#line 1240 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__BoundInsts0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1240 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Insts_25;
#line 1240 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstsChanged_26;
#line 1240 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__BoundInsts_27;
#line 1240 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__BoundInstsChanged_28;
#line 1240 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1240 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_34;
#line 1240 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_35;

#line 1239 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_33_33, (MR_Integer) 0)));
#line 1239 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__Insts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_33_33, (MR_Integer) 1)));
#line 1241 "equiv_type_hlds.m"
        {
#line 1241 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Insts0_19, &transform_hlds__equiv_type_hlds__Insts_25, &transform_hlds__equiv_type_hlds__InstsChanged_26, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_35);
        }
#line 1243 "equiv_type_hlds.m"
        {
#line 1243 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__BoundInsts0_20, &transform_hlds__equiv_type_hlds__BoundInsts_27, &transform_hlds__equiv_type_hlds__BoundInstsChanged_28, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);
        }
#line 1245 "equiv_type_hlds.m"
        {
#line 1245 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__InstsChanged_26, transform_hlds__equiv_type_hlds__BoundInstsChanged_28);
        }
#line 1247 "equiv_type_hlds.m"
#line 1247 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
#line 1247 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1247 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1247 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1247 "equiv_type_hlds.m"
            break;
#line 1247 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1246 "equiv_type_hlds.m"
            {
#line 1246 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_38_38;

#line 1246 "equiv_type_hlds.m"
              {
#line 1246 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1246 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_38_38, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__ConsId_18));
#line 1246 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_38_38, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Insts_25));
#line 1246 "equiv_type_hlds.m"
              }
#line 1246 "equiv_type_hlds.m"
              {
#line 1246 "equiv_type_hlds.m"
                MR_Word base;
#line 1246 "equiv_type_hlds.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
#line 1246 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_38_38));
#line 1246 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__BoundInsts_27));
#line 1246 "equiv_type_hlds.m"
              }
#line 1246 "equiv_type_hlds.m"
            }
#line 1247 "equiv_type_hlds.m"
            break;
#line 1247 "equiv_type_hlds.m"
        }
#line 1240 "equiv_type_hlds.m"
      }
#line 1237 "equiv_type_hlds.m"
  }
#line 1233 "equiv_type_hlds.m"
}

#line 1160 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(
#line 1160 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 1160 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__InstName0_10,
#line 1160 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__InstName_11,
#line 1160 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 1160 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34,
#line 1160 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35,
#line 1160 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36,
#line 1160 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37)
#line 1160 "equiv_type_hlds.m"
{
#line 1167 "equiv_type_hlds.m"
  {
#line 1167 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1167 "equiv_type_hlds.m"
#line 1167 "equiv_type_hlds.m"
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__InstName0_10)) {
#line 1167 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1167 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 1167 "equiv_type_hlds.m"
        {
#line 1167 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 0)));
#line 1167 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
#line 1167 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Insts_17;

#line 1168 "equiv_type_hlds.m"
          {
#line 1168 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Insts0_16, &transform_hlds__equiv_type_hlds__Insts_17, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
          }
#line 1170 "equiv_type_hlds.m"
#line 1170 "equiv_type_hlds.m"
          switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1170 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1170 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 1170 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1170 "equiv_type_hlds.m"
              break;
#line 1170 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 1169 "equiv_type_hlds.m"
              {
#line 1169 "equiv_type_hlds.m"
                MR_Word base;
#line 1169 "equiv_type_hlds.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1169 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1169 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_15));
#line 1169 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Insts_17));
#line 1169 "equiv_type_hlds.m"
              }
#line 1170 "equiv_type_hlds.m"
              break;
#line 1170 "equiv_type_hlds.m"
          }
#line 1167 "equiv_type_hlds.m"
        }
#line 1167 "equiv_type_hlds.m"
        break;
#line 1167 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 1173 "equiv_type_hlds.m"
        {
#line 1173 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Live_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 0)));
#line 1173 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Real_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
#line 1173 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstA0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)));
#line 1173 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstB0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 3)));
#line 1173 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstA_22;
#line 1173 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__ChangedA_23;
#line 1173 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstB_24;
#line 1173 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__ChangedB_25;
#line 1173 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56;
#line 1173 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_57_57;

#line 1174 "equiv_type_hlds.m"
          {
#line 1174 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstA0_20, &transform_hlds__equiv_type_hlds__InstA_22, &transform_hlds__equiv_type_hlds__ChangedA_23, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_57_57);
          }
#line 1175 "equiv_type_hlds.m"
          {
#line 1175 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstB0_21, &transform_hlds__equiv_type_hlds__InstB_24, &transform_hlds__equiv_type_hlds__ChangedB_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_57_57, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
          }
#line 1176 "equiv_type_hlds.m"
          {
#line 1176 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__Changed_12 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_23, transform_hlds__equiv_type_hlds__ChangedB_25);
          }
#line 1178 "equiv_type_hlds.m"
#line 1178 "equiv_type_hlds.m"
          switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1178 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1178 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 1178 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1178 "equiv_type_hlds.m"
              break;
#line 1178 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 1177 "equiv_type_hlds.m"
              {
#line 1177 "equiv_type_hlds.m"
                MR_Word base;
#line 1177 "equiv_type_hlds.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1177 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Live_18));
#line 1177 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Real_19));
#line 1177 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_22));
#line 1177 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_24));
#line 1177 "equiv_type_hlds.m"
              }
#line 1178 "equiv_type_hlds.m"
              break;
#line 1178 "equiv_type_hlds.m"
          }
#line 1173 "equiv_type_hlds.m"
        }
#line 1167 "equiv_type_hlds.m"
        break;
#line 1167 "equiv_type_hlds.m"
      case (MR_Integer) 2:
#line 1181 "equiv_type_hlds.m"
        {
#line 1181 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_52_52;
#line 1181 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_53_53;
#line 1181 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstA0_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 0)));
#line 1181 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstB0_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
#line 1181 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstA_64;
#line 1181 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__ChangedA_65;
#line 1181 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstB_66;
#line 1181 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__ChangedB_67;

#line 1182 "equiv_type_hlds.m"
          {
#line 1182 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstA0_62, &transform_hlds__equiv_type_hlds__InstA_64, &transform_hlds__equiv_type_hlds__ChangedA_65, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_52_52, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_53_53);
          }
#line 1183 "equiv_type_hlds.m"
          {
#line 1183 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstB0_63, &transform_hlds__equiv_type_hlds__InstB_66, &transform_hlds__equiv_type_hlds__ChangedB_67, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_52_52, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_53_53, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
          }
#line 1184 "equiv_type_hlds.m"
          {
#line 1184 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__Changed_12 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_65, transform_hlds__equiv_type_hlds__ChangedB_67);
          }
#line 1186 "equiv_type_hlds.m"
#line 1186 "equiv_type_hlds.m"
          switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1186 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1186 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 1186 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1186 "equiv_type_hlds.m"
              break;
#line 1186 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 1185 "equiv_type_hlds.m"
              {
#line 1185 "equiv_type_hlds.m"
                MR_Word base;
#line 1185 "equiv_type_hlds.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1185 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_64));
#line 1185 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_66));
#line 1185 "equiv_type_hlds.m"
              }
#line 1186 "equiv_type_hlds.m"
              break;
#line 1186 "equiv_type_hlds.m"
          }
#line 1181 "equiv_type_hlds.m"
        }
#line 1167 "equiv_type_hlds.m"
        break;
#line 1167 "equiv_type_hlds.m"
      case (MR_Integer) 3:
#line 1167 "equiv_type_hlds.m"
#line 1167 "equiv_type_hlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 0)))) {
#line 1167 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1167 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1189 "equiv_type_hlds.m"
            {
#line 1189 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
#line 1189 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Uniq_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1189 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name_68;
#line 1189 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Live_69 = ((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 1189 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Real_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1190 "equiv_type_hlds.m"
              {
#line 1190 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Name0_26, &transform_hlds__equiv_type_hlds__Name_68, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
              }
#line 1193 "equiv_type_hlds.m"
#line 1193 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1193 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1193 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1193 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1193 "equiv_type_hlds.m"
                  break;
#line 1193 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1192 "equiv_type_hlds.m"
                  {
#line 1192 "equiv_type_hlds.m"
                    MR_Word base;
#line 1192 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1192 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1192 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_68));
#line 1192 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((transform_hlds__equiv_type_hlds__Live_69 | ((((transform_hlds__equiv_type_hlds__Uniq_27 << (MR_Integer) 3)) | ((transform_hlds__equiv_type_hlds__Real_70 << (MR_Integer) 4)))))));
#line 1192 "equiv_type_hlds.m"
                  }
#line 1193 "equiv_type_hlds.m"
                  break;
#line 1193 "equiv_type_hlds.m"
              }
#line 1189 "equiv_type_hlds.m"
            }
#line 1167 "equiv_type_hlds.m"
            break;
#line 1167 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1196 "equiv_type_hlds.m"
            {
#line 1196 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name_71;
#line 1196 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Live_72 = ((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 1196 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Real_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1196 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
#line 1196 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Uniq_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1197 "equiv_type_hlds.m"
              {
#line 1197 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Name0_74, &transform_hlds__equiv_type_hlds__Name_71, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
              }
#line 1200 "equiv_type_hlds.m"
#line 1200 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1200 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1200 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1200 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1200 "equiv_type_hlds.m"
                  break;
#line 1200 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1199 "equiv_type_hlds.m"
                  {
#line 1199 "equiv_type_hlds.m"
                    MR_Word base;
#line 1199 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1199 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1199 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_71));
#line 1199 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((transform_hlds__equiv_type_hlds__Live_72 | ((((transform_hlds__equiv_type_hlds__Uniq_75 << (MR_Integer) 3)) | ((transform_hlds__equiv_type_hlds__Real_73 << (MR_Integer) 4)))))));
#line 1199 "equiv_type_hlds.m"
                  }
#line 1200 "equiv_type_hlds.m"
                  break;
#line 1200 "equiv_type_hlds.m"
              }
#line 1196 "equiv_type_hlds.m"
            }
#line 1167 "equiv_type_hlds.m"
            break;
#line 1167 "equiv_type_hlds.m"
          case (MR_Integer) 2:
#line 1203 "equiv_type_hlds.m"
            {
#line 1203 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name_76;
#line 1203 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));

#line 1204 "equiv_type_hlds.m"
              {
#line 1204 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Name0_77, &transform_hlds__equiv_type_hlds__Name_76, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
              }
#line 1207 "equiv_type_hlds.m"
#line 1207 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1207 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1207 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1207 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1207 "equiv_type_hlds.m"
                  break;
#line 1207 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1206 "equiv_type_hlds.m"
                  {
#line 1206 "equiv_type_hlds.m"
                    MR_Word base;
#line 1206 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1206 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1206 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_76));
#line 1206 "equiv_type_hlds.m"
                  }
#line 1207 "equiv_type_hlds.m"
                  break;
#line 1207 "equiv_type_hlds.m"
              }
#line 1203 "equiv_type_hlds.m"
            }
#line 1167 "equiv_type_hlds.m"
            break;
#line 1167 "equiv_type_hlds.m"
          case (MR_Integer) 3:
#line 1210 "equiv_type_hlds.m"
            {
#line 1210 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name_78;
#line 1210 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));

#line 1211 "equiv_type_hlds.m"
              {
#line 1211 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Name0_79, &transform_hlds__equiv_type_hlds__Name_78, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
              }
#line 1214 "equiv_type_hlds.m"
#line 1214 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1214 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1214 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1214 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1214 "equiv_type_hlds.m"
                  break;
#line 1214 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1213 "equiv_type_hlds.m"
                  {
#line 1213 "equiv_type_hlds.m"
                    MR_Word base;
#line 1213 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1213 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1213 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_78));
#line 1213 "equiv_type_hlds.m"
                  }
#line 1214 "equiv_type_hlds.m"
                  break;
#line 1214 "equiv_type_hlds.m"
              }
#line 1210 "equiv_type_hlds.m"
            }
#line 1167 "equiv_type_hlds.m"
            break;
#line 1167 "equiv_type_hlds.m"
          case (MR_Integer) 4:
#line 1217 "equiv_type_hlds.m"
            {
#line 1217 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Type0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)));
#line 1217 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Type_29;
#line 1217 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Uniq_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
#line 1218 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_30_30;

#line 1218 "equiv_type_hlds.m"
              {
#line 1218 "equiv_type_hlds.m"
                parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Type0_28, &transform_hlds__equiv_type_hlds__Type_29, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__V_30_30);
              }
#line 1220 "equiv_type_hlds.m"
#line 1220 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1220 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1220 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1220 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1220 "equiv_type_hlds.m"
                  break;
#line 1220 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1219 "equiv_type_hlds.m"
                  {
#line 1219 "equiv_type_hlds.m"
                    MR_Word base;
#line 1219 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1219 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1219 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Uniq_80));
#line 1219 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_29));
#line 1219 "equiv_type_hlds.m"
                  }
#line 1220 "equiv_type_hlds.m"
                  break;
#line 1220 "equiv_type_hlds.m"
              }
#line 1217 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36;
#line 1217 "equiv_type_hlds.m"
            }
#line 1167 "equiv_type_hlds.m"
            break;
#line 1167 "equiv_type_hlds.m"
          case (MR_Integer) 5:
#line 1223 "equiv_type_hlds.m"
            {
#line 1223 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TypeChanged_31;
#line 1223 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Changed0_33;
#line 1223 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_38;
#line 1223 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name_81;
#line 1223 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)));
#line 1223 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Type0_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
#line 1223 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Type_84;
#line 1224 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_32_32;

#line 1224 "equiv_type_hlds.m"
              {
#line 1224 "equiv_type_hlds.m"
                parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Type0_83, &transform_hlds__equiv_type_hlds__Type_84, &transform_hlds__equiv_type_hlds__TypeChanged_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__V_32_32);
              }
#line 1225 "equiv_type_hlds.m"
              {
#line 1225 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Name0_82, &transform_hlds__equiv_type_hlds__Name_81, &transform_hlds__equiv_type_hlds__Changed0_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_38, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
              }
#line 1227 "equiv_type_hlds.m"
              {
#line 1227 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__Changed_12 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__TypeChanged_31, transform_hlds__equiv_type_hlds__Changed0_33);
              }
#line 1229 "equiv_type_hlds.m"
#line 1229 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1229 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1229 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1229 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1229 "equiv_type_hlds.m"
                  break;
#line 1229 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1228 "equiv_type_hlds.m"
                  {
#line 1228 "equiv_type_hlds.m"
                    MR_Word base;
#line 1228 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1228 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1228 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_84));
#line 1228 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_81));
#line 1228 "equiv_type_hlds.m"
                  }
#line 1229 "equiv_type_hlds.m"
                  break;
#line 1229 "equiv_type_hlds.m"
              }
#line 1223 "equiv_type_hlds.m"
            }
#line 1167 "equiv_type_hlds.m"
            break;
#line 1167 "equiv_type_hlds.m"
        }
#line 1167 "equiv_type_hlds.m"
        break;
#line 1167 "equiv_type_hlds.m"
    }
#line 1167 "equiv_type_hlds.m"
  }
#line 1160 "equiv_type_hlds.m"
}

#line 1041 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_2_8_p_0(
#line 1041 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 1041 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst0_10,
#line 1041 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Inst_11,
#line 1041 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 1041 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49,
#line 1041 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50,
#line 1041 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51,
#line 1041 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52)
#line 1041 "equiv_type_hlds.m"
{
#line 1052 "equiv_type_hlds.m"
  {
#line 1052 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1052 "equiv_type_hlds.m"
#line 1052 "equiv_type_hlds.m"
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Inst0_10)) {
#line 1052 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1052 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 1052 "equiv_type_hlds.m"
#line 1052 "equiv_type_hlds.m"
        switch (MR_unmkbody(transform_hlds__equiv_type_hlds__Inst0_10)) {
#line 1052 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1052 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1052 "equiv_type_hlds.m"
            {
#line 1053 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1054 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 1052 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
#line 1052 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 1052 "equiv_type_hlds.m"
            }
#line 1052 "equiv_type_hlds.m"
            break;
#line 1052 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1052 "equiv_type_hlds.m"
            {
#line 1053 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1054 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 1052 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
#line 1052 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 1052 "equiv_type_hlds.m"
            }
#line 1052 "equiv_type_hlds.m"
            break;
#line 1052 "equiv_type_hlds.m"
        }
#line 1052 "equiv_type_hlds.m"
        break;
#line 1052 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 1068 "equiv_type_hlds.m"
        {
#line 1068 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Type0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 0)));
#line 1068 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Type_27;
#line 1069 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_28_28;

#line 1069 "equiv_type_hlds.m"
          {
#line 1069 "equiv_type_hlds.m"
            parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Type0_26, &transform_hlds__equiv_type_hlds__Type_27, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__V_28_28);
          }
#line 1072 "equiv_type_hlds.m"
#line 1072 "equiv_type_hlds.m"
          switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1072 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1072 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 1072 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1072 "equiv_type_hlds.m"
              break;
#line 1072 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 1071 "equiv_type_hlds.m"
              {
#line 1071 "equiv_type_hlds.m"
                MR_Word base;
#line 1071 "equiv_type_hlds.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1071 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_27));
#line 1071 "equiv_type_hlds.m"
              }
#line 1072 "equiv_type_hlds.m"
              break;
#line 1072 "equiv_type_hlds.m"
          }
#line 1068 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 1068 "equiv_type_hlds.m"
        }
#line 1052 "equiv_type_hlds.m"
        break;
#line 1052 "equiv_type_hlds.m"
      case (MR_Integer) 2:
#line 1052 "equiv_type_hlds.m"
        {
#line 1052 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));
#line 1052 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 0)));

#line 1052 "equiv_type_hlds.m"
          if ((transform_hlds__equiv_type_hlds__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1052 "equiv_type_hlds.m"
            {
#line 1053 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1054 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 1052 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
#line 1052 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 1052 "equiv_type_hlds.m"
            }
#line 1052 "equiv_type_hlds.m"
          else
#line 1056 "equiv_type_hlds.m"
            {
#line 1056 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__PredInstInfo0_19 = (MR_Word) MR_body(((MR_Word) transform_hlds__equiv_type_hlds__V_87_87), (MR_Integer) 1);
#line 1056 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__PorF_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_19, (MR_Integer) 0)));
#line 1056 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Modes0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_19, (MR_Integer) 1)));
#line 1056 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__MaybeArgRegs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_19, (MR_Integer) 2)));
#line 1056 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_19, (MR_Integer) 3)));
#line 1056 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Modes_24;

#line 1058 "equiv_type_hlds.m"
              {
#line 1058 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Modes0_21, &transform_hlds__equiv_type_hlds__Modes_24, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
              }
#line 1063 "equiv_type_hlds.m"
#line 1063 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1063 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1063 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1064 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1063 "equiv_type_hlds.m"
                  break;
#line 1063 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1060 "equiv_type_hlds.m"
                  {
#line 1060 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__PredInstInfo_25;
#line 1060 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_72_72;

#line 1061 "equiv_type_hlds.m"
                    {
#line 1061 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__PredInstInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1061 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_25, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__PorF_20));
#line 1061 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_25, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Modes_24));
#line 1061 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_25, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeArgRegs_22));
#line 1061 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_25, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Det_23));
#line 1061 "equiv_type_hlds.m"
                    }
#line 1062 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__equiv_type_hlds__PredInstInfo_25);
#line 1062 "equiv_type_hlds.m"
                    {
#line 1062 "equiv_type_hlds.m"
                      MR_Word base;
#line 1062 "equiv_type_hlds.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1062 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_88_88));
#line 1062 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_72_72));
#line 1062 "equiv_type_hlds.m"
                    }
#line 1060 "equiv_type_hlds.m"
                  }
#line 1063 "equiv_type_hlds.m"
                  break;
#line 1063 "equiv_type_hlds.m"
              }
#line 1056 "equiv_type_hlds.m"
            }
#line 1052 "equiv_type_hlds.m"
        }
#line 1052 "equiv_type_hlds.m"
        break;
#line 1052 "equiv_type_hlds.m"
      case (MR_Integer) 3:
#line 1052 "equiv_type_hlds.m"
#line 1052 "equiv_type_hlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 0)))) {
#line 1052 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1052 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1075 "equiv_type_hlds.m"
            {
#line 1075 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__InstResults0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 2)));
#line 1075 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__BoundInsts0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 3)));
#line 1075 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Uniq_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));

#line 8513 "transform_hlds.equiv_type_hlds.c"
#line 8514 "transform_hlds.equiv_type_hlds.c"
              switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__InstResults0_29)) {
#line 8516 "transform_hlds.equiv_type_hlds.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 8518 "transform_hlds.equiv_type_hlds.c"
                case (MR_Integer) 0:
#line 8520 "transform_hlds.equiv_type_hlds.c"
#line 8521 "transform_hlds.equiv_type_hlds.c"
                  switch (MR_unmkbody(transform_hlds__equiv_type_hlds__InstResults0_29)) {
#line 8523 "transform_hlds.equiv_type_hlds.c"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 8525 "transform_hlds.equiv_type_hlds.c"
                    case (MR_Integer) 0:
#line 8527 "transform_hlds.equiv_type_hlds.c"
                      {
#line 8529 "transform_hlds.equiv_type_hlds.c"
                        MR_Word transform_hlds__equiv_type_hlds__BoundInsts_40;

#line 1108 "equiv_type_hlds.m"
                        {
#line 1108 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__BoundInsts0_30, &transform_hlds__equiv_type_hlds__BoundInsts_40, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
                        }
#line 1113 "equiv_type_hlds.m"
#line 1113 "equiv_type_hlds.m"
                        switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1113 "equiv_type_hlds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1113 "equiv_type_hlds.m"
                          case (MR_Integer) 0:
#line 1113 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1113 "equiv_type_hlds.m"
                            break;
#line 1113 "equiv_type_hlds.m"
                          case (MR_Integer) 1:
#line 1112 "equiv_type_hlds.m"
                            {
#line 1112 "equiv_type_hlds.m"
                              MR_Word base;
#line 1112 "equiv_type_hlds.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "equiv_type_hlds.m"
                              *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1112 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1112 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Uniq_75));
#line 1112 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstResults0_29));
#line 1112 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__BoundInsts_40));
#line 1112 "equiv_type_hlds.m"
                            }
#line 1113 "equiv_type_hlds.m"
                            break;
#line 1113 "equiv_type_hlds.m"
                        }
#line 8572 "transform_hlds.equiv_type_hlds.c"
                      }
#line 8574 "transform_hlds.equiv_type_hlds.c"
                      break;
#line 8576 "transform_hlds.equiv_type_hlds.c"
                    case (MR_Integer) 1:
#line 8578 "transform_hlds.equiv_type_hlds.c"
                      {
#line 1104 "equiv_type_hlds.m"
                        *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 1105 "equiv_type_hlds.m"
                        *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1103 "equiv_type_hlds.m"
                        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
#line 1103 "equiv_type_hlds.m"
                        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 8588 "transform_hlds.equiv_type_hlds.c"
                      }
#line 8590 "transform_hlds.equiv_type_hlds.c"
                      break;
#line 8592 "transform_hlds.equiv_type_hlds.c"
                  }
#line 8594 "transform_hlds.equiv_type_hlds.c"
                  break;
#line 8596 "transform_hlds.equiv_type_hlds.c"
                case (MR_Integer) 1:
#line 8598 "transform_hlds.equiv_type_hlds.c"
                  {
#line 8600 "transform_hlds.equiv_type_hlds.c"
                    MR_Word transform_hlds__equiv_type_hlds__GroundnessResult_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 0)));
#line 8602 "transform_hlds.equiv_type_hlds.c"
                    MR_Word transform_hlds__equiv_type_hlds__AnyResult_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 1)));
#line 8604 "transform_hlds.equiv_type_hlds.c"
                    MR_Word transform_hlds__equiv_type_hlds__InstNamesResult_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 2)));
#line 8606 "transform_hlds.equiv_type_hlds.c"
                    MR_Word transform_hlds__equiv_type_hlds__InstVarsResult_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 3)));
#line 8608 "transform_hlds.equiv_type_hlds.c"
                    MR_Word transform_hlds__equiv_type_hlds__TypeResult_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 4)));
#line 8610 "transform_hlds.equiv_type_hlds.c"
                    MR_Word transform_hlds__equiv_type_hlds__PropagatedResult_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 5)));

#line 8613 "transform_hlds.equiv_type_hlds.c"
                    if ((transform_hlds__equiv_type_hlds__TypeResult_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8615 "transform_hlds.equiv_type_hlds.c"
                      {
#line 8617 "transform_hlds.equiv_type_hlds.c"
                        MR_Word transform_hlds__equiv_type_hlds__BoundInsts_102;

#line 1108 "equiv_type_hlds.m"
                        {
#line 1108 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__BoundInsts0_30, &transform_hlds__equiv_type_hlds__BoundInsts_102, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
                        }
#line 1113 "equiv_type_hlds.m"
#line 1113 "equiv_type_hlds.m"
                        switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1113 "equiv_type_hlds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1113 "equiv_type_hlds.m"
                          case (MR_Integer) 0:
#line 1113 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1113 "equiv_type_hlds.m"
                            break;
#line 1113 "equiv_type_hlds.m"
                          case (MR_Integer) 1:
#line 1112 "equiv_type_hlds.m"
                            {
#line 1112 "equiv_type_hlds.m"
                              MR_Word base;
#line 1112 "equiv_type_hlds.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "equiv_type_hlds.m"
                              *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1112 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1112 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Uniq_75));
#line 1112 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstResults0_29));
#line 1112 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__BoundInsts_102));
#line 1112 "equiv_type_hlds.m"
                            }
#line 1113 "equiv_type_hlds.m"
                            break;
#line 1113 "equiv_type_hlds.m"
                        }
#line 8660 "transform_hlds.equiv_type_hlds.c"
                      }
#line 8662 "transform_hlds.equiv_type_hlds.c"
                    else
#line 8664 "transform_hlds.equiv_type_hlds.c"
                      {
#line 8666 "transform_hlds.equiv_type_hlds.c"
                        MR_Word transform_hlds__equiv_type_hlds__TypeCtors_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__TypeResult_35, (MR_Integer) 0)));

#line 1087 "equiv_type_hlds.m"
                        {
#line 1087 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__equiv_type_hlds__TypeCtors_38);
                        }
#line 8674 "transform_hlds.equiv_type_hlds.c"
                        if (transform_hlds__equiv_type_hlds__succeeded)
#line 8676 "transform_hlds.equiv_type_hlds.c"
                          {
#line 1104 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 1105 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1103 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
#line 1103 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 8686 "transform_hlds.equiv_type_hlds.c"
                          }
#line 8688 "transform_hlds.equiv_type_hlds.c"
                        else
#line 8690 "transform_hlds.equiv_type_hlds.c"
                          {
#line 8692 "transform_hlds.equiv_type_hlds.c"
                            MR_Word transform_hlds__equiv_type_hlds__InstResults_91;
#line 8694 "transform_hlds.equiv_type_hlds.c"
                            MR_Word transform_hlds__equiv_type_hlds__BoundInsts_92;

#line 1090 "equiv_type_hlds.m"
                            {
#line 1090 "equiv_type_hlds.m"
                              transform_hlds__equiv_type_hlds__InstResults_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__GroundnessResult_31));
#line 1090 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__AnyResult_32));
#line 1090 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstNamesResult_33));
#line 1090 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstVarsResult_34));
#line 1090 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1090 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__PropagatedResult_36));
#line 1090 "equiv_type_hlds.m"
                            }
#line 1108 "equiv_type_hlds.m"
                            {
#line 1108 "equiv_type_hlds.m"
                              transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__BoundInsts0_30, &transform_hlds__equiv_type_hlds__BoundInsts_92, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
                            }
#line 1113 "equiv_type_hlds.m"
#line 1113 "equiv_type_hlds.m"
                            switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1113 "equiv_type_hlds.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 1113 "equiv_type_hlds.m"
                              case (MR_Integer) 0:
#line 1113 "equiv_type_hlds.m"
                                *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1113 "equiv_type_hlds.m"
                                break;
#line 1113 "equiv_type_hlds.m"
                              case (MR_Integer) 1:
#line 1112 "equiv_type_hlds.m"
                                {
#line 1112 "equiv_type_hlds.m"
                                  MR_Word base;
#line 1112 "equiv_type_hlds.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "equiv_type_hlds.m"
                                  *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1112 "equiv_type_hlds.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1112 "equiv_type_hlds.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Uniq_75));
#line 1112 "equiv_type_hlds.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstResults_91));
#line 1112 "equiv_type_hlds.m"
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__BoundInsts_92));
#line 1112 "equiv_type_hlds.m"
                                }
#line 1113 "equiv_type_hlds.m"
                                break;
#line 1113 "equiv_type_hlds.m"
                            }
#line 8755 "transform_hlds.equiv_type_hlds.c"
                          }
#line 8757 "transform_hlds.equiv_type_hlds.c"
                      }
#line 8759 "transform_hlds.equiv_type_hlds.c"
                  }
#line 8761 "transform_hlds.equiv_type_hlds.c"
                  break;
#line 8763 "transform_hlds.equiv_type_hlds.c"
              }
#line 1075 "equiv_type_hlds.m"
            }
#line 1052 "equiv_type_hlds.m"
            break;
#line 1052 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1052 "equiv_type_hlds.m"
            {
#line 1052 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 2)));
#line 1052 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));

#line 1052 "equiv_type_hlds.m"
              if ((transform_hlds__equiv_type_hlds__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1052 "equiv_type_hlds.m"
                {
#line 1053 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1054 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 1052 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
#line 1052 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 1052 "equiv_type_hlds.m"
                }
#line 1052 "equiv_type_hlds.m"
              else
#line 1117 "equiv_type_hlds.m"
                {
#line 1117 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__PredInstInfo0_79 = (MR_Word) MR_body(((MR_Word) transform_hlds__equiv_type_hlds__V_89_89), (MR_Integer) 1);
#line 1117 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__PorF_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_79, (MR_Integer) 0)));
#line 1117 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Modes0_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_79, (MR_Integer) 1)));
#line 1117 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__MaybeArgRegs_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_79, (MR_Integer) 2)));
#line 1117 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Det_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_79, (MR_Integer) 3)));
#line 1117 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Modes_84;

#line 1119 "equiv_type_hlds.m"
                  {
#line 1119 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Modes0_81, &transform_hlds__equiv_type_hlds__Modes_84, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
                  }
#line 1124 "equiv_type_hlds.m"
#line 1124 "equiv_type_hlds.m"
                  switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1124 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1124 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 1125 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1124 "equiv_type_hlds.m"
                      break;
#line 1124 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 1121 "equiv_type_hlds.m"
                      {
#line 1121 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_62_62;
#line 1121 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__PredInstInfo_76;

#line 1122 "equiv_type_hlds.m"
                        {
#line 1122 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__PredInstInfo_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_76, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__PorF_80));
#line 1122 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_76, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Modes_84));
#line 1122 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_76, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeArgRegs_82));
#line 1122 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_76, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Det_83));
#line 1122 "equiv_type_hlds.m"
                        }
#line 1123 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__equiv_type_hlds__PredInstInfo_76);
#line 1123 "equiv_type_hlds.m"
                        {
#line 1123 "equiv_type_hlds.m"
                          MR_Word base;
#line 1123 "equiv_type_hlds.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "equiv_type_hlds.m"
                          *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1123 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1123 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_90_90));
#line 1123 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_62_62));
#line 1123 "equiv_type_hlds.m"
                        }
#line 1121 "equiv_type_hlds.m"
                      }
#line 1124 "equiv_type_hlds.m"
                      break;
#line 1124 "equiv_type_hlds.m"
                  }
#line 1117 "equiv_type_hlds.m"
                }
#line 1052 "equiv_type_hlds.m"
            }
#line 1052 "equiv_type_hlds.m"
            break;
#line 1052 "equiv_type_hlds.m"
          case (MR_Integer) 2:
#line 1052 "equiv_type_hlds.m"
            {
#line 1053 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1054 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 1052 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
#line 1052 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 1052 "equiv_type_hlds.m"
            }
#line 1052 "equiv_type_hlds.m"
            break;
#line 1052 "equiv_type_hlds.m"
          case (MR_Integer) 3:
#line 1129 "equiv_type_hlds.m"
            {
#line 1129 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Vars_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));
#line 1129 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__CInst0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 2)));
#line 1129 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__CInst_43;

#line 1130 "equiv_type_hlds.m"
              {
#line 1130 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__CInst0_42, &transform_hlds__equiv_type_hlds__CInst_43, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
              }
#line 1132 "equiv_type_hlds.m"
#line 1132 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1132 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1132 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1132 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1132 "equiv_type_hlds.m"
                  break;
#line 1132 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1131 "equiv_type_hlds.m"
                  {
#line 1131 "equiv_type_hlds.m"
                    MR_Word base;
#line 1131 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1131 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1131 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Vars_41));
#line 1131 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__CInst_43));
#line 1131 "equiv_type_hlds.m"
                  }
#line 1132 "equiv_type_hlds.m"
                  break;
#line 1132 "equiv_type_hlds.m"
              }
#line 1129 "equiv_type_hlds.m"
            }
#line 1052 "equiv_type_hlds.m"
            break;
#line 1052 "equiv_type_hlds.m"
          case (MR_Integer) 4:
#line 1135 "equiv_type_hlds.m"
            {
#line 1135 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__InstName0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));
#line 1135 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__InstName_45;

#line 1136 "equiv_type_hlds.m"
              {
#line 1136 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstName0_44, &transform_hlds__equiv_type_hlds__InstName_45, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
              }
#line 1139 "equiv_type_hlds.m"
#line 1139 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1139 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1139 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1139 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1139 "equiv_type_hlds.m"
                  break;
#line 1139 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1138 "equiv_type_hlds.m"
                  {
#line 1138 "equiv_type_hlds.m"
                    MR_Word base;
#line 1138 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1138 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1138 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstName_45));
#line 1138 "equiv_type_hlds.m"
                  }
#line 1139 "equiv_type_hlds.m"
                  break;
#line 1139 "equiv_type_hlds.m"
              }
#line 1135 "equiv_type_hlds.m"
            }
#line 1052 "equiv_type_hlds.m"
            break;
#line 1052 "equiv_type_hlds.m"
          case (MR_Integer) 5:
#line 1142 "equiv_type_hlds.m"
            {
#line 1142 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));
#line 1142 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ArgInsts0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 2)));
#line 1142 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ArgInsts_48;

#line 1143 "equiv_type_hlds.m"
              {
#line 1143 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__ArgInsts0_47, &transform_hlds__equiv_type_hlds__ArgInsts_48, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
              }
#line 1146 "equiv_type_hlds.m"
#line 1146 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1146 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1146 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1146 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1146 "equiv_type_hlds.m"
                  break;
#line 1146 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1145 "equiv_type_hlds.m"
                  {
#line 1145 "equiv_type_hlds.m"
                    MR_Word base;
#line 1145 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1145 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1145 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_46));
#line 1145 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__ArgInsts_48));
#line 1145 "equiv_type_hlds.m"
                  }
#line 1146 "equiv_type_hlds.m"
                  break;
#line 1146 "equiv_type_hlds.m"
              }
#line 1142 "equiv_type_hlds.m"
            }
#line 1052 "equiv_type_hlds.m"
            break;
#line 1052 "equiv_type_hlds.m"
        }
#line 1052 "equiv_type_hlds.m"
        break;
#line 1052 "equiv_type_hlds.m"
    }
#line 1052 "equiv_type_hlds.m"
  }
#line 1041 "equiv_type_hlds.m"
}

#line 1020 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__record_inst_may_occur_2_p_0(
#line 1020 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst_1,
#line 1020 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MayOccur_2)
#line 1020 "equiv_type_hlds.m"
{
#line 1022 "equiv_type_hlds.m"
  {
#line 1022 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1025 "equiv_type_hlds.m"
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__record_inst_may_occur_2_p_0

	MR_Word Inst;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_1 ;
	MayOccur =  transform_hlds__equiv_type_hlds__MayOccur_2 ;
		{
#line 1025 "equiv_type_hlds.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    type_in_inst_cache[hash].tice_inst_addr = Inst;
    type_in_inst_cache[hash].tice_may_occur = MayOccur;

#line 9095 "transform_hlds.equiv_type_hlds.c"

		;}
#undef MR_PROC_LABEL
#line 1025 "equiv_type_hlds.m"
}
#line 1022 "equiv_type_hlds.m"
  }
#line 1020 "equiv_type_hlds.m"
}

#line 994 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__lookup_inst_may_occur_3_p_0(
#line 994 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst_1,
#line 994 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Found_2,
#line 994 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MayOccur_3)
#line 994 "equiv_type_hlds.m"
{
#line 997 "equiv_type_hlds.m"
  {
#line 997 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1000 "equiv_type_hlds.m"
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__lookup_inst_may_occur_3_p_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_1 ;
		{
#line 1000 "equiv_type_hlds.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;

    if (type_in_inst_cache[hash].tice_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        MayOccur = type_in_inst_cache[hash].tice_may_occur;
    } else {
        Found = MR_BOOL_NO;
    }

#line 9147 "transform_hlds.equiv_type_hlds.c"

		;}
#undef MR_PROC_LABEL
	 *transform_hlds__equiv_type_hlds__Found_2  = Found;
	 *transform_hlds__equiv_type_hlds__MayOccur_3  = MayOccur;
#line 1000 "equiv_type_hlds.m"
}
#line 997 "equiv_type_hlds.m"
  }
#line 994 "equiv_type_hlds.m"
}

#line 935 "equiv_type_hlds.m"
static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(
#line 935 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1)
#line 935 "equiv_type_hlds.m"
{
#line 937 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 937 "equiv_type_hlds.m"
    {
#line 937 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 937 "equiv_type_hlds.m"
      {
#line 937 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 937 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2;

#line 937 "equiv_type_hlds.m"
        if ((transform_hlds__equiv_type_hlds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 937 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__HeadVar__2_2 = (MR_Integer) 0;
#line 937 "equiv_type_hlds.m"
        else
#line 938 "equiv_type_hlds.m"
          {
#line 938 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Inst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 0)));
#line 938 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Insts_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 1)));
#line 939 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__V_5_5;

#line 939 "equiv_type_hlds.m"
            {
#line 939 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_5_5 = transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(transform_hlds__equiv_type_hlds__Inst_3);
            }
#line 939 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_5_5 == (MR_Integer) 1);
#line 938 "equiv_type_hlds.m"
            if (transform_hlds__equiv_type_hlds__succeeded)
#line 940 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__HeadVar__2_2 = (MR_Integer) 1;
#line 938 "equiv_type_hlds.m"
            else
#line 942 "equiv_type_hlds.m"
              {
#line 942 "equiv_type_hlds.m"
                /* direct tailcall eliminated */
#line 942 "equiv_type_hlds.m"
                {
#line 942 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1__tmp_copy_1 = transform_hlds__equiv_type_hlds__Insts_4;

#line 942 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__HeadVar__1__tmp_copy_1;
#line 942 "equiv_type_hlds.m"
                }
#line 942 "equiv_type_hlds.m"
                continue;
#line 942 "equiv_type_hlds.m"
              }
#line 938 "equiv_type_hlds.m"
          }
#line 937 "equiv_type_hlds.m"
        return transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 937 "equiv_type_hlds.m"
      }
#line 937 "equiv_type_hlds.m"
      break;
#line 937 "equiv_type_hlds.m"
    }
#line 935 "equiv_type_hlds.m"
}

#line 919 "equiv_type_hlds.m"
static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(
#line 919 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1)
#line 919 "equiv_type_hlds.m"
{
#line 921 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 921 "equiv_type_hlds.m"
    {
#line 921 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 921 "equiv_type_hlds.m"
      {
#line 921 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 921 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2;

#line 921 "equiv_type_hlds.m"
        if ((transform_hlds__equiv_type_hlds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__HeadVar__2_2 = (MR_Integer) 0;
#line 921 "equiv_type_hlds.m"
        else
#line 922 "equiv_type_hlds.m"
          {
#line 922 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__BoundInst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 0)));
#line 922 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__BoundInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 1)));
#line 922 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Insts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__BoundInst_3, (MR_Integer) 1)));
#line 923 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__BoundInst_3, (MR_Integer) 0)));
#line 924 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__V_8_8;

#line 924 "equiv_type_hlds.m"
            {
#line 924 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_8_8 = transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(transform_hlds__equiv_type_hlds__Insts_7);
            }
#line 924 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_8_8 == (MR_Integer) 1);
#line 926 "equiv_type_hlds.m"
            if (transform_hlds__equiv_type_hlds__succeeded)
#line 925 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__HeadVar__2_2 = (MR_Integer) 1;
#line 926 "equiv_type_hlds.m"
            else
#line 927 "equiv_type_hlds.m"
              {
#line 927 "equiv_type_hlds.m"
                /* direct tailcall eliminated */
#line 927 "equiv_type_hlds.m"
                {
#line 927 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1__tmp_copy_1 = transform_hlds__equiv_type_hlds__BoundInsts_4;

#line 927 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__HeadVar__1__tmp_copy_1;
#line 927 "equiv_type_hlds.m"
                }
#line 927 "equiv_type_hlds.m"
                continue;
#line 927 "equiv_type_hlds.m"
              }
#line 922 "equiv_type_hlds.m"
          }
#line 921 "equiv_type_hlds.m"
        return transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 921 "equiv_type_hlds.m"
      }
#line 921 "equiv_type_hlds.m"
      break;
#line 921 "equiv_type_hlds.m"
    }
#line 919 "equiv_type_hlds.m"
}

#line 849 "equiv_type_hlds.m"
static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(
#line 849 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst_3)
#line 849 "equiv_type_hlds.m"
{
#line 859 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 859 "equiv_type_hlds.m"
    {
#line 859 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 859 "equiv_type_hlds.m"
      {
#line 859 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 859 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__MayOccur_4;

#line 859 "equiv_type_hlds.m"
#line 859 "equiv_type_hlds.m"
        switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Inst_3)) {
#line 859 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 859 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 859 "equiv_type_hlds.m"
#line 859 "equiv_type_hlds.m"
            switch (MR_unmkbody(transform_hlds__equiv_type_hlds__Inst_3)) {
#line 859 "equiv_type_hlds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 859 "equiv_type_hlds.m"
              case (MR_Integer) 0:
#line 859 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
#line 859 "equiv_type_hlds.m"
                break;
#line 859 "equiv_type_hlds.m"
              case (MR_Integer) 1:
#line 859 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
#line 859 "equiv_type_hlds.m"
                break;
#line 859 "equiv_type_hlds.m"
            }
#line 859 "equiv_type_hlds.m"
            break;
#line 859 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 869 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 1;
#line 859 "equiv_type_hlds.m"
            break;
#line 859 "equiv_type_hlds.m"
          case (MR_Integer) 2:
#line 859 "equiv_type_hlds.m"
            {
#line 859 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 1)));
#line 866 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 0)));

#line 859 "equiv_type_hlds.m"
              if ((transform_hlds__equiv_type_hlds__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 860 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
#line 859 "equiv_type_hlds.m"
              else
#line 869 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 1;
#line 859 "equiv_type_hlds.m"
            }
#line 859 "equiv_type_hlds.m"
            break;
#line 859 "equiv_type_hlds.m"
          case (MR_Integer) 3:
#line 859 "equiv_type_hlds.m"
#line 859 "equiv_type_hlds.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 0)))) {
#line 859 "equiv_type_hlds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 859 "equiv_type_hlds.m"
              case (MR_Integer) 0:
#line 871 "equiv_type_hlds.m"
                {
#line 871 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__InstResults_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 2)));
#line 871 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 3)));
#line 871 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 1)));

#line 875 "equiv_type_hlds.m"
#line 875 "equiv_type_hlds.m"
                  switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__InstResults_14)) {
#line 875 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 875 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 875 "equiv_type_hlds.m"
#line 875 "equiv_type_hlds.m"
                      switch (MR_unmkbody(transform_hlds__equiv_type_hlds__InstResults_14)) {
#line 875 "equiv_type_hlds.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 875 "equiv_type_hlds.m"
                        case (MR_Integer) 0:
#line 890 "equiv_type_hlds.m"
                          {
#line 894 "equiv_type_hlds.m"
                            MR_Word transform_hlds__equiv_type_hlds__Found_23;
#line 894 "equiv_type_hlds.m"
                            MR_Word transform_hlds__equiv_type_hlds__OldMayOccur_24;

#line 1000 "equiv_type_hlds.m"
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_3 ;
		{
#line 1000 "equiv_type_hlds.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;

    if (type_in_inst_cache[hash].tice_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        MayOccur = type_in_inst_cache[hash].tice_may_occur;
    } else {
        Found = MR_BOOL_NO;
    }

#line 9459 "transform_hlds.equiv_type_hlds.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__equiv_type_hlds__Found_23  = Found;
	 transform_hlds__equiv_type_hlds__OldMayOccur_24  = MayOccur;
#line 1000 "equiv_type_hlds.m"
}
#line 898 "equiv_type_hlds.m"
#line 898 "equiv_type_hlds.m"
                            switch (transform_hlds__equiv_type_hlds__Found_23) {
#line 898 "equiv_type_hlds.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 898 "equiv_type_hlds.m"
                              case (MR_Integer) 0:
#line 899 "equiv_type_hlds.m"
                                {
#line 900 "equiv_type_hlds.m"
                                  {
#line 900 "equiv_type_hlds.m"
                                    transform_hlds__equiv_type_hlds__MayOccur_4 = transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(transform_hlds__equiv_type_hlds__BoundInsts_15);
                                  }
#line 1025 "equiv_type_hlds.m"
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_3 ;
	MayOccur =  transform_hlds__equiv_type_hlds__MayOccur_4 ;
		{
#line 1025 "equiv_type_hlds.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    type_in_inst_cache[hash].tice_inst_addr = Inst;
    type_in_inst_cache[hash].tice_may_occur = MayOccur;

#line 9502 "transform_hlds.equiv_type_hlds.c"

		;}
#undef MR_PROC_LABEL
#line 1025 "equiv_type_hlds.m"
}
#line 899 "equiv_type_hlds.m"
                                }
#line 898 "equiv_type_hlds.m"
                                break;
#line 898 "equiv_type_hlds.m"
                              case (MR_Integer) 1:
#line 896 "equiv_type_hlds.m"
                                transform_hlds__equiv_type_hlds__MayOccur_4 = transform_hlds__equiv_type_hlds__OldMayOccur_24;
#line 898 "equiv_type_hlds.m"
                                break;
#line 898 "equiv_type_hlds.m"
                            }
#line 890 "equiv_type_hlds.m"
                          }
#line 875 "equiv_type_hlds.m"
                          break;
#line 875 "equiv_type_hlds.m"
                        case (MR_Integer) 1:
#line 873 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
#line 875 "equiv_type_hlds.m"
                          break;
#line 875 "equiv_type_hlds.m"
                      }
#line 875 "equiv_type_hlds.m"
                      break;
#line 875 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 881 "equiv_type_hlds.m"
                      {
#line 881 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__TypeResult_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 4)));
#line 877 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 0)));
#line 877 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 1)));
#line 877 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 2)));
#line 877 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 3)));
#line 877 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 5)));

#line 889 "equiv_type_hlds.m"
                        if ((transform_hlds__equiv_type_hlds__TypeResult_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 890 "equiv_type_hlds.m"
                          {
#line 894 "equiv_type_hlds.m"
                            MR_Word transform_hlds__equiv_type_hlds__Found_36;
#line 894 "equiv_type_hlds.m"
                            MR_Word transform_hlds__equiv_type_hlds__OldMayOccur_37;

#line 1000 "equiv_type_hlds.m"
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_3 ;
		{
#line 1000 "equiv_type_hlds.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;

    if (type_in_inst_cache[hash].tice_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        MayOccur = type_in_inst_cache[hash].tice_may_occur;
    } else {
        Found = MR_BOOL_NO;
    }

#line 9585 "transform_hlds.equiv_type_hlds.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__equiv_type_hlds__Found_36  = Found;
	 transform_hlds__equiv_type_hlds__OldMayOccur_37  = MayOccur;
#line 1000 "equiv_type_hlds.m"
}
#line 898 "equiv_type_hlds.m"
#line 898 "equiv_type_hlds.m"
                            switch (transform_hlds__equiv_type_hlds__Found_36) {
#line 898 "equiv_type_hlds.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 898 "equiv_type_hlds.m"
                              case (MR_Integer) 0:
#line 899 "equiv_type_hlds.m"
                                {
#line 900 "equiv_type_hlds.m"
                                  {
#line 900 "equiv_type_hlds.m"
                                    transform_hlds__equiv_type_hlds__MayOccur_4 = transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(transform_hlds__equiv_type_hlds__BoundInsts_15);
                                  }
#line 1025 "equiv_type_hlds.m"
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_3 ;
	MayOccur =  transform_hlds__equiv_type_hlds__MayOccur_4 ;
		{
#line 1025 "equiv_type_hlds.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    type_in_inst_cache[hash].tice_inst_addr = Inst;
    type_in_inst_cache[hash].tice_may_occur = MayOccur;

#line 9628 "transform_hlds.equiv_type_hlds.c"

		;}
#undef MR_PROC_LABEL
#line 1025 "equiv_type_hlds.m"
}
#line 899 "equiv_type_hlds.m"
                                }
#line 898 "equiv_type_hlds.m"
                                break;
#line 898 "equiv_type_hlds.m"
                              case (MR_Integer) 1:
#line 896 "equiv_type_hlds.m"
                                transform_hlds__equiv_type_hlds__MayOccur_4 = transform_hlds__equiv_type_hlds__OldMayOccur_37;
#line 898 "equiv_type_hlds.m"
                                break;
#line 898 "equiv_type_hlds.m"
                            }
#line 890 "equiv_type_hlds.m"
                          }
#line 889 "equiv_type_hlds.m"
                        else
#line 883 "equiv_type_hlds.m"
                          {
#line 883 "equiv_type_hlds.m"
                            MR_Word transform_hlds__equiv_type_hlds__TypeCtors_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__TypeResult_44, (MR_Integer) 0)));

#line 884 "equiv_type_hlds.m"
                            {
#line 884 "equiv_type_hlds.m"
                              transform_hlds__equiv_type_hlds__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__equiv_type_hlds__TypeCtors_22);
                            }
#line 886 "equiv_type_hlds.m"
                            if (transform_hlds__equiv_type_hlds__succeeded)
#line 885 "equiv_type_hlds.m"
                              transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
#line 886 "equiv_type_hlds.m"
                            else
#line 887 "equiv_type_hlds.m"
                              transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 1;
#line 883 "equiv_type_hlds.m"
                          }
#line 881 "equiv_type_hlds.m"
                      }
#line 875 "equiv_type_hlds.m"
                      break;
#line 875 "equiv_type_hlds.m"
                  }
#line 871 "equiv_type_hlds.m"
                }
#line 859 "equiv_type_hlds.m"
                break;
#line 859 "equiv_type_hlds.m"
              case (MR_Integer) 1:
#line 859 "equiv_type_hlds.m"
                {
#line 859 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 2)));
#line 865 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 1)));

#line 859 "equiv_type_hlds.m"
                  if ((transform_hlds__equiv_type_hlds__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 860 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
#line 859 "equiv_type_hlds.m"
                  else
#line 869 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 1;
#line 859 "equiv_type_hlds.m"
                }
#line 859 "equiv_type_hlds.m"
                break;
#line 859 "equiv_type_hlds.m"
              case (MR_Integer) 2:
#line 860 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
#line 859 "equiv_type_hlds.m"
                break;
#line 859 "equiv_type_hlds.m"
              case (MR_Integer) 3:
#line 910 "equiv_type_hlds.m"
                {
#line 910 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__CInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 2)));
#line 910 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 1)));

#line 911 "equiv_type_hlds.m"
                  /* direct tailcall eliminated */
#line 911 "equiv_type_hlds.m"
                  {
#line 911 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__Inst__tmp_copy_3 = transform_hlds__equiv_type_hlds__CInst_28;

#line 911 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Inst_3 = transform_hlds__equiv_type_hlds__Inst__tmp_copy_3;
#line 911 "equiv_type_hlds.m"
                  }
#line 911 "equiv_type_hlds.m"
                  continue;
#line 910 "equiv_type_hlds.m"
                }
#line 859 "equiv_type_hlds.m"
                break;
#line 859 "equiv_type_hlds.m"
              case (MR_Integer) 4:
#line 869 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 1;
#line 859 "equiv_type_hlds.m"
                break;
#line 859 "equiv_type_hlds.m"
              case (MR_Integer) 5:
#line 907 "equiv_type_hlds.m"
                {
#line 907 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 2)));
#line 907 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 1)));

#line 908 "equiv_type_hlds.m"
                  {
#line 908 "equiv_type_hlds.m"
                    return transform_hlds__equiv_type_hlds__MayOccur_4 = transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(transform_hlds__equiv_type_hlds__ArgInsts_26);
                  }
#line 907 "equiv_type_hlds.m"
                }
#line 859 "equiv_type_hlds.m"
                break;
#line 859 "equiv_type_hlds.m"
            }
#line 859 "equiv_type_hlds.m"
            break;
#line 859 "equiv_type_hlds.m"
        }
#line 859 "equiv_type_hlds.m"
        return transform_hlds__equiv_type_hlds__MayOccur_4;
#line 859 "equiv_type_hlds.m"
      }
#line 859 "equiv_type_hlds.m"
      break;
#line 859 "equiv_type_hlds.m"
    }
#line 849 "equiv_type_hlds.m"
}

#line 806 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(
#line 806 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 806 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst0_10,
#line 806 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Inst_11,
#line 806 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 806 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_17,
#line 806 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_18,
#line 806 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_19,
#line 806 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20)
#line 806 "equiv_type_hlds.m"
{
#line 810 "equiv_type_hlds.m"
  {
#line 810 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 810 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ContainsType_15;

#line 817 "equiv_type_hlds.m"
    {
#line 817 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__ContainsType_15 = transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(transform_hlds__equiv_type_hlds__Inst0_10);
    }
#line 830 "equiv_type_hlds.m"
#line 830 "equiv_type_hlds.m"
    switch (transform_hlds__equiv_type_hlds__ContainsType_15) {
#line 830 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 830 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 831 "equiv_type_hlds.m"
        {
#line 832 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 833 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 831 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_18 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_17;
#line 831 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_19;
#line 831 "equiv_type_hlds.m"
        }
#line 830 "equiv_type_hlds.m"
        break;
#line 830 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 819 "equiv_type_hlds.m"
        {
#line 819 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Inst1_16;
#line 819 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22;

#line 820 "equiv_type_hlds.m"
          {
#line 820 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_inst_2_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Inst0_10, &transform_hlds__equiv_type_hlds__Inst1_16, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_17, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_18, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_19, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22);
          }
#line 826 "equiv_type_hlds.m"
#line 826 "equiv_type_hlds.m"
          switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 826 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 826 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 827 "equiv_type_hlds.m"
              {
#line 828 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst1_16;
#line 827 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22;
#line 827 "equiv_type_hlds.m"
              }
#line 826 "equiv_type_hlds.m"
              break;
#line 826 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 1275 "equiv_type_hlds.m"
              {
#line 1275 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__Inst1_29;
#line 1273 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_13_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1273 "equiv_type_hlds.m"
                MR_Box transform_hlds__equiv_type_hlds__conv0_Inst1_29;

#line 1273 "equiv_type_hlds.m"
                {
#line 1273 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__succeeded = mercury__map__search_3_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_13_32, transform_hlds__equiv_type_hlds__TypeCtorInfo_13_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22, ((MR_Box) (transform_hlds__equiv_type_hlds__Inst1_16)), &transform_hlds__equiv_type_hlds__conv0_Inst1_29);
                }
#line 1273 "equiv_type_hlds.m"
                if (transform_hlds__equiv_type_hlds__succeeded)
#line 1273 "equiv_type_hlds.m"
                  {
#line 1273 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Inst1_29 = ((MR_Word) transform_hlds__equiv_type_hlds__conv0_Inst1_29);
#line 1273 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__succeeded = MR_TRUE;
#line 1273 "equiv_type_hlds.m"
                  }
#line 1275 "equiv_type_hlds.m"
                if (transform_hlds__equiv_type_hlds__succeeded)
#line 1274 "equiv_type_hlds.m"
                  {
#line 1274 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst1_29;
#line 1274 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22;
#line 1274 "equiv_type_hlds.m"
                  }
#line 1275 "equiv_type_hlds.m"
                else
#line 1276 "equiv_type_hlds.m"
                  {
#line 1276 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_14_33;

#line 1276 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst1_16;
#line 9904 "transform_hlds.equiv_type_hlds.c"
                    transform_hlds__equiv_type_hlds__TypeCtorInfo_14_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1277 "equiv_type_hlds.m"
                    {
#line 1277 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20 = mercury__map__det_insert_3_f_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_14_33, transform_hlds__equiv_type_hlds__TypeCtorInfo_14_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22, ((MR_Box) (*transform_hlds__equiv_type_hlds__Inst_11)), ((MR_Box) (*transform_hlds__equiv_type_hlds__Inst_11)));
                    }
#line 1276 "equiv_type_hlds.m"
                  }
#line 1275 "equiv_type_hlds.m"
              }
#line 826 "equiv_type_hlds.m"
              break;
#line 826 "equiv_type_hlds.m"
          }
#line 819 "equiv_type_hlds.m"
        }
#line 830 "equiv_type_hlds.m"
        break;
#line 830 "equiv_type_hlds.m"
    }
#line 810 "equiv_type_hlds.m"
  }
#line 806 "equiv_type_hlds.m"
}

#line 785 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_mode_8_p_0(
#line 785 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 785 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Mode0_10,
#line 785 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Mode_11,
#line 785 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 785 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_24,
#line 785 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25,
#line 785 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_26,
#line 785 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_27)
#line 785 "equiv_type_hlds.m"
{
#line 791 "equiv_type_hlds.m"
  {
#line 791 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 791 "equiv_type_hlds.m"
    if (((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Mode0_10)) == (MR_mktag((MR_Integer) 0))))
#line 791 "equiv_type_hlds.m"
      {
#line 791 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstA0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Mode0_10, (MR_Integer) 0)));
#line 791 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstB0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Mode0_10, (MR_Integer) 1)));
#line 791 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstA_17;
#line 791 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__ChangedA_18;
#line 791 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstB_19;
#line 791 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__ChangedB_20;
#line 791 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_30;
#line 791 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_31;

#line 792 "equiv_type_hlds.m"
        {
#line 792 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstA0_15, &transform_hlds__equiv_type_hlds__InstA_17, &transform_hlds__equiv_type_hlds__ChangedA_18, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_24, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_26, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_31);
        }
#line 793 "equiv_type_hlds.m"
        {
#line 793 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstB0_16, &transform_hlds__equiv_type_hlds__InstB_19, &transform_hlds__equiv_type_hlds__ChangedB_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_27);
        }
#line 794 "equiv_type_hlds.m"
        {
#line 794 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Changed_12 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_18, transform_hlds__equiv_type_hlds__ChangedB_20);
        }
#line 796 "equiv_type_hlds.m"
#line 796 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 796 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 796 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 796 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__Mode_11 = transform_hlds__equiv_type_hlds__Mode0_10;
#line 796 "equiv_type_hlds.m"
            break;
#line 796 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 795 "equiv_type_hlds.m"
            {
#line 795 "equiv_type_hlds.m"
              MR_Word base;
#line 795 "equiv_type_hlds.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 795 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Mode_11 = base;
#line 795 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_17));
#line 795 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_19));
#line 795 "equiv_type_hlds.m"
            }
#line 796 "equiv_type_hlds.m"
            break;
#line 796 "equiv_type_hlds.m"
        }
#line 791 "equiv_type_hlds.m"
      }
#line 791 "equiv_type_hlds.m"
    else
#line 799 "equiv_type_hlds.m"
      {
#line 799 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Mode0_10, (MR_Integer) 0)));
#line 799 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Insts0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Mode0_10, (MR_Integer) 1)));
#line 799 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Insts_23;

#line 800 "equiv_type_hlds.m"
        {
#line 800 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Insts0_22, &transform_hlds__equiv_type_hlds__Insts_23, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_26, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_27);
        }
#line 802 "equiv_type_hlds.m"
#line 802 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 802 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 802 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 802 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__Mode_11 = transform_hlds__equiv_type_hlds__Mode0_10;
#line 802 "equiv_type_hlds.m"
            break;
#line 802 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 801 "equiv_type_hlds.m"
            {
#line 801 "equiv_type_hlds.m"
              MR_Word base;
#line 801 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Mode_11 = base;
#line 801 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_21));
#line 801 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Insts_23));
#line 801 "equiv_type_hlds.m"
            }
#line 802 "equiv_type_hlds.m"
            break;
#line 802 "equiv_type_hlds.m"
        }
#line 799 "equiv_type_hlds.m"
      }
#line 791 "equiv_type_hlds.m"
  }
#line 785 "equiv_type_hlds.m"
}

#line 771 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(
#line 771 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 771 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 771 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 771 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 771 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
#line 771 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
#line 771 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
#line 771 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8)
#line 771 "equiv_type_hlds.m"
{
#line 775 "equiv_type_hlds.m"
  {
#line 775 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 775 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "equiv_type_hlds.m"
      {
#line 775 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 775 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
#line 775 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7;
#line 775 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5;
#line 775 "equiv_type_hlds.m"
      }
#line 775 "equiv_type_hlds.m"
    else
#line 777 "equiv_type_hlds.m"
      {
#line 777 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Mode0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 777 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Modes0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 777 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Mode_24;
#line 777 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed0_25;
#line 777 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Modes_26;
#line 777 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed1_27;
#line 777 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32;
#line 777 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33;

#line 778 "equiv_type_hlds.m"
        {
#line 778 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_mode_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Mode0_18, &transform_hlds__equiv_type_hlds__Mode_24, &transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33);
        }
#line 779 "equiv_type_hlds.m"
        {
#line 779 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Modes0_19, &transform_hlds__equiv_type_hlds__Modes_26, &transform_hlds__equiv_type_hlds__Changed1_27, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);
        }
#line 780 "equiv_type_hlds.m"
        {
#line 780 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__Changed1_27);
        }
#line 782 "equiv_type_hlds.m"
#line 782 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
#line 782 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 782 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 782 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 782 "equiv_type_hlds.m"
            break;
#line 782 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 781 "equiv_type_hlds.m"
            {
#line 781 "equiv_type_hlds.m"
              MR_Word base;
#line 781 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
#line 781 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Mode_24));
#line 781 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Modes_26));
#line 781 "equiv_type_hlds.m"
            }
#line 782 "equiv_type_hlds.m"
            break;
#line 782 "equiv_type_hlds.m"
        }
#line 777 "equiv_type_hlds.m"
      }
#line 775 "equiv_type_hlds.m"
  }
#line 771 "equiv_type_hlds.m"
}

#line 719 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_type_ctor_11_p_0(
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_12,
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded0_13,
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type0_14,
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_15,
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__ArgTypes_16,
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Kind_17,
#line 719 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Type_18,
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_35,
#line 719 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_36,
#line 719 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_37,
#line 719 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_38)
#line 719 "equiv_type_hlds.m"
{
#line 724 "equiv_type_hlds.m"
  {
#line 724 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 724 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__AlreadyExpanded_21;
#line 754 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Params0_24;
#line 754 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Body0_25;
#line 754 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Renaming_26;
#line 754 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39_39;
#line 731 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__EqvTypeBody_22;
#line 731 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__EqvVarSet_23;
#line 731 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv0_EqvTypeBody_22;

#line 725 "equiv_type_hlds.m"
    {
#line 725 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_15)), transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded0_13);
    }
#line 727 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 726 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__AlreadyExpanded_21 = (MR_Integer) 1;
#line 727 "equiv_type_hlds.m"
    else
#line 728 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__AlreadyExpanded_21 = (MR_Integer) 0;
#line 731 "equiv_type_hlds.m"
    {
#line 731 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, transform_hlds__equiv_type_hlds__TypeEqvMap_12, ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_15)), &transform_hlds__equiv_type_hlds__conv0_EqvTypeBody_22);
    }
#line 731 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 731 "equiv_type_hlds.m"
      {
#line 731 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__EqvTypeBody_22 = ((MR_Word) transform_hlds__equiv_type_hlds__conv0_EqvTypeBody_22);
#line 731 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__succeeded = MR_TRUE;
#line 731 "equiv_type_hlds.m"
      }
#line 731 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 731 "equiv_type_hlds.m"
      {
#line 732 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__EqvVarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__EqvTypeBody_22, (MR_Integer) 0)));
#line 732 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__Params0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__EqvTypeBody_22, (MR_Integer) 1)));
#line 732 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__Body0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__EqvTypeBody_22, (MR_Integer) 2)));
#line 742 "equiv_type_hlds.m"
        {
#line 742 "equiv_type_hlds.m"
          parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_37, transform_hlds__equiv_type_hlds__EqvVarSet_23, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39_39, &transform_hlds__equiv_type_hlds__Renaming_26);
        }
#line 744 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__AlreadyExpanded_21 == (MR_Integer) 0);
#line 731 "equiv_type_hlds.m"
      }
#line 754 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 746 "equiv_type_hlds.m"
      {
#line 746 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_45_45 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[3];
#line 746 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Params_27;
#line 746 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Body1_28;
#line 746 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Subst_29;
#line 746 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Body_30;
#line 746 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_31;
#line 751 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds___BodyChanged_32;

#line 746 "equiv_type_hlds.m"
        {
#line 746 "equiv_type_hlds.m"
          mercury__map__apply_to_list_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_45_45, transform_hlds__equiv_type_hlds__TypeInfo_45_45, transform_hlds__equiv_type_hlds__Params0_24, transform_hlds__equiv_type_hlds__Renaming_26, &transform_hlds__equiv_type_hlds__Params_27);
        }
#line 747 "equiv_type_hlds.m"
        {
#line 747 "equiv_type_hlds.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(transform_hlds__equiv_type_hlds__Renaming_26, transform_hlds__equiv_type_hlds__Body0_25, &transform_hlds__equiv_type_hlds__Body1_28);
        }
#line 748 "equiv_type_hlds.m"
        {
#line 748 "equiv_type_hlds.m"
          mercury__map__from_corresponding_lists_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_45_45, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__equiv_type_hlds__Params_27, transform_hlds__equiv_type_hlds__ArgTypes_16, &transform_hlds__equiv_type_hlds__Subst_29);
        }
#line 749 "equiv_type_hlds.m"
        {
#line 749 "equiv_type_hlds.m"
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(transform_hlds__equiv_type_hlds__Subst_29, transform_hlds__equiv_type_hlds__Body1_28, &transform_hlds__equiv_type_hlds__Body_30);
        }
#line 750 "equiv_type_hlds.m"
        {
#line 750 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_31, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_15));
#line 750 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_31, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded0_13));
#line 750 "equiv_type_hlds.m"
        }
#line 751 "equiv_type_hlds.m"
        {
#line 751 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_12, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_31, transform_hlds__equiv_type_hlds__Body_30, transform_hlds__equiv_type_hlds__Type_18, &transform_hlds__equiv_type_hlds___BodyChanged_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39_39, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_38);
        }
#line 753 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_36 = (MR_Integer) 1;
#line 746 "equiv_type_hlds.m"
      }
#line 754 "equiv_type_hlds.m"
    else
#line 759 "equiv_type_hlds.m"
      {
#line 759 "equiv_type_hlds.m"
#line 759 "equiv_type_hlds.m"
        switch (transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_35) {
#line 759 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 759 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 761 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__Type_18 = transform_hlds__equiv_type_hlds__Type0_14;
#line 759 "equiv_type_hlds.m"
            break;
#line 759 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 756 "equiv_type_hlds.m"
            {
#line 756 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__SymName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_15, (MR_Integer) 0)));
#line 757 "equiv_type_hlds.m"
              MR_Integer transform_hlds__equiv_type_hlds___Arity_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_15, (MR_Integer) 1)));

#line 758 "equiv_type_hlds.m"
              {
#line 758 "equiv_type_hlds.m"
                MR_Word base;
#line 758 "equiv_type_hlds.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 758 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__Type_18 = base;
#line 758 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__SymName_33));
#line 758 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ArgTypes_16));
#line 758 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Kind_17));
#line 758 "equiv_type_hlds.m"
              }
#line 756 "equiv_type_hlds.m"
            }
#line 759 "equiv_type_hlds.m"
            break;
#line 759 "equiv_type_hlds.m"
        }
#line 759 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_38 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_37;
#line 759 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_36 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_35;
#line 759 "equiv_type_hlds.m"
      }
#line 724 "equiv_type_hlds.m"
  }
#line 719 "equiv_type_hlds.m"
}

#line 706 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(
#line 706 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 706 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 706 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 706 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 706 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_5,
#line 706 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_6,
#line 706 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_7,
#line 706 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_8)
#line 706 "equiv_type_hlds.m"
{
#line 710 "equiv_type_hlds.m"
  {
#line 710 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 710 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 710 "equiv_type_hlds.m"
      {
#line 710 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 710 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_7;
#line 710 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_5;
#line 710 "equiv_type_hlds.m"
      }
#line 710 "equiv_type_hlds.m"
    else
#line 712 "equiv_type_hlds.m"
      {
#line 712 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Type0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 0)));
#line 712 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Types0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 1)));
#line 712 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Type_21;
#line 712 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Types_22;
#line 712 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeChanged_25;
#line 712 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_30_30;
#line 712 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_31_31;

#line 713 "equiv_type_hlds.m"
        {
#line 713 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__HeadVar__2_2, transform_hlds__equiv_type_hlds__Type0_19, &transform_hlds__equiv_type_hlds__Type_21, &transform_hlds__equiv_type_hlds__TypeChanged_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_30_30);
        }
#line 715 "equiv_type_hlds.m"
        {
#line 715 "equiv_type_hlds.m"
          mercury__bool__or_3_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_5, transform_hlds__equiv_type_hlds__TypeChanged_25, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_31_31);
        }
#line 716 "equiv_type_hlds.m"
        {
#line 716 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__HeadVar__2_2, transform_hlds__equiv_type_hlds__Types0_20, &transform_hlds__equiv_type_hlds__Types_22, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_31_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_6, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_30_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_8);
        }
#line 711 "equiv_type_hlds.m"
        {
#line 711 "equiv_type_hlds.m"
          MR_Word base;
#line 711 "equiv_type_hlds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = base;
#line 711 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_21));
#line 711 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Types_22));
#line 711 "equiv_type_hlds.m"
        }
#line 712 "equiv_type_hlds.m"
      }
#line 710 "equiv_type_hlds.m"
  }
#line 706 "equiv_type_hlds.m"
}

#line 628 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(
#line 628 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_8,
#line 628 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9,
#line 628 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type0_10,
#line 628 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Type_11,
#line 628 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 628 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38,
#line 628 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39)
#line 628 "equiv_type_hlds.m"
{
#line 637 "equiv_type_hlds.m"
  {
#line 637 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 637 "equiv_type_hlds.m"
#line 637 "equiv_type_hlds.m"
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Type0_10)) {
#line 637 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 637 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 637 "equiv_type_hlds.m"
      case (MR_Integer) 2:
#line 637 "equiv_type_hlds.m"
        {
#line 638 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
#line 639 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 637 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38;
#line 637 "equiv_type_hlds.m"
        }
#line 637 "equiv_type_hlds.m"
        break;
#line 637 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 641 "equiv_type_hlds.m"
        {
#line 641 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 0)));
#line 641 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TypeArgs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 1)));
#line 641 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Kind_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 2)));
#line 641 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TypeArgs_20;
#line 641 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__ArgsChanged_21;
#line 641 "equiv_type_hlds.m"
          MR_Integer transform_hlds__equiv_type_hlds__Arity_22;
#line 641 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TypeCtor_23;
#line 641 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_48_48;

#line 642 "equiv_type_hlds.m"
          {
#line 642 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__TypeArgs0_18, &transform_hlds__equiv_type_hlds__TypeArgs_20, (MR_Integer) 0, &transform_hlds__equiv_type_hlds__ArgsChanged_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_48_48);
          }
#line 644 "equiv_type_hlds.m"
          {
#line 644 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__Arity_22 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__equiv_type_hlds__TypeArgs_20);
          }
#line 645 "equiv_type_hlds.m"
          {
#line 645 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 645 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_23, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__SymName_17));
#line 645 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_23, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Arity_22));
#line 645 "equiv_type_hlds.m"
          }
#line 646 "equiv_type_hlds.m"
          {
#line 646 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__hlds_replace_type_ctor_11_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__Type0_10, transform_hlds__equiv_type_hlds__TypeCtor_23, transform_hlds__equiv_type_hlds__TypeArgs_20, transform_hlds__equiv_type_hlds__Kind_19, transform_hlds__equiv_type_hlds__Type_11, transform_hlds__equiv_type_hlds__ArgsChanged_21, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_48_48, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39);
#line 646 "equiv_type_hlds.m"
            return;
          }
#line 641 "equiv_type_hlds.m"
        }
#line 637 "equiv_type_hlds.m"
        break;
#line 637 "equiv_type_hlds.m"
      case (MR_Integer) 3:
#line 637 "equiv_type_hlds.m"
#line 637 "equiv_type_hlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 0)))) {
#line 637 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 637 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 672 "equiv_type_hlds.m"
            {
#line 672 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Args0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 1)));
#line 672 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Args_34;
#line 672 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Kind_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 2)));

#line 673 "equiv_type_hlds.m"
              {
#line 673 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__Args0_33, &transform_hlds__equiv_type_hlds__Args_34, (MR_Integer) 0, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39);
              }
#line 678 "equiv_type_hlds.m"
#line 678 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 678 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 678 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 680 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
#line 678 "equiv_type_hlds.m"
                  break;
#line 678 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 677 "equiv_type_hlds.m"
                  {
#line 677 "equiv_type_hlds.m"
                    MR_Word base;
#line 677 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 677 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Type_11 = base;
#line 677 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 677 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Args_34));
#line 677 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Kind_50));
#line 677 "equiv_type_hlds.m"
                  }
#line 678 "equiv_type_hlds.m"
                  break;
#line 678 "equiv_type_hlds.m"
              }
#line 672 "equiv_type_hlds.m"
            }
#line 637 "equiv_type_hlds.m"
            break;
#line 637 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 650 "equiv_type_hlds.m"
            {
#line 650 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ArgTypes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 1)));
#line 650 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__MaybeRetType0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 2)));
#line 650 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Purity_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 3)));
#line 650 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__RetChanged_30;
#line 650 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__MaybeRetType_31;
#line 650 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ArgTypes_32;
#line 650 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_45_45;

#line 656 "equiv_type_hlds.m"
              if ((transform_hlds__equiv_type_hlds__MaybeRetType0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 657 "equiv_type_hlds.m"
                {
#line 658 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__MaybeRetType_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 659 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__RetChanged_30 = (MR_Integer) 0;
#line 657 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_45_45 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38;
#line 657 "equiv_type_hlds.m"
                }
#line 656 "equiv_type_hlds.m"
              else
#line 652 "equiv_type_hlds.m"
                {
#line 652 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__RetType0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeRetType0_25, (MR_Integer) 0)));
#line 652 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__RetType_29;

#line 653 "equiv_type_hlds.m"
                  {
#line 653 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__RetType0_28, &transform_hlds__equiv_type_hlds__RetType_29, &transform_hlds__equiv_type_hlds__RetChanged_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_45_45);
                  }
#line 655 "equiv_type_hlds.m"
                  {
#line 655 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__MaybeRetType_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 655 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeRetType_31, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__RetType_29));
#line 655 "equiv_type_hlds.m"
                  }
#line 652 "equiv_type_hlds.m"
                }
#line 661 "equiv_type_hlds.m"
              {
#line 661 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__ArgTypes0_24, &transform_hlds__equiv_type_hlds__ArgTypes_32, transform_hlds__equiv_type_hlds__RetChanged_30, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_45_45, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39);
              }
#line 667 "equiv_type_hlds.m"
#line 667 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 667 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 667 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 669 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
#line 667 "equiv_type_hlds.m"
                  break;
#line 667 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 665 "equiv_type_hlds.m"
                  {
#line 665 "equiv_type_hlds.m"
                    MR_Word base;
#line 665 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 665 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Type_11 = base;
#line 665 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 665 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ArgTypes_32));
#line 665 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeRetType_31));
#line 665 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Purity_26));
#line 665 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 665 "equiv_type_hlds.m"
                  }
#line 667 "equiv_type_hlds.m"
                  break;
#line 667 "equiv_type_hlds.m"
              }
#line 650 "equiv_type_hlds.m"
            }
#line 637 "equiv_type_hlds.m"
            break;
#line 637 "equiv_type_hlds.m"
          case (MR_Integer) 2:
#line 683 "equiv_type_hlds.m"
            {
#line 683 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 1)));
#line 683 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Kind_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 3)));
#line 683 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Args0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 2)));
#line 683 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Args_53;

#line 684 "equiv_type_hlds.m"
              {
#line 684 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__Args0_52, &transform_hlds__equiv_type_hlds__Args_53, (MR_Integer) 0, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39);
              }
#line 689 "equiv_type_hlds.m"
#line 689 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 689 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 689 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 691 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
#line 689 "equiv_type_hlds.m"
                  break;
#line 689 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 688 "equiv_type_hlds.m"
                  {
#line 688 "equiv_type_hlds.m"
                    MR_Word base;
#line 688 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 688 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Type_11 = base;
#line 688 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 688 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_35));
#line 688 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Args_53));
#line 688 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Kind_51));
#line 688 "equiv_type_hlds.m"
                  }
#line 689 "equiv_type_hlds.m"
                  break;
#line 689 "equiv_type_hlds.m"
              }
#line 683 "equiv_type_hlds.m"
            }
#line 637 "equiv_type_hlds.m"
            break;
#line 637 "equiv_type_hlds.m"
          case (MR_Integer) 3:
#line 694 "equiv_type_hlds.m"
            {
#line 694 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__RawType0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 1)));
#line 694 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__RawType_37;
#line 694 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Kind_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 2)));

#line 695 "equiv_type_hlds.m"
              {
#line 695 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__RawType0_36, &transform_hlds__equiv_type_hlds__RawType_37, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39);
              }
#line 700 "equiv_type_hlds.m"
#line 700 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 700 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 700 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 702 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
#line 700 "equiv_type_hlds.m"
                  break;
#line 700 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 699 "equiv_type_hlds.m"
                  {
#line 699 "equiv_type_hlds.m"
                    MR_Word base;
#line 699 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 699 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Type_11 = base;
#line 699 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 699 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__RawType_37));
#line 699 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Kind_54));
#line 699 "equiv_type_hlds.m"
                  }
#line 700 "equiv_type_hlds.m"
                  break;
#line 700 "equiv_type_hlds.m"
              }
#line 694 "equiv_type_hlds.m"
            }
#line 637 "equiv_type_hlds.m"
            break;
#line 637 "equiv_type_hlds.m"
        }
#line 637 "equiv_type_hlds.m"
        break;
#line 637 "equiv_type_hlds.m"
    }
#line 637 "equiv_type_hlds.m"
  }
#line 628 "equiv_type_hlds.m"
}

#line 622 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(
#line 622 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
#line 622 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type0_7,
#line 622 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Type_8,
#line 622 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_11,
#line 622 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_12)
#line 622 "equiv_type_hlds.m"
{
#line 625 "equiv_type_hlds.m"
  {
#line 625 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 626 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds___Changed_10;

#line 626 "equiv_type_hlds.m"
    {
#line 626 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__equiv_type_hlds__Type0_7, transform_hlds__equiv_type_hlds__Type_8, &transform_hlds__equiv_type_hlds___Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_11, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_12);
    }
#line 625 "equiv_type_hlds.m"
  }
#line 622 "equiv_type_hlds.m"
}

#line 590 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_3(
#line 590 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 590 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 590 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2)
#line 590 "equiv_type_hlds.m"
{
#line 590 "equiv_type_hlds.m"
  {
#line 590 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 590 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv7_HeadVar__3_100;

#line 590 "equiv_type_hlds.m"
    {
#line 590 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__590__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), &transform_hlds__equiv_type_hlds__conv7_HeadVar__3_100);
    }
#line 590 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_2 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv7_HeadVar__3_100));
#line 590 "equiv_type_hlds.m"
  }
#line 590 "equiv_type_hlds.m"
}

#line 584 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_2(
#line 584 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 584 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 584 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 584 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 584 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 584 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5)
#line 584 "equiv_type_hlds.m"
{
#line 584 "equiv_type_hlds.m"
  {
#line 584 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 584 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv4_HeadVar__4_67;
#line 584 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv3_HeadVar__6_69;

#line 584 "equiv_type_hlds.m"
    {
#line 584 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__584__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv4_HeadVar__4_67, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_4), &transform_hlds__equiv_type_hlds__conv3_HeadVar__6_69);
    }
#line 584 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv4_HeadVar__4_67));
#line 584 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_5 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv3_HeadVar__6_69));
#line 584 "equiv_type_hlds.m"
  }
#line 584 "equiv_type_hlds.m"
}

#line 578 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_1(
#line 578 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 578 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 578 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 578 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 578 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4)
#line 578 "equiv_type_hlds.m"
{
#line 578 "equiv_type_hlds.m"
  {
#line 578 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 578 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv1_Type_8;
#line 578 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_VarSet_12;

#line 578 "equiv_type_hlds.m"
    {
#line 578 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), &transform_hlds__equiv_type_hlds__conv1_Type_8, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3), &transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_VarSet_12);
    }
#line 578 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_2 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv1_Type_8));
#line 578 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_4 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_VarSet_12));
#line 578 "equiv_type_hlds.m"
  }
#line 578 "equiv_type_hlds.m"
}

#line 555 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0(
#line 555 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 555 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_0_39,
#line 555 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_40,
#line 555 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_41,
#line 555 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_42,
#line 555 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_0_43,
#line 555 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_44,
#line 555 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_45,
#line 555 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46)
#line 555 "equiv_type_hlds.m"
{
#line 561 "equiv_type_hlds.m"
  {
#line 561 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeInfo_95_95;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_97_97;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ArgModes0_16;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ArgModes_17;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MaybeDeclModes0_19;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__VarTypes0_23;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__VarTypes_24;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__RttiVarMaps0_25;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__AllTypes_26;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeMap_30;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__RttiVarMaps_31;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Goal0_32;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ReplaceInfo0_33;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Goal_34;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed_35;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ReplaceInfo_36;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Recompute_38;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_47_47;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_48_48;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_50_50;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_51_51;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_54_54;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_55_55;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_57_57;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_58_58;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_59_59;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_60_60;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_72_72;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_73_73;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_75_75;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_76_76;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_77_77;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_78_78;
#line 561 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_79_79;
#line 564 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_18_18;
#line 578 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_TVarSet_56_56;
#line 584 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv6_TypeMap_30;
#line 584 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_TVarSet_60_60;
#line 599 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds___XXX_37;

#line 561 "equiv_type_hlds.m"
    {
#line 561 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_0_43, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_47_47);
    }
#line 563 "equiv_type_hlds.m"
    {
#line 563 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_0_39, &transform_hlds__equiv_type_hlds__ArgModes0_16);
    }
#line 564 "equiv_type_hlds.m"
    {
#line 564 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__ArgModes0_16, &transform_hlds__equiv_type_hlds__ArgModes_17, &transform_hlds__equiv_type_hlds__V_18_18, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_47_47, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_48_48, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_45, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49);
    }
#line 565 "equiv_type_hlds.m"
    {
#line 565 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__equiv_type_hlds__ArgModes_17, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_0_39, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_50_50);
    }
#line 567 "equiv_type_hlds.m"
    {
#line 567 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__equiv_type_hlds__MaybeDeclModes0_19);
    }
#line 573 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__MaybeDeclModes0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "equiv_type_hlds.m"
      {
#line 574 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_54_54 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_50_50;
#line 574 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49;
#line 574 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_51_51 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_48_48;
#line 574 "equiv_type_hlds.m"
      }
#line 573 "equiv_type_hlds.m"
    else
#line 569 "equiv_type_hlds.m"
      {
#line 569 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__DeclModes0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeDeclModes0_19, (MR_Integer) 0)));
#line 569 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__DeclModes_21;
#line 569 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_53_53;
#line 570 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_22_22;

#line 570 "equiv_type_hlds.m"
        {
#line 570 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__DeclModes0_20, &transform_hlds__equiv_type_hlds__DeclModes_21, &transform_hlds__equiv_type_hlds__V_22_22, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_48_48, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_51_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46);
        }
#line 572 "equiv_type_hlds.m"
        {
#line 572 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 572 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__V_53_53, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__DeclModes_21));
#line 572 "equiv_type_hlds.m"
        }
#line 572 "equiv_type_hlds.m"
        {
#line 572 "equiv_type_hlds.m"
          hlds__hlds_pred__proc_info_set_maybe_declared_argmodes_3_p_0(transform_hlds__equiv_type_hlds__V_53_53, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_54_54);
        }
#line 569 "equiv_type_hlds.m"
      }
#line 577 "equiv_type_hlds.m"
    {
#line 577 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__equiv_type_hlds__VarTypes0_23);
    }
#line 578 "equiv_type_hlds.m"
    {
#line 578 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 578 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_55_55, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_7[1]));
#line 578 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_55_55, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_1));
#line 578 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 578 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_55_55, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_10));
#line 578 "equiv_type_hlds.m"
    }
#line 11214 "transform_hlds.equiv_type_hlds.c"
    transform_hlds__equiv_type_hlds__TypeInfo_95_95 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[2];
#line 578 "equiv_type_hlds.m"
    {
#line 578 "equiv_type_hlds.m"
      hlds__vartypes__transform_foldl_var_types_5_p_0(transform_hlds__equiv_type_hlds__TypeInfo_95_95, transform_hlds__equiv_type_hlds__V_55_55, transform_hlds__equiv_type_hlds__VarTypes0_23, &transform_hlds__equiv_type_hlds__VarTypes_24, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_51_51)), &transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_TVarSet_56_56);
    }
#line 578 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56 = ((MR_Word) transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_TVarSet_56_56);
#line 580 "equiv_type_hlds.m"
    {
#line 580 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__equiv_type_hlds__VarTypes_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_57_57);
    }
#line 582 "equiv_type_hlds.m"
    {
#line 582 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__equiv_type_hlds__RttiVarMaps0_25);
    }
#line 583 "equiv_type_hlds.m"
    {
#line 583 "equiv_type_hlds.m"
      hlds__hlds_rtti__rtti_varmaps_types_2_p_0(transform_hlds__equiv_type_hlds__RttiVarMaps0_25, &transform_hlds__equiv_type_hlds__AllTypes_26);
    }
#line 584 "equiv_type_hlds.m"
    {
#line 584 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 584 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_58_58, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[2]));
#line 584 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_58_58, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_2));
#line 584 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 584 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_58_58, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_10));
#line 584 "equiv_type_hlds.m"
    }
#line 11252 "transform_hlds.equiv_type_hlds.c"
    transform_hlds__equiv_type_hlds__TypeCtorInfo_97_97 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 589 "equiv_type_hlds.m"
    {
#line 589 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_59_59 = mercury__map__init_0_f_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_97_97, transform_hlds__equiv_type_hlds__TypeCtorInfo_97_97);
    }
#line 584 "equiv_type_hlds.m"
    {
#line 584 "equiv_type_hlds.m"
      mercury__list__foldl2_6_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_97_97, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[4], transform_hlds__equiv_type_hlds__TypeInfo_95_95, transform_hlds__equiv_type_hlds__V_58_58, transform_hlds__equiv_type_hlds__AllTypes_26, ((MR_Box) (transform_hlds__equiv_type_hlds__V_59_59)), &transform_hlds__equiv_type_hlds__conv6_TypeMap_30, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56)), &transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_TVarSet_60_60);
    }
#line 584 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__TypeMap_30 = ((MR_Word) transform_hlds__equiv_type_hlds__conv6_TypeMap_30);
#line 584 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_60_60 = ((MR_Word) transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_TVarSet_60_60);
#line 590 "equiv_type_hlds.m"
    {
#line 590 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 590 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_72_72, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[3]));
#line 590 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_72_72, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_3));
#line 590 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 590 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_72_72, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeMap_30));
#line 590 "equiv_type_hlds.m"
    }
#line 590 "equiv_type_hlds.m"
    {
#line 590 "equiv_type_hlds.m"
      hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0(transform_hlds__equiv_type_hlds__V_72_72, transform_hlds__equiv_type_hlds__RttiVarMaps0_25, &transform_hlds__equiv_type_hlds__RttiVarMaps_31);
    }
#line 592 "equiv_type_hlds.m"
    {
#line 592 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__equiv_type_hlds__RttiVarMaps_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_73_73);
    }
#line 594 "equiv_type_hlds.m"
    {
#line 594 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_73_73, &transform_hlds__equiv_type_hlds__Goal0_32);
    }
#line 595 "equiv_type_hlds.m"
    {
#line 595 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__ReplaceInfo0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 595 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_41));
#line 595 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_0_43));
#line 595 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_73_73));
#line 595 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_60_60));
#line 595 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 4) = ((MR_Box) (*transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46));
#line 595 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 5) = ((MR_Box) ((MR_Integer) 0));
#line 595 "equiv_type_hlds.m"
    }
#line 597 "equiv_type_hlds.m"
    {
#line 597 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__Goal0_32, &transform_hlds__equiv_type_hlds__Goal_34, &transform_hlds__equiv_type_hlds__Changed_35, transform_hlds__equiv_type_hlds__ReplaceInfo0_33, &transform_hlds__equiv_type_hlds__ReplaceInfo_36);
    }
#line 599 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 0)));
#line 599 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 1)));
#line 599 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 2)));
#line 599 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 3)));
#line 599 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds___XXX_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 4)));
#line 599 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__Recompute_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 5)));
#line 604 "equiv_type_hlds.m"
#line 604 "equiv_type_hlds.m"
    switch (transform_hlds__equiv_type_hlds__Changed_35) {
#line 604 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 604 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 605 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_79_79 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_77_77;
#line 604 "equiv_type_hlds.m"
        break;
#line 604 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 603 "equiv_type_hlds.m"
        {
#line 603 "equiv_type_hlds.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__equiv_type_hlds__Goal_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_77_77, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_79_79);
        }
#line 604 "equiv_type_hlds.m"
        break;
#line 604 "equiv_type_hlds.m"
    }
#line 612 "equiv_type_hlds.m"
#line 612 "equiv_type_hlds.m"
    switch (transform_hlds__equiv_type_hlds__Recompute_38) {
#line 612 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 612 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 613 "equiv_type_hlds.m"
        {
#line 613 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_40 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_79_79;
#line 613 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_42 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_75_75;
#line 613 "equiv_type_hlds.m"
        }
#line 612 "equiv_type_hlds.m"
        break;
#line 612 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 608 "equiv_type_hlds.m"
        {
#line 608 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_81_81;

#line 609 "equiv_type_hlds.m"
          {
#line 609 "equiv_type_hlds.m"
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_79_79, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_81_81);
          }
#line 610 "equiv_type_hlds.m"
          {
#line 610 "equiv_type_hlds.m"
            check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_81_81, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_40, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_75_75, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_42);
          }
#line 608 "equiv_type_hlds.m"
        }
#line 612 "equiv_type_hlds.m"
        break;
#line 612 "equiv_type_hlds.m"
    }
#line 615 "equiv_type_hlds.m"
    {
#line 615 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_78_78, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_76_76, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_44);
#line 615 "equiv_type_hlds.m"
      return;
    }
#line 561 "equiv_type_hlds.m"
  }
#line 555 "equiv_type_hlds.m"
}

#line 549 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0_1(
#line 549 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 549 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 549 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 549 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 549 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 549 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_5,
#line 549 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_6,
#line 549 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_7,
#line 549 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_8)
#line 549 "equiv_type_hlds.m"
{
#line 549 "equiv_type_hlds.m"
  {
#line 549 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 549 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv3_STATE_VARIABLE_ProcInfo_40;
#line 549 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_ModuleInfo_42;
#line 549 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_PredInfo_44;
#line 549 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Cache_46;

#line 549 "equiv_type_hlds.m"
    {
#line 549 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), &transform_hlds__equiv_type_hlds__conv3_STATE_VARIABLE_ProcInfo_40, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3), &transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_ModuleInfo_42, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_5), &transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_PredInfo_44, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_7), &transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Cache_46);
    }
#line 549 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_2 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv3_STATE_VARIABLE_ProcInfo_40));
#line 549 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_4 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_ModuleInfo_42));
#line 549 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_6 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_PredInfo_44));
#line 549 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_8 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Cache_46));
#line 549 "equiv_type_hlds.m"
  }
#line 549 "equiv_type_hlds.m"
}

#line 511 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0(
#line 511 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 511 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__PredId_8,
#line 511 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29,
#line 511 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30,
#line 511 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_31,
#line 511 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_32)
#line 511 "equiv_type_hlds.m"
{
#line 517 "equiv_type_hlds.m"
  {
#line 517 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_61_61;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ModuleName_13;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MaybeRecompInfo0_14;
#line 517 "equiv_type_hlds.m"
    MR_String transform_hlds__equiv_type_hlds__PredName_15;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ArgTVarSet0_16;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ExistQVars_17;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ArgTypes0_18;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ArgTypes_19;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ArgTVarSet1_21;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ClassContext0_22;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ClassContext_23;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ArgTVarSet_24;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ItemId_25;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MaybeRecompInfo_26;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ProcMap0_27;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ProcMap_28;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_34_34;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_35_35;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_36_36;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_37_37;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_38_38;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_40_40;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_41_41;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_42_42;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_43_43;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_44_44;
#line 517 "equiv_type_hlds.m"
    MR_Integer transform_hlds__equiv_type_hlds__V_45_45;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_46_46;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_47_47;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_48_48;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_49_49;
#line 517 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_51_51;
#line 529 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_20_20;
#line 549 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_ModuleInfo_48_48;
#line 549 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_PredInfo_49_49;
#line 549 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_Cache_32;

#line 517 "equiv_type_hlds.m"
    {
#line 517 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__equiv_type_hlds__ModuleName_13);
    }
#line 518 "equiv_type_hlds.m"
    {
#line 518 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__equiv_type_hlds__PredId_8, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33);
    }
#line 519 "equiv_type_hlds.m"
    {
#line 519 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__equiv_type_hlds__MaybeRecompInfo0_14);
    }
#line 522 "equiv_type_hlds.m"
    {
#line 522 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33);
    }
#line 524 "equiv_type_hlds.m"
    {
#line 524 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__V_34_34, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__ModuleName_13));
#line 524 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__V_34_34, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__PredName_15));
#line 524 "equiv_type_hlds.m"
    }
#line 523 "equiv_type_hlds.m"
    {
#line 523 "equiv_type_hlds.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(transform_hlds__equiv_type_hlds__ModuleName_13, transform_hlds__equiv_type_hlds__V_34_34, transform_hlds__equiv_type_hlds__MaybeRecompInfo0_14, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_35_35);
    }
#line 527 "equiv_type_hlds.m"
    {
#line 527 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33, &transform_hlds__equiv_type_hlds__ArgTVarSet0_16, &transform_hlds__equiv_type_hlds__ExistQVars_17, &transform_hlds__equiv_type_hlds__ArgTypes0_18);
    }
#line 529 "equiv_type_hlds.m"
    {
#line 529 "equiv_type_hlds.m"
      parse_tree__equiv_type__replace_in_type_list_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__ArgTypes0_18, &transform_hlds__equiv_type_hlds__ArgTypes_19, &transform_hlds__equiv_type_hlds__V_20_20, transform_hlds__equiv_type_hlds__ArgTVarSet0_16, &transform_hlds__equiv_type_hlds__ArgTVarSet1_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_35_35, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_36_36);
    }
#line 534 "equiv_type_hlds.m"
    {
#line 534 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33, &transform_hlds__equiv_type_hlds__ClassContext0_22);
    }
#line 535 "equiv_type_hlds.m"
    {
#line 535 "equiv_type_hlds.m"
      parse_tree__equiv_type__replace_in_prog_constraints_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__ClassContext0_22, &transform_hlds__equiv_type_hlds__ClassContext_23, transform_hlds__equiv_type_hlds__ArgTVarSet1_21, &transform_hlds__equiv_type_hlds__ArgTVarSet_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_36_36, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_37_37);
    }
#line 537 "equiv_type_hlds.m"
    {
#line 537 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_set_class_context_3_p_0(transform_hlds__equiv_type_hlds__ClassContext_23, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_38_38);
    }
#line 538 "equiv_type_hlds.m"
    {
#line 538 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__equiv_type_hlds__ArgTVarSet_24, transform_hlds__equiv_type_hlds__ExistQVars_17, transform_hlds__equiv_type_hlds__ArgTypes_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_38_38, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39);
    }
#line 541 "equiv_type_hlds.m"
    {
#line 541 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_41_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39);
    }
#line 540 "equiv_type_hlds.m"
    {
#line 540 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_40_40 = recompilation__pred_or_func_to_item_type_1_f_0(transform_hlds__equiv_type_hlds__V_41_41);
    }
#line 542 "equiv_type_hlds.m"
    {
#line 542 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_44_44 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39);
    }
#line 542 "equiv_type_hlds.m"
    {
#line 542 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__V_43_43, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_44_44));
#line 542 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__V_43_43, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__PredName_15));
#line 542 "equiv_type_hlds.m"
    }
#line 543 "equiv_type_hlds.m"
    {
#line 543 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_45_45 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39);
    }
#line 542 "equiv_type_hlds.m"
    {
#line 542 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 542 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_42_42, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_43_43));
#line 542 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_42_42, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_45_45));
#line 542 "equiv_type_hlds.m"
    }
#line 540 "equiv_type_hlds.m"
    {
#line 540 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__ItemId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 540 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ItemId_25, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_40_40));
#line 540 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ItemId_25, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_42_42));
#line 540 "equiv_type_hlds.m"
    }
#line 544 "equiv_type_hlds.m"
    {
#line 544 "equiv_type_hlds.m"
      recompilation__finish_recording_expanded_items_4_p_0(transform_hlds__equiv_type_hlds__ItemId_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_37_37, transform_hlds__equiv_type_hlds__MaybeRecompInfo0_14, &transform_hlds__equiv_type_hlds__MaybeRecompInfo_26);
    }
#line 546 "equiv_type_hlds.m"
    {
#line 546 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(transform_hlds__equiv_type_hlds__MaybeRecompInfo_26, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_46_46);
    }
#line 548 "equiv_type_hlds.m"
    {
#line 548 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39, &transform_hlds__equiv_type_hlds__ProcMap0_27);
    }
#line 549 "equiv_type_hlds.m"
    {
#line 549 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 549 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_47_47, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_8[0]));
#line 549 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0_1));
#line 549 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 549 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_47_47, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_7));
#line 549 "equiv_type_hlds.m"
    }
#line 11702 "transform_hlds.equiv_type_hlds.c"
    transform_hlds__equiv_type_hlds__TypeCtorInfo_61_61 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 549 "equiv_type_hlds.m"
    {
#line 549 "equiv_type_hlds.m"
      mercury__map__map_values_foldl3_9_p_3(transform_hlds__equiv_type_hlds__TypeCtorInfo_61_61, transform_hlds__equiv_type_hlds__TypeCtorInfo_61_61, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__equiv_type_hlds__V_47_47, transform_hlds__equiv_type_hlds__ProcMap0_27, &transform_hlds__equiv_type_hlds__ProcMap_28, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_46_46)), &transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_ModuleInfo_48_48, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39)), &transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_PredInfo_49_49, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_31)), &transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_Cache_32);
    }
#line 549 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_48_48 = ((MR_Word) transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_ModuleInfo_48_48);
#line 549 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_49_49 = ((MR_Word) transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_PredInfo_49_49);
#line 549 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_32 = ((MR_Word) transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_Cache_32);
#line 551 "equiv_type_hlds.m"
    {
#line 551 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__equiv_type_hlds__ProcMap_28, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_49_49, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_51_51);
    }
#line 552 "equiv_type_hlds.m"
    {
#line 552 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__equiv_type_hlds__PredId_8, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_51_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_48_48, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30);
#line 552 "equiv_type_hlds.m"
      return;
    }
#line 517 "equiv_type_hlds.m"
  }
#line 511 "equiv_type_hlds.m"
}

#line 484 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_constructor_arg_5_p_0(
#line 484 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
#line 484 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__CtorArg0_7,
#line 484 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__CtorArg_8,
#line 484 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_20,
#line 484 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_21)
#line 484 "equiv_type_hlds.m"
{
#line 488 "equiv_type_hlds.m"
  {
#line 488 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 488 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MaybeFieldName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__CtorArg0_7, (MR_Integer) 0)));
#line 488 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Type0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__CtorArg0_7, (MR_Integer) 1)));
#line 488 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Width_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__CtorArg0_7, (MR_Integer) 2)));
#line 488 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__CtorArg0_7, (MR_Integer) 3)));
#line 488 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Type_14;
#line 488 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed_15;
#line 490 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_16_16;

#line 490 "equiv_type_hlds.m"
    {
#line 490 "equiv_type_hlds.m"
      parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__Type0_11, &transform_hlds__equiv_type_hlds__Type_14, &transform_hlds__equiv_type_hlds__Changed_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__V_16_16);
    }
#line 504 "equiv_type_hlds.m"
#line 504 "equiv_type_hlds.m"
    switch (transform_hlds__equiv_type_hlds__Changed_15) {
#line 504 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 504 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 506 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__CtorArg_8 = transform_hlds__equiv_type_hlds__CtorArg0_7;
#line 504 "equiv_type_hlds.m"
        break;
#line 504 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 498 "equiv_type_hlds.m"
#line 498 "equiv_type_hlds.m"
        switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Width_12)) {
#line 498 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 498 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 497 "equiv_type_hlds.m"
            {
#line 497 "equiv_type_hlds.m"
              MR_Word base;
#line 497 "equiv_type_hlds.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 497 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__CtorArg_8 = base;
#line 497 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeFieldName_10));
#line 497 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_14));
#line 497 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Width_12));
#line 497 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Context_13));
#line 497 "equiv_type_hlds.m"
            }
#line 498 "equiv_type_hlds.m"
            break;
#line 498 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 498 "equiv_type_hlds.m"
          case (MR_Integer) 2:
#line 501 "equiv_type_hlds.m"
            {
#line 502 "equiv_type_hlds.m"
              {
#line 502 "equiv_type_hlds.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_constructor_arg\'/5", (MR_String) "changed type of packed argument");
#line 502 "equiv_type_hlds.m"
                return;
              }
#line 501 "equiv_type_hlds.m"
            }
#line 498 "equiv_type_hlds.m"
            break;
#line 498 "equiv_type_hlds.m"
        }
#line 504 "equiv_type_hlds.m"
        break;
#line 504 "equiv_type_hlds.m"
    }
#line 488 "equiv_type_hlds.m"
  }
#line 484 "equiv_type_hlds.m"
}

#line 479 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0_1(
#line 479 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 479 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 479 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 479 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 479 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4)
#line 479 "equiv_type_hlds.m"
{
#line 479 "equiv_type_hlds.m"
  {
#line 479 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 479 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv1_CtorArg_8;
#line 479 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_TVarSet_21;

#line 479 "equiv_type_hlds.m"
    {
#line 479 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_constructor_arg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), &transform_hlds__equiv_type_hlds__conv1_CtorArg_8, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3), &transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_TVarSet_21);
    }
#line 479 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_2 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv1_CtorArg_8));
#line 479 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_4 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_TVarSet_21));
#line 479 "equiv_type_hlds.m"
  }
#line 479 "equiv_type_hlds.m"
}

#line 473 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0(
#line 473 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_4,
#line 473 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__ConsDefn0_5,
#line 473 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__ConsDefn_6)
#line 473 "equiv_type_hlds.m"
{
#line 476 "equiv_type_hlds.m"
  {
#line 476 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 476 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_22_22;
#line 476 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 0)));
#line 476 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 1)));
#line 476 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 2)));
#line 476 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__KindMap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 3)));
#line 476 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ExistQTVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 4)));
#line 476 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ProgConstraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 5)));
#line 476 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ConstructorArgs0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 6)));
#line 476 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 7)));
#line 476 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ConstructorArgs_15;
#line 476 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet_16;
#line 476 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_17_17;
#line 479 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv2_TVarSet_16;

#line 479 "equiv_type_hlds.m"
    {
#line 479 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 479 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_17_17, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_7[0]));
#line 479 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_17_17, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0_1));
#line 479 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 479 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_17_17, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_4));
#line 479 "equiv_type_hlds.m"
    }
#line 11933 "transform_hlds.equiv_type_hlds.c"
    transform_hlds__equiv_type_hlds__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 479 "equiv_type_hlds.m"
    {
#line 479 "equiv_type_hlds.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_22_22, transform_hlds__equiv_type_hlds__TypeCtorInfo_22_22, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[2], transform_hlds__equiv_type_hlds__V_17_17, transform_hlds__equiv_type_hlds__ConstructorArgs0_13, &transform_hlds__equiv_type_hlds__ConstructorArgs_15, ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet0_8)), &transform_hlds__equiv_type_hlds__conv2_TVarSet_16);
    }
#line 479 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__TVarSet_16 = ((MR_Word) transform_hlds__equiv_type_hlds__conv2_TVarSet_16);
#line 481 "equiv_type_hlds.m"
    {
#line 481 "equiv_type_hlds.m"
      MR_Word base;
#line 481 "equiv_type_hlds.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 481 "equiv_type_hlds.m"
      *transform_hlds__equiv_type_hlds__ConsDefn_6 = base;
#line 481 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_7));
#line 481 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_16));
#line 481 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeParams_9));
#line 481 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__KindMap_10));
#line 481 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__ExistQTVars_11));
#line 481 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__ProgConstraints_12));
#line 481 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__equiv_type_hlds__ConstructorArgs_15));
#line 481 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__equiv_type_hlds__Context_14));
#line 481 "equiv_type_hlds.m"
    }
#line 476 "equiv_type_hlds.m"
  }
#line 473 "equiv_type_hlds.m"
}

#line 440 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(
#line 440 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 440 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MaybeInstDet0_8,
#line 440 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MaybeInstDet_9,
#line 440 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 440 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_17,
#line 440 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_18)
#line 440 "equiv_type_hlds.m"
{
#line 447 "equiv_type_hlds.m"
  {
#line 447 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 447 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__MaybeInstDet0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 447 "equiv_type_hlds.m"
      {
#line 448 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__MaybeInstDet_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 449 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
#line 447 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_18 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_17;
#line 447 "equiv_type_hlds.m"
      }
#line 447 "equiv_type_hlds.m"
    else
#line 451 "equiv_type_hlds.m"
      {
#line 451 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Inst0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeInstDet0_8, (MR_Integer) 0)));
#line 451 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeInstDet0_8, (MR_Integer) 1)));
#line 451 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TVarSet_14;
#line 451 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Inst_15;
#line 454 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_16_16;

#line 453 "equiv_type_hlds.m"
        {
#line 453 "equiv_type_hlds.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet_14);
        }
#line 454 "equiv_type_hlds.m"
        {
#line 454 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Inst0_12, &transform_hlds__equiv_type_hlds__Inst_15, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__TVarSet_14, &transform_hlds__equiv_type_hlds__V_16_16, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_17, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_18);
        }
#line 458 "equiv_type_hlds.m"
#line 458 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 458 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 458 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 457 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__MaybeInstDet_9 = transform_hlds__equiv_type_hlds__MaybeInstDet0_8;
#line 458 "equiv_type_hlds.m"
            break;
#line 458 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 460 "equiv_type_hlds.m"
            {
#line 460 "equiv_type_hlds.m"
              MR_Word base;
#line 460 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__MaybeInstDet_9 = base;
#line 460 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Inst_15));
#line 460 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Det_13));
#line 460 "equiv_type_hlds.m"
            }
#line 458 "equiv_type_hlds.m"
            break;
#line 458 "equiv_type_hlds.m"
        }
#line 451 "equiv_type_hlds.m"
      }
#line 447 "equiv_type_hlds.m"
  }
#line 440 "equiv_type_hlds.m"
}

#line 417 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(
#line 417 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 417 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MaybeInst0_8,
#line 417 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MaybeInst_9,
#line 417 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 417 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_16,
#line 417 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_17)
#line 417 "equiv_type_hlds.m"
{
#line 423 "equiv_type_hlds.m"
  {
#line 423 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 423 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__MaybeInst0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "equiv_type_hlds.m"
      {
#line 424 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__MaybeInst_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 425 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
#line 423 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_17 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_16;
#line 423 "equiv_type_hlds.m"
      }
#line 423 "equiv_type_hlds.m"
    else
#line 427 "equiv_type_hlds.m"
      {
#line 427 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Inst0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeInst0_8, (MR_Integer) 0)));
#line 427 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TVarSet_13;
#line 427 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Inst_14;
#line 430 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_15_15;

#line 429 "equiv_type_hlds.m"
        {
#line 429 "equiv_type_hlds.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet_13);
        }
#line 430 "equiv_type_hlds.m"
        {
#line 430 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Inst0_12, &transform_hlds__equiv_type_hlds__Inst_14, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__TVarSet_13, &transform_hlds__equiv_type_hlds__V_15_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_16, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_17);
        }
#line 434 "equiv_type_hlds.m"
#line 434 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 434 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 434 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 433 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__MaybeInst_9 = transform_hlds__equiv_type_hlds__MaybeInst0_8;
#line 434 "equiv_type_hlds.m"
            break;
#line 434 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 436 "equiv_type_hlds.m"
            {
#line 436 "equiv_type_hlds.m"
              MR_Word base;
#line 436 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 436 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__MaybeInst_9 = base;
#line 436 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Inst_14));
#line 436 "equiv_type_hlds.m"
            }
#line 434 "equiv_type_hlds.m"
            break;
#line 434 "equiv_type_hlds.m"
        }
#line 427 "equiv_type_hlds.m"
      }
#line 423 "equiv_type_hlds.m"
  }
#line 417 "equiv_type_hlds.m"
}

#line 369 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_merge_inst_info_6_p_0(
#line 369 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 369 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MergeInstInfo0_8,
#line 369 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MergeInstInfo_9,
#line 369 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 369 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_21,
#line 369 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22)
#line 369 "equiv_type_hlds.m"
{
#line 374 "equiv_type_hlds.m"
  {
#line 374 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 374 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstA0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__MergeInstInfo0_8, (MR_Integer) 0)));
#line 374 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstB0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__MergeInstInfo0_8, (MR_Integer) 1)));
#line 374 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet0_14;
#line 374 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstA_15;
#line 374 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ChangedA_16;
#line 374 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet1_17;
#line 374 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstB_18;
#line 374 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ChangedB_19;
#line 374 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_23_23;
#line 380 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds___TVarSet_20;

#line 377 "equiv_type_hlds.m"
    {
#line 377 "equiv_type_hlds.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet0_14);
    }
#line 378 "equiv_type_hlds.m"
    {
#line 378 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstA0_12, &transform_hlds__equiv_type_hlds__InstA_15, &transform_hlds__equiv_type_hlds__ChangedA_16, transform_hlds__equiv_type_hlds__TVarSet0_14, &transform_hlds__equiv_type_hlds__TVarSet1_17, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_21, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_23_23);
    }
#line 380 "equiv_type_hlds.m"
    {
#line 380 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstB0_13, &transform_hlds__equiv_type_hlds__InstB_18, &transform_hlds__equiv_type_hlds__ChangedB_19, transform_hlds__equiv_type_hlds__TVarSet1_17, &transform_hlds__equiv_type_hlds___TVarSet_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_23_23, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22);
    }
#line 382 "equiv_type_hlds.m"
    {
#line 382 "equiv_type_hlds.m"
      *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_16, transform_hlds__equiv_type_hlds__ChangedB_19);
    }
#line 384 "equiv_type_hlds.m"
#line 384 "equiv_type_hlds.m"
    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 384 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 384 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 384 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__MergeInstInfo_9 = transform_hlds__equiv_type_hlds__MergeInstInfo0_8;
#line 384 "equiv_type_hlds.m"
        break;
#line 384 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 383 "equiv_type_hlds.m"
        {
#line 383 "equiv_type_hlds.m"
          MR_Word base;
#line 383 "equiv_type_hlds.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 383 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__MergeInstInfo_9 = base;
#line 383 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_15));
#line 383 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_18));
#line 383 "equiv_type_hlds.m"
        }
#line 384 "equiv_type_hlds.m"
        break;
#line 384 "equiv_type_hlds.m"
    }
#line 374 "equiv_type_hlds.m"
  }
#line 369 "equiv_type_hlds.m"
}

#line 351 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_inst_info_6_p_0(
#line 351 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 351 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__UnifyInstInfo0_8,
#line 351 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__UnifyInstInfo_9,
#line 351 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 351 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_23,
#line 351 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_24)
#line 351 "equiv_type_hlds.m"
{
#line 356 "equiv_type_hlds.m"
  {
#line 356 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 356 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Live_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UnifyInstInfo0_8, (MR_Integer) 0)));
#line 356 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Real_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UnifyInstInfo0_8, (MR_Integer) 1)));
#line 356 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstA0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UnifyInstInfo0_8, (MR_Integer) 2)));
#line 356 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstB0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UnifyInstInfo0_8, (MR_Integer) 3)));
#line 356 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet0_16;
#line 356 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstA_17;
#line 356 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ChangedA_18;
#line 356 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet1_19;
#line 356 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstB_20;
#line 356 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ChangedB_21;
#line 356 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_25_25;
#line 362 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds___TVarSet_22;

#line 359 "equiv_type_hlds.m"
    {
#line 359 "equiv_type_hlds.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet0_16);
    }
#line 360 "equiv_type_hlds.m"
    {
#line 360 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstA0_14, &transform_hlds__equiv_type_hlds__InstA_17, &transform_hlds__equiv_type_hlds__ChangedA_18, transform_hlds__equiv_type_hlds__TVarSet0_16, &transform_hlds__equiv_type_hlds__TVarSet1_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_23, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_25_25);
    }
#line 362 "equiv_type_hlds.m"
    {
#line 362 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstB0_15, &transform_hlds__equiv_type_hlds__InstB_20, &transform_hlds__equiv_type_hlds__ChangedB_21, transform_hlds__equiv_type_hlds__TVarSet1_19, &transform_hlds__equiv_type_hlds___TVarSet_22, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_25_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_24);
    }
#line 364 "equiv_type_hlds.m"
    {
#line 364 "equiv_type_hlds.m"
      *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_18, transform_hlds__equiv_type_hlds__ChangedB_21);
    }
#line 366 "equiv_type_hlds.m"
#line 366 "equiv_type_hlds.m"
    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 366 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 366 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 366 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__UnifyInstInfo_9 = transform_hlds__equiv_type_hlds__UnifyInstInfo0_8;
#line 366 "equiv_type_hlds.m"
        break;
#line 366 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 365 "equiv_type_hlds.m"
        {
#line 365 "equiv_type_hlds.m"
          MR_Word base;
#line 365 "equiv_type_hlds.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 365 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__UnifyInstInfo_9 = base;
#line 365 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Live_12));
#line 365 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Real_13));
#line 365 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_17));
#line 365 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_20));
#line 365 "equiv_type_hlds.m"
        }
#line 366 "equiv_type_hlds.m"
        break;
#line 366 "equiv_type_hlds.m"
    }
#line 356 "equiv_type_hlds.m"
  }
#line 351 "equiv_type_hlds.m"
}

#line 202 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_table_5_p_0(
#line 202 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
#line 202 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34,
#line 202 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_35,
#line 202 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36,
#line 202 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37)
#line 202 "equiv_type_hlds.m"
{
#line 205 "equiv_type_hlds.m"
  {
#line 205 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnifyInsts0_9;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MergeInsts0_10;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__GroundInsts0_11;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__AnyInsts0_12;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__SharedInsts0_13;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MostlyUniqInsts0_14;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnifyInstPairs0_15;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MergeInstPairs0_16;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__GroundInstPairs0_17;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__AnyInstPairs0_18;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__SharedInstPairs0_19;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MostlyUniqInstPairs0_20;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnifyInstPairs_21;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MergeInstPairs_22;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__GroundInstPairs_23;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__AnyInstPairs_24;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__SharedInstPairs_25;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MostlyUniqInstPairs_26;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnifyInsts_28;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MergeInsts_29;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__GroundInsts_30;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__AnyInsts_31;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__SharedInsts_32;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MostlyUniqInsts_33;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_40_40;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_43_43;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46_46;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_55_55;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_56_56;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_57_57;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_58_58;
#line 205 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_59_59;
#line 256 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_27_27;

#line 227 "equiv_type_hlds.m"
    {
#line 227 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__UnifyInsts0_9);
    }
#line 228 "equiv_type_hlds.m"
    {
#line 228 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_get_merge_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__MergeInsts0_10);
    }
#line 229 "equiv_type_hlds.m"
    {
#line 229 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_get_ground_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__GroundInsts0_11);
    }
#line 230 "equiv_type_hlds.m"
    {
#line 230 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_get_any_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__AnyInsts0_12);
    }
#line 231 "equiv_type_hlds.m"
    {
#line 231 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_get_shared_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__SharedInsts0_13);
    }
#line 232 "equiv_type_hlds.m"
    {
#line 232 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__MostlyUniqInsts0_14);
    }
#line 234 "equiv_type_hlds.m"
    {
#line 234 "equiv_type_hlds.m"
      hlds__hlds_data__unify_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__UnifyInsts0_9, &transform_hlds__equiv_type_hlds__UnifyInstPairs0_15);
    }
#line 235 "equiv_type_hlds.m"
    {
#line 235 "equiv_type_hlds.m"
      hlds__hlds_data__merge_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__MergeInsts0_10, &transform_hlds__equiv_type_hlds__MergeInstPairs0_16);
    }
#line 236 "equiv_type_hlds.m"
    {
#line 236 "equiv_type_hlds.m"
      hlds__hlds_data__ground_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__GroundInsts0_11, &transform_hlds__equiv_type_hlds__GroundInstPairs0_17);
    }
#line 237 "equiv_type_hlds.m"
    {
#line 237 "equiv_type_hlds.m"
      hlds__hlds_data__any_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__AnyInsts0_12, &transform_hlds__equiv_type_hlds__AnyInstPairs0_18);
    }
#line 238 "equiv_type_hlds.m"
    {
#line 238 "equiv_type_hlds.m"
      hlds__hlds_data__shared_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__SharedInsts0_13, &transform_hlds__equiv_type_hlds__SharedInstPairs0_19);
    }
#line 239 "equiv_type_hlds.m"
    {
#line 239 "equiv_type_hlds.m"
      hlds__hlds_data__mostly_uniq_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__MostlyUniqInsts0_14, &transform_hlds__equiv_type_hlds__MostlyUniqInstPairs0_20);
    }
#line 241 "equiv_type_hlds.m"
    {
#line 241 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho5_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__UnifyInstPairs0_15, &transform_hlds__equiv_type_hlds__UnifyInstPairs_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_40_40);
    }
#line 244 "equiv_type_hlds.m"
    {
#line 244 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho4_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__MergeInstPairs0_16, &transform_hlds__equiv_type_hlds__MergeInstPairs_22, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_40_40, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_43_43);
    }
#line 247 "equiv_type_hlds.m"
    {
#line 247 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho3_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__GroundInstPairs0_17, &transform_hlds__equiv_type_hlds__GroundInstPairs_23, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_43_43, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46_46);
    }
#line 250 "equiv_type_hlds.m"
    {
#line 250 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho2_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__AnyInstPairs0_18, &transform_hlds__equiv_type_hlds__AnyInstPairs_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46_46, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49);
    }
#line 253 "equiv_type_hlds.m"
    {
#line 253 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__SharedInstPairs0_19, &transform_hlds__equiv_type_hlds__SharedInstPairs_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
    }
#line 256 "equiv_type_hlds.m"
    {
#line 256 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__MostlyUniqInstPairs0_20, &transform_hlds__equiv_type_hlds__MostlyUniqInstPairs_26, *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37, &transform_hlds__equiv_type_hlds__V_27_27);
    }
#line 260 "equiv_type_hlds.m"
    {
#line 260 "equiv_type_hlds.m"
      hlds__hlds_data__unify_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__UnifyInstPairs_21, &transform_hlds__equiv_type_hlds__UnifyInsts_28);
    }
#line 261 "equiv_type_hlds.m"
    {
#line 261 "equiv_type_hlds.m"
      hlds__hlds_data__merge_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__MergeInstPairs_22, &transform_hlds__equiv_type_hlds__MergeInsts_29);
    }
#line 262 "equiv_type_hlds.m"
    {
#line 262 "equiv_type_hlds.m"
      hlds__hlds_data__ground_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__GroundInstPairs_23, &transform_hlds__equiv_type_hlds__GroundInsts_30);
    }
#line 263 "equiv_type_hlds.m"
    {
#line 263 "equiv_type_hlds.m"
      hlds__hlds_data__any_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__AnyInstPairs_24, &transform_hlds__equiv_type_hlds__AnyInsts_31);
    }
#line 264 "equiv_type_hlds.m"
    {
#line 264 "equiv_type_hlds.m"
      hlds__hlds_data__shared_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__SharedInstPairs_25, &transform_hlds__equiv_type_hlds__SharedInsts_32);
    }
#line 265 "equiv_type_hlds.m"
    {
#line 265 "equiv_type_hlds.m"
      hlds__hlds_data__mostly_uniq_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__MostlyUniqInstPairs_26, &transform_hlds__equiv_type_hlds__MostlyUniqInsts_33);
    }
#line 267 "equiv_type_hlds.m"
    {
#line 267 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_set_unify_insts_3_p_0(transform_hlds__equiv_type_hlds__UnifyInsts_28, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_55_55);
    }
#line 268 "equiv_type_hlds.m"
    {
#line 268 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_set_merge_insts_3_p_0(transform_hlds__equiv_type_hlds__MergeInsts_29, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_55_55, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_56_56);
    }
#line 269 "equiv_type_hlds.m"
    {
#line 269 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_set_ground_insts_3_p_0(transform_hlds__equiv_type_hlds__GroundInsts_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_56_56, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_57_57);
    }
#line 270 "equiv_type_hlds.m"
    {
#line 270 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_set_any_insts_3_p_0(transform_hlds__equiv_type_hlds__AnyInsts_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_57_57, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_58_58);
    }
#line 271 "equiv_type_hlds.m"
    {
#line 271 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_set_shared_insts_3_p_0(transform_hlds__equiv_type_hlds__SharedInsts_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_58_58, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_59_59);
    }
#line 272 "equiv_type_hlds.m"
    {
#line 272 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(transform_hlds__equiv_type_hlds__MostlyUniqInsts_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_59_59, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_35);
#line 272 "equiv_type_hlds.m"
      return;
    }
#line 205 "equiv_type_hlds.m"
  }
#line 202 "equiv_type_hlds.m"
}

#line 153 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0(
#line 153 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__ModuleName_8,
#line 153 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 153 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_10,
#line 153 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_0_48,
#line 153 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_49,
#line 153 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_0_50,
#line 153 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_51)
#line 153 "equiv_type_hlds.m"
{
#line 158 "equiv_type_hlds.m"
  {
#line 158 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 158 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet0_13;
#line 158 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Body0_14;
#line 158 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorSymName_15;
#line 158 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorItem_17;
#line 158 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__EquivTypeInfo0_18;
#line 158 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet_29;
#line 158 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__EquivTypeInfo_30;
#line 158 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Body_31;
#line 158 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ItemId_47;
#line 158 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_54_54;
#line 161 "equiv_type_hlds.m"
    MR_Integer transform_hlds__equiv_type_hlds___TypeCtorArity_16;

#line 159 "equiv_type_hlds.m"
    {
#line 159 "equiv_type_hlds.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_0_48, &transform_hlds__equiv_type_hlds__TVarSet0_13);
    }
#line 160 "equiv_type_hlds.m"
    {
#line 160 "equiv_type_hlds.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_0_48, &transform_hlds__equiv_type_hlds__Body0_14);
    }
#line 161 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__TypeCtorSymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_10, (MR_Integer) 0)));
#line 161 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds___TypeCtorArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_10, (MR_Integer) 1)));
#line 162 "equiv_type_hlds.m"
    {
#line 162 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__TypeCtorItem_17 = recompilation__type_ctor_to_item_name_1_f_0(transform_hlds__equiv_type_hlds__TypeCtor_10);
    }
#line 163 "equiv_type_hlds.m"
    {
#line 163 "equiv_type_hlds.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(transform_hlds__equiv_type_hlds__ModuleName_8, transform_hlds__equiv_type_hlds__TypeCtorSymName_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_0_50, &transform_hlds__equiv_type_hlds__EquivTypeInfo0_18);
    }
#line 170 "equiv_type_hlds.m"
#line 170 "equiv_type_hlds.m"
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Body0_14)) {
#line 170 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 170 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 176 "equiv_type_hlds.m"
        {
#line 177 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__EquivTypeInfo_30 = transform_hlds__equiv_type_hlds__EquivTypeInfo0_18;
#line 178 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__Body_31 = transform_hlds__equiv_type_hlds__Body0_14;
#line 179 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__TVarSet_29 = transform_hlds__equiv_type_hlds__TVarSet0_13;
#line 176 "equiv_type_hlds.m"
        }
#line 170 "equiv_type_hlds.m"
        break;
#line 170 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 166 "equiv_type_hlds.m"
        {
#line 166 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Ctors0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 0)));
#line 166 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Ctors_28;
#line 166 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 1)));
#line 166 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 2)));
#line 166 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 3)));
#line 166 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 4)));
#line 166 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 5)));
#line 166 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 166 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 166 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 7)));
#line 169 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_57_57;
#line 169 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_58_58;
#line 169 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_59_59;
#line 169 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_60_60;
#line 169 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_61_61;
#line 169 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_62_62;
#line 169 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_63_63;
#line 169 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_64_64;
#line 169 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_56_56;

#line 167 "equiv_type_hlds.m"
          {
#line 167 "equiv_type_hlds.m"
            parse_tree__equiv_type__replace_in_ctors_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Ctors0_19, &transform_hlds__equiv_type_hlds__Ctors_28, transform_hlds__equiv_type_hlds__TVarSet0_13, &transform_hlds__equiv_type_hlds__TVarSet_29, transform_hlds__equiv_type_hlds__EquivTypeInfo0_18, &transform_hlds__equiv_type_hlds__EquivTypeInfo_30);
          }
#line 169 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 0)));
#line 169 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 1)));
#line 169 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 2)));
#line 169 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 3)));
#line 169 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 4)));
#line 169 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 5)));
#line 169 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_62_62 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 169 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 169 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 7)));
#line 169 "equiv_type_hlds.m"
          {
#line 169 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__Body_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 169 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Ctors_28));
#line 169 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_57_57));
#line 169 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_58_58));
#line 169 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_59_59));
#line 169 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_60_60));
#line 169 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_61_61));
#line 169 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 6) = ((MR_Box) ((transform_hlds__equiv_type_hlds__V_62_62 | ((transform_hlds__equiv_type_hlds__V_63_63 << (MR_Integer) 1)))));
#line 169 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 7) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_64_64));
#line 169 "equiv_type_hlds.m"
          }
#line 166 "equiv_type_hlds.m"
        }
#line 170 "equiv_type_hlds.m"
        break;
#line 170 "equiv_type_hlds.m"
      case (MR_Integer) 2:
#line 171 "equiv_type_hlds.m"
        {
#line 171 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Type0_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 0)));
#line 171 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Type_33;
#line 172 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_34_34;

#line 172 "equiv_type_hlds.m"
          {
#line 172 "equiv_type_hlds.m"
            parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Type0_32, &transform_hlds__equiv_type_hlds__Type_33, &transform_hlds__equiv_type_hlds__V_34_34, transform_hlds__equiv_type_hlds__TVarSet0_13, &transform_hlds__equiv_type_hlds__TVarSet_29, transform_hlds__equiv_type_hlds__EquivTypeInfo0_18, &transform_hlds__equiv_type_hlds__EquivTypeInfo_30);
          }
#line 174 "equiv_type_hlds.m"
          {
#line 174 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__Body_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 174 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Body_31, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_33));
#line 174 "equiv_type_hlds.m"
          }
#line 171 "equiv_type_hlds.m"
        }
#line 170 "equiv_type_hlds.m"
        break;
#line 170 "equiv_type_hlds.m"
      case (MR_Integer) 3:
#line 170 "equiv_type_hlds.m"
#line 170 "equiv_type_hlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 0)))) {
#line 170 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 170 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 181 "equiv_type_hlds.m"
            {
#line 181 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__SolverTypeDetails0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 1)));
#line 181 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__UserEq_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 2)));
#line 181 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__RepnType0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails0_36, (MR_Integer) 0)));
#line 181 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__InitPred_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails0_36, (MR_Integer) 1)));
#line 181 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__GroundInst_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails0_36, (MR_Integer) 2)));
#line 181 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__AnyInst_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails0_36, (MR_Integer) 3)));
#line 181 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__MutableItems_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails0_36, (MR_Integer) 4)));
#line 181 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__RepnType_43;
#line 181 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__SolverTypeDetails_45;
#line 184 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_44_44;

#line 184 "equiv_type_hlds.m"
              {
#line 184 "equiv_type_hlds.m"
                parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__RepnType0_38, &transform_hlds__equiv_type_hlds__RepnType_43, &transform_hlds__equiv_type_hlds__V_44_44, transform_hlds__equiv_type_hlds__TVarSet0_13, &transform_hlds__equiv_type_hlds__TVarSet_29, transform_hlds__equiv_type_hlds__EquivTypeInfo0_18, &transform_hlds__equiv_type_hlds__EquivTypeInfo_30);
              }
#line 186 "equiv_type_hlds.m"
              {
#line 186 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__SolverTypeDetails_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 186 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails_45, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__RepnType_43));
#line 186 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails_45, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InitPred_39));
#line 186 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails_45, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__GroundInst_40));
#line 186 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails_45, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__AnyInst_41));
#line 186 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails_45, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__MutableItems_42));
#line 186 "equiv_type_hlds.m"
              }
#line 188 "equiv_type_hlds.m"
              {
#line 188 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__Body_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 188 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 188 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body_31, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__SolverTypeDetails_45));
#line 188 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body_31, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__UserEq_37));
#line 188 "equiv_type_hlds.m"
              }
#line 181 "equiv_type_hlds.m"
            }
#line 170 "equiv_type_hlds.m"
            break;
#line 170 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 190 "equiv_type_hlds.m"
            {
#line 191 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__EquivTypeInfo_30 = transform_hlds__equiv_type_hlds__EquivTypeInfo0_18;
#line 192 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__Body_31 = transform_hlds__equiv_type_hlds__Body0_14;
#line 193 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__TVarSet_29 = transform_hlds__equiv_type_hlds__TVarSet0_13;
#line 190 "equiv_type_hlds.m"
            }
#line 170 "equiv_type_hlds.m"
            break;
#line 170 "equiv_type_hlds.m"
        }
#line 170 "equiv_type_hlds.m"
        break;
#line 170 "equiv_type_hlds.m"
    }
#line 195 "equiv_type_hlds.m"
    {
#line 195 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__ItemId_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 195 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ItemId_47, 0) = ((MR_Box) ((MR_Integer) 1));
#line 195 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ItemId_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtorItem_17));
#line 195 "equiv_type_hlds.m"
    }
#line 196 "equiv_type_hlds.m"
    {
#line 196 "equiv_type_hlds.m"
      recompilation__finish_recording_expanded_items_4_p_0(transform_hlds__equiv_type_hlds__ItemId_47, transform_hlds__equiv_type_hlds__EquivTypeInfo_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_0_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_51);
    }
#line 197 "equiv_type_hlds.m"
    {
#line 197 "equiv_type_hlds.m"
      hlds__hlds_data__set_type_defn_body_3_p_0(transform_hlds__equiv_type_hlds__Body_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_0_48, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_54_54);
    }
#line 198 "equiv_type_hlds.m"
    {
#line 198 "equiv_type_hlds.m"
      hlds__hlds_data__set_type_defn_tvarset_3_p_0(transform_hlds__equiv_type_hlds__TVarSet_29, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_54_54, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_49);
#line 198 "equiv_type_hlds.m"
      return;
    }
#line 158 "equiv_type_hlds.m"
  }
#line 153 "equiv_type_hlds.m"
}

#line 137 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__mark_eqv_exported_types_3_p_0(
#line 137 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_4,
#line 137 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_0_8,
#line 137 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_9)
#line 137 "equiv_type_hlds.m"
{
#line 144 "equiv_type_hlds.m"
  {
#line 144 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 144 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeDefn0_6;

#line 141 "equiv_type_hlds.m"
    {
#line 141 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_0_8, transform_hlds__equiv_type_hlds__TypeCtor_4, &transform_hlds__equiv_type_hlds__TypeDefn0_6);
    }
#line 144 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 142 "equiv_type_hlds.m"
      {
#line 142 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeDefn_7;

#line 142 "equiv_type_hlds.m"
        {
#line 142 "equiv_type_hlds.m"
          hlds__hlds_data__set_type_defn_in_exported_eqv_3_p_0((MR_Integer) 1, transform_hlds__equiv_type_hlds__TypeDefn0_6, &transform_hlds__equiv_type_hlds__TypeDefn_7);
        }
#line 143 "equiv_type_hlds.m"
        {
#line 143 "equiv_type_hlds.m"
          hlds__hlds_data__replace_type_ctor_defn_4_p_0(transform_hlds__equiv_type_hlds__TypeCtor_4, transform_hlds__equiv_type_hlds__TypeDefn_7, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_0_8, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_9);
#line 143 "equiv_type_hlds.m"
          return;
        }
#line 142 "equiv_type_hlds.m"
      }
#line 144 "equiv_type_hlds.m"
    else
#line 144 "equiv_type_hlds.m"
      *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_0_8;
#line 144 "equiv_type_hlds.m"
  }
#line 137 "equiv_type_hlds.m"
}

#line 130 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0_1(
#line 130 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 130 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 130 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 130 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3)
#line 130 "equiv_type_hlds.m"
{
#line 130 "equiv_type_hlds.m"
  {
#line 130 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 130 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Set_9;

#line 130 "equiv_type_hlds.m"
    {
#line 130 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Set_9);
    }
#line 130 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Set_9));
#line 130 "equiv_type_hlds.m"
  }
#line 130 "equiv_type_hlds.m"
}

#line 124 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(
#line 124 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type_4,
#line 124 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_0_8,
#line 124 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_9)
#line 124 "equiv_type_hlds.m"
{
#line 131 "equiv_type_hlds.m"
  {
#line 131 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 131 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtor_6;
#line 131 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Args_7;

#line 128 "equiv_type_hlds.m"
    {
#line 128 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__equiv_type_hlds__Type_4, &transform_hlds__equiv_type_hlds__TypeCtor_6, &transform_hlds__equiv_type_hlds__Args_7);
    }
#line 131 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 129 "equiv_type_hlds.m"
      {
#line 129 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_10_10;
#line 130 "equiv_type_hlds.m"
        MR_Box transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_Set_9;

#line 129 "equiv_type_hlds.m"
        {
#line 129 "equiv_type_hlds.m"
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_6)), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_0_8, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_10_10);
        }
#line 130 "equiv_type_hlds.m"
        {
#line 130 "equiv_type_hlds.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[0], (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[7], transform_hlds__equiv_type_hlds__Args_7, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_10_10)), &transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_Set_9);
        }
#line 130 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_9 = ((MR_Word) transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_Set_9);
#line 129 "equiv_type_hlds.m"
      }
#line 131 "equiv_type_hlds.m"
    else
#line 131 "equiv_type_hlds.m"
      *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_0_8;
#line 131 "equiv_type_hlds.m"
  }
#line 124 "equiv_type_hlds.m"
}

#line 96 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_to_eqv_map_6_p_0(
#line 96 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_7,
#line 96 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Defn_8,
#line 96 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_30,
#line 96 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_31,
#line 96 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32,
#line 96 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33)
#line 96 "equiv_type_hlds.m"
{
#line 100 "equiv_type_hlds.m"
  {
#line 100 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 100 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Body_11;

#line 101 "equiv_type_hlds.m"
    {
#line 101 "equiv_type_hlds.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__equiv_type_hlds__Defn_8, &transform_hlds__equiv_type_hlds__Body_11);
    }
#line 116 "equiv_type_hlds.m"
#line 116 "equiv_type_hlds.m"
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Body_11)) {
#line 116 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 116 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 118 "equiv_type_hlds.m"
        {
#line 118 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_31 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_30;
#line 118 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32;
#line 118 "equiv_type_hlds.m"
        }
#line 116 "equiv_type_hlds.m"
        break;
#line 116 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 117 "equiv_type_hlds.m"
        {
#line 117 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_31 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_30;
#line 117 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32;
#line 117 "equiv_type_hlds.m"
        }
#line 116 "equiv_type_hlds.m"
        break;
#line 116 "equiv_type_hlds.m"
      case (MR_Integer) 2:
#line 103 "equiv_type_hlds.m"
        {
#line 103 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__EqvType_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Body_11, (MR_Integer) 0)));
#line 103 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TVarSet_13;
#line 103 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Params_14;
#line 103 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Status_15;
#line 103 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__IsExported_16;
#line 103 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_34_34;

#line 104 "equiv_type_hlds.m"
          {
#line 104 "equiv_type_hlds.m"
            hlds__hlds_data__get_type_defn_tvarset_2_p_0(transform_hlds__equiv_type_hlds__Defn_8, &transform_hlds__equiv_type_hlds__TVarSet_13);
          }
#line 105 "equiv_type_hlds.m"
          {
#line 105 "equiv_type_hlds.m"
            hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__equiv_type_hlds__Defn_8, &transform_hlds__equiv_type_hlds__Params_14);
          }
#line 106 "equiv_type_hlds.m"
          {
#line 106 "equiv_type_hlds.m"
            hlds__hlds_data__get_type_defn_status_2_p_0(transform_hlds__equiv_type_hlds__Defn_8, &transform_hlds__equiv_type_hlds__Status_15);
          }
#line 107 "equiv_type_hlds.m"
          {
#line 107 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 107 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_34_34, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_13));
#line 107 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_34_34, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Params_14));
#line 107 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_34_34, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__EqvType_12));
#line 107 "equiv_type_hlds.m"
          }
#line 107 "equiv_type_hlds.m"
          {
#line 107 "equiv_type_hlds.m"
            mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_7)), ((MR_Box) (transform_hlds__equiv_type_hlds__V_34_34)), transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_31);
          }
#line 109 "equiv_type_hlds.m"
          {
#line 109 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__IsExported_16 = parse_tree__status__status_is_exported_1_f_0(transform_hlds__equiv_type_hlds__Status_15);
          }
#line 113 "equiv_type_hlds.m"
#line 113 "equiv_type_hlds.m"
          switch (transform_hlds__equiv_type_hlds__IsExported_16) {
#line 113 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 113 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 114 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32;
#line 113 "equiv_type_hlds.m"
              break;
#line 113 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 112 "equiv_type_hlds.m"
              {
#line 112 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(transform_hlds__equiv_type_hlds__EqvType_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33);
#line 112 "equiv_type_hlds.m"
                return;
              }
#line 113 "equiv_type_hlds.m"
              break;
#line 113 "equiv_type_hlds.m"
          }
#line 103 "equiv_type_hlds.m"
        }
#line 116 "equiv_type_hlds.m"
        break;
#line 116 "equiv_type_hlds.m"
      case (MR_Integer) 3:
#line 116 "equiv_type_hlds.m"
#line 116 "equiv_type_hlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body_11, (MR_Integer) 0)))) {
#line 116 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 116 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 119 "equiv_type_hlds.m"
            {
#line 119 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_31 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_30;
#line 119 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32;
#line 119 "equiv_type_hlds.m"
            }
#line 116 "equiv_type_hlds.m"
            break;
#line 116 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 120 "equiv_type_hlds.m"
            {
#line 120 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_31 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_30;
#line 120 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32;
#line 120 "equiv_type_hlds.m"
            }
#line 116 "equiv_type_hlds.m"
            break;
#line 116 "equiv_type_hlds.m"
        }
#line 116 "equiv_type_hlds.m"
        break;
#line 116 "equiv_type_hlds.m"
    }
#line 100 "equiv_type_hlds.m"
  }
#line 96 "equiv_type_hlds.m"
}

#line 91 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_5(
#line 91 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 91 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 91 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 91 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 91 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 91 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5)
#line 91 "equiv_type_hlds.m"
{
#line 91 "equiv_type_hlds.m"
  {
#line 91 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 91 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv11_STATE_VARIABLE_ModuleInfo_30;
#line 91 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv10_STATE_VARIABLE_Cache_32;

#line 91 "equiv_type_hlds.m"
    {
#line 91 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv11_STATE_VARIABLE_ModuleInfo_30, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_4), &transform_hlds__equiv_type_hlds__conv10_STATE_VARIABLE_Cache_32);
    }
#line 91 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv11_STATE_VARIABLE_ModuleInfo_30));
#line 91 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_5 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv10_STATE_VARIABLE_Cache_32));
#line 91 "equiv_type_hlds.m"
  }
#line 91 "equiv_type_hlds.m"
}

#line 470 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_4(
#line 470 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 470 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 470 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2)
#line 470 "equiv_type_hlds.m"
{
#line 470 "equiv_type_hlds.m"
  {
#line 470 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 470 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv9_ConsDefn_6;

#line 470 "equiv_type_hlds.m"
    {
#line 470 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), &transform_hlds__equiv_type_hlds__conv9_ConsDefn_6);
    }
#line 470 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_2 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv9_ConsDefn_6));
#line 470 "equiv_type_hlds.m"
  }
#line 470 "equiv_type_hlds.m"
}

#line 76 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_3(
#line 76 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 76 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 76 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 76 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 76 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 76 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5)
#line 76 "equiv_type_hlds.m"
{
#line 76 "equiv_type_hlds.m"
  {
#line 76 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 76 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv7_STATE_VARIABLE_Defn_49;
#line 76 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_MaybeRecompInfo_51;

#line 76 "equiv_type_hlds.m"
    {
#line 76 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv7_STATE_VARIABLE_Defn_49, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_4), &transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_MaybeRecompInfo_51);
    }
#line 76 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv7_STATE_VARIABLE_Defn_49));
#line 76 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_5 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_MaybeRecompInfo_51));
#line 76 "equiv_type_hlds.m"
  }
#line 76 "equiv_type_hlds.m"
}

#line 71 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_2(
#line 71 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 71 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 71 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 71 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3)
#line 71 "equiv_type_hlds.m"
{
#line 71 "equiv_type_hlds.m"
  {
#line 71 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 71 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_TypeTable_9;

#line 71 "equiv_type_hlds.m"
    {
#line 71 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__mark_eqv_exported_types_3_p_0(((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_TypeTable_9);
    }
#line 71 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_TypeTable_9));
#line 71 "equiv_type_hlds.m"
  }
#line 71 "equiv_type_hlds.m"
}

#line 69 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_1(
#line 69 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 69 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 69 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 69 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 69 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 69 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_5,
#line 69 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_6)
#line 69 "equiv_type_hlds.m"
{
#line 69 "equiv_type_hlds.m"
  {
#line 69 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 69 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_TypeEqvMap_31;
#line 69 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_EqvExportTypes_33;

#line 69 "equiv_type_hlds.m"
    {
#line 69 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__add_type_to_eqv_map_6_p_0(((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3), &transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_TypeEqvMap_31, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_5), &transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_EqvExportTypes_33);
    }
#line 69 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_4 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_TypeEqvMap_31));
#line 69 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_6 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_EqvExportTypes_33));
#line 69 "equiv_type_hlds.m"
  }
#line 69 "equiv_type_hlds.m"
}

#line 27 "equiv_type_hlds.m"
void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0(
#line 27 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_20,
#line 27 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_21)
#line 27 "equiv_type_hlds.m"
{
#line 67 "equiv_type_hlds.m"
  {
#line 67 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_39_39;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_53_53;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeTable0_4;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_5;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__EqvExportTypes_6;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeTable1_7;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MaybeRecompInfo0_8;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ModuleName_9;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeTable_10;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MaybeRecompInfo_11;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Insts0_12;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstCache0_13;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Insts_14;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstCache_15;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ConsTable0_16;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ConsTable_17;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__PredIds_18;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_23_23;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_24_24;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_26_26;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_27_27;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_28_28;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_29_29;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30_30;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_31_31;
#line 67 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_66_66;
#line 69 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv3_TypeEqvMap_5;
#line 69 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv2_EqvExportTypes_6;
#line 71 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv5_TypeTable1_7;
#line 75 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv8_MaybeRecompInfo_11;
#line 91 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_19_19;
#line 91 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv13_STATE_VARIABLE_ModuleInfo_21;
#line 91 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv12_V_19_19;

#line 68 "equiv_type_hlds.m"
    {
#line 68 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__equiv_type_hlds__TypeTable0_4);
    }
#line 13535 "transform_hlds.equiv_type_hlds.c"
    transform_hlds__equiv_type_hlds__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 70 "equiv_type_hlds.m"
    {
#line 70 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_23_23 = mercury__map__init_0_f_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_39_39, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0);
    }
#line 70 "equiv_type_hlds.m"
    {
#line 70 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_24_24 = mercury__set__init_0_f_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_39_39);
    }
#line 69 "equiv_type_hlds.m"
    {
#line 69 "equiv_type_hlds.m"
      hlds__hlds_data__foldl2_over_type_ctor_defns_6_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[0], (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[0], (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[5], transform_hlds__equiv_type_hlds__TypeTable0_4, ((MR_Box) (transform_hlds__equiv_type_hlds__V_23_23)), &transform_hlds__equiv_type_hlds__conv3_TypeEqvMap_5, ((MR_Box) (transform_hlds__equiv_type_hlds__V_24_24)), &transform_hlds__equiv_type_hlds__conv2_EqvExportTypes_6);
    }
#line 69 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__TypeEqvMap_5 = ((MR_Word) transform_hlds__equiv_type_hlds__conv3_TypeEqvMap_5);
#line 69 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__EqvExportTypes_6 = ((MR_Word) transform_hlds__equiv_type_hlds__conv2_EqvExportTypes_6);
#line 71 "equiv_type_hlds.m"
    {
#line 71 "equiv_type_hlds.m"
      mercury__set__fold_4_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_39_39, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[2], (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[6], transform_hlds__equiv_type_hlds__EqvExportTypes_6, ((MR_Box) (transform_hlds__equiv_type_hlds__TypeTable0_4)), &transform_hlds__equiv_type_hlds__conv5_TypeTable1_7);
    }
#line 71 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__TypeTable1_7 = ((MR_Word) transform_hlds__equiv_type_hlds__conv5_TypeTable1_7);
#line 73 "equiv_type_hlds.m"
    {
#line 73 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__equiv_type_hlds__MaybeRecompInfo0_8);
    }
#line 74 "equiv_type_hlds.m"
    {
#line 74 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__equiv_type_hlds__ModuleName_9);
    }
#line 76 "equiv_type_hlds.m"
    {
#line 76 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 76 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_26_26, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_6[0]));
#line 76 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_26_26, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_3));
#line 76 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 76 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_26_26, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__ModuleName_9));
#line 76 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_26_26, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_5));
#line 76 "equiv_type_hlds.m"
    }
#line 75 "equiv_type_hlds.m"
    {
#line 75 "equiv_type_hlds.m"
      hlds__hlds_data__map_foldl_over_type_ctor_defns_5_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[1], transform_hlds__equiv_type_hlds__V_26_26, transform_hlds__equiv_type_hlds__TypeTable1_7, &transform_hlds__equiv_type_hlds__TypeTable_10, ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeRecompInfo0_8)), &transform_hlds__equiv_type_hlds__conv8_MaybeRecompInfo_11);
    }
#line 75 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__MaybeRecompInfo_11 = ((MR_Word) transform_hlds__equiv_type_hlds__conv8_MaybeRecompInfo_11);
#line 78 "equiv_type_hlds.m"
    {
#line 78 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_set_type_table_3_p_0(transform_hlds__equiv_type_hlds__TypeTable_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_27_27);
    }
#line 79 "equiv_type_hlds.m"
    {
#line 79 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(transform_hlds__equiv_type_hlds__MaybeRecompInfo_11, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_27_27, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_28_28);
    }
#line 81 "equiv_type_hlds.m"
    {
#line 81 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__equiv_type_hlds__Insts0_12);
    }
#line 13611 "transform_hlds.equiv_type_hlds.c"
    transform_hlds__equiv_type_hlds__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 82 "equiv_type_hlds.m"
    {
#line 82 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__InstCache0_13 = mercury__map__init_0_f_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_53_53, transform_hlds__equiv_type_hlds__TypeCtorInfo_53_53);
    }
#line 83 "equiv_type_hlds.m"
    {
#line 83 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_table_5_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_5, transform_hlds__equiv_type_hlds__Insts0_12, &transform_hlds__equiv_type_hlds__Insts_14, transform_hlds__equiv_type_hlds__InstCache0_13, &transform_hlds__equiv_type_hlds__InstCache_15);
    }
#line 84 "equiv_type_hlds.m"
    {
#line 84 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_set_inst_table_3_p_0(transform_hlds__equiv_type_hlds__Insts_14, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_29_29);
    }
#line 86 "equiv_type_hlds.m"
    {
#line 86 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_29_29, &transform_hlds__equiv_type_hlds__ConsTable0_16);
    }
#line 470 "equiv_type_hlds.m"
    {
#line 470 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 470 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_66_66, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[1]));
#line 470 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_66_66, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_4));
#line 470 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 470 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_66_66, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_5));
#line 470 "equiv_type_hlds.m"
    }
#line 470 "equiv_type_hlds.m"
    {
#line 470 "equiv_type_hlds.m"
      hlds__hlds_data__replace_cons_defns_in_cons_table_3_p_0(transform_hlds__equiv_type_hlds__V_66_66, transform_hlds__equiv_type_hlds__ConsTable0_16, &transform_hlds__equiv_type_hlds__ConsTable_17);
    }
#line 88 "equiv_type_hlds.m"
    {
#line 88 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_set_cons_table_3_p_0(transform_hlds__equiv_type_hlds__ConsTable_17, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_29_29, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 90 "equiv_type_hlds.m"
    {
#line 90 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__equiv_type_hlds__PredIds_18);
    }
#line 91 "equiv_type_hlds.m"
    {
#line 91 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 91 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_31_31, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[1]));
#line 91 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_31_31, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_5));
#line 91 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 91 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_31_31, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_5));
#line 91 "equiv_type_hlds.m"
    }
#line 91 "equiv_type_hlds.m"
    {
#line 91 "equiv_type_hlds.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3], transform_hlds__equiv_type_hlds__V_31_31, transform_hlds__equiv_type_hlds__PredIds_18, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30_30)), &transform_hlds__equiv_type_hlds__conv13_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) (transform_hlds__equiv_type_hlds__InstCache_15)), &transform_hlds__equiv_type_hlds__conv12_V_19_19);
    }
#line 91 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__equiv_type_hlds__conv13_STATE_VARIABLE_ModuleInfo_21);
#line 91 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_19_19 = ((MR_Word) transform_hlds__equiv_type_hlds__conv12_V_19_19);
#line 67 "equiv_type_hlds.m"
  }
#line 27 "equiv_type_hlds.m"
}

void mercury__transform_hlds__equiv_type_hlds__init(void)
{
}

void mercury__transform_hlds__equiv_type_hlds__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__type_ctor_info_inst_cache_0);
	MR_register_type_ctor_info(&transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__type_ctor_info_replace_info_0);
}

void mercury__transform_hlds__equiv_type_hlds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.equiv_type_hlds. */
