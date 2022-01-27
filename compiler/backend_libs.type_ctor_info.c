/*
** Automatically generated from `type_ctor_info.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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


/* :- module backend_libs.type_ctor_info. */
/* :- implementation. */

/*
INIT mercury__backend_libs__type_ctor_info__init
ENDINIT
*/

#include "backend_libs.type_ctor_info.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "int.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 146 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0;

#line 149 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0;

#line 152 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0;

#line 155 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 158 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 161 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 164 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;

#line 167 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;

#line 170 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0;

#line 173 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0;

#line 176 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0;

#line 179 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

#line 182 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

#line 185 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_arg_info_0;

#line 188 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__maybe__pti_maybe_1__plain_backend_libs__rtti__type_ctor_info_exist_info_0;

#line 191 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 194 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 197 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0;

#line 200 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

#line 203 "backend_libs.type_ctor_info.c"
static const MR_PseudoTypeInfo backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_0[1];

#line 206 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDesc backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_0;

#line 209 "backend_libs.type_ctor_info.c"
static const MR_PseudoTypeInfo backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_1[1];

#line 212 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDesc backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_1;

#line 215 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_0[1];

#line 218 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_1[1];

#line 221 "backend_libs.type_ctor_info.c"
static const MR_DuPtagLayout backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_ptag_ordered_maybe_reserved_rep_0[2];

#line 224 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_name_ordered_maybe_reserved_rep_0[2];

#line 227 "backend_libs.type_ctor_info.c"
static const MR_Integer backend_libs__type_ctor_info__backend_libs__type_ctor_info__functor_number_map_maybe_reserved_rep_0[2];

#line 230 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

#line 233 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

#line 236 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

#line 239 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_reserved_address_0backend_libs__rtti__type_ctor_info_rtti_data_0;

#line 242 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

#line 245 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

#line 248 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

#line 251 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

#line 254 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0;

#line 257 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0_10001(
#line 260 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 262 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2);

#line 265 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0_10001(
#line 268 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 270 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 272 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3);

#line 275 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001(
#line 278 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 280 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2);

#line 283 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0_10001(
#line 286 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 288 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 290 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3);

#line 293 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0_10001(
#line 296 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 298 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2);

#line 301 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0_10001(
#line 304 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 306 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 308 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3);

#line 311 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0_10001(
#line 314 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 316 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2);

#line 319 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0_10001(
#line 322 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 324 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 326 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3);

#line 329 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0_10001(
#line 332 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 334 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2);

#line 337 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0_10001(
#line 340 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 342 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 344 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3);

#line 1027 "type_ctor_info.m"
static MR_Word MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1027__1_1_f_0(
#line 1027 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_10);

#line 966 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__966__1_2_p_0(
#line 966 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__SectagLocn_9,
#line 966 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Locn0_12);

#line 902 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__902__1_3_p_0(
#line 902 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__LocnMap_28,
#line 902 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_46,
#line 902 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__3_47);

#line 892 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__892__1_5_p_0(
#line 892 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_37,
#line 892 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_38,
#line 892 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__HeadVar__3_39,
#line 892 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__4_40,
#line 892 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__5_41);

#line 884 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__884__1_2_p_0(
#line 884 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_33,
#line 884 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__2_34);

#line 786 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__786__1_2_p_0(
#line 786 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__MaybeExistInfo_33,
#line 786 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_58);

#line 785 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__785__1_2_p_0(
#line 785 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ArgInfos_32,
#line 785 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_53);

#line 784 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__784__1_2_p_0(
#line 784 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__Arity_26,
#line 784 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_48);

#line 728 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__728__1_2_p_0(
#line 728 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
#line 728 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_35);

#line 720 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__720__1_2_p_0(
#line 720 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
#line 720 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_42);

#line 639 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__639__1_2_p_0(
#line 639 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Lang_2,
#line 639 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ForeignTagLang_27);

#line 633 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__633__1_2_p_0(
#line 633 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__Arity_23,
#line 633 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_76);

#line 631 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__631__1_2_p_0(
#line 631 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_20,
#line 631 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_71);

#line 629 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__629__1_2_p_0(
#line 629 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTvars_19,
#line 629 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_66);

#line 570 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__570__1_2_p_0(
#line 570 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTag_23,
#line 570 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_45);

#line 566 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__566__1_2_p_0(
#line 566 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__Arity_20,
#line 566 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_39);

#line 564 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__564__1_2_p_0(
#line 564 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_17,
#line 564 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_34);

#line 562 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__562__1_2_p_0(
#line 562 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTvars_16,
#line 562 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_29);

#line 208 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__208__1_2_p_0(
#line 208 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 208 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeModuleName_15);

#line 685 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0(
#line 685 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 685 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 685 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3);

#line 685 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0(
#line 685 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 685 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2);

#line 687 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0(
#line 687 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 687 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 687 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3);

#line 687 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0(
#line 687 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 687 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2);

#line 690 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0(
#line 690 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 690 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 690 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3);

#line 690 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0(
#line 690 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 690 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2);

#line 516 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0(
#line 516 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 516 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 516 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3);

#line 516 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0(
#line 516 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 516 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2);

#line 736 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0(
#line 736 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 736 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 736 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3);

#line 736 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0(
#line 736 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 736 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2);

#line 1040 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__compute_contains_var_bit_vector_2_4_p_0(
#line 1040 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 1040 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__ArgNum_2,
#line 1040 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3,
#line 1040 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__STATE_VARIABLE_Vector_4);

#line 1027 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0_1(
#line 1027 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 1027 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1);

#line 1023 "type_ctor_info.m"
static MR_Word MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0(
#line 1023 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_3);

#line 996 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_res_name_ordered_table_3_p_0(
#line 996 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__MaybeResFunctor_4,
#line 996 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_12,
#line 996 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_13);

#line 981 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_name_ordered_table_3_p_0(
#line 981 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__DuFunctor_4,
#line 981 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_10,
#line 981 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_11);

#line 966 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0_1(
#line 966 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 942 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(
#line 942 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__DuFunctor_4,
#line 942 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_0_18,
#line 942 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_19);

#line 922 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__first_matching_type_class_info_6_p_0(
#line 922 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 922 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TVar_2,
#line 922 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__MatchingConstraint_3,
#line 922 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_N_0_4,
#line 922 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__STATE_VARIABLE_N_5,
#line 922 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__TypeInfoIndex_6);

#line 907 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__find_type_info_index_6_p_0(
#line 907 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_7,
#line 907 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ClassTable_8,
#line 907 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__StartSlot_9,
#line 907 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TVar_10,
#line 907 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_0_22,
#line 907 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_23);

#line 902 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_5(
#line 902 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 902 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 902 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2);

#line 901 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_4(
#line 901 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 901 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1);

#line 899 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_3(
#line 899 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 899 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 899 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 899 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3);

#line 892 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_2(
#line 892 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 892 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 892 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 892 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
#line 892 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
#line 892 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5);

#line 884 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_1(
#line 884 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 884 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 884 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2);

#line 879 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0(
#line 879 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTVars_5,
#line 879 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_6,
#line 879 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ClassTable_7,
#line 879 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ExistInfo_8);

#line 842 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_du_arg_info_4_p_0(
#line 842 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NumUnivTvars_5,
#line 842 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTvars_6,
#line 842 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConstructorArg_7,
#line 842 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ArgInfo_8);

#line 793 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__get_maybe_reserved_rep_2_p_0(
#line 793 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTag_3,
#line 793 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ConsRep_4);

#line 786 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_4(
#line 786 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 785 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_3(
#line 785 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 784 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_2(
#line 784 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 766 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_1(
#line 766 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 766 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 766 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2);

#line 752 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(
#line 752 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
#line 752 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 752 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_3,
#line 752 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_4,
#line 752 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_5,
#line 752 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_6,
#line 752 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__7_7);

#line 730 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_7(
#line 730 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 730 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 730 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 730 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3);

#line 728 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_6(
#line 728 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 722 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_5(
#line 722 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 722 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 722 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 722 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3);

#line 720 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_4(
#line 720 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 715 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_3(
#line 715 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 715 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 715 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 715 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3);

#line 714 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_2(
#line 714 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 714 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 714 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2);

#line 713 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_1(
#line 713 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 713 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 713 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2);

#line 705 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0(
#line 705 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_9,
#line 705 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_10,
#line 705 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_11,
#line 705 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_12,
#line 705 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_13,
#line 705 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
#line 705 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_15,
#line 705 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_16);

#line 697 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_reserved_functor_1_f_0(
#line 697 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 697 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ResFunctor_3);

#line 692 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_du_functor_1_f_0(
#line 692 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 692 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__DuFunctor_3);

#line 672 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_maps_5_p_0(
#line 672 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ForeignEnumFunctor_6,
#line 672 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_0_12,
#line 672 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_13,
#line 672 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_14,
#line 672 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_15);

#line 639 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_4(
#line 639 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 633 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_3(
#line 633 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 631 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_2(
#line 631 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 629 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_1(
#line 629 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 620 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(
#line 620 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
#line 620 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Lang_2,
#line 620 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
#line 620 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_4,
#line 620 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_5,
#line 620 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__6_6);

#line 1027 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_2(
#line 1027 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 1027 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1);

#line 606 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_1(
#line 606 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 606 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 606 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 606 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
#line 606 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
#line 606 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5);

#line 590 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0(
#line 590 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_8,
#line 590 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Lang_9,
#line 590 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_10,
#line 590 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_11,
#line 590 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReserveTag_12,
#line 590 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_13,
#line 590 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_14);

#line 577 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_enum_maps_5_p_0(
#line 577 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EnumFunctor_6,
#line 577 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_0_11,
#line 577 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_12,
#line 577 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_13,
#line 577 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_14);

#line 570 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_4(
#line 570 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 566 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_3(
#line 566 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 564 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_2(
#line 564 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 562 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_1(
#line 562 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 554 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0(
#line 554 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
#line 554 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 554 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_3,
#line 554 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_4,
#line 554 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__5_5);

#line 1027 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_2(
#line 1027 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 1027 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1);

#line 535 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_1(
#line 535 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 535 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 535 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 535 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
#line 535 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
#line 535 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5);

#line 520 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(
#line 520 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_7,
#line 520 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_8,
#line 520 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_9,
#line 520 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReserveTag_10,
#line 520 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_11,
#line 520 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_12);

#line 500 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_notag_details_6_p_0(
#line 500 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_7,
#line 500 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__SymName_8,
#line 500 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ArgType_9,
#line 500 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__MaybeArgName_10,
#line 500 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_11,
#line 500 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_12);

#line 459 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__impl_type_ctor_4_p_0(
#line 459 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__1_1,
#line 459 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__2_2,
#line 459 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__3_3,
#line 459 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4);

#line 434 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__builtin_type_ctor_4_p_0(
#line 434 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__1_1,
#line 434 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__2_2,
#line 434 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__3_3,
#line 434 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4);

#line 298 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_info_3_p_0(
#line 298 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtorGenInfo_4,
#line 298 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_5,
#line 298 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__RttiData_6);

#line 284 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_infos_6_p_0(
#line 284 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 284 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 284 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0_3,
#line 284 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_4,
#line 284 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Static_0_5,
#line 284 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_Static_6);

#line 232 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_info_7_p_0(
#line 232 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_8,
#line 232 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_9,
#line 232 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleName_10,
#line 232 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__TypeName_11,
#line 232 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_12,
#line 232 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeDefn_13,
#line 232 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__TypeCtorGenInfo_14);

#line 208 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0_1(
#line 208 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg);

#line 197 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(
#line 197 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 197 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 197 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
#line 197 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4);

#line 126 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(
#line 126 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_1,
#line 126 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleName_2,
#line 126 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
#line 126 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4);


static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_1[10][2];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_2[31][3];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_4[15][5];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_5[3][1];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_8[3][8];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_9[4][6];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_10[1][7];

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_11[1][9];


#line 440 "type_ctor_info.m"
/* sealed */ struct backend_libs__type_ctor_info__vector_common_type_3_0_s {
#line 440 "type_ctor_info.m"
  const MR_String backend_libs__type_ctor_info__vector_common_type_3_0__vct_3_f_0;
#line 440 "type_ctor_info.m"
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_3_0_s backend_libs__type_ctor_info_vector_common_3[64];

#line 440 "type_ctor_info.m"
/* sealed */ struct backend_libs__type_ctor_info__vector_common_type_6_0_s {
#line 440 "type_ctor_info.m"
  const MR_String backend_libs__type_ctor_info__vector_common_type_6_0__vct_6_f_0;
#line 440 "type_ctor_info.m"
  const MR_Word backend_libs__type_ctor_info__vector_common_type_6_0__vct_6_f_1;
#line 440 "type_ctor_info.m"
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_6_0_s backend_libs__type_ctor_info_vector_common_6[32];

#line 462 "type_ctor_info.m"
/* sealed */ struct backend_libs__type_ctor_info__vector_common_type_7_0_s {
#line 462 "type_ctor_info.m"
  const MR_String backend_libs__type_ctor_info__vector_common_type_7_0__vct_7_f_0;
#line 462 "type_ctor_info.m"
  const MR_Word backend_libs__type_ctor_info__vector_common_type_7_0__vct_7_f_1;
#line 462 "type_ctor_info.m"
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_7_0_s backend_libs__type_ctor_info_vector_common_7[32];



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
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[12]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[16]))
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

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_2[31][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_1[0])),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[11])),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[14]))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[15]))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_2[15]))
  },
  /* row 18 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[0])),
    ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[1])),
    ((MR_Box) (backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[1])),
    ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[1])),
    ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[7])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[8])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_9[0])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_9[1])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_9[2])),
    ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[12])),
    ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_8[2])),
    ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[13])),
    ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[1])),
    ((MR_Box) (backend_libs__type_ctor_info__make_functor_number_map_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_4[15][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&backend_libs__type_ctor_info__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0))
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

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_5[3][1] = {
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

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_8[3][8] = {
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

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_9[4][6] = {
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

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_10[1][7] = {
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

static /* final */ const MR_Box backend_libs__type_ctor_info_scalar_common_11[1][9] = {
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


static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_3_0_s backend_libs__type_ctor_info_vector_common_3[64] = {
  /* row 0 */   {     (MR_String) "func" },
  /* row 1 */   {     NULL },
  /* row 2 */   {     (MR_String) "void" },
  /* row 3 */   {     (MR_String) "tuple" },
  /* row 4 */   {     NULL },
  /* row 5 */   {     NULL },
  /* row 6 */   {     (MR_String) "c_pointer" },
  /* row 7 */   {     NULL },
  /* row 8 */   {     NULL },
  /* row 9 */   {     NULL },
  /* row 10 */   {     NULL },
  /* row 11 */   {     (MR_String) "pred" },
  /* row 12 */   {     NULL },
  /* row 13 */   {     NULL },
  /* row 14 */   {     NULL },
  /* row 15 */   {     NULL },
  /* row 16 */   {     NULL },
  /* row 17 */   {     NULL },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     NULL },
  /* row 21 */   {     (MR_String) "stable_c_pointer" },
  /* row 22 */   {     NULL },
  /* row 23 */   {     (MR_String) "float" },
  /* row 24 */   {     (MR_String) "int" },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     NULL },
  /* row 28 */   {     (MR_String) "character" },
  /* row 29 */   {     (MR_String) "string" },
  /* row 30 */   {     NULL },
  /* row 31 */   {     NULL },
  /* row 32 */   {     NULL },
  /* row 33 */   {     NULL },
  /* row 34 */   {     (MR_String) "ticket" },
  /* row 35 */   {     NULL },
  /* row 36 */   {     (MR_String) "redofr" },
  /* row 37 */   {     NULL },
  /* row 38 */   {     NULL },
  /* row 39 */   {     NULL },
  /* row 40 */   {     NULL },
  /* row 41 */   {     NULL },
  /* row 42 */   {     (MR_String) "type_ctor_info" },
  /* row 43 */   {     (MR_String) "maxfr" },
  /* row 44 */   {     NULL },
  /* row 45 */   {     (MR_String) "typeclass_info" },
  /* row 46 */   {     (MR_String) "base_typeclass_info" },
  /* row 47 */   {     NULL },
  /* row 48 */   {     NULL },
  /* row 49 */   {     (MR_String) "succip" },
  /* row 50 */   {     (MR_String) "heap_pointer" },
  /* row 51 */   {     NULL },
  /* row 52 */   {     (MR_String) "type_info" },
  /* row 53 */   {     NULL },
  /* row 54 */   {     NULL },
  /* row 55 */   {     (MR_String) "curfr" },
  /* row 56 */   {     (MR_String) "trail_ptr" },
  /* row 57 */   {     NULL },
  /* row 58 */   {     NULL },
  /* row 59 */   {     NULL },
  /* row 60 */   {     NULL },
  /* row 61 */   {     NULL },
  /* row 62 */   {     NULL },
  /* row 63 */   {     NULL },
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_6_0_s backend_libs__type_ctor_info_vector_common_6[32] = {
  /* row 0 */
  {
    (MR_String) "func",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))
  },
  /* row 1 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "void",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))
  },
  /* row 3 */
  {
    (MR_String) "tuple",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))
  },
  /* row 4 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 5 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 6 */
  {
    (MR_String) "c_pointer",
    (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__type_ctor_info_scalar_common_5[0])
  },
  /* row 7 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 8 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 9 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 10 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 11 */
  {
    (MR_String) "pred",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))
  },
  /* row 12 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 13 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 14 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 15 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 16 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 17 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 18 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 19 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 20 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 21 */
  {
    (MR_String) "stable_c_pointer",
    (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__type_ctor_info_scalar_common_5[1])
  },
  /* row 22 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 23 */
  {
    (MR_String) "float",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))
  },
  /* row 24 */
  {
    (MR_String) "int",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 25 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 26 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 27 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 28 */
  {
    (MR_String) "character",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))
  },
  /* row 29 */
  {
    (MR_String) "string",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))
  },
  /* row 30 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 31 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
};

static /* final */ const struct backend_libs__type_ctor_info__vector_common_type_7_0_s backend_libs__type_ctor_info_vector_common_7[32] = {
  /* row 0 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 1 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "ticket",
    (MR_Integer) 6
  },
  /* row 3 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 4 */
  {
    (MR_String) "redofr",
    (MR_Integer) 4
  },
  /* row 5 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 6 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 7 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 8 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 9 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 10 */
  {
    (MR_String) "type_ctor_info",
    (MR_Integer) 9
  },
  /* row 11 */
  {
    (MR_String) "maxfr",
    (MR_Integer) 2
  },
  /* row 12 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 13 */
  {
    (MR_String) "typeclass_info",
    (MR_Integer) 10
  },
  /* row 14 */
  {
    (MR_String) "base_typeclass_info",
    (MR_Integer) 11
  },
  /* row 15 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 16 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 17 */
  {
    (MR_String) "succip",
    (MR_Integer) 1
  },
  /* row 18 */
  {
    (MR_String) "heap_pointer",
    (MR_Integer) 0
  },
  /* row 19 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 20 */
  {
    (MR_String) "type_info",
    (MR_Integer) 8
  },
  /* row 21 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 22 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 23 */
  {
    (MR_String) "curfr",
    (MR_Integer) 3
  },
  /* row 24 */
  {
    (MR_String) "trail_ptr",
    (MR_Integer) 7
  },
  /* row 25 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 26 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 27 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 28 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 29 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 30 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 31 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2165 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0
  }
};

#line 2174 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0
  }
};

#line 2183 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2192 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2200 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2208 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 2216 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0
  }
};

#line 2225 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_backend_libs__rtti__type_ctor_info_foreign_enum_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0
  }
};

#line 2234 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0
  }
};

#line 2243 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

#line 2252 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

#line 2261 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

#line 2270 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

#line 2279 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0
  }
};

#line 2287 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__maybe__pti_maybe_1__plain_backend_libs__rtti__type_ctor_info_exist_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_info_0
  }
};

#line 2295 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2303 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__type_ctor_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2311 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0
  }
};

#line 2320 "backend_libs.type_ctor_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__type_ctor_info__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

#line 2329 "backend_libs.type_ctor_info.c"
static const MR_PseudoTypeInfo backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0
};

#line 2334 "backend_libs.type_ctor_info.c"
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

#line 2349 "backend_libs.type_ctor_info.c"
static const MR_PseudoTypeInfo backend_libs__type_ctor_info__backend_libs__type_ctor_info__field_types_maybe_reserved_rep_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_rep_0
};

#line 2354 "backend_libs.type_ctor_info.c"
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

#line 2369 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_0[1] = {
  &backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_0
};

#line 2374 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_stag_ordered_maybe_reserved_rep_0_1[1] = {
  &backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_1
};

#line 2379 "backend_libs.type_ctor_info.c"
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

#line 2393 "backend_libs.type_ctor_info.c"
static const MR_DuFunctorDescPtr backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_name_ordered_maybe_reserved_rep_0[2] = {
  &backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_1,
  &backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_functor_desc_maybe_reserved_rep_0_0
};

#line 2399 "backend_libs.type_ctor_info.c"
static const MR_Integer backend_libs__type_ctor_info__backend_libs__type_ctor_info__functor_number_map_maybe_reserved_rep_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2405 "backend_libs.type_ctor_info.c"
const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_maybe_reserved_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "maybe_reserved_rep",
  {     backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_name_ordered_maybe_reserved_rep_0 },
  {     backend_libs__type_ctor_info__backend_libs__type_ctor_info__du_ptag_ordered_maybe_reserved_rep_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__type_ctor_info__backend_libs__type_ctor_info__functor_number_map_maybe_reserved_rep_0
};

#line 2422 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2431 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

#line 2440 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__type_ctor_info__pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

#line 2448 "backend_libs.type_ctor_info.c"
const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_name_sort_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____name_sort_info_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "name_sort_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2pair__ti_pair_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2465 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_reserved_address_0backend_libs__rtti__type_ctor_info_rtti_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0,
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0
  }
};

#line 2474 "backend_libs.type_ctor_info.c"
const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_reserved_addr_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "reserved_addr_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_reserved_address_0backend_libs__rtti__type_ctor_info_rtti_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2491 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

#line 2500 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0,
    (MR_TypeInfo) &backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

#line 2509 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

#line 2518 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__type_ctor_info__pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

#line 2526 "backend_libs.type_ctor_info.c"
const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_tag_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____tag_list_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____tag_list_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "tag_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2543 "backend_libs.type_ctor_info.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__type_ctor_info__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0
  }
};

#line 2552 "backend_libs.type_ctor_info.c"
const MR_TypeCtorInfo_Struct backend_libs__type_ctor_info__backend_libs__type_ctor_info__type_ctor_info_tag_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__type_ctor_info____Unify____tag_map_0_0_10001)),
  ((MR_Box) (backend_libs__type_ctor_info____Compare____tag_map_0_0_10001)),
  (MR_String) "backend_libs.type_ctor_info",
  (MR_String) "tag_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__type_ctor_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0tree234__ti_tree234_2builtin__type_ctor_info_int_0backend_libs__rtti__type_ctor_info_ctor_rtti_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2569 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0_10001(
#line 2572 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 2574 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2)
#line 2576 "backend_libs.type_ctor_info.c"
{
#line 2578 "backend_libs.type_ctor_info.c"
  {
#line 2580 "backend_libs.type_ctor_info.c"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 2583 "backend_libs.type_ctor_info.c"
    {
#line 2585 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2));
    }
#line 2588 "backend_libs.type_ctor_info.c"
    return backend_libs__type_ctor_info__succeeded;
#line 2590 "backend_libs.type_ctor_info.c"
  }
#line 2592 "backend_libs.type_ctor_info.c"
}

#line 2595 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0_10001(
#line 2598 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 2600 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 2602 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3)
#line 2604 "backend_libs.type_ctor_info.c"
{
#line 2606 "backend_libs.type_ctor_info.c"
  {
#line 2608 "backend_libs.type_ctor_info.c"
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__1_1;

#line 2611 "backend_libs.type_ctor_info.c"
    {
#line 2613 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0(&backend_libs__type_ctor_info__conv0_HeadVar__1_1, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3));
    }
#line 2616 "backend_libs.type_ctor_info.c"
    *backend_libs__type_ctor_info__wrapper_arg_1 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__1_1));
#line 2618 "backend_libs.type_ctor_info.c"
  }
#line 2620 "backend_libs.type_ctor_info.c"
}

#line 2623 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0_10001(
#line 2626 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 2628 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2)
#line 2630 "backend_libs.type_ctor_info.c"
{
#line 2632 "backend_libs.type_ctor_info.c"
  {
#line 2634 "backend_libs.type_ctor_info.c"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 2637 "backend_libs.type_ctor_info.c"
    {
#line 2639 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info____Unify____name_sort_info_0_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2));
    }
#line 2642 "backend_libs.type_ctor_info.c"
    return backend_libs__type_ctor_info__succeeded;
#line 2644 "backend_libs.type_ctor_info.c"
  }
#line 2646 "backend_libs.type_ctor_info.c"
}

#line 2649 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0_10001(
#line 2652 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 2654 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 2656 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3)
#line 2658 "backend_libs.type_ctor_info.c"
{
#line 2660 "backend_libs.type_ctor_info.c"
  {
#line 2662 "backend_libs.type_ctor_info.c"
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__1_1;

#line 2665 "backend_libs.type_ctor_info.c"
    {
#line 2667 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info____Compare____name_sort_info_0_0(&backend_libs__type_ctor_info__conv0_HeadVar__1_1, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3));
    }
#line 2670 "backend_libs.type_ctor_info.c"
    *backend_libs__type_ctor_info__wrapper_arg_1 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__1_1));
#line 2672 "backend_libs.type_ctor_info.c"
  }
#line 2674 "backend_libs.type_ctor_info.c"
}

#line 2677 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0_10001(
#line 2680 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 2682 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2)
#line 2684 "backend_libs.type_ctor_info.c"
{
#line 2686 "backend_libs.type_ctor_info.c"
  {
#line 2688 "backend_libs.type_ctor_info.c"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 2691 "backend_libs.type_ctor_info.c"
    {
#line 2693 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2));
    }
#line 2696 "backend_libs.type_ctor_info.c"
    return backend_libs__type_ctor_info__succeeded;
#line 2698 "backend_libs.type_ctor_info.c"
  }
#line 2700 "backend_libs.type_ctor_info.c"
}

#line 2703 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0_10001(
#line 2706 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 2708 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 2710 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3)
#line 2712 "backend_libs.type_ctor_info.c"
{
#line 2714 "backend_libs.type_ctor_info.c"
  {
#line 2716 "backend_libs.type_ctor_info.c"
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__1_1;

#line 2719 "backend_libs.type_ctor_info.c"
    {
#line 2721 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0(&backend_libs__type_ctor_info__conv0_HeadVar__1_1, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3));
    }
#line 2724 "backend_libs.type_ctor_info.c"
    *backend_libs__type_ctor_info__wrapper_arg_1 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__1_1));
#line 2726 "backend_libs.type_ctor_info.c"
  }
#line 2728 "backend_libs.type_ctor_info.c"
}

#line 2731 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0_10001(
#line 2734 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 2736 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2)
#line 2738 "backend_libs.type_ctor_info.c"
{
#line 2740 "backend_libs.type_ctor_info.c"
  {
#line 2742 "backend_libs.type_ctor_info.c"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 2745 "backend_libs.type_ctor_info.c"
    {
#line 2747 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info____Unify____tag_list_0_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2));
    }
#line 2750 "backend_libs.type_ctor_info.c"
    return backend_libs__type_ctor_info__succeeded;
#line 2752 "backend_libs.type_ctor_info.c"
  }
#line 2754 "backend_libs.type_ctor_info.c"
}

#line 2757 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0_10001(
#line 2760 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 2762 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 2764 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3)
#line 2766 "backend_libs.type_ctor_info.c"
{
#line 2768 "backend_libs.type_ctor_info.c"
  {
#line 2770 "backend_libs.type_ctor_info.c"
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__1_1;

#line 2773 "backend_libs.type_ctor_info.c"
    {
#line 2775 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info____Compare____tag_list_0_0(&backend_libs__type_ctor_info__conv0_HeadVar__1_1, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3));
    }
#line 2778 "backend_libs.type_ctor_info.c"
    *backend_libs__type_ctor_info__wrapper_arg_1 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__1_1));
#line 2780 "backend_libs.type_ctor_info.c"
  }
#line 2782 "backend_libs.type_ctor_info.c"
}

#line 2785 "backend_libs.type_ctor_info.c"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0_10001(
#line 2788 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 2790 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2)
#line 2792 "backend_libs.type_ctor_info.c"
{
#line 2794 "backend_libs.type_ctor_info.c"
  {
#line 2796 "backend_libs.type_ctor_info.c"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 2799 "backend_libs.type_ctor_info.c"
    {
#line 2801 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info____Unify____tag_map_0_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2));
    }
#line 2804 "backend_libs.type_ctor_info.c"
    return backend_libs__type_ctor_info__succeeded;
#line 2806 "backend_libs.type_ctor_info.c"
  }
#line 2808 "backend_libs.type_ctor_info.c"
}

#line 2811 "backend_libs.type_ctor_info.c"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0_10001(
#line 2814 "backend_libs.type_ctor_info.c"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_1,
#line 2816 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 2818 "backend_libs.type_ctor_info.c"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_3)
#line 2820 "backend_libs.type_ctor_info.c"
{
#line 2822 "backend_libs.type_ctor_info.c"
  {
#line 2824 "backend_libs.type_ctor_info.c"
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__1_1;

#line 2827 "backend_libs.type_ctor_info.c"
    {
#line 2829 "backend_libs.type_ctor_info.c"
      backend_libs__type_ctor_info____Compare____tag_map_0_0(&backend_libs__type_ctor_info__conv0_HeadVar__1_1, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_3));
    }
#line 2832 "backend_libs.type_ctor_info.c"
    *backend_libs__type_ctor_info__wrapper_arg_1 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__1_1));
#line 2834 "backend_libs.type_ctor_info.c"
  }
#line 2836 "backend_libs.type_ctor_info.c"
}

#line 1027 "type_ctor_info.m"
static MR_Word MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1027__1_1_f_0(
#line 1027 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_10)
#line 1027 "type_ctor_info.m"
{
#line 1027 "type_ctor_info.m"
  {
#line 1027 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 1027 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__HeadVar__2_11;
#line 1027 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_10, (MR_Integer) 2)));
#line 1027 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_13_13;
#line 1027 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_10, (MR_Integer) 3)));
#line 1028 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_10, (MR_Integer) 0)));
#line 1028 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_10, (MR_Integer) 1)));
#line 1028 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_10, (MR_Integer) 4)));
#line 1028 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_10, (MR_Integer) 5)));

#line 1028 "type_ctor_info.m"
    {
#line 1028 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_13_13 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, backend_libs__type_ctor_info__V_24_24);
    }
#line 1028 "type_ctor_info.m"
    {
#line 1028 "type_ctor_info.m"
      backend_libs__type_ctor_info__HeadVar__2_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1028 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__2_11, 0) = ((MR_Box) (backend_libs__type_ctor_info__V_12_12));
#line 1028 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__2_11, 1) = ((MR_Box) (backend_libs__type_ctor_info__V_13_13));
#line 1028 "type_ctor_info.m"
    }
#line 1027 "type_ctor_info.m"
    return backend_libs__type_ctor_info__HeadVar__2_11;
#line 1027 "type_ctor_info.m"
  }
#line 1027 "type_ctor_info.m"
}

#line 966 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__966__1_2_p_0(
#line 966 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__SectagLocn_9,
#line 966 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Locn0_12)
#line 966 "type_ctor_info.m"
{
#line 966 "type_ctor_info.m"
  {
#line 966 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__SectagLocn_9 == backend_libs__type_ctor_info__Locn0_12);

#line 966 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 966 "type_ctor_info.m"
  }
#line 966 "type_ctor_info.m"
}

#line 902 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__902__1_3_p_0(
#line 902 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__LocnMap_28,
#line 902 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_46,
#line 902 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__3_47)
#line 902 "type_ctor_info.m"
{
#line 902 "type_ctor_info.m"
  {
#line 902 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 903 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv0_HeadVar__3_47;

#line 903 "type_ctor_info.m"
    {
#line 903 "type_ctor_info.m"
      mercury__map__lookup_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, backend_libs__type_ctor_info__LocnMap_28, ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_46)), &backend_libs__type_ctor_info__conv0_HeadVar__3_47);
    }
#line 903 "type_ctor_info.m"
    *backend_libs__type_ctor_info__HeadVar__3_47 = ((MR_Word) backend_libs__type_ctor_info__conv0_HeadVar__3_47);
#line 902 "type_ctor_info.m"
  }
#line 902 "type_ctor_info.m"
}

#line 892 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__892__1_5_p_0(
#line 892 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_37,
#line 892 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_38,
#line 892 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__HeadVar__3_39,
#line 892 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__4_40,
#line 892 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__5_41)
#line 892 "type_ctor_info.m"
{
#line 892 "type_ctor_info.m"
  {
#line 892 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 892 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Locn_23;

#line 893 "type_ctor_info.m"
    {
#line 893 "type_ctor_info.m"
      backend_libs__type_ctor_info__Locn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 893 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Locn_23, 0) = ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_38));
#line 893 "type_ctor_info.m"
    }
#line 894 "type_ctor_info.m"
    {
#line 894 "type_ctor_info.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, ((MR_Box) (backend_libs__type_ctor_info__HeadVar__1_37)), ((MR_Box) (backend_libs__type_ctor_info__Locn_23)), backend_libs__type_ctor_info__HeadVar__4_40, backend_libs__type_ctor_info__HeadVar__5_41);
    }
#line 895 "type_ctor_info.m"
    *backend_libs__type_ctor_info__HeadVar__3_39 = (backend_libs__type_ctor_info__HeadVar__2_38 + (MR_Integer) 1);
#line 892 "type_ctor_info.m"
  }
#line 892 "type_ctor_info.m"
}

#line 884 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__884__1_2_p_0(
#line 884 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_33,
#line 884 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__2_34)
#line 884 "type_ctor_info.m"
{
#line 884 "type_ctor_info.m"
  {
#line 884 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 884 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_33, (MR_Integer) 0)));

#line 884 "type_ctor_info.m"
    *backend_libs__type_ctor_info__HeadVar__2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_33, (MR_Integer) 1)));
#line 884 "type_ctor_info.m"
  }
#line 884 "type_ctor_info.m"
}

#line 786 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__786__1_2_p_0(
#line 786 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__MaybeExistInfo_33,
#line 786 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_58)
#line 786 "type_ctor_info.m"
{
#line 786 "type_ctor_info.m"
  {
#line 786 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 786 "type_ctor_info.m"
    {
#line 786 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[4], ((MR_Box) (backend_libs__type_ctor_info__MaybeExistInfo_33)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_58)));
    }
#line 786 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 786 "type_ctor_info.m"
  }
#line 786 "type_ctor_info.m"
}

#line 785 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__785__1_2_p_0(
#line 785 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ArgInfos_32,
#line 785 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_53)
#line 785 "type_ctor_info.m"
{
#line 785 "type_ctor_info.m"
  {
#line 785 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 785 "type_ctor_info.m"
    {
#line 785 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[3], ((MR_Box) (backend_libs__type_ctor_info__ArgInfos_32)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_53)));
    }
#line 785 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 785 "type_ctor_info.m"
  }
#line 785 "type_ctor_info.m"
}

#line 784 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__784__1_2_p_0(
#line 784 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__Arity_26,
#line 784 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_48)
#line 784 "type_ctor_info.m"
{
#line 784 "type_ctor_info.m"
  {
#line 784 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__Arity_26 == backend_libs__type_ctor_info__HeadVar__2_48);

#line 784 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 784 "type_ctor_info.m"
  }
#line 784 "type_ctor_info.m"
}

#line 728 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__728__1_2_p_0(
#line 728 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
#line 728 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_35)
#line 728 "type_ctor_info.m"
{
#line 728 "type_ctor_info.m"
  {
#line 728 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__ReservedAddr_14 == backend_libs__type_ctor_info__HeadVar__2_35);

#line 728 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 728 "type_ctor_info.m"
  }
#line 728 "type_ctor_info.m"
}

#line 720 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__720__1_2_p_0(
#line 720 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
#line 720 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_42)
#line 720 "type_ctor_info.m"
{
#line 720 "type_ctor_info.m"
  {
#line 720 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__ReservedAddr_14 == backend_libs__type_ctor_info__HeadVar__2_42);

#line 720 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 720 "type_ctor_info.m"
  }
#line 720 "type_ctor_info.m"
}

#line 639 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__639__1_2_p_0(
#line 639 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Lang_2,
#line 639 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ForeignTagLang_27)
#line 639 "type_ctor_info.m"
{
#line 639 "type_ctor_info.m"
  {
#line 639 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__Lang_2 == backend_libs__type_ctor_info__ForeignTagLang_27);

#line 639 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 639 "type_ctor_info.m"
  }
#line 639 "type_ctor_info.m"
}

#line 633 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__633__1_2_p_0(
#line 633 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__Arity_23,
#line 633 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_76)
#line 633 "type_ctor_info.m"
{
#line 633 "type_ctor_info.m"
  {
#line 633 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__Arity_23 == backend_libs__type_ctor_info__HeadVar__2_76);

#line 633 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 633 "type_ctor_info.m"
  }
#line 633 "type_ctor_info.m"
}

#line 631 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__631__1_2_p_0(
#line 631 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_20,
#line 631 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_71)
#line 631 "type_ctor_info.m"
{
#line 631 "type_ctor_info.m"
  {
#line 631 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 631 "type_ctor_info.m"
    {
#line 631 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[2], ((MR_Box) (backend_libs__type_ctor_info__Constraints_20)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_71)));
    }
#line 631 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 631 "type_ctor_info.m"
  }
#line 631 "type_ctor_info.m"
}

#line 629 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__629__1_2_p_0(
#line 629 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTvars_19,
#line 629 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_66)
#line 629 "type_ctor_info.m"
{
#line 629 "type_ctor_info.m"
  {
#line 629 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 629 "type_ctor_info.m"
    {
#line 629 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[1], ((MR_Box) (backend_libs__type_ctor_info__ExistTvars_19)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_66)));
    }
#line 629 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 629 "type_ctor_info.m"
  }
#line 629 "type_ctor_info.m"
}

#line 570 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__570__1_2_p_0(
#line 570 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTag_23,
#line 570 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_45)
#line 570 "type_ctor_info.m"
{
#line 570 "type_ctor_info.m"
  {
#line 570 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 570 "type_ctor_info.m"
    {
#line 570 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = hlds__hlds_data____Unify____cons_tag_0_0(backend_libs__type_ctor_info__ConsTag_23, backend_libs__type_ctor_info__HeadVar__2_45);
    }
#line 570 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 570 "type_ctor_info.m"
  }
#line 570 "type_ctor_info.m"
}

#line 566 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__566__1_2_p_0(
#line 566 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__Arity_20,
#line 566 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__2_39)
#line 566 "type_ctor_info.m"
{
#line 566 "type_ctor_info.m"
  {
#line 566 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__Arity_20 == backend_libs__type_ctor_info__HeadVar__2_39);

#line 566 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 566 "type_ctor_info.m"
  }
#line 566 "type_ctor_info.m"
}

#line 564 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__564__1_2_p_0(
#line 564 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_17,
#line 564 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_34)
#line 564 "type_ctor_info.m"
{
#line 564 "type_ctor_info.m"
  {
#line 564 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 564 "type_ctor_info.m"
    {
#line 564 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[2], ((MR_Box) (backend_libs__type_ctor_info__Constraints_17)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_34)));
    }
#line 564 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 564 "type_ctor_info.m"
  }
#line 564 "type_ctor_info.m"
}

#line 562 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__562__1_2_p_0(
#line 562 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTvars_16,
#line 562 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_29)
#line 562 "type_ctor_info.m"
{
#line 562 "type_ctor_info.m"
  {
#line 562 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 562 "type_ctor_info.m"
    {
#line 562 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[1], ((MR_Box) (backend_libs__type_ctor_info__ExistTvars_16)), ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_29)));
    }
#line 562 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 562 "type_ctor_info.m"
  }
#line 562 "type_ctor_info.m"
}

#line 208 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__208__1_2_p_0(
#line 208 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 208 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeModuleName_15)
#line 208 "type_ctor_info.m"
{
#line 208 "type_ctor_info.m"
  {
#line 208 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 208 "type_ctor_info.m"
    {
#line 208 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__type_ctor_info__TypeModuleName_15, backend_libs__type_ctor_info__HeadVar__2_2);
    }
#line 208 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 208 "type_ctor_info.m"
  }
#line 208 "type_ctor_info.m"
}

#line 685 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_map_0_0(
#line 685 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 685 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 685 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3)
#line 685 "type_ctor_info.m"
{
#line 685 "type_ctor_info.m"
  {
#line 685 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 685 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_4 = backend_libs__type_ctor_info__HeadVar__2_2;
#line 685 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_5 = backend_libs__type_ctor_info__HeadVar__3_3;

#line 685 "type_ctor_info.m"
    {
#line 685 "type_ctor_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[17], backend_libs__type_ctor_info__HeadVar__1_1, ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_5)));
#line 685 "type_ctor_info.m"
      return;
    }
#line 685 "type_ctor_info.m"
  }
#line 685 "type_ctor_info.m"
}

#line 685 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_map_0_0(
#line 685 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 685 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2)
#line 685 "type_ctor_info.m"
{
#line 685 "type_ctor_info.m"
  {
#line 685 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 685 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_3 = backend_libs__type_ctor_info__HeadVar__1_1;
#line 685 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_4 = backend_libs__type_ctor_info__HeadVar__2_2;

#line 685 "type_ctor_info.m"
    {
#line 685 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[17], ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_4)));
    }
#line 685 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 685 "type_ctor_info.m"
  }
#line 685 "type_ctor_info.m"
}

#line 687 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____tag_list_0_0(
#line 687 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 687 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 687 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3)
#line 687 "type_ctor_info.m"
{
#line 687 "type_ctor_info.m"
  {
#line 687 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 687 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_4 = backend_libs__type_ctor_info__HeadVar__2_2;
#line 687 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_5 = backend_libs__type_ctor_info__HeadVar__3_3;

#line 687 "type_ctor_info.m"
    {
#line 687 "type_ctor_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[7], backend_libs__type_ctor_info__HeadVar__1_1, ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_5)));
#line 687 "type_ctor_info.m"
      return;
    }
#line 687 "type_ctor_info.m"
  }
#line 687 "type_ctor_info.m"
}

#line 687 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____tag_list_0_0(
#line 687 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 687 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2)
#line 687 "type_ctor_info.m"
{
#line 687 "type_ctor_info.m"
  {
#line 687 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 687 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_3 = backend_libs__type_ctor_info__HeadVar__1_1;
#line 687 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_4 = backend_libs__type_ctor_info__HeadVar__2_2;

#line 687 "type_ctor_info.m"
    {
#line 687 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[7], ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_4)));
    }
#line 687 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 687 "type_ctor_info.m"
  }
#line 687 "type_ctor_info.m"
}

#line 690 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____reserved_addr_map_0_0(
#line 690 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 690 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 690 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3)
#line 690 "type_ctor_info.m"
{
#line 690 "type_ctor_info.m"
  {
#line 690 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 690 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_4 = backend_libs__type_ctor_info__HeadVar__2_2;
#line 690 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_5 = backend_libs__type_ctor_info__HeadVar__3_3;

#line 690 "type_ctor_info.m"
    {
#line 690 "type_ctor_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[13], backend_libs__type_ctor_info__HeadVar__1_1, ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_5)));
#line 690 "type_ctor_info.m"
      return;
    }
#line 690 "type_ctor_info.m"
  }
#line 690 "type_ctor_info.m"
}

#line 690 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____reserved_addr_map_0_0(
#line 690 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 690 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2)
#line 690 "type_ctor_info.m"
{
#line 690 "type_ctor_info.m"
  {
#line 690 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 690 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_3 = backend_libs__type_ctor_info__HeadVar__1_1;
#line 690 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_4 = backend_libs__type_ctor_info__HeadVar__2_2;

#line 690 "type_ctor_info.m"
    {
#line 690 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_2[13], ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_4)));
    }
#line 690 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 690 "type_ctor_info.m"
  }
#line 690 "type_ctor_info.m"
}

#line 516 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____name_sort_info_0_0(
#line 516 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 516 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 516 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3)
#line 516 "type_ctor_info.m"
{
#line 516 "type_ctor_info.m"
  {
#line 516 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 516 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_4 = backend_libs__type_ctor_info__HeadVar__2_2;
#line 516 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_5 = backend_libs__type_ctor_info__HeadVar__3_3;

#line 516 "type_ctor_info.m"
    {
#line 516 "type_ctor_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[6], backend_libs__type_ctor_info__HeadVar__1_1, ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_5)));
#line 516 "type_ctor_info.m"
      return;
    }
#line 516 "type_ctor_info.m"
  }
#line 516 "type_ctor_info.m"
}

#line 516 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____name_sort_info_0_0(
#line 516 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 516 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2)
#line 516 "type_ctor_info.m"
{
#line 516 "type_ctor_info.m"
  {
#line 516 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 516 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar1_3 = backend_libs__type_ctor_info__HeadVar__1_1;
#line 516 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Cast_HeadVar2_4 = backend_libs__type_ctor_info__HeadVar__2_2;

#line 516 "type_ctor_info.m"
    {
#line 516 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[6], ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__type_ctor_info__Cast_HeadVar2_4)));
    }
#line 516 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 516 "type_ctor_info.m"
  }
#line 516 "type_ctor_info.m"
}

#line 736 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info____Compare____maybe_reserved_rep_0_0(
#line 736 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__1_1,
#line 736 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 736 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3)
#line 736 "type_ctor_info.m"
{
#line 736 "type_ctor_info.m"
  {
#line 736 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 736 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__CastX_12 = (MR_Integer) backend_libs__type_ctor_info__HeadVar__2_2;
#line 736 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__CastY_13 = (MR_Integer) backend_libs__type_ctor_info__HeadVar__3_3;

#line 736 "type_ctor_info.m"
    backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__CastX_12 == backend_libs__type_ctor_info__CastY_13);
#line 736 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 3611 "backend_libs.type_ctor_info.c"
      *backend_libs__type_ctor_info__HeadVar__1_1 = (MR_Integer) 0;
#line 736 "type_ctor_info.m"
    else
#line 736 "type_ctor_info.m"
    if (((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 736 "type_ctor_info.m"
      {
#line 736 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));

#line 736 "type_ctor_info.m"
        if (((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 736 "type_ctor_info.m"
          {
#line 736 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 0)));

#line 736 "type_ctor_info.m"
            {
#line 736 "type_ctor_info.m"
              backend_libs__rtti____Compare____du_rep_0_0(backend_libs__type_ctor_info__HeadVar__1_1, backend_libs__type_ctor_info__V_16_16, backend_libs__type_ctor_info__V_11_11);
#line 736 "type_ctor_info.m"
              return;
            }
#line 736 "type_ctor_info.m"
          }
#line 736 "type_ctor_info.m"
        else
#line 3640 "backend_libs.type_ctor_info.c"
          *backend_libs__type_ctor_info__HeadVar__1_1 = (MR_Integer) 2;
#line 736 "type_ctor_info.m"
      }
#line 736 "type_ctor_info.m"
    else
#line 736 "type_ctor_info.m"
      {
#line 736 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));

#line 736 "type_ctor_info.m"
        if (((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3653 "backend_libs.type_ctor_info.c"
          *backend_libs__type_ctor_info__HeadVar__1_1 = (MR_Integer) 1;
#line 736 "type_ctor_info.m"
        else
#line 736 "type_ctor_info.m"
          {
#line 736 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 0)));

#line 736 "type_ctor_info.m"
            {
#line 736 "type_ctor_info.m"
              hlds__hlds_data____Compare____reserved_address_0_0(backend_libs__type_ctor_info__HeadVar__1_1, backend_libs__type_ctor_info__V_17_17, backend_libs__type_ctor_info__V_5_5);
#line 736 "type_ctor_info.m"
              return;
            }
#line 736 "type_ctor_info.m"
          }
#line 736 "type_ctor_info.m"
      }
#line 736 "type_ctor_info.m"
  }
#line 736 "type_ctor_info.m"
}

#line 736 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info____Unify____maybe_reserved_rep_0_0(
#line 736 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 736 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2)
#line 736 "type_ctor_info.m"
{
#line 736 "type_ctor_info.m"
  {
#line 736 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 736 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__CastX_7 = (MR_Integer) backend_libs__type_ctor_info__HeadVar__1_1;
#line 736 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__CastY_8 = (MR_Integer) backend_libs__type_ctor_info__HeadVar__2_2;

#line 736 "type_ctor_info.m"
    backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__CastX_7 == backend_libs__type_ctor_info__CastY_8);
#line 736 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 736 "type_ctor_info.m"
      backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 736 "type_ctor_info.m"
    else
#line 736 "type_ctor_info.m"
    if (((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 736 "type_ctor_info.m"
      {
#line 736 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 0)));
#line 736 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_6_6;

#line 736 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 736 "type_ctor_info.m"
        if (backend_libs__type_ctor_info__succeeded)
#line 736 "type_ctor_info.m"
          {
#line 736 "type_ctor_info.m"
            backend_libs__type_ctor_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));
#line 3721 "backend_libs.type_ctor_info.c"
            {
#line 3723 "backend_libs.type_ctor_info.c"
              return backend_libs__type_ctor_info__succeeded = backend_libs__rtti____Unify____du_rep_0_0(backend_libs__type_ctor_info__V_5_5, backend_libs__type_ctor_info__V_6_6);
            }
#line 736 "type_ctor_info.m"
          }
#line 736 "type_ctor_info.m"
      }
#line 736 "type_ctor_info.m"
    else
#line 736 "type_ctor_info.m"
      {
#line 736 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 0)));
#line 736 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_4_4;

#line 736 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 736 "type_ctor_info.m"
        if (backend_libs__type_ctor_info__succeeded)
#line 736 "type_ctor_info.m"
          {
#line 736 "type_ctor_info.m"
            backend_libs__type_ctor_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));
#line 3747 "backend_libs.type_ctor_info.c"
            {
#line 3749 "backend_libs.type_ctor_info.c"
              return backend_libs__type_ctor_info__succeeded = hlds__hlds_data____Unify____reserved_address_0_0(backend_libs__type_ctor_info__V_3_3, backend_libs__type_ctor_info__V_4_4);
            }
#line 736 "type_ctor_info.m"
          }
#line 736 "type_ctor_info.m"
      }
#line 736 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 736 "type_ctor_info.m"
  }
#line 736 "type_ctor_info.m"
}

#line 1040 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__compute_contains_var_bit_vector_2_4_p_0(
#line 1040 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 1040 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__ArgNum_2,
#line 1040 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3,
#line 1040 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__STATE_VARIABLE_Vector_4)
#line 1040 "type_ctor_info.m"
{
#line 1044 "type_ctor_info.m"
  while (MR_TRUE)
#line 1044 "type_ctor_info.m"
    {
#line 1044 "type_ctor_info.m"
      /* tailcall optimized into a loop */
#line 1044 "type_ctor_info.m"
      {
#line 1044 "type_ctor_info.m"
        MR_bool backend_libs__type_ctor_info__succeeded;

#line 1044 "type_ctor_info.m"
        if ((backend_libs__type_ctor_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1044 "type_ctor_info.m"
          *backend_libs__type_ctor_info__STATE_VARIABLE_Vector_4 = backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3;
#line 1044 "type_ctor_info.m"
        else
#line 1045 "type_ctor_info.m"
          {
#line 1045 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__ArgType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 0)));
#line 1045 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__ArgTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 1)));
#line 1045 "type_ctor_info.m"
            MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_Vector_18_18;
#line 1045 "type_ctor_info.m"
            MR_Integer backend_libs__type_ctor_info__V_19_19;

#line 1048 "type_ctor_info.m"
#line 1048 "type_ctor_info.m"
            switch (MR_tag((MR_Word) backend_libs__type_ctor_info__ArgType_9)) {
#line 1048 "type_ctor_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1048 "type_ctor_info.m"
              case (MR_Integer) 0:
#line 1061 "type_ctor_info.m"
                {
#line 1061 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__BitNum_39;
#line 1061 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__V_46_46;

#line 1062 "type_ctor_info.m"
                  backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__ArgNum_2 >= (((MR_Integer) 16 - (MR_Integer) 1)));
#line 1064 "type_ctor_info.m"
                  if (backend_libs__type_ctor_info__succeeded)
#line 1063 "type_ctor_info.m"
                    {
#line 1063 "type_ctor_info.m"
                      backend_libs__type_ctor_info__BitNum_39 = ((MR_Integer) 16 - (MR_Integer) 1);
#line 1063 "type_ctor_info.m"
                    }
#line 1064 "type_ctor_info.m"
                  else
#line 1065 "type_ctor_info.m"
                    backend_libs__type_ctor_info__BitNum_39 = backend_libs__type_ctor_info__ArgNum_2;
#line 1067 "type_ctor_info.m"
                  {
#line 1067 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_46_46 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, backend_libs__type_ctor_info__BitNum_39);
                  }
#line 1067 "type_ctor_info.m"
                  backend_libs__type_ctor_info__STATE_VARIABLE_Vector_18_18 = (backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3 | backend_libs__type_ctor_info__V_46_46);
#line 1061 "type_ctor_info.m"
                }
#line 1048 "type_ctor_info.m"
                break;
#line 1048 "type_ctor_info.m"
              case (MR_Integer) 1:
#line 1061 "type_ctor_info.m"
                {
#line 1061 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__BitNum_26;
#line 1061 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__V_33_33;

#line 1062 "type_ctor_info.m"
                  backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__ArgNum_2 >= (((MR_Integer) 16 - (MR_Integer) 1)));
#line 1064 "type_ctor_info.m"
                  if (backend_libs__type_ctor_info__succeeded)
#line 1063 "type_ctor_info.m"
                    {
#line 1063 "type_ctor_info.m"
                      backend_libs__type_ctor_info__BitNum_26 = ((MR_Integer) 16 - (MR_Integer) 1);
#line 1063 "type_ctor_info.m"
                    }
#line 1064 "type_ctor_info.m"
                  else
#line 1065 "type_ctor_info.m"
                    backend_libs__type_ctor_info__BitNum_26 = backend_libs__type_ctor_info__ArgNum_2;
#line 1067 "type_ctor_info.m"
                  {
#line 1067 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_33_33 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, backend_libs__type_ctor_info__BitNum_26);
                  }
#line 1067 "type_ctor_info.m"
                  backend_libs__type_ctor_info__STATE_VARIABLE_Vector_18_18 = (backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3 | backend_libs__type_ctor_info__V_33_33);
#line 1061 "type_ctor_info.m"
                }
#line 1048 "type_ctor_info.m"
                break;
#line 1048 "type_ctor_info.m"
              case (MR_Integer) 2:
#line 1047 "type_ctor_info.m"
                backend_libs__type_ctor_info__STATE_VARIABLE_Vector_18_18 = backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3;
#line 1048 "type_ctor_info.m"
                break;
#line 1048 "type_ctor_info.m"
            }
#line 1057 "type_ctor_info.m"
            backend_libs__type_ctor_info__V_19_19 = (backend_libs__type_ctor_info__ArgNum_2 + (MR_Integer) 1);
#line 1057 "type_ctor_info.m"
            /* direct tailcall eliminated */
#line 1057 "type_ctor_info.m"
            {
#line 1057 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__HeadVar__1__tmp_copy_1 = backend_libs__type_ctor_info__ArgTypes_10;
#line 1057 "type_ctor_info.m"
              MR_Integer backend_libs__type_ctor_info__ArgNum__tmp_copy_2 = backend_libs__type_ctor_info__V_19_19;
#line 1057 "type_ctor_info.m"
              MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0__tmp_copy_3 = backend_libs__type_ctor_info__STATE_VARIABLE_Vector_18_18;

#line 1057 "type_ctor_info.m"
              backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0_3 = backend_libs__type_ctor_info__STATE_VARIABLE_Vector_0__tmp_copy_3;
#line 1057 "type_ctor_info.m"
              backend_libs__type_ctor_info__ArgNum_2 = backend_libs__type_ctor_info__ArgNum__tmp_copy_2;
#line 1057 "type_ctor_info.m"
              backend_libs__type_ctor_info__HeadVar__1_1 = backend_libs__type_ctor_info__HeadVar__1__tmp_copy_1;
#line 1057 "type_ctor_info.m"
            }
#line 1057 "type_ctor_info.m"
            continue;
#line 1045 "type_ctor_info.m"
          }
#line 1044 "type_ctor_info.m"
      }
#line 1044 "type_ctor_info.m"
      break;
#line 1044 "type_ctor_info.m"
    }
