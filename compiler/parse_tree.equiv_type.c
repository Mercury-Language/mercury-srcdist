/*
** Automatically generated from `equiv_type.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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


/* :- module parse_tree.equiv_type. */
/* :- implementation. */

/*
INIT mercury__parse_tree__equiv_type__init
ENDINIT
*/

#include "parse_tree.equiv_type.mih"


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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 137 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

#line 140 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 143 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 146 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 149 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 152 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0;

#line 155 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 158 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 161 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 164 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 167 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__maybe__ti_maybe_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 170 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 173 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 176 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 179 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[3];

#line 182 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0;

#line 185 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0[1];

#line 188 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0[1];

#line 191 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0[1];

#line 194 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0[1];

#line 197 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0;

#line 200 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

#line 203 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 206 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 209 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 212 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0[3];

#line 215 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0;

#line 218 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0[1];

#line 221 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0[1];

#line 224 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0[1];

#line 227 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0[1];

#line 230 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_0;

#line 233 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_1;

#line 236 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_2;

#line 239 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_eqv_type_location_0[3];

#line 242 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_eqv_type_location_0[3];

#line 245 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_location_0[3];

#line 248 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0;

#line 251 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1;

#line 254 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0[2];

#line 257 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2];

#line 260 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2];

#line 263 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____equiv_type_info_0_0_10001(
#line 266 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 268 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 271 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____equiv_type_info_0_0_10001(
#line 274 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 276 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 278 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 281 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
#line 284 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 286 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 289 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
#line 292 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 294 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 296 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 299 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_map_0_0_10001(
#line 302 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 304 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 307 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_map_0_0_10001(
#line 310 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 312 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 314 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 317 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_map_0_0_10001(
#line 320 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 322 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 325 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_map_0_0_10001(
#line 328 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 330 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 332 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 335 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
#line 338 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 340 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 343 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
#line 346 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 348 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 350 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 353 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_location_0_0_10001(
#line 356 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 358 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 361 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_location_0_0_10001(
#line 364 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 366 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 368 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 371 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____expanded_item_set_0_0_10001(
#line 374 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 376 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 379 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____expanded_item_set_0_0_10001(
#line 382 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 384 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 386 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 389 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
#line 392 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 394 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 397 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
#line 400 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 402 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 404 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 1411 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_20,
#line 1411 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_21,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_22,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_23,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_24,
#line 1411 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1411 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1411 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_0_50,
#line 1411 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_51,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1411 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1411 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1411 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33);

#line 1578 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0_1(
#line 1578 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1578 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1578 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2);

#line 1274 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1274 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1274 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_12,
#line 1274 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_13,
#line 1274 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1274 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1274 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1274 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1274 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29);

#line 1264 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1264 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_10,
#line 1264 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_11,
#line 1264 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1264 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1264 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1264 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1264 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);

#line 740 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 740 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 740 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 740 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 740 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 740 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 740 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 740 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 740 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 740 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 709 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_95_108_105_115_116_95_95_91_52_93_95_48_10_p_0(
#line 709 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 709 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 709 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_3,
#line 709 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 709 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 709 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 709 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 709 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 709 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 572 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 572 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 572 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 572 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 572 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 572 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 572 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 572 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 572 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 572 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 572 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 858 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 540 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 540 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 540 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 540 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 540 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 540 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 540 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 540 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 540 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 540 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 540 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 472 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 472 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 472 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 472 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 472 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 472 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_44,
#line 472 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_45,
#line 472 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_46,
#line 472 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_47,
#line 472 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 1374 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1374__1_1_f_0(
#line 1374 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_134);

#line 1367 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1367__1_1_f_0(
#line 1367 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_165);

#line 167 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
#line 167 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 167 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 167 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 167 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
#line 167 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 167 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 130 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_location_0_0(
#line 130 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 130 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 130 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 130 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_location_0_0(
#line 130 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 130 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 165 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_map_0_0(
#line 165 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 165 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 165 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 165 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_map_0_0(
#line 165 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 165 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 158 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
#line 158 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 158 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 158 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 158 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
#line 158 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 158 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 1580 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_2_3_p_0(
#line 1580 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ItemId_4,
#line 1580 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedItemSet0_5,
#line 1580 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExpandedItemSet_6);

#line 1578 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_3_p_0_1(
#line 1578 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1578 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1578 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2);

#line 1574 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_3_p_0(
#line 1574 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item_4,
#line 1574 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 1574 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7);

#line 1551 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1551 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1551 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 1551 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarset_3,
#line 1551 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1551 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1551 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 1551 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 1551 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__8_8,
#line 1551 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__9_9);

#line 1547 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1547 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1547 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1547 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1547 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1547 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1547 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1547 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1526 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1526 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1526 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 1526 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarset_12,
#line 1526 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1526 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1526 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1526 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1526 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1526 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22);

#line 1523 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1523 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1523 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1523 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1523 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1523 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1523 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1523 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1509 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1509 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1509 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 1509 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1509 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1509 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 1509 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 1509 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 1509 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 1509 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);

#line 1492 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tm_10_p_0(
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1492 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 1492 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 1492 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 1492 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);

#line 1489 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0_1(
#line 1489 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1489 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1489 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1489 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1489 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1489 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1489 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1489 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1489 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 1482 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0(
#line 1482 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 1482 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 1482 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17,
#line 1482 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TMs_18,
#line 1482 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1482 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1482 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1482 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1482 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1482 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 1374 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_2(
#line 1374 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1374 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1);

#line 1367 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1367 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1367 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1);

#line 1308 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_24,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_28,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_29,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Det_0_76,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Det_77,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_82);

#line 1578 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0_1(
#line 1578 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1578 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1578 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2);

#line 1190 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_19,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_20,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1190 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_45,
#line 1190 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_46,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_47,
#line 1190 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_48,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_49,
#line 1190 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_50,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_51,
#line 1190 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53,
#line 1190 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_54);

#line 1099 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_2_13_p_0(
#line 1099 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 1099 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_15,
#line 1099 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1099 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1099 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1099 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1099 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1099 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1099 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1099 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1099 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1099 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1099 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);

#line 1086 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_11_p_0(
#line 1086 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 1086 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 1086 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1086 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1086 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1086 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1086 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1086 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1086 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1086 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1086 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);

#line 1046 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1046 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 1046 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 1046 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 1046 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 1046 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13);

#line 1006 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);

#line 996 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 996 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 996 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 996 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 996 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 996 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 996 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 996 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 996 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 996 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 996 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 996 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 996 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 985 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 985 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 985 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 985 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_20,
#line 985 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_21,
#line 985 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 985 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 985 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 985 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 985 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 985 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 985 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 858 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 965 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 965 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 965 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 965 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 965 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 965 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_24,
#line 965 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_25,
#line 965 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 965 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 965 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 965 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29);

#line 962 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 955 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 955 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 955 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 955 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 955 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 955 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 955 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 955 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 955 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 955 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 955 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 934 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);

#line 892 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_method_11_p_0(
#line 892 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 892 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 892 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_14,
#line 892 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Method0_15,
#line 892 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Method_16,
#line 892 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_47,
#line 892 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_48,
#line 892 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 892 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 892 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_51,
#line 892 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_52);

#line 889 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
#line 889 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 889 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 889 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 889 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 889 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 889 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 889 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 889 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 889 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 881 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
#line 881 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 881 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassInterface0_13,
#line 881 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 881 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 881 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassInterface_16,
#line 881 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 881 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 881 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 881 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23,
#line 881 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24,
#line 881 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_25);

#line 867 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
#line 867 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 867 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 867 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Constraint0_13,
#line 867 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Constraint_14,
#line 867 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 867 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 867 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 867 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 867 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 867 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 858 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 851 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 851 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 851 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 851 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Cs_0_17,
#line 851 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Cs_18,
#line 851 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 851 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 851 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 851 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 851 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 851 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 858 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 837 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 837 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 837 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 837 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 837 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 837 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 837 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 837 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 837 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 837 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 837 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 816 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 816 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 816 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 816 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_3,
#line 816 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 816 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 816 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 816 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 816 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 816 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);

#line 775 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_15,
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_16,
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 775 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 775 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 775 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 775 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 775 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);

#line 691 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 691 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 691 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 691 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_12,
#line 691 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 691 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 691 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30,
#line 691 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31,
#line 691 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32,
#line 691 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33);

#line 674 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_info_11_p_0(
#line 674 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 674 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 674 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 674 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 674 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 674 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 674 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25,
#line 674 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_26,
#line 674 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 674 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28,
#line 674 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 858 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 508 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 445 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 445 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 445 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 445 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 445 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 445 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 445 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 445 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_48,
#line 445 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_49,
#line 445 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_50,
#line 445 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_51,
#line 445 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 409 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 346 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
#line 346 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 346 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 346 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 346 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 346 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item0_16,
#line 346 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Item_17,
#line 346 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45,
#line 346 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46,
#line 346 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47,
#line 346 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48,
#line 346 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 267 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_list_13_p_0(
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location0_2,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_4,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_5,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__6_6,
#line 267 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__7_7,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 267 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 267 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 267 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 206 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__skip_abstract_imported_items_2_p_0(
#line 206 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 206 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2);

#line 171 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_map_5_p_0(
#line 171 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 171 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2,
#line 171 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EqvMap_3,
#line 171 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4,
#line 171 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_5);

#line 962 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 858 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);


static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[34][2];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[3][13];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[1][14];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[1][6];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[2][5];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_7[2][12];




static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[34][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_2[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_1[1]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_1[0]))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "type after \140with_type\140."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[9])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "annotations are incompatible."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[9])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: the \140with_type\140 and \140with_inst\140"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: expected higher order "))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "inst after \140with_inst\140."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[9])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: circular equivalence type"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In type declaration for"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: expected higher order"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[0])),
    ((MR_Box) (parse_tree__equiv_type__replace_in_pred_type_23_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[1])),
    ((MR_Box) (parse_tree__equiv_type__replace_in_pred_type_23_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[3][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_7[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0))
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



#line 2219 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 2228 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2236 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0
  }
};

#line 2244 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 2253 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 2261 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0
  }
};

#line 2270 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2278 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 2287 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 2296 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 2305 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__maybe__ti_maybe_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 2313 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_equiv_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__equiv_type____Unify____equiv_type_info_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____equiv_type_info_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "equiv_type_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__maybe__ti_maybe_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2334 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2342 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2350 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2358 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 2365 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0 = {
  (MR_String) "eqv_inst_body",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0,
  NULL,
  NULL,
  NULL
};

#line 2380 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

#line 2385 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0
  }
};

#line 2394 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

#line 2399 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0[1] = {
  (MR_Integer) 0
};

#line 2404 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "eqv_inst_body",
  {
    parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0
  },
  {
    parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0
};

#line 2425 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0
  }
};

#line 2434 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__equiv_type____Unify____eqv_inst_map_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____eqv_inst_map_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "eqv_inst_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2455 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 2464 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__equiv_type____Unify____eqv_map_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____eqv_map_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "eqv_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2485 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2493 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2501 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2509 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2516 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0 = {
  (MR_String) "eqv_type_body",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0,
  NULL,
  NULL,
  NULL
};

#line 2531 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

#line 2536 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0
  }
};

#line 2545 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

#line 2550 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0[1] = {
  (MR_Integer) 0
};

#line 2555 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "eqv_type_body",
  {
    parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0
  },
  {
    parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0
};

#line 2576 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_0 = {
  (MR_String) "eqv_type_out_of_module",
  (MR_Integer) 0
};

#line 2582 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_1 = {
  (MR_String) "eqv_type_in_interface",
  (MR_Integer) 1
};

#line 2588 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_2 = {
  (MR_String) "eqv_type_in_implementation",
  (MR_Integer) 2
};

#line 2594 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_eqv_type_location_0[3] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_1,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_2
};

#line 2601 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_eqv_type_location_0[3] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_2,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_1,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_0
};

#line 2608 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_location_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2615 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__equiv_type____Unify____eqv_type_location_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____eqv_type_location_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "eqv_type_location",
  {
    parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_eqv_type_location_0
  },
  {
    parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_eqv_type_location_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_location_0
};

#line 2636 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_expanded_item_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__equiv_type____Unify____expanded_item_set_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____expanded_item_set_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "expanded_item_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2657 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0 = {
  (MR_String) "type_decl",
  (MR_Integer) 0
};

#line 2663 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1 = {
  (MR_String) "mode_decl",
  (MR_Integer) 1
};

#line 2669 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1
};

#line 2675 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0
};

#line 2681 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2687 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_pred_or_func_decl_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "pred_or_func_decl_type",
  {
    parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0
  },
  {
    parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0
};

#line 2708 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____equiv_type_info_0_0_10001(
#line 2711 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2713 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2715 "parse_tree.equiv_type.c"
{
#line 2717 "parse_tree.equiv_type.c"
  {
#line 2719 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2722 "parse_tree.equiv_type.c"
    {
#line 2724 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____equiv_type_info_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2727 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2729 "parse_tree.equiv_type.c"
  }
#line 2731 "parse_tree.equiv_type.c"
}

#line 2734 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____equiv_type_info_0_0_10001(
#line 2737 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2739 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2741 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2743 "parse_tree.equiv_type.c"
{
#line 2745 "parse_tree.equiv_type.c"
  {
#line 2747 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2750 "parse_tree.equiv_type.c"
    {
#line 2752 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____equiv_type_info_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2755 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2757 "parse_tree.equiv_type.c"
  }
#line 2759 "parse_tree.equiv_type.c"
}

#line 2762 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
#line 2765 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2767 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2769 "parse_tree.equiv_type.c"
{
#line 2771 "parse_tree.equiv_type.c"
  {
#line 2773 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2776 "parse_tree.equiv_type.c"
    {
#line 2778 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_inst_body_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2781 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2783 "parse_tree.equiv_type.c"
  }
#line 2785 "parse_tree.equiv_type.c"
}

#line 2788 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
#line 2791 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2793 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2795 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2797 "parse_tree.equiv_type.c"
{
#line 2799 "parse_tree.equiv_type.c"
  {
#line 2801 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2804 "parse_tree.equiv_type.c"
    {
#line 2806 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_inst_body_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2809 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2811 "parse_tree.equiv_type.c"
  }
#line 2813 "parse_tree.equiv_type.c"
}

#line 2816 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_map_0_0_10001(
#line 2819 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2821 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2823 "parse_tree.equiv_type.c"
{
#line 2825 "parse_tree.equiv_type.c"
  {
#line 2827 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2830 "parse_tree.equiv_type.c"
    {
#line 2832 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_inst_map_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2835 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2837 "parse_tree.equiv_type.c"
  }
#line 2839 "parse_tree.equiv_type.c"
}

#line 2842 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_map_0_0_10001(
#line 2845 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2847 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2849 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2851 "parse_tree.equiv_type.c"
{
#line 2853 "parse_tree.equiv_type.c"
  {
#line 2855 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2858 "parse_tree.equiv_type.c"
    {
#line 2860 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_inst_map_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2863 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2865 "parse_tree.equiv_type.c"
  }
#line 2867 "parse_tree.equiv_type.c"
}

#line 2870 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_map_0_0_10001(
#line 2873 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2875 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2877 "parse_tree.equiv_type.c"
{
#line 2879 "parse_tree.equiv_type.c"
  {
#line 2881 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2884 "parse_tree.equiv_type.c"
    {
#line 2886 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_map_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2889 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2891 "parse_tree.equiv_type.c"
  }
#line 2893 "parse_tree.equiv_type.c"
}

#line 2896 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_map_0_0_10001(
#line 2899 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2901 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2903 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2905 "parse_tree.equiv_type.c"
{
#line 2907 "parse_tree.equiv_type.c"
  {
#line 2909 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2912 "parse_tree.equiv_type.c"
    {
#line 2914 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_map_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2917 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2919 "parse_tree.equiv_type.c"
  }
#line 2921 "parse_tree.equiv_type.c"
}

#line 2924 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
#line 2927 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2929 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2931 "parse_tree.equiv_type.c"
{
#line 2933 "parse_tree.equiv_type.c"
  {
#line 2935 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2938 "parse_tree.equiv_type.c"
    {
#line 2940 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_type_body_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2943 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2945 "parse_tree.equiv_type.c"
  }
#line 2947 "parse_tree.equiv_type.c"
}

#line 2950 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
#line 2953 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2955 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2957 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2959 "parse_tree.equiv_type.c"
{
#line 2961 "parse_tree.equiv_type.c"
  {
#line 2963 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2966 "parse_tree.equiv_type.c"
    {
#line 2968 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_type_body_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2971 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2973 "parse_tree.equiv_type.c"
  }
#line 2975 "parse_tree.equiv_type.c"
}

#line 2978 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_location_0_0_10001(
#line 2981 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2983 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2985 "parse_tree.equiv_type.c"
{
#line 2987 "parse_tree.equiv_type.c"
  {
#line 2989 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2992 "parse_tree.equiv_type.c"
    {
#line 2994 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_type_location_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2997 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2999 "parse_tree.equiv_type.c"
  }
#line 3001 "parse_tree.equiv_type.c"
}

#line 3004 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_location_0_0_10001(
#line 3007 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 3009 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 3011 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 3013 "parse_tree.equiv_type.c"
{
#line 3015 "parse_tree.equiv_type.c"
  {
#line 3017 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 3020 "parse_tree.equiv_type.c"
    {
#line 3022 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_type_location_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 3025 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 3027 "parse_tree.equiv_type.c"
  }
#line 3029 "parse_tree.equiv_type.c"
}

#line 3032 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____expanded_item_set_0_0_10001(
#line 3035 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 3037 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 3039 "parse_tree.equiv_type.c"
{
#line 3041 "parse_tree.equiv_type.c"
  {
#line 3043 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 3046 "parse_tree.equiv_type.c"
    {
#line 3048 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____expanded_item_set_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 3051 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 3053 "parse_tree.equiv_type.c"
  }
#line 3055 "parse_tree.equiv_type.c"
}

#line 3058 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____expanded_item_set_0_0_10001(
#line 3061 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 3063 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 3065 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 3067 "parse_tree.equiv_type.c"
{
#line 3069 "parse_tree.equiv_type.c"
  {
#line 3071 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 3074 "parse_tree.equiv_type.c"
    {
#line 3076 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____expanded_item_set_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 3079 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 3081 "parse_tree.equiv_type.c"
  }
#line 3083 "parse_tree.equiv_type.c"
}

#line 3086 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
#line 3089 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 3091 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 3093 "parse_tree.equiv_type.c"
{
#line 3095 "parse_tree.equiv_type.c"
  {
#line 3097 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 3100 "parse_tree.equiv_type.c"
    {
#line 3102 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 3105 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 3107 "parse_tree.equiv_type.c"
  }
#line 3109 "parse_tree.equiv_type.c"
}

#line 3112 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
#line 3115 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 3117 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 3119 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 3121 "parse_tree.equiv_type.c"
{
#line 3123 "parse_tree.equiv_type.c"
  {
#line 3125 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 3128 "parse_tree.equiv_type.c"
    {
#line 3130 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 3133 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 3135 "parse_tree.equiv_type.c"
  }
#line 3137 "parse_tree.equiv_type.c"
}

#line 1411 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_20,
#line 1411 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_21,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_22,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_23,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_24,
#line 1411 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1411 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1411 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_0_50,
#line 1411 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_51,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1411 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1411 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1411 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1411 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33)
#line 1411 "equiv_type.m"
{
#line 1425 "equiv_type.m"
  {
#line 1425 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1425 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithInst0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1475 "equiv_type.m"
      {
#line 1476 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1477 "equiv_type.m"
        *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1478 "equiv_type.m"
        *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1479 "equiv_type.m"
        *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1479 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_0_50;
#line 1479 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52;
#line 1479 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1475 "equiv_type.m"
      }
#line 1425 "equiv_type.m"
    else
#line 1425 "equiv_type.m"
      {
#line 1425 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithInst0_28, (MR_Integer) 0)));
#line 1425 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_35;
#line 1425 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1450 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_39;
#line 1450 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes0_40;
#line 1450 "equiv_type.m"
        MR_Word parse_tree__equiv_type__DetPrime_42;
#line 1429 "equiv_type.m"
        MR_Word parse_tree__equiv_type__GroundInstInfo_37;
#line 1429 "equiv_type.m"
        MR_Word parse_tree__equiv_type__HOInst_38;
#line 1429 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_36_36;
#line 1431 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_41_41;

#line 1426 "equiv_type.m"
        {
#line 1426 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(parse_tree__equiv_type__WithInst0_34, parse_tree__equiv_type__EqvInstMap_24, &parse_tree__equiv_type__WithInst_35, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);
        }
#line 1429 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__WithInst_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1429 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1429 "equiv_type.m"
          {
#line 1429 "equiv_type.m"
            parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 1)));
#line 1429 "equiv_type.m"
            parse_tree__equiv_type__GroundInstInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 2)));
#line 1430 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__GroundInstInfo_37)) == (MR_mktag((MR_Integer) 1)));
#line 1430 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1430 "equiv_type.m"
              {
#line 1430 "equiv_type.m"
                parse_tree__equiv_type__HOInst_38 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__GroundInstInfo_37), (MR_Integer) 1);
#line 1431 "equiv_type.m"
                parse_tree__equiv_type__PredOrFunc_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 0)));
#line 1431 "equiv_type.m"
                parse_tree__equiv_type__ExtraModes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 1)));
#line 1431 "equiv_type.m"
                parse_tree__equiv_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 2)));
#line 1431 "equiv_type.m"
                parse_tree__equiv_type__DetPrime_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 3)));
#line 1433 "equiv_type.m"
                if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1432 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1433 "equiv_type.m"
                else
#line 1433 "equiv_type.m"
                  {
#line 1433 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));

#line 1433 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_39 == parse_tree__equiv_type__V_105_105);
#line 1433 "equiv_type.m"
                  }
#line 1430 "equiv_type.m"
              }
#line 1429 "equiv_type.m"
          }
#line 1450 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1436 "equiv_type.m"
          {
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RecordedPredOrFunc_43;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__OrigItemId_44;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_59_59;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_60_60;

#line 1436 "equiv_type.m"
            {
#line 1436 "equiv_type.m"
              MR_Word base;
#line 1436 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_51 = base;
#line 1436 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__DetPrime_42));
#line 1436 "equiv_type.m"
            }
#line 1437 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1438 "equiv_type.m"
            {
#line 1438 "equiv_type.m"
              MR_Word base;
#line 1438 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1438 "equiv_type.m"
              *parse_tree__equiv_type__MaybePredOrFunc_27 = base;
#line 1438 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_39));
#line 1438 "equiv_type.m"
            }
#line 1439 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = parse_tree__equiv_type__ExtraModes0_40;
#line 1443 "equiv_type.m"
            if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1442 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = (MR_Integer) 0;
#line 1443 "equiv_type.m"
            else
#line 1444 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));
#line 1446 "equiv_type.m"
            {
#line 1446 "equiv_type.m"
              parse_tree__equiv_type__V_59_59 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__RecordedPredOrFunc_43);
            }
#line 1447 "equiv_type.m"
            {
#line 1447 "equiv_type.m"
              parse_tree__equiv_type__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1447 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_20));
#line 1447 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_21));
#line 1447 "equiv_type.m"
            }
#line 1446 "equiv_type.m"
            {
#line 1446 "equiv_type.m"
              parse_tree__equiv_type__OrigItemId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1446 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 0) = ((MR_Box) (parse_tree__equiv_type__V_59_59));
#line 1446 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_60_60));
#line 1446 "equiv_type.m"
            }
#line 1448 "equiv_type.m"
            {
#line 1448 "equiv_type.m"
              parse_tree__equiv_type__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_44, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53);
            }
#line 1449 "equiv_type.m"
            *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1436 "equiv_type.m"
          }
#line 1450 "equiv_type.m"
        else
#line 1451 "equiv_type.m"
          {
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TypeCtorInfo_104_104;
#line 1451 "equiv_type.m"
            MR_String parse_tree__equiv_type__DeclStr_45;
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__PredOrFuncPieces_46;
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces_47;
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg_48;
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec_49;
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_64_64;
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_67_67;
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_68_68;
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_73_73;
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_74_74;
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_75_75;
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_76_76;
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_86_86;
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_93_93;
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_94_94;
#line 1451 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_98_98;

#line 1451 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1452 "equiv_type.m"
            *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1455 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1457 "equiv_type.m"
            if ((parse_tree__equiv_type__DeclType_23 == (MR_Integer) 1))
#line 1457 "equiv_type.m"
              parse_tree__equiv_type__DeclStr_45 = (MR_String) "mode declaration";
#line 1457 "equiv_type.m"
            else
#line 1456 "equiv_type.m"
              parse_tree__equiv_type__DeclStr_45 = (MR_String) "declaration";
#line 1462 "equiv_type.m"
            if ((*parse_tree__equiv_type__MaybePredOrFunc_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1461 "equiv_type.m"
              parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1462 "equiv_type.m"
            else
#line 1463 "equiv_type.m"
              {
#line 1463 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_62_62;
#line 1463 "equiv_type.m"
                MR_Word parse_tree__equiv_type__PredOrFunc_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__equiv_type__MaybePredOrFunc_27, (MR_Integer) 0)));

#line 1464 "equiv_type.m"
                {
#line 1464 "equiv_type.m"
                  parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1464 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_101));
#line 1464 "equiv_type.m"
                }
#line 1464 "equiv_type.m"
                {
#line 1464 "equiv_type.m"
                  parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 0) = ((MR_Box) (parse_tree__equiv_type__V_62_62));
#line 1464 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1464 "equiv_type.m"
                }
#line 1463 "equiv_type.m"
              }
#line 3450 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1466 "equiv_type.m"
            {
#line 1466 "equiv_type.m"
              parse_tree__equiv_type__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1466 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1466 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__DeclStr_45));
#line 1466 "equiv_type.m"
            }
#line 1466 "equiv_type.m"
            {
#line 1466 "equiv_type.m"
              parse_tree__equiv_type__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1466 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 0) = ((MR_Box) (parse_tree__equiv_type__V_68_68));
#line 1466 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[33])));
#line 1466 "equiv_type.m"
            }
#line 1466 "equiv_type.m"
            {
#line 1466 "equiv_type.m"
              parse_tree__equiv_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1466 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[31])));
#line 1466 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__V_67_67));
#line 1466 "equiv_type.m"
            }
#line 1467 "equiv_type.m"
            {
#line 1467 "equiv_type.m"
              parse_tree__equiv_type__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1467 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1467 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_20));
#line 1467 "equiv_type.m"
            }
#line 1467 "equiv_type.m"
            {
#line 1467 "equiv_type.m"
              parse_tree__equiv_type__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1467 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 0) = ((MR_Box) (parse_tree__equiv_type__V_76_76));
#line 1467 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[24])));
#line 1467 "equiv_type.m"
            }
#line 1468 "equiv_type.m"
            {
#line 1468 "equiv_type.m"
              parse_tree__equiv_type__V_86_86 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[26]));
            }
#line 1468 "equiv_type.m"
            {
#line 1468 "equiv_type.m"
              parse_tree__equiv_type__V_74_74 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_75_75, parse_tree__equiv_type__V_86_86);
            }
#line 1467 "equiv_type.m"
            {
#line 1467 "equiv_type.m"
              parse_tree__equiv_type__V_73_73 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, parse_tree__equiv_type__V_74_74);
            }
#line 1466 "equiv_type.m"
            {
#line 1466 "equiv_type.m"
              parse_tree__equiv_type__Pieces_47 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__V_73_73);
            }
#line 1470 "equiv_type.m"
            {
#line 1470 "equiv_type.m"
              parse_tree__equiv_type__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1470 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_94_94, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_47));
#line 1470 "equiv_type.m"
            }
