/*
** Automatically generated from `type_ctor_info.m'
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


/* :- module backend_libs.type_ctor_info. */
/* :- implementation. */

/*
INIT mercury__backend_libs__type_ctor_info__init
ENDINIT
*/

#include "backend_libs.type_ctor_info.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "int.mih"
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
#include "backend_libs.foreign.mih"
#include "backend_libs.pseudo_type_info.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 137 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0;

#line 140 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0;

#line 143 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0;

#line 146 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 149 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 152 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 155 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;

#line 158 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;

#line 161 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0;

#line 164 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0;

#line 167 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0;

#line 170 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

#line 173 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

#line 176 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_arg_info_0;

#line 179 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__maybe__pti_maybe_1__plain_backend_libs__rtti__type_ctor_info_exist_info_0;

#line 182 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 185 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 188 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0;

#line 191 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

#line 194 "backend_libs.type_ctor_info.c"
static const MR_PseudoTypeInfo backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_0[1];

#line 197 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDesc backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_0;

#line 200 "backend_libs.type_ctor_info.c"
static const MR_PseudoTypeInfo backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_1[1];

#line 203 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDesc backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_1;

#line 206 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_0[1];

#line 209 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_1[1];

#line 212 "backend_libs.type_ctor_info.c"
static const MR_DuPtagLayout backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_ptag_ordered_maybe_reserved_rep_0[2];

#line 215 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_name_ordered_maybe_reserved_rep_0[2];

#line 218 "backend_libs.type_ctor_info.c"
static const MR_Integer backend_libs__type_ctor_info__backend_libs__type_ctor_info__functor_number_map_maybe_reserved_rep_0[2];

#line 221 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 224 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

#line 227 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

#line 230 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_reserved_address_0backend_libs__rtti__type_ctor_info_rtti_data_0;

#line 233 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

#line 236 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

#line 239 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

#line 242 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

#line 245 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

#line 248 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0_10001(
#line 251 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 253 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2);

#line 256 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0_10001(
#line 259 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 261 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 263 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3);

#line 266 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001(
#line 269 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 271 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2);

#line 274 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0_10001(
#line 277 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 279 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 281 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3);

#line 284 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0_10001(
#line 287 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 289 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2);

#line 292 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0_10001(
#line 295 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 297 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 299 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3);

#line 302 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0_10001(
#line 305 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 307 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2);

#line 310 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0_10001(
#line 313 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 315 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 317 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3);

#line 320 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0_10001(
#line 323 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 325 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2);

#line 328 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0_10001(
#line 331 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 333 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 335 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3);

#line 1087 "type_ctor_info.m"
static MR_Word MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1087__1_1_f_0(
#line 1087 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_10);

#line 1026 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__1026__1_2_p_0(
#line 1026 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__SectagLocn_9,
#line 1026 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Locn0_12);

#line 962 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__962__1_3_p_0(
#line 962 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__LocnMap_28,
#line 962 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_46,
#line 962 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__3_47);

#line 952 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__952__1_5_p_0(
#line 952 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_37,
#line 952 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_38,
#line 952 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__HeadVar__3_39,
#line 952 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__4_40,
#line 952 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__5_41);

#line 944 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__944__1_2_p_0(
#line 944 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_33,
#line 944 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__2_34);

#line 847 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__847__1_2_p_0(
#line 847 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__MaybeExistInfo_33,
#line 847 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_58);

#line 846 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__846__1_2_p_0(
#line 846 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ArgInfos_32,
#line 846 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_53);

#line 845 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__845__1_2_p_0(
#line 845 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__Arity_27,
#line 845 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_48);

#line 789 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__789__1_2_p_0(
#line 789 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
#line 789 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_35);

#line 781 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__781__1_2_p_0(
#line 781 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
#line 781 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_42);

#line 700 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__700__1_2_p_0(
#line 700 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Lang_2,
#line 700 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ForeignTagLang_27);

#line 694 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__694__1_2_p_0(
#line 694 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__Arity_24,
#line 694 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_76);

#line 691 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__691__1_2_p_0(
#line 691 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_20,
#line 691 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_71);

#line 689 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__689__1_2_p_0(
#line 689 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTvars_19,
#line 689 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_66);

#line 631 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__631__1_2_p_0(
#line 631 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTag_23,
#line 631 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_45);

#line 627 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__627__1_2_p_0(
#line 627 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__Arity_21,
#line 627 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_39);

#line 624 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__624__1_2_p_0(
#line 624 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_17,
#line 624 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_34);

#line 622 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__622__1_2_p_0(
#line 622 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTvars_16,
#line 622 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_29);

#line 206 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__206__1_2_p_0(
#line 206 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 206 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeModuleName_15);

#line 746 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0(
#line 746 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 746 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 746 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3);

#line 746 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0(
#line 746 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 746 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2);

#line 748 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0(
#line 748 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 748 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 748 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3);

#line 748 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0(
#line 748 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 748 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2);

#line 751 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0(
#line 751 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 751 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 751 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3);

#line 751 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0(
#line 751 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 751 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2);

#line 577 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0(
#line 577 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 577 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 577 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3);

#line 577 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0(
#line 577 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 577 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2);

#line 797 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0(
#line 797 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 797 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 797 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3);

#line 797 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0(
#line 797 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 797 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2);

#line 1100 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__compute_contains_var_bit_vector_2_4_p_0(
#line 1100 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 1100 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__ArgNum_2,
#line 1100 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3,
#line 1100 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__STATE_VARIABLE_Vector_4);

#line 1087 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0_1(
#line 1087 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 1087 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1);

#line 1083 "type_ctor_info.m"
static MR_Word MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0(
#line 1083 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_3);

#line 1056 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_res_name_ordered_table_3_p_0(
#line 1056 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__MaybeResFunctor_4,
#line 1056 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_12,
#line 1056 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_13);

#line 1041 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_name_ordered_table_3_p_0(
#line 1041 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__DuFunctor_4,
#line 1041 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_10,
#line 1041 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_11);

#line 1026 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0_1(
#line 1026 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 1002 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(
#line 1002 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__DuFunctor_4,
#line 1002 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_0_18,
#line 1002 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_19);

#line 982 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__first_matching_type_class_info_6_p_0(
#line 982 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 982 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Tvar_2,
#line 982 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__MatchingConstraint_3,
#line 982 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_N_0_4,
#line 982 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__STATE_VARIABLE_N_5,
#line 982 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__TypeInfoIndex_6);

#line 967 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__find_type_info_index_6_p_0(
#line 967 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_7,
#line 967 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ClassTable_8,
#line 967 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__StartSlot_9,
#line 967 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Tvar_10,
#line 967 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_0_22,
#line 967 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_23);

#line 962 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_5(
#line 962 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 962 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 962 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2);

#line 961 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_4(
#line 961 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 961 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1);

#line 959 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_3(
#line 959 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 959 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 959 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 959 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3);

#line 952 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_2(
#line 952 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 952 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 952 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 952 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
#line 952 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
#line 952 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5);

#line 944 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_1(
#line 944 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 944 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 944 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2);

#line 940 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0(
#line 940 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTvars_5,
#line 940 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_6,
#line 940 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ClassTable_7,
#line 940 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ExistInfo_8);

#line 903 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_du_arg_info_4_p_0(
#line 903 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NumUnivTvars_5,
#line 903 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTvars_6,
#line 903 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConstructorArg_7,
#line 903 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ArgInfo_8);

#line 854 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__get_maybe_reserved_rep_2_p_0(
#line 854 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTag_3,
#line 854 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ConsRep_4);

#line 847 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_4(
#line 847 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 846 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_3(
#line 846 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 845 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_2(
#line 845 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 827 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_1(
#line 827 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 827 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 827 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2);

#line 813 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(
#line 813 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
#line 813 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 813 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_3,
#line 813 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_4,
#line 813 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_5,
#line 813 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_6,
#line 813 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__7_7);

#line 791 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_7(
#line 791 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 791 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 791 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 791 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3);

#line 789 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_6(
#line 789 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 783 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_5(
#line 783 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 783 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 783 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 783 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3);

#line 781 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_4(
#line 781 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 776 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_3(
#line 776 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 776 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 776 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 776 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3);

#line 775 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_2(
#line 775 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 775 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 775 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2);

#line 774 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_1(
#line 774 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 774 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 774 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2);

#line 766 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0(
#line 766 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_9,
#line 766 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_10,
#line 766 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_11,
#line 766 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_12,
#line 766 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_13,
#line 766 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
#line 766 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_15,
#line 766 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_16);

#line 758 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_reserved_functor_1_f_0(
#line 758 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 758 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ResFunctor_3);

#line 753 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_du_functor_1_f_0(
#line 753 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 753 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__DuFunctor_3);

#line 733 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_maps_5_p_0(
#line 733 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ForeignEnumFunctor_6,
#line 733 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_0_12,
#line 733 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_13,
#line 733 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_14,
#line 733 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_15);

#line 700 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_4(
#line 700 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 694 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_3(
#line 694 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 691 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_2(
#line 691 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 689 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_1(
#line 689 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 681 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(
#line 681 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
#line 681 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Lang_2,
#line 681 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
#line 681 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_4,
#line 681 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_5,
#line 681 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__6_6);

#line 1087 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_2(
#line 1087 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 1087 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1);

#line 667 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_1(
#line 667 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 667 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 667 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 667 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
#line 667 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
#line 667 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5);

#line 651 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0(
#line 651 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_8,
#line 651 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Lang_9,
#line 651 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_10,
#line 651 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_11,
#line 651 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReserveTag_12,
#line 651 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_13,
#line 651 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_14);

#line 638 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_enum_maps_5_p_0(
#line 638 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EnumFunctor_6,
#line 638 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_0_11,
#line 638 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_12,
#line 638 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_13,
#line 638 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_14);

#line 631 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_4(
#line 631 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 627 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_3(
#line 627 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 624 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_2(
#line 624 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 622 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_1(
#line 622 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 615 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0(
#line 615 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
#line 615 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 615 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_3,
#line 615 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_4,
#line 615 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__5_5);

#line 1087 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_2(
#line 1087 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 1087 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1);

#line 596 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_1(
#line 596 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 596 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 596 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 596 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
#line 596 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
#line 596 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5);

#line 581 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(
#line 581 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_7,
#line 581 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_8,
#line 581 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_9,
#line 581 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReserveTag_10,
#line 581 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_11,
#line 581 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_12);

#line 561 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_notag_details_6_p_0(
#line 561 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_7,
#line 561 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__SymName_8,
#line 561 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ArgType_9,
#line 561 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__MaybeArgName_10,
#line 561 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_11,
#line 561 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_12);

#line 455 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__impl_type_ctor_4_p_0(
#line 455 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__1_1,
#line 455 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__2_2,
#line 455 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__3_3,
#line 455 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4);

#line 430 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__builtin_type_ctor_4_p_0(
#line 430 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__1_1,
#line 430 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__2_2,
#line 430 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__3_3,
#line 430 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4);

#line 294 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_info_3_p_0(
#line 294 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtorGenInfo_4,
#line 294 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_5,
#line 294 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__RttiData_6);

#line 280 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_infos_6_p_0(
#line 280 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 280 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 280 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0_3,
#line 280 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_4,
#line 280 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Static_0_5,
#line 280 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_Static_6);

#line 230 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_info_7_p_0(
#line 230 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_8,
#line 230 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_9,
#line 230 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleName_10,
#line 230 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__TypeName_11,
#line 230 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_12,
#line 230 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeDefn_13,
#line 230 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__TypeCtorGenInfo_14);

#line 206 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0_1(
#line 206 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 195 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(
#line 195 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 195 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 195 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
#line 195 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4);

#line 124 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(
#line 124 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_1,
#line 124 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleName_2,
#line 124 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
#line 124 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4);


static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_1[10][2];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_2[32][3];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_3[15][5];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_4[3][1];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_5[3][8];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_6[4][6];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_7[1][7];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_8[1][9];




static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[13]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[17]))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_2[32][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[8]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_1[0])),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[12])),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[15]))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[16]))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[16]))
  },
  /* row 19 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[0])),
    ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[1])),
    ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[1])),
    ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[1])),
    ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[7])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[8])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[0])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[1])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[2])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[12])),
    ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_5[2])),
    ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[13])),
    ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[1])),
    ((MR_Box) (backend_libs__type_ctor_info__make_functor_number_map_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_3[15][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uses_reserved_address_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uses_reserved_address_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_arg_info_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__type_ctor_info__maybe__pti_maybe_1__plain_backend_libs__rtti__type_ctor_info_exist_info_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__maybe__pti_maybe_1__plain_backend_libs__rtti__type_ctor_info_exist_info_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_4[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_1[9]))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_5[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_6[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0))
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
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1746 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0
  }
};

#line 1755 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0
  }
};

#line 1764 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1773 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1781 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1789 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1797 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0
  }
};

#line 1806 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0
  }
};

#line 1815 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0
  }
};

#line 1824 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

#line 1833 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

#line 1842 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

#line 1851 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

#line 1860 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0
  }
};

#line 1868 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__maybe__pti_maybe_1__plain_backend_libs__rtti__type_ctor_info_exist_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_info_0
  }
};

#line 1876 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1884 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1892 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0
  }
};

#line 1901 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

#line 1910 "backend_libs.type_ctor_info.c"
static const MR_PseudoTypeInfo backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0
};

#line 1915 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDesc backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_0 = {
  (MR_String) "reserved_rep",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_0,
  NULL,
  NULL,
  NULL
};

#line 1930 "backend_libs.type_ctor_info.c"
static const MR_PseudoTypeInfo backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_rep_0
};

#line 1935 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDesc backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_1 = {
  (MR_String) "du_rep",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_1,
  NULL,
  NULL,
  NULL
};

#line 1950 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_0[1] = {
  &backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_0
};

#line 1955 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_1[1] = {
  &backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_1
};

#line 1960 "backend_libs.type_ctor_info.c"
static const MR_DuPtagLayout backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_ptag_ordered_maybe_reserved_rep_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_1
  }
};

#line 1974 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_name_ordered_maybe_reserved_rep_0[2] = {
  &backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_1,
  &backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_0
};

#line 1980 "backend_libs.type_ctor_info.c"
static const MR_Integer backend_libs__type_ctor_info__backend_libs__type_ctor_info__functor_number_map_maybe_reserved_rep_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1986 "backend_libs.type_ctor_info.c"
const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_maybe_reserved_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "maybe_reserved_rep",
  {
    backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_name_ordered_maybe_reserved_rep_0
  },
  {
    backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_ptag_ordered_maybe_reserved_rep_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__type_ctor_info__backend_libs__type_ctor_info__functor_number_map_maybe_reserved_rep_0
};

#line 2007 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2016 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

#line 2025 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__type_ctor_info__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

#line 2033 "backend_libs.type_ctor_info.c"
const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_name_sort_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____name_sort_info_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "name_sort_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2054 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_reserved_address_0backend_libs__rtti__type_ctor_info_rtti_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0,
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0
  }
};

#line 2063 "backend_libs.type_ctor_info.c"
const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_reserved_addr_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "reserved_addr_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_reserved_address_0backend_libs__rtti__type_ctor_info_rtti_data_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2084 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

#line 2093 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0,
    (MR_TypeInfo) &backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

#line 2102 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

#line 2111 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

#line 2119 "backend_libs.type_ctor_info.c"
const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_tag_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____tag_list_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____tag_list_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "tag_list",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2140 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

#line 2149 "backend_libs.type_ctor_info.c"
const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_tag_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____tag_map_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____tag_map_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "tag_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2170 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0_10001(
#line 2173 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 2175 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2)
#line 2177 "backend_libs.type_ctor_info.c"
{
#line 2179 "backend_libs.type_ctor_info.c"
  {
#line 2181 "backend_libs.type_ctor_info.c"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 2184 "backend_libs.type_ctor_info.c"
    {
#line 2186 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2));
    }
#line 2189 "backend_libs.type_ctor_info.c"
    return backend_libs__type_ctor_info__succeeded;
#line 2191 "backend_libs.type_ctor_info.c"
  }
#line 2193 "backend_libs.type_ctor_info.c"
}

#line 2196 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0_10001(
#line 2199 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 2201 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 2203 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3)
#line 2205 "backend_libs.type_ctor_info.c"
{
#line 2207 "backend_libs.type_ctor_info.c"
  {
#line 2209 "backend_libs.type_ctor_info.c"
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__1_1;

#line 2212 "backend_libs.type_ctor_info.c"
    {
#line 2214 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0(&backend_libs__type_ctor_info__conv0_HeadVar__1_1, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3));
    }
#line 2217 "backend_libs.type_ctor_info.c"
    *backend_libs__type_ctor_info__wrapper_arg_1 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__1_1));
#line 2219 "backend_libs.type_ctor_info.c"
  }
#line 2221 "backend_libs.type_ctor_info.c"
}

#line 2224 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001(
#line 2227 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 2229 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2)
#line 2231 "backend_libs.type_ctor_info.c"
{
#line 2233 "backend_libs.type_ctor_info.c"
  {
#line 2235 "backend_libs.type_ctor_info.c"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 2238 "backend_libs.type_ctor_info.c"
    {
#line 2240 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info____Unify____name_sort_info_0_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2));
    }
#line 2243 "backend_libs.type_ctor_info.c"
    return backend_libs__type_ctor_info__succeeded;
#line 2245 "backend_libs.type_ctor_info.c"
  }
#line 2247 "backend_libs.type_ctor_info.c"
}

#line 2250 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0_10001(
#line 2253 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 2255 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 2257 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3)
#line 2259 "backend_libs.type_ctor_info.c"
{
#line 2261 "backend_libs.type_ctor_info.c"
  {
#line 2263 "backend_libs.type_ctor_info.c"
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__1_1;

#line 2266 "backend_libs.type_ctor_info.c"
    {
#line 2268 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info____Compare____name_sort_info_0_0(&backend_libs__type_ctor_info__conv0_HeadVar__1_1, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3));
    }
#line 2271 "backend_libs.type_ctor_info.c"
    *backend_libs__type_ctor_info__wrapper_arg_1 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__1_1));
#line 2273 "backend_libs.type_ctor_info.c"
  }
#line 2275 "backend_libs.type_ctor_info.c"
}

#line 2278 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0_10001(
#line 2281 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 2283 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2)
#line 2285 "backend_libs.type_ctor_info.c"
{
#line 2287 "backend_libs.type_ctor_info.c"
  {
#line 2289 "backend_libs.type_ctor_info.c"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 2292 "backend_libs.type_ctor_info.c"
    {
#line 2294 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2));
    }
#line 2297 "backend_libs.type_ctor_info.c"
    return backend_libs__type_ctor_info__succeeded;
#line 2299 "backend_libs.type_ctor_info.c"
  }
#line 2301 "backend_libs.type_ctor_info.c"
}

#line 2304 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0_10001(
#line 2307 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 2309 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 2311 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3)
#line 2313 "backend_libs.type_ctor_info.c"
{
#line 2315 "backend_libs.type_ctor_info.c"
  {
#line 2317 "backend_libs.type_ctor_info.c"
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__1_1;

#line 2320 "backend_libs.type_ctor_info.c"
    {
#line 2322 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0(&backend_libs__type_ctor_info__conv0_HeadVar__1_1, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3));
    }
#line 2325 "backend_libs.type_ctor_info.c"
    *backend_libs__type_ctor_info__wrapper_arg_1 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__1_1));
#line 2327 "backend_libs.type_ctor_info.c"
  }
#line 2329 "backend_libs.type_ctor_info.c"
}

#line 2332 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0_10001(
#line 2335 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 2337 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2)
#line 2339 "backend_libs.type_ctor_info.c"
{
#line 2341 "backend_libs.type_ctor_info.c"
  {
#line 2343 "backend_libs.type_ctor_info.c"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 2346 "backend_libs.type_ctor_info.c"
    {
#line 2348 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info____Unify____tag_list_0_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2));
    }
#line 2351 "backend_libs.type_ctor_info.c"
    return backend_libs__type_ctor_info__succeeded;
#line 2353 "backend_libs.type_ctor_info.c"
  }
#line 2355 "backend_libs.type_ctor_info.c"
}

#line 2358 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0_10001(
#line 2361 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 2363 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 2365 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3)
#line 2367 "backend_libs.type_ctor_info.c"
{
#line 2369 "backend_libs.type_ctor_info.c"
  {
#line 2371 "backend_libs.type_ctor_info.c"
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__1_1;

#line 2374 "backend_libs.type_ctor_info.c"
    {
#line 2376 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info____Compare____tag_list_0_0(&backend_libs__type_ctor_info__conv0_HeadVar__1_1, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3));
    }
#line 2379 "backend_libs.type_ctor_info.c"
    *backend_libs__type_ctor_info__wrapper_arg_1 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__1_1));
#line 2381 "backend_libs.type_ctor_info.c"
  }
#line 2383 "backend_libs.type_ctor_info.c"
}

#line 2386 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0_10001(
#line 2389 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 2391 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2)
#line 2393 "backend_libs.type_ctor_info.c"
{
#line 2395 "backend_libs.type_ctor_info.c"
  {
#line 2397 "backend_libs.type_ctor_info.c"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 2400 "backend_libs.type_ctor_info.c"
    {
#line 2402 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info____Unify____tag_map_0_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2));
    }
#line 2405 "backend_libs.type_ctor_info.c"
    return backend_libs__type_ctor_info__succeeded;
#line 2407 "backend_libs.type_ctor_info.c"
  }
#line 2409 "backend_libs.type_ctor_info.c"
}

#line 2412 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0_10001(
#line 2415 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 2417 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 2419 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3)
#line 2421 "backend_libs.type_ctor_info.c"
{
#line 2423 "backend_libs.type_ctor_info.c"
  {
#line 2425 "backend_libs.type_ctor_info.c"
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__1_1;

#line 2428 "backend_libs.type_ctor_info.c"
    {
#line 2430 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info____Compare____tag_map_0_0(&backend_libs__type_ctor_info__conv0_HeadVar__1_1, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3));
    }
#line 2433 "backend_libs.type_ctor_info.c"
    *backend_libs__type_ctor_info__wrapper_arg_1 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__1_1));
#line 2435 "backend_libs.type_ctor_info.c"
  }
#line 2437 "backend_libs.type_ctor_info.c"
}

#line 1087 "type_ctor_info.m"
static MR_Word MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1087__1_1_f_0(
#line 1087 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_10)
#line 1087 "type_ctor_info.m"
{
#line 1087 "type_ctor_info.m"
  {
#line 1087 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 1087 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__HeadVar__2_11;
#line 1087 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_10, (MR_Integer) 2)));
#line 1087 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_13_13;
#line 1087 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_10, (MR_Integer) 3)));
#line 1088 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_10, (MR_Integer) 0)));
#line 1088 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_10, (MR_Integer) 1)));
#line 1088 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_10, (MR_Integer) 4)));

#line 1088 "type_ctor_info.m"
    {
#line 1088 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_13_13 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, backend_libs__type_ctor_info__V_24_24);
    }
#line 1087 "type_ctor_info.m"
    {
#line 1087 "type_ctor_info.m"
      backend_libs__type_ctor_info__HeadVar__2_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__2_11, 0) = ((MR_Box) (backend_libs__type_ctor_info__V_12_12));
#line 1087 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__2_11, 1) = ((MR_Box) (backend_libs__type_ctor_info__V_13_13));
#line 1087 "type_ctor_info.m"
    }
#line 1087 "type_ctor_info.m"
    return backend_libs__type_ctor_info__HeadVar__2_11;
#line 1087 "type_ctor_info.m"
  }
#line 1087 "type_ctor_info.m"
}

#line 1026 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__1026__1_2_p_0(
#line 1026 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__SectagLocn_9,
#line 1026 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Locn0_12)
#line 1026 "type_ctor_info.m"
{
#line 1026 "type_ctor_info.m"
  {
#line 1026 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__SectagLocn_9 == backend_libs__type_ctor_info__Locn0_12);

#line 1026 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 1026 "type_ctor_info.m"
  }
#line 1026 "type_ctor_info.m"
}

#line 962 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__962__1_3_p_0(
#line 962 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__LocnMap_28,
#line 962 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_46,
#line 962 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__3_47)
#line 962 "type_ctor_info.m"
{
#line 962 "type_ctor_info.m"
  {
#line 962 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 963 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv0_HeadVar__3_47;

#line 963 "type_ctor_info.m"
    {
#line 963 "type_ctor_info.m"
      mercury__map__lookup_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, backend_libs__type_ctor_info__LocnMap_28, ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_46)), &backend_libs__type_ctor_info__conv0_HeadVar__3_47);
    }
#line 963 "type_ctor_info.m"
    *backend_libs__type_ctor_info__HeadVar__3_47 = ((MR_Word) backend_libs__type_ctor_info__conv0_HeadVar__3_47);
#line 962 "type_ctor_info.m"
  }
#line 962 "type_ctor_info.m"
}

#line 952 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__952__1_5_p_0(
#line 952 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_37,
#line 952 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_38,
#line 952 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__HeadVar__3_39,
#line 952 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__4_40,
#line 952 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__5_41)
#line 952 "type_ctor_info.m"
{
#line 952 "type_ctor_info.m"
  {
#line 952 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 952 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Locn_23;

#line 953 "type_ctor_info.m"
    {
#line 953 "type_ctor_info.m"
      backend_libs__type_ctor_info__Locn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 953 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Locn_23, 0) = ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_38));
#line 953 "type_ctor_info.m"
    }
#line 954 "type_ctor_info.m"
    {
#line 954 "type_ctor_info.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, ((MR_Box) (backend_libs__type_ctor_info__HeadVar__1_37)), ((MR_Box) (backend_libs__type_ctor_info__Locn_23)), backend_libs__type_ctor_info__HeadVar__4_40, backend_libs__type_ctor_info__HeadVar__5_41);
    }
#line 955 "type_ctor_info.m"
    *backend_libs__type_ctor_info__HeadVar__3_39 = (backend_libs__type_ctor_info__HeadVar__2_38 + (MR_Integer) 1);
#line 952 "type_ctor_info.m"
  }
#line 952 "type_ctor_info.m"
}

#line 944 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__944__1_2_p_0(
#line 944 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_33,
#line 944 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__2_34)
#line 944 "type_ctor_info.m"
{
#line 944 "type_ctor_info.m"
  {
#line 944 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 944 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_33, (MR_Integer) 0)));

#line 944 "type_ctor_info.m"
    *backend_libs__type_ctor_info__HeadVar__2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_33, (MR_Integer) 1)));
#line 944 "type_ctor_info.m"
  }
#line 944 "type_ctor_info.m"
}

#line 847 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__847__1_2_p_0(
#line 847 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__MaybeExistInfo_33,
#line 847 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_58)
#line 847 "type_ctor_info.m"
{
#line 847 "type_ctor_info.m"
  {
#line 847 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 847 "type_ctor_info.m"
    {
#line 847 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[4], ((MR_Box) (backend_libs__type_ctor_info__MaybeExistInfo_33)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_58)));
    }
#line 847 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 847 "type_ctor_info.m"
  }
#line 847 "type_ctor_info.m"
}

#line 846 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__846__1_2_p_0(
#line 846 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ArgInfos_32,
#line 846 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_53)
#line 846 "type_ctor_info.m"
{
#line 846 "type_ctor_info.m"
  {
#line 846 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 846 "type_ctor_info.m"
    {
#line 846 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[3], ((MR_Box) (backend_libs__type_ctor_info__ArgInfos_32)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_53)));
    }
#line 846 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 846 "type_ctor_info.m"
  }
#line 846 "type_ctor_info.m"
}

#line 845 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__845__1_2_p_0(
#line 845 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__Arity_27,
#line 845 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_48)
#line 845 "type_ctor_info.m"
{
#line 845 "type_ctor_info.m"
  {
#line 845 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__Arity_27 == backend_libs__type_ctor_info__HeadVar__2_48);

#line 845 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 845 "type_ctor_info.m"
  }
#line 845 "type_ctor_info.m"
}

#line 789 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__789__1_2_p_0(
#line 789 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
#line 789 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_35)
#line 789 "type_ctor_info.m"
{
#line 789 "type_ctor_info.m"
  {
#line 789 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__ReservedAddr_14 == backend_libs__type_ctor_info__HeadVar__2_35);

#line 789 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 789 "type_ctor_info.m"
  }
#line 789 "type_ctor_info.m"
}

#line 781 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__781__1_2_p_0(
#line 781 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
#line 781 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_42)
#line 781 "type_ctor_info.m"
{
#line 781 "type_ctor_info.m"
  {
#line 781 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__ReservedAddr_14 == backend_libs__type_ctor_info__HeadVar__2_42);

#line 781 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 781 "type_ctor_info.m"
  }
#line 781 "type_ctor_info.m"
}

#line 700 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__700__1_2_p_0(
#line 700 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Lang_2,
#line 700 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ForeignTagLang_27)
#line 700 "type_ctor_info.m"
{
#line 700 "type_ctor_info.m"
  {
#line 700 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__Lang_2 == backend_libs__type_ctor_info__ForeignTagLang_27);

#line 700 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 700 "type_ctor_info.m"
  }
#line 700 "type_ctor_info.m"
}

#line 694 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__694__1_2_p_0(
#line 694 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__Arity_24,
#line 694 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_76)
#line 694 "type_ctor_info.m"
{
#line 694 "type_ctor_info.m"
  {
#line 694 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__Arity_24 == backend_libs__type_ctor_info__HeadVar__2_76);

#line 694 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 694 "type_ctor_info.m"
  }
#line 694 "type_ctor_info.m"
}

#line 691 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__691__1_2_p_0(
#line 691 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_20,
#line 691 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_71)
#line 691 "type_ctor_info.m"
{
#line 691 "type_ctor_info.m"
  {
#line 691 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 691 "type_ctor_info.m"
    {
#line 691 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[2], ((MR_Box) (backend_libs__type_ctor_info__Constraints_20)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_71)));
    }
#line 691 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 691 "type_ctor_info.m"
  }
#line 691 "type_ctor_info.m"
}

#line 689 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__689__1_2_p_0(
#line 689 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTvars_19,
#line 689 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_66)
#line 689 "type_ctor_info.m"
{
#line 689 "type_ctor_info.m"
  {
#line 689 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 689 "type_ctor_info.m"
    {
#line 689 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[1], ((MR_Box) (backend_libs__type_ctor_info__ExistTvars_19)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_66)));
    }
#line 689 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 689 "type_ctor_info.m"
  }
#line 689 "type_ctor_info.m"
}

#line 631 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__631__1_2_p_0(
#line 631 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTag_23,
#line 631 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_45)
#line 631 "type_ctor_info.m"
{
#line 631 "type_ctor_info.m"
  {
#line 631 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 631 "type_ctor_info.m"
    {
#line 631 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = hlds__hlds_data____Unify____cons_tag_0_0(backend_libs__type_ctor_info__ConsTag_23, backend_libs__type_ctor_info__HeadVar__2_45);
    }
#line 631 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 631 "type_ctor_info.m"
  }
#line 631 "type_ctor_info.m"
}

#line 627 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__627__1_2_p_0(
#line 627 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__Arity_21,
#line 627 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_39)
#line 627 "type_ctor_info.m"
{
#line 627 "type_ctor_info.m"
  {
#line 627 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__Arity_21 == backend_libs__type_ctor_info__HeadVar__2_39);

#line 627 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 627 "type_ctor_info.m"
  }
#line 627 "type_ctor_info.m"
}

#line 624 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__624__1_2_p_0(
#line 624 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_17,
#line 624 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_34)
#line 624 "type_ctor_info.m"
{
#line 624 "type_ctor_info.m"
  {
#line 624 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 624 "type_ctor_info.m"
    {
#line 624 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[2], ((MR_Box) (backend_libs__type_ctor_info__Constraints_17)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_34)));
    }
#line 624 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 624 "type_ctor_info.m"
  }
#line 624 "type_ctor_info.m"
}

#line 622 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__622__1_2_p_0(
#line 622 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTvars_16,
#line 622 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_29)
#line 622 "type_ctor_info.m"
{
#line 622 "type_ctor_info.m"
  {
#line 622 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 622 "type_ctor_info.m"
    {
#line 622 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[1], ((MR_Box) (backend_libs__type_ctor_info__ExistTvars_16)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_29)));
    }
#line 622 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 622 "type_ctor_info.m"
  }
#line 622 "type_ctor_info.m"
}

#line 206 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__206__1_2_p_0(
#line 206 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 206 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeModuleName_15)
#line 206 "type_ctor_info.m"
{
#line 206 "type_ctor_info.m"
  {
#line 206 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 206 "type_ctor_info.m"
    {
#line 206 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(backend_libs__type_ctor_info__TypeModuleName_15, backend_libs__type_ctor_info__HeadVar__2_2);
    }
#line 206 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 206 "type_ctor_info.m"
  }
#line 206 "type_ctor_info.m"
}

#line 746 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0(
#line 746 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 746 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 746 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3)
#line 746 "type_ctor_info.m"
{
#line 746 "type_ctor_info.m"
  {
#line 746 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 746 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_4 = backend_libs__type_ctor_info__HeadVar__2_2;
#line 746 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_5 = backend_libs__type_ctor_info__HeadVar__3_3;

#line 746 "type_ctor_info.m"
    {
#line 746 "type_ctor_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[18], backend_libs__type_ctor_info__HeadVar__1_1, ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_5)));
#line 746 "type_ctor_info.m"
      return;
    }
#line 746 "type_ctor_info.m"
  }
#line 746 "type_ctor_info.m"
}

#line 746 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0(
#line 746 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 746 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2)
#line 746 "type_ctor_info.m"
{
#line 746 "type_ctor_info.m"
  {
#line 746 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 746 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_3 = backend_libs__type_ctor_info__HeadVar__1_1;
#line 746 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_4 = backend_libs__type_ctor_info__HeadVar__2_2;

#line 746 "type_ctor_info.m"
    {
#line 746 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[18], ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_4)));
    }
#line 746 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 746 "type_ctor_info.m"
  }
#line 746 "type_ctor_info.m"
}

#line 748 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0(
#line 748 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 748 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 748 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3)
#line 748 "type_ctor_info.m"
{
#line 748 "type_ctor_info.m"
  {
#line 748 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 748 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_4 = backend_libs__type_ctor_info__HeadVar__2_2;
#line 748 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_5 = backend_libs__type_ctor_info__HeadVar__3_3;

#line 748 "type_ctor_info.m"
    {
#line 748 "type_ctor_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[7], backend_libs__type_ctor_info__HeadVar__1_1, ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_5)));
#line 748 "type_ctor_info.m"
      return;
    }
#line 748 "type_ctor_info.m"
  }
#line 748 "type_ctor_info.m"
}

#line 748 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0(
#line 748 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 748 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2)
#line 748 "type_ctor_info.m"
{
#line 748 "type_ctor_info.m"
  {
#line 748 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 748 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_3 = backend_libs__type_ctor_info__HeadVar__1_1;
#line 748 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_4 = backend_libs__type_ctor_info__HeadVar__2_2;

#line 748 "type_ctor_info.m"
    {
#line 748 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[7], ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_4)));
    }
#line 748 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 748 "type_ctor_info.m"
  }
#line 748 "type_ctor_info.m"
}

#line 751 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0(
#line 751 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 751 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 751 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3)
#line 751 "type_ctor_info.m"
{
#line 751 "type_ctor_info.m"
  {
#line 751 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 751 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_4 = backend_libs__type_ctor_info__HeadVar__2_2;
#line 751 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_5 = backend_libs__type_ctor_info__HeadVar__3_3;

#line 751 "type_ctor_info.m"
    {
#line 751 "type_ctor_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[14], backend_libs__type_ctor_info__HeadVar__1_1, ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_5)));
#line 751 "type_ctor_info.m"
      return;
    }
#line 751 "type_ctor_info.m"
  }
#line 751 "type_ctor_info.m"
}

#line 751 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0(
#line 751 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 751 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2)
#line 751 "type_ctor_info.m"
{
#line 751 "type_ctor_info.m"
  {
#line 751 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 751 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_3 = backend_libs__type_ctor_info__HeadVar__1_1;
#line 751 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_4 = backend_libs__type_ctor_info__HeadVar__2_2;

#line 751 "type_ctor_info.m"
    {
#line 751 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[14], ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_4)));
    }
#line 751 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 751 "type_ctor_info.m"
  }
#line 751 "type_ctor_info.m"
}

#line 577 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0(
#line 577 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 577 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 577 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3)
#line 577 "type_ctor_info.m"
{
#line 577 "type_ctor_info.m"
  {
#line 577 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 577 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_4 = backend_libs__type_ctor_info__HeadVar__2_2;
#line 577 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_5 = backend_libs__type_ctor_info__HeadVar__3_3;

#line 577 "type_ctor_info.m"
    {
#line 577 "type_ctor_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[6], backend_libs__type_ctor_info__HeadVar__1_1, ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_5)));
#line 577 "type_ctor_info.m"
      return;
    }
#line 577 "type_ctor_info.m"
  }
#line 577 "type_ctor_info.m"
}

#line 577 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0(
#line 577 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 577 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2)
#line 577 "type_ctor_info.m"
{
#line 577 "type_ctor_info.m"
  {
#line 577 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 577 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_3 = backend_libs__type_ctor_info__HeadVar__1_1;
#line 577 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_4 = backend_libs__type_ctor_info__HeadVar__2_2;

#line 577 "type_ctor_info.m"
    {
#line 577 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[6], ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_4)));
    }
#line 577 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 577 "type_ctor_info.m"
  }
#line 577 "type_ctor_info.m"
}

#line 797 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0(
#line 797 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 797 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 797 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3)
#line 797 "type_ctor_info.m"
{
#line 797 "type_ctor_info.m"
  {
#line 797 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 797 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__CastX_12 = (MR_Integer) backend_libs__type_ctor_info__HeadVar__2_2;
#line 797 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__CastY_13 = (MR_Integer) backend_libs__type_ctor_info__HeadVar__3_3;

#line 797 "type_ctor_info.m"
    backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__CastX_12 == backend_libs__type_ctor_info__CastY_13);
#line 797 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 3210 "backend_libs.type_ctor_info.c"
      *backend_libs__type_ctor_info__HeadVar__1_1 = (MR_Integer) 0;
#line 797 "type_ctor_info.m"
    else
#line 797 "type_ctor_info.m"
      if (((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 797 "type_ctor_info.m"
        {
#line 797 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));

#line 797 "type_ctor_info.m"
          if (((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 797 "type_ctor_info.m"
            {
#line 797 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 0)));

#line 797 "type_ctor_info.m"
              {
#line 797 "type_ctor_info.m"
                backend_libs__rtti____Compare____du_rep_0_0(backend_libs__type_ctor_info__HeadVar__1_1, backend_libs__type_ctor_info__V_16_16, backend_libs__type_ctor_info__V_11_11);
#line 797 "type_ctor_info.m"
                return;
              }
#line 797 "type_ctor_info.m"
            }
#line 797 "type_ctor_info.m"
          else
#line 3239 "backend_libs.type_ctor_info.c"
            *backend_libs__type_ctor_info__HeadVar__1_1 = (MR_Integer) 2;
#line 797 "type_ctor_info.m"
        }
#line 797 "type_ctor_info.m"
      else
#line 797 "type_ctor_info.m"
        {
#line 797 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));

#line 797 "type_ctor_info.m"
          if (((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3252 "backend_libs.type_ctor_info.c"
            *backend_libs__type_ctor_info__HeadVar__1_1 = (MR_Integer) 1;
#line 797 "type_ctor_info.m"
          else
#line 797 "type_ctor_info.m"
            {
#line 797 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 0)));

#line 797 "type_ctor_info.m"
              {
#line 797 "type_ctor_info.m"
                hlds__hlds_data____Compare____reserved_address_0_0(backend_libs__type_ctor_info__HeadVar__1_1, backend_libs__type_ctor_info__V_17_17, backend_libs__type_ctor_info__V_5_5);
#line 797 "type_ctor_info.m"
                return;
              }
#line 797 "type_ctor_info.m"
            }
#line 797 "type_ctor_info.m"
        }
#line 797 "type_ctor_info.m"
  }
#line 797 "type_ctor_info.m"
}

#line 797 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0(
#line 797 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 797 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2)
#line 797 "type_ctor_info.m"
{
#line 797 "type_ctor_info.m"
  {
#line 797 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 797 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__CastX_7 = (MR_Integer) backend_libs__type_ctor_info__HeadVar__1_1;
#line 797 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__CastY_8 = (MR_Integer) backend_libs__type_ctor_info__HeadVar__2_2;

#line 797 "type_ctor_info.m"
    backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__CastX_7 == backend_libs__type_ctor_info__CastY_8);
#line 797 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 797 "type_ctor_info.m"
      backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 797 "type_ctor_info.m"
    else
#line 797 "type_ctor_info.m"
      if (((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 797 "type_ctor_info.m"
        {
#line 797 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 0)));
#line 797 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_6_6;

#line 797 "type_ctor_info.m"
          backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 797 "type_ctor_info.m"
          if (backend_libs__type_ctor_info__succeeded)
#line 797 "type_ctor_info.m"
            {
#line 797 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));
#line 3320 "backend_libs.type_ctor_info.c"
              {
#line 3322 "backend_libs.type_ctor_info.c"
                return backend_libs__type_ctor_info__succeeded = backend_libs__rtti____Unify____du_rep_0_0(backend_libs__type_ctor_info__V_5_5, backend_libs__type_ctor_info__V_6_6);
              }
#line 797 "type_ctor_info.m"
            }
#line 797 "type_ctor_info.m"
        }
#line 797 "type_ctor_info.m"
      else
#line 797 "type_ctor_info.m"
        {
#line 797 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 0)));
#line 797 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_4_4;

#line 797 "type_ctor_info.m"
          backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 797 "type_ctor_info.m"
          if (backend_libs__type_ctor_info__succeeded)
#line 797 "type_ctor_info.m"
            {
#line 797 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));
#line 3346 "backend_libs.type_ctor_info.c"
              {
#line 3348 "backend_libs.type_ctor_info.c"
                return backend_libs__type_ctor_info__succeeded = hlds__hlds_data____Unify____reserved_address_0_0(backend_libs__type_ctor_info__V_3_3, backend_libs__type_ctor_info__V_4_4);
              }
#line 797 "type_ctor_info.m"
            }
#line 797 "type_ctor_info.m"
        }
#line 797 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 797 "type_ctor_info.m"
  }
#line 797 "type_ctor_info.m"
}

#line 1100 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__compute_contains_var_bit_vector_2_4_p_0(
#line 1100 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 1100 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__ArgNum_2,
#line 1100 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3,
#line 1100 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__STATE_VARIABLE_Vector_4)
#line 1100 "type_ctor_info.m"
{
#line 1104 "type_ctor_info.m"
  while (MR_TRUE)
#line 1104 "type_ctor_info.m"
    {
#line 1104 "type_ctor_info.m"
      /* tailcall optimized into a loop */