#line 1040 "type_ctor_info.m"
}

#line 1027 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0_1(
#line 1027 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 1027 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1)
#line 1027 "type_ctor_info.m"
{
#line 1027 "type_ctor_info.m"
  {
#line 1027 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__wrapper_arg_2;
#line 1027 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 1027 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__2_11;

#line 1027 "type_ctor_info.m"
    {
#line 1027 "type_ctor_info.m"
      backend_libs__type_ctor_info__conv0_HeadVar__2_11 = backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1027__1_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1));
    }
#line 1027 "type_ctor_info.m"
    backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__2_11));
#line 1027 "type_ctor_info.m"
    return backend_libs__type_ctor_info__wrapper_arg_2;
#line 1027 "type_ctor_info.m"
  }
#line 1027 "type_ctor_info.m"
}

#line 1023 "type_ctor_info.m"
static MR_Word MR_CALL 
backend_libs__type_ctor_info__make_functor_number_map_1_f_0(
#line 1023 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_3)
#line 1023 "type_ctor_info.m"
{
#line 1025 "type_ctor_info.m"
  {
#line 1025 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 1025 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Map_4;
#line 1025 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_32_32 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 1025 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeInfo_33_33 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[10];
#line 1025 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_35_35;
#line 1025 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__CtorNames_5;
#line 1025 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__SortedNameArityMap_7;
#line 1025 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_15_15;
#line 1025 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_16_16;
#line 1025 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_18_18;
#line 1025 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_19_19;

#line 1027 "type_ctor_info.m"
    {
#line 1027 "type_ctor_info.m"
      backend_libs__type_ctor_info__CtorNames_5 = mercury__list__map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_32_32, backend_libs__type_ctor_info__TypeInfo_33_33, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[30], backend_libs__type_ctor_info__Ctors_3);
    }
#line 3988 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1031 "type_ctor_info.m"
    {
#line 1031 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_15_15 = mercury__list__sort_1_f_0(backend_libs__type_ctor_info__TypeInfo_33_33, backend_libs__type_ctor_info__CtorNames_5);
    }
#line 1032 "type_ctor_info.m"
    {
#line 1032 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_19_19 = mercury__list__length_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_32_32, backend_libs__type_ctor_info__Ctors_3);
    }
#line 1032 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_18_18 = (backend_libs__type_ctor_info__V_19_19 - (MR_Integer) 1);
#line 1032 "type_ctor_info.m"
    {
#line 1032 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_16_16 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, backend_libs__type_ctor_info__V_18_18);
    }
#line 1031 "type_ctor_info.m"
    {
#line 1031 "type_ctor_info.m"
      backend_libs__type_ctor_info__SortedNameArityMap_7 = mercury__map__from_corresponding_lists_2_f_0(backend_libs__type_ctor_info__TypeInfo_33_33, backend_libs__type_ctor_info__TypeCtorInfo_35_35, backend_libs__type_ctor_info__V_15_15, backend_libs__type_ctor_info__V_16_16);
    }
#line 1033 "type_ctor_info.m"
    {
#line 1033 "type_ctor_info.m"
      backend_libs__type_ctor_info__Map_4 = mercury__map__apply_to_list_2_f_0(backend_libs__type_ctor_info__TypeInfo_33_33, backend_libs__type_ctor_info__TypeCtorInfo_35_35, backend_libs__type_ctor_info__CtorNames_5, backend_libs__type_ctor_info__SortedNameArityMap_7);
    }
#line 1025 "type_ctor_info.m"
    return backend_libs__type_ctor_info__Map_4;
#line 1025 "type_ctor_info.m"
  }
#line 1023 "type_ctor_info.m"
}

#line 996 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_res_name_ordered_table_3_p_0(
#line 996 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__MaybeResFunctor_4,
#line 996 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_12,
#line 996 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_13)
#line 996 "type_ctor_info.m"
{
#line 1000 "type_ctor_info.m"
  {
#line 1000 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 1000 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__Name_7;
#line 1000 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__Arity_8;
#line 1013 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__NameMap0_10;
#line 1010 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv0_NameMap0_10;

#line 1005 "type_ctor_info.m"
    if (((MR_tag((MR_Word) backend_libs__type_ctor_info__MaybeResFunctor_4)) == (MR_mktag((MR_Integer) 1))))
#line 1002 "type_ctor_info.m"
      {
#line 1002 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__DuFunctor_6 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__MaybeResFunctor_4), (MR_Integer) 1);
#line 1003 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_18_18;
#line 1003 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_19_19;
#line 1003 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_20_20;
#line 1003 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_21_21;

#line 1003 "type_ctor_info.m"
        backend_libs__type_ctor_info__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 0)));
#line 1003 "type_ctor_info.m"
        backend_libs__type_ctor_info__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 1)));
#line 1003 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 2)));
#line 1003 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 3)));
#line 1003 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 4)));
#line 1003 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_6, (MR_Integer) 5)));
#line 1002 "type_ctor_info.m"
      }
#line 1005 "type_ctor_info.m"
    else
#line 1006 "type_ctor_info.m"
      {
#line 1006 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ResFunctor_9 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__MaybeResFunctor_4), (MR_Integer) 0);
#line 1007 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_27_27;
#line 1007 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_28_28;

#line 1007 "type_ctor_info.m"
        backend_libs__type_ctor_info__Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_9, (MR_Integer) 0)));
#line 1007 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_9, (MR_Integer) 1)));
#line 1007 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_9, (MR_Integer) 2)));
#line 1008 "type_ctor_info.m"
        backend_libs__type_ctor_info__Arity_8 = (MR_Integer) 0;
#line 1006 "type_ctor_info.m"
      }
#line 1010 "type_ctor_info.m"
    {
#line 1010 "type_ctor_info.m"
      backend_libs__type_ctor_info__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[7], backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_12, ((MR_Box) (backend_libs__type_ctor_info__Name_7)), &backend_libs__type_ctor_info__conv0_NameMap0_10);
    }
#line 1010 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 1010 "type_ctor_info.m"
      {
#line 1010 "type_ctor_info.m"
        backend_libs__type_ctor_info__NameMap0_10 = ((MR_Word) backend_libs__type_ctor_info__conv0_NameMap0_10);
#line 1010 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 1010 "type_ctor_info.m"
      }
#line 1013 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 1011 "type_ctor_info.m"
      {
#line 1011 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__NameMap_11;

#line 1011 "type_ctor_info.m"
        {
#line 1011 "type_ctor_info.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, backend_libs__type_ctor_info__Arity_8, ((MR_Box) (backend_libs__type_ctor_info__MaybeResFunctor_4)), backend_libs__type_ctor_info__NameMap0_10, &backend_libs__type_ctor_info__NameMap_11);
        }
#line 1012 "type_ctor_info.m"
        {
#line 1012 "type_ctor_info.m"
          mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[7], ((MR_Box) (backend_libs__type_ctor_info__Name_7)), ((MR_Box) (backend_libs__type_ctor_info__NameMap_11)), backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_12, backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_13);
#line 1012 "type_ctor_info.m"
          return;
        }
#line 1011 "type_ctor_info.m"
      }
#line 1013 "type_ctor_info.m"
    else
#line 1014 "type_ctor_info.m"
      {
#line 1014 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__NameMap_16;

#line 1014 "type_ctor_info.m"
        {
#line 1014 "type_ctor_info.m"
          backend_libs__type_ctor_info__NameMap_16 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, ((MR_Box) (backend_libs__type_ctor_info__Arity_8)), ((MR_Box) (backend_libs__type_ctor_info__MaybeResFunctor_4)));
        }
#line 1015 "type_ctor_info.m"
        {
#line 1015 "type_ctor_info.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[7], ((MR_Box) (backend_libs__type_ctor_info__Name_7)), ((MR_Box) (backend_libs__type_ctor_info__NameMap_16)), backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_12, backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_13);
#line 1015 "type_ctor_info.m"
          return;
        }
#line 1014 "type_ctor_info.m"
      }
#line 1000 "type_ctor_info.m"
  }
#line 996 "type_ctor_info.m"
}