#line 1470 "equiv_type.m"
            {
#line 1470 "equiv_type.m"
              parse_tree__equiv_type__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1470 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 0) = ((MR_Box) (parse_tree__equiv_type__V_94_94));
#line 1470 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1470 "equiv_type.m"
            }
#line 1470 "equiv_type.m"
            {
#line 1470 "equiv_type.m"
              parse_tree__equiv_type__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1470 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 0) = ((MR_Box) (parse_tree__equiv_type__Context_22));
#line 1470 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_93_93));
#line 1470 "equiv_type.m"
            }
#line 1471 "equiv_type.m"
            {
#line 1471 "equiv_type.m"
              parse_tree__equiv_type__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_48));
#line 1471 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1471 "equiv_type.m"
            }
#line 1471 "equiv_type.m"
            {
#line 1471 "equiv_type.m"
              parse_tree__equiv_type__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1471 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1471 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1471 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 2) = ((MR_Box) (parse_tree__equiv_type__V_98_98));
#line 1471 "equiv_type.m"
            }
#line 1472 "equiv_type.m"
            {
#line 1472 "equiv_type.m"
              MR_Word base;
#line 1472 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "equiv_type.m"
              *parse_tree__equiv_type__Specs_33 = base;
#line 1472 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_49));
#line 1472 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1472 "equiv_type.m"
            }
#line 1472 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1472 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_0_50;
#line 1451 "equiv_type.m"
          }
#line 1425 "equiv_type.m"
      }
#line 1425 "equiv_type.m"
  }
#line 1411 "equiv_type.m"
}

#line 1578 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0_1(
#line 1578 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1578 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1578 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2)
#line 1578 "equiv_type.m"
{
#line 1578 "equiv_type.m"
  {
#line 1578 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1578 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_ExpandedItemSet_6;

#line 1578 "equiv_type.m"
    {
#line 1578 "equiv_type.m"
      parse_tree__equiv_type__record_expanded_item_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv1_ExpandedItemSet_6);
    }
#line 1578 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv1_ExpandedItemSet_6));
#line 1578 "equiv_type.m"
  }
#line 1578 "equiv_type.m"
}

#line 1274 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1274 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1274 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_12,
#line 1274 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_13,
#line 1274 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1274 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1274 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1274 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1274 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29)
#line 1274 "equiv_type.m"
{
#line 1302 "equiv_type.m"
  while (MR_TRUE)
#line 1302 "equiv_type.m"
    {
#line 1302 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 1302 "equiv_type.m"
      {
#line 1302 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Inst0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1302 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SymName_17;
#line 1302 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ArgInsts_18;
#line 1282 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_30_30;

#line 1282 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1282 "equiv_type.m"
          {
#line 1282 "equiv_type.m"
            parse_tree__equiv_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_11, (MR_Integer) 1)));
#line 1282 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 1282 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1282 "equiv_type.m"
              {
#line 1282 "equiv_type.m"
                parse_tree__equiv_type__SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 0)));
#line 1282 "equiv_type.m"
                parse_tree__equiv_type__ArgInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 1)));
#line 1282 "equiv_type.m"
              }
#line 1282 "equiv_type.m"
          }
#line 1302 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1283 "equiv_type.m"
          {
#line 1283 "equiv_type.m"
            MR_Word parse_tree__equiv_type__InstId_19;
#line 1283 "equiv_type.m"
            MR_Integer parse_tree__equiv_type__V_31_31;

#line 1283 "equiv_type.m"
            {
#line 1283 "equiv_type.m"
              parse_tree__equiv_type__V_31_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__equiv_type__ArgInsts_18);
            }
#line 1283 "equiv_type.m"
            {
#line 1283 "equiv_type.m"
              parse_tree__equiv_type__InstId_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1283 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_17));
#line 1283 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 1) = ((MR_Box) (parse_tree__equiv_type__V_31_31));
#line 1283 "equiv_type.m"
            }
#line 1285 "equiv_type.m"
            {
#line 1285 "equiv_type.m"
              parse_tree__equiv_type__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, ((MR_Box) (parse_tree__equiv_type__InstId_19)), parse_tree__equiv_type__ExpandedInstIds_13);
            }
#line 1288 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1287 "equiv_type.m"
              {
#line 1287 "equiv_type.m"
                *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1287 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1287 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1287 "equiv_type.m"
              }
#line 1288 "equiv_type.m"
            else
#line 1299 "equiv_type.m"
              {
#line 1299 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstParams_22;
#line 1299 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInst_23;
#line 1289 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstBody_20;
#line 1289 "equiv_type.m"
                MR_Box parse_tree__equiv_type__conv0_EqvInstBody_20;
#line 1290 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_21_21;

#line 1289 "equiv_type.m"
                {
#line 1289 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, parse_tree__equiv_type__EqvInstMap_12, ((MR_Box) (parse_tree__equiv_type__InstId_19)), &parse_tree__equiv_type__conv0_EqvInstBody_20);
                }
#line 1289 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1289 "equiv_type.m"
                  {
#line 1289 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstBody_20 = ((MR_Word) parse_tree__equiv_type__conv0_EqvInstBody_20);
#line 1289 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1289 "equiv_type.m"
                  }
#line 1289 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1289 "equiv_type.m"
                  {
#line 1290 "equiv_type.m"
                    parse_tree__equiv_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 0)));
#line 1290 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstParams_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 1)));
#line 1290 "equiv_type.m"
                    parse_tree__equiv_type__EqvInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 2)));
#line 1290 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1289 "equiv_type.m"
                  }
#line 1299 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1292 "equiv_type.m"
                  {
#line 1292 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__TypeInfo_12_51;
#line 1292 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Inst1_24;
#line 1292 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__InstIdItem_25;
#line 1292 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_32_32;
#line 1292 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;
#line 1292 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_35_35;
#line 1292 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_47_47;

#line 1292 "equiv_type.m"
                    {
#line 1292 "equiv_type.m"
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(parse_tree__equiv_type__EqvInstParams_22, parse_tree__equiv_type__ArgInsts_18, parse_tree__equiv_type__EqvInst_23, &parse_tree__equiv_type__Inst1_24);
                    }
#line 1293 "equiv_type.m"
                    {
#line 1293 "equiv_type.m"
                      parse_tree__equiv_type__InstIdItem_25 = recompilation__inst_id_to_item_name_1_f_0(parse_tree__equiv_type__InstId_19);
                    }
#line 1294 "equiv_type.m"
                    {
#line 1294 "equiv_type.m"
                      parse_tree__equiv_type__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1294 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1294 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 1) = ((MR_Box) (parse_tree__equiv_type__InstIdItem_25));
#line 1294 "equiv_type.m"
                    }
#line 1578 "equiv_type.m"
                    {
#line 1578 "equiv_type.m"
                      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1578 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
#line 1578 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0_1));
#line 1578 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1578 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 3) = ((MR_Box) (parse_tree__equiv_type__V_32_32));
#line 1578 "equiv_type.m"
                    }
#line 3825 "parse_tree.equiv_type.c"
                    parse_tree__equiv_type__TypeInfo_12_51 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[0];
#line 1578 "equiv_type.m"
                    {
#line 1578 "equiv_type.m"
                      mercury__maybe__map_maybe_3_p_0(parse_tree__equiv_type__TypeInfo_12_51, parse_tree__equiv_type__TypeInfo_12_51, parse_tree__equiv_type__V_47_47, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33);
                    }
#line 1297 "equiv_type.m"
                    {
#line 1297 "equiv_type.m"
                      parse_tree__equiv_type__V_35_35 = mercury__set__insert_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, parse_tree__equiv_type__ExpandedInstIds_13, ((MR_Box) (parse_tree__equiv_type__InstId_19)));
                    }
#line 1296 "equiv_type.m"
                    /* direct tailcall eliminated */
#line 1296 "equiv_type.m"
                    {
#line 1296 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__Inst0__tmp_copy_11 = parse_tree__equiv_type__Inst1_24;
#line 1296 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__ExpandedInstIds__tmp_copy_13 = parse_tree__equiv_type__V_35_35;
#line 1296 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;

#line 1296 "equiv_type.m"
                      parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26;
#line 1296 "equiv_type.m"
                      parse_tree__equiv_type__ExpandedInstIds_13 = parse_tree__equiv_type__ExpandedInstIds__tmp_copy_13;
#line 1296 "equiv_type.m"
                      parse_tree__equiv_type__Inst0_11 = parse_tree__equiv_type__Inst0__tmp_copy_11;
#line 1296 "equiv_type.m"
                    }
#line 1296 "equiv_type.m"
                    continue;
#line 1292 "equiv_type.m"
                  }
#line 1299 "equiv_type.m"
                else
#line 1300 "equiv_type.m"
                  {
#line 1300 "equiv_type.m"
                    *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1300 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1300 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1300 "equiv_type.m"
                  }
#line 1299 "equiv_type.m"
              }
#line 1283 "equiv_type.m"
          }
#line 1302 "equiv_type.m"
        else
#line 1303 "equiv_type.m"
          {
#line 1303 "equiv_type.m"
            *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1303 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1303 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1303 "equiv_type.m"
          }
#line 1302 "equiv_type.m"
      }
#line 1302 "equiv_type.m"
      break;
#line 1302 "equiv_type.m"
    }
#line 1274 "equiv_type.m"
}

#line 1264 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1264 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_10,
#line 1264 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_11,
#line 1264 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1264 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1264 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1264 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1264 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18)
#line 1264 "equiv_type.m"
{
#line 1270 "equiv_type.m"
  {
#line 1270 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1270 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 1271 "equiv_type.m"
    {
#line 1271 "equiv_type.m"
      parse_tree__equiv_type__V_19_19 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1271 "equiv_type.m"
    {
#line 1271 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__Inst0_10, parse_tree__equiv_type__EqvInstMap_11, parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__Inst_12, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);
#line 1271 "equiv_type.m"
      return;
    }
#line 1270 "equiv_type.m"
  }
#line 1264 "equiv_type.m"
}

#line 740 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 740 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 740 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 740 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 740 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 740 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 740 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 740 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 740 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 740 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 740 "equiv_type.m"
{
#line 747 "equiv_type.m"
  {
#line 747 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 747 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 747 "equiv_type.m"
      {
#line 747 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 748 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 748 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 748 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 747 "equiv_type.m"
      }
#line 747 "equiv_type.m"
    else
#line 750 "equiv_type.m"
      {
#line 750 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 750 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 750 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr_24;
#line 750 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_25;
#line 750 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38;
#line 750 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__AttrNum_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 0)));
#line 750 "equiv_type.m"
        MR_String parse_tree__equiv_type__AttrName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 1)));
#line 750 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 2)));
#line 750 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrMode_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 3)));
#line 750 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeSynthCall_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 4)));
#line 750 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TVarSet0_61;
#line 750 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType_62;
#line 1093 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Changed_63;
#line 1093 "equiv_type.m"
        MR_Word parse_tree__equiv_type___TVarSet_64;
#line 1093 "equiv_type.m"
        MR_Word parse_tree__equiv_type___EquivTypeInfo_65;
#line 1093 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_84_84;

#line 768 "equiv_type.m"
        {
#line 768 "equiv_type.m"
          parse_tree__equiv_type__TVarSet0_61 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
        }
#line 1093 "equiv_type.m"
        {
#line 1093 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0((MR_Integer) 0, parse_tree__equiv_type__HeadVar__3_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__AttrType0_58, &parse_tree__equiv_type__AttrType_62, &parse_tree__equiv_type___Changed_63, &parse_tree__equiv_type__V_84_84, parse_tree__equiv_type__TVarSet0_61, &parse_tree__equiv_type___TVarSet_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type___EquivTypeInfo_65, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38);
        }
#line 772 "equiv_type.m"
        {
#line 772 "equiv_type.m"
          parse_tree__equiv_type__Attr_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 772 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 0) = ((MR_Box) (parse_tree__equiv_type__AttrNum_56));
#line 772 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 1) = ((MR_Box) (parse_tree__equiv_type__AttrName_57));
#line 772 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 2) = ((MR_Box) (parse_tree__equiv_type__AttrType_62));
#line 772 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 3) = ((MR_Box) (parse_tree__equiv_type__AttrMode_59));
#line 772 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeSynthCall_60));
#line 772 "equiv_type.m"
        }
#line 753 "equiv_type.m"
        {
#line 753 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__Attrs0_23, &parse_tree__equiv_type__Attrs_25, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9, parse_tree__equiv_type__STATE_VARIABLE_Specs_10);
        }
#line 749 "equiv_type.m"
        {
#line 749 "equiv_type.m"
          MR_Word base;
#line 749 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = base;
#line 749 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Attr_24));
#line 749 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Attrs_25));
#line 749 "equiv_type.m"
        }
#line 750 "equiv_type.m"
      }
#line 747 "equiv_type.m"
  }
#line 740 "equiv_type.m"
}

#line 709 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_95_108_105_115_116_95_95_91_52_93_95_48_10_p_0(
#line 709 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 709 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 709 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_3,
#line 709 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 709 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 709 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 709 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 709 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 709 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 709 "equiv_type.m"
{
#line 716 "equiv_type.m"
  {
#line 716 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 716 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 716 "equiv_type.m"
      {
#line 716 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 716 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 716 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 716 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 716 "equiv_type.m"
      }
#line 716 "equiv_type.m"
    else
#line 719 "equiv_type.m"
      {
#line 719 "equiv_type.m"
        MR_String parse_tree__equiv_type__Name_22;
#line 719 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec0_23;
#line 719 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 719 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec_25;
#line 719 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs_26;
#line 719 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 719 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_39_39;
#line 719 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40;
#line 719 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41;
#line 719 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42;
#line 719 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventNumber_59;
#line 719 "equiv_type.m"
        MR_String parse_tree__equiv_type__EventName_60;
#line 719 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventLineNumber_61;
#line 719 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_62;
#line 719 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SyntAttrNumOrder_63;
#line 719 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_64;

#line 718 "equiv_type.m"
        parse_tree__equiv_type__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 0)));
#line 718 "equiv_type.m"
        parse_tree__equiv_type__EventSpec0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 1)));
#line 733 "equiv_type.m"
        parse_tree__equiv_type__EventNumber_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 0)));
#line 733 "equiv_type.m"
        parse_tree__equiv_type__EventName_60 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 1)));
#line 733 "equiv_type.m"
        parse_tree__equiv_type__EventLineNumber_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 2)));
#line 733 "equiv_type.m"
        parse_tree__equiv_type__Attrs0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 3)));
#line 733 "equiv_type.m"
        parse_tree__equiv_type__SyntAttrNumOrder_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 4)));
#line 735 "equiv_type.m"
        {
#line 735 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__Attrs0_62, &parse_tree__equiv_type__Attrs_64, parse_tree__equiv_type__EqvMap_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9, &parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42);
        }
#line 737 "equiv_type.m"
        {
#line 737 "equiv_type.m"
          parse_tree__equiv_type__EventSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 737 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 0) = ((MR_Box) (parse_tree__equiv_type__EventNumber_59));
#line 737 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 1) = ((MR_Box) (parse_tree__equiv_type__EventName_60));
#line 737 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 2) = ((MR_Box) (parse_tree__equiv_type__EventLineNumber_61));
#line 737 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 3) = ((MR_Box) (parse_tree__equiv_type__Attrs_64));
#line 737 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 4) = ((MR_Box) (parse_tree__equiv_type__SyntAttrNumOrder_63));
#line 737 "equiv_type.m"
        }
#line 718 "equiv_type.m"
        {
#line 718 "equiv_type.m"
          parse_tree__equiv_type__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 718 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 0) = ((MR_Box) (parse_tree__equiv_type__Name_22));
#line 718 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 1) = ((MR_Box) (parse_tree__equiv_type__EventSpec_25));
#line 718 "equiv_type.m"
        }
#line 722 "equiv_type.m"
        {
#line 722 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_95_108_105_115_116_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__NameSpecs0_24, &parse_tree__equiv_type__NameSpecs_26, parse_tree__equiv_type__EqvMap_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8, parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42, parse_tree__equiv_type__STATE_VARIABLE_Specs_10);
        }
#line 718 "equiv_type.m"
        {
#line 718 "equiv_type.m"
          MR_Word base;
#line 718 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = base;
#line 718 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_39_39));
#line 718 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__NameSpecs_26));
#line 718 "equiv_type.m"
        }
#line 719 "equiv_type.m"
      }
#line 716 "equiv_type.m"
  }
#line 709 "equiv_type.m"
}

#line 572 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 572 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 572 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 572 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 572 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 572 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 572 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 572 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 572 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 572 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 572 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 572 "equiv_type.m"
{
#line 579 "equiv_type.m"
  {
#line 579 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 579 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_20;
#line 579 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma0_21;
#line 579 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_22;
#line 579 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_23;
#line 579 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma_41;

#line 579 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 580 "equiv_type.m"
    parse_tree__equiv_type__Origin_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 580 "equiv_type.m"
    parse_tree__equiv_type__Pragma0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 580 "equiv_type.m"
    parse_tree__equiv_type__Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 580 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 605 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Pragma0_21)) == (MR_mktag((MR_Integer) 2))))
#line 606 "equiv_type.m"
      {
#line 606 "equiv_type.m"
        MR_Word parse_tree__equiv_type__FPInfo0_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma0_21, (MR_Integer) 0)));
#line 606 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 0)));
#line 606 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 1)));
#line 606 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 2)));
#line 606 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ProcVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 3)));
#line 606 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ProcVarset_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 4)));
#line 606 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ProcInstVarset_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 5)));
#line 606 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ProcImpl_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 6)));
#line 606 "equiv_type.m"
        MR_Word parse_tree__equiv_type__UserSharing0_51;
#line 606 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_62;
#line 606 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemId_63;
#line 606 "equiv_type.m"
        MR_Word parse_tree__equiv_type__FPInfo_64;
#line 606 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 606 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104;
#line 606 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_108_108;
#line 606 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_109_109;
#line 626 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Sharing0_52;
#line 626 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Types0_54;
#line 626 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TVarset0_55;
#line 614 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeTypes0_53;
#line 614 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_101_101;

#line 610 "equiv_type.m"
        {
#line 610 "equiv_type.m"
          parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PName_44, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100);
        }
#line 612 "equiv_type.m"
        {
#line 612 "equiv_type.m"
          parse_tree__equiv_type__UserSharing0_51 = parse_tree__prog_data__get_user_annotated_sharing_1_f_0(parse_tree__equiv_type__Attrs0_43);
        }
#line 614 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__UserSharing0_51)) == (MR_mktag((MR_Integer) 1)));
#line 614 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 614 "equiv_type.m"
          {
#line 614 "equiv_type.m"
            parse_tree__equiv_type__Sharing0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 0)));
#line 614 "equiv_type.m"
            parse_tree__equiv_type__MaybeTypes0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 1)));
#line 615 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__MaybeTypes0_53)) == (MR_mktag((MR_Integer) 1)));
#line 615 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 615 "equiv_type.m"
              {
#line 615 "equiv_type.m"
                parse_tree__equiv_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes0_53, (MR_Integer) 0)));
#line 615 "equiv_type.m"
                parse_tree__equiv_type__Types0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 0)));
#line 615 "equiv_type.m"
                parse_tree__equiv_type__TVarset0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 1)));
#line 615 "equiv_type.m"
                parse_tree__equiv_type__succeeded = MR_TRUE;
#line 615 "equiv_type.m"
              }
#line 614 "equiv_type.m"
          }
#line 626 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 619 "equiv_type.m"
          {
#line 619 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Types_56;
#line 619 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TVarset_58;
#line 619 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Sharing_59;
#line 619 "equiv_type.m"
            MR_Word parse_tree__equiv_type__MaybeTypes_60;
#line 619 "equiv_type.m"
            MR_Word parse_tree__equiv_type__UserSharing_61;
#line 619 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102;
#line 619 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103;
#line 619 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_106_106;
#line 617 "equiv_type.m"
            MR_Word parse_tree__equiv_type___AnythingChanged_57;

#line 617 "equiv_type.m"
            {
#line 617 "equiv_type.m"
              parse_tree__equiv_type__replace_in_type_list_location_11_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__Types0_54, &parse_tree__equiv_type__Types_56, &parse_tree__equiv_type___AnythingChanged_57, parse_tree__equiv_type__TVarset0_55, &parse_tree__equiv_type__TVarset_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103);
            }
#line 620 "equiv_type.m"
            {
#line 620 "equiv_type.m"
              parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__Sharing0_52, &parse_tree__equiv_type__Sharing_59, parse_tree__equiv_type__TVarset0_55, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
            }
#line 623 "equiv_type.m"
            {
#line 623 "equiv_type.m"
              parse_tree__equiv_type__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 623 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 0) = ((MR_Box) (parse_tree__equiv_type__Types_56));
#line 623 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 1) = ((MR_Box) (parse_tree__equiv_type__TVarset_58));
#line 623 "equiv_type.m"
            }
#line 623 "equiv_type.m"
            {
#line 623 "equiv_type.m"
              parse_tree__equiv_type__MaybeTypes_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 623 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes_60, 0) = ((MR_Box) (parse_tree__equiv_type__V_106_106));
#line 623 "equiv_type.m"
            }
#line 624 "equiv_type.m"
            {
#line 624 "equiv_type.m"
              parse_tree__equiv_type__UserSharing_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 0) = ((MR_Box) (parse_tree__equiv_type__Sharing_59));
#line 624 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 1) = ((MR_Box) (parse_tree__equiv_type__MaybeTypes_60));
#line 624 "equiv_type.m"
            }
#line 625 "equiv_type.m"
            {
#line 625 "equiv_type.m"
              parse_tree__prog_data__set_user_annotated_sharing_3_p_0(parse_tree__equiv_type__UserSharing_61, parse_tree__equiv_type__Attrs0_43, &parse_tree__equiv_type__Attrs_62);
            }
#line 619 "equiv_type.m"
          }
#line 626 "equiv_type.m"
        else
#line 627 "equiv_type.m"
          {
#line 627 "equiv_type.m"
            parse_tree__equiv_type__Attrs_62 = parse_tree__equiv_type__Attrs0_43;
#line 627 "equiv_type.m"
            parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 627 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 627 "equiv_type.m"
          }
#line 630 "equiv_type.m"
        {
#line 630 "equiv_type.m"
          parse_tree__equiv_type__V_109_109 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_var_0, parse_tree__equiv_type__ProcVars_46);
        }
#line 629 "equiv_type.m"
        {
#line 629 "equiv_type.m"
          parse_tree__equiv_type__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 629 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 629 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (parse_tree__equiv_type__V_109_109));
#line 629 "equiv_type.m"
        }
#line 629 "equiv_type.m"
        {
#line 629 "equiv_type.m"
          parse_tree__equiv_type__ItemId_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 629 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 0) = ((MR_Box) ((MR_Integer) 9));
#line 629 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 629 "equiv_type.m"
        }
#line 631 "equiv_type.m"
        {
#line 631 "equiv_type.m"
          parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_63, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97);
        }
#line 634 "equiv_type.m"
        {
#line 634 "equiv_type.m"
          parse_tree__equiv_type__FPInfo_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 634 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 0) = ((MR_Box) (parse_tree__equiv_type__Attrs_62));
#line 634 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 1) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 634 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 2) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_45));
#line 634 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 3) = ((MR_Box) (parse_tree__equiv_type__ProcVars_46));
#line 634 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 4) = ((MR_Box) (parse_tree__equiv_type__ProcVarset_47));
#line 634 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 5) = ((MR_Box) (parse_tree__equiv_type__ProcInstVarset_48));
#line 634 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 6) = ((MR_Box) (parse_tree__equiv_type__ProcImpl_49));
#line 634 "equiv_type.m"
        }
#line 636 "equiv_type.m"
        {
#line 636 "equiv_type.m"
          parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "equiv_type.m"
          MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (parse_tree__equiv_type__FPInfo_64));
#line 636 "equiv_type.m"
        }
#line 606 "equiv_type.m"
      }
#line 605 "equiv_type.m"
    else
#line 605 "equiv_type.m"
      if (((((MR_tag((MR_Word) parse_tree__equiv_type__Pragma0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_21, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 582 "equiv_type.m"
        {
#line 582 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeSpecInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_21, (MR_Integer) 1)));
#line 582 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 0)));
#line 582 "equiv_type.m"
          MR_Word parse_tree__equiv_type__NewName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 1)));
#line 582 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 2)));
#line 582 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PorF_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 3)));
#line 582 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 4)));
#line 582 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Subst0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 5)));
#line 582 "equiv_type.m"
          MR_Word parse_tree__equiv_type__VarSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 6)));
#line 582 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemIds0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 7)));
#line 582 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ExpandedItems0_34;
#line 582 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Subst_35;
#line 582 "equiv_type.m"
          MR_Word parse_tree__equiv_type__VarSet_36;
#line 582 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ExpandedItems_37;
#line 582 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemIds_38;
#line 582 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeSpecInfo_40;

#line 586 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 587 "equiv_type.m"
          if (!(parse_tree__equiv_type__succeeded))
#line 587 "equiv_type.m"
            {
#line 587 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_115_115;
#line 587 "equiv_type.m"
              MR_String parse_tree__equiv_type__V_33_33;

#line 587 "equiv_type.m"
              parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__PredName_25)) == (MR_mktag((MR_Integer) 1)));
#line 587 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 587 "equiv_type.m"
                {
#line 587 "equiv_type.m"
                  parse_tree__equiv_type__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 0)));
#line 587 "equiv_type.m"
                  parse_tree__equiv_type__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 1)));
#line 587 "equiv_type.m"
                  {
#line 587 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__V_115_115);
                  }
#line 587 "equiv_type.m"
                }
#line 587 "equiv_type.m"
            }
#line 591 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 590 "equiv_type.m"
            parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 591 "equiv_type.m"
          else
#line 592 "equiv_type.m"
            {
#line 592 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_111_111;

#line 592 "equiv_type.m"
              {
#line 592 "equiv_type.m"
                parse_tree__equiv_type__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 592 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 592 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 1) = ((MR_Box) (parse_tree__equiv_type__ItemIds0_32));
#line 592 "equiv_type.m"
              }
#line 592 "equiv_type.m"
              {
#line 592 "equiv_type.m"
                parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 592 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems0_34, 0) = ((MR_Box) (parse_tree__equiv_type__V_111_111));
#line 592 "equiv_type.m"
              }
#line 592 "equiv_type.m"
            }
#line 594 "equiv_type.m"
          {
#line 594 "equiv_type.m"
            parse_tree__equiv_type__replace_in_subst_10_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__Subst0_30, &parse_tree__equiv_type__Subst_35, parse_tree__equiv_type__VarSet0_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__ExpandedItems0_34, &parse_tree__equiv_type__ExpandedItems_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
          }
#line 599 "equiv_type.m"
          if ((parse_tree__equiv_type__ExpandedItems_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 598 "equiv_type.m"
            parse_tree__equiv_type__ItemIds_38 = parse_tree__equiv_type__ItemIds0_32;
#line 599 "equiv_type.m"
          else
#line 600 "equiv_type.m"
            {
#line 600 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems_37, (MR_Integer) 0)));
#line 600 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 0)));

#line 600 "equiv_type.m"
              parse_tree__equiv_type__ItemIds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 1)));
#line 600 "equiv_type.m"
            }
#line 602 "equiv_type.m"
          {
#line 602 "equiv_type.m"
            parse_tree__equiv_type__TypeSpecInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 602 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 602 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 1) = ((MR_Box) (parse_tree__equiv_type__NewName_26));