#line 1104 "type_ctor_info.m"
      {
#line 1104 "type_ctor_info.m"
        MR_bool backend_libs__type_ctor_info__succeeded;

#line 1104 "type_ctor_info.m"
        if ((backend_libs__type_ctor_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1104 "type_ctor_info.m"
          *backend_libs__type_ctor_info__STATE_VARIABLE_Vector_4 = backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3;
#line 1104 "type_ctor_info.m"
        else
#line 1105 "type_ctor_info.m"
          {
#line 1105 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__ArgType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 0)));
#line 1105 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__ArgTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 1)));
#line 1105 "type_ctor_info.m"
            MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_Vector_18_18;
#line 1105 "type_ctor_info.m"
            MR_Integer backend_libs__type_ctor_info__V_19_19;

#line 1108 "type_ctor_info.m"
            if ((backend_libs__type_ctor_info__ArgType_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1121 "type_ctor_info.m"
              {
#line 1121 "type_ctor_info.m"
                MR_Integer backend_libs__type_ctor_info__BitNum_39;
#line 1121 "type_ctor_info.m"
                MR_Integer backend_libs__type_ctor_info__V_46_46;

#line 1122 "type_ctor_info.m"
                backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__ArgNum_2 >= (MR_Integer) 15);
#line 1124 "type_ctor_info.m"
                if (backend_libs__type_ctor_info__succeeded)
#line 1123 "type_ctor_info.m"
                  backend_libs__type_ctor_info__BitNum_39 = (MR_Integer) 15;
#line 1124 "type_ctor_info.m"
                else
#line 1125 "type_ctor_info.m"
                  backend_libs__type_ctor_info__BitNum_39 = backend_libs__type_ctor_info__ArgNum_2;
#line 1127 "type_ctor_info.m"
                {
#line 1127 "type_ctor_info.m"
                  backend_libs__type_ctor_info__V_46_46 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, backend_libs__type_ctor_info__BitNum_39);
                }
#line 1127 "type_ctor_info.m"
                backend_libs__type_ctor_info__STATE_VARIABLE_Vector_18_18 = (backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3 | backend_libs__type_ctor_info__V_46_46);
#line 1121 "type_ctor_info.m"
              }
#line 1108 "type_ctor_info.m"
            else
#line 1108 "type_ctor_info.m"
              if (((MR_tag((MR_Word) backend_libs__type_ctor_info__ArgType_9)) == (MR_mktag((MR_Integer) 2))))
#line 1107 "type_ctor_info.m"
                backend_libs__type_ctor_info__STATE_VARIABLE_Vector_18_18 = backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3;
#line 1108 "type_ctor_info.m"
              else
#line 1121 "type_ctor_info.m"
                {
#line 1121 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__BitNum_26;
#line 1121 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__V_33_33;

#line 1122 "type_ctor_info.m"
                  backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__ArgNum_2 >= (MR_Integer) 15);
#line 1124 "type_ctor_info.m"
                  if (backend_libs__type_ctor_info__succeeded)
#line 1123 "type_ctor_info.m"
                    backend_libs__type_ctor_info__BitNum_26 = (MR_Integer) 15;
#line 1124 "type_ctor_info.m"
                  else
#line 1125 "type_ctor_info.m"
                    backend_libs__type_ctor_info__BitNum_26 = backend_libs__type_ctor_info__ArgNum_2;
#line 1127 "type_ctor_info.m"
                  {
#line 1127 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_33_33 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, backend_libs__type_ctor_info__BitNum_26);
                  }
#line 1127 "type_ctor_info.m"
                  backend_libs__type_ctor_info__STATE_VARIABLE_Vector_18_18 = (backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3 | backend_libs__type_ctor_info__V_33_33);
#line 1121 "type_ctor_info.m"
                }
#line 1117 "type_ctor_info.m"
            backend_libs__type_ctor_info__V_19_19 = (backend_libs__type_ctor_info__ArgNum_2 + (MR_Integer) 1);
#line 1117 "type_ctor_info.m"
            /* direct tailcall eliminated */
#line 1117 "type_ctor_info.m"
            {
#line 1117 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__HeadVar__1__tmp_copy_1 = backend_libs__type_ctor_info__ArgTypes_10;
#line 1117 "type_ctor_info.m"
              MR_Integer backend_libs__type_ctor_info__ArgNum__tmp_copy_2 = backend_libs__type_ctor_info__V_19_19;
#line 1117 "type_ctor_info.m"
              MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0__tmp_copy_3 = backend_libs__type_ctor_info__STATE_VARIABLE_Vector_18_18;

#line 1117 "type_ctor_info.m"
              backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3 = backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0__tmp_copy_3;
#line 1117 "type_ctor_info.m"
              backend_libs__type_ctor_info__ArgNum_2 = backend_libs__type_ctor_info__ArgNum__tmp_copy_2;
#line 1117 "type_ctor_info.m"
              backend_libs__type_ctor_info__HeadVar__1_1 = backend_libs__type_ctor_info__HeadVar__1__tmp_copy_1;
#line 1117 "type_ctor_info.m"
            }
#line 1117 "type_ctor_info.m"
            continue;
#line 1105 "type_ctor_info.m"
          }
#line 1104 "type_ctor_info.m"
      }
#line 1104 "type_ctor_info.m"
      break;
#line 1104 "type_ctor_info.m"
    }
#line 1100 "type_ctor_info.m"
}

#line 1087 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0_1(
#line 1087 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 1087 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1)
#line 1087 "type_ctor_info.m"
{
#line 1087 "type_ctor_info.m"
  {
#line 1087 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__wrapper_arg_2;
#line 1087 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 1087 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__2_11;

#line 1087 "type_ctor_info.m"
    {
#line 1087 "type_ctor_info.m"
      backend_libs__type_ctor_info__conv0_HeadVar__2_11 = backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1087__1_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1));
    }
#line 1087 "type_ctor_info.m"
    backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__2_11));
#line 1087 "type_ctor_info.m"
    return backend_libs__type_ctor_info__wrapper_arg_2;
#line 1087 "type_ctor_info.m"
  }
#line 1087 "type_ctor_info.m"
}

#line 1083 "type_ctor_info.m"
static MR_Word MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0(
#line 1083 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_3)
#line 1083 "type_ctor_info.m"
{
#line 1085 "type_ctor_info.m"
  {
#line 1085 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 1085 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Map_4;
#line 1085 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 1085 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeInfo_31_31 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[11];
#line 1085 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_33_33;
#line 1085 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__CtorNames_5;
#line 1085 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__SortedNameArityMap_7;
#line 1085 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_15_15;
#line 1085 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_16_16;
#line 1085 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_18_18;
#line 1085 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_19_19;

#line 1086 "type_ctor_info.m"
    {
#line 1086 "type_ctor_info.m"
      backend_libs__type_ctor_info__CtorNames_5 = mercury__list__map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_30_30, backend_libs__type_ctor_info__TypeInfo_31_31, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[31], backend_libs__type_ctor_info__Ctors_3);
    }
#line 3568 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1091 "type_ctor_info.m"
    {
#line 1091 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_15_15 = mercury__list__sort_1_f_0(backend_libs__type_ctor_info__TypeInfo_31_31, backend_libs__type_ctor_info__CtorNames_5);
    }
#line 1092 "type_ctor_info.m"
    {
#line 1092 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_19_19 = mercury__list__length_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_30_30, backend_libs__type_ctor_info__Ctors_3);
    }
#line 1092 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_18_18 = (backend_libs__type_ctor_info__V_19_19 - (MR_Integer) 1);
#line 1091 "type_ctor_info.m"
    {
#line 1091 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_16_16 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, backend_libs__type_ctor_info__V_18_18);
    }
#line 1090 "type_ctor_info.m"
    {
#line 1090 "type_ctor_info.m"
      backend_libs__type_ctor_info__SortedNameArityMap_7 = mercury__map__from_corresponding_lists_2_f_0(backend_libs__type_ctor_info__TypeInfo_31_31, backend_libs__type_ctor_info__TypeCtorInfo_33_33, backend_libs__type_ctor_info__V_15_15, backend_libs__type_ctor_info__V_16_16);
    }
#line 1093 "type_ctor_info.m"
    {
#line 1093 "type_ctor_info.m"
      backend_libs__type_ctor_info__Map_4 = mercury__map__apply_to_list_2_f_0(backend_libs__type_ctor_info__TypeInfo_31_31, backend_libs__type_ctor_info__TypeCtorInfo_33_33, backend_libs__type_ctor_info__CtorNames_5, backend_libs__type_ctor_info__SortedNameArityMap_7);
    }
#line 1085 "type_ctor_info.m"
    return backend_libs__type_ctor_info__Map_4;
#line 1085 "type_ctor_info.m"
  }
#line 1083 "type_ctor_info.m"
}

#line 1056 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_res_name_ordered_table_3_p_0(
#line 1056 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__MaybeResFunctor_4,
#line 1056 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_12,
#line 1056 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_13)
#line 1056 "type_ctor_info.m"
{
#line 1060 "type_ctor_info.m"
  {
#line 1060 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 1060 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__Name_7;
#line 1060 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__Arity_8;
#line 1073 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__NameMap0_10;
#line 1070 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv0_NameMap0_10;

#line 1065 "type_ctor_info.m"
    if (((MR_tag((MR_Word) backend_libs__type_ctor_info__MaybeResFunctor_4)) == (MR_mktag((MR_Integer) 1))))
#line 1062 "type_ctor_info.m"
      {
#line 1062 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__DuFunctor_6 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__MaybeResFunctor_4), (MR_Integer) 1);
#line 1063 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_18_18;
#line 1063 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_19_19;
#line 1063 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_20_20;
#line 1063 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_21_21;

#line 1063 "type_ctor_info.m"
        backend_libs__type_ctor_info__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 0)));
#line 1063 "type_ctor_info.m"
        backend_libs__type_ctor_info__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 1)));
#line 1063 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 2)));
#line 1063 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 3)));
#line 1063 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 4)));
#line 1063 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 5)));
#line 1062 "type_ctor_info.m"
      }
#line 1065 "type_ctor_info.m"
    else
#line 1066 "type_ctor_info.m"
      {
#line 1066 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ResFunctor_9 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__MaybeResFunctor_4), (MR_Integer) 0);
#line 1067 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_27_27;
#line 1067 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_28_28;

#line 1067 "type_ctor_info.m"
        backend_libs__type_ctor_info__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_9, (MR_Integer) 0)));
#line 1067 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_9, (MR_Integer) 1)));
#line 1067 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_9, (MR_Integer) 2)));
#line 1068 "type_ctor_info.m"
        backend_libs__type_ctor_info__Arity_8 = (MR_Integer) 0;
#line 1066 "type_ctor_info.m"
      }
#line 1070 "type_ctor_info.m"
    {
#line 1070 "type_ctor_info.m"
      backend_libs__type_ctor_info__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[8], backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_12, ((MR_Box) (backend_libs__type_ctor_info__Name_7)), &backend_libs__type_ctor_info__conv0_NameMap0_10);
    }
#line 1070 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 1070 "type_ctor_info.m"
      {
#line 1070 "type_ctor_info.m"
        backend_libs__type_ctor_info__NameMap0_10 = ((MR_Word) backend_libs__type_ctor_info__conv0_NameMap0_10);
#line 1070 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 1070 "type_ctor_info.m"
      }
#line 1073 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 1071 "type_ctor_info.m"
      {
#line 1071 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__NameMap_11;

#line 1071 "type_ctor_info.m"
        {
#line 1071 "type_ctor_info.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, backend_libs__type_ctor_info__Arity_8, ((MR_Box) (backend_libs__type_ctor_info__MaybeResFunctor_4)), backend_libs__type_ctor_info__NameMap0_10, &backend_libs__type_ctor_info__NameMap_11);
        }
#line 1072 "type_ctor_info.m"
        {
#line 1072 "type_ctor_info.m"
          mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[8], ((MR_Box) (backend_libs__type_ctor_info__Name_7)), ((MR_Box) (backend_libs__type_ctor_info__NameMap_11)), backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_12, backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_13);
#line 1072 "type_ctor_info.m"
          return;
        }
#line 1071 "type_ctor_info.m"
      }
#line 1073 "type_ctor_info.m"
    else
#line 1074 "type_ctor_info.m"
      {
#line 1074 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__NameMap_16;

#line 1074 "type_ctor_info.m"
        {
#line 1074 "type_ctor_info.m"
          backend_libs__type_ctor_info__NameMap_16 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, ((MR_Box) (backend_libs__type_ctor_info__Arity_8)), ((MR_Box) (backend_libs__type_ctor_info__MaybeResFunctor_4)));
        }
#line 1075 "type_ctor_info.m"
        {
#line 1075 "type_ctor_info.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[8], ((MR_Box) (backend_libs__type_ctor_info__Name_7)), ((MR_Box) (backend_libs__type_ctor_info__NameMap_16)), backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_12, backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_13);
#line 1075 "type_ctor_info.m"
          return;
        }
#line 1074 "type_ctor_info.m"
      }
#line 1060 "type_ctor_info.m"
  }
#line 1056 "type_ctor_info.m"
}

#line 1041 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_name_ordered_table_3_p_0(
#line 1041 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__DuFunctor_4,
#line 1041 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_10,
#line 1041 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_11)
#line 1041 "type_ctor_info.m"
{
#line 1045 "type_ctor_info.m"
  {
#line 1045 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 1045 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 0)));
#line 1045 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 1)));
#line 1046 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 2)));
#line 1046 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 3)));
#line 1046 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 4)));
#line 1046 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 5)));
#line 1051 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__NameMap0_8;
#line 1048 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv0_NameMap0_8;

#line 1048 "type_ctor_info.m"
    {
#line 1048 "type_ctor_info.m"
      backend_libs__type_ctor_info__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[6], backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_10, ((MR_Box) (backend_libs__type_ctor_info__Name_6)), &backend_libs__type_ctor_info__conv0_NameMap0_8);
    }
#line 1048 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 1048 "type_ctor_info.m"
      {
#line 1048 "type_ctor_info.m"
        backend_libs__type_ctor_info__NameMap0_8 = ((MR_Word) backend_libs__type_ctor_info__conv0_NameMap0_8);
#line 1048 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 1048 "type_ctor_info.m"
      }
#line 1051 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 1049 "type_ctor_info.m"
      {
#line 1049 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__NameMap_9;

#line 1049 "type_ctor_info.m"
        {
#line 1049 "type_ctor_info.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, backend_libs__type_ctor_info__Arity_7, ((MR_Box) (backend_libs__type_ctor_info__DuFunctor_4)), backend_libs__type_ctor_info__NameMap0_8, &backend_libs__type_ctor_info__NameMap_9);
        }
#line 1050 "type_ctor_info.m"
        {
#line 1050 "type_ctor_info.m"
          mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[6], ((MR_Box) (backend_libs__type_ctor_info__Name_6)), ((MR_Box) (backend_libs__type_ctor_info__NameMap_9)), backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_10, backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_11);
#line 1050 "type_ctor_info.m"
          return;
        }
#line 1049 "type_ctor_info.m"
      }
#line 1051 "type_ctor_info.m"
    else
#line 1052 "type_ctor_info.m"
      {
#line 1052 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__NameMap_14;

#line 1052 "type_ctor_info.m"
        {
#line 1052 "type_ctor_info.m"
          backend_libs__type_ctor_info__NameMap_14 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, ((MR_Box) (backend_libs__type_ctor_info__Arity_7)), ((MR_Box) (backend_libs__type_ctor_info__DuFunctor_4)));
        }
#line 1053 "type_ctor_info.m"
        {
#line 1053 "type_ctor_info.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[6], ((MR_Box) (backend_libs__type_ctor_info__Name_6)), ((MR_Box) (backend_libs__type_ctor_info__NameMap_14)), backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_10, backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_11);
#line 1053 "type_ctor_info.m"
          return;
        }
#line 1052 "type_ctor_info.m"
      }
#line 1045 "type_ctor_info.m"
  }
#line 1041 "type_ctor_info.m"
}