#line 981 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_name_ordered_table_3_p_0(
#line 981 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__DuFunctor_4,
#line 981 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_10,
#line 981 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_11)
#line 981 "type_ctor_info.m"
{
#line 985 "type_ctor_info.m"
  {
#line 985 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 985 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 0)));
#line 985 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 1)));
#line 986 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 2)));
#line 986 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 3)));
#line 986 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 4)));
#line 986 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 5)));
#line 991 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__NameMap0_8;
#line 988 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv0_NameMap0_8;

#line 988 "type_ctor_info.m"
    {
#line 988 "type_ctor_info.m"
      backend_libs__type_ctor_info__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[5], backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_10, ((MR_Box) (backend_libs__type_ctor_info__Name_6)), &backend_libs__type_ctor_info__conv0_NameMap0_8);
    }
#line 988 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 988 "type_ctor_info.m"
      {
#line 988 "type_ctor_info.m"
        backend_libs__type_ctor_info__NameMap0_8 = ((MR_Word) backend_libs__type_ctor_info__conv0_NameMap0_8);
#line 988 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 988 "type_ctor_info.m"
      }
#line 991 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 989 "type_ctor_info.m"
      {
#line 989 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__NameMap_9;

#line 989 "type_ctor_info.m"
        {
#line 989 "type_ctor_info.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, backend_libs__type_ctor_info__Arity_7, ((MR_Box) (backend_libs__type_ctor_info__DuFunctor_4)), backend_libs__type_ctor_info__NameMap0_8, &backend_libs__type_ctor_info__NameMap_9);
        }
#line 990 "type_ctor_info.m"
        {
#line 990 "type_ctor_info.m"
          mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[5], ((MR_Box) (backend_libs__type_ctor_info__Name_6)), ((MR_Box) (backend_libs__type_ctor_info__NameMap_9)), backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_10, backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_11);
#line 990 "type_ctor_info.m"
          return;
        }
#line 989 "type_ctor_info.m"
      }
#line 991 "type_ctor_info.m"
    else
#line 992 "type_ctor_info.m"
      {
#line 992 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__NameMap_14;

#line 992 "type_ctor_info.m"
        {
#line 992 "type_ctor_info.m"
          backend_libs__type_ctor_info__NameMap_14 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, ((MR_Box) (backend_libs__type_ctor_info__Arity_7)), ((MR_Box) (backend_libs__type_ctor_info__DuFunctor_4)));
        }
#line 993 "type_ctor_info.m"
        {
#line 993 "type_ctor_info.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[5], ((MR_Box) (backend_libs__type_ctor_info__Name_6)), ((MR_Box) (backend_libs__type_ctor_info__NameMap_14)), backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_0_10, backend_libs__type_ctor_info__STATE_VARIABLE_NameTable_11);
#line 993 "type_ctor_info.m"
          return;
        }
#line 992 "type_ctor_info.m"
      }
#line 985 "type_ctor_info.m"
  }
#line 981 "type_ctor_info.m"
}

#line 966 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0_1(
#line 966 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 966 "type_ctor_info.m"
{
#line 966 "type_ctor_info.m"
  {
#line 966 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 966 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 966 "type_ctor_info.m"
    {
#line 966 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_ptag_ordered_table__966__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 966 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 966 "type_ctor_info.m"
  }
#line 966 "type_ctor_info.m"
}

#line 942 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(
#line 942 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__DuFunctor_4,
#line 942 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_0_18,
#line 942 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_19)
#line 942 "type_ctor_info.m"
{
#line 945 "type_ctor_info.m"
  {
#line 945 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 945 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__DuRep_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 3)));
#line 946 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 0)));
#line 946 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 1)));
#line 946 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 2)));
#line 946 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 4)));
#line 946 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_4, (MR_Integer) 5)));

#line 976 "type_ctor_info.m"
    if (((MR_tag((MR_Word) backend_libs__type_ctor_info__DuRep_6)) == (MR_mktag((MR_Integer) 1))))
#line 977 "type_ctor_info.m"
      {
#line 978 "type_ctor_info.m"
        {
#line 978 "type_ctor_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_ptag_ordered_table\'/3", (MR_String) "du_hl_rep");
#line 978 "type_ctor_info.m"
          return;
        }
#line 977 "type_ctor_info.m"
      }
#line 976 "type_ctor_info.m"
    else
#line 948 "type_ctor_info.m"
      {
#line 948 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__Ptag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuRep_6, (MR_Integer) 0)));
#line 948 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SectagAndLocn_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuRep_6, (MR_Integer) 1)));
#line 948 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SectagLocn_9;
#line 948 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__Sectag_10;
#line 971 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SectagTable0_11;
#line 964 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv0_SectagTable0_11;

#line 953 "type_ctor_info.m"
#line 953 "type_ctor_info.m"
        switch (MR_tag((MR_Word) backend_libs__type_ctor_info__SectagAndLocn_8)) {
#line 953 "type_ctor_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 953 "type_ctor_info.m"
          case (MR_Integer) 0:
#line 953 "type_ctor_info.m"
#line 953 "type_ctor_info.m"
            switch (MR_unmkbody(backend_libs__type_ctor_info__SectagAndLocn_8)) {
#line 953 "type_ctor_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 953 "type_ctor_info.m"
              case (MR_Integer) 0:
#line 950 "type_ctor_info.m"
                {
#line 951 "type_ctor_info.m"
                  backend_libs__type_ctor_info__SectagLocn_9 = (MR_Integer) 0;
#line 952 "type_ctor_info.m"
                  backend_libs__type_ctor_info__Sectag_10 = (MR_Integer) 0;
#line 950 "type_ctor_info.m"
                }
#line 953 "type_ctor_info.m"
                break;
#line 953 "type_ctor_info.m"
              case (MR_Integer) 1:
#line 954 "type_ctor_info.m"
                {
#line 955 "type_ctor_info.m"
                  backend_libs__type_ctor_info__SectagLocn_9 = (MR_Integer) 1;
#line 956 "type_ctor_info.m"
                  backend_libs__type_ctor_info__Sectag_10 = (MR_Integer) 0;
#line 954 "type_ctor_info.m"
                }
#line 953 "type_ctor_info.m"
                break;
#line 953 "type_ctor_info.m"
            }
#line 953 "type_ctor_info.m"
            break;
#line 953 "type_ctor_info.m"
          case (MR_Integer) 1:
#line 958 "type_ctor_info.m"
            {
#line 958 "type_ctor_info.m"
              backend_libs__type_ctor_info__Sectag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__SectagAndLocn_8, (MR_Integer) 0)));
#line 959 "type_ctor_info.m"
              backend_libs__type_ctor_info__SectagLocn_9 = (MR_Integer) 2;
#line 958 "type_ctor_info.m"
            }
#line 953 "type_ctor_info.m"
            break;
#line 953 "type_ctor_info.m"
          case (MR_Integer) 2:
#line 961 "type_ctor_info.m"
            {
#line 961 "type_ctor_info.m"
              backend_libs__type_ctor_info__Sectag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__SectagAndLocn_8, (MR_Integer) 0)));
#line 962 "type_ctor_info.m"
              backend_libs__type_ctor_info__SectagLocn_9 = (MR_Integer) 3;
#line 961 "type_ctor_info.m"
            }
#line 953 "type_ctor_info.m"
            break;
#line 953 "type_ctor_info.m"
        }
#line 964 "type_ctor_info.m"
        {
#line 964 "type_ctor_info.m"
          backend_libs__type_ctor_info__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_0_18, backend_libs__type_ctor_info__Ptag_7, &backend_libs__type_ctor_info__conv0_SectagTable0_11);
        }
#line 964 "type_ctor_info.m"
        if (backend_libs__type_ctor_info__succeeded)
#line 964 "type_ctor_info.m"
          {
#line 964 "type_ctor_info.m"
            backend_libs__type_ctor_info__SectagTable0_11 = ((MR_Word) backend_libs__type_ctor_info__conv0_SectagTable0_11);
#line 964 "type_ctor_info.m"
            backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 964 "type_ctor_info.m"
          }
#line 971 "type_ctor_info.m"
        if (backend_libs__type_ctor_info__succeeded)
#line 965 "type_ctor_info.m"
          {
#line 965 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Locn0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable0_11, (MR_Integer) 0)));
#line 965 "type_ctor_info.m"
            MR_Integer backend_libs__type_ctor_info__NumSharers0_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable0_11, (MR_Integer) 1)));
#line 965 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__SectagMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable0_11, (MR_Integer) 2)));
#line 965 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__SectagMap_15;
#line 965 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__SectagTable_16;
#line 965 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_23_23;
#line 965 "type_ctor_info.m"
            MR_Integer backend_libs__type_ctor_info__V_27_27;

#line 966 "type_ctor_info.m"
            {
#line 966 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 966 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_23_23, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[14]));
#line 966 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_23_23, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0_1));
#line 966 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 966 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_23_23, 3) = ((MR_Box) (backend_libs__type_ctor_info__SectagLocn_9));
#line 966 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_23_23, 4) = ((MR_Box) (backend_libs__type_ctor_info__Locn0_12));
#line 966 "type_ctor_info.m"
            }
#line 966 "type_ctor_info.m"
            {
#line 966 "type_ctor_info.m"
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_23_23, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_ptag_ordered_table\'/3", (MR_String) "sectag locn disagreement");
            }
#line 968 "type_ctor_info.m"
            {
#line 968 "type_ctor_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, backend_libs__type_ctor_info__Sectag_10, ((MR_Box) (backend_libs__type_ctor_info__DuFunctor_4)), backend_libs__type_ctor_info__SectagMap0_14, &backend_libs__type_ctor_info__SectagMap_15);
            }
#line 969 "type_ctor_info.m"
            backend_libs__type_ctor_info__V_27_27 = (backend_libs__type_ctor_info__NumSharers0_13 + (MR_Integer) 1);
#line 969 "type_ctor_info.m"
            {
#line 969 "type_ctor_info.m"
              backend_libs__type_ctor_info__SectagTable_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 969 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_16, 0) = ((MR_Box) (backend_libs__type_ctor_info__Locn0_12));
#line 969 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_16, 1) = ((MR_Box) (backend_libs__type_ctor_info__V_27_27));
#line 969 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_16, 2) = ((MR_Box) (backend_libs__type_ctor_info__SectagMap_15));
#line 969 "type_ctor_info.m"
            }
#line 970 "type_ctor_info.m"
            {
#line 970 "type_ctor_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, backend_libs__type_ctor_info__Ptag_7, ((MR_Box) (backend_libs__type_ctor_info__SectagTable_16)), backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_0_18, backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_19);
#line 970 "type_ctor_info.m"
              return;
            }
#line 965 "type_ctor_info.m"
          }
#line 971 "type_ctor_info.m"
        else
#line 972 "type_ctor_info.m"
          {
#line 972 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__SectagMap_32;
#line 972 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__SectagTable_33;

#line 972 "type_ctor_info.m"
            {
#line 972 "type_ctor_info.m"
              backend_libs__type_ctor_info__SectagMap_32 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, ((MR_Box) (backend_libs__type_ctor_info__Sectag_10)), ((MR_Box) (backend_libs__type_ctor_info__DuFunctor_4)));
            }
#line 973 "type_ctor_info.m"
            {
#line 973 "type_ctor_info.m"
              backend_libs__type_ctor_info__SectagTable_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 973 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_33, 0) = ((MR_Box) (backend_libs__type_ctor_info__SectagLocn_9));
#line 973 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_33, 1) = ((MR_Box) ((MR_Integer) 1));
#line 973 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SectagTable_33, 2) = ((MR_Box) (backend_libs__type_ctor_info__SectagMap_32));
#line 973 "type_ctor_info.m"
            }
#line 974 "type_ctor_info.m"
            {
#line 974 "type_ctor_info.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, backend_libs__type_ctor_info__Ptag_7, ((MR_Box) (backend_libs__type_ctor_info__SectagTable_33)), backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_0_18, backend_libs__type_ctor_info__STATE_VARIABLE_PtagTable_19);
#line 974 "type_ctor_info.m"
              return;
            }
#line 972 "type_ctor_info.m"
          }
#line 948 "type_ctor_info.m"
      }
#line 945 "type_ctor_info.m"
  }
#line 942 "type_ctor_info.m"
}

#line 922 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__first_matching_type_class_info_6_p_0(
#line 922 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 922 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TVar_2,
#line 922 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__MatchingConstraint_3,
#line 922 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_N_0_4,
#line 922 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__STATE_VARIABLE_N_5,
#line 922 "type_ctor_info.m"
  MR_Integer * backend_libs__type_ctor_info__TypeInfoIndex_6)
#line 922 "type_ctor_info.m"
{
#line 925 "type_ctor_info.m"
  while (MR_TRUE)
#line 925 "type_ctor_info.m"
    {
#line 925 "type_ctor_info.m"
      /* tailcall optimized into a loop */
#line 925 "type_ctor_info.m"
      {
#line 925 "type_ctor_info.m"
        MR_bool backend_libs__type_ctor_info__succeeded;

#line 925 "type_ctor_info.m"
        if ((backend_libs__type_ctor_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 925 "type_ctor_info.m"
          {
#line 926 "type_ctor_info.m"
            {
#line 926 "type_ctor_info.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.first_matching_type_class_info\'/6", (MR_String) "not found");
#line 926 "type_ctor_info.m"
              return;
            }
#line 925 "type_ctor_info.m"
          }
#line 925 "type_ctor_info.m"
        else
#line 928 "type_ctor_info.m"
          {
#line 928 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__C_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 0)));
#line 928 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Cs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 1)));
#line 928 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__ArgTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__C_16, (MR_Integer) 1)));
#line 928 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TVs_24;
#line 929 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__C_16, (MR_Integer) 0)));
#line 934 "type_ctor_info.m"
            MR_Integer backend_libs__type_ctor_info__Index_25;

#line 930 "type_ctor_info.m"
            {
#line 930 "type_ctor_info.m"
              parse_tree__prog_type__type_vars_list_2_p_0(backend_libs__type_ctor_info__ArgTypes_23, &backend_libs__type_ctor_info__TVs_24);
            }
#line 931 "type_ctor_info.m"
            {
#line 931 "type_ctor_info.m"
              backend_libs__type_ctor_info__succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], backend_libs__type_ctor_info__TVs_24, ((MR_Box) (backend_libs__type_ctor_info__TVar_2)), &backend_libs__type_ctor_info__Index_25);
            }
#line 934 "type_ctor_info.m"
            if (backend_libs__type_ctor_info__succeeded)
#line 932 "type_ctor_info.m"
              {
#line 932 "type_ctor_info.m"
                *backend_libs__type_ctor_info__MatchingConstraint_3 = backend_libs__type_ctor_info__C_16;
#line 933 "type_ctor_info.m"
                *backend_libs__type_ctor_info__TypeInfoIndex_6 = backend_libs__type_ctor_info__Index_25;
#line 932 "type_ctor_info.m"
                *backend_libs__type_ctor_info__STATE_VARIABLE_N_5 = backend_libs__type_ctor_info__STATE_VARIABLE_N_0_4;
#line 932 "type_ctor_info.m"
              }
#line 934 "type_ctor_info.m"
            else
#line 935 "type_ctor_info.m"
              {
#line 935 "type_ctor_info.m"
                MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_N_28_28 = (backend_libs__type_ctor_info__STATE_VARIABLE_N_0_4 + (MR_Integer) 1);

#line 936 "type_ctor_info.m"
                /* direct tailcall eliminated */
#line 936 "type_ctor_info.m"
                {
#line 936 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__HeadVar__1__tmp_copy_1 = backend_libs__type_ctor_info__Cs_17;
#line 936 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__STATE_VARIABLE_N_0__tmp_copy_4 = backend_libs__type_ctor_info__STATE_VARIABLE_N_28_28;

#line 936 "type_ctor_info.m"
                  backend_libs__type_ctor_info__STATE_VARIABLE_N_0_4 = backend_libs__type_ctor_info__STATE_VARIABLE_N_0__tmp_copy_4;
#line 936 "type_ctor_info.m"
                  backend_libs__type_ctor_info__HeadVar__1_1 = backend_libs__type_ctor_info__HeadVar__1__tmp_copy_1;
#line 936 "type_ctor_info.m"
                }
#line 936 "type_ctor_info.m"
                continue;
#line 935 "type_ctor_info.m"
              }
#line 928 "type_ctor_info.m"
          }
#line 925 "type_ctor_info.m"
      }
#line 925 "type_ctor_info.m"
      break;
#line 925 "type_ctor_info.m"
    }
#line 922 "type_ctor_info.m"
}

#line 907 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__find_type_info_index_6_p_0(
#line 907 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_7,
#line 907 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ClassTable_8,
#line 907 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__StartSlot_9,
#line 907 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TVar_10,
#line 907 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_0_22,
#line 907 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_23)
#line 907 "type_ctor_info.m"
{
#line 911 "type_ctor_info.m"
  {
#line 911 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 911 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__FirstConstraint_12;
#line 911 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__Slot_13;
#line 911 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__TypeInfoIndex_14;
#line 911 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ClassName_15;
#line 911 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ArgTypes_16;
#line 911 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__ClassArity_17;
#line 911 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ClassDefn_18;
#line 911 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__NumSuperClasses_19;
#line 911 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__RealTypeInfoIndex_20;
#line 911 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Locn_21;
#line 911 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_24_24;
#line 911 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_25_25;
#line 916 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv0_ClassDefn_18;
#line 917 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_27_27;
#line 917 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_28_28;
#line 917 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_29_29;
#line 917 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_30_30;
#line 917 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_31_31;
#line 917 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_32_32;
#line 917 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_33_33;
#line 917 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_34_34;
#line 917 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_35_35;

#line 912 "type_ctor_info.m"
    {
#line 912 "type_ctor_info.m"
      backend_libs__type_ctor_info__first_matching_type_class_info_6_p_0(backend_libs__type_ctor_info__Constraints_7, backend_libs__type_ctor_info__TVar_10, &backend_libs__type_ctor_info__FirstConstraint_12, backend_libs__type_ctor_info__StartSlot_9, &backend_libs__type_ctor_info__Slot_13, &backend_libs__type_ctor_info__TypeInfoIndex_14);
    }
#line 914 "type_ctor_info.m"
    backend_libs__type_ctor_info__ClassName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__FirstConstraint_12, (MR_Integer) 0)));
#line 914 "type_ctor_info.m"
    backend_libs__type_ctor_info__ArgTypes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__FirstConstraint_12, (MR_Integer) 1)));
#line 915 "type_ctor_info.m"
    {
#line 915 "type_ctor_info.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, backend_libs__type_ctor_info__ArgTypes_16, &backend_libs__type_ctor_info__ClassArity_17);
    }
#line 916 "type_ctor_info.m"
    {
#line 916 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 916 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_24_24, 0) = ((MR_Box) (backend_libs__type_ctor_info__ClassName_15));
#line 916 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_24_24, 1) = ((MR_Box) (backend_libs__type_ctor_info__ClassArity_17));
#line 916 "type_ctor_info.m"
    }
#line 916 "type_ctor_info.m"
    {
#line 916 "type_ctor_info.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, backend_libs__type_ctor_info__ClassTable_8, ((MR_Box) (backend_libs__type_ctor_info__V_24_24)), &backend_libs__type_ctor_info__conv0_ClassDefn_18);
    }
#line 916 "type_ctor_info.m"
    backend_libs__type_ctor_info__ClassDefn_18 = ((MR_Word) backend_libs__type_ctor_info__conv0_ClassDefn_18);
#line 917 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 0)));
#line 917 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 1)));
#line 917 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 2)));
#line 917 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 3)));
#line 917 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 4)));
#line 917 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 5)));
#line 917 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 6)));
#line 917 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 7)));
#line 917 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 8)));
#line 917 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ClassDefn_18, (MR_Integer) 9)));
#line 917 "type_ctor_info.m"
    {
#line 917 "type_ctor_info.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, backend_libs__type_ctor_info__V_25_25, &backend_libs__type_ctor_info__NumSuperClasses_19);
    }
#line 918 "type_ctor_info.m"
    backend_libs__type_ctor_info__RealTypeInfoIndex_20 = (backend_libs__type_ctor_info__TypeInfoIndex_14 + backend_libs__type_ctor_info__NumSuperClasses_19);
#line 919 "type_ctor_info.m"
    {
#line 919 "type_ctor_info.m"
      backend_libs__type_ctor_info__Locn_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Locn_21, 0) = ((MR_Box) (backend_libs__type_ctor_info__Slot_13));
#line 919 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Locn_21, 1) = ((MR_Box) (backend_libs__type_ctor_info__RealTypeInfoIndex_20));
#line 919 "type_ctor_info.m"
    }
#line 920 "type_ctor_info.m"
    {
#line 920 "type_ctor_info.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, ((MR_Box) (backend_libs__type_ctor_info__TVar_10)), ((MR_Box) (backend_libs__type_ctor_info__Locn_21)), backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_0_22, backend_libs__type_ctor_info__STATE_VARIABLE_LocnMap_23);
#line 920 "type_ctor_info.m"
      return;
    }
#line 911 "type_ctor_info.m"
  }
#line 907 "type_ctor_info.m"
}

#line 902 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_5(
#line 902 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 902 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 902 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2)
#line 902 "type_ctor_info.m"
{
#line 902 "type_ctor_info.m"
  {
#line 902 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 902 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv8_HeadVar__3_47;

#line 902 "type_ctor_info.m"
    {
#line 902 "type_ctor_info.m"
      backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__902__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), &backend_libs__type_ctor_info__conv8_HeadVar__3_47);
    }
#line 902 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv8_HeadVar__3_47));
#line 902 "type_ctor_info.m"
  }
#line 902 "type_ctor_info.m"
}

#line 901 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_4(
#line 901 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 901 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1)
#line 901 "type_ctor_info.m"
{
#line 901 "type_ctor_info.m"
  {
#line 901 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__wrapper_arg_2;
#line 901 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 901 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv7_HeadVar__2_2;

#line 901 "type_ctor_info.m"
    {
#line 901 "type_ctor_info.m"
      backend_libs__type_ctor_info__conv7_HeadVar__2_2 = backend_libs__type_class_info__generate_class_constraint_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1));
    }
#line 901 "type_ctor_info.m"
    backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv7_HeadVar__2_2));
#line 901 "type_ctor_info.m"
    return backend_libs__type_ctor_info__wrapper_arg_2;
#line 901 "type_ctor_info.m"
  }
#line 901 "type_ctor_info.m"
}

#line 899 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_3(
#line 899 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 899 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 899 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 899 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3)
#line 899 "type_ctor_info.m"
{
#line 899 "type_ctor_info.m"
  {
#line 899 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 899 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv5_STATE_VARIABLE_LocnMap_23;

#line 899 "type_ctor_info.m"
    {
#line 899 "type_ctor_info.m"
      backend_libs__type_ctor_info__find_type_info_index_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 5))), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv5_STATE_VARIABLE_LocnMap_23);
    }
#line 899 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv5_STATE_VARIABLE_LocnMap_23));
#line 899 "type_ctor_info.m"
  }
#line 899 "type_ctor_info.m"
}

#line 892 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_2(
#line 892 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 892 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 892 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 892 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
#line 892 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
#line 892 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5)
#line 892 "type_ctor_info.m"
{
#line 892 "type_ctor_info.m"
  {
#line 892 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 892 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__conv2_HeadVar__3_39;
#line 892 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv1_HeadVar__5_41;

#line 892 "type_ctor_info.m"
    {
#line 892 "type_ctor_info.m"
      backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__892__1_5_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Integer) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv2_HeadVar__3_39, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_4), &backend_libs__type_ctor_info__conv1_HeadVar__5_41);
    }
#line 892 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv2_HeadVar__3_39));
#line 892 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_5 = ((MR_Box) (backend_libs__type_ctor_info__conv1_HeadVar__5_41));
#line 892 "type_ctor_info.m"
  }
#line 892 "type_ctor_info.m"
}

#line 884 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0_1(
#line 884 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 884 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 884 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2)
#line 884 "type_ctor_info.m"
{
#line 884 "type_ctor_info.m"
  {
#line 884 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 884 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv0_HeadVar__2_34;

#line 884 "type_ctor_info.m"
    {
#line 884 "type_ctor_info.m"
      backend_libs__type_ctor_info__IntroducedFrom__pred__generate_exist_into__884__1_2_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), &backend_libs__type_ctor_info__conv0_HeadVar__2_34);
    }
#line 884 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv0_HeadVar__2_34));
#line 884 "type_ctor_info.m"
  }
#line 884 "type_ctor_info.m"
}

#line 879 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_exist_into_4_p_0(
#line 879 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTVars_5,
#line 879 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Constraints_6,
#line 879 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ClassTable_7,
#line 879 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ExistInfo_8)
#line 879 "type_ctor_info.m"
{
#line 882 "type_ctor_info.m"
  {
#line 882 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeInfo_60_60;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_61_61;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeInfo_65_65;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ConstrainedTVars0_12;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ConstrainedTVars1_13;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ConstrainedTVars2_14;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__UnconstrainedTVars_15;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ConstrainedTVars_16;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__LocnMap0_17;
#line 882 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__TIsPlain_24;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__LocnMap1_25;
#line 882 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__AllTIs_26;
#line 882 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__TIsInTCIs_27;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__LocnMap_28;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TCConstraints_29;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ExistLocns_31;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_43_43;
#line 882 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_45_45;
#line 892 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv4_TIsPlain_24;
#line 892 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv3_LocnMap1_25;
#line 899 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv6_LocnMap_28;

#line 884 "type_ctor_info.m"
    {
#line 884 "type_ctor_info.m"
      mercury__list__map_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_57_57, (MR_Word) &backend_libs__type_ctor_info_scalar_common_1[5], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[27], backend_libs__type_ctor_info__Constraints_6, &backend_libs__type_ctor_info__ConstrainedTVars0_12);
    }
#line 886 "type_ctor_info.m"
    {
#line 886 "type_ctor_info.m"
      mercury__list__condense_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, backend_libs__type_ctor_info__ConstrainedTVars0_12, &backend_libs__type_ctor_info__ConstrainedTVars1_13);
    }
#line 887 "type_ctor_info.m"
    {
#line 887 "type_ctor_info.m"
      parse_tree__prog_type__type_vars_list_2_p_0(backend_libs__type_ctor_info__ConstrainedTVars1_13, &backend_libs__type_ctor_info__ConstrainedTVars2_14);
    }
#line 5033 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeInfo_60_60 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0];
#line 888 "type_ctor_info.m"
    {
#line 888 "type_ctor_info.m"
      mercury__list__delete_elems_3_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__ExistTVars_5, backend_libs__type_ctor_info__ConstrainedTVars2_14, &backend_libs__type_ctor_info__UnconstrainedTVars_15);
    }
#line 890 "type_ctor_info.m"
    {
#line 890 "type_ctor_info.m"
      mercury__list__delete_elems_3_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__ExistTVars_5, backend_libs__type_ctor_info__UnconstrainedTVars_15, &backend_libs__type_ctor_info__ConstrainedTVars_16);
    }
#line 5045 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_61_61 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0;
#line 891 "type_ctor_info.m"
    {
#line 891 "type_ctor_info.m"
      mercury__map__init_1_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__TypeCtorInfo_61_61, &backend_libs__type_ctor_info__LocnMap0_17);
    }
#line 5052 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeInfo_65_65 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[9];
#line 892 "type_ctor_info.m"
    {
#line 892 "type_ctor_info.m"
      mercury__list__foldl2_6_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__type_ctor_info__TypeInfo_65_65, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[28], backend_libs__type_ctor_info__UnconstrainedTVars_15, ((MR_Box) ((MR_Integer) 0)), &backend_libs__type_ctor_info__conv4_TIsPlain_24, ((MR_Box) (backend_libs__type_ctor_info__LocnMap0_17)), &backend_libs__type_ctor_info__conv3_LocnMap1_25);
    }
#line 892 "type_ctor_info.m"
    backend_libs__type_ctor_info__TIsPlain_24 = ((MR_Integer) backend_libs__type_ctor_info__conv4_TIsPlain_24);
#line 892 "type_ctor_info.m"
    backend_libs__type_ctor_info__LocnMap1_25 = ((MR_Word) backend_libs__type_ctor_info__conv3_LocnMap1_25);
#line 897 "type_ctor_info.m"
    {
#line 897 "type_ctor_info.m"
      mercury__list__length_2_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__ExistTVars_5, &backend_libs__type_ctor_info__AllTIs_26);
    }
#line 898 "type_ctor_info.m"
    backend_libs__type_ctor_info__TIsInTCIs_27 = (backend_libs__type_ctor_info__AllTIs_26 - backend_libs__type_ctor_info__TIsPlain_24);
#line 899 "type_ctor_info.m"
    {
#line 899 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 899 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_11[0]));
#line 899 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 1) = ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_3));
#line 899 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 899 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 3) = ((MR_Box) (backend_libs__type_ctor_info__Constraints_6));
#line 899 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 4) = ((MR_Box) (backend_libs__type_ctor_info__ClassTable_7));
#line 899 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 5) = ((MR_Box) (backend_libs__type_ctor_info__TIsPlain_24));
#line 899 "type_ctor_info.m"
    }
#line 899 "type_ctor_info.m"
    {
#line 899 "type_ctor_info.m"
      mercury__list__foldl_4_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__TypeInfo_65_65, backend_libs__type_ctor_info__V_43_43, backend_libs__type_ctor_info__ConstrainedTVars_16, ((MR_Box) (backend_libs__type_ctor_info__LocnMap1_25)), &backend_libs__type_ctor_info__conv6_LocnMap_28);
    }
#line 899 "type_ctor_info.m"
    backend_libs__type_ctor_info__LocnMap_28 = ((MR_Word) backend_libs__type_ctor_info__conv6_LocnMap_28);
#line 901 "type_ctor_info.m"
    {
#line 901 "type_ctor_info.m"
      backend_libs__type_ctor_info__TCConstraints_29 = mercury__list__map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_57_57, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[29], backend_libs__type_ctor_info__Constraints_6);
    }
#line 902 "type_ctor_info.m"
    {
#line 902 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 902 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_45_45, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_9[3]));
#line 902 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_45_45, 1) = ((MR_Box) (backend_libs__type_ctor_info__generate_exist_into_4_p_0_5));
#line 902 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 902 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_45_45, 3) = ((MR_Box) (backend_libs__type_ctor_info__LocnMap_28));
#line 902 "type_ctor_info.m"
    }
#line 902 "type_ctor_info.m"
    {
#line 902 "type_ctor_info.m"
      mercury__list__map_3_p_0(backend_libs__type_ctor_info__TypeInfo_60_60, backend_libs__type_ctor_info__TypeCtorInfo_61_61, backend_libs__type_ctor_info__V_45_45, backend_libs__type_ctor_info__ExistTVars_5, &backend_libs__type_ctor_info__ExistLocns_31);
    }
#line 905 "type_ctor_info.m"
    {
#line 905 "type_ctor_info.m"
      MR_Word base;
#line 905 "type_ctor_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 905 "type_ctor_info.m"
      *backend_libs__type_ctor_info__ExistInfo_8 = base;
#line 905 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__TIsPlain_24));
#line 905 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__TIsInTCIs_27));
#line 905 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__TCConstraints_29));
#line 905 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__ExistLocns_31));
#line 905 "type_ctor_info.m"
    }
#line 882 "type_ctor_info.m"
  }
#line 879 "type_ctor_info.m"
}

#line 842 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__generate_du_arg_info_4_p_0(
#line 842 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NumUnivTvars_5,
#line 842 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ExistTvars_6,
#line 842 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConstructorArg_7,
#line 842 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ArgInfo_8)
#line 842 "type_ctor_info.m"
{
#line 845 "type_ctor_info.m"
  {
#line 845 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 845 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__MaybeCtorFieldName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ConstructorArg_7, (MR_Integer) 0)));
#line 845 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ArgType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ConstructorArg_7, (MR_Integer) 1)));
#line 845 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ArgWidth_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ConstructorArg_7, (MR_Integer) 2)));
#line 845 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__MaybeArgName_16;
#line 845 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__MaybePseudoTypeInfo_17;
#line 845 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_19;
#line 846 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info___Ctxt_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ConstructorArg_7, (MR_Integer) 3)));

#line 851 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__MaybeCtorFieldName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 853 "type_ctor_info.m"
      backend_libs__type_ctor_info__MaybeArgName_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 851 "type_ctor_info.m"
    else
#line 848 "type_ctor_info.m"
      {
#line 848 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SymName_13;
#line 848 "type_ctor_info.m"
        MR_String backend_libs__type_ctor_info__ArgName_15;
#line 848 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__MaybeCtorFieldName_9, (MR_Integer) 0)));
#line 848 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_14_14;

#line 848 "type_ctor_info.m"
        backend_libs__type_ctor_info__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_21_21, (MR_Integer) 0)));
#line 848 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_21_21, (MR_Integer) 1)));
#line 849 "type_ctor_info.m"
        {
#line 849 "type_ctor_info.m"
          backend_libs__type_ctor_info__ArgName_15 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__type_ctor_info__SymName_13);
        }
#line 850 "type_ctor_info.m"
        {
#line 850 "type_ctor_info.m"
          backend_libs__type_ctor_info__MaybeArgName_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 850 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__MaybeArgName_16, 0) = ((MR_Box) (backend_libs__type_ctor_info__ArgName_15));
#line 850 "type_ctor_info.m"
        }
#line 848 "type_ctor_info.m"
      }
#line 857 "type_ctor_info.m"
    {
#line 857 "type_ctor_info.m"
      backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(backend_libs__type_ctor_info__ArgType_10, backend_libs__type_ctor_info__NumUnivTvars_5, backend_libs__type_ctor_info__ExistTvars_6, &backend_libs__type_ctor_info__MaybePseudoTypeInfo_17);
    }