#line 602 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 2) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 602 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 3) = ((MR_Box) (parse_tree__equiv_type__PorF_28));
#line 602 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 4) = ((MR_Box) (parse_tree__equiv_type__Modes_29));
#line 602 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 5) = ((MR_Box) (parse_tree__equiv_type__Subst_35));
#line 602 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 6) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 602 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 7) = ((MR_Box) (parse_tree__equiv_type__ItemIds_38));
#line 602 "equiv_type.m"
          }
#line 604 "equiv_type.m"
          {
#line 604 "equiv_type.m"
            parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "equiv_type.m"
            MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 604 "equiv_type.m"
            MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 1) = ((MR_Box) (parse_tree__equiv_type__TypeSpecInfo_40));
#line 604 "equiv_type.m"
          }
#line 604 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 582 "equiv_type.m"
        }
#line 605 "equiv_type.m"
      else
#line 669 "equiv_type.m"
        {
#line 670 "equiv_type.m"
          parse_tree__equiv_type__Pragma_41 = parse_tree__equiv_type__Pragma0_21;
#line 670 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 670 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 669 "equiv_type.m"
        }
#line 672 "equiv_type.m"
    {
#line 672 "equiv_type.m"
      MR_Word base;
#line 672 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 672 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 672 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Origin_20));
#line 672 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Pragma_41));
#line 672 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Context_22));
#line 672 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__SeqNum_23));
#line 672 "equiv_type.m"
    }
#line 579 "equiv_type.m"
  }
#line 572 "equiv_type.m"
}

#line 858 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 858 "equiv_type.m"
{
#line 858 "equiv_type.m"
  {
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 858 "equiv_type.m"
  }
#line 858 "equiv_type.m"
}

#line 540 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 540 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 540 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 540 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 540 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 540 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 540 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 540 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 540 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 540 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 540 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 540 "equiv_type.m"
{
#line 547 "equiv_type.m"
  {
#line 547 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_81;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_20;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_21;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types0_22;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OriginalTypes_23;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstanceBody_24;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_25;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainingModuleName_26;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27;
#line 547 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_29;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_30;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet1_31;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors1_32;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types_33;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_36;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_37;
#line 547 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_38;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_39;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_49_49;
#line 547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet1_31;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_UsedTypeCtors1_32;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46;
#line 562 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_34_34;
#line 562 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_35_35;

#line 547 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 548 "equiv_type.m"
    parse_tree__equiv_type__Constraints0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 548 "equiv_type.m"
    parse_tree__equiv_type__ClassName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 548 "equiv_type.m"
    parse_tree__equiv_type__Types0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 548 "equiv_type.m"
    parse_tree__equiv_type__OriginalTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 548 "equiv_type.m"
    parse_tree__equiv_type__InstanceBody_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 548 "equiv_type.m"
    parse_tree__equiv_type__VarSet0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 548 "equiv_type.m"
    parse_tree__equiv_type__ContainingModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 548 "equiv_type.m"
    parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 548 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 8)));
#line 551 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "equiv_type.m"
    if (!(parse_tree__equiv_type__succeeded))
#line 552 "equiv_type.m"
      {
#line 552 "equiv_type.m"
        parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ContainingModuleName_26, parse_tree__equiv_type__ModuleName_12);
      }
#line 556 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 555 "equiv_type.m"
      parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 556 "equiv_type.m"
    else
#line 557 "equiv_type.m"
      {
#line 557 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_44_44;
#line 557 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 557 "equiv_type.m"
        {
#line 557 "equiv_type.m"
          parse_tree__equiv_type__V_45_45 = mercury__set__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0);
        }
#line 557 "equiv_type.m"
        {
#line 557 "equiv_type.m"
          parse_tree__equiv_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 557 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 557 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_45_45));
#line 557 "equiv_type.m"
        }
#line 557 "equiv_type.m"
        {
#line 557 "equiv_type.m"
          parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 557 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UsedTypeCtors0_29, 0) = ((MR_Box) (parse_tree__equiv_type__V_44_44));
#line 557 "equiv_type.m"
        }
#line 557 "equiv_type.m"
      }
#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 3) = ((MR_Box) (parse_tree__equiv_type__Location_13));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_14));
#line 858 "equiv_type.m"
    }
#line 4908 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_81, parse_tree__equiv_type__TypeCtorInfo_38_81, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_68_68, parse_tree__equiv_type__Constraints0_20, &parse_tree__equiv_type__Constraints_30, ((MR_Box) (parse_tree__equiv_type__VarSet0_25)), &parse_tree__equiv_type__conv6_VarSet1_31, ((MR_Box) (parse_tree__equiv_type__UsedTypeCtors0_29)), &parse_tree__equiv_type__conv5_UsedTypeCtors1_32, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
    }
#line 858 "equiv_type.m"
    parse_tree__equiv_type__VarSet1_31 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet1_31);
#line 858 "equiv_type.m"
    parse_tree__equiv_type__UsedTypeCtors1_32 = ((MR_Word) parse_tree__equiv_type__conv5_UsedTypeCtors1_32);
#line 858 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
#line 562 "equiv_type.m"
    {
#line 562 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__Types0_22, &parse_tree__equiv_type__Types_33, &parse_tree__equiv_type__V_34_34, &parse_tree__equiv_type__V_35_35, parse_tree__equiv_type__VarSet1_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__UsedTypeCtors1_32, &parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43);
    }
#line 566 "equiv_type.m"
    {
#line 566 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Types0_22, &parse_tree__equiv_type__Arity_38);
    }
#line 567 "equiv_type.m"
    {
#line 567 "equiv_type.m"
      parse_tree__equiv_type__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 567 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 567 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_38));
#line 567 "equiv_type.m"
    }
#line 567 "equiv_type.m"
    {
#line 567 "equiv_type.m"
      parse_tree__equiv_type__ItemId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 567 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 0) = ((MR_Box) ((MR_Integer) 4));
#line 567 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 567 "equiv_type.m"
    }
#line 568 "equiv_type.m"
    {
#line 568 "equiv_type.m"
      parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_39, parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41);
    }
#line 569 "equiv_type.m"
    {
#line 569 "equiv_type.m"
      MR_Word base;
#line 569 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 569 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 569 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Constraints_30));
#line 569 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 569 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Types_33));
#line 569 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__OriginalTypes_23));
#line 569 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__InstanceBody_24));
#line 569 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 569 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__ContainingModuleName_26));
#line 569 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 569 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 569 "equiv_type.m"
    }
#line 547 "equiv_type.m"
  }
#line 540 "equiv_type.m"
}

#line 472 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 472 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 472 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 472 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 472 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 472 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_44,
#line 472 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_45,
#line 472 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_46,
#line 472 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_47,
#line 472 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 472 "equiv_type.m"
{
#line 479 "equiv_type.m"
  {
#line 479 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_53_53;
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Det0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cond_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 479 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 8)));
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_30;
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_31;
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc_32;
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst_33;
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Det_34;
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_35;
#line 479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes_36;
#line 479 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_48_48;

#line 482 "equiv_type.m"
    {
#line 482 "equiv_type.m"
      parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_23, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_44, &parse_tree__equiv_type__ExpandedItems0_30);
    }
#line 5058 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 484 "equiv_type.m"
    {
#line 484 "equiv_type.m"
      parse_tree__equiv_type__V_48_48 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_53_53, parse_tree__equiv_type__Modes0_24);
    }
#line 484 "equiv_type.m"
    {
#line 484 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__PredName_23, parse_tree__equiv_type__V_48_48, parse_tree__equiv_type__Context_28, (MR_Integer) 1, parse_tree__equiv_type__EqvInstMap_15, &parse_tree__equiv_type__ExtraModes_31, parse_tree__equiv_type__MaybePredOrFunc0_22, &parse_tree__equiv_type__MaybePredOrFunc_32, parse_tree__equiv_type__WithInst0_25, &parse_tree__equiv_type__WithInst_33, parse_tree__equiv_type__Det0_26, &parse_tree__equiv_type__Det_34, parse_tree__equiv_type__ExpandedItems0_30, &parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_47, parse_tree__equiv_type__Specs_20);
    }
#line 491 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraModes_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "equiv_type.m"
      parse_tree__equiv_type__Modes_36 = parse_tree__equiv_type__Modes0_24;
#line 491 "equiv_type.m"
    else
#line 493 "equiv_type.m"
      {
#line 493 "equiv_type.m"
        parse_tree__equiv_type__Modes_36 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_53_53, parse_tree__equiv_type__Modes0_24, parse_tree__equiv_type__ExtraModes_31);
      }
#line 502 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybePredOrFunc_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 503 "equiv_type.m"
      *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_45 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_44;
#line 502 "equiv_type.m"
    else
#line 496 "equiv_type.m"
      {
#line 496 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc_32, (MR_Integer) 0)));
#line 496 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemType_40;
#line 496 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__Arity_41;
#line 496 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__OrigArity_42;
#line 496 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemId_43;
#line 496 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_51_51;

#line 497 "equiv_type.m"
        {
#line 497 "equiv_type.m"
          parse_tree__equiv_type__ItemType_40 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_39);
        }
#line 498 "equiv_type.m"
        {
#line 498 "equiv_type.m"
          mercury__list__length_2_p_0(parse_tree__equiv_type__TypeCtorInfo_53_53, parse_tree__equiv_type__Modes_36, &parse_tree__equiv_type__Arity_41);
        }
#line 499 "equiv_type.m"
        {
#line 499 "equiv_type.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_39, &parse_tree__equiv_type__OrigArity_42, parse_tree__equiv_type__Arity_41);
        }
#line 500 "equiv_type.m"
        {
#line 500 "equiv_type.m"
          parse_tree__equiv_type__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_51_51, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_23));
#line 500 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_51_51, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_42));
#line 500 "equiv_type.m"
        }
#line 500 "equiv_type.m"
        {
#line 500 "equiv_type.m"
          parse_tree__equiv_type__ItemId_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_43, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_40));
#line 500 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_43, 1) = ((MR_Box) (parse_tree__equiv_type__V_51_51));
#line 500 "equiv_type.m"
        }
#line 501 "equiv_type.m"
        {
#line 501 "equiv_type.m"
          parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_43, parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_44, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_45);
        }
#line 496 "equiv_type.m"
      }
#line 505 "equiv_type.m"
    {
#line 505 "equiv_type.m"
      MR_Word base;
#line 505 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 505 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_21));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_32));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__PredName_23));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Modes_36));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__WithInst_33));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Det_34));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Cond_27));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__Context_28));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__SeqNum_29));
#line 505 "equiv_type.m"
    }
#line 479 "equiv_type.m"
  }
#line 472 "equiv_type.m"
}

#line 1374 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1374__1_1_f_0(
#line 1374 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_134)
#line 1374 "equiv_type.m"
{
#line 1374 "equiv_type.m"
  {
#line 1374 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1374 "equiv_type.m"
    MR_Word parse_tree__equiv_type__HeadVar__2_135;
#line 1374 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_134, (MR_Integer) 0)));
#line 1374 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Mode_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_134, (MR_Integer) 1)));

#line 1375 "equiv_type.m"
    {
#line 1375 "equiv_type.m"
      parse_tree__equiv_type__HeadVar__2_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_135, 0) = ((MR_Box) (parse_tree__equiv_type__Type_172));
#line 1375 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_135, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_173));
#line 1375 "equiv_type.m"
    }
#line 1374 "equiv_type.m"
    return parse_tree__equiv_type__HeadVar__2_135;
#line 1374 "equiv_type.m"
  }
#line 1374 "equiv_type.m"
}

#line 1367 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1367__1_1_f_0(
#line 1367 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_165)
#line 1367 "equiv_type.m"
{
#line 1367 "equiv_type.m"
  {
#line 1367 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1367 "equiv_type.m"
    MR_Word parse_tree__equiv_type__HeadVar__2_166;

#line 1367 "equiv_type.m"
    {
#line 1367 "equiv_type.m"
      parse_tree__equiv_type__HeadVar__2_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_166, 0) = ((MR_Box) (parse_tree__equiv_type__HeadVar__1_165));
#line 1367 "equiv_type.m"
    }
#line 1367 "equiv_type.m"
    return parse_tree__equiv_type__HeadVar__2_166;
#line 1367 "equiv_type.m"
  }
#line 1367 "equiv_type.m"
}

#line 167 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
#line 167 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 167 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 167 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 167 "equiv_type.m"
{
#line 167 "equiv_type.m"
  {
#line 167 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 167 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 167 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 167 "equiv_type.m"
    {
#line 167 "equiv_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__Cast_HeadVar1_4, parse_tree__equiv_type__Cast_HeadVar2_5);
#line 167 "equiv_type.m"
      return;
    }
#line 167 "equiv_type.m"
  }
#line 167 "equiv_type.m"
}

#line 167 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
#line 167 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 167 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 167 "equiv_type.m"
{
#line 5282 "parse_tree.equiv_type.c"
  {
#line 5284 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__HeadVar__2_1 == parse_tree__equiv_type__HeadVar__2_2);

#line 5287 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 5289 "parse_tree.equiv_type.c"
  }
#line 167 "equiv_type.m"
}

#line 1564 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type____Compare____expanded_item_set_0_0(
#line 1564 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 1564 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1564 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 1564 "equiv_type.m"
{
#line 1564 "equiv_type.m"
  {
#line 1564 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1564 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 1564 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 1564 "equiv_type.m"
    {
#line 1564 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[0], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 1564 "equiv_type.m"
      return;
    }
#line 1564 "equiv_type.m"
  }
#line 1564 "equiv_type.m"
}

#line 1564 "equiv_type.m"
MR_bool MR_CALL 
parse_tree__equiv_type____Unify____expanded_item_set_0_0(
#line 1564 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1564 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 1564 "equiv_type.m"
{
#line 1564 "equiv_type.m"
  {
#line 1564 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1564 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 1564 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 1564 "equiv_type.m"
    {
#line 1564 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[0], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 1564 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 1564 "equiv_type.m"
  }
#line 1564 "equiv_type.m"
}

#line 130 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_location_0_0(
#line 130 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 130 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 130 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 130 "equiv_type.m"
{
#line 130 "equiv_type.m"
  {
#line 130 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 130 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 130 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 130 "equiv_type.m"
    {
#line 130 "equiv_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__Cast_HeadVar1_4, parse_tree__equiv_type__Cast_HeadVar2_5);
#line 130 "equiv_type.m"
      return;
    }
#line 130 "equiv_type.m"
  }
#line 130 "equiv_type.m"
}

#line 130 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_location_0_0(
#line 130 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 130 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 130 "equiv_type.m"
{
#line 5397 "parse_tree.equiv_type.c"
  {
#line 5399 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__HeadVar__2_1 == parse_tree__equiv_type__HeadVar__2_2);

#line 5402 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 5404 "parse_tree.equiv_type.c"
  }
#line 130 "equiv_type.m"
}

#line 82 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0(
#line 82 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 82 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 82 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 82 "equiv_type.m"
{
#line 82 "equiv_type.m"
  {
#line 82 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 82 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_12 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 82 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_13 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 82 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_12 == parse_tree__equiv_type__CastY_13);
#line 82 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 5433 "parse_tree.equiv_type.c"
      *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 82 "equiv_type.m"
    else
#line 82 "equiv_type.m"
      {
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 2)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_10_10;

#line 82 "equiv_type.m"
        {
#line 82 "equiv_type.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[2], &parse_tree__equiv_type__V_10_10, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
        }
#line 5459 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_10_10 == (MR_Integer) 0);
#line 82 "equiv_type.m"
        parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 82 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 82 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_10_10;
#line 82 "equiv_type.m"
        else
#line 82 "equiv_type.m"
          {
#line 82 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_11_11;

#line 82 "equiv_type.m"
            {
#line 82 "equiv_type.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[8], &parse_tree__equiv_type__V_11_11, ((MR_Box) (parse_tree__equiv_type__V_5_5)), ((MR_Box) (parse_tree__equiv_type__V_8_8)));
            }
#line 5479 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_11_11 == (MR_Integer) 0);
#line 82 "equiv_type.m"
            parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 82 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 82 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_11_11;
#line 82 "equiv_type.m"
            else
#line 82 "equiv_type.m"
              {
#line 82 "equiv_type.m"
                parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__V_6_6, parse_tree__equiv_type__V_9_9);
#line 82 "equiv_type.m"
                return;
              }
#line 82 "equiv_type.m"
          }
#line 82 "equiv_type.m"
      }
#line 82 "equiv_type.m"
  }
#line 82 "equiv_type.m"
}

#line 82 "equiv_type.m"
MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0(
#line 82 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 82 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 82 "equiv_type.m"
{
#line 82 "equiv_type.m"
  {
#line 82 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 82 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_9 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 82 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_10 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 82 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_9 == parse_tree__equiv_type__CastY_10);
#line 82 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 82 "equiv_type.m"
      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 82 "equiv_type.m"
    else
#line 82 "equiv_type.m"
      {
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_12_12;
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 2)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));

#line 5548 "parse_tree.equiv_type.c"
        {
#line 5550 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[2], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 82 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 82 "equiv_type.m"
          {
#line 5557 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[8];
#line 5559 "parse_tree.equiv_type.c"
            {
#line 5561 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 82 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 5566 "parse_tree.equiv_type.c"
              {
#line 5568 "parse_tree.equiv_type.c"
                return parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__equiv_type__V_5_5, parse_tree__equiv_type__V_8_8);
              }
#line 82 "equiv_type.m"
          }
#line 82 "equiv_type.m"
      }
#line 82 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 82 "equiv_type.m"
  }
#line 82 "equiv_type.m"
}

#line 89 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type____Compare____eqv_map_0_0(
#line 89 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 89 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 89 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 89 "equiv_type.m"
{
#line 89 "equiv_type.m"
  {
#line 89 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 89 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 89 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 89 "equiv_type.m"
    {
#line 89 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[4], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 89 "equiv_type.m"
      return;
    }
#line 89 "equiv_type.m"
  }
#line 89 "equiv_type.m"
}

#line 89 "equiv_type.m"
MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_map_0_0(
#line 89 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 89 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 89 "equiv_type.m"
{
#line 89 "equiv_type.m"
  {
#line 89 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 89 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 89 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 89 "equiv_type.m"
    {
#line 89 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[4], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 89 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 89 "equiv_type.m"
  }
#line 89 "equiv_type.m"
}

#line 165 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_map_0_0(
#line 165 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 165 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 165 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 165 "equiv_type.m"
{
#line 165 "equiv_type.m"
  {
#line 165 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 165 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 165 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 165 "equiv_type.m"
    {
#line 165 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[3], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 165 "equiv_type.m"
      return;
    }
#line 165 "equiv_type.m"
  }
#line 165 "equiv_type.m"
}

#line 165 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_map_0_0(
#line 165 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 165 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 165 "equiv_type.m"
{
#line 165 "equiv_type.m"
  {
#line 165 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 165 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 165 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 165 "equiv_type.m"
    {
#line 165 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[3], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 165 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 165 "equiv_type.m"
  }
#line 165 "equiv_type.m"
}

#line 158 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
#line 158 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 158 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 158 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 158 "equiv_type.m"
{
#line 158 "equiv_type.m"
  {
#line 158 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 158 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_12 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 158 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_13 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 158 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_12 == parse_tree__equiv_type__CastY_13);
#line 158 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 5730 "parse_tree.equiv_type.c"
      *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 158 "equiv_type.m"
    else
#line 158 "equiv_type.m"
      {
#line 158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));
#line 158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 2)));
#line 158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_10_10;

#line 158 "equiv_type.m"
        {
#line 158 "equiv_type.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[6], &parse_tree__equiv_type__V_10_10, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
        }
#line 5756 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_10_10 == (MR_Integer) 0);
#line 158 "equiv_type.m"
        parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 158 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 158 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_10_10;
#line 158 "equiv_type.m"
        else
#line 158 "equiv_type.m"
          {
#line 158 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_11_11;

#line 158 "equiv_type.m"
            {
#line 158 "equiv_type.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[7], &parse_tree__equiv_type__V_11_11, ((MR_Box) (parse_tree__equiv_type__V_5_5)), ((MR_Box) (parse_tree__equiv_type__V_8_8)));
            }
#line 5776 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_11_11 == (MR_Integer) 0);
#line 158 "equiv_type.m"
            parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 158 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 158 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_11_11;
#line 158 "equiv_type.m"
            else
#line 158 "equiv_type.m"
              {
#line 158 "equiv_type.m"
                parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__V_6_6, parse_tree__equiv_type__V_9_9);
#line 158 "equiv_type.m"
                return;
              }
#line 158 "equiv_type.m"
          }
#line 158 "equiv_type.m"
      }
#line 158 "equiv_type.m"
  }
#line 158 "equiv_type.m"
}

#line 158 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
#line 158 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 158 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 158 "equiv_type.m"
{
#line 158 "equiv_type.m"
  {
#line 158 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 158 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_9 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 158 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_10 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 158 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_9 == parse_tree__equiv_type__CastY_10);
#line 158 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 158 "equiv_type.m"
      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 158 "equiv_type.m"
    else
#line 158 "equiv_type.m"
      {
#line 158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_12_12;
#line 158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 2)));
#line 158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));

#line 5845 "parse_tree.equiv_type.c"
        {
#line 5847 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[6], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 158 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 158 "equiv_type.m"
          {
#line 5854 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[7];
#line 5856 "parse_tree.equiv_type.c"
            {
#line 5858 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 158 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 5863 "parse_tree.equiv_type.c"
              {
#line 5865 "parse_tree.equiv_type.c"
                return parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__equiv_type__V_5_5, parse_tree__equiv_type__V_8_8);
              }
#line 158 "equiv_type.m"
          }
#line 158 "equiv_type.m"
      }
#line 158 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 158 "equiv_type.m"
  }
#line 158 "equiv_type.m"
}

#line 92 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type____Compare____equiv_type_info_0_0(
#line 92 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 92 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 92 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 92 "equiv_type.m"
{
#line 92 "equiv_type.m"
  {
#line 92 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 92 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 92 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 92 "equiv_type.m"
    {
#line 92 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[4], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 92 "equiv_type.m"
      return;
    }
#line 92 "equiv_type.m"
  }
#line 92 "equiv_type.m"
}

#line 92 "equiv_type.m"
MR_bool MR_CALL 
parse_tree__equiv_type____Unify____equiv_type_info_0_0(
#line 92 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 92 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 92 "equiv_type.m"
{
#line 92 "equiv_type.m"
  {
#line 92 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 92 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 92 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 92 "equiv_type.m"
    {
#line 92 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[4], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 92 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 92 "equiv_type.m"
  }
#line 92 "equiv_type.m"
}

#line 1580 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_2_3_p_0(
#line 1580 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ItemId_4,
#line 1580 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedItemSet0_5,
#line 1580 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExpandedItemSet_6)
#line 1580 "equiv_type.m"
{
#line 1583 "equiv_type.m"
  {
#line 1583 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1583 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ExpandedItemSet0_5, (MR_Integer) 0)));
#line 1583 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Items0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ExpandedItemSet0_5, (MR_Integer) 1)));
#line 1583 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_4, (MR_Integer) 1)));
#line 1585 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_4, (MR_Integer) 0)));
#line 1586 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemName_10, (MR_Integer) 0)));
#line 1586 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_16_16;
#line 1586 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemName_10, (MR_Integer) 1)));
#line 1586 "equiv_type.m"
    MR_String parse_tree__equiv_type__V_11_11;

#line 1586 "equiv_type.m"
    parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 1586 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1586 "equiv_type.m"
      {
#line 1586 "equiv_type.m"
        parse_tree__equiv_type__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_14_14, (MR_Integer) 0)));
#line 1586 "equiv_type.m"
        parse_tree__equiv_type__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_14_14, (MR_Integer) 1)));
#line 1586 "equiv_type.m"
        {
#line 1586 "equiv_type.m"
          parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ModuleName_7, parse_tree__equiv_type__V_16_16);
        }
#line 1586 "equiv_type.m"
      }
#line 1589 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1588 "equiv_type.m"
      *parse_tree__equiv_type__ExpandedItemSet_6 = parse_tree__equiv_type__ExpandedItemSet0_5;
#line 1589 "equiv_type.m"
    else
#line 1590 "equiv_type.m"
      {
#line 1590 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Items_13;

#line 1590 "equiv_type.m"
        {
#line 1590 "equiv_type.m"
          mercury__set__insert_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, ((MR_Box) (parse_tree__equiv_type__ItemId_4)), parse_tree__equiv_type__Items0_8, &parse_tree__equiv_type__Items_13);
        }
#line 1591 "equiv_type.m"
        {
#line 1591 "equiv_type.m"
          MR_Word base;
#line 1591 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1591 "equiv_type.m"
          *parse_tree__equiv_type__ExpandedItemSet_6 = base;
#line 1591 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_7));
#line 1591 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Items_13));
#line 1591 "equiv_type.m"
        }
#line 1590 "equiv_type.m"
      }
#line 1583 "equiv_type.m"
  }
#line 1580 "equiv_type.m"
}

#line 1578 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_3_p_0_1(
#line 1578 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1578 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1578 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2)
#line 1578 "equiv_type.m"
{
#line 1578 "equiv_type.m"
  {
#line 1578 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1578 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_ExpandedItemSet_6;

#line 1578 "equiv_type.m"
    {
#line 1578 "equiv_type.m"
      parse_tree__equiv_type__record_expanded_item_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv0_ExpandedItemSet_6);
    }
#line 1578 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv0_ExpandedItemSet_6));
#line 1578 "equiv_type.m"
  }
#line 1578 "equiv_type.m"
}

#line 1574 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_3_p_0(
#line 1574 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item_4,
#line 1574 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 1574 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7)
#line 1574 "equiv_type.m"
{
#line 1577 "equiv_type.m"
  {
#line 1577 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1577 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeInfo_12_12;
#line 1577 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_8_8;

#line 1578 "equiv_type.m"
    {
#line 1578 "equiv_type.m"
      parse_tree__equiv_type__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1578 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_8_8, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
#line 1578 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_8_8, 1) = ((MR_Box) (parse_tree__equiv_type__record_expanded_item_3_p_0_1));
#line 1578 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1578 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_8_8, 3) = ((MR_Box) (parse_tree__equiv_type__Item_4));
#line 1578 "equiv_type.m"
    }
#line 6091 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[0];
#line 1578 "equiv_type.m"
    {
#line 1578 "equiv_type.m"
      mercury__maybe__map_maybe_3_p_0(parse_tree__equiv_type__TypeInfo_12_12, parse_tree__equiv_type__TypeInfo_12_12, parse_tree__equiv_type__V_8_8, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7);
#line 1578 "equiv_type.m"
      return;
    }
#line 1577 "equiv_type.m"
  }
#line 1574 "equiv_type.m"
}

#line 1551 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1551 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1551 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 1551 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarset_3,
#line 1551 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1551 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1551 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 1551 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 1551 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__8_8,
#line 1551 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__9_9)
#line 1551 "equiv_type.m"
{
#line 1556 "equiv_type.m"
  {
#line 1556 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1556 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0))))
#line 1556 "equiv_type.m"
      {
#line 1556 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__4_4;
#line 1556 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__9_9 = parse_tree__equiv_type__HeadVar__8_8;
#line 1556 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6;
#line 1556 "equiv_type.m"
      }
#line 1556 "equiv_type.m"
    else
#line 1558 "equiv_type.m"
      {
#line 1558 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1558 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_26;
#line 1093 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_29_29;
#line 1093 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_30_30;
#line 1093 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_51_51;

#line 1093 "equiv_type.m"
        {
#line 1093 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__EqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_25, &parse_tree__equiv_type__Type_26, &parse_tree__equiv_type__V_29_29, &parse_tree__equiv_type__V_51_51, parse_tree__equiv_type__TVarset_3, &parse_tree__equiv_type__V_30_30, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7, parse_tree__equiv_type__HeadVar__8_8, parse_tree__equiv_type__HeadVar__9_9);
        }
#line 1558 "equiv_type.m"
        {
#line 1558 "equiv_type.m"
          MR_Word base;
#line 1558 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1558 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1558 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_26));
#line 1558 "equiv_type.m"
        }
#line 1558 "equiv_type.m"
      }
#line 1556 "equiv_type.m"
  }
#line 1551 "equiv_type.m"
}

