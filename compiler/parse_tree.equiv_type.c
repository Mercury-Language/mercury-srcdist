/*
** Automatically generated from `equiv_type.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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

#line 1409 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_20,
#line 1409 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_21,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_22,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_23,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_24,
#line 1409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_0_50,
#line 1409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_51,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33);

#line 1585 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0_1(
#line 1585 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1585 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1585 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2);

#line 1272 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1272 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1272 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_12,
#line 1272 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_13,
#line 1272 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1272 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1272 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1272 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1272 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29);

#line 1262 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1262 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_10,
#line 1262 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_11,
#line 1262 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1262 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1262 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1262 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1262 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);

#line 735 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 735 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 735 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 735 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 735 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 735 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 735 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 735 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 735 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 735 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 704 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_95_108_105_115_116_95_95_91_52_93_95_48_10_p_0(
#line 704 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 704 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 704 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_3,
#line 704 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 704 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 704 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 704 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 704 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 704 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 568 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 568 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 568 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 568 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 568 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 568 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 568 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 568 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 568 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 568 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 568 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 853 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 536 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 536 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 536 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 536 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 536 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 536 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 536 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 536 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 536 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 536 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 536 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 468 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 468 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 468 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 468 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 468 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 468 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 468 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 468 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 468 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 468 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 1372 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1372__1_1_f_0(
#line 1372 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_134);

#line 1365 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1365__1_1_f_0(
#line 1365 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_165);

#line 163 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
#line 163 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 163 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 163 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 163 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
#line 163 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 163 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 126 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_location_0_0(
#line 126 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 126 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 126 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 126 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_location_0_0(
#line 126 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 126 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 161 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_map_0_0(
#line 161 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 161 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 161 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 161 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_map_0_0(
#line 161 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 161 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 154 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
#line 154 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 154 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 154 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 154 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
#line 154 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 154 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 1587 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_2_3_p_0(
#line 1587 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ItemId_4,
#line 1587 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedItemSet0_5,
#line 1587 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExpandedItemSet_6);

#line 1585 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_3_p_0_1(
#line 1585 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1585 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1585 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2);

#line 1581 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_3_p_0(
#line 1581 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item_4,
#line 1581 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 1581 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7);

#line 1552 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1552 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1552 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 1552 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1552 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Sel0_13,
#line 1552 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Sel_14,
#line 1552 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1552 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1552 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1552 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);

#line 1548 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1548 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1548 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1548 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1548 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1548 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1548 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1548 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1527 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1527 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1527 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 1527 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1527 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1527 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1527 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1527 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1527 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1527 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22);

#line 1522 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1522 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1522 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1522 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1522 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1522 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1522 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1522 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1507 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 1507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__SharingDomain0_13,
#line 1507 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__SharingDomain_14,
#line 1507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 1507 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 1507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 1507 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23);

#line 1490 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tm_10_p_0(
#line 1490 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1490 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 1490 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1490 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1490 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 1490 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 1490 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 1490 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 1490 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 1490 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);

#line 1487 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0_1(
#line 1487 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1487 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1487 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1487 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1487 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1487 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1487 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1487 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1487 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 1480 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0(
#line 1480 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 1480 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 1480 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17,
#line 1480 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TMs_18,
#line 1480 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1480 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1480 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1480 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1480 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1480 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 1372 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_2(
#line 1372 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1372 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1);

#line 1365 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1365 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1365 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1);

#line 1306 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_24,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_28,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_29,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Det_0_76,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Det_77,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_82);

#line 1585 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0_1(
#line 1585 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1585 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1585 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2);

#line 1188 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_19,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_20,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_45,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_46,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_47,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_48,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_49,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_50,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_51,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_54);

#line 1097 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_2_13_p_0(
#line 1097 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 1097 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_15,
#line 1097 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1097 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1097 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1097 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1097 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1097 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1097 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1097 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1097 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1097 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1097 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);

#line 1084 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_11_p_0(
#line 1084 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 1084 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 1084 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1084 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1084 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1084 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1084 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1084 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1084 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1084 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1084 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);

#line 1044 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13);

#line 1004 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);

#line 994 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 994 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 994 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 994 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 994 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 994 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 994 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 994 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 994 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 994 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 994 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 994 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 994 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 983 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_20,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_21,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 853 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 963 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_24,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_25,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29);

#line 960 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 953 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 933 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);

#line 891 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_method_11_p_0(
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_14,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Method0_15,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Method_16,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_51);

#line 888 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 880 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
#line 880 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 880 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassInterface0_13,
#line 880 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 880 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 880 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassInterface_16,
#line 880 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 880 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 880 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 880 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23,
#line 880 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24,
#line 880 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_25);

#line 866 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Constraint0_13,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Constraint_14,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 853 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 846 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 846 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 846 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 846 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Cs_0_17,
#line 846 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Cs_18,
#line 846 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 846 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 846 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 846 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 846 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 846 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 853 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 832 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 832 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 832 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 832 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 832 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 832 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 832 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 832 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 832 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 832 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 832 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 811 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 811 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 811 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 811 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_3,
#line 811 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 811 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 811 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 811 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 811 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 811 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);

#line 770 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_15,
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_16,
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 770 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 770 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 770 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 770 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 770 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);

#line 686 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 686 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 686 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 686 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_12,
#line 686 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 686 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 686 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30,
#line 686 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31,
#line 686 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32,
#line 686 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33);

#line 669 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_info_11_p_0(
#line 669 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 669 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 669 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 669 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 669 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 669 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 669 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25,
#line 669 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_26,
#line 669 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 669 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28,
#line 669 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 853 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 504 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 504 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 504 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 504 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 504 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 504 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 504 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 504 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 504 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 504 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 504 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 504 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 441 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 441 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 441 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 441 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 441 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 441 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 441 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 441 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47,
#line 441 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48,
#line 441 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 441 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 441 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 405 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 405 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 405 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 405 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 405 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 405 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 405 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 405 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38,
#line 405 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39,
#line 405 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40,
#line 405 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41,
#line 405 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 342 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
#line 342 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 342 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 342 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 342 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 342 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item0_16,
#line 342 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Item_17,
#line 342 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45,
#line 342 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46,
#line 342 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47,
#line 342 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48,
#line 342 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 263 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_list_13_p_0(
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location0_2,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_4,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_5,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__6_6,
#line 263 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__7_7,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 263 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 263 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 263 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 202 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__skip_abstract_imported_items_2_p_0(
#line 202 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 202 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2);

#line 167 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_map_5_p_0(
#line 167 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 167 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2,
#line 167 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EqvMap_3,
#line 167 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4,
#line 167 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_5);

#line 960 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 853 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 853 "equiv_type.m"
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

#line 1409 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_20,
#line 1409 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_21,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_22,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_23,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_24,
#line 1409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_0_50,
#line 1409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_51,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1409 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1409 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33)
#line 1409 "equiv_type.m"
{
#line 1423 "equiv_type.m"
  {
#line 1423 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1423 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithInst0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1473 "equiv_type.m"
      {
#line 1474 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1475 "equiv_type.m"
        *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1476 "equiv_type.m"
        *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1477 "equiv_type.m"
        *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1473 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_0_50;
#line 1473 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52;
#line 1473 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1473 "equiv_type.m"
      }
#line 1423 "equiv_type.m"
    else
#line 1423 "equiv_type.m"
      {
#line 1423 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithInst0_28, (MR_Integer) 0)));
#line 1423 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_35;
#line 1423 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1448 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_39;
#line 1448 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes0_40;
#line 1448 "equiv_type.m"
        MR_Word parse_tree__equiv_type__DetPrime_42;
#line 1427 "equiv_type.m"
        MR_Word parse_tree__equiv_type__GroundInstInfo_37;
#line 1427 "equiv_type.m"
        MR_Word parse_tree__equiv_type__HOInst_38;
#line 1427 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_36_36;
#line 1429 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_41_41;

#line 1424 "equiv_type.m"
        {
#line 1424 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(parse_tree__equiv_type__WithInst0_34, parse_tree__equiv_type__EqvInstMap_24, &parse_tree__equiv_type__WithInst_35, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);
        }
#line 1427 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__WithInst_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1427 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1427 "equiv_type.m"
          {
#line 1427 "equiv_type.m"
            parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 1)));
#line 1427 "equiv_type.m"
            parse_tree__equiv_type__GroundInstInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 2)));
#line 1428 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__GroundInstInfo_37)) == (MR_mktag((MR_Integer) 1)));
#line 1428 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1428 "equiv_type.m"
              {
#line 1428 "equiv_type.m"
                parse_tree__equiv_type__HOInst_38 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__GroundInstInfo_37), (MR_Integer) 1);
#line 1429 "equiv_type.m"
                parse_tree__equiv_type__PredOrFunc_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 0)));
#line 1429 "equiv_type.m"
                parse_tree__equiv_type__ExtraModes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 1)));
#line 1429 "equiv_type.m"
                parse_tree__equiv_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 2)));
#line 1429 "equiv_type.m"
                parse_tree__equiv_type__DetPrime_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 3)));
#line 1431 "equiv_type.m"
                if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1430 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1431 "equiv_type.m"
                else
#line 1431 "equiv_type.m"
                  {
#line 1431 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));

#line 1431 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_39 == parse_tree__equiv_type__V_105_105);
#line 1431 "equiv_type.m"
                  }
#line 1428 "equiv_type.m"
              }
#line 1427 "equiv_type.m"
          }
#line 1448 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1434 "equiv_type.m"
          {
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RecordedPredOrFunc_43;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__OrigItemId_44;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_59_59;
#line 1434 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_60_60;

#line 1434 "equiv_type.m"
            {
#line 1434 "equiv_type.m"
              MR_Word base;
#line 1434 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1434 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_51 = base;
#line 1434 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__DetPrime_42));
#line 1434 "equiv_type.m"
            }
#line 1435 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1436 "equiv_type.m"
            {
#line 1436 "equiv_type.m"
              MR_Word base;
#line 1436 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "equiv_type.m"
              *parse_tree__equiv_type__MaybePredOrFunc_27 = base;
#line 1436 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_39));
#line 1436 "equiv_type.m"
            }
#line 1437 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = parse_tree__equiv_type__ExtraModes0_40;
#line 1441 "equiv_type.m"
            if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1440 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = (MR_Integer) 0;
#line 1441 "equiv_type.m"
            else
#line 1442 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));
#line 1444 "equiv_type.m"
            {
#line 1444 "equiv_type.m"
              parse_tree__equiv_type__V_59_59 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__RecordedPredOrFunc_43);
            }
#line 1445 "equiv_type.m"
            {
#line 1445 "equiv_type.m"
              parse_tree__equiv_type__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1445 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_20));
#line 1445 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_21));
#line 1445 "equiv_type.m"
            }
#line 1444 "equiv_type.m"
            {
#line 1444 "equiv_type.m"
              parse_tree__equiv_type__OrigItemId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1444 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 0) = ((MR_Box) (parse_tree__equiv_type__V_59_59));
#line 1444 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_60_60));
#line 1444 "equiv_type.m"
            }
#line 1446 "equiv_type.m"
            {
#line 1446 "equiv_type.m"
              parse_tree__equiv_type__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_44, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53);
            }
#line 1447 "equiv_type.m"
            *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1434 "equiv_type.m"
          }
#line 1448 "equiv_type.m"
        else
#line 1449 "equiv_type.m"
          {
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TypeCtorInfo_104_104;
#line 1449 "equiv_type.m"
            MR_String parse_tree__equiv_type__DeclStr_45;
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__PredOrFuncPieces_46;
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces_47;
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg_48;
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec_49;
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_64_64;
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_67_67;
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_68_68;
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_73_73;
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_74_74;
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_75_75;
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_76_76;
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_86_86;
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_93_93;
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_94_94;
#line 1449 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_98_98;

#line 1449 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1450 "equiv_type.m"
            *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1453 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1455 "equiv_type.m"
            if ((parse_tree__equiv_type__DeclType_23 == (MR_Integer) 1))
#line 1455 "equiv_type.m"
              parse_tree__equiv_type__DeclStr_45 = (MR_String) "mode declaration";
#line 1455 "equiv_type.m"
            else
#line 1454 "equiv_type.m"
              parse_tree__equiv_type__DeclStr_45 = (MR_String) "declaration";
#line 1460 "equiv_type.m"
            if ((*parse_tree__equiv_type__MaybePredOrFunc_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1459 "equiv_type.m"
              parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1460 "equiv_type.m"
            else
#line 1461 "equiv_type.m"
              {
#line 1461 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_62_62;
#line 1461 "equiv_type.m"
                MR_Word parse_tree__equiv_type__PredOrFunc_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__equiv_type__MaybePredOrFunc_27, (MR_Integer) 0)));

#line 1462 "equiv_type.m"
                {
#line 1462 "equiv_type.m"
                  parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1462 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_101));
#line 1462 "equiv_type.m"
                }
#line 1462 "equiv_type.m"
                {
#line 1462 "equiv_type.m"
                  parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 0) = ((MR_Box) (parse_tree__equiv_type__V_62_62));
#line 1462 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1462 "equiv_type.m"
                }
#line 1461 "equiv_type.m"
              }
#line 3450 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1464 "equiv_type.m"
            {
#line 1464 "equiv_type.m"
              parse_tree__equiv_type__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1464 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__DeclStr_45));
#line 1464 "equiv_type.m"
            }
#line 1464 "equiv_type.m"
            {
#line 1464 "equiv_type.m"
              parse_tree__equiv_type__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 0) = ((MR_Box) (parse_tree__equiv_type__V_68_68));
#line 1464 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[33])));
#line 1464 "equiv_type.m"
            }
#line 1464 "equiv_type.m"
            {
#line 1464 "equiv_type.m"
              parse_tree__equiv_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[31])));
#line 1464 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__V_67_67));
#line 1464 "equiv_type.m"
            }
#line 1465 "equiv_type.m"
            {
#line 1465 "equiv_type.m"
              parse_tree__equiv_type__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1465 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1465 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_20));
#line 1465 "equiv_type.m"
            }
#line 1465 "equiv_type.m"
            {
#line 1465 "equiv_type.m"
              parse_tree__equiv_type__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1465 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 0) = ((MR_Box) (parse_tree__equiv_type__V_76_76));
#line 1465 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[24])));
#line 1465 "equiv_type.m"
            }
#line 1466 "equiv_type.m"
            {
#line 1466 "equiv_type.m"
              parse_tree__equiv_type__V_86_86 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[26]));
            }
#line 1466 "equiv_type.m"
            {
#line 1466 "equiv_type.m"
              parse_tree__equiv_type__V_74_74 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_75_75, parse_tree__equiv_type__V_86_86);
            }
#line 1465 "equiv_type.m"
            {
#line 1465 "equiv_type.m"
              parse_tree__equiv_type__V_73_73 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, parse_tree__equiv_type__V_74_74);
            }
#line 1464 "equiv_type.m"
            {
#line 1464 "equiv_type.m"
              parse_tree__equiv_type__Pieces_47 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__V_73_73);
            }
#line 1468 "equiv_type.m"
            {
#line 1468 "equiv_type.m"
              parse_tree__equiv_type__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1468 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_94_94, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_47));
#line 1468 "equiv_type.m"
            }
#line 1468 "equiv_type.m"
            {
#line 1468 "equiv_type.m"
              parse_tree__equiv_type__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1468 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 0) = ((MR_Box) (parse_tree__equiv_type__V_94_94));
#line 1468 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1468 "equiv_type.m"
            }
#line 1468 "equiv_type.m"
            {
#line 1468 "equiv_type.m"
              parse_tree__equiv_type__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1468 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 0) = ((MR_Box) (parse_tree__equiv_type__Context_22));
#line 1468 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_93_93));
#line 1468 "equiv_type.m"
            }
#line 1469 "equiv_type.m"
            {
#line 1469 "equiv_type.m"
              parse_tree__equiv_type__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1469 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_48));
#line 1469 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1469 "equiv_type.m"
            }
#line 1469 "equiv_type.m"
            {
#line 1469 "equiv_type.m"
              parse_tree__equiv_type__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1469 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1469 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1469 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 2) = ((MR_Box) (parse_tree__equiv_type__V_98_98));
#line 1469 "equiv_type.m"
            }
#line 1470 "equiv_type.m"
            {
#line 1470 "equiv_type.m"
              MR_Word base;
#line 1470 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1470 "equiv_type.m"
              *parse_tree__equiv_type__Specs_33 = base;
#line 1470 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_49));
#line 1470 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1470 "equiv_type.m"
            }
#line 1449 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1449 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_0_50;
#line 1449 "equiv_type.m"
          }
#line 1423 "equiv_type.m"
      }
#line 1423 "equiv_type.m"
  }
#line 1409 "equiv_type.m"
}

#line 1585 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0_1(
#line 1585 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1585 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1585 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2)
#line 1585 "equiv_type.m"
{
#line 1585 "equiv_type.m"
  {
#line 1585 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1585 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_ExpandedItemSet_6;

#line 1585 "equiv_type.m"
    {
#line 1585 "equiv_type.m"
      parse_tree__equiv_type__record_expanded_item_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv1_ExpandedItemSet_6);
    }
#line 1585 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv1_ExpandedItemSet_6));
#line 1585 "equiv_type.m"
  }
#line 1585 "equiv_type.m"
}

#line 1272 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1272 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1272 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_12,
#line 1272 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_13,
#line 1272 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1272 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1272 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1272 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1272 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29)
#line 1272 "equiv_type.m"
{
#line 1300 "equiv_type.m"
  while (MR_TRUE)
#line 1300 "equiv_type.m"
    {
#line 1300 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 1300 "equiv_type.m"
      {
#line 1300 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Inst0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1300 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SymName_17;
#line 1300 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ArgInsts_18;
#line 1280 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_30_30;

#line 1280 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1280 "equiv_type.m"
          {
#line 1280 "equiv_type.m"
            parse_tree__equiv_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_11, (MR_Integer) 1)));
#line 1280 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 1280 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1280 "equiv_type.m"
              {
#line 1280 "equiv_type.m"
                parse_tree__equiv_type__SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 0)));
#line 1280 "equiv_type.m"
                parse_tree__equiv_type__ArgInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 1)));
#line 1280 "equiv_type.m"
              }
#line 1280 "equiv_type.m"
          }
#line 1300 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1281 "equiv_type.m"
          {
#line 1281 "equiv_type.m"
            MR_Word parse_tree__equiv_type__InstId_19;
#line 1281 "equiv_type.m"
            MR_Integer parse_tree__equiv_type__V_31_31;

#line 1281 "equiv_type.m"
            {
#line 1281 "equiv_type.m"
              parse_tree__equiv_type__V_31_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__equiv_type__ArgInsts_18);
            }
#line 1281 "equiv_type.m"
            {
#line 1281 "equiv_type.m"
              parse_tree__equiv_type__InstId_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1281 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_17));
#line 1281 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 1) = ((MR_Box) (parse_tree__equiv_type__V_31_31));
#line 1281 "equiv_type.m"
            }
#line 1283 "equiv_type.m"
            {
#line 1283 "equiv_type.m"
              parse_tree__equiv_type__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, ((MR_Box) (parse_tree__equiv_type__InstId_19)), parse_tree__equiv_type__ExpandedInstIds_13);
            }
#line 1286 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1285 "equiv_type.m"
              {
#line 1285 "equiv_type.m"
                *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1285 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1285 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1285 "equiv_type.m"
              }
#line 1286 "equiv_type.m"
            else
#line 1297 "equiv_type.m"
              {
#line 1297 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstParams_22;
#line 1297 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInst_23;
#line 1287 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstBody_20;
#line 1287 "equiv_type.m"
                MR_Box parse_tree__equiv_type__conv0_EqvInstBody_20;
#line 1288 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_21_21;

#line 1287 "equiv_type.m"
                {
#line 1287 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, parse_tree__equiv_type__EqvInstMap_12, ((MR_Box) (parse_tree__equiv_type__InstId_19)), &parse_tree__equiv_type__conv0_EqvInstBody_20);
                }
#line 1287 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1287 "equiv_type.m"
                  {
#line 1287 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstBody_20 = ((MR_Word) parse_tree__equiv_type__conv0_EqvInstBody_20);
#line 1287 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1287 "equiv_type.m"
                  }
#line 1287 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1287 "equiv_type.m"
                  {
#line 1288 "equiv_type.m"
                    parse_tree__equiv_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 0)));
#line 1288 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstParams_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 1)));
#line 1288 "equiv_type.m"
                    parse_tree__equiv_type__EqvInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 2)));
#line 1288 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1287 "equiv_type.m"
                  }
#line 1297 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1290 "equiv_type.m"
                  {
#line 1290 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__TypeInfo_12_51;
#line 1290 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Inst1_24;
#line 1290 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__InstIdItem_25;
#line 1290 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_32_32;
#line 1290 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;
#line 1290 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_35_35;
#line 1290 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_47_47;

#line 1290 "equiv_type.m"
                    {
#line 1290 "equiv_type.m"
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(parse_tree__equiv_type__EqvInstParams_22, parse_tree__equiv_type__ArgInsts_18, parse_tree__equiv_type__EqvInst_23, &parse_tree__equiv_type__Inst1_24);
                    }
#line 1291 "equiv_type.m"
                    {
#line 1291 "equiv_type.m"
                      parse_tree__equiv_type__InstIdItem_25 = recompilation__inst_id_to_item_name_1_f_0(parse_tree__equiv_type__InstId_19);
                    }
#line 1292 "equiv_type.m"
                    {
#line 1292 "equiv_type.m"
                      parse_tree__equiv_type__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1292 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1292 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 1) = ((MR_Box) (parse_tree__equiv_type__InstIdItem_25));
#line 1292 "equiv_type.m"
                    }
#line 1585 "equiv_type.m"
                    {
#line 1585 "equiv_type.m"
                      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1585 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
#line 1585 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0_1));
#line 1585 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1585 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 3) = ((MR_Box) (parse_tree__equiv_type__V_32_32));
#line 1585 "equiv_type.m"
                    }
#line 3825 "parse_tree.equiv_type.c"
                    parse_tree__equiv_type__TypeInfo_12_51 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[0];
#line 1585 "equiv_type.m"
                    {
#line 1585 "equiv_type.m"
                      mercury__maybe__map_maybe_3_p_0(parse_tree__equiv_type__TypeInfo_12_51, parse_tree__equiv_type__TypeInfo_12_51, parse_tree__equiv_type__V_47_47, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33);
                    }
#line 1295 "equiv_type.m"
                    {
#line 1295 "equiv_type.m"
                      parse_tree__equiv_type__V_35_35 = mercury__set__insert_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, parse_tree__equiv_type__ExpandedInstIds_13, ((MR_Box) (parse_tree__equiv_type__InstId_19)));
                    }
#line 1294 "equiv_type.m"
                    /* direct tailcall eliminated */
#line 1294 "equiv_type.m"
                    {
#line 1294 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__Inst0__tmp_copy_11 = parse_tree__equiv_type__Inst1_24;
#line 1294 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__ExpandedInstIds__tmp_copy_13 = parse_tree__equiv_type__V_35_35;
#line 1294 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;

#line 1294 "equiv_type.m"
                      parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26;
#line 1294 "equiv_type.m"
                      parse_tree__equiv_type__ExpandedInstIds_13 = parse_tree__equiv_type__ExpandedInstIds__tmp_copy_13;
#line 1294 "equiv_type.m"
                      parse_tree__equiv_type__Inst0_11 = parse_tree__equiv_type__Inst0__tmp_copy_11;
#line 1294 "equiv_type.m"
                    }
#line 1294 "equiv_type.m"
                    continue;
#line 1290 "equiv_type.m"
                  }
#line 1297 "equiv_type.m"
                else
#line 1298 "equiv_type.m"
                  {
#line 1298 "equiv_type.m"
                    *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1298 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1298 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1298 "equiv_type.m"
                  }
#line 1297 "equiv_type.m"
              }
#line 1281 "equiv_type.m"
          }
#line 1300 "equiv_type.m"
        else
#line 1301 "equiv_type.m"
          {
#line 1301 "equiv_type.m"
            *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1301 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1301 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1301 "equiv_type.m"
          }
#line 1300 "equiv_type.m"
      }
#line 1300 "equiv_type.m"
      break;
#line 1300 "equiv_type.m"
    }
#line 1272 "equiv_type.m"
}