#line 1026 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0_1(
#line 1026 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 1026 "type_ctor_info.m"
{
#line 1026 "type_ctor_info.m"
  {
#line 1026 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 1026 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 1026 "type_ctor_info.m"
    {
#line 1026 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__1026__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 1026 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 1026 "type_ctor_info.m"
  }
#line 1026 "type_ctor_info.m"
}

#line 1002 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(
#line 1002 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__DuFunctor_4,
#line 1002 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_0_18,
#line 1002 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_19)
#line 1002 "type_ctor_info.m"
{
#line 1005 "type_ctor_info.m"
  {
#line 1005 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 1005 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__DuRep_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 3)));
#line 1006 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 0)));
#line 1006 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 1)));
#line 1006 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 2)));
#line 1006 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 4)));
#line 1006 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 5)));

#line 1036 "type_ctor_info.m"
    if (((MR_tag((MR_Word) backend_libs__type_ctor_info__DuRep_6)) == (MR_mktag((MR_Integer) 1))))
#line 1037 "type_ctor_info.m"
      {
#line 1038 "type_ctor_info.m"
        {
#line 1038 "type_ctor_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_ptag_ordered_table\'/3", (MR_String) "du_hl_rep");
#line 1038 "type_ctor_info.m"
          return;
        }
#line 1037 "type_ctor_info.m"
      }
#line 1036 "type_ctor_info.m"
    else
#line 1008 "type_ctor_info.m"
      {
#line 1008 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__Ptag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuRep_6, (MR_Integer) 0)));
#line 1008 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SectagAndLocn_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuRep_6, (MR_Integer) 1)));
#line 1008 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SectagLocn_9;
#line 1008 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__Sectag_10;
#line 1031 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SectagTable0_11;
#line 1024 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv0_SectagTable0_11;

#line 1013 "type_ctor_info.m"
        if ((backend_libs__type_ctor_info__SectagAndLocn_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "type_ctor_info.m"
          {
#line 1011 "type_ctor_info.m"
            backend_libs__type_ctor_info__SectagLocn_9 = (MR_Integer) 0;
#line 1012 "type_ctor_info.m"
            backend_libs__type_ctor_info__Sectag_10 = (MR_Integer) 0;
#line 1010 "type_ctor_info.m"
          }
#line 1013 "type_ctor_info.m"
        else
#line 1013 "type_ctor_info.m"
          if ((backend_libs__type_ctor_info__SectagAndLocn_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1014 "type_ctor_info.m"
            {
#line 1015 "type_ctor_info.m"
              backend_libs__type_ctor_info__SectagLocn_9 = (MR_Integer) 1;
#line 1016 "type_ctor_info.m"
              backend_libs__type_ctor_info__Sectag_10 = (MR_Integer) 0;
#line 1014 "type_ctor_info.m"
            }
#line 1013 "type_ctor_info.m"
          else
#line 1013 "type_ctor_info.m"
            if (((MR_tag((MR_Word) backend_libs__type_ctor_info__SectagAndLocn_8)) == (MR_mktag((MR_Integer) 1))))
#line 1018 "type_ctor_info.m"
              {
#line 1018 "type_ctor_info.m"
                backend_libs__type_ctor_info__Sectag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__SectagAndLocn_8, (MR_Integer) 0)));
#line 1019 "type_ctor_info.m"
                backend_libs__type_ctor_info__SectagLocn_9 = (MR_Integer) 2;
#line 1018 "type_ctor_info.m"
              }
#line 1013 "type_ctor_info.m"
            else
#line 1021 "type_ctor_info.m"
              {
#line 1021 "type_ctor_info.m"
                backend_libs__type_ctor_info__Sectag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__SectagAndLocn_8, (MR_Integer) 0)));
#line 1022 "type_ctor_info.m"
                backend_libs__type_ctor_info__SectagLocn_9 = (MR_Integer) 3;
#line 1021 "type_ctor_info.m"
              }
#line 1024 "type_ctor_info.m"
        {
#line 1024 "type_ctor_info.m"
          backend_libs__type_ctor_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_0_18, backend_libs__type_ctor_info__Ptag_7, &backend_libs__type_ctor_info__conv0_SectagTable0_11);
        }
#line 1024 "type_ctor_info.m"
        if (backend_libs__type_ctor_info__succeeded)
#line 1024 "type_ctor_info.m"
          {
#line 1024 "type_ctor_info.m"
            backend_libs__type_ctor_info__SectagTable0_11 = ((MR_Word) backend_libs__type_ctor_info__conv0_SectagTable0_11);
#line 1024 "type_ctor_info.m"
            backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 1024 "type_ctor_info.m"
          }
#line 1031 "type_ctor_info.m"
        if (backend_libs__type_ctor_info__succeeded)
#line 1025 "type_ctor_info.m"
          {
#line 1025 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Locn0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable0_11, (MR_Integer) 0)));
#line 1025 "type_ctor_info.m"
            MR_Integer backend_libs__type_ctor_info__NumSharers0_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable0_11, (MR_Integer) 1)));
#line 1025 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__SectagMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable0_11, (MR_Integer) 2)));
#line 1025 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__SectagMap_15;
#line 1025 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__SectagTable_16;
#line 1025 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_23_23;
#line 1025 "type_ctor_info.m"
            MR_Integer backend_libs__type_ctor_info__V_27_27;

#line 1026 "type_ctor_info.m"
            {
#line 1026 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_23_23, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[14]));
#line 1026 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_23_23, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0_1));
#line 1026 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1026 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_23_23, 3) = ((MR_Box) (backend_libs__type_ctor_info__SectagLocn_9));
#line 1026 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_23_23, 4) = ((MR_Box) (backend_libs__type_ctor_info__Locn0_12));
#line 1026 "type_ctor_info.m"
            }
#line 1026 "type_ctor_info.m"
            {
#line 1026 "type_ctor_info.m"
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_23_23, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_ptag_ordered_table\'/3", (MR_String) "sectag locn disagreement");
            }
#line 1028 "type_ctor_info.m"
            {
#line 1028 "type_ctor_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, backend_libs__type_ctor_info__Sectag_10, ((MR_Box) (backend_libs__type_ctor_info__DuFunctor_4)), backend_libs__type_ctor_info__SectagMap0_14, &backend_libs__type_ctor_info__SectagMap_15);
            }
#line 1029 "type_ctor_info.m"
            backend_libs__type_ctor_info__V_27_27 = (backend_libs__type_ctor_info__NumSharers0_13 + (MR_Integer) 1);
#line 1029 "type_ctor_info.m"
            {
#line 1029 "type_ctor_info.m"
              backend_libs__type_ctor_info__SectagTable_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1029 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_16, 0) = ((MR_Box) (backend_libs__type_ctor_info__Locn0_12));
#line 1029 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_16, 1) = ((MR_Box) (backend_libs__type_ctor_info__V_27_27));
#line 1029 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_16, 2) = ((MR_Box) (backend_libs__type_ctor_info__SectagMap_15));
#line 1029 "type_ctor_info.m"
            }
#line 1030 "type_ctor_info.m"
            {
#line 1030 "type_ctor_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, backend_libs__type_ctor_info__Ptag_7, ((MR_Box) (backend_libs__type_ctor_info__SectagTable_16)), backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_0_18, backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_19);
#line 1030 "type_ctor_info.m"
              return;
            }
#line 1025 "type_ctor_info.m"
          }
#line 1031 "type_ctor_info.m"
        else
#line 1032 "type_ctor_info.m"
          {
#line 1032 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__SectagMap_32;
#line 1032 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__SectagTable_33;

#line 1032 "type_ctor_info.m"
            {
#line 1032 "type_ctor_info.m"
              backend_libs__type_ctor_info__SectagMap_32 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, ((MR_Box) (backend_libs__type_ctor_info__Sectag_10)), ((MR_Box) (backend_libs__type_ctor_info__DuFunctor_4)));
            }
#line 1033 "type_ctor_info.m"
            {
#line 1033 "type_ctor_info.m"
              backend_libs__type_ctor_info__SectagTable_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1033 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_33, 0) = ((MR_Box) (backend_libs__type_ctor_info__SectagLocn_9));
#line 1033 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_33, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1033 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_33, 2) = ((MR_Box) (backend_libs__type_ctor_info__SectagMap_32));
#line 1033 "type_ctor_info.m"
            }
#line 1034 "type_ctor_info.m"
            {
#line 1034 "type_ctor_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, backend_libs__type_ctor_info__Ptag_7, ((MR_Box) (backend_libs__type_ctor_info__SectagTable_33)), backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_0_18, backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_19);
#line 1034 "type_ctor_info.m"
              return;
            }
#line 1032 "type_ctor_info.m"
          }
#line 1008 "type_ctor_info.m"
      }
#line 1005 "type_ctor_info.m"
  }
#line 1002 "type_ctor_info.m"
}

#line 982 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__first_matching_type_class_info_6_p_0(
#line 982 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 982 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Tvar_2,
#line 982 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__MatchingConstraint_3,
#line 982 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_N_0_4,
#line 982 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__STATE_VARIABLE_N_5,
#line 982 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__TypeInfoIndex_6)
#line 982 "type_ctor_info.m"
{
#line 985 "type_ctor_info.m"
  while (MR_TRUE)
#line 985 "type_ctor_info.m"
    {
#line 985 "type_ctor_info.m"
      /* tailcall optimized into a loop */
#line 985 "type_ctor_info.m"
      {
#line 985 "type_ctor_info.m"
        MR_bool backend_libs__type_ctor_info__succeeded;

#line 985 "type_ctor_info.m"
        if ((backend_libs__type_ctor_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 985 "type_ctor_info.m"
          {
#line 986 "type_ctor_info.m"
            {
#line 986 "type_ctor_info.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.first_matching_type_class_info\'/6", (MR_String) "not found");
#line 986 "type_ctor_info.m"
              return;
            }
#line 985 "type_ctor_info.m"
          }
#line 985 "type_ctor_info.m"
        else
#line 988 "type_ctor_info.m"
          {
#line 988 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__C_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 0)));
#line 988 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Cs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 1)));
#line 988 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Ts_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__C_16, (MR_Integer) 1)));
#line 988 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TVs_24;
#line 989 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__C_16, (MR_Integer) 0)));
#line 994 "type_ctor_info.m"
            MR_Integer backend_libs__type_ctor_info__Index_25;

#line 990 "type_ctor_info.m"
            {
#line 990 "type_ctor_info.m"
              parse_tree__prog_type__type_vars_list_2_p_0(backend_libs__type_ctor_info__Ts_23, &backend_libs__type_ctor_info__TVs_24);
            }
#line 991 "type_ctor_info.m"
            {
#line 991 "type_ctor_info.m"
              backend_libs__type_ctor_info__succeeded = mercury__list__nth_member_search_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], backend_libs__type_ctor_info__TVs_24, ((MR_Box) (backend_libs__type_ctor_info__Tvar_2)), &backend_libs__type_ctor_info__Index_25);
            }
#line 994 "type_ctor_info.m"
            if (backend_libs__type_ctor_info__succeeded)
#line 992 "type_ctor_info.m"
              {
#line 992 "type_ctor_info.m"
                *backend_libs__type_ctor_info__MatchingConstraint_3 = backend_libs__type_ctor_info__C_16;
#line 993 "type_ctor_info.m"
                *backend_libs__type_ctor_info__TypeInfoIndex_6 = backend_libs__type_ctor_info__Index_25;
#line 993 "type_ctor_info.m"
                *backend_libs__type_ctor_info__STATE_VARIABLE_N_5 = backend_libs__type_ctor_info__STATE_VARIABLE_N_0_4;
#line 992 "type_ctor_info.m"
              }
#line 994 "type_ctor_info.m"
            else
#line 995 "type_ctor_info.m"
              {
#line 995 "type_ctor_info.m"
                MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_N_28_28 = (backend_libs__type_ctor_info__STATE_VARIABLE_N_0_4 + (MR_Integer) 1);

#line 996 "type_ctor_info.m"
                /* direct tailcall eliminated */
#line 996 "type_ctor_info.m"
                {
#line 996 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__HeadVar__1__tmp_copy_1 = backend_libs__type_ctor_info__Cs_17;
#line 996 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_N_0__tmp_copy_4 = backend_libs__type_ctor_info__STATE_VARIABLE_N_28_28;

#line 996 "type_ctor_info.m"
                  backend_libs__type_ctor_info__STATE_VARIABLE_N_0_4 = backend_libs__type_ctor_info__STATE_VARIABLE_N_0__tmp_copy_4;
#line 996 "type_ctor_info.m"
                  backend_libs__type_ctor_info__HeadVar__1_1 = backend_libs__type_ctor_info__HeadVar__1__tmp_copy_1;
#line 996 "type_ctor_info.m"
                }
#line 996 "type_ctor_info.m"
                continue;
#line 995 "type_ctor_info.m"
              }
#line 988 "type_ctor_info.m"
          }
#line 985 "type_ctor_info.m"
      }
#line 985 "type_ctor_info.m"
      break;
#line 985 "type_ctor_info.m"
    }
#line 982 "type_ctor_info.m"
}

#line 967 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__find_type_info_index_6_p_0(
#line 967 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_7,
#line 967 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ClassTable_8,
#line 967 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__StartSlot_9,
#line 967 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Tvar_10,
#line 967 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_0_22,
#line 967 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_23)
#line 967 "type_ctor_info.m"
{
#line 971 "type_ctor_info.m"
  {
#line 971 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 971 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__FirstConstraint_12;
#line 971 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__Slot_13;
#line 971 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__TypeInfoIndex_14;
#line 971 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ClassName_15;
#line 971 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Args_16;
#line 971 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__ClassArity_17;
#line 971 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ClassDefn_18;
#line 971 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__NumSuperClasses_19;
#line 971 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__RealTypeInfoIndex_20;
#line 971 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Locn_21;
#line 971 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_24_24;
#line 971 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_25_25;
#line 976 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv0_ClassDefn_18;
#line 977 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_27_27;
#line 977 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_28_28;
#line 977 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_29_29;
#line 977 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_30_30;
#line 977 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_31_31;
#line 977 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_32_32;
#line 977 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_33_33;
#line 977 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_34_34;
#line 977 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_35_35;

#line 972 "type_ctor_info.m"
    {
#line 972 "type_ctor_info.m"
      backend_libs__type_ctor_info__first_matching_type_class_info_6_p_0(backend_libs__type_ctor_info__Constraints_7, backend_libs__type_ctor_info__Tvar_10, &backend_libs__type_ctor_info__FirstConstraint_12, backend_libs__type_ctor_info__StartSlot_9, &backend_libs__type_ctor_info__Slot_13, &backend_libs__type_ctor_info__TypeInfoIndex_14);
    }
#line 974 "type_ctor_info.m"
    backend_libs__type_ctor_info__ClassName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__FirstConstraint_12, (MR_Integer) 0)));
#line 974 "type_ctor_info.m"
    backend_libs__type_ctor_info__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__FirstConstraint_12, (MR_Integer) 1)));
#line 975 "type_ctor_info.m"
    {
#line 975 "type_ctor_info.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, backend_libs__type_ctor_info__Args_16, &backend_libs__type_ctor_info__ClassArity_17);
    }
#line 976 "type_ctor_info.m"
    {
#line 976 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 976 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_24_24, 0) = ((MR_Box) (backend_libs__type_ctor_info__ClassName_15));
#line 976 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_24_24, 1) = ((MR_Box) (backend_libs__type_ctor_info__ClassArity_17));
#line 976 "type_ctor_info.m"
    }
#line 976 "type_ctor_info.m"
    {
#line 976 "type_ctor_info.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, backend_libs__type_ctor_info__ClassTable_8, ((MR_Box) (backend_libs__type_ctor_info__V_24_24)), &backend_libs__type_ctor_info__conv0_ClassDefn_18);
    }
#line 976 "type_ctor_info.m"
    backend_libs__type_ctor_info__ClassDefn_18 = ((MR_Word) backend_libs__type_ctor_info__conv0_ClassDefn_18);
#line 977 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 0)));
#line 977 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 1)));
#line 977 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 2)));
#line 977 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 3)));
#line 977 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 4)));
#line 977 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 5)));
#line 977 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 6)));
#line 977 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 7)));
#line 977 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 8)));
#line 977 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 9)));
#line 977 "type_ctor_info.m"
    {
#line 977 "type_ctor_info.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, backend_libs__type_ctor_info__V_25_25, &backend_libs__type_ctor_info__NumSuperClasses_19);
    }
#line 978 "type_ctor_info.m"
    backend_libs__type_ctor_info__RealTypeInfoIndex_20 = (backend_libs__type_ctor_info__TypeInfoIndex_14 + backend_libs__type_ctor_info__NumSuperClasses_19);
#line 979 "type_ctor_info.m"
    {
#line 979 "type_ctor_info.m"
      backend_libs__type_ctor_info__Locn_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 979 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Locn_21, 0) = ((MR_Box) (backend_libs__type_ctor_info__Slot_13));
#line 979 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Locn_21, 1) = ((MR_Box) (backend_libs__type_ctor_info__RealTypeInfoIndex_20));
#line 979 "type_ctor_info.m"
    }
#line 980 "type_ctor_info.m"
    {
#line 980 "type_ctor_info.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, ((MR_Box) (backend_libs__type_ctor_info__Tvar_10)), ((MR_Box) (backend_libs__type_ctor_info__Locn_21)), backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_0_22, backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_23);
#line 980 "type_ctor_info.m"
      return;
    }
#line 971 "type_ctor_info.m"
  }
#line 967 "type_ctor_info.m"
}

#line 962 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_5(
#line 962 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 962 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 962 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2)
#line 962 "type_ctor_info.m"
{
#line 962 "type_ctor_info.m"
  {
#line 962 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 962 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv8_HeadVar__3_47;

#line 962 "type_ctor_info.m"
    {
#line 962 "type_ctor_info.m"
      backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__962__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), &backend_libs__type_ctor_info__conv8_HeadVar__3_47);
    }
#line 962 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv8_HeadVar__3_47));
#line 962 "type_ctor_info.m"
  }
#line 962 "type_ctor_info.m"
}

#line 961 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_4(
#line 961 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 961 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1)
#line 961 "type_ctor_info.m"
{
#line 961 "type_ctor_info.m"
  {
#line 961 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__wrapper_arg_2;
#line 961 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 961 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv7_HeadVar__2_2;

#line 961 "type_ctor_info.m"
    {
#line 961 "type_ctor_info.m"
      backend_libs__type_ctor_info__conv7_HeadVar__2_2 = backend_libs__type_class_info__generate_class_constraint_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1));
    }
#line 961 "type_ctor_info.m"
    backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv7_HeadVar__2_2));
#line 961 "type_ctor_info.m"
    return backend_libs__type_ctor_info__wrapper_arg_2;
#line 961 "type_ctor_info.m"
  }
#line 961 "type_ctor_info.m"
}

#line 959 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_3(
#line 959 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 959 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 959 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 959 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3)
#line 959 "type_ctor_info.m"
{
#line 959 "type_ctor_info.m"
  {
#line 959 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 959 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv5_STATE_VARIABLE_LocnMap_23;

#line 959 "type_ctor_info.m"
    {
#line 959 "type_ctor_info.m"
      backend_libs__type_ctor_info__find_type_info_index_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 5))), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv5_STATE_VARIABLE_LocnMap_23);
    }
#line 959 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv5_STATE_VARIABLE_LocnMap_23));
#line 959 "type_ctor_info.m"
  }
#line 959 "type_ctor_info.m"
}

#line 952 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_2(
#line 952 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 952 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 952 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 952 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
#line 952 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
#line 952 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5)
#line 952 "type_ctor_info.m"
{
#line 952 "type_ctor_info.m"
  {
#line 952 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 952 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__conv2_HeadVar__3_39;
#line 952 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv1_HeadVar__5_41;

#line 952 "type_ctor_info.m"
    {
#line 952 "type_ctor_info.m"
      backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__952__1_5_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Integer) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv2_HeadVar__3_39, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_4), &backend_libs__type_ctor_info__conv1_HeadVar__5_41);
    }
#line 952 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv2_HeadVar__3_39));
#line 952 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_5 = ((MR_Box) (backend_libs__type_ctor_info__conv1_HeadVar__5_41));
#line 952 "type_ctor_info.m"
  }
#line 952 "type_ctor_info.m"
}

#line 944 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_1(
#line 944 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 944 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 944 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2)
#line 944 "type_ctor_info.m"
{
#line 944 "type_ctor_info.m"
  {
#line 944 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 944 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__2_34;

#line 944 "type_ctor_info.m"
    {
#line 944 "type_ctor_info.m"
      backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__944__1_2_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), &backend_libs__type_ctor_info__conv0_HeadVar__2_34);
    }
#line 944 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__2_34));
#line 944 "type_ctor_info.m"
  }
#line 944 "type_ctor_info.m"
}

#line 940 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0(
#line 940 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTvars_5,
#line 940 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_6,
#line 940 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ClassTable_7,
#line 940 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ExistInfo_8)
#line 940 "type_ctor_info.m"
{
#line 943 "type_ctor_info.m"
  {
#line 943 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeInfo_60_60;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_61_61;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeInfo_65_65;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ConstrainedTvars0_12;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ConstrainedTvars1_13;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ConstrainedTvars2_14;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__UnconstrainedTvars_15;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ConstrainedTvars_16;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__LocnMap0_17;
#line 943 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__TIsPlain_24;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__LocnMap1_25;
#line 943 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__AllTIs_26;
#line 943 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__TIsInTCIs_27;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__LocnMap_28;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TCConstraints_29;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ExistLocns_31;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_43_43;
#line 943 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_45_45;
#line 952 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv4_TIsPlain_24;
#line 952 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv3_LocnMap1_25;
#line 959 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv6_LocnMap_28;

#line 944 "type_ctor_info.m"
    {
#line 944 "type_ctor_info.m"
      mercury__list__map_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_57_57, (MR_Word) &backend_libs__type_ctor_info_scalar_common_1[5], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[28], backend_libs__type_ctor_info__Constraints_6, &backend_libs__type_ctor_info__ConstrainedTvars0_12);
    }
#line 946 "type_ctor_info.m"
    {
#line 946 "type_ctor_info.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, backend_libs__type_ctor_info__ConstrainedTvars0_12, &backend_libs__type_ctor_info__ConstrainedTvars1_13);
    }
#line 947 "type_ctor_info.m"
    {
#line 947 "type_ctor_info.m"
      parse_tree__prog_type__type_vars_list_2_p_0(backend_libs__type_ctor_info__ConstrainedTvars1_13, &backend_libs__type_ctor_info__ConstrainedTvars2_14);
    }
#line 4591 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeInfo_60_60 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0];
#line 948 "type_ctor_info.m"
    {
#line 948 "type_ctor_info.m"
      mercury__list__delete_elems_3_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__ExistTvars_5, backend_libs__type_ctor_info__ConstrainedTvars2_14, &backend_libs__type_ctor_info__UnconstrainedTvars_15);
    }
#line 950 "type_ctor_info.m"
    {
#line 950 "type_ctor_info.m"
      mercury__list__delete_elems_3_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__ExistTvars_5, backend_libs__type_ctor_info__UnconstrainedTvars_15, &backend_libs__type_ctor_info__ConstrainedTvars_16);
    }
#line 4603 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_61_61 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0;
#line 951 "type_ctor_info.m"
    {
#line 951 "type_ctor_info.m"
      mercury__map__init_1_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__TypeCtorInfo_61_61, &backend_libs__type_ctor_info__LocnMap0_17);
    }
#line 4610 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeInfo_65_65 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[10];
#line 952 "type_ctor_info.m"
    {
#line 952 "type_ctor_info.m"
      mercury__list__foldl2_6_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__type_ctor_info__TypeInfo_65_65, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[29], backend_libs__type_ctor_info__UnconstrainedTvars_15, ((MR_Box) ((MR_Integer) 0)), &backend_libs__type_ctor_info__conv4_TIsPlain_24, ((MR_Box) (backend_libs__type_ctor_info__LocnMap0_17)), &backend_libs__type_ctor_info__conv3_LocnMap1_25);
    }
#line 952 "type_ctor_info.m"
    backend_libs__type_ctor_info__TIsPlain_24 = ((MR_Integer) backend_libs__type_ctor_info__conv4_TIsPlain_24);
#line 952 "type_ctor_info.m"
    backend_libs__type_ctor_info__LocnMap1_25 = ((MR_Word) backend_libs__type_ctor_info__conv3_LocnMap1_25);
#line 957 "type_ctor_info.m"
    {
#line 957 "type_ctor_info.m"
      mercury__list__length_2_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__ExistTvars_5, &backend_libs__type_ctor_info__AllTIs_26);
    }
#line 958 "type_ctor_info.m"
    backend_libs__type_ctor_info__TIsInTCIs_27 = (backend_libs__type_ctor_info__AllTIs_26 - backend_libs__type_ctor_info__TIsPlain_24);
#line 959 "type_ctor_info.m"
    {
#line 959 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 959 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[0]));
#line 959 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 1) = ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_3));
#line 959 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 959 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 3) = ((MR_Box) (backend_libs__type_ctor_info__Constraints_6));
#line 959 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 4) = ((MR_Box) (backend_libs__type_ctor_info__ClassTable_7));
#line 959 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 5) = ((MR_Box) (backend_libs__type_ctor_info__TIsPlain_24));
#line 959 "type_ctor_info.m"
    }
#line 959 "type_ctor_info.m"
    {
#line 959 "type_ctor_info.m"
      mercury__list__foldl_4_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__TypeInfo_65_65, backend_libs__type_ctor_info__V_43_43, backend_libs__type_ctor_info__ConstrainedTvars_16, ((MR_Box) (backend_libs__type_ctor_info__LocnMap1_25)), &backend_libs__type_ctor_info__conv6_LocnMap_28);
    }
#line 959 "type_ctor_info.m"
    backend_libs__type_ctor_info__LocnMap_28 = ((MR_Word) backend_libs__type_ctor_info__conv6_LocnMap_28);
#line 961 "type_ctor_info.m"
    {
#line 961 "type_ctor_info.m"
      backend_libs__type_ctor_info__TCConstraints_29 = mercury__list__map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_57_57, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[30], backend_libs__type_ctor_info__Constraints_6);
    }
#line 962 "type_ctor_info.m"
    {
#line 962 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 962 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_45_45, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_6[3]));
#line 962 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_45_45, 1) = ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_5));
#line 962 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 962 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_45_45, 3) = ((MR_Box) (backend_libs__type_ctor_info__LocnMap_28));
#line 962 "type_ctor_info.m"
    }
#line 962 "type_ctor_info.m"
    {
#line 962 "type_ctor_info.m"
      mercury__list__map_3_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__TypeCtorInfo_61_61, backend_libs__type_ctor_info__V_45_45, backend_libs__type_ctor_info__ExistTvars_5, &backend_libs__type_ctor_info__ExistLocns_31);
    }
#line 965 "type_ctor_info.m"
    {
#line 965 "type_ctor_info.m"
      MR_Word base;
#line 965 "type_ctor_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 965 "type_ctor_info.m"
      *backend_libs__type_ctor_info__ExistInfo_8 = base;
#line 965 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__TIsPlain_24));
#line 965 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__TIsInTCIs_27));
#line 965 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__TCConstraints_29));
#line 965 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__ExistLocns_31));
#line 965 "type_ctor_info.m"
    }
#line 943 "type_ctor_info.m"
  }
#line 940 "type_ctor_info.m"
}

#line 903 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_du_arg_info_4_p_0(
#line 903 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NumUnivTvars_5,
#line 903 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTvars_6,
#line 903 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConstructorArg_7,
#line 903 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ArgInfo_8)
#line 903 "type_ctor_info.m"
{
#line 906 "type_ctor_info.m"
  {
#line 906 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 906 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__MaybeArgSymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ConstructorArg_7, (MR_Integer) 0)));
#line 906 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ArgType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ConstructorArg_7, (MR_Integer) 1)));
#line 906 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ArgWidth_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ConstructorArg_7, (MR_Integer) 2)));
#line 906 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__MaybeArgName_15;
#line 906 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__MaybePseudoTypeInfo_16;
#line 906 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_18;
#line 907 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info___Ctxt_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ConstructorArg_7, (MR_Integer) 3)));

#line 912 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__MaybeArgSymName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "type_ctor_info.m"
      backend_libs__type_ctor_info__MaybeArgName_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 912 "type_ctor_info.m"
    else
#line 909 "type_ctor_info.m"
      {
#line 909 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__MaybeArgSymName_9, (MR_Integer) 0)));
#line 909 "type_ctor_info.m"
        MR_String backend_libs__type_ctor_info__ArgName_14;

#line 910 "type_ctor_info.m"
        {
#line 910 "type_ctor_info.m"
          backend_libs__type_ctor_info__ArgName_14 = mdbcomp__prim_data__unqualify_name_1_f_0(backend_libs__type_ctor_info__SymName_13);
        }
#line 911 "type_ctor_info.m"
        {
#line 911 "type_ctor_info.m"
          backend_libs__type_ctor_info__MaybeArgName_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 911 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__MaybeArgName_15, 0) = ((MR_Box) (backend_libs__type_ctor_info__ArgName_14));
#line 911 "type_ctor_info.m"
        }
#line 909 "type_ctor_info.m"
      }
#line 918 "type_ctor_info.m"
    {
#line 918 "type_ctor_info.m"
      backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(backend_libs__type_ctor_info__ArgType_10, backend_libs__type_ctor_info__NumUnivTvars_5, backend_libs__type_ctor_info__ExistTvars_6, &backend_libs__type_ctor_info__MaybePseudoTypeInfo_16);
    }
#line 923 "type_ctor_info.m"
    if (((MR_tag((MR_Word) backend_libs__type_ctor_info__MaybePseudoTypeInfo_16)) == (MR_mktag((MR_Integer) 1))))
#line 921 "type_ctor_info.m"
      {
#line 921 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__MaybePseudoTypeInfo_16, (MR_Integer) 0)));

#line 922 "type_ctor_info.m"
        {
#line 922 "type_ctor_info.m"
          backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 922 "type_ctor_info.m"
          MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_18, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeInfo_17));
#line 922 "type_ctor_info.m"
        }
#line 921 "type_ctor_info.m"
      }
#line 923 "type_ctor_info.m"
    else
#line 924 "type_ctor_info.m"
      {
#line 924 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__PseudoTypeInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__MaybePseudoTypeInfo_16, (MR_Integer) 0)));

#line 925 "type_ctor_info.m"
        {
#line 925 "type_ctor_info.m"
          backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 925 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_18, 0) = ((MR_Box) (backend_libs__type_ctor_info__PseudoTypeInfo_19));
#line 925 "type_ctor_info.m"
        }
#line 924 "type_ctor_info.m"
      }
#line 927 "type_ctor_info.m"
    {
#line 927 "type_ctor_info.m"
      MR_Word base;
#line 927 "type_ctor_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 927 "type_ctor_info.m"
      *backend_libs__type_ctor_info__ArgInfo_8 = base;
#line 927 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__MaybeArgName_15));
#line 927 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_18));
#line 927 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__ArgWidth_11));
#line 927 "type_ctor_info.m"
    }
#line 906 "type_ctor_info.m"
  }
#line 903 "type_ctor_info.m"
}

