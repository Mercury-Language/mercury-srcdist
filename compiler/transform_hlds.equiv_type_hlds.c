/*
** Automatically generated from `equiv_type_hlds.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 147 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

#line 150 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 153 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 156 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 159 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0;

#line 162 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 165 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 168 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 171 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 174 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 177 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 180 "transform_hlds.equiv_type_hlds.c"
static const MR_VA_PseudoTypeInfo_Struct3 transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 183 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 186 "transform_hlds.equiv_type_hlds.c"
static const MR_PseudoTypeInfo transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_types_replace_info_0_0[6];

#line 189 "transform_hlds.equiv_type_hlds.c"
static const MR_ConstString transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_names_replace_info_0_0[6];

#line 192 "transform_hlds.equiv_type_hlds.c"
static const MR_DuFunctorDesc transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0;

#line 195 "transform_hlds.equiv_type_hlds.c"
static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_stag_ordered_replace_info_0_0[1];

#line 198 "transform_hlds.equiv_type_hlds.c"
static const MR_DuPtagLayout transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_ptag_ordered_replace_info_0[1];

#line 201 "transform_hlds.equiv_type_hlds.c"
static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_name_ordered_replace_info_0[1];

#line 204 "transform_hlds.equiv_type_hlds.c"
static const MR_Integer transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__functor_number_map_replace_info_0[1];

#line 207 "transform_hlds.equiv_type_hlds.c"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0_10001(
#line 210 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 212 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2);

#line 215 "transform_hlds.equiv_type_hlds.c"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0_10001(
#line 218 "transform_hlds.equiv_type_hlds.c"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 220 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 222 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3);

#line 225 "transform_hlds.equiv_type_hlds.c"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0_10001(
#line 228 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 230 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2);

#line 233 "transform_hlds.equiv_type_hlds.c"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0_10001(
#line 236 "transform_hlds.equiv_type_hlds.c"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 238 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 240 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3);

#line 1308 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_103_111_97_108_95_95_49_51_48_56_95_95_49_95_95_91_50_93_95_48_6_p_0(
#line 1308 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1308 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__2_39,
#line 1308 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__3_40,
#line 1308 "equiv_type_hlds.m"
  MR_Tuple transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41,
#line 1308 "equiv_type_hlds.m"
  MR_Tuple * transform_hlds__equiv_type_hlds__LambdaHeadVar__5_42);

#line 314 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho10_10_p_0(
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10);

#line 314 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho9_10_p_0(
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10);

#line 314 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho8_10_p_0(
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10);

#line 314 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho7_10_p_0(
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10);

#line 314 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho6_10_p_0(
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10);

#line 291 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho5_7_p_0(
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);

#line 291 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho4_7_p_0(
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);

#line 291 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho3_7_p_0(
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);

#line 291 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho2_7_p_0(
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);

#line 291 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);

#line 1467 "equiv_type_hlds.m"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal_expr__1467__1_2_p_0(
#line 1467 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__PolySpecs_95,
#line 1467 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_153);

#line 1308 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal__1308__1_6_p_0(
#line 1308 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1308 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__1_38,
#line 1308 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__2_39,
#line 1308 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__3_40,
#line 1308 "equiv_type_hlds.m"
  MR_Tuple transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41,
#line 1308 "equiv_type_hlds.m"
  MR_Tuple * transform_hlds__equiv_type_hlds__LambdaHeadVar__5_42);

#line 589 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__589__1_3_p_0(
#line 589 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeMap_30,
#line 589 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_99,
#line 589 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_100);

#line 583 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__583__1_6_p_0(
#line 583 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 583 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__1_65,
#line 583 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__2_66,
#line 583 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__3_67,
#line 583 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__4_68,
#line 583 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__5_69);

#line 1287 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0(
#line 1287 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1287 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1287 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3);

#line 1287 "equiv_type_hlds.m"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0(
#line 1287 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1287 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2);

#line 1272 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0(
#line 1272 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1272 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1272 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3);

#line 1272 "equiv_type_hlds.m"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0(
#line 1272 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1272 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2);

#line 1663 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(
#line 1663 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1663 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1663 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1663 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1663 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_5,
#line 1663 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_6,
#line 1663 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_7,
#line 1663 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_8);

#line 1634 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_uni_modes_6_p_0(
#line 1634 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1634 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1634 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1634 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1634 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
#line 1634 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6);

#line 1610 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_uni_mode_6_p_0(
#line 1610 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1610 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__UniMode0_8,
#line 1610 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__UniMode_9,
#line 1610 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 1610 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_26,
#line 1610 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_27);

#line 1577 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unification_6_p_0(
#line 1577 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1577 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Uni0_8,
#line 1577 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Uni_9,
#line 1577 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 1577 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_35,
#line 1577 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_36);

#line 1565 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(
#line 1565 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1565 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1565 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1565 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1565 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
#line 1565 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6);

#line 1467 "equiv_type_hlds.m"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0_1(
#line 1467 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg);

#line 1340 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0(
#line 1340 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1340 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__GoalExpr0_8,
#line 1340 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__GoalExpr_9,
#line 1340 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 1340 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131,
#line 1340 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);

#line 1327 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(
#line 1327 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1327 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1327 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1327 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1327 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
#line 1327 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6);

#line 1308 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0_1(
#line 1308 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 1308 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 1308 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 1308 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 1308 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 1308 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5);

#line 1297 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(
#line 1297 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1297 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Goal0_8,
#line 1297 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Goal_9,
#line 1297 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 1297 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_32,
#line 1297 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33);

#line 1255 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(
#line 1255 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1255 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1255 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1255 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1255 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
#line 1255 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
#line 1255 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
#line 1255 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);

#line 1238 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(
#line 1238 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1238 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1238 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1238 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1238 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
#line 1238 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
#line 1238 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
#line 1238 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);

#line 1165 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(
#line 1165 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 1165 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__InstName0_10,
#line 1165 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__InstName_11,
#line 1165 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 1165 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34,
#line 1165 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35,
#line 1165 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36,
#line 1165 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);

#line 1046 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_2_8_p_0(
#line 1046 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 1046 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst0_10,
#line 1046 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Inst_11,
#line 1046 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 1046 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49,
#line 1046 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50,
#line 1046 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51,
#line 1046 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);

#line 1025 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__record_inst_may_occur_2_p_0(
#line 1025 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst_1,
#line 1025 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MayOccur_2);

#line 999 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__lookup_inst_may_occur_3_p_0(
#line 999 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst_1,
#line 999 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Found_2,
#line 999 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MayOccur_3);

#line 937 "equiv_type_hlds.m"
static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(
#line 937 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1);

#line 918 "equiv_type_hlds.m"
static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(
#line 918 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1);

#line 848 "equiv_type_hlds.m"
static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(
#line 848 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst_3);

#line 805 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(
#line 805 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 805 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst0_10,
#line 805 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Inst_11,
#line 805 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 805 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_17,
#line 805 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_18,
#line 805 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_19,
#line 805 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20);

#line 784 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_mode_8_p_0(
#line 784 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 784 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Mode0_10,
#line 784 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Mode_11,
#line 784 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 784 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_24,
#line 784 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25,
#line 784 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_26,
#line 784 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_27);

#line 770 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(
#line 770 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 770 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 770 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 770 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 770 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
#line 770 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
#line 770 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
#line 770 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);

#line 718 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_type_ctor_11_p_0(
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_12,
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded0_13,
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type0_14,
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_15,
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__ArgTypes_16,
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Kind_17,
#line 718 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Type_18,
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_35,
#line 718 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_36,
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_37,
#line 718 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_38);

#line 705 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(
#line 705 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 705 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 705 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 705 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 705 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_5,
#line 705 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_6,
#line 705 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_7,
#line 705 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_8);

#line 627 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(
#line 627 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_8,
#line 627 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9,
#line 627 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type0_10,
#line 627 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Type_11,
#line 627 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 627 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38,
#line 627 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39);

#line 621 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(
#line 621 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
#line 621 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type0_7,
#line 621 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Type_8,
#line 621 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_11,
#line 621 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_12);

#line 589 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_3(
#line 589 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 589 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 589 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2);

#line 583 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_2(
#line 583 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 583 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 583 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 583 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 583 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 583 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5);

#line 577 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_1(
#line 577 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 577 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 577 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 577 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 577 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4);

#line 554 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0(
#line 554 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 554 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_0_39,
#line 554 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_40,
#line 554 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_41,
#line 554 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_42,
#line 554 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_0_43,
#line 554 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_44,
#line 554 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_45,
#line 554 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46);

#line 548 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0_1(
#line 548 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 548 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 548 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 548 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 548 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 548 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_5,
#line 548 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_6,
#line 548 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_7,
#line 548 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_8);

#line 510 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0(
#line 510 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 510 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__PredId_8,
#line 510 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29,
#line 510 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30,
#line 510 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_31,
#line 510 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_32);

#line 483 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_constructor_arg_5_p_0(
#line 483 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
#line 483 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__CtorArg0_7,
#line 483 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__CtorArg_8,
#line 483 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_20,
#line 483 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_21);

#line 478 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0_1(
#line 478 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 478 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 478 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 478 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 478 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4);

#line 472 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0(
#line 472 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_4,
#line 472 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__ConsDefn0_5,
#line 472 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__ConsDefn_6);

#line 439 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(
#line 439 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 439 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MaybeInstDet0_8,
#line 439 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MaybeInstDet_9,
#line 439 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 439 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_17,
#line 439 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_18);

#line 416 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(
#line 416 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 416 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MaybeInst0_8,
#line 416 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MaybeInst_9,
#line 416 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 416 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_16,
#line 416 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_17);

#line 368 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_merge_inst_info_6_p_0(
#line 368 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 368 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MergeInstInfo0_8,
#line 368 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MergeInstInfo_9,
#line 368 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 368 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_21,
#line 368 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22);

#line 350 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_inst_info_6_p_0(
#line 350 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 350 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__UnifyInstInfo0_8,
#line 350 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__UnifyInstInfo_9,
#line 350 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 350 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_23,
#line 350 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_24);

#line 201 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_table_5_p_0(
#line 201 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
#line 201 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34,
#line 201 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_35,
#line 201 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36,
#line 201 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);

#line 152 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0(
#line 152 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__ModuleName_8,
#line 152 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 152 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_10,
#line 152 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_0_48,
#line 152 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_49,
#line 152 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_0_50,
#line 152 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_51);

#line 136 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__mark_eqv_exported_types_3_p_0(
#line 136 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_4,
#line 136 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_0_8,
#line 136 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_9);

#line 129 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0_1(
#line 129 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 129 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 129 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 129 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3);

#line 123 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(
#line 123 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type_4,
#line 123 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_0_8,
#line 123 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_9);

#line 95 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_to_eqv_map_6_p_0(
#line 95 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_7,
#line 95 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Defn_8,
#line 95 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_30,
#line 95 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_31,
#line 95 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32,
#line 95 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33);

#line 90 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_5(
#line 90 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 90 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 90 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 90 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 90 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 90 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5);

#line 469 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_4(
#line 469 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 469 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 469 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2);

#line 75 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_3(
#line 75 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 75 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 75 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 75 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 75 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 75 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5);

#line 70 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_2(
#line 70 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 70 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 70 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 70 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3);

#line 68 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_1(
#line 68 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 68 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 68 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 68 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 68 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 68 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_5,
#line 68 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_6);


static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_1[14][3];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_2[6][2];

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_3[2][5];

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

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_2[6][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__equiv_type_hlds_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_2[2])),
    ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_1[3]))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&transform_hlds__equiv_type_hlds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "transform_hlds.equiv_type_hlds.mh"



#line 1593 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 1602 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 1610 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 1619 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 1628 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_recompilation_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_recompilation_info_0
  }
};

#line 1636 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1645 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1653 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1662 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1670 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1678 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1687 "transform_hlds.equiv_type_hlds.c"
static const MR_VA_PseudoTypeInfo_Struct3 transform_hlds__equiv_type_hlds____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1698 "transform_hlds.equiv_type_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__equiv_type_hlds__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1706 "transform_hlds.equiv_type_hlds.c"
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

#line 1723 "transform_hlds.equiv_type_hlds.c"
static const MR_PseudoTypeInfo transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_types_replace_info_0_0[6] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__equiv_type_hlds__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_inst_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1733 "transform_hlds.equiv_type_hlds.c"
static const MR_ConstString transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__field_names_replace_info_0_0[6] = {
  (MR_String) "ethri_module_info",
  (MR_String) "ethri_pred_info",
  (MR_String) "ethri_proc_info",
  (MR_String) "ethri_tvarset",
  (MR_String) "ethri_inst_cache",
  (MR_String) "ethri_recompute"
};

#line 1743 "transform_hlds.equiv_type_hlds.c"
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

#line 1758 "transform_hlds.equiv_type_hlds.c"
static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_stag_ordered_replace_info_0_0[1] = {
  &transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0
};

#line 1763 "transform_hlds.equiv_type_hlds.c"
static const MR_DuPtagLayout transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_ptag_ordered_replace_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_stag_ordered_replace_info_0_0
  }
};

#line 1772 "transform_hlds.equiv_type_hlds.c"
static const MR_DuFunctorDescPtr transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_name_ordered_replace_info_0[1] = {
  &transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__du_functor_desc_replace_info_0_0
};

#line 1777 "transform_hlds.equiv_type_hlds.c"
static const MR_Integer transform_hlds__equiv_type_hlds__transform_hlds__equiv_type_hlds__functor_number_map_replace_info_0[1] = {
  (MR_Integer) 0
};

#line 1782 "transform_hlds.equiv_type_hlds.c"
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

#line 1799 "transform_hlds.equiv_type_hlds.c"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0_10001(
#line 1802 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 1804 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2)
#line 1806 "transform_hlds.equiv_type_hlds.c"
{
#line 1808 "transform_hlds.equiv_type_hlds.c"
  {
#line 1810 "transform_hlds.equiv_type_hlds.c"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1813 "transform_hlds.equiv_type_hlds.c"
    {
#line 1815 "transform_hlds.equiv_type_hlds.c"
      transform_hlds__equiv_type_hlds__succeeded = transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0(((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2));
    }
#line 1818 "transform_hlds.equiv_type_hlds.c"
    return transform_hlds__equiv_type_hlds__succeeded;
#line 1820 "transform_hlds.equiv_type_hlds.c"
  }
#line 1822 "transform_hlds.equiv_type_hlds.c"
}

#line 1825 "transform_hlds.equiv_type_hlds.c"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0_10001(
#line 1828 "transform_hlds.equiv_type_hlds.c"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 1830 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 1832 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3)
#line 1834 "transform_hlds.equiv_type_hlds.c"
{
#line 1836 "transform_hlds.equiv_type_hlds.c"
  {
#line 1838 "transform_hlds.equiv_type_hlds.c"
    MR_Word transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1;

#line 1841 "transform_hlds.equiv_type_hlds.c"
    {
#line 1843 "transform_hlds.equiv_type_hlds.c"
      transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0(&transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3));
    }
#line 1846 "transform_hlds.equiv_type_hlds.c"
    *transform_hlds__equiv_type_hlds__wrapper_arg_1 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1));
#line 1848 "transform_hlds.equiv_type_hlds.c"
  }
#line 1850 "transform_hlds.equiv_type_hlds.c"
}

#line 1853 "transform_hlds.equiv_type_hlds.c"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0_10001(
#line 1856 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 1858 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2)
#line 1860 "transform_hlds.equiv_type_hlds.c"
{
#line 1862 "transform_hlds.equiv_type_hlds.c"
  {
#line 1864 "transform_hlds.equiv_type_hlds.c"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1867 "transform_hlds.equiv_type_hlds.c"
    {
#line 1869 "transform_hlds.equiv_type_hlds.c"
      transform_hlds__equiv_type_hlds__succeeded = transform_hlds__equiv_type_hlds____Unify____replace_info_0_0(((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2));
    }
#line 1872 "transform_hlds.equiv_type_hlds.c"
    return transform_hlds__equiv_type_hlds__succeeded;
#line 1874 "transform_hlds.equiv_type_hlds.c"
  }
#line 1876 "transform_hlds.equiv_type_hlds.c"
}

#line 1879 "transform_hlds.equiv_type_hlds.c"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0_10001(
#line 1882 "transform_hlds.equiv_type_hlds.c"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 1884 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 1886 "transform_hlds.equiv_type_hlds.c"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3)
#line 1888 "transform_hlds.equiv_type_hlds.c"
{
#line 1890 "transform_hlds.equiv_type_hlds.c"
  {
#line 1892 "transform_hlds.equiv_type_hlds.c"
    MR_Word transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1;

#line 1895 "transform_hlds.equiv_type_hlds.c"
    {
#line 1897 "transform_hlds.equiv_type_hlds.c"
      transform_hlds__equiv_type_hlds____Compare____replace_info_0_0(&transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3));
    }
#line 1900 "transform_hlds.equiv_type_hlds.c"
    *transform_hlds__equiv_type_hlds__wrapper_arg_1 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_HeadVar__1_1));
#line 1902 "transform_hlds.equiv_type_hlds.c"
  }
#line 1904 "transform_hlds.equiv_type_hlds.c"
}

#line 1308 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_103_111_97_108_95_95_49_51_48_56_95_95_49_95_95_91_50_93_95_48_6_p_0(
#line 1308 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1308 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__2_39,
#line 1308 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__3_40,
#line 1308 "equiv_type_hlds.m"
  MR_Tuple transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41,
#line 1308 "equiv_type_hlds.m"
  MR_Tuple * transform_hlds__equiv_type_hlds__LambdaHeadVar__5_42)
#line 1308 "equiv_type_hlds.m"
{
#line 1308 "equiv_type_hlds.m"
  {
#line 1308 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 1308 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_43_43;
#line 1308 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed1_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41, (MR_Integer) 0)));
#line 1308 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet1_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41, (MR_Integer) 1)));
#line 1308 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cache1_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41, (MR_Integer) 2)));
#line 1308 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstChanged_53;
#line 1308 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet2_54;
#line 1308 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cache2_55;

#line 1312 "equiv_type_hlds.m"
    {
#line 1312 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__LambdaHeadVar__2_39, transform_hlds__equiv_type_hlds__LambdaHeadVar__3_40, &transform_hlds__equiv_type_hlds__InstChanged_53, transform_hlds__equiv_type_hlds__TVarSet1_51, &transform_hlds__equiv_type_hlds__TVarSet2_54, transform_hlds__equiv_type_hlds__Cache1_52, &transform_hlds__equiv_type_hlds__Cache2_55);
    }
#line 1311 "equiv_type_hlds.m"
    {
#line 1311 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_43_43 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_50, transform_hlds__equiv_type_hlds__InstChanged_53);
    }
#line 1311 "equiv_type_hlds.m"
    {
#line 1311 "equiv_type_hlds.m"
      MR_Tuple base;
#line 1311 "equiv_type_hlds.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1311 "equiv_type_hlds.m"
      *transform_hlds__equiv_type_hlds__LambdaHeadVar__5_42 = base;
#line 1311 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_43_43));
#line 1311 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet2_54));
#line 1311 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cache2_55));
#line 1311 "equiv_type_hlds.m"
    }
#line 1308 "equiv_type_hlds.m"
  }
#line 1308 "equiv_type_hlds.m"
}

#line 314 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho10_10_p_0(
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10)
#line 314 "equiv_type_hlds.m"
{
#line 324 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 324 "equiv_type_hlds.m"
    {
#line 324 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 324 "equiv_type_hlds.m"
      {
#line 324 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 324 "equiv_type_hlds.m"
        if ((transform_hlds__equiv_type_hlds__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "equiv_type_hlds.m"
          {
#line 325 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9;
#line 325 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 325 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 324 "equiv_type_hlds.m"
          }
#line 324 "equiv_type_hlds.m"
        else
#line 328 "equiv_type_hlds.m"
          {
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Element0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 0)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Elements0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 1)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 0)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 1)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key_33;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__KeyChanged_34;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value_35;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__ValueChanged_36;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__TVarSet0_61;
#line 1162 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds___TVarSet_62;

#line 1161 "equiv_type_hlds.m"
            {
#line 1161 "equiv_type_hlds.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet0_61);
            }
#line 1162 "equiv_type_hlds.m"
            {
#line 1162 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Key0_31, &transform_hlds__equiv_type_hlds__Key_33, &transform_hlds__equiv_type_hlds__KeyChanged_34, transform_hlds__equiv_type_hlds__TVarSet0_61, &transform_hlds__equiv_type_hlds___TVarSet_62, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44);
            }
#line 331 "equiv_type_hlds.m"
            {
#line 331 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Value0_32, &transform_hlds__equiv_type_hlds__Value_35, &transform_hlds__equiv_type_hlds__ValueChanged_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45);
            }
#line 342 "equiv_type_hlds.m"
#line 342 "equiv_type_hlds.m"
            switch (transform_hlds__equiv_type_hlds__KeyChanged_34) {
#line 342 "equiv_type_hlds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 342 "equiv_type_hlds.m"
              case (MR_Integer) 0:
#line 333 "equiv_type_hlds.m"
                {
#line 333 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Element_37;

#line 337 "equiv_type_hlds.m"
#line 337 "equiv_type_hlds.m"
                  switch (transform_hlds__equiv_type_hlds__ValueChanged_36) {
#line 337 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 337 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 336 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__Element_37 = transform_hlds__equiv_type_hlds__Element0_26;
#line 337 "equiv_type_hlds.m"
                      break;
#line 337 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 339 "equiv_type_hlds.m"
                      {
#line 339 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key0_31));
#line 339 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 339 "equiv_type_hlds.m"
                      }
#line 337 "equiv_type_hlds.m"
                      break;
#line 337 "equiv_type_hlds.m"
                  }
#line 341 "equiv_type_hlds.m"
                  {
#line 341 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_37));
#line 341 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5));
#line 341 "equiv_type_hlds.m"
                  }
#line 333 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 333 "equiv_type_hlds.m"
                }
#line 342 "equiv_type_hlds.m"
                break;
#line 342 "equiv_type_hlds.m"
              case (MR_Integer) 1:
#line 343 "equiv_type_hlds.m"
                {
#line 343 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Element_51;

#line 344 "equiv_type_hlds.m"
                  {
#line 344 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 344 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key_33));
#line 344 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 344 "equiv_type_hlds.m"
                  }
#line 345 "equiv_type_hlds.m"
                  {
#line 345 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_51));
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7));
#line 345 "equiv_type_hlds.m"
                  }
#line 343 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 343 "equiv_type_hlds.m"
                }
#line 342 "equiv_type_hlds.m"
                break;
#line 342 "equiv_type_hlds.m"
            }
#line 347 "equiv_type_hlds.m"
            /* direct tailcall eliminated */
#line 347 "equiv_type_hlds.m"
            {
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4 = transform_hlds__equiv_type_hlds__Elements0_27;
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;

#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9;
#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7;
#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5;
#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__HeadVar__4_4 = transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4;
#line 347 "equiv_type_hlds.m"
            }
#line 347 "equiv_type_hlds.m"
            continue;
#line 328 "equiv_type_hlds.m"
          }
#line 324 "equiv_type_hlds.m"
      }
#line 324 "equiv_type_hlds.m"
      break;
#line 324 "equiv_type_hlds.m"
    }
#line 314 "equiv_type_hlds.m"
}

#line 314 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho9_10_p_0(
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10)
#line 314 "equiv_type_hlds.m"
{
#line 324 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 324 "equiv_type_hlds.m"
    {
#line 324 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 324 "equiv_type_hlds.m"
      {
#line 324 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 324 "equiv_type_hlds.m"
        if ((transform_hlds__equiv_type_hlds__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "equiv_type_hlds.m"
          {
#line 325 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9;
#line 325 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 325 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 324 "equiv_type_hlds.m"
          }
#line 324 "equiv_type_hlds.m"
        else
#line 328 "equiv_type_hlds.m"
          {
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Element0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 0)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Elements0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 1)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 0)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 1)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__KeyChanged_34;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value_35;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__ValueChanged_36;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__InstName0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 0)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Uniq_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Live_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Real_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__InstName_65;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__TVarSet0_74;
#line 1162 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds___TVarSet_75;

#line 1161 "equiv_type_hlds.m"
            {
#line 1161 "equiv_type_hlds.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet0_74);
            }
#line 1162 "equiv_type_hlds.m"
            {
#line 1162 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__InstName0_61, &transform_hlds__equiv_type_hlds__InstName_65, &transform_hlds__equiv_type_hlds__KeyChanged_34, transform_hlds__equiv_type_hlds__TVarSet0_74, &transform_hlds__equiv_type_hlds___TVarSet_75, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44);
            }
#line 331 "equiv_type_hlds.m"
            {
#line 331 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Value0_32, &transform_hlds__equiv_type_hlds__Value_35, &transform_hlds__equiv_type_hlds__ValueChanged_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45);
            }
#line 2290 "transform_hlds.equiv_type_hlds.c"
#line 2291 "transform_hlds.equiv_type_hlds.c"
            switch (transform_hlds__equiv_type_hlds__KeyChanged_34) {
#line 2293 "transform_hlds.equiv_type_hlds.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2295 "transform_hlds.equiv_type_hlds.c"
              case (MR_Integer) 0:
#line 2297 "transform_hlds.equiv_type_hlds.c"
                {
#line 2299 "transform_hlds.equiv_type_hlds.c"
                  MR_Word transform_hlds__equiv_type_hlds__Element_37;

#line 337 "equiv_type_hlds.m"
#line 337 "equiv_type_hlds.m"
                  switch (transform_hlds__equiv_type_hlds__ValueChanged_36) {
#line 337 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 337 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 336 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__Element_37 = transform_hlds__equiv_type_hlds__Element0_26;
#line 337 "equiv_type_hlds.m"
                      break;
#line 337 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 339 "equiv_type_hlds.m"
                      {
#line 339 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key0_31));
#line 339 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 339 "equiv_type_hlds.m"
                      }
#line 337 "equiv_type_hlds.m"
                      break;
#line 337 "equiv_type_hlds.m"
                  }
#line 341 "equiv_type_hlds.m"
                  {
#line 341 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_37));
#line 341 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5));
#line 341 "equiv_type_hlds.m"
                  }
#line 333 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 2341 "transform_hlds.equiv_type_hlds.c"
                }
#line 2343 "transform_hlds.equiv_type_hlds.c"
                break;
#line 2345 "transform_hlds.equiv_type_hlds.c"
              case (MR_Integer) 1:
#line 2347 "transform_hlds.equiv_type_hlds.c"
                {
#line 2349 "transform_hlds.equiv_type_hlds.c"
                  MR_Word transform_hlds__equiv_type_hlds__Element_51;
#line 2351 "transform_hlds.equiv_type_hlds.c"
                  MR_Word transform_hlds__equiv_type_hlds__Key_78;

#line 412 "equiv_type_hlds.m"
                  {
#line 412 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Key_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 412 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key_78, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstName_65));
#line 412 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key_78, 1) = ((MR_Box) ((transform_hlds__equiv_type_hlds__Uniq_62 | ((((transform_hlds__equiv_type_hlds__Live_63 << (MR_Integer) 3)) | ((transform_hlds__equiv_type_hlds__Real_64 << (MR_Integer) 4)))))));
#line 412 "equiv_type_hlds.m"
                  }
#line 344 "equiv_type_hlds.m"
                  {
#line 344 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 344 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key_78));
#line 344 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 344 "equiv_type_hlds.m"
                  }
#line 345 "equiv_type_hlds.m"
                  {
#line 345 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_51));
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7));
#line 345 "equiv_type_hlds.m"
                  }
#line 343 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 2386 "transform_hlds.equiv_type_hlds.c"
                }
#line 2388 "transform_hlds.equiv_type_hlds.c"
                break;
#line 2390 "transform_hlds.equiv_type_hlds.c"
            }
#line 347 "equiv_type_hlds.m"
            /* direct tailcall eliminated */
#line 347 "equiv_type_hlds.m"
            {
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4 = transform_hlds__equiv_type_hlds__Elements0_27;
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;

#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9;
#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7;
#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5;
#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__HeadVar__4_4 = transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4;
#line 347 "equiv_type_hlds.m"
            }
#line 347 "equiv_type_hlds.m"
            continue;
#line 328 "equiv_type_hlds.m"
          }
#line 324 "equiv_type_hlds.m"
      }
#line 324 "equiv_type_hlds.m"
      break;
#line 324 "equiv_type_hlds.m"
    }
#line 314 "equiv_type_hlds.m"
}

#line 314 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho8_10_p_0(
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10)
#line 314 "equiv_type_hlds.m"
{
#line 324 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 324 "equiv_type_hlds.m"
    {
#line 324 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 324 "equiv_type_hlds.m"
      {
#line 324 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 324 "equiv_type_hlds.m"
        if ((transform_hlds__equiv_type_hlds__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "equiv_type_hlds.m"
          {
#line 325 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9;
#line 325 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 325 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 324 "equiv_type_hlds.m"
          }
#line 324 "equiv_type_hlds.m"
        else
#line 328 "equiv_type_hlds.m"
          {
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Element0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 0)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Elements0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 1)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 0)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 1)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__KeyChanged_34;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value_35;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__ValueChanged_36;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__InstName0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 0)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Uniq_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Live_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Real_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key0_31, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__InstName_65;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__TVarSet0_74;
#line 1162 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds___TVarSet_75;

#line 1161 "equiv_type_hlds.m"
            {
#line 1161 "equiv_type_hlds.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet0_74);
            }
#line 1162 "equiv_type_hlds.m"
            {
#line 1162 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__InstName0_61, &transform_hlds__equiv_type_hlds__InstName_65, &transform_hlds__equiv_type_hlds__KeyChanged_34, transform_hlds__equiv_type_hlds__TVarSet0_74, &transform_hlds__equiv_type_hlds___TVarSet_75, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44);
            }
#line 331 "equiv_type_hlds.m"
            {
#line 331 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Value0_32, &transform_hlds__equiv_type_hlds__Value_35, &transform_hlds__equiv_type_hlds__ValueChanged_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45);
            }
#line 2528 "transform_hlds.equiv_type_hlds.c"
#line 2529 "transform_hlds.equiv_type_hlds.c"
            switch (transform_hlds__equiv_type_hlds__KeyChanged_34) {
#line 2531 "transform_hlds.equiv_type_hlds.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2533 "transform_hlds.equiv_type_hlds.c"
              case (MR_Integer) 0:
#line 2535 "transform_hlds.equiv_type_hlds.c"
                {
#line 2537 "transform_hlds.equiv_type_hlds.c"
                  MR_Word transform_hlds__equiv_type_hlds__Element_37;

#line 337 "equiv_type_hlds.m"
#line 337 "equiv_type_hlds.m"
                  switch (transform_hlds__equiv_type_hlds__ValueChanged_36) {
#line 337 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 337 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 336 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__Element_37 = transform_hlds__equiv_type_hlds__Element0_26;
#line 337 "equiv_type_hlds.m"
                      break;
#line 337 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 339 "equiv_type_hlds.m"
                      {
#line 339 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key0_31));
#line 339 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 339 "equiv_type_hlds.m"
                      }
#line 337 "equiv_type_hlds.m"
                      break;
#line 337 "equiv_type_hlds.m"
                  }
#line 341 "equiv_type_hlds.m"
                  {
#line 341 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_37));
#line 341 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5));
#line 341 "equiv_type_hlds.m"
                  }
#line 333 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 2579 "transform_hlds.equiv_type_hlds.c"
                }
#line 2581 "transform_hlds.equiv_type_hlds.c"
                break;
#line 2583 "transform_hlds.equiv_type_hlds.c"
              case (MR_Integer) 1:
#line 2585 "transform_hlds.equiv_type_hlds.c"
                {
#line 2587 "transform_hlds.equiv_type_hlds.c"
                  MR_Word transform_hlds__equiv_type_hlds__Element_51;
#line 2589 "transform_hlds.equiv_type_hlds.c"
                  MR_Word transform_hlds__equiv_type_hlds__Key_78;

#line 397 "equiv_type_hlds.m"
                  {
#line 397 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Key_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key_78, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstName_65));
#line 397 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Key_78, 1) = ((MR_Box) ((transform_hlds__equiv_type_hlds__Uniq_62 | ((((transform_hlds__equiv_type_hlds__Live_63 << (MR_Integer) 3)) | ((transform_hlds__equiv_type_hlds__Real_64 << (MR_Integer) 4)))))));
#line 397 "equiv_type_hlds.m"
                  }
#line 344 "equiv_type_hlds.m"
                  {
#line 344 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 344 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key_78));
#line 344 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 344 "equiv_type_hlds.m"
                  }
#line 345 "equiv_type_hlds.m"
                  {
#line 345 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_51));
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7));
#line 345 "equiv_type_hlds.m"
                  }
#line 343 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 2624 "transform_hlds.equiv_type_hlds.c"
                }
#line 2626 "transform_hlds.equiv_type_hlds.c"
                break;
#line 2628 "transform_hlds.equiv_type_hlds.c"
            }
#line 347 "equiv_type_hlds.m"
            /* direct tailcall eliminated */
#line 347 "equiv_type_hlds.m"
            {
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4 = transform_hlds__equiv_type_hlds__Elements0_27;
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;

#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9;
#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7;
#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5;
#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__HeadVar__4_4 = transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4;
#line 347 "equiv_type_hlds.m"
            }
#line 347 "equiv_type_hlds.m"
            continue;
#line 328 "equiv_type_hlds.m"
          }
#line 324 "equiv_type_hlds.m"
      }
#line 324 "equiv_type_hlds.m"
      break;
#line 324 "equiv_type_hlds.m"
    }
#line 314 "equiv_type_hlds.m"
}

#line 314 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho7_10_p_0(
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10)
#line 314 "equiv_type_hlds.m"
{
#line 324 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 324 "equiv_type_hlds.m"
    {
#line 324 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 324 "equiv_type_hlds.m"
      {
#line 324 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 324 "equiv_type_hlds.m"
        if ((transform_hlds__equiv_type_hlds__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "equiv_type_hlds.m"
          {
#line 325 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9;
#line 325 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 325 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 324 "equiv_type_hlds.m"
          }
#line 324 "equiv_type_hlds.m"
        else
#line 328 "equiv_type_hlds.m"
          {
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Element0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 0)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Elements0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 1)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 0)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 1)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key_33;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__KeyChanged_34;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value_35;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__ValueChanged_36;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;

#line 330 "equiv_type_hlds.m"
            {
#line 330 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_merge_inst_info_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Key0_31, &transform_hlds__equiv_type_hlds__Key_33, &transform_hlds__equiv_type_hlds__KeyChanged_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44);
            }
#line 331 "equiv_type_hlds.m"
            {
#line 331 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Value0_32, &transform_hlds__equiv_type_hlds__Value_35, &transform_hlds__equiv_type_hlds__ValueChanged_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45);
            }
#line 342 "equiv_type_hlds.m"
#line 342 "equiv_type_hlds.m"
            switch (transform_hlds__equiv_type_hlds__KeyChanged_34) {
#line 342 "equiv_type_hlds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 342 "equiv_type_hlds.m"
              case (MR_Integer) 0:
#line 333 "equiv_type_hlds.m"
                {
#line 333 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Element_37;

#line 337 "equiv_type_hlds.m"
#line 337 "equiv_type_hlds.m"
                  switch (transform_hlds__equiv_type_hlds__ValueChanged_36) {
#line 337 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 337 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 336 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__Element_37 = transform_hlds__equiv_type_hlds__Element0_26;
#line 337 "equiv_type_hlds.m"
                      break;
#line 337 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 339 "equiv_type_hlds.m"
                      {
#line 339 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key0_31));
#line 339 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 339 "equiv_type_hlds.m"
                      }
#line 337 "equiv_type_hlds.m"
                      break;
#line 337 "equiv_type_hlds.m"
                  }
#line 341 "equiv_type_hlds.m"
                  {
#line 341 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_37));
#line 341 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5));
#line 341 "equiv_type_hlds.m"
                  }
#line 333 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 333 "equiv_type_hlds.m"
                }
#line 342 "equiv_type_hlds.m"
                break;
#line 342 "equiv_type_hlds.m"
              case (MR_Integer) 1:
#line 343 "equiv_type_hlds.m"
                {
#line 343 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Element_51;

#line 344 "equiv_type_hlds.m"
                  {
#line 344 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 344 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key_33));
#line 344 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 344 "equiv_type_hlds.m"
                  }
#line 345 "equiv_type_hlds.m"
                  {
#line 345 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_51));
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7));
#line 345 "equiv_type_hlds.m"
                  }
#line 343 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 343 "equiv_type_hlds.m"
                }
#line 342 "equiv_type_hlds.m"
                break;
#line 342 "equiv_type_hlds.m"
            }
#line 347 "equiv_type_hlds.m"
            /* direct tailcall eliminated */
#line 347 "equiv_type_hlds.m"
            {
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4 = transform_hlds__equiv_type_hlds__Elements0_27;
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;

#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9;
#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7;
#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5;
#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__HeadVar__4_4 = transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4;
#line 347 "equiv_type_hlds.m"
            }
#line 347 "equiv_type_hlds.m"
            continue;
#line 328 "equiv_type_hlds.m"
          }
#line 324 "equiv_type_hlds.m"
      }
#line 324 "equiv_type_hlds.m"
      break;
#line 324 "equiv_type_hlds.m"
    }
#line 314 "equiv_type_hlds.m"
}

#line 314 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho6_10_p_0(
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8,
#line 314 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9,
#line 314 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10)
#line 314 "equiv_type_hlds.m"
{
#line 324 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 324 "equiv_type_hlds.m"
    {
#line 324 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 324 "equiv_type_hlds.m"
      {
#line 324 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 324 "equiv_type_hlds.m"
        if ((transform_hlds__equiv_type_hlds__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "equiv_type_hlds.m"
          {
#line 325 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_10 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9;
#line 325 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 325 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 324 "equiv_type_hlds.m"
          }
#line 324 "equiv_type_hlds.m"
        else
#line 328 "equiv_type_hlds.m"
          {
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Element0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 0)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Elements0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__4_4, (MR_Integer) 1)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 0)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element0_26, (MR_Integer) 1)));
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Key_33;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__KeyChanged_34;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Value_35;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__ValueChanged_36;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 328 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;

#line 330 "equiv_type_hlds.m"
            {
#line 330 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_unify_inst_info_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Key0_31, &transform_hlds__equiv_type_hlds__Key_33, &transform_hlds__equiv_type_hlds__KeyChanged_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44);
            }
#line 331 "equiv_type_hlds.m"
            {
#line 331 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__3_3, transform_hlds__equiv_type_hlds__Value0_32, &transform_hlds__equiv_type_hlds__Value_35, &transform_hlds__equiv_type_hlds__ValueChanged_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_44_44, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45);
            }