#line 862 "type_ctor_info.m"
    if (((MR_tag((MR_Word) backend_libs__type_ctor_info__MaybePseudoTypeInfo_17)) == (MR_mktag((MR_Integer) 1))))
#line 860 "type_ctor_info.m"
      {
#line 860 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__MaybePseudoTypeInfo_17, (MR_Integer) 0)));

#line 861 "type_ctor_info.m"
        {
#line 861 "type_ctor_info.m"
          backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 861 "type_ctor_info.m"
          MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_19, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeInfo_18));
#line 861 "type_ctor_info.m"
        }
#line 860 "type_ctor_info.m"
      }
#line 862 "type_ctor_info.m"
    else
#line 863 "type_ctor_info.m"
      {
#line 863 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__PseudoTypeInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__MaybePseudoTypeInfo_17, (MR_Integer) 0)));

#line 864 "type_ctor_info.m"
        {
#line 864 "type_ctor_info.m"
          backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_19, 0) = ((MR_Box) (backend_libs__type_ctor_info__PseudoTypeInfo_20));
#line 864 "type_ctor_info.m"
        }
#line 863 "type_ctor_info.m"
      }
#line 866 "type_ctor_info.m"
    {
#line 866 "type_ctor_info.m"
      MR_Word base;
#line 866 "type_ctor_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 866 "type_ctor_info.m"
      *backend_libs__type_ctor_info__ArgInfo_8 = base;
#line 866 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__MaybeArgName_16));
#line 866 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__MaybePseudoTypeInfoOrSelf_19));
#line 866 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__ArgWidth_11));
#line 866 "type_ctor_info.m"
    }
#line 845 "type_ctor_info.m"
  }
#line 842 "type_ctor_info.m"
}

#line 793 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__get_maybe_reserved_rep_2_p_0(
#line 793 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTag_3,
#line 793 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ConsRep_4)
#line 793 "type_ctor_info.m"
{
#line 797 "type_ctor_info.m"
  while (MR_TRUE)
#line 797 "type_ctor_info.m"
    {
#line 797 "type_ctor_info.m"
      /* tailcall optimized into a loop */
#line 797 "type_ctor_info.m"
      {
#line 797 "type_ctor_info.m"
        MR_bool backend_libs__type_ctor_info__succeeded;

#line 797 "type_ctor_info.m"
#line 797 "type_ctor_info.m"
        switch (MR_tag((MR_Word) backend_libs__type_ctor_info__ConsTag_3)) {
#line 797 "type_ctor_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 797 "type_ctor_info.m"
          case (MR_Integer) 0:
#line 797 "type_ctor_info.m"
#line 797 "type_ctor_info.m"
            switch (MR_unmkbody(backend_libs__type_ctor_info__ConsTag_3)) {
#line 797 "type_ctor_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 797 "type_ctor_info.m"
              case (MR_Integer) 0:
#line 797 "type_ctor_info.m"
                {
#line 800 "type_ctor_info.m"
                  *backend_libs__type_ctor_info__ConsRep_4 = (MR_Word) MR_mkword(MR_mktag(1), &backend_libs__type_ctor_info_scalar_common_5[2]);
#line 797 "type_ctor_info.m"
                }
#line 797 "type_ctor_info.m"
                break;
#line 797 "type_ctor_info.m"
              case (MR_Integer) 1:
#line 838 "type_ctor_info.m"
                {
#line 839 "type_ctor_info.m"
                  {
#line 839 "type_ctor_info.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.get_maybe_reserved_rep\'/2", (MR_String) "bad cons_tag for du function symbol");
#line 839 "type_ctor_info.m"
                    return;
                  }
#line 838 "type_ctor_info.m"
                }
#line 797 "type_ctor_info.m"
                break;
#line 797 "type_ctor_info.m"
            }
#line 797 "type_ctor_info.m"
            break;
#line 797 "type_ctor_info.m"
          case (MR_Integer) 1:
#line 797 "type_ctor_info.m"
          case (MR_Integer) 2:
#line 838 "type_ctor_info.m"
            {
#line 839 "type_ctor_info.m"
              {
#line 839 "type_ctor_info.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.get_maybe_reserved_rep\'/2", (MR_String) "bad cons_tag for du function symbol");
#line 839 "type_ctor_info.m"
                return;
              }
#line 838 "type_ctor_info.m"
            }
#line 797 "type_ctor_info.m"
            break;
#line 797 "type_ctor_info.m"
          case (MR_Integer) 3:
#line 797 "type_ctor_info.m"
#line 797 "type_ctor_info.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 0)))) {
#line 797 "type_ctor_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 797 "type_ctor_info.m"
              case (MR_Integer) 0:
#line 797 "type_ctor_info.m"
              case (MR_Integer) 1:
#line 797 "type_ctor_info.m"
              case (MR_Integer) 2:
#line 797 "type_ctor_info.m"
              case (MR_Integer) 3:
#line 797 "type_ctor_info.m"
              case (MR_Integer) 4:
#line 797 "type_ctor_info.m"
              case (MR_Integer) 5:
#line 797 "type_ctor_info.m"
              case (MR_Integer) 6:
#line 797 "type_ctor_info.m"
              case (MR_Integer) 7:
#line 797 "type_ctor_info.m"
              case (MR_Integer) 8:
#line 797 "type_ctor_info.m"
              case (MR_Integer) 9:
#line 797 "type_ctor_info.m"
              case (MR_Integer) 10:
#line 838 "type_ctor_info.m"
                {
#line 839 "type_ctor_info.m"
                  {
#line 839 "type_ctor_info.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.get_maybe_reserved_rep\'/2", (MR_String) "bad cons_tag for du function symbol");
#line 839 "type_ctor_info.m"
                    return;
                  }
#line 838 "type_ctor_info.m"
                }
#line 797 "type_ctor_info.m"
                break;
#line 797 "type_ctor_info.m"
              case (MR_Integer) 11:
#line 802 "type_ctor_info.m"
                {
#line 802 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_43_43;
#line 802 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__ConsPtag_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));

#line 804 "type_ctor_info.m"
                  {
#line 804 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 804 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsPtag_45));
#line 804 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 804 "type_ctor_info.m"
                  }
#line 804 "type_ctor_info.m"
                  {
#line 804 "type_ctor_info.m"
                    MR_Word base;
#line 804 "type_ctor_info.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 804 "type_ctor_info.m"
                    *backend_libs__type_ctor_info__ConsRep_4 = base;
#line 804 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__V_43_43));
#line 804 "type_ctor_info.m"
                  }
#line 802 "type_ctor_info.m"
                }
#line 797 "type_ctor_info.m"
                break;
#line 797 "type_ctor_info.m"
              case (MR_Integer) 12:
#line 806 "type_ctor_info.m"
                {
#line 806 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_42_42;
#line 806 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__ConsPtag_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));

#line 808 "type_ctor_info.m"
                  {
#line 808 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 808 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_42_42, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsPtag_47));
#line 808 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 808 "type_ctor_info.m"
                  }
#line 808 "type_ctor_info.m"
                  {
#line 808 "type_ctor_info.m"
                    MR_Word base;
#line 808 "type_ctor_info.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 808 "type_ctor_info.m"
                    *backend_libs__type_ctor_info__ConsRep_4 = base;
#line 808 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__V_42_42));
#line 808 "type_ctor_info.m"
                  }
#line 806 "type_ctor_info.m"
                }
#line 797 "type_ctor_info.m"
                break;
#line 797 "type_ctor_info.m"
              case (MR_Integer) 13:
#line 813 "type_ctor_info.m"
                {
#line 813 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_38_38;
#line 813 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_39_39;
#line 813 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__ConsPtag_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));
#line 813 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__ConsStag_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 2)));

#line 814 "type_ctor_info.m"
                  {
#line 814 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 814 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__V_39_39, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsStag_51));
#line 814 "type_ctor_info.m"
                  }
#line 814 "type_ctor_info.m"
                  {
#line 814 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 814 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_38_38, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsPtag_50));
#line 814 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_38_38, 1) = ((MR_Box) (backend_libs__type_ctor_info__V_39_39));
#line 814 "type_ctor_info.m"
                  }
#line 814 "type_ctor_info.m"
                  {
#line 814 "type_ctor_info.m"
                    MR_Word base;
#line 814 "type_ctor_info.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 814 "type_ctor_info.m"
                    *backend_libs__type_ctor_info__ConsRep_4 = base;
#line 814 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__V_38_38));
#line 814 "type_ctor_info.m"
                  }
#line 813 "type_ctor_info.m"
                }
#line 797 "type_ctor_info.m"
                break;
#line 797 "type_ctor_info.m"
              case (MR_Integer) 14:
#line 810 "type_ctor_info.m"
                {
#line 810 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__ConsStag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 2)));
#line 810 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_40_40;
#line 810 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_41_41;
#line 810 "type_ctor_info.m"
                  MR_Integer backend_libs__type_ctor_info__ConsPtag_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));

#line 811 "type_ctor_info.m"
                  {
#line 811 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 811 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__V_41_41, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsStag_7));
#line 811 "type_ctor_info.m"
                  }
#line 811 "type_ctor_info.m"
                  {
#line 811 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 811 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_40_40, 0) = ((MR_Box) (backend_libs__type_ctor_info__ConsPtag_49));
#line 811 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_40_40, 1) = ((MR_Box) (backend_libs__type_ctor_info__V_41_41));
#line 811 "type_ctor_info.m"
                  }
#line 811 "type_ctor_info.m"
                  {
#line 811 "type_ctor_info.m"
                    MR_Word base;
#line 811 "type_ctor_info.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 811 "type_ctor_info.m"
                    *backend_libs__type_ctor_info__ConsRep_4 = base;
#line 811 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__V_40_40));
#line 811 "type_ctor_info.m"
                  }
#line 810 "type_ctor_info.m"
                }
#line 797 "type_ctor_info.m"
                break;
#line 797 "type_ctor_info.m"
              case (MR_Integer) 15:
#line 816 "type_ctor_info.m"
                {
#line 816 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__ReservedAddr_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));

#line 817 "type_ctor_info.m"
                  {
#line 817 "type_ctor_info.m"
                    MR_Word base;
#line 817 "type_ctor_info.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 817 "type_ctor_info.m"
                    *backend_libs__type_ctor_info__ConsRep_4 = base;
#line 817 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__ReservedAddr_8));
#line 817 "type_ctor_info.m"
                  }
#line 816 "type_ctor_info.m"
                }
#line 797 "type_ctor_info.m"
                break;
#line 797 "type_ctor_info.m"
              case (MR_Integer) 16:
#line 819 "type_ctor_info.m"
                {
#line 819 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__ThisTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 2)));
#line 819 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info___RAs_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_3, (MR_Integer) 1)));

#line 822 "type_ctor_info.m"
                  /* direct tailcall eliminated */
#line 822 "type_ctor_info.m"
                  {
#line 822 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__ConsTag__tmp_copy_3 = backend_libs__type_ctor_info__ThisTag_10;

#line 822 "type_ctor_info.m"
                    backend_libs__type_ctor_info__ConsTag_3 = backend_libs__type_ctor_info__ConsTag__tmp_copy_3;
#line 822 "type_ctor_info.m"
                  }
#line 822 "type_ctor_info.m"
                  continue;
#line 819 "type_ctor_info.m"
                }
#line 797 "type_ctor_info.m"
                break;
#line 797 "type_ctor_info.m"
            }
#line 797 "type_ctor_info.m"
            break;
#line 797 "type_ctor_info.m"
        }
#line 797 "type_ctor_info.m"
      }
#line 797 "type_ctor_info.m"
      break;
#line 797 "type_ctor_info.m"
    }
#line 793 "type_ctor_info.m"
}

#line 786 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_4(
#line 786 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 786 "type_ctor_info.m"
{
#line 786 "type_ctor_info.m"
  {
#line 786 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 786 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 786 "type_ctor_info.m"
    {
#line 786 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__786__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 786 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 786 "type_ctor_info.m"
  }
#line 786 "type_ctor_info.m"
}

#line 785 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_3(
#line 785 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 785 "type_ctor_info.m"
{
#line 785 "type_ctor_info.m"
  {
#line 785 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 785 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 785 "type_ctor_info.m"
    {
#line 785 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__785__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 785 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 785 "type_ctor_info.m"
  }
#line 785 "type_ctor_info.m"
}

#line 784 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_2(
#line 784 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 784 "type_ctor_info.m"
{
#line 784 "type_ctor_info.m"
  {
#line 784 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 784 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 784 "type_ctor_info.m"
    {
#line 784 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_maybe_res_functors__784__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 784 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 784 "type_ctor_info.m"
  }
#line 784 "type_ctor_info.m"
}

#line 766 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_1(
#line 766 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 766 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 766 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2)
#line 766 "type_ctor_info.m"
{
#line 766 "type_ctor_info.m"
  {
#line 766 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 766 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv1_ArgInfo_8;

#line 766 "type_ctor_info.m"
    {
#line 766 "type_ctor_info.m"
      backend_libs__type_ctor_info__generate_du_arg_info_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), &backend_libs__type_ctor_info__conv1_ArgInfo_8);
    }
#line 766 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv1_ArgInfo_8));
#line 766 "type_ctor_info.m"
  }
#line 766 "type_ctor_info.m"
}

#line 752 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(
#line 752 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
#line 752 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 752 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_3,
#line 752 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_4,
#line 752 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_5,
#line 752 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_6,
#line 752 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__7_7)
#line 752 "type_ctor_info.m"
{
#line 756 "type_ctor_info.m"
  {
#line 756 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 756 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 756 "type_ctor_info.m"
      *backend_libs__type_ctor_info__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 756 "type_ctor_info.m"
    else
#line 759 "type_ctor_info.m"
      {
#line 759 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorInfo_61_61;
#line 759 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Functor_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));
#line 759 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Functors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 1)));
#line 759 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__MaybeResFunctor_20;
#line 759 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__MaybeResFunctors_21;
#line 759 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ExistTvars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 0)));
#line 759 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Constraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 1)));
#line 759 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SymName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 2)));
#line 759 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConstructorArgs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 3)));
#line 759 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__Arity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 4)));
#line 759 "type_ctor_info.m"
        MR_String backend_libs__type_ctor_info__FunctorName_28;
#line 759 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConsId_29;
#line 759 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConsTag_30;
#line 759 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConsRep_31;
#line 759 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ArgInfos_32;
#line 759 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__MaybeExistInfo_33;
#line 759 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_42_42;
#line 759 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_43_43;
#line 759 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_59_59;
#line 760 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info___Ctxt_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_14, (MR_Integer) 5)));
#line 764 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv0_ConsTag_30;

#line 762 "type_ctor_info.m"
        {
#line 762 "type_ctor_info.m"
          backend_libs__type_ctor_info__FunctorName_28 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__type_ctor_info__SymName_24);
        }
#line 5806 "backend_libs.type_ctor_info.c"
        backend_libs__type_ctor_info__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 763 "type_ctor_info.m"
        {
#line 763 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_42_42 = mercury__list__length_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_61_61, backend_libs__type_ctor_info__ConstructorArgs_25);
        }
#line 763 "type_ctor_info.m"
        {
#line 763 "type_ctor_info.m"
          backend_libs__type_ctor_info__ConsId_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 763 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 763 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_29, 1) = ((MR_Box) (backend_libs__type_ctor_info__SymName_24));
#line 763 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_29, 2) = ((MR_Box) (backend_libs__type_ctor_info__V_42_42));
#line 763 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_29, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_1));
#line 763 "type_ctor_info.m"
        }
#line 764 "type_ctor_info.m"
        {
#line 764 "type_ctor_info.m"
          mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, backend_libs__type_ctor_info__ConsTagMap_4, ((MR_Box) (backend_libs__type_ctor_info__ConsId_29)), &backend_libs__type_ctor_info__conv0_ConsTag_30);
        }
#line 764 "type_ctor_info.m"
        backend_libs__type_ctor_info__ConsTag_30 = ((MR_Word) backend_libs__type_ctor_info__conv0_ConsTag_30);
#line 765 "type_ctor_info.m"
        {
#line 765 "type_ctor_info.m"
          backend_libs__type_ctor_info__get_maybe_reserved_rep_2_p_0(backend_libs__type_ctor_info__ConsTag_30, &backend_libs__type_ctor_info__ConsRep_31);
        }
#line 766 "type_ctor_info.m"
        {
#line 766 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 766 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_10[0]));
#line 766 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_1));
#line 766 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 766 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeArity_5));
#line 766 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_43_43, 4) = ((MR_Box) (backend_libs__type_ctor_info__ExistTvars_22));
#line 766 "type_ctor_info.m"
        }
#line 766 "type_ctor_info.m"
        {
#line 766 "type_ctor_info.m"
          mercury__list__map_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_61_61, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0, backend_libs__type_ctor_info__V_43_43, backend_libs__type_ctor_info__ConstructorArgs_25, &backend_libs__type_ctor_info__ArgInfos_32);
        }
#line 771 "type_ctor_info.m"
        if ((backend_libs__type_ctor_info__ExistTvars_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 770 "type_ctor_info.m"
          backend_libs__type_ctor_info__MaybeExistInfo_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 771 "type_ctor_info.m"
        else
#line 772 "type_ctor_info.m"
          {
#line 772 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__ClassTable_36;
#line 772 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__ExistInfo_37;

#line 773 "type_ctor_info.m"
            {
#line 773 "type_ctor_info.m"
              hlds__hlds_module__module_info_get_class_table_2_p_0(backend_libs__type_ctor_info__ModuleInfo_6, &backend_libs__type_ctor_info__ClassTable_36);
            }
#line 774 "type_ctor_info.m"
            {
#line 774 "type_ctor_info.m"
              backend_libs__type_ctor_info__generate_exist_into_4_p_0(backend_libs__type_ctor_info__ExistTvars_22, backend_libs__type_ctor_info__Constraints_23, backend_libs__type_ctor_info__ClassTable_36, &backend_libs__type_ctor_info__ExistInfo_37);
            }
#line 775 "type_ctor_info.m"
            {
#line 775 "type_ctor_info.m"
              backend_libs__type_ctor_info__MaybeExistInfo_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 775 "type_ctor_info.m"
              MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__MaybeExistInfo_33, 0) = ((MR_Box) (backend_libs__type_ctor_info__ExistInfo_37));
#line 775 "type_ctor_info.m"
            }
#line 772 "type_ctor_info.m"
          }
#line 782 "type_ctor_info.m"
        if (((MR_tag((MR_Word) backend_libs__type_ctor_info__ConsRep_31)) == (MR_mktag((MR_Integer) 1))))
#line 778 "type_ctor_info.m"
          {
#line 778 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__DuRep_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__ConsRep_31, (MR_Integer) 0)));
#line 778 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__DuFunctor_39;

#line 779 "type_ctor_info.m"
            {
#line 779 "type_ctor_info.m"
              backend_libs__type_ctor_info__DuFunctor_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 779 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_39, 0) = ((MR_Box) (backend_libs__type_ctor_info__FunctorName_28));
#line 779 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_39, 1) = ((MR_Box) (backend_libs__type_ctor_info__Arity_26));
#line 779 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_39, 2) = ((MR_Box) (backend_libs__type_ctor_info__NextOrdinal_3));
#line 779 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_39, 3) = ((MR_Box) (backend_libs__type_ctor_info__DuRep_38));
#line 779 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_39, 4) = ((MR_Box) (backend_libs__type_ctor_info__ArgInfos_32));
#line 779 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__DuFunctor_39, 5) = ((MR_Box) (backend_libs__type_ctor_info__MaybeExistInfo_33));
#line 779 "type_ctor_info.m"
            }
#line 781 "type_ctor_info.m"
            backend_libs__type_ctor_info__MaybeResFunctor_20 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) backend_libs__type_ctor_info__DuFunctor_39);
#line 778 "type_ctor_info.m"
          }
#line 782 "type_ctor_info.m"
        else
#line 783 "type_ctor_info.m"
          {
#line 783 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__ResRep_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ConsRep_31, (MR_Integer) 0)));
#line 783 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__ResFunctor_41;
#line 783 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_44_44;
#line 783 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_49_49;
#line 783 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_54_54;

#line 784 "type_ctor_info.m"
            {
#line 784 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 784 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_44_44, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[4]));
#line 784 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_44_44, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_2));
#line 784 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 784 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_44_44, 3) = ((MR_Box) (backend_libs__type_ctor_info__Arity_26));
#line 784 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_44_44, 4) = ((MR_Box) ((MR_Integer) 0));
#line 784 "type_ctor_info.m"
            }
#line 784 "type_ctor_info.m"
            {
#line 784 "type_ctor_info.m"
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_44_44, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_maybe_res_functors\'/7", (MR_String) "bad arity");
            }
#line 785 "type_ctor_info.m"
            {
#line 785 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 785 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_49_49, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[10]));
#line 785 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_49_49, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_3));
#line 785 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 785 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_49_49, 3) = ((MR_Box) (backend_libs__type_ctor_info__ArgInfos_32));
#line 785 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_49_49, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "type_ctor_info.m"
            }
#line 785 "type_ctor_info.m"
            {
#line 785 "type_ctor_info.m"
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_49_49, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_maybe_res_functors\'/7", (MR_String) "bad args");
            }
#line 786 "type_ctor_info.m"
            {
#line 786 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 786 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_54_54, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[11]));
#line 786 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_54_54, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0_4));
#line 786 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 786 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_54_54, 3) = ((MR_Box) (backend_libs__type_ctor_info__MaybeExistInfo_33));
#line 786 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_54_54, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 786 "type_ctor_info.m"
            }
#line 786 "type_ctor_info.m"
            {
#line 786 "type_ctor_info.m"
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_54_54, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_maybe_res_functors\'/7", (MR_String) "bad exist");
            }
#line 787 "type_ctor_info.m"
            {
#line 787 "type_ctor_info.m"
              backend_libs__type_ctor_info__ResFunctor_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 787 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_41, 0) = ((MR_Box) (backend_libs__type_ctor_info__FunctorName_28));
#line 787 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_41, 1) = ((MR_Box) (backend_libs__type_ctor_info__NextOrdinal_3));
#line 787 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ResFunctor_41, 2) = ((MR_Box) (backend_libs__type_ctor_info__ResRep_40));
#line 787 "type_ctor_info.m"
            }
#line 788 "type_ctor_info.m"
            backend_libs__type_ctor_info__MaybeResFunctor_20 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) backend_libs__type_ctor_info__ResFunctor_41);
#line 783 "type_ctor_info.m"
          }
#line 790 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_59_59 = (backend_libs__type_ctor_info__NextOrdinal_3 + (MR_Integer) 1);
#line 790 "type_ctor_info.m"
        {
#line 790 "type_ctor_info.m"
          backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(backend_libs__type_ctor_info__TypeCtor_1, backend_libs__type_ctor_info__Functors_15, backend_libs__type_ctor_info__V_59_59, backend_libs__type_ctor_info__ConsTagMap_4, backend_libs__type_ctor_info__TypeArity_5, backend_libs__type_ctor_info__ModuleInfo_6, &backend_libs__type_ctor_info__MaybeResFunctors_21);
        }
#line 759 "type_ctor_info.m"
        {
#line 759 "type_ctor_info.m"
          MR_Word base;
#line 759 "type_ctor_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "type_ctor_info.m"
          *backend_libs__type_ctor_info__HeadVar__7_7 = base;
#line 759 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__MaybeResFunctor_20));
#line 759 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__MaybeResFunctors_21));
#line 759 "type_ctor_info.m"
        }
#line 759 "type_ctor_info.m"
      }
#line 756 "type_ctor_info.m"
  }
#line 752 "type_ctor_info.m"
}

#line 730 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_7(
#line 730 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 730 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 730 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 730 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3)
#line 730 "type_ctor_info.m"
{
#line 730 "type_ctor_info.m"
  {
#line 730 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 730 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv6_STATE_VARIABLE_NameTable_13;

#line 730 "type_ctor_info.m"
    {
#line 730 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_res_name_ordered_table_3_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv6_STATE_VARIABLE_NameTable_13);
    }
#line 730 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv6_STATE_VARIABLE_NameTable_13));
#line 730 "type_ctor_info.m"
  }
#line 730 "type_ctor_info.m"
}

#line 728 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_6(
#line 728 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 728 "type_ctor_info.m"
{
#line 728 "type_ctor_info.m"
  {
#line 728 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 728 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 728 "type_ctor_info.m"
    {
#line 728 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__728__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 728 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 728 "type_ctor_info.m"
  }
#line 728 "type_ctor_info.m"
}

#line 722 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_5(
#line 722 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 722 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 722 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 722 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3)
#line 722 "type_ctor_info.m"
{
#line 722 "type_ctor_info.m"
  {
#line 722 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 722 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv4_STATE_VARIABLE_NameTable_11;

#line 722 "type_ctor_info.m"
    {
#line 722 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_du_name_ordered_table_3_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv4_STATE_VARIABLE_NameTable_11);
    }
#line 722 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv4_STATE_VARIABLE_NameTable_11));
#line 722 "type_ctor_info.m"
  }
#line 722 "type_ctor_info.m"
}

#line 720 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_4(
#line 720 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 720 "type_ctor_info.m"
{
#line 720 "type_ctor_info.m"
  {
#line 720 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 720 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 720 "type_ctor_info.m"
    {
#line 720 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_du_details__720__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 720 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 720 "type_ctor_info.m"
  }
#line 720 "type_ctor_info.m"
}

#line 715 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_3(
#line 715 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 715 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 715 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 715 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3)
#line 715 "type_ctor_info.m"
{
#line 715 "type_ctor_info.m"
  {
#line 715 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 715 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv2_STATE_VARIABLE_PtagTable_19;

#line 715 "type_ctor_info.m"
    {
#line 715 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_du_ptag_ordered_table_3_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv2_STATE_VARIABLE_PtagTable_19);
    }
#line 715 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv2_STATE_VARIABLE_PtagTable_19));
#line 715 "type_ctor_info.m"
  }
#line 715 "type_ctor_info.m"
}

#line 714 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_2(
#line 714 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 714 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 714 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2)
#line 714 "type_ctor_info.m"
{
#line 714 "type_ctor_info.m"
  {
#line 714 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 714 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 714 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv1_ResFunctor_3;

#line 714 "type_ctor_info.m"
    {
#line 714 "type_ctor_info.m"
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__is_reserved_functor_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), &backend_libs__type_ctor_info__conv1_ResFunctor_3);
    }
#line 714 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 714 "type_ctor_info.m"
      {
#line 714 "type_ctor_info.m"
        *backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv1_ResFunctor_3));
#line 714 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 714 "type_ctor_info.m"
      }
#line 714 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 714 "type_ctor_info.m"
  }
#line 714 "type_ctor_info.m"
}

#line 713 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0_1(
#line 713 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 713 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 713 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_2)
#line 713 "type_ctor_info.m"
{
#line 713 "type_ctor_info.m"
  {
#line 713 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 713 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 713 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv0_DuFunctor_3;

#line 713 "type_ctor_info.m"
    {
#line 713 "type_ctor_info.m"
      backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__is_du_functor_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), &backend_libs__type_ctor_info__conv0_DuFunctor_3);
    }
#line 713 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 713 "type_ctor_info.m"
      {
#line 713 "type_ctor_info.m"
        *backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv0_DuFunctor_3));
#line 713 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 713 "type_ctor_info.m"
      }
#line 713 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 713 "type_ctor_info.m"
  }
#line 713 "type_ctor_info.m"
}

#line 705 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_du_details_8_p_0(
#line 705 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_9,
#line 705 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_10,
#line 705 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_11,
#line 705 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_12,
#line 705 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_13,
#line 705 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReservedAddr_14,
#line 705 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_15,
#line 705 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_16)
#line 705 "type_ctor_info.m"
{
#line 710 "type_ctor_info.m"
  {
#line 710 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 710 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_45_45;
#line 710 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_46_46;
#line 710 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__MaybeResFunctors_17;
#line 710 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__DuFunctors_18;
#line 710 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ResFunctors_19;
#line 710 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__DuPtagTable_20;
#line 710 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__FunctorNumberMap_21;
#line 710 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_30_30;
#line 715 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv3_DuPtagTable_20;

#line 711 "type_ctor_info.m"
    {
#line 711 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_maybe_res_functors_7_p_0(backend_libs__type_ctor_info__TypeCtor_9, backend_libs__type_ctor_info__Ctors_10, (MR_Integer) 0, backend_libs__type_ctor_info__ConsTagMap_11, backend_libs__type_ctor_info__TypeArity_12, backend_libs__type_ctor_info__ModuleInfo_15, &backend_libs__type_ctor_info__MaybeResFunctors_17);
    }
#line 6327 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_45_45 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;
#line 6329 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_46_46 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
#line 713 "type_ctor_info.m"
    {
#line 713 "type_ctor_info.m"
      backend_libs__type_ctor_info__DuFunctors_18 = mercury__list__filter_map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_45_45, backend_libs__type_ctor_info__TypeCtorInfo_46_46, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[22], backend_libs__type_ctor_info__MaybeResFunctors_17);
    }
#line 714 "type_ctor_info.m"
    {
#line 714 "type_ctor_info.m"
      backend_libs__type_ctor_info__ResFunctors_19 = mercury__list__filter_map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_45_45, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[23], backend_libs__type_ctor_info__MaybeResFunctors_17);
    }
#line 716 "type_ctor_info.m"
    {
#line 716 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_30_30 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0);
    }
#line 715 "type_ctor_info.m"
    {
#line 715 "type_ctor_info.m"
      mercury__list__foldl_4_p_0(backend_libs__type_ctor_info__TypeCtorInfo_46_46, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[4], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[24], backend_libs__type_ctor_info__DuFunctors_18, ((MR_Box) (backend_libs__type_ctor_info__V_30_30)), &backend_libs__type_ctor_info__conv3_DuPtagTable_20);
    }
#line 715 "type_ctor_info.m"
    backend_libs__type_ctor_info__DuPtagTable_20 = ((MR_Word) backend_libs__type_ctor_info__conv3_DuPtagTable_20);
#line 717 "type_ctor_info.m"
    {
#line 717 "type_ctor_info.m"
      backend_libs__type_ctor_info__FunctorNumberMap_21 = backend_libs__type_ctor_info__make_functor_number_map_1_f_0(backend_libs__type_ctor_info__Ctors_10);
    }
#line 726 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__ResFunctors_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 719 "type_ctor_info.m"
      {
#line 719 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__DuNameOrderedMap_22;
#line 719 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_38_38;
#line 719 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_44_44;
#line 722 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv5_DuNameOrderedMap_22;

#line 720 "type_ctor_info.m"
        {
#line 720 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 720 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_38_38, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[9]));
#line 720 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_38_38, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_4));
#line 720 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 720 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_38_38, 3) = ((MR_Box) (backend_libs__type_ctor_info__ReservedAddr_14));
#line 720 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_38_38, 4) = ((MR_Box) ((MR_Integer) 1));
#line 720 "type_ctor_info.m"
        }
#line 720 "type_ctor_info.m"
        {
#line 720 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_38_38, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_details\'/8", (MR_String) "ReservedAddr is not does_not_use_reserved_addr");
        }
#line 723 "type_ctor_info.m"
        {
#line 723 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_44_44 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[5]);
        }
#line 722 "type_ctor_info.m"
        {
#line 722 "type_ctor_info.m"
          mercury__list__foldl_4_p_0(backend_libs__type_ctor_info__TypeCtorInfo_46_46, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[6], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[25], backend_libs__type_ctor_info__DuFunctors_18, ((MR_Box) (backend_libs__type_ctor_info__V_44_44)), &backend_libs__type_ctor_info__conv5_DuNameOrderedMap_22);
        }
#line 722 "type_ctor_info.m"
        backend_libs__type_ctor_info__DuNameOrderedMap_22 = ((MR_Word) backend_libs__type_ctor_info__conv5_DuNameOrderedMap_22);
#line 724 "type_ctor_info.m"
        {
#line 724 "type_ctor_info.m"
          MR_Word base;
#line 724 "type_ctor_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 724 "type_ctor_info.m"
          *backend_libs__type_ctor_info__Details_16 = base;
#line 724 "type_ctor_info.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__EqualityAxioms_13));
#line 724 "type_ctor_info.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__DuFunctors_18));
#line 724 "type_ctor_info.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__DuPtagTable_20));
#line 724 "type_ctor_info.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__DuNameOrderedMap_22));
#line 724 "type_ctor_info.m"
          MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (backend_libs__type_ctor_info__FunctorNumberMap_21));
#line 724 "type_ctor_info.m"
        }
#line 719 "type_ctor_info.m"
      }
#line 726 "type_ctor_info.m"
    else