#line 1547 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1547 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1547 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1547 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1547 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1547 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1547 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1547 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1547 "equiv_type.m"
{
#line 1547 "equiv_type.m"
  {
#line 1547 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_HeadVar__5_5;
#line 1547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_7;
#line 1547 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__9_9;

#line 1547 "equiv_type.m"
    {
#line 1547 "equiv_type.m"
      parse_tree__equiv_type__replace_in_unit_selector_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_HeadVar__5_5, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_7, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_HeadVar__9_9);
    }
#line 1547 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_HeadVar__5_5));
#line 1547 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_7));
#line 1547 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__9_9));
#line 1547 "equiv_type.m"
  }
#line 1547 "equiv_type.m"
}

#line 1526 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1526 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1526 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 1526 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarset_12,
#line 1526 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1526 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1526 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1526 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1526 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1526 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22)
#line 1526 "equiv_type.m"
{
#line 1533 "equiv_type.m"
  {
#line 1533 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1533 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_35_52;
#line 1533 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_35_80;
#line 1533 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Data10_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1533 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Data20_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1533 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Data1_15;
#line 1533 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Data2_16;
#line 1533 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1533 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24;
#line 1533 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data10_13, (MR_Integer) 1)));
#line 1533 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_39;
#line 1533 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_40_40;
#line 1533 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_66;
#line 1533 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_67;
#line 1546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data10_13, (MR_Integer) 0)));
#line 1547 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1547 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24;
#line 1549 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_44_44;
#line 1549 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_45_45;
#line 1546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_71_71;
#line 1547 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20;
#line 1547 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22;
#line 1549 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_72_72;
#line 1549 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_73_73;

#line 1547 "equiv_type.m"
    {
#line 1547 "equiv_type.m"
      parse_tree__equiv_type__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1547 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[1]));
#line 1547 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1));
#line 1547 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1547 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 3) = ((MR_Box) (parse_tree__equiv_type__Location_10));
#line 1547 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_11));
#line 1547 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 5) = ((MR_Box) (parse_tree__equiv_type__TVarset_12));
#line 1547 "equiv_type.m"
    }
#line 6322 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_35_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1547 "equiv_type.m"
    {
#line 1547 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_35_52, parse_tree__equiv_type__TypeCtorInfo_35_52, (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_40_40, parse_tree__equiv_type__Sel0_38, &parse_tree__equiv_type__Sel_39, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
    }
#line 1547 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23);
#line 1547 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
#line 1549 "equiv_type.m"
    parse_tree__equiv_type__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data10_13, (MR_Integer) 0)));
#line 1549 "equiv_type.m"
    parse_tree__equiv_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data10_13, (MR_Integer) 1)));
#line 1549 "equiv_type.m"
    {
#line 1549 "equiv_type.m"
      parse_tree__equiv_type__Data1_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1549 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data1_15, 0) = ((MR_Box) (parse_tree__equiv_type__V_44_44));
#line 1549 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data1_15, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_39));
#line 1549 "equiv_type.m"
    }
#line 1546 "equiv_type.m"
    parse_tree__equiv_type__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data20_14, (MR_Integer) 0)));
#line 1546 "equiv_type.m"
    parse_tree__equiv_type__Sel0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data20_14, (MR_Integer) 1)));
#line 6351 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_35_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1547 "equiv_type.m"
    {
#line 1547 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_35_80, parse_tree__equiv_type__TypeCtorInfo_35_80, (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_40_40, parse_tree__equiv_type__Sel0_66, &parse_tree__equiv_type__Sel_67, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
    }
#line 1547 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20);
#line 1547 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
#line 1549 "equiv_type.m"
    parse_tree__equiv_type__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data20_14, (MR_Integer) 0)));
#line 1549 "equiv_type.m"
    parse_tree__equiv_type__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data20_14, (MR_Integer) 1)));
#line 1549 "equiv_type.m"
    {
#line 1549 "equiv_type.m"
      parse_tree__equiv_type__Data2_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1549 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data2_16, 0) = ((MR_Box) (parse_tree__equiv_type__V_72_72));
#line 1549 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data2_16, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_67));
#line 1549 "equiv_type.m"
    }
#line 1533 "equiv_type.m"
    {
#line 1533 "equiv_type.m"
      MR_Word base;
#line 1533 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1533 "equiv_type.m"
      *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1533 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Data1_15));
#line 1533 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Data2_16));
#line 1533 "equiv_type.m"
    }
#line 1533 "equiv_type.m"
  }
#line 1526 "equiv_type.m"
}

#line 1523 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1523 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1523 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1523 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1523 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1523 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1523 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1523 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1523 "equiv_type.m"
{
#line 1523 "equiv_type.m"
  {
#line 1523 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_HeadVar__5_5;
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20;
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22;

#line 1523 "equiv_type.m"
    {
#line 1523 "equiv_type.m"
      parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_HeadVar__5_5, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22);
    }
#line 1523 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_HeadVar__5_5));
#line 1523 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20));
#line 1523 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22));
#line 1523 "equiv_type.m"
  }
#line 1523 "equiv_type.m"
}

#line 1509 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1509 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1509 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 1509 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1509 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1509 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 1509 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 1509 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 1509 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 1509 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9)
#line 1509 "equiv_type.m"
{
#line 1514 "equiv_type.m"
  {
#line 1514 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1514 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1514 "equiv_type.m"
      {
#line 1515 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__4_4 = parse_tree__equiv_type__HeadVar__3_3;
#line 1515 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8;
#line 1515 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6;
#line 1514 "equiv_type.m"
      }
#line 1514 "equiv_type.m"
    else
#line 1514 "equiv_type.m"
      if (((MR_tag((MR_Word) parse_tree__equiv_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1521 "equiv_type.m"
        {
#line 1521 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeInfo_51_51;
#line 1521 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SharingPairs0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1521 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SharingPairs_34;
#line 1521 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_42_42;
#line 1522 "equiv_type.m"
          MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_7;
#line 1522 "equiv_type.m"
          MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_9;

#line 1523 "equiv_type.m"
          {
#line 1523 "equiv_type.m"
            parse_tree__equiv_type__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1523 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[0]));
#line 1523 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1));
#line 1523 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1523 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 3) = ((MR_Box) (parse_tree__equiv_type__Location_1));
#line 1523 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_2));
#line 1523 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 5) = ((MR_Box) (parse_tree__equiv_type__HeadVar__5_5));
#line 1523 "equiv_type.m"
          }
#line 6518 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__TypeInfo_51_51 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[2];
#line 1522 "equiv_type.m"
          {
#line 1522 "equiv_type.m"
            mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeInfo_51_51, parse_tree__equiv_type__TypeInfo_51_51, (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_42_42, parse_tree__equiv_type__SharingPairs0_33, &parse_tree__equiv_type__SharingPairs_34, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_7, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_9);
          }
#line 1522 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_7);
#line 1522 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_9);
#line 1520 "equiv_type.m"
          {
#line 1520 "equiv_type.m"
            MR_Word base;
#line 1520 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1520 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1520 "equiv_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SharingPairs_34));
#line 1520 "equiv_type.m"
          }
#line 1521 "equiv_type.m"
        }
#line 1514 "equiv_type.m"
      else
#line 1516 "equiv_type.m"
        {
#line 1517 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = parse_tree__equiv_type__HeadVar__3_3;
#line 1517 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8;
#line 1517 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6;
#line 1516 "equiv_type.m"
        }
#line 1514 "equiv_type.m"
  }
#line 1509 "equiv_type.m"
}

#line 1492 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tm_10_p_0(
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1492 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 1492 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 1492 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 1492 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 1492 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10)
#line 1492 "equiv_type.m"
{
#line 1498 "equiv_type.m"
  {
#line 1498 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1498 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1503 "equiv_type.m"
      {
#line 1503 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1503 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 1503 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_32;
#line 1093 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_36_36;
#line 1093 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_60_60;

#line 1093 "equiv_type.m"
        {
#line 1093 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__EqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_30, &parse_tree__equiv_type__Type_32, &parse_tree__equiv_type__V_36_36, &parse_tree__equiv_type__V_60_60, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 1503 "equiv_type.m"
        {
#line 1503 "equiv_type.m"
          MR_Word base;
#line 1503 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1503 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1503 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_32));
#line 1503 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_31));
#line 1503 "equiv_type.m"
        }
#line 1503 "equiv_type.m"
      }
#line 1498 "equiv_type.m"
    else
#line 1498 "equiv_type.m"
      {
#line 1498 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1498 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_14;
#line 1093 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_18_18;
#line 1093 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_79_79;

#line 1093 "equiv_type.m"
        {
#line 1093 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__EqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_13, &parse_tree__equiv_type__Type_14, &parse_tree__equiv_type__V_18_18, &parse_tree__equiv_type__V_79_79, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 1498 "equiv_type.m"
        {
#line 1498 "equiv_type.m"
          MR_Word base;
#line 1498 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1498 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1498 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_14));
#line 1498 "equiv_type.m"
        }
#line 1498 "equiv_type.m"
      }
#line 1498 "equiv_type.m"
  }
#line 1492 "equiv_type.m"
}

#line 1489 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0_1(
#line 1489 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1489 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1489 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1489 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1489 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1489 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1489 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1489 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1489 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 1489 "equiv_type.m"
{
#line 1489 "equiv_type.m"
  {
#line 1489 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1489 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_HeadVar__4_4;
#line 1489 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6;
#line 1489 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8;
#line 1489 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10;

#line 1489 "equiv_type.m"
    {
#line 1489 "equiv_type.m"
      parse_tree__equiv_type__replace_in_tm_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_HeadVar__4_4, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10);
    }
#line 1489 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_HeadVar__4_4));
#line 1489 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6));
#line 1489 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8));
#line 1489 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10));
#line 1489 "equiv_type.m"
  }
#line 1489 "equiv_type.m"
}

#line 1482 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0(
#line 1482 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 1482 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 1482 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17,
#line 1482 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TMs_18,
#line 1482 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1482 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1482 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1482 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1482 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1482 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 1482 "equiv_type.m"
{
#line 1488 "equiv_type.m"
  {
#line 1488 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1488 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 1488 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 1489 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 1489 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 1489 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 1489 "equiv_type.m"
    {
#line 1489 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1489 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[2]));
#line 1489 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_tms_10_p_0_1));
#line 1489 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1489 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 1489 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_12));
#line 1489 "equiv_type.m"
    }
#line 6773 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1489 "equiv_type.m"
    {
#line 1489 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17, parse_tree__equiv_type__STATE_VARIABLE_TMs_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 1489 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 1489 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 1489 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 1488 "equiv_type.m"
  }
#line 1482 "equiv_type.m"
}

#line 1374 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_2(
#line 1374 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1374 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1)
#line 1374 "equiv_type.m"
{
#line 1374 "equiv_type.m"
  {
#line 1374 "equiv_type.m"
    MR_Box parse_tree__equiv_type__wrapper_arg_2;
#line 1374 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1374 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_HeadVar__2_135;

#line 1374 "equiv_type.m"
    {
#line 1374 "equiv_type.m"
      parse_tree__equiv_type__conv1_HeadVar__2_135 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1374__1_1_f_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1));
    }
#line 1374 "equiv_type.m"
    parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv1_HeadVar__2_135));
#line 1374 "equiv_type.m"
    return parse_tree__equiv_type__wrapper_arg_2;
#line 1374 "equiv_type.m"
  }
#line 1374 "equiv_type.m"
}

#line 1367 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1367 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1367 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1)
#line 1367 "equiv_type.m"
{
#line 1367 "equiv_type.m"
  {
#line 1367 "equiv_type.m"
    MR_Box parse_tree__equiv_type__wrapper_arg_2;
#line 1367 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1367 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__2_166;

#line 1367 "equiv_type.m"
    {
#line 1367 "equiv_type.m"
      parse_tree__equiv_type__conv0_HeadVar__2_166 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1367__1_1_f_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1));
    }
#line 1367 "equiv_type.m"
    parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__2_166));
#line 1367 "equiv_type.m"
    return parse_tree__equiv_type__wrapper_arg_2;
#line 1367 "equiv_type.m"
  }
#line 1367 "equiv_type.m"
}

#line 1308 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_24,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_28,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_29,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Det_0_76,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Det_77,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79,
#line 1308 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81,
#line 1308 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_82)
#line 1308 "equiv_type.m"
{
#line 1323 "equiv_type.m"
  {
#line 1323 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_174_174;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes1_43;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypes_50;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_54;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModeSpecs_57;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypesAndModes_60;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93;
#line 1323 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_125_125;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_127_127;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129;
#line 1323 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1355 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_55_55;
#line 1355 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_56_56;

#line 1324 "equiv_type.m"
    {
#line 1324 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(parse_tree__equiv_type__Location_24, parse_tree__equiv_type__EqvMap_28, parse_tree__equiv_type__ClassContext0_30, parse_tree__equiv_type__ClassContext_31, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85);
    }
#line 1327 "equiv_type.m"
    {
#line 1327 "equiv_type.m"
      parse_tree__equiv_type__replace_in_tms_10_p_0(parse_tree__equiv_type__Location_24, parse_tree__equiv_type__EqvMap_28, parse_tree__equiv_type__TypesAndModes0_32, &parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88);
    }
#line 1349 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithType0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1350 "equiv_type.m"
      {
#line 1351 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1352 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1352 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75 = parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86;
#line 1352 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87;
#line 1352 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88;
#line 1350 "equiv_type.m"
      }
#line 1349 "equiv_type.m"
    else
#line 1330 "equiv_type.m"
      {
#line 1330 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType0_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithType0_35, (MR_Integer) 0)));
#line 1330 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_45;
#line 1331 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_46_46;
#line 1339 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1334 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_182_182;
#line 1334 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Purity_47;

#line 1331 "equiv_type.m"
        {
#line 1331 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_11_p_0(parse_tree__equiv_type__Location_24, parse_tree__equiv_type__EqvMap_28, parse_tree__equiv_type__WithType0_44, &parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type__V_46_46, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92);
        }
#line 1334 "equiv_type.m"
        {
#line 1334 "equiv_type.m"
          parse_tree__equiv_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type___Purity_47, &parse_tree__equiv_type__V_182_182, &parse_tree__equiv_type__ExtraTypesPrime_49);
        }
#line 1334 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1334 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_26 == parse_tree__equiv_type__V_182_182);
#line 1339 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1337 "equiv_type.m"
          {
#line 1337 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1338 "equiv_type.m"
            parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1337 "equiv_type.m"
          }
#line 1339 "equiv_type.m"
        else
#line 1340 "equiv_type.m"
          {
#line 1340 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces1_51;
#line 1340 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg1_52;
#line 1340 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec1_53;
#line 1340 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_96_96;
#line 1340 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_97_97;
#line 1340 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_98_98;
#line 1340 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_99_99;
#line 1340 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_100_100;
#line 1340 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_103_103;
#line 1340 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_105_105;
#line 1340 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_108_108;
#line 1340 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_116_116;
#line 1340 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_117_117;
#line 1340 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_121_121;

#line 1340 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1342 "equiv_type.m"
            {
#line 1342 "equiv_type.m"
              parse_tree__equiv_type__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1342 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_97_97, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1342 "equiv_type.m"
            }
#line 1342 "equiv_type.m"
            {
#line 1342 "equiv_type.m"
              parse_tree__equiv_type__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1342 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_99_99, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1342 "equiv_type.m"
            }
#line 1343 "equiv_type.m"
            {
#line 1343 "equiv_type.m"
              parse_tree__equiv_type__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__V_97_97));
#line 1343 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[13])));
#line 1343 "equiv_type.m"
            }
#line 1343 "equiv_type.m"
            {
#line 1343 "equiv_type.m"
              parse_tree__equiv_type__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_105_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[30])));
#line 1343 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_105_105, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 1343 "equiv_type.m"
            }
#line 1342 "equiv_type.m"
            {
#line 1342 "equiv_type.m"
              parse_tree__equiv_type__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_103_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1342 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_103_103, 1) = ((MR_Box) (parse_tree__equiv_type__V_105_105));
#line 1342 "equiv_type.m"
            }
#line 1342 "equiv_type.m"
            {
#line 1342 "equiv_type.m"
              parse_tree__equiv_type__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_100_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[29])));
#line 1342 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_100_100, 1) = ((MR_Box) (parse_tree__equiv_type__V_103_103));
#line 1342 "equiv_type.m"
            }
#line 1342 "equiv_type.m"
            {
#line 1342 "equiv_type.m"
              parse_tree__equiv_type__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 0) = ((MR_Box) (parse_tree__equiv_type__V_99_99));
#line 1342 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 1) = ((MR_Box) (parse_tree__equiv_type__V_100_100));
#line 1342 "equiv_type.m"
            }
#line 1342 "equiv_type.m"
            {
#line 1342 "equiv_type.m"
              parse_tree__equiv_type__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_96_96, 0) = ((MR_Box) (parse_tree__equiv_type__V_97_97));
#line 1342 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_96_96, 1) = ((MR_Box) (parse_tree__equiv_type__V_98_98));
#line 1342 "equiv_type.m"
            }
#line 1341 "equiv_type.m"
            {
#line 1341 "equiv_type.m"
              parse_tree__equiv_type__Pieces1_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[28])));
#line 1341 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 1) = ((MR_Box) (parse_tree__equiv_type__V_96_96));
#line 1341 "equiv_type.m"
            }
#line 1345 "equiv_type.m"
            {
#line 1345 "equiv_type.m"
              parse_tree__equiv_type__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1345 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_117_117, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces1_51));
#line 1345 "equiv_type.m"
            }
#line 1345 "equiv_type.m"
            {
#line 1345 "equiv_type.m"
              parse_tree__equiv_type__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1345 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_116_116, 0) = ((MR_Box) (parse_tree__equiv_type__V_117_117));
#line 1345 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1345 "equiv_type.m"
            }
#line 1345 "equiv_type.m"
            {
#line 1345 "equiv_type.m"
              parse_tree__equiv_type__Msg1_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1345 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1345 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 1) = ((MR_Box) (parse_tree__equiv_type__V_116_116));
#line 1345 "equiv_type.m"
            }
#line 1346 "equiv_type.m"
            {
#line 1346 "equiv_type.m"
              parse_tree__equiv_type__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_121_121, 0) = ((MR_Box) (parse_tree__equiv_type__Msg1_52));
#line 1346 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1346 "equiv_type.m"
            }
#line 1346 "equiv_type.m"
            {
#line 1346 "equiv_type.m"
              parse_tree__equiv_type__Spec1_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1346 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1346 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1346 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 2) = ((MR_Box) (parse_tree__equiv_type__V_121_121));
#line 1346 "equiv_type.m"
            }
#line 1347 "equiv_type.m"
            {
#line 1347 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1347 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, 0) = ((MR_Box) (parse_tree__equiv_type__Spec1_53));
#line 1347 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1347 "equiv_type.m"
            }
#line 1340 "equiv_type.m"
          }
#line 1330 "equiv_type.m"
      }
#line 7209 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_174_174 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1355 "equiv_type.m"
    {
#line 1355 "equiv_type.m"
      parse_tree__equiv_type__V_125_125 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes0_32);
    }
#line 1356 "equiv_type.m"
    {
#line 1356 "equiv_type.m"
      parse_tree__equiv_type__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_127_127, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1356 "equiv_type.m"
    }
#line 1355 "equiv_type.m"
    {
#line 1355 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__PredName_25, parse_tree__equiv_type__V_125_125, parse_tree__equiv_type__Context_27, (MR_Integer) 0, parse_tree__equiv_type__EqvInstMap_29, &parse_tree__equiv_type__ExtraModes_54, parse_tree__equiv_type__V_127_127, &parse_tree__equiv_type__V_55_55, parse_tree__equiv_type__MaybeWithInst0_37, &parse_tree__equiv_type__V_56_56, parse_tree__equiv_type__STATE_VARIABLE_Det_0_76, parse_tree__equiv_type__STATE_VARIABLE_Det_77, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81, &parse_tree__equiv_type__ModeSpecs_57);
    }
#line 1358 "equiv_type.m"
    {
#line 1358 "equiv_type.m"
      parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, parse_tree__equiv_type__ModeSpecs_57);
    }
#line 7234 "parse_tree.equiv_type.c"
    if ((parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7236 "parse_tree.equiv_type.c"
      if ((parse_tree__equiv_type__ExtraModes_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7238 "parse_tree.equiv_type.c"
        {
#line 1367 "equiv_type.m"
          {
#line 1367 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TypeCtorInfo_174_174, (MR_Word) &parse_tree__equiv_type_scalar_common_2[5], parse_tree__equiv_type__ExtraTypes_50);
          }
#line 1367 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1391 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1392 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7251 "parse_tree.equiv_type.c"
        }
#line 7253 "parse_tree.equiv_type.c"
      else
#line 7255 "parse_tree.equiv_type.c"
        {
#line 1371 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_132_132;
#line 1371 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_183_183;

#line 1371 "equiv_type.m"
          {
#line 1371 "equiv_type.m"
            parse_tree__equiv_type__V_132_132 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__ExtraTypes_50);
          }
#line 1371 "equiv_type.m"
          {
#line 1371 "equiv_type.m"
            parse_tree__equiv_type__V_183_183 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__equiv_type__ExtraModes_54);
          }
#line 1371 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_132_132 == parse_tree__equiv_type__V_183_183);
#line 7274 "parse_tree.equiv_type.c"
          if (parse_tree__equiv_type__succeeded)
#line 7276 "parse_tree.equiv_type.c"
            {
#line 7278 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__ExtraTypesModes_64;

#line 1372 "equiv_type.m"
              {
#line 1372 "equiv_type.m"
                mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__equiv_type__ExtraTypes_50, parse_tree__equiv_type__ExtraModes_54, &parse_tree__equiv_type__ExtraTypesModes_64);
              }
#line 1374 "equiv_type.m"
              {
#line 1374 "equiv_type.m"
                parse_tree__equiv_type__ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[1], parse_tree__equiv_type__TypeCtorInfo_174_174, (MR_Word) &parse_tree__equiv_type_scalar_common_2[6], parse_tree__equiv_type__ExtraTypesModes_64);
              }
#line 1375 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1391 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1392 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7297 "parse_tree.equiv_type.c"
            }
#line 7299 "parse_tree.equiv_type.c"
          else
#line 7301 "parse_tree.equiv_type.c"
            {
#line 7303 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Pieces2_66;
#line 7305 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Msg2_67;
#line 7307 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Spec2_68;
#line 7309 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_138_138;
#line 7311 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_139_139;
#line 7313 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_140_140;
#line 7315 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_141_141;
#line 7317 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_156_156;
#line 7319 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_157_157;
#line 7321 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_161_161;

#line 1379 "equiv_type.m"
              {
#line 1379 "equiv_type.m"
                parse_tree__equiv_type__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1379 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1379 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_139_139, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1379 "equiv_type.m"
              }
#line 1379 "equiv_type.m"
              {
#line 1379 "equiv_type.m"
                parse_tree__equiv_type__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1379 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1379 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_141_141, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1379 "equiv_type.m"
              }
#line 1379 "equiv_type.m"
              {
#line 1379 "equiv_type.m"
                parse_tree__equiv_type__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1379 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_140_140, 0) = ((MR_Box) (parse_tree__equiv_type__V_141_141));
#line 1379 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[20])));
#line 1379 "equiv_type.m"
              }
#line 1379 "equiv_type.m"
              {
#line 1379 "equiv_type.m"
                parse_tree__equiv_type__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1379 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_138_138, 0) = ((MR_Box) (parse_tree__equiv_type__V_139_139));
#line 1379 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_138_138, 1) = ((MR_Box) (parse_tree__equiv_type__V_140_140));
#line 1379 "equiv_type.m"
              }
#line 1378 "equiv_type.m"
              {
#line 1378 "equiv_type.m"
                parse_tree__equiv_type__Pieces2_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[28])));
#line 1378 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_66, 1) = ((MR_Box) (parse_tree__equiv_type__V_138_138));
#line 1378 "equiv_type.m"
              }
#line 1382 "equiv_type.m"
              {
#line 1382 "equiv_type.m"
                parse_tree__equiv_type__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1382 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_157_157, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces2_66));
#line 1382 "equiv_type.m"
              }
#line 1382 "equiv_type.m"
              {
#line 1382 "equiv_type.m"
                parse_tree__equiv_type__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 0) = ((MR_Box) (parse_tree__equiv_type__V_157_157));
#line 1382 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1382 "equiv_type.m"
              }
#line 1382 "equiv_type.m"
              {
#line 1382 "equiv_type.m"
                parse_tree__equiv_type__Msg2_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1382 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_67, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1382 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_67, 1) = ((MR_Box) (parse_tree__equiv_type__V_156_156));
#line 1382 "equiv_type.m"
              }
#line 1383 "equiv_type.m"
              {
#line 1383 "equiv_type.m"
                parse_tree__equiv_type__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_161_161, 0) = ((MR_Box) (parse_tree__equiv_type__Msg2_67));
#line 1383 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1383 "equiv_type.m"
              }
#line 1383 "equiv_type.m"
              {
#line 1383 "equiv_type.m"
                parse_tree__equiv_type__Spec2_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1383 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1383 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1383 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 2) = ((MR_Box) (parse_tree__equiv_type__V_161_161));
#line 1383 "equiv_type.m"
              }
#line 1384 "equiv_type.m"
              {
#line 1384 "equiv_type.m"
                MR_Word base;
#line 1384 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = base;
#line 1384 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec2_68));
#line 1384 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131));
#line 1384 "equiv_type.m"
              }
#line 1385 "equiv_type.m"
              parse_tree__equiv_type__ExtraTypesAndModes_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1397 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1398 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 7444 "parse_tree.equiv_type.c"
            }
#line 7446 "parse_tree.equiv_type.c"
        }
#line 7448 "parse_tree.equiv_type.c"
    else
#line 7450 "parse_tree.equiv_type.c"
      {
#line 1362 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypesAndModes_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1362 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1397 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1398 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 7460 "parse_tree.equiv_type.c"
      }
#line 1403 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraTypesAndModes_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1401 "equiv_type.m"
      {
#line 1402 "equiv_type.m"
        *parse_tree__equiv_type__TypesAndModes_33 = parse_tree__equiv_type__TypesAndModes1_43;
#line 1402 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129;
#line 1401 "equiv_type.m"
      }
#line 1403 "equiv_type.m"
    else
#line 1404 "equiv_type.m"
      {
#line 1404 "equiv_type.m"
        MR_Word parse_tree__equiv_type__OrigItemId_73;
#line 1404 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_167_167;
#line 1404 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_168_168;
#line 1404 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_169_169;

#line 1405 "equiv_type.m"
        {
#line 1405 "equiv_type.m"
          parse_tree__equiv_type__V_167_167 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_26);
        }
#line 1406 "equiv_type.m"
        {
#line 1406 "equiv_type.m"
          parse_tree__equiv_type__V_169_169 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes0_32);
        }
#line 1406 "equiv_type.m"
        {
#line 1406 "equiv_type.m"
          parse_tree__equiv_type__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1406 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_168_168, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1406 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_168_168, 1) = ((MR_Box) (parse_tree__equiv_type__V_169_169));
#line 1406 "equiv_type.m"
        }
#line 1405 "equiv_type.m"
        {
#line 1405 "equiv_type.m"
          parse_tree__equiv_type__OrigItemId_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1405 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_73, 0) = ((MR_Box) (parse_tree__equiv_type__V_167_167));