#line 854 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__get_maybe_reserved_rep_2_p_0(
#line 854 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTag_3,
#line 854 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ConsRep_4)
#line 854 "type_ctor_info.m"
{
#line 858 "type_ctor_info.m"
  while (MR_TRUE)
#line 858 "type_ctor_info.m"
    {
#line 858 "type_ctor_info.m"
      /* tailcall optimized into a loop */
#line 858 "type_ctor_info.m"
      {
#line 858 "type_ctor_info.m"
        MR_bool backend_libs__type_ctor_info__succeeded;

#line 858 "type_ctor_info.m"
        if ((backend_libs__type_ctor_info__ConsTag_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 858 "type_ctor_info.m"
          {
#line 861 "type_ctor_info.m"
            *backend_libs__type_ctor_info__ConsRep_4 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__type_ctor_info_scalar_common_4[2]);
#line 858 "type_ctor_info.m"
          }
#line 858 "type_ctor_info.m"
        else
#line 858 "type_ctor_info.m"
          if (((((MR_tag((MR_Word) backend_libs__type_ctor_info__ConsTag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 867 "type_ctor_info.m"
            {
#line 867 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__V_42_42;
#line 867 "type_ctor_info.m"
              MR_Integer backend_libs__type_ctor_info__ConsPtag_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));

#line 869 "type_ctor_info.m"
              {
#line 869 "type_ctor_info.m"
                backend_libs__type_ctor_info__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 869 "type_ctor_info.m"
                MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_42_42, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsPtag_47));
#line 869 "type_ctor_info.m"
                MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 869 "type_ctor_info.m"
              }
#line 869 "type_ctor_info.m"
              {
#line 869 "type_ctor_info.m"
                MR_Word base;
#line 869 "type_ctor_info.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 869 "type_ctor_info.m"
                *backend_libs__type_ctor_info__ConsRep_4 = base;
#line 869 "type_ctor_info.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__V_42_42));
#line 869 "type_ctor_info.m"
              }
#line 867 "type_ctor_info.m"
            }
#line 858 "type_ctor_info.m"
          else
#line 858 "type_ctor_info.m"
            if (((((MR_tag((MR_Word) backend_libs__type_ctor_info__ConsTag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 877 "type_ctor_info.m"
              {
#line 877 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__ReservedAddr_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));

#line 878 "type_ctor_info.m"
                {
#line 878 "type_ctor_info.m"
                  MR_Word base;
#line 878 "type_ctor_info.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 878 "type_ctor_info.m"
                  *backend_libs__type_ctor_info__ConsRep_4 = base;
#line 878 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__ReservedAddr_8));
#line 878 "type_ctor_info.m"
                }
#line 877 "type_ctor_info.m"
              }
#line 858 "type_ctor_info.m"
            else
#line 858 "type_ctor_info.m"
              if (((((MR_tag((MR_Word) backend_libs__type_ctor_info__ConsTag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 871 "type_ctor_info.m"
                {
#line 871 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__ConsStag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 2)));
#line 871 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_40_40;
#line 871 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_41_41;
#line 871 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__ConsPtag_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));

#line 872 "type_ctor_info.m"
                  {
#line 872 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 872 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__V_41_41, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsStag_7));
#line 872 "type_ctor_info.m"
                  }
#line 872 "type_ctor_info.m"
                  {
#line 872 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 872 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_40_40, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsPtag_49));
#line 872 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_40_40, 1) = ((MR_Box) (backend_libs__type_ctor_info__V_41_41));
#line 872 "type_ctor_info.m"
                  }
#line 872 "type_ctor_info.m"
                  {
#line 872 "type_ctor_info.m"
                    MR_Word base;
#line 872 "type_ctor_info.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 872 "type_ctor_info.m"
                    *backend_libs__type_ctor_info__ConsRep_4 = base;
#line 872 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__V_40_40));
#line 872 "type_ctor_info.m"
                  }
#line 871 "type_ctor_info.m"
                }
#line 858 "type_ctor_info.m"
              else
#line 858 "type_ctor_info.m"
                if (((((MR_tag((MR_Word) backend_libs__type_ctor_info__ConsTag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 874 "type_ctor_info.m"
                  {
#line 874 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__V_38_38;
#line 874 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__V_39_39;
#line 874 "type_ctor_info.m"
                    MR_Integer backend_libs__type_ctor_info__ConsPtag_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));
#line 874 "type_ctor_info.m"
                    MR_Integer backend_libs__type_ctor_info__ConsStag_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 2)));

#line 875 "type_ctor_info.m"
                    {
#line 875 "type_ctor_info.m"
                      backend_libs__type_ctor_info__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 875 "type_ctor_info.m"
                      MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__V_39_39, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsStag_51));
#line 875 "type_ctor_info.m"
                    }
#line 875 "type_ctor_info.m"
                    {
#line 875 "type_ctor_info.m"
                      backend_libs__type_ctor_info__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 875 "type_ctor_info.m"
                      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_38_38, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsPtag_50));
#line 875 "type_ctor_info.m"
                      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_38_38, 1) = ((MR_Box) (backend_libs__type_ctor_info__V_39_39));
#line 875 "type_ctor_info.m"
                    }
#line 875 "type_ctor_info.m"
                    {
#line 875 "type_ctor_info.m"
                      MR_Word base;
#line 875 "type_ctor_info.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 875 "type_ctor_info.m"
                      *backend_libs__type_ctor_info__ConsRep_4 = base;
#line 875 "type_ctor_info.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__V_38_38));
#line 875 "type_ctor_info.m"
                    }
#line 874 "type_ctor_info.m"
                  }
#line 858 "type_ctor_info.m"
                else
#line 858 "type_ctor_info.m"
                  if (((((MR_tag((MR_Word) backend_libs__type_ctor_info__ConsTag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 880 "type_ctor_info.m"
                    {
#line 880 "type_ctor_info.m"
                      MR_Word backend_libs__type_ctor_info__ThisTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 2)));
#line 880 "type_ctor_info.m"
                      MR_Word backend_libs__type_ctor_info___RAs_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));

#line 883 "type_ctor_info.m"
                      /* direct tailcall eliminated */
#line 883 "type_ctor_info.m"
                      {
#line 883 "type_ctor_info.m"
                        MR_Word backend_libs__type_ctor_info__ConsTag__tmp_copy_3 = backend_libs__type_ctor_info__ThisTag_10;

#line 883 "type_ctor_info.m"
                        backend_libs__type_ctor_info__ConsTag_3 = backend_libs__type_ctor_info__ConsTag__tmp_copy_3;
#line 883 "type_ctor_info.m"
                      }
#line 883 "type_ctor_info.m"
                      continue;
#line 880 "type_ctor_info.m"
                    }
#line 858 "type_ctor_info.m"
                  else
#line 858 "type_ctor_info.m"
                    if (((((MR_tag((MR_Word) backend_libs__type_ctor_info__ConsTag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 863 "type_ctor_info.m"
                      {
#line 863 "type_ctor_info.m"
                        MR_Word backend_libs__type_ctor_info__V_43_43;
#line 863 "type_ctor_info.m"
                        MR_Integer backend_libs__type_ctor_info__ConsPtag_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));

#line 865 "type_ctor_info.m"
                        {
#line 865 "type_ctor_info.m"
                          backend_libs__type_ctor_info__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 865 "type_ctor_info.m"
                          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsPtag_45));
#line 865 "type_ctor_info.m"
                          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 865 "type_ctor_info.m"
                        }
#line 865 "type_ctor_info.m"
                        {
#line 865 "type_ctor_info.m"
                          MR_Word base;
#line 865 "type_ctor_info.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 865 "type_ctor_info.m"
                          *backend_libs__type_ctor_info__ConsRep_4 = base;
#line 865 "type_ctor_info.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__V_43_43));
#line 865 "type_ctor_info.m"
                        }
#line 863 "type_ctor_info.m"
                      }
#line 858 "type_ctor_info.m"
                    else
#line 899 "type_ctor_info.m"
                      {
#line 900 "type_ctor_info.m"
                        {
#line 900 "type_ctor_info.m"
                          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.get_maybe_reserved_rep\'/2", (MR_String) "bad cons_tag for du function symbol");
#line 900 "type_ctor_info.m"
                          return;
                        }
#line 899 "type_ctor_info.m"
                      }
#line 858 "type_ctor_info.m"
      }
#line 858 "type_ctor_info.m"
      break;
#line 858 "type_ctor_info.m"
    }
#line 854 "type_ctor_info.m"
}

#line 847 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_4(
#line 847 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 847 "type_ctor_info.m"
{
#line 847 "type_ctor_info.m"
  {
#line 847 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 847 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 847 "type_ctor_info.m"
    {
#line 847 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__847__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 847 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 847 "type_ctor_info.m"
  }
#line 847 "type_ctor_info.m"
}

#line 846 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_3(
#line 846 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 846 "type_ctor_info.m"
{
#line 846 "type_ctor_info.m"
  {
#line 846 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 846 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 846 "type_ctor_info.m"
    {
#line 846 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__846__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 846 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 846 "type_ctor_info.m"
  }
#line 846 "type_ctor_info.m"
}

#line 845 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_2(
#line 845 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 845 "type_ctor_info.m"
{
#line 845 "type_ctor_info.m"
  {
#line 845 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 845 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 845 "type_ctor_info.m"
    {
#line 845 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__845__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 845 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 845 "type_ctor_info.m"
  }
#line 845 "type_ctor_info.m"
}

#line 827 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_1(
#line 827 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 827 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 827 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2)
#line 827 "type_ctor_info.m"
{
#line 827 "type_ctor_info.m"
  {
#line 827 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 827 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv1_ArgInfo_8;

#line 827 "type_ctor_info.m"
    {
#line 827 "type_ctor_info.m"
      backend_libs__type_ctor_info__generate_du_arg_info_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), &backend_libs__type_ctor_info__conv1_ArgInfo_8);
    }
#line 827 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv1_ArgInfo_8));
#line 827 "type_ctor_info.m"
  }
#line 827 "type_ctor_info.m"
}

#line 813 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(
#line 813 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
#line 813 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 813 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_3,
#line 813 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_4,
#line 813 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_5,
#line 813 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_6,
#line 813 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__7_7)
#line 813 "type_ctor_info.m"
{
#line 817 "type_ctor_info.m"
  {
#line 817 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 817 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 817 "type_ctor_info.m"
      *backend_libs__type_ctor_info__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 817 "type_ctor_info.m"
    else
#line 820 "type_ctor_info.m"
      {
#line 820 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 820 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Functor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));
#line 820 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Functors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 1)));
#line 820 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__MaybeResFunctor_20;
#line 820 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__MaybeResFunctors_21;
#line 820 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ExistTvars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 0)));
#line 820 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Constraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 1)));
#line 820 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 2)));
#line 820 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConstructorArgs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 3)));
#line 820 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__Arity_27;
#line 820 "type_ctor_info.m"
        MR_String backend_libs__type_ctor_info__FunctorName_28;
#line 820 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConsId_29;
#line 820 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConsTag_30;
#line 820 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConsRep_31;
#line 820 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ArgInfos_32;
#line 820 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__MaybeExistInfo_33;
#line 820 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_42_42;
#line 820 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_43_43;
#line 820 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_59_59;
#line 821 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info___Ctxt_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 4)));
#line 825 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv0_ConsTag_30;

#line 822 "type_ctor_info.m"
        {
#line 822 "type_ctor_info.m"
          mercury__list__length_2_p_0(backend_libs__type_ctor_info__TypeCtorInfo_61_61, backend_libs__type_ctor_info__ConstructorArgs_25, &backend_libs__type_ctor_info__Arity_27);
        }
#line 823 "type_ctor_info.m"
        {
#line 823 "type_ctor_info.m"
          backend_libs__type_ctor_info__FunctorName_28 = mdbcomp__prim_data__unqualify_name_1_f_0(backend_libs__type_ctor_info__SymName_24);
        }
#line 824 "type_ctor_info.m"
        {
#line 824 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_42_42 = mercury__list__length_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_61_61, backend_libs__type_ctor_info__ConstructorArgs_25);
        }
#line 824 "type_ctor_info.m"
        {
#line 824 "type_ctor_info.m"
          backend_libs__type_ctor_info__ConsId_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 824 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 824 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_29, 1) = ((MR_Box) (backend_libs__type_ctor_info__SymName_24));
#line 824 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_29, 2) = ((MR_Box) (backend_libs__type_ctor_info__V_42_42));
#line 824 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_29, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_1));
#line 824 "type_ctor_info.m"
        }
#line 825 "type_ctor_info.m"
        {
#line 825 "type_ctor_info.m"
          mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, backend_libs__type_ctor_info__ConsTagMap_4, ((MR_Box) (backend_libs__type_ctor_info__ConsId_29)), &backend_libs__type_ctor_info__conv0_ConsTag_30);
        }
#line 825 "type_ctor_info.m"
        backend_libs__type_ctor_info__ConsTag_30 = ((MR_Word) backend_libs__type_ctor_info__conv0_ConsTag_30);
#line 826 "type_ctor_info.m"
        {
#line 826 "type_ctor_info.m"
          backend_libs__type_ctor_info__get_maybe_reserved_rep_2_p_0(backend_libs__type_ctor_info__ConsTag_30, &backend_libs__type_ctor_info__ConsRep_31);
        }
#line 827 "type_ctor_info.m"
        {
#line 827 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 827 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_7[0]));
#line 827 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_1));
#line 827 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 827 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeArity_5));
#line 827 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 4) = ((MR_Box) (backend_libs__type_ctor_info__ExistTvars_22));
#line 827 "type_ctor_info.m"
        }
#line 827 "type_ctor_info.m"
        {
#line 827 "type_ctor_info.m"
          mercury__list__map_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_61_61, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0, backend_libs__type_ctor_info__V_43_43, backend_libs__type_ctor_info__ConstructorArgs_25, &backend_libs__type_ctor_info__ArgInfos_32);
        }
#line 832 "type_ctor_info.m"
        if ((backend_libs__type_ctor_info__ExistTvars_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 831 "type_ctor_info.m"
          backend_libs__type_ctor_info__MaybeExistInfo_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 832 "type_ctor_info.m"
        else
#line 833 "type_ctor_info.m"
          {
#line 833 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__ClassTable_36;
#line 833 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__ExistInfo_37;

#line 834 "type_ctor_info.m"
            {
#line 834 "type_ctor_info.m"
              hlds__hlds_module__module_info_get_class_table_2_p_0(backend_libs__type_ctor_info__ModuleInfo_6, &backend_libs__type_ctor_info__ClassTable_36);
            }
#line 835 "type_ctor_info.m"
            {
#line 835 "type_ctor_info.m"
              backend_libs__type_ctor_info__generate_exist_into_4_p_0(backend_libs__type_ctor_info__ExistTvars_22, backend_libs__type_ctor_info__Constraints_23, backend_libs__type_ctor_info__ClassTable_36, &backend_libs__type_ctor_info__ExistInfo_37);
            }
#line 836 "type_ctor_info.m"
            {
#line 836 "type_ctor_info.m"
              backend_libs__type_ctor_info__MaybeExistInfo_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 836 "type_ctor_info.m"
              MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__MaybeExistInfo_33, 0) = ((MR_Box) (backend_libs__type_ctor_info__ExistInfo_37));
#line 836 "type_ctor_info.m"
            }
#line 833 "type_ctor_info.m"
          }
#line 843 "type_ctor_info.m"
        if (((MR_tag((MR_Word) backend_libs__type_ctor_info__ConsRep_31)) == (MR_mktag((MR_Integer) 1))))
#line 839 "type_ctor_info.m"
          {
#line 839 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__DuRep_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__ConsRep_31, (MR_Integer) 0)));
#line 839 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__DuFunctor_39;

#line 840 "type_ctor_info.m"
            {
#line 840 "type_ctor_info.m"
              backend_libs__type_ctor_info__DuFunctor_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 840 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_39, 0) = ((MR_Box) (backend_libs__type_ctor_info__FunctorName_28));
#line 840 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_39, 1) = ((MR_Box) (backend_libs__type_ctor_info__Arity_27));
#line 840 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_39, 2) = ((MR_Box) (backend_libs__type_ctor_info__NextOrdinal_3));
#line 840 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_39, 3) = ((MR_Box) (backend_libs__type_ctor_info__DuRep_38));
#line 840 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_39, 4) = ((MR_Box) (backend_libs__type_ctor_info__ArgInfos_32));
#line 840 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_39, 5) = ((MR_Box) (backend_libs__type_ctor_info__MaybeExistInfo_33));
#line 840 "type_ctor_info.m"
            }
#line 842 "type_ctor_info.m"
            backend_libs__type_ctor_info__MaybeResFunctor_20 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) backend_libs__type_ctor_info__DuFunctor_39);
#line 839 "type_ctor_info.m"
          }
#line 843 "type_ctor_info.m"
        else
#line 844 "type_ctor_info.m"
          {
#line 844 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__ResRep_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ConsRep_31, (MR_Integer) 0)));
#line 844 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__ResFunctor_41;
#line 844 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_44_44;
#line 844 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_49_49;
#line 844 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_54_54;

#line 845 "type_ctor_info.m"
            {
#line 845 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 845 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_44_44, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[4]));
#line 845 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_44_44, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_2));
#line 845 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 845 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_44_44, 3) = ((MR_Box) (backend_libs__type_ctor_info__Arity_27));
#line 845 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_44_44, 4) = ((MR_Box) ((MR_Integer) 0));
#line 845 "type_ctor_info.m"
            }
#line 845 "type_ctor_info.m"
            {
#line 845 "type_ctor_info.m"
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_44_44, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_maybe_res_functors\'/7", (MR_String) "bad arity");
            }
#line 846 "type_ctor_info.m"
            {
#line 846 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 846 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_49_49, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[10]));
#line 846 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_49_49, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_3));
#line 846 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 846 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_49_49, 3) = ((MR_Box) (backend_libs__type_ctor_info__ArgInfos_32));
#line 846 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_49_49, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 846 "type_ctor_info.m"
            }
#line 846 "type_ctor_info.m"
            {
#line 846 "type_ctor_info.m"
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_49_49, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_maybe_res_functors\'/7", (MR_String) "bad args");
            }
#line 847 "type_ctor_info.m"
            {
#line 847 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 847 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_54_54, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[11]));
#line 847 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_54_54, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_4));
#line 847 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 847 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_54_54, 3) = ((MR_Box) (backend_libs__type_ctor_info__MaybeExistInfo_33));
#line 847 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_54_54, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "type_ctor_info.m"
            }
#line 847 "type_ctor_info.m"
            {
#line 847 "type_ctor_info.m"
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_54_54, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_maybe_res_functors\'/7", (MR_String) "bad exist");
            }
#line 848 "type_ctor_info.m"
            {
#line 848 "type_ctor_info.m"
              backend_libs__type_ctor_info__ResFunctor_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 848 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_41, 0) = ((MR_Box) (backend_libs__type_ctor_info__FunctorName_28));
#line 848 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_41, 1) = ((MR_Box) (backend_libs__type_ctor_info__NextOrdinal_3));
#line 848 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_41, 2) = ((MR_Box) (backend_libs__type_ctor_info__ResRep_40));
#line 848 "type_ctor_info.m"
            }
#line 849 "type_ctor_info.m"
            backend_libs__type_ctor_info__MaybeResFunctor_20 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) backend_libs__type_ctor_info__ResFunctor_41);
#line 844 "type_ctor_info.m"
          }
#line 851 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_59_59 = (backend_libs__type_ctor_info__NextOrdinal_3 + (MR_Integer) 1);
#line 851 "type_ctor_info.m"
        {
#line 851 "type_ctor_info.m"
          backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(backend_libs__type_ctor_info__TypeCtor_1, backend_libs__type_ctor_info__Functors_15, backend_libs__type_ctor_info__V_59_59, backend_libs__type_ctor_info__ConsTagMap_4, backend_libs__type_ctor_info__TypeArity_5, backend_libs__type_ctor_info__ModuleInfo_6, &backend_libs__type_ctor_info__MaybeResFunctors_21);
        }
#line 820 "type_ctor_info.m"
        {
#line 820 "type_ctor_info.m"
          MR_Word base;
#line 820 "type_ctor_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "type_ctor_info.m"
          *backend_libs__type_ctor_info__HeadVar__7_7 = base;
#line 820 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__MaybeResFunctor_20));
#line 820 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__MaybeResFunctors_21));
#line 820 "type_ctor_info.m"
        }
#line 820 "type_ctor_info.m"
      }
#line 817 "type_ctor_info.m"
  }
#line 813 "type_ctor_info.m"
}

#line 791 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_7(
#line 791 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 791 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 791 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 791 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3)
#line 791 "type_ctor_info.m"
{
#line 791 "type_ctor_info.m"
  {
#line 791 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 791 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv6_STATE_VARIABLE_NameTable_13;

#line 791 "type_ctor_info.m"
    {
#line 791 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_res_name_ordered_table_3_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv6_STATE_VARIABLE_NameTable_13);
    }
#line 791 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv6_STATE_VARIABLE_NameTable_13));
#line 791 "type_ctor_info.m"
  }
#line 791 "type_ctor_info.m"
}

#line 789 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_6(
#line 789 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 789 "type_ctor_info.m"
{
#line 789 "type_ctor_info.m"
  {
#line 789 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 789 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 789 "type_ctor_info.m"
    {
#line 789 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__789__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 789 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 789 "type_ctor_info.m"
  }
#line 789 "type_ctor_info.m"
}

#line 783 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_5(
#line 783 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 783 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 783 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 783 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3)
#line 783 "type_ctor_info.m"
{
#line 783 "type_ctor_info.m"
  {
#line 783 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 783 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv4_STATE_VARIABLE_NameTable_11;

#line 783 "type_ctor_info.m"
    {
#line 783 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_du_name_ordered_table_3_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv4_STATE_VARIABLE_NameTable_11);
    }
#line 783 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv4_STATE_VARIABLE_NameTable_11));
#line 783 "type_ctor_info.m"
  }
#line 783 "type_ctor_info.m"
}

#line 781 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_4(
#line 781 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 781 "type_ctor_info.m"
{
#line 781 "type_ctor_info.m"
  {
#line 781 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 781 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 781 "type_ctor_info.m"
    {
#line 781 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__781__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 781 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 781 "type_ctor_info.m"
  }
#line 781 "type_ctor_info.m"
}

#line 776 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_3(
#line 776 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 776 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 776 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 776 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3)
#line 776 "type_ctor_info.m"
{
#line 776 "type_ctor_info.m"
  {
#line 776 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 776 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv2_STATE_VARIABLE_PtagTable_19;

#line 776 "type_ctor_info.m"
    {
#line 776 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv2_STATE_VARIABLE_PtagTable_19);
    }
#line 776 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv2_STATE_VARIABLE_PtagTable_19));
#line 776 "type_ctor_info.m"
  }
#line 776 "type_ctor_info.m"
}

#line 775 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_2(
#line 775 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 775 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 775 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2)
#line 775 "type_ctor_info.m"
{
#line 775 "type_ctor_info.m"
  {
#line 775 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 775 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 775 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv1_ResFunctor_3;

#line 775 "type_ctor_info.m"
    {
#line 775 "type_ctor_info.m"
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__is_reserved_functor_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), &backend_libs__type_ctor_info__conv1_ResFunctor_3);
    }
#line 775 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 775 "type_ctor_info.m"
      {
#line 775 "type_ctor_info.m"
        *backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv1_ResFunctor_3));
#line 775 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 775 "type_ctor_info.m"
      }
#line 775 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 775 "type_ctor_info.m"
  }
#line 775 "type_ctor_info.m"
}

#line 774 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_1(
#line 774 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 774 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 774 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2)
#line 774 "type_ctor_info.m"
{
#line 774 "type_ctor_info.m"
  {
#line 774 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 774 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 774 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv0_DuFunctor_3;

#line 774 "type_ctor_info.m"
    {
#line 774 "type_ctor_info.m"
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__is_du_functor_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), &backend_libs__type_ctor_info__conv0_DuFunctor_3);
    }
#line 774 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 774 "type_ctor_info.m"
      {
#line 774 "type_ctor_info.m"
        *backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv0_DuFunctor_3));
#line 774 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 774 "type_ctor_info.m"
      }
#line 774 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 774 "type_ctor_info.m"
  }
#line 774 "type_ctor_info.m"
}

#line 766 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0(
#line 766 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_9,
#line 766 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_10,
#line 766 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_11,
#line 766 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_12,
#line 766 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_13,
#line 766 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
#line 766 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_15,
#line 766 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_16)
#line 766 "type_ctor_info.m"
{
#line 771 "type_ctor_info.m"
  {
#line 771 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 771 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_45_45;
#line 771 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_46_46;
#line 771 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__MaybeResFunctors_17;
#line 771 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__DuFunctors_18;
#line 771 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ResFunctors_19;
#line 771 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__DuPtagTable_20;
#line 771 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__FunctorNumberMap_21;
#line 771 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_30_30;
#line 776 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv3_DuPtagTable_20;

#line 772 "type_ctor_info.m"
    {
#line 772 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(backend_libs__type_ctor_info__TypeCtor_9, backend_libs__type_ctor_info__Ctors_10, (MR_Integer) 0, backend_libs__type_ctor_info__ConsTagMap_11, backend_libs__type_ctor_info__TypeArity_12, backend_libs__type_ctor_info__ModuleInfo_15, &backend_libs__type_ctor_info__MaybeResFunctors_17);
    }
#line 5795 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_45_45 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;
#line 5797 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_46_46 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
#line 774 "type_ctor_info.m"
    {
#line 774 "type_ctor_info.m"
      backend_libs__type_ctor_info__DuFunctors_18 = mercury__list__filter_map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_45_45, backend_libs__type_ctor_info__TypeCtorInfo_46_46, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[23], backend_libs__type_ctor_info__MaybeResFunctors_17);
    }
#line 775 "type_ctor_info.m"
    {
#line 775 "type_ctor_info.m"
      backend_libs__type_ctor_info__ResFunctors_19 = mercury__list__filter_map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_45_45, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[24], backend_libs__type_ctor_info__MaybeResFunctors_17);
    }
#line 776 "type_ctor_info.m"
    {
#line 776 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_30_30 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0);
    }
#line 776 "type_ctor_info.m"
    {
#line 776 "type_ctor_info.m"
      mercury__list__foldl_4_p_0(backend_libs__type_ctor_info__TypeCtorInfo_46_46, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[5], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[25], backend_libs__type_ctor_info__DuFunctors_18, ((MR_Box) (backend_libs__type_ctor_info__V_30_30)), &backend_libs__type_ctor_info__conv3_DuPtagTable_20);
    }
#line 776 "type_ctor_info.m"
    backend_libs__type_ctor_info__DuPtagTable_20 = ((MR_Word) backend_libs__type_ctor_info__conv3_DuPtagTable_20);
#line 778 "type_ctor_info.m"
    {
#line 778 "type_ctor_info.m"
      backend_libs__type_ctor_info__FunctorNumberMap_21 = backend_libs__type_ctor_info__make_functor_number_map_1_f_0(backend_libs__type_ctor_info__Ctors_10);
    }
#line 787 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__ResFunctors_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 780 "type_ctor_info.m"
      {
#line 780 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__DuNameOrderedMap_22;
#line 780 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_38_38;
#line 780 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_44_44;
#line 783 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv5_DuNameOrderedMap_22;

#line 781 "type_ctor_info.m"
        {
#line 781 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 781 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_38_38, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[9]));
#line 781 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_38_38, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_4));
#line 781 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 781 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_38_38, 3) = ((MR_Box) (backend_libs__type_ctor_info__ReservedAddr_14));
#line 781 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_38_38, 4) = ((MR_Box) ((MR_Integer) 1));
#line 781 "type_ctor_info.m"
        }
#line 781 "type_ctor_info.m"
        {
#line 781 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_38_38, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_details\'/8", (MR_String) "ReservedAddr is not does_not_use_reserved_addr");
        }
#line 783 "type_ctor_info.m"
        {
#line 783 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_44_44 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[6]);
        }
#line 783 "type_ctor_info.m"
        {
#line 783 "type_ctor_info.m"
          mercury__list__foldl_4_p_0(backend_libs__type_ctor_info__TypeCtorInfo_46_46, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[7], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[26], backend_libs__type_ctor_info__DuFunctors_18, ((MR_Box) (backend_libs__type_ctor_info__V_44_44)), &backend_libs__type_ctor_info__conv5_DuNameOrderedMap_22);
        }
#line 783 "type_ctor_info.m"
        backend_libs__type_ctor_info__DuNameOrderedMap_22 = ((MR_Word) backend_libs__type_ctor_info__conv5_DuNameOrderedMap_22);
#line 785 "type_ctor_info.m"
        {
#line 785 "type_ctor_info.m"
          MR_Word base;
#line 785 "type_ctor_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 785 "type_ctor_info.m"
          *backend_libs__type_ctor_info__Details_16 = base;
#line 785 "type_ctor_info.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__EqualityAxioms_13));
#line 785 "type_ctor_info.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__DuFunctors_18));
#line 785 "type_ctor_info.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__DuPtagTable_20));
#line 785 "type_ctor_info.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__DuNameOrderedMap_22));
#line 785 "type_ctor_info.m"
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (backend_libs__type_ctor_info__FunctorNumberMap_21));
#line 785 "type_ctor_info.m"
        }
#line 780 "type_ctor_info.m"
      }
#line 787 "type_ctor_info.m"
    else
#line 788 "type_ctor_info.m"
      {
#line 788 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ResNameOrderedMap_25;
#line 788 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_31_31;
#line 788 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_37_37;
#line 791 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv7_ResNameOrderedMap_25;

#line 789 "type_ctor_info.m"
        {
#line 789 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 789 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_31_31, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[9]));
#line 789 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_31_31, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_6));
#line 789 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 789 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_31_31, 3) = ((MR_Box) (backend_libs__type_ctor_info__ReservedAddr_14));
#line 789 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_31_31, 4) = ((MR_Box) ((MR_Integer) 0));
#line 789 "type_ctor_info.m"
        }
#line 789 "type_ctor_info.m"
        {
#line 789 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_31_31, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_details\'/8", (MR_String) "ReservedAddr is not uses_reserved_addr");
        }
#line 791 "type_ctor_info.m"
        {
#line 791 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_37_37 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[8]);
        }
#line 791 "type_ctor_info.m"
        {
#line 791 "type_ctor_info.m"
          mercury__list__foldl_4_p_0(backend_libs__type_ctor_info__TypeCtorInfo_45_45, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[9], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[27], backend_libs__type_ctor_info__MaybeResFunctors_17, ((MR_Box) (backend_libs__type_ctor_info__V_37_37)), &backend_libs__type_ctor_info__conv7_ResNameOrderedMap_25);
        }
#line 791 "type_ctor_info.m"
        backend_libs__type_ctor_info__ResNameOrderedMap_25 = ((MR_Word) backend_libs__type_ctor_info__conv7_ResNameOrderedMap_25);
#line 793 "type_ctor_info.m"
        {
#line 793 "type_ctor_info.m"
          MR_Word base;
#line 793 "type_ctor_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 793 "type_ctor_info.m"
          *backend_libs__type_ctor_info__Details_16 = base;
#line 793 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 793 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__EqualityAxioms_13));
#line 793 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__MaybeResFunctors_17));
#line 793 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__ResFunctors_19));
#line 793 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (backend_libs__type_ctor_info__DuPtagTable_20));
#line 793 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (backend_libs__type_ctor_info__ResNameOrderedMap_25));
#line 793 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (backend_libs__type_ctor_info__FunctorNumberMap_21));
#line 793 "type_ctor_info.m"
        }
#line 788 "type_ctor_info.m"
      }
#line 771 "type_ctor_info.m"
  }