#line 1262 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1262 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_10,
#line 1262 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_11,
#line 1262 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1262 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1262 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1262 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1262 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18)
#line 1262 "equiv_type.m"
{
#line 1268 "equiv_type.m"
  {
#line 1268 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1268 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 1269 "equiv_type.m"
    {
#line 1269 "equiv_type.m"
      parse_tree__equiv_type__V_19_19 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1269 "equiv_type.m"
    {
#line 1269 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__Inst0_10, parse_tree__equiv_type__EqvInstMap_11, parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__Inst_12, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);
#line 1269 "equiv_type.m"
      return;
    }
#line 1268 "equiv_type.m"
  }
#line 1262 "equiv_type.m"
}

#line 735 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 735 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 735 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 735 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 735 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 735 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 735 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 735 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 735 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 735 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 735 "equiv_type.m"
{
#line 742 "equiv_type.m"
  {
#line 742 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 742 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 742 "equiv_type.m"
      {
#line 742 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 743 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 743 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 743 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 742 "equiv_type.m"
      }
#line 742 "equiv_type.m"
    else
#line 745 "equiv_type.m"
      {
#line 745 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 745 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 745 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr_24;
#line 745 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_25;
#line 745 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38;
#line 745 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__AttrNum_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 0)));
#line 745 "equiv_type.m"
        MR_String parse_tree__equiv_type__AttrName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 1)));
#line 745 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 2)));
#line 745 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrMode_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 3)));
#line 745 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeSynthCall_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 4)));
#line 745 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TVarSet0_61;
#line 745 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType_62;
#line 1091 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Changed_63;
#line 1091 "equiv_type.m"
        MR_Word parse_tree__equiv_type___TVarSet_64;
#line 1091 "equiv_type.m"
        MR_Word parse_tree__equiv_type___EquivTypeInfo_65;
#line 1091 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_84_84;

#line 763 "equiv_type.m"
        {
#line 763 "equiv_type.m"
          parse_tree__equiv_type__TVarSet0_61 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
        }
#line 1091 "equiv_type.m"
        {
#line 1091 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0((MR_Integer) 0, parse_tree__equiv_type__HeadVar__3_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__AttrType0_58, &parse_tree__equiv_type__AttrType_62, &parse_tree__equiv_type___Changed_63, &parse_tree__equiv_type__V_84_84, parse_tree__equiv_type__TVarSet0_61, &parse_tree__equiv_type___TVarSet_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type___EquivTypeInfo_65, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38);
        }
#line 767 "equiv_type.m"
        {
#line 767 "equiv_type.m"
          parse_tree__equiv_type__Attr_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 767 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 0) = ((MR_Box) (parse_tree__equiv_type__AttrNum_56));
#line 767 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 1) = ((MR_Box) (parse_tree__equiv_type__AttrName_57));
#line 767 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 2) = ((MR_Box) (parse_tree__equiv_type__AttrType_62));
#line 767 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 3) = ((MR_Box) (parse_tree__equiv_type__AttrMode_59));
#line 767 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeSynthCall_60));
#line 767 "equiv_type.m"
        }
#line 748 "equiv_type.m"
        {
#line 748 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__Attrs0_23, &parse_tree__equiv_type__Attrs_25, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9, parse_tree__equiv_type__STATE_VARIABLE_Specs_10);
        }
#line 744 "equiv_type.m"
        {
#line 744 "equiv_type.m"
          MR_Word base;
#line 744 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = base;
#line 744 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Attr_24));
#line 744 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Attrs_25));
#line 744 "equiv_type.m"
        }
#line 745 "equiv_type.m"
      }
#line 742 "equiv_type.m"
  }
#line 735 "equiv_type.m"
}

#line 704 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_95_108_105_115_116_95_95_91_52_93_95_48_10_p_0(
#line 704 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 704 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 704 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_3,
#line 704 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 704 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 704 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 704 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 704 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 704 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 704 "equiv_type.m"
{
#line 711 "equiv_type.m"
  {
#line 711 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 711 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 711 "equiv_type.m"
      {
#line 711 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 711 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 711 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 711 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 711 "equiv_type.m"
      }
#line 711 "equiv_type.m"
    else
#line 714 "equiv_type.m"
      {
#line 714 "equiv_type.m"
        MR_String parse_tree__equiv_type__Name_22;
#line 714 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec0_23;
#line 714 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 714 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec_25;
#line 714 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs_26;
#line 714 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 714 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_39_39;
#line 714 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40;
#line 714 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41;
#line 714 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42;
#line 714 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventNumber_59;
#line 714 "equiv_type.m"
        MR_String parse_tree__equiv_type__EventName_60;
#line 714 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventLineNumber_61;
#line 714 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_62;
#line 714 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SyntAttrNumOrder_63;
#line 714 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_64;

#line 713 "equiv_type.m"
        parse_tree__equiv_type__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 0)));
#line 713 "equiv_type.m"
        parse_tree__equiv_type__EventSpec0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 1)));
#line 728 "equiv_type.m"
        parse_tree__equiv_type__EventNumber_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 0)));
#line 728 "equiv_type.m"
        parse_tree__equiv_type__EventName_60 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 1)));
#line 728 "equiv_type.m"
        parse_tree__equiv_type__EventLineNumber_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 2)));
#line 728 "equiv_type.m"
        parse_tree__equiv_type__Attrs0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 3)));
#line 728 "equiv_type.m"
        parse_tree__equiv_type__SyntAttrNumOrder_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 4)));
#line 730 "equiv_type.m"
        {
#line 730 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__Attrs0_62, &parse_tree__equiv_type__Attrs_64, parse_tree__equiv_type__EqvMap_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9, &parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42);
        }
#line 732 "equiv_type.m"
        {
#line 732 "equiv_type.m"
          parse_tree__equiv_type__EventSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 732 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 0) = ((MR_Box) (parse_tree__equiv_type__EventNumber_59));
#line 732 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 1) = ((MR_Box) (parse_tree__equiv_type__EventName_60));
#line 732 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 2) = ((MR_Box) (parse_tree__equiv_type__EventLineNumber_61));
#line 732 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 3) = ((MR_Box) (parse_tree__equiv_type__Attrs_64));
#line 732 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 4) = ((MR_Box) (parse_tree__equiv_type__SyntAttrNumOrder_63));
#line 732 "equiv_type.m"
        }
#line 713 "equiv_type.m"
        {
#line 713 "equiv_type.m"
          parse_tree__equiv_type__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 713 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 0) = ((MR_Box) (parse_tree__equiv_type__Name_22));
#line 713 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 1) = ((MR_Box) (parse_tree__equiv_type__EventSpec_25));
#line 713 "equiv_type.m"
        }
#line 717 "equiv_type.m"
        {
#line 717 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_95_108_105_115_116_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__NameSpecs0_24, &parse_tree__equiv_type__NameSpecs_26, parse_tree__equiv_type__EqvMap_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8, parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42, parse_tree__equiv_type__STATE_VARIABLE_Specs_10);
        }
#line 713 "equiv_type.m"
        {
#line 713 "equiv_type.m"
          MR_Word base;
#line 713 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = base;
#line 713 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_39_39));
#line 713 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__NameSpecs_26));
#line 713 "equiv_type.m"
        }
#line 714 "equiv_type.m"
      }
#line 711 "equiv_type.m"
  }
#line 704 "equiv_type.m"
}

#line 568 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 568 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 568 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 568 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 568 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 568 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 568 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 568 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 568 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 568 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 568 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 568 "equiv_type.m"
{
#line 575 "equiv_type.m"
  {
#line 575 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 575 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_20;
#line 575 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma0_21;
#line 575 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_22;
#line 575 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_23;
#line 575 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma_41;

#line 575 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 576 "equiv_type.m"
    parse_tree__equiv_type__Origin_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 576 "equiv_type.m"
    parse_tree__equiv_type__Pragma0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 576 "equiv_type.m"
    parse_tree__equiv_type__Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 576 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 601 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Pragma0_21)) == (MR_mktag((MR_Integer) 2))))
#line 602 "equiv_type.m"
      {
#line 602 "equiv_type.m"
        MR_Word parse_tree__equiv_type__FPInfo0_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma0_21, (MR_Integer) 0)));
#line 602 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 0)));
#line 602 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 1)));
#line 602 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 2)));
#line 602 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ProcVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 3)));
#line 602 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ProcVarset_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 4)));
#line 602 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ProcInstVarset_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 5)));
#line 602 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ProcImpl_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 6)));
#line 602 "equiv_type.m"
        MR_Word parse_tree__equiv_type__UserSharing0_51;
#line 602 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_62;
#line 602 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemId_63;
#line 602 "equiv_type.m"
        MR_Word parse_tree__equiv_type__FPInfo_64;
#line 602 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 602 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104;
#line 602 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_108_108;
#line 602 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_109_109;
#line 621 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Sharing0_52;
#line 621 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Types0_54;
#line 621 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TVarSet0_55;
#line 610 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeTypes0_53;
#line 610 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_101_101;

#line 606 "equiv_type.m"
        {
#line 606 "equiv_type.m"
          parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PName_44, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100);
        }
#line 608 "equiv_type.m"
        {
#line 608 "equiv_type.m"
          parse_tree__equiv_type__UserSharing0_51 = parse_tree__prog_data__get_user_annotated_sharing_1_f_0(parse_tree__equiv_type__Attrs0_43);
        }
#line 610 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__UserSharing0_51)) == (MR_mktag((MR_Integer) 1)));
#line 610 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 610 "equiv_type.m"
          {
#line 610 "equiv_type.m"
            parse_tree__equiv_type__Sharing0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 0)));
#line 610 "equiv_type.m"
            parse_tree__equiv_type__MaybeTypes0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 1)));
#line 611 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__MaybeTypes0_53)) == (MR_mktag((MR_Integer) 1)));
#line 611 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 611 "equiv_type.m"
              {
#line 611 "equiv_type.m"
                parse_tree__equiv_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes0_53, (MR_Integer) 0)));
#line 611 "equiv_type.m"
                parse_tree__equiv_type__Types0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 0)));
#line 611 "equiv_type.m"
                parse_tree__equiv_type__TVarSet0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 1)));
#line 611 "equiv_type.m"
                parse_tree__equiv_type__succeeded = MR_TRUE;
#line 611 "equiv_type.m"
              }
#line 610 "equiv_type.m"
          }
#line 621 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 615 "equiv_type.m"
          {
#line 615 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Types_56;
#line 615 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TVarSet_58;
#line 615 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Sharing_59;
#line 615 "equiv_type.m"
            MR_Word parse_tree__equiv_type__MaybeTypes_60;
#line 615 "equiv_type.m"
            MR_Word parse_tree__equiv_type__UserSharing_61;
#line 615 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102;
#line 615 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103;
#line 615 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_106_106;
#line 613 "equiv_type.m"
            MR_Word parse_tree__equiv_type___AnythingChanged_57;

#line 613 "equiv_type.m"
            {
#line 613 "equiv_type.m"
              parse_tree__equiv_type__replace_in_type_list_location_11_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__Types0_54, &parse_tree__equiv_type__Types_56, &parse_tree__equiv_type___AnythingChanged_57, parse_tree__equiv_type__TVarSet0_55, &parse_tree__equiv_type__TVarSet_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103);
            }
#line 616 "equiv_type.m"
            {
#line 616 "equiv_type.m"
              parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__TVarSet0_55, parse_tree__equiv_type__Sharing0_52, &parse_tree__equiv_type__Sharing_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
            }
#line 618 "equiv_type.m"
            {
#line 618 "equiv_type.m"
              parse_tree__equiv_type__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 0) = ((MR_Box) (parse_tree__equiv_type__Types_56));
#line 618 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 1) = ((MR_Box) (parse_tree__equiv_type__TVarSet_58));
#line 618 "equiv_type.m"
            }
#line 618 "equiv_type.m"
            {
#line 618 "equiv_type.m"
              parse_tree__equiv_type__MaybeTypes_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 618 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes_60, 0) = ((MR_Box) (parse_tree__equiv_type__V_106_106));
#line 618 "equiv_type.m"
            }
#line 619 "equiv_type.m"
            {
#line 619 "equiv_type.m"
              parse_tree__equiv_type__UserSharing_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 0) = ((MR_Box) (parse_tree__equiv_type__Sharing_59));
#line 619 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 1) = ((MR_Box) (parse_tree__equiv_type__MaybeTypes_60));
#line 619 "equiv_type.m"
            }
#line 620 "equiv_type.m"
            {
#line 620 "equiv_type.m"
              parse_tree__prog_data__set_user_annotated_sharing_3_p_0(parse_tree__equiv_type__UserSharing_61, parse_tree__equiv_type__Attrs0_43, &parse_tree__equiv_type__Attrs_62);
            }
#line 615 "equiv_type.m"
          }
#line 621 "equiv_type.m"
        else
#line 622 "equiv_type.m"
          {
#line 622 "equiv_type.m"
            parse_tree__equiv_type__Attrs_62 = parse_tree__equiv_type__Attrs0_43;
#line 622 "equiv_type.m"
            parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 622 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 622 "equiv_type.m"
          }
#line 625 "equiv_type.m"
        {
#line 625 "equiv_type.m"
          parse_tree__equiv_type__V_109_109 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_var_0, parse_tree__equiv_type__ProcVars_46);
        }
#line 624 "equiv_type.m"
        {
#line 624 "equiv_type.m"
          parse_tree__equiv_type__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 624 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 624 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (parse_tree__equiv_type__V_109_109));
#line 624 "equiv_type.m"
        }
#line 624 "equiv_type.m"
        {
#line 624 "equiv_type.m"
          parse_tree__equiv_type__ItemId_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 624 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 0) = ((MR_Box) ((MR_Integer) 9));
#line 624 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 624 "equiv_type.m"
        }
#line 626 "equiv_type.m"
        {
#line 626 "equiv_type.m"
          parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_63, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97);
        }
#line 629 "equiv_type.m"
        {
#line 629 "equiv_type.m"
          parse_tree__equiv_type__FPInfo_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 629 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 0) = ((MR_Box) (parse_tree__equiv_type__Attrs_62));
#line 629 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 1) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 629 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 2) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_45));
#line 629 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 3) = ((MR_Box) (parse_tree__equiv_type__ProcVars_46));
#line 629 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 4) = ((MR_Box) (parse_tree__equiv_type__ProcVarset_47));
#line 629 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 5) = ((MR_Box) (parse_tree__equiv_type__ProcInstVarset_48));
#line 629 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 6) = ((MR_Box) (parse_tree__equiv_type__ProcImpl_49));
#line 629 "equiv_type.m"
        }
#line 631 "equiv_type.m"
        {
#line 631 "equiv_type.m"
          parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 631 "equiv_type.m"
          MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (parse_tree__equiv_type__FPInfo_64));
#line 631 "equiv_type.m"
        }
#line 602 "equiv_type.m"
      }
#line 601 "equiv_type.m"
    else
#line 601 "equiv_type.m"
      if (((((MR_tag((MR_Word) parse_tree__equiv_type__Pragma0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_21, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 578 "equiv_type.m"
        {
#line 578 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeSpecInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_21, (MR_Integer) 1)));
#line 578 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 0)));
#line 578 "equiv_type.m"
          MR_Word parse_tree__equiv_type__NewName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 1)));
#line 578 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 2)));
#line 578 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PorF_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 3)));
#line 578 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 4)));
#line 578 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Subst0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 5)));
#line 578 "equiv_type.m"
          MR_Word parse_tree__equiv_type__VarSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 6)));
#line 578 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemIds0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 7)));
#line 578 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ExpandedItems0_34;
#line 578 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Subst_35;
#line 578 "equiv_type.m"
          MR_Word parse_tree__equiv_type__VarSet_36;
#line 578 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ExpandedItems_37;
#line 578 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemIds_38;
#line 578 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeSpecInfo_40;

#line 582 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 583 "equiv_type.m"
          if (!(parse_tree__equiv_type__succeeded))
#line 583 "equiv_type.m"
            {
#line 583 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_115_115;
#line 583 "equiv_type.m"
              MR_String parse_tree__equiv_type__V_33_33;

#line 583 "equiv_type.m"
              parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__PredName_25)) == (MR_mktag((MR_Integer) 1)));
#line 583 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 583 "equiv_type.m"
                {
#line 583 "equiv_type.m"
                  parse_tree__equiv_type__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 0)));
#line 583 "equiv_type.m"
                  parse_tree__equiv_type__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 1)));
#line 583 "equiv_type.m"
                  {
#line 583 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__V_115_115);
                  }
#line 583 "equiv_type.m"
                }
#line 583 "equiv_type.m"
            }
#line 587 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 586 "equiv_type.m"
            parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 587 "equiv_type.m"
          else
#line 588 "equiv_type.m"
            {
#line 588 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_111_111;

#line 588 "equiv_type.m"
              {
#line 588 "equiv_type.m"
                parse_tree__equiv_type__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 588 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 588 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 1) = ((MR_Box) (parse_tree__equiv_type__ItemIds0_32));
#line 588 "equiv_type.m"
              }
#line 588 "equiv_type.m"
              {
#line 588 "equiv_type.m"
                parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 588 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems0_34, 0) = ((MR_Box) (parse_tree__equiv_type__V_111_111));
#line 588 "equiv_type.m"
              }
#line 588 "equiv_type.m"
            }
#line 590 "equiv_type.m"
          {
#line 590 "equiv_type.m"
            parse_tree__equiv_type__replace_in_subst_10_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__Subst0_30, &parse_tree__equiv_type__Subst_35, parse_tree__equiv_type__VarSet0_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__ExpandedItems0_34, &parse_tree__equiv_type__ExpandedItems_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
          }
#line 595 "equiv_type.m"
          if ((parse_tree__equiv_type__ExpandedItems_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 594 "equiv_type.m"
            parse_tree__equiv_type__ItemIds_38 = parse_tree__equiv_type__ItemIds0_32;
#line 595 "equiv_type.m"
          else
#line 596 "equiv_type.m"
            {
#line 596 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems_37, (MR_Integer) 0)));
#line 596 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 0)));

#line 596 "equiv_type.m"
              parse_tree__equiv_type__ItemIds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 1)));
#line 596 "equiv_type.m"
            }
#line 598 "equiv_type.m"
          {
#line 598 "equiv_type.m"
            parse_tree__equiv_type__TypeSpecInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 598 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 598 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 1) = ((MR_Box) (parse_tree__equiv_type__NewName_26));
#line 598 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 2) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 598 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 3) = ((MR_Box) (parse_tree__equiv_type__PorF_28));
#line 598 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 4) = ((MR_Box) (parse_tree__equiv_type__Modes_29));
#line 598 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 5) = ((MR_Box) (parse_tree__equiv_type__Subst_35));
#line 598 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 6) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 598 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 7) = ((MR_Box) (parse_tree__equiv_type__ItemIds_38));
#line 598 "equiv_type.m"
          }
#line 600 "equiv_type.m"
          {
#line 600 "equiv_type.m"
            parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "equiv_type.m"
            MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 600 "equiv_type.m"
            MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 1) = ((MR_Box) (parse_tree__equiv_type__TypeSpecInfo_40));
#line 600 "equiv_type.m"
          }
#line 578 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 578 "equiv_type.m"
        }
#line 601 "equiv_type.m"
      else
#line 664 "equiv_type.m"
        {
#line 665 "equiv_type.m"
          parse_tree__equiv_type__Pragma_41 = parse_tree__equiv_type__Pragma0_21;
#line 664 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 664 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 664 "equiv_type.m"
        }
#line 667 "equiv_type.m"
    {
#line 667 "equiv_type.m"
      MR_Word base;
#line 667 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 667 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 667 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Origin_20));
#line 667 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Pragma_41));
#line 667 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Context_22));
#line 667 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__SeqNum_23));
#line 667 "equiv_type.m"
    }
#line 575 "equiv_type.m"
  }
#line 568 "equiv_type.m"
}

#line 853 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 853 "equiv_type.m"
{
#line 853 "equiv_type.m"
  {
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 853 "equiv_type.m"
  }
#line 853 "equiv_type.m"
}

#line 536 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 536 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 536 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 536 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 536 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 536 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 536 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 536 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 536 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 536 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 536 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 536 "equiv_type.m"
{
#line 543 "equiv_type.m"
  {
#line 543 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_81;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_20;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_21;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types0_22;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OriginalTypes_23;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstanceBody_24;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_25;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainingModuleName_26;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27;
#line 543 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_29;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_30;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet1_31;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors1_32;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types_33;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_36;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_37;
#line 543 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_38;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_39;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_49_49;
#line 543 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet1_31;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_UsedTypeCtors1_32;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46;
#line 558 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_34_34;
#line 558 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_35_35;

#line 543 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "equiv_type.m"
    parse_tree__equiv_type__Constraints0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 544 "equiv_type.m"
    parse_tree__equiv_type__ClassName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 544 "equiv_type.m"
    parse_tree__equiv_type__Types0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 544 "equiv_type.m"
    parse_tree__equiv_type__OriginalTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 544 "equiv_type.m"
    parse_tree__equiv_type__InstanceBody_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 544 "equiv_type.m"
    parse_tree__equiv_type__VarSet0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 544 "equiv_type.m"
    parse_tree__equiv_type__ContainingModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 544 "equiv_type.m"
    parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 544 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 8)));
#line 547 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "equiv_type.m"
    if (!(parse_tree__equiv_type__succeeded))
#line 548 "equiv_type.m"
      {
#line 548 "equiv_type.m"
        parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ContainingModuleName_26, parse_tree__equiv_type__ModuleName_12);
      }
#line 552 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 551 "equiv_type.m"
      parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "equiv_type.m"
    else
#line 553 "equiv_type.m"
      {
#line 553 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_44_44;
#line 553 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 553 "equiv_type.m"
        {
#line 553 "equiv_type.m"
          parse_tree__equiv_type__V_45_45 = mercury__set__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0);
        }
#line 553 "equiv_type.m"
        {
#line 553 "equiv_type.m"
          parse_tree__equiv_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 553 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_45_45));
#line 553 "equiv_type.m"
        }
#line 553 "equiv_type.m"
        {
#line 553 "equiv_type.m"
          parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 553 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UsedTypeCtors0_29, 0) = ((MR_Box) (parse_tree__equiv_type__V_44_44));
#line 553 "equiv_type.m"
        }
#line 553 "equiv_type.m"
      }
#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 3) = ((MR_Box) (parse_tree__equiv_type__Location_13));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_14));
#line 853 "equiv_type.m"
    }
#line 4908 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_81, parse_tree__equiv_type__TypeCtorInfo_38_81, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_68_68, parse_tree__equiv_type__Constraints0_20, &parse_tree__equiv_type__Constraints_30, ((MR_Box) (parse_tree__equiv_type__VarSet0_25)), &parse_tree__equiv_type__conv6_VarSet1_31, ((MR_Box) (parse_tree__equiv_type__UsedTypeCtors0_29)), &parse_tree__equiv_type__conv5_UsedTypeCtors1_32, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
    }
#line 853 "equiv_type.m"
    parse_tree__equiv_type__VarSet1_31 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet1_31);
#line 853 "equiv_type.m"
    parse_tree__equiv_type__UsedTypeCtors1_32 = ((MR_Word) parse_tree__equiv_type__conv5_UsedTypeCtors1_32);
#line 853 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
#line 558 "equiv_type.m"
    {
#line 558 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__Types0_22, &parse_tree__equiv_type__Types_33, &parse_tree__equiv_type__V_34_34, &parse_tree__equiv_type__V_35_35, parse_tree__equiv_type__VarSet1_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__UsedTypeCtors1_32, &parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43);
    }
#line 562 "equiv_type.m"
    {
#line 562 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Types0_22, &parse_tree__equiv_type__Arity_38);
    }
#line 563 "equiv_type.m"
    {
#line 563 "equiv_type.m"
      parse_tree__equiv_type__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 563 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 563 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_38));
#line 563 "equiv_type.m"
    }
#line 563 "equiv_type.m"
    {
#line 563 "equiv_type.m"
      parse_tree__equiv_type__ItemId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 563 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 0) = ((MR_Box) ((MR_Integer) 4));
#line 563 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 563 "equiv_type.m"
    }
#line 564 "equiv_type.m"
    {
#line 564 "equiv_type.m"
      parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_39, parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41);
    }
#line 565 "equiv_type.m"
    {
#line 565 "equiv_type.m"
      MR_Word base;
#line 565 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 565 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 565 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Constraints_30));
#line 565 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 565 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Types_33));
#line 565 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__OriginalTypes_23));
#line 565 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__InstanceBody_24));
#line 565 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 565 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__ContainingModuleName_26));
#line 565 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 565 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 565 "equiv_type.m"
    }
#line 543 "equiv_type.m"
  }
#line 536 "equiv_type.m"
}

#line 468 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 468 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 468 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 468 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 468 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 468 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 468 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 468 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 468 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 468 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 468 "equiv_type.m"
{
#line 475 "equiv_type.m"
  {
#line 475 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 475 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_52_52;
#line 475 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 475 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 475 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 475 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 475 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 475 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Det0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 475 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 475 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 475 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_29;
#line 475 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_30;
#line 475 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc_31;
#line 475 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst_32;
#line 475 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Det_33;
#line 475 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_34;
#line 475 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes_35;
#line 475 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_47_47;

#line 478 "equiv_type.m"
    {
#line 478 "equiv_type.m"
      parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_23, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, &parse_tree__equiv_type__ExpandedItems0_29);
    }
#line 5056 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 480 "equiv_type.m"
    {
#line 480 "equiv_type.m"
      parse_tree__equiv_type__V_47_47 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes0_24);
    }
#line 480 "equiv_type.m"
    {
#line 480 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__PredName_23, parse_tree__equiv_type__V_47_47, parse_tree__equiv_type__Context_27, (MR_Integer) 1, parse_tree__equiv_type__EqvInstMap_15, &parse_tree__equiv_type__ExtraModes_30, parse_tree__equiv_type__MaybePredOrFunc0_22, &parse_tree__equiv_type__MaybePredOrFunc_31, parse_tree__equiv_type__WithInst0_25, &parse_tree__equiv_type__WithInst_32, parse_tree__equiv_type__Det0_26, &parse_tree__equiv_type__Det_33, parse_tree__equiv_type__ExpandedItems0_29, &parse_tree__equiv_type__ExpandedItems_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
    }