#line 1405 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_73, 1) = ((MR_Box) (parse_tree__equiv_type__V_168_168));
#line 1405 "equiv_type.m"
        }
#line 1407 "equiv_type.m"
        {
#line 1407 "equiv_type.m"
          parse_tree__equiv_type__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_73, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79);
        }
#line 1408 "equiv_type.m"
        {
#line 1408 "equiv_type.m"
          *parse_tree__equiv_type__TypesAndModes_33 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__ExtraTypesAndModes_60);
        }
#line 1404 "equiv_type.m"
      }
#line 1323 "equiv_type.m"
  }
#line 1308 "equiv_type.m"
}

#line 1578 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0_1(
#line 1578 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1578 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1578 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2)
#line 1578 "equiv_type.m"
{
#line 1578 "equiv_type.m"
  {
#line 1578 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1578 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_ExpandedItemSet_6;

#line 1578 "equiv_type.m"
    {
#line 1578 "equiv_type.m"
      parse_tree__equiv_type__record_expanded_item_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv1_ExpandedItemSet_6);
    }
#line 1578 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv1_ExpandedItemSet_6));
#line 1578 "equiv_type.m"
  }
#line 1578 "equiv_type.m"
}

#line 1190 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_19,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_20,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1190 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_45,
#line 1190 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_46,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_47,
#line 1190 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_48,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_49,
#line 1190 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_50,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_51,
#line 1190 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52,
#line 1190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53,
#line 1190 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_54)
#line 1190 "equiv_type.m"
{
#line 1198 "equiv_type.m"
  {
#line 1198 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1198 "equiv_type.m"
    MR_Word parse_tree__equiv_type__AlreadyExpanded_32;
#line 1233 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Args0_34;
#line 1233 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Body0_35;
#line 1233 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Renaming_36;
#line 1233 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56;
#line 1205 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvVarSet_33;
#line 1205 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_55_55;
#line 1205 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv0_V_55_55;

#line 1199 "equiv_type.m"
    {
#line 1199 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21);
    }
#line 1201 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1200 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 1;
#line 1201 "equiv_type.m"
    else
#line 1202 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 0;
#line 1205 "equiv_type.m"
    {
#line 1205 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, parse_tree__equiv_type__EqvMap_20, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), &parse_tree__equiv_type__conv0_V_55_55);
    }
#line 1205 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1205 "equiv_type.m"
      {
#line 1205 "equiv_type.m"
        parse_tree__equiv_type__V_55_55 = ((MR_Word) parse_tree__equiv_type__conv0_V_55_55);
#line 1205 "equiv_type.m"
        parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1205 "equiv_type.m"
      }
#line 1205 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1205 "equiv_type.m"
      {
#line 1205 "equiv_type.m"
        parse_tree__equiv_type__EqvVarSet_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_55_55, (MR_Integer) 0)));
#line 1205 "equiv_type.m"
        parse_tree__equiv_type__Args0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_55_55, (MR_Integer) 1)));
#line 1205 "equiv_type.m"
        parse_tree__equiv_type__Body0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_55_55, (MR_Integer) 2)));
#line 1215 "equiv_type.m"
        {
#line 1215 "equiv_type.m"
          parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_49, parse_tree__equiv_type__EqvVarSet_33, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, &parse_tree__equiv_type__Renaming_36);
        }
#line 1217 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_Circ_0_47 == (MR_Integer) 0);
#line 1205 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1218 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__AlreadyExpanded_32 == (MR_Integer) 0);
#line 1205 "equiv_type.m"
      }
#line 1233 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1220 "equiv_type.m"
      {
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_71_71;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_12_94;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_37;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body1_38;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorItem_39;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst_40;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body_41;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_59_59;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_62_62;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_90_90;
#line 1230 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_42_42;

#line 1250 "equiv_type.m"
        if ((parse_tree__equiv_type__Location_19 == (MR_Integer) 2))
#line 1258 "equiv_type.m"
          {
#line 1258 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TypeCtorSymName_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1259 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___TypeCtorArity_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1260 "equiv_type.m"
            {
#line 1260 "equiv_type.m"
              parse_tree__prog_data__record_sym_name_module_as_used_4_p_0((MR_Integer) 1, parse_tree__equiv_type__TypeCtorSymName_79, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
            }
#line 1258 "equiv_type.m"
          }
#line 1250 "equiv_type.m"
        else
#line 1250 "equiv_type.m"
          if ((parse_tree__equiv_type__Location_19 == (MR_Integer) 1))
#line 1258 "equiv_type.m"
            {
#line 1258 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeCtorSymName_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1259 "equiv_type.m"
              MR_Integer parse_tree__equiv_type___TypeCtorArity_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1260 "equiv_type.m"
              {
#line 1260 "equiv_type.m"
                parse_tree__prog_data__record_sym_name_module_as_used_4_p_0((MR_Integer) 0, parse_tree__equiv_type__TypeCtorSymName_84, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
              }
#line 1258 "equiv_type.m"
            }
#line 1250 "equiv_type.m"
          else
#line 1250 "equiv_type.m"
            parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53;
#line 1222 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_46 = (MR_Integer) 1;
#line 7746 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__TypeInfo_71_71 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[0];
#line 1223 "equiv_type.m"
        {
#line 1223 "equiv_type.m"
          mercury__map__apply_to_list_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__Args0_34, parse_tree__equiv_type__Renaming_36, &parse_tree__equiv_type__Args_37);
        }
#line 1224 "equiv_type.m"
        {
#line 1224 "equiv_type.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(parse_tree__equiv_type__Renaming_36, parse_tree__equiv_type__Body0_35, &parse_tree__equiv_type__Body1_38);
        }
#line 1225 "equiv_type.m"
        {
#line 1225 "equiv_type.m"
          parse_tree__equiv_type__TypeCtorItem_39 = recompilation__type_ctor_to_item_name_1_f_0(parse_tree__equiv_type__TypeCtor_23);
        }
#line 1226 "equiv_type.m"
        {
#line 1226 "equiv_type.m"
          parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1226 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__TypeCtorItem_39));
#line 1226 "equiv_type.m"
        }
#line 1578 "equiv_type.m"
        {
#line 1578 "equiv_type.m"
          parse_tree__equiv_type__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1578 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_90_90, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
#line 1578 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_90_90, 1) = ((MR_Box) (parse_tree__equiv_type__replace_type_ctor_18_p_0_1));
#line 1578 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1578 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_90_90, 3) = ((MR_Box) (parse_tree__equiv_type__V_59_59));
#line 1578 "equiv_type.m"
        }
#line 7787 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__TypeInfo_12_94 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[0];
#line 1578 "equiv_type.m"
        {
#line 1578 "equiv_type.m"
          mercury__maybe__map_maybe_3_p_0(parse_tree__equiv_type__TypeInfo_12_94, parse_tree__equiv_type__TypeInfo_12_94, parse_tree__equiv_type__V_90_90, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_51, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60);
        }
#line 1228 "equiv_type.m"
        {
#line 1228 "equiv_type.m"
          mercury__map__from_corresponding_lists_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Args_37, parse_tree__equiv_type__TArgs_24, &parse_tree__equiv_type__Subst_40);
        }
#line 1229 "equiv_type.m"
        {
#line 1229 "equiv_type.m"
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__equiv_type__Subst_40, parse_tree__equiv_type__Body1_38, &parse_tree__equiv_type__Body_41);
        }
#line 1231 "equiv_type.m"
        {
#line 1231 "equiv_type.m"
          parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_23));
#line 1231 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21));
#line 1231 "equiv_type.m"
        }
#line 1230 "equiv_type.m"
        {
#line 1230 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_19, parse_tree__equiv_type__EqvMap_20, parse_tree__equiv_type__V_62_62, parse_tree__equiv_type__Body_41, parse_tree__equiv_type__Type_26, &parse_tree__equiv_type__V_42_42, parse_tree__equiv_type__STATE_VARIABLE_Circ_48, parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, parse_tree__equiv_type__STATE_VARIABLE_VarSet_50, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_54);
        }
#line 1220 "equiv_type.m"
      }
#line 1233 "equiv_type.m"
    else
#line 1241 "equiv_type.m"
      {
#line 1238 "equiv_type.m"
        if ((parse_tree__equiv_type__STATE_VARIABLE_Changed_0_45 == (MR_Integer) 0))
#line 1240 "equiv_type.m"
          *parse_tree__equiv_type__Type_26 = parse_tree__equiv_type__Type0_22;
#line 1238 "equiv_type.m"
        else
#line 1235 "equiv_type.m"
          {
#line 1235 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SymName_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1236 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___Arity_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1237 "equiv_type.m"
            {
#line 1237 "equiv_type.m"
              MR_Word base;
#line 1237 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "equiv_type.m"
              *parse_tree__equiv_type__Type_26 = base;
#line 1237 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_43));
#line 1237 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__TArgs_24));
#line 1237 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_25));
#line 1237 "equiv_type.m"
            }
#line 1235 "equiv_type.m"
          }
#line 1242 "equiv_type.m"
        {
#line 1242 "equiv_type.m"
          mercury__bool__or_3_p_0(parse_tree__equiv_type__AlreadyExpanded_32, parse_tree__equiv_type__STATE_VARIABLE_Circ_0_47, parse_tree__equiv_type__STATE_VARIABLE_Circ_48);
        }
#line 1242 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_54 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53;
#line 1242 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_51;
#line 1242 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_50 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_49;
#line 1242 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_46 = parse_tree__equiv_type__STATE_VARIABLE_Changed_0_45;
#line 1241 "equiv_type.m"
      }
#line 1198 "equiv_type.m"
  }
#line 1190 "equiv_type.m"
}

#line 1099 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_2_13_p_0(
#line 1099 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 1099 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_15,
#line 1099 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1099 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1099 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1099 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1099 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1099 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1099 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1099 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1099 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1099 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1099 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52)
#line 1099 "equiv_type.m"
{
#line 1107 "equiv_type.m"
  {
#line 1107 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1107 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 2))))
#line 1122 "equiv_type.m"
      {
#line 1123 "equiv_type.m"
        *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1124 "equiv_type.m"
        *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1125 "equiv_type.m"
        *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1125 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1125 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1125 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1122 "equiv_type.m"
      }
#line 1107 "equiv_type.m"
    else
#line 1107 "equiv_type.m"
      if (((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 1))))
#line 1112 "equiv_type.m"
        {
#line 1112 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)));
#line 1112 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1112 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs_28;
#line 1112 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ArgsChanged_29;
#line 1112 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Circ0_30;
#line 1112 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__Arity_31;
#line 1112 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeCtor_32;
#line 1112 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72;
#line 1112 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73;
#line 1112 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74;
#line 1112 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Kind_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1113 "equiv_type.m"
          {
#line 1113 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__TArgs0_27, &parse_tree__equiv_type__TArgs_28, &parse_tree__equiv_type__ArgsChanged_29, (MR_Integer) 0, &parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74);
          }
#line 1116 "equiv_type.m"
          {
#line 1116 "equiv_type.m"
            parse_tree__equiv_type__Arity_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TArgs_28);
          }
#line 1117 "equiv_type.m"
          {
#line 1117 "equiv_type.m"
            parse_tree__equiv_type__TypeCtor_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_26));
#line 1117 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_31));
#line 1117 "equiv_type.m"
          }
#line 1118 "equiv_type.m"
          {
#line 1118 "equiv_type.m"
            parse_tree__equiv_type__replace_type_ctor_18_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Type0_17, parse_tree__equiv_type__TypeCtor_32, parse_tree__equiv_type__TArgs_28, parse_tree__equiv_type__Kind_78, parse_tree__equiv_type__Type_18, parse_tree__equiv_type__ArgsChanged_29, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
#line 1118 "equiv_type.m"
            return;
          }
#line 1112 "equiv_type.m"
        }
#line 1107 "equiv_type.m"
      else
#line 1107 "equiv_type.m"
        if (((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 0))))
#line 1107 "equiv_type.m"
          {
#line 1108 "equiv_type.m"
            *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1109 "equiv_type.m"
            *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1110 "equiv_type.m"
            *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1110 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1110 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1110 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1107 "equiv_type.m"
          }
#line 1107 "equiv_type.m"
        else
#line 1107 "equiv_type.m"
          if (((((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1165 "equiv_type.m"
            {
#line 1165 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1165 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1165 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1165 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_86;

#line 1166 "equiv_type.m"
              {
#line 1166 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_85, &parse_tree__equiv_type__Args_86, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1172 "equiv_type.m"
              if ((*parse_tree__equiv_type__Changed_19 == (MR_Integer) 0))
#line 1174 "equiv_type.m"
                *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1172 "equiv_type.m"
              else
#line 1171 "equiv_type.m"
                {
#line 1171 "equiv_type.m"
                  MR_Word base;
#line 1171 "equiv_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = base;
#line 1171 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1171 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Var_83));
#line 1171 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Args_86));
#line 1171 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Kind_84));
#line 1171 "equiv_type.m"
                }
#line 1165 "equiv_type.m"
            }
#line 1107 "equiv_type.m"
          else
#line 1107 "equiv_type.m"
            if (((((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1127 "equiv_type.m"
              {
#line 1127 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Args0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1127 "equiv_type.m"
                MR_Word parse_tree__equiv_type__MaybeRet0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1127 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Purity_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1127 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Args_38;
#line 1127 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ArgsCirc_39;
#line 1127 "equiv_type.m"
                MR_Word parse_tree__equiv_type__MaybeRet_44;
#line 1127 "equiv_type.m"
                MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1127 "equiv_type.m"
                MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1127 "equiv_type.m"
                MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1127 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ArgsChanged_79;

#line 1128 "equiv_type.m"
                {
#line 1128 "equiv_type.m"
                  parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_34, &parse_tree__equiv_type__Args_38, &parse_tree__equiv_type__ArgsChanged_79, (MR_Integer) 0, &parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67);
                }
#line 1139 "equiv_type.m"
                if ((parse_tree__equiv_type__MaybeRet0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1140 "equiv_type.m"
                  {
#line 1141 "equiv_type.m"
                    parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1142 "equiv_type.m"
                    *parse_tree__equiv_type__Changed_19 = parse_tree__equiv_type__ArgsChanged_79;
#line 1143 "equiv_type.m"
                    *parse_tree__equiv_type__Circ_20 = parse_tree__equiv_type__ArgsCirc_39;
#line 1143 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1143 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1143 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1140 "equiv_type.m"
                  }
#line 1139 "equiv_type.m"
                else
#line 1132 "equiv_type.m"
                  {
#line 1132 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Ret0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet0_35, (MR_Integer) 0)));
#line 1132 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Ret_41;
#line 1132 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__RetChanged_42;
#line 1132 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__RetCirc_43;

#line 1133 "equiv_type.m"
                    {
#line 1133 "equiv_type.m"
                      parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Ret0_40, &parse_tree__equiv_type__Ret_41, &parse_tree__equiv_type__RetChanged_42, &parse_tree__equiv_type__RetCirc_43, parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
                    }
#line 1136 "equiv_type.m"
                    {
#line 1136 "equiv_type.m"
                      parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "equiv_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet_44, 0) = ((MR_Box) (parse_tree__equiv_type__Ret_41));
#line 1136 "equiv_type.m"
                    }
#line 1137 "equiv_type.m"
                    {
#line 1137 "equiv_type.m"
                      *parse_tree__equiv_type__Changed_19 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsChanged_79, parse_tree__equiv_type__RetChanged_42);
                    }
#line 1138 "equiv_type.m"
                    {
#line 1138 "equiv_type.m"
                      *parse_tree__equiv_type__Circ_20 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__RetCirc_43);
                    }
#line 1132 "equiv_type.m"
                  }
#line 1148 "equiv_type.m"
                if ((*parse_tree__equiv_type__Changed_19 == (MR_Integer) 0))
#line 1150 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1148 "equiv_type.m"
                else
#line 1147 "equiv_type.m"
                  {
#line 1147 "equiv_type.m"
                    MR_Word base;
#line 1147 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1147 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1147 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_38));
#line 1147 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeRet_44));
#line 1147 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Purity_36));
#line 1147 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 1147 "equiv_type.m"
                  }
#line 1127 "equiv_type.m"
              }
#line 1107 "equiv_type.m"
            else
#line 1107 "equiv_type.m"
              if (((((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1177 "equiv_type.m"
                {
#line 1177 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RawType0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1177 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RawType_46;
#line 1177 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Kind_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1178 "equiv_type.m"
                  {
#line 1178 "equiv_type.m"
                    parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__RawType0_45, &parse_tree__equiv_type__RawType_46, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
                  }
#line 1184 "equiv_type.m"
                  if ((*parse_tree__equiv_type__Changed_19 == (MR_Integer) 0))
#line 1186 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1184 "equiv_type.m"
                  else
#line 1183 "equiv_type.m"
                    {
#line 1183 "equiv_type.m"
                      MR_Word base;
#line 1183 "equiv_type.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "equiv_type.m"
                      *parse_tree__equiv_type__Type_18 = base;
#line 1183 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1183 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__RawType_46));
#line 1183 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_87));
#line 1183 "equiv_type.m"
                    }
#line 1177 "equiv_type.m"
                }
#line 1107 "equiv_type.m"
              else
#line 1153 "equiv_type.m"
                {
#line 1153 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Kind_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1153 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Args0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1153 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Args_82;

#line 1154 "equiv_type.m"
                  {
#line 1154 "equiv_type.m"
                    parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_81, &parse_tree__equiv_type__Args_82, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
                  }
#line 1160 "equiv_type.m"
                  if ((*parse_tree__equiv_type__Changed_19 == (MR_Integer) 0))
#line 1162 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1160 "equiv_type.m"
                  else
#line 1159 "equiv_type.m"
                    {
#line 1159 "equiv_type.m"
                      MR_Word base;
#line 1159 "equiv_type.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "equiv_type.m"
                      *parse_tree__equiv_type__Type_18 = base;
#line 1159 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1159 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_82));
#line 1159 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_80));
#line 1159 "equiv_type.m"
                    }
#line 1153 "equiv_type.m"
                }
#line 1107 "equiv_type.m"
  }
#line 1099 "equiv_type.m"
}

#line 1086 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_11_p_0(
#line 1086 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 1086 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 1086 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1086 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1086 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1086 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1086 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1086 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1086 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1086 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1086 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26)
#line 1086 "equiv_type.m"
{
#line 1092 "equiv_type.m"
  {
#line 1092 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1093 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_20_20;

#line 1093 "equiv_type.m"
    {
#line 1093 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_12, parse_tree__equiv_type__EqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_14, parse_tree__equiv_type__Type_15, parse_tree__equiv_type__Changed_16, &parse_tree__equiv_type__V_20_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_22, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);
    }
#line 1092 "equiv_type.m"
  }
#line 1086 "equiv_type.m"
}

#line 1046 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1046 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 1046 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 1046 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 1046 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 1046 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 1046 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13)
#line 1046 "equiv_type.m"
{
#line 1053 "equiv_type.m"
  {
#line 1053 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1053 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1053 "equiv_type.m"
      {
#line 1053 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1054 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12;
#line 1054 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10;
#line 1054 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_9 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8;
#line 1054 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Circ_7 = parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6;
#line 1053 "equiv_type.m"
      }
#line 1053 "equiv_type.m"
    else
#line 1057 "equiv_type.m"
      {
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg_34;
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_35;
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Name_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 0)));
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 1)));
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Width_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 2)));
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 3)));
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_44;
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_46;
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58;
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59;
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60;
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_64_64;
#line 1059 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 1059 "equiv_type.m"
        {
#line 1059 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Type0_41, &parse_tree__equiv_type__Type_44, &parse_tree__equiv_type__V_45_45, &parse_tree__equiv_type__ContainsCirc_46, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60);
        }
#line 1063 "equiv_type.m"
        if ((parse_tree__equiv_type__Width_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1064 "equiv_type.m"
          {
#line 1064 "equiv_type.m"
          }
#line 1063 "equiv_type.m"
        else
#line 1063 "equiv_type.m"
          if ((parse_tree__equiv_type__Width_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1062 "equiv_type.m"
            {
#line 1062 "equiv_type.m"
            }
#line 1063 "equiv_type.m"
          else
#line 1071 "equiv_type.m"
            {
#line 1069 "equiv_type.m"
              {
#line 1069 "equiv_type.m"
                parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__equiv_type__Type_44, parse_tree__equiv_type__Type0_41);
              }
#line 1071 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 1070 "equiv_type.m"
                {
#line 1070 "equiv_type.m"
                }
#line 1071 "equiv_type.m"
              else
#line 1072 "equiv_type.m"
                {
#line 1072 "equiv_type.m"
                  {
#line 1072 "equiv_type.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_ctor_arg_list_2\'/13", (MR_String) "changed type of packed argument");
#line 1072 "equiv_type.m"
                    return;
                  }
#line 1072 "equiv_type.m"
                }
#line 1071 "equiv_type.m"
            }
#line 1075 "equiv_type.m"
        {
#line 1075 "equiv_type.m"
          parse_tree__equiv_type__Arg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 0) = ((MR_Box) (parse_tree__equiv_type__Name_40));
#line 1075 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 1) = ((MR_Box) (parse_tree__equiv_type__Type_44));
#line 1075 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 2) = ((MR_Box) (parse_tree__equiv_type__Width_42));
#line 1075 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 3) = ((MR_Box) (parse_tree__equiv_type__Context_43));
#line 1075 "equiv_type.m"
        }
#line 1076 "equiv_type.m"
        {
#line 1076 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_64_64 = mercury__bool__or_2_f_0(parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6, parse_tree__equiv_type__ContainsCirc_46);
        }
#line 1077 "equiv_type.m"
        {
#line 1077 "equiv_type.m"
          parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Args0_33, &parse_tree__equiv_type__Args_35, parse_tree__equiv_type__STATE_VARIABLE_Circ_64_64, parse_tree__equiv_type__STATE_VARIABLE_Circ_7, parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58, parse_tree__equiv_type__STATE_VARIABLE_VarSet_9, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13);
        }
#line 1056 "equiv_type.m"
        {
#line 1056 "equiv_type.m"
          MR_Word base;
#line 1056 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1056 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Arg_34));
#line 1056 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_35));
#line 1056 "equiv_type.m"
        }
#line 1057 "equiv_type.m"
      }
#line 1053 "equiv_type.m"
  }
#line 1046 "equiv_type.m"
}

#line 1006 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14)
#line 1006 "equiv_type.m"
{
#line 1012 "equiv_type.m"
  {
#line 1012 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1012 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1012 "equiv_type.m"
      {
#line 1012 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1012 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 1013 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13;
#line 1013 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11;
#line 1013 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_10 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9;
#line 1013 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__8_8 = parse_tree__equiv_type__HeadVar__7_7;
#line 1012 "equiv_type.m"
      }
#line 1012 "equiv_type.m"
    else
#line 1016 "equiv_type.m"
      {
#line 1016 "equiv_type.m"
        MR_Word parse_tree__equiv_type__T0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1016 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Ts0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1016 "equiv_type.m"
        MR_Word parse_tree__equiv_type__T_42;
#line 1016 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed0_43;
#line 1016 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_44;
#line 1016 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Ts_45;
#line 1016 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed1_46;
#line 1016 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55;
#line 1016 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1016 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 1016 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58;

#line 1017 "equiv_type.m"
        {
#line 1017 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__T0_34, &parse_tree__equiv_type__T_42, &parse_tree__equiv_type__Changed0_43, &parse_tree__equiv_type__ContainsCirc_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
        }
#line 1019 "equiv_type.m"
        {
#line 1019 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ContainsCirc_44, parse_tree__equiv_type__HeadVar__7_7);
        }
#line 1020 "equiv_type.m"
        {
#line 1020 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Ts0_35, &parse_tree__equiv_type__Ts_45, &parse_tree__equiv_type__Changed1_46, parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58, parse_tree__equiv_type__HeadVar__8_8, parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_VarSet_10, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);
        }
#line 1023 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed0_43 == (MR_Integer) 1);
#line 1024 "equiv_type.m"
        if (!(parse_tree__equiv_type__succeeded))
#line 1024 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed1_46 == (MR_Integer) 1);
#line 1029 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1027 "equiv_type.m"
          {
#line 1027 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 1;
#line 1028 "equiv_type.m"
            {
#line 1028 "equiv_type.m"
              MR_Word base;
#line 1028 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1028 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__T_42));
#line 1028 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Ts_45));
#line 1028 "equiv_type.m"
            }
#line 1027 "equiv_type.m"
          }
#line 1029 "equiv_type.m"
        else
#line 1030 "equiv_type.m"
          {
#line 1030 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 1031 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__4_4;
#line 1030 "equiv_type.m"
          }
#line 1016 "equiv_type.m"
      }
#line 1012 "equiv_type.m"
  }
#line 1006 "equiv_type.m"
}

#line 996 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 996 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 996 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 996 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 996 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 996 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 996 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 996 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 996 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 996 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 996 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 996 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 996 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 996 "equiv_type.m"
{
#line 1002 "equiv_type.m"
  {
#line 1002 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1003 "equiv_type.m"
    {
#line 1003 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21, parse_tree__equiv_type__STATE_VARIABLE_Ts_22, parse_tree__equiv_type__Changed_16, (MR_Integer) 0, parse_tree__equiv_type__ContainsCirc_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
#line 1003 "equiv_type.m"
      return;
    }
#line 1002 "equiv_type.m"
  }
#line 996 "equiv_type.m"
}

#line 985 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 985 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 985 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 985 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_20,
#line 985 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_21,
#line 985 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 985 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 985 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 985 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 985 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 985 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 985 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 985 "equiv_type.m"
{
#line 992 "equiv_type.m"
  {
#line 992 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 993 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 993 "equiv_type.m"
    {
#line 993 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_12, parse_tree__equiv_type__EqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Ts_0_20, parse_tree__equiv_type__STATE_VARIABLE_Ts_21, parse_tree__equiv_type__Changed_15, (MR_Integer) 0, &parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 992 "equiv_type.m"
  }
#line 985 "equiv_type.m"
}

#line 858 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 858 "equiv_type.m"
{
#line 858 "equiv_type.m"
  {
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 858 "equiv_type.m"
  }
#line 858 "equiv_type.m"
}

#line 965 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 965 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 965 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 965 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 965 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 965 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_24,
#line 965 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_25,
#line 965 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 965 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 965 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 965 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29)
#line 965 "equiv_type.m"
{
#line 973 "equiv_type.m"
  {
#line 973 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 973 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_84;
#line 973 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 973 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 973 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 2)));
#line 973 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Targs0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 3)));
#line 973 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Ctxt_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 4)));
#line 973 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_18;
#line 973 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Targs_19;
#line 973 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_30_30;
#line 973 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_31_31;
#line 973 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32_32;
#line 973 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_71_71;
#line 1043 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_25;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_27;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_29;

#line 1043 "equiv_type.m"
    {
#line 1043 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(parse_tree__equiv_type__Location_11, parse_tree__equiv_type__EqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Targs0_16, &parse_tree__equiv_type__Targs_19, (MR_Integer) 0, &parse_tree__equiv_type__V_23_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_24, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_30_30, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_31_31, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32_32);
    }
#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      parse_tree__equiv_type__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_71_71, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_71_71, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_10_p_0_1));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_71_71, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_71_71, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_12));
#line 858 "equiv_type.m"
    }
#line 8852 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_84, parse_tree__equiv_type__TypeCtorInfo_38_84, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_71_71, parse_tree__equiv_type__Constraints0_14, &parse_tree__equiv_type__Constraints_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_30_30)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_25, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_31_31)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_27, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32_32)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_29);
    }
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_25 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_25);
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_27);
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_29);
#line 972 "equiv_type.m"
    {
#line 972 "equiv_type.m"
      MR_Word base;
#line 972 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 972 "equiv_type.m"
      *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 972 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_13));