#line 342 "equiv_type_hlds.m"
#line 342 "equiv_type_hlds.m"
            switch (transform_hlds__equiv_type_hlds__KeyChanged_34) {
#line 342 "equiv_type_hlds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 342 "equiv_type_hlds.m"
              case (MR_Integer) 0:
#line 333 "equiv_type_hlds.m"
                {
#line 333 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Element_37;

#line 337 "equiv_type_hlds.m"
#line 337 "equiv_type_hlds.m"
                  switch (transform_hlds__equiv_type_hlds__ValueChanged_36) {
#line 337 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 337 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 336 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__Element_37 = transform_hlds__equiv_type_hlds__Element0_26;
#line 337 "equiv_type_hlds.m"
                      break;
#line 337 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 339 "equiv_type_hlds.m"
                      {
#line 339 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__Element_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key0_31));
#line 339 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_37, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 339 "equiv_type_hlds.m"
                      }
#line 337 "equiv_type_hlds.m"
                      break;
#line 337 "equiv_type_hlds.m"
                  }
#line 341 "equiv_type_hlds.m"
                  {
#line 341 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_37));
#line 341 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5));
#line 341 "equiv_type_hlds.m"
                  }
#line 333 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7;
#line 333 "equiv_type_hlds.m"
                }
#line 342 "equiv_type_hlds.m"
                break;
#line 342 "equiv_type_hlds.m"
              case (MR_Integer) 1:
#line 343 "equiv_type_hlds.m"
                {
#line 343 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Element_51;

#line 344 "equiv_type_hlds.m"
                  {
#line 344 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Element_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 344 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Key_33));
#line 344 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Element_51, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Value_35));
#line 344 "equiv_type_hlds.m"
                  }
#line 345 "equiv_type_hlds.m"
                  {
#line 345 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Element_51));
#line 345 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7));
#line 345 "equiv_type_hlds.m"
                  }
#line 343 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5;
#line 343 "equiv_type_hlds.m"
                }
#line 342 "equiv_type_hlds.m"
                break;
#line 342 "equiv_type_hlds.m"
            }
#line 347 "equiv_type_hlds.m"
            /* direct tailcall eliminated */
#line 347 "equiv_type_hlds.m"
            {
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4 = transform_hlds__equiv_type_hlds__Elements0_27;
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_47_47;
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_46_46;
#line 347 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_45_45;

#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0__tmp_copy_9;
#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0_7 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_UnSortedElements_0__tmp_copy_7;
#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0_5 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_RevSortedElements_0__tmp_copy_5;
#line 347 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__HeadVar__4_4 = transform_hlds__equiv_type_hlds__HeadVar__4__tmp_copy_4;
#line 347 "equiv_type_hlds.m"
            }
#line 347 "equiv_type_hlds.m"
            continue;
#line 328 "equiv_type_hlds.m"
          }
#line 324 "equiv_type_hlds.m"
      }
#line 324 "equiv_type_hlds.m"
      break;
#line 324 "equiv_type_hlds.m"
    }
#line 314 "equiv_type_hlds.m"
}

#line 291 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho5_7_p_0(
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21)
#line 291 "equiv_type_hlds.m"
{
#line 300 "equiv_type_hlds.m"
  {
#line 300 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 300 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__RevSortedElements1_14;
#line 300 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnSortedElements_15;

#line 301 "equiv_type_hlds.m"
    {
#line 301 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho6_10_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__SortedElements0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__RevSortedElements1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__UnSortedElements_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);
    }
#line 306 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__UnSortedElements_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "equiv_type_hlds.m"
      {
#line 305 "equiv_type_hlds.m"
        {
#line 305 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[13], transform_hlds__equiv_type_hlds__RevSortedElements1_14, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 305 "equiv_type_hlds.m"
          return;
        }
#line 304 "equiv_type_hlds.m"
      }
#line 306 "equiv_type_hlds.m"
    else
#line 307 "equiv_type_hlds.m"
      {
#line 307 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_30_30 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[13];
#line 307 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__SortedElements1_18;
#line 307 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__NowSortedElements_19;

#line 308 "equiv_type_hlds.m"
        {
#line 308 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__RevSortedElements1_14, &transform_hlds__equiv_type_hlds__SortedElements1_18);
        }
#line 309 "equiv_type_hlds.m"
        {
#line 309 "equiv_type_hlds.m"
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__UnSortedElements_15, &transform_hlds__equiv_type_hlds__NowSortedElements_19);
        }
#line 310 "equiv_type_hlds.m"
        {
#line 310 "equiv_type_hlds.m"
          mercury__list__merge_and_remove_dups_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__SortedElements1_18, transform_hlds__equiv_type_hlds__NowSortedElements_19, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 310 "equiv_type_hlds.m"
          return;
        }
#line 307 "equiv_type_hlds.m"
      }
#line 300 "equiv_type_hlds.m"
  }
#line 291 "equiv_type_hlds.m"
}

#line 291 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho4_7_p_0(
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21)
#line 291 "equiv_type_hlds.m"
{
#line 300 "equiv_type_hlds.m"
  {
#line 300 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 300 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__RevSortedElements1_14;
#line 300 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnSortedElements_15;

#line 301 "equiv_type_hlds.m"
    {
#line 301 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho7_10_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__SortedElements0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__RevSortedElements1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__UnSortedElements_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);
    }
#line 306 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__UnSortedElements_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "equiv_type_hlds.m"
      {
#line 305 "equiv_type_hlds.m"
        {
#line 305 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[12], transform_hlds__equiv_type_hlds__RevSortedElements1_14, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 305 "equiv_type_hlds.m"
          return;
        }
#line 304 "equiv_type_hlds.m"
      }
#line 306 "equiv_type_hlds.m"
    else
#line 307 "equiv_type_hlds.m"
      {
#line 307 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_30_30 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[12];
#line 307 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__SortedElements1_18;
#line 307 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__NowSortedElements_19;

#line 308 "equiv_type_hlds.m"
        {
#line 308 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__RevSortedElements1_14, &transform_hlds__equiv_type_hlds__SortedElements1_18);
        }
#line 309 "equiv_type_hlds.m"
        {
#line 309 "equiv_type_hlds.m"
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__UnSortedElements_15, &transform_hlds__equiv_type_hlds__NowSortedElements_19);
        }
#line 310 "equiv_type_hlds.m"
        {
#line 310 "equiv_type_hlds.m"
          mercury__list__merge_and_remove_dups_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__SortedElements1_18, transform_hlds__equiv_type_hlds__NowSortedElements_19, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 310 "equiv_type_hlds.m"
          return;
        }
#line 307 "equiv_type_hlds.m"
      }
#line 300 "equiv_type_hlds.m"
  }
#line 291 "equiv_type_hlds.m"
}

#line 291 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho3_7_p_0(
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21)
#line 291 "equiv_type_hlds.m"
{
#line 300 "equiv_type_hlds.m"
  {
#line 300 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 300 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__RevSortedElements1_14;
#line 300 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnSortedElements_15;

#line 301 "equiv_type_hlds.m"
    {
#line 301 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho8_10_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__SortedElements0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__RevSortedElements1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__UnSortedElements_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);
    }
#line 306 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__UnSortedElements_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "equiv_type_hlds.m"
      {
#line 305 "equiv_type_hlds.m"
        {
#line 305 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[11], transform_hlds__equiv_type_hlds__RevSortedElements1_14, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 305 "equiv_type_hlds.m"
          return;
        }
#line 304 "equiv_type_hlds.m"
      }
#line 306 "equiv_type_hlds.m"
    else
#line 307 "equiv_type_hlds.m"
      {
#line 307 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_30_30 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[11];
#line 307 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__SortedElements1_18;
#line 307 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__NowSortedElements_19;

#line 308 "equiv_type_hlds.m"
        {
#line 308 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__RevSortedElements1_14, &transform_hlds__equiv_type_hlds__SortedElements1_18);
        }
#line 309 "equiv_type_hlds.m"
        {
#line 309 "equiv_type_hlds.m"
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__UnSortedElements_15, &transform_hlds__equiv_type_hlds__NowSortedElements_19);
        }
#line 310 "equiv_type_hlds.m"
        {
#line 310 "equiv_type_hlds.m"
          mercury__list__merge_and_remove_dups_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__SortedElements1_18, transform_hlds__equiv_type_hlds__NowSortedElements_19, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 310 "equiv_type_hlds.m"
          return;
        }
#line 307 "equiv_type_hlds.m"
      }
#line 300 "equiv_type_hlds.m"
  }
#line 291 "equiv_type_hlds.m"
}

#line 291 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho2_7_p_0(
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21)
#line 291 "equiv_type_hlds.m"
{
#line 300 "equiv_type_hlds.m"
  {
#line 300 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 300 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__RevSortedElements1_14;
#line 300 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnSortedElements_15;

#line 301 "equiv_type_hlds.m"
    {
#line 301 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho9_10_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__SortedElements0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__RevSortedElements1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__UnSortedElements_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);
    }
#line 306 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__UnSortedElements_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "equiv_type_hlds.m"
      {
#line 305 "equiv_type_hlds.m"
        {
#line 305 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[10], transform_hlds__equiv_type_hlds__RevSortedElements1_14, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 305 "equiv_type_hlds.m"
          return;
        }
#line 304 "equiv_type_hlds.m"
      }
#line 306 "equiv_type_hlds.m"
    else
#line 307 "equiv_type_hlds.m"
      {
#line 307 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_30_30 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[10];
#line 307 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__SortedElements1_18;
#line 307 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__NowSortedElements_19;

#line 308 "equiv_type_hlds.m"
        {
#line 308 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__RevSortedElements1_14, &transform_hlds__equiv_type_hlds__SortedElements1_18);
        }
#line 309 "equiv_type_hlds.m"
        {
#line 309 "equiv_type_hlds.m"
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__UnSortedElements_15, &transform_hlds__equiv_type_hlds__NowSortedElements_19);
        }
#line 310 "equiv_type_hlds.m"
        {
#line 310 "equiv_type_hlds.m"
          mercury__list__merge_and_remove_dups_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__SortedElements1_18, transform_hlds__equiv_type_hlds__NowSortedElements_19, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 310 "equiv_type_hlds.m"
          return;
        }
#line 307 "equiv_type_hlds.m"
      }
#line 300 "equiv_type_hlds.m"
  }
#line 291 "equiv_type_hlds.m"
}

#line 291 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__SortedElements0_11,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__SortedElements_12,
#line 291 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20,
#line 291 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21)
#line 291 "equiv_type_hlds.m"
{
#line 300 "equiv_type_hlds.m"
  {
#line 300 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 300 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__RevSortedElements1_14;
#line 300 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnSortedElements_15;

#line 301 "equiv_type_hlds.m"
    {
#line 301 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table_elements__ho10_10_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__SortedElements0_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__RevSortedElements1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__UnSortedElements_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_21);
    }
#line 306 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__UnSortedElements_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "equiv_type_hlds.m"
      {
#line 305 "equiv_type_hlds.m"
        {
#line 305 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[9], transform_hlds__equiv_type_hlds__RevSortedElements1_14, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 305 "equiv_type_hlds.m"
          return;
        }
#line 304 "equiv_type_hlds.m"
      }
#line 306 "equiv_type_hlds.m"
    else
#line 307 "equiv_type_hlds.m"
      {
#line 307 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_30_30 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[9];
#line 307 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__SortedElements1_18;
#line 307 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__NowSortedElements_19;

#line 308 "equiv_type_hlds.m"
        {
#line 308 "equiv_type_hlds.m"
          mercury__list__reverse_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__RevSortedElements1_14, &transform_hlds__equiv_type_hlds__SortedElements1_18);
        }
#line 309 "equiv_type_hlds.m"
        {
#line 309 "equiv_type_hlds.m"
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__UnSortedElements_15, &transform_hlds__equiv_type_hlds__NowSortedElements_19);
        }
#line 310 "equiv_type_hlds.m"
        {
#line 310 "equiv_type_hlds.m"
          mercury__list__merge_and_remove_dups_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_30_30, transform_hlds__equiv_type_hlds__SortedElements1_18, transform_hlds__equiv_type_hlds__NowSortedElements_19, transform_hlds__equiv_type_hlds__SortedElements_12);
#line 310 "equiv_type_hlds.m"
          return;
        }
#line 307 "equiv_type_hlds.m"
      }
#line 300 "equiv_type_hlds.m"
  }
#line 291 "equiv_type_hlds.m"
}

#line 1467 "equiv_type_hlds.m"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal_expr__1467__1_2_p_0(
#line 1467 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__PolySpecs_95,
#line 1467 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_153)
#line 1467 "equiv_type_hlds.m"
{
#line 1467 "equiv_type_hlds.m"
  {
#line 1467 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1467 "equiv_type_hlds.m"
    {
#line 1467 "equiv_type_hlds.m"
      return transform_hlds__equiv_type_hlds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[4], ((MR_Box) (transform_hlds__equiv_type_hlds__PolySpecs_95)), ((MR_Box) (transform_hlds__equiv_type_hlds__HeadVar__2_153)));
    }
#line 1467 "equiv_type_hlds.m"
    return transform_hlds__equiv_type_hlds__succeeded;
#line 1467 "equiv_type_hlds.m"
  }
#line 1467 "equiv_type_hlds.m"
}

#line 1308 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal__1308__1_6_p_0(
#line 1308 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1308 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__1_38,
#line 1308 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__2_39,
#line 1308 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__3_40,
#line 1308 "equiv_type_hlds.m"
  MR_Tuple transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41,
#line 1308 "equiv_type_hlds.m"
  MR_Tuple * transform_hlds__equiv_type_hlds__LambdaHeadVar__5_42)
#line 1308 "equiv_type_hlds.m"
{
#line 1308 "equiv_type_hlds.m"
  {
#line 1308 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1308 "equiv_type_hlds.m"
    {
#line 1308 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_103_111_97_108_95_95_49_51_48_56_95_95_49_95_95_91_50_93_95_48_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__LambdaHeadVar__2_39, transform_hlds__equiv_type_hlds__LambdaHeadVar__3_40, transform_hlds__equiv_type_hlds__LambdaHeadVar__4_41, transform_hlds__equiv_type_hlds__LambdaHeadVar__5_42);
#line 1308 "equiv_type_hlds.m"
      return;
    }
#line 1308 "equiv_type_hlds.m"
  }
#line 1308 "equiv_type_hlds.m"
}

#line 589 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__589__1_3_p_0(
#line 589 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeMap_30,
#line 589 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_99,
#line 589 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_100)
#line 589 "equiv_type_hlds.m"
{
#line 589 "equiv_type_hlds.m"
  {
#line 589 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 589 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_101_101 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 589 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv0_HeadVar__3_100;

#line 589 "equiv_type_hlds.m"
    {
#line 589 "equiv_type_hlds.m"
      mercury__map__lookup_3_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_101_101, transform_hlds__equiv_type_hlds__TypeCtorInfo_101_101, transform_hlds__equiv_type_hlds__TypeMap_30, ((MR_Box) (transform_hlds__equiv_type_hlds__HeadVar__2_99)), &transform_hlds__equiv_type_hlds__conv0_HeadVar__3_100);
    }
#line 589 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__HeadVar__3_100 = ((MR_Word) transform_hlds__equiv_type_hlds__conv0_HeadVar__3_100);
#line 589 "equiv_type_hlds.m"
  }
#line 589 "equiv_type_hlds.m"
}

#line 583 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__583__1_6_p_0(
#line 583 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 583 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__1_65,
#line 583 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__2_66,
#line 583 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__3_67,
#line 583 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__LambdaHeadVar__4_68,
#line 583 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__LambdaHeadVar__5_69)
#line 583 "equiv_type_hlds.m"
{
#line 583 "equiv_type_hlds.m"
  {
#line 583 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 583 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_96_96;
#line 583 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__NewType_29;

#line 586 "equiv_type_hlds.m"
    {
#line 586 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__LambdaHeadVar__1_65, &transform_hlds__equiv_type_hlds__NewType_29, transform_hlds__equiv_type_hlds__LambdaHeadVar__4_68, transform_hlds__equiv_type_hlds__LambdaHeadVar__5_69);
    }
#line 3592 "transform_hlds.equiv_type_hlds.c"
    transform_hlds__equiv_type_hlds__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 587 "equiv_type_hlds.m"
    {
#line 587 "equiv_type_hlds.m"
      mercury__map__set_4_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_96_96, transform_hlds__equiv_type_hlds__TypeCtorInfo_96_96, ((MR_Box) (transform_hlds__equiv_type_hlds__LambdaHeadVar__1_65)), ((MR_Box) (transform_hlds__equiv_type_hlds__NewType_29)), transform_hlds__equiv_type_hlds__LambdaHeadVar__2_66, transform_hlds__equiv_type_hlds__LambdaHeadVar__3_67);
#line 587 "equiv_type_hlds.m"
      return;
    }
#line 583 "equiv_type_hlds.m"
  }
#line 583 "equiv_type_hlds.m"
}

#line 1287 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____replace_info_0_0(
#line 1287 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1287 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1287 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3)
#line 1287 "equiv_type_hlds.m"
{
#line 1287 "equiv_type_hlds.m"
  {
#line 1287 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 1287 "equiv_type_hlds.m"
    MR_Integer transform_hlds__equiv_type_hlds__CastX_21 = (MR_Integer) transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1287 "equiv_type_hlds.m"
    MR_Integer transform_hlds__equiv_type_hlds__CastY_22 = (MR_Integer) transform_hlds__equiv_type_hlds__HeadVar__3_3;

#line 1287 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__CastX_21 == transform_hlds__equiv_type_hlds__CastY_22);
#line 1287 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 3630 "transform_hlds.equiv_type_hlds.c"
      *transform_hlds__equiv_type_hlds__HeadVar__1_1 = (MR_Integer) 0;
#line 1287 "equiv_type_hlds.m"
    else
#line 1287 "equiv_type_hlds.m"
      {
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 2)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 3)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 4)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 5)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 0)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 1)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 2)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 3)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 4)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 5)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_16_16;

#line 1287 "equiv_type_hlds.m"
        {
#line 1287 "equiv_type_hlds.m"
          hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__equiv_type_hlds__V_16_16, transform_hlds__equiv_type_hlds__V_4_4, transform_hlds__equiv_type_hlds__V_10_10);
        }
#line 3668 "transform_hlds.equiv_type_hlds.c"
        transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_16_16 == (MR_Integer) 0);
#line 1287 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__succeeded = !(transform_hlds__equiv_type_hlds__succeeded);
#line 1287 "equiv_type_hlds.m"
        if (transform_hlds__equiv_type_hlds__succeeded)
#line 1287 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__V_16_16;
#line 1287 "equiv_type_hlds.m"
        else
#line 1287 "equiv_type_hlds.m"
          {
#line 1287 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__V_17_17;

#line 1287 "equiv_type_hlds.m"
            {
#line 1287 "equiv_type_hlds.m"
              hlds__hlds_pred____Compare____pred_info_0_0(&transform_hlds__equiv_type_hlds__V_17_17, transform_hlds__equiv_type_hlds__V_5_5, transform_hlds__equiv_type_hlds__V_11_11);
            }
#line 3688 "transform_hlds.equiv_type_hlds.c"
            transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_17_17 == (MR_Integer) 0);
#line 1287 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__succeeded = !(transform_hlds__equiv_type_hlds__succeeded);
#line 1287 "equiv_type_hlds.m"
            if (transform_hlds__equiv_type_hlds__succeeded)
#line 1287 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__V_17_17;
#line 1287 "equiv_type_hlds.m"
            else
#line 1287 "equiv_type_hlds.m"
              {
#line 1287 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_18_18;

#line 1287 "equiv_type_hlds.m"
                {
#line 1287 "equiv_type_hlds.m"
                  hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__equiv_type_hlds__V_18_18, transform_hlds__equiv_type_hlds__V_6_6, transform_hlds__equiv_type_hlds__V_12_12);
                }
#line 3708 "transform_hlds.equiv_type_hlds.c"
                transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_18_18 == (MR_Integer) 0);
#line 1287 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__succeeded = !(transform_hlds__equiv_type_hlds__succeeded);
#line 1287 "equiv_type_hlds.m"
                if (transform_hlds__equiv_type_hlds__succeeded)
#line 1287 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__V_18_18;
#line 1287 "equiv_type_hlds.m"
                else
#line 1287 "equiv_type_hlds.m"
                  {
#line 1287 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_19_19;

#line 1287 "equiv_type_hlds.m"
                    {
#line 1287 "equiv_type_hlds.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[2], &transform_hlds__equiv_type_hlds__V_19_19, ((MR_Box) (transform_hlds__equiv_type_hlds__V_7_7)), ((MR_Box) (transform_hlds__equiv_type_hlds__V_13_13)));
                    }
#line 3728 "transform_hlds.equiv_type_hlds.c"
                    transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_19_19 == (MR_Integer) 0);
#line 1287 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__succeeded = !(transform_hlds__equiv_type_hlds__succeeded);
#line 1287 "equiv_type_hlds.m"
                    if (transform_hlds__equiv_type_hlds__succeeded)
#line 1287 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__V_19_19;
#line 1287 "equiv_type_hlds.m"
                    else
#line 1287 "equiv_type_hlds.m"
                      {
#line 1287 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_20_20;

#line 1287 "equiv_type_hlds.m"
                        {
#line 1287 "equiv_type_hlds.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3], &transform_hlds__equiv_type_hlds__V_20_20, ((MR_Box) (transform_hlds__equiv_type_hlds__V_8_8)), ((MR_Box) (transform_hlds__equiv_type_hlds__V_14_14)));
                        }
#line 3748 "transform_hlds.equiv_type_hlds.c"
                        transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_20_20 == (MR_Integer) 0);
#line 1287 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__succeeded = !(transform_hlds__equiv_type_hlds__succeeded);
#line 1287 "equiv_type_hlds.m"
                        if (transform_hlds__equiv_type_hlds__succeeded)
#line 1287 "equiv_type_hlds.m"
                          *transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__V_20_20;
#line 1287 "equiv_type_hlds.m"
                        else
#line 1287 "equiv_type_hlds.m"
                          {
#line 1287 "equiv_type_hlds.m"
                            MR_Integer transform_hlds__equiv_type_hlds__V_29_29 = (MR_Integer) transform_hlds__equiv_type_hlds__V_9_9;
#line 1287 "equiv_type_hlds.m"
                            MR_Integer transform_hlds__equiv_type_hlds__V_30_30 = (MR_Integer) transform_hlds__equiv_type_hlds__V_15_15;

#line 1287 "equiv_type_hlds.m"
                            {
#line 1287 "equiv_type_hlds.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__V_29_29, transform_hlds__equiv_type_hlds__V_30_30);
#line 1287 "equiv_type_hlds.m"
                              return;
                            }
#line 1287 "equiv_type_hlds.m"
                          }
#line 1287 "equiv_type_hlds.m"
                      }
#line 1287 "equiv_type_hlds.m"
                  }
#line 1287 "equiv_type_hlds.m"
              }
#line 1287 "equiv_type_hlds.m"
          }
#line 1287 "equiv_type_hlds.m"
      }
#line 1287 "equiv_type_hlds.m"
  }
#line 1287 "equiv_type_hlds.m"
}

#line 1287 "equiv_type_hlds.m"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____replace_info_0_0(
#line 1287 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1287 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2)
#line 1287 "equiv_type_hlds.m"
{
#line 1287 "equiv_type_hlds.m"
  {
#line 1287 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 1287 "equiv_type_hlds.m"
    MR_Integer transform_hlds__equiv_type_hlds__CastX_15 = (MR_Integer) transform_hlds__equiv_type_hlds__HeadVar__1_1;
#line 1287 "equiv_type_hlds.m"
    MR_Integer transform_hlds__equiv_type_hlds__CastY_16 = (MR_Integer) transform_hlds__equiv_type_hlds__HeadVar__2_2;

#line 1287 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__CastX_15 == transform_hlds__equiv_type_hlds__CastY_16);
#line 1287 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 1287 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__succeeded = MR_TRUE;
#line 1287 "equiv_type_hlds.m"
    else
#line 1287 "equiv_type_hlds.m"
      {
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_20_20;
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_21_21;
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 0)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 1)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 2)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 3)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 4)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 5)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 2)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 3)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 4)));
#line 1287 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 5)));

#line 3846 "transform_hlds.equiv_type_hlds.c"
        {
#line 3848 "transform_hlds.equiv_type_hlds.c"
          transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__equiv_type_hlds__V_3_3, transform_hlds__equiv_type_hlds__V_9_9);
        }
#line 1287 "equiv_type_hlds.m"
        if (transform_hlds__equiv_type_hlds__succeeded)
#line 1287 "equiv_type_hlds.m"
          {
#line 3855 "transform_hlds.equiv_type_hlds.c"
            {
#line 3857 "transform_hlds.equiv_type_hlds.c"
              transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(transform_hlds__equiv_type_hlds__V_4_4, transform_hlds__equiv_type_hlds__V_10_10);
            }
#line 1287 "equiv_type_hlds.m"
            if (transform_hlds__equiv_type_hlds__succeeded)
#line 1287 "equiv_type_hlds.m"
              {
#line 3864 "transform_hlds.equiv_type_hlds.c"
                {
#line 3866 "transform_hlds.equiv_type_hlds.c"
                  transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__equiv_type_hlds__V_5_5, transform_hlds__equiv_type_hlds__V_11_11);
                }
#line 1287 "equiv_type_hlds.m"
                if (transform_hlds__equiv_type_hlds__succeeded)
#line 1287 "equiv_type_hlds.m"
                  {
#line 3873 "transform_hlds.equiv_type_hlds.c"
                    transform_hlds__equiv_type_hlds__TypeInfo_20_20 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[2];
#line 3875 "transform_hlds.equiv_type_hlds.c"
                    {
#line 3877 "transform_hlds.equiv_type_hlds.c"
                      transform_hlds__equiv_type_hlds__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_20_20, ((MR_Box) (transform_hlds__equiv_type_hlds__V_6_6)), ((MR_Box) (transform_hlds__equiv_type_hlds__V_12_12)));
                    }
#line 1287 "equiv_type_hlds.m"
                    if (transform_hlds__equiv_type_hlds__succeeded)
#line 1287 "equiv_type_hlds.m"
                      {
#line 3884 "transform_hlds.equiv_type_hlds.c"
                        transform_hlds__equiv_type_hlds__TypeInfo_21_21 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3];
#line 3886 "transform_hlds.equiv_type_hlds.c"
                        {
#line 3888 "transform_hlds.equiv_type_hlds.c"
                          transform_hlds__equiv_type_hlds__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__equiv_type_hlds__TypeInfo_21_21, ((MR_Box) (transform_hlds__equiv_type_hlds__V_7_7)), ((MR_Box) (transform_hlds__equiv_type_hlds__V_13_13)));
                        }
#line 1287 "equiv_type_hlds.m"
                        if (transform_hlds__equiv_type_hlds__succeeded)
#line 3893 "transform_hlds.equiv_type_hlds.c"
                          transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_8_8 == transform_hlds__equiv_type_hlds__V_14_14);
#line 1287 "equiv_type_hlds.m"
                      }
#line 1287 "equiv_type_hlds.m"
                  }
#line 1287 "equiv_type_hlds.m"
              }
#line 1287 "equiv_type_hlds.m"
          }
#line 1287 "equiv_type_hlds.m"
      }
#line 1287 "equiv_type_hlds.m"
    return transform_hlds__equiv_type_hlds__succeeded;
#line 1287 "equiv_type_hlds.m"
  }
#line 1287 "equiv_type_hlds.m"
}

#line 1272 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds____Compare____inst_cache_0_0(
#line 1272 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1272 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1272 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3)
#line 1272 "equiv_type_hlds.m"
{
#line 1272 "equiv_type_hlds.m"
  {
#line 1272 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 1272 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cast_HeadVar1_4 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1272 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cast_HeadVar2_5 = transform_hlds__equiv_type_hlds__HeadVar__3_3;

#line 1272 "equiv_type_hlds.m"
    {
#line 1272 "equiv_type_hlds.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3], transform_hlds__equiv_type_hlds__HeadVar__1_1, ((MR_Box) (transform_hlds__equiv_type_hlds__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__equiv_type_hlds__Cast_HeadVar2_5)));
#line 1272 "equiv_type_hlds.m"
      return;
    }
#line 1272 "equiv_type_hlds.m"
  }
#line 1272 "equiv_type_hlds.m"
}

#line 1272 "equiv_type_hlds.m"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds____Unify____inst_cache_0_0(
#line 1272 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1272 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2)
#line 1272 "equiv_type_hlds.m"
{
#line 1272 "equiv_type_hlds.m"
  {
#line 1272 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 1272 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cast_HeadVar1_3 = transform_hlds__equiv_type_hlds__HeadVar__1_1;
#line 1272 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cast_HeadVar2_4 = transform_hlds__equiv_type_hlds__HeadVar__2_2;

#line 1272 "equiv_type_hlds.m"
    {
#line 1272 "equiv_type_hlds.m"
      return transform_hlds__equiv_type_hlds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3], ((MR_Box) (transform_hlds__equiv_type_hlds__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__equiv_type_hlds__Cast_HeadVar2_4)));
    }
#line 1272 "equiv_type_hlds.m"
    return transform_hlds__equiv_type_hlds__succeeded;
#line 1272 "equiv_type_hlds.m"
  }
#line 1272 "equiv_type_hlds.m"
}

#line 1663 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(
#line 1663 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1663 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1663 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1663 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1663 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_5,
#line 1663 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_6,
#line 1663 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_7,
#line 1663 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_8)
#line 1663 "equiv_type_hlds.m"
{
#line 1668 "equiv_type_hlds.m"
  {
#line 1668 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1668 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1668 "equiv_type_hlds.m"
      {
#line 1668 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1668 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
#line 1668 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_7;
#line 1668 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_5;
#line 1668 "equiv_type_hlds.m"
      }
#line 1668 "equiv_type_hlds.m"
    else
#line 1670 "equiv_type_hlds.m"
      {
#line 1670 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__A0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1670 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__As0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1670 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__A_24;
#line 1670 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed0_25;
#line 1670 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__As_26;
#line 1670 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed1_27;
#line 1670 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_32_32;
#line 1670 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33_33;
#line 1670 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A0_18, (MR_Integer) 0)));
#line 1670 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__NameMode_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A0_18, (MR_Integer) 1)));
#line 1670 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Type0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A0_18, (MR_Integer) 2)));
#line 1670 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__BoxPolicy_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A0_18, (MR_Integer) 3)));
#line 1670 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Type_50;

#line 1658 "equiv_type_hlds.m"
        {
#line 1658 "equiv_type_hlds.m"
          parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Type0_48, &transform_hlds__equiv_type_hlds__Type_50, &transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33_33);
        }
#line 1660 "equiv_type_hlds.m"
#line 1660 "equiv_type_hlds.m"
        switch (transform_hlds__equiv_type_hlds__Changed0_25) {
#line 1660 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1660 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1660 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__A_24 = transform_hlds__equiv_type_hlds__A0_18;
#line 1660 "equiv_type_hlds.m"
            break;
#line 1660 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1659 "equiv_type_hlds.m"
            {
#line 1659 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__A_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1659 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A_24, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_46));
#line 1659 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A_24, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__NameMode_47));
#line 1659 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A_24, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_50));
#line 1659 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__A_24, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__BoxPolicy_49));
#line 1659 "equiv_type_hlds.m"
            }
#line 1660 "equiv_type_hlds.m"
            break;
#line 1660 "equiv_type_hlds.m"
        }
#line 1672 "equiv_type_hlds.m"
        {
#line 1672 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__As0_19, &transform_hlds__equiv_type_hlds__As_26, &transform_hlds__equiv_type_hlds__Changed1_27, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_6, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_8);
        }
#line 1673 "equiv_type_hlds.m"
        {
#line 1673 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__Changed1_27);
        }
#line 1675 "equiv_type_hlds.m"
#line 1675 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
#line 1675 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1675 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1675 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1675 "equiv_type_hlds.m"
            break;
#line 1675 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1674 "equiv_type_hlds.m"
            {
#line 1674 "equiv_type_hlds.m"
              MR_Word base;
#line 1674 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1674 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
#line 1674 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__A_24));
#line 1674 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__As_26));
#line 1674 "equiv_type_hlds.m"
            }
#line 1675 "equiv_type_hlds.m"
            break;
#line 1675 "equiv_type_hlds.m"
        }
#line 1670 "equiv_type_hlds.m"
      }
#line 1668 "equiv_type_hlds.m"
  }
#line 1663 "equiv_type_hlds.m"
}

#line 1634 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_uni_modes_6_p_0(
#line 1634 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1634 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1634 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1634 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1634 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
#line 1634 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6)
#line 1634 "equiv_type_hlds.m"
{
#line 1638 "equiv_type_hlds.m"
  {
#line 1638 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1638 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1638 "equiv_type_hlds.m"
      {
#line 1638 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1638 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
#line 1638 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5;
#line 1638 "equiv_type_hlds.m"
      }
#line 1638 "equiv_type_hlds.m"
    else
#line 1639 "equiv_type_hlds.m"
      {
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__H0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__T0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__T_18;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed0_19;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__H_20;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed1_21;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstA0_33;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstB0_34;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstC0_35;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstD0_36;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstA_39;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed1_40;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstB_41;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed2_42;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstC_43;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed3_44;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstD_45;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed4_46;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_47_47;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_48_48;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_49;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_50;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_51;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_52;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_53;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_54;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_36_55;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37_56;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_57;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_39_58;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_59_59;
#line 1639 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_60_60;
#line 1616 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_65_65;
#line 1616 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_66_66;
#line 1616 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_67_67;
#line 1616 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_69_69;

#line 1640 "equiv_type_hlds.m"
        {
#line 1640 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_uni_modes_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__T0_14, &transform_hlds__equiv_type_hlds__T_18, &transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24);
        }
#line 1614 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H0_13, (MR_Integer) 0)));
#line 1614 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H0_13, (MR_Integer) 1)));
#line 1614 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__InstA0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_47_47, (MR_Integer) 0)));
#line 1614 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__InstB0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_47_47, (MR_Integer) 1)));
#line 1614 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__InstC0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_48_48, (MR_Integer) 0)));
#line 1614 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__InstD0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_48_48, (MR_Integer) 1)));
#line 1616 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 0)));
#line 1616 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 1)));
#line 1616 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 2)));
#line 1616 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 3)));
#line 1616 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 4)));
#line 1616 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 5)));
#line 1618 "equiv_type_hlds.m"
        {
#line 1618 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__InstA0_33, &transform_hlds__equiv_type_hlds__InstA_39, &transform_hlds__equiv_type_hlds__Changed1_40, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_49, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_50, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_52);
        }
#line 1619 "equiv_type_hlds.m"
        {
#line 1619 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__InstB0_34, &transform_hlds__equiv_type_hlds__InstB_41, &transform_hlds__equiv_type_hlds__Changed2_42, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_51, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_53, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_52, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_54);
        }
#line 1620 "equiv_type_hlds.m"
        {
#line 1620 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__InstC0_35, &transform_hlds__equiv_type_hlds__InstC_43, &transform_hlds__equiv_type_hlds__Changed3_44, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_53, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_36_55, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_54, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37_56);
        }
#line 1621 "equiv_type_hlds.m"
        {
#line 1621 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__InstD0_36, &transform_hlds__equiv_type_hlds__InstD_45, &transform_hlds__equiv_type_hlds__Changed4_46, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_36_55, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_57, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37_56, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_39_58);
        }
#line 1622 "equiv_type_hlds.m"
        {
#line 1622 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_60_60 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_40, transform_hlds__equiv_type_hlds__Changed2_42);
        }
#line 1622 "equiv_type_hlds.m"
        {
#line 1622 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_59_59 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__V_60_60, transform_hlds__equiv_type_hlds__Changed3_44);
        }
#line 1622 "equiv_type_hlds.m"
        {
#line 1622 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__Changed1_21 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__V_59_59, transform_hlds__equiv_type_hlds__Changed4_46);
        }
#line 1628 "equiv_type_hlds.m"
#line 1628 "equiv_type_hlds.m"
        switch (transform_hlds__equiv_type_hlds__Changed1_21) {
#line 1628 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1628 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1629 "equiv_type_hlds.m"
            {
#line 1630 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__H_20 = transform_hlds__equiv_type_hlds__H0_13;
#line 1629 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24;
#line 1629 "equiv_type_hlds.m"
            }
#line 1628 "equiv_type_hlds.m"
            break;
#line 1628 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1624 "equiv_type_hlds.m"
            {
#line 1624 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_63_63;
#line 1624 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_64_64;
#line 1624 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 0)));
#line 1624 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 1)));
#line 1624 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 2)));
#line 1624 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 5)));
#line 1625 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 3)));
#line 1625 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, (MR_Integer) 4)));

#line 1626 "equiv_type_hlds.m"
              {
#line 1626 "equiv_type_hlds.m"
                MR_Word base;
#line 1626 "equiv_type_hlds.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1626 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6 = base;
#line 1626 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_75_75));
#line 1626 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_76_76));
#line 1626 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_77_77));
#line 1626 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_57));
#line 1626 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_39_58));
#line 1626 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_80_80));
#line 1626 "equiv_type_hlds.m"
              }
#line 1627 "equiv_type_hlds.m"
              {
#line 1627 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1627 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_63_63, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_39));
#line 1627 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_63_63, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_41));
#line 1627 "equiv_type_hlds.m"
              }
#line 1627 "equiv_type_hlds.m"
              {
#line 1627 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1627 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_64_64, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstC_43));
#line 1627 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_64_64, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstD_45));
#line 1627 "equiv_type_hlds.m"
              }
#line 1627 "equiv_type_hlds.m"
              {
#line 1627 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__H_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1627 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H_20, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_63_63));
#line 1627 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H_20, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_64_64));
#line 1627 "equiv_type_hlds.m"
              }
#line 1624 "equiv_type_hlds.m"
            }
#line 1628 "equiv_type_hlds.m"
            break;
#line 1628 "equiv_type_hlds.m"
        }
#line 1642 "equiv_type_hlds.m"
        {
#line 1642 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__Changed1_21);
        }
#line 1644 "equiv_type_hlds.m"
#line 1644 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
#line 1644 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1644 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1644 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1644 "equiv_type_hlds.m"
            break;
#line 1644 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1643 "equiv_type_hlds.m"
            {
#line 1643 "equiv_type_hlds.m"
              MR_Word base;
#line 1643 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1643 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
#line 1643 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__H_20));
#line 1643 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__T_18));
#line 1643 "equiv_type_hlds.m"
            }
#line 1644 "equiv_type_hlds.m"
            break;
#line 1644 "equiv_type_hlds.m"
        }
#line 1639 "equiv_type_hlds.m"
      }
#line 1638 "equiv_type_hlds.m"
  }
#line 1634 "equiv_type_hlds.m"
}

#line 1610 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_uni_mode_6_p_0(
#line 1610 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1610 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__UniMode0_8,
#line 1610 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__UniMode_9,
#line 1610 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 1610 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_26,
#line 1610 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_27)
#line 1610 "equiv_type_hlds.m"
{
#line 1613 "equiv_type_hlds.m"
  {
#line 1613 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstA0_12;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstB0_13;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstC0_14;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstD0_15;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstA_18;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed1_19;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstB_20;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed2_21;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstC_22;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed3_23;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstD_24;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed4_25;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UniMode0_8, (MR_Integer) 0)));
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UniMode0_8, (MR_Integer) 1)));
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_30;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_31;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_34;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_35;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_36_36;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37_37;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_38;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_39_39;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_40_40;
#line 1613 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_41_41;
#line 1616 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_46_46;
#line 1616 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_47_47;
#line 1616 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_48_48;
#line 1616 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_50_50;

#line 1614 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__InstA0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_28_28, (MR_Integer) 0)));
#line 1614 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__InstB0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_28_28, (MR_Integer) 1)));
#line 1614 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__InstC0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_29_29, (MR_Integer) 0)));
#line 1614 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__InstD0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_29_29, (MR_Integer) 1)));
#line 1616 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 1616 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 1616 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 1616 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 1616 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
#line 1616 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
#line 1618 "equiv_type_hlds.m"
    {
#line 1618 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstA0_12, &transform_hlds__equiv_type_hlds__InstA_18, &transform_hlds__equiv_type_hlds__Changed1_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_30, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_31, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33);
    }