#line 487 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraModes_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "equiv_type.m"
      parse_tree__equiv_type__Modes_35 = parse_tree__equiv_type__Modes0_24;
#line 487 "equiv_type.m"
    else
#line 489 "equiv_type.m"
      {
#line 489 "equiv_type.m"
        parse_tree__equiv_type__Modes_35 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes0_24, parse_tree__equiv_type__ExtraModes_30);
      }
#line 498 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybePredOrFunc_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "equiv_type.m"
      *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43;
#line 498 "equiv_type.m"
    else
#line 492 "equiv_type.m"
      {
#line 492 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc_31, (MR_Integer) 0)));
#line 492 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemType_39;
#line 492 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__Arity_40;
#line 492 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__OrigArity_41;
#line 492 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemId_42;
#line 492 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_50_50;

#line 493 "equiv_type.m"
        {
#line 493 "equiv_type.m"
          parse_tree__equiv_type__ItemType_39 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_38);
        }
#line 494 "equiv_type.m"
        {
#line 494 "equiv_type.m"
          mercury__list__length_2_p_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes_35, &parse_tree__equiv_type__Arity_40);
        }
#line 495 "equiv_type.m"
        {
#line 495 "equiv_type.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_38, &parse_tree__equiv_type__OrigArity_41, parse_tree__equiv_type__Arity_40);
        }
#line 496 "equiv_type.m"
        {
#line 496 "equiv_type.m"
          parse_tree__equiv_type__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 496 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_50_50, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_23));
#line 496 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_50_50, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_41));
#line 496 "equiv_type.m"
        }
#line 496 "equiv_type.m"
        {
#line 496 "equiv_type.m"
          parse_tree__equiv_type__ItemId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 496 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_42, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_39));
#line 496 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_42, 1) = ((MR_Box) (parse_tree__equiv_type__V_50_50));
#line 496 "equiv_type.m"
        }
#line 497 "equiv_type.m"
        {
#line 497 "equiv_type.m"
          parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_42, parse_tree__equiv_type__ExpandedItems_34, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44);
        }
#line 492 "equiv_type.m"
      }
#line 501 "equiv_type.m"
    {
#line 501 "equiv_type.m"
      MR_Word base;
#line 501 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 501 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 501 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_21));
#line 501 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_31));
#line 501 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__PredName_23));
#line 501 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Modes_35));
#line 501 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__WithInst_32));
#line 501 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Det_33));
#line 501 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 501 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 501 "equiv_type.m"
    }
#line 475 "equiv_type.m"
  }
#line 468 "equiv_type.m"
}

#line 1372 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1372__1_1_f_0(
#line 1372 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_134)
#line 1372 "equiv_type.m"
{
#line 1372 "equiv_type.m"
  {
#line 1372 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1372 "equiv_type.m"
    MR_Word parse_tree__equiv_type__HeadVar__2_135;
#line 1372 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_134, (MR_Integer) 0)));
#line 1372 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Mode_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_134, (MR_Integer) 1)));

#line 1373 "equiv_type.m"
    {
#line 1373 "equiv_type.m"
      parse_tree__equiv_type__HeadVar__2_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_135, 0) = ((MR_Box) (parse_tree__equiv_type__Type_172));
#line 1373 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_135, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_173));
#line 1373 "equiv_type.m"
    }
#line 1372 "equiv_type.m"
    return parse_tree__equiv_type__HeadVar__2_135;
#line 1372 "equiv_type.m"
  }
#line 1372 "equiv_type.m"
}

#line 1365 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1365__1_1_f_0(
#line 1365 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_165)
#line 1365 "equiv_type.m"
{
#line 1365 "equiv_type.m"
  {
#line 1365 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1365 "equiv_type.m"
    MR_Word parse_tree__equiv_type__HeadVar__2_166;

#line 1365 "equiv_type.m"
    {
#line 1365 "equiv_type.m"
      parse_tree__equiv_type__HeadVar__2_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1365 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_166, 0) = ((MR_Box) (parse_tree__equiv_type__HeadVar__1_165));
#line 1365 "equiv_type.m"
    }
#line 1365 "equiv_type.m"
    return parse_tree__equiv_type__HeadVar__2_166;
#line 1365 "equiv_type.m"
  }
#line 1365 "equiv_type.m"
}

#line 163 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
#line 163 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 163 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 163 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 163 "equiv_type.m"
{
#line 163 "equiv_type.m"
  {
#line 163 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 163 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 163 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 163 "equiv_type.m"
    {
#line 163 "equiv_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__Cast_HeadVar1_4, parse_tree__equiv_type__Cast_HeadVar2_5);
#line 163 "equiv_type.m"
      return;
    }
#line 163 "equiv_type.m"
  }
#line 163 "equiv_type.m"
}

#line 163 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
#line 163 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 163 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 163 "equiv_type.m"
{
#line 5278 "parse_tree.equiv_type.c"
  {
#line 5280 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__HeadVar__2_1 == parse_tree__equiv_type__HeadVar__2_2);

#line 5283 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 5285 "parse_tree.equiv_type.c"
  }
#line 163 "equiv_type.m"
}

#line 1571 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type____Compare____expanded_item_set_0_0(
#line 1571 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 1571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 1571 "equiv_type.m"
{
#line 1571 "equiv_type.m"
  {
#line 1571 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1571 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 1571 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 1571 "equiv_type.m"
    {
#line 1571 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[0], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 1571 "equiv_type.m"
      return;
    }
#line 1571 "equiv_type.m"
  }
#line 1571 "equiv_type.m"
}

#line 1571 "equiv_type.m"
MR_bool MR_CALL 
parse_tree__equiv_type____Unify____expanded_item_set_0_0(
#line 1571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 1571 "equiv_type.m"
{
#line 1571 "equiv_type.m"
  {
#line 1571 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1571 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 1571 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 1571 "equiv_type.m"
    {
#line 1571 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[0], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 1571 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 1571 "equiv_type.m"
  }
#line 1571 "equiv_type.m"
}

#line 126 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_location_0_0(
#line 126 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 126 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 126 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 126 "equiv_type.m"
{
#line 126 "equiv_type.m"
  {
#line 126 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 126 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 126 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 126 "equiv_type.m"
    {
#line 126 "equiv_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__Cast_HeadVar1_4, parse_tree__equiv_type__Cast_HeadVar2_5);
#line 126 "equiv_type.m"
      return;
    }
#line 126 "equiv_type.m"
  }
#line 126 "equiv_type.m"
}

#line 126 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_location_0_0(
#line 126 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 126 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 126 "equiv_type.m"
{
#line 5393 "parse_tree.equiv_type.c"
  {
#line 5395 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__HeadVar__2_1 == parse_tree__equiv_type__HeadVar__2_2);

#line 5398 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 5400 "parse_tree.equiv_type.c"
  }
#line 126 "equiv_type.m"
}

#line 78 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0(
#line 78 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 78 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 78 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 78 "equiv_type.m"
{
#line 78 "equiv_type.m"
  {
#line 78 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 78 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_12 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 78 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_13 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 78 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_12 == parse_tree__equiv_type__CastY_13);
#line 78 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 5429 "parse_tree.equiv_type.c"
      *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "equiv_type.m"
    else
#line 78 "equiv_type.m"
      {
#line 78 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 78 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));
#line 78 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 78 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 78 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 2)));
#line 78 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_10_10;

#line 78 "equiv_type.m"
        {
#line 78 "equiv_type.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[2], &parse_tree__equiv_type__V_10_10, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
        }
#line 5455 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_10_10 == (MR_Integer) 0);
#line 78 "equiv_type.m"
        parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 78 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 78 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_10_10;
#line 78 "equiv_type.m"
        else
#line 78 "equiv_type.m"
          {
#line 78 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_11_11;

#line 78 "equiv_type.m"
            {
#line 78 "equiv_type.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[8], &parse_tree__equiv_type__V_11_11, ((MR_Box) (parse_tree__equiv_type__V_5_5)), ((MR_Box) (parse_tree__equiv_type__V_8_8)));
            }
#line 5475 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_11_11 == (MR_Integer) 0);
#line 78 "equiv_type.m"
            parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 78 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 78 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_11_11;
#line 78 "equiv_type.m"
            else
#line 78 "equiv_type.m"
              {
#line 78 "equiv_type.m"
                parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__V_6_6, parse_tree__equiv_type__V_9_9);
#line 78 "equiv_type.m"
                return;
              }
#line 78 "equiv_type.m"
          }
#line 78 "equiv_type.m"
      }
#line 78 "equiv_type.m"
  }
#line 78 "equiv_type.m"
}

#line 78 "equiv_type.m"
MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0(
#line 78 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 78 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 78 "equiv_type.m"
{
#line 78 "equiv_type.m"
  {
#line 78 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 78 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_9 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 78 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_10 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 78 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_9 == parse_tree__equiv_type__CastY_10);
#line 78 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 78 "equiv_type.m"
      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 78 "equiv_type.m"
    else
#line 78 "equiv_type.m"
      {
#line 78 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_12_12;
#line 78 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 78 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 2)));
#line 78 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 78 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));

#line 5544 "parse_tree.equiv_type.c"
        {
#line 5546 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[2], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 78 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 78 "equiv_type.m"
          {
#line 5553 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[8];
#line 5555 "parse_tree.equiv_type.c"
            {
#line 5557 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 78 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 5562 "parse_tree.equiv_type.c"
              {
#line 5564 "parse_tree.equiv_type.c"
                return parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__equiv_type__V_5_5, parse_tree__equiv_type__V_8_8);
              }
#line 78 "equiv_type.m"
          }
#line 78 "equiv_type.m"
      }
#line 78 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 78 "equiv_type.m"
  }
#line 78 "equiv_type.m"
}

#line 85 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type____Compare____eqv_map_0_0(
#line 85 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 85 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 85 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 85 "equiv_type.m"
{
#line 85 "equiv_type.m"
  {
#line 85 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 85 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 85 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 85 "equiv_type.m"
    {
#line 85 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[4], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 85 "equiv_type.m"
      return;
    }
#line 85 "equiv_type.m"
  }
#line 85 "equiv_type.m"
}

#line 85 "equiv_type.m"
MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_map_0_0(
#line 85 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 85 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 85 "equiv_type.m"
{
#line 85 "equiv_type.m"
  {
#line 85 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 85 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 85 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 85 "equiv_type.m"
    {
#line 85 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[4], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 85 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 85 "equiv_type.m"
  }
#line 85 "equiv_type.m"
}

#line 161 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_map_0_0(
#line 161 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 161 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 161 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 161 "equiv_type.m"
{
#line 161 "equiv_type.m"
  {
#line 161 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 161 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 161 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 161 "equiv_type.m"
    {
#line 161 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[3], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 161 "equiv_type.m"
      return;
    }
#line 161 "equiv_type.m"
  }
#line 161 "equiv_type.m"
}

#line 161 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_map_0_0(
#line 161 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 161 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 161 "equiv_type.m"
{
#line 161 "equiv_type.m"
  {
#line 161 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 161 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 161 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 161 "equiv_type.m"
    {
#line 161 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[3], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 161 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 161 "equiv_type.m"
  }
#line 161 "equiv_type.m"
}

#line 154 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
#line 154 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 154 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 154 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 154 "equiv_type.m"
{
#line 154 "equiv_type.m"
  {
#line 154 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 154 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_12 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 154 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_13 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 154 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_12 == parse_tree__equiv_type__CastY_13);
#line 154 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 5726 "parse_tree.equiv_type.c"
      *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 154 "equiv_type.m"
    else
#line 154 "equiv_type.m"
      {
#line 154 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 154 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 154 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));
#line 154 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 154 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 154 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 2)));
#line 154 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_10_10;

#line 154 "equiv_type.m"
        {
#line 154 "equiv_type.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[6], &parse_tree__equiv_type__V_10_10, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
        }
#line 5752 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_10_10 == (MR_Integer) 0);
#line 154 "equiv_type.m"
        parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 154 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 154 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_10_10;
#line 154 "equiv_type.m"
        else
#line 154 "equiv_type.m"
          {
#line 154 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_11_11;

#line 154 "equiv_type.m"
            {
#line 154 "equiv_type.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[7], &parse_tree__equiv_type__V_11_11, ((MR_Box) (parse_tree__equiv_type__V_5_5)), ((MR_Box) (parse_tree__equiv_type__V_8_8)));
            }
#line 5772 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_11_11 == (MR_Integer) 0);
#line 154 "equiv_type.m"
            parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 154 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 154 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_11_11;
#line 154 "equiv_type.m"
            else
#line 154 "equiv_type.m"
              {
#line 154 "equiv_type.m"
                parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__V_6_6, parse_tree__equiv_type__V_9_9);
#line 154 "equiv_type.m"
                return;
              }
#line 154 "equiv_type.m"
          }
#line 154 "equiv_type.m"
      }
#line 154 "equiv_type.m"
  }
#line 154 "equiv_type.m"
}

#line 154 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
#line 154 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 154 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 154 "equiv_type.m"
{
#line 154 "equiv_type.m"
  {
#line 154 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 154 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_9 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 154 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_10 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 154 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_9 == parse_tree__equiv_type__CastY_10);
#line 154 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 154 "equiv_type.m"
      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 154 "equiv_type.m"
    else
#line 154 "equiv_type.m"
      {
#line 154 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_12_12;
#line 154 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 154 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 154 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 2)));
#line 154 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 154 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 154 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));

#line 5841 "parse_tree.equiv_type.c"
        {
#line 5843 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[6], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 154 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 154 "equiv_type.m"
          {
#line 5850 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[7];
#line 5852 "parse_tree.equiv_type.c"
            {
#line 5854 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 154 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 5859 "parse_tree.equiv_type.c"
              {
#line 5861 "parse_tree.equiv_type.c"
                return parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__equiv_type__V_5_5, parse_tree__equiv_type__V_8_8);
              }
#line 154 "equiv_type.m"
          }
#line 154 "equiv_type.m"
      }
#line 154 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 154 "equiv_type.m"
  }
#line 154 "equiv_type.m"
}

#line 88 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type____Compare____equiv_type_info_0_0(
#line 88 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 88 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 88 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 88 "equiv_type.m"
{
#line 88 "equiv_type.m"
  {
#line 88 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 88 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 88 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 88 "equiv_type.m"
    {
#line 88 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[4], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 88 "equiv_type.m"
      return;
    }
#line 88 "equiv_type.m"
  }
#line 88 "equiv_type.m"
}

#line 88 "equiv_type.m"
MR_bool MR_CALL 
parse_tree__equiv_type____Unify____equiv_type_info_0_0(
#line 88 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 88 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 88 "equiv_type.m"
{
#line 88 "equiv_type.m"
  {
#line 88 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 88 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 88 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 88 "equiv_type.m"
    {
#line 88 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[4], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 88 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 88 "equiv_type.m"
  }
#line 88 "equiv_type.m"
}

#line 1587 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_2_3_p_0(
#line 1587 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ItemId_4,
#line 1587 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedItemSet0_5,
#line 1587 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExpandedItemSet_6)
#line 1587 "equiv_type.m"
{
#line 1590 "equiv_type.m"
  {
#line 1590 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1590 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ExpandedItemSet0_5, (MR_Integer) 0)));
#line 1590 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Items0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ExpandedItemSet0_5, (MR_Integer) 1)));
#line 1590 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_4, (MR_Integer) 1)));
#line 1592 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_4, (MR_Integer) 0)));
#line 1593 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemName_10, (MR_Integer) 0)));
#line 1593 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_16_16;
#line 1593 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemName_10, (MR_Integer) 1)));
#line 1593 "equiv_type.m"
    MR_String parse_tree__equiv_type__V_11_11;

#line 1593 "equiv_type.m"
    parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 1593 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1593 "equiv_type.m"
      {
#line 1593 "equiv_type.m"
        parse_tree__equiv_type__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_14_14, (MR_Integer) 0)));
#line 1593 "equiv_type.m"
        parse_tree__equiv_type__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_14_14, (MR_Integer) 1)));
#line 1593 "equiv_type.m"
        {
#line 1593 "equiv_type.m"
          parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ModuleName_7, parse_tree__equiv_type__V_16_16);
        }
#line 1593 "equiv_type.m"
      }
#line 1596 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1595 "equiv_type.m"
      *parse_tree__equiv_type__ExpandedItemSet_6 = parse_tree__equiv_type__ExpandedItemSet0_5;
#line 1596 "equiv_type.m"
    else
#line 1597 "equiv_type.m"
      {
#line 1597 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Items_13;

#line 1597 "equiv_type.m"
        {
#line 1597 "equiv_type.m"
          mercury__set__insert_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, ((MR_Box) (parse_tree__equiv_type__ItemId_4)), parse_tree__equiv_type__Items0_8, &parse_tree__equiv_type__Items_13);
        }
#line 1598 "equiv_type.m"
        {
#line 1598 "equiv_type.m"
          MR_Word base;
#line 1598 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1598 "equiv_type.m"
          *parse_tree__equiv_type__ExpandedItemSet_6 = base;
#line 1598 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_7));
#line 1598 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Items_13));
#line 1598 "equiv_type.m"
        }
#line 1597 "equiv_type.m"
      }
#line 1590 "equiv_type.m"
  }
#line 1587 "equiv_type.m"
}

#line 1585 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_3_p_0_1(
#line 1585 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1585 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1585 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2)
#line 1585 "equiv_type.m"
{
#line 1585 "equiv_type.m"
  {
#line 1585 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1585 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_ExpandedItemSet_6;

#line 1585 "equiv_type.m"
    {
#line 1585 "equiv_type.m"
      parse_tree__equiv_type__record_expanded_item_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv0_ExpandedItemSet_6);
    }
#line 1585 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv0_ExpandedItemSet_6));
#line 1585 "equiv_type.m"
  }
#line 1585 "equiv_type.m"
}

#line 1581 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_3_p_0(
#line 1581 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item_4,
#line 1581 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 1581 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7)
#line 1581 "equiv_type.m"
{
#line 1584 "equiv_type.m"
  {
#line 1584 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1584 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeInfo_12_12;
#line 1584 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_8_8;

#line 1585 "equiv_type.m"
    {
#line 1585 "equiv_type.m"
      parse_tree__equiv_type__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1585 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_8_8, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
#line 1585 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_8_8, 1) = ((MR_Box) (parse_tree__equiv_type__record_expanded_item_3_p_0_1));
#line 1585 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1585 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_8_8, 3) = ((MR_Box) (parse_tree__equiv_type__Item_4));
#line 1585 "equiv_type.m"
    }
#line 6087 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[0];
#line 1585 "equiv_type.m"
    {
#line 1585 "equiv_type.m"
      mercury__maybe__map_maybe_3_p_0(parse_tree__equiv_type__TypeInfo_12_12, parse_tree__equiv_type__TypeInfo_12_12, parse_tree__equiv_type__V_8_8, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7);
#line 1585 "equiv_type.m"
      return;
    }
#line 1584 "equiv_type.m"
  }
#line 1581 "equiv_type.m"
}

#line 1552 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1552 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1552 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 1552 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1552 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Sel0_13,
#line 1552 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Sel_14,
#line 1552 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1552 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1552 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1552 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26)
#line 1552 "equiv_type.m"
{
#line 1560 "equiv_type.m"
  {
#line 1560 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1560 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Sel0_13)) == (MR_mktag((MR_Integer) 0))))
#line 1560 "equiv_type.m"
      {
#line 1561 "equiv_type.m"
        *parse_tree__equiv_type__Sel_14 = parse_tree__equiv_type__Sel0_13;
#line 1560 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23;
#line 1560 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25;
#line 1560 "equiv_type.m"
      }
#line 1560 "equiv_type.m"
    else
#line 1563 "equiv_type.m"
      {
#line 1563 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Sel0_13, (MR_Integer) 0)));
#line 1563 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_20;
#line 1091 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_21_21;
#line 1091 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_22_22;
#line 1091 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_43_43;

#line 1091 "equiv_type.m"
        {
#line 1091 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_10, parse_tree__equiv_type__EqvMap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_19, &parse_tree__equiv_type__Type_20, &parse_tree__equiv_type__V_21_21, &parse_tree__equiv_type__V_43_43, parse_tree__equiv_type__TVarSet_12, &parse_tree__equiv_type__V_22_22, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);
        }
#line 1566 "equiv_type.m"
        {
#line 1566 "equiv_type.m"
          MR_Word base;
#line 1566 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1566 "equiv_type.m"
          *parse_tree__equiv_type__Sel_14 = base;
#line 1566 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_20));
#line 1566 "equiv_type.m"
        }
#line 1563 "equiv_type.m"
      }
#line 1560 "equiv_type.m"
  }
#line 1552 "equiv_type.m"
}

#line 1548 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1548 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1548 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1548 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1548 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1548 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1548 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1548 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1548 "equiv_type.m"
{
#line 1548 "equiv_type.m"
  {
#line 1548 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1548 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_Sel_14;
#line 1548 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24;
#line 1548 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26;

#line 1548 "equiv_type.m"
    {
#line 1548 "equiv_type.m"
      parse_tree__equiv_type__replace_in_unit_selector_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_Sel_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26);
    }
#line 1548 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_Sel_14));
#line 1548 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24));
#line 1548 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26));
#line 1548 "equiv_type.m"
  }
#line 1548 "equiv_type.m"
}

#line 1527 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1527 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1527 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 1527 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1527 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1527 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1527 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1527 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1527 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1527 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22)
#line 1527 "equiv_type.m"
{
#line 1534 "equiv_type.m"
  {
#line 1534 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_33_50;
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_33_76;
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSA0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSB0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSA_15;
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSB_16;
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24;
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA0_13, (MR_Integer) 0)));
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA0_13, (MR_Integer) 1)));
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_40;
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_41_41;
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Var_64;
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_65;
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_66;
#line 1548 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1548 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24;
#line 1548 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20;
#line 1548 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22;

#line 1548 "equiv_type.m"
    {
#line 1548 "equiv_type.m"
      parse_tree__equiv_type__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1548 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[1]));
#line 1548 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1));
#line 1548 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1548 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 3) = ((MR_Box) (parse_tree__equiv_type__Location_10));
#line 1548 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_11));
#line 1548 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 5) = ((MR_Box) (parse_tree__equiv_type__TVarSet_12));
#line 1548 "equiv_type.m"
    }
#line 6310 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_33_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1548 "equiv_type.m"
    {
#line 1548 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_33_50, parse_tree__equiv_type__TypeCtorInfo_33_50, (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__Sel0_39, &parse_tree__equiv_type__Sel_40, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
    }
#line 1548 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23);
#line 1548 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
#line 1550 "equiv_type.m"
    {
#line 1550 "equiv_type.m"
      parse_tree__equiv_type__SSA_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1550 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA_15, 0) = ((MR_Box) (parse_tree__equiv_type__Var_38));
#line 1550 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA_15, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_40));
#line 1550 "equiv_type.m"
    }
#line 1547 "equiv_type.m"
    parse_tree__equiv_type__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB0_14, (MR_Integer) 0)));
#line 1547 "equiv_type.m"
    parse_tree__equiv_type__Sel0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB0_14, (MR_Integer) 1)));
#line 6335 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_33_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1548 "equiv_type.m"
    {
#line 1548 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_33_76, parse_tree__equiv_type__TypeCtorInfo_33_76, (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__Sel0_65, &parse_tree__equiv_type__Sel_66, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
    }
#line 1548 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20);
#line 1548 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
#line 1550 "equiv_type.m"
    {
#line 1550 "equiv_type.m"
      parse_tree__equiv_type__SSB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1550 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB_16, 0) = ((MR_Box) (parse_tree__equiv_type__Var_64));
#line 1550 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB_16, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_66));
#line 1550 "equiv_type.m"
    }
#line 1534 "equiv_type.m"
    {
#line 1534 "equiv_type.m"
      MR_Word base;
#line 1534 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1534 "equiv_type.m"
      *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1534 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__SSA_15));
#line 1534 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__SSB_16));
#line 1534 "equiv_type.m"
    }
#line 1534 "equiv_type.m"
  }
#line 1527 "equiv_type.m"
}

#line 1522 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1522 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1522 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1522 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1522 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1522 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1522 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1522 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1522 "equiv_type.m"
{
#line 1522 "equiv_type.m"
  {
#line 1522 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1522 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_HeadVar__5_5;
#line 1522 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20;
#line 1522 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22;

#line 1522 "equiv_type.m"
    {
#line 1522 "equiv_type.m"
      parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_HeadVar__5_5, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22);
    }
#line 1522 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_HeadVar__5_5));
#line 1522 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20));
#line 1522 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22));
#line 1522 "equiv_type.m"
  }
#line 1522 "equiv_type.m"
}