#line 727 "type_ctor_info.m"
      {
#line 727 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ResNameOrderedMap_25;
#line 727 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_31_31;
#line 727 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_37_37;
#line 730 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv7_ResNameOrderedMap_25;

#line 728 "type_ctor_info.m"
        {
#line 728 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 728 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_31_31, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[9]));
#line 728 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_31_31, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_du_details_8_p_0_6));
#line 728 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 728 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_31_31, 3) = ((MR_Box) (backend_libs__type_ctor_info__ReservedAddr_14));
#line 728 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_31_31, 4) = ((MR_Box) ((MR_Integer) 0));
#line 728 "type_ctor_info.m"
        }
#line 728 "type_ctor_info.m"
        {
#line 728 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_31_31, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_du_details\'/8", (MR_String) "ReservedAddr is not uses_reserved_addr");
        }
#line 731 "type_ctor_info.m"
        {
#line 731 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_37_37 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[7]);
        }
#line 730 "type_ctor_info.m"
        {
#line 730 "type_ctor_info.m"
          mercury__list__foldl_4_p_0(backend_libs__type_ctor_info__TypeCtorInfo_45_45, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[8], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[26], backend_libs__type_ctor_info__MaybeResFunctors_17, ((MR_Box) (backend_libs__type_ctor_info__V_37_37)), &backend_libs__type_ctor_info__conv7_ResNameOrderedMap_25);
        }
#line 730 "type_ctor_info.m"
        backend_libs__type_ctor_info__ResNameOrderedMap_25 = ((MR_Word) backend_libs__type_ctor_info__conv7_ResNameOrderedMap_25);
#line 732 "type_ctor_info.m"
        {
#line 732 "type_ctor_info.m"
          MR_Word base;
#line 732 "type_ctor_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 732 "type_ctor_info.m"
          *backend_libs__type_ctor_info__Details_16 = base;
#line 732 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 732 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__EqualityAxioms_13));
#line 732 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__MaybeResFunctors_17));
#line 732 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__ResFunctors_19));
#line 732 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (backend_libs__type_ctor_info__DuPtagTable_20));
#line 732 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (backend_libs__type_ctor_info__ResNameOrderedMap_25));
#line 732 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (backend_libs__type_ctor_info__FunctorNumberMap_21));
#line 732 "type_ctor_info.m"
        }
#line 727 "type_ctor_info.m"
      }
#line 710 "type_ctor_info.m"
  }
#line 705 "type_ctor_info.m"
}

#line 697 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_reserved_functor_1_f_0(
#line 697 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 697 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__ResFunctor_3)
#line 697 "type_ctor_info.m"
{
#line 700 "type_ctor_info.m"
  {
#line 700 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));

#line 700 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 700 "type_ctor_info.m"
      *backend_libs__type_ctor_info__ResFunctor_3 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__HeadVar__1_1), (MR_Integer) 0);
#line 700 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 700 "type_ctor_info.m"
  }
#line 697 "type_ctor_info.m"
}

#line 692 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__is_du_functor_1_f_0(
#line 692 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 692 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__DuFunctor_3)
#line 692 "type_ctor_info.m"
{
#line 695 "type_ctor_info.m"
  {
#line 695 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 695 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 695 "type_ctor_info.m"
      *backend_libs__type_ctor_info__DuFunctor_3 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__HeadVar__1_1), (MR_Integer) 1);
#line 695 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 695 "type_ctor_info.m"
  }
#line 692 "type_ctor_info.m"
}

#line 672 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_maps_5_p_0(
#line 672 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ForeignEnumFunctor_6,
#line 672 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_0_12,
#line 672 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_13,
#line 672 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_14,
#line 672 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_15)
#line 672 "type_ctor_info.m"
{
#line 678 "type_ctor_info.m"
  {
#line 678 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 678 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_19_19 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
#line 678 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__FunctorName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_6, (MR_Integer) 0)));
#line 678 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__FunctorOrdinal_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_6, (MR_Integer) 1)));
#line 679 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_6, (MR_Integer) 2)));

#line 680 "type_ctor_info.m"
    {
#line 680 "type_ctor_info.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__type_ctor_info__TypeCtorInfo_19_19, backend_libs__type_ctor_info__FunctorOrdinal_10, ((MR_Box) (backend_libs__type_ctor_info__ForeignEnumFunctor_6)), backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_0_12, backend_libs__type_ctor_info__STATE_VARIABLE_OrdinalMap_13);
    }
#line 681 "type_ctor_info.m"
    {
#line 681 "type_ctor_info.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__type_ctor_info__TypeCtorInfo_19_19, ((MR_Box) (backend_libs__type_ctor_info__FunctorName_9)), ((MR_Box) (backend_libs__type_ctor_info__ForeignEnumFunctor_6)), backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_14, backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_15);
#line 681 "type_ctor_info.m"
      return;
    }
#line 678 "type_ctor_info.m"
  }
#line 672 "type_ctor_info.m"
}

#line 639 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_4(
#line 639 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 639 "type_ctor_info.m"
{
#line 639 "type_ctor_info.m"
  {
#line 639 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 639 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 639 "type_ctor_info.m"
    {
#line 639 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__639__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 639 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 639 "type_ctor_info.m"
  }
#line 639 "type_ctor_info.m"
}

#line 633 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_3(
#line 633 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 633 "type_ctor_info.m"
{
#line 633 "type_ctor_info.m"
  {
#line 633 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 633 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 633 "type_ctor_info.m"
    {
#line 633 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__633__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 633 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 633 "type_ctor_info.m"
  }
#line 633 "type_ctor_info.m"
}

#line 631 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_2(
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
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__631__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 631 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 631 "type_ctor_info.m"
  }
#line 631 "type_ctor_info.m"
}

#line 629 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_1(
#line 629 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 629 "type_ctor_info.m"
{
#line 629 "type_ctor_info.m"
  {
#line 629 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 629 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 629 "type_ctor_info.m"
    {
#line 629 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_foreign_enum_functors__629__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 629 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 629 "type_ctor_info.m"
  }
#line 629 "type_ctor_info.m"
}

#line 620 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(
#line 620 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
#line 620 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Lang_2,
#line 620 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
#line 620 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_4,
#line 620 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_5,
#line 620 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__6_6)
#line 620 "type_ctor_info.m"
{
#line 624 "type_ctor_info.m"
  {
#line 624 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 624 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 624 "type_ctor_info.m"
      *backend_libs__type_ctor_info__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "type_ctor_info.m"
    else
#line 626 "type_ctor_info.m"
      {
#line 626 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Functor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 0)));
#line 626 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Functors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 1)));
#line 626 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ForeignEnumFunctor_17;
#line 626 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ForeignEnumFunctors_18;
#line 626 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ExistTvars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 0)));
#line 626 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 1)));
#line 626 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 2)));
#line 626 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__FunctorArgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 3)));
#line 626 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 4)));
#line 626 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConsId_25;
#line 626 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConsTag_26;
#line 626 "type_ctor_info.m"
        MR_String backend_libs__type_ctor_info__ForeignTagValue_29;
#line 626 "type_ctor_info.m"
        MR_String backend_libs__type_ctor_info__FunctorName_61;
#line 626 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_62_62;
#line 626 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_67_67;
#line 626 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_72_72;
#line 626 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_77_77;
#line 626 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_85_85;
#line 627 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info___Context_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_13, (MR_Integer) 5)));
#line 636 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv0_ConsTag_26;

#line 629 "type_ctor_info.m"
        {
#line 629 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 629 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_62_62, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[2]));
#line 629 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_62_62, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_1));
#line 629 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 629 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_62_62, 3) = ((MR_Box) (backend_libs__type_ctor_info__ExistTvars_19));
#line 629 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_62_62, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 629 "type_ctor_info.m"
        }
#line 629 "type_ctor_info.m"
        {
#line 629 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_62_62, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "existential arguments in functor in foreign enum");
        }
#line 631 "type_ctor_info.m"
        {
#line 631 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 631 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_67_67, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[3]));
#line 631 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_67_67, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_2));
#line 631 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 631 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_67_67, 3) = ((MR_Box) (backend_libs__type_ctor_info__Constraints_20));
#line 631 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_67_67, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "type_ctor_info.m"
        }
#line 631 "type_ctor_info.m"
        {
#line 631 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_67_67, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "class constraints on functor in foreign enum");
        }
#line 633 "type_ctor_info.m"
        {
#line 633 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 633 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_72_72, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[4]));
#line 633 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_72_72, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_3));
#line 633 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 633 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_72_72, 3) = ((MR_Box) (backend_libs__type_ctor_info__Arity_23));
#line 633 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_72_72, 4) = ((MR_Box) ((MR_Integer) 0));
#line 633 "type_ctor_info.m"
        }
#line 633 "type_ctor_info.m"
        {
#line 633 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_72_72, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "functor in foreign enum has nonzero arity");
        }
#line 635 "type_ctor_info.m"
        {
#line 635 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_77_77 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, backend_libs__type_ctor_info__FunctorArgs_22);
        }
#line 635 "type_ctor_info.m"
        {
#line 635 "type_ctor_info.m"
          backend_libs__type_ctor_info__ConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 635 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 635 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_25, 1) = ((MR_Box) (backend_libs__type_ctor_info__SymName_21));
#line 635 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_25, 2) = ((MR_Box) (backend_libs__type_ctor_info__V_77_77));
#line 635 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_25, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_1));
#line 635 "type_ctor_info.m"
        }
#line 636 "type_ctor_info.m"
        {
#line 636 "type_ctor_info.m"
          mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, backend_libs__type_ctor_info__ConsTagMap_5, ((MR_Box) (backend_libs__type_ctor_info__ConsId_25)), &backend_libs__type_ctor_info__conv0_ConsTag_26);
        }
#line 636 "type_ctor_info.m"
        backend_libs__type_ctor_info__ConsTag_26 = ((MR_Word) backend_libs__type_ctor_info__conv0_ConsTag_26);
#line 642 "type_ctor_info.m"
#line 642 "type_ctor_info.m"
        switch (MR_tag((MR_Word) backend_libs__type_ctor_info__ConsTag_26)) {
#line 642 "type_ctor_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 642 "type_ctor_info.m"
          case (MR_Integer) 0:
#line 663 "type_ctor_info.m"
            {
#line 664 "type_ctor_info.m"
              {
#line 664 "type_ctor_info.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "non foreign tag for foreign enum functor");
#line 664 "type_ctor_info.m"
                return;
              }
#line 663 "type_ctor_info.m"
            }
#line 642 "type_ctor_info.m"
            break;
#line 642 "type_ctor_info.m"
          case (MR_Integer) 1:
#line 642 "type_ctor_info.m"
          case (MR_Integer) 2:
#line 663 "type_ctor_info.m"
            {
#line 664 "type_ctor_info.m"
              {
#line 664 "type_ctor_info.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "non foreign tag for foreign enum functor");
#line 664 "type_ctor_info.m"
                return;
              }
#line 663 "type_ctor_info.m"
            }
#line 642 "type_ctor_info.m"
            break;
#line 642 "type_ctor_info.m"
          case (MR_Integer) 3:
#line 642 "type_ctor_info.m"
#line 642 "type_ctor_info.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_26, (MR_Integer) 0)))) {
#line 642 "type_ctor_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 642 "type_ctor_info.m"
              case (MR_Integer) 0:
#line 642 "type_ctor_info.m"
              case (MR_Integer) 2:
#line 642 "type_ctor_info.m"
              case (MR_Integer) 3:
#line 642 "type_ctor_info.m"
              case (MR_Integer) 4:
#line 642 "type_ctor_info.m"
              case (MR_Integer) 5:
#line 642 "type_ctor_info.m"
              case (MR_Integer) 6:
#line 642 "type_ctor_info.m"
              case (MR_Integer) 7:
#line 642 "type_ctor_info.m"
              case (MR_Integer) 8:
#line 642 "type_ctor_info.m"
              case (MR_Integer) 9:
#line 642 "type_ctor_info.m"
              case (MR_Integer) 10:
#line 642 "type_ctor_info.m"
              case (MR_Integer) 11:
#line 642 "type_ctor_info.m"
              case (MR_Integer) 12:
#line 642 "type_ctor_info.m"
              case (MR_Integer) 13:
#line 642 "type_ctor_info.m"
              case (MR_Integer) 14:
#line 642 "type_ctor_info.m"
              case (MR_Integer) 15:
#line 642 "type_ctor_info.m"
              case (MR_Integer) 16:
#line 663 "type_ctor_info.m"
                {
#line 664 "type_ctor_info.m"
                  {
#line 664 "type_ctor_info.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "non foreign tag for foreign enum functor");
#line 664 "type_ctor_info.m"
                    return;
                  }
#line 663 "type_ctor_info.m"
                }
#line 642 "type_ctor_info.m"
                break;
#line 642 "type_ctor_info.m"
              case (MR_Integer) 1:
#line 638 "type_ctor_info.m"
                {
#line 638 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__ForeignTagLang_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_26, (MR_Integer) 1)));
#line 638 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_81_81;

#line 638 "type_ctor_info.m"
                  backend_libs__type_ctor_info__ForeignTagValue_29 = ((MR_String) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsTag_26, (MR_Integer) 2)));
#line 639 "type_ctor_info.m"
                  {
#line 639 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 639 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_81_81, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[6]));
#line 639 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_81_81, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0_4));
#line 639 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 639 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_81_81, 3) = ((MR_Box) (backend_libs__type_ctor_info__Lang_2));
#line 639 "type_ctor_info.m"
                    MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_81_81, 4) = ((MR_Box) (backend_libs__type_ctor_info__ForeignTagLang_27));
#line 639 "type_ctor_info.m"
                  }
#line 639 "type_ctor_info.m"
                  {
#line 639 "type_ctor_info.m"
                    mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_81_81, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_functors\'/6", (MR_String) "language mismatch between foreign tag and foreign enum");
                  }
#line 638 "type_ctor_info.m"
                }
#line 642 "type_ctor_info.m"
                break;
#line 642 "type_ctor_info.m"
            }
#line 642 "type_ctor_info.m"
            break;
#line 642 "type_ctor_info.m"
        }
#line 666 "type_ctor_info.m"
        {
#line 666 "type_ctor_info.m"
          backend_libs__type_ctor_info__FunctorName_61 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__type_ctor_info__SymName_21);
        }
#line 667 "type_ctor_info.m"
        {
#line 667 "type_ctor_info.m"
          backend_libs__type_ctor_info__ForeignEnumFunctor_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 667 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_17, 0) = ((MR_Box) (backend_libs__type_ctor_info__FunctorName_61));
#line 667 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_17, 1) = ((MR_Box) (backend_libs__type_ctor_info__NextOrdinal_4));
#line 667 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ForeignEnumFunctor_17, 2) = ((MR_Box) (backend_libs__type_ctor_info__ForeignTagValue_29));
#line 667 "type_ctor_info.m"
        }
#line 669 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_85_85 = (backend_libs__type_ctor_info__NextOrdinal_4 + (MR_Integer) 1);
#line 669 "type_ctor_info.m"
        {
#line 669 "type_ctor_info.m"
          backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(backend_libs__type_ctor_info__TypeCtor_1, backend_libs__type_ctor_info__Lang_2, backend_libs__type_ctor_info__Functors_14, backend_libs__type_ctor_info__V_85_85, backend_libs__type_ctor_info__ConsTagMap_5, &backend_libs__type_ctor_info__ForeignEnumFunctors_18);
        }
#line 626 "type_ctor_info.m"
        {
#line 626 "type_ctor_info.m"
          MR_Word base;
#line 626 "type_ctor_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "type_ctor_info.m"
          *backend_libs__type_ctor_info__HeadVar__6_6 = base;
#line 626 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__ForeignEnumFunctor_17));
#line 626 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__ForeignEnumFunctors_18));
#line 626 "type_ctor_info.m"
        }
#line 626 "type_ctor_info.m"
      }
#line 624 "type_ctor_info.m"
  }
#line 620 "type_ctor_info.m"
}

#line 1027 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_2(
#line 1027 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 1027 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1)
#line 1027 "type_ctor_info.m"
{
#line 1027 "type_ctor_info.m"
  {
#line 1027 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__wrapper_arg_2;
#line 1027 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 1027 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv4_HeadVar__2_11;

#line 1027 "type_ctor_info.m"
    {
#line 1027 "type_ctor_info.m"
      backend_libs__type_ctor_info__conv4_HeadVar__2_11 = backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1027__1_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1));
    }
#line 1027 "type_ctor_info.m"
    backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv4_HeadVar__2_11));
#line 1027 "type_ctor_info.m"
    return backend_libs__type_ctor_info__wrapper_arg_2;
#line 1027 "type_ctor_info.m"
  }
#line 1027 "type_ctor_info.m"
}

#line 606 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0_1(
#line 606 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 606 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 606 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 606 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
#line 606 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
#line 606 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5)
#line 606 "type_ctor_info.m"
{
#line 606 "type_ctor_info.m"
  {
#line 606 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 606 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv1_STATE_VARIABLE_OrdinalMap_13;
#line 606 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_15;

#line 606 "type_ctor_info.m"
    {
#line 606 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_foreign_enum_maps_5_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv1_STATE_VARIABLE_OrdinalMap_13, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_4), &backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_15);
    }
#line 606 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv1_STATE_VARIABLE_OrdinalMap_13));
#line 606 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_5 = ((MR_Box) (backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_15));
#line 606 "type_ctor_info.m"
  }
#line 606 "type_ctor_info.m"
}

#line 590 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0(
#line 590 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_8,
#line 590 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Lang_9,
#line 590 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_10,
#line 590 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_11,
#line 590 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReserveTag_12,
#line 590 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_13,
#line 590 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_14)
#line 590 "type_ctor_info.m"
{
#line 595 "type_ctor_info.m"
  {
#line 595 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 595 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_27_27;
#line 595 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_32_65;
#line 595 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeInfo_33_66;
#line 595 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_35_68;
#line 595 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ForeignEnumFunctors_15;
#line 595 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__OrdinalMap0_16;
#line 595 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__NameMap0_17;
#line 595 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__OrdinalMap_18;
#line 595 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__NameMap_19;
#line 595 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__FunctorNumberMap_20;
#line 595 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__CtorNames_38;
#line 595 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__SortedNameArityMap_40;
#line 595 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_48_48;
#line 595 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_49_49;
#line 595 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_51_51;
#line 595 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_52_52;
#line 606 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv3_OrdinalMap_18;
#line 606 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv2_NameMap_19;

#line 599 "type_ctor_info.m"
#line 599 "type_ctor_info.m"
    switch (backend_libs__type_ctor_info__ReserveTag_12) {
#line 599 "type_ctor_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 599 "type_ctor_info.m"
      case (MR_Integer) 1:
#line 600 "type_ctor_info.m"
        {
#line 600 "type_ctor_info.m"
        }
#line 599 "type_ctor_info.m"
        break;
#line 599 "type_ctor_info.m"
      case (MR_Integer) 0:
#line 597 "type_ctor_info.m"
        {
#line 598 "type_ctor_info.m"
          {
#line 598 "type_ctor_info.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_foreign_enum_details\'/7", (MR_String) "foreign enum with reserved tag");
#line 598 "type_ctor_info.m"
            return;
          }
#line 597 "type_ctor_info.m"
        }
#line 599 "type_ctor_info.m"
        break;
#line 599 "type_ctor_info.m"
    }
#line 602 "type_ctor_info.m"
    {
#line 602 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_foreign_enum_functors_6_p_0(backend_libs__type_ctor_info__TypeCtor_8, backend_libs__type_ctor_info__Lang_9, backend_libs__type_ctor_info__Ctors_10, (MR_Integer) 0, backend_libs__type_ctor_info__ConsTagMap_11, &backend_libs__type_ctor_info__ForeignEnumFunctors_15);
    }
#line 7205 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_27_27 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
#line 604 "type_ctor_info.m"
    {
#line 604 "type_ctor_info.m"
      backend_libs__type_ctor_info__OrdinalMap0_16 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__type_ctor_info__TypeCtorInfo_27_27);
    }
#line 605 "type_ctor_info.m"
    {
#line 605 "type_ctor_info.m"
      backend_libs__type_ctor_info__NameMap0_17 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__type_ctor_info__TypeCtorInfo_27_27);
    }
#line 606 "type_ctor_info.m"
    {
#line 606 "type_ctor_info.m"
      mercury__list__foldl2_6_p_0(backend_libs__type_ctor_info__TypeCtorInfo_27_27, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[2], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[3], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[20], backend_libs__type_ctor_info__ForeignEnumFunctors_15, ((MR_Box) (backend_libs__type_ctor_info__OrdinalMap0_16)), &backend_libs__type_ctor_info__conv3_OrdinalMap_18, ((MR_Box) (backend_libs__type_ctor_info__NameMap0_17)), &backend_libs__type_ctor_info__conv2_NameMap_19);
    }
#line 606 "type_ctor_info.m"
    backend_libs__type_ctor_info__OrdinalMap_18 = ((MR_Word) backend_libs__type_ctor_info__conv3_OrdinalMap_18);
#line 606 "type_ctor_info.m"
    backend_libs__type_ctor_info__NameMap_19 = ((MR_Word) backend_libs__type_ctor_info__conv2_NameMap_19);
#line 7226 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_32_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 7228 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeInfo_33_66 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[10];
#line 1027 "type_ctor_info.m"
    {
#line 1027 "type_ctor_info.m"
      backend_libs__type_ctor_info__CtorNames_38 = mercury__list__map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_32_65, backend_libs__type_ctor_info__TypeInfo_33_66, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[21], backend_libs__type_ctor_info__Ctors_10);
    }
#line 7235 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_35_68 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1031 "type_ctor_info.m"
    {
#line 1031 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_48_48 = mercury__list__sort_1_f_0(backend_libs__type_ctor_info__TypeInfo_33_66, backend_libs__type_ctor_info__CtorNames_38);
    }
#line 1032 "type_ctor_info.m"
    {
#line 1032 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_52_52 = mercury__list__length_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_32_65, backend_libs__type_ctor_info__Ctors_10);
    }
#line 1032 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_51_51 = (backend_libs__type_ctor_info__V_52_52 - (MR_Integer) 1);
#line 1032 "type_ctor_info.m"
    {
#line 1032 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_49_49 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, backend_libs__type_ctor_info__V_51_51);
    }
#line 1031 "type_ctor_info.m"
    {
#line 1031 "type_ctor_info.m"
      backend_libs__type_ctor_info__SortedNameArityMap_40 = mercury__map__from_corresponding_lists_2_f_0(backend_libs__type_ctor_info__TypeInfo_33_66, backend_libs__type_ctor_info__TypeCtorInfo_35_68, backend_libs__type_ctor_info__V_48_48, backend_libs__type_ctor_info__V_49_49);
    }
#line 1033 "type_ctor_info.m"
    {
#line 1033 "type_ctor_info.m"
      backend_libs__type_ctor_info__FunctorNumberMap_20 = mercury__map__apply_to_list_2_f_0(backend_libs__type_ctor_info__TypeInfo_33_66, backend_libs__type_ctor_info__TypeCtorInfo_35_68, backend_libs__type_ctor_info__CtorNames_38, backend_libs__type_ctor_info__SortedNameArityMap_40);
    }
#line 609 "type_ctor_info.m"
    {
#line 609 "type_ctor_info.m"
      MR_Word base;
#line 609 "type_ctor_info.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 609 "type_ctor_info.m"
      *backend_libs__type_ctor_info__Details_14 = base;
#line 609 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__Lang_9));
#line 609 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__EqualityAxioms_13));
#line 609 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__ForeignEnumFunctors_15));
#line 609 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__OrdinalMap_18));
#line 609 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (backend_libs__type_ctor_info__NameMap_19));
#line 609 "type_ctor_info.m"
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (backend_libs__type_ctor_info__FunctorNumberMap_20));
#line 609 "type_ctor_info.m"
    }
#line 595 "type_ctor_info.m"
  }
#line 590 "type_ctor_info.m"
}

#line 577 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_enum_maps_5_p_0(
#line 577 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EnumFunctor_6,
#line 577 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_0_11,
#line 577 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_12,
#line 577 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_13,
#line 577 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_14)
#line 577 "type_ctor_info.m"
{
#line 581 "type_ctor_info.m"
  {
#line 581 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 581 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_18_18 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
#line 581 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__FunctorName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__EnumFunctor_6, (MR_Integer) 0)));
#line 581 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__Ordinal_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__EnumFunctor_6, (MR_Integer) 1)));

#line 583 "type_ctor_info.m"
    {
#line 583 "type_ctor_info.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__type_ctor_info__TypeCtorInfo_18_18, backend_libs__type_ctor_info__Ordinal_10, ((MR_Box) (backend_libs__type_ctor_info__EnumFunctor_6)), backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_0_11, backend_libs__type_ctor_info__STATE_VARIABLE_ValueMap_12);
    }
#line 584 "type_ctor_info.m"
    {
#line 584 "type_ctor_info.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__type_ctor_info__TypeCtorInfo_18_18, ((MR_Box) (backend_libs__type_ctor_info__FunctorName_9)), ((MR_Box) (backend_libs__type_ctor_info__EnumFunctor_6)), backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_0_13, backend_libs__type_ctor_info__STATE_VARIABLE_NameMap_14);
#line 584 "type_ctor_info.m"
      return;
    }
#line 581 "type_ctor_info.m"
  }
#line 577 "type_ctor_info.m"
}

#line 570 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_4(
#line 570 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 570 "type_ctor_info.m"
{
#line 570 "type_ctor_info.m"
  {
#line 570 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 570 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 570 "type_ctor_info.m"
    {
#line 570 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__570__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 570 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 570 "type_ctor_info.m"
  }
#line 570 "type_ctor_info.m"
}

#line 566 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_3(
#line 566 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 566 "type_ctor_info.m"
{
#line 566 "type_ctor_info.m"
  {
#line 566 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 566 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 566 "type_ctor_info.m"
    {
#line 566 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__566__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 566 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 566 "type_ctor_info.m"
  }
#line 566 "type_ctor_info.m"
}

#line 564 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_2(
#line 564 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 564 "type_ctor_info.m"
{
#line 564 "type_ctor_info.m"
  {
#line 564 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 564 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 564 "type_ctor_info.m"
    {
#line 564 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__564__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 564 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 564 "type_ctor_info.m"
  }
#line 564 "type_ctor_info.m"
}

#line 562 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0_1(
#line 562 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 562 "type_ctor_info.m"
{
#line 562 "type_ctor_info.m"
  {
#line 562 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 562 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 562 "type_ctor_info.m"
    {
#line 562 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__make_enum_functors__562__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 562 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 562 "type_ctor_info.m"
  }
#line 562 "type_ctor_info.m"
}

#line 554 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_enum_functors_5_p_0(
#line 554 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_1,
#line 554 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 554 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__NextOrdinal_3,
#line 554 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_4,
#line 554 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__5_5)
#line 554 "type_ctor_info.m"
{
#line 557 "type_ctor_info.m"
  {
#line 557 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 557 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "type_ctor_info.m"
      *backend_libs__type_ctor_info__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "type_ctor_info.m"
    else
#line 559 "type_ctor_info.m"
      {
#line 559 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Functor_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 0)));
#line 559 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Functors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__2_2, (MR_Integer) 1)));
#line 559 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__EnumFunctor_14;
#line 559 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__EnumFunctors_15;
#line 559 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ExistTvars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 0)));
#line 559 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 1)));
#line 559 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 2)));
#line 559 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__FunctorArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 3)));
#line 559 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 4)));
#line 559 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConsId_22;
#line 559 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ConsTag_23;
#line 559 "type_ctor_info.m"
        MR_String backend_libs__type_ctor_info__FunctorName_24;
#line 559 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_25_25;
#line 559 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_30_30;
#line 559 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_35_35;
#line 559 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_40_40;
#line 559 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_41_41;
#line 559 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_45_45;
#line 559 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__V_46_46;
#line 560 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_10, (MR_Integer) 5)));
#line 569 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv0_ConsTag_23;

#line 562 "type_ctor_info.m"
        {
#line 562 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 562 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_25_25, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[2]));
#line 562 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_25_25, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_1));
#line 562 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 562 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_25_25, 3) = ((MR_Box) (backend_libs__type_ctor_info__ExistTvars_16));
#line 562 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_25_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "type_ctor_info.m"
        }
#line 562 "type_ctor_info.m"
        {
#line 562 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_25_25, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "existential arguments in functor in enum");
        }
#line 564 "type_ctor_info.m"
        {
#line 564 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 564 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_30_30, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[3]));
#line 564 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_30_30, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_2));
#line 564 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 564 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_30_30, 3) = ((MR_Box) (backend_libs__type_ctor_info__Constraints_17));
#line 564 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_30_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 564 "type_ctor_info.m"
        }
#line 564 "type_ctor_info.m"
        {
#line 564 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_30_30, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "class constraints on functor in enum");
        }
#line 566 "type_ctor_info.m"
        {
#line 566 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 566 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_35_35, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[4]));
#line 566 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_35_35, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_3));
#line 566 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 566 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_35_35, 3) = ((MR_Box) (backend_libs__type_ctor_info__Arity_20));
#line 566 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_35_35, 4) = ((MR_Box) ((MR_Integer) 0));
#line 566 "type_ctor_info.m"
        }
#line 566 "type_ctor_info.m"
        {
#line 566 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_35_35, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "functor in enum has nonzero arity");
        }
#line 568 "type_ctor_info.m"
        {
#line 568 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_40_40 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, backend_libs__type_ctor_info__FunctorArgs_19);
        }
#line 568 "type_ctor_info.m"
        {
#line 568 "type_ctor_info.m"
          backend_libs__type_ctor_info__ConsId_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 568 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 568 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_22, 1) = ((MR_Box) (backend_libs__type_ctor_info__SymName_18));
#line 568 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_22, 2) = ((MR_Box) (backend_libs__type_ctor_info__V_40_40));
#line 568 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__ConsId_22, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_1));
#line 568 "type_ctor_info.m"
        }
#line 569 "type_ctor_info.m"
        {
#line 569 "type_ctor_info.m"
          mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, backend_libs__type_ctor_info__ConsTagMap_4, ((MR_Box) (backend_libs__type_ctor_info__ConsId_22)), &backend_libs__type_ctor_info__conv0_ConsTag_23);
        }
#line 569 "type_ctor_info.m"
        backend_libs__type_ctor_info__ConsTag_23 = ((MR_Word) backend_libs__type_ctor_info__conv0_ConsTag_23);
#line 570 "type_ctor_info.m"
        {
#line 570 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 570 "type_ctor_info.m"
          MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__V_45_45, 1) = ((MR_Box) (backend_libs__type_ctor_info__NextOrdinal_3));
#line 570 "type_ctor_info.m"
        }
#line 570 "type_ctor_info.m"
        {
#line 570 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 570 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_41_41, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[5]));
#line 570 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_41_41, 1) = ((MR_Box) (backend_libs__type_ctor_info__make_enum_functors_5_p_0_4));
#line 570 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 570 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_41_41, 3) = ((MR_Box) (backend_libs__type_ctor_info__ConsTag_23));
#line 570 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_41_41, 4) = ((MR_Box) (backend_libs__type_ctor_info__V_45_45));
#line 570 "type_ctor_info.m"
        }
#line 570 "type_ctor_info.m"
        {
#line 570 "type_ctor_info.m"
          mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_41_41, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_enum_functors\'/5", (MR_String) "mismatch on constant assigned to functor in enum");
        }
#line 572 "type_ctor_info.m"
        {
#line 572 "type_ctor_info.m"
          backend_libs__type_ctor_info__FunctorName_24 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__type_ctor_info__SymName_18);
        }
#line 573 "type_ctor_info.m"
        {
#line 573 "type_ctor_info.m"
          backend_libs__type_ctor_info__EnumFunctor_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 573 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__EnumFunctor_14, 0) = ((MR_Box) (backend_libs__type_ctor_info__FunctorName_24));
#line 573 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__EnumFunctor_14, 1) = ((MR_Box) (backend_libs__type_ctor_info__NextOrdinal_3));
#line 573 "type_ctor_info.m"
        }
#line 574 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_46_46 = (backend_libs__type_ctor_info__NextOrdinal_3 + (MR_Integer) 1);
#line 574 "type_ctor_info.m"
        {
#line 574 "type_ctor_info.m"
          backend_libs__type_ctor_info__make_enum_functors_5_p_0(backend_libs__type_ctor_info__TypeCtor_1, backend_libs__type_ctor_info__Functors_11, backend_libs__type_ctor_info__V_46_46, backend_libs__type_ctor_info__ConsTagMap_4, &backend_libs__type_ctor_info__EnumFunctors_15);
        }
#line 559 "type_ctor_info.m"
        {
#line 559 "type_ctor_info.m"
          MR_Word base;
#line 559 "type_ctor_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "type_ctor_info.m"
          *backend_libs__type_ctor_info__HeadVar__5_5 = base;
#line 559 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__EnumFunctor_14));
#line 559 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__EnumFunctors_15));
#line 559 "type_ctor_info.m"
        }
#line 559 "type_ctor_info.m"
      }
#line 557 "type_ctor_info.m"
  }