#line 1619 "equiv_type_hlds.m"
    {
#line 1619 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstB0_13, &transform_hlds__equiv_type_hlds__InstB_20, &transform_hlds__equiv_type_hlds__Changed2_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_35);
    }
#line 1620 "equiv_type_hlds.m"
    {
#line 1620 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstC0_14, &transform_hlds__equiv_type_hlds__InstC_22, &transform_hlds__equiv_type_hlds__Changed3_23, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_34, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_36_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_35, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37_37);
    }
#line 1621 "equiv_type_hlds.m"
    {
#line 1621 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstD0_15, &transform_hlds__equiv_type_hlds__InstD_24, &transform_hlds__equiv_type_hlds__Changed4_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_36_36, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_38, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37_37, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_39_39);
    }
#line 1622 "equiv_type_hlds.m"
    {
#line 1622 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_41_41 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_19, transform_hlds__equiv_type_hlds__Changed2_21);
    }
#line 1622 "equiv_type_hlds.m"
    {
#line 1622 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_40_40 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__V_41_41, transform_hlds__equiv_type_hlds__Changed3_23);
    }
#line 1622 "equiv_type_hlds.m"
    {
#line 1622 "equiv_type_hlds.m"
      *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__V_40_40, transform_hlds__equiv_type_hlds__Changed4_25);
    }
#line 1628 "equiv_type_hlds.m"
#line 1628 "equiv_type_hlds.m"
    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1628 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1628 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 1629 "equiv_type_hlds.m"
        {
#line 1630 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__UniMode_9 = transform_hlds__equiv_type_hlds__UniMode0_8;
#line 1629 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_27 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_26;
#line 1629 "equiv_type_hlds.m"
        }
#line 1628 "equiv_type_hlds.m"
        break;
#line 1628 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 1624 "equiv_type_hlds.m"
        {
#line 1624 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_44_44;
#line 1624 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_45_45;
#line 1624 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 1624 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 1624 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 1624 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
#line 1625 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 1625 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));

#line 1626 "equiv_type_hlds.m"
          {
#line 1626 "equiv_type_hlds.m"
            MR_Word base;
#line 1626 "equiv_type_hlds.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1626 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_27 = base;
#line 1626 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_56_56));
#line 1626 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_57_57));
#line 1626 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_58_58));
#line 1626 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_38));
#line 1626 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_39_39));
#line 1626 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_61_61));
#line 1626 "equiv_type_hlds.m"
          }
#line 1627 "equiv_type_hlds.m"
          {
#line 1627 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1627 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_44_44, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_18));
#line 1627 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_44_44, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_20));
#line 1627 "equiv_type_hlds.m"
          }
#line 1627 "equiv_type_hlds.m"
          {
#line 1627 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1627 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_45_45, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstC_22));
#line 1627 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_45_45, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstD_24));
#line 1627 "equiv_type_hlds.m"
          }
#line 1627 "equiv_type_hlds.m"
          {
#line 1627 "equiv_type_hlds.m"
            MR_Word base;
#line 1627 "equiv_type_hlds.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1627 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__UniMode_9 = base;
#line 1627 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_44_44));
#line 1627 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_45_45));
#line 1627 "equiv_type_hlds.m"
          }
#line 1624 "equiv_type_hlds.m"
        }
#line 1628 "equiv_type_hlds.m"
        break;
#line 1628 "equiv_type_hlds.m"
    }
#line 1613 "equiv_type_hlds.m"
  }
#line 1610 "equiv_type_hlds.m"
}

#line 1577 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unification_6_p_0(
#line 1577 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1577 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Uni0_8,
#line 1577 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Uni_9,
#line 1577 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 1577 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_35,
#line 1577 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_36)
#line 1577 "equiv_type_hlds.m"
{
#line 1585 "equiv_type_hlds.m"
  {
#line 1585 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1585 "equiv_type_hlds.m"
#line 1585 "equiv_type_hlds.m"
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Uni0_8)) {
#line 1585 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1585 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 1595 "equiv_type_hlds.m"
        {
#line 1595 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__UniModes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 3)));
#line 1595 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__UniModes_28;
#line 1596 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 0)));
#line 1596 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 1)));
#line 1596 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 2)));
#line 1596 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 4)));
#line 1596 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 5)));
#line 1596 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 6)));

#line 1597 "equiv_type_hlds.m"
          {
#line 1597 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_uni_modes_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__UniModes0_27, &transform_hlds__equiv_type_hlds__UniModes_28, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_36);
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
                MR_Word transform_hlds__equiv_type_hlds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 0)));
#line 1598 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 1)));
#line 1598 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 2)));
#line 1598 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 4)));
#line 1598 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 5)));
#line 1598 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 6)));
#line 1598 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 3)));

#line 1598 "equiv_type_hlds.m"
                {
#line 1598 "equiv_type_hlds.m"
                  MR_Word base;
#line 1598 "equiv_type_hlds.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1598 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Uni_9 = base;
#line 1598 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_48_48));
#line 1598 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_49_49));
#line 1598 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_50_50));
#line 1598 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__UniModes_28));
#line 1598 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_52_52));
#line 1598 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_53_53));
#line 1598 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_54_54));
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
#line 1585 "equiv_type_hlds.m"
        break;
#line 1585 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 1602 "equiv_type_hlds.m"
        {
#line 1602 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__UniModes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 3)));
#line 1602 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__UniModes_41;
#line 1603 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 0)));
#line 1603 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 1)));
#line 1603 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 2)));
#line 1603 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 4)));
#line 1603 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 5)));

#line 1604 "equiv_type_hlds.m"
          {
#line 1604 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_uni_modes_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__UniModes0_40, &transform_hlds__equiv_type_hlds__UniModes_41, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_36);
          }
#line 1606 "equiv_type_hlds.m"
#line 1606 "equiv_type_hlds.m"
          switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1606 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1606 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 1606 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Uni_9 = transform_hlds__equiv_type_hlds__Uni0_8;
#line 1606 "equiv_type_hlds.m"
              break;
#line 1606 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 1605 "equiv_type_hlds.m"
              {
#line 1605 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 0)));
#line 1605 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 1)));
#line 1605 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 2)));
#line 1605 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 4)));
#line 1605 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 5)));
#line 1605 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 3)));

#line 1605 "equiv_type_hlds.m"
                {
#line 1605 "equiv_type_hlds.m"
                  MR_Word base;
#line 1605 "equiv_type_hlds.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1605 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Uni_9 = base;
#line 1605 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_60_60));
#line 1605 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_61_61));
#line 1605 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_62_62));
#line 1605 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__UniModes_41));
#line 1605 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_64_64));
#line 1605 "equiv_type_hlds.m"
                  MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_65_65));
#line 1605 "equiv_type_hlds.m"
                }
#line 1605 "equiv_type_hlds.m"
              }
#line 1606 "equiv_type_hlds.m"
              break;
#line 1606 "equiv_type_hlds.m"
          }
#line 1602 "equiv_type_hlds.m"
        }
#line 1585 "equiv_type_hlds.m"
        break;
#line 1585 "equiv_type_hlds.m"
      case (MR_Integer) 2:
#line 1585 "equiv_type_hlds.m"
        {
#line 1586 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Uni_9 = transform_hlds__equiv_type_hlds__Uni0_8;
#line 1587 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
#line 1585 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_36 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_35;
#line 1585 "equiv_type_hlds.m"
        }
#line 1585 "equiv_type_hlds.m"
        break;
#line 1585 "equiv_type_hlds.m"
      case (MR_Integer) 3:
#line 1585 "equiv_type_hlds.m"
#line 1585 "equiv_type_hlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 0)))) {
#line 1585 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1585 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1585 "equiv_type_hlds.m"
            {
#line 1586 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Uni_9 = transform_hlds__equiv_type_hlds__Uni0_8;
#line 1587 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
#line 1585 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_36 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_35;
#line 1585 "equiv_type_hlds.m"
            }
#line 1585 "equiv_type_hlds.m"
            break;
#line 1585 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1589 "equiv_type_hlds.m"
            {
#line 1589 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__UniMode0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 1)));
#line 1589 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__B_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 2)));
#line 1589 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__C_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Uni0_8, (MR_Integer) 3)));
#line 1589 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__UniMode_19;

#line 1590 "equiv_type_hlds.m"
              {
#line 1590 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_uni_mode_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__UniMode0_16, &transform_hlds__equiv_type_hlds__UniMode_19, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_36);
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
                    MR_Word base;
#line 1591 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1591 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Uni_9 = base;
#line 1591 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1591 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__UniMode_19));
#line 1591 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__B_17));
#line 1591 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__C_18));
#line 1591 "equiv_type_hlds.m"
                  }
#line 1592 "equiv_type_hlds.m"
                  break;
#line 1592 "equiv_type_hlds.m"
              }
#line 1589 "equiv_type_hlds.m"
            }
#line 1585 "equiv_type_hlds.m"
            break;
#line 1585 "equiv_type_hlds.m"
        }
#line 1585 "equiv_type_hlds.m"
        break;
#line 1585 "equiv_type_hlds.m"
    }
#line 1585 "equiv_type_hlds.m"
  }
#line 1577 "equiv_type_hlds.m"
}

#line 1565 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(
#line 1565 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1565 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1565 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1565 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1565 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
#line 1565 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6)
#line 1565 "equiv_type_hlds.m"
{
#line 1568 "equiv_type_hlds.m"
  {
#line 1568 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1568 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1568 "equiv_type_hlds.m"
      {
#line 1568 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1568 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
#line 1568 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5;
#line 1568 "equiv_type_hlds.m"
      }
#line 1568 "equiv_type_hlds.m"
    else
#line 1569 "equiv_type_hlds.m"
      {
#line 1569 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__H0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1569 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__T0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1569 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__T_18;
#line 1569 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed0_19;
#line 1569 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__H_20;
#line 1569 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed1_21;
#line 1569 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24;
#line 1569 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__MainConsId_33;
#line 1569 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__OtherConsIds_34;
#line 1569 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__CaseGoal0_35;
#line 1569 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__CaseGoal_36;

#line 1570 "equiv_type_hlds.m"
        {
#line 1570 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__T0_14, &transform_hlds__equiv_type_hlds__T_18, &transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24);
        }
#line 1559 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__MainConsId_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H0_13, (MR_Integer) 0)));
#line 1559 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__OtherConsIds_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H0_13, (MR_Integer) 1)));
#line 1559 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__CaseGoal0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H0_13, (MR_Integer) 2)));
#line 1560 "equiv_type_hlds.m"
        {
#line 1560 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__CaseGoal0_35, &transform_hlds__equiv_type_hlds__CaseGoal_36, &transform_hlds__equiv_type_hlds__Changed1_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6);
        }
#line 1562 "equiv_type_hlds.m"
#line 1562 "equiv_type_hlds.m"
        switch (transform_hlds__equiv_type_hlds__Changed1_21) {
#line 1562 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1562 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1562 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__H_20 = transform_hlds__equiv_type_hlds__H0_13;
#line 1562 "equiv_type_hlds.m"
            break;
#line 1562 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1561 "equiv_type_hlds.m"
            {
#line 1561 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__H_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1561 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H_20, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__MainConsId_33));
#line 1561 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H_20, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__OtherConsIds_34));
#line 1561 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__H_20, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__CaseGoal_36));
#line 1561 "equiv_type_hlds.m"
            }
#line 1562 "equiv_type_hlds.m"
            break;
#line 1562 "equiv_type_hlds.m"
        }
#line 1572 "equiv_type_hlds.m"
        {
#line 1572 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__Changed1_21);
        }
#line 1574 "equiv_type_hlds.m"
#line 1574 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
#line 1574 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1574 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1574 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1574 "equiv_type_hlds.m"
            break;
#line 1574 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1573 "equiv_type_hlds.m"
            {
#line 1573 "equiv_type_hlds.m"
              MR_Word base;
#line 1573 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1573 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
#line 1573 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__H_20));
#line 1573 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__T_18));
#line 1573 "equiv_type_hlds.m"
            }
#line 1574 "equiv_type_hlds.m"
            break;
#line 1574 "equiv_type_hlds.m"
        }
#line 1569 "equiv_type_hlds.m"
      }
#line 1568 "equiv_type_hlds.m"
  }
#line 1565 "equiv_type_hlds.m"
}

#line 1467 "equiv_type_hlds.m"
static MR_bool MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0_1(
#line 1467 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg)
#line 1467 "equiv_type_hlds.m"
{
#line 1467 "equiv_type_hlds.m"
  {
#line 1467 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 1467 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;

#line 1467 "equiv_type_hlds.m"
    {
#line 1467 "equiv_type_hlds.m"
      return transform_hlds__equiv_type_hlds__succeeded = transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal_expr__1467__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 4))));
    }
#line 1467 "equiv_type_hlds.m"
    return transform_hlds__equiv_type_hlds__succeeded;
#line 1467 "equiv_type_hlds.m"
  }
#line 1467 "equiv_type_hlds.m"
}

#line 1340 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0(
#line 1340 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1340 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__GoalExpr0_8,
#line 1340 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__GoalExpr_9,
#line 1340 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 1340 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131,
#line 1340 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132)
#line 1340 "equiv_type_hlds.m"
{
#line 1346 "equiv_type_hlds.m"
  {
#line 1346 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1346 "equiv_type_hlds.m"
#line 1346 "equiv_type_hlds.m"
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__GoalExpr0_8)) {
#line 1346 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1346 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 1364 "equiv_type_hlds.m"
        {
#line 1364 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__NegGoal0_19 = (MR_Word) MR_body(((MR_Word) transform_hlds__equiv_type_hlds__GoalExpr0_8), (MR_Integer) 0);
#line 1364 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__NegGoal_20;

#line 1365 "equiv_type_hlds.m"
          {
#line 1365 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__NegGoal0_19, &transform_hlds__equiv_type_hlds__NegGoal_20, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
          }
#line 1367 "equiv_type_hlds.m"
#line 1367 "equiv_type_hlds.m"
          switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1367 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1367 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 1367 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1367 "equiv_type_hlds.m"
              break;
#line 1367 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 1366 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__equiv_type_hlds__NegGoal_20);
#line 1367 "equiv_type_hlds.m"
              break;
#line 1367 "equiv_type_hlds.m"
          }
#line 1364 "equiv_type_hlds.m"
        }
#line 1346 "equiv_type_hlds.m"
        break;
#line 1346 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 1428 "equiv_type_hlds.m"
        {
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TypeTable_68;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__VarTypes_69;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__RttiVarMaps_70;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__VarType_71;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TypeCtorCat_72;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_140_140;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_141_141;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_142_142;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_458_458;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_459_459;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_460_460;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_461_461;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_462_462;
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1428 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1429 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
#line 1429 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
#line 1429 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
#line 1429 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
#line 1429 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
#line 1430 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_330_330;
#line 1430 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_331_331;
#line 1430 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_332_332;
#line 1430 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_333_333;
#line 1430 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_334_334;
#line 1431 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_335_335;
#line 1431 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_336_336;
#line 1431 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_337_337;
#line 1431 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_338_338;
#line 1431 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_339_339;
#line 1433 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_340_340;
#line 1433 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_341_341;
#line 1433 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_342_342;
#line 1433 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_343_343;
#line 1433 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_344_344;
#line 1447 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_457_457;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__ConsId_74;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TypeCtor_80;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TypeDefn_81;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Body_82;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_143_143;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_144_144;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_345_345;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_346_346;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_347_347;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_348_348;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_73_73;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_75_75;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_76_76;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_77_77;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_78_78;
#line 1439 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_79_79;
#line 1444 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_83_83;

#line 1429 "equiv_type_hlds.m"
          {
#line 1429 "equiv_type_hlds.m"
            hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__equiv_type_hlds__V_139_139, &transform_hlds__equiv_type_hlds__TypeTable_68);
          }
#line 1430 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
#line 1430 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
#line 1430 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
#line 1430 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
#line 1430 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
#line 1430 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
#line 1430 "equiv_type_hlds.m"
          {
#line 1430 "equiv_type_hlds.m"
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__equiv_type_hlds__V_140_140, &transform_hlds__equiv_type_hlds__VarTypes_69);
          }
#line 1431 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
#line 1431 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
#line 1431 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
#line 1431 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
#line 1431 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
#line 1431 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
#line 1431 "equiv_type_hlds.m"
          {
#line 1431 "equiv_type_hlds.m"
            hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__equiv_type_hlds__V_141_141, &transform_hlds__equiv_type_hlds__RttiVarMaps_70);
          }
#line 1432 "equiv_type_hlds.m"
          {
#line 1432 "equiv_type_hlds.m"
            hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__equiv_type_hlds__VarTypes_69, transform_hlds__equiv_type_hlds__Var_248, &transform_hlds__equiv_type_hlds__VarType_71);
          }
#line 1433 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
#line 1433 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
#line 1433 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
#line 1433 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
#line 1433 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
#line 1433 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
#line 1433 "equiv_type_hlds.m"
          {
#line 1433 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__TypeCtorCat_72 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__equiv_type_hlds__V_142_142, transform_hlds__equiv_type_hlds__VarType_71);
          }
#line 1447 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_462_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
#line 1447 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_461_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
#line 1447 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_460_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
#line 1447 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_459_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
#line 1447 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_458_458 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
#line 1447 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_457_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
#line 1439 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
#line 1439 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1439 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1439 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1439 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1439 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__V_143_143)) == (MR_mktag((MR_Integer) 0)));
#line 1439 "equiv_type_hlds.m"
          if (transform_hlds__equiv_type_hlds__succeeded)
#line 1439 "equiv_type_hlds.m"
            {
#line 1439 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_143_143, (MR_Integer) 0)));
#line 1439 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__ConsId_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_143_143, (MR_Integer) 1)));
#line 1439 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_143_143, (MR_Integer) 2)));
#line 1439 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_143_143, (MR_Integer) 3)));
#line 1439 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_143_143, (MR_Integer) 4)));
#line 1439 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_143_143, (MR_Integer) 5)));
#line 1439 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_143_143, (MR_Integer) 6)));
#line 1440 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__ConsId_74)) == (MR_mktag((MR_Integer) 1)));
#line 1440 "equiv_type_hlds.m"
              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1440 "equiv_type_hlds.m"
                {
#line 1440 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__TypeCtor_80 = (MR_Word) MR_body(((MR_Word) transform_hlds__equiv_type_hlds__ConsId_74), (MR_Integer) 1);
#line 1441 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__succeeded = ((((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__TypeCtorCat_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__TypeCtorCat_72, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1441 "equiv_type_hlds.m"
                  if (transform_hlds__equiv_type_hlds__succeeded)
#line 1441 "equiv_type_hlds.m"
                    {
#line 1441 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__TypeCtorCat_72, (MR_Integer) 1)));
#line 1441 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_144_144 == (MR_Integer) 0);
#line 1439 "equiv_type_hlds.m"
                      if (transform_hlds__equiv_type_hlds__succeeded)
#line 1439 "equiv_type_hlds.m"
                        {
#line 1442 "equiv_type_hlds.m"
                          {
#line 1442 "equiv_type_hlds.m"
                            transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__equiv_type_hlds__TypeTable_68, transform_hlds__equiv_type_hlds__TypeCtor_80, &transform_hlds__equiv_type_hlds__TypeDefn_81);
                          }
#line 1439 "equiv_type_hlds.m"
                          if (transform_hlds__equiv_type_hlds__succeeded)
#line 1439 "equiv_type_hlds.m"
                            {
#line 1443 "equiv_type_hlds.m"
                              {
#line 1443 "equiv_type_hlds.m"
                                hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__equiv_type_hlds__TypeDefn_81, &transform_hlds__equiv_type_hlds__Body_82);
                              }
#line 1444 "equiv_type_hlds.m"
                              transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Body_82)) == (MR_mktag((MR_Integer) 2)));
#line 1444 "equiv_type_hlds.m"
                              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1444 "equiv_type_hlds.m"
                                transform_hlds__equiv_type_hlds__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Body_82, (MR_Integer) 0)));
#line 1439 "equiv_type_hlds.m"
                            }
#line 1439 "equiv_type_hlds.m"
                        }
#line 1441 "equiv_type_hlds.m"
                    }
#line 1440 "equiv_type_hlds.m"
                }
#line 1439 "equiv_type_hlds.m"
            }
#line 1483 "equiv_type_hlds.m"
          if (transform_hlds__equiv_type_hlds__succeeded)
#line 1446 "equiv_type_hlds.m"
            {
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TypeInfo_450_450;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__PredInfo0_85;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ProcInfo0_86;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__PredInfo1_87;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__PolyInfo0_88;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__VarInfo_89;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TypeInfoType_91;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TypeInfoVar_93;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__PolyInfo_94;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__PolySpecs_95;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__PredInfo_96;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ProcInfo_97;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ModuleInfo_98;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_148_148;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_149_149;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_159_159;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_160_160;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_161_161;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Goals0_204;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Goals_205;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TVarSet0_206;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TVarSet_207;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_373_373;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_374_374;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_375_375;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_379_379;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_380_380;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_381_381;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_382_382;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_385_385;
#line 1446 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_386_386;
#line 1448 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_354_354;
#line 1448 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_357_357;
#line 1448 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_358_358;
#line 1470 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_369_369;
#line 1470 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_370_370;
#line 1470 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_371_371;
#line 1470 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_372_372;
#line 1479 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__GoalExpr1_99;
#line 1477 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_163_163;
#line 1477 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_164_164;
#line 1477 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_100_100;
#line 1482 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_393_393;
#line 1482 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_394_394;
#line 1482 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_395_395;
#line 1482 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_396_396;
#line 1482 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_397_397;
#line 1482 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_398_398;

#line 1446 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 1;
#line 1448 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
#line 1448 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__PredInfo0_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
#line 1448 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__ProcInfo0_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
#line 1448 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__TVarSet0_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
#line 1448 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
#line 1448 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
#line 1451 "equiv_type_hlds.m"
              {
#line 1451 "equiv_type_hlds.m"
                hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__equiv_type_hlds__TVarSet0_206, transform_hlds__equiv_type_hlds__PredInfo0_85, &transform_hlds__equiv_type_hlds__PredInfo1_87);
              }
#line 1452 "equiv_type_hlds.m"
              {
#line 1452 "equiv_type_hlds.m"
                check_hlds__polymorphism__create_poly_info_4_p_0(transform_hlds__equiv_type_hlds__V_462_462, transform_hlds__equiv_type_hlds__PredInfo1_87, transform_hlds__equiv_type_hlds__ProcInfo0_86, &transform_hlds__equiv_type_hlds__PolyInfo0_88);
              }
#line 1453 "equiv_type_hlds.m"
              {
#line 1453 "equiv_type_hlds.m"
                hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(transform_hlds__equiv_type_hlds__RttiVarMaps_70, transform_hlds__equiv_type_hlds__Var_248, &transform_hlds__equiv_type_hlds__VarInfo_89);
              }
#line 1457 "equiv_type_hlds.m"
#line 1457 "equiv_type_hlds.m"
              switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__VarInfo_89)) {
#line 1457 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1457 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1460 "equiv_type_hlds.m"
                  {
#line 1461 "equiv_type_hlds.m"
                    {
#line 1461 "equiv_type_hlds.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "info not found");
#line 1461 "equiv_type_hlds.m"
                      return;
                    }
#line 1460 "equiv_type_hlds.m"
                  }
#line 1457 "equiv_type_hlds.m"
                  break;
#line 1457 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1455 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__TypeInfoType_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__VarInfo_89, (MR_Integer) 0)));
#line 1457 "equiv_type_hlds.m"
                  break;
#line 1457 "equiv_type_hlds.m"
                case (MR_Integer) 2:
#line 1460 "equiv_type_hlds.m"
                  {
#line 1461 "equiv_type_hlds.m"
                    {
#line 1461 "equiv_type_hlds.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "info not found");
#line 1461 "equiv_type_hlds.m"
                      return;
                    }
#line 1460 "equiv_type_hlds.m"
                  }
#line 1457 "equiv_type_hlds.m"
                  break;
#line 1457 "equiv_type_hlds.m"
              }
#line 1464 "equiv_type_hlds.m"
              {
#line 1464 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__V_148_148 = mercury__term__context_init_0_f_0();
              }
#line 1463 "equiv_type_hlds.m"
              {
#line 1463 "equiv_type_hlds.m"
                check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(transform_hlds__equiv_type_hlds__TypeInfoType_91, transform_hlds__equiv_type_hlds__V_148_148, &transform_hlds__equiv_type_hlds__TypeInfoVar_93, &transform_hlds__equiv_type_hlds__Goals0_204, transform_hlds__equiv_type_hlds__PolyInfo0_88, &transform_hlds__equiv_type_hlds__PolyInfo_94);
              }
#line 1465 "equiv_type_hlds.m"
              {
#line 1465 "equiv_type_hlds.m"
                check_hlds__polymorphism__poly_info_extract_7_p_0(transform_hlds__equiv_type_hlds__PolyInfo_94, &transform_hlds__equiv_type_hlds__PolySpecs_95, transform_hlds__equiv_type_hlds__PredInfo1_87, &transform_hlds__equiv_type_hlds__PredInfo_96, transform_hlds__equiv_type_hlds__ProcInfo0_86, &transform_hlds__equiv_type_hlds__ProcInfo_97, &transform_hlds__equiv_type_hlds__ModuleInfo_98);
              }
#line 1467 "equiv_type_hlds.m"
              {
#line 1467 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__V_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1467 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_149_149, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_3[1]));
#line 1467 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_149_149, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0_1));
#line 1467 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_149_149, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1467 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_149_149, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__PolySpecs_95));
#line 1467 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_149_149, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1467 "equiv_type_hlds.m"
              }
#line 1467 "equiv_type_hlds.m"
              {
#line 1467 "equiv_type_hlds.m"
                mercury__require__expect_4_p_0(transform_hlds__equiv_type_hlds__V_149_149, (MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "got errors while making type_info_var");
              }
#line 1469 "equiv_type_hlds.m"
              {
#line 1469 "equiv_type_hlds.m"
                hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__equiv_type_hlds__PredInfo_96, &transform_hlds__equiv_type_hlds__TVarSet_207);
              }
#line 1470 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_369_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
#line 1470 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_370_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
#line 1470 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
#line 1470 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_372_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
#line 1470 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_373_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
#line 1470 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_374_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
#line 1471 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_375_375 = transform_hlds__equiv_type_hlds__ModuleInfo_98;
#line 1471 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_379_379 = transform_hlds__equiv_type_hlds__V_373_373;
#line 1471 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_380_380 = transform_hlds__equiv_type_hlds__V_374_374;
#line 1472 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_381_381 = transform_hlds__equiv_type_hlds__V_375_375;
#line 1472 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_382_382 = transform_hlds__equiv_type_hlds__PredInfo_96;
#line 1472 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_385_385 = transform_hlds__equiv_type_hlds__V_379_379;
#line 1472 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_386_386 = transform_hlds__equiv_type_hlds__V_380_380;
#line 1473 "equiv_type_hlds.m"
              {
#line 1473 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1473 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_381_381));
#line 1473 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_382_382));
#line 1473 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__ProcInfo_97));
#line 1473 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_207));
#line 1473 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_385_385));
#line 1473 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_386_386));
#line 1473 "equiv_type_hlds.m"
              }
#line 5764 "transform_hlds.equiv_type_hlds.c"
              transform_hlds__equiv_type_hlds__TypeInfo_450_450 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[5];
#line 1476 "equiv_type_hlds.m"
              {
#line 1476 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1476 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_161_161, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeInfoVar_93));
#line 1476 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_161_161, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_248));
#line 1476 "equiv_type_hlds.m"
              }
#line 1476 "equiv_type_hlds.m"
              {
#line 1476 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1476 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__V_160_160, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_161_161));
#line 1476 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__V_160_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1476 "equiv_type_hlds.m"
              }
#line 1476 "equiv_type_hlds.m"
              {
#line 1476 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__V_159_159 = mercury__map__from_assoc_list_1_f_0(transform_hlds__equiv_type_hlds__TypeInfo_450_450, transform_hlds__equiv_type_hlds__TypeInfo_450_450, transform_hlds__equiv_type_hlds__V_160_160);
              }
#line 1475 "equiv_type_hlds.m"
              {
#line 1475 "equiv_type_hlds.m"
                hlds__hlds_goal__rename_vars_in_goals_4_p_0((MR_Integer) 1, transform_hlds__equiv_type_hlds__V_159_159, transform_hlds__equiv_type_hlds__Goals0_204, &transform_hlds__equiv_type_hlds__Goals_205);
              }
#line 1477 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Goals_205)) == (MR_mktag((MR_Integer) 1)));
#line 1477 "equiv_type_hlds.m"
              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1477 "equiv_type_hlds.m"
                {
#line 1477 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Goals_205, (MR_Integer) 0)));
#line 1477 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Goals_205, (MR_Integer) 1)));
#line 1477 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_164_164 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1477 "equiv_type_hlds.m"
                  if (transform_hlds__equiv_type_hlds__succeeded)
#line 1477 "equiv_type_hlds.m"
                    {
#line 1477 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__GoalExpr1_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_163_163, (MR_Integer) 0)));
#line 1477 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_163_163, (MR_Integer) 1)));
#line 1477 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__succeeded = MR_TRUE;
#line 1477 "equiv_type_hlds.m"
                    }
#line 1477 "equiv_type_hlds.m"
                }
#line 1479 "equiv_type_hlds.m"
              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1478 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr1_99;
#line 1479 "equiv_type_hlds.m"
              else
#line 1480 "equiv_type_hlds.m"
                {
#line 1480 "equiv_type_hlds.m"
                  {
#line 1480 "equiv_type_hlds.m"
                    MR_Word base;
#line 1480 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1480 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1480 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1480 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Goals_205));
#line 1480 "equiv_type_hlds.m"
                  }
#line 1480 "equiv_type_hlds.m"
                }
#line 1482 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_393_393 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, (MR_Integer) 0)));
#line 1482 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_394_394 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, (MR_Integer) 1)));
#line 1482 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, (MR_Integer) 2)));
#line 1482 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_396_396 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, (MR_Integer) 3)));
#line 1482 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_397_397 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, (MR_Integer) 4)));
#line 1482 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_398_398 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_157_157, (MR_Integer) 5)));
#line 1482 "equiv_type_hlds.m"
              {
#line 1482 "equiv_type_hlds.m"
                MR_Word base;
#line 1482 "equiv_type_hlds.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1482 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = base;
#line 1482 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_393_393));
#line 1482 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_394_394));
#line 1482 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_395_395));
#line 1482 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_396_396));
#line 1482 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_397_397));
#line 1482 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1482 "equiv_type_hlds.m"
              }
#line 1446 "equiv_type_hlds.m"
            }
#line 1483 "equiv_type_hlds.m"
          else
#line 1498 "equiv_type_hlds.m"
            {
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_169_169;
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ConsId_208;
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TypeCtor_209;
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TypeDefn_210;
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Body_211;
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_399_399 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_400_400 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_401_401 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_402_402 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_101_101;
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_102_102;
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_103_103;
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_104_104;
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_105_105;
#line 1488 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_106_106;
#line 1493 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_107_107;

#line 1488 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__V_168_168)) == (MR_mktag((MR_Integer) 0)));
#line 1488 "equiv_type_hlds.m"
              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1488 "equiv_type_hlds.m"
                {
#line 1488 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_168_168, (MR_Integer) 0)));
#line 1488 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__ConsId_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_168_168, (MR_Integer) 1)));
#line 1488 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_168_168, (MR_Integer) 2)));
#line 1488 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_168_168, (MR_Integer) 3)));
#line 1488 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_168_168, (MR_Integer) 4)));
#line 1488 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_168_168, (MR_Integer) 5)));
#line 1488 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_168_168, (MR_Integer) 6)));
#line 1489 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__ConsId_208)) == (MR_mktag((MR_Integer) 1)));
#line 1489 "equiv_type_hlds.m"
                  if (transform_hlds__equiv_type_hlds__succeeded)
#line 1489 "equiv_type_hlds.m"
                    {
#line 1489 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__TypeCtor_209 = (MR_Word) MR_body(((MR_Word) transform_hlds__equiv_type_hlds__ConsId_208), (MR_Integer) 1);
#line 1490 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__succeeded = ((((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__TypeCtorCat_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__TypeCtorCat_72, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1490 "equiv_type_hlds.m"
                      if (transform_hlds__equiv_type_hlds__succeeded)
#line 1490 "equiv_type_hlds.m"
                        {
#line 1490 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__TypeCtorCat_72, (MR_Integer) 1)));
#line 1490 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_169_169 == (MR_Integer) 1);
#line 1488 "equiv_type_hlds.m"
                          if (transform_hlds__equiv_type_hlds__succeeded)
#line 1488 "equiv_type_hlds.m"
                            {
#line 1491 "equiv_type_hlds.m"
                              {
#line 1491 "equiv_type_hlds.m"
                                transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__equiv_type_hlds__TypeTable_68, transform_hlds__equiv_type_hlds__TypeCtor_209, &transform_hlds__equiv_type_hlds__TypeDefn_210);
                              }
#line 1488 "equiv_type_hlds.m"
                              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1488 "equiv_type_hlds.m"
                                {
#line 1492 "equiv_type_hlds.m"
                                  {
#line 1492 "equiv_type_hlds.m"
                                    hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__equiv_type_hlds__TypeDefn_210, &transform_hlds__equiv_type_hlds__Body_211);
                                  }
#line 1493 "equiv_type_hlds.m"
                                  transform_hlds__equiv_type_hlds__succeeded = ((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Body_211)) == (MR_mktag((MR_Integer) 2)));
#line 1493 "equiv_type_hlds.m"
                                  if (transform_hlds__equiv_type_hlds__succeeded)
#line 1493 "equiv_type_hlds.m"
                                    transform_hlds__equiv_type_hlds__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Body_211, (MR_Integer) 0)));
#line 1488 "equiv_type_hlds.m"
                                }
#line 1488 "equiv_type_hlds.m"
                            }
#line 1490 "equiv_type_hlds.m"
                        }
#line 1489 "equiv_type_hlds.m"
                    }
#line 1488 "equiv_type_hlds.m"
                }
#line 1498 "equiv_type_hlds.m"
              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1495 "equiv_type_hlds.m"
                {
#line 1495 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 1;
#line 1496 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(3), &transform_hlds__equiv_type_hlds_scalar_common_1[8]);
#line 1497 "equiv_type_hlds.m"
                  {
#line 1497 "equiv_type_hlds.m"
                    MR_Word base;
#line 1497 "equiv_type_hlds.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1497 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = base;
#line 1497 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_462_462));
#line 1497 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_461_461));
#line 1497 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_460_460));
#line 1497 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_459_459));
#line 1497 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_458_458));
#line 1497 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
#line 1497 "equiv_type_hlds.m"
                  }
#line 1495 "equiv_type_hlds.m"
                }
#line 1498 "equiv_type_hlds.m"
              else
#line 1499 "equiv_type_hlds.m"
                {
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__LMode0_108;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__RMode0_109;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__LMode_110;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Cache1_111;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__RMode_112;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Unification_113;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_177_177;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_179_179;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Changed1_214;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Changed2_215;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Changed3_216;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__TVarSet1_218;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__TVarSet_219;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Cache0_220;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Cache_221;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_423_423;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_424_424;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_425_425;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_428_428;
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_409_409 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_410_410 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_411_411 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1499 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_412_412 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1501 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_418_418;
#line 1501 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_419_419;
#line 1501 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_420_420;
#line 1501 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_421_421;
#line 1501 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_422_422;
#line 1506 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_426_426;
#line 1506 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_427_427;
#line 1508 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_435_435;
#line 1508 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_436_436;
#line 1508 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_437_437;
#line 1508 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_438_438;

#line 1499 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__LMode0_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_174_174, (MR_Integer) 0)));
#line 1499 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__RMode0_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_174_174, (MR_Integer) 1)));
#line 1501 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
#line 1501 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_419_419 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
#line 1501 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
#line 1501 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_421_421 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
#line 1501 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__Cache0_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
#line 1501 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_422_422 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
#line 1502 "equiv_type_hlds.m"
                  {
#line 1502 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__replace_in_mode_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__LMode0_108, &transform_hlds__equiv_type_hlds__LMode_110, &transform_hlds__equiv_type_hlds__Changed1_214, transform_hlds__equiv_type_hlds__V_459_459, &transform_hlds__equiv_type_hlds__TVarSet1_218, transform_hlds__equiv_type_hlds__Cache0_220, &transform_hlds__equiv_type_hlds__Cache1_111);
                  }
#line 1504 "equiv_type_hlds.m"
                  {
#line 1504 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__replace_in_mode_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__RMode0_109, &transform_hlds__equiv_type_hlds__RMode_112, &transform_hlds__equiv_type_hlds__Changed2_215, transform_hlds__equiv_type_hlds__TVarSet1_218, &transform_hlds__equiv_type_hlds__TVarSet_219, transform_hlds__equiv_type_hlds__Cache1_111, &transform_hlds__equiv_type_hlds__Cache_221);
                  }
#line 1506 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_423_423 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
#line 1506 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_424_424 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
#line 1506 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_425_425 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
#line 1506 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_426_426 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
#line 1506 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_427_427 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
#line 1506 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_428_428 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
#line 1507 "equiv_type_hlds.m"
                  {
#line 1507 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1507 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_423_423));
#line 1507 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_424_424));
#line 1507 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_425_425));
#line 1507 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_219));
#line 1507 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cache_221));
#line 1507 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_428_428));
#line 1507 "equiv_type_hlds.m"
                  }
#line 1508 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
#line 1508 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_436_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1508 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_437_437 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1508 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1508 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_438_438 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1508 "equiv_type_hlds.m"
                  {
#line 1508 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__replace_in_unification_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__V_177_177, &transform_hlds__equiv_type_hlds__Unification_113, &transform_hlds__equiv_type_hlds__Changed3_216, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_176_176, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
                  }
#line 1510 "equiv_type_hlds.m"
                  {
#line 1510 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_179_179 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_214, transform_hlds__equiv_type_hlds__Changed2_215);
                  }
#line 1510 "equiv_type_hlds.m"
                  {
#line 1510 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__V_179_179, transform_hlds__equiv_type_hlds__Changed3_216);
                  }
#line 1515 "equiv_type_hlds.m"
#line 1515 "equiv_type_hlds.m"
                  switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1515 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1515 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 1516 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1515 "equiv_type_hlds.m"
                      break;
#line 1515 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 1512 "equiv_type_hlds.m"
                      {
#line 1512 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_180_180;
#line 1512 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_439_439;
#line 1512 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_440_440;
#line 1512 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_443_443;
#line 1513 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_441_441;
#line 1513 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_442_442;

#line 1513 "equiv_type_hlds.m"
                        {
#line 1513 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1513 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_180_180, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__LMode_110));
#line 1513 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_180_180, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__RMode_112));
#line 1513 "equiv_type_hlds.m"
                        }
#line 1513 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__V_439_439 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)));
#line 1513 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__V_440_440 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1513 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__V_441_441 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1513 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__V_442_442 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1513 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__V_443_443 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1514 "equiv_type_hlds.m"
                        {
#line 1514 "equiv_type_hlds.m"
                          MR_Word base;
#line 1514 "equiv_type_hlds.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1514 "equiv_type_hlds.m"
                          *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1514 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_439_439));
#line 1514 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_440_440));
#line 1514 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_180_180));
#line 1514 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Unification_113));
#line 1514 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_443_443));
#line 1514 "equiv_type_hlds.m"
                        }