#line 766 "type_ctor_info.m"
}

#line 758 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_reserved_functor_1_f_0(
#line 758 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 758 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ResFunctor_3)
#line 758 "type_ctor_info.m"
{
#line 761 "type_ctor_info.m"
  {
#line 761 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));

#line 761 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 761 "type_ctor_info.m"
      *backend_libs__type_ctor_info__ResFunctor_3 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__HeadVar__1_1), (MR_Integer) 0);
#line 761 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 761 "type_ctor_info.m"
  }
#line 758 "type_ctor_info.m"
}

#line 753 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_du_functor_1_f_0(
#line 753 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 753 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__DuFunctor_3)
#line 753 "type_ctor_info.m"
{
#line 756 "type_ctor_info.m"
  {
#line 756 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 756 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 756 "type_ctor_info.m"
      *backend_libs__type_ctor_info__DuFunctor_3 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__HeadVar__1_1), (MR_Integer) 1);
#line 756 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 756 "type_ctor_info.m"
  }
#line 753 "type_ctor_info.m"
}

#line 733 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_maps_5_p_0(
#line 733 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ForeignEnumFunctor_6,
#line 733 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_0_12,
#line 733 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_13,
#line 733 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_14,
#line 733 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_15)
#line 733 "type_ctor_info.m"
{
#line 739 "type_ctor_info.m"
  {
#line 739 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 739 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_19_19 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
#line 739 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__FunctorName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_6, (MR_Integer) 0)));
#line 739 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__FunctorOrdinal_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_6, (MR_Integer) 1)));
#line 740 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_6, (MR_Integer) 2)));

#line 741 "type_ctor_info.m"
    {
#line 741 "type_ctor_info.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__type_ctor_info__TypeCtorInfo_19_19, backend_libs__type_ctor_info__FunctorOrdinal_10, ((MR_Box) (backend_libs__type_ctor_info__ForeignEnumFunctor_6)), backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_0_12, backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_13);
    }
#line 742 "type_ctor_info.m"
    {
#line 742 "type_ctor_info.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__type_ctor_info__TypeCtorInfo_19_19, ((MR_Box) (backend_libs__type_ctor_info__FunctorName_9)), ((MR_Box) (backend_libs__type_ctor_info__ForeignEnumFunctor_6)), backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_14, backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_15);
#line 742 "type_ctor_info.m"
      return;
    }
#line 739 "type_ctor_info.m"
  }
#line 733 "type_ctor_info.m"
}

#line 700 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_4(
#line 700 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 700 "type_ctor_info.m"
{
#line 700 "type_ctor_info.m"
  {
#line 700 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 700 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 700 "type_ctor_info.m"
    {
#line 700 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__700__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 700 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 700 "type_ctor_info.m"
  }
#line 700 "type_ctor_info.m"
}

#line 694 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_3(
#line 694 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 694 "type_ctor_info.m"
{
#line 694 "type_ctor_info.m"
  {
#line 694 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 694 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 694 "type_ctor_info.m"
    {
#line 694 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__694__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 694 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 694 "type_ctor_info.m"
  }
#line 694 "type_ctor_info.m"
}

#line 691 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_2(
#line 691 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 691 "type_ctor_info.m"
{
#line 691 "type_ctor_info.m"
  {
#line 691 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 691 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 691 "type_ctor_info.m"
    {
#line 691 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__691__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 691 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 691 "type_ctor_info.m"
  }
#line 691 "type_ctor_info.m"
}

#line 689 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_1(
#line 689 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 689 "type_ctor_info.m"
{
#line 689 "type_ctor_info.m"
  {
#line 689 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 689 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 689 "type_ctor_info.m"
    {
#line 689 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__689__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 689 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 689 "type_ctor_info.m"
  }
#line 689 "type_ctor_info.m"
}

#line 681 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(
#line 681 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
#line 681 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Lang_2,
#line 681 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
#line 681 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_4,
#line 681 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_5,
#line 681 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__6_6)
#line 681 "type_ctor_info.m"
{
#line 685 "type_ctor_info.m"
  {
#line 685 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 685 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 685 "type_ctor_info.m"
      *backend_libs__type_ctor_info__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 685 "type_ctor_info.m"
    else
#line 687 "type_ctor_info.m"
      {
#line 687 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorInfo_89_89;
#line 687 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Functor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 0)));
#line 687 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Functors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 1)));
#line 687 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ForeignEnumFunctor_17;
#line 687 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ForeignEnumFunctors_18;
#line 687 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ExistTvars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 0)));
#line 687 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 1)));
#line 687 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 2)));
#line 687 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__FunctorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 3)));
#line 687 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__Arity_24;
#line 687 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConsId_25;
#line 687 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConsTag_26;
#line 687 "type_ctor_info.m"
        MR_String backend_libs__type_ctor_info__ForeignTagValue_29;
#line 687 "type_ctor_info.m"
        MR_String backend_libs__type_ctor_info__FunctorName_61;
#line 687 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_62_62;
#line 687 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_67_67;
#line 687 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_72_72;
#line 687 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_77_77;
#line 687 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_85_85;
#line 688 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info___Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 4)));
#line 697 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv0_ConsTag_26;

#line 689 "type_ctor_info.m"
        {
#line 689 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 689 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_62_62, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[2]));
#line 689 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_62_62, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_1));
#line 689 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 689 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_62_62, 3) = ((MR_Box) (backend_libs__type_ctor_info__ExistTvars_19));
#line 689 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_62_62, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "type_ctor_info.m"
        }
#line 689 "type_ctor_info.m"
        {
#line 689 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_62_62, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "existential arguments in functor in foreign enum");
        }
#line 691 "type_ctor_info.m"
        {
#line 691 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 691 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_67_67, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[3]));
#line 691 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_67_67, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_2));
#line 691 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 691 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_67_67, 3) = ((MR_Box) (backend_libs__type_ctor_info__Constraints_20));
#line 691 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_67_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 691 "type_ctor_info.m"
        }
#line 691 "type_ctor_info.m"
        {
#line 691 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_67_67, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "class constraints on functor in foreign enum");
        }
#line 6285 "backend_libs.type_ctor_info.c"
        backend_libs__type_ctor_info__TypeCtorInfo_89_89 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 693 "type_ctor_info.m"
        {
#line 693 "type_ctor_info.m"
          mercury__list__length_2_p_0(backend_libs__type_ctor_info__TypeCtorInfo_89_89, backend_libs__type_ctor_info__FunctorArgs_22, &backend_libs__type_ctor_info__Arity_24);
        }
#line 694 "type_ctor_info.m"
        {
#line 694 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 694 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_72_72, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[4]));
#line 694 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_72_72, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_3));
#line 694 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 694 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_72_72, 3) = ((MR_Box) (backend_libs__type_ctor_info__Arity_24));
#line 694 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_72_72, 4) = ((MR_Box) ((MR_Integer) 0));
#line 694 "type_ctor_info.m"
        }
#line 694 "type_ctor_info.m"
        {
#line 694 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_72_72, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "functor in foreign enum has nonzero arity");
        }
#line 696 "type_ctor_info.m"
        {
#line 696 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_77_77 = mercury__list__length_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_89_89, backend_libs__type_ctor_info__FunctorArgs_22);
        }
#line 696 "type_ctor_info.m"
        {
#line 696 "type_ctor_info.m"
          backend_libs__type_ctor_info__ConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 696 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 696 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_25, 1) = ((MR_Box) (backend_libs__type_ctor_info__SymName_21));
#line 696 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_25, 2) = ((MR_Box) (backend_libs__type_ctor_info__V_77_77));
#line 696 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_25, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_1));
#line 696 "type_ctor_info.m"
        }
#line 697 "type_ctor_info.m"
        {
#line 697 "type_ctor_info.m"
          mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, backend_libs__type_ctor_info__ConsTagMap_5, ((MR_Box) (backend_libs__type_ctor_info__ConsId_25)), &backend_libs__type_ctor_info__conv0_ConsTag_26);
        }
#line 697 "type_ctor_info.m"
        backend_libs__type_ctor_info__ConsTag_26 = ((MR_Word) backend_libs__type_ctor_info__conv0_ConsTag_26);
#line 703 "type_ctor_info.m"
        if (((((MR_tag((MR_Word) backend_libs__type_ctor_info__ConsTag_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_26, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 699 "type_ctor_info.m"
          {
#line 699 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__ForeignTagLang_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_26, (MR_Integer) 1)));
#line 699 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_81_81;

#line 699 "type_ctor_info.m"
            backend_libs__type_ctor_info__ForeignTagValue_29 = ((MR_String) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_26, (MR_Integer) 2)));
#line 700 "type_ctor_info.m"
            {
#line 700 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 700 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_81_81, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[6]));
#line 700 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_81_81, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_4));
#line 700 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 700 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_81_81, 3) = ((MR_Box) (backend_libs__type_ctor_info__Lang_2));
#line 700 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_81_81, 4) = ((MR_Box) (backend_libs__type_ctor_info__ForeignTagLang_27));
#line 700 "type_ctor_info.m"
            }
#line 700 "type_ctor_info.m"
            {
#line 700 "type_ctor_info.m"
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_81_81, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "language mismatch between foreign tag and foreign enum");
            }
#line 699 "type_ctor_info.m"
          }
#line 703 "type_ctor_info.m"
        else
#line 724 "type_ctor_info.m"
          {
#line 725 "type_ctor_info.m"
            {
#line 725 "type_ctor_info.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "non foreign tag for foreign enum functor");
#line 725 "type_ctor_info.m"
              return;
            }
#line 724 "type_ctor_info.m"
          }
#line 727 "type_ctor_info.m"
        {
#line 727 "type_ctor_info.m"
          backend_libs__type_ctor_info__FunctorName_61 = mdbcomp__prim_data__unqualify_name_1_f_0(backend_libs__type_ctor_info__SymName_21);
        }
#line 728 "type_ctor_info.m"
        {
#line 728 "type_ctor_info.m"
          backend_libs__type_ctor_info__ForeignEnumFunctor_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 728 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_17, 0) = ((MR_Box) (backend_libs__type_ctor_info__FunctorName_61));
#line 728 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_17, 1) = ((MR_Box) (backend_libs__type_ctor_info__NextOrdinal_4));
#line 728 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_17, 2) = ((MR_Box) (backend_libs__type_ctor_info__ForeignTagValue_29));
#line 728 "type_ctor_info.m"
        }
#line 730 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_85_85 = (backend_libs__type_ctor_info__NextOrdinal_4 + (MR_Integer) 1);
#line 730 "type_ctor_info.m"
        {
#line 730 "type_ctor_info.m"
          backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(backend_libs__type_ctor_info__TypeCtor_1, backend_libs__type_ctor_info__Lang_2, backend_libs__type_ctor_info__Functors_14, backend_libs__type_ctor_info__V_85_85, backend_libs__type_ctor_info__ConsTagMap_5, &backend_libs__type_ctor_info__ForeignEnumFunctors_18);
        }
#line 687 "type_ctor_info.m"
        {
#line 687 "type_ctor_info.m"
          MR_Word base;
#line 687 "type_ctor_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "type_ctor_info.m"
          *backend_libs__type_ctor_info__HeadVar__6_6 = base;
#line 687 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__ForeignEnumFunctor_17));
#line 687 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__ForeignEnumFunctors_18));
#line 687 "type_ctor_info.m"
        }
#line 687 "type_ctor_info.m"
      }
#line 685 "type_ctor_info.m"
  }
#line 681 "type_ctor_info.m"
}

#line 1087 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_2(
#line 1087 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 1087 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1)
#line 1087 "type_ctor_info.m"
{
#line 1087 "type_ctor_info.m"
  {
#line 1087 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__wrapper_arg_2;
#line 1087 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 1087 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv4_HeadVar__2_11;

#line 1087 "type_ctor_info.m"
    {
#line 1087 "type_ctor_info.m"
      backend_libs__type_ctor_info__conv4_HeadVar__2_11 = backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1087__1_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1));
    }
#line 1087 "type_ctor_info.m"
    backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv4_HeadVar__2_11));
#line 1087 "type_ctor_info.m"
    return backend_libs__type_ctor_info__wrapper_arg_2;
#line 1087 "type_ctor_info.m"
  }
#line 1087 "type_ctor_info.m"
}

#line 667 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_1(
#line 667 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 667 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 667 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 667 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
#line 667 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
#line 667 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5)
#line 667 "type_ctor_info.m"
{
#line 667 "type_ctor_info.m"
  {
#line 667 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 667 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv1_STATE_VARIABLE_OrdinalMap_13;
#line 667 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_15;

#line 667 "type_ctor_info.m"
    {
#line 667 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_foreign_enum_maps_5_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv1_STATE_VARIABLE_OrdinalMap_13, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_4), &backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_15);
    }
#line 667 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv1_STATE_VARIABLE_OrdinalMap_13));
#line 667 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_5 = ((MR_Box) (backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_15));
#line 667 "type_ctor_info.m"
  }
#line 667 "type_ctor_info.m"
}

#line 651 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0(
#line 651 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_8,
#line 651 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Lang_9,
#line 651 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_10,
#line 651 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_11,
#line 651 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReserveTag_12,
#line 651 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_13,
#line 651 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_14)
#line 651 "type_ctor_info.m"
{
#line 656 "type_ctor_info.m"
  {
#line 656 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 656 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_27_27;
#line 656 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_30_63;
#line 656 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeInfo_31_64;
#line 656 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_33_66;
#line 656 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ForeignEnumFunctors_15;
#line 656 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__OrdinalMap0_16;
#line 656 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__NameMap0_17;
#line 656 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__OrdinalMap_18;
#line 656 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__NameMap_19;
#line 656 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__FunctorNumberMap_20;
#line 656 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__CtorNames_38;
#line 656 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__SortedNameArityMap_40;
#line 656 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_48_48;
#line 656 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_49_49;
#line 656 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_51_51;
#line 656 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_52_52;
#line 667 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv3_OrdinalMap_18;
#line 667 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv2_NameMap_19;

#line 660 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__ReserveTag_12 == (MR_Integer) 1))
#line 661 "type_ctor_info.m"
      {
#line 661 "type_ctor_info.m"
      }
#line 660 "type_ctor_info.m"
    else
#line 658 "type_ctor_info.m"
      {
#line 659 "type_ctor_info.m"
        {
#line 659 "type_ctor_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_details\'/7", (MR_String) "foreign enum with reserved tag");
#line 659 "type_ctor_info.m"
          return;
        }
#line 658 "type_ctor_info.m"
      }
#line 663 "type_ctor_info.m"
    {
#line 663 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(backend_libs__type_ctor_info__TypeCtor_8, backend_libs__type_ctor_info__Lang_9, backend_libs__type_ctor_info__Ctors_10, (MR_Integer) 0, backend_libs__type_ctor_info__ConsTagMap_11, &backend_libs__type_ctor_info__ForeignEnumFunctors_15);
    }
#line 6587 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_27_27 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
#line 665 "type_ctor_info.m"
    {
#line 665 "type_ctor_info.m"
      backend_libs__type_ctor_info__OrdinalMap0_16 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__type_ctor_info__TypeCtorInfo_27_27);
    }
#line 666 "type_ctor_info.m"
    {
#line 666 "type_ctor_info.m"
      backend_libs__type_ctor_info__NameMap0_17 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__type_ctor_info__TypeCtorInfo_27_27);
    }
#line 667 "type_ctor_info.m"
    {
#line 667 "type_ctor_info.m"
      mercury__list__foldl2_6_p_0(backend_libs__type_ctor_info__TypeCtorInfo_27_27, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[3], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[4], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[21], backend_libs__type_ctor_info__ForeignEnumFunctors_15, ((MR_Box) (backend_libs__type_ctor_info__OrdinalMap0_16)), &backend_libs__type_ctor_info__conv3_OrdinalMap_18, ((MR_Box) (backend_libs__type_ctor_info__NameMap0_17)), &backend_libs__type_ctor_info__conv2_NameMap_19);
    }
#line 667 "type_ctor_info.m"
    backend_libs__type_ctor_info__OrdinalMap_18 = ((MR_Word) backend_libs__type_ctor_info__conv3_OrdinalMap_18);
#line 667 "type_ctor_info.m"
    backend_libs__type_ctor_info__NameMap_19 = ((MR_Word) backend_libs__type_ctor_info__conv2_NameMap_19);
#line 6608 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_30_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 6610 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeInfo_31_64 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[11];
#line 1086 "type_ctor_info.m"
    {
#line 1086 "type_ctor_info.m"
      backend_libs__type_ctor_info__CtorNames_38 = mercury__list__map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_30_63, backend_libs__type_ctor_info__TypeInfo_31_64, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[22], backend_libs__type_ctor_info__Ctors_10);
    }
#line 6617 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_33_66 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1091 "type_ctor_info.m"
    {
#line 1091 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_48_48 = mercury__list__sort_1_f_0(backend_libs__type_ctor_info__TypeInfo_31_64, backend_libs__type_ctor_info__CtorNames_38);
    }
#line 1092 "type_ctor_info.m"
    {
#line 1092 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_52_52 = mercury__list__length_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_30_63, backend_libs__type_ctor_info__Ctors_10);
    }
#line 1092 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_51_51 = (backend_libs__type_ctor_info__V_52_52 - (MR_Integer) 1);
#line 1091 "type_ctor_info.m"
    {
#line 1091 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_49_49 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, backend_libs__type_ctor_info__V_51_51);
    }
#line 1090 "type_ctor_info.m"
    {
#line 1090 "type_ctor_info.m"
      backend_libs__type_ctor_info__SortedNameArityMap_40 = mercury__map__from_corresponding_lists_2_f_0(backend_libs__type_ctor_info__TypeInfo_31_64, backend_libs__type_ctor_info__TypeCtorInfo_33_66, backend_libs__type_ctor_info__V_48_48, backend_libs__type_ctor_info__V_49_49);
    }
#line 1093 "type_ctor_info.m"
    {
#line 1093 "type_ctor_info.m"
      backend_libs__type_ctor_info__FunctorNumberMap_20 = mercury__map__apply_to_list_2_f_0(backend_libs__type_ctor_info__TypeInfo_31_64, backend_libs__type_ctor_info__TypeCtorInfo_33_66, backend_libs__type_ctor_info__CtorNames_38, backend_libs__type_ctor_info__SortedNameArityMap_40);
    }
#line 670 "type_ctor_info.m"
    {
#line 670 "type_ctor_info.m"
      MR_Word base;
#line 670 "type_ctor_info.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 670 "type_ctor_info.m"
      *backend_libs__type_ctor_info__Details_14 = base;
#line 670 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__Lang_9));
#line 670 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__EqualityAxioms_13));
#line 670 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__ForeignEnumFunctors_15));
#line 670 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__OrdinalMap_18));
#line 670 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (backend_libs__type_ctor_info__NameMap_19));
#line 670 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (backend_libs__type_ctor_info__FunctorNumberMap_20));
#line 670 "type_ctor_info.m"
    }
#line 656 "type_ctor_info.m"
  }
#line 651 "type_ctor_info.m"
}

#line 638 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_enum_maps_5_p_0(
#line 638 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EnumFunctor_6,
#line 638 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_0_11,
#line 638 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_12,
#line 638 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_13,
#line 638 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_14)
#line 638 "type_ctor_info.m"
{
#line 642 "type_ctor_info.m"
  {
#line 642 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 642 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_18_18 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
#line 642 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__FunctorName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__EnumFunctor_6, (MR_Integer) 0)));
#line 642 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__Ordinal_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__EnumFunctor_6, (MR_Integer) 1)));

#line 644 "type_ctor_info.m"
    {
#line 644 "type_ctor_info.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__type_ctor_info__TypeCtorInfo_18_18, backend_libs__type_ctor_info__Ordinal_10, ((MR_Box) (backend_libs__type_ctor_info__EnumFunctor_6)), backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_0_11, backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_12);
    }
#line 645 "type_ctor_info.m"
    {
#line 645 "type_ctor_info.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__type_ctor_info__TypeCtorInfo_18_18, ((MR_Box) (backend_libs__type_ctor_info__FunctorName_9)), ((MR_Box) (backend_libs__type_ctor_info__EnumFunctor_6)), backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_13, backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_14);
#line 645 "type_ctor_info.m"
      return;
    }
#line 642 "type_ctor_info.m"
  }
#line 638 "type_ctor_info.m"
}

#line 631 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_4(
#line 631 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 631 "type_ctor_info.m"
{
#line 631 "type_ctor_info.m"
  {
#line 631 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 631 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 631 "type_ctor_info.m"
    {
#line 631 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__631__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 631 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 631 "type_ctor_info.m"
  }
#line 631 "type_ctor_info.m"
}

#line 627 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_3(
#line 627 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 627 "type_ctor_info.m"
{
#line 627 "type_ctor_info.m"
  {
#line 627 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 627 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 627 "type_ctor_info.m"
    {
#line 627 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__627__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 627 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 627 "type_ctor_info.m"
  }
#line 627 "type_ctor_info.m"
}

#line 624 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_2(
#line 624 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 624 "type_ctor_info.m"
{
#line 624 "type_ctor_info.m"
  {
#line 624 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 624 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 624 "type_ctor_info.m"
    {
#line 624 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__624__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 624 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 624 "type_ctor_info.m"
  }
#line 624 "type_ctor_info.m"
}

#line 622 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_1(
#line 622 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 622 "type_ctor_info.m"
{
#line 622 "type_ctor_info.m"
  {
#line 622 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 622 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 622 "type_ctor_info.m"
    {
#line 622 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__622__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 622 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 622 "type_ctor_info.m"
  }
#line 622 "type_ctor_info.m"
}

#line 615 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0(
#line 615 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
#line 615 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 615 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_3,
#line 615 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_4,
#line 615 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__5_5)
#line 615 "type_ctor_info.m"
{
#line 618 "type_ctor_info.m"
  {
#line 618 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 618 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 618 "type_ctor_info.m"
      *backend_libs__type_ctor_info__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "type_ctor_info.m"
    else
#line 620 "type_ctor_info.m"
      {
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorInfo_50_50;
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Functor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Functors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 1)));
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__EnumFunctor_14;
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__EnumFunctors_15;
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ExistTvars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 0)));
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 1)));
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 2)));
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__FunctorArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 3)));
#line 620 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__Arity_21;
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConsId_22;
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConsTag_23;
#line 620 "type_ctor_info.m"
        MR_String backend_libs__type_ctor_info__FunctorName_24;
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_25_25;
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_30_30;
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_35_35;
#line 620 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_40_40;
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_41_41;
#line 620 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_45_45;
#line 620 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_46_46;
#line 621 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info___Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 4)));
#line 630 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv0_ConsTag_23;

#line 622 "type_ctor_info.m"
        {
#line 622 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 622 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_25_25, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[2]));
#line 622 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_25_25, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_1));
#line 622 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 622 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_25_25, 3) = ((MR_Box) (backend_libs__type_ctor_info__ExistTvars_16));
#line 622 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_25_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "type_ctor_info.m"
        }
#line 622 "type_ctor_info.m"
        {
#line 622 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_25_25, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "existential arguments in functor in enum");
        }
#line 624 "type_ctor_info.m"
        {
#line 624 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 624 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_30_30, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[3]));
#line 624 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_30_30, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_2));
#line 624 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 624 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_30_30, 3) = ((MR_Box) (backend_libs__type_ctor_info__Constraints_17));
#line 624 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_30_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 624 "type_ctor_info.m"
        }
#line 624 "type_ctor_info.m"
        {
#line 624 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_30_30, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "class constraints on functor in enum");
        }
#line 6935 "backend_libs.type_ctor_info.c"
        backend_libs__type_ctor_info__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 626 "type_ctor_info.m"
        {
#line 626 "type_ctor_info.m"
          mercury__list__length_2_p_0(backend_libs__type_ctor_info__TypeCtorInfo_50_50, backend_libs__type_ctor_info__FunctorArgs_19, &backend_libs__type_ctor_info__Arity_21);
        }
#line 627 "type_ctor_info.m"
        {
#line 627 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 627 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_35_35, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[4]));
#line 627 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_35_35, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_3));
#line 627 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 627 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_35_35, 3) = ((MR_Box) (backend_libs__type_ctor_info__Arity_21));
#line 627 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_35_35, 4) = ((MR_Box) ((MR_Integer) 0));
#line 627 "type_ctor_info.m"
        }
#line 627 "type_ctor_info.m"
        {
#line 627 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_35_35, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "functor in enum has nonzero arity");
        }
#line 629 "type_ctor_info.m"
        {
#line 629 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_40_40 = mercury__list__length_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_50_50, backend_libs__type_ctor_info__FunctorArgs_19);
        }
#line 629 "type_ctor_info.m"
        {
#line 629 "type_ctor_info.m"
          backend_libs__type_ctor_info__ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 629 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 629 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_22, 1) = ((MR_Box) (backend_libs__type_ctor_info__SymName_18));
#line 629 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_22, 2) = ((MR_Box) (backend_libs__type_ctor_info__V_40_40));
#line 629 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_22, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_1));
#line 629 "type_ctor_info.m"
        }
#line 630 "type_ctor_info.m"
        {
#line 630 "type_ctor_info.m"
          mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, backend_libs__type_ctor_info__ConsTagMap_4, ((MR_Box) (backend_libs__type_ctor_info__ConsId_22)), &backend_libs__type_ctor_info__conv0_ConsTag_23);
        }
#line 630 "type_ctor_info.m"
        backend_libs__type_ctor_info__ConsTag_23 = ((MR_Word) backend_libs__type_ctor_info__conv0_ConsTag_23);
#line 631 "type_ctor_info.m"
        {
#line 631 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 631 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__V_45_45, 1) = ((MR_Box) (backend_libs__type_ctor_info__NextOrdinal_3));
#line 631 "type_ctor_info.m"
        }
#line 631 "type_ctor_info.m"
        {
#line 631 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 631 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_41_41, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[5]));
#line 631 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_41_41, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_4));
#line 631 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 631 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_41_41, 3) = ((MR_Box) (backend_libs__type_ctor_info__ConsTag_23));
#line 631 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_41_41, 4) = ((MR_Box) (backend_libs__type_ctor_info__V_45_45));
#line 631 "type_ctor_info.m"
        }
#line 631 "type_ctor_info.m"
        {
#line 631 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_41_41, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "mismatch on constant assigned to functor in enum");
        }
#line 633 "type_ctor_info.m"
        {
#line 633 "type_ctor_info.m"
          backend_libs__type_ctor_info__FunctorName_24 = mdbcomp__prim_data__unqualify_name_1_f_0(backend_libs__type_ctor_info__SymName_18);
        }
#line 634 "type_ctor_info.m"
        {
#line 634 "type_ctor_info.m"
          backend_libs__type_ctor_info__EnumFunctor_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 634 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__EnumFunctor_14, 0) = ((MR_Box) (backend_libs__type_ctor_info__FunctorName_24));
#line 634 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__EnumFunctor_14, 1) = ((MR_Box) (backend_libs__type_ctor_info__NextOrdinal_3));
#line 634 "type_ctor_info.m"
        }
#line 635 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_46_46 = (backend_libs__type_ctor_info__NextOrdinal_3 + (MR_Integer) 1);
#line 635 "type_ctor_info.m"
        {
#line 635 "type_ctor_info.m"
          backend_libs__type_ctor_info__make_enum_functors_5_p_0(backend_libs__type_ctor_info__TypeCtor_1, backend_libs__type_ctor_info__Functors_11, backend_libs__type_ctor_info__V_46_46, backend_libs__type_ctor_info__ConsTagMap_4, &backend_libs__type_ctor_info__EnumFunctors_15);
        }
#line 620 "type_ctor_info.m"
        {
#line 620 "type_ctor_info.m"
          MR_Word base;
#line 620 "type_ctor_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "type_ctor_info.m"
          *backend_libs__type_ctor_info__HeadVar__5_5 = base;
#line 620 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__EnumFunctor_14));
#line 620 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__EnumFunctors_15));
#line 620 "type_ctor_info.m"
        }
#line 620 "type_ctor_info.m"
      }
#line 618 "type_ctor_info.m"
  }
#line 615 "type_ctor_info.m"
}

#line 1087 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_2(
#line 1087 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 1087 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1)
#line 1087 "type_ctor_info.m"
{
#line 1087 "type_ctor_info.m"
  {
#line 1087 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__wrapper_arg_2;
#line 1087 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 1087 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv4_HeadVar__2_11;

#line 1087 "type_ctor_info.m"
    {
#line 1087 "type_ctor_info.m"
      backend_libs__type_ctor_info__conv4_HeadVar__2_11 = backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1087__1_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1));
    }
#line 1087 "type_ctor_info.m"
    backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv4_HeadVar__2_11));
#line 1087 "type_ctor_info.m"
    return backend_libs__type_ctor_info__wrapper_arg_2;
#line 1087 "type_ctor_info.m"
  }
#line 1087 "type_ctor_info.m"
}

#line 596 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_1(
#line 596 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 596 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 596 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 596 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
#line 596 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
#line 596 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5)
#line 596 "type_ctor_info.m"
{
#line 596 "type_ctor_info.m"
  {
#line 596 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 596 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv1_STATE_VARIABLE_ValueMap_12;
#line 596 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_14;

#line 596 "type_ctor_info.m"
    {
#line 596 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_enum_maps_5_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv1_STATE_VARIABLE_ValueMap_12, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_4), &backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_14);
    }
#line 596 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv1_STATE_VARIABLE_ValueMap_12));
#line 596 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_5 = ((MR_Box) (backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_14));
#line 596 "type_ctor_info.m"
  }
#line 596 "type_ctor_info.m"
}