#line 1507 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 1507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__SharingDomain0_13,
#line 1507 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__SharingDomain_14,
#line 1507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 1507 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 1507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 1507 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23)
#line 1507 "equiv_type.m"
{
#line 1517 "equiv_type.m"
  {
#line 1517 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1517 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__SharingDomain0_13)) == (MR_mktag((MR_Integer) 1))))
#line 1520 "equiv_type.m"
      {
#line 1520 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_33_33;
#line 1520 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SharingPairs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__SharingDomain0_13, (MR_Integer) 0)));
#line 1520 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SharingPairs_19;
#line 1520 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_24_24;
#line 1521 "equiv_type.m"
        MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21;
#line 1521 "equiv_type.m"
        MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23;

#line 1522 "equiv_type.m"
        {
#line 1522 "equiv_type.m"
          parse_tree__equiv_type__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1522 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[0]));
#line 1522 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1));
#line 1522 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1522 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 3) = ((MR_Box) (parse_tree__equiv_type__Location_10));
#line 1522 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_11));
#line 1522 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 5) = ((MR_Box) (parse_tree__equiv_type__TVarSet_12));
#line 1522 "equiv_type.m"
        }
#line 6484 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__TypeInfo_33_33 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[2];
#line 1521 "equiv_type.m"
        {
#line 1521 "equiv_type.m"
          mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeInfo_33_33, parse_tree__equiv_type__TypeInfo_33_33, (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_24_24, parse_tree__equiv_type__SharingPairs0_18, &parse_tree__equiv_type__SharingPairs_19, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23);
        }
#line 1521 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21);
#line 1521 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23);
#line 1524 "equiv_type.m"
        {
#line 1524 "equiv_type.m"
          MR_Word base;
#line 1524 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "equiv_type.m"
          *parse_tree__equiv_type__SharingDomain_14 = base;
#line 1524 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SharingPairs_19));
#line 1524 "equiv_type.m"
        }
#line 1520 "equiv_type.m"
      }
#line 1517 "equiv_type.m"
    else
#line 1517 "equiv_type.m"
      {
#line 1518 "equiv_type.m"
        *parse_tree__equiv_type__SharingDomain_14 = parse_tree__equiv_type__SharingDomain0_13;
#line 1517 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20;
#line 1517 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22;
#line 1517 "equiv_type.m"
      }
#line 1517 "equiv_type.m"
  }
#line 1507 "equiv_type.m"
}

#line 1490 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tm_10_p_0(
#line 1490 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1490 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 1490 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1490 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1490 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 1490 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 1490 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 1490 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 1490 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 1490 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10)
#line 1490 "equiv_type.m"
{
#line 1496 "equiv_type.m"
  {
#line 1496 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1496 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1501 "equiv_type.m"
      {
#line 1501 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1501 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 1501 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_32;
#line 1091 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_36_36;
#line 1091 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_60_60;

#line 1091 "equiv_type.m"
        {
#line 1091 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__EqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_30, &parse_tree__equiv_type__Type_32, &parse_tree__equiv_type__V_36_36, &parse_tree__equiv_type__V_60_60, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 1501 "equiv_type.m"
        {
#line 1501 "equiv_type.m"
          MR_Word base;
#line 1501 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1501 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1501 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_32));
#line 1501 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_31));
#line 1501 "equiv_type.m"
        }
#line 1501 "equiv_type.m"
      }
#line 1496 "equiv_type.m"
    else
#line 1496 "equiv_type.m"
      {
#line 1496 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1496 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_14;
#line 1091 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_18_18;
#line 1091 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_79_79;

#line 1091 "equiv_type.m"
        {
#line 1091 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__EqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_13, &parse_tree__equiv_type__Type_14, &parse_tree__equiv_type__V_18_18, &parse_tree__equiv_type__V_79_79, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 1496 "equiv_type.m"
        {
#line 1496 "equiv_type.m"
          MR_Word base;
#line 1496 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1496 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1496 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_14));
#line 1496 "equiv_type.m"
        }
#line 1496 "equiv_type.m"
      }
#line 1496 "equiv_type.m"
  }
#line 1490 "equiv_type.m"
}

#line 1487 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0_1(
#line 1487 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1487 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1487 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1487 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1487 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1487 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1487 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1487 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1487 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 1487 "equiv_type.m"
{
#line 1487 "equiv_type.m"
  {
#line 1487 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1487 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_HeadVar__4_4;
#line 1487 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6;
#line 1487 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8;
#line 1487 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10;

#line 1487 "equiv_type.m"
    {
#line 1487 "equiv_type.m"
      parse_tree__equiv_type__replace_in_tm_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_HeadVar__4_4, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10);
    }
#line 1487 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_HeadVar__4_4));
#line 1487 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6));
#line 1487 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8));
#line 1487 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10));
#line 1487 "equiv_type.m"
  }
#line 1487 "equiv_type.m"
}

#line 1480 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0(
#line 1480 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 1480 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 1480 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17,
#line 1480 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TMs_18,
#line 1480 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1480 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1480 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1480 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1480 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1480 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 1480 "equiv_type.m"
{
#line 1486 "equiv_type.m"
  {
#line 1486 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1486 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 1486 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 1487 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 1487 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 1487 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 1487 "equiv_type.m"
    {
#line 1487 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1487 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[2]));
#line 1487 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_tms_10_p_0_1));
#line 1487 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1487 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 1487 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_12));
#line 1487 "equiv_type.m"
    }
#line 6739 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1487 "equiv_type.m"
    {
#line 1487 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17, parse_tree__equiv_type__STATE_VARIABLE_TMs_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 1487 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 1487 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 1487 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 1486 "equiv_type.m"
  }
#line 1480 "equiv_type.m"
}

#line 1372 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_2(
#line 1372 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1372 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1)
#line 1372 "equiv_type.m"
{
#line 1372 "equiv_type.m"
  {
#line 1372 "equiv_type.m"
    MR_Box parse_tree__equiv_type__wrapper_arg_2;
#line 1372 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1372 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_HeadVar__2_135;

#line 1372 "equiv_type.m"
    {
#line 1372 "equiv_type.m"
      parse_tree__equiv_type__conv1_HeadVar__2_135 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1372__1_1_f_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1));
    }
#line 1372 "equiv_type.m"
    parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv1_HeadVar__2_135));
#line 1372 "equiv_type.m"
    return parse_tree__equiv_type__wrapper_arg_2;
#line 1372 "equiv_type.m"
  }
#line 1372 "equiv_type.m"
}

#line 1365 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1365 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1365 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1)
#line 1365 "equiv_type.m"
{
#line 1365 "equiv_type.m"
  {
#line 1365 "equiv_type.m"
    MR_Box parse_tree__equiv_type__wrapper_arg_2;
#line 1365 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1365 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__2_166;

#line 1365 "equiv_type.m"
    {
#line 1365 "equiv_type.m"
      parse_tree__equiv_type__conv0_HeadVar__2_166 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1365__1_1_f_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1));
    }
#line 1365 "equiv_type.m"
    parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__2_166));
#line 1365 "equiv_type.m"
    return parse_tree__equiv_type__wrapper_arg_2;
#line 1365 "equiv_type.m"
  }
#line 1365 "equiv_type.m"
}

#line 1306 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_24,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_28,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_29,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Det_0_76,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Det_77,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79,
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81,
#line 1306 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_82)
#line 1306 "equiv_type.m"
{
#line 1321 "equiv_type.m"
  {
#line 1321 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_174_174;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes1_43;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypes_50;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_54;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModeSpecs_57;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypesAndModes_60;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93;
#line 1321 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_125_125;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_127_127;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129;
#line 1321 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1353 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_55_55;
#line 1353 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_56_56;

#line 1322 "equiv_type.m"
    {
#line 1322 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(parse_tree__equiv_type__Location_24, parse_tree__equiv_type__EqvMap_28, parse_tree__equiv_type__ClassContext0_30, parse_tree__equiv_type__ClassContext_31, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85);
    }
#line 1325 "equiv_type.m"
    {
#line 1325 "equiv_type.m"
      parse_tree__equiv_type__replace_in_tms_10_p_0(parse_tree__equiv_type__Location_24, parse_tree__equiv_type__EqvMap_28, parse_tree__equiv_type__TypesAndModes0_32, &parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88);
    }
#line 1347 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithType0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1348 "equiv_type.m"
      {
#line 1349 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1350 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1348 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75 = parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86;
#line 1348 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87;
#line 1348 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88;
#line 1348 "equiv_type.m"
      }
#line 1347 "equiv_type.m"
    else
#line 1328 "equiv_type.m"
      {
#line 1328 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType0_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithType0_35, (MR_Integer) 0)));
#line 1328 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_45;
#line 1329 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_46_46;
#line 1337 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1332 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_182_182;
#line 1332 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Purity_47;

#line 1329 "equiv_type.m"
        {
#line 1329 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_11_p_0(parse_tree__equiv_type__Location_24, parse_tree__equiv_type__EqvMap_28, parse_tree__equiv_type__WithType0_44, &parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type__V_46_46, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92);
        }
#line 1332 "equiv_type.m"
        {
#line 1332 "equiv_type.m"
          parse_tree__equiv_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type___Purity_47, &parse_tree__equiv_type__V_182_182, &parse_tree__equiv_type__ExtraTypesPrime_49);
        }
#line 1332 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1332 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_26 == parse_tree__equiv_type__V_182_182);
#line 1337 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1335 "equiv_type.m"
          {
#line 1335 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1336 "equiv_type.m"
            parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1335 "equiv_type.m"
          }
#line 1337 "equiv_type.m"
        else
#line 1338 "equiv_type.m"
          {
#line 1338 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces1_51;
#line 1338 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg1_52;
#line 1338 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec1_53;
#line 1338 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_96_96;
#line 1338 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_97_97;
#line 1338 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_98_98;
#line 1338 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_99_99;
#line 1338 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_100_100;
#line 1338 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_103_103;
#line 1338 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_105_105;
#line 1338 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_108_108;
#line 1338 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_116_116;
#line 1338 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_117_117;
#line 1338 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_121_121;

#line 1338 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1340 "equiv_type.m"
            {
#line 1340 "equiv_type.m"
              parse_tree__equiv_type__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1340 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_97_97, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1340 "equiv_type.m"
            }
#line 1340 "equiv_type.m"
            {
#line 1340 "equiv_type.m"
              parse_tree__equiv_type__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1340 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_99_99, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1340 "equiv_type.m"
            }
#line 1341 "equiv_type.m"
            {
#line 1341 "equiv_type.m"
              parse_tree__equiv_type__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__V_97_97));
#line 1341 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[13])));
#line 1341 "equiv_type.m"
            }
#line 1341 "equiv_type.m"
            {
#line 1341 "equiv_type.m"
              parse_tree__equiv_type__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_105_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[30])));
#line 1341 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_105_105, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 1341 "equiv_type.m"
            }
#line 1340 "equiv_type.m"
            {
#line 1340 "equiv_type.m"
              parse_tree__equiv_type__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_103_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1340 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_103_103, 1) = ((MR_Box) (parse_tree__equiv_type__V_105_105));
#line 1340 "equiv_type.m"
            }
#line 1340 "equiv_type.m"
            {
#line 1340 "equiv_type.m"
              parse_tree__equiv_type__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_100_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[29])));
#line 1340 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_100_100, 1) = ((MR_Box) (parse_tree__equiv_type__V_103_103));
#line 1340 "equiv_type.m"
            }
#line 1340 "equiv_type.m"
            {
#line 1340 "equiv_type.m"
              parse_tree__equiv_type__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 0) = ((MR_Box) (parse_tree__equiv_type__V_99_99));
#line 1340 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 1) = ((MR_Box) (parse_tree__equiv_type__V_100_100));
#line 1340 "equiv_type.m"
            }
#line 1340 "equiv_type.m"
            {
#line 1340 "equiv_type.m"
              parse_tree__equiv_type__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_96_96, 0) = ((MR_Box) (parse_tree__equiv_type__V_97_97));
#line 1340 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_96_96, 1) = ((MR_Box) (parse_tree__equiv_type__V_98_98));
#line 1340 "equiv_type.m"
            }
#line 1339 "equiv_type.m"
            {
#line 1339 "equiv_type.m"
              parse_tree__equiv_type__Pieces1_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1339 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[28])));
#line 1339 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 1) = ((MR_Box) (parse_tree__equiv_type__V_96_96));
#line 1339 "equiv_type.m"
            }
#line 1343 "equiv_type.m"
            {
#line 1343 "equiv_type.m"
              parse_tree__equiv_type__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1343 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_117_117, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces1_51));
#line 1343 "equiv_type.m"
            }
#line 1343 "equiv_type.m"
            {
#line 1343 "equiv_type.m"
              parse_tree__equiv_type__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_116_116, 0) = ((MR_Box) (parse_tree__equiv_type__V_117_117));
#line 1343 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1343 "equiv_type.m"
            }
#line 1343 "equiv_type.m"
            {
#line 1343 "equiv_type.m"
              parse_tree__equiv_type__Msg1_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1343 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1343 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 1) = ((MR_Box) (parse_tree__equiv_type__V_116_116));
#line 1343 "equiv_type.m"
            }
#line 1344 "equiv_type.m"
            {
#line 1344 "equiv_type.m"
              parse_tree__equiv_type__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1344 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_121_121, 0) = ((MR_Box) (parse_tree__equiv_type__Msg1_52));
#line 1344 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1344 "equiv_type.m"
            }
#line 1344 "equiv_type.m"
            {
#line 1344 "equiv_type.m"
              parse_tree__equiv_type__Spec1_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1344 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1344 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1344 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 2) = ((MR_Box) (parse_tree__equiv_type__V_121_121));
#line 1344 "equiv_type.m"
            }
#line 1345 "equiv_type.m"
            {
#line 1345 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1345 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, 0) = ((MR_Box) (parse_tree__equiv_type__Spec1_53));
#line 1345 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1345 "equiv_type.m"
            }
#line 1338 "equiv_type.m"
          }
#line 1328 "equiv_type.m"
      }
#line 7175 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_174_174 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1353 "equiv_type.m"
    {
#line 1353 "equiv_type.m"
      parse_tree__equiv_type__V_125_125 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes0_32);
    }
#line 1354 "equiv_type.m"
    {
#line 1354 "equiv_type.m"
      parse_tree__equiv_type__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1354 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_127_127, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1354 "equiv_type.m"
    }
#line 1353 "equiv_type.m"
    {
#line 1353 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__PredName_25, parse_tree__equiv_type__V_125_125, parse_tree__equiv_type__Context_27, (MR_Integer) 0, parse_tree__equiv_type__EqvInstMap_29, &parse_tree__equiv_type__ExtraModes_54, parse_tree__equiv_type__V_127_127, &parse_tree__equiv_type__V_55_55, parse_tree__equiv_type__MaybeWithInst0_37, &parse_tree__equiv_type__V_56_56, parse_tree__equiv_type__STATE_VARIABLE_Det_0_76, parse_tree__equiv_type__STATE_VARIABLE_Det_77, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81, &parse_tree__equiv_type__ModeSpecs_57);
    }
#line 1356 "equiv_type.m"
    {
#line 1356 "equiv_type.m"
      parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, parse_tree__equiv_type__ModeSpecs_57);
    }
#line 7200 "parse_tree.equiv_type.c"
    if ((parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7202 "parse_tree.equiv_type.c"
      if ((parse_tree__equiv_type__ExtraModes_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7204 "parse_tree.equiv_type.c"
        {
#line 1365 "equiv_type.m"
          {
#line 1365 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TypeCtorInfo_174_174, (MR_Word) &parse_tree__equiv_type_scalar_common_2[5], parse_tree__equiv_type__ExtraTypes_50);
          }
#line 1364 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1389 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1390 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7217 "parse_tree.equiv_type.c"
        }
#line 7219 "parse_tree.equiv_type.c"
      else
#line 7221 "parse_tree.equiv_type.c"
        {
#line 1369 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_132_132;
#line 1369 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_183_183;

#line 1369 "equiv_type.m"
          {
#line 1369 "equiv_type.m"
            parse_tree__equiv_type__V_132_132 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__ExtraTypes_50);
          }
#line 1369 "equiv_type.m"
          {
#line 1369 "equiv_type.m"
            parse_tree__equiv_type__V_183_183 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__equiv_type__ExtraModes_54);
          }
#line 1369 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_132_132 == parse_tree__equiv_type__V_183_183);
#line 7240 "parse_tree.equiv_type.c"
          if (parse_tree__equiv_type__succeeded)
#line 7242 "parse_tree.equiv_type.c"
            {
#line 7244 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__ExtraTypesModes_64;

#line 1370 "equiv_type.m"
              {
#line 1370 "equiv_type.m"
                mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__equiv_type__ExtraTypes_50, parse_tree__equiv_type__ExtraModes_54, &parse_tree__equiv_type__ExtraTypesModes_64);
              }
#line 1372 "equiv_type.m"
              {
#line 1372 "equiv_type.m"
                parse_tree__equiv_type__ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[1], parse_tree__equiv_type__TypeCtorInfo_174_174, (MR_Word) &parse_tree__equiv_type_scalar_common_2[6], parse_tree__equiv_type__ExtraTypesModes_64);
              }
#line 1371 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1389 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1390 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7263 "parse_tree.equiv_type.c"
            }
#line 7265 "parse_tree.equiv_type.c"
          else
#line 7267 "parse_tree.equiv_type.c"
            {
#line 7269 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Pieces2_66;
#line 7271 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Msg2_67;
#line 7273 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Spec2_68;
#line 7275 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_138_138;
#line 7277 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_139_139;
#line 7279 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_140_140;
#line 7281 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_141_141;
#line 7283 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_156_156;
#line 7285 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_157_157;
#line 7287 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_161_161;

#line 1377 "equiv_type.m"
              {
#line 1377 "equiv_type.m"
                parse_tree__equiv_type__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1377 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_139_139, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1377 "equiv_type.m"
              }
#line 1377 "equiv_type.m"
              {
#line 1377 "equiv_type.m"
                parse_tree__equiv_type__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1377 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_141_141, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1377 "equiv_type.m"
              }
#line 1377 "equiv_type.m"
              {
#line 1377 "equiv_type.m"
                parse_tree__equiv_type__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_140_140, 0) = ((MR_Box) (parse_tree__equiv_type__V_141_141));
#line 1377 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[20])));
#line 1377 "equiv_type.m"
              }
#line 1377 "equiv_type.m"
              {
#line 1377 "equiv_type.m"
                parse_tree__equiv_type__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_138_138, 0) = ((MR_Box) (parse_tree__equiv_type__V_139_139));
#line 1377 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_138_138, 1) = ((MR_Box) (parse_tree__equiv_type__V_140_140));
#line 1377 "equiv_type.m"
              }
#line 1376 "equiv_type.m"
              {
#line 1376 "equiv_type.m"
                parse_tree__equiv_type__Pieces2_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[28])));
#line 1376 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_66, 1) = ((MR_Box) (parse_tree__equiv_type__V_138_138));
#line 1376 "equiv_type.m"
              }
#line 1380 "equiv_type.m"
              {
#line 1380 "equiv_type.m"
                parse_tree__equiv_type__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1380 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_157_157, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces2_66));
#line 1380 "equiv_type.m"
              }
#line 1380 "equiv_type.m"
              {
#line 1380 "equiv_type.m"
                parse_tree__equiv_type__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1380 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 0) = ((MR_Box) (parse_tree__equiv_type__V_157_157));
#line 1380 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1380 "equiv_type.m"
              }
#line 1380 "equiv_type.m"
              {
#line 1380 "equiv_type.m"
                parse_tree__equiv_type__Msg2_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1380 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_67, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1380 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_67, 1) = ((MR_Box) (parse_tree__equiv_type__V_156_156));
#line 1380 "equiv_type.m"
              }
#line 1381 "equiv_type.m"
              {
#line 1381 "equiv_type.m"
                parse_tree__equiv_type__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1381 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_161_161, 0) = ((MR_Box) (parse_tree__equiv_type__Msg2_67));
#line 1381 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1381 "equiv_type.m"
              }
#line 1381 "equiv_type.m"
              {
#line 1381 "equiv_type.m"
                parse_tree__equiv_type__Spec2_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1381 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1381 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1381 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 2) = ((MR_Box) (parse_tree__equiv_type__V_161_161));
#line 1381 "equiv_type.m"
              }
#line 1382 "equiv_type.m"
              {
#line 1382 "equiv_type.m"
                MR_Word base;
#line 1382 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = base;
#line 1382 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec2_68));
#line 1382 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131));
#line 1382 "equiv_type.m"
              }
#line 1383 "equiv_type.m"
              parse_tree__equiv_type__ExtraTypesAndModes_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1395 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1396 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 7410 "parse_tree.equiv_type.c"
            }
#line 7412 "parse_tree.equiv_type.c"
        }
#line 7414 "parse_tree.equiv_type.c"
    else
#line 7416 "parse_tree.equiv_type.c"
      {
#line 1360 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypesAndModes_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1359 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1395 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1396 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 7426 "parse_tree.equiv_type.c"
      }
#line 1401 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraTypesAndModes_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1399 "equiv_type.m"
      {
#line 1400 "equiv_type.m"
        *parse_tree__equiv_type__TypesAndModes_33 = parse_tree__equiv_type__TypesAndModes1_43;
#line 1399 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129;
#line 1399 "equiv_type.m"
      }
#line 1401 "equiv_type.m"
    else
#line 1402 "equiv_type.m"
      {
#line 1402 "equiv_type.m"
        MR_Word parse_tree__equiv_type__OrigItemId_73;
#line 1402 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_167_167;
#line 1402 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_168_168;
#line 1402 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_169_169;

#line 1403 "equiv_type.m"
        {
#line 1403 "equiv_type.m"
          parse_tree__equiv_type__V_167_167 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_26);
        }
#line 1404 "equiv_type.m"
        {
#line 1404 "equiv_type.m"
          parse_tree__equiv_type__V_169_169 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes0_32);
        }
#line 1404 "equiv_type.m"
        {
#line 1404 "equiv_type.m"
          parse_tree__equiv_type__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1404 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_168_168, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1404 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_168_168, 1) = ((MR_Box) (parse_tree__equiv_type__V_169_169));
#line 1404 "equiv_type.m"
        }
#line 1403 "equiv_type.m"
        {
#line 1403 "equiv_type.m"
          parse_tree__equiv_type__OrigItemId_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1403 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_73, 0) = ((MR_Box) (parse_tree__equiv_type__V_167_167));
#line 1403 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_73, 1) = ((MR_Box) (parse_tree__equiv_type__V_168_168));
#line 1403 "equiv_type.m"
        }
#line 1405 "equiv_type.m"
        {
#line 1405 "equiv_type.m"
          parse_tree__equiv_type__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_73, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79);
        }
#line 1406 "equiv_type.m"
        {
#line 1406 "equiv_type.m"
          *parse_tree__equiv_type__TypesAndModes_33 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__ExtraTypesAndModes_60);
        }
#line 1402 "equiv_type.m"
      }
#line 1321 "equiv_type.m"
  }
#line 1306 "equiv_type.m"
}

#line 1585 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0_1(
#line 1585 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1585 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1585 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2)
#line 1585 "equiv_type.m"
{
#line 1585 "equiv_type.m"
  {
#line 1585 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1585 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_ExpandedItemSet_6;

#line 1585 "equiv_type.m"
    {
#line 1585 "equiv_type.m"
      parse_tree__equiv_type__record_expanded_item_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv1_ExpandedItemSet_6);
    }
#line 1585 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv1_ExpandedItemSet_6));
#line 1585 "equiv_type.m"
  }
#line 1585 "equiv_type.m"
}

#line 1188 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_19,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_20,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_45,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_46,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_47,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_48,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_49,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_50,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_51,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_54)
#line 1188 "equiv_type.m"
{
#line 1196 "equiv_type.m"
  {
#line 1196 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1196 "equiv_type.m"
    MR_Word parse_tree__equiv_type__AlreadyExpanded_32;
#line 1231 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Args0_34;
#line 1231 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Body0_35;
#line 1231 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Renaming_36;
#line 1231 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56;
#line 1203 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvVarSet_33;
#line 1203 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_55_55;
#line 1203 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv0_V_55_55;

#line 1197 "equiv_type.m"
    {
#line 1197 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21);
    }
#line 1199 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1198 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 1;
#line 1199 "equiv_type.m"
    else
#line 1200 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 0;
#line 1203 "equiv_type.m"
    {
#line 1203 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, parse_tree__equiv_type__EqvMap_20, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), &parse_tree__equiv_type__conv0_V_55_55);
    }
#line 1203 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1203 "equiv_type.m"
      {
#line 1203 "equiv_type.m"
        parse_tree__equiv_type__V_55_55 = ((MR_Word) parse_tree__equiv_type__conv0_V_55_55);
#line 1203 "equiv_type.m"
        parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1203 "equiv_type.m"
      }
#line 1203 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1203 "equiv_type.m"
      {
#line 1203 "equiv_type.m"
        parse_tree__equiv_type__EqvVarSet_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_55_55, (MR_Integer) 0)));
#line 1203 "equiv_type.m"
        parse_tree__equiv_type__Args0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_55_55, (MR_Integer) 1)));
#line 1203 "equiv_type.m"
        parse_tree__equiv_type__Body0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_55_55, (MR_Integer) 2)));
#line 1213 "equiv_type.m"
        {
#line 1213 "equiv_type.m"
          parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_49, parse_tree__equiv_type__EqvVarSet_33, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, &parse_tree__equiv_type__Renaming_36);
        }
#line 1215 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_Circ_0_47 == (MR_Integer) 0);
#line 1203 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1216 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__AlreadyExpanded_32 == (MR_Integer) 0);
#line 1203 "equiv_type.m"
      }