#line 1512 "equiv_type_hlds.m"
                      }
#line 1515 "equiv_type_hlds.m"
                      break;
#line 1515 "equiv_type_hlds.m"
                  }
#line 1499 "equiv_type_hlds.m"
                }
#line 1498 "equiv_type_hlds.m"
            }
#line 1428 "equiv_type_hlds.m"
        }
#line 1346 "equiv_type_hlds.m"
        break;
#line 1346 "equiv_type_hlds.m"
      case (MR_Integer) 2:
#line 1392 "equiv_type_hlds.m"
        {
#line 1393 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1394 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
#line 1392 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131;
#line 1392 "equiv_type_hlds.m"
        }
#line 1346 "equiv_type_hlds.m"
        break;
#line 1346 "equiv_type_hlds.m"
      case (MR_Integer) 3:
#line 1346 "equiv_type_hlds.m"
#line 1346 "equiv_type_hlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 0)))) {
#line 1346 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1346 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1413 "equiv_type_hlds.m"
            {
#line 1413 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Details_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1413 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Modes0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1413 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__MaybeArgRegs_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1413 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Detism_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 5)));
#line 1413 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Cache0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
#line 1413 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Modes_62;
#line 1413 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Cache_63;
#line 1413 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TVarSet0_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
#line 1413 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Args_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1413 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TVarSet_203;
#line 1414 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
#line 1414 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
#line 1414 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
#line 1414 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));

#line 1416 "equiv_type_hlds.m"
              {
#line 1416 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Modes0_58, &transform_hlds__equiv_type_hlds__Modes_62, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__TVarSet0_201, &transform_hlds__equiv_type_hlds__TVarSet_203, transform_hlds__equiv_type_hlds__Cache0_61, &transform_hlds__equiv_type_hlds__Cache_63);
              }
#line 1423 "equiv_type_hlds.m"
#line 1423 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1423 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1423 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1424 "equiv_type_hlds.m"
                  {
#line 1425 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1424 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131;
#line 1424 "equiv_type_hlds.m"
                  }
#line 1423 "equiv_type_hlds.m"
                  break;
#line 1423 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1419 "equiv_type_hlds.m"
                  {
#line 1419 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
#line 1419 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
#line 1419 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
#line 1419 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
#line 1420 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
#line 1420 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));

#line 1421 "equiv_type_hlds.m"
                    {
#line 1421 "equiv_type_hlds.m"
                      MR_Word base;
#line 1421 "equiv_type_hlds.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1421 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = base;
#line 1421 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_313_313));
#line 1421 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_314_314));
#line 1421 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_315_315));
#line 1421 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_203));
#line 1421 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cache_63));
#line 1421 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_318_318));
#line 1421 "equiv_type_hlds.m"
                    }
#line 1422 "equiv_type_hlds.m"
                    {
#line 1422 "equiv_type_hlds.m"
                      MR_Word base;
#line 1422 "equiv_type_hlds.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1422 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1422 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Details_57));
#line 1422 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Args_202));
#line 1422 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Modes_62));
#line 1422 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeArgRegs_59));
#line 1422 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__Detism_60));
#line 1422 "equiv_type_hlds.m"
                    }
#line 1419 "equiv_type_hlds.m"
                  }
#line 1423 "equiv_type_hlds.m"
                  break;
#line 1423 "equiv_type_hlds.m"
              }
#line 1413 "equiv_type_hlds.m"
            }
#line 1346 "equiv_type_hlds.m"
            break;
#line 1346 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1396 "equiv_type_hlds.m"
            {
#line 1396 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TVarSet0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
#line 1396 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Args_49;
#line 1396 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ChangedArgs_50;
#line 1396 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TVarSet1_51;
#line 1396 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ExtraArgs_53;
#line 1396 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ChangedExtraArgs_54;
#line 1396 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TVarSet_55;
#line 1396 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1396 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_185_185;
#line 1397 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
#line 1397 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
#line 1397 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
#line 1397 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
#line 1397 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
#line 1398 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1398 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1398 "equiv_type_hlds.m"
              MR_Integer transform_hlds__equiv_type_hlds__V_273_273 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1398 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_274_274 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 5)));
#line 1398 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 6)));
#line 1398 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 7)));
#line 1398 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_52_52;
#line 1400 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_277_277;
#line 1400 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_278_278;
#line 1400 "equiv_type_hlds.m"
              MR_Integer transform_hlds__equiv_type_hlds__V_279_279;
#line 1400 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_280_280;
#line 1400 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_281_281;
#line 1400 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_282_282;
#line 1400 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_56_56;

#line 1398 "equiv_type_hlds.m"
              {
#line 1398 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__V_183_183, &transform_hlds__equiv_type_hlds__Args_49, &transform_hlds__equiv_type_hlds__ChangedArgs_50, transform_hlds__equiv_type_hlds__TVarSet0_48, &transform_hlds__equiv_type_hlds__TVarSet1_51, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__V_52_52);
              }
#line 1400 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1400 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1400 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_279_279 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1400 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1400 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 5)));
#line 1400 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 6)));
#line 1400 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 7)));
#line 1400 "equiv_type_hlds.m"
              {
#line 1400 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_foreign_arg_list_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__V_185_185, &transform_hlds__equiv_type_hlds__ExtraArgs_53, &transform_hlds__equiv_type_hlds__ChangedExtraArgs_54, transform_hlds__equiv_type_hlds__TVarSet1_51, &transform_hlds__equiv_type_hlds__TVarSet_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__V_56_56);
              }
#line 1402 "equiv_type_hlds.m"
              {
#line 1402 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedArgs_50, transform_hlds__equiv_type_hlds__ChangedExtraArgs_54);
              }
#line 1408 "equiv_type_hlds.m"
#line 1408 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1408 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1408 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1409 "equiv_type_hlds.m"
                  {
#line 1410 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1409 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131;
#line 1409 "equiv_type_hlds.m"
                  }
#line 1408 "equiv_type_hlds.m"
                  break;
#line 1408 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1404 "equiv_type_hlds.m"
                  {
#line 1404 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_289_289;
#line 1404 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_290_290;
#line 1404 "equiv_type_hlds.m"
                    MR_Integer transform_hlds__equiv_type_hlds__V_291_291;
#line 1404 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_294_294;
#line 1404 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_295_295;
#line 1405 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 0)));
#line 1405 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 1)));
#line 1405 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 2)));
#line 1405 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 4)));
#line 1405 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 5)));
#line 1405 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, (MR_Integer) 3)));
#line 1406 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_292_292;
#line 1406 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_293_293;

#line 1405 "equiv_type_hlds.m"
                    {
#line 1405 "equiv_type_hlds.m"
                      MR_Word base;
#line 1405 "equiv_type_hlds.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1405 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = base;
#line 1405 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_283_283));
#line 1405 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_284_284));
#line 1405 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_285_285));
#line 1405 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_55));
#line 1405 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_287_287));
#line 1405 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_288_288));
#line 1405 "equiv_type_hlds.m"
                    }
#line 1406 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1406 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1406 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_291_291 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1406 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1406 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 5)));
#line 1406 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 6)));
#line 1406 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 7)));
#line 1406 "equiv_type_hlds.m"
                    {
#line 1406 "equiv_type_hlds.m"
                      MR_Word base;
#line 1406 "equiv_type_hlds.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1406 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1406 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_289_289));
#line 1406 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_290_290));
#line 1406 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_291_291));
#line 1406 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Args_49));
#line 1406 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__ExtraArgs_53));
#line 1406 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_294_294));
#line 1406 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_295_295));
#line 1406 "equiv_type_hlds.m"
                    }
#line 1404 "equiv_type_hlds.m"
                  }
#line 1408 "equiv_type_hlds.m"
                  break;
#line 1408 "equiv_type_hlds.m"
              }
#line 1396 "equiv_type_hlds.m"
            }
#line 1346 "equiv_type_hlds.m"
            break;
#line 1346 "equiv_type_hlds.m"
          case (MR_Integer) 2:
#line 1346 "equiv_type_hlds.m"
            {
#line 1346 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ConjType_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1346 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Goals0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1346 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Goals_14;

#line 1347 "equiv_type_hlds.m"
              {
#line 1347 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Goals0_13, &transform_hlds__equiv_type_hlds__Goals_14, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
              }
#line 1349 "equiv_type_hlds.m"
#line 1349 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1349 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1349 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1349 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1349 "equiv_type_hlds.m"
                  break;
#line 1349 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1348 "equiv_type_hlds.m"
                  {
#line 1348 "equiv_type_hlds.m"
                    MR_Word base;
#line 1348 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1348 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1348 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ConjType_12));
#line 1348 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Goals_14));
#line 1348 "equiv_type_hlds.m"
                  }
#line 1349 "equiv_type_hlds.m"
                  break;
#line 1349 "equiv_type_hlds.m"
              }
#line 1346 "equiv_type_hlds.m"
            }
#line 1346 "equiv_type_hlds.m"
            break;
#line 1346 "equiv_type_hlds.m"
          case (MR_Integer) 3:
#line 1352 "equiv_type_hlds.m"
            {
#line 1352 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Goals0_199 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1352 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Goals_200;

#line 1353 "equiv_type_hlds.m"
              {
#line 1353 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Goals0_199, &transform_hlds__equiv_type_hlds__Goals_200, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
              }
#line 1355 "equiv_type_hlds.m"
#line 1355 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1355 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1355 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1355 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1355 "equiv_type_hlds.m"
                  break;
#line 1355 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1354 "equiv_type_hlds.m"
                  {
#line 1354 "equiv_type_hlds.m"
                    MR_Word base;
#line 1354 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1354 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1354 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1354 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Goals_200));
#line 1354 "equiv_type_hlds.m"
                  }
#line 1355 "equiv_type_hlds.m"
                  break;
#line 1355 "equiv_type_hlds.m"
              }
#line 1352 "equiv_type_hlds.m"
            }
#line 1346 "equiv_type_hlds.m"
            break;
#line 1346 "equiv_type_hlds.m"
          case (MR_Integer) 4:
#line 1358 "equiv_type_hlds.m"
            {
#line 1358 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1358 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__CanFail_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1358 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Cases0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1358 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Cases_18;

#line 1359 "equiv_type_hlds.m"
              {
#line 1359 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_cases_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Cases0_17, &transform_hlds__equiv_type_hlds__Cases_18, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
              }
#line 1361 "equiv_type_hlds.m"
#line 1361 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1361 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1361 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1361 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1361 "equiv_type_hlds.m"
                  break;
#line 1361 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1360 "equiv_type_hlds.m"
                  {
#line 1360 "equiv_type_hlds.m"
                    MR_Word base;
#line 1360 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1360 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1360 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1360 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_15));
#line 1360 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__CanFail_16));
#line 1360 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cases_18));
#line 1360 "equiv_type_hlds.m"
                  }
#line 1361 "equiv_type_hlds.m"
                  break;
#line 1361 "equiv_type_hlds.m"
              }
#line 1358 "equiv_type_hlds.m"
            }
#line 1346 "equiv_type_hlds.m"
            break;
#line 1346 "equiv_type_hlds.m"
          case (MR_Integer) 5:
#line 1370 "equiv_type_hlds.m"
            {
#line 1370 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Reason_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1370 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__SomeGoal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1371 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_193_193;
#line 1371 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_23_23;

#line 1371 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__succeeded = ((((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Reason_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Reason_21, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1371 "equiv_type_hlds.m"
              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1371 "equiv_type_hlds.m"
                {
#line 1371 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Reason_21, (MR_Integer) 1)));
#line 1371 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Reason_21, (MR_Integer) 2)));
#line 1371 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__V_193_193 == (MR_Integer) 1);
#line 1371 "equiv_type_hlds.m"
                }
#line 1376 "equiv_type_hlds.m"
              if (transform_hlds__equiv_type_hlds__succeeded)
#line 1374 "equiv_type_hlds.m"
                {
#line 1374 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1375 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
#line 1374 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131;
#line 1374 "equiv_type_hlds.m"
                }
#line 1376 "equiv_type_hlds.m"
              else
#line 1377 "equiv_type_hlds.m"
                {
#line 1377 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__SomeGoal_24;

#line 1377 "equiv_type_hlds.m"
                  {
#line 1377 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__SomeGoal0_22, &transform_hlds__equiv_type_hlds__SomeGoal_24, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
                  }
#line 1379 "equiv_type_hlds.m"
#line 1379 "equiv_type_hlds.m"
                  switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1379 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1379 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 1379 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1379 "equiv_type_hlds.m"
                      break;
#line 1379 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 1378 "equiv_type_hlds.m"
                      {
#line 1378 "equiv_type_hlds.m"
                        MR_Word base;
#line 1378 "equiv_type_hlds.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "equiv_type_hlds.m"
                        *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1378 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1378 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Reason_21));
#line 1378 "equiv_type_hlds.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__SomeGoal_24));
#line 1378 "equiv_type_hlds.m"
                      }
#line 1379 "equiv_type_hlds.m"
                      break;
#line 1379 "equiv_type_hlds.m"
                  }
#line 1377 "equiv_type_hlds.m"
                }
#line 1370 "equiv_type_hlds.m"
            }
#line 1346 "equiv_type_hlds.m"
            break;
#line 1346 "equiv_type_hlds.m"
          case (MR_Integer) 6:
#line 1383 "equiv_type_hlds.m"
            {
#line 1383 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));
#line 1383 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Cond0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 2)));
#line 1383 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Then0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 3)));
#line 1383 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Else0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 4)));
#line 1383 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Cond_29;
#line 1383 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Changed1_30;
#line 1383 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Then_31;
#line 1383 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Changed2_32;
#line 1383 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Else_33;
#line 1383 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Changed3_34;
#line 1383 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_189_189;
#line 1383 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_190_190;
#line 1383 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_192_192;

#line 1384 "equiv_type_hlds.m"
              {
#line 1384 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Cond0_26, &transform_hlds__equiv_type_hlds__Cond_29, &transform_hlds__equiv_type_hlds__Changed1_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_189_189);
              }
#line 1385 "equiv_type_hlds.m"
              {
#line 1385 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Then0_27, &transform_hlds__equiv_type_hlds__Then_31, &transform_hlds__equiv_type_hlds__Changed2_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_189_189, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_190_190);
              }
#line 1386 "equiv_type_hlds.m"
              {
#line 1386 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Else0_28, &transform_hlds__equiv_type_hlds__Else_33, &transform_hlds__equiv_type_hlds__Changed3_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_190_190, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
              }
#line 1387 "equiv_type_hlds.m"
              {
#line 1387 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__V_192_192 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_30, transform_hlds__equiv_type_hlds__Changed2_32);
              }
#line 1387 "equiv_type_hlds.m"
              {
#line 1387 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__V_192_192, transform_hlds__equiv_type_hlds__Changed3_34);
              }
#line 1389 "equiv_type_hlds.m"
#line 1389 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1389 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1389 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1389 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1389 "equiv_type_hlds.m"
                  break;
#line 1389 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1388 "equiv_type_hlds.m"
                  {
#line 1388 "equiv_type_hlds.m"
                    MR_Word base;
#line 1388 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1388 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1388 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Vars_25));
#line 1388 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cond_29));
#line 1388 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Then_31));
#line 1388 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Else_33));
#line 1388 "equiv_type_hlds.m"
                  }
#line 1389 "equiv_type_hlds.m"
                  break;
#line 1389 "equiv_type_hlds.m"
              }
#line 1383 "equiv_type_hlds.m"
            }
#line 1346 "equiv_type_hlds.m"
            break;
#line 1346 "equiv_type_hlds.m"
          case (MR_Integer) 7:
#line 1521 "equiv_type_hlds.m"
            {
#line 1521 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ShortHand0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__GoalExpr0_8, (MR_Integer) 1)));

#line 1538 "equiv_type_hlds.m"
#line 1538 "equiv_type_hlds.m"
              switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__ShortHand0_114)) {
#line 1538 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1538 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1550 "equiv_type_hlds.m"
                  {
#line 1551 "equiv_type_hlds.m"
                    {
#line 1551 "equiv_type_hlds.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_goal_expr\'/6", (MR_String) "bi_implication");
#line 1551 "equiv_type_hlds.m"
                      return;
                    }
#line 1550 "equiv_type_hlds.m"
                  }
#line 1538 "equiv_type_hlds.m"
                  break;
#line 1538 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1524 "equiv_type_hlds.m"
                  {
#line 1524 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__GoalType_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 0)));
#line 1524 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__Outer_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 1)));
#line 1524 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__Inner_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 2)));
#line 1524 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__MaybeOutputVars_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 3)));
#line 1524 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__MainGoal0_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 4)));
#line 1524 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__OrElseGoals0_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 5)));
#line 1524 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__OrElseInners_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 6)));
#line 1524 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__MainGoal_122;
#line 1524 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__OrElseGoals_123;
#line 1524 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_137_137;
#line 1524 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__Changed1_257;
#line 1524 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__Changed2_258;

#line 1525 "equiv_type_hlds.m"
                    {
#line 1525 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__MainGoal0_119, &transform_hlds__equiv_type_hlds__MainGoal_122, &transform_hlds__equiv_type_hlds__Changed1_257, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_137_137);
                    }
#line 1526 "equiv_type_hlds.m"
                    {
#line 1526 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__OrElseGoals0_120, &transform_hlds__equiv_type_hlds__OrElseGoals_123, &transform_hlds__equiv_type_hlds__Changed2_258, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_137_137, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
                    }
#line 1528 "equiv_type_hlds.m"
                    {
#line 1528 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed1_257, transform_hlds__equiv_type_hlds__Changed2_258);
                    }
#line 1534 "equiv_type_hlds.m"
#line 1534 "equiv_type_hlds.m"
                    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1534 "equiv_type_hlds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1534 "equiv_type_hlds.m"
                      case (MR_Integer) 0:
#line 1535 "equiv_type_hlds.m"
                        *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1534 "equiv_type_hlds.m"
                        break;
#line 1534 "equiv_type_hlds.m"
                      case (MR_Integer) 1:
#line 1530 "equiv_type_hlds.m"
                        {
#line 1530 "equiv_type_hlds.m"
                          MR_Word transform_hlds__equiv_type_hlds__ShortHand_124;

#line 1531 "equiv_type_hlds.m"
                          {
#line 1531 "equiv_type_hlds.m"
                            transform_hlds__equiv_type_hlds__ShortHand_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1531 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_124, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__GoalType_115));
#line 1531 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_124, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Outer_116));
#line 1531 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_124, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Inner_117));
#line 1531 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_124, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeOutputVars_118));
#line 1531 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_124, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__MainGoal_122));
#line 1531 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_124, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__OrElseGoals_123));
#line 1531 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__ShortHand_124, 6) = ((MR_Box) (transform_hlds__equiv_type_hlds__OrElseInners_121));
#line 1531 "equiv_type_hlds.m"
                          }
#line 1533 "equiv_type_hlds.m"
                          {
#line 1533 "equiv_type_hlds.m"
                            MR_Word base;
#line 1533 "equiv_type_hlds.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1533 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1533 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ShortHand_124));
#line 1533 "equiv_type_hlds.m"
                          }
#line 1530 "equiv_type_hlds.m"
                        }
#line 1534 "equiv_type_hlds.m"
                        break;
#line 1534 "equiv_type_hlds.m"
                    }
#line 1524 "equiv_type_hlds.m"
                  }
#line 1538 "equiv_type_hlds.m"
                  break;
#line 1538 "equiv_type_hlds.m"
                case (MR_Integer) 2:
#line 1539 "equiv_type_hlds.m"
                  {
#line 1539 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__MaybeIO_125 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 0)));
#line 1539 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__ResultVar_126 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 1)));
#line 1539 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__SubGoal0_127 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand0_114, (MR_Integer) 2)));
#line 1539 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__SubGoal_128;

#line 1540 "equiv_type_hlds.m"
                    {
#line 1540 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__SubGoal0_127, &transform_hlds__equiv_type_hlds__SubGoal_128, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_131, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_132);
                    }
#line 1545 "equiv_type_hlds.m"
#line 1545 "equiv_type_hlds.m"
                    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1545 "equiv_type_hlds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1545 "equiv_type_hlds.m"
                      case (MR_Integer) 0:
#line 1546 "equiv_type_hlds.m"
                        *transform_hlds__equiv_type_hlds__GoalExpr_9 = transform_hlds__equiv_type_hlds__GoalExpr0_8;
#line 1545 "equiv_type_hlds.m"
                        break;
#line 1545 "equiv_type_hlds.m"
                      case (MR_Integer) 1:
#line 1542 "equiv_type_hlds.m"
                        {
#line 1542 "equiv_type_hlds.m"
                          MR_Word transform_hlds__equiv_type_hlds__ShortHand_259;

#line 1543 "equiv_type_hlds.m"
                          {
#line 1543 "equiv_type_hlds.m"
                            transform_hlds__equiv_type_hlds__ShortHand_259 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1543 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand_259, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeIO_125));
#line 1543 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand_259, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ResultVar_126));
#line 1543 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__ShortHand_259, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__SubGoal_128));
#line 1543 "equiv_type_hlds.m"
                          }
#line 1544 "equiv_type_hlds.m"
                          {
#line 1544 "equiv_type_hlds.m"
                            MR_Word base;
#line 1544 "equiv_type_hlds.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1544 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__GoalExpr_9 = base;
#line 1544 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1544 "equiv_type_hlds.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ShortHand_259));
#line 1544 "equiv_type_hlds.m"
                          }
#line 1542 "equiv_type_hlds.m"
                        }
#line 1545 "equiv_type_hlds.m"
                        break;
#line 1545 "equiv_type_hlds.m"
                    }
#line 1539 "equiv_type_hlds.m"
                  }
#line 1538 "equiv_type_hlds.m"
                  break;
#line 1538 "equiv_type_hlds.m"
              }
#line 1521 "equiv_type_hlds.m"
            }
#line 1346 "equiv_type_hlds.m"
            break;
#line 1346 "equiv_type_hlds.m"
        }
#line 1346 "equiv_type_hlds.m"
        break;
#line 1346 "equiv_type_hlds.m"
    }
#line 1346 "equiv_type_hlds.m"
  }
#line 1340 "equiv_type_hlds.m"
}

#line 1327 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(
#line 1327 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1327 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1327 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1327 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1327 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5,
#line 1327 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6)
#line 1327 "equiv_type_hlds.m"
{
#line 1331 "equiv_type_hlds.m"
  {
#line 1331 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1331 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1331 "equiv_type_hlds.m"
      {
#line 1331 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1331 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
#line 1331 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5;
#line 1331 "equiv_type_hlds.m"
      }
#line 1331 "equiv_type_hlds.m"
    else
#line 1332 "equiv_type_hlds.m"
      {
#line 1332 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__H0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1332 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__T0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1332 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__T_18;
#line 1332 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed0_19;
#line 1332 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__H_20;
#line 1332 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed1_21;
#line 1332 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24;

#line 1333 "equiv_type_hlds.m"
        {
#line 1333 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_goals_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__T0_14, &transform_hlds__equiv_type_hlds__T_18, &transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24);
        }
#line 1334 "equiv_type_hlds.m"
        {
#line 1334 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__H0_13, &transform_hlds__equiv_type_hlds__H_20, &transform_hlds__equiv_type_hlds__Changed1_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_24_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Acc_6);
        }
#line 1335 "equiv_type_hlds.m"
        {
#line 1335 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_19, transform_hlds__equiv_type_hlds__Changed1_21);
        }
#line 1337 "equiv_type_hlds.m"
#line 1337 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
#line 1337 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1337 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1337 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1337 "equiv_type_hlds.m"
            break;
#line 1337 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1336 "equiv_type_hlds.m"
            {
#line 1336 "equiv_type_hlds.m"
              MR_Word base;
#line 1336 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
#line 1336 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__H_20));
#line 1336 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__T_18));
#line 1336 "equiv_type_hlds.m"
            }
#line 1337 "equiv_type_hlds.m"
            break;
#line 1337 "equiv_type_hlds.m"
        }
#line 1332 "equiv_type_hlds.m"
      }
#line 1331 "equiv_type_hlds.m"
  }
#line 1327 "equiv_type_hlds.m"
}

#line 1308 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0_1(
#line 1308 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 1308 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 1308 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 1308 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 1308 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 1308 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5)
#line 1308 "equiv_type_hlds.m"
{
#line 1308 "equiv_type_hlds.m"
  {
#line 1308 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 1308 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv1_LambdaHeadVar__3_40;
#line 1308 "equiv_type_hlds.m"
    MR_Tuple transform_hlds__equiv_type_hlds__conv0_LambdaHeadVar__5_42;

#line 1308 "equiv_type_hlds.m"
    {
#line 1308 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_goal__1308__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv1_LambdaHeadVar__3_40, ((MR_Tuple) transform_hlds__equiv_type_hlds__wrapper_arg_4), &transform_hlds__equiv_type_hlds__conv0_LambdaHeadVar__5_42);
    }
#line 1308 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv1_LambdaHeadVar__3_40));
#line 1308 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_5 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_LambdaHeadVar__5_42));
#line 1308 "equiv_type_hlds.m"
  }
#line 1308 "equiv_type_hlds.m"
}

#line 1297 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(
#line 1297 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 1297 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Goal0_8,
#line 1297 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Goal_9,
#line 1297 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 1297 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_32,
#line 1297 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33)
#line 1297 "equiv_type_hlds.m"
{
#line 1301 "equiv_type_hlds.m"
  {
#line 1301 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Goal0_8, (MR_Integer) 0)));
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Goal0_8, (MR_Integer) 1)));
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__GoalExpr_14;
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed0_15;
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstMapDelta0_16;
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet0_17;
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cache0_18;
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstMapDelta_28;
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet_29;
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Cache_30;
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34;
#line 1301 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_35_35;
#line 1301 "equiv_type_hlds.m"
    MR_Tuple transform_hlds__equiv_type_hlds__V_36_36;
#line 1301 "equiv_type_hlds.m"
    MR_Tuple transform_hlds__equiv_type_hlds__V_37_37;
#line 1306 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_56_56;
#line 1306 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_57_57;
#line 1306 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_58_58;
#line 1306 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_60_60;
#line 1308 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv2_V_37_37;

#line 1303 "equiv_type_hlds.m"
    {
#line 1303 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_goal_expr_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__GoalExpr0_12, &transform_hlds__equiv_type_hlds__GoalExpr_14, &transform_hlds__equiv_type_hlds__Changed0_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_0_32, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34);
    }
#line 1305 "equiv_type_hlds.m"
    {
#line 1305 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__InstMapDelta0_16 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(transform_hlds__equiv_type_hlds__GoalInfo0_13);
    }
#line 1306 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 0)));
#line 1306 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 1)));
#line 1306 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 2)));
#line 1306 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__TVarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 3)));
#line 1306 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__Cache0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 4)));
#line 1306 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 5)));
#line 1308 "equiv_type_hlds.m"
    {
#line 1308 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1308 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_35_35, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[3]));
#line 1308 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_35_35, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0_1));
#line 1308 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1308 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_35_35, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_7));
#line 1308 "equiv_type_hlds.m"
    }
#line 1315 "equiv_type_hlds.m"
    {
#line 1315 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_36_36 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1315 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_36_36, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Changed0_15));
#line 1315 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_36_36, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet0_17));
#line 1315 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_36_36, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cache0_18));
#line 1315 "equiv_type_hlds.m"
    }
#line 1308 "equiv_type_hlds.m"
    {
#line 1308 "equiv_type_hlds.m"
      hlds__instmap__instmap_delta_map_foldl_5_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_3[0], transform_hlds__equiv_type_hlds__V_35_35, transform_hlds__equiv_type_hlds__InstMapDelta0_16, &transform_hlds__equiv_type_hlds__InstMapDelta_28, ((MR_Box) (transform_hlds__equiv_type_hlds__V_36_36)), &transform_hlds__equiv_type_hlds__conv2_V_37_37);
    }
#line 1308 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_37_37 = ((MR_Tuple) transform_hlds__equiv_type_hlds__conv2_V_37_37);
#line 1315 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__Changed_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_37_37, (MR_Integer) 0)));
#line 1315 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__TVarSet_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_37_37, (MR_Integer) 1)));
#line 1315 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__Cache_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_37_37, (MR_Integer) 2)));
#line 1322 "equiv_type_hlds.m"
#line 1322 "equiv_type_hlds.m"
    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 1322 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1322 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 1323 "equiv_type_hlds.m"
        {
#line 1324 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Goal_9 = transform_hlds__equiv_type_hlds__Goal0_8;
#line 1323 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34;
#line 1323 "equiv_type_hlds.m"
        }
#line 1322 "equiv_type_hlds.m"
        break;
#line 1322 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 1317 "equiv_type_hlds.m"
        {
#line 1317 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__GoalInfo_31;
#line 1317 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 0)));
#line 1317 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 1)));
#line 1317 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 2)));
#line 1317 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 5)));
#line 1318 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 3)));
#line 1318 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_34_34, (MR_Integer) 4)));

#line 1319 "equiv_type_hlds.m"
          {
#line 1319 "equiv_type_hlds.m"
            MR_Word base;
#line 1319 "equiv_type_hlds.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1319 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Info_33 = base;
#line 1319 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_66_66));
#line 1319 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_67_67));
#line 1319 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_68_68));
#line 1319 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_29));
#line 1319 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__Cache_30));
#line 1319 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_71_71));
#line 1319 "equiv_type_hlds.m"
          }
#line 1320 "equiv_type_hlds.m"
          {
#line 1320 "equiv_type_hlds.m"
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(transform_hlds__equiv_type_hlds__InstMapDelta_28, transform_hlds__equiv_type_hlds__GoalInfo0_13, &transform_hlds__equiv_type_hlds__GoalInfo_31);
          }
#line 1321 "equiv_type_hlds.m"
          {
#line 1321 "equiv_type_hlds.m"
            MR_Word base;
#line 1321 "equiv_type_hlds.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__Goal_9 = base;
#line 1321 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__GoalExpr_14));
#line 1321 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__GoalInfo_31));
#line 1321 "equiv_type_hlds.m"
          }
#line 1317 "equiv_type_hlds.m"
        }
#line 1322 "equiv_type_hlds.m"
        break;
#line 1322 "equiv_type_hlds.m"
    }
#line 1301 "equiv_type_hlds.m"
  }
#line 1297 "equiv_type_hlds.m"
}

#line 1255 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(
#line 1255 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1255 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1255 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1255 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1255 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
#line 1255 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
#line 1255 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
#line 1255 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8)
#line 1255 "equiv_type_hlds.m"
{
#line 1259 "equiv_type_hlds.m"
  {
#line 1259 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1259 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1259 "equiv_type_hlds.m"
      {
#line 1259 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1259 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
#line 1259 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7;
#line 1259 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5;
#line 1259 "equiv_type_hlds.m"
      }
#line 1259 "equiv_type_hlds.m"
    else
#line 1261 "equiv_type_hlds.m"
      {
#line 1261 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Inst0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1261 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Insts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1261 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Inst_24;
#line 1261 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed0_25;
#line 1261 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Insts_26;
#line 1261 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed1_27;
#line 1261 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32;
#line 1261 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33;

#line 1262 "equiv_type_hlds.m"
        {
#line 1262 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Inst0_18, &transform_hlds__equiv_type_hlds__Inst_24, &transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33);
        }
#line 1263 "equiv_type_hlds.m"
        {
#line 1263 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Insts0_19, &transform_hlds__equiv_type_hlds__Insts_26, &transform_hlds__equiv_type_hlds__Changed1_27, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);
        }
#line 1264 "equiv_type_hlds.m"
        {
#line 1264 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__Changed1_27);
        }
#line 1266 "equiv_type_hlds.m"
#line 1266 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
#line 1266 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1266 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1266 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1266 "equiv_type_hlds.m"
            break;
#line 1266 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1265 "equiv_type_hlds.m"
            {
#line 1265 "equiv_type_hlds.m"
              MR_Word base;
#line 1265 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
#line 1265 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Inst_24));
#line 1265 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Insts_26));
#line 1265 "equiv_type_hlds.m"
            }
#line 1266 "equiv_type_hlds.m"
            break;
#line 1266 "equiv_type_hlds.m"
        }
#line 1261 "equiv_type_hlds.m"
      }
#line 1259 "equiv_type_hlds.m"
  }
#line 1255 "equiv_type_hlds.m"
}

#line 1238 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(
#line 1238 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 1238 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 1238 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 1238 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 1238 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
#line 1238 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
#line 1238 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
#line 1238 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8)
#line 1238 "equiv_type_hlds.m"
{
#line 1242 "equiv_type_hlds.m"
  {
#line 1242 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1242 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1242 "equiv_type_hlds.m"
      {
#line 1242 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1242 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
#line 1242 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7;
#line 1242 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5;
#line 1242 "equiv_type_hlds.m"
      }
#line 1242 "equiv_type_hlds.m"
    else
#line 1245 "equiv_type_hlds.m"
      {
#line 1245 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__ConsId_18;
#line 1245 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Insts0_19;
#line 1245 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__BoundInsts0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1245 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Insts_25;
#line 1245 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstsChanged_26;
#line 1245 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__BoundInsts_27;
#line 1245 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__BoundInstsChanged_28;
#line 1245 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1245 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_34;
#line 1245 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_35;

#line 1244 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__ConsId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_33_33, (MR_Integer) 0)));
#line 1244 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__Insts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_33_33, (MR_Integer) 1)));
#line 1246 "equiv_type_hlds.m"
        {
#line 1246 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Insts0_19, &transform_hlds__equiv_type_hlds__Insts_25, &transform_hlds__equiv_type_hlds__InstsChanged_26, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_35);
        }
#line 1248 "equiv_type_hlds.m"
        {
#line 1248 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__BoundInsts0_20, &transform_hlds__equiv_type_hlds__BoundInsts_27, &transform_hlds__equiv_type_hlds__BoundInstsChanged_28, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_34_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_35_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);
        }
#line 1250 "equiv_type_hlds.m"
        {
#line 1250 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__InstsChanged_26, transform_hlds__equiv_type_hlds__BoundInstsChanged_28);
        }
#line 1252 "equiv_type_hlds.m"
#line 1252 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
#line 1252 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1252 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1252 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 1252 "equiv_type_hlds.m"
            break;
#line 1252 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1251 "equiv_type_hlds.m"
            {
#line 1251 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_38_38;

#line 1251 "equiv_type_hlds.m"
              {
#line 1251 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1251 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_38_38, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__ConsId_18));
#line 1251 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_38_38, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Insts_25));
#line 1251 "equiv_type_hlds.m"
              }
#line 1251 "equiv_type_hlds.m"
              {
#line 1251 "equiv_type_hlds.m"
                MR_Word base;
#line 1251 "equiv_type_hlds.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
#line 1251 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_38_38));
#line 1251 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__BoundInsts_27));
#line 1251 "equiv_type_hlds.m"
              }
#line 1251 "equiv_type_hlds.m"
            }
#line 1252 "equiv_type_hlds.m"
            break;
#line 1252 "equiv_type_hlds.m"
        }
#line 1245 "equiv_type_hlds.m"
      }
#line 1242 "equiv_type_hlds.m"
  }
#line 1238 "equiv_type_hlds.m"
}

#line 1165 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(
#line 1165 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 1165 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__InstName0_10,
#line 1165 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__InstName_11,
#line 1165 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 1165 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34,
#line 1165 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35,
#line 1165 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36,
#line 1165 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37)
#line 1165 "equiv_type_hlds.m"
{
#line 1172 "equiv_type_hlds.m"
  {
#line 1172 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1172 "equiv_type_hlds.m"
#line 1172 "equiv_type_hlds.m"
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__InstName0_10)) {
#line 1172 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1172 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 1172 "equiv_type_hlds.m"
        {
#line 1172 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 0)));
#line 1172 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
#line 1172 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Insts_17;

#line 1173 "equiv_type_hlds.m"
          {
#line 1173 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Insts0_16, &transform_hlds__equiv_type_hlds__Insts_17, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
          }
#line 1175 "equiv_type_hlds.m"
#line 1175 "equiv_type_hlds.m"
          switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1175 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1175 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 1175 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1175 "equiv_type_hlds.m"
              break;
#line 1175 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 1174 "equiv_type_hlds.m"
              {
#line 1174 "equiv_type_hlds.m"
                MR_Word base;
#line 1174 "equiv_type_hlds.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1174 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_15));
#line 1174 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Insts_17));
#line 1174 "equiv_type_hlds.m"
              }
#line 1175 "equiv_type_hlds.m"
              break;
#line 1175 "equiv_type_hlds.m"
          }
#line 1172 "equiv_type_hlds.m"
        }
#line 1172 "equiv_type_hlds.m"
        break;
#line 1172 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 1178 "equiv_type_hlds.m"
        {
#line 1178 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Live_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 0)));
#line 1178 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Real_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
#line 1178 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstA0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)));
#line 1178 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstB0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 3)));
#line 1178 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstA_22;
#line 1178 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__ChangedA_23;
#line 1178 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstB_24;
#line 1178 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__ChangedB_25;
#line 1178 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56;
#line 1178 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_57_57;

#line 1179 "equiv_type_hlds.m"
          {
#line 1179 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstA0_20, &transform_hlds__equiv_type_hlds__InstA_22, &transform_hlds__equiv_type_hlds__ChangedA_23, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_57_57);
          }
#line 1180 "equiv_type_hlds.m"
          {
#line 1180 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstB0_21, &transform_hlds__equiv_type_hlds__InstB_24, &transform_hlds__equiv_type_hlds__ChangedB_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_57_57, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
          }
#line 1181 "equiv_type_hlds.m"
          {
#line 1181 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__Changed_12 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_23, transform_hlds__equiv_type_hlds__ChangedB_25);
          }
#line 1183 "equiv_type_hlds.m"
#line 1183 "equiv_type_hlds.m"
          switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1183 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1183 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 1183 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1183 "equiv_type_hlds.m"
              break;
#line 1183 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 1182 "equiv_type_hlds.m"
              {
#line 1182 "equiv_type_hlds.m"
                MR_Word base;
#line 1182 "equiv_type_hlds.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1182 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Live_18));
#line 1182 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Real_19));
#line 1182 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_22));
#line 1182 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_24));
#line 1182 "equiv_type_hlds.m"
              }
#line 1183 "equiv_type_hlds.m"
              break;
#line 1183 "equiv_type_hlds.m"
          }
#line 1178 "equiv_type_hlds.m"
        }
#line 1172 "equiv_type_hlds.m"
        break;
#line 1172 "equiv_type_hlds.m"
      case (MR_Integer) 2:
#line 1186 "equiv_type_hlds.m"
        {
#line 1186 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_52_52;
#line 1186 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_53_53;
#line 1186 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstA0_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 0)));
#line 1186 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstB0_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
#line 1186 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstA_64;
#line 1186 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__ChangedA_65;
#line 1186 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__InstB_66;
#line 1186 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__ChangedB_67;

#line 1187 "equiv_type_hlds.m"
          {
#line 1187 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstA0_62, &transform_hlds__equiv_type_hlds__InstA_64, &transform_hlds__equiv_type_hlds__ChangedA_65, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_52_52, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_53_53);
          }
#line 1188 "equiv_type_hlds.m"
          {
#line 1188 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstB0_63, &transform_hlds__equiv_type_hlds__InstB_66, &transform_hlds__equiv_type_hlds__ChangedB_67, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_52_52, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_53_53, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
          }
#line 1189 "equiv_type_hlds.m"
          {
#line 1189 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__Changed_12 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_65, transform_hlds__equiv_type_hlds__ChangedB_67);
          }
#line 1191 "equiv_type_hlds.m"
#line 1191 "equiv_type_hlds.m"
          switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1191 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1191 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 1191 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1191 "equiv_type_hlds.m"
              break;
#line 1191 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 1190 "equiv_type_hlds.m"
              {
#line 1190 "equiv_type_hlds.m"
                MR_Word base;
#line 1190 "equiv_type_hlds.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1190 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_64));
#line 1190 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_66));
#line 1190 "equiv_type_hlds.m"
              }
#line 1191 "equiv_type_hlds.m"
              break;
#line 1191 "equiv_type_hlds.m"
          }
#line 1186 "equiv_type_hlds.m"
        }
#line 1172 "equiv_type_hlds.m"
        break;
#line 1172 "equiv_type_hlds.m"
      case (MR_Integer) 3:
#line 1172 "equiv_type_hlds.m"
#line 1172 "equiv_type_hlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 0)))) {
#line 1172 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1172 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1194 "equiv_type_hlds.m"
            {
#line 1194 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
#line 1194 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Uniq_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1194 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name_68;
#line 1194 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Live_69 = ((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 1194 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Real_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 1195 "equiv_type_hlds.m"
              {
#line 1195 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Name0_26, &transform_hlds__equiv_type_hlds__Name_68, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
              }
#line 1198 "equiv_type_hlds.m"
#line 1198 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1198 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1198 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1198 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1198 "equiv_type_hlds.m"
                  break;
#line 1198 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1197 "equiv_type_hlds.m"
                  {
#line 1197 "equiv_type_hlds.m"
                    MR_Word base;
#line 1197 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1197 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1197 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_68));
#line 1197 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((transform_hlds__equiv_type_hlds__Live_69 | ((((transform_hlds__equiv_type_hlds__Uniq_27 << (MR_Integer) 3)) | ((transform_hlds__equiv_type_hlds__Real_70 << (MR_Integer) 4)))))));
#line 1197 "equiv_type_hlds.m"
                  }
#line 1198 "equiv_type_hlds.m"
                  break;
#line 1198 "equiv_type_hlds.m"
              }
#line 1194 "equiv_type_hlds.m"
            }
#line 1172 "equiv_type_hlds.m"
            break;
#line 1172 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1201 "equiv_type_hlds.m"
            {
#line 1201 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name_71;
#line 1201 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Live_72 = ((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 1201 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Real_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1201 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
#line 1201 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Uniq_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 1202 "equiv_type_hlds.m"
              {
#line 1202 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Name0_74, &transform_hlds__equiv_type_hlds__Name_71, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
              }
#line 1205 "equiv_type_hlds.m"
#line 1205 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1205 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1205 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1205 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1205 "equiv_type_hlds.m"
                  break;
#line 1205 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1204 "equiv_type_hlds.m"
                  {
#line 1204 "equiv_type_hlds.m"
                    MR_Word base;
#line 1204 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1204 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1204 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_71));
#line 1204 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((transform_hlds__equiv_type_hlds__Live_72 | ((((transform_hlds__equiv_type_hlds__Uniq_75 << (MR_Integer) 3)) | ((transform_hlds__equiv_type_hlds__Real_73 << (MR_Integer) 4)))))));
#line 1204 "equiv_type_hlds.m"
                  }
#line 1205 "equiv_type_hlds.m"
                  break;
#line 1205 "equiv_type_hlds.m"
              }
#line 1201 "equiv_type_hlds.m"
            }
#line 1172 "equiv_type_hlds.m"
            break;
#line 1172 "equiv_type_hlds.m"
          case (MR_Integer) 2:
#line 1208 "equiv_type_hlds.m"
            {
#line 1208 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name_76;
#line 1208 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));

#line 1209 "equiv_type_hlds.m"
              {
#line 1209 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Name0_77, &transform_hlds__equiv_type_hlds__Name_76, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
              }
#line 1212 "equiv_type_hlds.m"
#line 1212 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1212 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1212 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1212 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1212 "equiv_type_hlds.m"
                  break;
#line 1212 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1211 "equiv_type_hlds.m"
                  {
#line 1211 "equiv_type_hlds.m"
                    MR_Word base;
#line 1211 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1211 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1211 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_76));
#line 1211 "equiv_type_hlds.m"
                  }
#line 1212 "equiv_type_hlds.m"
                  break;
#line 1212 "equiv_type_hlds.m"
              }
#line 1208 "equiv_type_hlds.m"
            }
#line 1172 "equiv_type_hlds.m"
            break;
#line 1172 "equiv_type_hlds.m"
          case (MR_Integer) 3:
#line 1215 "equiv_type_hlds.m"
            {
#line 1215 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name_78;
#line 1215 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));

#line 1216 "equiv_type_hlds.m"
              {
#line 1216 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Name0_79, &transform_hlds__equiv_type_hlds__Name_78, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
              }
#line 1219 "equiv_type_hlds.m"
#line 1219 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1219 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1219 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1219 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1219 "equiv_type_hlds.m"
                  break;
#line 1219 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1218 "equiv_type_hlds.m"
                  {
#line 1218 "equiv_type_hlds.m"
                    MR_Word base;
#line 1218 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1218 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1218 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_78));
#line 1218 "equiv_type_hlds.m"
                  }
#line 1219 "equiv_type_hlds.m"
                  break;
#line 1219 "equiv_type_hlds.m"
              }
#line 1215 "equiv_type_hlds.m"
            }
#line 1172 "equiv_type_hlds.m"
            break;
#line 1172 "equiv_type_hlds.m"
          case (MR_Integer) 4:
#line 1222 "equiv_type_hlds.m"
            {
#line 1222 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Type0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)));
#line 1222 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Type_29;
#line 1222 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Uniq_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
#line 1223 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_30_30;

#line 1223 "equiv_type_hlds.m"
              {
#line 1223 "equiv_type_hlds.m"
                parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Type0_28, &transform_hlds__equiv_type_hlds__Type_29, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__V_30_30);
              }
#line 1225 "equiv_type_hlds.m"
#line 1225 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1225 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1225 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1225 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1225 "equiv_type_hlds.m"
                  break;
#line 1225 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1224 "equiv_type_hlds.m"
                  {
#line 1224 "equiv_type_hlds.m"
                    MR_Word base;
#line 1224 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1224 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1224 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Uniq_80));
#line 1224 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_29));
#line 1224 "equiv_type_hlds.m"
                  }
#line 1225 "equiv_type_hlds.m"
                  break;
#line 1225 "equiv_type_hlds.m"
              }
#line 1222 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36;
#line 1222 "equiv_type_hlds.m"
            }
#line 1172 "equiv_type_hlds.m"
            break;
#line 1172 "equiv_type_hlds.m"
          case (MR_Integer) 5:
#line 1228 "equiv_type_hlds.m"
            {
#line 1228 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__TypeChanged_31;
#line 1228 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Changed0_33;
#line 1228 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_38;
#line 1228 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name_81;
#line 1228 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name0_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 2)));
#line 1228 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Type0_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__InstName0_10, (MR_Integer) 1)));
#line 1228 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Type_84;
#line 1229 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_32_32;

#line 1229 "equiv_type_hlds.m"
              {
#line 1229 "equiv_type_hlds.m"
                parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Type0_83, &transform_hlds__equiv_type_hlds__Type_84, &transform_hlds__equiv_type_hlds__TypeChanged_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_34, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__V_32_32);
              }
#line 1230 "equiv_type_hlds.m"
              {
#line 1230 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Name0_82, &transform_hlds__equiv_type_hlds__Name_81, &transform_hlds__equiv_type_hlds__Changed0_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_38_38, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_35, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
              }
#line 1232 "equiv_type_hlds.m"
              {
#line 1232 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__Changed_12 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__TypeChanged_31, transform_hlds__equiv_type_hlds__Changed0_33);
              }
#line 1234 "equiv_type_hlds.m"
#line 1234 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1234 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1234 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1234 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__InstName_11 = transform_hlds__equiv_type_hlds__InstName0_10;
#line 1234 "equiv_type_hlds.m"
                  break;
#line 1234 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1233 "equiv_type_hlds.m"
                  {
#line 1233 "equiv_type_hlds.m"
                    MR_Word base;
#line 1233 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__InstName_11 = base;
#line 1233 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1233 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_84));
#line 1233 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_81));
#line 1233 "equiv_type_hlds.m"
                  }
#line 1234 "equiv_type_hlds.m"
                  break;
#line 1234 "equiv_type_hlds.m"
              }
#line 1228 "equiv_type_hlds.m"
            }
#line 1172 "equiv_type_hlds.m"
            break;
#line 1172 "equiv_type_hlds.m"
        }
#line 1172 "equiv_type_hlds.m"
        break;
#line 1172 "equiv_type_hlds.m"
    }
#line 1172 "equiv_type_hlds.m"
  }
#line 1165 "equiv_type_hlds.m"
}

#line 1046 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_2_8_p_0(
#line 1046 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 1046 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst0_10,
#line 1046 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Inst_11,
#line 1046 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 1046 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49,
#line 1046 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50,
#line 1046 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51,
#line 1046 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52)
#line 1046 "equiv_type_hlds.m"
{
#line 1057 "equiv_type_hlds.m"
  {
#line 1057 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1057 "equiv_type_hlds.m"
#line 1057 "equiv_type_hlds.m"
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Inst0_10)) {
#line 1057 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1057 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 1057 "equiv_type_hlds.m"
#line 1057 "equiv_type_hlds.m"
        switch (MR_unmkbody(transform_hlds__equiv_type_hlds__Inst0_10)) {
#line 1057 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1057 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1057 "equiv_type_hlds.m"
            {
#line 1058 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1059 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 1057 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
#line 1057 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 1057 "equiv_type_hlds.m"
            }
#line 1057 "equiv_type_hlds.m"
            break;
#line 1057 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1057 "equiv_type_hlds.m"
            {
#line 1058 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1059 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 1057 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
#line 1057 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 1057 "equiv_type_hlds.m"
            }
#line 1057 "equiv_type_hlds.m"
            break;
#line 1057 "equiv_type_hlds.m"
        }
#line 1057 "equiv_type_hlds.m"
        break;
#line 1057 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 1073 "equiv_type_hlds.m"
        {
#line 1073 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Type0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 0)));
#line 1073 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Type_27;
#line 1074 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_28_28;

#line 1074 "equiv_type_hlds.m"
          {
#line 1074 "equiv_type_hlds.m"
            parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Type0_26, &transform_hlds__equiv_type_hlds__Type_27, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__V_28_28);
          }
#line 1077 "equiv_type_hlds.m"
#line 1077 "equiv_type_hlds.m"
          switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1077 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1077 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 1077 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1077 "equiv_type_hlds.m"
              break;
#line 1077 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 1076 "equiv_type_hlds.m"
              {
#line 1076 "equiv_type_hlds.m"
                MR_Word base;
#line 1076 "equiv_type_hlds.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1076 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_27));
#line 1076 "equiv_type_hlds.m"
              }
#line 1077 "equiv_type_hlds.m"
              break;
#line 1077 "equiv_type_hlds.m"
          }
#line 1073 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 1073 "equiv_type_hlds.m"
        }
#line 1057 "equiv_type_hlds.m"
        break;
#line 1057 "equiv_type_hlds.m"
      case (MR_Integer) 2:
#line 1057 "equiv_type_hlds.m"
        {
#line 1057 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));
#line 1057 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 0)));

#line 1057 "equiv_type_hlds.m"
          if ((transform_hlds__equiv_type_hlds__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "equiv_type_hlds.m"
            {
#line 1058 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1059 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 1057 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
#line 1057 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 1057 "equiv_type_hlds.m"
            }
#line 1057 "equiv_type_hlds.m"
          else
#line 1061 "equiv_type_hlds.m"
            {
#line 1061 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__PredInstInfo0_19 = (MR_Word) MR_body(((MR_Word) transform_hlds__equiv_type_hlds__V_87_87), (MR_Integer) 1);
#line 1061 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__PorF_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_19, (MR_Integer) 0)));
#line 1061 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Modes0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_19, (MR_Integer) 1)));
#line 1061 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__MaybeArgRegs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_19, (MR_Integer) 2)));
#line 1061 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_19, (MR_Integer) 3)));
#line 1061 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Modes_24;

#line 1063 "equiv_type_hlds.m"
              {
#line 1063 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Modes0_21, &transform_hlds__equiv_type_hlds__Modes_24, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
              }
#line 1068 "equiv_type_hlds.m"
#line 1068 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1068 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1068 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1069 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1068 "equiv_type_hlds.m"
                  break;
#line 1068 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1065 "equiv_type_hlds.m"
                  {
#line 1065 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__PredInstInfo_25;
#line 1065 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__V_72_72;

#line 1066 "equiv_type_hlds.m"
                    {
#line 1066 "equiv_type_hlds.m"
                      transform_hlds__equiv_type_hlds__PredInstInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1066 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_25, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__PorF_20));
#line 1066 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_25, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Modes_24));
#line 1066 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_25, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeArgRegs_22));
#line 1066 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_25, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Det_23));
#line 1066 "equiv_type_hlds.m"
                    }
#line 1067 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__equiv_type_hlds__PredInstInfo_25);
#line 1067 "equiv_type_hlds.m"
                    {
#line 1067 "equiv_type_hlds.m"
                      MR_Word base;
#line 1067 "equiv_type_hlds.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1067 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_88_88));
#line 1067 "equiv_type_hlds.m"
                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_72_72));
#line 1067 "equiv_type_hlds.m"
                    }
#line 1065 "equiv_type_hlds.m"
                  }
#line 1068 "equiv_type_hlds.m"
                  break;
#line 1068 "equiv_type_hlds.m"
              }
#line 1061 "equiv_type_hlds.m"
            }
#line 1057 "equiv_type_hlds.m"
        }
#line 1057 "equiv_type_hlds.m"
        break;
#line 1057 "equiv_type_hlds.m"
      case (MR_Integer) 3:
#line 1057 "equiv_type_hlds.m"
#line 1057 "equiv_type_hlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 0)))) {
#line 1057 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1057 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 1080 "equiv_type_hlds.m"
            {
#line 1080 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__InstResults0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 2)));
#line 1080 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__BoundInsts0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 3)));
#line 1080 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Uniq_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));

#line 8642 "transform_hlds.equiv_type_hlds.c"
#line 8643 "transform_hlds.equiv_type_hlds.c"
              switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__InstResults0_29)) {
#line 8645 "transform_hlds.equiv_type_hlds.c"
                default: /*NOTREACHED*/ MR_assert(0);
#line 8647 "transform_hlds.equiv_type_hlds.c"
                case (MR_Integer) 0:
#line 8649 "transform_hlds.equiv_type_hlds.c"
#line 8650 "transform_hlds.equiv_type_hlds.c"
                  switch (MR_unmkbody(transform_hlds__equiv_type_hlds__InstResults0_29)) {
#line 8652 "transform_hlds.equiv_type_hlds.c"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 8654 "transform_hlds.equiv_type_hlds.c"
                    case (MR_Integer) 0:
#line 8656 "transform_hlds.equiv_type_hlds.c"
                      {
#line 8658 "transform_hlds.equiv_type_hlds.c"
                        MR_Word transform_hlds__equiv_type_hlds__BoundInsts_40;

#line 1113 "equiv_type_hlds.m"
                        {
#line 1113 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__BoundInsts0_30, &transform_hlds__equiv_type_hlds__BoundInsts_40, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
                        }
#line 1118 "equiv_type_hlds.m"
#line 1118 "equiv_type_hlds.m"
                        switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1118 "equiv_type_hlds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1118 "equiv_type_hlds.m"
                          case (MR_Integer) 0:
#line 1118 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1118 "equiv_type_hlds.m"
                            break;
#line 1118 "equiv_type_hlds.m"
                          case (MR_Integer) 1:
#line 1117 "equiv_type_hlds.m"
                            {
#line 1117 "equiv_type_hlds.m"
                              MR_Word base;
#line 1117 "equiv_type_hlds.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "equiv_type_hlds.m"
                              *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1117 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1117 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Uniq_75));
#line 1117 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstResults0_29));
#line 1117 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__BoundInsts_40));
#line 1117 "equiv_type_hlds.m"
                            }
#line 1118 "equiv_type_hlds.m"
                            break;
#line 1118 "equiv_type_hlds.m"
                        }
#line 8701 "transform_hlds.equiv_type_hlds.c"
                      }
#line 8703 "transform_hlds.equiv_type_hlds.c"
                      break;
#line 8705 "transform_hlds.equiv_type_hlds.c"
                    case (MR_Integer) 1:
#line 8707 "transform_hlds.equiv_type_hlds.c"
                      {
#line 1109 "equiv_type_hlds.m"
                        *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 1110 "equiv_type_hlds.m"
                        *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1108 "equiv_type_hlds.m"
                        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
#line 1108 "equiv_type_hlds.m"
                        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 8717 "transform_hlds.equiv_type_hlds.c"
                      }
#line 8719 "transform_hlds.equiv_type_hlds.c"
                      break;
#line 8721 "transform_hlds.equiv_type_hlds.c"
                  }
#line 8723 "transform_hlds.equiv_type_hlds.c"
                  break;
#line 8725 "transform_hlds.equiv_type_hlds.c"
                case (MR_Integer) 1:
#line 8727 "transform_hlds.equiv_type_hlds.c"
                  {
#line 8729 "transform_hlds.equiv_type_hlds.c"
                    MR_Word transform_hlds__equiv_type_hlds__GroundnessResult_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 0)));
#line 8731 "transform_hlds.equiv_type_hlds.c"
                    MR_Word transform_hlds__equiv_type_hlds__AnyResult_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 1)));
#line 8733 "transform_hlds.equiv_type_hlds.c"
                    MR_Word transform_hlds__equiv_type_hlds__InstNamesResult_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 2)));
#line 8735 "transform_hlds.equiv_type_hlds.c"
                    MR_Word transform_hlds__equiv_type_hlds__InstVarsResult_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 3)));
#line 8737 "transform_hlds.equiv_type_hlds.c"
                    MR_Word transform_hlds__equiv_type_hlds__TypeResult_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 4)));
#line 8739 "transform_hlds.equiv_type_hlds.c"
                    MR_Word transform_hlds__equiv_type_hlds__PropagatedResult_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults0_29, (MR_Integer) 5)));

#line 8742 "transform_hlds.equiv_type_hlds.c"
                    if ((transform_hlds__equiv_type_hlds__TypeResult_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8744 "transform_hlds.equiv_type_hlds.c"
                      {
#line 8746 "transform_hlds.equiv_type_hlds.c"
                        MR_Word transform_hlds__equiv_type_hlds__BoundInsts_102;

#line 1113 "equiv_type_hlds.m"
                        {
#line 1113 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__BoundInsts0_30, &transform_hlds__equiv_type_hlds__BoundInsts_102, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
                        }
#line 1118 "equiv_type_hlds.m"
#line 1118 "equiv_type_hlds.m"
                        switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1118 "equiv_type_hlds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1118 "equiv_type_hlds.m"
                          case (MR_Integer) 0:
#line 1118 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1118 "equiv_type_hlds.m"
                            break;
#line 1118 "equiv_type_hlds.m"
                          case (MR_Integer) 1:
#line 1117 "equiv_type_hlds.m"
                            {
#line 1117 "equiv_type_hlds.m"
                              MR_Word base;
#line 1117 "equiv_type_hlds.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "equiv_type_hlds.m"
                              *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1117 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1117 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Uniq_75));
#line 1117 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstResults0_29));
#line 1117 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__BoundInsts_102));
#line 1117 "equiv_type_hlds.m"
                            }
#line 1118 "equiv_type_hlds.m"
                            break;
#line 1118 "equiv_type_hlds.m"
                        }
#line 8789 "transform_hlds.equiv_type_hlds.c"
                      }
#line 8791 "transform_hlds.equiv_type_hlds.c"
                    else
#line 8793 "transform_hlds.equiv_type_hlds.c"
                      {
#line 8795 "transform_hlds.equiv_type_hlds.c"
                        MR_Word transform_hlds__equiv_type_hlds__TypeCtors_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__TypeResult_35, (MR_Integer) 0)));

#line 1092 "equiv_type_hlds.m"
                        {
#line 1092 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__equiv_type_hlds__TypeCtors_38);
                        }
#line 8803 "transform_hlds.equiv_type_hlds.c"
                        if (transform_hlds__equiv_type_hlds__succeeded)
#line 8805 "transform_hlds.equiv_type_hlds.c"
                          {
#line 1109 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 1110 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1108 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
#line 1108 "equiv_type_hlds.m"
                            *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 8815 "transform_hlds.equiv_type_hlds.c"
                          }
#line 8817 "transform_hlds.equiv_type_hlds.c"
                        else
#line 8819 "transform_hlds.equiv_type_hlds.c"
                          {
#line 8821 "transform_hlds.equiv_type_hlds.c"
                            MR_Word transform_hlds__equiv_type_hlds__InstResults_91;
#line 8823 "transform_hlds.equiv_type_hlds.c"
                            MR_Word transform_hlds__equiv_type_hlds__BoundInsts_92;

#line 1095 "equiv_type_hlds.m"
                            {
#line 1095 "equiv_type_hlds.m"
                              transform_hlds__equiv_type_hlds__InstResults_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__GroundnessResult_31));
#line 1095 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__AnyResult_32));
#line 1095 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstNamesResult_33));
#line 1095 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstVarsResult_34));
#line 1095 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1095 "equiv_type_hlds.m"
                              MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_91, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__PropagatedResult_36));
#line 1095 "equiv_type_hlds.m"
                            }
#line 1113 "equiv_type_hlds.m"
                            {
#line 1113 "equiv_type_hlds.m"
                              transform_hlds__equiv_type_hlds__replace_in_bound_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__BoundInsts0_30, &transform_hlds__equiv_type_hlds__BoundInsts_92, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
                            }
#line 1118 "equiv_type_hlds.m"
#line 1118 "equiv_type_hlds.m"
                            switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1118 "equiv_type_hlds.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 1118 "equiv_type_hlds.m"
                              case (MR_Integer) 0:
#line 1118 "equiv_type_hlds.m"
                                *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1118 "equiv_type_hlds.m"
                                break;
#line 1118 "equiv_type_hlds.m"
                              case (MR_Integer) 1:
#line 1117 "equiv_type_hlds.m"
                                {
#line 1117 "equiv_type_hlds.m"
                                  MR_Word base;
#line 1117 "equiv_type_hlds.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "equiv_type_hlds.m"
                                  *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1117 "equiv_type_hlds.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1117 "equiv_type_hlds.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Uniq_75));
#line 1117 "equiv_type_hlds.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstResults_91));
#line 1117 "equiv_type_hlds.m"
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__BoundInsts_92));
#line 1117 "equiv_type_hlds.m"
                                }
#line 1118 "equiv_type_hlds.m"
                                break;
#line 1118 "equiv_type_hlds.m"
                            }
#line 8884 "transform_hlds.equiv_type_hlds.c"
                          }
#line 8886 "transform_hlds.equiv_type_hlds.c"
                      }
#line 8888 "transform_hlds.equiv_type_hlds.c"
                  }
#line 8890 "transform_hlds.equiv_type_hlds.c"
                  break;
#line 8892 "transform_hlds.equiv_type_hlds.c"
              }
#line 1080 "equiv_type_hlds.m"
            }
#line 1057 "equiv_type_hlds.m"
            break;
#line 1057 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 1057 "equiv_type_hlds.m"
            {
#line 1057 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 2)));
#line 1057 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));

#line 1057 "equiv_type_hlds.m"
              if ((transform_hlds__equiv_type_hlds__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "equiv_type_hlds.m"
                {
#line 1058 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1059 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 1057 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
#line 1057 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 1057 "equiv_type_hlds.m"
                }
#line 1057 "equiv_type_hlds.m"
              else
#line 1122 "equiv_type_hlds.m"
                {
#line 1122 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__PredInstInfo0_79 = (MR_Word) MR_body(((MR_Word) transform_hlds__equiv_type_hlds__V_89_89), (MR_Integer) 1);
#line 1122 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__PorF_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_79, (MR_Integer) 0)));
#line 1122 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Modes0_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_79, (MR_Integer) 1)));
#line 1122 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__MaybeArgRegs_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_79, (MR_Integer) 2)));
#line 1122 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Det_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo0_79, (MR_Integer) 3)));
#line 1122 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__Modes_84;

#line 1124 "equiv_type_hlds.m"
                  {
#line 1124 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Modes0_81, &transform_hlds__equiv_type_hlds__Modes_84, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
                  }
#line 1129 "equiv_type_hlds.m"
#line 1129 "equiv_type_hlds.m"
                  switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1129 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1129 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 1130 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1129 "equiv_type_hlds.m"
                      break;
#line 1129 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 1126 "equiv_type_hlds.m"
                      {
#line 1126 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_62_62;
#line 1126 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__PredInstInfo_76;

#line 1127 "equiv_type_hlds.m"
                        {
#line 1127 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__PredInstInfo_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_76, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__PorF_80));
#line 1127 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_76, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Modes_84));
#line 1127 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_76, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeArgRegs_82));
#line 1127 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__PredInstInfo_76, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Det_83));
#line 1127 "equiv_type_hlds.m"
                        }
#line 1128 "equiv_type_hlds.m"
                        transform_hlds__equiv_type_hlds__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) transform_hlds__equiv_type_hlds__PredInstInfo_76);
#line 1128 "equiv_type_hlds.m"
                        {
#line 1128 "equiv_type_hlds.m"
                          MR_Word base;
#line 1128 "equiv_type_hlds.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "equiv_type_hlds.m"
                          *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1128 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1128 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_90_90));
#line 1128 "equiv_type_hlds.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_62_62));
#line 1128 "equiv_type_hlds.m"
                        }
#line 1126 "equiv_type_hlds.m"
                      }
#line 1129 "equiv_type_hlds.m"
                      break;
#line 1129 "equiv_type_hlds.m"
                  }
#line 1122 "equiv_type_hlds.m"
                }
#line 1057 "equiv_type_hlds.m"
            }
#line 1057 "equiv_type_hlds.m"
            break;
#line 1057 "equiv_type_hlds.m"
          case (MR_Integer) 2:
#line 1057 "equiv_type_hlds.m"
            {
#line 1058 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1059 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 1057 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49;
#line 1057 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51;
#line 1057 "equiv_type_hlds.m"
            }
#line 1057 "equiv_type_hlds.m"
            break;
#line 1057 "equiv_type_hlds.m"
          case (MR_Integer) 3:
#line 1134 "equiv_type_hlds.m"
            {
#line 1134 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Vars_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));
#line 1134 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__CInst0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 2)));
#line 1134 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__CInst_43;

#line 1135 "equiv_type_hlds.m"
              {
#line 1135 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__CInst0_42, &transform_hlds__equiv_type_hlds__CInst_43, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
              }
#line 1137 "equiv_type_hlds.m"
#line 1137 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1137 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1137 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1137 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1137 "equiv_type_hlds.m"
                  break;
#line 1137 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1136 "equiv_type_hlds.m"
                  {
#line 1136 "equiv_type_hlds.m"
                    MR_Word base;
#line 1136 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1136 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1136 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Vars_41));
#line 1136 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__CInst_43));
#line 1136 "equiv_type_hlds.m"
                  }
#line 1137 "equiv_type_hlds.m"
                  break;
#line 1137 "equiv_type_hlds.m"
              }
#line 1134 "equiv_type_hlds.m"
            }
#line 1057 "equiv_type_hlds.m"
            break;
#line 1057 "equiv_type_hlds.m"
          case (MR_Integer) 4:
#line 1140 "equiv_type_hlds.m"
            {
#line 1140 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__InstName0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));
#line 1140 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__InstName_45;

#line 1141 "equiv_type_hlds.m"
              {
#line 1141 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_inst_name_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstName0_44, &transform_hlds__equiv_type_hlds__InstName_45, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
              }
#line 1144 "equiv_type_hlds.m"
#line 1144 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1144 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1144 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1144 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1144 "equiv_type_hlds.m"
                  break;
#line 1144 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1143 "equiv_type_hlds.m"
                  {
#line 1143 "equiv_type_hlds.m"
                    MR_Word base;
#line 1143 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1143 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1143 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstName_45));
#line 1143 "equiv_type_hlds.m"
                  }
#line 1144 "equiv_type_hlds.m"
                  break;
#line 1144 "equiv_type_hlds.m"
              }
#line 1140 "equiv_type_hlds.m"
            }
#line 1057 "equiv_type_hlds.m"
            break;
#line 1057 "equiv_type_hlds.m"
          case (MR_Integer) 5:
#line 1147 "equiv_type_hlds.m"
            {
#line 1147 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Name_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 1)));
#line 1147 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ArgInsts0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst0_10, (MR_Integer) 2)));
#line 1147 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ArgInsts_48;

#line 1148 "equiv_type_hlds.m"
              {
#line 1148 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__ArgInsts0_47, &transform_hlds__equiv_type_hlds__ArgInsts_48, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_52);
              }
#line 1151 "equiv_type_hlds.m"
#line 1151 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 1151 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1151 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 1151 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 1151 "equiv_type_hlds.m"
                  break;
#line 1151 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 1150 "equiv_type_hlds.m"
                  {
#line 1150 "equiv_type_hlds.m"
                    MR_Word base;
#line 1150 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Inst_11 = base;
#line 1150 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1150 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_46));
#line 1150 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__ArgInsts_48));
#line 1150 "equiv_type_hlds.m"
                  }
#line 1151 "equiv_type_hlds.m"
                  break;
#line 1151 "equiv_type_hlds.m"
              }
#line 1147 "equiv_type_hlds.m"
            }
#line 1057 "equiv_type_hlds.m"
            break;
#line 1057 "equiv_type_hlds.m"
        }
#line 1057 "equiv_type_hlds.m"
        break;
#line 1057 "equiv_type_hlds.m"
    }
#line 1057 "equiv_type_hlds.m"
  }
#line 1046 "equiv_type_hlds.m"
}

#line 1025 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__record_inst_may_occur_2_p_0(
#line 1025 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst_1,
#line 1025 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MayOccur_2)
#line 1025 "equiv_type_hlds.m"
{
#line 1027 "equiv_type_hlds.m"
  {
#line 1027 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1030 "equiv_type_hlds.m"
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__record_inst_may_occur_2_p_0

	MR_Word Inst;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_1 ;
	MayOccur =  transform_hlds__equiv_type_hlds__MayOccur_2 ;
		{
#line 1030 "equiv_type_hlds.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    type_in_inst_cache[hash].tice_inst_addr = Inst;
    type_in_inst_cache[hash].tice_may_occur = MayOccur;

#line 9224 "transform_hlds.equiv_type_hlds.c"

		;}
#undef MR_PROC_LABEL
#line 1030 "equiv_type_hlds.m"
}
#line 1027 "equiv_type_hlds.m"
  }
#line 1025 "equiv_type_hlds.m"
}

#line 999 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__lookup_inst_may_occur_3_p_0(
#line 999 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst_1,
#line 999 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Found_2,
#line 999 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MayOccur_3)
#line 999 "equiv_type_hlds.m"
{
#line 1002 "equiv_type_hlds.m"
  {
#line 1002 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 1005 "equiv_type_hlds.m"
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__lookup_inst_may_occur_3_p_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_1 ;
		{
#line 1005 "equiv_type_hlds.m"

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

#line 9276 "transform_hlds.equiv_type_hlds.c"

		;}
#undef MR_PROC_LABEL
	 *transform_hlds__equiv_type_hlds__Found_2  = Found;
	 *transform_hlds__equiv_type_hlds__MayOccur_3  = MayOccur;
#line 1005 "equiv_type_hlds.m"
}
#line 1002 "equiv_type_hlds.m"
  }
#line 999 "equiv_type_hlds.m"
}

#line 937 "equiv_type_hlds.m"
static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(
#line 937 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1)
#line 937 "equiv_type_hlds.m"
{
#line 939 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 939 "equiv_type_hlds.m"
    {
#line 939 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 939 "equiv_type_hlds.m"
      {
#line 939 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 939 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2;

#line 939 "equiv_type_hlds.m"
        if ((transform_hlds__equiv_type_hlds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 939 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__HeadVar__2_2 = (MR_Integer) 0;
#line 939 "equiv_type_hlds.m"
        else
#line 940 "equiv_type_hlds.m"
          {
#line 940 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Inst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 0)));
#line 940 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Insts_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 1)));
#line 940 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__MayOccurInInst_6;

#line 941 "equiv_type_hlds.m"
            {
#line 941 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__MayOccurInInst_6 = transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(transform_hlds__equiv_type_hlds__Inst_3);
            }
#line 945 "equiv_type_hlds.m"
#line 945 "equiv_type_hlds.m"
            switch (transform_hlds__equiv_type_hlds__MayOccurInInst_6) {
#line 945 "equiv_type_hlds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 945 "equiv_type_hlds.m"
              case (MR_Integer) 0:
#line 947 "equiv_type_hlds.m"
                {
#line 947 "equiv_type_hlds.m"
                  /* direct tailcall eliminated */
#line 947 "equiv_type_hlds.m"
                  {
#line 947 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__HeadVar__1__tmp_copy_1 = transform_hlds__equiv_type_hlds__Insts_4;

#line 947 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__HeadVar__1__tmp_copy_1;
#line 947 "equiv_type_hlds.m"
                  }
#line 947 "equiv_type_hlds.m"
                  continue;
#line 947 "equiv_type_hlds.m"
                }
#line 945 "equiv_type_hlds.m"
                break;
#line 945 "equiv_type_hlds.m"
              case (MR_Integer) 1:
#line 944 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__HeadVar__2_2 = (MR_Integer) 1;
#line 945 "equiv_type_hlds.m"
                break;
#line 945 "equiv_type_hlds.m"
            }
#line 940 "equiv_type_hlds.m"
          }
#line 939 "equiv_type_hlds.m"
        return transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 939 "equiv_type_hlds.m"
      }
#line 939 "equiv_type_hlds.m"
      break;
#line 939 "equiv_type_hlds.m"
    }
#line 937 "equiv_type_hlds.m"
}

#line 918 "equiv_type_hlds.m"
static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(
#line 918 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1)
#line 918 "equiv_type_hlds.m"
{
#line 920 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 920 "equiv_type_hlds.m"
    {
#line 920 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 920 "equiv_type_hlds.m"
      {
#line 920 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 920 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2;

#line 920 "equiv_type_hlds.m"
        if ((transform_hlds__equiv_type_hlds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 920 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__HeadVar__2_2 = (MR_Integer) 0;
#line 920 "equiv_type_hlds.m"
        else
#line 921 "equiv_type_hlds.m"
          {
#line 921 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__BoundInst_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 0)));
#line 921 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__BoundInsts_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__1_1, (MR_Integer) 1)));
#line 921 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__Insts_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__BoundInst_3, (MR_Integer) 1)));
#line 921 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__MayOccurInInsts_8;
#line 922 "equiv_type_hlds.m"
            MR_Word transform_hlds__equiv_type_hlds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__BoundInst_3, (MR_Integer) 0)));

#line 923 "equiv_type_hlds.m"
            {
#line 923 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__MayOccurInInsts_8 = transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(transform_hlds__equiv_type_hlds__Insts_7);
            }
#line 927 "equiv_type_hlds.m"
#line 927 "equiv_type_hlds.m"
            switch (transform_hlds__equiv_type_hlds__MayOccurInInsts_8) {
#line 927 "equiv_type_hlds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 927 "equiv_type_hlds.m"
              case (MR_Integer) 0:
#line 929 "equiv_type_hlds.m"
                {
#line 929 "equiv_type_hlds.m"
                  /* direct tailcall eliminated */
#line 929 "equiv_type_hlds.m"
                  {
#line 929 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__HeadVar__1__tmp_copy_1 = transform_hlds__equiv_type_hlds__BoundInsts_4;

#line 929 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__HeadVar__1_1 = transform_hlds__equiv_type_hlds__HeadVar__1__tmp_copy_1;
#line 929 "equiv_type_hlds.m"
                  }
#line 929 "equiv_type_hlds.m"
                  continue;
#line 929 "equiv_type_hlds.m"
                }
#line 927 "equiv_type_hlds.m"
                break;
#line 927 "equiv_type_hlds.m"
              case (MR_Integer) 1:
#line 926 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__HeadVar__2_2 = (MR_Integer) 1;
#line 927 "equiv_type_hlds.m"
                break;
#line 927 "equiv_type_hlds.m"
            }
#line 921 "equiv_type_hlds.m"
          }
#line 920 "equiv_type_hlds.m"
        return transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 920 "equiv_type_hlds.m"
      }
#line 920 "equiv_type_hlds.m"
      break;
#line 920 "equiv_type_hlds.m"
    }
#line 918 "equiv_type_hlds.m"
}

#line 848 "equiv_type_hlds.m"
static MR_Word MR_CALL 
transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(
#line 848 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst_3)
#line 848 "equiv_type_hlds.m"
{
#line 858 "equiv_type_hlds.m"
  while (MR_TRUE)
#line 858 "equiv_type_hlds.m"
    {
#line 858 "equiv_type_hlds.m"
      /* tailcall optimized into a loop */
#line 858 "equiv_type_hlds.m"
      {
#line 858 "equiv_type_hlds.m"
        MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 858 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__MayOccur_4;

#line 858 "equiv_type_hlds.m"
#line 858 "equiv_type_hlds.m"
        switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Inst_3)) {
#line 858 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 858 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 858 "equiv_type_hlds.m"
#line 858 "equiv_type_hlds.m"
            switch (MR_unmkbody(transform_hlds__equiv_type_hlds__Inst_3)) {
#line 858 "equiv_type_hlds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 858 "equiv_type_hlds.m"
              case (MR_Integer) 0:
#line 858 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
#line 858 "equiv_type_hlds.m"
                break;
#line 858 "equiv_type_hlds.m"
              case (MR_Integer) 1:
#line 858 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
#line 858 "equiv_type_hlds.m"
                break;
#line 858 "equiv_type_hlds.m"
            }
#line 858 "equiv_type_hlds.m"
            break;
#line 858 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 868 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 1;
#line 858 "equiv_type_hlds.m"
            break;
#line 858 "equiv_type_hlds.m"
          case (MR_Integer) 2:
#line 858 "equiv_type_hlds.m"
            {
#line 858 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 1)));
#line 865 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 0)));

#line 858 "equiv_type_hlds.m"
              if ((transform_hlds__equiv_type_hlds__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 859 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
#line 858 "equiv_type_hlds.m"
              else
#line 868 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 1;
#line 858 "equiv_type_hlds.m"
            }
#line 858 "equiv_type_hlds.m"
            break;
#line 858 "equiv_type_hlds.m"
          case (MR_Integer) 3:
#line 858 "equiv_type_hlds.m"
#line 858 "equiv_type_hlds.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 0)))) {
#line 858 "equiv_type_hlds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 858 "equiv_type_hlds.m"
              case (MR_Integer) 0:
#line 870 "equiv_type_hlds.m"
                {
#line 870 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__InstResults_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 2)));
#line 870 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 3)));
#line 870 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 1)));

#line 874 "equiv_type_hlds.m"
#line 874 "equiv_type_hlds.m"
                  switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__InstResults_14)) {
#line 874 "equiv_type_hlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 874 "equiv_type_hlds.m"
                    case (MR_Integer) 0:
#line 874 "equiv_type_hlds.m"
#line 874 "equiv_type_hlds.m"
                      switch (MR_unmkbody(transform_hlds__equiv_type_hlds__InstResults_14)) {
#line 874 "equiv_type_hlds.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 874 "equiv_type_hlds.m"
                        case (MR_Integer) 0:
#line 889 "equiv_type_hlds.m"
                          {
#line 893 "equiv_type_hlds.m"
                            MR_Word transform_hlds__equiv_type_hlds__Found_23;
#line 893 "equiv_type_hlds.m"
                            MR_Word transform_hlds__equiv_type_hlds__OldMayOccur_24;

#line 1005 "equiv_type_hlds.m"
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_3 ;
		{
#line 1005 "equiv_type_hlds.m"

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

#line 9606 "transform_hlds.equiv_type_hlds.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__equiv_type_hlds__Found_23  = Found;
	 transform_hlds__equiv_type_hlds__OldMayOccur_24  = MayOccur;
#line 1005 "equiv_type_hlds.m"
}
#line 897 "equiv_type_hlds.m"
#line 897 "equiv_type_hlds.m"
                            switch (transform_hlds__equiv_type_hlds__Found_23) {
#line 897 "equiv_type_hlds.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 897 "equiv_type_hlds.m"
                              case (MR_Integer) 0:
#line 898 "equiv_type_hlds.m"
                                {
#line 899 "equiv_type_hlds.m"
                                  {
#line 899 "equiv_type_hlds.m"
                                    transform_hlds__equiv_type_hlds__MayOccur_4 = transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(transform_hlds__equiv_type_hlds__BoundInsts_15);
                                  }
#line 1030 "equiv_type_hlds.m"
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_3 ;
	MayOccur =  transform_hlds__equiv_type_hlds__MayOccur_4 ;
		{
#line 1030 "equiv_type_hlds.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    type_in_inst_cache[hash].tice_inst_addr = Inst;
    type_in_inst_cache[hash].tice_may_occur = MayOccur;

#line 9649 "transform_hlds.equiv_type_hlds.c"

		;}
#undef MR_PROC_LABEL
#line 1030 "equiv_type_hlds.m"
}
#line 898 "equiv_type_hlds.m"
                                }
#line 897 "equiv_type_hlds.m"
                                break;
#line 897 "equiv_type_hlds.m"
                              case (MR_Integer) 1:
#line 895 "equiv_type_hlds.m"
                                transform_hlds__equiv_type_hlds__MayOccur_4 = transform_hlds__equiv_type_hlds__OldMayOccur_24;
#line 897 "equiv_type_hlds.m"
                                break;
#line 897 "equiv_type_hlds.m"
                            }
#line 889 "equiv_type_hlds.m"
                          }
#line 874 "equiv_type_hlds.m"
                          break;
#line 874 "equiv_type_hlds.m"
                        case (MR_Integer) 1:
#line 872 "equiv_type_hlds.m"
                          transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
#line 874 "equiv_type_hlds.m"
                          break;
#line 874 "equiv_type_hlds.m"
                      }
#line 874 "equiv_type_hlds.m"
                      break;
#line 874 "equiv_type_hlds.m"
                    case (MR_Integer) 1:
#line 880 "equiv_type_hlds.m"
                      {
#line 880 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__TypeResult_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 4)));
#line 876 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 0)));
#line 876 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 1)));
#line 876 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 2)));
#line 876 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 3)));
#line 876 "equiv_type_hlds.m"
                        MR_Word transform_hlds__equiv_type_hlds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__InstResults_14, (MR_Integer) 5)));

#line 888 "equiv_type_hlds.m"
                        if ((transform_hlds__equiv_type_hlds__TypeResult_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 889 "equiv_type_hlds.m"
                          {
#line 893 "equiv_type_hlds.m"
                            MR_Word transform_hlds__equiv_type_hlds__Found_36;
#line 893 "equiv_type_hlds.m"
                            MR_Word transform_hlds__equiv_type_hlds__OldMayOccur_37;

#line 1005 "equiv_type_hlds.m"
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_3 ;
		{
#line 1005 "equiv_type_hlds.m"

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

#line 9732 "transform_hlds.equiv_type_hlds.c"

		;}
#undef MR_PROC_LABEL
	 transform_hlds__equiv_type_hlds__Found_36  = Found;
	 transform_hlds__equiv_type_hlds__OldMayOccur_37  = MayOccur;
#line 1005 "equiv_type_hlds.m"
}
#line 897 "equiv_type_hlds.m"
#line 897 "equiv_type_hlds.m"
                            switch (transform_hlds__equiv_type_hlds__Found_36) {
#line 897 "equiv_type_hlds.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 897 "equiv_type_hlds.m"
                              case (MR_Integer) 0:
#line 898 "equiv_type_hlds.m"
                                {
#line 899 "equiv_type_hlds.m"
                                  {
#line 899 "equiv_type_hlds.m"
                                    transform_hlds__equiv_type_hlds__MayOccur_4 = transform_hlds__equiv_type_hlds__type_may_occur_in_bound_insts_1_f_0(transform_hlds__equiv_type_hlds__BoundInsts_15);
                                  }
#line 1030 "equiv_type_hlds.m"
{
#define MR_PROC_LABEL transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0

	MR_Word Inst;
	MR_Word MayOccur;

	Inst =  transform_hlds__equiv_type_hlds__Inst_3 ;
	MayOccur =  transform_hlds__equiv_type_hlds__MayOccur_4 ;
		{
#line 1030 "equiv_type_hlds.m"

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % TYPE_IN_INST_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    type_in_inst_cache[hash].tice_inst_addr = Inst;
    type_in_inst_cache[hash].tice_may_occur = MayOccur;

#line 9775 "transform_hlds.equiv_type_hlds.c"

		;}
#undef MR_PROC_LABEL
#line 1030 "equiv_type_hlds.m"
}
#line 898 "equiv_type_hlds.m"
                                }
#line 897 "equiv_type_hlds.m"
                                break;
#line 897 "equiv_type_hlds.m"
                              case (MR_Integer) 1:
#line 895 "equiv_type_hlds.m"
                                transform_hlds__equiv_type_hlds__MayOccur_4 = transform_hlds__equiv_type_hlds__OldMayOccur_37;
#line 897 "equiv_type_hlds.m"
                                break;
#line 897 "equiv_type_hlds.m"
                            }
#line 889 "equiv_type_hlds.m"
                          }
#line 888 "equiv_type_hlds.m"
                        else
#line 882 "equiv_type_hlds.m"
                          {
#line 882 "equiv_type_hlds.m"
                            MR_Word transform_hlds__equiv_type_hlds__TypeCtors_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__TypeResult_44, (MR_Integer) 0)));

#line 883 "equiv_type_hlds.m"
                            {
#line 883 "equiv_type_hlds.m"
                              transform_hlds__equiv_type_hlds__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__equiv_type_hlds__TypeCtors_22);
                            }
#line 885 "equiv_type_hlds.m"
                            if (transform_hlds__equiv_type_hlds__succeeded)
#line 884 "equiv_type_hlds.m"
                              transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
#line 885 "equiv_type_hlds.m"
                            else
#line 886 "equiv_type_hlds.m"
                              transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 1;
#line 882 "equiv_type_hlds.m"
                          }
#line 880 "equiv_type_hlds.m"
                      }
#line 874 "equiv_type_hlds.m"
                      break;
#line 874 "equiv_type_hlds.m"
                  }