#line 581 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(
#line 581 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_7,
#line 581 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_8,
#line 581 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_9,
#line 581 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReserveTag_10,
#line 581 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_11,
#line 581 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_12)
#line 581 "type_ctor_info.m"
{
#line 586 "type_ctor_info.m"
  {
#line 586 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 586 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_28_28;
#line 586 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_30_64;
#line 586 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeInfo_31_65;
#line 586 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_33_67;
#line 586 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__EnumFunctors_13;
#line 586 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ValueMap0_14;
#line 586 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__NameMap0_15;
#line 586 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ValueMap_16;
#line 586 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__NameMap_17;
#line 586 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__IsDummy_19;
#line 586 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__FunctorNumberMap_20;
#line 586 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__CtorNames_39;
#line 586 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__SortedNameArityMap_41;
#line 586 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_49_49;
#line 586 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_50_50;
#line 586 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_52_52;
#line 586 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_53_53;
#line 596 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv3_ValueMap_16;
#line 596 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv2_NameMap_17;
#line 598 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_26_26;
#line 598 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_18_18;

#line 590 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__ReserveTag_10 == (MR_Integer) 1))
#line 591 "type_ctor_info.m"
      {
#line 591 "type_ctor_info.m"
      }
#line 590 "type_ctor_info.m"
    else
#line 588 "type_ctor_info.m"
      {
#line 589 "type_ctor_info.m"
        {
#line 589 "type_ctor_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_mercury_enum_details\'/6", (MR_String) "enum with reserved tag");
#line 589 "type_ctor_info.m"
          return;
        }
#line 588 "type_ctor_info.m"
      }
#line 593 "type_ctor_info.m"
    {
#line 593 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_enum_functors_5_p_0(backend_libs__type_ctor_info__TypeCtor_7, backend_libs__type_ctor_info__Ctors_8, (MR_Integer) 0, backend_libs__type_ctor_info__ConsTagMap_9, &backend_libs__type_ctor_info__EnumFunctors_13);
    }
#line 7223 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_28_28 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
#line 594 "type_ctor_info.m"
    {
#line 594 "type_ctor_info.m"
      backend_libs__type_ctor_info__ValueMap0_14 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__type_ctor_info__TypeCtorInfo_28_28);
    }
#line 595 "type_ctor_info.m"
    {
#line 595 "type_ctor_info.m"
      backend_libs__type_ctor_info__NameMap0_15 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__type_ctor_info__TypeCtorInfo_28_28);
    }
#line 596 "type_ctor_info.m"
    {
#line 596 "type_ctor_info.m"
      mercury__list__foldl2_6_p_0(backend_libs__type_ctor_info__TypeCtorInfo_28_28, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[1], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[2], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[19], backend_libs__type_ctor_info__EnumFunctors_13, ((MR_Box) (backend_libs__type_ctor_info__ValueMap0_14)), &backend_libs__type_ctor_info__conv3_ValueMap_16, ((MR_Box) (backend_libs__type_ctor_info__NameMap0_15)), &backend_libs__type_ctor_info__conv2_NameMap_17);
    }
#line 596 "type_ctor_info.m"
    backend_libs__type_ctor_info__ValueMap_16 = ((MR_Word) backend_libs__type_ctor_info__conv3_ValueMap_16);
#line 596 "type_ctor_info.m"
    backend_libs__type_ctor_info__NameMap_17 = ((MR_Word) backend_libs__type_ctor_info__conv2_NameMap_17);
#line 598 "type_ctor_info.m"
    backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__Ctors_8)) == (MR_mktag((MR_Integer) 1)));
#line 598 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 598 "type_ctor_info.m"
      {
#line 598 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Ctors_8, (MR_Integer) 0)));
#line 598 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Ctors_8, (MR_Integer) 1)));
#line 598 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "type_ctor_info.m"
      }
#line 600 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 599 "type_ctor_info.m"
      backend_libs__type_ctor_info__IsDummy_19 = (MR_Integer) 1;
#line 600 "type_ctor_info.m"
    else
#line 601 "type_ctor_info.m"
      backend_libs__type_ctor_info__IsDummy_19 = (MR_Integer) 0;
#line 7266 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_30_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 7268 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeInfo_31_65 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[11];
#line 1086 "type_ctor_info.m"
    {
#line 1086 "type_ctor_info.m"
      backend_libs__type_ctor_info__CtorNames_39 = mercury__list__map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_30_64, backend_libs__type_ctor_info__TypeInfo_31_65, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[20], backend_libs__type_ctor_info__Ctors_8);
    }
#line 7275 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_33_67 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1091 "type_ctor_info.m"
    {
#line 1091 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_49_49 = mercury__list__sort_1_f_0(backend_libs__type_ctor_info__TypeInfo_31_65, backend_libs__type_ctor_info__CtorNames_39);
    }
#line 1092 "type_ctor_info.m"
    {
#line 1092 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_53_53 = mercury__list__length_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_30_64, backend_libs__type_ctor_info__Ctors_8);
    }
#line 1092 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_52_52 = (backend_libs__type_ctor_info__V_53_53 - (MR_Integer) 1);
#line 1091 "type_ctor_info.m"
    {
#line 1091 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_50_50 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, backend_libs__type_ctor_info__V_52_52);
    }
#line 1090 "type_ctor_info.m"
    {
#line 1090 "type_ctor_info.m"
      backend_libs__type_ctor_info__SortedNameArityMap_41 = mercury__map__from_corresponding_lists_2_f_0(backend_libs__type_ctor_info__TypeInfo_31_65, backend_libs__type_ctor_info__TypeCtorInfo_33_67, backend_libs__type_ctor_info__V_49_49, backend_libs__type_ctor_info__V_50_50);
    }
#line 1093 "type_ctor_info.m"
    {
#line 1093 "type_ctor_info.m"
      backend_libs__type_ctor_info__FunctorNumberMap_20 = mercury__map__apply_to_list_2_f_0(backend_libs__type_ctor_info__TypeInfo_31_65, backend_libs__type_ctor_info__TypeCtorInfo_33_67, backend_libs__type_ctor_info__CtorNames_39, backend_libs__type_ctor_info__SortedNameArityMap_41);
    }
#line 604 "type_ctor_info.m"
    {
#line 604 "type_ctor_info.m"
      MR_Word base;
#line 604 "type_ctor_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 604 "type_ctor_info.m"
      *backend_libs__type_ctor_info__Details_12 = base;
#line 604 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__EqualityAxioms_11));
#line 604 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__EnumFunctors_13));
#line 604 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__ValueMap_16));
#line 604 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__NameMap_17));
#line 604 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__type_ctor_info__IsDummy_19));
#line 604 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__type_ctor_info__FunctorNumberMap_20));
#line 604 "type_ctor_info.m"
    }
#line 586 "type_ctor_info.m"
  }
#line 581 "type_ctor_info.m"
}

#line 561 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_notag_details_6_p_0(
#line 561 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_7,
#line 561 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__SymName_8,
#line 561 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ArgType_9,
#line 561 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__MaybeArgName_10,
#line 561 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_11,
#line 561 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_12)
#line 561 "type_ctor_info.m"
{
#line 565 "type_ctor_info.m"
  {
#line 565 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 565 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__FunctorName_13;
#line 565 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__MaybePseudoTypeInfo_16;
#line 565 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Functor_17;

#line 566 "type_ctor_info.m"
    {
#line 566 "type_ctor_info.m"
      backend_libs__type_ctor_info__FunctorName_13 = mdbcomp__prim_data__unqualify_name_1_f_0(backend_libs__type_ctor_info__SymName_8);
    }
#line 570 "type_ctor_info.m"
    {
#line 570 "type_ctor_info.m"
      backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(backend_libs__type_ctor_info__ArgType_9, backend_libs__type_ctor_info__TypeArity_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__MaybePseudoTypeInfo_16);
    }
#line 572 "type_ctor_info.m"
    {
#line 572 "type_ctor_info.m"
      backend_libs__type_ctor_info__Functor_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 572 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_17, 0) = ((MR_Box) (backend_libs__type_ctor_info__FunctorName_13));
#line 572 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_17, 1) = ((MR_Box) (backend_libs__type_ctor_info__MaybePseudoTypeInfo_16));
#line 572 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_17, 2) = ((MR_Box) (backend_libs__type_ctor_info__MaybeArgName_10));
#line 572 "type_ctor_info.m"
    }
#line 573 "type_ctor_info.m"
    {
#line 573 "type_ctor_info.m"
      MR_Word base;
#line 573 "type_ctor_info.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 573 "type_ctor_info.m"
      *backend_libs__type_ctor_info__Details_12 = base;
#line 573 "type_ctor_info.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 573 "type_ctor_info.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__EqualityAxioms_11));
#line 573 "type_ctor_info.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__Functor_17));
#line 573 "type_ctor_info.m"
    }
#line 565 "type_ctor_info.m"
  }
#line 561 "type_ctor_info.m"
}

#line 455 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__impl_type_ctor_4_p_0(
#line 455 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__1_1,
#line 455 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__2_2,
#line 455 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__3_3,
#line 455 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4)
#line 455 "type_ctor_info.m"
{
#line 458 "type_ctor_info.m"
  {
#line 458 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__HeadVar__3_3 == (MR_Integer) 0);

#line 458 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 458 "type_ctor_info.m"
      {
#line 458 "type_ctor_info.m"
        if ((strcmp(backend_libs__type_ctor_info__HeadVar__1_1, (MR_String) "table_builtin") == 0))
#line 472 "type_ctor_info.m"
          {
#line 472 "type_ctor_info.m"
            backend_libs__type_ctor_info__succeeded = (strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "ml_subgoal") == 0);
#line 472 "type_ctor_info.m"
            if (backend_libs__type_ctor_info__succeeded)
#line 472 "type_ctor_info.m"
              {
#line 472 "type_ctor_info.m"
                *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Integer) 12;
#line 472 "type_ctor_info.m"
                backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 472 "type_ctor_info.m"
              }
#line 472 "type_ctor_info.m"
          }
#line 458 "type_ctor_info.m"
        else
#line 458 "type_ctor_info.m"
          if ((strcmp(backend_libs__type_ctor_info__HeadVar__1_1, (MR_String) "private_builtin") == 0))
#line 458 "type_ctor_info.m"
            if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "curfr") == 0))
#line 467 "type_ctor_info.m"
              {
#line 467 "type_ctor_info.m"
                *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Integer) 3;
#line 467 "type_ctor_info.m"
                backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 467 "type_ctor_info.m"
              }
#line 458 "type_ctor_info.m"
            else
#line 458 "type_ctor_info.m"
              if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "maxfr") == 0))
#line 468 "type_ctor_info.m"
                {
#line 468 "type_ctor_info.m"
                  *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Integer) 2;
#line 468 "type_ctor_info.m"
                  backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 468 "type_ctor_info.m"
                }
#line 458 "type_ctor_info.m"
              else
#line 458 "type_ctor_info.m"
                if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "redofr") == 0))
#line 469 "type_ctor_info.m"
                  {
#line 469 "type_ctor_info.m"
                    *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Integer) 4;
#line 469 "type_ctor_info.m"
                    backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 469 "type_ctor_info.m"
                  }
#line 458 "type_ctor_info.m"
                else
#line 458 "type_ctor_info.m"
                  if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "succip") == 0))
#line 466 "type_ctor_info.m"
                    {
#line 466 "type_ctor_info.m"
                      *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Integer) 1;
#line 466 "type_ctor_info.m"
                      backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 466 "type_ctor_info.m"
                    }
#line 458 "type_ctor_info.m"
                  else
#line 458 "type_ctor_info.m"
                    if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "ticket") == 0))
#line 471 "type_ctor_info.m"
                      {
#line 471 "type_ctor_info.m"
                        *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Integer) 6;
#line 471 "type_ctor_info.m"
                        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 471 "type_ctor_info.m"
                      }
#line 458 "type_ctor_info.m"
                    else
#line 458 "type_ctor_info.m"
                      if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "trail_ptr") == 0))
#line 470 "type_ctor_info.m"
                        {
#line 470 "type_ctor_info.m"
                          *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Integer) 7;
#line 470 "type_ctor_info.m"
                          backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 470 "type_ctor_info.m"
                        }
#line 458 "type_ctor_info.m"
                      else
#line 458 "type_ctor_info.m"
                        if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "type_info") == 0))
#line 460 "type_ctor_info.m"
                          {
#line 460 "type_ctor_info.m"
                            *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Integer) 8;
#line 460 "type_ctor_info.m"
                            backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 460 "type_ctor_info.m"
                          }
#line 458 "type_ctor_info.m"
                        else
#line 458 "type_ctor_info.m"
                          if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "heap_pointer") == 0))
#line 465 "type_ctor_info.m"
                            {
#line 465 "type_ctor_info.m"
                              *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Integer) 0;
#line 465 "type_ctor_info.m"
                              backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 465 "type_ctor_info.m"
                            }
#line 458 "type_ctor_info.m"
                          else
#line 458 "type_ctor_info.m"
                            if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "type_ctor_info") == 0))
#line 458 "type_ctor_info.m"
                              {
#line 458 "type_ctor_info.m"
                                *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Integer) 9;
#line 458 "type_ctor_info.m"
                                backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 458 "type_ctor_info.m"
                              }
#line 458 "type_ctor_info.m"
                            else
#line 458 "type_ctor_info.m"
                              if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "typeclass_info") == 0))
#line 461 "type_ctor_info.m"
                                {
#line 461 "type_ctor_info.m"
                                  *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Integer) 10;
#line 461 "type_ctor_info.m"
                                  backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 461 "type_ctor_info.m"
                                }
#line 458 "type_ctor_info.m"
                              else
#line 458 "type_ctor_info.m"
                                if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "base_typeclass_info") == 0))
#line 463 "type_ctor_info.m"
                                  {
#line 463 "type_ctor_info.m"
                                    *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Integer) 11;
#line 463 "type_ctor_info.m"
                                    backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 463 "type_ctor_info.m"
                                  }
#line 458 "type_ctor_info.m"
                                else
#line 458 "type_ctor_info.m"
                                  backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 458 "type_ctor_info.m"
          else
#line 458 "type_ctor_info.m"
            backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 458 "type_ctor_info.m"
      }
#line 458 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 458 "type_ctor_info.m"
  }
#line 455 "type_ctor_info.m"
}

#line 430 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__builtin_type_ctor_4_p_0(
#line 430 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__1_1,
#line 430 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__2_2,
#line 430 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__3_3,
#line 430 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4)
#line 430 "type_ctor_info.m"
{
#line 436 "type_ctor_info.m"
  {
#line 436 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 436 "type_ctor_info.m"
    if ((strcmp(backend_libs__type_ctor_info__HeadVar__1_1, (MR_String) "builtin") == 0))
#line 436 "type_ctor_info.m"
      {
#line 441 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__HeadVar__3_3 == (MR_Integer) 0);
#line 436 "type_ctor_info.m"
        if (backend_libs__type_ctor_info__succeeded)
#line 436 "type_ctor_info.m"
          {
#line 436 "type_ctor_info.m"
            if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "int") == 0))
#line 436 "type_ctor_info.m"
              {
#line 436 "type_ctor_info.m"
                *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 436 "type_ctor_info.m"
                backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 436 "type_ctor_info.m"
              }
#line 436 "type_ctor_info.m"
            else
#line 436 "type_ctor_info.m"
              if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "func") == 0))
#line 446 "type_ctor_info.m"
                {
#line 446 "type_ctor_info.m"
                  *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 446 "type_ctor_info.m"
                  backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 446 "type_ctor_info.m"
                }
#line 436 "type_ctor_info.m"
              else
#line 436 "type_ctor_info.m"
                if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "pred") == 0))
#line 445 "type_ctor_info.m"
                  {
#line 445 "type_ctor_info.m"
                    *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 445 "type_ctor_info.m"
                    backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 445 "type_ctor_info.m"
                  }
#line 436 "type_ctor_info.m"
                else
#line 436 "type_ctor_info.m"
                  if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "void") == 0))
#line 440 "type_ctor_info.m"
                    {
#line 440 "type_ctor_info.m"
                      *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 440 "type_ctor_info.m"
                      backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 440 "type_ctor_info.m"
                    }
#line 436 "type_ctor_info.m"
                  else
#line 436 "type_ctor_info.m"
                    if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "float") == 0))
#line 438 "type_ctor_info.m"
                      {
#line 438 "type_ctor_info.m"
                        *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 438 "type_ctor_info.m"
                        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 438 "type_ctor_info.m"
                      }
#line 436 "type_ctor_info.m"
                    else
#line 436 "type_ctor_info.m"
                      if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "tuple") == 0))
#line 447 "type_ctor_info.m"
                        {
#line 447 "type_ctor_info.m"
                          *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 447 "type_ctor_info.m"
                          backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 447 "type_ctor_info.m"
                        }
#line 436 "type_ctor_info.m"
                      else
#line 436 "type_ctor_info.m"
                        if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "string") == 0))
#line 437 "type_ctor_info.m"
                          {
#line 437 "type_ctor_info.m"
                            *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 437 "type_ctor_info.m"
                            backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 437 "type_ctor_info.m"
                          }
#line 436 "type_ctor_info.m"
                        else
#line 436 "type_ctor_info.m"
                          if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "c_pointer") == 0))
#line 441 "type_ctor_info.m"
                            {
#line 441 "type_ctor_info.m"
                              *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__type_ctor_info_scalar_common_4[0]);
#line 441 "type_ctor_info.m"
                              backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 441 "type_ctor_info.m"
                            }
#line 436 "type_ctor_info.m"
                          else
#line 436 "type_ctor_info.m"
                            if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "character") == 0))
#line 439 "type_ctor_info.m"
                              {
#line 439 "type_ctor_info.m"
                                *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 439 "type_ctor_info.m"
                                backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 439 "type_ctor_info.m"
                              }
#line 436 "type_ctor_info.m"
                            else
#line 436 "type_ctor_info.m"
                              if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "stable_c_pointer") == 0))
#line 443 "type_ctor_info.m"
                                {
#line 443 "type_ctor_info.m"
                                  *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__type_ctor_info_scalar_common_4[1]);
#line 443 "type_ctor_info.m"
                                  backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 443 "type_ctor_info.m"
                                }
#line 436 "type_ctor_info.m"
                              else
#line 436 "type_ctor_info.m"
                                backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 436 "type_ctor_info.m"
          }
#line 436 "type_ctor_info.m"
      }
#line 436 "type_ctor_info.m"
    else
#line 436 "type_ctor_info.m"
      if ((strcmp(backend_libs__type_ctor_info__HeadVar__1_1, (MR_String) "type_desc") == 0))
#line 436 "type_ctor_info.m"
        {
#line 451 "type_ctor_info.m"
          backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__HeadVar__3_3 == (MR_Integer) 0);
#line 436 "type_ctor_info.m"
          if (backend_libs__type_ctor_info__succeeded)
#line 436 "type_ctor_info.m"
            {
#line 436 "type_ctor_info.m"
              if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "type_desc") == 0))
#line 453 "type_ctor_info.m"
                {
#line 453 "type_ctor_info.m"
                  *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 453 "type_ctor_info.m"
                  backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 453 "type_ctor_info.m"
                }
#line 436 "type_ctor_info.m"
              else
#line 436 "type_ctor_info.m"
                if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "type_ctor_desc") == 0))
#line 449 "type_ctor_info.m"
                  {
#line 449 "type_ctor_info.m"
                    *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 449 "type_ctor_info.m"
                    backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 449 "type_ctor_info.m"
                  }
#line 436 "type_ctor_info.m"
                else
#line 436 "type_ctor_info.m"
                  if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "pseudo_type_desc") == 0))
#line 451 "type_ctor_info.m"
                    {
#line 451 "type_ctor_info.m"
                      *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 451 "type_ctor_info.m"
                      backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 451 "type_ctor_info.m"
                    }
#line 436 "type_ctor_info.m"
                  else
#line 436 "type_ctor_info.m"
                    backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 436 "type_ctor_info.m"
            }
#line 436 "type_ctor_info.m"
        }
#line 436 "type_ctor_info.m"
      else
#line 436 "type_ctor_info.m"
        if ((strcmp(backend_libs__type_ctor_info__HeadVar__1_1, (MR_String) "private_builtin") == 0))
#line 448 "type_ctor_info.m"
          {
#line 448 "type_ctor_info.m"
            backend_libs__type_ctor_info__succeeded = (strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "ref") == 0);
#line 448 "type_ctor_info.m"
            if (backend_libs__type_ctor_info__succeeded)
#line 448 "type_ctor_info.m"
              {
#line 448 "type_ctor_info.m"
                backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__HeadVar__3_3 == (MR_Integer) 1);
#line 448 "type_ctor_info.m"
                if (backend_libs__type_ctor_info__succeeded)
#line 448 "type_ctor_info.m"
                  {
#line 448 "type_ctor_info.m"
                    *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 448 "type_ctor_info.m"
                    backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 448 "type_ctor_info.m"
                  }
#line 448 "type_ctor_info.m"
              }
#line 448 "type_ctor_info.m"
          }
#line 436 "type_ctor_info.m"
        else
#line 436 "type_ctor_info.m"
          backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 436 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 436 "type_ctor_info.m"
  }
#line 430 "type_ctor_info.m"
}

#line 294 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_info_3_p_0(
#line 294 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtorGenInfo_4,
#line 294 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_5,
#line 294 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__RttiData_6)
#line 294 "type_ctor_info.m"
{
#line 297 "type_ctor_info.m"
  {
#line 297 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_95_95;
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_97_97;
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 0)));
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 1)));
#line 297 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 2)));
#line 297 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__TypeArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 3)));
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__HldsDefn_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 5)));
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__UnifyPredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 6)));
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ComparePredProcId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 7)));
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__UnifyPredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__UnifyPredProcId_13, (MR_Integer) 0)));
#line 297 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__UnifyProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__UnifyPredProcId_13, (MR_Integer) 1)));
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__UnifyProcLabel_17;
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ComparePredId_18;
#line 297 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__CompareProcId_19;
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__CompareProcLabel_20;
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__UnifyUniv_21;
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__CompareUniv_22;
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeBody_23;
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Details_28;
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorData_74;
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83;
#line 297 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87;
#line 298 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info___Status_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 4)));
#line 314 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_25_25;
#line 330 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__BuiltinCtor_27;
#line 326 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__ModuleStr1_26;

#line 301 "type_ctor_info.m"
    {
#line 301 "type_ctor_info.m"
      backend_libs__type_ctor_info__UnifyProcLabel_17 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(backend_libs__type_ctor_info__ModuleInfo_5, backend_libs__type_ctor_info__UnifyPredId_15, backend_libs__type_ctor_info__UnifyProcId_16);
    }
#line 303 "type_ctor_info.m"
    backend_libs__type_ctor_info__ComparePredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ComparePredProcId_14, (MR_Integer) 0)));
#line 303 "type_ctor_info.m"
    backend_libs__type_ctor_info__CompareProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ComparePredProcId_14, (MR_Integer) 1)));
#line 304 "type_ctor_info.m"
    {
#line 304 "type_ctor_info.m"
      backend_libs__type_ctor_info__CompareProcLabel_20 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(backend_libs__type_ctor_info__ModuleInfo_5, backend_libs__type_ctor_info__ComparePredId_18, backend_libs__type_ctor_info__CompareProcId_19);
    }
#line 7922 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_95_95 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;
#line 306 "type_ctor_info.m"
    {
#line 306 "type_ctor_info.m"
      mercury__univ__type_to_univ_2_p_1(backend_libs__type_ctor_info__TypeCtorInfo_95_95, ((MR_Box) (backend_libs__type_ctor_info__UnifyProcLabel_17)), &backend_libs__type_ctor_info__UnifyUniv_21);
    }
#line 307 "type_ctor_info.m"
    {
#line 307 "type_ctor_info.m"
      mercury__univ__type_to_univ_2_p_1(backend_libs__type_ctor_info__TypeCtorInfo_95_95, ((MR_Box) (backend_libs__type_ctor_info__CompareProcLabel_20)), &backend_libs__type_ctor_info__CompareUniv_22);
    }
#line 308 "type_ctor_info.m"
    {
#line 308 "type_ctor_info.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__type_ctor_info__HldsDefn_12, &backend_libs__type_ctor_info__TypeBody_23);
    }
#line 314 "type_ctor_info.m"
    backend_libs__type_ctor_info__succeeded = ((((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 314 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 314 "type_ctor_info.m"
      {
#line 314 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 1)));
#line 315 "type_ctor_info.m"
        {
#line 315 "type_ctor_info.m"
          backend_libs__type_ctor_info__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(backend_libs__type_ctor_info__ModuleInfo_5);
        }
#line 315 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = !(backend_libs__type_ctor_info__succeeded);
#line 314 "type_ctor_info.m"
      }
#line 318 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 317 "type_ctor_info.m"
      {
#line 317 "type_ctor_info.m"
        {
#line 317 "type_ctor_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.construct_type_ctor_info\'/3", (MR_String) "abstract_type");
#line 317 "type_ctor_info.m"
          return;
        }
#line 317 "type_ctor_info.m"
      }
#line 318 "type_ctor_info.m"
    else
#line 319 "type_ctor_info.m"
      {
#line 319 "type_ctor_info.m"
      }
#line 326 "type_ctor_info.m"
    backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__ModuleName_8)) == (MR_mktag((MR_Integer) 0)));
#line 326 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 326 "type_ctor_info.m"
      {
#line 326 "type_ctor_info.m"
        backend_libs__type_ctor_info__ModuleStr1_26 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ModuleName_8, (MR_Integer) 0)));
#line 327 "type_ctor_info.m"
        {
#line 327 "type_ctor_info.m"
          backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__builtin_type_ctor_4_p_0(backend_libs__type_ctor_info__ModuleStr1_26, backend_libs__type_ctor_info__TypeName_9, backend_libs__type_ctor_info__TypeArity_10, &backend_libs__type_ctor_info__BuiltinCtor_27);
        }
#line 326 "type_ctor_info.m"
      }
#line 330 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 329 "type_ctor_info.m"
      {
#line 329 "type_ctor_info.m"
        backend_libs__type_ctor_info__Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "type_ctor_info.m"
        MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 329 "type_ctor_info.m"
        MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__BuiltinCtor_27));
#line 329 "type_ctor_info.m"
      }
#line 330 "type_ctor_info.m"
    else
#line 335 "type_ctor_info.m"
      {
#line 335 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ImplCtor_30;
#line 331 "type_ctor_info.m"
        MR_String backend_libs__type_ctor_info__ModuleStr_29;

#line 331 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__ModuleName_8)) == (MR_mktag((MR_Integer) 0)));
#line 331 "type_ctor_info.m"
        if (backend_libs__type_ctor_info__succeeded)
#line 331 "type_ctor_info.m"
          {
#line 331 "type_ctor_info.m"
            backend_libs__type_ctor_info__ModuleStr_29 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ModuleName_8, (MR_Integer) 0)));
#line 332 "type_ctor_info.m"
            {
#line 332 "type_ctor_info.m"
              backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__impl_type_ctor_4_p_0(backend_libs__type_ctor_info__ModuleStr_29, backend_libs__type_ctor_info__TypeName_9, backend_libs__type_ctor_info__TypeArity_10, &backend_libs__type_ctor_info__ImplCtor_30);
            }
#line 331 "type_ctor_info.m"
          }
#line 335 "type_ctor_info.m"
        if (backend_libs__type_ctor_info__succeeded)
#line 334 "type_ctor_info.m"
          {
#line 334 "type_ctor_info.m"
            backend_libs__type_ctor_info__Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "type_ctor_info.m"
            MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 334 "type_ctor_info.m"
            MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__ImplCtor_30));
#line 334 "type_ctor_info.m"
          }
#line 335 "type_ctor_info.m"
        else
#line 339 "type_ctor_info.m"
          if (((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_23)) == (MR_mktag((MR_Integer) 1))))
#line 375 "type_ctor_info.m"
            {
#line 375 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__Ctors_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)));
#line 375 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__ConsTagMap_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 1)));
#line 375 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__DuTypeKind_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 3)));
#line 375 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__MaybeUserEqComp_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 4)));
#line 375 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__ReservedTag_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 375 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__ReservedAddr_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 375 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__EqualityAxioms_54;
#line 373 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info___CheaperTagTest_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 2)));
#line 373 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info___MaybeDirectArgCtors_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 5)));
#line 373 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info___IsForeignType_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 7)));

#line 379 "type_ctor_info.m"
              if ((backend_libs__type_ctor_info__MaybeUserEqComp_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "type_ctor_info.m"
                backend_libs__type_ctor_info__EqualityAxioms_54 = (MR_Integer) 0;
#line 379 "type_ctor_info.m"
              else
#line 378 "type_ctor_info.m"
                backend_libs__type_ctor_info__EqualityAxioms_54 = (MR_Integer) 1;
#line 387 "type_ctor_info.m"
              if ((backend_libs__type_ctor_info__DuTypeKind_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 393 "type_ctor_info.m"
                {
#line 393 "type_ctor_info.m"
                  backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(backend_libs__type_ctor_info__TypeCtor_7, backend_libs__type_ctor_info__Ctors_44, backend_libs__type_ctor_info__ConsTagMap_45, backend_libs__type_ctor_info__ReservedTag_50, backend_libs__type_ctor_info__EqualityAxioms_54, &backend_libs__type_ctor_info__Details_28);
                }
#line 387 "type_ctor_info.m"
              else
#line 387 "type_ctor_info.m"
                if ((backend_libs__type_ctor_info__DuTypeKind_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 402 "type_ctor_info.m"
                  {
#line 402 "type_ctor_info.m"
                    backend_libs__type_ctor_info__make_du_details_8_p_0(backend_libs__type_ctor_info__TypeCtor_7, backend_libs__type_ctor_info__Ctors_44, backend_libs__type_ctor_info__ConsTagMap_45, backend_libs__type_ctor_info__TypeArity_10, backend_libs__type_ctor_info__EqualityAxioms_54, backend_libs__type_ctor_info__ReservedAddr_51, backend_libs__type_ctor_info__ModuleInfo_5, &backend_libs__type_ctor_info__Details_28);
                  }
#line 387 "type_ctor_info.m"
                else
#line 387 "type_ctor_info.m"
                  if ((backend_libs__type_ctor_info__DuTypeKind_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "type_ctor_info.m"
                    {
#line 385 "type_ctor_info.m"
                      backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(backend_libs__type_ctor_info__TypeCtor_7, backend_libs__type_ctor_info__Ctors_44, backend_libs__type_ctor_info__ConsTagMap_45, backend_libs__type_ctor_info__ReservedTag_50, backend_libs__type_ctor_info__EqualityAxioms_54, &backend_libs__type_ctor_info__Details_28);
                    }
#line 387 "type_ctor_info.m"
                  else
#line 387 "type_ctor_info.m"
                    if (((MR_tag((MR_Word) backend_libs__type_ctor_info__DuTypeKind_47)) == (MR_mktag((MR_Integer) 1))))
#line 388 "type_ctor_info.m"
                      {
#line 388 "type_ctor_info.m"
                        MR_Word backend_libs__type_ctor_info__Lang_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__DuTypeKind_47, (MR_Integer) 0)));

#line 389 "type_ctor_info.m"
                        {
#line 389 "type_ctor_info.m"
                          backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0(backend_libs__type_ctor_info__TypeCtor_7, backend_libs__type_ctor_info__Lang_55, backend_libs__type_ctor_info__Ctors_44, backend_libs__type_ctor_info__ConsTagMap_45, backend_libs__type_ctor_info__ReservedTag_50, backend_libs__type_ctor_info__EqualityAxioms_54, &backend_libs__type_ctor_info__Details_28);
                        }
#line 388 "type_ctor_info.m"
                      }
#line 387 "type_ctor_info.m"
                    else
#line 397 "type_ctor_info.m"
                      {
#line 397 "type_ctor_info.m"
                        MR_Word backend_libs__type_ctor_info__FunctorName_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__DuTypeKind_47, (MR_Integer) 0)));
#line 397 "type_ctor_info.m"
                        MR_Word backend_libs__type_ctor_info__ArgType_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__DuTypeKind_47, (MR_Integer) 1)));
#line 397 "type_ctor_info.m"
                        MR_Word backend_libs__type_ctor_info__MaybeArgName_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__DuTypeKind_47, (MR_Integer) 2)));