#line 1231 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1218 "equiv_type.m"
      {
#line 1218 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_71_71;
#line 1218 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_12_94;
#line 1218 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_37;
#line 1218 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body1_38;
#line 1218 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorItem_39;
#line 1218 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst_40;
#line 1218 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body_41;
#line 1218 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 1218 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_59_59;
#line 1218 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60;
#line 1218 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_62_62;
#line 1218 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_90_90;
#line 1228 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_42_42;

#line 1248 "equiv_type.m"
        if ((parse_tree__equiv_type__Location_19 == (MR_Integer) 2))
#line 1256 "equiv_type.m"
          {
#line 1256 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TypeCtorSymName_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1257 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___TypeCtorArity_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1258 "equiv_type.m"
            {
#line 1258 "equiv_type.m"
              parse_tree__prog_data__record_sym_name_module_as_used_4_p_0((MR_Integer) 1, parse_tree__equiv_type__TypeCtorSymName_79, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
            }
#line 1256 "equiv_type.m"
          }
#line 1248 "equiv_type.m"
        else
#line 1248 "equiv_type.m"
          if ((parse_tree__equiv_type__Location_19 == (MR_Integer) 1))
#line 1256 "equiv_type.m"
            {
#line 1256 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeCtorSymName_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1257 "equiv_type.m"
              MR_Integer parse_tree__equiv_type___TypeCtorArity_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1258 "equiv_type.m"
              {
#line 1258 "equiv_type.m"
                parse_tree__prog_data__record_sym_name_module_as_used_4_p_0((MR_Integer) 0, parse_tree__equiv_type__TypeCtorSymName_84, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
              }
#line 1256 "equiv_type.m"
            }
#line 1248 "equiv_type.m"
          else
#line 1248 "equiv_type.m"
            parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53;
#line 1220 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_46 = (MR_Integer) 1;
#line 7712 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__TypeInfo_71_71 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[0];
#line 1221 "equiv_type.m"
        {
#line 1221 "equiv_type.m"
          mercury__map__apply_to_list_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__Args0_34, parse_tree__equiv_type__Renaming_36, &parse_tree__equiv_type__Args_37);
        }
#line 1222 "equiv_type.m"
        {
#line 1222 "equiv_type.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(parse_tree__equiv_type__Renaming_36, parse_tree__equiv_type__Body0_35, &parse_tree__equiv_type__Body1_38);
        }
#line 1223 "equiv_type.m"
        {
#line 1223 "equiv_type.m"
          parse_tree__equiv_type__TypeCtorItem_39 = recompilation__type_ctor_to_item_name_1_f_0(parse_tree__equiv_type__TypeCtor_23);
        }
#line 1224 "equiv_type.m"
        {
#line 1224 "equiv_type.m"
          parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1224 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1224 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__TypeCtorItem_39));
#line 1224 "equiv_type.m"
        }
#line 1585 "equiv_type.m"
        {
#line 1585 "equiv_type.m"
          parse_tree__equiv_type__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1585 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_90_90, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
#line 1585 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_90_90, 1) = ((MR_Box) (parse_tree__equiv_type__replace_type_ctor_18_p_0_1));
#line 1585 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1585 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_90_90, 3) = ((MR_Box) (parse_tree__equiv_type__V_59_59));
#line 1585 "equiv_type.m"
        }
#line 7753 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__TypeInfo_12_94 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[0];
#line 1585 "equiv_type.m"
        {
#line 1585 "equiv_type.m"
          mercury__maybe__map_maybe_3_p_0(parse_tree__equiv_type__TypeInfo_12_94, parse_tree__equiv_type__TypeInfo_12_94, parse_tree__equiv_type__V_90_90, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_51, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60);
        }
#line 1226 "equiv_type.m"
        {
#line 1226 "equiv_type.m"
          mercury__map__from_corresponding_lists_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Args_37, parse_tree__equiv_type__TArgs_24, &parse_tree__equiv_type__Subst_40);
        }
#line 1227 "equiv_type.m"
        {
#line 1227 "equiv_type.m"
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__equiv_type__Subst_40, parse_tree__equiv_type__Body1_38, &parse_tree__equiv_type__Body_41);
        }
#line 1229 "equiv_type.m"
        {
#line 1229 "equiv_type.m"
          parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_23));
#line 1229 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21));
#line 1229 "equiv_type.m"
        }
#line 1228 "equiv_type.m"
        {
#line 1228 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_19, parse_tree__equiv_type__EqvMap_20, parse_tree__equiv_type__V_62_62, parse_tree__equiv_type__Body_41, parse_tree__equiv_type__Type_26, &parse_tree__equiv_type__V_42_42, parse_tree__equiv_type__STATE_VARIABLE_Circ_48, parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, parse_tree__equiv_type__STATE_VARIABLE_VarSet_50, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_54);
        }
#line 1218 "equiv_type.m"
      }
#line 1231 "equiv_type.m"
    else
#line 1239 "equiv_type.m"
      {
#line 1236 "equiv_type.m"
        if ((parse_tree__equiv_type__STATE_VARIABLE_Changed_0_45 == (MR_Integer) 0))
#line 1238 "equiv_type.m"
          *parse_tree__equiv_type__Type_26 = parse_tree__equiv_type__Type0_22;
#line 1236 "equiv_type.m"
        else
#line 1233 "equiv_type.m"
          {
#line 1233 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SymName_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1234 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___Arity_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1235 "equiv_type.m"
            {
#line 1235 "equiv_type.m"
              MR_Word base;
#line 1235 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "equiv_type.m"
              *parse_tree__equiv_type__Type_26 = base;
#line 1235 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_43));
#line 1235 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__TArgs_24));
#line 1235 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_25));
#line 1235 "equiv_type.m"
            }
#line 1233 "equiv_type.m"
          }
#line 1240 "equiv_type.m"
        {
#line 1240 "equiv_type.m"
          mercury__bool__or_3_p_0(parse_tree__equiv_type__AlreadyExpanded_32, parse_tree__equiv_type__STATE_VARIABLE_Circ_0_47, parse_tree__equiv_type__STATE_VARIABLE_Circ_48);
        }
#line 1239 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_54 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53;
#line 1239 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_51;
#line 1239 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_50 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_49;
#line 1239 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_46 = parse_tree__equiv_type__STATE_VARIABLE_Changed_0_45;
#line 1239 "equiv_type.m"
      }
#line 1196 "equiv_type.m"
  }
#line 1188 "equiv_type.m"
}

#line 1097 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_2_13_p_0(
#line 1097 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 1097 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_15,
#line 1097 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1097 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1097 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1097 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1097 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1097 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1097 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1097 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1097 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1097 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1097 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52)
#line 1097 "equiv_type.m"
{
#line 1105 "equiv_type.m"
  {
#line 1105 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1105 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 2))))
#line 1120 "equiv_type.m"
      {
#line 1121 "equiv_type.m"
        *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1122 "equiv_type.m"
        *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1123 "equiv_type.m"
        *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1120 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1120 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1120 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1120 "equiv_type.m"
      }
#line 1105 "equiv_type.m"
    else
#line 1105 "equiv_type.m"
      if (((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 1))))
#line 1110 "equiv_type.m"
        {
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)));
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs_28;
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ArgsChanged_29;
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Circ0_30;
#line 1110 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__Arity_31;
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeCtor_32;
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72;
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73;
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74;
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Kind_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1111 "equiv_type.m"
          {
#line 1111 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__TArgs0_27, &parse_tree__equiv_type__TArgs_28, &parse_tree__equiv_type__ArgsChanged_29, (MR_Integer) 0, &parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74);
          }
#line 1114 "equiv_type.m"
          {
#line 1114 "equiv_type.m"
            parse_tree__equiv_type__Arity_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TArgs_28);
          }
#line 1115 "equiv_type.m"
          {
#line 1115 "equiv_type.m"
            parse_tree__equiv_type__TypeCtor_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1115 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_26));
#line 1115 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_31));
#line 1115 "equiv_type.m"
          }
#line 1116 "equiv_type.m"
          {
#line 1116 "equiv_type.m"
            parse_tree__equiv_type__replace_type_ctor_18_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Type0_17, parse_tree__equiv_type__TypeCtor_32, parse_tree__equiv_type__TArgs_28, parse_tree__equiv_type__Kind_78, parse_tree__equiv_type__Type_18, parse_tree__equiv_type__ArgsChanged_29, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
#line 1116 "equiv_type.m"
            return;
          }
#line 1110 "equiv_type.m"
        }
#line 1105 "equiv_type.m"
      else
#line 1105 "equiv_type.m"
        if (((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 0))))
#line 1105 "equiv_type.m"
          {
#line 1106 "equiv_type.m"
            *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1107 "equiv_type.m"
            *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1108 "equiv_type.m"
            *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1105 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1105 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1105 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1105 "equiv_type.m"
          }
#line 1105 "equiv_type.m"
        else
#line 1105 "equiv_type.m"
          if (((((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1163 "equiv_type.m"
            {
#line 1163 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1163 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1163 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1163 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_86;

#line 1164 "equiv_type.m"
              {
#line 1164 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_85, &parse_tree__equiv_type__Args_86, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1170 "equiv_type.m"
              if ((*parse_tree__equiv_type__Changed_19 == (MR_Integer) 0))
#line 1172 "equiv_type.m"
                *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1170 "equiv_type.m"
              else
#line 1169 "equiv_type.m"
                {
#line 1169 "equiv_type.m"
                  MR_Word base;
#line 1169 "equiv_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = base;
#line 1169 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1169 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Var_83));
#line 1169 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Args_86));
#line 1169 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Kind_84));
#line 1169 "equiv_type.m"
                }
#line 1163 "equiv_type.m"
            }
#line 1105 "equiv_type.m"
          else
#line 1105 "equiv_type.m"
            if (((((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1125 "equiv_type.m"
              {
#line 1125 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Args0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1125 "equiv_type.m"
                MR_Word parse_tree__equiv_type__MaybeRet0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1125 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Purity_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1125 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Args_38;
#line 1125 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ArgsCirc_39;
#line 1125 "equiv_type.m"
                MR_Word parse_tree__equiv_type__MaybeRet_44;
#line 1125 "equiv_type.m"
                MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1125 "equiv_type.m"
                MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1125 "equiv_type.m"
                MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1125 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ArgsChanged_79;

#line 1126 "equiv_type.m"
                {
#line 1126 "equiv_type.m"
                  parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_34, &parse_tree__equiv_type__Args_38, &parse_tree__equiv_type__ArgsChanged_79, (MR_Integer) 0, &parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67);
                }
#line 1137 "equiv_type.m"
                if ((parse_tree__equiv_type__MaybeRet0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1138 "equiv_type.m"
                  {
#line 1139 "equiv_type.m"
                    parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1140 "equiv_type.m"
                    *parse_tree__equiv_type__Changed_19 = parse_tree__equiv_type__ArgsChanged_79;
#line 1141 "equiv_type.m"
                    *parse_tree__equiv_type__Circ_20 = parse_tree__equiv_type__ArgsCirc_39;
#line 1138 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1138 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1138 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1138 "equiv_type.m"
                  }
#line 1137 "equiv_type.m"
                else
#line 1130 "equiv_type.m"
                  {
#line 1130 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Ret0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet0_35, (MR_Integer) 0)));
#line 1130 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Ret_41;
#line 1130 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__RetChanged_42;
#line 1130 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__RetCirc_43;

#line 1131 "equiv_type.m"
                    {
#line 1131 "equiv_type.m"
                      parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Ret0_40, &parse_tree__equiv_type__Ret_41, &parse_tree__equiv_type__RetChanged_42, &parse_tree__equiv_type__RetCirc_43, parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
                    }
#line 1134 "equiv_type.m"
                    {
#line 1134 "equiv_type.m"
                      parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "equiv_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet_44, 0) = ((MR_Box) (parse_tree__equiv_type__Ret_41));
#line 1134 "equiv_type.m"
                    }
#line 1135 "equiv_type.m"
                    {
#line 1135 "equiv_type.m"
                      *parse_tree__equiv_type__Changed_19 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsChanged_79, parse_tree__equiv_type__RetChanged_42);
                    }
#line 1136 "equiv_type.m"
                    {
#line 1136 "equiv_type.m"
                      *parse_tree__equiv_type__Circ_20 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__RetCirc_43);
                    }
#line 1130 "equiv_type.m"
                  }
#line 1146 "equiv_type.m"
                if ((*parse_tree__equiv_type__Changed_19 == (MR_Integer) 0))
#line 1148 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1146 "equiv_type.m"
                else
#line 1145 "equiv_type.m"
                  {
#line 1145 "equiv_type.m"
                    MR_Word base;
#line 1145 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1145 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1145 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_38));
#line 1145 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeRet_44));
#line 1145 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Purity_36));
#line 1145 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 1145 "equiv_type.m"
                  }
#line 1125 "equiv_type.m"
              }
#line 1105 "equiv_type.m"
            else
#line 1105 "equiv_type.m"
              if (((((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1175 "equiv_type.m"
                {
#line 1175 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RawType0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1175 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RawType_46;
#line 1175 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Kind_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1176 "equiv_type.m"
                  {
#line 1176 "equiv_type.m"
                    parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__RawType0_45, &parse_tree__equiv_type__RawType_46, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
                  }
#line 1182 "equiv_type.m"
                  if ((*parse_tree__equiv_type__Changed_19 == (MR_Integer) 0))
#line 1184 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1182 "equiv_type.m"
                  else
#line 1181 "equiv_type.m"
                    {
#line 1181 "equiv_type.m"
                      MR_Word base;
#line 1181 "equiv_type.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "equiv_type.m"
                      *parse_tree__equiv_type__Type_18 = base;
#line 1181 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1181 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__RawType_46));
#line 1181 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_87));
#line 1181 "equiv_type.m"
                    }
#line 1175 "equiv_type.m"
                }
#line 1105 "equiv_type.m"
              else
#line 1151 "equiv_type.m"
                {
#line 1151 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Kind_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1151 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Args0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1151 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Args_82;

#line 1152 "equiv_type.m"
                  {
#line 1152 "equiv_type.m"
                    parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_81, &parse_tree__equiv_type__Args_82, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
                  }
#line 1158 "equiv_type.m"
                  if ((*parse_tree__equiv_type__Changed_19 == (MR_Integer) 0))
#line 1160 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1158 "equiv_type.m"
                  else
#line 1157 "equiv_type.m"
                    {
#line 1157 "equiv_type.m"
                      MR_Word base;
#line 1157 "equiv_type.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "equiv_type.m"
                      *parse_tree__equiv_type__Type_18 = base;
#line 1157 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1157 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_82));
#line 1157 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_80));
#line 1157 "equiv_type.m"
                    }
#line 1151 "equiv_type.m"
                }
#line 1105 "equiv_type.m"
  }
#line 1097 "equiv_type.m"
}

#line 1084 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_11_p_0(
#line 1084 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 1084 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 1084 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1084 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1084 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1084 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1084 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1084 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1084 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1084 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1084 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26)
#line 1084 "equiv_type.m"
{
#line 1090 "equiv_type.m"
  {
#line 1090 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1091 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_20_20;

#line 1091 "equiv_type.m"
    {
#line 1091 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_12, parse_tree__equiv_type__EqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_14, parse_tree__equiv_type__Type_15, parse_tree__equiv_type__Changed_16, &parse_tree__equiv_type__V_20_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_22, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);
    }
#line 1090 "equiv_type.m"
  }
#line 1084 "equiv_type.m"
}

#line 1044 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13)
#line 1044 "equiv_type.m"
{
#line 1051 "equiv_type.m"
  {
#line 1051 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1051 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1051 "equiv_type.m"
      {
#line 1051 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1052 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12;
#line 1052 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10;
#line 1052 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_9 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8;
#line 1052 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Circ_7 = parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6;
#line 1051 "equiv_type.m"
      }
#line 1051 "equiv_type.m"
    else
#line 1055 "equiv_type.m"
      {
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg_34;
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_35;
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Name_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 0)));
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 1)));
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Width_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 2)));
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 3)));
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_44;
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_46;
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58;
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59;
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60;
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_64_64;
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 1057 "equiv_type.m"
        {
#line 1057 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Type0_41, &parse_tree__equiv_type__Type_44, &parse_tree__equiv_type__V_45_45, &parse_tree__equiv_type__ContainsCirc_46, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60);
        }
#line 1061 "equiv_type.m"
        if ((parse_tree__equiv_type__Width_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1062 "equiv_type.m"
          {
#line 1062 "equiv_type.m"
          }
#line 1061 "equiv_type.m"
        else
#line 1061 "equiv_type.m"
          if ((parse_tree__equiv_type__Width_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1060 "equiv_type.m"
            {
#line 1060 "equiv_type.m"
            }
#line 1061 "equiv_type.m"
          else
#line 1069 "equiv_type.m"
            {
#line 1067 "equiv_type.m"
              {
#line 1067 "equiv_type.m"
                parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__equiv_type__Type_44, parse_tree__equiv_type__Type0_41);
              }
#line 1069 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 1068 "equiv_type.m"
                {
#line 1068 "equiv_type.m"
                }
#line 1069 "equiv_type.m"
              else
#line 1070 "equiv_type.m"
                {
#line 1070 "equiv_type.m"
                  {
#line 1070 "equiv_type.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_ctor_arg_list_2\'/13", (MR_String) "changed type of packed argument");
#line 1070 "equiv_type.m"
                    return;
                  }
#line 1070 "equiv_type.m"
                }
#line 1069 "equiv_type.m"
            }
#line 1073 "equiv_type.m"
        {
#line 1073 "equiv_type.m"
          parse_tree__equiv_type__Arg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 0) = ((MR_Box) (parse_tree__equiv_type__Name_40));
#line 1073 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 1) = ((MR_Box) (parse_tree__equiv_type__Type_44));
#line 1073 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 2) = ((MR_Box) (parse_tree__equiv_type__Width_42));
#line 1073 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 3) = ((MR_Box) (parse_tree__equiv_type__Context_43));
#line 1073 "equiv_type.m"
        }
#line 1074 "equiv_type.m"
        {
#line 1074 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_64_64 = mercury__bool__or_2_f_0(parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6, parse_tree__equiv_type__ContainsCirc_46);
        }
#line 1075 "equiv_type.m"
        {
#line 1075 "equiv_type.m"
          parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Args0_33, &parse_tree__equiv_type__Args_35, parse_tree__equiv_type__STATE_VARIABLE_Circ_64_64, parse_tree__equiv_type__STATE_VARIABLE_Circ_7, parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58, parse_tree__equiv_type__STATE_VARIABLE_VarSet_9, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13);
        }
#line 1054 "equiv_type.m"
        {
#line 1054 "equiv_type.m"
          MR_Word base;
#line 1054 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1054 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Arg_34));
#line 1054 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_35));
#line 1054 "equiv_type.m"
        }
#line 1055 "equiv_type.m"
      }
#line 1051 "equiv_type.m"
  }
#line 1044 "equiv_type.m"
}

#line 1004 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14)
#line 1004 "equiv_type.m"
{
#line 1010 "equiv_type.m"
  {
#line 1010 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1010 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "equiv_type.m"
      {
#line 1010 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1010 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 1011 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13;
#line 1011 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11;
#line 1011 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_10 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9;
#line 1011 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__8_8 = parse_tree__equiv_type__HeadVar__7_7;
#line 1010 "equiv_type.m"
      }
#line 1010 "equiv_type.m"
    else
#line 1014 "equiv_type.m"
      {
#line 1014 "equiv_type.m"
        MR_Word parse_tree__equiv_type__T0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1014 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Ts0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1014 "equiv_type.m"
        MR_Word parse_tree__equiv_type__T_42;
#line 1014 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed0_43;
#line 1014 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_44;
#line 1014 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Ts_45;
#line 1014 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed1_46;
#line 1014 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55;
#line 1014 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1014 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 1014 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58;

#line 1015 "equiv_type.m"
        {
#line 1015 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__T0_34, &parse_tree__equiv_type__T_42, &parse_tree__equiv_type__Changed0_43, &parse_tree__equiv_type__ContainsCirc_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
        }
#line 1017 "equiv_type.m"
        {
#line 1017 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ContainsCirc_44, parse_tree__equiv_type__HeadVar__7_7);
        }
#line 1018 "equiv_type.m"
        {
#line 1018 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Ts0_35, &parse_tree__equiv_type__Ts_45, &parse_tree__equiv_type__Changed1_46, parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58, parse_tree__equiv_type__HeadVar__8_8, parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_VarSet_10, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);
        }
#line 1021 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed0_43 == (MR_Integer) 1);
#line 1022 "equiv_type.m"
        if (!(parse_tree__equiv_type__succeeded))
#line 1022 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed1_46 == (MR_Integer) 1);
#line 1027 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1025 "equiv_type.m"
          {
#line 1025 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 1;
#line 1026 "equiv_type.m"
            {
#line 1026 "equiv_type.m"
              MR_Word base;
#line 1026 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1026 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__T_42));
#line 1026 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Ts_45));
#line 1026 "equiv_type.m"
            }
#line 1025 "equiv_type.m"
          }
#line 1027 "equiv_type.m"
        else
#line 1028 "equiv_type.m"
          {
#line 1028 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 1029 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__4_4;
#line 1028 "equiv_type.m"
          }
#line 1014 "equiv_type.m"
      }
#line 1010 "equiv_type.m"
  }
#line 1004 "equiv_type.m"
}

#line 994 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 994 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 994 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 994 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 994 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 994 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 994 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 994 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 994 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 994 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 994 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 994 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 994 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 994 "equiv_type.m"
{
#line 1000 "equiv_type.m"
  {
#line 1000 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1001 "equiv_type.m"
    {
#line 1001 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21, parse_tree__equiv_type__STATE_VARIABLE_Ts_22, parse_tree__equiv_type__Changed_16, (MR_Integer) 0, parse_tree__equiv_type__ContainsCirc_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
#line 1001 "equiv_type.m"
      return;
    }
#line 1000 "equiv_type.m"
  }
#line 994 "equiv_type.m"
}

#line 983 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_20,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_21,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 983 "equiv_type.m"
{
#line 990 "equiv_type.m"
  {
#line 990 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 991 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 991 "equiv_type.m"
    {
#line 991 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_12, parse_tree__equiv_type__EqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Ts_0_20, parse_tree__equiv_type__STATE_VARIABLE_Ts_21, parse_tree__equiv_type__Changed_15, (MR_Integer) 0, &parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 990 "equiv_type.m"
  }
#line 983 "equiv_type.m"
}

#line 853 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 853 "equiv_type.m"
{
#line 853 "equiv_type.m"
  {
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 853 "equiv_type.m"
  }
#line 853 "equiv_type.m"
}

#line 963 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_24,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_25,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29)
#line 963 "equiv_type.m"
{
#line 971 "equiv_type.m"
  {
#line 971 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 971 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_84;
#line 971 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 971 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 971 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 2)));
#line 971 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Targs0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 3)));
#line 971 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Ctxt_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 4)));
#line 971 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_18;
#line 971 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Targs_19;
#line 971 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_30_30;
#line 971 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_31_31;
#line 971 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32_32;
#line 971 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_71_71;
#line 1041 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_25;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_27;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_29;

#line 1041 "equiv_type.m"
    {
#line 1041 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(parse_tree__equiv_type__Location_11, parse_tree__equiv_type__EqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Targs0_16, &parse_tree__equiv_type__Targs_19, (MR_Integer) 0, &parse_tree__equiv_type__V_23_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_24, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_30_30, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_31_31, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32_32);
    }
#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      parse_tree__equiv_type__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_71_71, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_71_71, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_10_p_0_1));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_71_71, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_71_71, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_12));
#line 853 "equiv_type.m"
    }
#line 8818 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_84, parse_tree__equiv_type__TypeCtorInfo_38_84, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_71_71, parse_tree__equiv_type__Constraints0_14, &parse_tree__equiv_type__Constraints_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_30_30)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_25, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_31_31)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_27, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32_32)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_29);
    }
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_25 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_25);
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_27);
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_29);
#line 970 "equiv_type.m"
    {
#line 970 "equiv_type.m"
      MR_Word base;
#line 970 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 970 "equiv_type.m"
      *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 970 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_13));
#line 970 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Constraints_18));
#line 970 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TName_15));
#line 970 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Targs_19));
#line 970 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Ctxt_17));
#line 970 "equiv_type.m"
    }
#line 971 "equiv_type.m"
  }
#line 963 "equiv_type.m"
}

#line 960 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 960 "equiv_type.m"
{
#line 960 "equiv_type.m"
  {
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_HeadVar__4_4;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29;

#line 960 "equiv_type.m"
    {
#line 960 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_HeadVar__4_4, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29);
    }
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_HeadVar__4_4));
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25));
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27));
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29));
#line 960 "equiv_type.m"
  }
#line 960 "equiv_type.m"
}

#line 953 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 953 "equiv_type.m"
{
#line 959 "equiv_type.m"
  {
#line 959 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 959 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 959 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 960 "equiv_type.m"
    {
#line 960 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_12));
#line 960 "equiv_type.m"
    }
#line 8966 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 960 "equiv_type.m"
    {
#line 960 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17, parse_tree__equiv_type__STATE_VARIABLE_Ctors_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 959 "equiv_type.m"
  }
#line 953 "equiv_type.m"
}

#line 933 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10)
#line 933 "equiv_type.m"
{
#line 938 "equiv_type.m"
  {
#line 938 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 938 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 938 "equiv_type.m"
      {
#line 938 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 939 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9;
#line 938 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7;
#line 938 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_6 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5;
#line 938 "equiv_type.m"
      }
#line 938 "equiv_type.m"
    else
#line 941 "equiv_type.m"
      {
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Var_24;
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_25;
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_27;
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst_28;
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_40_40;
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41;
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42;
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 1091 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_32_32;
#line 1091 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_61_61;

#line 940 "equiv_type.m"
        parse_tree__equiv_type__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 0)));
#line 940 "equiv_type.m"
        parse_tree__equiv_type__Type0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 1)));