#line 870 "equiv_type_hlds.m"
                }
#line 858 "equiv_type_hlds.m"
                break;
#line 858 "equiv_type_hlds.m"
              case (MR_Integer) 1:
#line 858 "equiv_type_hlds.m"
                {
#line 858 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 2)));
#line 864 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 1)));

#line 858 "equiv_type_hlds.m"
                  if ((transform_hlds__equiv_type_hlds__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 859 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
#line 858 "equiv_type_hlds.m"
                  else
#line 868 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 1;
#line 858 "equiv_type_hlds.m"
                }
#line 858 "equiv_type_hlds.m"
                break;
#line 858 "equiv_type_hlds.m"
              case (MR_Integer) 2:
#line 859 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 0;
#line 858 "equiv_type_hlds.m"
                break;
#line 858 "equiv_type_hlds.m"
              case (MR_Integer) 3:
#line 909 "equiv_type_hlds.m"
                {
#line 909 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__CInst_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 2)));
#line 909 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 1)));

#line 910 "equiv_type_hlds.m"
                  /* direct tailcall eliminated */
#line 910 "equiv_type_hlds.m"
                  {
#line 910 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__Inst__tmp_copy_3 = transform_hlds__equiv_type_hlds__CInst_28;

#line 910 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Inst_3 = transform_hlds__equiv_type_hlds__Inst__tmp_copy_3;
#line 910 "equiv_type_hlds.m"
                  }
#line 910 "equiv_type_hlds.m"
                  continue;
#line 909 "equiv_type_hlds.m"
                }
#line 858 "equiv_type_hlds.m"
                break;
#line 858 "equiv_type_hlds.m"
              case (MR_Integer) 4:
#line 868 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__MayOccur_4 = (MR_Integer) 1;
#line 858 "equiv_type_hlds.m"
                break;
#line 858 "equiv_type_hlds.m"
              case (MR_Integer) 5:
#line 906 "equiv_type_hlds.m"
                {
#line 906 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 2)));
#line 906 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Inst_3, (MR_Integer) 1)));

#line 907 "equiv_type_hlds.m"
                  {
#line 907 "equiv_type_hlds.m"
                    return transform_hlds__equiv_type_hlds__MayOccur_4 = transform_hlds__equiv_type_hlds__type_may_occur_in_insts_1_f_0(transform_hlds__equiv_type_hlds__ArgInsts_26);
                  }
#line 906 "equiv_type_hlds.m"
                }
#line 858 "equiv_type_hlds.m"
                break;
#line 858 "equiv_type_hlds.m"
            }
#line 858 "equiv_type_hlds.m"
            break;
#line 858 "equiv_type_hlds.m"
        }
#line 858 "equiv_type_hlds.m"
        return transform_hlds__equiv_type_hlds__MayOccur_4;
#line 858 "equiv_type_hlds.m"
      }
#line 858 "equiv_type_hlds.m"
      break;
#line 858 "equiv_type_hlds.m"
    }
#line 848 "equiv_type_hlds.m"
}

#line 805 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(
#line 805 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 805 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Inst0_10,
#line 805 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Inst_11,
#line 805 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 805 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_17,
#line 805 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_18,
#line 805 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_19,
#line 805 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20)
#line 805 "equiv_type_hlds.m"
{
#line 809 "equiv_type_hlds.m"
  {
#line 809 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 809 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ContainsType_15;

#line 816 "equiv_type_hlds.m"
    {
#line 816 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__ContainsType_15 = transform_hlds__equiv_type_hlds__type_may_occur_in_inst_1_f_0(transform_hlds__equiv_type_hlds__Inst0_10);
    }
#line 829 "equiv_type_hlds.m"
#line 829 "equiv_type_hlds.m"
    switch (transform_hlds__equiv_type_hlds__ContainsType_15) {
#line 829 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 829 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 830 "equiv_type_hlds.m"
        {
#line 831 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst0_10;
#line 832 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 830 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_18 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_17;
#line 830 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_19;
#line 830 "equiv_type_hlds.m"
        }
#line 829 "equiv_type_hlds.m"
        break;
#line 829 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 818 "equiv_type_hlds.m"
        {
#line 818 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Inst1_16;
#line 818 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22;

#line 819 "equiv_type_hlds.m"
          {
#line 819 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__replace_in_inst_2_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Inst0_10, &transform_hlds__equiv_type_hlds__Inst1_16, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_17, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_18, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_19, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22);
          }
#line 825 "equiv_type_hlds.m"
#line 825 "equiv_type_hlds.m"
          switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 825 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 825 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 826 "equiv_type_hlds.m"
              {
#line 827 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst1_16;
#line 826 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22;
#line 826 "equiv_type_hlds.m"
              }
#line 825 "equiv_type_hlds.m"
              break;
#line 825 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 1280 "equiv_type_hlds.m"
              {
#line 1280 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__Inst1_29;
#line 1278 "equiv_type_hlds.m"
                MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_13_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1278 "equiv_type_hlds.m"
                MR_Box transform_hlds__equiv_type_hlds__conv0_Inst1_29;

#line 1278 "equiv_type_hlds.m"
                {
#line 1278 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__succeeded = mercury__map__search_3_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_13_32, transform_hlds__equiv_type_hlds__TypeCtorInfo_13_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22, ((MR_Box) (transform_hlds__equiv_type_hlds__Inst1_16)), &transform_hlds__equiv_type_hlds__conv0_Inst1_29);
                }
#line 1278 "equiv_type_hlds.m"
                if (transform_hlds__equiv_type_hlds__succeeded)
#line 1278 "equiv_type_hlds.m"
                  {
#line 1278 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__Inst1_29 = ((MR_Word) transform_hlds__equiv_type_hlds__conv0_Inst1_29);
#line 1278 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__succeeded = MR_TRUE;
#line 1278 "equiv_type_hlds.m"
                  }
#line 1280 "equiv_type_hlds.m"
                if (transform_hlds__equiv_type_hlds__succeeded)
#line 1279 "equiv_type_hlds.m"
                  {
#line 1279 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst1_29;
#line 1279 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22;
#line 1279 "equiv_type_hlds.m"
                  }
#line 1280 "equiv_type_hlds.m"
                else
#line 1281 "equiv_type_hlds.m"
                  {
#line 1281 "equiv_type_hlds.m"
                    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_14_33;

#line 1281 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Inst_11 = transform_hlds__equiv_type_hlds__Inst1_16;
#line 10051 "transform_hlds.equiv_type_hlds.c"
                    transform_hlds__equiv_type_hlds__TypeCtorInfo_14_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1282 "equiv_type_hlds.m"
                    {
#line 1282 "equiv_type_hlds.m"
                      *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_20 = mercury__map__det_insert_3_f_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_14_33, transform_hlds__equiv_type_hlds__TypeCtorInfo_14_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22_22, ((MR_Box) (*transform_hlds__equiv_type_hlds__Inst_11)), ((MR_Box) (*transform_hlds__equiv_type_hlds__Inst_11)));
                    }
#line 1281 "equiv_type_hlds.m"
                  }
#line 1280 "equiv_type_hlds.m"
              }
#line 825 "equiv_type_hlds.m"
              break;
#line 825 "equiv_type_hlds.m"
          }
#line 818 "equiv_type_hlds.m"
        }
#line 829 "equiv_type_hlds.m"
        break;
#line 829 "equiv_type_hlds.m"
    }
#line 809 "equiv_type_hlds.m"
  }
#line 805 "equiv_type_hlds.m"
}

#line 784 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_mode_8_p_0(
#line 784 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 784 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Mode0_10,
#line 784 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Mode_11,
#line 784 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 784 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_24,
#line 784 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25,
#line 784 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_26,
#line 784 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_27)
#line 784 "equiv_type_hlds.m"
{
#line 790 "equiv_type_hlds.m"
  {
#line 790 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 790 "equiv_type_hlds.m"
    if (((MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Mode0_10)) == (MR_mktag((MR_Integer) 0))))
#line 790 "equiv_type_hlds.m"
      {
#line 790 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstA0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Mode0_10, (MR_Integer) 0)));
#line 790 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstB0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__Mode0_10, (MR_Integer) 1)));
#line 790 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstA_17;
#line 790 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__ChangedA_18;
#line 790 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__InstB_19;
#line 790 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__ChangedB_20;
#line 790 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_30;
#line 790 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_31;

#line 791 "equiv_type_hlds.m"
        {
#line 791 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstA0_15, &transform_hlds__equiv_type_hlds__InstA_17, &transform_hlds__equiv_type_hlds__ChangedA_18, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_24, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_26, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_31);
        }
#line 792 "equiv_type_hlds.m"
        {
#line 792 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__InstB0_16, &transform_hlds__equiv_type_hlds__InstB_19, &transform_hlds__equiv_type_hlds__ChangedB_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_30_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_31_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_27);
        }
#line 793 "equiv_type_hlds.m"
        {
#line 793 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Changed_12 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_18, transform_hlds__equiv_type_hlds__ChangedB_20);
        }
#line 795 "equiv_type_hlds.m"
#line 795 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 795 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 795 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 795 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__Mode_11 = transform_hlds__equiv_type_hlds__Mode0_10;
#line 795 "equiv_type_hlds.m"
            break;
#line 795 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 794 "equiv_type_hlds.m"
            {
#line 794 "equiv_type_hlds.m"
              MR_Word base;
#line 794 "equiv_type_hlds.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 794 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Mode_11 = base;
#line 794 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_17));
#line 794 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_19));
#line 794 "equiv_type_hlds.m"
            }
#line 795 "equiv_type_hlds.m"
            break;
#line 795 "equiv_type_hlds.m"
        }
#line 790 "equiv_type_hlds.m"
      }
#line 790 "equiv_type_hlds.m"
    else
#line 798 "equiv_type_hlds.m"
      {
#line 798 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Mode0_10, (MR_Integer) 0)));
#line 798 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Insts0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Mode0_10, (MR_Integer) 1)));
#line 798 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Insts_23;

#line 799 "equiv_type_hlds.m"
        {
#line 799 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_insts_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Insts0_22, &transform_hlds__equiv_type_hlds__Insts_23, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_26, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_27);
        }
#line 801 "equiv_type_hlds.m"
#line 801 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 801 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 801 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 801 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__Mode_11 = transform_hlds__equiv_type_hlds__Mode0_10;
#line 801 "equiv_type_hlds.m"
            break;
#line 801 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 800 "equiv_type_hlds.m"
            {
#line 800 "equiv_type_hlds.m"
              MR_Word base;
#line 800 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__Mode_11 = base;
#line 800 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Name_21));
#line 800 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Insts_23));
#line 800 "equiv_type_hlds.m"
            }
#line 801 "equiv_type_hlds.m"
            break;
#line 801 "equiv_type_hlds.m"
        }
#line 798 "equiv_type_hlds.m"
      }
#line 790 "equiv_type_hlds.m"
  }
#line 784 "equiv_type_hlds.m"
}

#line 770 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(
#line 770 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 770 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 770 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 770 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 770 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5,
#line 770 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6,
#line 770 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7,
#line 770 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8)
#line 770 "equiv_type_hlds.m"
{
#line 774 "equiv_type_hlds.m"
  {
#line 774 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 774 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "equiv_type_hlds.m"
      {
#line 774 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 774 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Integer) 0;
#line 774 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7;
#line 774 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5;
#line 774 "equiv_type_hlds.m"
      }
#line 774 "equiv_type_hlds.m"
    else
#line 776 "equiv_type_hlds.m"
      {
#line 776 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Mode0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 776 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Modes0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 776 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Mode_24;
#line 776 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed0_25;
#line 776 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Modes_26;
#line 776 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Changed1_27;
#line 776 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32;
#line 776 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33;

#line 777 "equiv_type_hlds.m"
        {
#line 777 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_mode_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Mode0_18, &transform_hlds__equiv_type_hlds__Mode_24, &transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_5, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33);
        }
#line 778 "equiv_type_hlds.m"
        {
#line 778 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__Modes0_19, &transform_hlds__equiv_type_hlds__Modes_26, &transform_hlds__equiv_type_hlds__Changed1_27, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_32_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_6, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_33_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_8);
        }
#line 779 "equiv_type_hlds.m"
        {
#line 779 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__Changed0_25, transform_hlds__equiv_type_hlds__Changed1_27);
        }
#line 781 "equiv_type_hlds.m"
#line 781 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__HeadVar__4_4) {
#line 781 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 781 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 781 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__HeadVar__3_3 = transform_hlds__equiv_type_hlds__HeadVar__2_2;
#line 781 "equiv_type_hlds.m"
            break;
#line 781 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 780 "equiv_type_hlds.m"
            {
#line 780 "equiv_type_hlds.m"
              MR_Word base;
#line 780 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__HeadVar__3_3 = base;
#line 780 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Mode_24));
#line 780 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Modes_26));
#line 780 "equiv_type_hlds.m"
            }
#line 781 "equiv_type_hlds.m"
            break;
#line 781 "equiv_type_hlds.m"
        }
#line 776 "equiv_type_hlds.m"
      }
#line 774 "equiv_type_hlds.m"
  }
#line 770 "equiv_type_hlds.m"
}

#line 718 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_type_ctor_11_p_0(
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_12,
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded0_13,
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type0_14,
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_15,
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__ArgTypes_16,
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Kind_17,
#line 718 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Type_18,
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_35,
#line 718 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_36,
#line 718 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_37,
#line 718 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_38)
#line 718 "equiv_type_hlds.m"
{
#line 723 "equiv_type_hlds.m"
  {
#line 723 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 723 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__AlreadyExpanded_21;
#line 753 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Params0_24;
#line 753 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Body0_25;
#line 753 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Renaming_26;
#line 753 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39_39;
#line 730 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__EqvTypeBody_22;
#line 730 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__EqvVarSet_23;
#line 730 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv0_EqvTypeBody_22;

#line 724 "equiv_type_hlds.m"
    {
#line 724 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_15)), transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded0_13);
    }
#line 726 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 725 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__AlreadyExpanded_21 = (MR_Integer) 1;
#line 726 "equiv_type_hlds.m"
    else
#line 727 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__AlreadyExpanded_21 = (MR_Integer) 0;
#line 730 "equiv_type_hlds.m"
    {
#line 730 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, transform_hlds__equiv_type_hlds__TypeEqvMap_12, ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_15)), &transform_hlds__equiv_type_hlds__conv0_EqvTypeBody_22);
    }
#line 730 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 730 "equiv_type_hlds.m"
      {
#line 730 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__EqvTypeBody_22 = ((MR_Word) transform_hlds__equiv_type_hlds__conv0_EqvTypeBody_22);
#line 730 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__succeeded = MR_TRUE;
#line 730 "equiv_type_hlds.m"
      }
#line 730 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 730 "equiv_type_hlds.m"
      {
#line 731 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__EqvVarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__EqvTypeBody_22, (MR_Integer) 0)));
#line 731 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__Params0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__EqvTypeBody_22, (MR_Integer) 1)));
#line 731 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__Body0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__EqvTypeBody_22, (MR_Integer) 2)));
#line 741 "equiv_type_hlds.m"
        {
#line 741 "equiv_type_hlds.m"
          parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_37, transform_hlds__equiv_type_hlds__EqvVarSet_23, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39_39, &transform_hlds__equiv_type_hlds__Renaming_26);
        }
#line 743 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__succeeded = (transform_hlds__equiv_type_hlds__AlreadyExpanded_21 == (MR_Integer) 0);
#line 730 "equiv_type_hlds.m"
      }
#line 753 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 745 "equiv_type_hlds.m"
      {
#line 745 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeInfo_45_45 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[3];
#line 745 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Params_27;
#line 745 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Body1_28;
#line 745 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Subst_29;
#line 745 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Body_30;
#line 745 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_31;
#line 750 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds___BodyChanged_32;

#line 745 "equiv_type_hlds.m"
        {
#line 745 "equiv_type_hlds.m"
          mercury__map__apply_to_list_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_45_45, transform_hlds__equiv_type_hlds__TypeInfo_45_45, transform_hlds__equiv_type_hlds__Params0_24, transform_hlds__equiv_type_hlds__Renaming_26, &transform_hlds__equiv_type_hlds__Params_27);
        }
#line 746 "equiv_type_hlds.m"
        {
#line 746 "equiv_type_hlds.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(transform_hlds__equiv_type_hlds__Renaming_26, transform_hlds__equiv_type_hlds__Body0_25, &transform_hlds__equiv_type_hlds__Body1_28);
        }
#line 747 "equiv_type_hlds.m"
        {
#line 747 "equiv_type_hlds.m"
          mercury__map__from_corresponding_lists_3_p_0(transform_hlds__equiv_type_hlds__TypeInfo_45_45, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__equiv_type_hlds__Params_27, transform_hlds__equiv_type_hlds__ArgTypes_16, &transform_hlds__equiv_type_hlds__Subst_29);
        }
#line 748 "equiv_type_hlds.m"
        {
#line 748 "equiv_type_hlds.m"
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(transform_hlds__equiv_type_hlds__Subst_29, transform_hlds__equiv_type_hlds__Body1_28, &transform_hlds__equiv_type_hlds__Body_30);
        }
#line 749 "equiv_type_hlds.m"
        {
#line 749 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_31, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_15));
#line 749 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_31, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded0_13));
#line 749 "equiv_type_hlds.m"
        }
#line 750 "equiv_type_hlds.m"
        {
#line 750 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_12, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_31, transform_hlds__equiv_type_hlds__Body_30, transform_hlds__equiv_type_hlds__Type_18, &transform_hlds__equiv_type_hlds___BodyChanged_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39_39, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_38);
        }
#line 752 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_36 = (MR_Integer) 1;
#line 745 "equiv_type_hlds.m"
      }
#line 753 "equiv_type_hlds.m"
    else
#line 758 "equiv_type_hlds.m"
      {
#line 758 "equiv_type_hlds.m"
#line 758 "equiv_type_hlds.m"
        switch (transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_35) {
#line 758 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 758 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 760 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__Type_18 = transform_hlds__equiv_type_hlds__Type0_14;
#line 758 "equiv_type_hlds.m"
            break;
#line 758 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 755 "equiv_type_hlds.m"
            {
#line 755 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__SymName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_15, (MR_Integer) 0)));
#line 756 "equiv_type_hlds.m"
              MR_Integer transform_hlds__equiv_type_hlds___Arity_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_15, (MR_Integer) 1)));

#line 757 "equiv_type_hlds.m"
              {
#line 757 "equiv_type_hlds.m"
                MR_Word base;
#line 757 "equiv_type_hlds.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 757 "equiv_type_hlds.m"
                *transform_hlds__equiv_type_hlds__Type_18 = base;
#line 757 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__SymName_33));
#line 757 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ArgTypes_16));
#line 757 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Kind_17));
#line 757 "equiv_type_hlds.m"
              }
#line 755 "equiv_type_hlds.m"
            }
#line 758 "equiv_type_hlds.m"
            break;
#line 758 "equiv_type_hlds.m"
        }
#line 758 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_38 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_37;
#line 758 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_36 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_35;
#line 758 "equiv_type_hlds.m"
      }
#line 723 "equiv_type_hlds.m"
  }
#line 718 "equiv_type_hlds.m"
}

#line 705 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(
#line 705 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__1_1,
#line 705 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__2_2,
#line 705 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__HeadVar__3_3,
#line 705 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__HeadVar__4_4,
#line 705 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_5,
#line 705 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_6,
#line 705 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_7,
#line 705 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_8)
#line 705 "equiv_type_hlds.m"
{
#line 709 "equiv_type_hlds.m"
  {
#line 709 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 709 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 709 "equiv_type_hlds.m"
      {
#line 709 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_8 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_7;
#line 709 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_6 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_5;
#line 709 "equiv_type_hlds.m"
      }
#line 709 "equiv_type_hlds.m"
    else
#line 711 "equiv_type_hlds.m"
      {
#line 711 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Type0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 0)));
#line 711 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Types0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__HeadVar__3_3, (MR_Integer) 1)));
#line 711 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Type_21;
#line 711 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Types_22;
#line 711 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeChanged_25;
#line 711 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_30_30;
#line 711 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_31_31;

#line 712 "equiv_type_hlds.m"
        {
#line 712 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__HeadVar__2_2, transform_hlds__equiv_type_hlds__Type0_19, &transform_hlds__equiv_type_hlds__Type_21, &transform_hlds__equiv_type_hlds__TypeChanged_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_7, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_30_30);
        }
#line 714 "equiv_type_hlds.m"
        {
#line 714 "equiv_type_hlds.m"
          mercury__bool__or_3_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_0_5, transform_hlds__equiv_type_hlds__TypeChanged_25, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_31_31);
        }
#line 715 "equiv_type_hlds.m"
        {
#line 715 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(transform_hlds__equiv_type_hlds__HeadVar__1_1, transform_hlds__equiv_type_hlds__HeadVar__2_2, transform_hlds__equiv_type_hlds__Types0_20, &transform_hlds__equiv_type_hlds__Types_22, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_31_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Changed_6, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_30_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_8);
        }
#line 710 "equiv_type_hlds.m"
        {
#line 710 "equiv_type_hlds.m"
          MR_Word base;
#line 710 "equiv_type_hlds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__HeadVar__4_4 = base;
#line 710 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_21));
#line 710 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Types_22));
#line 710 "equiv_type_hlds.m"
        }
#line 711 "equiv_type_hlds.m"
      }
#line 709 "equiv_type_hlds.m"
  }
#line 705 "equiv_type_hlds.m"
}

#line 627 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(
#line 627 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_8,
#line 627 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9,
#line 627 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type0_10,
#line 627 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Type_11,
#line 627 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_12,
#line 627 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38,
#line 627 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39)
#line 627 "equiv_type_hlds.m"
{
#line 636 "equiv_type_hlds.m"
  {
#line 636 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 636 "equiv_type_hlds.m"
#line 636 "equiv_type_hlds.m"
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Type0_10)) {
#line 636 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 636 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 636 "equiv_type_hlds.m"
      case (MR_Integer) 2:
#line 636 "equiv_type_hlds.m"
        {
#line 637 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
#line 638 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__Changed_12 = (MR_Integer) 0;
#line 636 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38;
#line 636 "equiv_type_hlds.m"
        }
#line 636 "equiv_type_hlds.m"
        break;
#line 636 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 640 "equiv_type_hlds.m"
        {
#line 640 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 0)));
#line 640 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TypeArgs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 1)));
#line 640 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Kind_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 2)));
#line 640 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TypeArgs_20;
#line 640 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__ArgsChanged_21;
#line 640 "equiv_type_hlds.m"
          MR_Integer transform_hlds__equiv_type_hlds__Arity_22;
#line 640 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TypeCtor_23;
#line 640 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_48_48;

#line 641 "equiv_type_hlds.m"
          {
#line 641 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__TypeArgs0_18, &transform_hlds__equiv_type_hlds__TypeArgs_20, (MR_Integer) 0, &transform_hlds__equiv_type_hlds__ArgsChanged_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_48_48);
          }
#line 643 "equiv_type_hlds.m"
          {
#line 643 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__Arity_22 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__equiv_type_hlds__TypeArgs_20);
          }
#line 644 "equiv_type_hlds.m"
          {
#line 644 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 644 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_23, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__SymName_17));
#line 644 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_23, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Arity_22));
#line 644 "equiv_type_hlds.m"
          }
#line 645 "equiv_type_hlds.m"
          {
#line 645 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__hlds_replace_type_ctor_11_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__Type0_10, transform_hlds__equiv_type_hlds__TypeCtor_23, transform_hlds__equiv_type_hlds__TypeArgs_20, transform_hlds__equiv_type_hlds__Kind_19, transform_hlds__equiv_type_hlds__Type_11, transform_hlds__equiv_type_hlds__ArgsChanged_21, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_48_48, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39);
#line 645 "equiv_type_hlds.m"
            return;
          }
#line 640 "equiv_type_hlds.m"
        }
#line 636 "equiv_type_hlds.m"
        break;
#line 636 "equiv_type_hlds.m"
      case (MR_Integer) 3:
#line 636 "equiv_type_hlds.m"
#line 636 "equiv_type_hlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 0)))) {
#line 636 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 636 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 671 "equiv_type_hlds.m"
            {
#line 671 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Args0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 1)));
#line 671 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Args_34;
#line 671 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Kind_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 2)));

#line 672 "equiv_type_hlds.m"
              {
#line 672 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__Args0_33, &transform_hlds__equiv_type_hlds__Args_34, (MR_Integer) 0, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39);
              }
#line 677 "equiv_type_hlds.m"
#line 677 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 677 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 677 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 679 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
#line 677 "equiv_type_hlds.m"
                  break;
#line 677 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 676 "equiv_type_hlds.m"
                  {
#line 676 "equiv_type_hlds.m"
                    MR_Word base;
#line 676 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 676 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Type_11 = base;
#line 676 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 676 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Args_34));
#line 676 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Kind_50));
#line 676 "equiv_type_hlds.m"
                  }
#line 677 "equiv_type_hlds.m"
                  break;
#line 677 "equiv_type_hlds.m"
              }
#line 671 "equiv_type_hlds.m"
            }
#line 636 "equiv_type_hlds.m"
            break;
#line 636 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 649 "equiv_type_hlds.m"
            {
#line 649 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ArgTypes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 1)));
#line 649 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__MaybeRetType0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 2)));
#line 649 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Purity_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 3)));
#line 649 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__RetChanged_30;
#line 649 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__MaybeRetType_31;
#line 649 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__ArgTypes_32;
#line 649 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_45_45;

#line 655 "equiv_type_hlds.m"
              if ((transform_hlds__equiv_type_hlds__MaybeRetType0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 656 "equiv_type_hlds.m"
                {
#line 657 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__MaybeRetType_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 658 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__RetChanged_30 = (MR_Integer) 0;
#line 656 "equiv_type_hlds.m"
                  transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_45_45 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38;
#line 656 "equiv_type_hlds.m"
                }
#line 655 "equiv_type_hlds.m"
              else
#line 651 "equiv_type_hlds.m"
                {
#line 651 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__RetType0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeRetType0_25, (MR_Integer) 0)));
#line 651 "equiv_type_hlds.m"
                  MR_Word transform_hlds__equiv_type_hlds__RetType_29;

#line 652 "equiv_type_hlds.m"
                  {
#line 652 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__RetType0_28, &transform_hlds__equiv_type_hlds__RetType_29, &transform_hlds__equiv_type_hlds__RetChanged_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_45_45);
                  }
#line 654 "equiv_type_hlds.m"
                  {
#line 654 "equiv_type_hlds.m"
                    transform_hlds__equiv_type_hlds__MaybeRetType_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 654 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeRetType_31, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__RetType_29));
#line 654 "equiv_type_hlds.m"
                  }
#line 651 "equiv_type_hlds.m"
                }
#line 660 "equiv_type_hlds.m"
              {
#line 660 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__ArgTypes0_24, &transform_hlds__equiv_type_hlds__ArgTypes_32, transform_hlds__equiv_type_hlds__RetChanged_30, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_45_45, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39);
              }
#line 666 "equiv_type_hlds.m"
#line 666 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 666 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 666 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 668 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
#line 666 "equiv_type_hlds.m"
                  break;
#line 666 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 664 "equiv_type_hlds.m"
                  {
#line 664 "equiv_type_hlds.m"
                    MR_Word base;
#line 664 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 664 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Type_11 = base;
#line 664 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 664 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__ArgTypes_32));
#line 664 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeRetType_31));
#line 664 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Purity_26));
#line 664 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 664 "equiv_type_hlds.m"
                  }
#line 666 "equiv_type_hlds.m"
                  break;
#line 666 "equiv_type_hlds.m"
              }
#line 649 "equiv_type_hlds.m"
            }
#line 636 "equiv_type_hlds.m"
            break;
#line 636 "equiv_type_hlds.m"
          case (MR_Integer) 2:
#line 682 "equiv_type_hlds.m"
            {
#line 682 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 1)));
#line 682 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Kind_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 3)));
#line 682 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Args0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 2)));
#line 682 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Args_53;

#line 683 "equiv_type_hlds.m"
              {
#line 683 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__hlds_replace_in_type_list_2_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__Args0_52, &transform_hlds__equiv_type_hlds__Args_53, (MR_Integer) 0, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39);
              }
#line 688 "equiv_type_hlds.m"
#line 688 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 688 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 688 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 690 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
#line 688 "equiv_type_hlds.m"
                  break;
#line 688 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 687 "equiv_type_hlds.m"
                  {
#line 687 "equiv_type_hlds.m"
                    MR_Word base;
#line 687 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 687 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Type_11 = base;
#line 687 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 687 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Var_35));
#line 687 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Args_53));
#line 687 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Kind_51));
#line 687 "equiv_type_hlds.m"
                  }
#line 688 "equiv_type_hlds.m"
                  break;
#line 688 "equiv_type_hlds.m"
              }
#line 682 "equiv_type_hlds.m"
            }
#line 636 "equiv_type_hlds.m"
            break;
#line 636 "equiv_type_hlds.m"
          case (MR_Integer) 3:
#line 693 "equiv_type_hlds.m"
            {
#line 693 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__RawType0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 1)));
#line 693 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__RawType_37;
#line 693 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__Kind_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Type0_10, (MR_Integer) 2)));

#line 694 "equiv_type_hlds.m"
              {
#line 694 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_8, transform_hlds__equiv_type_hlds__TypeCtorsAlreadyExpanded_9, transform_hlds__equiv_type_hlds__RawType0_36, &transform_hlds__equiv_type_hlds__RawType_37, transform_hlds__equiv_type_hlds__Changed_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_38, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_39);
              }
#line 699 "equiv_type_hlds.m"
#line 699 "equiv_type_hlds.m"
              switch (*transform_hlds__equiv_type_hlds__Changed_12) {
#line 699 "equiv_type_hlds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 699 "equiv_type_hlds.m"
                case (MR_Integer) 0:
#line 701 "equiv_type_hlds.m"
                  *transform_hlds__equiv_type_hlds__Type_11 = transform_hlds__equiv_type_hlds__Type0_10;
#line 699 "equiv_type_hlds.m"
                  break;
#line 699 "equiv_type_hlds.m"
                case (MR_Integer) 1:
#line 698 "equiv_type_hlds.m"
                  {
#line 698 "equiv_type_hlds.m"
                    MR_Word base;
#line 698 "equiv_type_hlds.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 698 "equiv_type_hlds.m"
                    *transform_hlds__equiv_type_hlds__Type_11 = base;
#line 698 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 698 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__RawType_37));
#line 698 "equiv_type_hlds.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Kind_54));
#line 698 "equiv_type_hlds.m"
                  }
#line 699 "equiv_type_hlds.m"
                  break;
#line 699 "equiv_type_hlds.m"
              }
#line 693 "equiv_type_hlds.m"
            }
#line 636 "equiv_type_hlds.m"
            break;
#line 636 "equiv_type_hlds.m"
        }
#line 636 "equiv_type_hlds.m"
        break;
#line 636 "equiv_type_hlds.m"
    }
#line 636 "equiv_type_hlds.m"
  }
#line 627 "equiv_type_hlds.m"
}

#line 621 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(
#line 621 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
#line 621 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type0_7,
#line 621 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Type_8,
#line 621 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_11,
#line 621 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_12)
#line 621 "equiv_type_hlds.m"
{
#line 624 "equiv_type_hlds.m"
  {
#line 624 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 625 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds___Changed_10;

#line 625 "equiv_type_hlds.m"
    {
#line 625 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__hlds_replace_in_type_2_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__equiv_type_hlds__Type0_7, transform_hlds__equiv_type_hlds__Type_8, &transform_hlds__equiv_type_hlds___Changed_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_0_11, transform_hlds__equiv_type_hlds__STATE_VARIABLE_VarSet_12);
    }
#line 624 "equiv_type_hlds.m"
  }
#line 621 "equiv_type_hlds.m"
}

#line 589 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_3(
#line 589 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 589 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 589 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2)
#line 589 "equiv_type_hlds.m"
{
#line 589 "equiv_type_hlds.m"
  {
#line 589 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 589 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv7_HeadVar__3_100;

#line 589 "equiv_type_hlds.m"
    {
#line 589 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__589__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), &transform_hlds__equiv_type_hlds__conv7_HeadVar__3_100);
    }
#line 589 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_2 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv7_HeadVar__3_100));
#line 589 "equiv_type_hlds.m"
  }
#line 589 "equiv_type_hlds.m"
}