#line 972 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Constraints_18));
#line 972 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TName_15));
#line 972 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Targs_19));
#line 972 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Ctxt_17));
#line 972 "equiv_type.m"
    }
#line 973 "equiv_type.m"
  }
#line 965 "equiv_type.m"
}

#line 962 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 962 "equiv_type.m"
{
#line 962 "equiv_type.m"
  {
#line 962 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 962 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_HeadVar__4_4;
#line 962 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25;
#line 962 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27;
#line 962 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29;

#line 962 "equiv_type.m"
    {
#line 962 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_HeadVar__4_4, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29);
    }
#line 962 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_HeadVar__4_4));
#line 962 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25));
#line 962 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27));
#line 962 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29));
#line 962 "equiv_type.m"
  }
#line 962 "equiv_type.m"
}

#line 955 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 955 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 955 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 955 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 955 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 955 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 955 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 955 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 955 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 955 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 955 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 955 "equiv_type.m"
{
#line 961 "equiv_type.m"
  {
#line 961 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 961 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 961 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 962 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 962 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 962 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 962 "equiv_type.m"
    {
#line 962 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 962 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 962 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1));
#line 962 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 962 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 962 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_12));
#line 962 "equiv_type.m"
    }
#line 9000 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 962 "equiv_type.m"
    {
#line 962 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17, parse_tree__equiv_type__STATE_VARIABLE_Ctors_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 962 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 962 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 962 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 961 "equiv_type.m"
  }
#line 955 "equiv_type.m"
}

#line 934 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10)
#line 934 "equiv_type.m"
{
#line 939 "equiv_type.m"
  {
#line 939 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 939 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 939 "equiv_type.m"
      {
#line 939 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 940 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9;
#line 939 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7;
#line 939 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_6 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5;
#line 939 "equiv_type.m"
      }
#line 939 "equiv_type.m"
    else
#line 942 "equiv_type.m"
      {
#line 942 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Var_24;
#line 942 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_25;
#line 942 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 942 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_27;
#line 942 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst_28;
#line 942 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 942 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_40_40;
#line 942 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41;
#line 942 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42;
#line 942 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 1093 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_32_32;
#line 1093 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_61_61;

#line 941 "equiv_type.m"
        parse_tree__equiv_type__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 0)));
#line 941 "equiv_type.m"
        parse_tree__equiv_type__Type0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 1)));
#line 1093 "equiv_type.m"
        {
#line 1093 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_25, &parse_tree__equiv_type__Type_27, &parse_tree__equiv_type__V_32_32, &parse_tree__equiv_type__V_61_61, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43);
        }
#line 942 "equiv_type.m"
        {
#line 942 "equiv_type.m"
          parse_tree__equiv_type__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 942 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 0) = ((MR_Box) (parse_tree__equiv_type__Var_24));
#line 942 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 1) = ((MR_Box) (parse_tree__equiv_type__Type_27));
#line 942 "equiv_type.m"
        }
#line 946 "equiv_type.m"
        {
#line 946 "equiv_type.m"
          parse_tree__equiv_type__replace_in_subst_10_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__Subst0_26, &parse_tree__equiv_type__Subst_28, parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 942 "equiv_type.m"
        {
#line 942 "equiv_type.m"
          MR_Word base;
#line 942 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 942 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_40_40));
#line 942 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Subst_28));
#line 942 "equiv_type.m"
        }
#line 942 "equiv_type.m"
      }
#line 939 "equiv_type.m"
  }
#line 934 "equiv_type.m"
}

#line 892 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_method_11_p_0(
#line 892 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 892 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 892 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_14,
#line 892 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Method0_15,
#line 892 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Method_16,
#line 892 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_47,
#line 892 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_48,
#line 892 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 892 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 892 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_51,
#line 892 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_52)
#line 892 "equiv_type.m"
{
#line 903 "equiv_type.m"
  {
#line 903 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 903 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Method0_15)) == (MR_mktag((MR_Integer) 0))))
#line 903 "equiv_type.m"
      {
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeVarSet0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 0)));
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__InstVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 1)));
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 2)));
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 3)));
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 4)));
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypesAndModes0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 5)));
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 6)));
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 7)));
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Det0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 8)));
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Cond_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 9)));
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Purity_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 10)));
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 11)));
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 12)));
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext_33;
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypesAndModes_34;
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeVarSet_35;
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_36;
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_37;
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Det_38;
#line 903 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_39;

#line 904 "equiv_type.m"
        {
#line 904 "equiv_type.m"
          parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__Location_12, parse_tree__equiv_type__PredName_24, parse_tree__equiv_type__PredOrFunc_23, parse_tree__equiv_type__Context_32, parse_tree__equiv_type__EqvMap_13, parse_tree__equiv_type__EqvInstMap_14, parse_tree__equiv_type__ClassContext0_31, &parse_tree__equiv_type__ClassContext_33, parse_tree__equiv_type__TypesAndModes0_25, &parse_tree__equiv_type__TypesAndModes_34, parse_tree__equiv_type__TypeVarSet0_20, &parse_tree__equiv_type__TypeVarSet_35, parse_tree__equiv_type__WithType0_26, &parse_tree__equiv_type__WithType_36, parse_tree__equiv_type__WithInst0_27, &parse_tree__equiv_type__WithInst_37, parse_tree__equiv_type__Det0_28, &parse_tree__equiv_type__Det_38, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_47, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50, &parse_tree__equiv_type__NewSpecs_39);
        }
#line 909 "equiv_type.m"
        {
#line 909 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_52 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_39, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_51);
        }
#line 910 "equiv_type.m"
        {
#line 910 "equiv_type.m"
          MR_Word base;
#line 910 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
#line 910 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 910 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_35));
#line 910 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_21));
#line 910 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_22));
#line 910 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_23));
#line 910 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__PredName_24));
#line 910 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_34));
#line 910 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__WithType_36));
#line 910 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__WithInst_37));
#line 910 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__Det_38));
#line 910 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__Cond_29));
#line 910 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__Purity_30));
#line 910 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__ClassContext_33));
#line 910 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__equiv_type__Context_32));
#line 910 "equiv_type.m"
        }
#line 903 "equiv_type.m"
      }
#line 903 "equiv_type.m"
    else
#line 915 "equiv_type.m"
      {
#line 915 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorInfo_71_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 915 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 1)));
#line 915 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes0_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 3)));
#line 915 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes_42;
#line 915 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc_43;
#line 915 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes_44;
#line 915 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_53_53;
#line 915 "equiv_type.m"
        MR_Word parse_tree__equiv_type__InstVarSet_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 0)));
#line 915 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredName_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 2)));
#line 915 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 4)));
#line 915 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Det0_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 5)));
#line 915 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Cond_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 6)));
#line 915 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 7)));
#line 915 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_67;
#line 915 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Det_68;
#line 915 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_69;

#line 916 "equiv_type.m"
        {
#line 916 "equiv_type.m"
          parse_tree__equiv_type__V_53_53 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_71_71, parse_tree__equiv_type__Modes0_41);
        }
#line 916 "equiv_type.m"
        {
#line 916 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__PredName_62, parse_tree__equiv_type__V_53_53, parse_tree__equiv_type__Context_66, (MR_Integer) 1, parse_tree__equiv_type__EqvInstMap_14, &parse_tree__equiv_type__ExtraModes_42, parse_tree__equiv_type__MaybePredOrFunc0_40, &parse_tree__equiv_type__MaybePredOrFunc_43, parse_tree__equiv_type__WithInst0_63, &parse_tree__equiv_type__WithInst_67, parse_tree__equiv_type__Det0_64, &parse_tree__equiv_type__Det_68, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_47, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50, &parse_tree__equiv_type__NewSpecs_69);
        }
#line 923 "equiv_type.m"
        if ((parse_tree__equiv_type__ExtraModes_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 922 "equiv_type.m"
          parse_tree__equiv_type__Modes_44 = parse_tree__equiv_type__Modes0_41;
#line 923 "equiv_type.m"
        else
#line 925 "equiv_type.m"
          {
#line 925 "equiv_type.m"
            parse_tree__equiv_type__Modes_44 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_71_71, parse_tree__equiv_type__Modes0_41, parse_tree__equiv_type__ExtraModes_42);
          }
#line 927 "equiv_type.m"
        {
#line 927 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_52 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_69, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_51);
        }
#line 928 "equiv_type.m"
        {
#line 928 "equiv_type.m"
          MR_Word base;
#line 928 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 928 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 928 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_61));
#line 928 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_43));
#line 928 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__PredName_62));
#line 928 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__equiv_type__Modes_44));
#line 928 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (parse_tree__equiv_type__WithInst_67));
#line 928 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (parse_tree__equiv_type__Det_68));
#line 928 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (parse_tree__equiv_type__Cond_65));
#line 928 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (parse_tree__equiv_type__Context_66));
#line 928 "equiv_type.m"
        }
#line 915 "equiv_type.m"
      }
#line 903 "equiv_type.m"
  }
#line 892 "equiv_type.m"
}

#line 889 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
#line 889 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 889 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 889 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 889 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 889 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 889 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 889 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 889 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 889 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 889 "equiv_type.m"
{
#line 889 "equiv_type.m"
  {
#line 889 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 889 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Method_16;
#line 889 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_48;
#line 889 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_50;
#line 889 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_52;

#line 889 "equiv_type.m"
    {
#line 889 "equiv_type.m"
      parse_tree__equiv_type__replace_in_class_method_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Method_16, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_48, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_50, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_52);
    }
#line 889 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Method_16));
#line 889 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_48));
#line 889 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_50));
#line 889 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_52));
#line 889 "equiv_type.m"
  }
#line 889 "equiv_type.m"
}

#line 881 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
#line 881 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 881 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassInterface0_13,
#line 881 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 881 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 881 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassInterface_16,
#line 881 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 881 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 881 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 881 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23,
#line 881 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24,
#line 881 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_25)
#line 881 "equiv_type.m"
{
#line 888 "equiv_type.m"
  {
#line 888 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 888 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 888 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_26_26;
#line 889 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21;
#line 889 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23;
#line 889 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25;

#line 889 "equiv_type.m"
    {
#line 889 "equiv_type.m"
      parse_tree__equiv_type__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 889 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0]));
#line 889 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_class_interface_11_p_0_1));
#line 889 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 889 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 3) = ((MR_Box) (parse_tree__equiv_type__Location_12));
#line 889 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_14));
#line 889 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 5) = ((MR_Box) (parse_tree__equiv_type__EqvInstMap_15));
#line 889 "equiv_type.m"
    }
#line 9471 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0;
#line 889 "equiv_type.m"
    {
#line 889 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, (MR_Word) &parse_tree__equiv_type_scalar_common_1[5], parse_tree__equiv_type__V_26_26, parse_tree__equiv_type__ClassInterface0_13, parse_tree__equiv_type__ClassInterface_16, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25);
    }
#line 889 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21);
#line 889 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23);
#line 889 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_Specs_25 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25);
#line 888 "equiv_type.m"
  }
#line 881 "equiv_type.m"
}

#line 867 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
#line 867 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 867 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 867 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Constraint0_13,
#line 867 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Constraint_14,
#line 867 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 867 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 867 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 867 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 867 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 867 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 867 "equiv_type.m"
{
#line 873 "equiv_type.m"
  {
#line 873 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 873 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_13, (MR_Integer) 0)));
#line 873 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_13, (MR_Integer) 1)));
#line 873 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes_20;
#line 1003 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 1003 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_22_22;

#line 1003 "equiv_type.m"
    {
#line 1003 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_11, parse_tree__equiv_type__EqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__ArgTypes0_19, &parse_tree__equiv_type__ArgTypes_20, &parse_tree__equiv_type__V_21_21, (MR_Integer) 0, &parse_tree__equiv_type__V_22_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
    }
#line 877 "equiv_type.m"
    {
#line 877 "equiv_type.m"
      MR_Word base;
#line 877 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 877 "equiv_type.m"
      *parse_tree__equiv_type__Constraint_14 = base;
#line 877 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_18));
#line 877 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ArgTypes_20));
#line 877 "equiv_type.m"
    }
#line 873 "equiv_type.m"
  }
#line 867 "equiv_type.m"
}

#line 858 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 858 "equiv_type.m"
{
#line 858 "equiv_type.m"
  {
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 858 "equiv_type.m"
  }
#line 858 "equiv_type.m"
}

#line 851 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 851 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 851 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 851 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Cs_0_17,
#line 851 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Cs_18,
#line 851 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 851 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 851 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 851 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 851 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 851 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 851 "equiv_type.m"
{
#line 857 "equiv_type.m"
  {
#line 857 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_12));
#line 858 "equiv_type.m"
    }
#line 9663 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Cs_0_17, parse_tree__equiv_type__STATE_VARIABLE_Cs_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 857 "equiv_type.m"
  }
#line 851 "equiv_type.m"
}

#line 858 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 858 "equiv_type.m"
{
#line 858 "equiv_type.m"
  {
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 858 "equiv_type.m"
  }
#line 858 "equiv_type.m"
}

#line 837 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 837 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 837 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 837 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 837 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 837 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 837 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 837 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 837 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 837 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 837 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 837 "equiv_type.m"
{
#line 843 "equiv_type.m"
  {
#line 843 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 843 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_61;
#line 843 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 0)));
#line 843 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 1)));
#line 843 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_20;
#line 843 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_21;
#line 843 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28;
#line 843 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29;
#line 843 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30;
#line 843 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_48_48;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30;

#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      parse_tree__equiv_type__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_12));
#line 858 "equiv_type.m"
    }
#line 9805 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_61, parse_tree__equiv_type__TypeCtorInfo_38_61, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_48_48, parse_tree__equiv_type__UnivCs0_18, &parse_tree__equiv_type__UnivCs_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
    }
#line 858 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28);
#line 858 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29);
#line 858 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
#line 847 "equiv_type.m"
    {
#line 847 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(parse_tree__equiv_type__Location_11, parse_tree__equiv_type__EqvMap_12, parse_tree__equiv_type__ExistCs0_19, &parse_tree__equiv_type__ExistCs_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 849 "equiv_type.m"
    {
#line 849 "equiv_type.m"
      MR_Word base;
#line 849 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 849 "equiv_type.m"
      *parse_tree__equiv_type__Cs_14 = base;
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_20));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_21));
#line 849 "equiv_type.m"
    }
#line 843 "equiv_type.m"
  }
#line 837 "equiv_type.m"
}

#line 816 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 816 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 816 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 816 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_3,
#line 816 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 816 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 816 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 816 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 816 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 816 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9)
#line 816 "equiv_type.m"
{
#line 822 "equiv_type.m"
  {
#line 822 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 822 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 822 "equiv_type.m"
      {
#line 822 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 822 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8;
#line 822 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6;
#line 822 "equiv_type.m"
      }
#line 822 "equiv_type.m"
    else
#line 825 "equiv_type.m"
      {
#line 825 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 825 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 825 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo_24;
#line 825 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos_25;
#line 825 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32;
#line 825 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33;

#line 826 "equiv_type.m"
        {
#line 826 "equiv_type.m"
          parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__EqvMap_2, parse_tree__equiv_type__EqvInstMap_3, parse_tree__equiv_type__MutableInfo0_22, &parse_tree__equiv_type__MutableInfo_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33);
        }
#line 828 "equiv_type.m"
        {
#line 828 "equiv_type.m"
          parse_tree__equiv_type__replace_in_constraint_store_9_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__EqvMap_2, parse_tree__equiv_type__EqvInstMap_3, parse_tree__equiv_type__MutableInfos0_23, &parse_tree__equiv_type__MutableInfos_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);
        }
#line 824 "equiv_type.m"
        {
#line 824 "equiv_type.m"
          MR_Word base;
#line 824 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 824 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__MutableInfo_24));
#line 824 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__MutableInfos_25));
#line 824 "equiv_type.m"
        }
#line 825 "equiv_type.m"
      }
#line 822 "equiv_type.m"
  }
#line 816 "equiv_type.m"
}

#line 775 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_15,
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_16,
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 775 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 775 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 775 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 775 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 775 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 775 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49)
#line 775 "equiv_type.m"
{
#line 785 "equiv_type.m"
  {
#line 785 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 785 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_18)) == (MR_mktag((MR_Integer) 0))))
#line 791 "equiv_type.m"
      {
#line 791 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EqPred_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 791 "equiv_type.m"
        MR_Word parse_tree__equiv_type__DirectArgFunctors_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 791 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeBody0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 791 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeBody_66;

#line 792 "equiv_type.m"
        {
#line 792 "equiv_type.m"
          parse_tree__equiv_type__replace_in_ctors_location_10_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeBody0_65, &parse_tree__equiv_type__TypeBody_66, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
        }
#line 794 "equiv_type.m"
        *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 795 "equiv_type.m"
        {
#line 795 "equiv_type.m"
          MR_Word base;
#line 795 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 795 "equiv_type.m"
          *parse_tree__equiv_type__TypeDefn_19 = base;
#line 795 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_66));
#line 795 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__EqPred_27));
#line 795 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__DirectArgFunctors_28));
#line 795 "equiv_type.m"
        }
#line 791 "equiv_type.m"
      }
#line 785 "equiv_type.m"
    else
#line 785 "equiv_type.m"
      if (((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_18)) == (MR_mktag((MR_Integer) 1))))
#line 785 "equiv_type.m"
        {
#line 785 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 785 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody_25;
#line 785 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_60_60;
#line 786 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_26_26;

#line 786 "equiv_type.m"
          {
#line 786 "equiv_type.m"
            parse_tree__equiv_type__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 786 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 786 "equiv_type.m"
          }
#line 786 "equiv_type.m"
          {
#line 786 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__V_60_60, parse_tree__equiv_type__TypeBody0_24, &parse_tree__equiv_type__TypeBody_25, &parse_tree__equiv_type__V_26_26, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
          }
#line 789 "equiv_type.m"
          {
#line 789 "equiv_type.m"
            MR_Word base;
#line 789 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 789 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = base;
#line 789 "equiv_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_25));
#line 789 "equiv_type.m"
          }
#line 785 "equiv_type.m"
        }
#line 785 "equiv_type.m"
      else
#line 785 "equiv_type.m"
        if (((((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 797 "equiv_type.m"
          {
#line 797 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SolverDetails0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 797 "equiv_type.m"
            MR_Word parse_tree__equiv_type__MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 797 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RepresentationType0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 0)));
#line 797 "equiv_type.m"
            MR_Word parse_tree__equiv_type__InitPred_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 1)));
#line 797 "equiv_type.m"
            MR_Word parse_tree__equiv_type__GroundInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 2)));
#line 797 "equiv_type.m"
            MR_Word parse_tree__equiv_type__AnyInst_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 3)));
#line 797 "equiv_type.m"
            MR_Word parse_tree__equiv_type__MutableInfos0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 4)));
#line 797 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RepresentationType_36;
#line 797 "equiv_type.m"
            MR_Word parse_tree__equiv_type__MutableInfos_38;
#line 797 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SolverDetails_39;
#line 797 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_50_50;
#line 797 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52;
#line 797 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 800 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_37_37;

#line 800 "equiv_type.m"
            {
#line 800 "equiv_type.m"
              parse_tree__equiv_type__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 800 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 800 "equiv_type.m"
            }
#line 800 "equiv_type.m"
            {
#line 800 "equiv_type.m"
              parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__V_50_50, parse_tree__equiv_type__RepresentationType0_31, &parse_tree__equiv_type__RepresentationType_36, &parse_tree__equiv_type__V_37_37, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53);
            }
#line 803 "equiv_type.m"
            {
#line 803 "equiv_type.m"
              parse_tree__equiv_type__replace_in_constraint_store_9_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__EqvInstMap_16, parse_tree__equiv_type__MutableInfos0_35, &parse_tree__equiv_type__MutableInfos_38, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
            }
#line 805 "equiv_type.m"
            {
#line 805 "equiv_type.m"
              parse_tree__equiv_type__SolverDetails_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 805 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 0) = ((MR_Box) (parse_tree__equiv_type__RepresentationType_36));
#line 805 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 1) = ((MR_Box) (parse_tree__equiv_type__InitPred_32));
#line 805 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 2) = ((MR_Box) (parse_tree__equiv_type__GroundInst_33));
#line 805 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 3) = ((MR_Box) (parse_tree__equiv_type__AnyInst_34));
#line 805 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 4) = ((MR_Box) (parse_tree__equiv_type__MutableInfos_38));
#line 805 "equiv_type.m"
            }
#line 807 "equiv_type.m"
            {
#line 807 "equiv_type.m"
              MR_Word base;
#line 807 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 807 "equiv_type.m"
              *parse_tree__equiv_type__TypeDefn_19 = base;
#line 807 "equiv_type.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 807 "equiv_type.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__SolverDetails_39));
#line 807 "equiv_type.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeUserEqComp_30));
#line 807 "equiv_type.m"
            }
#line 797 "equiv_type.m"
          }
#line 785 "equiv_type.m"
        else
#line 811 "equiv_type.m"
          {
#line 812 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = parse_tree__equiv_type__TypeDefn0_18;
#line 813 "equiv_type.m"
            *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 813 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_VarSet_45 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44;
#line 813 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46;
#line 813 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48;
#line 811 "equiv_type.m"
          }
#line 785 "equiv_type.m"
  }
#line 775 "equiv_type.m"
}

#line 691 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 691 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 691 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 691 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_12,
#line 691 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 691 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 691 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30,
#line 691 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31,
#line 691 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32,
#line 691 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33)
#line 691 "equiv_type.m"
{
#line 698 "equiv_type.m"
  {
#line 698 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 698 "equiv_type.m"
    MR_String parse_tree__equiv_type__MutName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 0)));
#line 698 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 1)));
#line 698 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InitValue_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 2)));
#line 698 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 3)));
#line 698 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Attrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 4)));
#line 698 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Varset_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 5)));
#line 698 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 6)));
#line 698 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 7)));
#line 698 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TVarSet0_25;
#line 698 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type_26;
#line 698 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst_29;
#line 698 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34;
#line 698 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35;
#line 698 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;
#line 1093 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TypeChanged_27;
#line 1093 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TVarSet_28;
#line 1093 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_53_53;

#line 701 "equiv_type.m"
    {
#line 701 "equiv_type.m"
      parse_tree__equiv_type__TVarSet0_25 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 1093 "equiv_type.m"
    {
#line 1093 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_10, parse_tree__equiv_type__EqvMap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_18, &parse_tree__equiv_type__Type_26, &parse_tree__equiv_type___TypeChanged_27, &parse_tree__equiv_type__V_53_53, parse_tree__equiv_type__TVarSet0_25, &parse_tree__equiv_type___TVarSet_28, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30, &parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35);
    }
#line 1271 "equiv_type.m"
    {
#line 1271 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1271 "equiv_type.m"
    {
#line 1271 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__Inst0_20, parse_tree__equiv_type__EqvInstMap_12, parse_tree__equiv_type__V_68_68, &parse_tree__equiv_type__Inst_29, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33);
    }
#line 706 "equiv_type.m"
    {
#line 706 "equiv_type.m"
      MR_Word base;
#line 706 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 706 "equiv_type.m"
      *parse_tree__equiv_type__Info_14 = base;
#line 706 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__MutName_17));
#line 706 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Type_26));
#line 706 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__InitValue_19));
#line 706 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Inst_29));
#line 706 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Attrs_21));
#line 706 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Varset_22));
#line 706 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_23));
#line 706 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_24));
#line 706 "equiv_type.m"
    }
#line 698 "equiv_type.m"
  }
#line 691 "equiv_type.m"
}

#line 674 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_info_11_p_0(
#line 674 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 674 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 674 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 674 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 674 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 674 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 674 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25,
#line 674 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_26,
#line 674 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 674 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28,
#line 674 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 674 "equiv_type.m"
{
#line 681 "equiv_type.m"
  {
#line 681 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 681 "equiv_type.m"
    MR_String parse_tree__equiv_type__MutName_20;
#line 681 "equiv_type.m"
    MR_Word parse_tree__equiv_type__QualName_21;
#line 681 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_22;
#line 681 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_23;
#line 681 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_24;
#line 681 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_31_31;
#line 682 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_34_34;
#line 682 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_35_35;
#line 682 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_36_36;
#line 682 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_37_37;
#line 682 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;
#line 682 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_39_39;
#line 682 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_40_40;

#line 681 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 682 "equiv_type.m"
    parse_tree__equiv_type__MutName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 682 "equiv_type.m"
    parse_tree__equiv_type__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 682 "equiv_type.m"
    parse_tree__equiv_type__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 682 "equiv_type.m"
    parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 682 "equiv_type.m"
    parse_tree__equiv_type__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 682 "equiv_type.m"
    parse_tree__equiv_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 682 "equiv_type.m"
    parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 682 "equiv_type.m"
    parse_tree__equiv_type__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 683 "equiv_type.m"
    {
#line 683 "equiv_type.m"
      parse_tree__equiv_type__QualName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_21, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 683 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_21, 1) = ((MR_Box) (parse_tree__equiv_type__MutName_20));
#line 683 "equiv_type.m"
    }
#line 684 "equiv_type.m"
    {
#line 684 "equiv_type.m"
      parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__QualName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25, &parse_tree__equiv_type__ExpandedItems0_22);
    }
#line 686 "equiv_type.m"
    {
#line 686 "equiv_type.m"
      parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__Info0_16, parse_tree__equiv_type__Info_17, parse_tree__equiv_type__ExpandedItems0_22, &parse_tree__equiv_type__ExpandedItems_23, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
    }
#line 688 "equiv_type.m"
    {
#line 688 "equiv_type.m"
      parse_tree__equiv_type__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_31_31, 0) = ((MR_Box) (parse_tree__equiv_type__QualName_21));
#line 688 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_31_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 688 "equiv_type.m"
    }
#line 688 "equiv_type.m"
    {
#line 688 "equiv_type.m"
      parse_tree__equiv_type__ItemId_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 688 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_24, 0) = ((MR_Box) ((MR_Integer) 8));
#line 688 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_24, 1) = ((MR_Box) (parse_tree__equiv_type__V_31_31));
#line 688 "equiv_type.m"
    }
#line 689 "equiv_type.m"
    {
#line 689 "equiv_type.m"
      parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_24, parse_tree__equiv_type__ExpandedItems_23, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_26);
#line 689 "equiv_type.m"
      return;
    }
#line 681 "equiv_type.m"
  }
#line 674 "equiv_type.m"
}

#line 858 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 858 "equiv_type.m"
{
#line 858 "equiv_type.m"
  {
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 858 "equiv_type.m"
  }
#line 858 "equiv_type.m"
}

#line 508 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 508 "equiv_type.m"
{
#line 515 "equiv_type.m"
  {
#line 515 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_77;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__FunDeps_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 515 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 515 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_29;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_30;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_31;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_32;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems1_33;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface_34;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_35;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_38;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_47_47;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_64_64;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet_32;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_ExpandedItems1_33;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43;

#line 518 "equiv_type.m"
    {
#line 518 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[0], parse_tree__equiv_type__Vars_24, &parse_tree__equiv_type__Arity_29);
    }
#line 519 "equiv_type.m"
    {
#line 519 "equiv_type.m"
      parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__ClassName_23, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, &parse_tree__equiv_type__ExpandedItems0_30);
    }
#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      parse_tree__equiv_type__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 3) = ((MR_Box) (parse_tree__equiv_type__Location_13));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_14));
#line 858 "equiv_type.m"
    }