#line 1091 "equiv_type.m"
        {
#line 1091 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_25, &parse_tree__equiv_type__Type_27, &parse_tree__equiv_type__V_32_32, &parse_tree__equiv_type__V_61_61, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43);
        }
#line 941 "equiv_type.m"
        {
#line 941 "equiv_type.m"
          parse_tree__equiv_type__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 941 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 0) = ((MR_Box) (parse_tree__equiv_type__Var_24));
#line 941 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 1) = ((MR_Box) (parse_tree__equiv_type__Type_27));
#line 941 "equiv_type.m"
        }
#line 944 "equiv_type.m"
        {
#line 944 "equiv_type.m"
          parse_tree__equiv_type__replace_in_subst_10_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__Subst0_26, &parse_tree__equiv_type__Subst_28, parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 941 "equiv_type.m"
        {
#line 941 "equiv_type.m"
          MR_Word base;
#line 941 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 941 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 941 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_40_40));
#line 941 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Subst_28));
#line 941 "equiv_type.m"
        }
#line 941 "equiv_type.m"
      }
#line 938 "equiv_type.m"
  }
#line 933 "equiv_type.m"
}

#line 891 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_method_11_p_0(
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_14,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Method0_15,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Method_16,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_51)
#line 891 "equiv_type.m"
{
#line 902 "equiv_type.m"
  {
#line 902 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 902 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Method0_15)) == (MR_mktag((MR_Integer) 0))))
#line 902 "equiv_type.m"
      {
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeVarSet0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 0)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__InstVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 1)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 2)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 3)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredName_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 4)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypesAndModes0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 5)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 6)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 7)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Det0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 8)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Purity_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 9)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 10)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 11)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext_32;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypesAndModes_33;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeVarSet_34;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_35;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_36;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Det_37;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_38;

#line 903 "equiv_type.m"
        {
#line 903 "equiv_type.m"
          parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__Location_12, parse_tree__equiv_type__PredName_24, parse_tree__equiv_type__PredOrFunc_23, parse_tree__equiv_type__Context_31, parse_tree__equiv_type__EqvMap_13, parse_tree__equiv_type__EqvInstMap_14, parse_tree__equiv_type__ClassContext0_30, &parse_tree__equiv_type__ClassContext_32, parse_tree__equiv_type__TypesAndModes0_25, &parse_tree__equiv_type__TypesAndModes_33, parse_tree__equiv_type__TypeVarSet0_20, &parse_tree__equiv_type__TypeVarSet_34, parse_tree__equiv_type__WithType0_26, &parse_tree__equiv_type__WithType_35, parse_tree__equiv_type__WithInst0_27, &parse_tree__equiv_type__WithInst_36, parse_tree__equiv_type__Det0_28, &parse_tree__equiv_type__Det_37, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49, &parse_tree__equiv_type__NewSpecs_38);
        }
#line 908 "equiv_type.m"
        {
#line 908 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_38, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50);
        }
#line 909 "equiv_type.m"
        {
#line 909 "equiv_type.m"
          MR_Word base;
#line 909 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 909 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_34));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_21));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_22));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_23));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__PredName_24));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_33));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__WithType_35));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__WithInst_36));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__Det_37));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__Purity_29));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__ClassContext_32));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__Context_31));
#line 909 "equiv_type.m"
        }
#line 902 "equiv_type.m"
      }
#line 902 "equiv_type.m"
    else
#line 914 "equiv_type.m"
      {
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 1)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 3)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes_41;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc_42;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes_43;
#line 914 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_52_52;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__InstVarSet_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 0)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredName_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 2)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 4)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Det0_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 5)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 6)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_65;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Det_66;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_67;

#line 915 "equiv_type.m"
        {
#line 915 "equiv_type.m"
          parse_tree__equiv_type__V_52_52 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_69_69, parse_tree__equiv_type__Modes0_40);
        }
#line 915 "equiv_type.m"
        {
#line 915 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__PredName_61, parse_tree__equiv_type__V_52_52, parse_tree__equiv_type__Context_64, (MR_Integer) 1, parse_tree__equiv_type__EqvInstMap_14, &parse_tree__equiv_type__ExtraModes_41, parse_tree__equiv_type__MaybePredOrFunc0_39, &parse_tree__equiv_type__MaybePredOrFunc_42, parse_tree__equiv_type__WithInst0_62, &parse_tree__equiv_type__WithInst_65, parse_tree__equiv_type__Det0_63, &parse_tree__equiv_type__Det_66, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49, &parse_tree__equiv_type__NewSpecs_67);
        }
#line 922 "equiv_type.m"
        if ((parse_tree__equiv_type__ExtraModes_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "equiv_type.m"
          parse_tree__equiv_type__Modes_43 = parse_tree__equiv_type__Modes0_40;
#line 922 "equiv_type.m"
        else
#line 924 "equiv_type.m"
          {
#line 924 "equiv_type.m"
            parse_tree__equiv_type__Modes_43 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_69_69, parse_tree__equiv_type__Modes0_40, parse_tree__equiv_type__ExtraModes_41);
          }
#line 926 "equiv_type.m"
        {
#line 926 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_67, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50);
        }
#line 927 "equiv_type.m"
        {
#line 927 "equiv_type.m"
          MR_Word base;
#line 927 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 927 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_60));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_42));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__PredName_61));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__equiv_type__Modes_43));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (parse_tree__equiv_type__WithInst_65));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (parse_tree__equiv_type__Det_66));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_64));
#line 927 "equiv_type.m"
        }
#line 914 "equiv_type.m"
      }
#line 902 "equiv_type.m"
  }
#line 891 "equiv_type.m"
}

#line 888 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 888 "equiv_type.m"
{
#line 888 "equiv_type.m"
  {
#line 888 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 888 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Method_16;
#line 888 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47;
#line 888 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49;
#line 888 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51;

#line 888 "equiv_type.m"
    {
#line 888 "equiv_type.m"
      parse_tree__equiv_type__replace_in_class_method_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Method_16, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51);
    }
#line 888 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Method_16));
#line 888 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47));
#line 888 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49));
#line 888 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51));
#line 888 "equiv_type.m"
  }
#line 888 "equiv_type.m"
}

#line 880 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
#line 880 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 880 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassInterface0_13,
#line 880 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 880 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 880 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassInterface_16,
#line 880 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 880 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 880 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 880 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23,
#line 880 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24,
#line 880 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_25)
#line 880 "equiv_type.m"
{
#line 887 "equiv_type.m"
  {
#line 887 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 887 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 887 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_26_26;
#line 888 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21;
#line 888 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23;
#line 888 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25;

#line 888 "equiv_type.m"
    {
#line 888 "equiv_type.m"
      parse_tree__equiv_type__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 888 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0]));
#line 888 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_class_interface_11_p_0_1));
#line 888 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 888 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 3) = ((MR_Box) (parse_tree__equiv_type__Location_12));
#line 888 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_14));
#line 888 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 5) = ((MR_Box) (parse_tree__equiv_type__EqvInstMap_15));
#line 888 "equiv_type.m"
    }
#line 9429 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0;
#line 888 "equiv_type.m"
    {
#line 888 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, (MR_Word) &parse_tree__equiv_type_scalar_common_1[5], parse_tree__equiv_type__V_26_26, parse_tree__equiv_type__ClassInterface0_13, parse_tree__equiv_type__ClassInterface_16, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25);
    }
#line 888 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21);
#line 888 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23);
#line 888 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_Specs_25 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25);
#line 887 "equiv_type.m"
  }
#line 880 "equiv_type.m"
}

#line 866 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Constraint0_13,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Constraint_14,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 866 "equiv_type.m"
{
#line 872 "equiv_type.m"
  {
#line 872 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 872 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_13, (MR_Integer) 0)));
#line 872 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_13, (MR_Integer) 1)));
#line 872 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes_20;
#line 1001 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 1001 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_22_22;

#line 1001 "equiv_type.m"
    {
#line 1001 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_11, parse_tree__equiv_type__EqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__ArgTypes0_19, &parse_tree__equiv_type__ArgTypes_20, &parse_tree__equiv_type__V_21_21, (MR_Integer) 0, &parse_tree__equiv_type__V_22_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
    }
#line 876 "equiv_type.m"
    {
#line 876 "equiv_type.m"
      MR_Word base;
#line 876 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 876 "equiv_type.m"
      *parse_tree__equiv_type__Constraint_14 = base;
#line 876 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_18));
#line 876 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ArgTypes_20));
#line 876 "equiv_type.m"
    }
#line 872 "equiv_type.m"
  }
#line 866 "equiv_type.m"
}

#line 853 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 853 "equiv_type.m"
{
#line 853 "equiv_type.m"
  {
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 853 "equiv_type.m"
  }
#line 853 "equiv_type.m"
}

#line 846 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 846 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 846 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 846 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Cs_0_17,
#line 846 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Cs_18,
#line 846 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 846 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 846 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 846 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 846 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 846 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 846 "equiv_type.m"
{
#line 852 "equiv_type.m"
  {
#line 852 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 852 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 852 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_12));
#line 853 "equiv_type.m"
    }
#line 9621 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Cs_0_17, parse_tree__equiv_type__STATE_VARIABLE_Cs_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 852 "equiv_type.m"
  }
#line 846 "equiv_type.m"
}

#line 853 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 853 "equiv_type.m"
{
#line 853 "equiv_type.m"
  {
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 853 "equiv_type.m"
  }
#line 853 "equiv_type.m"
}

#line 832 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 832 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 832 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 832 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 832 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 832 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 832 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 832 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 832 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 832 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 832 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 832 "equiv_type.m"
{
#line 838 "equiv_type.m"
  {
#line 838 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 838 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_61;
#line 838 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 0)));
#line 838 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 1)));
#line 838 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_20;
#line 838 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_21;
#line 838 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28;
#line 838 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29;
#line 838 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30;
#line 838 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_48_48;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30;

#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      parse_tree__equiv_type__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_12));
#line 853 "equiv_type.m"
    }
#line 9763 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_61, parse_tree__equiv_type__TypeCtorInfo_38_61, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_48_48, parse_tree__equiv_type__UnivCs0_18, &parse_tree__equiv_type__UnivCs_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
    }
#line 853 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28);
#line 853 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29);
#line 853 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
#line 842 "equiv_type.m"
    {
#line 842 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(parse_tree__equiv_type__Location_11, parse_tree__equiv_type__EqvMap_12, parse_tree__equiv_type__ExistCs0_19, &parse_tree__equiv_type__ExistCs_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 844 "equiv_type.m"
    {
#line 844 "equiv_type.m"
      MR_Word base;
#line 844 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 844 "equiv_type.m"
      *parse_tree__equiv_type__Cs_14 = base;
#line 844 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_20));
#line 844 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_21));
#line 844 "equiv_type.m"
    }
#line 838 "equiv_type.m"
  }
#line 832 "equiv_type.m"
}

#line 811 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 811 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 811 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 811 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_3,
#line 811 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 811 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 811 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 811 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 811 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 811 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9)
#line 811 "equiv_type.m"
{
#line 817 "equiv_type.m"
  {
#line 817 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 817 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 817 "equiv_type.m"
      {
#line 817 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 817 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8;
#line 817 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6;
#line 817 "equiv_type.m"
      }
#line 817 "equiv_type.m"
    else
#line 820 "equiv_type.m"
      {
#line 820 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 820 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 820 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo_24;
#line 820 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos_25;
#line 820 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32;
#line 820 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33;

#line 821 "equiv_type.m"
        {
#line 821 "equiv_type.m"
          parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__EqvMap_2, parse_tree__equiv_type__EqvInstMap_3, parse_tree__equiv_type__MutableInfo0_22, &parse_tree__equiv_type__MutableInfo_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33);
        }
#line 823 "equiv_type.m"
        {
#line 823 "equiv_type.m"
          parse_tree__equiv_type__replace_in_constraint_store_9_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__EqvMap_2, parse_tree__equiv_type__EqvInstMap_3, parse_tree__equiv_type__MutableInfos0_23, &parse_tree__equiv_type__MutableInfos_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);
        }
#line 819 "equiv_type.m"
        {
#line 819 "equiv_type.m"
          MR_Word base;
#line 819 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 819 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__MutableInfo_24));
#line 819 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__MutableInfos_25));
#line 819 "equiv_type.m"
        }
#line 820 "equiv_type.m"
      }
#line 817 "equiv_type.m"
  }
#line 811 "equiv_type.m"
}

#line 770 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_15,
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_16,
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 770 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 770 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 770 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 770 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 770 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 770 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49)
#line 770 "equiv_type.m"
{
#line 780 "equiv_type.m"
  {
#line 780 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 780 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_18)) == (MR_mktag((MR_Integer) 0))))
#line 786 "equiv_type.m"
      {
#line 786 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EqPred_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 786 "equiv_type.m"
        MR_Word parse_tree__equiv_type__DirectArgFunctors_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 786 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeBody0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 786 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeBody_66;

#line 787 "equiv_type.m"
        {
#line 787 "equiv_type.m"
          parse_tree__equiv_type__replace_in_ctors_location_10_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeBody0_65, &parse_tree__equiv_type__TypeBody_66, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
        }
#line 789 "equiv_type.m"
        *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 790 "equiv_type.m"
        {
#line 790 "equiv_type.m"
          MR_Word base;
#line 790 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 790 "equiv_type.m"
          *parse_tree__equiv_type__TypeDefn_19 = base;
#line 790 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_66));
#line 790 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__EqPred_27));
#line 790 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__DirectArgFunctors_28));
#line 790 "equiv_type.m"
        }
#line 786 "equiv_type.m"
      }
#line 780 "equiv_type.m"
    else
#line 780 "equiv_type.m"
      if (((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_18)) == (MR_mktag((MR_Integer) 1))))
#line 780 "equiv_type.m"
        {
#line 780 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 780 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody_25;
#line 780 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_60_60;
#line 781 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_26_26;

#line 781 "equiv_type.m"
          {
#line 781 "equiv_type.m"
            parse_tree__equiv_type__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 781 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 781 "equiv_type.m"
          }
#line 781 "equiv_type.m"
          {
#line 781 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__V_60_60, parse_tree__equiv_type__TypeBody0_24, &parse_tree__equiv_type__TypeBody_25, &parse_tree__equiv_type__V_26_26, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
          }
#line 784 "equiv_type.m"
          {
#line 784 "equiv_type.m"
            MR_Word base;
#line 784 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 784 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = base;
#line 784 "equiv_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_25));
#line 784 "equiv_type.m"
          }
#line 780 "equiv_type.m"
        }
#line 780 "equiv_type.m"
      else
#line 780 "equiv_type.m"
        if (((((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 792 "equiv_type.m"
          {
#line 792 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SolverDetails0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 792 "equiv_type.m"
            MR_Word parse_tree__equiv_type__MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 792 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RepresentationType0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 0)));
#line 792 "equiv_type.m"
            MR_Word parse_tree__equiv_type__InitPred_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 1)));
#line 792 "equiv_type.m"
            MR_Word parse_tree__equiv_type__GroundInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 2)));
#line 792 "equiv_type.m"
            MR_Word parse_tree__equiv_type__AnyInst_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 3)));
#line 792 "equiv_type.m"
            MR_Word parse_tree__equiv_type__MutableInfos0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 4)));
#line 792 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RepresentationType_36;
#line 792 "equiv_type.m"
            MR_Word parse_tree__equiv_type__MutableInfos_38;
#line 792 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SolverDetails_39;
#line 792 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_50_50;
#line 792 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52;
#line 792 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 795 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_37_37;

#line 795 "equiv_type.m"
            {
#line 795 "equiv_type.m"
              parse_tree__equiv_type__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 795 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 795 "equiv_type.m"
            }
#line 795 "equiv_type.m"
            {
#line 795 "equiv_type.m"
              parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__V_50_50, parse_tree__equiv_type__RepresentationType0_31, &parse_tree__equiv_type__RepresentationType_36, &parse_tree__equiv_type__V_37_37, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53);
            }
#line 798 "equiv_type.m"
            {
#line 798 "equiv_type.m"
              parse_tree__equiv_type__replace_in_constraint_store_9_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__EqvInstMap_16, parse_tree__equiv_type__MutableInfos0_35, &parse_tree__equiv_type__MutableInfos_38, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
            }
#line 800 "equiv_type.m"
            {
#line 800 "equiv_type.m"
              parse_tree__equiv_type__SolverDetails_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 800 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 0) = ((MR_Box) (parse_tree__equiv_type__RepresentationType_36));
#line 800 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 1) = ((MR_Box) (parse_tree__equiv_type__InitPred_32));
#line 800 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 2) = ((MR_Box) (parse_tree__equiv_type__GroundInst_33));
#line 800 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 3) = ((MR_Box) (parse_tree__equiv_type__AnyInst_34));
#line 800 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 4) = ((MR_Box) (parse_tree__equiv_type__MutableInfos_38));
#line 800 "equiv_type.m"
            }
#line 802 "equiv_type.m"
            {
#line 802 "equiv_type.m"
              MR_Word base;
#line 802 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 802 "equiv_type.m"
              *parse_tree__equiv_type__TypeDefn_19 = base;
#line 802 "equiv_type.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 802 "equiv_type.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__SolverDetails_39));
#line 802 "equiv_type.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeUserEqComp_30));
#line 802 "equiv_type.m"
            }
#line 792 "equiv_type.m"
          }
#line 780 "equiv_type.m"
        else
#line 806 "equiv_type.m"
          {
#line 807 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = parse_tree__equiv_type__TypeDefn0_18;
#line 808 "equiv_type.m"
            *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 806 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_VarSet_45 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44;
#line 806 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46;
#line 806 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48;
#line 806 "equiv_type.m"
          }
#line 780 "equiv_type.m"
  }
#line 770 "equiv_type.m"
}

#line 686 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 686 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 686 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 686 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_12,
#line 686 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 686 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 686 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30,
#line 686 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31,
#line 686 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32,
#line 686 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33)
#line 686 "equiv_type.m"
{
#line 693 "equiv_type.m"
  {
#line 693 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 693 "equiv_type.m"
    MR_String parse_tree__equiv_type__MutName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 0)));
#line 693 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 1)));
#line 693 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InitValue_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 2)));
#line 693 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 3)));
#line 693 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Attrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 4)));
#line 693 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Varset_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 5)));
#line 693 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 6)));
#line 693 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 7)));
#line 693 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TVarSet0_25;
#line 693 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type_26;
#line 693 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst_29;
#line 693 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34;
#line 693 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35;
#line 693 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;
#line 1091 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TypeChanged_27;
#line 1091 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TVarSet_28;
#line 1091 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_53_53;

#line 696 "equiv_type.m"
    {
#line 696 "equiv_type.m"
      parse_tree__equiv_type__TVarSet0_25 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 1091 "equiv_type.m"
    {
#line 1091 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_10, parse_tree__equiv_type__EqvMap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_18, &parse_tree__equiv_type__Type_26, &parse_tree__equiv_type___TypeChanged_27, &parse_tree__equiv_type__V_53_53, parse_tree__equiv_type__TVarSet0_25, &parse_tree__equiv_type___TVarSet_28, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30, &parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35);
    }
#line 1269 "equiv_type.m"
    {
#line 1269 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1269 "equiv_type.m"
    {
#line 1269 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__Inst0_20, parse_tree__equiv_type__EqvInstMap_12, parse_tree__equiv_type__V_68_68, &parse_tree__equiv_type__Inst_29, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33);
    }
#line 701 "equiv_type.m"
    {
#line 701 "equiv_type.m"
      MR_Word base;
#line 701 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 701 "equiv_type.m"
      *parse_tree__equiv_type__Info_14 = base;
#line 701 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__MutName_17));
#line 701 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Type_26));
#line 701 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__InitValue_19));
#line 701 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Inst_29));
#line 701 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Attrs_21));
#line 701 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Varset_22));
#line 701 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_23));
#line 701 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_24));
#line 701 "equiv_type.m"
    }
#line 693 "equiv_type.m"
  }
#line 686 "equiv_type.m"
}

#line 669 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_info_11_p_0(
#line 669 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 669 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 669 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 669 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 669 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 669 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 669 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25,
#line 669 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_26,
#line 669 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 669 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28,
#line 669 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 669 "equiv_type.m"
{
#line 676 "equiv_type.m"
  {
#line 676 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 676 "equiv_type.m"
    MR_String parse_tree__equiv_type__MutName_20;
#line 676 "equiv_type.m"
    MR_Word parse_tree__equiv_type__QualName_21;
#line 676 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_22;
#line 676 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_23;
#line 676 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_24;
#line 676 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_31_31;
#line 677 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_34_34;
#line 677 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_35_35;
#line 677 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_36_36;
#line 677 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_37_37;
#line 677 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;
#line 677 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_39_39;
#line 677 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_40_40;

#line 676 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 677 "equiv_type.m"
    parse_tree__equiv_type__MutName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 677 "equiv_type.m"
    parse_tree__equiv_type__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 677 "equiv_type.m"
    parse_tree__equiv_type__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 677 "equiv_type.m"
    parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 677 "equiv_type.m"
    parse_tree__equiv_type__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 677 "equiv_type.m"
    parse_tree__equiv_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 677 "equiv_type.m"
    parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 677 "equiv_type.m"
    parse_tree__equiv_type__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 678 "equiv_type.m"
    {
#line 678 "equiv_type.m"
      parse_tree__equiv_type__QualName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_21, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 678 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_21, 1) = ((MR_Box) (parse_tree__equiv_type__MutName_20));
#line 678 "equiv_type.m"
    }
#line 679 "equiv_type.m"
    {
#line 679 "equiv_type.m"
      parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__QualName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25, &parse_tree__equiv_type__ExpandedItems0_22);
    }
#line 681 "equiv_type.m"
    {
#line 681 "equiv_type.m"
      parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__Info0_16, parse_tree__equiv_type__Info_17, parse_tree__equiv_type__ExpandedItems0_22, &parse_tree__equiv_type__ExpandedItems_23, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
    }
#line 683 "equiv_type.m"
    {
#line 683 "equiv_type.m"
      parse_tree__equiv_type__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 683 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_31_31, 0) = ((MR_Box) (parse_tree__equiv_type__QualName_21));
#line 683 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_31_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 683 "equiv_type.m"
    }
#line 683 "equiv_type.m"
    {
#line 683 "equiv_type.m"
      parse_tree__equiv_type__ItemId_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 683 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_24, 0) = ((MR_Box) ((MR_Integer) 8));
#line 683 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_24, 1) = ((MR_Box) (parse_tree__equiv_type__V_31_31));
#line 683 "equiv_type.m"
    }
#line 684 "equiv_type.m"
    {
#line 684 "equiv_type.m"
      parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_24, parse_tree__equiv_type__ExpandedItems_23, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_26);
#line 684 "equiv_type.m"
      return;
    }
#line 676 "equiv_type.m"
  }
#line 669 "equiv_type.m"
}

#line 853 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 853 "equiv_type.m"
{
#line 853 "equiv_type.m"
  {
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 853 "equiv_type.m"
  }
#line 853 "equiv_type.m"
}

#line 504 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 504 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 504 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 504 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 504 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 504 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 504 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 504 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 504 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 504 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 504 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 504 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 504 "equiv_type.m"
{
#line 511 "equiv_type.m"
  {
#line 511 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_77;
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__FunDeps_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 511 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 511 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_29;
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_30;
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_31;
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_32;
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems1_33;
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface_34;
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_35;
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_38;
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_47_47;
#line 511 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_64_64;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet_32;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_ExpandedItems1_33;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43;

#line 514 "equiv_type.m"
    {
#line 514 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[0], parse_tree__equiv_type__Vars_24, &parse_tree__equiv_type__Arity_29);
    }
#line 515 "equiv_type.m"
    {
#line 515 "equiv_type.m"
      parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__ClassName_23, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, &parse_tree__equiv_type__ExpandedItems0_30);
    }
#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      parse_tree__equiv_type__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 3) = ((MR_Box) (parse_tree__equiv_type__Location_13));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_14));
#line 853 "equiv_type.m"
    }
#line 10515 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_77, parse_tree__equiv_type__TypeCtorInfo_38_77, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__Constraints0_21, &parse_tree__equiv_type__Constraints_31, ((MR_Box) (parse_tree__equiv_type__VarSet0_26)), &parse_tree__equiv_type__conv6_VarSet_32, ((MR_Box) (parse_tree__equiv_type__ExpandedItems0_30)), &parse_tree__equiv_type__conv5_ExpandedItems1_33, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
    }
#line 853 "equiv_type.m"
    parse_tree__equiv_type__VarSet_32 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet_32);
#line 853 "equiv_type.m"
    parse_tree__equiv_type__ExpandedItems1_33 = ((MR_Word) parse_tree__equiv_type__conv5_ExpandedItems1_33);