#line 583 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_2(
#line 583 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 583 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 583 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 583 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 583 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 583 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5)
#line 583 "equiv_type_hlds.m"
{
#line 583 "equiv_type_hlds.m"
  {
#line 583 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 583 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv4_LambdaHeadVar__3_67;
#line 583 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv3_LambdaHeadVar__5_69;

#line 583 "equiv_type_hlds.m"
    {
#line 583 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__IntroducedFrom__pred__replace_in_proc__583__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv4_LambdaHeadVar__3_67, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_4), &transform_hlds__equiv_type_hlds__conv3_LambdaHeadVar__5_69);
    }
#line 583 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv4_LambdaHeadVar__3_67));
#line 583 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_5 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv3_LambdaHeadVar__5_69));
#line 583 "equiv_type_hlds.m"
  }
#line 583 "equiv_type_hlds.m"
}

#line 577 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_1(
#line 577 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 577 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 577 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 577 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 577 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4)
#line 577 "equiv_type_hlds.m"
{
#line 577 "equiv_type_hlds.m"
  {
#line 577 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 577 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv1_Type_8;
#line 577 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_VarSet_12;

#line 577 "equiv_type_hlds.m"
    {
#line 577 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__hlds_replace_in_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), &transform_hlds__equiv_type_hlds__conv1_Type_8, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3), &transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_VarSet_12);
    }
#line 577 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_2 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv1_Type_8));
#line 577 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_4 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_VarSet_12));
#line 577 "equiv_type_hlds.m"
  }
#line 577 "equiv_type_hlds.m"
}

#line 554 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0(
#line 554 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_10,
#line 554 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_0_39,
#line 554 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_40,
#line 554 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_41,
#line 554 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_42,
#line 554 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_0_43,
#line 554 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_44,
#line 554 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_45,
#line 554 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46)
#line 554 "equiv_type_hlds.m"
{
#line 560 "equiv_type_hlds.m"
  {
#line 560 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeInfo_95_95;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_97_97;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ArgModes0_16;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ArgModes_17;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MaybeDeclModes0_19;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__VarTypes0_23;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__VarTypes_24;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__RttiVarMaps0_25;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__AllTypes_26;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeMap_30;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__RttiVarMaps_31;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Goal0_32;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ReplaceInfo0_33;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Goal_34;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed_35;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ReplaceInfo_36;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Recompute_38;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_47_47;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_48_48;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_50_50;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_51_51;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_54_54;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_55_55;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_57_57;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_58_58;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_59_59;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_60_60;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_72_72;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_73_73;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_75_75;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_76_76;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_77_77;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_78_78;
#line 560 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_79_79;
#line 563 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_18_18;
#line 577 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_TVarSet_56_56;
#line 583 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv6_TypeMap_30;
#line 583 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_TVarSet_60_60;
#line 598 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds___XXX_37;

#line 560 "equiv_type_hlds.m"
    {
#line 560 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_0_43, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_47_47);
    }
#line 562 "equiv_type_hlds.m"
    {
#line 562 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_0_39, &transform_hlds__equiv_type_hlds__ArgModes0_16);
    }
#line 563 "equiv_type_hlds.m"
    {
#line 563 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__ArgModes0_16, &transform_hlds__equiv_type_hlds__ArgModes_17, &transform_hlds__equiv_type_hlds__V_18_18, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_47_47, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_48_48, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_45, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49);
    }
#line 564 "equiv_type_hlds.m"
    {
#line 564 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_set_argmodes_3_p_0(transform_hlds__equiv_type_hlds__ArgModes_17, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_0_39, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_50_50);
    }
#line 566 "equiv_type_hlds.m"
    {
#line 566 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__equiv_type_hlds__MaybeDeclModes0_19);
    }
#line 572 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__MaybeDeclModes0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "equiv_type_hlds.m"
      {
#line 573 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_54_54 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_50_50;
#line 573 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49;
#line 573 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_51_51 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_48_48;
#line 573 "equiv_type_hlds.m"
      }
#line 572 "equiv_type_hlds.m"
    else
#line 568 "equiv_type_hlds.m"
      {
#line 568 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__DeclModes0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeDeclModes0_19, (MR_Integer) 0)));
#line 568 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__DeclModes_21;
#line 568 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_53_53;
#line 569 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_22_22;

#line 569 "equiv_type_hlds.m"
        {
#line 569 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_modes_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__DeclModes0_20, &transform_hlds__equiv_type_hlds__DeclModes_21, &transform_hlds__equiv_type_hlds__V_22_22, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_48_48, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_51_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46);
        }
#line 571 "equiv_type_hlds.m"
        {
#line 571 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 571 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__V_53_53, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__DeclModes_21));
#line 571 "equiv_type_hlds.m"
        }
#line 571 "equiv_type_hlds.m"
        {
#line 571 "equiv_type_hlds.m"
          hlds__hlds_pred__proc_info_set_maybe_declared_argmodes_3_p_0(transform_hlds__equiv_type_hlds__V_53_53, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_50_50, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_54_54);
        }
#line 568 "equiv_type_hlds.m"
      }
#line 576 "equiv_type_hlds.m"
    {
#line 576 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__equiv_type_hlds__VarTypes0_23);
    }
#line 577 "equiv_type_hlds.m"
    {
#line 577 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 577 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_55_55, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_7[1]));
#line 577 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_55_55, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_1));
#line 577 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 577 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_55_55, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_10));
#line 577 "equiv_type_hlds.m"
    }
#line 11361 "transform_hlds.equiv_type_hlds.c"
    transform_hlds__equiv_type_hlds__TypeInfo_95_95 = (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[2];
#line 577 "equiv_type_hlds.m"
    {
#line 577 "equiv_type_hlds.m"
      hlds__vartypes__transform_foldl_var_types_5_p_0(transform_hlds__equiv_type_hlds__TypeInfo_95_95, transform_hlds__equiv_type_hlds__V_55_55, transform_hlds__equiv_type_hlds__VarTypes0_23, &transform_hlds__equiv_type_hlds__VarTypes_24, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_51_51)), &transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_TVarSet_56_56);
    }
#line 577 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56 = ((MR_Word) transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_TVarSet_56_56);
#line 579 "equiv_type_hlds.m"
    {
#line 579 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__equiv_type_hlds__VarTypes_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_54_54, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_57_57);
    }
#line 581 "equiv_type_hlds.m"
    {
#line 581 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__equiv_type_hlds__RttiVarMaps0_25);
    }
#line 582 "equiv_type_hlds.m"
    {
#line 582 "equiv_type_hlds.m"
      hlds__hlds_rtti__rtti_varmaps_types_2_p_0(transform_hlds__equiv_type_hlds__RttiVarMaps0_25, &transform_hlds__equiv_type_hlds__AllTypes_26);
    }
#line 583 "equiv_type_hlds.m"
    {
#line 583 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 583 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_58_58, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[2]));
#line 583 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_58_58, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_2));
#line 583 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 583 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_58_58, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_10));
#line 583 "equiv_type_hlds.m"
    }
#line 11399 "transform_hlds.equiv_type_hlds.c"
    transform_hlds__equiv_type_hlds__TypeCtorInfo_97_97 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 588 "equiv_type_hlds.m"
    {
#line 588 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_59_59 = mercury__map__init_0_f_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_97_97, transform_hlds__equiv_type_hlds__TypeCtorInfo_97_97);
    }
#line 583 "equiv_type_hlds.m"
    {
#line 583 "equiv_type_hlds.m"
      mercury__list__foldl2_6_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_97_97, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[4], transform_hlds__equiv_type_hlds__TypeInfo_95_95, transform_hlds__equiv_type_hlds__V_58_58, transform_hlds__equiv_type_hlds__AllTypes_26, ((MR_Box) (transform_hlds__equiv_type_hlds__V_59_59)), &transform_hlds__equiv_type_hlds__conv6_TypeMap_30, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_56_56)), &transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_TVarSet_60_60);
    }
#line 583 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__TypeMap_30 = ((MR_Word) transform_hlds__equiv_type_hlds__conv6_TypeMap_30);
#line 583 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_60_60 = ((MR_Word) transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_TVarSet_60_60);
#line 589 "equiv_type_hlds.m"
    {
#line 589 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 589 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_72_72, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[3]));
#line 589 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_72_72, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0_3));
#line 589 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 589 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_72_72, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeMap_30));
#line 589 "equiv_type_hlds.m"
    }
#line 589 "equiv_type_hlds.m"
    {
#line 589 "equiv_type_hlds.m"
      hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0(transform_hlds__equiv_type_hlds__V_72_72, transform_hlds__equiv_type_hlds__RttiVarMaps0_25, &transform_hlds__equiv_type_hlds__RttiVarMaps_31);
    }
#line 591 "equiv_type_hlds.m"
    {
#line 591 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__equiv_type_hlds__RttiVarMaps_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_57_57, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_73_73);
    }
#line 593 "equiv_type_hlds.m"
    {
#line 593 "equiv_type_hlds.m"
      hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_73_73, &transform_hlds__equiv_type_hlds__Goal0_32);
    }
#line 594 "equiv_type_hlds.m"
    {
#line 594 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__ReplaceInfo0_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 594 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_41));
#line 594 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_0_43));
#line 594 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_73_73));
#line 594 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_60_60));
#line 594 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 4) = ((MR_Box) (*transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46));
#line 594 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo0_33, 5) = ((MR_Box) ((MR_Integer) 0));
#line 594 "equiv_type_hlds.m"
    }
#line 596 "equiv_type_hlds.m"
    {
#line 596 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_goal_6_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_10, transform_hlds__equiv_type_hlds__Goal0_32, &transform_hlds__equiv_type_hlds__Goal_34, &transform_hlds__equiv_type_hlds__Changed_35, transform_hlds__equiv_type_hlds__ReplaceInfo0_33, &transform_hlds__equiv_type_hlds__ReplaceInfo_36);
    }
#line 598 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 0)));
#line 598 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 1)));
#line 598 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 2)));
#line 598 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 3)));
#line 598 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds___XXX_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 4)));
#line 598 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__Recompute_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ReplaceInfo_36, (MR_Integer) 5)));
#line 603 "equiv_type_hlds.m"
#line 603 "equiv_type_hlds.m"
    switch (transform_hlds__equiv_type_hlds__Changed_35) {
#line 603 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 603 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 604 "equiv_type_hlds.m"
        transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_79_79 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_77_77;
#line 603 "equiv_type_hlds.m"
        break;
#line 603 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 602 "equiv_type_hlds.m"
        {
#line 602 "equiv_type_hlds.m"
          hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__equiv_type_hlds__Goal_34, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_77_77, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_79_79);
        }
#line 603 "equiv_type_hlds.m"
        break;
#line 603 "equiv_type_hlds.m"
    }
#line 611 "equiv_type_hlds.m"
#line 611 "equiv_type_hlds.m"
    switch (transform_hlds__equiv_type_hlds__Recompute_38) {
#line 611 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 611 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 612 "equiv_type_hlds.m"
        {
#line 612 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_40 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_79_79;
#line 612 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_42 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_75_75;
#line 612 "equiv_type_hlds.m"
        }
#line 611 "equiv_type_hlds.m"
        break;
#line 611 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 607 "equiv_type_hlds.m"
        {
#line 607 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_81_81;

#line 608 "equiv_type_hlds.m"
          {
#line 608 "equiv_type_hlds.m"
            hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_79_79, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_81_81);
          }
#line 609 "equiv_type_hlds.m"
          {
#line 609 "equiv_type_hlds.m"
            check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_81_81, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ProcInfo_40, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_75_75, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_42);
          }
#line 607 "equiv_type_hlds.m"
        }
#line 611 "equiv_type_hlds.m"
        break;
#line 611 "equiv_type_hlds.m"
    }
#line 614 "equiv_type_hlds.m"
    {
#line 614 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_78_78, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_76_76, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_44);
#line 614 "equiv_type_hlds.m"
      return;
    }
#line 560 "equiv_type_hlds.m"
  }
#line 554 "equiv_type_hlds.m"
}

#line 548 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0_1(
#line 548 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 548 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 548 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 548 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 548 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 548 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_5,
#line 548 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_6,
#line 548 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_7,
#line 548 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_8)
#line 548 "equiv_type_hlds.m"
{
#line 548 "equiv_type_hlds.m"
  {
#line 548 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 548 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv3_STATE_VARIABLE_ProcInfo_40;
#line 548 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_ModuleInfo_42;
#line 548 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_PredInfo_44;
#line 548 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Cache_46;

#line 548 "equiv_type_hlds.m"
    {
#line 548 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_proc_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), &transform_hlds__equiv_type_hlds__conv3_STATE_VARIABLE_ProcInfo_40, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3), &transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_ModuleInfo_42, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_5), &transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_PredInfo_44, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_7), &transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Cache_46);
    }
#line 548 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_2 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv3_STATE_VARIABLE_ProcInfo_40));
#line 548 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_4 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv2_STATE_VARIABLE_ModuleInfo_42));
#line 548 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_6 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_PredInfo_44));
#line 548 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_8 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Cache_46));
#line 548 "equiv_type_hlds.m"
  }
#line 548 "equiv_type_hlds.m"
}

#line 510 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0(
#line 510 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 510 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__PredId_8,
#line 510 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29,
#line 510 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30,
#line 510 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_31,
#line 510 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_32)
#line 510 "equiv_type_hlds.m"
{
#line 516 "equiv_type_hlds.m"
  {
#line 516 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_61_61;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ModuleName_13;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MaybeRecompInfo0_14;
#line 516 "equiv_type_hlds.m"
    MR_String transform_hlds__equiv_type_hlds__PredName_15;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ArgTVarSet0_16;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ExistQVars_17;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ArgTypes0_18;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ArgTypes_19;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ArgTVarSet1_21;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ClassContext0_22;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ClassContext_23;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ArgTVarSet_24;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ItemId_25;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MaybeRecompInfo_26;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ProcMap0_27;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ProcMap_28;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_34_34;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_35_35;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_36_36;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_37_37;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_38_38;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_40_40;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_41_41;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_42_42;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_43_43;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_44_44;
#line 516 "equiv_type_hlds.m"
    MR_Integer transform_hlds__equiv_type_hlds__V_45_45;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_46_46;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_47_47;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_48_48;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_49_49;
#line 516 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_51_51;
#line 528 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_20_20;
#line 548 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_ModuleInfo_48_48;
#line 548 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_PredInfo_49_49;
#line 548 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_Cache_32;

#line 516 "equiv_type_hlds.m"
    {
#line 516 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__equiv_type_hlds__ModuleName_13);
    }
#line 517 "equiv_type_hlds.m"
    {
#line 517 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29, transform_hlds__equiv_type_hlds__PredId_8, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33);
    }
#line 518 "equiv_type_hlds.m"
    {
#line 518 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__equiv_type_hlds__MaybeRecompInfo0_14);
    }
#line 521 "equiv_type_hlds.m"
    {
#line 521 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__PredName_15 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33);
    }
#line 523 "equiv_type_hlds.m"
    {
#line 523 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__V_34_34, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__ModuleName_13));
#line 523 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__V_34_34, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__PredName_15));
#line 523 "equiv_type_hlds.m"
    }
#line 522 "equiv_type_hlds.m"
    {
#line 522 "equiv_type_hlds.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(transform_hlds__equiv_type_hlds__ModuleName_13, transform_hlds__equiv_type_hlds__V_34_34, transform_hlds__equiv_type_hlds__MaybeRecompInfo0_14, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_35_35);
    }
#line 526 "equiv_type_hlds.m"
    {
#line 526 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33, &transform_hlds__equiv_type_hlds__ArgTVarSet0_16, &transform_hlds__equiv_type_hlds__ExistQVars_17, &transform_hlds__equiv_type_hlds__ArgTypes0_18);
    }
#line 528 "equiv_type_hlds.m"
    {
#line 528 "equiv_type_hlds.m"
      parse_tree__equiv_type__replace_in_type_list_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__ArgTypes0_18, &transform_hlds__equiv_type_hlds__ArgTypes_19, &transform_hlds__equiv_type_hlds__V_20_20, transform_hlds__equiv_type_hlds__ArgTVarSet0_16, &transform_hlds__equiv_type_hlds__ArgTVarSet1_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_35_35, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_36_36);
    }
#line 533 "equiv_type_hlds.m"
    {
#line 533 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33, &transform_hlds__equiv_type_hlds__ClassContext0_22);
    }
#line 534 "equiv_type_hlds.m"
    {
#line 534 "equiv_type_hlds.m"
      parse_tree__equiv_type__replace_in_prog_constraints_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__ClassContext0_22, &transform_hlds__equiv_type_hlds__ClassContext_23, transform_hlds__equiv_type_hlds__ArgTVarSet1_21, &transform_hlds__equiv_type_hlds__ArgTVarSet_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_36_36, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_37_37);
    }
#line 536 "equiv_type_hlds.m"
    {
#line 536 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_set_class_context_3_p_0(transform_hlds__equiv_type_hlds__ClassContext_23, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_33_33, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_38_38);
    }
#line 537 "equiv_type_hlds.m"
    {
#line 537 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_set_arg_types_5_p_0(transform_hlds__equiv_type_hlds__ArgTVarSet_24, transform_hlds__equiv_type_hlds__ExistQVars_17, transform_hlds__equiv_type_hlds__ArgTypes_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_38_38, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39);
    }
#line 540 "equiv_type_hlds.m"
    {
#line 540 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_41_41 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39);
    }
#line 539 "equiv_type_hlds.m"
    {
#line 539 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_40_40 = recompilation__pred_or_func_to_item_type_1_f_0(transform_hlds__equiv_type_hlds__V_41_41);
    }
#line 541 "equiv_type_hlds.m"
    {
#line 541 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_44_44 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39);
    }
#line 541 "equiv_type_hlds.m"
    {
#line 541 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__V_43_43, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_44_44));
#line 541 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__V_43_43, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__PredName_15));
#line 541 "equiv_type_hlds.m"
    }
#line 542 "equiv_type_hlds.m"
    {
#line 542 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_45_45 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39);
    }
#line 541 "equiv_type_hlds.m"
    {
#line 541 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 541 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_42_42, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_43_43));
#line 541 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_42_42, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_45_45));
#line 541 "equiv_type_hlds.m"
    }
#line 539 "equiv_type_hlds.m"
    {
#line 539 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__ItemId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ItemId_25, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_40_40));
#line 539 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ItemId_25, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_42_42));
#line 539 "equiv_type_hlds.m"
    }
#line 543 "equiv_type_hlds.m"
    {
#line 543 "equiv_type_hlds.m"
      recompilation__finish_recording_expanded_items_4_p_0(transform_hlds__equiv_type_hlds__ItemId_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_EquivTypeInfo_37_37, transform_hlds__equiv_type_hlds__MaybeRecompInfo0_14, &transform_hlds__equiv_type_hlds__MaybeRecompInfo_26);
    }
#line 545 "equiv_type_hlds.m"
    {
#line 545 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(transform_hlds__equiv_type_hlds__MaybeRecompInfo_26, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_29, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_46_46);
    }
#line 547 "equiv_type_hlds.m"
    {
#line 547 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39, &transform_hlds__equiv_type_hlds__ProcMap0_27);
    }
#line 548 "equiv_type_hlds.m"
    {
#line 548 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 548 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_47_47, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_8[0]));
#line 548 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_47_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0_1));
#line 548 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 548 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_47_47, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_7));
#line 548 "equiv_type_hlds.m"
    }
#line 11849 "transform_hlds.equiv_type_hlds.c"
    transform_hlds__equiv_type_hlds__TypeCtorInfo_61_61 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 548 "equiv_type_hlds.m"
    {
#line 548 "equiv_type_hlds.m"
      mercury__map__map_values_foldl3_9_p_3(transform_hlds__equiv_type_hlds__TypeCtorInfo_61_61, transform_hlds__equiv_type_hlds__TypeCtorInfo_61_61, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__equiv_type_hlds__V_47_47, transform_hlds__equiv_type_hlds__ProcMap0_27, &transform_hlds__equiv_type_hlds__ProcMap_28, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_46_46)), &transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_ModuleInfo_48_48, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_39_39)), &transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_PredInfo_49_49, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_31)), &transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_Cache_32);
    }
#line 548 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_48_48 = ((MR_Word) transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_ModuleInfo_48_48);
#line 548 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_49_49 = ((MR_Word) transform_hlds__equiv_type_hlds__conv5_STATE_VARIABLE_PredInfo_49_49);
#line 548 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_32 = ((MR_Word) transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_Cache_32);
#line 550 "equiv_type_hlds.m"
    {
#line 550 "equiv_type_hlds.m"
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__equiv_type_hlds__ProcMap_28, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_49_49, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_51_51);
    }
#line 551 "equiv_type_hlds.m"
    {
#line 551 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_set_pred_info_4_p_0(transform_hlds__equiv_type_hlds__PredId_8, transform_hlds__equiv_type_hlds__STATE_VARIABLE_PredInfo_51_51, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_48_48, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30);
#line 551 "equiv_type_hlds.m"
      return;
    }
#line 516 "equiv_type_hlds.m"
  }
#line 510 "equiv_type_hlds.m"
}

#line 483 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_constructor_arg_5_p_0(
#line 483 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
#line 483 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__CtorArg0_7,
#line 483 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__CtorArg_8,
#line 483 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_20,
#line 483 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_21)
#line 483 "equiv_type_hlds.m"
{
#line 487 "equiv_type_hlds.m"
  {
#line 487 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 487 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MaybeFieldName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__CtorArg0_7, (MR_Integer) 0)));
#line 487 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Type0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__CtorArg0_7, (MR_Integer) 1)));
#line 487 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Width_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__CtorArg0_7, (MR_Integer) 2)));
#line 487 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__CtorArg0_7, (MR_Integer) 3)));
#line 487 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Type_14;
#line 487 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Changed_15;
#line 489 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_16_16;

#line 489 "equiv_type_hlds.m"
    {
#line 489 "equiv_type_hlds.m"
      parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__Type0_11, &transform_hlds__equiv_type_hlds__Type_14, &transform_hlds__equiv_type_hlds__Changed_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_0_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TVarSet_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__equiv_type_hlds__V_16_16);
    }
#line 503 "equiv_type_hlds.m"
#line 503 "equiv_type_hlds.m"
    switch (transform_hlds__equiv_type_hlds__Changed_15) {
#line 503 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 503 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 505 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__CtorArg_8 = transform_hlds__equiv_type_hlds__CtorArg0_7;
#line 503 "equiv_type_hlds.m"
        break;
#line 503 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 497 "equiv_type_hlds.m"
#line 497 "equiv_type_hlds.m"
        switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Width_12)) {
#line 497 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 497 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 496 "equiv_type_hlds.m"
            {
#line 496 "equiv_type_hlds.m"
              MR_Word base;
#line 496 "equiv_type_hlds.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 496 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__CtorArg_8 = base;
#line 496 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeFieldName_10));
#line 496 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_14));
#line 496 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__Width_12));
#line 496 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__Context_13));
#line 496 "equiv_type_hlds.m"
            }
#line 497 "equiv_type_hlds.m"
            break;
#line 497 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 497 "equiv_type_hlds.m"
          case (MR_Integer) 2:
#line 500 "equiv_type_hlds.m"
            {
#line 501 "equiv_type_hlds.m"
              {
#line 501 "equiv_type_hlds.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.equiv_type_hlds", (MR_String) "predicate \140transform_hlds.equiv_type_hlds.replace_in_constructor_arg\'/5", (MR_String) "changed type of packed argument");
#line 501 "equiv_type_hlds.m"
                return;
              }
#line 500 "equiv_type_hlds.m"
            }
#line 497 "equiv_type_hlds.m"
            break;
#line 497 "equiv_type_hlds.m"
        }
#line 503 "equiv_type_hlds.m"
        break;
#line 503 "equiv_type_hlds.m"
    }
#line 487 "equiv_type_hlds.m"
  }
#line 483 "equiv_type_hlds.m"
}

#line 478 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0_1(
#line 478 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 478 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 478 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 478 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 478 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4)
#line 478 "equiv_type_hlds.m"
{
#line 478 "equiv_type_hlds.m"
  {
#line 478 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 478 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv1_CtorArg_8;
#line 478 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_TVarSet_21;

#line 478 "equiv_type_hlds.m"
    {
#line 478 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_constructor_arg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), &transform_hlds__equiv_type_hlds__conv1_CtorArg_8, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3), &transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_TVarSet_21);
    }
#line 478 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_2 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv1_CtorArg_8));
#line 478 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_4 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_TVarSet_21));
#line 478 "equiv_type_hlds.m"
  }
#line 478 "equiv_type_hlds.m"
}

#line 472 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0(
#line 472 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_4,
#line 472 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__ConsDefn0_5,
#line 472 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__ConsDefn_6)
#line 472 "equiv_type_hlds.m"
{
#line 475 "equiv_type_hlds.m"
  {
#line 475 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 475 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_22_22;
#line 475 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 0)));
#line 475 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 1)));
#line 475 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 2)));
#line 475 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__KindMap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 3)));
#line 475 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ExistQTVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 4)));
#line 475 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ProgConstraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 5)));
#line 475 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ConstructorArgs0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 6)));
#line 475 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ConsDefn0_5, (MR_Integer) 7)));
#line 475 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ConstructorArgs_15;
#line 475 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet_16;
#line 475 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_17_17;
#line 478 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv2_TVarSet_16;

#line 478 "equiv_type_hlds.m"
    {
#line 478 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 478 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_17_17, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_7[0]));
#line 478 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_17_17, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0_1));
#line 478 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 478 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_17_17, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_4));
#line 478 "equiv_type_hlds.m"
    }
#line 12080 "transform_hlds.equiv_type_hlds.c"
    transform_hlds__equiv_type_hlds__TypeCtorInfo_22_22 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 478 "equiv_type_hlds.m"
    {
#line 478 "equiv_type_hlds.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_22_22, transform_hlds__equiv_type_hlds__TypeCtorInfo_22_22, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[2], transform_hlds__equiv_type_hlds__V_17_17, transform_hlds__equiv_type_hlds__ConstructorArgs0_13, &transform_hlds__equiv_type_hlds__ConstructorArgs_15, ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet0_8)), &transform_hlds__equiv_type_hlds__conv2_TVarSet_16);
    }
#line 478 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__TVarSet_16 = ((MR_Word) transform_hlds__equiv_type_hlds__conv2_TVarSet_16);
#line 480 "equiv_type_hlds.m"
    {
#line 480 "equiv_type_hlds.m"
      MR_Word base;
#line 480 "equiv_type_hlds.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 480 "equiv_type_hlds.m"
      *transform_hlds__equiv_type_hlds__ConsDefn_6 = base;
#line 480 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_7));
#line 480 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_16));
#line 480 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeParams_9));
#line 480 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__KindMap_10));
#line 480 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__ExistQTVars_11));
#line 480 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__ProgConstraints_12));
#line 480 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__equiv_type_hlds__ConstructorArgs_15));
#line 480 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__equiv_type_hlds__Context_14));
#line 480 "equiv_type_hlds.m"
    }
#line 475 "equiv_type_hlds.m"
  }
#line 472 "equiv_type_hlds.m"
}

#line 439 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_det_6_p_0(
#line 439 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 439 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MaybeInstDet0_8,
#line 439 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MaybeInstDet_9,
#line 439 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 439 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_17,
#line 439 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_18)
#line 439 "equiv_type_hlds.m"
{
#line 446 "equiv_type_hlds.m"
  {
#line 446 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 446 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__MaybeInstDet0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "equiv_type_hlds.m"
      {
#line 447 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__MaybeInstDet_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 448 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
#line 446 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_18 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_17;
#line 446 "equiv_type_hlds.m"
      }
#line 446 "equiv_type_hlds.m"
    else
#line 450 "equiv_type_hlds.m"
      {
#line 450 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Inst0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeInstDet0_8, (MR_Integer) 0)));
#line 450 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Det_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeInstDet0_8, (MR_Integer) 1)));
#line 450 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TVarSet_14;
#line 450 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Inst_15;
#line 453 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_16_16;

#line 452 "equiv_type_hlds.m"
        {
#line 452 "equiv_type_hlds.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet_14);
        }
#line 453 "equiv_type_hlds.m"
        {
#line 453 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Inst0_12, &transform_hlds__equiv_type_hlds__Inst_15, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__TVarSet_14, &transform_hlds__equiv_type_hlds__V_16_16, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_17, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_18);
        }
#line 457 "equiv_type_hlds.m"
#line 457 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 457 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 457 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 456 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__MaybeInstDet_9 = transform_hlds__equiv_type_hlds__MaybeInstDet0_8;
#line 457 "equiv_type_hlds.m"
            break;
#line 457 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 459 "equiv_type_hlds.m"
            {
#line 459 "equiv_type_hlds.m"
              MR_Word base;
#line 459 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__MaybeInstDet_9 = base;
#line 459 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Inst_15));
#line 459 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Det_13));
#line 459 "equiv_type_hlds.m"
            }
#line 457 "equiv_type_hlds.m"
            break;
#line 457 "equiv_type_hlds.m"
        }
#line 450 "equiv_type_hlds.m"
      }
#line 446 "equiv_type_hlds.m"
  }
#line 439 "equiv_type_hlds.m"
}

#line 416 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_maybe_inst_6_p_0(
#line 416 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 416 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MaybeInst0_8,
#line 416 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MaybeInst_9,
#line 416 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 416 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_16,
#line 416 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_17)
#line 416 "equiv_type_hlds.m"
{
#line 422 "equiv_type_hlds.m"
  {
#line 422 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;

#line 422 "equiv_type_hlds.m"
    if ((transform_hlds__equiv_type_hlds__MaybeInst0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 422 "equiv_type_hlds.m"
      {
#line 423 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__MaybeInst_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 424 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__Changed_10 = (MR_Integer) 0;
#line 422 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_17 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_16;
#line 422 "equiv_type_hlds.m"
      }
#line 422 "equiv_type_hlds.m"
    else
#line 426 "equiv_type_hlds.m"
      {
#line 426 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Inst0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__MaybeInst0_8, (MR_Integer) 0)));
#line 426 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TVarSet_13;
#line 426 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__Inst_14;
#line 429 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__V_15_15;

#line 428 "equiv_type_hlds.m"
        {
#line 428 "equiv_type_hlds.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet_13);
        }
#line 429 "equiv_type_hlds.m"
        {
#line 429 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__Inst0_12, &transform_hlds__equiv_type_hlds__Inst_14, transform_hlds__equiv_type_hlds__Changed_10, transform_hlds__equiv_type_hlds__TVarSet_13, &transform_hlds__equiv_type_hlds__V_15_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_16, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_17);
        }
#line 433 "equiv_type_hlds.m"
#line 433 "equiv_type_hlds.m"
        switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 433 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 433 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 432 "equiv_type_hlds.m"
            *transform_hlds__equiv_type_hlds__MaybeInst_9 = transform_hlds__equiv_type_hlds__MaybeInst0_8;
#line 433 "equiv_type_hlds.m"
            break;
#line 433 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 435 "equiv_type_hlds.m"
            {
#line 435 "equiv_type_hlds.m"
              MR_Word base;
#line 435 "equiv_type_hlds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 435 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__MaybeInst_9 = base;
#line 435 "equiv_type_hlds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Inst_14));
#line 435 "equiv_type_hlds.m"
            }
#line 433 "equiv_type_hlds.m"
            break;
#line 433 "equiv_type_hlds.m"
        }
#line 426 "equiv_type_hlds.m"
      }
#line 422 "equiv_type_hlds.m"
  }
#line 416 "equiv_type_hlds.m"
}

#line 368 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_merge_inst_info_6_p_0(
#line 368 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 368 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__MergeInstInfo0_8,
#line 368 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__MergeInstInfo_9,
#line 368 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 368 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_21,
#line 368 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22)
#line 368 "equiv_type_hlds.m"
{
#line 373 "equiv_type_hlds.m"
  {
#line 373 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 373 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstA0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__MergeInstInfo0_8, (MR_Integer) 0)));
#line 373 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstB0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__MergeInstInfo0_8, (MR_Integer) 1)));
#line 373 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet0_14;
#line 373 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstA_15;
#line 373 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ChangedA_16;
#line 373 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet1_17;
#line 373 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstB_18;
#line 373 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ChangedB_19;
#line 373 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_23_23;
#line 379 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds___TVarSet_20;

#line 376 "equiv_type_hlds.m"
    {
#line 376 "equiv_type_hlds.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet0_14);
    }
#line 377 "equiv_type_hlds.m"
    {
#line 377 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstA0_12, &transform_hlds__equiv_type_hlds__InstA_15, &transform_hlds__equiv_type_hlds__ChangedA_16, transform_hlds__equiv_type_hlds__TVarSet0_14, &transform_hlds__equiv_type_hlds__TVarSet1_17, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_21, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_23_23);
    }
#line 379 "equiv_type_hlds.m"
    {
#line 379 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstB0_13, &transform_hlds__equiv_type_hlds__InstB_18, &transform_hlds__equiv_type_hlds__ChangedB_19, transform_hlds__equiv_type_hlds__TVarSet1_17, &transform_hlds__equiv_type_hlds___TVarSet_20, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_23_23, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_22);
    }
#line 381 "equiv_type_hlds.m"
    {
#line 381 "equiv_type_hlds.m"
      *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_16, transform_hlds__equiv_type_hlds__ChangedB_19);
    }
#line 383 "equiv_type_hlds.m"
#line 383 "equiv_type_hlds.m"
    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 383 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 383 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 383 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__MergeInstInfo_9 = transform_hlds__equiv_type_hlds__MergeInstInfo0_8;
#line 383 "equiv_type_hlds.m"
        break;
#line 383 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 382 "equiv_type_hlds.m"
        {
#line 382 "equiv_type_hlds.m"
          MR_Word base;
#line 382 "equiv_type_hlds.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 382 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__MergeInstInfo_9 = base;
#line 382 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_15));
#line 382 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_18));
#line 382 "equiv_type_hlds.m"
        }
#line 383 "equiv_type_hlds.m"
        break;
#line 383 "equiv_type_hlds.m"
    }
#line 373 "equiv_type_hlds.m"
  }
#line 368 "equiv_type_hlds.m"
}

#line 350 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_unify_inst_info_6_p_0(
#line 350 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_7,
#line 350 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__UnifyInstInfo0_8,
#line 350 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__UnifyInstInfo_9,
#line 350 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__Changed_10,
#line 350 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_23,
#line 350 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_24)
#line 350 "equiv_type_hlds.m"
{
#line 355 "equiv_type_hlds.m"
  {
#line 355 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 355 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Live_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UnifyInstInfo0_8, (MR_Integer) 0)));
#line 355 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Real_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UnifyInstInfo0_8, (MR_Integer) 1)));
#line 355 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstA0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UnifyInstInfo0_8, (MR_Integer) 2)));
#line 355 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstB0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__UnifyInstInfo0_8, (MR_Integer) 3)));
#line 355 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet0_16;
#line 355 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstA_17;
#line 355 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ChangedA_18;
#line 355 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet1_19;
#line 355 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstB_20;
#line 355 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ChangedB_21;
#line 355 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_25_25;
#line 361 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds___TVarSet_22;

#line 358 "equiv_type_hlds.m"
    {
#line 358 "equiv_type_hlds.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__equiv_type_hlds__TVarSet0_16);
    }
#line 359 "equiv_type_hlds.m"
    {
#line 359 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstA0_14, &transform_hlds__equiv_type_hlds__InstA_17, &transform_hlds__equiv_type_hlds__ChangedA_18, transform_hlds__equiv_type_hlds__TVarSet0_16, &transform_hlds__equiv_type_hlds__TVarSet1_19, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_23, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_25_25);
    }
#line 361 "equiv_type_hlds.m"
    {
#line 361 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_7, transform_hlds__equiv_type_hlds__InstB0_15, &transform_hlds__equiv_type_hlds__InstB_20, &transform_hlds__equiv_type_hlds__ChangedB_21, transform_hlds__equiv_type_hlds__TVarSet1_19, &transform_hlds__equiv_type_hlds___TVarSet_22, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_25_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_24);
    }
#line 363 "equiv_type_hlds.m"
    {
#line 363 "equiv_type_hlds.m"
      *transform_hlds__equiv_type_hlds__Changed_10 = mercury__bool__or_2_f_0(transform_hlds__equiv_type_hlds__ChangedA_18, transform_hlds__equiv_type_hlds__ChangedB_21);
    }
#line 365 "equiv_type_hlds.m"
#line 365 "equiv_type_hlds.m"
    switch (*transform_hlds__equiv_type_hlds__Changed_10) {
#line 365 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 365 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 365 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__UnifyInstInfo_9 = transform_hlds__equiv_type_hlds__UnifyInstInfo0_8;
#line 365 "equiv_type_hlds.m"
        break;
#line 365 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 364 "equiv_type_hlds.m"
        {
#line 364 "equiv_type_hlds.m"
          MR_Word base;
#line 364 "equiv_type_hlds.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 364 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__UnifyInstInfo_9 = base;
#line 364 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Live_12));
#line 364 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Real_13));
#line 364 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstA_17));
#line 364 "equiv_type_hlds.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__InstB_20));
#line 364 "equiv_type_hlds.m"
        }
#line 365 "equiv_type_hlds.m"
        break;
#line 365 "equiv_type_hlds.m"
    }
#line 355 "equiv_type_hlds.m"
  }
#line 350 "equiv_type_hlds.m"
}

#line 201 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_inst_table_5_p_0(
#line 201 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_6,
#line 201 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34,
#line 201 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_35,
#line 201 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36,
#line 201 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37)
#line 201 "equiv_type_hlds.m"
{
#line 204 "equiv_type_hlds.m"
  {
#line 204 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnifyInsts0_9;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MergeInsts0_10;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__GroundInsts0_11;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__AnyInsts0_12;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__SharedInsts0_13;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MostlyUniqInsts0_14;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnifyInstPairs0_15;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MergeInstPairs0_16;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__GroundInstPairs0_17;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__AnyInstPairs0_18;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__SharedInstPairs0_19;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MostlyUniqInstPairs0_20;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnifyInstPairs_21;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MergeInstPairs_22;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__GroundInstPairs_23;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__AnyInstPairs_24;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__SharedInstPairs_25;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MostlyUniqInstPairs_26;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__UnifyInsts_28;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MergeInsts_29;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__GroundInsts_30;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__AnyInsts_31;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__SharedInsts_32;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MostlyUniqInsts_33;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_40_40;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_43_43;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46_46;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_55_55;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_56_56;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_57_57;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_58_58;
#line 204 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_59_59;
#line 255 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_27_27;

#line 226 "equiv_type_hlds.m"
    {
#line 226 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_get_unify_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__UnifyInsts0_9);
    }
#line 227 "equiv_type_hlds.m"
    {
#line 227 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_get_merge_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__MergeInsts0_10);
    }
#line 228 "equiv_type_hlds.m"
    {
#line 228 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_get_ground_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__GroundInsts0_11);
    }
#line 229 "equiv_type_hlds.m"
    {
#line 229 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_get_any_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__AnyInsts0_12);
    }
#line 230 "equiv_type_hlds.m"
    {
#line 230 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_get_shared_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__SharedInsts0_13);
    }
#line 231 "equiv_type_hlds.m"
    {
#line 231 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__MostlyUniqInsts0_14);
    }
#line 233 "equiv_type_hlds.m"
    {
#line 233 "equiv_type_hlds.m"
      hlds__hlds_data__unify_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__UnifyInsts0_9, &transform_hlds__equiv_type_hlds__UnifyInstPairs0_15);
    }
#line 234 "equiv_type_hlds.m"
    {
#line 234 "equiv_type_hlds.m"
      hlds__hlds_data__merge_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__MergeInsts0_10, &transform_hlds__equiv_type_hlds__MergeInstPairs0_16);
    }