#line 10557 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_77, parse_tree__equiv_type__TypeCtorInfo_38_77, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__Constraints0_21, &parse_tree__equiv_type__Constraints_31, ((MR_Box) (parse_tree__equiv_type__VarSet0_26)), &parse_tree__equiv_type__conv6_VarSet_32, ((MR_Box) (parse_tree__equiv_type__ExpandedItems0_30)), &parse_tree__equiv_type__conv5_ExpandedItems1_33, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
    }
#line 858 "equiv_type.m"
    parse_tree__equiv_type__VarSet_32 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet_32);
#line 858 "equiv_type.m"
    parse_tree__equiv_type__ExpandedItems1_33 = ((MR_Word) parse_tree__equiv_type__conv5_ExpandedItems1_33);
#line 858 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
#line 529 "equiv_type.m"
    if ((parse_tree__equiv_type__ClassInterface0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 525 "equiv_type.m"
      {
#line 526 "equiv_type.m"
        parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "equiv_type.m"
        parse_tree__equiv_type__ExpandedItems_35 = parse_tree__equiv_type__ExpandedItems1_33;
#line 528 "equiv_type.m"
        *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 525 "equiv_type.m"
      }
#line 529 "equiv_type.m"
    else
#line 530 "equiv_type.m"
      {
#line 530 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface0_25, (MR_Integer) 0)));
#line 530 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods_37;

#line 531 "equiv_type.m"
        {
#line 531 "equiv_type.m"
          parse_tree__equiv_type__replace_in_class_interface_11_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__Methods0_36, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, &parse_tree__equiv_type__Methods_37, parse_tree__equiv_type__ExpandedItems1_33, &parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Specs_20);
        }
#line 533 "equiv_type.m"
        {
#line 533 "equiv_type.m"
          parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 533 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface_34, 0) = ((MR_Box) (parse_tree__equiv_type__Methods_37));
#line 533 "equiv_type.m"
        }
#line 530 "equiv_type.m"
      }
#line 535 "equiv_type.m"
    {
#line 535 "equiv_type.m"
      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 535 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_23));
#line 535 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_29));
#line 535 "equiv_type.m"
    }
#line 535 "equiv_type.m"
    {
#line 535 "equiv_type.m"
      parse_tree__equiv_type__ItemId_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 535 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 0) = ((MR_Box) ((MR_Integer) 4));
#line 535 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 1) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 535 "equiv_type.m"
    }
#line 536 "equiv_type.m"
    {
#line 536 "equiv_type.m"
      parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_38, parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40);
    }
#line 537 "equiv_type.m"
    {
#line 537 "equiv_type.m"
      MR_Word base;
#line 537 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 537 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Constraints_31));
#line 537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__FunDeps_22));
#line 537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__ClassName_23));
#line 537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Vars_24));
#line 537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__ClassInterface_34));
#line 537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_32));
#line 537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 537 "equiv_type.m"
    }
#line 515 "equiv_type.m"
  }
#line 508 "equiv_type.m"
}

#line 445 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 445 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 445 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 445 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 445 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 445 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 445 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 445 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_48,
#line 445 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_49,
#line 445 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_50,
#line 445 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_51,
#line 445 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 445 "equiv_type.m"
{
#line 452 "equiv_type.m"
  {
#line 452 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredOrFunc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 8)));
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Det0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 9)));
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cond_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 10)));
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Purity_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 11)));
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 12)));
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 13)));
#line 452 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 14)));
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_36;
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext_37;
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes_38;
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet_39;
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType_40;
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst_41;
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Det_42;
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_43;
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemType_44;
#line 452 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_45;
#line 452 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__OrigArity_46;
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_47;
#line 452 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_53_53;

#line 456 "equiv_type.m"
    {
#line 456 "equiv_type.m"
      parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_26, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_48, &parse_tree__equiv_type__ExpandedItems0_36);
    }
#line 458 "equiv_type.m"
    {
#line 458 "equiv_type.m"
      parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__PredName_26, parse_tree__equiv_type__PredOrFunc_25, parse_tree__equiv_type__Context_34, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ClassContext0_33, &parse_tree__equiv_type__ClassContext_37, parse_tree__equiv_type__TypesAndModes0_27, &parse_tree__equiv_type__TypesAndModes_38, parse_tree__equiv_type__TypeVarSet0_22, &parse_tree__equiv_type__TypeVarSet_39, parse_tree__equiv_type__MaybeWithType0_28, &parse_tree__equiv_type__MaybeWithType_40, parse_tree__equiv_type__MaybeWithInst0_29, &parse_tree__equiv_type__MaybeWithInst_41, parse_tree__equiv_type__Det0_30, &parse_tree__equiv_type__Det_42, parse_tree__equiv_type__ExpandedItems0_36, &parse_tree__equiv_type__ExpandedItems_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_51, parse_tree__equiv_type__Specs_20);
    }
#line 463 "equiv_type.m"
    {
#line 463 "equiv_type.m"
      parse_tree__equiv_type__ItemType_44 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_25);
    }
#line 464 "equiv_type.m"
    {
#line 464 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__equiv_type__TypesAndModes_38, &parse_tree__equiv_type__Arity_45);
    }
#line 465 "equiv_type.m"
    {
#line 465 "equiv_type.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_25, &parse_tree__equiv_type__OrigArity_46, parse_tree__equiv_type__Arity_45);
    }
#line 466 "equiv_type.m"
    {
#line 466 "equiv_type.m"
      parse_tree__equiv_type__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 466 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_53_53, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_26));
#line 466 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_53_53, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_46));
#line 466 "equiv_type.m"
    }
#line 466 "equiv_type.m"
    {
#line 466 "equiv_type.m"
      parse_tree__equiv_type__ItemId_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 466 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_47, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_44));
#line 466 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_47, 1) = ((MR_Box) (parse_tree__equiv_type__V_53_53));
#line 466 "equiv_type.m"
    }
#line 467 "equiv_type.m"
    {
#line 467 "equiv_type.m"
      parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_47, parse_tree__equiv_type__ExpandedItems_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_48, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_49);
    }
#line 468 "equiv_type.m"
    {
#line 468 "equiv_type.m"
      MR_Word base;
#line 468 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 468 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 468 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Origin_21));
#line 468 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_39));
#line 468 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_23));
#line 468 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_24));
#line 468 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_25));
#line 468 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__PredName_26));
#line 468 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_38));
#line 468 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__MaybeWithType_40));
#line 468 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__MaybeWithInst_41));
#line 468 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__Det_42));
#line 468 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__Cond_31));
#line 468 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__Purity_32));
#line 468 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__equiv_type__ClassContext_37));
#line 468 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__equiv_type__Context_34));
#line 468 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__equiv_type__SeqNum_35));
#line 468 "equiv_type.m"
    }
#line 452 "equiv_type.m"
  }
#line 445 "equiv_type.m"
}

#line 409 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 409 "equiv_type.m"
{
#line 416 "equiv_type.m"
  {
#line 416 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 416 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeInfo_71_71 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[0];
#line 416 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 416 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SymName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 416 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 416 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 416 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 416 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 416 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 416 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_28;
#line 416 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_29;
#line 416 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn_30;
#line 416 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainsCirc_31;
#line 416 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_32;
#line 416 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_33;
#line 416 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_38;
#line 416 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_43_43;
#line 416 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_69_69;

#line 419 "equiv_type.m"
    {
#line 419 "equiv_type.m"
      mercury__list__length_2_p_0(parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__TArgs_23, &parse_tree__equiv_type__Arity_28);
    }
#line 420 "equiv_type.m"
    {
#line 420 "equiv_type.m"
      parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__SymName_22, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, &parse_tree__equiv_type__UsedTypeCtors0_29);
    }
#line 423 "equiv_type.m"
    {
#line 423 "equiv_type.m"
      parse_tree__equiv_type__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 423 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_43_43, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_22));
#line 423 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_43_43, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_28));
#line 423 "equiv_type.m"
    }
#line 422 "equiv_type.m"
    {
#line 422 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_defn_13_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__V_43_43, parse_tree__equiv_type__TypeDefn0_24, &parse_tree__equiv_type__TypeDefn_30, &parse_tree__equiv_type__ContainsCirc_31, parse_tree__equiv_type__VarSet0_21, &parse_tree__equiv_type__VarSet_32, parse_tree__equiv_type__UsedTypeCtors0_29, &parse_tree__equiv_type__UsedTypeCtors_33, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42);
    }
#line 436 "equiv_type.m"
    if ((parse_tree__equiv_type__ContainsCirc_31 == (MR_Integer) 0))
#line 438 "equiv_type.m"
      *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 436 "equiv_type.m"
    else
#line 433 "equiv_type.m"
      {
#line 427 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_34_34;

#line 427 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_24)) == (MR_mktag((MR_Integer) 1)));
#line 427 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 427 "equiv_type.m"
          {
#line 427 "equiv_type.m"
            parse_tree__equiv_type__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_24, (MR_Integer) 0)));
#line 429 "equiv_type.m"
            {
#line 429 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Pieces_35;
#line 429 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Msg_36;
#line 429 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Spec_37;
#line 429 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_47_47;
#line 429 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_48_48;
#line 429 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_49_49;
#line 429 "equiv_type.m"
              MR_Integer parse_tree__equiv_type__V_50_50;
#line 429 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_57_57;
#line 429 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_58_58;
#line 429 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_62_62;

#line 429 "equiv_type.m"
              {
#line 429 "equiv_type.m"
                parse_tree__equiv_type__V_50_50 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__TArgs_23);
              }
#line 429 "equiv_type.m"
              {
#line 429 "equiv_type.m"
                parse_tree__equiv_type__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 429 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_22));
#line 429 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 1) = ((MR_Box) (parse_tree__equiv_type__V_50_50));
#line 429 "equiv_type.m"
              }
#line 429 "equiv_type.m"
              {
#line 429 "equiv_type.m"
                parse_tree__equiv_type__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 429 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 429 "equiv_type.m"
              }
#line 429 "equiv_type.m"
              {
#line 429 "equiv_type.m"
                parse_tree__equiv_type__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (parse_tree__equiv_type__V_48_48));
#line 429 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[11])));
#line 429 "equiv_type.m"
              }
#line 428 "equiv_type.m"
              {
#line 428 "equiv_type.m"
                parse_tree__equiv_type__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[27])));
#line 428 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_35, 1) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 428 "equiv_type.m"
              }
#line 430 "equiv_type.m"
              {
#line 430 "equiv_type.m"
                parse_tree__equiv_type__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 430 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_58_58, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_35));
#line 430 "equiv_type.m"
              }
#line 430 "equiv_type.m"
              {
#line 430 "equiv_type.m"
                parse_tree__equiv_type__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_57_57, 0) = ((MR_Box) (parse_tree__equiv_type__V_58_58));
#line 430 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 430 "equiv_type.m"
              }
#line 430 "equiv_type.m"
              {
#line 430 "equiv_type.m"
                parse_tree__equiv_type__Msg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 430 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_36, 0) = ((MR_Box) (parse_tree__equiv_type__Context_26));
#line 430 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_36, 1) = ((MR_Box) (parse_tree__equiv_type__V_57_57));
#line 430 "equiv_type.m"
              }
#line 431 "equiv_type.m"
              {
#line 431 "equiv_type.m"
                parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_36));
#line 431 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 431 "equiv_type.m"
              }
#line 431 "equiv_type.m"
              {
#line 431 "equiv_type.m"
                parse_tree__equiv_type__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 431 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 431 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 431 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_37, 2) = ((MR_Box) (parse_tree__equiv_type__V_62_62));
#line 431 "equiv_type.m"
              }
#line 432 "equiv_type.m"
              {
#line 432 "equiv_type.m"
                MR_Word base;
#line 432 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "equiv_type.m"
                *parse_tree__equiv_type__Specs_20 = base;
#line 432 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_37));
#line 432 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 432 "equiv_type.m"
              }
#line 429 "equiv_type.m"
            }
#line 427 "equiv_type.m"
          }
#line 427 "equiv_type.m"
        else
#line 434 "equiv_type.m"
          {
#line 434 "equiv_type.m"
            {
#line 434 "equiv_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_type_defn_info\'/11", (MR_String) "invalid item");
#line 434 "equiv_type.m"
              return;
            }
#line 434 "equiv_type.m"
          }
#line 433 "equiv_type.m"
      }
#line 440 "equiv_type.m"
    {
#line 440 "equiv_type.m"
      parse_tree__equiv_type__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 440 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_69_69, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_22));
#line 440 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_69_69, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_28));
#line 440 "equiv_type.m"
    }
#line 440 "equiv_type.m"
    {
#line 440 "equiv_type.m"
      parse_tree__equiv_type__ItemId_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 440 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 0) = ((MR_Box) ((MR_Integer) 1));
#line 440 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 1) = ((MR_Box) (parse_tree__equiv_type__V_69_69));
#line 440 "equiv_type.m"
    }
#line 441 "equiv_type.m"
    {
#line 441 "equiv_type.m"
      parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_38, parse_tree__equiv_type__UsedTypeCtors_33, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40);
    }
#line 442 "equiv_type.m"
    {
#line 442 "equiv_type.m"
      MR_Word base;
#line 442 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 442 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 442 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_32));
#line 442 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__SymName_22));
#line 442 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TArgs_23));
#line 442 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__TypeDefn_30));
#line 442 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Cond_25));
#line 442 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Context_26));
#line 442 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__SeqNum_27));
#line 442 "equiv_type.m"
    }
#line 416 "equiv_type.m"
  }
#line 409 "equiv_type.m"
}

#line 346 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
#line 346 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 346 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 346 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 346 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 346 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item0_16,
#line 346 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Item_17,
#line 346 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45,
#line 346 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46,
#line 346 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47,
#line 346 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48,
#line 346 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 346 "equiv_type.m"
{
#line 354 "equiv_type.m"
  {
#line 354 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 354 "equiv_type.m"
    if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 379 "equiv_type.m"
      {
#line 379 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemInstance0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 379 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemInstance_32;

#line 380 "equiv_type.m"
        {
#line 380 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__ItemInstance0_31, &parse_tree__equiv_type__ItemInstance_32, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
        }
#line 382 "equiv_type.m"
        {
#line 382 "equiv_type.m"
          MR_Word base;
#line 382 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "equiv_type.m"
          *parse_tree__equiv_type__Item_17 = base;
#line 382 "equiv_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 382 "equiv_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemInstance_32));
#line 382 "equiv_type.m"
        }
#line 379 "equiv_type.m"
      }
#line 354 "equiv_type.m"
    else
#line 354 "equiv_type.m"
      if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 364 "equiv_type.m"
        {
#line 364 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemModeDecl0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 364 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemModeDecl_26;

#line 365 "equiv_type.m"
          {
#line 365 "equiv_type.m"
            parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ItemModeDecl0_25, &parse_tree__equiv_type__ItemModeDecl_26, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
          }
#line 367 "equiv_type.m"
          {
#line 367 "equiv_type.m"
            MR_Word base;
#line 367 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "equiv_type.m"
            *parse_tree__equiv_type__Item_17 = base;
#line 367 "equiv_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 367 "equiv_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemModeDecl_26));
#line 367 "equiv_type.m"
          }
#line 364 "equiv_type.m"
        }
#line 354 "equiv_type.m"
      else
#line 354 "equiv_type.m"
        if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 389 "equiv_type.m"
          {
#line 392 "equiv_type.m"
            *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 393 "equiv_type.m"
            *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 393 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45;
#line 393 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47;
#line 389 "equiv_type.m"
          }
#line 354 "equiv_type.m"
        else
#line 354 "equiv_type.m"
          if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 384 "equiv_type.m"
            {
#line 384 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 384 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable_34;

#line 385 "equiv_type.m"
              {
#line 385 "equiv_type.m"
                parse_tree__equiv_type__replace_in_mutable_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ItemMutable0_33, &parse_tree__equiv_type__ItemMutable_34, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
              }
#line 387 "equiv_type.m"
              {
#line 387 "equiv_type.m"
                MR_Word base;
#line 387 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 387 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 387 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemMutable_34));
#line 387 "equiv_type.m"
              }
#line 384 "equiv_type.m"
            }
#line 354 "equiv_type.m"
          else
#line 354 "equiv_type.m"
            if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 369 "equiv_type.m"
              {
#line 369 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemPragma0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 369 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemPragma_28;

#line 370 "equiv_type.m"
                {
#line 370 "equiv_type.m"
                  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__ItemPragma0_27, &parse_tree__equiv_type__ItemPragma_28, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
                }
#line 372 "equiv_type.m"
                {
#line 372 "equiv_type.m"
                  MR_Word base;
#line 372 "equiv_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "equiv_type.m"
                  *parse_tree__equiv_type__Item_17 = base;
#line 372 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 372 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPragma_28));
#line 372 "equiv_type.m"
                }
#line 369 "equiv_type.m"
              }
#line 354 "equiv_type.m"
            else
#line 354 "equiv_type.m"
              if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 359 "equiv_type.m"
                {
#line 359 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__ItemPredDecl0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 359 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__ItemPredDecl_24;

#line 360 "equiv_type.m"
                  {
#line 360 "equiv_type.m"
                    parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ItemPredDecl0_23, &parse_tree__equiv_type__ItemPredDecl_24, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
                  }
#line 362 "equiv_type.m"
                  {
#line 362 "equiv_type.m"
                    MR_Word base;
#line 362 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "equiv_type.m"
                    *parse_tree__equiv_type__Item_17 = base;
#line 362 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 362 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPredDecl_24));
#line 362 "equiv_type.m"
                  }
#line 359 "equiv_type.m"
                }
#line 354 "equiv_type.m"
              else
#line 354 "equiv_type.m"
                if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 354 "equiv_type.m"
                  {
#line 354 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__ItemTypeDefn0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 354 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__ItemTypeDefn_22;

#line 355 "equiv_type.m"
                    {
#line 355 "equiv_type.m"
                      parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ItemTypeDefn0_21, &parse_tree__equiv_type__ItemTypeDefn_22, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
                    }
#line 357 "equiv_type.m"
                    {
#line 357 "equiv_type.m"
                      MR_Word base;
#line 357 "equiv_type.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "equiv_type.m"
                      *parse_tree__equiv_type__Item_17 = base;
#line 357 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 357 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemTypeDefn_22));
#line 357 "equiv_type.m"
                    }
#line 354 "equiv_type.m"
                  }
#line 354 "equiv_type.m"
                else
#line 354 "equiv_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 374 "equiv_type.m"
                    {
#line 374 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__ItemTypeClass0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 374 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__ItemTypeClass_30;

#line 375 "equiv_type.m"
                      {
#line 375 "equiv_type.m"
                        parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ItemTypeClass0_29, &parse_tree__equiv_type__ItemTypeClass_30, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
                      }
#line 377 "equiv_type.m"
                      {
#line 377 "equiv_type.m"
                        MR_Word base;
#line 377 "equiv_type.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "equiv_type.m"
                        *parse_tree__equiv_type__Item_17 = base;
#line 377 "equiv_type.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 377 "equiv_type.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemTypeClass_30));
#line 377 "equiv_type.m"
                      }
#line 374 "equiv_type.m"
                    }
#line 354 "equiv_type.m"
                  else
#line 404 "equiv_type.m"
                    {
#line 405 "equiv_type.m"
                      *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 406 "equiv_type.m"
                      *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 406 "equiv_type.m"
                      *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45;
#line 406 "equiv_type.m"
                      *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47;
#line 404 "equiv_type.m"
                    }
#line 354 "equiv_type.m"
  }
#line 346 "equiv_type.m"
}

#line 267 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_list_13_p_0(
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location0_2,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_4,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_5,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__6_6,
#line 267 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__7_7,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 267 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 267 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 267 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 267 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 267 "equiv_type.m"
{
#line 274 "equiv_type.m"
  while (MR_TRUE)
#line 274 "equiv_type.m"
    {
#line 274 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 274 "equiv_type.m"
      {
#line 274 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 274 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "equiv_type.m"
          {
#line 275 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 274 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 274 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 274 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__7_7 = parse_tree__equiv_type__HeadVar__6_6;
#line 274 "equiv_type.m"
          }
#line 274 "equiv_type.m"
        else
#line 277 "equiv_type.m"
          {
#line 277 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 277 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 277 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Location_44;
#line 277 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item_71;
#line 277 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemSpecs_72;
#line 277 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_86_86;
#line 277 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_87_87;
#line 277 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88;
#line 277 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_89_89;

#line 310 "equiv_type.m"
            if (((MR_tag((MR_Word) parse_tree__equiv_type__Item0_32)) == (MR_mktag((MR_Integer) 2))))
#line 279 "equiv_type.m"
              {
#line 279 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemModuleDefn_40 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item0_32), (MR_Integer) 2);
#line 279 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ModuleDefn_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_40, (MR_Integer) 0)));
#line 280 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_40, (MR_Integer) 1)));
#line 280 "equiv_type.m"
                MR_Integer parse_tree__equiv_type___SeqNum_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_40, (MR_Integer) 2)));

#line 284 "equiv_type.m"
                if ((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "equiv_type.m"
                  parse_tree__equiv_type__Location_44 = (MR_Integer) 1;
#line 284 "equiv_type.m"
                else
#line 284 "equiv_type.m"
                  if ((((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))) || ((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))))
#line 288 "equiv_type.m"
                    parse_tree__equiv_type__Location_44 = (MR_Integer) 2;
#line 284 "equiv_type.m"
                  else
#line 284 "equiv_type.m"
                    if ((((((((((((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))) || (((((MR_tag((MR_Word) parse_tree__equiv_type__ModuleDefn_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__ModuleDefn_41, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((MR_tag((MR_Word) parse_tree__equiv_type__ModuleDefn_41)) == (MR_mktag((MR_Integer) 1)))))) || ((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))))) || ((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))))) || (((MR_tag((MR_Word) parse_tree__equiv_type__ModuleDefn_41)) == (MR_mktag((MR_Integer) 2))))))
#line 300 "equiv_type.m"
                      parse_tree__equiv_type__Location_44 = (MR_Integer) 0;
#line 284 "equiv_type.m"
                    else
#line 308 "equiv_type.m"
                      parse_tree__equiv_type__Location_44 = parse_tree__equiv_type__Location0_2;
#line 279 "equiv_type.m"
              }
#line 310 "equiv_type.m"
            else
#line 310 "equiv_type.m"
              if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_32)) == (MR_mktag((MR_Integer) 1)))) || (((MR_tag((MR_Word) parse_tree__equiv_type__Item0_32)) == (MR_mktag((MR_Integer) 0))))))
#line 313 "equiv_type.m"
                {
#line 314 "equiv_type.m"
                  {
#line 314 "equiv_type.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_item_list\'/13", (MR_String) "module start or end");
#line 314 "equiv_type.m"
                    return;
                  }
#line 313 "equiv_type.m"
                }
#line 310 "equiv_type.m"
              else
#line 331 "equiv_type.m"
                parse_tree__equiv_type__Location_44 = parse_tree__equiv_type__Location0_2;
#line 333 "equiv_type.m"
            {
#line 333 "equiv_type.m"
              parse_tree__equiv_type__replace_in_item_11_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__Location_44, parse_tree__equiv_type__EqvMap_4, parse_tree__equiv_type__EqvInstMap_5, parse_tree__equiv_type__Item0_32, &parse_tree__equiv_type__Item_71, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_86_86, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_87_87, &parse_tree__equiv_type__ItemSpecs_72);
            }
#line 339 "equiv_type.m"
            if ((parse_tree__equiv_type__ItemSpecs_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "equiv_type.m"
              {
#line 338 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88, 0) = ((MR_Box) (parse_tree__equiv_type__Item_71));
#line 338 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88, 1) = ((MR_Box) (parse_tree__equiv_type__HeadVar__6_6));
#line 338 "equiv_type.m"
              }
#line 339 "equiv_type.m"
            else
#line 340 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88 = parse_tree__equiv_type__HeadVar__6_6;
#line 342 "equiv_type.m"
            {
#line 342 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_89_89 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__ItemSpecs_72, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12);
            }
#line 343 "equiv_type.m"
            /* direct tailcall eliminated */
#line 343 "equiv_type.m"
            {
#line 343 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Location0__tmp_copy_2 = parse_tree__equiv_type__Location_44;
#line 343 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__3__tmp_copy_3 = parse_tree__equiv_type__Items0_33;
#line 343 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__6__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88;
#line 343 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_86_86;
#line 343 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_87_87;
#line 343 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_89_89;

#line 343 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 343 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 343 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 343 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__6_6 = parse_tree__equiv_type__HeadVar__6__tmp_copy_6;
#line 343 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__3_3 = parse_tree__equiv_type__HeadVar__3__tmp_copy_3;
#line 343 "equiv_type.m"
              parse_tree__equiv_type__Location0_2 = parse_tree__equiv_type__Location0__tmp_copy_2;
#line 343 "equiv_type.m"
            }
#line 343 "equiv_type.m"
            continue;
#line 277 "equiv_type.m"
          }
#line 274 "equiv_type.m"
      }
#line 274 "equiv_type.m"
      break;
#line 274 "equiv_type.m"
    }
#line 267 "equiv_type.m"
}

#line 206 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__skip_abstract_imported_items_2_p_0(
#line 206 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 206 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2)
#line 206 "equiv_type.m"
{
#line 208 "equiv_type.m"
  while (MR_TRUE)
#line 208 "equiv_type.m"
    {
#line 208 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 208 "equiv_type.m"
      {
#line 208 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 208 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 208 "equiv_type.m"
        else
#line 209 "equiv_type.m"
          {
#line 209 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 209 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));

#line 215 "equiv_type.m"
            if (((MR_tag((MR_Word) parse_tree__equiv_type__Item0_3)) == (MR_mktag((MR_Integer) 2))))
#line 216 "equiv_type.m"
              {
#line 216 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemModuleDefn_8 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item0_3), (MR_Integer) 2);
#line 216 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ModuleDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_8, (MR_Integer) 0)));
#line 217 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_8, (MR_Integer) 1)));
#line 217 "equiv_type.m"
                MR_Integer parse_tree__equiv_type__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_8, (MR_Integer) 2)));

#line 220 "equiv_type.m"
                parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 220 "equiv_type.m"
                parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 219 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 247 "equiv_type.m"
                  {
#line 247 "equiv_type.m"
                    if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 252 "equiv_type.m"
                      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 247 "equiv_type.m"
                    else
#line 247 "equiv_type.m"
                      if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 248 "equiv_type.m"
                        parse_tree__equiv_type__succeeded = MR_TRUE;
#line 247 "equiv_type.m"
                      else
#line 247 "equiv_type.m"
                        if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 249 "equiv_type.m"
                          parse_tree__equiv_type__succeeded = MR_TRUE;
#line 247 "equiv_type.m"
                        else
#line 247 "equiv_type.m"
                          if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "equiv_type.m"
                            parse_tree__equiv_type__succeeded = MR_TRUE;
#line 247 "equiv_type.m"
                          else
#line 247 "equiv_type.m"
                            if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 253 "equiv_type.m"
                              parse_tree__equiv_type__succeeded = MR_TRUE;
#line 247 "equiv_type.m"
                            else
#line 247 "equiv_type.m"
                              if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 254 "equiv_type.m"
                                parse_tree__equiv_type__succeeded = MR_TRUE;
#line 247 "equiv_type.m"
                              else
#line 247 "equiv_type.m"
                                if (((MR_tag((MR_Word) parse_tree__equiv_type__ModuleDefn_9)) == (MR_mktag((MR_Integer) 1))))
#line 250 "equiv_type.m"
                                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 247 "equiv_type.m"
                                else
#line 247 "equiv_type.m"
                                  if (((MR_tag((MR_Word) parse_tree__equiv_type__ModuleDefn_9)) == (MR_mktag((MR_Integer) 2))))
#line 251 "equiv_type.m"
                                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 247 "equiv_type.m"
                                  else
#line 247 "equiv_type.m"
                                    parse_tree__equiv_type__succeeded = MR_FALSE;
#line 247 "equiv_type.m"
                  }
#line 223 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 222 "equiv_type.m"
                  *parse_tree__equiv_type__HeadVar__2_2 = parse_tree__equiv_type__Items0_4;
#line 223 "equiv_type.m"
                else
#line 224 "equiv_type.m"
                  {
#line 224 "equiv_type.m"
                    /* direct tailcall eliminated */
#line 224 "equiv_type.m"
                    {
#line 224 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__Items0_4;

#line 224 "equiv_type.m"
                      parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 224 "equiv_type.m"
                    }
#line 224 "equiv_type.m"
                    continue;
#line 224 "equiv_type.m"
                  }
#line 216 "equiv_type.m"
              }
#line 215 "equiv_type.m"
            else
#line 215 "equiv_type.m"
              if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_3)) == (MR_mktag((MR_Integer) 1)))) || (((MR_tag((MR_Word) parse_tree__equiv_type__Item0_3)) == (MR_mktag((MR_Integer) 0))))))