#line 853 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
#line 525 "equiv_type.m"
    if ((parse_tree__equiv_type__ClassInterface0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 521 "equiv_type.m"
      {
#line 522 "equiv_type.m"
        parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 523 "equiv_type.m"
        parse_tree__equiv_type__ExpandedItems_35 = parse_tree__equiv_type__ExpandedItems1_33;
#line 524 "equiv_type.m"
        *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 521 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 521 "equiv_type.m"
      }
#line 525 "equiv_type.m"
    else
#line 526 "equiv_type.m"
      {
#line 526 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface0_25, (MR_Integer) 0)));
#line 526 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods_37;

#line 527 "equiv_type.m"
        {
#line 527 "equiv_type.m"
          parse_tree__equiv_type__replace_in_class_interface_11_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__Methods0_36, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, &parse_tree__equiv_type__Methods_37, parse_tree__equiv_type__ExpandedItems1_33, &parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Specs_20);
        }
#line 529 "equiv_type.m"
        {
#line 529 "equiv_type.m"
          parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 529 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface_34, 0) = ((MR_Box) (parse_tree__equiv_type__Methods_37));
#line 529 "equiv_type.m"
        }
#line 526 "equiv_type.m"
      }
#line 531 "equiv_type.m"
    {
#line 531 "equiv_type.m"
      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 531 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_23));
#line 531 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_29));
#line 531 "equiv_type.m"
    }
#line 531 "equiv_type.m"
    {
#line 531 "equiv_type.m"
      parse_tree__equiv_type__ItemId_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 531 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 0) = ((MR_Box) ((MR_Integer) 4));
#line 531 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 1) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 531 "equiv_type.m"
    }
#line 532 "equiv_type.m"
    {
#line 532 "equiv_type.m"
      parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_38, parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40);
    }
#line 533 "equiv_type.m"
    {
#line 533 "equiv_type.m"
      MR_Word base;
#line 533 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 533 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 533 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Constraints_31));
#line 533 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__FunDeps_22));
#line 533 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__ClassName_23));
#line 533 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Vars_24));
#line 533 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__ClassInterface_34));
#line 533 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_32));
#line 533 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 533 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 533 "equiv_type.m"
    }
#line 511 "equiv_type.m"
  }
#line 504 "equiv_type.m"
}

#line 441 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 441 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 441 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 441 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 441 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 441 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 441 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 441 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47,
#line 441 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48,
#line 441 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 441 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 441 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 441 "equiv_type.m"
{
#line 448 "equiv_type.m"
  {
#line 448 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredOrFunc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 8)));
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Det0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 9)));
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Purity_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 10)));
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 11)));
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 12)));
#line 448 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 13)));
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_35;
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext_36;
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes_37;
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet_38;
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType_39;
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst_40;
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Det_41;
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_42;
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemType_43;
#line 448 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_44;
#line 448 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__OrigArity_45;
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_46;
#line 448 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_52_52;

#line 452 "equiv_type.m"
    {
#line 452 "equiv_type.m"
      parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_26, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47, &parse_tree__equiv_type__ExpandedItems0_35);
    }
#line 454 "equiv_type.m"
    {
#line 454 "equiv_type.m"
      parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__PredName_26, parse_tree__equiv_type__PredOrFunc_25, parse_tree__equiv_type__Context_33, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ClassContext0_32, &parse_tree__equiv_type__ClassContext_36, parse_tree__equiv_type__TypesAndModes0_27, &parse_tree__equiv_type__TypesAndModes_37, parse_tree__equiv_type__TypeVarSet0_22, &parse_tree__equiv_type__TypeVarSet_38, parse_tree__equiv_type__MaybeWithType0_28, &parse_tree__equiv_type__MaybeWithType_39, parse_tree__equiv_type__MaybeWithInst0_29, &parse_tree__equiv_type__MaybeWithInst_40, parse_tree__equiv_type__Det0_30, &parse_tree__equiv_type__Det_41, parse_tree__equiv_type__ExpandedItems0_35, &parse_tree__equiv_type__ExpandedItems_42, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50, parse_tree__equiv_type__Specs_20);
    }
#line 459 "equiv_type.m"
    {
#line 459 "equiv_type.m"
      parse_tree__equiv_type__ItemType_43 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_25);
    }
#line 460 "equiv_type.m"
    {
#line 460 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__equiv_type__TypesAndModes_37, &parse_tree__equiv_type__Arity_44);
    }
#line 461 "equiv_type.m"
    {
#line 461 "equiv_type.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_25, &parse_tree__equiv_type__OrigArity_45, parse_tree__equiv_type__Arity_44);
    }
#line 462 "equiv_type.m"
    {
#line 462 "equiv_type.m"
      parse_tree__equiv_type__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 462 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_52_52, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_26));
#line 462 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_52_52, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_45));
#line 462 "equiv_type.m"
    }
#line 462 "equiv_type.m"
    {
#line 462 "equiv_type.m"
      parse_tree__equiv_type__ItemId_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 462 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_46, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_43));
#line 462 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_46, 1) = ((MR_Box) (parse_tree__equiv_type__V_52_52));
#line 462 "equiv_type.m"
    }
#line 463 "equiv_type.m"
    {
#line 463 "equiv_type.m"
      parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_46, parse_tree__equiv_type__ExpandedItems_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48);
    }
#line 464 "equiv_type.m"
    {
#line 464 "equiv_type.m"
      MR_Word base;
#line 464 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 464 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 464 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Origin_21));
#line 464 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_38));
#line 464 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_23));
#line 464 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_24));
#line 464 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_25));
#line 464 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__PredName_26));
#line 464 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_37));
#line 464 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__MaybeWithType_39));
#line 464 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__MaybeWithInst_40));
#line 464 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__Det_41));
#line 464 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__Purity_31));
#line 464 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__ClassContext_36));
#line 464 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__equiv_type__Context_33));
#line 464 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__equiv_type__SeqNum_34));
#line 464 "equiv_type.m"
    }
#line 448 "equiv_type.m"
  }
#line 441 "equiv_type.m"
}

#line 405 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 405 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 405 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 405 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 405 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 405 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 405 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 405 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38,
#line 405 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39,
#line 405 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40,
#line 405 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41,
#line 405 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 405 "equiv_type.m"
{
#line 412 "equiv_type.m"
  {
#line 412 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 412 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeInfo_70_70 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[0];
#line 412 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 412 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SymName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 412 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 412 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 412 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 412 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 412 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_27;
#line 412 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_28;
#line 412 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn_29;
#line 412 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainsCirc_30;
#line 412 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_31;
#line 412 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_32;
#line 412 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_37;
#line 412 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_42_42;
#line 412 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;

#line 415 "equiv_type.m"
    {
#line 415 "equiv_type.m"
      mercury__list__length_2_p_0(parse_tree__equiv_type__TypeInfo_70_70, parse_tree__equiv_type__TArgs_23, &parse_tree__equiv_type__Arity_27);
    }
#line 416 "equiv_type.m"
    {
#line 416 "equiv_type.m"
      parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__SymName_22, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38, &parse_tree__equiv_type__UsedTypeCtors0_28);
    }
#line 419 "equiv_type.m"
    {
#line 419 "equiv_type.m"
      parse_tree__equiv_type__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 419 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_22));
#line 419 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 419 "equiv_type.m"
    }
#line 418 "equiv_type.m"
    {
#line 418 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_defn_13_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__V_42_42, parse_tree__equiv_type__TypeDefn0_24, &parse_tree__equiv_type__TypeDefn_29, &parse_tree__equiv_type__ContainsCirc_30, parse_tree__equiv_type__VarSet0_21, &parse_tree__equiv_type__VarSet_31, parse_tree__equiv_type__UsedTypeCtors0_28, &parse_tree__equiv_type__UsedTypeCtors_32, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41);
    }
#line 432 "equiv_type.m"
    if ((parse_tree__equiv_type__ContainsCirc_30 == (MR_Integer) 0))
#line 434 "equiv_type.m"
      *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 432 "equiv_type.m"
    else
#line 429 "equiv_type.m"
      {
#line 423 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_33_33;

#line 423 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_24)) == (MR_mktag((MR_Integer) 1)));
#line 423 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 423 "equiv_type.m"
          {
#line 423 "equiv_type.m"
            parse_tree__equiv_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_24, (MR_Integer) 0)));
#line 425 "equiv_type.m"
            {
#line 425 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Pieces_34;
#line 425 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Msg_35;
#line 425 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Spec_36;
#line 425 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_46_46;
#line 425 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_47_47;
#line 425 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_48_48;
#line 425 "equiv_type.m"
              MR_Integer parse_tree__equiv_type__V_49_49;
#line 425 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_56_56;
#line 425 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_57_57;
#line 425 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_61_61;

#line 425 "equiv_type.m"
              {
#line 425 "equiv_type.m"
                parse_tree__equiv_type__V_49_49 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeInfo_70_70, parse_tree__equiv_type__TArgs_23);
              }
#line 425 "equiv_type.m"
              {
#line 425 "equiv_type.m"
                parse_tree__equiv_type__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 425 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_22));
#line 425 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 425 "equiv_type.m"
              }
#line 425 "equiv_type.m"
              {
#line 425 "equiv_type.m"
                parse_tree__equiv_type__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 425 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__V_48_48));
#line 425 "equiv_type.m"
              }
#line 425 "equiv_type.m"
              {
#line 425 "equiv_type.m"
                parse_tree__equiv_type__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, 0) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 425 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[11])));
#line 425 "equiv_type.m"
              }
#line 424 "equiv_type.m"
              {
#line 424 "equiv_type.m"
                parse_tree__equiv_type__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[27])));
#line 424 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_34, 1) = ((MR_Box) (parse_tree__equiv_type__V_46_46));
#line 424 "equiv_type.m"
              }
#line 426 "equiv_type.m"
              {
#line 426 "equiv_type.m"
                parse_tree__equiv_type__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 426 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_57_57, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_34));
#line 426 "equiv_type.m"
              }
#line 426 "equiv_type.m"
              {
#line 426 "equiv_type.m"
                parse_tree__equiv_type__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_56_56, 0) = ((MR_Box) (parse_tree__equiv_type__V_57_57));
#line 426 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "equiv_type.m"
              }
#line 426 "equiv_type.m"
              {
#line 426 "equiv_type.m"
                parse_tree__equiv_type__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 426 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_35, 0) = ((MR_Box) (parse_tree__equiv_type__Context_25));
#line 426 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_35, 1) = ((MR_Box) (parse_tree__equiv_type__V_56_56));
#line 426 "equiv_type.m"
              }
#line 427 "equiv_type.m"
              {
#line 427 "equiv_type.m"
                parse_tree__equiv_type__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_61_61, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_35));
#line 427 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "equiv_type.m"
              }
#line 427 "equiv_type.m"
              {
#line 427 "equiv_type.m"
                parse_tree__equiv_type__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 427 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 427 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 2) = ((MR_Box) (parse_tree__equiv_type__V_61_61));
#line 427 "equiv_type.m"
              }
#line 428 "equiv_type.m"
              {
#line 428 "equiv_type.m"
                MR_Word base;
#line 428 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "equiv_type.m"
                *parse_tree__equiv_type__Specs_20 = base;
#line 428 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_36));
#line 428 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "equiv_type.m"
              }
#line 425 "equiv_type.m"
            }
#line 423 "equiv_type.m"
          }
#line 423 "equiv_type.m"
        else
#line 430 "equiv_type.m"
          {
#line 430 "equiv_type.m"
            {
#line 430 "equiv_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_type_defn_info\'/11", (MR_String) "invalid item");
#line 430 "equiv_type.m"
              return;
            }
#line 430 "equiv_type.m"
          }
#line 429 "equiv_type.m"
      }
#line 436 "equiv_type.m"
    {
#line 436 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_22));
#line 436 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 436 "equiv_type.m"
    }
#line 436 "equiv_type.m"
    {
#line 436 "equiv_type.m"
      parse_tree__equiv_type__ItemId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_37, 0) = ((MR_Box) ((MR_Integer) 1));
#line 436 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_37, 1) = ((MR_Box) (parse_tree__equiv_type__V_68_68));
#line 436 "equiv_type.m"
    }
#line 437 "equiv_type.m"
    {
#line 437 "equiv_type.m"
      parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_37, parse_tree__equiv_type__UsedTypeCtors_32, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39);
    }
#line 438 "equiv_type.m"
    {
#line 438 "equiv_type.m"
      MR_Word base;
#line 438 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 438 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 438 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_31));
#line 438 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__SymName_22));
#line 438 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TArgs_23));
#line 438 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__TypeDefn_29));
#line 438 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Context_25));
#line 438 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__SeqNum_26));
#line 438 "equiv_type.m"
    }
#line 412 "equiv_type.m"
  }
#line 405 "equiv_type.m"
}

#line 342 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
#line 342 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 342 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 342 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 342 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 342 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item0_16,
#line 342 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Item_17,
#line 342 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45,
#line 342 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46,
#line 342 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47,
#line 342 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48,
#line 342 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 342 "equiv_type.m"
{
#line 350 "equiv_type.m"
  {
#line 350 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 350 "equiv_type.m"
    if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 375 "equiv_type.m"
      {
#line 375 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemInstance0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 375 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemInstance_32;

#line 376 "equiv_type.m"
        {
#line 376 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__ItemInstance0_31, &parse_tree__equiv_type__ItemInstance_32, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
        }
#line 378 "equiv_type.m"
        {
#line 378 "equiv_type.m"
          MR_Word base;
#line 378 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "equiv_type.m"
          *parse_tree__equiv_type__Item_17 = base;
#line 378 "equiv_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 378 "equiv_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemInstance_32));
#line 378 "equiv_type.m"
        }
#line 375 "equiv_type.m"
      }
#line 350 "equiv_type.m"
    else
#line 350 "equiv_type.m"
      if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 360 "equiv_type.m"
        {
#line 360 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemModeDecl0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 360 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemModeDecl_26;

#line 361 "equiv_type.m"
          {
#line 361 "equiv_type.m"
            parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ItemModeDecl0_25, &parse_tree__equiv_type__ItemModeDecl_26, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
          }
#line 363 "equiv_type.m"
          {
#line 363 "equiv_type.m"
            MR_Word base;
#line 363 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "equiv_type.m"
            *parse_tree__equiv_type__Item_17 = base;
#line 363 "equiv_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 363 "equiv_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemModeDecl_26));
#line 363 "equiv_type.m"
          }
#line 360 "equiv_type.m"
        }
#line 350 "equiv_type.m"
      else
#line 350 "equiv_type.m"
        if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 385 "equiv_type.m"
          {
#line 388 "equiv_type.m"
            *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 389 "equiv_type.m"
            *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 385 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45;
#line 385 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47;
#line 385 "equiv_type.m"
          }
#line 350 "equiv_type.m"
        else
#line 350 "equiv_type.m"
          if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 380 "equiv_type.m"
            {
#line 380 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 380 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable_34;

#line 381 "equiv_type.m"
              {
#line 381 "equiv_type.m"
                parse_tree__equiv_type__replace_in_mutable_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ItemMutable0_33, &parse_tree__equiv_type__ItemMutable_34, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
              }
#line 383 "equiv_type.m"
              {
#line 383 "equiv_type.m"
                MR_Word base;
#line 383 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 383 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 383 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemMutable_34));
#line 383 "equiv_type.m"
              }
#line 380 "equiv_type.m"
            }
#line 350 "equiv_type.m"
          else
#line 350 "equiv_type.m"
            if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 365 "equiv_type.m"
              {
#line 365 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemPragma0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 365 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemPragma_28;

#line 366 "equiv_type.m"
                {
#line 366 "equiv_type.m"
                  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__ItemPragma0_27, &parse_tree__equiv_type__ItemPragma_28, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
                }
#line 368 "equiv_type.m"
                {
#line 368 "equiv_type.m"
                  MR_Word base;
#line 368 "equiv_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "equiv_type.m"
                  *parse_tree__equiv_type__Item_17 = base;
#line 368 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 368 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPragma_28));
#line 368 "equiv_type.m"
                }
#line 365 "equiv_type.m"
              }
#line 350 "equiv_type.m"
            else
#line 350 "equiv_type.m"
              if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 355 "equiv_type.m"
                {
#line 355 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__ItemPredDecl0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 355 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__ItemPredDecl_24;

#line 356 "equiv_type.m"
                  {
#line 356 "equiv_type.m"
                    parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ItemPredDecl0_23, &parse_tree__equiv_type__ItemPredDecl_24, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
                  }
#line 358 "equiv_type.m"
                  {
#line 358 "equiv_type.m"
                    MR_Word base;
#line 358 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "equiv_type.m"
                    *parse_tree__equiv_type__Item_17 = base;
#line 358 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 358 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPredDecl_24));
#line 358 "equiv_type.m"
                  }
#line 355 "equiv_type.m"
                }
#line 350 "equiv_type.m"
              else
#line 350 "equiv_type.m"
                if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 350 "equiv_type.m"
                  {
#line 350 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__ItemTypeDefn0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 350 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__ItemTypeDefn_22;

#line 351 "equiv_type.m"
                    {
#line 351 "equiv_type.m"
                      parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ItemTypeDefn0_21, &parse_tree__equiv_type__ItemTypeDefn_22, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
                    }
#line 353 "equiv_type.m"
                    {
#line 353 "equiv_type.m"
                      MR_Word base;
#line 353 "equiv_type.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "equiv_type.m"
                      *parse_tree__equiv_type__Item_17 = base;
#line 353 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 353 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemTypeDefn_22));
#line 353 "equiv_type.m"
                    }
#line 350 "equiv_type.m"
                  }
#line 350 "equiv_type.m"
                else
#line 350 "equiv_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 370 "equiv_type.m"
                    {
#line 370 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__ItemTypeClass0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 370 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__ItemTypeClass_30;

#line 371 "equiv_type.m"
                      {
#line 371 "equiv_type.m"
                        parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ItemTypeClass0_29, &parse_tree__equiv_type__ItemTypeClass_30, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
                      }
#line 373 "equiv_type.m"
                      {
#line 373 "equiv_type.m"
                        MR_Word base;
#line 373 "equiv_type.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "equiv_type.m"
                        *parse_tree__equiv_type__Item_17 = base;
#line 373 "equiv_type.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 373 "equiv_type.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemTypeClass_30));
#line 373 "equiv_type.m"
                      }
#line 370 "equiv_type.m"
                    }
#line 350 "equiv_type.m"
                  else
#line 400 "equiv_type.m"
                    {
#line 401 "equiv_type.m"
                      *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 402 "equiv_type.m"
                      *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 400 "equiv_type.m"
                      *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45;
#line 400 "equiv_type.m"
                      *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47;
#line 400 "equiv_type.m"
                    }
#line 350 "equiv_type.m"
  }
#line 342 "equiv_type.m"
}

#line 263 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_list_13_p_0(
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location0_2,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_4,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_5,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__6_6,
#line 263 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__7_7,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 263 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 263 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 263 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 263 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 263 "equiv_type.m"
{
#line 270 "equiv_type.m"
  while (MR_TRUE)
#line 270 "equiv_type.m"
    {
#line 270 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 270 "equiv_type.m"
      {
#line 270 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 270 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 270 "equiv_type.m"
          {
#line 271 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 270 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 270 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 270 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__7_7 = parse_tree__equiv_type__HeadVar__6_6;
#line 270 "equiv_type.m"
          }
#line 270 "equiv_type.m"
        else
#line 273 "equiv_type.m"
          {
#line 273 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 273 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Location_44;
#line 273 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item_71;
#line 273 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemSpecs_72;
#line 273 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_86_86;
#line 273 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_87_87;
#line 273 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88;
#line 273 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_89_89;

#line 306 "equiv_type.m"
            if (((MR_tag((MR_Word) parse_tree__equiv_type__Item0_32)) == (MR_mktag((MR_Integer) 2))))
#line 275 "equiv_type.m"
              {
#line 275 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemModuleDefn_40 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item0_32), (MR_Integer) 2);
#line 275 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ModuleDefn_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_40, (MR_Integer) 0)));
#line 276 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_40, (MR_Integer) 1)));
#line 276 "equiv_type.m"
                MR_Integer parse_tree__equiv_type___SeqNum_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_40, (MR_Integer) 2)));

#line 280 "equiv_type.m"
                if ((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "equiv_type.m"
                  parse_tree__equiv_type__Location_44 = (MR_Integer) 1;
#line 280 "equiv_type.m"
                else
#line 280 "equiv_type.m"
                  if ((((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))) || ((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))))
#line 284 "equiv_type.m"
                    parse_tree__equiv_type__Location_44 = (MR_Integer) 2;
#line 280 "equiv_type.m"
                  else
#line 280 "equiv_type.m"
                    if ((((((((((((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))) || (((((MR_tag((MR_Word) parse_tree__equiv_type__ModuleDefn_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__ModuleDefn_41, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((MR_tag((MR_Word) parse_tree__equiv_type__ModuleDefn_41)) == (MR_mktag((MR_Integer) 1)))))) || ((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))))) || ((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))))) || (((MR_tag((MR_Word) parse_tree__equiv_type__ModuleDefn_41)) == (MR_mktag((MR_Integer) 2))))))
#line 296 "equiv_type.m"
                      parse_tree__equiv_type__Location_44 = (MR_Integer) 0;
#line 280 "equiv_type.m"
                    else
#line 304 "equiv_type.m"
                      parse_tree__equiv_type__Location_44 = parse_tree__equiv_type__Location0_2;
#line 275 "equiv_type.m"
              }
#line 306 "equiv_type.m"
            else
#line 306 "equiv_type.m"
              if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_32)) == (MR_mktag((MR_Integer) 1)))) || (((MR_tag((MR_Word) parse_tree__equiv_type__Item0_32)) == (MR_mktag((MR_Integer) 0))))))
#line 309 "equiv_type.m"
                {
#line 310 "equiv_type.m"
                  {
#line 310 "equiv_type.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_item_list\'/13", (MR_String) "module start or end");
#line 310 "equiv_type.m"
                    return;
                  }
#line 309 "equiv_type.m"
                }
#line 306 "equiv_type.m"
              else
#line 327 "equiv_type.m"
                parse_tree__equiv_type__Location_44 = parse_tree__equiv_type__Location0_2;
#line 329 "equiv_type.m"
            {
#line 329 "equiv_type.m"
              parse_tree__equiv_type__replace_in_item_11_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__Location_44, parse_tree__equiv_type__EqvMap_4, parse_tree__equiv_type__EqvInstMap_5, parse_tree__equiv_type__Item0_32, &parse_tree__equiv_type__Item_71, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_86_86, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_87_87, &parse_tree__equiv_type__ItemSpecs_72);
            }
#line 335 "equiv_type.m"
            if ((parse_tree__equiv_type__ItemSpecs_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "equiv_type.m"
              {
#line 334 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88, 0) = ((MR_Box) (parse_tree__equiv_type__Item_71));
#line 334 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88, 1) = ((MR_Box) (parse_tree__equiv_type__HeadVar__6_6));
#line 334 "equiv_type.m"
              }
#line 335 "equiv_type.m"
            else
#line 336 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88 = parse_tree__equiv_type__HeadVar__6_6;
#line 338 "equiv_type.m"
            {
#line 338 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_89_89 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__ItemSpecs_72, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12);
            }
#line 339 "equiv_type.m"
            /* direct tailcall eliminated */
#line 339 "equiv_type.m"
            {
#line 339 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Location0__tmp_copy_2 = parse_tree__equiv_type__Location_44;
#line 339 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__3__tmp_copy_3 = parse_tree__equiv_type__Items0_33;
#line 339 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__6__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88;
#line 339 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_86_86;
#line 339 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_87_87;
#line 339 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_89_89;

#line 339 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 339 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 339 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 339 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__6_6 = parse_tree__equiv_type__HeadVar__6__tmp_copy_6;
#line 339 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__3_3 = parse_tree__equiv_type__HeadVar__3__tmp_copy_3;
#line 339 "equiv_type.m"
              parse_tree__equiv_type__Location0_2 = parse_tree__equiv_type__Location0__tmp_copy_2;
#line 339 "equiv_type.m"
            }
#line 339 "equiv_type.m"
            continue;
#line 273 "equiv_type.m"
          }
#line 270 "equiv_type.m"
      }
#line 270 "equiv_type.m"
      break;
#line 270 "equiv_type.m"
    }
#line 263 "equiv_type.m"
}