#line 235 "equiv_type_hlds.m"
    {
#line 235 "equiv_type_hlds.m"
      hlds__hlds_data__ground_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__GroundInsts0_11, &transform_hlds__equiv_type_hlds__GroundInstPairs0_17);
    }
#line 236 "equiv_type_hlds.m"
    {
#line 236 "equiv_type_hlds.m"
      hlds__hlds_data__any_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__AnyInsts0_12, &transform_hlds__equiv_type_hlds__AnyInstPairs0_18);
    }
#line 237 "equiv_type_hlds.m"
    {
#line 237 "equiv_type_hlds.m"
      hlds__hlds_data__shared_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__SharedInsts0_13, &transform_hlds__equiv_type_hlds__SharedInstPairs0_19);
    }
#line 238 "equiv_type_hlds.m"
    {
#line 238 "equiv_type_hlds.m"
      hlds__hlds_data__mostly_uniq_insts_to_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__MostlyUniqInsts0_14, &transform_hlds__equiv_type_hlds__MostlyUniqInstPairs0_20);
    }
#line 240 "equiv_type_hlds.m"
    {
#line 240 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho5_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__UnifyInstPairs0_15, &transform_hlds__equiv_type_hlds__UnifyInstPairs_21, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_0_36, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_40_40);
    }
#line 243 "equiv_type_hlds.m"
    {
#line 243 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho4_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__MergeInstPairs0_16, &transform_hlds__equiv_type_hlds__MergeInstPairs_22, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_40_40, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_43_43);
    }
#line 246 "equiv_type_hlds.m"
    {
#line 246 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho3_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__GroundInstPairs0_17, &transform_hlds__equiv_type_hlds__GroundInstPairs_23, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_43_43, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46_46);
    }
#line 249 "equiv_type_hlds.m"
    {
#line 249 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho2_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__AnyInstPairs0_18, &transform_hlds__equiv_type_hlds__AnyInstPairs_24, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_46_46, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49);
    }
#line 252 "equiv_type_hlds.m"
    {
#line 252 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__SharedInstPairs0_19, &transform_hlds__equiv_type_hlds__SharedInstPairs_25, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_49_49, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37);
    }
#line 255 "equiv_type_hlds.m"
    {
#line 255 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_one_inst_table__ho1_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_6, transform_hlds__equiv_type_hlds__MostlyUniqInstPairs0_20, &transform_hlds__equiv_type_hlds__MostlyUniqInstPairs_26, *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Cache_37, &transform_hlds__equiv_type_hlds__V_27_27);
    }
#line 259 "equiv_type_hlds.m"
    {
#line 259 "equiv_type_hlds.m"
      hlds__hlds_data__unify_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__UnifyInstPairs_21, &transform_hlds__equiv_type_hlds__UnifyInsts_28);
    }
#line 260 "equiv_type_hlds.m"
    {
#line 260 "equiv_type_hlds.m"
      hlds__hlds_data__merge_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__MergeInstPairs_22, &transform_hlds__equiv_type_hlds__MergeInsts_29);
    }
#line 261 "equiv_type_hlds.m"
    {
#line 261 "equiv_type_hlds.m"
      hlds__hlds_data__ground_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__GroundInstPairs_23, &transform_hlds__equiv_type_hlds__GroundInsts_30);
    }
#line 262 "equiv_type_hlds.m"
    {
#line 262 "equiv_type_hlds.m"
      hlds__hlds_data__any_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__AnyInstPairs_24, &transform_hlds__equiv_type_hlds__AnyInsts_31);
    }
#line 263 "equiv_type_hlds.m"
    {
#line 263 "equiv_type_hlds.m"
      hlds__hlds_data__shared_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__SharedInstPairs_25, &transform_hlds__equiv_type_hlds__SharedInsts_32);
    }
#line 264 "equiv_type_hlds.m"
    {
#line 264 "equiv_type_hlds.m"
      hlds__hlds_data__mostly_uniq_insts_from_sorted_pairs_2_p_0(transform_hlds__equiv_type_hlds__MostlyUniqInstPairs_26, &transform_hlds__equiv_type_hlds__MostlyUniqInsts_33);
    }
#line 266 "equiv_type_hlds.m"
    {
#line 266 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_set_unify_insts_3_p_0(transform_hlds__equiv_type_hlds__UnifyInsts_28, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_0_34, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_55_55);
    }
#line 267 "equiv_type_hlds.m"
    {
#line 267 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_set_merge_insts_3_p_0(transform_hlds__equiv_type_hlds__MergeInsts_29, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_55_55, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_56_56);
    }
#line 268 "equiv_type_hlds.m"
    {
#line 268 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_set_ground_insts_3_p_0(transform_hlds__equiv_type_hlds__GroundInsts_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_56_56, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_57_57);
    }
#line 269 "equiv_type_hlds.m"
    {
#line 269 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_set_any_insts_3_p_0(transform_hlds__equiv_type_hlds__AnyInsts_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_57_57, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_58_58);
    }
#line 270 "equiv_type_hlds.m"
    {
#line 270 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_set_shared_insts_3_p_0(transform_hlds__equiv_type_hlds__SharedInsts_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_58_58, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_59_59);
    }
#line 271 "equiv_type_hlds.m"
    {
#line 271 "equiv_type_hlds.m"
      hlds__hlds_data__inst_table_set_mostly_uniq_insts_3_p_0(transform_hlds__equiv_type_hlds__MostlyUniqInsts_33, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_59_59, transform_hlds__equiv_type_hlds__STATE_VARIABLE_InstTable_35);
#line 271 "equiv_type_hlds.m"
      return;
    }
#line 204 "equiv_type_hlds.m"
  }
#line 201 "equiv_type_hlds.m"
}

#line 152 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0(
#line 152 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__ModuleName_8,
#line 152 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_9,
#line 152 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_10,
#line 152 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_0_48,
#line 152 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_49,
#line 152 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_0_50,
#line 152 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_51)
#line 152 "equiv_type_hlds.m"
{
#line 157 "equiv_type_hlds.m"
  {
#line 157 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 157 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet0_13;
#line 157 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Body0_14;
#line 157 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorSymName_15;
#line 157 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorItem_17;
#line 157 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__EquivTypeInfo0_18;
#line 157 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TVarSet_29;
#line 157 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__EquivTypeInfo_30;
#line 157 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Body_31;
#line 157 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ItemId_47;
#line 157 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_54_54;
#line 160 "equiv_type_hlds.m"
    MR_Integer transform_hlds__equiv_type_hlds___TypeCtorArity_16;

#line 158 "equiv_type_hlds.m"
    {
#line 158 "equiv_type_hlds.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_0_48, &transform_hlds__equiv_type_hlds__TVarSet0_13);
    }
#line 159 "equiv_type_hlds.m"
    {
#line 159 "equiv_type_hlds.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_0_48, &transform_hlds__equiv_type_hlds__Body0_14);
    }
#line 160 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__TypeCtorSymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_10, (MR_Integer) 0)));
#line 160 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds___TypeCtorArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__TypeCtor_10, (MR_Integer) 1)));
#line 161 "equiv_type_hlds.m"
    {
#line 161 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__TypeCtorItem_17 = recompilation__type_ctor_to_item_name_1_f_0(transform_hlds__equiv_type_hlds__TypeCtor_10);
    }
#line 162 "equiv_type_hlds.m"
    {
#line 162 "equiv_type_hlds.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(transform_hlds__equiv_type_hlds__ModuleName_8, transform_hlds__equiv_type_hlds__TypeCtorSymName_15, transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_0_50, &transform_hlds__equiv_type_hlds__EquivTypeInfo0_18);
    }
#line 169 "equiv_type_hlds.m"
#line 169 "equiv_type_hlds.m"
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Body0_14)) {
#line 169 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 169 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 175 "equiv_type_hlds.m"
        {
#line 176 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__EquivTypeInfo_30 = transform_hlds__equiv_type_hlds__EquivTypeInfo0_18;
#line 177 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__Body_31 = transform_hlds__equiv_type_hlds__Body0_14;
#line 178 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__TVarSet_29 = transform_hlds__equiv_type_hlds__TVarSet0_13;
#line 175 "equiv_type_hlds.m"
        }
#line 169 "equiv_type_hlds.m"
        break;
#line 169 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 165 "equiv_type_hlds.m"
        {
#line 165 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Ctors0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 0)));
#line 165 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Ctors_28;
#line 165 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 1)));
#line 165 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 2)));
#line 165 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 3)));
#line 165 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 4)));
#line 165 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 5)));
#line 165 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 165 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 165 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 7)));
#line 168 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_57_57;
#line 168 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_58_58;
#line 168 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_59_59;
#line 168 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_60_60;
#line 168 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_61_61;
#line 168 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_62_62;
#line 168 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_63_63;
#line 168 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_64_64;
#line 168 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_56_56;

#line 166 "equiv_type_hlds.m"
          {
#line 166 "equiv_type_hlds.m"
            parse_tree__equiv_type__replace_in_ctors_7_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Ctors0_19, &transform_hlds__equiv_type_hlds__Ctors_28, transform_hlds__equiv_type_hlds__TVarSet0_13, &transform_hlds__equiv_type_hlds__TVarSet_29, transform_hlds__equiv_type_hlds__EquivTypeInfo0_18, &transform_hlds__equiv_type_hlds__EquivTypeInfo_30);
          }
#line 168 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 0)));
#line 168 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 1)));
#line 168 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 2)));
#line 168 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 3)));
#line 168 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 4)));
#line 168 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 5)));
#line 168 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_62_62 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 168 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 168 "equiv_type_hlds.m"
          transform_hlds__equiv_type_hlds__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 7)));
#line 168 "equiv_type_hlds.m"
          {
#line 168 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__Body_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 168 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Ctors_28));
#line 168 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_57_57));
#line 168 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_58_58));
#line 168 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_59_59));
#line 168 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_60_60));
#line 168 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 5) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_61_61));
#line 168 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 6) = ((MR_Box) ((transform_hlds__equiv_type_hlds__V_62_62 | ((transform_hlds__equiv_type_hlds__V_63_63 << (MR_Integer) 1)))));
#line 168 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(1), transform_hlds__equiv_type_hlds__Body_31, 7) = ((MR_Box) (transform_hlds__equiv_type_hlds__V_64_64));
#line 168 "equiv_type_hlds.m"
          }
#line 165 "equiv_type_hlds.m"
        }
#line 169 "equiv_type_hlds.m"
        break;
#line 169 "equiv_type_hlds.m"
      case (MR_Integer) 2:
#line 170 "equiv_type_hlds.m"
        {
#line 170 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Type0_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 0)));
#line 170 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Type_33;
#line 171 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_34_34;

#line 171 "equiv_type_hlds.m"
          {
#line 171 "equiv_type_hlds.m"
            parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__Type0_32, &transform_hlds__equiv_type_hlds__Type_33, &transform_hlds__equiv_type_hlds__V_34_34, transform_hlds__equiv_type_hlds__TVarSet0_13, &transform_hlds__equiv_type_hlds__TVarSet_29, transform_hlds__equiv_type_hlds__EquivTypeInfo0_18, &transform_hlds__equiv_type_hlds__EquivTypeInfo_30);
          }
#line 173 "equiv_type_hlds.m"
          {
#line 173 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__Body_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 173 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Body_31, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__Type_33));
#line 173 "equiv_type_hlds.m"
          }
#line 170 "equiv_type_hlds.m"
        }
#line 169 "equiv_type_hlds.m"
        break;
#line 169 "equiv_type_hlds.m"
      case (MR_Integer) 3:
#line 169 "equiv_type_hlds.m"
#line 169 "equiv_type_hlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 0)))) {
#line 169 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 169 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 180 "equiv_type_hlds.m"
            {
#line 180 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__SolverTypeDetails0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 1)));
#line 180 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__UserEq_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body0_14, (MR_Integer) 2)));
#line 180 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__RepnType0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails0_36, (MR_Integer) 0)));
#line 180 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__InitPred_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails0_36, (MR_Integer) 1)));
#line 180 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__GroundInst_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails0_36, (MR_Integer) 2)));
#line 180 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__AnyInst_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails0_36, (MR_Integer) 3)));
#line 180 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__MutableItems_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails0_36, (MR_Integer) 4)));
#line 180 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__RepnType_43;
#line 180 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__SolverTypeDetails_45;
#line 183 "equiv_type_hlds.m"
              MR_Word transform_hlds__equiv_type_hlds__V_44_44;

#line 183 "equiv_type_hlds.m"
              {
#line 183 "equiv_type_hlds.m"
                parse_tree__equiv_type__replace_in_type_8_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_9, transform_hlds__equiv_type_hlds__RepnType0_38, &transform_hlds__equiv_type_hlds__RepnType_43, &transform_hlds__equiv_type_hlds__V_44_44, transform_hlds__equiv_type_hlds__TVarSet0_13, &transform_hlds__equiv_type_hlds__TVarSet_29, transform_hlds__equiv_type_hlds__EquivTypeInfo0_18, &transform_hlds__equiv_type_hlds__EquivTypeInfo_30);
              }
#line 185 "equiv_type_hlds.m"
              {
#line 185 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__SolverTypeDetails_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 185 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails_45, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__RepnType_43));
#line 185 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails_45, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__InitPred_39));
#line 185 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails_45, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__GroundInst_40));
#line 185 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails_45, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__AnyInst_41));
#line 185 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__SolverTypeDetails_45, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__MutableItems_42));
#line 185 "equiv_type_hlds.m"
              }
#line 187 "equiv_type_hlds.m"
              {
#line 187 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__Body_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 187 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 187 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body_31, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__SolverTypeDetails_45));
#line 187 "equiv_type_hlds.m"
                MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body_31, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__UserEq_37));
#line 187 "equiv_type_hlds.m"
              }
#line 180 "equiv_type_hlds.m"
            }
#line 169 "equiv_type_hlds.m"
            break;
#line 169 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 189 "equiv_type_hlds.m"
            {
#line 190 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__EquivTypeInfo_30 = transform_hlds__equiv_type_hlds__EquivTypeInfo0_18;
#line 191 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__Body_31 = transform_hlds__equiv_type_hlds__Body0_14;
#line 192 "equiv_type_hlds.m"
              transform_hlds__equiv_type_hlds__TVarSet_29 = transform_hlds__equiv_type_hlds__TVarSet0_13;
#line 189 "equiv_type_hlds.m"
            }
#line 169 "equiv_type_hlds.m"
            break;
#line 169 "equiv_type_hlds.m"
        }
#line 169 "equiv_type_hlds.m"
        break;
#line 169 "equiv_type_hlds.m"
    }
#line 194 "equiv_type_hlds.m"
    {
#line 194 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__ItemId_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 194 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ItemId_47, 0) = ((MR_Box) ((MR_Integer) 1));
#line 194 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__ItemId_47, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtorItem_17));
#line 194 "equiv_type_hlds.m"
    }
#line 195 "equiv_type_hlds.m"
    {
#line 195 "equiv_type_hlds.m"
      recompilation__finish_recording_expanded_items_4_p_0(transform_hlds__equiv_type_hlds__ItemId_47, transform_hlds__equiv_type_hlds__EquivTypeInfo_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_0_50, transform_hlds__equiv_type_hlds__STATE_VARIABLE_MaybeRecompInfo_51);
    }
#line 196 "equiv_type_hlds.m"
    {
#line 196 "equiv_type_hlds.m"
      hlds__hlds_data__set_type_defn_body_3_p_0(transform_hlds__equiv_type_hlds__Body_31, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_0_48, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_54_54);
    }
#line 197 "equiv_type_hlds.m"
    {
#line 197 "equiv_type_hlds.m"
      hlds__hlds_data__set_type_defn_tvarset_3_p_0(transform_hlds__equiv_type_hlds__TVarSet_29, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_54_54, transform_hlds__equiv_type_hlds__STATE_VARIABLE_Defn_49);
#line 197 "equiv_type_hlds.m"
      return;
    }
#line 157 "equiv_type_hlds.m"
  }
#line 152 "equiv_type_hlds.m"
}

#line 136 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__mark_eqv_exported_types_3_p_0(
#line 136 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_4,
#line 136 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_0_8,
#line 136 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_9)
#line 136 "equiv_type_hlds.m"
{
#line 143 "equiv_type_hlds.m"
  {
#line 143 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 143 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeDefn0_6;

#line 140 "equiv_type_hlds.m"
    {
#line 140 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_0_8, transform_hlds__equiv_type_hlds__TypeCtor_4, &transform_hlds__equiv_type_hlds__TypeDefn0_6);
    }
#line 143 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 141 "equiv_type_hlds.m"
      {
#line 141 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__TypeDefn_7;

#line 141 "equiv_type_hlds.m"
        {
#line 141 "equiv_type_hlds.m"
          hlds__hlds_data__set_type_defn_in_exported_eqv_3_p_0((MR_Integer) 1, transform_hlds__equiv_type_hlds__TypeDefn0_6, &transform_hlds__equiv_type_hlds__TypeDefn_7);
        }
#line 142 "equiv_type_hlds.m"
        {
#line 142 "equiv_type_hlds.m"
          hlds__hlds_data__replace_type_ctor_defn_4_p_0(transform_hlds__equiv_type_hlds__TypeCtor_4, transform_hlds__equiv_type_hlds__TypeDefn_7, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_0_8, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_9);
#line 142 "equiv_type_hlds.m"
          return;
        }
#line 141 "equiv_type_hlds.m"
      }
#line 143 "equiv_type_hlds.m"
    else
#line 143 "equiv_type_hlds.m"
      *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeTable_0_8;
#line 143 "equiv_type_hlds.m"
  }
#line 136 "equiv_type_hlds.m"
}

#line 129 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0_1(
#line 129 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 129 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 129 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 129 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3)
#line 129 "equiv_type_hlds.m"
{
#line 129 "equiv_type_hlds.m"
  {
#line 129 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 129 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Set_9;

#line 129 "equiv_type_hlds.m"
    {
#line 129 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Set_9);
    }
#line 129 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_Set_9));
#line 129 "equiv_type_hlds.m"
  }
#line 129 "equiv_type_hlds.m"
}

#line 123 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(
#line 123 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Type_4,
#line 123 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_0_8,
#line 123 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_9)
#line 123 "equiv_type_hlds.m"
{
#line 130 "equiv_type_hlds.m"
  {
#line 130 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 130 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtor_6;
#line 130 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Args_7;

#line 127 "equiv_type_hlds.m"
    {
#line 127 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(transform_hlds__equiv_type_hlds__Type_4, &transform_hlds__equiv_type_hlds__TypeCtor_6, &transform_hlds__equiv_type_hlds__Args_7);
    }
#line 130 "equiv_type_hlds.m"
    if (transform_hlds__equiv_type_hlds__succeeded)
#line 128 "equiv_type_hlds.m"
      {
#line 128 "equiv_type_hlds.m"
        MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_10_10;
#line 129 "equiv_type_hlds.m"
        MR_Box transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_Set_9;

#line 128 "equiv_type_hlds.m"
        {
#line 128 "equiv_type_hlds.m"
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_6)), transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_0_8, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_10_10);
        }
#line 129 "equiv_type_hlds.m"
        {
#line 129 "equiv_type_hlds.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[0], (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[7], transform_hlds__equiv_type_hlds__Args_7, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_10_10)), &transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_Set_9);
        }
#line 129 "equiv_type_hlds.m"
        *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_9 = ((MR_Word) transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_Set_9);
#line 128 "equiv_type_hlds.m"
      }
#line 130 "equiv_type_hlds.m"
    else
#line 130 "equiv_type_hlds.m"
      *transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_9 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_Set_0_8;
#line 130 "equiv_type_hlds.m"
  }
#line 123 "equiv_type_hlds.m"
}

#line 95 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__add_type_to_eqv_map_6_p_0(
#line 95 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__TypeCtor_7,
#line 95 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__Defn_8,
#line 95 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_30,
#line 95 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_31,
#line 95 "equiv_type_hlds.m"
  MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32,
#line 95 "equiv_type_hlds.m"
  MR_Word * transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33)
#line 95 "equiv_type_hlds.m"
{
#line 99 "equiv_type_hlds.m"
  {
#line 99 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 99 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Body_11;

#line 100 "equiv_type_hlds.m"
    {
#line 100 "equiv_type_hlds.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__equiv_type_hlds__Defn_8, &transform_hlds__equiv_type_hlds__Body_11);
    }
#line 115 "equiv_type_hlds.m"
#line 115 "equiv_type_hlds.m"
    switch (MR_tag((MR_Word) transform_hlds__equiv_type_hlds__Body_11)) {
#line 115 "equiv_type_hlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 115 "equiv_type_hlds.m"
      case (MR_Integer) 0:
#line 117 "equiv_type_hlds.m"
        {
#line 117 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_31 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_30;
#line 117 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32;
#line 117 "equiv_type_hlds.m"
        }
#line 115 "equiv_type_hlds.m"
        break;
#line 115 "equiv_type_hlds.m"
      case (MR_Integer) 1:
#line 116 "equiv_type_hlds.m"
        {
#line 116 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_31 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_30;
#line 116 "equiv_type_hlds.m"
          *transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32;
#line 116 "equiv_type_hlds.m"
        }
#line 115 "equiv_type_hlds.m"
        break;
#line 115 "equiv_type_hlds.m"
      case (MR_Integer) 2:
#line 102 "equiv_type_hlds.m"
        {
#line 102 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__EqvType_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__equiv_type_hlds__Body_11, (MR_Integer) 0)));
#line 102 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TVarSet_13;
#line 102 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__Params_14;
#line 102 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__TypeStatus_15;
#line 102 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__IsExported_16;
#line 102 "equiv_type_hlds.m"
          MR_Word transform_hlds__equiv_type_hlds__V_34_34;

#line 103 "equiv_type_hlds.m"
          {
#line 103 "equiv_type_hlds.m"
            hlds__hlds_data__get_type_defn_tvarset_2_p_0(transform_hlds__equiv_type_hlds__Defn_8, &transform_hlds__equiv_type_hlds__TVarSet_13);
          }
#line 104 "equiv_type_hlds.m"
          {
#line 104 "equiv_type_hlds.m"
            hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__equiv_type_hlds__Defn_8, &transform_hlds__equiv_type_hlds__Params_14);
          }
#line 105 "equiv_type_hlds.m"
          {
#line 105 "equiv_type_hlds.m"
            hlds__hlds_data__get_type_defn_status_2_p_0(transform_hlds__equiv_type_hlds__Defn_8, &transform_hlds__equiv_type_hlds__TypeStatus_15);
          }
#line 106 "equiv_type_hlds.m"
          {
#line 106 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 106 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_34_34, 0) = ((MR_Box) (transform_hlds__equiv_type_hlds__TVarSet_13));
#line 106 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_34_34, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__Params_14));
#line 106 "equiv_type_hlds.m"
            MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_34_34, 2) = ((MR_Box) (transform_hlds__equiv_type_hlds__EqvType_12));
#line 106 "equiv_type_hlds.m"
          }
#line 106 "equiv_type_hlds.m"
          {
#line 106 "equiv_type_hlds.m"
            mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, ((MR_Box) (transform_hlds__equiv_type_hlds__TypeCtor_7)), ((MR_Box) (transform_hlds__equiv_type_hlds__V_34_34)), transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_30, transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_31);
          }
#line 108 "equiv_type_hlds.m"
          {
#line 108 "equiv_type_hlds.m"
            transform_hlds__equiv_type_hlds__IsExported_16 = hlds__status__type_status_is_exported_1_f_0(transform_hlds__equiv_type_hlds__TypeStatus_15);
          }
#line 112 "equiv_type_hlds.m"
#line 112 "equiv_type_hlds.m"
          switch (transform_hlds__equiv_type_hlds__IsExported_16) {
#line 112 "equiv_type_hlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 112 "equiv_type_hlds.m"
            case (MR_Integer) 0:
#line 113 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32;
#line 112 "equiv_type_hlds.m"
              break;
#line 112 "equiv_type_hlds.m"
            case (MR_Integer) 1:
#line 111 "equiv_type_hlds.m"
              {
#line 111 "equiv_type_hlds.m"
                transform_hlds__equiv_type_hlds__add_type_ctors_to_set_3_p_0(transform_hlds__equiv_type_hlds__EqvType_12, transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32, transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33);
#line 111 "equiv_type_hlds.m"
                return;
              }
#line 112 "equiv_type_hlds.m"
              break;
#line 112 "equiv_type_hlds.m"
          }
#line 102 "equiv_type_hlds.m"
        }
#line 115 "equiv_type_hlds.m"
        break;
#line 115 "equiv_type_hlds.m"
      case (MR_Integer) 3:
#line 115 "equiv_type_hlds.m"
#line 115 "equiv_type_hlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__equiv_type_hlds__Body_11, (MR_Integer) 0)))) {
#line 115 "equiv_type_hlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 115 "equiv_type_hlds.m"
          case (MR_Integer) 0:
#line 118 "equiv_type_hlds.m"
            {
#line 118 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_31 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_30;
#line 118 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32;
#line 118 "equiv_type_hlds.m"
            }
#line 115 "equiv_type_hlds.m"
            break;
#line 115 "equiv_type_hlds.m"
          case (MR_Integer) 1:
#line 119 "equiv_type_hlds.m"
            {
#line 119 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_31 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_TypeEqvMap_0_30;
#line 119 "equiv_type_hlds.m"
              *transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_33 = transform_hlds__equiv_type_hlds__STATE_VARIABLE_EqvExportTypes_0_32;
#line 119 "equiv_type_hlds.m"
            }
#line 115 "equiv_type_hlds.m"
            break;
#line 115 "equiv_type_hlds.m"
        }
#line 115 "equiv_type_hlds.m"
        break;
#line 115 "equiv_type_hlds.m"
    }
#line 99 "equiv_type_hlds.m"
  }
#line 95 "equiv_type_hlds.m"
}

#line 90 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_5(
#line 90 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 90 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 90 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 90 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 90 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 90 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5)
#line 90 "equiv_type_hlds.m"
{
#line 90 "equiv_type_hlds.m"
  {
#line 90 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 90 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv11_STATE_VARIABLE_ModuleInfo_30;
#line 90 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv10_STATE_VARIABLE_Cache_32;

#line 90 "equiv_type_hlds.m"
    {
#line 90 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_pred_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv11_STATE_VARIABLE_ModuleInfo_30, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_4), &transform_hlds__equiv_type_hlds__conv10_STATE_VARIABLE_Cache_32);
    }
#line 90 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv11_STATE_VARIABLE_ModuleInfo_30));
#line 90 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_5 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv10_STATE_VARIABLE_Cache_32));
#line 90 "equiv_type_hlds.m"
  }
#line 90 "equiv_type_hlds.m"
}

#line 469 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_4(
#line 469 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 469 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 469 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_2)
#line 469 "equiv_type_hlds.m"
{
#line 469 "equiv_type_hlds.m"
  {
#line 469 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 469 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv9_ConsDefn_6;

#line 469 "equiv_type_hlds.m"
    {
#line 469 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_cons_defn_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), &transform_hlds__equiv_type_hlds__conv9_ConsDefn_6);
    }
#line 469 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_2 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv9_ConsDefn_6));
#line 469 "equiv_type_hlds.m"
  }
#line 469 "equiv_type_hlds.m"
}

#line 75 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_3(
#line 75 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 75 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 75 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 75 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 75 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 75 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_5)
#line 75 "equiv_type_hlds.m"
{
#line 75 "equiv_type_hlds.m"
  {
#line 75 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 75 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv7_STATE_VARIABLE_Defn_49;
#line 75 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_MaybeRecompInfo_51;

#line 75 "equiv_type_hlds.m"
    {
#line 75 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_type_defn_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv7_STATE_VARIABLE_Defn_49, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_4), &transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_MaybeRecompInfo_51);
    }
#line 75 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv7_STATE_VARIABLE_Defn_49));
#line 75 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_5 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv6_STATE_VARIABLE_MaybeRecompInfo_51));
#line 75 "equiv_type_hlds.m"
  }
#line 75 "equiv_type_hlds.m"
}

#line 70 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_2(
#line 70 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 70 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 70 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 70 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_3)
#line 70 "equiv_type_hlds.m"
{
#line 70 "equiv_type_hlds.m"
  {
#line 70 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 70 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_TypeTable_9;

#line 70 "equiv_type_hlds.m"
    {
#line 70 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__mark_eqv_exported_types_3_p_0(((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), &transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_TypeTable_9);
    }
#line 70 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_3 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv4_STATE_VARIABLE_TypeTable_9));
#line 70 "equiv_type_hlds.m"
  }
#line 70 "equiv_type_hlds.m"
}

#line 68 "equiv_type_hlds.m"
static void MR_CALL 
transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_1(
#line 68 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__closure_arg,
#line 68 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_1,
#line 68 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_2,
#line 68 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_3,
#line 68 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_4,
#line 68 "equiv_type_hlds.m"
  MR_Box transform_hlds__equiv_type_hlds__wrapper_arg_5,
#line 68 "equiv_type_hlds.m"
  MR_Box * transform_hlds__equiv_type_hlds__wrapper_arg_6)
#line 68 "equiv_type_hlds.m"
{
#line 68 "equiv_type_hlds.m"
  {
#line 68 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__closure = transform_hlds__equiv_type_hlds__closure_arg;
#line 68 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_TypeEqvMap_31;
#line 68 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_EqvExportTypes_33;

#line 68 "equiv_type_hlds.m"
    {
#line 68 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__add_type_to_eqv_map_6_p_0(((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_1), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_2), ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_3), &transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_TypeEqvMap_31, ((MR_Word) transform_hlds__equiv_type_hlds__wrapper_arg_5), &transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_EqvExportTypes_33);
    }
#line 68 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_4 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv1_STATE_VARIABLE_TypeEqvMap_31));
#line 68 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__wrapper_arg_6 = ((MR_Box) (transform_hlds__equiv_type_hlds__conv0_STATE_VARIABLE_EqvExportTypes_33));
#line 68 "equiv_type_hlds.m"
  }
#line 68 "equiv_type_hlds.m"
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
#line 66 "equiv_type_hlds.m"
  {
#line 66 "equiv_type_hlds.m"
    MR_bool transform_hlds__equiv_type_hlds__succeeded;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_39_39;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeCtorInfo_53_53;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeTable0_4;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeEqvMap_5;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__EqvExportTypes_6;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeTable1_7;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MaybeRecompInfo0_8;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ModuleName_9;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__TypeTable_10;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__MaybeRecompInfo_11;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Insts0_12;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstCache0_13;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__Insts_14;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__InstCache_15;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ConsTable0_16;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__ConsTable_17;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__PredIds_18;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_23_23;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_24_24;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_26_26;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_27_27;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_28_28;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_29_29;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30_30;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_31_31;
#line 66 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_66_66;
#line 68 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv3_TypeEqvMap_5;
#line 68 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv2_EqvExportTypes_6;
#line 70 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv5_TypeTable1_7;
#line 74 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv8_MaybeRecompInfo_11;
#line 90 "equiv_type_hlds.m"
    MR_Word transform_hlds__equiv_type_hlds__V_19_19;
#line 90 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv13_STATE_VARIABLE_ModuleInfo_21;
#line 90 "equiv_type_hlds.m"
    MR_Box transform_hlds__equiv_type_hlds__conv12_V_19_19;

#line 67 "equiv_type_hlds.m"
    {
#line 67 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__equiv_type_hlds__TypeTable0_4);
    }
#line 13682 "transform_hlds.equiv_type_hlds.c"
    transform_hlds__equiv_type_hlds__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 69 "equiv_type_hlds.m"
    {
#line 69 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_23_23 = mercury__map__init_0_f_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_39_39, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0);
    }
#line 69 "equiv_type_hlds.m"
    {
#line 69 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_24_24 = mercury__set__init_0_f_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_39_39);
    }
#line 68 "equiv_type_hlds.m"
    {
#line 68 "equiv_type_hlds.m"
      hlds__hlds_data__foldl2_over_type_ctor_defns_6_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[0], (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[0], (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[5], transform_hlds__equiv_type_hlds__TypeTable0_4, ((MR_Box) (transform_hlds__equiv_type_hlds__V_23_23)), &transform_hlds__equiv_type_hlds__conv3_TypeEqvMap_5, ((MR_Box) (transform_hlds__equiv_type_hlds__V_24_24)), &transform_hlds__equiv_type_hlds__conv2_EqvExportTypes_6);
    }
#line 68 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__TypeEqvMap_5 = ((MR_Word) transform_hlds__equiv_type_hlds__conv3_TypeEqvMap_5);
#line 68 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__EqvExportTypes_6 = ((MR_Word) transform_hlds__equiv_type_hlds__conv2_EqvExportTypes_6);
#line 70 "equiv_type_hlds.m"
    {
#line 70 "equiv_type_hlds.m"
      mercury__set__fold_4_p_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_39_39, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[2], (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[6], transform_hlds__equiv_type_hlds__EqvExportTypes_6, ((MR_Box) (transform_hlds__equiv_type_hlds__TypeTable0_4)), &transform_hlds__equiv_type_hlds__conv5_TypeTable1_7);
    }
#line 70 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__TypeTable1_7 = ((MR_Word) transform_hlds__equiv_type_hlds__conv5_TypeTable1_7);
#line 72 "equiv_type_hlds.m"
    {
#line 72 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__equiv_type_hlds__MaybeRecompInfo0_8);
    }
#line 73 "equiv_type_hlds.m"
    {
#line 73 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__equiv_type_hlds__ModuleName_9);
    }
#line 75 "equiv_type_hlds.m"
    {
#line 75 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 75 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_26_26, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_6[0]));
#line 75 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_26_26, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_3));
#line 75 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 75 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_26_26, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__ModuleName_9));
#line 75 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_26_26, 4) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_5));
#line 75 "equiv_type_hlds.m"
    }
#line 74 "equiv_type_hlds.m"
    {
#line 74 "equiv_type_hlds.m"
      hlds__hlds_data__map_foldl_over_type_ctor_defns_5_p_0((MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_2[1], transform_hlds__equiv_type_hlds__V_26_26, transform_hlds__equiv_type_hlds__TypeTable1_7, &transform_hlds__equiv_type_hlds__TypeTable_10, ((MR_Box) (transform_hlds__equiv_type_hlds__MaybeRecompInfo0_8)), &transform_hlds__equiv_type_hlds__conv8_MaybeRecompInfo_11);
    }
#line 74 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__MaybeRecompInfo_11 = ((MR_Word) transform_hlds__equiv_type_hlds__conv8_MaybeRecompInfo_11);
#line 77 "equiv_type_hlds.m"
    {
#line 77 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_set_type_table_3_p_0(transform_hlds__equiv_type_hlds__TypeTable_10, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_27_27);
    }
#line 78 "equiv_type_hlds.m"
    {
#line 78 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(transform_hlds__equiv_type_hlds__MaybeRecompInfo_11, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_27_27, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_28_28);
    }
#line 80 "equiv_type_hlds.m"
    {
#line 80 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__equiv_type_hlds__Insts0_12);
    }
#line 13758 "transform_hlds.equiv_type_hlds.c"
    transform_hlds__equiv_type_hlds__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 81 "equiv_type_hlds.m"
    {
#line 81 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__InstCache0_13 = mercury__map__init_0_f_0(transform_hlds__equiv_type_hlds__TypeCtorInfo_53_53, transform_hlds__equiv_type_hlds__TypeCtorInfo_53_53);
    }
#line 82 "equiv_type_hlds.m"
    {
#line 82 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__replace_in_inst_table_5_p_0(transform_hlds__equiv_type_hlds__TypeEqvMap_5, transform_hlds__equiv_type_hlds__Insts0_12, &transform_hlds__equiv_type_hlds__Insts_14, transform_hlds__equiv_type_hlds__InstCache0_13, &transform_hlds__equiv_type_hlds__InstCache_15);
    }
#line 83 "equiv_type_hlds.m"
    {
#line 83 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_set_inst_table_3_p_0(transform_hlds__equiv_type_hlds__Insts_14, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_28_28, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_29_29);
    }
#line 85 "equiv_type_hlds.m"
    {
#line 85 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_29_29, &transform_hlds__equiv_type_hlds__ConsTable0_16);
    }
#line 469 "equiv_type_hlds.m"
    {
#line 469 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 469 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_66_66, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_5[1]));
#line 469 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_66_66, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_4));
#line 469 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 469 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_66_66, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_5));
#line 469 "equiv_type_hlds.m"
    }
#line 469 "equiv_type_hlds.m"
    {
#line 469 "equiv_type_hlds.m"
      hlds__hlds_data__replace_cons_defns_in_cons_table_3_p_0(transform_hlds__equiv_type_hlds__V_66_66, transform_hlds__equiv_type_hlds__ConsTable0_16, &transform_hlds__equiv_type_hlds__ConsTable_17);
    }
#line 87 "equiv_type_hlds.m"
    {
#line 87 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_set_cons_table_3_p_0(transform_hlds__equiv_type_hlds__ConsTable_17, transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_29_29, &transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30_30);
    }
#line 89 "equiv_type_hlds.m"
    {
#line 89 "equiv_type_hlds.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30_30, &transform_hlds__equiv_type_hlds__PredIds_18);
    }
#line 90 "equiv_type_hlds.m"
    {
#line 90 "equiv_type_hlds.m"
      transform_hlds__equiv_type_hlds__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 90 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_31_31, 0) = ((MR_Box) (&transform_hlds__equiv_type_hlds_scalar_common_4[1]));
#line 90 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_31_31, 1) = ((MR_Box) (transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0_5));
#line 90 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 90 "equiv_type_hlds.m"
      MR_hl_field(MR_mktag(0), transform_hlds__equiv_type_hlds__V_31_31, 3) = ((MR_Box) (transform_hlds__equiv_type_hlds__TypeEqvMap_5));
#line 90 "equiv_type_hlds.m"
    }
#line 90 "equiv_type_hlds.m"
    {
#line 90 "equiv_type_hlds.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__equiv_type_hlds_scalar_common_1[3], transform_hlds__equiv_type_hlds__V_31_31, transform_hlds__equiv_type_hlds__PredIds_18, ((MR_Box) (transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_30_30)), &transform_hlds__equiv_type_hlds__conv13_STATE_VARIABLE_ModuleInfo_21, ((MR_Box) (transform_hlds__equiv_type_hlds__InstCache_15)), &transform_hlds__equiv_type_hlds__conv12_V_19_19);
    }
#line 90 "equiv_type_hlds.m"
    *transform_hlds__equiv_type_hlds__STATE_VARIABLE_ModuleInfo_21 = ((MR_Word) transform_hlds__equiv_type_hlds__conv13_STATE_VARIABLE_ModuleInfo_21);
#line 90 "equiv_type_hlds.m"
    transform_hlds__equiv_type_hlds__V_19_19 = ((MR_Word) transform_hlds__equiv_type_hlds__conv12_V_19_19);
#line 66 "equiv_type_hlds.m"
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