#line 554 "type_ctor_info.m"
}

#line 1027 "type_ctor_info.m"
static MR_Box MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_2(
#line 1027 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 1027 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1)
#line 1027 "type_ctor_info.m"
{
#line 1027 "type_ctor_info.m"
  {
#line 1027 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__wrapper_arg_2;
#line 1027 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 1027 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv4_HeadVar__2_11;

#line 1027 "type_ctor_info.m"
    {
#line 1027 "type_ctor_info.m"
      backend_libs__type_ctor_info__conv4_HeadVar__2_11 = backend_libs__type_ctor_info__IntroducedFrom__func__make_functor_number_map__1027__1_1_f_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1));
    }
#line 1027 "type_ctor_info.m"
    backend_libs__type_ctor_info__wrapper_arg_2 = ((MR_Box) (backend_libs__type_ctor_info__conv4_HeadVar__2_11));
#line 1027 "type_ctor_info.m"
    return backend_libs__type_ctor_info__wrapper_arg_2;
#line 1027 "type_ctor_info.m"
  }
#line 1027 "type_ctor_info.m"
}

#line 535 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0_1(
#line 535 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg,
#line 535 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_1,
#line 535 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_2,
#line 535 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_3,
#line 535 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__wrapper_arg_4,
#line 535 "type_ctor_info.m"
  MR_Box * backend_libs__type_ctor_info__wrapper_arg_5)
#line 535 "type_ctor_info.m"
{
#line 535 "type_ctor_info.m"
  {
#line 535 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;
#line 535 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv1_STATE_VARIABLE_ValueMap_12;
#line 535 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_14;

#line 535 "type_ctor_info.m"
    {
#line 535 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_enum_maps_5_p_0(((MR_Word) backend_libs__type_ctor_info__wrapper_arg_1), ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_2), &backend_libs__type_ctor_info__conv1_STATE_VARIABLE_ValueMap_12, ((MR_Word) backend_libs__type_ctor_info__wrapper_arg_4), &backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_14);
    }
#line 535 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_3 = ((MR_Box) (backend_libs__type_ctor_info__conv1_STATE_VARIABLE_ValueMap_12));
#line 535 "type_ctor_info.m"
    *backend_libs__type_ctor_info__wrapper_arg_5 = ((MR_Box) (backend_libs__type_ctor_info__conv0_STATE_VARIABLE_NameMap_14));
#line 535 "type_ctor_info.m"
  }
#line 535 "type_ctor_info.m"
}

#line 520 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(
#line 520 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_7,
#line 520 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__Ctors_8,
#line 520 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ConsTagMap_9,
#line 520 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ReserveTag_10,
#line 520 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_11,
#line 520 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_12)
#line 520 "type_ctor_info.m"
{
#line 525 "type_ctor_info.m"
  {
#line 525 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 525 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_28_28;
#line 525 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_32_66;
#line 525 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeInfo_33_67;
#line 525 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_35_69;
#line 525 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__EnumFunctors_13;
#line 525 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ValueMap0_14;
#line 525 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__NameMap0_15;
#line 525 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ValueMap_16;
#line 525 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__NameMap_17;
#line 525 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__IsDummy_19;
#line 525 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__FunctorNumberMap_20;
#line 525 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__CtorNames_39;
#line 525 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__SortedNameArityMap_41;
#line 525 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_49_49;
#line 525 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_50_50;
#line 525 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_52_52;
#line 525 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__V_53_53;
#line 535 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv3_ValueMap_16;
#line 535 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__conv2_NameMap_17;
#line 537 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_26_26;
#line 537 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_18_18;

#line 529 "type_ctor_info.m"
#line 529 "type_ctor_info.m"
    switch (backend_libs__type_ctor_info__ReserveTag_10) {
#line 529 "type_ctor_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 529 "type_ctor_info.m"
      case (MR_Integer) 1:
#line 530 "type_ctor_info.m"
        {
#line 530 "type_ctor_info.m"
        }
#line 529 "type_ctor_info.m"
        break;
#line 529 "type_ctor_info.m"
      case (MR_Integer) 0:
#line 527 "type_ctor_info.m"
        {
#line 528 "type_ctor_info.m"
          {
#line 528 "type_ctor_info.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.make_mercury_enum_details\'/6", (MR_String) "enum with reserved tag");
#line 528 "type_ctor_info.m"
            return;
          }
#line 527 "type_ctor_info.m"
        }
#line 529 "type_ctor_info.m"
        break;
#line 529 "type_ctor_info.m"
    }
#line 532 "type_ctor_info.m"
    {
#line 532 "type_ctor_info.m"
      backend_libs__type_ctor_info__make_enum_functors_5_p_0(backend_libs__type_ctor_info__TypeCtor_7, backend_libs__type_ctor_info__Ctors_8, (MR_Integer) 0, backend_libs__type_ctor_info__ConsTagMap_9, &backend_libs__type_ctor_info__EnumFunctors_13);
    }
#line 7843 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_28_28 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
#line 533 "type_ctor_info.m"
    {
#line 533 "type_ctor_info.m"
      backend_libs__type_ctor_info__ValueMap0_14 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__type_ctor_info__TypeCtorInfo_28_28);
    }
#line 534 "type_ctor_info.m"
    {
#line 534 "type_ctor_info.m"
      backend_libs__type_ctor_info__NameMap0_15 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, backend_libs__type_ctor_info__TypeCtorInfo_28_28);
    }
#line 535 "type_ctor_info.m"
    {
#line 535 "type_ctor_info.m"
      mercury__list__foldl2_6_p_0(backend_libs__type_ctor_info__TypeCtorInfo_28_28, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[0], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[1], (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[18], backend_libs__type_ctor_info__EnumFunctors_13, ((MR_Box) (backend_libs__type_ctor_info__ValueMap0_14)), &backend_libs__type_ctor_info__conv3_ValueMap_16, ((MR_Box) (backend_libs__type_ctor_info__NameMap0_15)), &backend_libs__type_ctor_info__conv2_NameMap_17);
    }
#line 535 "type_ctor_info.m"
    backend_libs__type_ctor_info__ValueMap_16 = ((MR_Word) backend_libs__type_ctor_info__conv3_ValueMap_16);
#line 535 "type_ctor_info.m"
    backend_libs__type_ctor_info__NameMap_17 = ((MR_Word) backend_libs__type_ctor_info__conv2_NameMap_17);
#line 537 "type_ctor_info.m"
    backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__Ctors_8)) == (MR_mktag((MR_Integer) 1)));
#line 537 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 537 "type_ctor_info.m"
      {
#line 537 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Ctors_8, (MR_Integer) 0)));
#line 537 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Ctors_8, (MR_Integer) 1)));
#line 537 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 537 "type_ctor_info.m"
      }
#line 539 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 538 "type_ctor_info.m"
      backend_libs__type_ctor_info__IsDummy_19 = (MR_Integer) 1;
#line 539 "type_ctor_info.m"
    else
#line 540 "type_ctor_info.m"
      backend_libs__type_ctor_info__IsDummy_19 = (MR_Integer) 0;
#line 7886 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_32_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 7888 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeInfo_33_67 = (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[10];
#line 1027 "type_ctor_info.m"
    {
#line 1027 "type_ctor_info.m"
      backend_libs__type_ctor_info__CtorNames_39 = mercury__list__map_2_f_0(backend_libs__type_ctor_info__TypeCtorInfo_32_66, backend_libs__type_ctor_info__TypeInfo_33_67, (MR_Word) &backend_libs__type_ctor_info_scalar_common_2[19], backend_libs__type_ctor_info__Ctors_8);
    }
#line 7895 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_35_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1031 "type_ctor_info.m"
    {
#line 1031 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_49_49 = mercury__list__sort_1_f_0(backend_libs__type_ctor_info__TypeInfo_33_67, backend_libs__type_ctor_info__CtorNames_39);
    }
#line 1032 "type_ctor_info.m"
    {
#line 1032 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_53_53 = mercury__list__length_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_32_66, backend_libs__type_ctor_info__Ctors_8);
    }
#line 1032 "type_ctor_info.m"
    backend_libs__type_ctor_info__V_52_52 = (backend_libs__type_ctor_info__V_53_53 - (MR_Integer) 1);
#line 1032 "type_ctor_info.m"
    {
#line 1032 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_50_50 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, backend_libs__type_ctor_info__V_52_52);
    }
#line 1031 "type_ctor_info.m"
    {
#line 1031 "type_ctor_info.m"
      backend_libs__type_ctor_info__SortedNameArityMap_41 = mercury__map__from_corresponding_lists_2_f_0(backend_libs__type_ctor_info__TypeInfo_33_67, backend_libs__type_ctor_info__TypeCtorInfo_35_69, backend_libs__type_ctor_info__V_49_49, backend_libs__type_ctor_info__V_50_50);
    }
#line 1033 "type_ctor_info.m"
    {
#line 1033 "type_ctor_info.m"
      backend_libs__type_ctor_info__FunctorNumberMap_20 = mercury__map__apply_to_list_2_f_0(backend_libs__type_ctor_info__TypeInfo_33_67, backend_libs__type_ctor_info__TypeCtorInfo_35_69, backend_libs__type_ctor_info__CtorNames_39, backend_libs__type_ctor_info__SortedNameArityMap_41);
    }
#line 543 "type_ctor_info.m"
    {
#line 543 "type_ctor_info.m"
      MR_Word base;
#line 543 "type_ctor_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 543 "type_ctor_info.m"
      *backend_libs__type_ctor_info__Details_12 = base;
#line 543 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__EqualityAxioms_11));
#line 543 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__EnumFunctors_13));
#line 543 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__ValueMap_16));
#line 543 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__NameMap_17));
#line 543 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__type_ctor_info__IsDummy_19));
#line 543 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__type_ctor_info__FunctorNumberMap_20));
#line 543 "type_ctor_info.m"
    }
#line 525 "type_ctor_info.m"
  }
#line 520 "type_ctor_info.m"
}

#line 500 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__make_notag_details_6_p_0(
#line 500 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_7,
#line 500 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__SymName_8,
#line 500 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ArgType_9,
#line 500 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__MaybeArgName_10,
#line 500 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__EqualityAxioms_11,
#line 500 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__Details_12)
#line 500 "type_ctor_info.m"
{
#line 504 "type_ctor_info.m"
  {
#line 504 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 504 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__FunctorName_13;
#line 504 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__MaybePseudoTypeInfo_16;
#line 504 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Functor_17;

#line 505 "type_ctor_info.m"
    {
#line 505 "type_ctor_info.m"
      backend_libs__type_ctor_info__FunctorName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(backend_libs__type_ctor_info__SymName_8);
    }
#line 509 "type_ctor_info.m"
    {
#line 509 "type_ctor_info.m"
      backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(backend_libs__type_ctor_info__ArgType_9, backend_libs__type_ctor_info__TypeArity_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__MaybePseudoTypeInfo_16);
    }
#line 511 "type_ctor_info.m"
    {
#line 511 "type_ctor_info.m"
      backend_libs__type_ctor_info__Functor_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 511 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_17, 0) = ((MR_Box) (backend_libs__type_ctor_info__FunctorName_13));
#line 511 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_17, 1) = ((MR_Box) (backend_libs__type_ctor_info__MaybePseudoTypeInfo_16));
#line 511 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Functor_17, 2) = ((MR_Box) (backend_libs__type_ctor_info__MaybeArgName_10));
#line 511 "type_ctor_info.m"
    }
#line 512 "type_ctor_info.m"
    {
#line 512 "type_ctor_info.m"
      MR_Word base;
#line 512 "type_ctor_info.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 512 "type_ctor_info.m"
      *backend_libs__type_ctor_info__Details_12 = base;
#line 512 "type_ctor_info.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 512 "type_ctor_info.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__EqualityAxioms_11));
#line 512 "type_ctor_info.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__Functor_17));
#line 512 "type_ctor_info.m"
    }
#line 504 "type_ctor_info.m"
  }
#line 500 "type_ctor_info.m"
}

#line 459 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__impl_type_ctor_4_p_0(
#line 459 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__1_1,
#line 459 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__2_2,
#line 459 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__3_3,
#line 459 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4)
#line 459 "type_ctor_info.m"
{
#line 462 "type_ctor_info.m"
  {
#line 462 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__HeadVar__3_3 == (MR_Integer) 0);

#line 462 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 462 "type_ctor_info.m"
      {
#line 462 "type_ctor_info.m"
        if ((strcmp(backend_libs__type_ctor_info__HeadVar__1_1, (MR_String) "table_builtin") == 0))
#line 476 "type_ctor_info.m"
          {
#line 476 "type_ctor_info.m"
            backend_libs__type_ctor_info__succeeded = (strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "ml_subgoal") == 0);
#line 476 "type_ctor_info.m"
            if (backend_libs__type_ctor_info__succeeded)
#line 476 "type_ctor_info.m"
              {
#line 476 "type_ctor_info.m"
                *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Integer) 12;
#line 476 "type_ctor_info.m"
                backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 476 "type_ctor_info.m"
              }
#line 476 "type_ctor_info.m"
          }
#line 462 "type_ctor_info.m"
        else
#line 462 "type_ctor_info.m"
        if ((strcmp(backend_libs__type_ctor_info__HeadVar__1_1, (MR_String) "private_builtin") == 0))
#line 462 "type_ctor_info.m"
          {
#line 462 "type_ctor_info.m"
            MR_Integer backend_libs__type_ctor_info__slot_0;
#line 462 "type_ctor_info.m"
            MR_String backend_libs__type_ctor_info__str_1;

#line 462 "type_ctor_info.m"
            /* hashed string simple lookup switch */
#line 462 "type_ctor_info.m"
            /* compute the hash value of the input string */
#line 462 "type_ctor_info.m"
            backend_libs__type_ctor_info__slot_0 = ((MR_hash_string6(backend_libs__type_ctor_info__HeadVar__2_2)) & (MR_Integer) 31);
#line 462 "type_ctor_info.m"
            /* no collisions; no hash chain loop */
#line 462 "type_ctor_info.m"
            /* lookup the string for this hash slot */
#line 462 "type_ctor_info.m"
            backend_libs__type_ctor_info__str_1 = ((&backend_libs__type_ctor_info_vector_common_7[0 + backend_libs__type_ctor_info__slot_0]))->backend_libs__type_ctor_info__vector_common_type_7_0__vct_7_f_0;
#line 462 "type_ctor_info.m"
            /* did we find a match? */
#line 462 "type_ctor_info.m"
            if ((((backend_libs__type_ctor_info__str_1 != NULL)) && ((strcmp(backend_libs__type_ctor_info__str_1, backend_libs__type_ctor_info__HeadVar__2_2) == 0))))
#line 462 "type_ctor_info.m"
              {
#line 462 "type_ctor_info.m"
                /* we found a match; look up the results */
#line 462 "type_ctor_info.m"
                *backend_libs__type_ctor_info__HeadVar__4_4 = ((&backend_libs__type_ctor_info_vector_common_7[0 + backend_libs__type_ctor_info__slot_0]))->backend_libs__type_ctor_info__vector_common_type_7_0__vct_7_f_1;
#line 462 "type_ctor_info.m"
                backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 462 "type_ctor_info.m"
                /* jump out of search loop */
#line 462 "type_ctor_info.m"
                goto label_0;
#line 462 "type_ctor_info.m"
              }
#line 462 "type_ctor_info.m"
            backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 462 "type_ctor_info.m"
          label_0:;
#line 462 "type_ctor_info.m"
          }
#line 462 "type_ctor_info.m"
        else
#line 462 "type_ctor_info.m"
          backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 462 "type_ctor_info.m"
      }
#line 462 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 462 "type_ctor_info.m"
  }
#line 459 "type_ctor_info.m"
}

#line 434 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__builtin_type_ctor_4_p_0(
#line 434 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__1_1,
#line 434 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__HeadVar__2_2,
#line 434 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__HeadVar__3_3,
#line 434 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4)
#line 434 "type_ctor_info.m"
{
#line 440 "type_ctor_info.m"
  {
#line 440 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 440 "type_ctor_info.m"
    if ((strcmp(backend_libs__type_ctor_info__HeadVar__1_1, (MR_String) "builtin") == 0))
#line 440 "type_ctor_info.m"
      {
#line 440 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__slot_0;
#line 440 "type_ctor_info.m"
        MR_String backend_libs__type_ctor_info__str_1;

#line 445 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__HeadVar__3_3 == (MR_Integer) 0);
#line 440 "type_ctor_info.m"
        if (backend_libs__type_ctor_info__succeeded)
#line 440 "type_ctor_info.m"
          {
#line 440 "type_ctor_info.m"
            /* hashed string simple lookup switch */
#line 440 "type_ctor_info.m"
            /* compute the hash value of the input string */
#line 440 "type_ctor_info.m"
            backend_libs__type_ctor_info__slot_0 = ((MR_hash_string5(backend_libs__type_ctor_info__HeadVar__2_2)) & (MR_Integer) 31);
#line 440 "type_ctor_info.m"
            /* no collisions; no hash chain loop */
#line 440 "type_ctor_info.m"
            /* lookup the string for this hash slot */
#line 440 "type_ctor_info.m"
            backend_libs__type_ctor_info__str_1 = ((&backend_libs__type_ctor_info_vector_common_6[0 + backend_libs__type_ctor_info__slot_0]))->backend_libs__type_ctor_info__vector_common_type_6_0__vct_6_f_0;
#line 440 "type_ctor_info.m"
            /* did we find a match? */
#line 440 "type_ctor_info.m"
            if ((((backend_libs__type_ctor_info__str_1 != NULL)) && ((strcmp(backend_libs__type_ctor_info__str_1, backend_libs__type_ctor_info__HeadVar__2_2) == 0))))
#line 440 "type_ctor_info.m"
              {
#line 440 "type_ctor_info.m"
                /* we found a match; look up the results */
#line 440 "type_ctor_info.m"
                *backend_libs__type_ctor_info__HeadVar__4_4 = ((&backend_libs__type_ctor_info_vector_common_6[0 + backend_libs__type_ctor_info__slot_0]))->backend_libs__type_ctor_info__vector_common_type_6_0__vct_6_f_1;
#line 440 "type_ctor_info.m"
                backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 440 "type_ctor_info.m"
                /* jump out of search loop */
#line 440 "type_ctor_info.m"
                goto label_0;
#line 440 "type_ctor_info.m"
              }
#line 440 "type_ctor_info.m"
            backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 440 "type_ctor_info.m"
          label_0:;
#line 440 "type_ctor_info.m"
          }
#line 440 "type_ctor_info.m"
      }
#line 440 "type_ctor_info.m"
    else
#line 440 "type_ctor_info.m"
    if ((strcmp(backend_libs__type_ctor_info__HeadVar__1_1, (MR_String) "type_desc") == 0))
#line 440 "type_ctor_info.m"
      {
#line 455 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__HeadVar__3_3 == (MR_Integer) 0);
#line 440 "type_ctor_info.m"
        if (backend_libs__type_ctor_info__succeeded)
#line 440 "type_ctor_info.m"
          {
#line 440 "type_ctor_info.m"
            if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "type_desc") == 0))
#line 457 "type_ctor_info.m"
              {
#line 457 "type_ctor_info.m"
                *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
#line 457 "type_ctor_info.m"
                backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 457 "type_ctor_info.m"
              }
#line 440 "type_ctor_info.m"
            else
#line 440 "type_ctor_info.m"
            if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "type_ctor_desc") == 0))
#line 453 "type_ctor_info.m"
              {
#line 453 "type_ctor_info.m"
                *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 453 "type_ctor_info.m"
                backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 453 "type_ctor_info.m"
              }
#line 440 "type_ctor_info.m"
            else
#line 440 "type_ctor_info.m"
            if ((strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "pseudo_type_desc") == 0))
#line 455 "type_ctor_info.m"
              {
#line 455 "type_ctor_info.m"
                *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 455 "type_ctor_info.m"
                backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 455 "type_ctor_info.m"
              }
#line 440 "type_ctor_info.m"
            else
#line 440 "type_ctor_info.m"
              backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 440 "type_ctor_info.m"
          }
#line 440 "type_ctor_info.m"
      }
#line 440 "type_ctor_info.m"
    else
#line 440 "type_ctor_info.m"
    if ((strcmp(backend_libs__type_ctor_info__HeadVar__1_1, (MR_String) "private_builtin") == 0))
#line 452 "type_ctor_info.m"
      {
#line 452 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = (strcmp(backend_libs__type_ctor_info__HeadVar__2_2, (MR_String) "ref") == 0);
#line 452 "type_ctor_info.m"
        if (backend_libs__type_ctor_info__succeeded)
#line 452 "type_ctor_info.m"
          {
#line 452 "type_ctor_info.m"
            backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__HeadVar__3_3 == (MR_Integer) 1);
#line 452 "type_ctor_info.m"
            if (backend_libs__type_ctor_info__succeeded)
#line 452 "type_ctor_info.m"
              {
#line 452 "type_ctor_info.m"
                *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 452 "type_ctor_info.m"
                backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 452 "type_ctor_info.m"
              }
#line 452 "type_ctor_info.m"
          }
#line 452 "type_ctor_info.m"
      }
#line 440 "type_ctor_info.m"
    else
#line 440 "type_ctor_info.m"
      backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 440 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 440 "type_ctor_info.m"
  }
#line 434 "type_ctor_info.m"
}

#line 298 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_info_3_p_0(
#line 298 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtorGenInfo_4,
#line 298 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_5,
#line 298 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__RttiData_6)
#line 298 "type_ctor_info.m"
{
#line 301 "type_ctor_info.m"
  {
#line 301 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_95_95;
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_97_97;
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 0)));
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 1)));
#line 301 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 2)));
#line 301 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__TypeArity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 3)));
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__HldsDefn_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 5)));
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__UnifyPredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 6)));
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ComparePredProcId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 7)));
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__UnifyPredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__UnifyPredProcId_13, (MR_Integer) 0)));
#line 301 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__UnifyProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__UnifyPredProcId_13, (MR_Integer) 1)));
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__UnifyProcLabel_17;
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ComparePredId_18;
#line 301 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__CompareProcId_19;
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__CompareProcLabel_20;
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__UnifyUniv_21;
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__CompareUniv_22;
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeBody_23;
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Details_28;
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorData_74;
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83;
#line 301 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87;
#line 302 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info___Status_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_4, (MR_Integer) 4)));
#line 318 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_25_25;
#line 334 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__BuiltinCtor_27;
#line 330 "type_ctor_info.m"
    MR_String backend_libs__type_ctor_info__ModuleStr1_26;

#line 305 "type_ctor_info.m"
    {
#line 305 "type_ctor_info.m"
      backend_libs__type_ctor_info__UnifyProcLabel_17 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(backend_libs__type_ctor_info__ModuleInfo_5, backend_libs__type_ctor_info__UnifyPredId_15, backend_libs__type_ctor_info__UnifyProcId_16);
    }
#line 307 "type_ctor_info.m"
    backend_libs__type_ctor_info__ComparePredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ComparePredProcId_14, (MR_Integer) 0)));
#line 307 "type_ctor_info.m"
    backend_libs__type_ctor_info__CompareProcId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ComparePredProcId_14, (MR_Integer) 1)));
#line 308 "type_ctor_info.m"
    {
#line 308 "type_ctor_info.m"
      backend_libs__type_ctor_info__CompareProcLabel_20 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(backend_libs__type_ctor_info__ModuleInfo_5, backend_libs__type_ctor_info__ComparePredId_18, backend_libs__type_ctor_info__CompareProcId_19);
    }
#line 8368 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_95_95 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;
#line 310 "type_ctor_info.m"
    {
#line 310 "type_ctor_info.m"
      mercury__univ__type_to_univ_2_p_1(backend_libs__type_ctor_info__TypeCtorInfo_95_95, ((MR_Box) (backend_libs__type_ctor_info__UnifyProcLabel_17)), &backend_libs__type_ctor_info__UnifyUniv_21);
    }
#line 311 "type_ctor_info.m"
    {
#line 311 "type_ctor_info.m"
      mercury__univ__type_to_univ_2_p_1(backend_libs__type_ctor_info__TypeCtorInfo_95_95, ((MR_Box) (backend_libs__type_ctor_info__CompareProcLabel_20)), &backend_libs__type_ctor_info__CompareUniv_22);
    }
#line 312 "type_ctor_info.m"
    {
#line 312 "type_ctor_info.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__type_ctor_info__HldsDefn_12, &backend_libs__type_ctor_info__TypeBody_23);
    }
#line 318 "type_ctor_info.m"
    backend_libs__type_ctor_info__succeeded = ((((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 318 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 318 "type_ctor_info.m"
      {
#line 318 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 1)));
#line 319 "type_ctor_info.m"
        {
#line 319 "type_ctor_info.m"
          backend_libs__type_ctor_info__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(backend_libs__type_ctor_info__ModuleInfo_5);
        }
#line 319 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = !(backend_libs__type_ctor_info__succeeded);
#line 318 "type_ctor_info.m"
      }
#line 322 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 321 "type_ctor_info.m"
      {
#line 321 "type_ctor_info.m"
        {
#line 321 "type_ctor_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.construct_type_ctor_info\'/3", (MR_String) "abstract_type");
#line 321 "type_ctor_info.m"
          return;
        }
#line 321 "type_ctor_info.m"
      }
#line 322 "type_ctor_info.m"
    else
#line 323 "type_ctor_info.m"
      {
#line 323 "type_ctor_info.m"
      }
#line 330 "type_ctor_info.m"
    backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__ModuleName_8)) == (MR_mktag((MR_Integer) 0)));
#line 330 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 330 "type_ctor_info.m"
      {
#line 330 "type_ctor_info.m"
        backend_libs__type_ctor_info__ModuleStr1_26 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ModuleName_8, (MR_Integer) 0)));
#line 331 "type_ctor_info.m"
        {
#line 331 "type_ctor_info.m"
          backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__builtin_type_ctor_4_p_0(backend_libs__type_ctor_info__ModuleStr1_26, backend_libs__type_ctor_info__TypeName_9, backend_libs__type_ctor_info__TypeArity_10, &backend_libs__type_ctor_info__BuiltinCtor_27);
        }
#line 330 "type_ctor_info.m"
      }
#line 334 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 333 "type_ctor_info.m"
      {
#line 333 "type_ctor_info.m"
        backend_libs__type_ctor_info__Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "type_ctor_info.m"
        MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 333 "type_ctor_info.m"
        MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__BuiltinCtor_27));
#line 333 "type_ctor_info.m"
      }
#line 334 "type_ctor_info.m"
    else
#line 339 "type_ctor_info.m"
      {
#line 339 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ImplCtor_30;
#line 335 "type_ctor_info.m"
        MR_String backend_libs__type_ctor_info__ModuleStr_29;

#line 335 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__ModuleName_8)) == (MR_mktag((MR_Integer) 0)));
#line 335 "type_ctor_info.m"
        if (backend_libs__type_ctor_info__succeeded)
#line 335 "type_ctor_info.m"
          {
#line 335 "type_ctor_info.m"
            backend_libs__type_ctor_info__ModuleStr_29 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__ModuleName_8, (MR_Integer) 0)));
#line 336 "type_ctor_info.m"
            {
#line 336 "type_ctor_info.m"
              backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__impl_type_ctor_4_p_0(backend_libs__type_ctor_info__ModuleStr_29, backend_libs__type_ctor_info__TypeName_9, backend_libs__type_ctor_info__TypeArity_10, &backend_libs__type_ctor_info__ImplCtor_30);
            }
#line 335 "type_ctor_info.m"
          }
#line 339 "type_ctor_info.m"
        if (backend_libs__type_ctor_info__succeeded)
#line 338 "type_ctor_info.m"
          {
#line 338 "type_ctor_info.m"
            backend_libs__type_ctor_info__Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "type_ctor_info.m"
            MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 338 "type_ctor_info.m"
            MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__ImplCtor_30));
#line 338 "type_ctor_info.m"
          }
#line 339 "type_ctor_info.m"
        else
#line 343 "type_ctor_info.m"
#line 343 "type_ctor_info.m"
          switch (MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_23)) {
#line 343 "type_ctor_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 343 "type_ctor_info.m"
            case (MR_Integer) 0:
#line 356 "type_ctor_info.m"
              {
#line 356 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__ForeignBody_38 = (MR_Word) MR_body(((MR_Word) backend_libs__type_ctor_info__TypeBody_23), (MR_Integer) 0);
#line 356 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__Assertions_41;
#line 356 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__IsStable_42;
#line 357 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_39_39;
#line 357 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_40_40;
#line 360 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__TypeCtorInfo_96_96;
#line 360 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_79_79;

#line 357 "type_ctor_info.m"
                {
#line 357 "type_ctor_info.m"
                  backend_libs__foreign__foreign_type_body_to_exported_type_5_p_0(backend_libs__type_ctor_info__ModuleInfo_5, backend_libs__type_ctor_info__ForeignBody_38, &backend_libs__type_ctor_info__V_39_39, &backend_libs__type_ctor_info__V_40_40, &backend_libs__type_ctor_info__Assertions_41);
                }
#line 8515 "backend_libs.type_ctor_info.c"
                backend_libs__type_ctor_info__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;
#line 360 "type_ctor_info.m"
                {
#line 360 "type_ctor_info.m"
                  backend_libs__type_ctor_info__succeeded = mercury__list__member_2_p_0(backend_libs__type_ctor_info__TypeCtorInfo_96_96, ((MR_Box) ((MR_Integer) 0)), backend_libs__type_ctor_info__Assertions_41);
                }
#line 360 "type_ctor_info.m"
                if (backend_libs__type_ctor_info__succeeded)
#line 360 "type_ctor_info.m"
                  {
#line 361 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_79_79 = (MR_Integer) 1;
#line 361 "type_ctor_info.m"
                    {
#line 361 "type_ctor_info.m"
                      backend_libs__type_ctor_info__succeeded = mercury__list__member_2_p_0(backend_libs__type_ctor_info__TypeCtorInfo_96_96, ((MR_Box) (backend_libs__type_ctor_info__V_79_79)), backend_libs__type_ctor_info__Assertions_41);
                    }
#line 360 "type_ctor_info.m"
                  }
#line 364 "type_ctor_info.m"
                if (backend_libs__type_ctor_info__succeeded)
#line 363 "type_ctor_info.m"
                  backend_libs__type_ctor_info__IsStable_42 = (MR_Integer) 0;
#line 364 "type_ctor_info.m"
                else
#line 365 "type_ctor_info.m"
                  backend_libs__type_ctor_info__IsStable_42 = (MR_Integer) 1;
#line 367 "type_ctor_info.m"
                {
#line 367 "type_ctor_info.m"
                  backend_libs__type_ctor_info__Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 367 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__IsStable_42));
#line 367 "type_ctor_info.m"
                }
#line 356 "type_ctor_info.m"
              }
#line 343 "type_ctor_info.m"
              break;
#line 343 "type_ctor_info.m"
            case (MR_Integer) 1:
#line 379 "type_ctor_info.m"
              {
#line 379 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__Ctors_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)));
#line 379 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__ConsTagMap_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 1)));
#line 379 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__DuTypeKind_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 3)));
#line 379 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__MaybeUserEqComp_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 4)));
#line 379 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__ReservedTag_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 379 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__ReservedAddr_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 379 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__EqualityAxioms_54;
#line 377 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info___CheaperTagTest_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 2)));
#line 377 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info___MaybeDirectArgCtors_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 5)));
#line 377 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info___IsForeignType_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 7)));

#line 383 "type_ctor_info.m"
                if ((backend_libs__type_ctor_info__MaybeUserEqComp_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "type_ctor_info.m"
                  backend_libs__type_ctor_info__EqualityAxioms_54 = (MR_Integer) 0;
#line 383 "type_ctor_info.m"
                else
#line 382 "type_ctor_info.m"
                  backend_libs__type_ctor_info__EqualityAxioms_54 = (MR_Integer) 1;
#line 391 "type_ctor_info.m"
#line 391 "type_ctor_info.m"
                switch (MR_tag((MR_Word) backend_libs__type_ctor_info__DuTypeKind_47)) {
#line 391 "type_ctor_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 391 "type_ctor_info.m"
                  case (MR_Integer) 0:
#line 391 "type_ctor_info.m"
#line 391 "type_ctor_info.m"
                    switch (MR_unmkbody(backend_libs__type_ctor_info__DuTypeKind_47)) {
#line 391 "type_ctor_info.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 391 "type_ctor_info.m"
                      case (MR_Integer) 0:
#line 389 "type_ctor_info.m"
                        {
#line 389 "type_ctor_info.m"
                          backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(backend_libs__type_ctor_info__TypeCtor_7, backend_libs__type_ctor_info__Ctors_44, backend_libs__type_ctor_info__ConsTagMap_45, backend_libs__type_ctor_info__ReservedTag_50, backend_libs__type_ctor_info__EqualityAxioms_54, &backend_libs__type_ctor_info__Details_28);
                        }
#line 391 "type_ctor_info.m"
                        break;
#line 391 "type_ctor_info.m"
                      case (MR_Integer) 1:
#line 397 "type_ctor_info.m"
                        {
#line 397 "type_ctor_info.m"
                          backend_libs__type_ctor_info__make_mercury_enum_details_6_p_0(backend_libs__type_ctor_info__TypeCtor_7, backend_libs__type_ctor_info__Ctors_44, backend_libs__type_ctor_info__ConsTagMap_45, backend_libs__type_ctor_info__ReservedTag_50, backend_libs__type_ctor_info__EqualityAxioms_54, &backend_libs__type_ctor_info__Details_28);
                        }
#line 391 "type_ctor_info.m"
                        break;
#line 391 "type_ctor_info.m"
                      case (MR_Integer) 2:
#line 406 "type_ctor_info.m"
                        {
#line 406 "type_ctor_info.m"
                          backend_libs__type_ctor_info__make_du_details_8_p_0(backend_libs__type_ctor_info__TypeCtor_7, backend_libs__type_ctor_info__Ctors_44, backend_libs__type_ctor_info__ConsTagMap_45, backend_libs__type_ctor_info__TypeArity_10, backend_libs__type_ctor_info__EqualityAxioms_54, backend_libs__type_ctor_info__ReservedAddr_51, backend_libs__type_ctor_info__ModuleInfo_5, &backend_libs__type_ctor_info__Details_28);
                        }
#line 391 "type_ctor_info.m"
                        break;
#line 391 "type_ctor_info.m"
                    }
#line 391 "type_ctor_info.m"
                    break;
#line 391 "type_ctor_info.m"
                  case (MR_Integer) 1:
#line 392 "type_ctor_info.m"
                    {
#line 392 "type_ctor_info.m"
                      MR_Word backend_libs__type_ctor_info__Lang_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__DuTypeKind_47, (MR_Integer) 0)));

#line 393 "type_ctor_info.m"
                      {
#line 393 "type_ctor_info.m"
                        backend_libs__type_ctor_info__make_foreign_enum_details_7_p_0(backend_libs__type_ctor_info__TypeCtor_7, backend_libs__type_ctor_info__Lang_55, backend_libs__type_ctor_info__Ctors_44, backend_libs__type_ctor_info__ConsTagMap_45, backend_libs__type_ctor_info__ReservedTag_50, backend_libs__type_ctor_info__EqualityAxioms_54, &backend_libs__type_ctor_info__Details_28);
                      }
#line 392 "type_ctor_info.m"
                    }
#line 391 "type_ctor_info.m"
                    break;
#line 391 "type_ctor_info.m"
                  case (MR_Integer) 2:
#line 401 "type_ctor_info.m"
                    {
#line 401 "type_ctor_info.m"
                      MR_Word backend_libs__type_ctor_info__FunctorName_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__DuTypeKind_47, (MR_Integer) 0)));
#line 401 "type_ctor_info.m"
                      MR_Word backend_libs__type_ctor_info__ArgType_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__DuTypeKind_47, (MR_Integer) 1)));
#line 401 "type_ctor_info.m"
                      MR_Word backend_libs__type_ctor_info__MaybeArgName_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__DuTypeKind_47, (MR_Integer) 2)));

#line 402 "type_ctor_info.m"
                      {
#line 402 "type_ctor_info.m"
                        backend_libs__type_ctor_info__make_notag_details_6_p_0(backend_libs__type_ctor_info__TypeArity_10, backend_libs__type_ctor_info__FunctorName_56, backend_libs__type_ctor_info__ArgType_57, backend_libs__type_ctor_info__MaybeArgName_58, backend_libs__type_ctor_info__EqualityAxioms_54, &backend_libs__type_ctor_info__Details_28);
                      }
#line 401 "type_ctor_info.m"
                    }
#line 391 "type_ctor_info.m"
                    break;
#line 391 "type_ctor_info.m"
                }
#line 379 "type_ctor_info.m"
              }
#line 343 "type_ctor_info.m"
              break;
#line 343 "type_ctor_info.m"
            case (MR_Integer) 2:
#line 369 "type_ctor_info.m"
              {
#line 369 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__Type_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)));
#line 369 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__MaybePseudoTypeInfo_90;

#line 373 "type_ctor_info.m"
                {
#line 373 "type_ctor_info.m"
                  backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(backend_libs__type_ctor_info__Type_43, backend_libs__type_ctor_info__TypeArity_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__MaybePseudoTypeInfo_90);
                }
#line 375 "type_ctor_info.m"
                {
#line 375 "type_ctor_info.m"
                  backend_libs__type_ctor_info__Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 375 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__MaybePseudoTypeInfo_90));
#line 375 "type_ctor_info.m"
                }
#line 369 "type_ctor_info.m"
              }
#line 343 "type_ctor_info.m"
              break;
#line 343 "type_ctor_info.m"
            case (MR_Integer) 3:
#line 343 "type_ctor_info.m"
#line 343 "type_ctor_info.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)))) {
#line 343 "type_ctor_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 343 "type_ctor_info.m"
                case (MR_Integer) 0:
#line 347 "type_ctor_info.m"
                  {
#line 347 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__SolverTypeDetails_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 1)));
#line 347 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__RepnType_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SolverTypeDetails_32, (MR_Integer) 0)));
#line 347 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__MaybePseudoTypeInfo_37;
#line 347 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info___MaybeUserEqComp_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 2)));
#line 348 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SolverTypeDetails_32, (MR_Integer) 1)));
#line 348 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SolverTypeDetails_32, (MR_Integer) 2)));
#line 348 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SolverTypeDetails_32, (MR_Integer) 3)));
#line 348 "type_ctor_info.m"
                    MR_Word backend_libs__type_ctor_info__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SolverTypeDetails_32, (MR_Integer) 4)));

#line 352 "type_ctor_info.m"
                    {
#line 352 "type_ctor_info.m"
                      backend_libs__pseudo_type_info__construct_maybe_pseudo_type_info_4_p_0(backend_libs__type_ctor_info__RepnType_34, backend_libs__type_ctor_info__TypeArity_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__MaybePseudoTypeInfo_37);
                    }
#line 354 "type_ctor_info.m"
                    {
#line 354 "type_ctor_info.m"
                      backend_libs__type_ctor_info__Details_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "type_ctor_info.m"
                      MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 354 "type_ctor_info.m"
                      MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__Details_28, 1) = ((MR_Box) (backend_libs__type_ctor_info__MaybePseudoTypeInfo_37));
#line 354 "type_ctor_info.m"
                    }
#line 347 "type_ctor_info.m"
                  }
#line 343 "type_ctor_info.m"
                  break;
#line 343 "type_ctor_info.m"
                case (MR_Integer) 1:
#line 341 "type_ctor_info.m"
                  {
#line 342 "type_ctor_info.m"
                    {
#line 342 "type_ctor_info.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.construct_type_ctor_info\'/3", (MR_String) "abstract_type");
#line 342 "type_ctor_info.m"
                      return;
                    }
#line 341 "type_ctor_info.m"
                  }
#line 343 "type_ctor_info.m"
                  break;
#line 343 "type_ctor_info.m"
              }
#line 343 "type_ctor_info.m"
              break;
#line 343 "type_ctor_info.m"
          }
#line 339 "type_ctor_info.m"
      }
#line 8773 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_97_97 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_type_ctor_flag_0;
#line 412 "type_ctor_info.m"
    {
#line 412 "type_ctor_info.m"
      backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83 = mercury__set__init_0_f_0(backend_libs__type_ctor_info__TypeCtorInfo_97_97);
    }
#line 422 "type_ctor_info.m"
#line 422 "type_ctor_info.m"
    switch (MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_23)) {
#line 422 "type_ctor_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 422 "type_ctor_info.m"
      case (MR_Integer) 0:
#line 424 "type_ctor_info.m"
        backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87 = backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83;
#line 422 "type_ctor_info.m"
        break;
#line 422 "type_ctor_info.m"
      case (MR_Integer) 1:
#line 414 "type_ctor_info.m"
        {
#line 414 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__BodyReservedTag_66 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 414 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85;
#line 414 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)));
#line 414 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 1)));
#line 414 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 2)));
#line 414 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 3)));
#line 414 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 4)));
#line 414 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 5)));
#line 414 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 414 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 7)));

#line 415 "type_ctor_info.m"
          {
#line 415 "type_ctor_info.m"
            mercury__set__insert_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_97_97, ((MR_Box) ((MR_Integer) 2)), backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83, &backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85);
          }
#line 419 "type_ctor_info.m"
#line 419 "type_ctor_info.m"
          switch (backend_libs__type_ctor_info__BodyReservedTag_66) {
#line 419 "type_ctor_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 419 "type_ctor_info.m"
            case (MR_Integer) 1:
#line 420 "type_ctor_info.m"
              backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87 = backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85;
#line 419 "type_ctor_info.m"
              break;
#line 419 "type_ctor_info.m"
            case (MR_Integer) 0:
#line 417 "type_ctor_info.m"
              {
#line 418 "type_ctor_info.m"
                {
#line 418 "type_ctor_info.m"
                  mercury__set__insert_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_97_97, ((MR_Box) ((MR_Integer) 0)), backend_libs__type_ctor_info__STATE_VARIABLE_Flags_85_85, &backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87);
                }
#line 417 "type_ctor_info.m"
              }
#line 419 "type_ctor_info.m"
              break;
#line 419 "type_ctor_info.m"
          }
#line 414 "type_ctor_info.m"
        }
#line 422 "type_ctor_info.m"
        break;
#line 422 "type_ctor_info.m"
      case (MR_Integer) 2:
#line 423 "type_ctor_info.m"
        backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87 = backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83;
#line 422 "type_ctor_info.m"
        break;
#line 422 "type_ctor_info.m"
      case (MR_Integer) 3:
#line 422 "type_ctor_info.m"
#line 422 "type_ctor_info.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_23, (MR_Integer) 0)))) {
#line 422 "type_ctor_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 422 "type_ctor_info.m"
          case (MR_Integer) 0:
#line 425 "type_ctor_info.m"
            backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87 = backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83;
#line 422 "type_ctor_info.m"
            break;
#line 422 "type_ctor_info.m"
          case (MR_Integer) 1:
#line 426 "type_ctor_info.m"
            backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87 = backend_libs__type_ctor_info__STATE_VARIABLE_Flags_83_83;
#line 422 "type_ctor_info.m"
            break;
#line 422 "type_ctor_info.m"
        }
#line 422 "type_ctor_info.m"
        break;
#line 422 "type_ctor_info.m"
    }
#line 429 "type_ctor_info.m"
    {
#line 429 "type_ctor_info.m"
      backend_libs__type_ctor_info__TypeCtorData_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 429 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 0) = ((MR_Box) ((MR_Integer) 15));
#line 429 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 1) = ((MR_Box) (backend_libs__type_ctor_info__ModuleName_8));
#line 429 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 2) = ((MR_Box) (backend_libs__type_ctor_info__TypeName_9));
#line 429 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeArity_10));
#line 429 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 4) = ((MR_Box) (backend_libs__type_ctor_info__UnifyUniv_21));
#line 429 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 5) = ((MR_Box) (backend_libs__type_ctor_info__CompareUniv_22));
#line 429 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 6) = ((MR_Box) (backend_libs__type_ctor_info__STATE_VARIABLE_Flags_87_87));
#line 429 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorData_74, 7) = ((MR_Box) (backend_libs__type_ctor_info__Details_28));
#line 429 "type_ctor_info.m"
    }
#line 432 "type_ctor_info.m"
    *backend_libs__type_ctor_info__RttiData_6 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) backend_libs__type_ctor_info__TypeCtorData_74);
#line 301 "type_ctor_info.m"
  }
#line 298 "type_ctor_info.m"
}

#line 284 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__construct_type_ctor_infos_6_p_0(
#line 284 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 284 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 284 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0_3,
#line 284 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_4,
#line 284 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Static_0_5,
#line 284 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__STATE_VARIABLE_Static_6)
#line 284 "type_ctor_info.m"
{
#line 289 "type_ctor_info.m"
  while (MR_TRUE)
#line 289 "type_ctor_info.m"
    {
#line 289 "type_ctor_info.m"
      /* tailcall optimized into a loop */
#line 289 "type_ctor_info.m"
      {
#line 289 "type_ctor_info.m"
        MR_bool backend_libs__type_ctor_info__succeeded;

#line 289 "type_ctor_info.m"
        if ((backend_libs__type_ctor_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 289 "type_ctor_info.m"
          {
#line 289 "type_ctor_info.m"
            *backend_libs__type_ctor_info__STATE_VARIABLE_Static_6 = backend_libs__type_ctor_info__STATE_VARIABLE_Static_0_5;
#line 289 "type_ctor_info.m"
            *backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_4 = backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0_3;
#line 289 "type_ctor_info.m"
          }
#line 289 "type_ctor_info.m"
        else
#line 291 "type_ctor_info.m"
          {
#line 291 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TypeCtorGenInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 0)));
#line 291 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TypeCtorGenInfos_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__1_1, (MR_Integer) 1)));
#line 291 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TypeCtorCModule_19;
#line 291 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_24_24;

#line 292 "type_ctor_info.m"
            {
#line 292 "type_ctor_info.m"
              backend_libs__type_ctor_info__construct_type_ctor_info_3_p_0(backend_libs__type_ctor_info__TypeCtorGenInfo_14, backend_libs__type_ctor_info__HeadVar__2_2, &backend_libs__type_ctor_info__TypeCtorCModule_19);
            }
#line 293 "type_ctor_info.m"
            {
#line 293 "type_ctor_info.m"
              backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "type_ctor_info.m"
              MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_24_24, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtorCModule_19));
#line 293 "type_ctor_info.m"
              MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_24_24, 1) = ((MR_Box) (backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0_3));
#line 293 "type_ctor_info.m"
            }
#line 294 "type_ctor_info.m"
            /* direct tailcall eliminated */
#line 294 "type_ctor_info.m"
            {
#line 294 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__HeadVar__1__tmp_copy_1 = backend_libs__type_ctor_info__TypeCtorGenInfos_15;
#line 294 "type_ctor_info.m"
              MR_Word backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0__tmp_copy_3 = backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_24_24;

#line 294 "type_ctor_info.m"
              backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0_3 = backend_libs__type_ctor_info__STATE_VARIABLE_Dynamic_0__tmp_copy_3;
#line 294 "type_ctor_info.m"
              backend_libs__type_ctor_info__HeadVar__1_1 = backend_libs__type_ctor_info__HeadVar__1__tmp_copy_1;
#line 294 "type_ctor_info.m"
            }
#line 294 "type_ctor_info.m"
            continue;
#line 291 "type_ctor_info.m"
          }
#line 289 "type_ctor_info.m"
      }
#line 289 "type_ctor_info.m"
      break;
#line 289 "type_ctor_info.m"
    }
#line 284 "type_ctor_info.m"
}

#line 232 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_info_7_p_0(
#line 232 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_8,
#line 232 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeCtor_9,
#line 232 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleName_10,
#line 232 "type_ctor_info.m"
  MR_String backend_libs__type_ctor_info__TypeName_11,
#line 232 "type_ctor_info.m"
  MR_Integer backend_libs__type_ctor_info__TypeArity_12,
#line 232 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__TypeDefn_13,
#line 232 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__TypeCtorGenInfo_14)
#line 232 "type_ctor_info.m"
{
#line 237 "type_ctor_info.m"
  {
#line 237 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 237 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Status_15;
#line 237 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Globals_16;
#line 237 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__SpecMaps_17;
#line 237 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__SpecialPreds_18;
#line 237 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Unify_25;
#line 237 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Compare_30;

#line 238 "type_ctor_info.m"
    {
#line 238 "type_ctor_info.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(backend_libs__type_ctor_info__TypeDefn_13, &backend_libs__type_ctor_info__Status_15);
    }
#line 239 "type_ctor_info.m"
    {
#line 239 "type_ctor_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__type_ctor_info__ModuleInfo_8, &backend_libs__type_ctor_info__Globals_16);
    }
#line 240 "type_ctor_info.m"
    {
#line 240 "type_ctor_info.m"
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(backend_libs__type_ctor_info__ModuleInfo_8, &backend_libs__type_ctor_info__SpecMaps_17);
    }
#line 241 "type_ctor_info.m"
    {
#line 241 "type_ctor_info.m"
      libs__globals__lookup_bool_option_3_p_0(backend_libs__type_ctor_info__Globals_16, (MR_Integer) 271, &backend_libs__type_ctor_info__SpecialPreds_18);
    }
#line 245 "type_ctor_info.m"
#line 245 "type_ctor_info.m"
    switch (backend_libs__type_ctor_info__SpecialPreds_18) {
#line 245 "type_ctor_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 245 "type_ctor_info.m"
      case (MR_Integer) 0:
#line 246 "type_ctor_info.m"
        {
#line 246 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__Body_19;
#line 246 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_35_35;
#line 248 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_43_43;
#line 248 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_44_44;
#line 248 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_45_45;
#line 248 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_46_46;
#line 248 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_47_47;
#line 248 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_48_48;
#line 248 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_49_49;
#line 248 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info__V_50_50;
#line 248 "type_ctor_info.m"
          MR_Word backend_libs__type_ctor_info___UserDefinedEquality_20;

#line 247 "type_ctor_info.m"
          {
#line 247 "type_ctor_info.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__type_ctor_info__TypeDefn_13, &backend_libs__type_ctor_info__Body_19);
          }
#line 248 "type_ctor_info.m"
          backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__Body_19)) == (MR_mktag((MR_Integer) 1)));
#line 248 "type_ctor_info.m"
          if (backend_libs__type_ctor_info__succeeded)
#line 248 "type_ctor_info.m"
            {
#line 248 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 0)));
#line 248 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 1)));
#line 248 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 2)));
#line 248 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 3)));
#line 248 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 4)));
#line 248 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 5)));
#line 248 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 248 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 248 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_19, (MR_Integer) 7)));
#line 248 "type_ctor_info.m"
              backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 248 "type_ctor_info.m"
              if (backend_libs__type_ctor_info__succeeded)
#line 248 "type_ctor_info.m"
                backend_libs__type_ctor_info___UserDefinedEquality_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__V_35_35, (MR_Integer) 0)));
#line 248 "type_ctor_info.m"
            }
#line 246 "type_ctor_info.m"
        }
#line 245 "type_ctor_info.m"
        break;
#line 245 "type_ctor_info.m"
      case (MR_Integer) 1:
#line 244 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 245 "type_ctor_info.m"
        break;
#line 245 "type_ctor_info.m"
    }
#line 262 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 251 "type_ctor_info.m"
      {
#line 251 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 251 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 251 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__UnifyMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_17, (MR_Integer) 0)));
#line 251 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__UnifyPredId_22;
#line 251 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__UnifyProcInt_23;
#line 251 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__UnifyProcId_24;
#line 251 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__CompareMap_26;
#line 251 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__ComparePredId_27;
#line 251 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__CompareProcInt_28;
#line 251 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__CompareProcId_29;
#line 251 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_17, (MR_Integer) 1)));
#line 251 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_17, (MR_Integer) 2)));
#line 251 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_17, (MR_Integer) 3)));
#line 252 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv0_UnifyPredId_22;
#line 257 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_54_54;
#line 257 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_55_55;
#line 257 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_56_56;
#line 258 "type_ctor_info.m"
        MR_Box backend_libs__type_ctor_info__conv1_ComparePredId_27;

#line 252 "type_ctor_info.m"
        {
#line 252 "type_ctor_info.m"
          mercury__map__lookup_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_57_57, backend_libs__type_ctor_info__TypeCtorInfo_58_58, backend_libs__type_ctor_info__UnifyMap_21, ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9)), &backend_libs__type_ctor_info__conv0_UnifyPredId_22);
        }
#line 252 "type_ctor_info.m"
        backend_libs__type_ctor_info__UnifyPredId_22 = ((MR_Word) backend_libs__type_ctor_info__conv0_UnifyPredId_22);
#line 253 "type_ctor_info.m"
        {
#line 253 "type_ctor_info.m"
          hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 0, &backend_libs__type_ctor_info__UnifyProcInt_23);
        }
#line 254 "type_ctor_info.m"
        {
#line 254 "type_ctor_info.m"
          hlds__hlds_pred__proc_id_to_int_2_p_1(&backend_libs__type_ctor_info__UnifyProcId_24, backend_libs__type_ctor_info__UnifyProcInt_23);
        }
#line 255 "type_ctor_info.m"
        {
#line 255 "type_ctor_info.m"
          backend_libs__type_ctor_info__Unify_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 255 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_25, 0) = ((MR_Box) (backend_libs__type_ctor_info__UnifyPredId_22));
#line 255 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_25, 1) = ((MR_Box) (backend_libs__type_ctor_info__UnifyProcId_24));
#line 255 "type_ctor_info.m"
        }
#line 257 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_17, (MR_Integer) 0)));
#line 257 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_17, (MR_Integer) 1)));
#line 257 "type_ctor_info.m"
        backend_libs__type_ctor_info__CompareMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_17, (MR_Integer) 2)));
#line 257 "type_ctor_info.m"
        backend_libs__type_ctor_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_17, (MR_Integer) 3)));
#line 258 "type_ctor_info.m"
        {
#line 258 "type_ctor_info.m"
          mercury__map__lookup_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_57_57, backend_libs__type_ctor_info__TypeCtorInfo_58_58, backend_libs__type_ctor_info__CompareMap_26, ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9)), &backend_libs__type_ctor_info__conv1_ComparePredId_27);
        }
#line 258 "type_ctor_info.m"
        backend_libs__type_ctor_info__ComparePredId_27 = ((MR_Word) backend_libs__type_ctor_info__conv1_ComparePredId_27);
#line 259 "type_ctor_info.m"
        {
#line 259 "type_ctor_info.m"
          hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 2, &backend_libs__type_ctor_info__CompareProcInt_28);
        }
#line 260 "type_ctor_info.m"
        {
#line 260 "type_ctor_info.m"
          hlds__hlds_pred__proc_id_to_int_2_p_1(&backend_libs__type_ctor_info__CompareProcId_29, backend_libs__type_ctor_info__CompareProcInt_28);
        }
#line 261 "type_ctor_info.m"
        {
#line 261 "type_ctor_info.m"
          backend_libs__type_ctor_info__Compare_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 261 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Compare_30, 0) = ((MR_Box) (backend_libs__type_ctor_info__ComparePredId_27));
#line 261 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Compare_30, 1) = ((MR_Box) (backend_libs__type_ctor_info__CompareProcId_29));
#line 261 "type_ctor_info.m"
        }
#line 251 "type_ctor_info.m"
      }
#line 262 "type_ctor_info.m"
    else
#line 264 "type_ctor_info.m"
      {
#line 264 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__PredId_31;
#line 264 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__ProcId_32;
#line 264 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_38_38;

#line 263 "type_ctor_info.m"
        {
#line 263 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_38_38 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        }
#line 263 "type_ctor_info.m"
        {
#line 263 "type_ctor_info.m"
          hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(backend_libs__type_ctor_info__ModuleInfo_8, backend_libs__type_ctor_info__V_38_38, (MR_String) "unused", (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__PredId_31, &backend_libs__type_ctor_info__ProcId_32);
        }
#line 265 "type_ctor_info.m"
        {
#line 265 "type_ctor_info.m"
          backend_libs__type_ctor_info__Unify_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 265 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_25, 0) = ((MR_Box) (backend_libs__type_ctor_info__PredId_31));
#line 265 "type_ctor_info.m"
          MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_25, 1) = ((MR_Box) (backend_libs__type_ctor_info__ProcId_32));
#line 265 "type_ctor_info.m"
        }
#line 267 "type_ctor_info.m"
        backend_libs__type_ctor_info__Compare_30 = backend_libs__type_ctor_info__Unify_25;
#line 264 "type_ctor_info.m"
      }
#line 269 "type_ctor_info.m"
    {
#line 269 "type_ctor_info.m"
      MR_Word base;
#line 269 "type_ctor_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 269 "type_ctor_info.m"
      *backend_libs__type_ctor_info__TypeCtorGenInfo_14 = base;
#line 269 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9));
#line 269 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__ModuleName_10));
#line 269 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__type_ctor_info__TypeName_11));
#line 269 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeArity_12));
#line 269 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__type_ctor_info__Status_15));
#line 269 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__type_ctor_info__TypeDefn_13));
#line 269 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__type_ctor_info__Unify_25));
#line 269 "type_ctor_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__type_ctor_info__Compare_30));
#line 269 "type_ctor_info.m"
    }
#line 237 "type_ctor_info.m"
  }
#line 232 "type_ctor_info.m"
}

#line 208 "type_ctor_info.m"
static MR_bool MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0_1(
#line 208 "type_ctor_info.m"
  MR_Box backend_libs__type_ctor_info__closure_arg)
#line 208 "type_ctor_info.m"
{
#line 208 "type_ctor_info.m"
  {
#line 208 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 208 "type_ctor_info.m"
    MR_Box backend_libs__type_ctor_info__closure = backend_libs__type_ctor_info__closure_arg;

#line 208 "type_ctor_info.m"
    {
#line 208 "type_ctor_info.m"
      return backend_libs__type_ctor_info__succeeded = backend_libs__type_ctor_info__IntroducedFrom__pred__gen_builtin_type_ctor_gen_infos__208__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__closure, (MR_Integer) 4))));
    }
#line 208 "type_ctor_info.m"
    return backend_libs__type_ctor_info__succeeded;
#line 208 "type_ctor_info.m"
  }
#line 208 "type_ctor_info.m"
}

#line 197 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(
#line 197 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__1_1,
#line 197 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__2_2,
#line 197 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
#line 197 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4)
#line 197 "type_ctor_info.m"
{
#line 200 "type_ctor_info.m"
  {
#line 200 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 200 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "type_ctor_info.m"
      *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 200 "type_ctor_info.m"
    else
#line 202 "type_ctor_info.m"
      {
#line 202 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtor_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 0)));
#line 202 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtors_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 1)));
#line 202 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorGenInfo_11;
#line 202 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorGenInfos_12;
#line 202 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SymName_13;
#line 202 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__TypeArity_14;

#line 203 "type_ctor_info.m"
        {
#line 203 "type_ctor_info.m"
          backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(backend_libs__type_ctor_info__HeadVar__1_1, backend_libs__type_ctor_info__HeadVar__2_2, backend_libs__type_ctor_info__TypeCtors_10, &backend_libs__type_ctor_info__TypeCtorGenInfos_12);
        }
#line 205 "type_ctor_info.m"
        backend_libs__type_ctor_info__SymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtor_9, (MR_Integer) 0)));
#line 205 "type_ctor_info.m"
        backend_libs__type_ctor_info__TypeArity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtor_9, (MR_Integer) 1)));
#line 212 "type_ctor_info.m"
        if (((MR_tag((MR_Word) backend_libs__type_ctor_info__SymName_13)) == (MR_mktag((MR_Integer) 1))))
#line 207 "type_ctor_info.m"
          {
#line 207 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TypeModuleName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__SymName_13, (MR_Integer) 0)));
#line 207 "type_ctor_info.m"
            MR_String backend_libs__type_ctor_info__TypeName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__SymName_13, (MR_Integer) 1)));
#line 207 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_21_21;
#line 207 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_25_25;
#line 207 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TVarSet_29;
#line 207 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Kinds_31;
#line 207 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Context_35;
#line 207 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Status_50;
#line 207 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Globals_51;
#line 207 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__SpecMaps_52;
#line 207 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__SpecialPreds_53;
#line 207 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Unify_60;
#line 207 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__Compare_65;

#line 208 "type_ctor_info.m"
            {
#line 208 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 208 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_21_21, 0) = ((MR_Box) (&backend_libs__type_ctor_info_scalar_common_4[0]));
#line 208 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_21_21, 1) = ((MR_Box) (backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0_1));
#line 208 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 208 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_21_21, 3) = ((MR_Box) (backend_libs__type_ctor_info__HeadVar__2_2));
#line 208 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__V_21_21, 4) = ((MR_Box) (backend_libs__type_ctor_info__TypeModuleName_15));
#line 208 "type_ctor_info.m"
            }
#line 208 "type_ctor_info.m"
            {
#line 208 "type_ctor_info.m"
              mercury__require__expect_4_p_0(backend_libs__type_ctor_info__V_21_21, (MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.gen_builtin_type_ctor_gen_infos\'/4", (MR_String) "module mismatch");
            }
#line 222 "type_ctor_info.m"
            {
#line 222 "type_ctor_info.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &backend_libs__type_ctor_info__TVarSet_29);
            }
#line 224 "type_ctor_info.m"
            {
#line 224 "type_ctor_info.m"
              mercury__map__init_1_p_0((MR_Word) &backend_libs__type_ctor_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &backend_libs__type_ctor_info__Kinds_31);
            }
#line 228 "type_ctor_info.m"
            {
#line 228 "type_ctor_info.m"
              mercury__term__context_init_1_p_0(&backend_libs__type_ctor_info__Context_35);
            }
#line 229 "type_ctor_info.m"
            {
#line 229 "type_ctor_info.m"
              hlds__hlds_data__set_type_defn_10_p_0(backend_libs__type_ctor_info__TVarSet_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), backend_libs__type_ctor_info__Kinds_31, (MR_Word) MR_mkword(MR_mktag(3), &backend_libs__type_ctor_info_scalar_common_1[8]), (MR_Integer) 0, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))), (MR_Integer) 1, (MR_Integer) 0, backend_libs__type_ctor_info__Context_35, &backend_libs__type_ctor_info__V_25_25);
            }
#line 238 "type_ctor_info.m"
            {
#line 238 "type_ctor_info.m"
              hlds__hlds_data__get_type_defn_status_2_p_0(backend_libs__type_ctor_info__V_25_25, &backend_libs__type_ctor_info__Status_50);
            }
#line 239 "type_ctor_info.m"
            {
#line 239 "type_ctor_info.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__type_ctor_info__HeadVar__1_1, &backend_libs__type_ctor_info__Globals_51);
            }
#line 240 "type_ctor_info.m"
            {
#line 240 "type_ctor_info.m"
              hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(backend_libs__type_ctor_info__HeadVar__1_1, &backend_libs__type_ctor_info__SpecMaps_52);
            }
#line 241 "type_ctor_info.m"
            {
#line 241 "type_ctor_info.m"
              libs__globals__lookup_bool_option_3_p_0(backend_libs__type_ctor_info__Globals_51, (MR_Integer) 271, &backend_libs__type_ctor_info__SpecialPreds_53);
            }
#line 245 "type_ctor_info.m"
#line 245 "type_ctor_info.m"
            switch (backend_libs__type_ctor_info__SpecialPreds_53) {
#line 245 "type_ctor_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 245 "type_ctor_info.m"
              case (MR_Integer) 0:
#line 246 "type_ctor_info.m"
                {
#line 246 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__Body_54;
#line 246 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_70_70;
#line 248 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_78_78;
#line 248 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_79_79;
#line 248 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_80_80;
#line 248 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_81_81;
#line 248 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_82_82;
#line 248 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_83_83;
#line 248 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_84_84;
#line 248 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_85_85;
#line 248 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info___UserDefinedEquality_55;

#line 247 "type_ctor_info.m"
                  {
#line 247 "type_ctor_info.m"
                    hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__type_ctor_info__V_25_25, &backend_libs__type_ctor_info__Body_54);
                  }
#line 248 "type_ctor_info.m"
                  backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__Body_54)) == (MR_mktag((MR_Integer) 1)));
#line 248 "type_ctor_info.m"
                  if (backend_libs__type_ctor_info__succeeded)
#line 248 "type_ctor_info.m"
                    {
#line 248 "type_ctor_info.m"
                      backend_libs__type_ctor_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 0)));
#line 248 "type_ctor_info.m"
                      backend_libs__type_ctor_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 1)));
#line 248 "type_ctor_info.m"
                      backend_libs__type_ctor_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 2)));
#line 248 "type_ctor_info.m"
                      backend_libs__type_ctor_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 3)));
#line 248 "type_ctor_info.m"
                      backend_libs__type_ctor_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 4)));
#line 248 "type_ctor_info.m"
                      backend_libs__type_ctor_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 5)));
#line 248 "type_ctor_info.m"
                      backend_libs__type_ctor_info__V_83_83 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 248 "type_ctor_info.m"
                      backend_libs__type_ctor_info__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 248 "type_ctor_info.m"
                      backend_libs__type_ctor_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__Body_54, (MR_Integer) 7)));
#line 248 "type_ctor_info.m"
                      backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 248 "type_ctor_info.m"
                      if (backend_libs__type_ctor_info__succeeded)