#line 202 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__skip_abstract_imported_items_2_p_0(
#line 202 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 202 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2)
#line 202 "equiv_type.m"
{
#line 204 "equiv_type.m"
  while (MR_TRUE)
#line 204 "equiv_type.m"
    {
#line 204 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 204 "equiv_type.m"
      {
#line 204 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 204 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 204 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 204 "equiv_type.m"
        else
#line 205 "equiv_type.m"
          {
#line 205 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 205 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));

#line 211 "equiv_type.m"
            if (((MR_tag((MR_Word) parse_tree__equiv_type__Item0_3)) == (MR_mktag((MR_Integer) 2))))
#line 212 "equiv_type.m"
              {
#line 212 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemModuleDefn_8 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item0_3), (MR_Integer) 2);
#line 212 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ModuleDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_8, (MR_Integer) 0)));
#line 213 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_8, (MR_Integer) 1)));
#line 213 "equiv_type.m"
                MR_Integer parse_tree__equiv_type__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_8, (MR_Integer) 2)));

#line 216 "equiv_type.m"
                parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 216 "equiv_type.m"
                parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 215 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 243 "equiv_type.m"
                  {
#line 243 "equiv_type.m"
                    if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 248 "equiv_type.m"
                      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 243 "equiv_type.m"
                    else
#line 243 "equiv_type.m"
                      if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 244 "equiv_type.m"
                        parse_tree__equiv_type__succeeded = MR_TRUE;
#line 243 "equiv_type.m"
                      else
#line 243 "equiv_type.m"
                        if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 245 "equiv_type.m"
                          parse_tree__equiv_type__succeeded = MR_TRUE;
#line 243 "equiv_type.m"
                        else
#line 243 "equiv_type.m"
                          if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 243 "equiv_type.m"
                            parse_tree__equiv_type__succeeded = MR_TRUE;
#line 243 "equiv_type.m"
                          else
#line 243 "equiv_type.m"
                            if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 249 "equiv_type.m"
                              parse_tree__equiv_type__succeeded = MR_TRUE;
#line 243 "equiv_type.m"
                            else
#line 243 "equiv_type.m"
                              if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 250 "equiv_type.m"
                                parse_tree__equiv_type__succeeded = MR_TRUE;
#line 243 "equiv_type.m"
                              else
#line 243 "equiv_type.m"
                                if (((MR_tag((MR_Word) parse_tree__equiv_type__ModuleDefn_9)) == (MR_mktag((MR_Integer) 1))))
#line 246 "equiv_type.m"
                                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 243 "equiv_type.m"
                                else
#line 243 "equiv_type.m"
                                  if (((MR_tag((MR_Word) parse_tree__equiv_type__ModuleDefn_9)) == (MR_mktag((MR_Integer) 2))))
#line 247 "equiv_type.m"
                                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 243 "equiv_type.m"
                                  else
#line 243 "equiv_type.m"
                                    parse_tree__equiv_type__succeeded = MR_FALSE;
#line 243 "equiv_type.m"
                  }
#line 219 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 218 "equiv_type.m"
                  *parse_tree__equiv_type__HeadVar__2_2 = parse_tree__equiv_type__Items0_4;
#line 219 "equiv_type.m"
                else
#line 220 "equiv_type.m"
                  {
#line 220 "equiv_type.m"
                    /* direct tailcall eliminated */
#line 220 "equiv_type.m"
                    {
#line 220 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__Items0_4;

#line 220 "equiv_type.m"
                      parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 220 "equiv_type.m"
                    }
#line 220 "equiv_type.m"
                    continue;
#line 220 "equiv_type.m"
                  }
#line 212 "equiv_type.m"
              }
#line 211 "equiv_type.m"
            else
#line 211 "equiv_type.m"
              if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_3)) == (MR_mktag((MR_Integer) 1)))) || (((MR_tag((MR_Word) parse_tree__equiv_type__Item0_3)) == (MR_mktag((MR_Integer) 0))))))
#line 210 "equiv_type.m"
                *parse_tree__equiv_type__HeadVar__2_2 = parse_tree__equiv_type__Items0_4;
#line 211 "equiv_type.m"
              else
#line 238 "equiv_type.m"
                {
#line 238 "equiv_type.m"
                  /* direct tailcall eliminated */
#line 238 "equiv_type.m"
                  {
#line 238 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__Items0_4;

#line 238 "equiv_type.m"
                    parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 238 "equiv_type.m"
                  }
#line 238 "equiv_type.m"
                  continue;
#line 238 "equiv_type.m"
                }
#line 205 "equiv_type.m"
          }
#line 204 "equiv_type.m"
      }
#line 204 "equiv_type.m"
      break;
#line 204 "equiv_type.m"
    }
#line 202 "equiv_type.m"
}

#line 167 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_map_5_p_0(
#line 167 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 167 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2,
#line 167 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EqvMap_3,
#line 167 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4,
#line 167 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_5)
#line 167 "equiv_type.m"
{
#line 170 "equiv_type.m"
  while (MR_TRUE)
#line 170 "equiv_type.m"
    {
#line 170 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 170 "equiv_type.m"
      {
#line 170 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 170 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "equiv_type.m"
          {
#line 170 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_5 = parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4;
#line 170 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EqvMap_3 = parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2;
#line 170 "equiv_type.m"
          }
#line 170 "equiv_type.m"
        else
#line 171 "equiv_type.m"
          {
#line 171 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 171 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 173 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemModuleDefn_16;
#line 173 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ModuleDefn_17;
#line 174 "equiv_type.m"
            MR_Word parse_tree__equiv_type___Context_18;
#line 174 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___SeqNum_19;

#line 173 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 2)));
#line 173 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 173 "equiv_type.m"
              {
#line 173 "equiv_type.m"
                parse_tree__equiv_type__ItemModuleDefn_16 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item_12), (MR_Integer) 2);
#line 174 "equiv_type.m"
                parse_tree__equiv_type__ModuleDefn_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_16, (MR_Integer) 0)));
#line 174 "equiv_type.m"
                parse_tree__equiv_type___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_16, (MR_Integer) 1)));
#line 174 "equiv_type.m"
                parse_tree__equiv_type___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_16, (MR_Integer) 2)));
#line 175 "equiv_type.m"
                parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__ModuleDefn_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 173 "equiv_type.m"
              }
#line 179 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 177 "equiv_type.m"
              {
#line 177 "equiv_type.m"
                MR_Word parse_tree__equiv_type__AfterSkipItems_20;

#line 177 "equiv_type.m"
                {
#line 177 "equiv_type.m"
                  parse_tree__equiv_type__skip_abstract_imported_items_2_p_0(parse_tree__equiv_type__Items_13, &parse_tree__equiv_type__AfterSkipItems_20);
                }
#line 178 "equiv_type.m"
                /* direct tailcall eliminated */
#line 178 "equiv_type.m"
                {
#line 178 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__AfterSkipItems_20;

#line 178 "equiv_type.m"
                  parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 178 "equiv_type.m"
                }
#line 178 "equiv_type.m"
                continue;
#line 177 "equiv_type.m"
              }
#line 179 "equiv_type.m"
            else
#line 198 "equiv_type.m"
              {
#line 198 "equiv_type.m"
                MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvMap_40_40;
#line 198 "equiv_type.m"
                MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_43_43;
#line 188 "equiv_type.m"
                MR_Word parse_tree__equiv_type__VarSet_22;
#line 188 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Name_23;
#line 188 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Args_24;
#line 188 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Body_25;
#line 181 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemTypeDefn_21;
#line 181 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_38_38;
#line 182 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_26_26;
#line 182 "equiv_type.m"
                MR_Integer parse_tree__equiv_type___SeqNum_46;

#line 181 "equiv_type.m"
                parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 181 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 181 "equiv_type.m"
                  {
#line 181 "equiv_type.m"
                    parse_tree__equiv_type__ItemTypeDefn_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 1)));
#line 182 "equiv_type.m"
                    parse_tree__equiv_type__VarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 0)));
#line 182 "equiv_type.m"
                    parse_tree__equiv_type__Name_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 1)));
#line 182 "equiv_type.m"
                    parse_tree__equiv_type__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 2)));
#line 182 "equiv_type.m"
                    parse_tree__equiv_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 3)));
#line 182 "equiv_type.m"
                    parse_tree__equiv_type__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 4)));
#line 182 "equiv_type.m"
                    parse_tree__equiv_type___SeqNum_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 5)));
#line 183 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 183 "equiv_type.m"
                    if (parse_tree__equiv_type__succeeded)
#line 183 "equiv_type.m"
                      parse_tree__equiv_type__Body_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_38_38, (MR_Integer) 0)));
#line 181 "equiv_type.m"
                  }
#line 188 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 185 "equiv_type.m"
                  {
#line 185 "equiv_type.m"
                    MR_Integer parse_tree__equiv_type__Arity_27;
#line 185 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__TypeCtor_28;
#line 185 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_39_39;

#line 185 "equiv_type.m"
                    {
#line 185 "equiv_type.m"
                      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[0], parse_tree__equiv_type__Args_24, &parse_tree__equiv_type__Arity_27);
                    }
#line 186 "equiv_type.m"
                    {
#line 186 "equiv_type.m"
                      parse_tree__equiv_type__TypeCtor_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 186 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_28, 0) = ((MR_Box) (parse_tree__equiv_type__Name_23));
#line 186 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_28, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 186 "equiv_type.m"
                    }
#line 187 "equiv_type.m"
                    {
#line 187 "equiv_type.m"
                      parse_tree__equiv_type__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 187 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_22));
#line 187 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 1) = ((MR_Box) (parse_tree__equiv_type__Args_24));
#line 187 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 2) = ((MR_Box) (parse_tree__equiv_type__Body_25));
#line 187 "equiv_type.m"
                    }
#line 187 "equiv_type.m"
                    {
#line 187 "equiv_type.m"
                      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, ((MR_Box) (parse_tree__equiv_type__TypeCtor_28)), ((MR_Box) (parse_tree__equiv_type__V_39_39)), parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2, &parse_tree__equiv_type__STATE_VARIABLE_EqvMap_40_40);
                    }
#line 185 "equiv_type.m"
                    parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_43_43 = parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4;
#line 185 "equiv_type.m"
                  }
#line 188 "equiv_type.m"
                else
#line 196 "equiv_type.m"
                  {
#line 196 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__VarSet_52;
#line 196 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Name_53;
#line 196 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Args_54;
#line 196 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Body_55;
#line 189 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__ItemInstDefn_29;
#line 189 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_41_41;
#line 190 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_30_30;
#line 190 "equiv_type.m"
                    MR_Integer parse_tree__equiv_type___SeqNum_48;

#line 189 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 189 "equiv_type.m"
                    if (parse_tree__equiv_type__succeeded)
#line 189 "equiv_type.m"
                      {
#line 189 "equiv_type.m"
                        parse_tree__equiv_type__ItemInstDefn_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 1)));
#line 190 "equiv_type.m"
                        parse_tree__equiv_type__VarSet_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_29, (MR_Integer) 0)));
#line 190 "equiv_type.m"
                        parse_tree__equiv_type__Name_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_29, (MR_Integer) 1)));
#line 190 "equiv_type.m"
                        parse_tree__equiv_type__Args_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_29, (MR_Integer) 2)));
#line 190 "equiv_type.m"
                        parse_tree__equiv_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_29, (MR_Integer) 3)));
#line 190 "equiv_type.m"
                        parse_tree__equiv_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_29, (MR_Integer) 4)));
#line 190 "equiv_type.m"
                        parse_tree__equiv_type___SeqNum_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_29, (MR_Integer) 5)));
#line 191 "equiv_type.m"
                        parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 191 "equiv_type.m"
                        if (parse_tree__equiv_type__succeeded)
#line 191 "equiv_type.m"
                          parse_tree__equiv_type__Body_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_41_41, (MR_Integer) 0)));
#line 189 "equiv_type.m"
                      }
#line 196 "equiv_type.m"
                    if (parse_tree__equiv_type__succeeded)
#line 193 "equiv_type.m"
                      {
#line 193 "equiv_type.m"
                        MR_Word parse_tree__equiv_type__InstId_31;
#line 193 "equiv_type.m"
                        MR_Word parse_tree__equiv_type__V_42_42;
#line 193 "equiv_type.m"
                        MR_Integer parse_tree__equiv_type__Arity_50;

#line 193 "equiv_type.m"
                        {
#line 193 "equiv_type.m"
                          mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[1], parse_tree__equiv_type__Args_54, &parse_tree__equiv_type__Arity_50);
                        }
#line 194 "equiv_type.m"
                        {
#line 194 "equiv_type.m"
                          parse_tree__equiv_type__InstId_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 194 "equiv_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_31, 0) = ((MR_Box) (parse_tree__equiv_type__Name_53));
#line 194 "equiv_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_31, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_50));
#line 194 "equiv_type.m"
                        }
#line 195 "equiv_type.m"
                        {
#line 195 "equiv_type.m"
                          parse_tree__equiv_type__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 195 "equiv_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_52));
#line 195 "equiv_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 1) = ((MR_Box) (parse_tree__equiv_type__Args_54));
#line 195 "equiv_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 2) = ((MR_Box) (parse_tree__equiv_type__Body_55));
#line 195 "equiv_type.m"
                        }
#line 195 "equiv_type.m"
                        {
#line 195 "equiv_type.m"
                          mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, ((MR_Box) (parse_tree__equiv_type__InstId_31)), ((MR_Box) (parse_tree__equiv_type__V_42_42)), parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4, &parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_43_43);
                        }
#line 193 "equiv_type.m"
                      }
#line 196 "equiv_type.m"
                    else
#line 196 "equiv_type.m"
                      parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_43_43 = parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4;
#line 196 "equiv_type.m"
                    parse_tree__equiv_type__STATE_VARIABLE_EqvMap_40_40 = parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2;
#line 196 "equiv_type.m"
                  }
#line 199 "equiv_type.m"
                /* direct tailcall eliminated */
#line 199 "equiv_type.m"
                {
#line 199 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__Items_13;
#line 199 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0__tmp_copy_2 = parse_tree__equiv_type__STATE_VARIABLE_EqvMap_40_40;
#line 199 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0__tmp_copy_4 = parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_43_43;

#line 199 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4 = parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0__tmp_copy_4;
#line 199 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2 = parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0__tmp_copy_2;
#line 199 "equiv_type.m"
                  parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 199 "equiv_type.m"
                }
#line 199 "equiv_type.m"
                continue;
#line 198 "equiv_type.m"
              }
#line 171 "equiv_type.m"
          }
#line 170 "equiv_type.m"
      }
#line 170 "equiv_type.m"
      break;
#line 170 "equiv_type.m"
    }
#line 167 "equiv_type.m"
}

#line 100 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(
#line 100 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item_1,
#line 100 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 100 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 100 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4)
#line 100 "equiv_type.m"
{
#line 1601 "equiv_type.m"
  {
#line 1601 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1601 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1601 "equiv_type.m"
      if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1601 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1601 "equiv_type.m"
      else
#line 1602 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__4_4 = parse_tree__equiv_type__HeadVar__3_3;
#line 1601 "equiv_type.m"
    else
#line 1601 "equiv_type.m"
      {
#line 1601 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));

#line 1601 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1603 "equiv_type.m"
          {
#line 1604 "equiv_type.m"
            {
#line 1604 "equiv_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.finish_recording_expanded_items\'/4", (MR_String) "items but no info");
#line 1604 "equiv_type.m"
              return;
            }
#line 1603 "equiv_type.m"
          }
#line 1601 "equiv_type.m"
        else
#line 1606 "equiv_type.m"
          {
#line 1606 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ExpandedItems_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_20_20, (MR_Integer) 1)));
#line 1606 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Info0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1606 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Info_18;
#line 1605 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_20_20, (MR_Integer) 0)));

#line 1607 "equiv_type.m"
            {
#line 1607 "equiv_type.m"
              recompilation__record_expanded_items_4_p_0(parse_tree__equiv_type__Item_1, parse_tree__equiv_type__ExpandedItems_16, parse_tree__equiv_type__Info0_17, &parse_tree__equiv_type__Info_18);
            }
#line 1606 "equiv_type.m"
            {
#line 1606 "equiv_type.m"
              MR_Word base;
#line 1606 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1606 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1606 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Info_18));
#line 1606 "equiv_type.m"
            }
#line 1606 "equiv_type.m"
          }
#line 1601 "equiv_type.m"
      }
#line 1601 "equiv_type.m"
  }
#line 100 "equiv_type.m"
}

#line 95 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(
#line 95 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 95 "equiv_type.m"
  MR_Word parse_tree__equiv_type__SymName_2,
#line 95 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 95 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4)
#line 95 "equiv_type.m"
{
#line 1573 "equiv_type.m"
  {
#line 1573 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1573 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1573 "equiv_type.m"
      *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1573 "equiv_type.m"
    else
#line 1577 "equiv_type.m"
      {
#line 1575 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_15_15;
#line 1575 "equiv_type.m"
        MR_String parse_tree__equiv_type__V_11_11;

#line 1575 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__SymName_2)) == (MR_mktag((MR_Integer) 1)));
#line 1575 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1575 "equiv_type.m"
          {
#line 1575 "equiv_type.m"
            parse_tree__equiv_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__SymName_2, (MR_Integer) 0)));
#line 1575 "equiv_type.m"
            parse_tree__equiv_type__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__SymName_2, (MR_Integer) 1)));
#line 1575 "equiv_type.m"
            {
#line 1575 "equiv_type.m"
              parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__V_15_15);
            }
#line 1575 "equiv_type.m"
          }
#line 1577 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1576 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1577 "equiv_type.m"
        else
#line 1578 "equiv_type.m"
          {
#line 1578 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_12_12;
#line 1578 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_13_13;

#line 1578 "equiv_type.m"
            {
#line 1578 "equiv_type.m"
              parse_tree__equiv_type__V_13_13 = mercury__set__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0);
            }
#line 1578 "equiv_type.m"
            {
#line 1578 "equiv_type.m"
              parse_tree__equiv_type__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1578 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_12_12, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_1));
#line 1578 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_12_12, 1) = ((MR_Box) (parse_tree__equiv_type__V_13_13));
#line 1578 "equiv_type.m"
            }
#line 1578 "equiv_type.m"
            {
#line 1578 "equiv_type.m"
              MR_Word base;
#line 1578 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1578 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_12_12));
#line 1578 "equiv_type.m"
            }
#line 1578 "equiv_type.m"
          }
#line 1577 "equiv_type.m"
      }
#line 1573 "equiv_type.m"
  }
#line 95 "equiv_type.m"
}

#line 960 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 960 "equiv_type.m"
{
#line 960 "equiv_type.m"
  {
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_HeadVar__4_4;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29;

#line 960 "equiv_type.m"
    {
#line 960 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_HeadVar__4_4, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29);
    }
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_HeadVar__4_4));
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25));
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27));
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29));
#line 960 "equiv_type.m"
  }
#line 960 "equiv_type.m"
}

#line 74 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0(
#line 74 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_8,
#line 74 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_13,
#line 74 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_14,
#line 74 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_15,
#line 74 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_16,
#line 74 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_17,
#line 74 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_18)
#line 74 "equiv_type.m"
{
#line 949 "equiv_type.m"
  {
#line 949 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 949 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_51;
#line 949 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 949 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_12_12;
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16;
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18;
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_V_12_12;

#line 951 "equiv_type.m"
    {
#line 951 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 960 "equiv_type.m"
    {
#line 960 "equiv_type.m"
      parse_tree__equiv_type__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_7_p_0_1));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 3) = ((MR_Box) ((MR_Integer) 0));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_8));
#line 960 "equiv_type.m"
    }
#line 12402 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 960 "equiv_type.m"
    {
#line 960 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_51, parse_tree__equiv_type__TypeCtorInfo_38_51, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_13, parse_tree__equiv_type__STATE_VARIABLE_Ctors_14, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_15)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_17)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18, ((MR_Box) (parse_tree__equiv_type__V_23_23)), &parse_tree__equiv_type__conv4_V_12_12);
    }
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_16 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16);
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_18 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18);
#line 960 "equiv_type.m"
    parse_tree__equiv_type__V_12_12 = ((MR_Word) parse_tree__equiv_type__conv4_V_12_12);
#line 949 "equiv_type.m"
  }
#line 74 "equiv_type.m"
}

#line 853 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 853 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 853 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 853 "equiv_type.m"
{
#line 853 "equiv_type.m"
  {
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 853 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 853 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 853 "equiv_type.m"
  }
#line 853 "equiv_type.m"
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
#line 828 "equiv_type.m"
  {
#line 828 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 828 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_72;
#line 828 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 828 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_35;
#line 828 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_36;
#line 828 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_37;
#line 828 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_38;
#line 828 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39;
#line 828 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40;
#line 828 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41;
#line 828 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_59_59;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40;
#line 853 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41;
#line 842 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_13_13;

#line 830 "equiv_type.m"
    {
#line 830 "equiv_type.m"
      parse_tree__equiv_type__V_21_21 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 839 "equiv_type.m"
    parse_tree__equiv_type__UnivCs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 0)));
#line 839 "equiv_type.m"
    parse_tree__equiv_type__ExistCs0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 1)));
#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 3) = ((MR_Box) ((MR_Integer) 0));
#line 853 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_8));
#line 853 "equiv_type.m"
    }
#line 12551 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 853 "equiv_type.m"
    {
#line 853 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_72, parse_tree__equiv_type__TypeCtorInfo_38_72, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_59_59, parse_tree__equiv_type__UnivCs0_35, &parse_tree__equiv_type__UnivCs_37, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_14)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_16)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40, ((MR_Box) (parse_tree__equiv_type__V_21_21)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
    }
#line 853 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39);
#line 853 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40);
#line 853 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
#line 842 "equiv_type.m"
    {
#line 842 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0((MR_Integer) 0, parse_tree__equiv_type__EqvMap_8, parse_tree__equiv_type__ExistCs0_36, &parse_tree__equiv_type__ExistCs_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41, &parse_tree__equiv_type__V_13_13);
    }
#line 844 "equiv_type.m"
    {
#line 844 "equiv_type.m"
      MR_Word base;
#line 844 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 844 "equiv_type.m"
      *parse_tree__equiv_type__Cs_10 = base;
#line 844 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_37));
#line 844 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_38));
#line 844 "equiv_type.m"
    }
#line 828 "equiv_type.m"
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
#line 979 "equiv_type.m"
  {
#line 979 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 979 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 991 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_14_14;
#line 991 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_41_41;

#line 981 "equiv_type.m"
    {
#line 981 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 991 "equiv_type.m"
    {
#line 991 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0((MR_Integer) 0, parse_tree__equiv_type__EqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Ts_0_15, parse_tree__equiv_type__STATE_VARIABLE_Ts_16, parse_tree__equiv_type__Changed_11, (MR_Integer) 0, &parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20, parse_tree__equiv_type__V_25_25, &parse_tree__equiv_type__V_14_14);
    }
#line 979 "equiv_type.m"
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
#line 1080 "equiv_type.m"
  {
#line 1080 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1080 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 1091 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_15_15;
#line 1091 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;

#line 1082 "equiv_type.m"
    {
#line 1082 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 1091 "equiv_type.m"
    {
#line 1091 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_location_2_13_p_0((MR_Integer) 0, parse_tree__equiv_type__EqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_10, parse_tree__equiv_type__Type_11, parse_tree__equiv_type__Changed_12, &parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_16, parse_tree__equiv_type__STATE_VARIABLE_VarSet_17, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_19, parse_tree__equiv_type__V_23_23, &parse_tree__equiv_type__V_15_15);
    }
#line 1080 "equiv_type.m"
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
#line 138 "equiv_type.m"
  {
#line 138 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 138 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_45_45;
#line 138 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_46_46;
#line 138 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvMap0_20;
#line 138 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvInstMap0_21;
#line 138 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvInstMap_22;
#line 138 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevItems_23;
#line 138 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EventSpecList0_24;
#line 138 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EventSpecList_25;
#line 138 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30;
#line 138 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_34_34;
#line 138 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35;
#line 138 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_36_36;

#line 139 "equiv_type.m"
    {
#line 139 "equiv_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, &parse_tree__equiv_type__EqvMap0_20);
    }
#line 140 "equiv_type.m"
    {
#line 140 "equiv_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, &parse_tree__equiv_type__EqvInstMap0_21);
    }
#line 141 "equiv_type.m"
    {
#line 141 "equiv_type.m"
      parse_tree__equiv_type__build_eqv_map_5_p_0(parse_tree__equiv_type__Items0_12, parse_tree__equiv_type__EqvMap0_20, parse_tree__equiv_type__EqvMap_16, parse_tree__equiv_type__EqvInstMap0_21, &parse_tree__equiv_type__EqvInstMap_22);
    }
#line 142 "equiv_type.m"
    {
#line 142 "equiv_type.m"
      parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 144 "equiv_type.m"
    {
#line 144 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_list_13_p_0(parse_tree__equiv_type__ModuleName_11, (MR_Integer) 0, parse_tree__equiv_type__Items0_12, *parse_tree__equiv_type__EqvMap_16, parse_tree__equiv_type__EqvInstMap_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevItems_23, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_27, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__STATE_VARIABLE_Specs_36_36);
    }
#line 146 "equiv_type.m"
    {
#line 146 "equiv_type.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevItems_23, parse_tree__equiv_type__Items_13);
    }
#line 12766 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_45_45 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 12768 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0;
#line 147 "equiv_type.m"
    {
#line 147 "equiv_type.m"
      mercury__map__to_assoc_list_2_p_0(parse_tree__equiv_type__TypeCtorInfo_45_45, parse_tree__equiv_type__TypeCtorInfo_46_46, parse_tree__equiv_type__EventSpecMap0_14, &parse_tree__equiv_type__EventSpecList0_24);
    }
#line 148 "equiv_type.m"
    {
#line 148 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_95_108_105_115_116_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__EventSpecList0_24, &parse_tree__equiv_type__EventSpecList_25, *parse_tree__equiv_type__EqvMap_16, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_34_34, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_28, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26, parse_tree__equiv_type__STATE_VARIABLE_Specs_36_36, parse_tree__equiv_type__STATE_VARIABLE_Specs_29);
    }
#line 150 "equiv_type.m"
    {
#line 150 "equiv_type.m"
      mercury__map__from_sorted_assoc_list_2_p_0(parse_tree__equiv_type__TypeCtorInfo_45_45, parse_tree__equiv_type__TypeCtorInfo_46_46, parse_tree__equiv_type__EventSpecList_25, parse_tree__equiv_type__EventSpecMap_15);
#line 150 "equiv_type.m"
      return;
    }
#line 138 "equiv_type.m"
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