#line 398 "type_ctor_info.m"
                        {
#line 398 "type_ctor_info.m"
                          backend_libs__type_ctor_info__make_notag_details_6_p_0(backend_libs__type_ctor_info__TypeArity_10, backend_libs__type_ctor_info__FunctorName_56, backend_libs__type_ctor_info__ArgType_57, backend_libs__type_ctor_info__MaybeArgName_58, backend_libs__type_ctor_info__EqualityAxioms_54, &backend_libs__type_ctor_info__Details_28);
                        }
#line 397 "type_ctor_info.m"
                      }
#line 375 "type_ctor_info.m"
            }
#line 339 "type_ctor_info.m"
          else
#line 339 "type_ctor_info.m"
            if (((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_23)) == (MR_mktag((MR_Integer) 2))))
#line 365 "type_ctor_info.m"
              {
#line 365 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__Type_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)));
#line 365 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__MaybePseudoTypeInfo_90;

#line 369 "type_ctor_info.m"
                {
#line 369 "type_ctor_info.m"
                  backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(backend_libs__type_ctor_info__Type_43, backend_libs__type_ctor_info__TypeArity_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__MaybePseudoTypeInfo_90);
                }
#line 371 "type_ctor_info.m"
                {
#line 371 "type_ctor_info.m"
                  backend_libs__type_ctor_info__Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 371 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__MaybePseudoTypeInfo_90));
#line 371 "type_ctor_info.m"
                }
#line 365 "type_ctor_info.m"
              }
#line 339 "type_ctor_info.m"
            else
#line 339 "type_ctor_info.m"
              if (((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_23)) == (MR_mktag((MR_Integer) 0))))
#line 352 "type_ctor_info.m"
                {
#line 352 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__ForeignBody_38 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__TypeBody_23), (MR_Integer) 0);
#line 352 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__Assertions_41;
#line 352 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__IsStable_42;
#line 353 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_39_39;
#line 353 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_40_40;
#line 356 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__TypeCtorInfo_96_96;
#line 356 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_79_79;

#line 353 "type_ctor_info.m"
                  {
#line 353 "type_ctor_info.m"
                    backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(backend_libs__type_ctor_info__ModuleInfo_5, backend_libs__type_ctor_info__ForeignBody_38, &backend_libs__type_ctor_info__V_39_39, &backend_libs__type_ctor_info__V_40_40, &backend_libs__type_ctor_info__Assertions_41);
                  }
#line 8188 "backend_libs.type_ctor_info.c"
                  backend_libs__type_ctor_info__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;
#line 356 "type_ctor_info.m"
                  {
#line 356 "type_ctor_info.m"
                    backend_libs__type_ctor_info__succeeded = mercury__list__member_2_p_0(backend_libs__type_ctor_info__TypeCtorInfo_96_96, ((MR_Box) ((MR_Integer) 0)), backend_libs__type_ctor_info__Assertions_41);
                  }
#line 356 "type_ctor_info.m"
                  if (backend_libs__type_ctor_info__succeeded)
#line 356 "type_ctor_info.m"
                    {
#line 357 "type_ctor_info.m"
                      backend_libs__type_ctor_info__V_79_79 = (MR_Integer) 1;
#line 357 "type_ctor_info.m"
                      {
#line 357 "type_ctor_info.m"
                        backend_libs__type_ctor_info__succeeded = mercury__list__member_2_p_0(backend_libs__type_ctor_info__TypeCtorInfo_96_96, ((MR_Box) (backend_libs__type_ctor_info__V_79_79)), backend_libs__type_ctor_info__Assertions_41);
                      }
#line 356 "type_ctor_info.m"
                    }
#line 360 "type_ctor_info.m"
                  if (backend_libs__type_ctor_info__succeeded)
#line 359 "type_ctor_info.m"
                    backend_libs__type_ctor_info__IsStable_42 = (MR_Integer) 0;
#line 360 "type_ctor_info.m"
                  else
#line 361 "type_ctor_info.m"
                    backend_libs__type_ctor_info__IsStable_42 = (MR_Integer) 1;
#line 363 "type_ctor_info.m"
                  {
#line 363 "type_ctor_info.m"
                    backend_libs__type_ctor_info__Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 363 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__IsStable_42));
#line 363 "type_ctor_info.m"
                  }
#line 352 "type_ctor_info.m"
                }
#line 339 "type_ctor_info.m"
              else
#line 339 "type_ctor_info.m"
                if (((((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 337 "type_ctor_info.m"
                  {
#line 338 "type_ctor_info.m"
                    {
#line 338 "type_ctor_info.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.construct_type_ctor_info\'/3", (MR_String) "abstract_type");
#line 338 "type_ctor_info.m"
                      return;
                    }
#line 337 "type_ctor_info.m"
                  }
#line 339 "type_ctor_info.m"
                else
#line 343 "type_ctor_info.m"
                  {
#line 343 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__SolverTypeDetails_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 1)));
#line 343 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__RepnType_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SolverTypeDetails_32, (MR_Integer) 0)));
#line 343 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__MaybePseudoTypeInfo_37;
#line 343 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info___MaybeUserEqComp_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 2)));
#line 344 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SolverTypeDetails_32, (MR_Integer) 1)));
#line 344 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SolverTypeDetails_32, (MR_Integer) 2)));
#line 344 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SolverTypeDetails_32, (MR_Integer) 3)));
#line 344 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SolverTypeDetails_32, (MR_Integer) 4)));

#line 348 "type_ctor_info.m"
                    {
#line 348 "type_ctor_info.m"
                      backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(backend_libs__type_ctor_info__RepnType_34, backend_libs__type_ctor_info__TypeArity_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__MaybePseudoTypeInfo_37);
                    }
#line 350 "type_ctor_info.m"
                    {
#line 350 "type_ctor_info.m"
                      backend_libs__type_ctor_info__Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "type_ctor_info.m"
                      MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 350 "type_ctor_info.m"
                      MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__MaybePseudoTypeInfo_37));
#line 350 "type_ctor_info.m"
                    }
#line 343 "type_ctor_info.m"
                  }
#line 335 "type_ctor_info.m"
      }
#line 8283 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_97_97 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_type_ctor_flag_0;
#line 408 "type_ctor_info.m"
    {
#line 408 "type_ctor_info.m"
      backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83 = mercury__set__init_0_f_0(backend_libs__type_ctor_info__TypeCtorInfo_97_97);
    }
#line 418 "type_ctor_info.m"
    if (((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_23)) == (MR_mktag((MR_Integer) 1))))
#line 410 "type_ctor_info.m"
      {
#line 410 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__BodyReservedTag_66 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 410 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85;
#line 410 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)));
#line 410 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 1)));
#line 410 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 2)));
#line 410 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 3)));
#line 410 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 4)));
#line 410 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 5)));
#line 410 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 410 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 7)));

#line 411 "type_ctor_info.m"
        {
#line 411 "type_ctor_info.m"
          mercury__set__insert_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_97_97, ((MR_Box) ((MR_Integer) 2)), backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83, &backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85);
        }
#line 415 "type_ctor_info.m"
        if ((backend_libs__type_ctor_info__BodyReservedTag_66 == (MR_Integer) 1))
#line 416 "type_ctor_info.m"
          backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87 = backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85;
#line 415 "type_ctor_info.m"
        else
#line 413 "type_ctor_info.m"
          {
#line 414 "type_ctor_info.m"
            {
#line 414 "type_ctor_info.m"
              mercury__set__insert_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_97_97, ((MR_Box) ((MR_Integer) 0)), backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85, &backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87);
            }
#line 413 "type_ctor_info.m"
          }
#line 410 "type_ctor_info.m"
      }
#line 418 "type_ctor_info.m"
    else
#line 418 "type_ctor_info.m"
      if (((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_23)) == (MR_mktag((MR_Integer) 2))))
#line 419 "type_ctor_info.m"
        backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87 = backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83;
#line 418 "type_ctor_info.m"
      else
#line 418 "type_ctor_info.m"
        if (((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_23)) == (MR_mktag((MR_Integer) 0))))
#line 420 "type_ctor_info.m"
          backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87 = backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83;
#line 418 "type_ctor_info.m"
        else
#line 418 "type_ctor_info.m"
          if (((((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 422 "type_ctor_info.m"
            backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87 = backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83;
#line 418 "type_ctor_info.m"
          else
#line 421 "type_ctor_info.m"
            backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87 = backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83;
#line 425 "type_ctor_info.m"
    {
#line 425 "type_ctor_info.m"
      backend_libs__type_ctor_info__TypeCtorData_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 425 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 0) = ((MR_Box) ((MR_Integer) 15));
#line 425 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 1) = ((MR_Box) (backend_libs__type_ctor_info__ModuleName_8));
#line 425 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 2) = ((MR_Box) (backend_libs__type_ctor_info__TypeName_9));
#line 425 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeArity_10));
#line 425 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 4) = ((MR_Box) (backend_libs__type_ctor_info__UnifyUniv_21));
#line 425 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 5) = ((MR_Box) (backend_libs__type_ctor_info__CompareUniv_22));
#line 425 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 6) = ((MR_Box) (backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87));
#line 425 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 7) = ((MR_Box) (backend_libs__type_ctor_info__Details_28));
#line 425 "type_ctor_info.m"
    }
#line 428 "type_ctor_info.m"
    *backend_libs__type_ctor_info__RttiData_6 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) backend_libs__type_ctor_info__TypeCtorData_74);
#line 297 "type_ctor_info.m"
  }
#line 294 "type_ctor_info.m"
}

#line 280 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_infos_6_p_0(
#line 280 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 280 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 280 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0_3,
#line 280 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_4,
#line 280 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Static_0_5,
#line 280 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_Static_6)
#line 280 "type_ctor_info.m"
{
#line 285 "type_ctor_info.m"
  while (MR_TRUE)
#line 285 "type_ctor_info.m"
    {
#line 285 "type_ctor_info.m"
      /* tailcall optimized into a loop */
#line 285 "type_ctor_info.m"
      {
#line 285 "type_ctor_info.m"
        MR_bool backend_libs__type_ctor_info__succeeded;

#line 285 "type_ctor_info.m"
        if ((backend_libs__type_ctor_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "type_ctor_info.m"
          {
#line 285 "type_ctor_info.m"
            *backend_libs__type_ctor_info__STATE_VARIABLE_Static_6 = backend_libs__type_ctor_info__STATE_VARIABLE_Static_0_5;
#line 285 "type_ctor_info.m"
            *backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_4 = backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0_3;
#line 285 "type_ctor_info.m"
          }
#line 285 "type_ctor_info.m"
        else
#line 287 "type_ctor_info.m"
          {
#line 287 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TypeCtorGenInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 0)));
#line 287 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TypeCtorGenInfos_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TypeCtorCModule_19;
#line 287 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_24_24;

#line 288 "type_ctor_info.m"
            {
#line 288 "type_ctor_info.m"
              backend_libs__type_ctor_info__construct_type_ctor_info_3_p_0(backend_libs__type_ctor_info__TypeCtorGenInfo_14, backend_libs__type_ctor_info__HeadVar__2_2, &backend_libs__type_ctor_info__TypeCtorCModule_19);
            }
#line 289 "type_ctor_info.m"
            {
#line 289 "type_ctor_info.m"
              backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "type_ctor_info.m"
              MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_24_24, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtorCModule_19));
#line 289 "type_ctor_info.m"
              MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_24_24, 1) = ((MR_Box) (backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0_3));
#line 289 "type_ctor_info.m"
            }
#line 290 "type_ctor_info.m"
            /* direct tailcall eliminated */
#line 290 "type_ctor_info.m"
            {
#line 290 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__HeadVar__1__tmp_copy_1 = backend_libs__type_ctor_info__TypeCtorGenInfos_15;
#line 290 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0__tmp_copy_3 = backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_24_24;

#line 290 "type_ctor_info.m"
              backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0_3 = backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0__tmp_copy_3;
#line 290 "type_ctor_info.m"
              backend_libs__type_ctor_info__HeadVar__1_1 = backend_libs__type_ctor_info__HeadVar__1__tmp_copy_1;
#line 290 "type_ctor_info.m"
            }
#line 290 "type_ctor_info.m"
            continue;
#line 287 "type_ctor_info.m"
          }
#line 285 "type_ctor_info.m"
      }
#line 285 "type_ctor_info.m"
      break;
#line 285 "type_ctor_info.m"
    }
#line 280 "type_ctor_info.m"
}

#line 230 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_info_7_p_0(
#line 230 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_8,
#line 230 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_9,
#line 230 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleName_10,
#line 230 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__TypeName_11,
#line 230 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_12,
#line 230 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeDefn_13,
#line 230 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__TypeCtorGenInfo_14)
#line 230 "type_ctor_info.m"
{
#line 235 "type_ctor_info.m"
  {
#line 235 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 235 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Status_15;
#line 235 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Globals_16;
#line 235 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__SpecMap_17;
#line 235 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__SpecialPreds_18;
#line 235 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Unify_24;
#line 235 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Compare_28;

#line 236 "type_ctor_info.m"
    {
#line 236 "type_ctor_info.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(backend_libs__type_ctor_info__TypeDefn_13, &backend_libs__type_ctor_info__Status_15);
    }
#line 237 "type_ctor_info.m"
    {
#line 237 "type_ctor_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__type_ctor_info__ModuleInfo_8, &backend_libs__type_ctor_info__Globals_16);
    }
#line 238 "type_ctor_info.m"
    {
#line 238 "type_ctor_info.m"
      hlds__hlds_module__module_info_get_special_pred_map_2_p_0(backend_libs__type_ctor_info__ModuleInfo_8, &backend_libs__type_ctor_info__SpecMap_17);
    }
#line 239 "type_ctor_info.m"
    {
#line 239 "type_ctor_info.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__type_ctor_info__Globals_16, (MR_Integer) 275, &backend_libs__type_ctor_info__SpecialPreds_18);
    }
#line 243 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__SpecialPreds_18 == (MR_Integer) 0))
#line 244 "type_ctor_info.m"
      {
#line 244 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Body_19;
#line 244 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_33_33;
#line 246 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_45_45;
#line 246 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_46_46;
#line 246 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_47_47;
#line 246 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_48_48;
#line 246 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_49_49;
#line 246 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_50_50;
#line 246 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_51_51;
#line 246 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_52_52;
#line 246 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info___UserDefinedEquality_20;

#line 245 "type_ctor_info.m"
        {
#line 245 "type_ctor_info.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__type_ctor_info__TypeDefn_13, &backend_libs__type_ctor_info__Body_19);
        }
#line 246 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__Body_19)) == (MR_mktag((MR_Integer) 1)));
#line 246 "type_ctor_info.m"
        if (backend_libs__type_ctor_info__succeeded)
#line 246 "type_ctor_info.m"
          {
#line 246 "type_ctor_info.m"
            backend_libs__type_ctor_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 0)));
#line 246 "type_ctor_info.m"
            backend_libs__type_ctor_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 1)));
#line 246 "type_ctor_info.m"
            backend_libs__type_ctor_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 2)));
#line 246 "type_ctor_info.m"
            backend_libs__type_ctor_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 3)));
#line 246 "type_ctor_info.m"
            backend_libs__type_ctor_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 4)));
#line 246 "type_ctor_info.m"
            backend_libs__type_ctor_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 5)));
#line 246 "type_ctor_info.m"
            backend_libs__type_ctor_info__V_50_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 246 "type_ctor_info.m"
            backend_libs__type_ctor_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 246 "type_ctor_info.m"
            backend_libs__type_ctor_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 7)));
#line 246 "type_ctor_info.m"
            backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 246 "type_ctor_info.m"
            if (backend_libs__type_ctor_info__succeeded)
#line 246 "type_ctor_info.m"
              backend_libs__type_ctor_info___UserDefinedEquality_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__V_33_33, (MR_Integer) 0)));
#line 246 "type_ctor_info.m"
          }
#line 244 "type_ctor_info.m"
      }
#line 243 "type_ctor_info.m"
    else
#line 242 "type_ctor_info.m"
      backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 258 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 249 "type_ctor_info.m"
      {
#line 249 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeInfo_53_53;
#line 249 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorInfo_54_54;
#line 249 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__UnifyPredId_21;
#line 249 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__UnifyProcInt_22;
#line 249 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__UnifyProcId_23;
#line 249 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ComparePredId_25;
#line 249 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__CompareProcInt_26;
#line 249 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__CompareProcId_27;
#line 249 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_34_34;
#line 249 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_37_37;
#line 249 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv0_UnifyPredId_21;
#line 254 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv1_ComparePredId_25;

#line 249 "type_ctor_info.m"
        {
#line 249 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_34_34, 0) = ((MR_Box) ((MR_Integer) 0));
#line 249 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_34_34, 1) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9));
#line 249 "type_ctor_info.m"
        }
#line 8647 "backend_libs.type_ctor_info.c"
        backend_libs__type_ctor_info__TypeInfo_53_53 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[0];
#line 8649 "backend_libs.type_ctor_info.c"
        backend_libs__type_ctor_info__TypeCtorInfo_54_54 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 249 "type_ctor_info.m"
        {
#line 249 "type_ctor_info.m"
          mercury__map__lookup_3_p_0(backend_libs__type_ctor_info__TypeInfo_53_53, backend_libs__type_ctor_info__TypeCtorInfo_54_54, backend_libs__type_ctor_info__SpecMap_17, ((MR_Box) (backend_libs__type_ctor_info__V_34_34)), &backend_libs__type_ctor_info__conv0_UnifyPredId_21);
        }
#line 249 "type_ctor_info.m"
        backend_libs__type_ctor_info__UnifyPredId_21 = ((MR_Word) backend_libs__type_ctor_info__conv0_UnifyPredId_21);
#line 250 "type_ctor_info.m"
        {
#line 250 "type_ctor_info.m"
          hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 0, &backend_libs__type_ctor_info__UnifyProcInt_22);
        }
#line 251 "type_ctor_info.m"
        {
#line 251 "type_ctor_info.m"
          hlds__hlds_pred__proc_id_to_int_2_p_1(&backend_libs__type_ctor_info__UnifyProcId_23, backend_libs__type_ctor_info__UnifyProcInt_22);
        }
#line 252 "type_ctor_info.m"
        {
#line 252 "type_ctor_info.m"
          backend_libs__type_ctor_info__Unify_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 252 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_24, 0) = ((MR_Box) (backend_libs__type_ctor_info__UnifyPredId_21));
#line 252 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_24, 1) = ((MR_Box) (backend_libs__type_ctor_info__UnifyProcId_23));
#line 252 "type_ctor_info.m"
        }
#line 254 "type_ctor_info.m"
        {
#line 254 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 254 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_37_37, 0) = ((MR_Box) ((MR_Integer) 2));
#line 254 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_37_37, 1) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9));
#line 254 "type_ctor_info.m"
        }
#line 254 "type_ctor_info.m"
        {
#line 254 "type_ctor_info.m"
          mercury__map__lookup_3_p_0(backend_libs__type_ctor_info__TypeInfo_53_53, backend_libs__type_ctor_info__TypeCtorInfo_54_54, backend_libs__type_ctor_info__SpecMap_17, ((MR_Box) (backend_libs__type_ctor_info__V_37_37)), &backend_libs__type_ctor_info__conv1_ComparePredId_25);
        }
#line 254 "type_ctor_info.m"
        backend_libs__type_ctor_info__ComparePredId_25 = ((MR_Word) backend_libs__type_ctor_info__conv1_ComparePredId_25);
#line 255 "type_ctor_info.m"
        {
#line 255 "type_ctor_info.m"
          hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 2, &backend_libs__type_ctor_info__CompareProcInt_26);
        }
#line 256 "type_ctor_info.m"
        {
#line 256 "type_ctor_info.m"
          hlds__hlds_pred__proc_id_to_int_2_p_1(&backend_libs__type_ctor_info__CompareProcId_27, backend_libs__type_ctor_info__CompareProcInt_26);
        }
#line 257 "type_ctor_info.m"
        {
#line 257 "type_ctor_info.m"
          backend_libs__type_ctor_info__Compare_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Compare_28, 0) = ((MR_Box) (backend_libs__type_ctor_info__ComparePredId_25));
#line 257 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Compare_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__CompareProcId_27));
#line 257 "type_ctor_info.m"
        }
#line 249 "type_ctor_info.m"
      }
#line 258 "type_ctor_info.m"
    else
#line 260 "type_ctor_info.m"
      {
#line 260 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__PredId_29;
#line 260 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__ProcId_30;
#line 260 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_40_40;

#line 259 "type_ctor_info.m"
        {
#line 259 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_40_40 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
        }
#line 259 "type_ctor_info.m"
        {
#line 259 "type_ctor_info.m"
          hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(backend_libs__type_ctor_info__ModuleInfo_8, backend_libs__type_ctor_info__V_40_40, (MR_String) "unused", (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__PredId_29, &backend_libs__type_ctor_info__ProcId_30);
        }
#line 261 "type_ctor_info.m"
        {
#line 261 "type_ctor_info.m"
          backend_libs__type_ctor_info__Unify_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 261 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_24, 0) = ((MR_Box) (backend_libs__type_ctor_info__PredId_29));
#line 261 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_24, 1) = ((MR_Box) (backend_libs__type_ctor_info__ProcId_30));
#line 261 "type_ctor_info.m"
        }
#line 263 "type_ctor_info.m"
        backend_libs__type_ctor_info__Compare_28 = backend_libs__type_ctor_info__Unify_24;
#line 260 "type_ctor_info.m"
      }
#line 265 "type_ctor_info.m"
    {
#line 265 "type_ctor_info.m"
      MR_Word base;
#line 265 "type_ctor_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 265 "type_ctor_info.m"
      *backend_libs__type_ctor_info__TypeCtorGenInfo_14 = base;
#line 265 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9));
#line 265 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__ModuleName_10));
#line 265 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__TypeName_11));
#line 265 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeArity_12));
#line 265 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__type_ctor_info__Status_15));
#line 265 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__type_ctor_info__TypeDefn_13));
#line 265 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__type_ctor_info__Unify_24));
#line 265 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__type_ctor_info__Compare_28));
#line 265 "type_ctor_info.m"
    }
#line 235 "type_ctor_info.m"
  }
#line 230 "type_ctor_info.m"
}

#line 206 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0_1(
#line 206 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 206 "type_ctor_info.m"
{
#line 206 "type_ctor_info.m"
  {
#line 206 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 206 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 206 "type_ctor_info.m"
    {
#line 206 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__206__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 206 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 206 "type_ctor_info.m"
  }
#line 206 "type_ctor_info.m"
}

#line 195 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(
#line 195 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 195 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 195 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
#line 195 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4)
#line 195 "type_ctor_info.m"
{
#line 198 "type_ctor_info.m"
  {
#line 198 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 198 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "type_ctor_info.m"
      *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 198 "type_ctor_info.m"
    else
#line 200 "type_ctor_info.m"
      {
#line 200 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 0)));
#line 200 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtors_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 1)));
#line 200 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorGenInfo_11;
#line 200 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorGenInfos_12;
#line 200 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SymName_13;
#line 200 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__TypeArity_14;

#line 201 "type_ctor_info.m"
        {
#line 201 "type_ctor_info.m"
          backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(backend_libs__type_ctor_info__HeadVar__1_1, backend_libs__type_ctor_info__HeadVar__2_2, backend_libs__type_ctor_info__TypeCtors_10, &backend_libs__type_ctor_info__TypeCtorGenInfos_12);
        }
#line 203 "type_ctor_info.m"
        backend_libs__type_ctor_info__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtor_9, (MR_Integer) 0)));
#line 203 "type_ctor_info.m"
        backend_libs__type_ctor_info__TypeArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtor_9, (MR_Integer) 1)));
#line 210 "type_ctor_info.m"
        if (((MR_tag((MR_Word) backend_libs__type_ctor_info__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 205 "type_ctor_info.m"
          {
#line 205 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TypeModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__SymName_13, (MR_Integer) 0)));
#line 205 "type_ctor_info.m"
            MR_String backend_libs__type_ctor_info__TypeName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__SymName_13, (MR_Integer) 1)));
#line 205 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_21_21;
#line 205 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_25_25;
#line 205 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TVarSet_29;
#line 205 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Kinds_31;
#line 205 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Context_35;
#line 205 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Status_48;
#line 205 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Globals_49;
#line 205 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__SpecMap_50;
#line 205 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__SpecialPreds_51;
#line 205 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Unify_57;
#line 205 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Compare_61;

#line 206 "type_ctor_info.m"
            {
#line 206 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 206 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_21_21, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_3[0]));
#line 206 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_21_21, 1) = ((MR_Box) (backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0_1));
#line 206 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 206 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_21_21, 3) = ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_2));
#line 206 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_21_21, 4) = ((MR_Box) (backend_libs__type_ctor_info__TypeModuleName_15));
#line 206 "type_ctor_info.m"
            }
#line 206 "type_ctor_info.m"
            {
#line 206 "type_ctor_info.m"
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_21_21, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.gen_builtin_type_ctor_gen_infos\'/4", (MR_String) "module mismatch");
            }
#line 220 "type_ctor_info.m"
            {
#line 220 "type_ctor_info.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &backend_libs__type_ctor_info__TVarSet_29);
            }
#line 222 "type_ctor_info.m"
            {
#line 222 "type_ctor_info.m"
              mercury__map__init_1_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &backend_libs__type_ctor_info__Kinds_31);
            }
#line 226 "type_ctor_info.m"
            {
#line 226 "type_ctor_info.m"
              mercury__term__context_init_1_p_0(&backend_libs__type_ctor_info__Context_35);
            }
#line 227 "type_ctor_info.m"
            {
#line 227 "type_ctor_info.m"
              hlds__hlds_data__set_type_defn_9_p_0(backend_libs__type_ctor_info__TVarSet_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), backend_libs__type_ctor_info__Kinds_31, (MR_Word) MR_mkword(MR_mktag(3), &backend_libs__type_ctor_info_scalar_common_1[8]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), (MR_Integer) 0, (MR_Integer) 1, backend_libs__type_ctor_info__Context_35, &backend_libs__type_ctor_info__V_25_25);
            }
#line 236 "type_ctor_info.m"
            {
#line 236 "type_ctor_info.m"
              hlds__hlds_data__get_type_defn_status_2_p_0(backend_libs__type_ctor_info__V_25_25, &backend_libs__type_ctor_info__Status_48);
            }
#line 237 "type_ctor_info.m"
            {
#line 237 "type_ctor_info.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__type_ctor_info__HeadVar__1_1, &backend_libs__type_ctor_info__Globals_49);
            }
#line 238 "type_ctor_info.m"
            {
#line 238 "type_ctor_info.m"
              hlds__hlds_module__module_info_get_special_pred_map_2_p_0(backend_libs__type_ctor_info__HeadVar__1_1, &backend_libs__type_ctor_info__SpecMap_50);
            }
#line 239 "type_ctor_info.m"
            {
#line 239 "type_ctor_info.m"
              libs__globals__lookup_bool_option_3_p_0(backend_libs__type_ctor_info__Globals_49, (MR_Integer) 275, &backend_libs__type_ctor_info__SpecialPreds_51);
            }
#line 243 "type_ctor_info.m"
            if ((backend_libs__type_ctor_info__SpecialPreds_51 == (MR_Integer) 0))
#line 244 "type_ctor_info.m"
              {
#line 244 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__Body_52;
#line 244 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_66_66;
#line 246 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_78_78;
#line 246 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_79_79;
#line 246 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_80_80;
#line 246 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_81_81;
#line 246 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_82_82;
#line 246 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_83_83;
#line 246 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_84_84;
#line 246 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_85_85;
#line 246 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info___UserDefinedEquality_53;

#line 245 "type_ctor_info.m"
                {
#line 245 "type_ctor_info.m"
                  hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__type_ctor_info__V_25_25, &backend_libs__type_ctor_info__Body_52);
                }
#line 246 "type_ctor_info.m"
                backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__Body_52)) == (MR_mktag((MR_Integer) 1)));
#line 246 "type_ctor_info.m"
                if (backend_libs__type_ctor_info__succeeded)
#line 246 "type_ctor_info.m"
                  {
#line 246 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_52, (MR_Integer) 0)));
#line 246 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_52, (MR_Integer) 1)));
#line 246 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_52, (MR_Integer) 2)));
#line 246 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_52, (MR_Integer) 3)));
#line 246 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_52, (MR_Integer) 4)));
#line 246 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_52, (MR_Integer) 5)));
#line 246 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_83_83 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_52, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 246 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_52, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 246 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_52, (MR_Integer) 7)));
#line 246 "type_ctor_info.m"
                    backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__V_66_66)) == (MR_mktag((MR_Integer) 1)));
#line 246 "type_ctor_info.m"
                    if (backend_libs__type_ctor_info__succeeded)
#line 246 "type_ctor_info.m"
                      backend_libs__type_ctor_info___UserDefinedEquality_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__V_66_66, (MR_Integer) 0)));
#line 246 "type_ctor_info.m"
                  }
#line 244 "type_ctor_info.m"
              }
#line 243 "type_ctor_info.m"
            else
#line 242 "type_ctor_info.m"
              backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 258 "type_ctor_info.m"
            if (backend_libs__type_ctor_info__succeeded)