#line 248 "type_ctor_info.m"
                        backend_libs__type_ctor_info___UserDefinedEquality_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__V_70_70, (MR_Integer) 0)));
#line 248 "type_ctor_info.m"
                    }
#line 246 "type_ctor_info.m"
                }
#line 245 "type_ctor_info.m"
                break;
#line 245 "type_ctor_info.m"
              case (MR_Integer) 1:
#line 244 "type_ctor_info.m"
                backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 245 "type_ctor_info.m"
                break;
#line 245 "type_ctor_info.m"
            }
#line 262 "type_ctor_info.m"
            if (backend_libs__type_ctor_info__succeeded)
#line 251 "type_ctor_info.m"
              {
#line 251 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__TypeCtorInfo_57_92 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 251 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__TypeCtorInfo_58_93 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 251 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__UnifyMap_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_52, (MR_Integer) 0)));
#line 251 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__UnifyPredId_57;
#line 251 "type_ctor_info.m"
                MR_Integer backend_libs__type_ctor_info__UnifyProcInt_58;
#line 251 "type_ctor_info.m"
                MR_Integer backend_libs__type_ctor_info__UnifyProcId_59;
#line 251 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__CompareMap_61;
#line 251 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__ComparePredId_62;
#line 251 "type_ctor_info.m"
                MR_Integer backend_libs__type_ctor_info__CompareProcInt_63;
#line 251 "type_ctor_info.m"
                MR_Integer backend_libs__type_ctor_info__CompareProcId_64;
#line 251 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_52, (MR_Integer) 1)));
#line 251 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_52, (MR_Integer) 2)));
#line 251 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_52, (MR_Integer) 3)));
#line 252 "type_ctor_info.m"
                MR_Box backend_libs__type_ctor_info__conv0_UnifyPredId_57;
#line 257 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_89_89;
#line 257 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_90_90;
#line 257 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_91_91;
#line 258 "type_ctor_info.m"
                MR_Box backend_libs__type_ctor_info__conv1_ComparePredId_62;

#line 252 "type_ctor_info.m"
                {
#line 252 "type_ctor_info.m"
                  mercury__map__lookup_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_57_92, backend_libs__type_ctor_info__TypeCtorInfo_58_93, backend_libs__type_ctor_info__UnifyMap_56, ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9)), &backend_libs__type_ctor_info__conv0_UnifyPredId_57);
                }
#line 252 "type_ctor_info.m"
                backend_libs__type_ctor_info__UnifyPredId_57 = ((MR_Word) backend_libs__type_ctor_info__conv0_UnifyPredId_57);
#line 253 "type_ctor_info.m"
                {
#line 253 "type_ctor_info.m"
                  hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 0, &backend_libs__type_ctor_info__UnifyProcInt_58);
                }
#line 254 "type_ctor_info.m"
                {
#line 254 "type_ctor_info.m"
                  hlds__hlds_pred__proc_id_to_int_2_p_1(&backend_libs__type_ctor_info__UnifyProcId_59, backend_libs__type_ctor_info__UnifyProcInt_58);
                }
#line 255 "type_ctor_info.m"
                {
#line 255 "type_ctor_info.m"
                  backend_libs__type_ctor_info__Unify_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 255 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_60, 0) = ((MR_Box) (backend_libs__type_ctor_info__UnifyPredId_57));
#line 255 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_60, 1) = ((MR_Box) (backend_libs__type_ctor_info__UnifyProcId_59));
#line 255 "type_ctor_info.m"
                }
#line 257 "type_ctor_info.m"
                backend_libs__type_ctor_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_52, (MR_Integer) 0)));
#line 257 "type_ctor_info.m"
                backend_libs__type_ctor_info__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_52, (MR_Integer) 1)));
#line 257 "type_ctor_info.m"
                backend_libs__type_ctor_info__CompareMap_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_52, (MR_Integer) 2)));
#line 257 "type_ctor_info.m"
                backend_libs__type_ctor_info__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SpecMaps_52, (MR_Integer) 3)));
#line 258 "type_ctor_info.m"
                {
#line 258 "type_ctor_info.m"
                  mercury__map__lookup_3_p_0(backend_libs__type_ctor_info__TypeCtorInfo_57_92, backend_libs__type_ctor_info__TypeCtorInfo_58_93, backend_libs__type_ctor_info__CompareMap_61, ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9)), &backend_libs__type_ctor_info__conv1_ComparePredId_62);
                }
#line 258 "type_ctor_info.m"
                backend_libs__type_ctor_info__ComparePredId_62 = ((MR_Word) backend_libs__type_ctor_info__conv1_ComparePredId_62);
#line 259 "type_ctor_info.m"
                {
#line 259 "type_ctor_info.m"
                  hlds__special_pred__special_pred_mode_num_2_p_0((MR_Integer) 2, &backend_libs__type_ctor_info__CompareProcInt_63);
                }
#line 260 "type_ctor_info.m"
                {
#line 260 "type_ctor_info.m"
                  hlds__hlds_pred__proc_id_to_int_2_p_1(&backend_libs__type_ctor_info__CompareProcId_64, backend_libs__type_ctor_info__CompareProcInt_63);
                }
#line 261 "type_ctor_info.m"
                {
#line 261 "type_ctor_info.m"
                  backend_libs__type_ctor_info__Compare_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 261 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Compare_65, 0) = ((MR_Box) (backend_libs__type_ctor_info__ComparePredId_62));
#line 261 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Compare_65, 1) = ((MR_Box) (backend_libs__type_ctor_info__CompareProcId_64));
#line 261 "type_ctor_info.m"
                }
#line 251 "type_ctor_info.m"
              }
#line 262 "type_ctor_info.m"
            else
#line 264 "type_ctor_info.m"
              {
#line 264 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__PredId_66;
#line 264 "type_ctor_info.m"
                MR_Integer backend_libs__type_ctor_info__ProcId_67;
#line 264 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__V_73_73;

#line 263 "type_ctor_info.m"
                {
#line 263 "type_ctor_info.m"
                  backend_libs__type_ctor_info__V_73_73 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                }
#line 263 "type_ctor_info.m"
                {
#line 263 "type_ctor_info.m"
                  hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(backend_libs__type_ctor_info__HeadVar__1_1, backend_libs__type_ctor_info__V_73_73, (MR_String) "unused", (MR_Integer) 0, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__PredId_66, &backend_libs__type_ctor_info__ProcId_67);
                }
#line 265 "type_ctor_info.m"
                {
#line 265 "type_ctor_info.m"
                  backend_libs__type_ctor_info__Unify_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 265 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_60, 0) = ((MR_Box) (backend_libs__type_ctor_info__PredId_66));
#line 265 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__Unify_60, 1) = ((MR_Box) (backend_libs__type_ctor_info__ProcId_67));
#line 265 "type_ctor_info.m"
                }
#line 267 "type_ctor_info.m"
                backend_libs__type_ctor_info__Compare_65 = backend_libs__type_ctor_info__Unify_60;
#line 264 "type_ctor_info.m"
              }
#line 269 "type_ctor_info.m"
            {
#line 269 "type_ctor_info.m"
              backend_libs__type_ctor_info__TypeCtorGenInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 269 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtor_9));
#line 269 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 1) = ((MR_Box) (backend_libs__type_ctor_info__TypeModuleName_15));
#line 269 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 2) = ((MR_Box) (backend_libs__type_ctor_info__TypeName_16));
#line 269 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 3) = ((MR_Box) (backend_libs__type_ctor_info__TypeArity_14));
#line 269 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 4) = ((MR_Box) (backend_libs__type_ctor_info__Status_50));
#line 269 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 5) = ((MR_Box) (backend_libs__type_ctor_info__V_25_25));
#line 269 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 6) = ((MR_Box) (backend_libs__type_ctor_info__Unify_60));
#line 269 "type_ctor_info.m"
              MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorGenInfo_11, 7) = ((MR_Box) (backend_libs__type_ctor_info__Compare_65));
#line 269 "type_ctor_info.m"
            }
#line 207 "type_ctor_info.m"
          }
#line 212 "type_ctor_info.m"
        else
#line 213 "type_ctor_info.m"
          {
#line 213 "type_ctor_info.m"
            MR_String backend_libs__type_ctor_info__V_19_19;
#line 213 "type_ctor_info.m"
            MR_String backend_libs__type_ctor_info__TypeName_26 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SymName_13, (MR_Integer) 0)));

#line 214 "type_ctor_info.m"
            {
#line 214 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "unqualified type ", backend_libs__type_ctor_info__TypeName_26);
            }
#line 214 "type_ctor_info.m"
            {
#line 214 "type_ctor_info.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.gen_builtin_type_ctor_gen_infos\'/4", backend_libs__type_ctor_info__V_19_19);
#line 214 "type_ctor_info.m"
              return;
            }
#line 213 "type_ctor_info.m"
          }
#line 202 "type_ctor_info.m"
        {
#line 202 "type_ctor_info.m"
          MR_Word base;
#line 202 "type_ctor_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "type_ctor_info.m"
          *backend_libs__type_ctor_info__HeadVar__4_4 = base;
#line 202 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtorGenInfo_11));
#line 202 "type_ctor_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtorGenInfos_12));
#line 202 "type_ctor_info.m"
        }
#line 202 "type_ctor_info.m"
      }
#line 200 "type_ctor_info.m"
  }
#line 197 "type_ctor_info.m"
}

#line 126 "type_ctor_info.m"
static void MR_CALL 
backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(
#line 126 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleInfo_1,
#line 126 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ModuleName_2,
#line 126 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__HeadVar__3_3,
#line 126 "type_ctor_info.m"
  MR_Word * backend_libs__type_ctor_info__HeadVar__4_4)
#line 126 "type_ctor_info.m"
{
#line 130 "type_ctor_info.m"
  {
#line 130 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;

#line 130 "type_ctor_info.m"
    if ((backend_libs__type_ctor_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "type_ctor_info.m"
      *backend_libs__type_ctor_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 130 "type_ctor_info.m"
    else
#line 132 "type_ctor_info.m"
      {
#line 132 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 0)));
#line 132 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorDefns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__HeadVar__3_3, (MR_Integer) 1)));
#line 132 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtorGenInfosTail_12;
#line 132 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeCtor_13;
#line 132 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__TypeDefn_14;
#line 132 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__SymName_15;
#line 132 "type_ctor_info.m"
        MR_Integer backend_libs__type_ctor_info__TypeArity_16;

#line 133 "type_ctor_info.m"
        {
#line 133 "type_ctor_info.m"
          backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(backend_libs__type_ctor_info__ModuleInfo_1, backend_libs__type_ctor_info__ModuleName_2, backend_libs__type_ctor_info__TypeCtorDefns_10, &backend_libs__type_ctor_info__TypeCtorGenInfosTail_12);
        }
#line 135 "type_ctor_info.m"
        backend_libs__type_ctor_info__TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorDefn_9, (MR_Integer) 0)));
#line 135 "type_ctor_info.m"
        backend_libs__type_ctor_info__TypeDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorDefn_9, (MR_Integer) 1)));
#line 136 "type_ctor_info.m"
        backend_libs__type_ctor_info__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtor_13, (MR_Integer) 0)));
#line 136 "type_ctor_info.m"
        backend_libs__type_ctor_info__TypeArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtor_13, (MR_Integer) 1)));
#line 150 "type_ctor_info.m"
        if (((MR_tag((MR_Word) backend_libs__type_ctor_info__SymName_15)) == (MR_mktag((MR_Integer) 1))))
#line 138 "type_ctor_info.m"
          {
#line 138 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TypeModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__SymName_15, (MR_Integer) 0)));
#line 138 "type_ctor_info.m"
            MR_String backend_libs__type_ctor_info__TypeName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__type_ctor_info__SymName_15, (MR_Integer) 1)));
#line 140 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__V_25_25;
#line 140 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TypeCtor_33;
#line 140 "type_ctor_info.m"
            MR_Word backend_libs__type_ctor_info__TypeBody_34;

#line 140 "type_ctor_info.m"
            {
#line 140 "type_ctor_info.m"
              backend_libs__type_ctor_info__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__type_ctor_info__TypeModuleName_17, backend_libs__type_ctor_info__ModuleName_2);
            }
#line 140 "type_ctor_info.m"
            if (backend_libs__type_ctor_info__succeeded)
#line 140 "type_ctor_info.m"
              {
#line 176 "type_ctor_info.m"
                backend_libs__type_ctor_info__TypeCtor_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorDefn_9, (MR_Integer) 0)));
#line 176 "type_ctor_info.m"
                backend_libs__type_ctor_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeCtorDefn_9, (MR_Integer) 1)));
#line 178 "type_ctor_info.m"
                {
#line 178 "type_ctor_info.m"
                  hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__type_ctor_info__V_25_25, &backend_libs__type_ctor_info__TypeBody_34);
                }
#line 180 "type_ctor_info.m"
                {
#line 180 "type_ctor_info.m"
                  MR_Word backend_libs__type_ctor_info__V_35_35;

#line 180 "type_ctor_info.m"
                  backend_libs__type_ctor_info__succeeded = ((((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeBody_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_34, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 180 "type_ctor_info.m"
                  if (backend_libs__type_ctor_info__succeeded)
#line 180 "type_ctor_info.m"
                    backend_libs__type_ctor_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__type_ctor_info__TypeBody_34, (MR_Integer) 1)));
#line 180 "type_ctor_info.m"
                }
#line 181 "type_ctor_info.m"
                if (!(backend_libs__type_ctor_info__succeeded))
#line 181 "type_ctor_info.m"
                  {
#line 181 "type_ctor_info.m"
                    backend_libs__type_ctor_info__succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(backend_libs__type_ctor_info__TypeCtor_33, backend_libs__type_ctor_info__TypeBody_34);
                  }
#line 193 "type_ctor_info.m"
                if (backend_libs__type_ctor_info__succeeded)
#line 186 "type_ctor_info.m"
                  {
#line 186 "type_ctor_info.m"
                    MR_String backend_libs__type_ctor_info__ModuleNameString_36;

#line 186 "type_ctor_info.m"
                    {
#line 186 "type_ctor_info.m"
                      backend_libs__type_ctor_info__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(backend_libs__type_ctor_info__ModuleInfo_1);
                    }
#line 186 "type_ctor_info.m"
                    if (backend_libs__type_ctor_info__succeeded)
#line 186 "type_ctor_info.m"
                      {
#line 187 "type_ctor_info.m"
                        backend_libs__type_ctor_info__succeeded = ((MR_tag((MR_Word) backend_libs__type_ctor_info__TypeModuleName_17)) == (MR_mktag((MR_Integer) 0)));
#line 187 "type_ctor_info.m"
                        if (backend_libs__type_ctor_info__succeeded)
#line 187 "type_ctor_info.m"
                          {
#line 187 "type_ctor_info.m"
                            backend_libs__type_ctor_info__ModuleNameString_36 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__TypeModuleName_17, (MR_Integer) 0)));
#line 440 "type_ctor_info.m"
                            if ((strcmp(backend_libs__type_ctor_info__ModuleNameString_36, (MR_String) "builtin") == 0))
#line 440 "type_ctor_info.m"
                              {
#line 440 "type_ctor_info.m"
                                MR_Integer backend_libs__type_ctor_info__slot_0;
#line 440 "type_ctor_info.m"
                                MR_String backend_libs__type_ctor_info__str_1;

#line 445 "type_ctor_info.m"
                                backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_16 == (MR_Integer) 0);
#line 440 "type_ctor_info.m"
                                if (backend_libs__type_ctor_info__succeeded)
#line 440 "type_ctor_info.m"
                                  {
#line 440 "type_ctor_info.m"
                                    /* hashed string simple lookup switch */
#line 440 "type_ctor_info.m"
                                    /* compute the hash value of the input string */
#line 440 "type_ctor_info.m"
                                    backend_libs__type_ctor_info__slot_0 = ((MR_hash_string5(backend_libs__type_ctor_info__TypeName_18)) & (MR_Integer) 31);
#line 440 "type_ctor_info.m"
                                    /* no collisions; no hash chain loop */
#line 440 "type_ctor_info.m"
                                    /* lookup the string for this hash slot */
#line 440 "type_ctor_info.m"
                                    backend_libs__type_ctor_info__str_1 = ((&backend_libs__type_ctor_info_vector_common_3[0 + backend_libs__type_ctor_info__slot_0]))->backend_libs__type_ctor_info__vector_common_type_3_0__vct_3_f_0;
#line 440 "type_ctor_info.m"
                                    /* did we find a match? */
#line 440 "type_ctor_info.m"
                                    if ((((backend_libs__type_ctor_info__str_1 != NULL)) && ((strcmp(backend_libs__type_ctor_info__str_1, backend_libs__type_ctor_info__TypeName_18) == 0))))
#line 440 "type_ctor_info.m"
                                      {
#line 440 "type_ctor_info.m"
                                        /* we found a match; look up the results */
#line 440 "type_ctor_info.m"
                                        backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 440 "type_ctor_info.m"
                                        /* jump out of search loop */
#line 440 "type_ctor_info.m"
                                        goto label_0;
#line 440 "type_ctor_info.m"
                                      }
#line 440 "type_ctor_info.m"
                                    backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 440 "type_ctor_info.m"
                                  label_0:;
#line 440 "type_ctor_info.m"
                                  }
#line 440 "type_ctor_info.m"
                              }
#line 440 "type_ctor_info.m"
                            else
#line 440 "type_ctor_info.m"
                            if ((strcmp(backend_libs__type_ctor_info__ModuleNameString_36, (MR_String) "type_desc") == 0))
#line 440 "type_ctor_info.m"
                              {
#line 455 "type_ctor_info.m"
                                backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_16 == (MR_Integer) 0);
#line 440 "type_ctor_info.m"
                                if (backend_libs__type_ctor_info__succeeded)
#line 440 "type_ctor_info.m"
                                  {
#line 440 "type_ctor_info.m"
                                    if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "type_desc") == 0))
#line 457 "type_ctor_info.m"
                                      backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 440 "type_ctor_info.m"
                                    else
#line 440 "type_ctor_info.m"
                                    if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "type_ctor_desc") == 0))
#line 453 "type_ctor_info.m"
                                      backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 440 "type_ctor_info.m"
                                    else
#line 440 "type_ctor_info.m"
                                    if ((strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "pseudo_type_desc") == 0))
#line 455 "type_ctor_info.m"
                                      backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 440 "type_ctor_info.m"
                                    else
#line 440 "type_ctor_info.m"
                                      backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 440 "type_ctor_info.m"
                                  }
#line 440 "type_ctor_info.m"
                              }
#line 440 "type_ctor_info.m"
                            else
#line 440 "type_ctor_info.m"
                            if ((strcmp(backend_libs__type_ctor_info__ModuleNameString_36, (MR_String) "private_builtin") == 0))
#line 452 "type_ctor_info.m"
                              {
#line 452 "type_ctor_info.m"
                                backend_libs__type_ctor_info__succeeded = (strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "ref") == 0);
#line 452 "type_ctor_info.m"
                                if (backend_libs__type_ctor_info__succeeded)
#line 452 "type_ctor_info.m"
                                  backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_16 == (MR_Integer) 1);
#line 452 "type_ctor_info.m"
                              }
#line 440 "type_ctor_info.m"
                            else
#line 440 "type_ctor_info.m"
                              backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 190 "type_ctor_info.m"
                            if (!(backend_libs__type_ctor_info__succeeded))
#line 462 "type_ctor_info.m"
                              {
#line 467 "type_ctor_info.m"
                                backend_libs__type_ctor_info__succeeded = (backend_libs__type_ctor_info__TypeArity_16 == (MR_Integer) 0);
#line 462 "type_ctor_info.m"
                                if (backend_libs__type_ctor_info__succeeded)
#line 462 "type_ctor_info.m"
                                  {
#line 462 "type_ctor_info.m"
                                    if ((strcmp(backend_libs__type_ctor_info__ModuleNameString_36, (MR_String) "table_builtin") == 0))
#line 476 "type_ctor_info.m"
                                      backend_libs__type_ctor_info__succeeded = (strcmp(backend_libs__type_ctor_info__TypeName_18, (MR_String) "ml_subgoal") == 0);
#line 462 "type_ctor_info.m"
                                    else
#line 462 "type_ctor_info.m"
                                    if ((strcmp(backend_libs__type_ctor_info__ModuleNameString_36, (MR_String) "private_builtin") == 0))
#line 462 "type_ctor_info.m"
                                      {
#line 462 "type_ctor_info.m"
                                        MR_Integer backend_libs__type_ctor_info__slot_2;
#line 462 "type_ctor_info.m"
                                        MR_String backend_libs__type_ctor_info__str_3;

#line 462 "type_ctor_info.m"
                                        /* hashed string simple lookup switch */
#line 462 "type_ctor_info.m"
                                        /* compute the hash value of the input string */
#line 462 "type_ctor_info.m"
                                        backend_libs__type_ctor_info__slot_2 = ((MR_hash_string6(backend_libs__type_ctor_info__TypeName_18)) & (MR_Integer) 31);
#line 462 "type_ctor_info.m"
                                        /* no collisions; no hash chain loop */
#line 462 "type_ctor_info.m"
                                        /* lookup the string for this hash slot */
#line 462 "type_ctor_info.m"
                                        backend_libs__type_ctor_info__str_3 = ((&backend_libs__type_ctor_info_vector_common_3[32 + backend_libs__type_ctor_info__slot_2]))->backend_libs__type_ctor_info__vector_common_type_3_0__vct_3_f_0;
#line 462 "type_ctor_info.m"
                                        /* did we find a match? */
#line 462 "type_ctor_info.m"
                                        if ((((backend_libs__type_ctor_info__str_3 != NULL)) && ((strcmp(backend_libs__type_ctor_info__str_3, backend_libs__type_ctor_info__TypeName_18) == 0))))
#line 462 "type_ctor_info.m"
                                          {
#line 462 "type_ctor_info.m"
                                            /* we found a match; look up the results */
#line 462 "type_ctor_info.m"
                                            backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 462 "type_ctor_info.m"
                                            /* jump out of search loop */
#line 462 "type_ctor_info.m"
                                            goto label_1;
#line 462 "type_ctor_info.m"
                                          }
#line 462 "type_ctor_info.m"
                                        backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 462 "type_ctor_info.m"
                                      label_1:;
#line 462 "type_ctor_info.m"
                                      }
#line 462 "type_ctor_info.m"
                                    else
#line 462 "type_ctor_info.m"
                                      backend_libs__type_ctor_info__succeeded = MR_FALSE;
#line 462 "type_ctor_info.m"
                                  }
#line 462 "type_ctor_info.m"
                              }
#line 187 "type_ctor_info.m"
                          }
#line 186 "type_ctor_info.m"
                      }
#line 186 "type_ctor_info.m"
                  }
#line 193 "type_ctor_info.m"
                else
#line 194 "type_ctor_info.m"
                  backend_libs__type_ctor_info__succeeded = MR_TRUE;
#line 140 "type_ctor_info.m"
                if (backend_libs__type_ctor_info__succeeded)
#line 141 "type_ctor_info.m"
                  {
#line 141 "type_ctor_info.m"
                    backend_libs__type_ctor_info__succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(backend_libs__type_ctor_info__TypeDefn_14, backend_libs__type_ctor_info__V_25_25);
                  }
#line 140 "type_ctor_info.m"
              }
#line 147 "type_ctor_info.m"
            if (backend_libs__type_ctor_info__succeeded)
#line 145 "type_ctor_info.m"
              {
#line 145 "type_ctor_info.m"
                MR_Word backend_libs__type_ctor_info__TypeCtorGenInfo_19;

#line 144 "type_ctor_info.m"
                {
#line 144 "type_ctor_info.m"
                  backend_libs__type_ctor_info__gen_type_ctor_gen_info_7_p_0(backend_libs__type_ctor_info__ModuleInfo_1, backend_libs__type_ctor_info__TypeCtor_13, backend_libs__type_ctor_info__TypeModuleName_17, backend_libs__type_ctor_info__TypeName_18, backend_libs__type_ctor_info__TypeArity_16, backend_libs__type_ctor_info__TypeDefn_14, &backend_libs__type_ctor_info__TypeCtorGenInfo_19);
                }
#line 146 "type_ctor_info.m"
                {
#line 146 "type_ctor_info.m"
                  MR_Word base;
#line 146 "type_ctor_info.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 146 "type_ctor_info.m"
                  *backend_libs__type_ctor_info__HeadVar__4_4 = base;
#line 146 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtorGenInfo_19));
#line 146 "type_ctor_info.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__type_ctor_info__TypeCtorGenInfosTail_12));
#line 146 "type_ctor_info.m"
                }
#line 145 "type_ctor_info.m"
              }
#line 147 "type_ctor_info.m"
            else
#line 148 "type_ctor_info.m"
              *backend_libs__type_ctor_info__HeadVar__4_4 = backend_libs__type_ctor_info__TypeCtorGenInfosTail_12;
#line 138 "type_ctor_info.m"
          }
#line 150 "type_ctor_info.m"
        else
#line 151 "type_ctor_info.m"
          {
#line 151 "type_ctor_info.m"
            MR_String backend_libs__type_ctor_info__V_22_22;
#line 151 "type_ctor_info.m"
            MR_String backend_libs__type_ctor_info__TypeName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__type_ctor_info__SymName_15, (MR_Integer) 0)));

#line 152 "type_ctor_info.m"
            {
#line 152 "type_ctor_info.m"
              backend_libs__type_ctor_info__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "unqualified type ", backend_libs__type_ctor_info__TypeName_24);
            }
#line 152 "type_ctor_info.m"
            {
#line 152 "type_ctor_info.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.type_ctor_info", (MR_String) "predicate \140backend_libs.type_ctor_info.gen_type_ctor_gen_infos\'/4", backend_libs__type_ctor_info__V_22_22);
#line 152 "type_ctor_info.m"
              return;
            }
#line 151 "type_ctor_info.m"
          }
#line 132 "type_ctor_info.m"
      }
#line 130 "type_ctor_info.m"
  }
#line 126 "type_ctor_info.m"
}

#line 59 "type_ctor_info.m"
MR_Integer MR_CALL 
backend_libs__type_ctor_info__compute_contains_var_bit_vector_1_f_0(
#line 59 "type_ctor_info.m"
  MR_Word backend_libs__type_ctor_info__ArgTypes_3)
#line 59 "type_ctor_info.m"
{
#line 1037 "type_ctor_info.m"
  {
#line 1037 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 1037 "type_ctor_info.m"
    MR_Integer backend_libs__type_ctor_info__Vector_4;

#line 1038 "type_ctor_info.m"
    {
#line 1038 "type_ctor_info.m"
      backend_libs__type_ctor_info__compute_contains_var_bit_vector_2_4_p_0(backend_libs__type_ctor_info__ArgTypes_3, (MR_Integer) 0, (MR_Integer) 0, &backend_libs__type_ctor_info__Vector_4);
    }
#line 1037 "type_ctor_info.m"
    return backend_libs__type_ctor_info__Vector_4;
#line 1037 "type_ctor_info.m"
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
#line 274 "type_ctor_info.m"
  {
#line 274 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 274 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorInfo_11_11;
#line 274 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorGenInfos_5;
#line 274 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Dynamic_6;
#line 274 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Static0_7;
#line 274 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__Static_8;

#line 275 "type_ctor_info.m"
    {
#line 275 "type_ctor_info.m"
      hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(backend_libs__type_ctor_info__ModuleInfo_3, &backend_libs__type_ctor_info__TypeCtorGenInfos_5);
    }
#line 276 "type_ctor_info.m"
    {
#line 276 "type_ctor_info.m"
      backend_libs__type_ctor_info__construct_type_ctor_infos_6_p_0(backend_libs__type_ctor_info__TypeCtorGenInfos_5, backend_libs__type_ctor_info__ModuleInfo_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__Dynamic_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__type_ctor_info__Static0_7);
    }
#line 10214 "backend_libs.type_ctor_info.c"
    backend_libs__type_ctor_info__TypeCtorInfo_11_11 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 281 "type_ctor_info.m"
    {
#line 281 "type_ctor_info.m"
      backend_libs__type_ctor_info__Static_8 = mercury__list__remove_dups_1_f_0(backend_libs__type_ctor_info__TypeCtorInfo_11_11, backend_libs__type_ctor_info__Static0_7);
    }
#line 282 "type_ctor_info.m"
    {
#line 282 "type_ctor_info.m"
      mercury__list__append_3_p_1(backend_libs__type_ctor_info__TypeCtorInfo_11_11, backend_libs__type_ctor_info__Dynamic_6, backend_libs__type_ctor_info__Static_8, backend_libs__type_ctor_info__Tables_4);
#line 282 "type_ctor_info.m"
      return;
    }
#line 274 "type_ctor_info.m"
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
#line 104 "type_ctor_info.m"
  {
#line 104 "type_ctor_info.m"
    MR_bool backend_libs__type_ctor_info__succeeded;
#line 104 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__ModuleName_4;
#line 104 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeTable_5;
#line 104 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__TypeCtorsDefns_6;
#line 104 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__LocalTypeCtorGenInfos_7;
#line 104 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__AllTypeCtorGenInfos_9;
#line 111 "type_ctor_info.m"
    MR_Word backend_libs__type_ctor_info__V_15_15;

#line 105 "type_ctor_info.m"
    {
#line 105 "type_ctor_info.m"
      hlds__hlds_module__module_info_get_name_2_p_0(backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10, &backend_libs__type_ctor_info__ModuleName_4);
    }
#line 106 "type_ctor_info.m"
    {
#line 106 "type_ctor_info.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10, &backend_libs__type_ctor_info__TypeTable_5);
    }
#line 107 "type_ctor_info.m"
    {
#line 107 "type_ctor_info.m"
      hlds__hlds_data__get_all_type_ctor_defns_2_p_0(backend_libs__type_ctor_info__TypeTable_5, &backend_libs__type_ctor_info__TypeCtorsDefns_6);
    }
#line 108 "type_ctor_info.m"
    {
#line 108 "type_ctor_info.m"
      backend_libs__type_ctor_info__gen_type_ctor_gen_infos_4_p_0(backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10, backend_libs__type_ctor_info__ModuleName_4, backend_libs__type_ctor_info__TypeCtorsDefns_6, &backend_libs__type_ctor_info__LocalTypeCtorGenInfos_7);
    }
#line 111 "type_ctor_info.m"
    {
#line 111 "type_ctor_info.m"
      backend_libs__type_ctor_info__V_15_15 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 111 "type_ctor_info.m"
    {
#line 111 "type_ctor_info.m"
      backend_libs__type_ctor_info__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__type_ctor_info__ModuleName_4, backend_libs__type_ctor_info__V_15_15);
    }
#line 111 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 112 "type_ctor_info.m"
      {
#line 112 "type_ctor_info.m"
        backend_libs__type_ctor_info__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10);
      }
#line 118 "type_ctor_info.m"
    if (backend_libs__type_ctor_info__succeeded)
#line 116 "type_ctor_info.m"
      {
#line 116 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__BuiltinTypeCtorGenInfos_8;
#line 116 "type_ctor_info.m"
        MR_Word backend_libs__type_ctor_info__V_12_12;

#line 115 "type_ctor_info.m"
        {
#line 115 "type_ctor_info.m"
          backend_libs__type_ctor_info__V_12_12 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
        }
#line 114 "type_ctor_info.m"
        {
#line 114 "type_ctor_info.m"
          backend_libs__type_ctor_info__gen_builtin_type_ctor_gen_infos_4_p_0(backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10, backend_libs__type_ctor_info__ModuleName_4, backend_libs__type_ctor_info__V_12_12, &backend_libs__type_ctor_info__BuiltinTypeCtorGenInfos_8);
        }
#line 117 "type_ctor_info.m"
        {
#line 117 "type_ctor_info.m"
          backend_libs__type_ctor_info__AllTypeCtorGenInfos_9 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_ctor_gen_info_0, backend_libs__type_ctor_info__BuiltinTypeCtorGenInfos_8, backend_libs__type_ctor_info__LocalTypeCtorGenInfos_7);
        }
#line 116 "type_ctor_info.m"
      }
#line 118 "type_ctor_info.m"
    else
#line 119 "type_ctor_info.m"
      backend_libs__type_ctor_info__AllTypeCtorGenInfos_9 = backend_libs__type_ctor_info__LocalTypeCtorGenInfos_7;
#line 121 "type_ctor_info.m"
    {
#line 121 "type_ctor_info.m"
      hlds__hlds_module__module_info_set_type_ctor_gen_infos_3_p_0(backend_libs__type_ctor_info__AllTypeCtorGenInfos_9, backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_0_10, backend_libs__type_ctor_info__STATE_VARIABLE_ModuleInfo_11);
#line 121 "type_ctor_info.m"
      return;
    }
#line 104 "type_ctor_info.m"
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