#line 214 "equiv_type.m"
                *parse_tree__equiv_type__HeadVar__2_2 = parse_tree__equiv_type__Items0_4;
#line 215 "equiv_type.m"
              else
#line 242 "equiv_type.m"
                {
#line 242 "equiv_type.m"
                  /* direct tailcall eliminated */
#line 242 "equiv_type.m"
                  {
#line 242 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__Items0_4;

#line 242 "equiv_type.m"
                    parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 242 "equiv_type.m"
                  }
#line 242 "equiv_type.m"
                  continue;
#line 242 "equiv_type.m"
                }
#line 209 "equiv_type.m"
          }
#line 208 "equiv_type.m"
      }
#line 208 "equiv_type.m"
      break;
#line 208 "equiv_type.m"
    }
#line 206 "equiv_type.m"
}

#line 171 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_map_5_p_0(
#line 171 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 171 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2,
#line 171 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EqvMap_3,
#line 171 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4,
#line 171 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_5)
#line 171 "equiv_type.m"
{
#line 174 "equiv_type.m"
  while (MR_TRUE)
#line 174 "equiv_type.m"
    {
#line 174 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 174 "equiv_type.m"
      {
#line 174 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 174 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 174 "equiv_type.m"
          {
#line 174 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_5 = parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4;
#line 174 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EqvMap_3 = parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2;
#line 174 "equiv_type.m"
          }
#line 174 "equiv_type.m"
        else
#line 175 "equiv_type.m"
          {
#line 175 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 175 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 177 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemModuleDefn_16;
#line 177 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ModuleDefn_17;
#line 178 "equiv_type.m"
            MR_Word parse_tree__equiv_type___Context_18;
#line 178 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___SeqNum_19;

#line 177 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 2)));
#line 177 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 177 "equiv_type.m"
              {
#line 177 "equiv_type.m"
                parse_tree__equiv_type__ItemModuleDefn_16 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item_12), (MR_Integer) 2);
#line 178 "equiv_type.m"
                parse_tree__equiv_type__ModuleDefn_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_16, (MR_Integer) 0)));
#line 178 "equiv_type.m"
                parse_tree__equiv_type___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_16, (MR_Integer) 1)));
#line 178 "equiv_type.m"
                parse_tree__equiv_type___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_16, (MR_Integer) 2)));
#line 179 "equiv_type.m"
                parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__ModuleDefn_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 177 "equiv_type.m"
              }
#line 183 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 181 "equiv_type.m"
              {
#line 181 "equiv_type.m"
                MR_Word parse_tree__equiv_type__AfterSkipItems_20;

#line 181 "equiv_type.m"
                {
#line 181 "equiv_type.m"
                  parse_tree__equiv_type__skip_abstract_imported_items_2_p_0(parse_tree__equiv_type__Items_13, &parse_tree__equiv_type__AfterSkipItems_20);
                }
#line 182 "equiv_type.m"
                /* direct tailcall eliminated */
#line 182 "equiv_type.m"
                {
#line 182 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__AfterSkipItems_20;

#line 182 "equiv_type.m"
                  parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 182 "equiv_type.m"
                }
#line 182 "equiv_type.m"
                continue;
#line 181 "equiv_type.m"
              }
#line 183 "equiv_type.m"
            else
#line 202 "equiv_type.m"
              {
#line 202 "equiv_type.m"
                MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvMap_42_42;
#line 202 "equiv_type.m"
                MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_45_45;
#line 192 "equiv_type.m"
                MR_Word parse_tree__equiv_type__VarSet_22;
#line 192 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Name_23;
#line 192 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Args_24;
#line 192 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Body_25;
#line 185 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemTypeDefn_21;
#line 185 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_40_40;
#line 186 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_26_26;
#line 186 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_27_27;
#line 186 "equiv_type.m"
                MR_Integer parse_tree__equiv_type___SeqNum_48;

#line 185 "equiv_type.m"
                parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 185 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 185 "equiv_type.m"
                  {
#line 185 "equiv_type.m"
                    parse_tree__equiv_type__ItemTypeDefn_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 1)));
#line 186 "equiv_type.m"
                    parse_tree__equiv_type__VarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 0)));
#line 186 "equiv_type.m"
                    parse_tree__equiv_type__Name_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 1)));
#line 186 "equiv_type.m"
                    parse_tree__equiv_type__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 2)));
#line 186 "equiv_type.m"
                    parse_tree__equiv_type__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 3)));
#line 186 "equiv_type.m"
                    parse_tree__equiv_type__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 4)));
#line 186 "equiv_type.m"
                    parse_tree__equiv_type__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 5)));
#line 186 "equiv_type.m"
                    parse_tree__equiv_type___SeqNum_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 6)));
#line 187 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 187 "equiv_type.m"
                    if (parse_tree__equiv_type__succeeded)
#line 187 "equiv_type.m"
                      parse_tree__equiv_type__Body_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_40_40, (MR_Integer) 0)));
#line 185 "equiv_type.m"
                  }
#line 192 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 189 "equiv_type.m"
                  {
#line 189 "equiv_type.m"
                    MR_Integer parse_tree__equiv_type__Arity_28;
#line 189 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__TypeCtor_29;
#line 189 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_41_41;

#line 189 "equiv_type.m"
                    {
#line 189 "equiv_type.m"
                      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[0], parse_tree__equiv_type__Args_24, &parse_tree__equiv_type__Arity_28);
                    }
#line 190 "equiv_type.m"
                    {
#line 190 "equiv_type.m"
                      parse_tree__equiv_type__TypeCtor_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 190 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_29, 0) = ((MR_Box) (parse_tree__equiv_type__Name_23));
#line 190 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_29, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_28));
#line 190 "equiv_type.m"
                    }
#line 191 "equiv_type.m"
                    {
#line 191 "equiv_type.m"
                      parse_tree__equiv_type__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 191 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_22));
#line 191 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 1) = ((MR_Box) (parse_tree__equiv_type__Args_24));
#line 191 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 2) = ((MR_Box) (parse_tree__equiv_type__Body_25));
#line 191 "equiv_type.m"
                    }
#line 191 "equiv_type.m"
                    {
#line 191 "equiv_type.m"
                      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, ((MR_Box) (parse_tree__equiv_type__TypeCtor_29)), ((MR_Box) (parse_tree__equiv_type__V_41_41)), parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2, &parse_tree__equiv_type__STATE_VARIABLE_EqvMap_42_42);
                    }
#line 191 "equiv_type.m"
                    parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_45_45 = parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4;
#line 189 "equiv_type.m"
                  }
#line 192 "equiv_type.m"
                else
#line 200 "equiv_type.m"
                  {
#line 200 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__VarSet_54;
#line 200 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Name_55;
#line 200 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Args_56;
#line 200 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Body_57;
#line 193 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__ItemInstDefn_30;
#line 193 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_43_43;
#line 194 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_31_31;
#line 194 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_32_32;
#line 194 "equiv_type.m"
                    MR_Integer parse_tree__equiv_type___SeqNum_50;

#line 193 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 193 "equiv_type.m"
                    if (parse_tree__equiv_type__succeeded)
#line 193 "equiv_type.m"
                      {
#line 193 "equiv_type.m"
                        parse_tree__equiv_type__ItemInstDefn_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 1)));
#line 194 "equiv_type.m"
                        parse_tree__equiv_type__VarSet_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_30, (MR_Integer) 0)));
#line 194 "equiv_type.m"
                        parse_tree__equiv_type__Name_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_30, (MR_Integer) 1)));
#line 194 "equiv_type.m"
                        parse_tree__equiv_type__Args_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_30, (MR_Integer) 2)));
#line 194 "equiv_type.m"
                        parse_tree__equiv_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_30, (MR_Integer) 3)));
#line 194 "equiv_type.m"
                        parse_tree__equiv_type__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_30, (MR_Integer) 4)));
#line 194 "equiv_type.m"
                        parse_tree__equiv_type__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_30, (MR_Integer) 5)));
#line 194 "equiv_type.m"
                        parse_tree__equiv_type___SeqNum_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_30, (MR_Integer) 6)));
#line 195 "equiv_type.m"
                        parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 195 "equiv_type.m"
                        if (parse_tree__equiv_type__succeeded)
#line 195 "equiv_type.m"
                          parse_tree__equiv_type__Body_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_43_43, (MR_Integer) 0)));
#line 193 "equiv_type.m"
                      }
#line 200 "equiv_type.m"
                    if (parse_tree__equiv_type__succeeded)
#line 197 "equiv_type.m"
                      {
#line 197 "equiv_type.m"
                        MR_Word parse_tree__equiv_type__InstId_33;
#line 197 "equiv_type.m"
                        MR_Word parse_tree__equiv_type__V_44_44;
#line 197 "equiv_type.m"
                        MR_Integer parse_tree__equiv_type__Arity_52;

#line 197 "equiv_type.m"
                        {
#line 197 "equiv_type.m"
                          mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[1], parse_tree__equiv_type__Args_56, &parse_tree__equiv_type__Arity_52);
                        }
#line 198 "equiv_type.m"
                        {
#line 198 "equiv_type.m"
                          parse_tree__equiv_type__InstId_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 198 "equiv_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_33, 0) = ((MR_Box) (parse_tree__equiv_type__Name_55));
#line 198 "equiv_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_33, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_52));
#line 198 "equiv_type.m"
                        }
#line 199 "equiv_type.m"
                        {
#line 199 "equiv_type.m"
                          parse_tree__equiv_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 199 "equiv_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_54));
#line 199 "equiv_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 1) = ((MR_Box) (parse_tree__equiv_type__Args_56));
#line 199 "equiv_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 2) = ((MR_Box) (parse_tree__equiv_type__Body_57));
#line 199 "equiv_type.m"
                        }
#line 199 "equiv_type.m"
                        {
#line 199 "equiv_type.m"
                          mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, ((MR_Box) (parse_tree__equiv_type__InstId_33)), ((MR_Box) (parse_tree__equiv_type__V_44_44)), parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4, &parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_45_45);
                        }
#line 197 "equiv_type.m"
                      }
#line 200 "equiv_type.m"
                    else
#line 199 "equiv_type.m"
                      parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_45_45 = parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4;
#line 199 "equiv_type.m"
                    parse_tree__equiv_type__STATE_VARIABLE_EqvMap_42_42 = parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2;
#line 200 "equiv_type.m"
                  }
#line 203 "equiv_type.m"
                /* direct tailcall eliminated */
#line 203 "equiv_type.m"
                {
#line 203 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__Items_13;
#line 203 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0__tmp_copy_2 = parse_tree__equiv_type__STATE_VARIABLE_EqvMap_42_42;
#line 203 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0__tmp_copy_4 = parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_45_45;

#line 203 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4 = parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0__tmp_copy_4;
#line 203 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2 = parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0__tmp_copy_2;
#line 203 "equiv_type.m"
                  parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 203 "equiv_type.m"
                }
#line 203 "equiv_type.m"
                continue;
#line 202 "equiv_type.m"
              }
#line 175 "equiv_type.m"
          }
#line 174 "equiv_type.m"
      }
#line 174 "equiv_type.m"
      break;
#line 174 "equiv_type.m"
    }
#line 171 "equiv_type.m"
}

#line 104 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(
#line 104 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item_1,
#line 104 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 104 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 104 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4)
#line 104 "equiv_type.m"
{
#line 1594 "equiv_type.m"
  {
#line 1594 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1594 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1594 "equiv_type.m"
      if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1594 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1594 "equiv_type.m"
      else
#line 1595 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__4_4 = parse_tree__equiv_type__HeadVar__3_3;
#line 1594 "equiv_type.m"
    else
#line 1594 "equiv_type.m"
      {
#line 1594 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));

#line 1594 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1596 "equiv_type.m"
          {
#line 1597 "equiv_type.m"
            {
#line 1597 "equiv_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.finish_recording_expanded_items\'/4", (MR_String) "items but no info");
#line 1597 "equiv_type.m"
              return;
            }
#line 1596 "equiv_type.m"
          }
#line 1594 "equiv_type.m"
        else
#line 1599 "equiv_type.m"
          {
#line 1599 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ExpandedItems_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_20_20, (MR_Integer) 1)));
#line 1599 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Info0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1599 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Info_18;
#line 1598 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_20_20, (MR_Integer) 0)));

#line 1600 "equiv_type.m"
            {
#line 1600 "equiv_type.m"
              recompilation__record_expanded_items_4_p_0(parse_tree__equiv_type__Item_1, parse_tree__equiv_type__ExpandedItems_16, parse_tree__equiv_type__Info0_17, &parse_tree__equiv_type__Info_18);
            }
#line 1599 "equiv_type.m"
            {
#line 1599 "equiv_type.m"
              MR_Word base;
#line 1599 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1599 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1599 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Info_18));
#line 1599 "equiv_type.m"
            }
#line 1599 "equiv_type.m"
          }
#line 1594 "equiv_type.m"
      }
#line 1594 "equiv_type.m"
  }
#line 104 "equiv_type.m"
}

#line 99 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(
#line 99 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 99 "equiv_type.m"
  MR_Word parse_tree__equiv_type__SymName_2,
#line 99 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 99 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4)
#line 99 "equiv_type.m"
{
#line 1566 "equiv_type.m"
  {
#line 1566 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1566 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1566 "equiv_type.m"
      *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1566 "equiv_type.m"
    else
#line 1570 "equiv_type.m"
      {
#line 1568 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_15_15;
#line 1568 "equiv_type.m"
        MR_String parse_tree__equiv_type__V_11_11;

#line 1568 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__SymName_2)) == (MR_mktag((MR_Integer) 1)));
#line 1568 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1568 "equiv_type.m"
          {
#line 1568 "equiv_type.m"
            parse_tree__equiv_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__SymName_2, (MR_Integer) 0)));
#line 1568 "equiv_type.m"
            parse_tree__equiv_type__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__SymName_2, (MR_Integer) 1)));
#line 1568 "equiv_type.m"
            {
#line 1568 "equiv_type.m"
              parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__V_15_15);
            }
#line 1568 "equiv_type.m"
          }
#line 1570 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1569 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1570 "equiv_type.m"
        else
#line 1571 "equiv_type.m"
          {
#line 1571 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_12_12;
#line 1571 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_13_13;

#line 1571 "equiv_type.m"
            {
#line 1571 "equiv_type.m"
              parse_tree__equiv_type__V_13_13 = mercury__set__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0);
            }
#line 1571 "equiv_type.m"
            {
#line 1571 "equiv_type.m"
              parse_tree__equiv_type__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1571 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_12_12, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_1));
#line 1571 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_12_12, 1) = ((MR_Box) (parse_tree__equiv_type__V_13_13));
#line 1571 "equiv_type.m"
            }
#line 1571 "equiv_type.m"
            {
#line 1571 "equiv_type.m"
              MR_Word base;
#line 1571 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1571 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1571 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_12_12));
#line 1571 "equiv_type.m"
            }
#line 1571 "equiv_type.m"
          }
#line 1570 "equiv_type.m"
      }
#line 1566 "equiv_type.m"
  }
#line 99 "equiv_type.m"
}

#line 962 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 962 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 962 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 962 "equiv_type.m"
{
#line 962 "equiv_type.m"
  {
#line 962 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 962 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_HeadVar__4_4;
#line 962 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25;
#line 962 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27;
#line 962 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29;

#line 962 "equiv_type.m"
    {
#line 962 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_HeadVar__4_4, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29);
    }
#line 962 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_HeadVar__4_4));
#line 962 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25));
#line 962 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27));
#line 962 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29));
#line 962 "equiv_type.m"
  }
#line 962 "equiv_type.m"
}

#line 78 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0(
#line 78 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_8,
#line 78 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_13,
#line 78 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_14,
#line 78 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_15,
#line 78 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_16,
#line 78 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_17,
#line 78 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_18)
#line 78 "equiv_type.m"
{
#line 951 "equiv_type.m"
  {
#line 951 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 951 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_51;
#line 951 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 951 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;
#line 962 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_12_12;
#line 962 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16;
#line 962 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18;
#line 962 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_V_12_12;

#line 953 "equiv_type.m"
    {
#line 953 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 962 "equiv_type.m"
    {
#line 962 "equiv_type.m"
      parse_tree__equiv_type__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 962 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 962 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_7_p_0_1));
#line 962 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 962 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 3) = ((MR_Box) ((MR_Integer) 0));
#line 962 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_8));
#line 962 "equiv_type.m"
    }
#line 12460 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 962 "equiv_type.m"
    {
#line 962 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_51, parse_tree__equiv_type__TypeCtorInfo_38_51, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_13, parse_tree__equiv_type__STATE_VARIABLE_Ctors_14, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_15)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_17)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18, ((MR_Box) (parse_tree__equiv_type__V_23_23)), &parse_tree__equiv_type__conv4_V_12_12);
    }
#line 962 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_16 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16);
#line 962 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_18 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18);
#line 962 "equiv_type.m"
    parse_tree__equiv_type__V_12_12 = ((MR_Word) parse_tree__equiv_type__conv4_V_12_12);
#line 951 "equiv_type.m"
  }
#line 78 "equiv_type.m"
}

#line 74 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_7_p_0(
#line 74 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_8,
#line 74 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Constraint0_9,
#line 74 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Constraint_10,
#line 74 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_14,
#line 74 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_15,
#line 74 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_16,
#line 74 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_17)
#line 74 "equiv_type.m"
{
#line 862 "equiv_type.m"
  {
#line 862 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 862 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 862 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_35;
#line 862 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes0_36;
#line 862 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes_37;
#line 1003 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_13_13;
#line 1003 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;
#line 1003 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_39_39;

#line 865 "equiv_type.m"
    {
#line 865 "equiv_type.m"
      parse_tree__equiv_type__V_21_21 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 874 "equiv_type.m"
    parse_tree__equiv_type__ClassName_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_9, (MR_Integer) 0)));
#line 874 "equiv_type.m"
    parse_tree__equiv_type__ArgTypes0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_9, (MR_Integer) 1)));
#line 1003 "equiv_type.m"
    {
#line 1003 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0((MR_Integer) 0, parse_tree__equiv_type__EqvMap_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__ArgTypes0_36, &parse_tree__equiv_type__ArgTypes_37, &parse_tree__equiv_type__V_38_38, (MR_Integer) 0, &parse_tree__equiv_type__V_39_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_14, parse_tree__equiv_type__STATE_VARIABLE_VarSet_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_16, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_17, parse_tree__equiv_type__V_21_21, &parse_tree__equiv_type__V_13_13);
    }
#line 877 "equiv_type.m"
    {
#line 877 "equiv_type.m"
      MR_Word base;
#line 877 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 877 "equiv_type.m"
      *parse_tree__equiv_type__Constraint_10 = base;
#line 877 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_35));
#line 877 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ArgTypes_37));
#line 877 "equiv_type.m"
    }
#line 862 "equiv_type.m"
  }
#line 74 "equiv_type.m"
}

#line 858 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 858 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 858 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 858 "equiv_type.m"
{
#line 858 "equiv_type.m"
  {
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 858 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 858 "equiv_type.m"
  }
#line 858 "equiv_type.m"
}

#line 70 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0(
#line 70 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_8,
#line 70 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_9,
#line 70 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_10,
#line 70 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_14,
#line 70 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_15,
#line 70 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_16,
#line 70 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_17)
#line 70 "equiv_type.m"
{
#line 833 "equiv_type.m"
  {
#line 833 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_72;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_35;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_36;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_37;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_38;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41;
#line 833 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_59_59;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40;
#line 858 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41;
#line 847 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_13_13;

#line 835 "equiv_type.m"
    {
#line 835 "equiv_type.m"
      parse_tree__equiv_type__V_21_21 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 844 "equiv_type.m"
    parse_tree__equiv_type__UnivCs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 0)));
#line 844 "equiv_type.m"
    parse_tree__equiv_type__ExistCs0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 1)));
#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 3) = ((MR_Box) ((MR_Integer) 0));
#line 858 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_8));
#line 858 "equiv_type.m"
    }
#line 12680 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 858 "equiv_type.m"
    {
#line 858 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_72, parse_tree__equiv_type__TypeCtorInfo_38_72, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_59_59, parse_tree__equiv_type__UnivCs0_35, &parse_tree__equiv_type__UnivCs_37, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_14)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_16)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40, ((MR_Box) (parse_tree__equiv_type__V_21_21)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
    }
#line 858 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39);
#line 858 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40);
#line 858 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
#line 847 "equiv_type.m"
    {
#line 847 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0((MR_Integer) 0, parse_tree__equiv_type__EqvMap_8, parse_tree__equiv_type__ExistCs0_36, &parse_tree__equiv_type__ExistCs_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41, &parse_tree__equiv_type__V_13_13);
    }
#line 849 "equiv_type.m"
    {
#line 849 "equiv_type.m"
      MR_Word base;
#line 849 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 849 "equiv_type.m"
      *parse_tree__equiv_type__Cs_10 = base;
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_37));
#line 849 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_38));
#line 849 "equiv_type.m"
    }
#line 833 "equiv_type.m"
  }
#line 70 "equiv_type.m"
}

#line 65 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_8_p_0(
#line 65 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_9,
#line 65 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_15,
#line 65 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_16,
#line 65 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_11,
#line 65 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_17,
#line 65 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_18,
#line 65 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 65 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20)
#line 65 "equiv_type.m"
{
#line 981 "equiv_type.m"
  {
#line 981 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 981 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 993 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_14_14;
#line 993 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_41_41;

#line 983 "equiv_type.m"
    {
#line 983 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 993 "equiv_type.m"
    {
#line 993 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0((MR_Integer) 0, parse_tree__equiv_type__EqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Ts_0_15, parse_tree__equiv_type__STATE_VARIABLE_Ts_16, parse_tree__equiv_type__Changed_11, (MR_Integer) 0, &parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20, parse_tree__equiv_type__V_25_25, &parse_tree__equiv_type__V_14_14);
    }
#line 981 "equiv_type.m"
  }
#line 65 "equiv_type.m"
}

#line 61 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__replace_in_type_8_p_0(
#line 61 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_9,
#line 61 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_10,
#line 61 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_11,
#line 61 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_12,
#line 61 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_16,
#line 61 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_17,
#line 61 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_18,
#line 61 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_19)
#line 61 "equiv_type.m"
{
#line 1082 "equiv_type.m"
  {
#line 1082 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1082 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 1093 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_15_15;
#line 1093 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;

#line 1084 "equiv_type.m"
    {
#line 1084 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 1093 "equiv_type.m"
    {
#line 1093 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_location_2_13_p_0((MR_Integer) 0, parse_tree__equiv_type__EqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_10, parse_tree__equiv_type__Type_11, parse_tree__equiv_type__Changed_12, &parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_16, parse_tree__equiv_type__STATE_VARIABLE_VarSet_17, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_19, parse_tree__equiv_type__V_23_23, &parse_tree__equiv_type__V_15_15);
    }
#line 1082 "equiv_type.m"
  }
#line 61 "equiv_type.m"
}

#line 52 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_10_p_0(
#line 52 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_11,
#line 52 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Items0_12,
#line 52 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Items_13,
#line 52 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EventSpecMap0_14,
#line 52 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__EventSpecMap_15,
#line 52 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__EqvMap_16,
#line 52 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26,
#line 52 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_27,
#line 52 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_28,
#line 52 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_29)
#line 52 "equiv_type.m"
{
#line 142 "equiv_type.m"
  {
#line 142 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 142 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_45_45;
#line 142 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_46_46;
#line 142 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvMap0_20;
#line 142 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvInstMap0_21;
#line 142 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvInstMap_22;
#line 142 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevItems_23;
#line 142 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EventSpecList0_24;
#line 142 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EventSpecList_25;
#line 142 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30;
#line 142 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_34_34;
#line 142 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35;
#line 142 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_36_36;

#line 143 "equiv_type.m"
    {
#line 143 "equiv_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, &parse_tree__equiv_type__EqvMap0_20);
    }
#line 144 "equiv_type.m"
    {
#line 144 "equiv_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, &parse_tree__equiv_type__EqvInstMap0_21);
    }
#line 145 "equiv_type.m"
    {
#line 145 "equiv_type.m"
      parse_tree__equiv_type__build_eqv_map_5_p_0(parse_tree__equiv_type__Items0_12, parse_tree__equiv_type__EqvMap0_20, parse_tree__equiv_type__EqvMap_16, parse_tree__equiv_type__EqvInstMap0_21, &parse_tree__equiv_type__EqvInstMap_22);
    }
#line 146 "equiv_type.m"
    {
#line 146 "equiv_type.m"
      parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 148 "equiv_type.m"
    {
#line 148 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_list_13_p_0(parse_tree__equiv_type__ModuleName_11, (MR_Integer) 0, parse_tree__equiv_type__Items0_12, *parse_tree__equiv_type__EqvMap_16, parse_tree__equiv_type__EqvInstMap_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevItems_23, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_27, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__STATE_VARIABLE_Specs_36_36);
    }
#line 150 "equiv_type.m"
    {
#line 150 "equiv_type.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevItems_23, parse_tree__equiv_type__Items_13);
    }
#line 12895 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_45_45 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 12897 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0;
#line 151 "equiv_type.m"
    {
#line 151 "equiv_type.m"
      mercury__map__to_assoc_list_2_p_0(parse_tree__equiv_type__TypeCtorInfo_45_45, parse_tree__equiv_type__TypeCtorInfo_46_46, parse_tree__equiv_type__EventSpecMap0_14, &parse_tree__equiv_type__EventSpecList0_24);
    }
#line 152 "equiv_type.m"
    {
#line 152 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_95_108_105_115_116_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__EventSpecList0_24, &parse_tree__equiv_type__EventSpecList_25, *parse_tree__equiv_type__EqvMap_16, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_34_34, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_28, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26, parse_tree__equiv_type__STATE_VARIABLE_Specs_36_36, parse_tree__equiv_type__STATE_VARIABLE_Specs_29);
    }
#line 154 "equiv_type.m"
    {
#line 154 "equiv_type.m"
      mercury__map__from_sorted_assoc_list_2_p_0(parse_tree__equiv_type__TypeCtorInfo_45_45, parse_tree__equiv_type__TypeCtorInfo_46_46, parse_tree__equiv_type__EventSpecList_25, parse_tree__equiv_type__EventSpecMap_15);
#line 154 "equiv_type.m"
      return;
    }
#line 142 "equiv_type.m"
  }
#line 52 "equiv_type.m"
}

void mercury__parse_tree__equiv_type__init(void)
{
}

void mercury__parse_tree__equiv_type__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_equiv_type_info_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_map_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_map_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_expanded_item_set_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_pred_or_func_decl_type_0);
}

void mercury__parse_tree__equiv_type__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.equiv_type. */