#line 249 "type_ctor_info.m"
              {
#line 249 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__TypeInfo_53_86;
#line 249 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__TypeCtorInfo_54_87;
#line 249 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__UnifyPredId_54;
#line 249 "type_ctor_info.m"
                MR_Integer backend_libs__type_ctor_info__UnifyProcInt_55;
#line 249 "type_ctor_info.m"
                MR_Integer backend_libs__type_ctor_info__UnifyProcId_56;
#line 249 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__ComparePredId_58;
#line 249 "type_ctor_info.m"
                MR_Integer backend_libs__type_ctor_info__CompareProcInt_59;
#line 249 "type_ctor_info.m"
                MR_Integer backend_libs__type_ctor_info__CompareProcId_60;
#line 249 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_67_67;
#line 249 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_70_70;
#line 249 "type_ctor_info.m"
                MR_Box backend_libs__type_ctor_info__conv0_UnifyPredId_54;
#line 254 "type_ctor_info.m"
                MR_Box backend_libs__type_ctor_info__conv1_ComparePredId_58;

#line 249 "type_ctor_info.m"
                {
#line 249 "type_ctor_info.m"
                  backend_libs__type_ctor_info__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_67_67, 0) = ((MR_Box) ((MR_Integer) 0));
#line 249 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_67_67, 1) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9));
#line 249 "type_ctor_info.m"
                }
#line 9058 "backend_libs.type_ctor_info.c"
                backend_libs__type_ctor_info__TypeInfo_53_86 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[0];
#line 9060 "backend_libs.type_ctor_info.c"
                backend_libs__type_ctor_info__TypeCtorInfo_54_87 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 249 "type_ctor_info.m"
                {
#line 249 "type_ctor_info.m"
                  mercury__map__lookup_3_p_0(backend_libs__type_ctor_info__TypeInfo_53_86, backend_libs__type_ctor_info__TypeCtorInfo_54_87, backend_libs__type_ctor_info__SpecMap_50, ((MR_Box) (backend_libs__type_ctor_info__V_67_67)), &backend_libs__type_ctor_info__conv0_UnifyPredId_54);
                }
#line 249 "type_ctor_info.m"
                backend_libs__type_ctor_info__UnifyPredId_54 = ((MR_Word) backend_libs__type_ctor_info__conv0_UnifyPredId_54);
#line 250 "type_ctor_info.m"
                {
#line 250 "type_ctor_info.m"
                  hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 0, &backend_libs__type_ctor_info__UnifyProcInt_55);
                }
#line 251 "type_ctor_info.m"
                {
#line 251 "type_ctor_info.m"
                  hlds__hlds_pred__proc_id_to_int_2_p_1(&backend_libs__type_ctor_info__UnifyProcId_56, backend_libs__type_ctor_info__UnifyProcInt_55);
                }
#line 252 "type_ctor_info.m"
                {
#line 252 "type_ctor_info.m"
                  backend_libs__type_ctor_info__Unify_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 252 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_57, 0) = ((MR_Box) (backend_libs__type_ctor_info__UnifyPredId_54));
#line 252 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_57, 1) = ((MR_Box) (backend_libs__type_ctor_info__UnifyProcId_56));
#line 252 "type_ctor_info.m"
                }
#line 254 "type_ctor_info.m"
                {
#line 254 "type_ctor_info.m"
                  backend_libs__type_ctor_info__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 254 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_70_70, 0) = ((MR_Box) ((MR_Integer) 2));
#line 254 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_70_70, 1) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9));
#line 254 "type_ctor_info.m"
                }
#line 254 "type_ctor_info.m"
                {
#line 254 "type_ctor_info.m"
                  mercury__map__lookup_3_p_0(backend_libs__type_ctor_info__TypeInfo_53_86, backend_libs__type_ctor_info__TypeCtorInfo_54_87, backend_libs__type_ctor_info__SpecMap_50, ((MR_Box) (backend_libs__type_ctor_info__V_70_70)), &backend_libs__type_ctor_info__conv1_ComparePredId_58);
                }
#line 254 "type_ctor_info.m"
                backend_libs__type_ctor_info__ComparePredId_58 = ((MR_Word) backend_libs__type_ctor_info__conv1_ComparePredId_58);
#line 255 "type_ctor_info.m"
                {
#line 255 "type_ctor_info.m"
                  hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 2, &backend_libs__type_ctor_info__CompareProcInt_59);
                }
#line 256 "type_ctor_info.m"
                {
#line 256 "type_ctor_info.m"
                  hlds__hlds_pred__proc_id_to_int_2_p_1(&backend_libs__type_ctor_info__CompareProcId_60, backend_libs__type_ctor_info__CompareProcInt_59);
                }
#line 257 "type_ctor_info.m"
                {
#line 257 "type_ctor_info.m"
                  backend_libs__type_ctor_info__Compare_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Compare_61, 0) = ((MR_Box) (backend_libs__type_ctor_info__ComparePredId_58));
#line 257 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Compare_61, 1) = ((MR_Box) (backend_libs__type_ctor_info__CompareProcId_60));
#line 257 "type_ctor_info.m"
                }
#line 249 "type_ctor_info.m"
              }
#line 258 "type_ctor_info.m"
            else
#line 260 "type_ctor_info.m"
              {
#line 260 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__PredId_62;
#line 260 "type_ctor_info.m"
                MR_Integer backend_libs__type_ctor_info__ProcId_63;
#line 260 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_73_73;

#line 259 "type_ctor_info.m"
                {
#line 259 "type_ctor_info.m"
                  backend_libs__type_ctor_info__V_73_73 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
                }
#line 259 "type_ctor_info.m"
                {
#line 259 "type_ctor_info.m"
                  hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(backend_libs__type_ctor_info__HeadVar__1_1, backend_libs__type_ctor_info__V_73_73, (MR_String) "unused", (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__PredId_62, &backend_libs__type_ctor_info__ProcId_63);
                }
#line 261 "type_ctor_info.m"
                {
#line 261 "type_ctor_info.m"
                  backend_libs__type_ctor_info__Unify_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 261 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_57, 0) = ((MR_Box) (backend_libs__type_ctor_info__PredId_62));
#line 261 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_57, 1) = ((MR_Box) (backend_libs__type_ctor_info__ProcId_63));
#line 261 "type_ctor_info.m"
                }
#line 263 "type_ctor_info.m"
                backend_libs__type_ctor_info__Compare_61 = backend_libs__type_ctor_info__Unify_57;
#line 260 "type_ctor_info.m"
              }
#line 265 "type_ctor_info.m"
            {
#line 265 "type_ctor_info.m"
              backend_libs__type_ctor_info__TypeCtorGenInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 265 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9));
#line 265 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 1) = ((MR_Box) (backend_libs__type_ctor_info__TypeModuleName_15));
#line 265 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 2) = ((MR_Box) (backend_libs__type_ctor_info__TypeName_16));
#line 265 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeArity_14));
#line 265 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 4) = ((MR_Box) (backend_libs__type_ctor_info__Status_48));
#line 265 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 5) = ((MR_Box) (backend_libs__type_ctor_info__V_25_25));
#line 265 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 6) = ((MR_Box) (backend_libs__type_ctor_info__Unify_57));
#line 265 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 7) = ((MR_Box) (backend_libs__type_ctor_info__Compare_61));
#line 265 "type_ctor_info.m"
            }
#line 205 "type_ctor_info.m"
          }
#line 210 "type_ctor_info.m"
        else
#line 211 "type_ctor_info.m"
          {
#line 211 "type_ctor_info.m"
            MR_String backend_libs__type_ctor_info__V_19_19;
#line 211 "type_ctor_info.m"
            MR_String backend_libs__type_ctor_info__TypeName_26 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SymName_13, (MR_Integer) 0)));

#line 212 "type_ctor_info.m"
            {
#line 212 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "unqualified type ", backend_libs__type_ctor_info__TypeName_26);
            }
#line 212 "type_ctor_info.m"
            {
#line 212 "type_ctor_info.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.gen_builtin_type_ctor_gen_infos\'/4", backend_libs__type_ctor_info__V_19_19);
#line 212 "type_ctor_info.m"
              return;
            }
#line 211 "type_ctor_info.m"
          }
#line 200 "type_ctor_info.m"
        {
#line 200 "type_ctor_info.m"
          MR_Word base;
#line 200 "type_ctor_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "type_ctor_info.m"
          *backend_libs__type_ctor_info__HeadVar__4_4 = base;
#line 200 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtorGenInfo_11));
#line 200 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtorGenInfos_12));
#line 200 "type_ctor_info.m"
        }
#line 200 "type_ctor_info.m"
      }
#line 198 "type_ctor_info.m"
  }
#line 195 "type_ctor_info.m"
}

#line 124 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(
#line 124 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_1,
#line 124 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleName_2,
#line 124 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
#line 124 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4)
#line 124 "type_ctor_info.m"
{
#line 128 "type_ctor_info.m"
  {
#line 128 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 128 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 128 "type_ctor_info.m"
      *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 128 "type_ctor_info.m"
    else
#line 130 "type_ctor_info.m"
      {
#line 130 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 0)));
#line 130 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorDefns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 1)));
#line 130 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorGenInfosTail_12;
#line 130 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtor_13;
#line 130 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeDefn_14;
#line 130 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SymName_15;
#line 130 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__TypeArity_16;

#line 131 "type_ctor_info.m"
        {
#line 131 "type_ctor_info.m"
          backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(backend_libs__type_ctor_info__ModuleInfo_1, backend_libs__type_ctor_info__ModuleName_2, backend_libs__type_ctor_info__TypeCtorDefns_10, &backend_libs__type_ctor_info__TypeCtorGenInfosTail_12);
        }
#line 133 "type_ctor_info.m"
        backend_libs__type_ctor_info__TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorDefn_9, (MR_Integer) 0)));
#line 133 "type_ctor_info.m"
        backend_libs__type_ctor_info__TypeDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorDefn_9, (MR_Integer) 1)));
#line 134 "type_ctor_info.m"
        backend_libs__type_ctor_info__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtor_13, (MR_Integer) 0)));
#line 134 "type_ctor_info.m"
        backend_libs__type_ctor_info__TypeArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtor_13, (MR_Integer) 1)));
#line 148 "type_ctor_info.m"
        if (((MR_tag((MR_Word) backend_libs__type_ctor_info__SymName_15)) == (MR_mktag((MR_Integer) 1))))
#line 136 "type_ctor_info.m"
          {
#line 136 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TypeModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__SymName_15, (MR_Integer) 0)));
#line 136 "type_ctor_info.m"
            MR_String backend_libs__type_ctor_info__TypeName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__SymName_15, (MR_Integer) 1)));
#line 138 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_25_25;
#line 138 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TypeCtor_33;
#line 138 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TypeBody_34;

#line 138 "type_ctor_info.m"
            {
#line 138 "type_ctor_info.m"
              backend_libs__type_ctor_info__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(backend_libs__type_ctor_info__TypeModuleName_17, backend_libs__type_ctor_info__ModuleName_2);
            }
#line 138 "type_ctor_info.m"
            if (backend_libs__type_ctor_info__succeeded)
#line 138 "type_ctor_info.m"
              {
#line 175 "type_ctor_info.m"
                backend_libs__type_ctor_info__TypeCtor_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorDefn_9, (MR_Integer) 0)));
#line 175 "type_ctor_info.m"
                backend_libs__type_ctor_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorDefn_9, (MR_Integer) 1)));
#line 176 "type_ctor_info.m"
                {
#line 176 "type_ctor_info.m"
                  hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__type_ctor_info__V_25_25, &backend_libs__type_ctor_info__TypeBody_34);
                }
#line 178 "type_ctor_info.m"
                {
#line 178 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_35_35;

#line 178 "type_ctor_info.m"
                  backend_libs__type_ctor_info__succeeded = ((((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_34, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 178 "type_ctor_info.m"
                  if (backend_libs__type_ctor_info__succeeded)
#line 178 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_34, (MR_Integer) 1)));
#line 178 "type_ctor_info.m"
                }
#line 179 "type_ctor_info.m"
                if (!(backend_libs__type_ctor_info__succeeded))
#line 179 "type_ctor_info.m"
                  {
#line 179 "type_ctor_info.m"
                    backend_libs__type_ctor_info__succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(backend_libs__type_ctor_info__TypeCtor_33, backend_libs__type_ctor_info__TypeBody_34);
                  }
#line 191 "type_ctor_info.m"
                if (backend_libs__type_ctor_info__succeeded)
#line 184 "type_ctor_info.m"
                  {
#line 184 "type_ctor_info.m"
                    MR_String backend_libs__type_ctor_info__ModuleNameString_36;

#line 184 "type_ctor_info.m"
                    {
#line 184 "type_ctor_info.m"
                      backend_libs__type_ctor_info__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(backend_libs__type_ctor_info__ModuleInfo_1);
                    }
#line 184 "type_ctor_info.m"
                    if (backend_libs__type_ctor_info__succeeded)
#line 184 "type_ctor_info.m"
                      {
#line 185 "type_ctor_info.m"
                        backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeModuleName_17)) == (MR_mktag((MR_Integer) 0)));
#line 185 "type_ctor_info.m"
                        if (backend_libs__type_ctor_info__succeeded)
#line 185 "type_ctor_info.m"
                          {
#line 185 "type_ctor_info.m"
                            backend_libs__type_ctor_info__ModuleNameString_36 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeModuleName_17, (MR_Integer) 0)));
#line 436 "type_ctor_info.m"
                            if ((strcmp(backend_libs__type_ctor_info__ModuleNameString_36, (MR_String) "builtin") == 0))
#line 436 "type_ctor_info.m"
                              {
#line 441 "type_ctor_info.m"
                                backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_16 == (MR_Integer) 0);
#line 436 "type_ctor_info.m"
                                if (backend_libs__type_ctor_info__succeeded)
#line 436 "type_ctor_info.m"
                                  {
#line 436 "type_ctor_info.m"
                                    if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "int") == 0))
#line 436 "type_ctor_info.m"
                                      backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 436 "type_ctor_info.m"
                                    else
#line 436 "type_ctor_info.m"
                                      if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "func") == 0))
#line 446 "type_ctor_info.m"
                                        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 436 "type_ctor_info.m"
                                      else
#line 436 "type_ctor_info.m"
                                        if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "pred") == 0))
#line 445 "type_ctor_info.m"
                                          backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 436 "type_ctor_info.m"
                                        else
#line 436 "type_ctor_info.m"
                                          if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "void") == 0))
#line 440 "type_ctor_info.m"
                                            backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 436 "type_ctor_info.m"
                                          else
#line 436 "type_ctor_info.m"
                                            if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "float") == 0))
#line 438 "type_ctor_info.m"
                                              backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 436 "type_ctor_info.m"
                                            else
#line 436 "type_ctor_info.m"
                                              if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "tuple") == 0))
#line 447 "type_ctor_info.m"
                                                backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 436 "type_ctor_info.m"
                                              else
#line 436 "type_ctor_info.m"
                                                if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "string") == 0))
#line 437 "type_ctor_info.m"
                                                  backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 436 "type_ctor_info.m"
                                                else
#line 436 "type_ctor_info.m"
                                                  if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "c_pointer") == 0))
#line 441 "type_ctor_info.m"
                                                    backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 436 "type_ctor_info.m"
                                                  else
#line 436 "type_ctor_info.m"
                                                    if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "character") == 0))
#line 439 "type_ctor_info.m"
                                                      backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 436 "type_ctor_info.m"
                                                    else
#line 436 "type_ctor_info.m"
                                                      if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "stable_c_pointer") == 0))
#line 443 "type_ctor_info.m"
                                                        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 436 "type_ctor_info.m"
                                                      else
#line 436 "type_ctor_info.m"
                                                        backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 436 "type_ctor_info.m"
                                  }
#line 436 "type_ctor_info.m"
                              }
#line 436 "type_ctor_info.m"
                            else
#line 436 "type_ctor_info.m"
                              if ((strcmp(backend_libs__type_ctor_info__ModuleNameString_36, (MR_String) "type_desc") == 0))
#line 436 "type_ctor_info.m"
                                {
#line 451 "type_ctor_info.m"
                                  backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_16 == (MR_Integer) 0);
#line 436 "type_ctor_info.m"
                                  if (backend_libs__type_ctor_info__succeeded)
#line 436 "type_ctor_info.m"
                                    {
#line 436 "type_ctor_info.m"
                                      if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "type_desc") == 0))
#line 453 "type_ctor_info.m"
                                        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 436 "type_ctor_info.m"
                                      else
#line 436 "type_ctor_info.m"
                                        if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "type_ctor_desc") == 0))
#line 449 "type_ctor_info.m"
                                          backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 436 "type_ctor_info.m"
                                        else
#line 436 "type_ctor_info.m"
                                          if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "pseudo_type_desc") == 0))
#line 451 "type_ctor_info.m"
                                            backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 436 "type_ctor_info.m"
                                          else
#line 436 "type_ctor_info.m"
                                            backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 436 "type_ctor_info.m"
                                    }
#line 436 "type_ctor_info.m"
                                }
#line 436 "type_ctor_info.m"
                              else
#line 436 "type_ctor_info.m"
                                if ((strcmp(backend_libs__type_ctor_info__ModuleNameString_36, (MR_String) "private_builtin") == 0))
#line 448 "type_ctor_info.m"
                                  {
#line 448 "type_ctor_info.m"
                                    backend_libs__type_ctor_info__succeeded = (strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "ref") == 0);
#line 448 "type_ctor_info.m"
                                    if (backend_libs__type_ctor_info__succeeded)
#line 448 "type_ctor_info.m"
                                      backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_16 == (MR_Integer) 1);
#line 448 "type_ctor_info.m"
                                  }
#line 436 "type_ctor_info.m"
                                else
#line 436 "type_ctor_info.m"
                                  backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 188 "type_ctor_info.m"
                            if (!(backend_libs__type_ctor_info__succeeded))
#line 458 "type_ctor_info.m"
                              {
#line 463 "type_ctor_info.m"
                                backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_16 == (MR_Integer) 0);
#line 458 "type_ctor_info.m"
                                if (backend_libs__type_ctor_info__succeeded)
#line 458 "type_ctor_info.m"
                                  {
#line 458 "type_ctor_info.m"
                                    if ((strcmp(backend_libs__type_ctor_info__ModuleNameString_36, (MR_String) "table_builtin") == 0))
#line 472 "type_ctor_info.m"
                                      backend_libs__type_ctor_info__succeeded = (strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "ml_subgoal") == 0);
#line 458 "type_ctor_info.m"
                                    else
#line 458 "type_ctor_info.m"
                                      if ((strcmp(backend_libs__type_ctor_info__ModuleNameString_36, (MR_String) "private_builtin") == 0))
#line 458 "type_ctor_info.m"
                                        if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "curfr") == 0))
#line 467 "type_ctor_info.m"
                                          backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 458 "type_ctor_info.m"
                                        else
#line 458 "type_ctor_info.m"
                                          if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "maxfr") == 0))
#line 468 "type_ctor_info.m"
                                            backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 458 "type_ctor_info.m"
                                          else
#line 458 "type_ctor_info.m"
                                            if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "redofr") == 0))
#line 469 "type_ctor_info.m"
                                              backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 458 "type_ctor_info.m"
                                            else
#line 458 "type_ctor_info.m"
                                              if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "succip") == 0))
#line 466 "type_ctor_info.m"
                                                backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 458 "type_ctor_info.m"
                                              else
#line 458 "type_ctor_info.m"
                                                if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "ticket") == 0))
#line 471 "type_ctor_info.m"
                                                  backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 458 "type_ctor_info.m"
                                                else
#line 458 "type_ctor_info.m"
                                                  if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "trail_ptr") == 0))
#line 470 "type_ctor_info.m"
                                                    backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 458 "type_ctor_info.m"
                                                  else
#line 458 "type_ctor_info.m"
                                                    if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "type_info") == 0))
#line 460 "type_ctor_info.m"
                                                      backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 458 "type_ctor_info.m"
                                                    else
#line 458 "type_ctor_info.m"
                                                      if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "heap_pointer") == 0))
#line 465 "type_ctor_info.m"
                                                        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 458 "type_ctor_info.m"
                                                      else
#line 458 "type_ctor_info.m"
                                                        if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "type_ctor_info") == 0))
#line 458 "type_ctor_info.m"
                                                          backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 458 "type_ctor_info.m"
                                                        else
#line 458 "type_ctor_info.m"
                                                          if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "typeclass_info") == 0))
#line 461 "type_ctor_info.m"
                                                            backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 458 "type_ctor_info.m"
                                                          else
#line 458 "type_ctor_info.m"
                                                            if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "base_typeclass_info") == 0))
#line 463 "type_ctor_info.m"
                                                              backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 458 "type_ctor_info.m"
                                                            else
#line 458 "type_ctor_info.m"
                                                              backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 458 "type_ctor_info.m"
                                      else
#line 458 "type_ctor_info.m"
                                        backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 458 "type_ctor_info.m"
                                  }
#line 458 "type_ctor_info.m"
                              }
#line 185 "type_ctor_info.m"
                          }
#line 184 "type_ctor_info.m"
                      }
#line 184 "type_ctor_info.m"
                  }
#line 191 "type_ctor_info.m"
                else
#line 192 "type_ctor_info.m"
                  backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 138 "type_ctor_info.m"
                if (backend_libs__type_ctor_info__succeeded)
#line 139 "type_ctor_info.m"
                  {
#line 139 "type_ctor_info.m"
                    backend_libs__type_ctor_info__succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(backend_libs__type_ctor_info__TypeDefn_14, backend_libs__type_ctor_info__V_25_25);
                  }
#line 138 "type_ctor_info.m"
              }
#line 145 "type_ctor_info.m"
            if (backend_libs__type_ctor_info__succeeded)
#line 143 "type_ctor_info.m"
              {
#line 143 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__TypeCtorGenInfo_19;

#line 142 "type_ctor_info.m"
                {
#line 142 "type_ctor_info.m"
                  backend_libs__type_ctor_info__gen_type_ctor_gen_info_7_p_0(backend_libs__type_ctor_info__ModuleInfo_1, backend_libs__type_ctor_info__TypeCtor_13, backend_libs__type_ctor_info__TypeModuleName_17, backend_libs__type_ctor_info__TypeName_18, backend_libs__type_ctor_info__TypeArity_16, backend_libs__type_ctor_info__TypeDefn_14, &backend_libs__type_ctor_info__TypeCtorGenInfo_19);
                }
#line 144 "type_ctor_info.m"
                {
#line 144 "type_ctor_info.m"
                  MR_Word base;
#line 144 "type_ctor_info.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "type_ctor_info.m"
                  *backend_libs__type_ctor_info__HeadVar__4_4 = base;
#line 144 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtorGenInfo_19));
#line 144 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtorGenInfosTail_12));
#line 144 "type_ctor_info.m"
                }
#line 143 "type_ctor_info.m"
              }
#line 145 "type_ctor_info.m"
            else
#line 146 "type_ctor_info.m"
              *backend_libs__type_ctor_info__HeadVar__4_4 = backend_libs__type_ctor_info__TypeCtorGenInfosTail_12;
#line 136 "type_ctor_info.m"
          }
#line 148 "type_ctor_info.m"
        else
#line 149 "type_ctor_info.m"
          {
#line 149 "type_ctor_info.m"
            MR_String backend_libs__type_ctor_info__V_22_22;
#line 149 "type_ctor_info.m"
            MR_String backend_libs__type_ctor_info__TypeName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SymName_15, (MR_Integer) 0)));

#line 150 "type_ctor_info.m"
            {
#line 150 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "unqualified type ", backend_libs__type_ctor_info__TypeName_24);
            }
#line 150 "type_ctor_info.m"
            {
#line 150 "type_ctor_info.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.gen_type_ctor_gen_infos\'/4", backend_libs__type_ctor_info__V_22_22);
#line 150 "type_ctor_info.m"
              return;
            }
#line 149 "type_ctor_info.m"
          }
#line 130 "type_ctor_info.m"
      }
#line 128 "type_ctor_info.m"
  }
#line 124 "type_ctor_info.m"
}

#line 59 "type_ctor_info.m"
MR_Integer MR_CALL 
backend_libs__type_ctor_info__compute_contains_var_bit_vector_1_f_0(
#line 59 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ArgTypes_3)
#line 59 "type_ctor_info.m"
{
#line 1097 "type_ctor_info.m"
  {
#line 1097 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 1097 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__Vector_4;

#line 1098 "type_ctor_info.m"
    {
#line 1098 "type_ctor_info.m"
      backend_libs__type_ctor_info__compute_contains_var_bit_vector_2_4_p_0(backend_libs__type_ctor_info__ArgTypes_3, (MR_Integer) 0, (MR_Integer) 0, &backend_libs__type_ctor_info__Vector_4);
    }
#line 1097 "type_ctor_info.m"
    return backend_libs__type_ctor_info__Vector_4;
#line 1097 "type_ctor_info.m"
  }
#line 59 "type_ctor_info.m"
}

#line 49 "type_ctor_info.m"
void MR_CALL 
backend_libs__type_ctor_info__generate_rtti_2_p_0(
#line 49 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_3,
#line 49 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Tables_4)
#line 49 "type_ctor_info.m"
{
#line 270 "type_ctor_info.m"
  {
#line 270 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 270 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_11_11;
#line 270 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorGenInfos_5;
#line 270 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Dynamic_6;
#line 270 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Static0_7;
#line 270 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Static_8;

#line 271 "type_ctor_info.m"
    {
#line 271 "type_ctor_info.m"
      hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(backend_libs__type_ctor_info__ModuleInfo_3, &backend_libs__type_ctor_info__TypeCtorGenInfos_5);
    }
#line 272 "type_ctor_info.m"
    {
#line 272 "type_ctor_info.m"
      backend_libs__type_ctor_info__construct_type_ctor_infos_6_p_0(backend_libs__type_ctor_info__TypeCtorGenInfos_5, backend_libs__type_ctor_info__ModuleInfo_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__Dynamic_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__Static0_7);
    }
#line 9729 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_11_11 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 277 "type_ctor_info.m"
    {
#line 277 "type_ctor_info.m"
      backend_libs__type_ctor_info__Static_8 = mercury__list__remove_dups_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_11_11, backend_libs__type_ctor_info__Static0_7);
    }
#line 278 "type_ctor_info.m"
    {
#line 278 "type_ctor_info.m"
      mercury__list__append_3_p_1(backend_libs__type_ctor_info__TypeCtorInfo_11_11, backend_libs__type_ctor_info__Dynamic_6, backend_libs__type_ctor_info__Static_8, backend_libs__type_ctor_info__Tables_4);
#line 278 "type_ctor_info.m"
      return;
    }
#line 270 "type_ctor_info.m"
  }
#line 49 "type_ctor_info.m"
}

#line 47 "type_ctor_info.m"
void MR_CALL 
backend_libs__type_ctor_info__generate_hlds_2_p_0(
#line 47 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10,
#line 47 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_11)
#line 47 "type_ctor_info.m"
{
#line 102 "type_ctor_info.m"
  {
#line 102 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 102 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ModuleName_4;
#line 102 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeTable_5;
#line 102 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorsDefns_6;
#line 102 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__LocalTypeCtorGenInfos_7;
#line 102 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__AllTypeCtorGenInfos_9;
#line 109 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_15_15;

#line 103 "type_ctor_info.m"
    {
#line 103 "type_ctor_info.m"
      hlds__hlds_module__module_info_get_name_2_p_0(backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10, &backend_libs__type_ctor_info__ModuleName_4);
    }
#line 104 "type_ctor_info.m"
    {
#line 104 "type_ctor_info.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10, &backend_libs__type_ctor_info__TypeTable_5);
    }
#line 105 "type_ctor_info.m"
    {
#line 105 "type_ctor_info.m"
      hlds__hlds_data__get_all_type_ctor_defns_2_p_0(backend_libs__type_ctor_info__TypeTable_5, &backend_libs__type_ctor_info__TypeCtorsDefns_6);
    }
#line 106 "type_ctor_info.m"
    {
#line 106 "type_ctor_info.m"
      backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10, backend_libs__type_ctor_info__ModuleName_4, backend_libs__type_ctor_info__TypeCtorsDefns_6, &backend_libs__type_ctor_info__LocalTypeCtorGenInfos_7);
    }
#line 109 "type_ctor_info.m"
    {
#line 109 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_15_15 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
    }
#line 109 "type_ctor_info.m"
    {
#line 109 "type_ctor_info.m"
      backend_libs__type_ctor_info__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(backend_libs__type_ctor_info__ModuleName_4, backend_libs__type_ctor_info__V_15_15);
    }
#line 109 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 110 "type_ctor_info.m"
      {
#line 110 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10);
      }
#line 116 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 114 "type_ctor_info.m"
      {
#line 114 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__BuiltinTypeCtorGenInfos_8;
#line 114 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_12_12;

#line 112 "type_ctor_info.m"
        {
#line 112 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_12_12 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
        }
#line 112 "type_ctor_info.m"
        {
#line 112 "type_ctor_info.m"
          backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10, backend_libs__type_ctor_info__ModuleName_4, backend_libs__type_ctor_info__V_12_12, &backend_libs__type_ctor_info__BuiltinTypeCtorGenInfos_8);
        }
#line 115 "type_ctor_info.m"
        {
#line 115 "type_ctor_info.m"
          backend_libs__type_ctor_info__AllTypeCtorGenInfos_9 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_ctor_gen_info_0, backend_libs__type_ctor_info__BuiltinTypeCtorGenInfos_8, backend_libs__type_ctor_info__LocalTypeCtorGenInfos_7);
        }
#line 114 "type_ctor_info.m"
      }
#line 116 "type_ctor_info.m"
    else
#line 117 "type_ctor_info.m"
      backend_libs__type_ctor_info__AllTypeCtorGenInfos_9 = backend_libs__type_ctor_info__LocalTypeCtorGenInfos_7;
#line 119 "type_ctor_info.m"
    {
#line 119 "type_ctor_info.m"
      hlds__hlds_module__module_info_set_type_ctor_gen_infos_3_p_0(backend_libs__type_ctor_info__AllTypeCtorGenInfos_9, backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10, backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_11);
#line 119 "type_ctor_info.m"
      return;
    }
#line 102 "type_ctor_info.m"
  }
#line 47 "type_ctor_info.m"
}

void mercury__backend_libs__type_ctor_info__init(void)
{
}

void mercury__backend_libs__type_ctor_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_maybe_reserved_rep_0);
	MR_register_type_ctor_info(&backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_name_sort_info_0);
	MR_register_type_ctor_info(&backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_reserved_addr_map_0);
	MR_register_type_ctor_info(&backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_tag_list_0);
	MR_register_type_ctor_info(&backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_tag_map_0);
}

void mercury__backend_libs__type_ctor_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.type_ctor_info. */
