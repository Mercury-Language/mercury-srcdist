/*
** Automatically generated from `equiv_type.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
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




#line 133 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

#line 136 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 139 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 142 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 145 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 148 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0;

#line 151 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 154 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 157 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 160 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 163 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__maybe__ti_maybe_1pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0;

#line 166 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 169 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 172 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 175 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[3];

#line 178 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0;

#line 181 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0[1];

#line 184 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0[1];

#line 187 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0[1];

#line 190 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0[1];

#line 193 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0;

#line 196 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

#line 199 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 202 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 205 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 208 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0[3];

#line 211 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0;

#line 214 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0[1];

#line 217 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0[1];

#line 220 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0[1];

#line 223 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0[1];

#line 226 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_0;

#line 229 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_1;

#line 232 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_2;

#line 235 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_eqv_type_location_0[3];

#line 238 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_eqv_type_location_0[3];

#line 241 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_location_0[3];

#line 244 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0;

#line 247 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1;

#line 250 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0[2];

#line 253 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2];

#line 256 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2];

#line 259 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____equiv_type_info_0_0_10001(
#line 262 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 264 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 267 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____equiv_type_info_0_0_10001(
#line 270 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 272 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 274 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 277 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
#line 280 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 282 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 285 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
#line 288 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 290 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 292 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 295 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_map_0_0_10001(
#line 298 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 300 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 303 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_map_0_0_10001(
#line 306 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 308 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 310 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 313 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_map_0_0_10001(
#line 316 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 318 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 321 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_map_0_0_10001(
#line 324 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 326 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 328 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 331 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
#line 334 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 336 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 339 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
#line 342 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 344 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 346 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 349 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_location_0_0_10001(
#line 352 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 354 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 357 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_location_0_0_10001(
#line 360 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 362 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 364 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 367 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____expanded_item_set_0_0_10001(
#line 370 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 372 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 375 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____expanded_item_set_0_0_10001(
#line 378 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 380 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 382 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 385 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
#line 388 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 390 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 393 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
#line 396 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 398 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 400 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 1402 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_20,
#line 1402 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_21,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_22,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_23,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_24,
#line 1402 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1402 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1402 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_0_50,
#line 1402 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_51,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1402 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1402 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1402 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33);

#line 1569 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0_1(
#line 1569 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1569 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1569 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2);

#line 1265 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1265 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1265 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_12,
#line 1265 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_13,
#line 1265 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1265 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1265 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1265 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1265 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29);

#line 1255 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_10,
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_11,
#line 1255 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1255 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1255 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);

#line 739 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 739 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 739 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 739 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 739 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 739 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 739 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 739 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 739 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 739 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 708 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_95_108_105_115_116_95_95_91_52_93_95_48_10_p_0(
#line 708 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 708 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 708 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_3,
#line 708 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 708 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 708 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 708 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 708 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 708 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 571 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 571 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 571 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 571 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 571 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 857 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 539 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 471 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 471 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 471 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 471 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 471 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 471 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_44,
#line 471 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_45,
#line 471 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_46,
#line 471 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_47,
#line 471 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 1365 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1365__1_1_f_0(
#line 1365 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_134);

#line 1358 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1358__1_1_f_0(
#line 1358 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_165);

#line 166 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
#line 166 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 166 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 166 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 166 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
#line 166 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 166 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 129 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_location_0_0(
#line 129 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 129 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 129 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 129 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_location_0_0(
#line 129 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 129 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 164 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_map_0_0(
#line 164 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 164 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 164 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 164 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_map_0_0(
#line 164 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 164 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 157 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
#line 157 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 157 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 1571 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_2_3_p_0(
#line 1571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ItemId_4,
#line 1571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedItemSet0_5,
#line 1571 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExpandedItemSet_6);

#line 1569 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_3_p_0_1(
#line 1569 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1569 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1569 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2);

#line 1565 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_3_p_0(
#line 1565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item_4,
#line 1565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 1565 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7);

#line 1542 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1542 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1542 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 1542 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarset_3,
#line 1542 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1542 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1542 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 1542 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 1542 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__8_8,
#line 1542 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__9_9);

#line 1538 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1538 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1538 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1538 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1538 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1538 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1538 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1538 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1517 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1517 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1517 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 1517 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarset_12,
#line 1517 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1517 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1517 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1517 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1517 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1517 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22);

#line 1513 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1513 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1513 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1513 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1513 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1513 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1513 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1513 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1500 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1500 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1500 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 1500 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1500 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1500 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 1500 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 1500 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 1500 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 1500 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);

#line 1483 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tm_10_p_0(
#line 1483 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1483 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 1483 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1483 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1483 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 1483 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 1483 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 1483 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 1483 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 1483 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);

#line 1480 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0_1(
#line 1480 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1480 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1480 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1480 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1480 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1480 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1480 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1480 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1480 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 1473 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0(
#line 1473 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 1473 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 1473 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17,
#line 1473 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TMs_18,
#line 1473 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1473 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1473 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1473 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1473 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1473 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 1365 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_2(
#line 1365 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1365 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1);

#line 1358 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1358 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1358 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1);

#line 1299 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_24,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_28,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_29,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Det_0_76,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Det_77,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_82);

#line 1189 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_19,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_20,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_45,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_46,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_47,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_48,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_49,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_50,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_51,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_54);

#line 1098 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_2_13_p_0(
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_15,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);

#line 1085 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_11_p_0(
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);

#line 1045 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13);

#line 1005 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1005 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1005 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 1005 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 1005 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 1005 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 1005 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);

#line 995 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 995 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 995 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 995 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 995 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 995 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 995 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 995 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 995 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 995 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 995 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 995 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 995 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 984 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 984 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 984 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 984 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_20,
#line 984 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_21,
#line 984 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 984 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 984 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 984 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 984 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 984 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 984 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 857 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 964 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 964 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 964 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 964 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 964 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 964 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_24,
#line 964 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_25,
#line 964 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 964 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 964 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 964 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29);

#line 961 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 954 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 954 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 954 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 954 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 954 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 954 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 954 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 954 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 954 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 954 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 954 "equiv_type.m"
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
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_47,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_48,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_51,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_52);

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

#line 857 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 850 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 850 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 850 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 850 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Cs_0_17,
#line 850 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Cs_18,
#line 850 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 850 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 850 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 850 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 850 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 850 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 857 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 836 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 836 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 836 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 836 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 836 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 836 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 836 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 836 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 836 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 836 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 836 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 815 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 815 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 815 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 815 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_3,
#line 815 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 815 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 815 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 815 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 815 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 815 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);

#line 774 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_15,
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_16,
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 774 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 774 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 774 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 774 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 774 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);

#line 690 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 690 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 690 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 690 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_12,
#line 690 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 690 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 690 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30,
#line 690 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31,
#line 690 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32,
#line 690 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33);

#line 673 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_info_11_p_0(
#line 673 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 673 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 673 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 673 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 673 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 673 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 673 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25,
#line 673 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_26,
#line 673 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 673 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28,
#line 673 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 857 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 507 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 507 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 507 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 507 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 507 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 444 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_48,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_49,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_50,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_51,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 408 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 345 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
#line 345 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 345 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 345 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 345 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 345 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item0_16,
#line 345 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Item_17,
#line 345 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45,
#line 345 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46,
#line 345 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47,
#line 345 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48,
#line 345 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 266 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_list_13_p_0(
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location0_2,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_4,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_5,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__6_6,
#line 266 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__7_7,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 266 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 266 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 266 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 205 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__skip_abstract_imported_items_2_p_0(
#line 205 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 205 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2);

#line 170 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_map_5_p_0(
#line 170 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 170 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2,
#line 170 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EqvMap_3,
#line 170 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4,
#line 170 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_5);

#line 961 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 857 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);


static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[34][2];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[3][13];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[1][14];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[2][5];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[2][12];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_7[1][6];




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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0])),
    ((MR_Box) (parse_tree__equiv_type__replace_in_pred_type_23_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[1])),
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
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
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
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
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
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
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
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[2][5] = {
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

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[2][12] = {
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
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
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
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_7[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0))
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



#line 2205 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 2214 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2222 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0
  }
};

#line 2230 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 2239 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 2247 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0
  }
};

#line 2256 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2264 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 2273 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 2282 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 2291 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__maybe__ti_maybe_1pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  }
};

#line 2299 "parse_tree.equiv_type.c"
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
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__maybe__ti_maybe_1pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2320 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2328 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2336 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2344 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 2351 "parse_tree.equiv_type.c"
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

#line 2366 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

#line 2371 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0
  }
};

#line 2380 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

#line 2385 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0[1] = {
  (MR_Integer) 0
};

#line 2390 "parse_tree.equiv_type.c"
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

#line 2411 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0
  }
};

#line 2420 "parse_tree.equiv_type.c"
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

#line 2441 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 2450 "parse_tree.equiv_type.c"
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

#line 2471 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2479 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2487 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2495 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2502 "parse_tree.equiv_type.c"
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

#line 2517 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

#line 2522 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0
  }
};

#line 2531 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

#line 2536 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0[1] = {
  (MR_Integer) 0
};

#line 2541 "parse_tree.equiv_type.c"
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

#line 2562 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_0 = {
  (MR_String) "eqv_type_out_of_module",
  (MR_Integer) 0
};

#line 2568 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_1 = {
  (MR_String) "eqv_type_in_interface",
  (MR_Integer) 1
};

#line 2574 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_2 = {
  (MR_String) "eqv_type_in_implementation",
  (MR_Integer) 2
};

#line 2580 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_eqv_type_location_0[3] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_1,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_2
};

#line 2587 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_eqv_type_location_0[3] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_2,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_1,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_0
};

#line 2594 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_location_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2601 "parse_tree.equiv_type.c"
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

#line 2622 "parse_tree.equiv_type.c"
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
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0set_ordlist__ti_set_ordlist_1recompilation__type_ctor_info_item_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2643 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0 = {
  (MR_String) "type_decl",
  (MR_Integer) 0
};

#line 2649 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1 = {
  (MR_String) "mode_decl",
  (MR_Integer) 1
};

#line 2655 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1
};

#line 2661 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0
};

#line 2667 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2673 "parse_tree.equiv_type.c"
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

#line 2694 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____equiv_type_info_0_0_10001(
#line 2697 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2699 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2701 "parse_tree.equiv_type.c"
{
#line 2703 "parse_tree.equiv_type.c"
  {
#line 2705 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2708 "parse_tree.equiv_type.c"
    {
#line 2710 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____equiv_type_info_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2713 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2715 "parse_tree.equiv_type.c"
  }
#line 2717 "parse_tree.equiv_type.c"
}

#line 2720 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____equiv_type_info_0_0_10001(
#line 2723 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2725 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2727 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2729 "parse_tree.equiv_type.c"
{
#line 2731 "parse_tree.equiv_type.c"
  {
#line 2733 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2736 "parse_tree.equiv_type.c"
    {
#line 2738 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____equiv_type_info_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2741 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2743 "parse_tree.equiv_type.c"
  }
#line 2745 "parse_tree.equiv_type.c"
}

#line 2748 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
#line 2751 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2753 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2755 "parse_tree.equiv_type.c"
{
#line 2757 "parse_tree.equiv_type.c"
  {
#line 2759 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2762 "parse_tree.equiv_type.c"
    {
#line 2764 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_inst_body_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2767 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2769 "parse_tree.equiv_type.c"
  }
#line 2771 "parse_tree.equiv_type.c"
}

#line 2774 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
#line 2777 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2779 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2781 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2783 "parse_tree.equiv_type.c"
{
#line 2785 "parse_tree.equiv_type.c"
  {
#line 2787 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2790 "parse_tree.equiv_type.c"
    {
#line 2792 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_inst_body_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2795 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2797 "parse_tree.equiv_type.c"
  }
#line 2799 "parse_tree.equiv_type.c"
}

#line 2802 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_map_0_0_10001(
#line 2805 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2807 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2809 "parse_tree.equiv_type.c"
{
#line 2811 "parse_tree.equiv_type.c"
  {
#line 2813 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2816 "parse_tree.equiv_type.c"
    {
#line 2818 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_inst_map_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2821 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2823 "parse_tree.equiv_type.c"
  }
#line 2825 "parse_tree.equiv_type.c"
}

#line 2828 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_map_0_0_10001(
#line 2831 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2833 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2835 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2837 "parse_tree.equiv_type.c"
{
#line 2839 "parse_tree.equiv_type.c"
  {
#line 2841 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2844 "parse_tree.equiv_type.c"
    {
#line 2846 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_inst_map_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2849 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2851 "parse_tree.equiv_type.c"
  }
#line 2853 "parse_tree.equiv_type.c"
}

#line 2856 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_map_0_0_10001(
#line 2859 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2861 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2863 "parse_tree.equiv_type.c"
{
#line 2865 "parse_tree.equiv_type.c"
  {
#line 2867 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2870 "parse_tree.equiv_type.c"
    {
#line 2872 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_map_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2875 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2877 "parse_tree.equiv_type.c"
  }
#line 2879 "parse_tree.equiv_type.c"
}

#line 2882 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_map_0_0_10001(
#line 2885 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2887 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2889 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2891 "parse_tree.equiv_type.c"
{
#line 2893 "parse_tree.equiv_type.c"
  {
#line 2895 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2898 "parse_tree.equiv_type.c"
    {
#line 2900 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_map_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2903 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2905 "parse_tree.equiv_type.c"
  }
#line 2907 "parse_tree.equiv_type.c"
}

#line 2910 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
#line 2913 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2915 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2917 "parse_tree.equiv_type.c"
{
#line 2919 "parse_tree.equiv_type.c"
  {
#line 2921 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2924 "parse_tree.equiv_type.c"
    {
#line 2926 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_type_body_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2929 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2931 "parse_tree.equiv_type.c"
  }
#line 2933 "parse_tree.equiv_type.c"
}

#line 2936 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
#line 2939 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2941 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2943 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2945 "parse_tree.equiv_type.c"
{
#line 2947 "parse_tree.equiv_type.c"
  {
#line 2949 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2952 "parse_tree.equiv_type.c"
    {
#line 2954 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_type_body_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2957 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2959 "parse_tree.equiv_type.c"
  }
#line 2961 "parse_tree.equiv_type.c"
}

#line 2964 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_location_0_0_10001(
#line 2967 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2969 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2971 "parse_tree.equiv_type.c"
{
#line 2973 "parse_tree.equiv_type.c"
  {
#line 2975 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2978 "parse_tree.equiv_type.c"
    {
#line 2980 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_type_location_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2983 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2985 "parse_tree.equiv_type.c"
  }
#line 2987 "parse_tree.equiv_type.c"
}

#line 2990 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_location_0_0_10001(
#line 2993 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2995 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2997 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2999 "parse_tree.equiv_type.c"
{
#line 3001 "parse_tree.equiv_type.c"
  {
#line 3003 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 3006 "parse_tree.equiv_type.c"
    {
#line 3008 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_type_location_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 3011 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 3013 "parse_tree.equiv_type.c"
  }
#line 3015 "parse_tree.equiv_type.c"
}

#line 3018 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____expanded_item_set_0_0_10001(
#line 3021 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 3023 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 3025 "parse_tree.equiv_type.c"
{
#line 3027 "parse_tree.equiv_type.c"
  {
#line 3029 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 3032 "parse_tree.equiv_type.c"
    {
#line 3034 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____expanded_item_set_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 3037 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 3039 "parse_tree.equiv_type.c"
  }
#line 3041 "parse_tree.equiv_type.c"
}

#line 3044 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____expanded_item_set_0_0_10001(
#line 3047 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 3049 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 3051 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 3053 "parse_tree.equiv_type.c"
{
#line 3055 "parse_tree.equiv_type.c"
  {
#line 3057 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 3060 "parse_tree.equiv_type.c"
    {
#line 3062 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____expanded_item_set_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 3065 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 3067 "parse_tree.equiv_type.c"
  }
#line 3069 "parse_tree.equiv_type.c"
}

#line 3072 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
#line 3075 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 3077 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 3079 "parse_tree.equiv_type.c"
{
#line 3081 "parse_tree.equiv_type.c"
  {
#line 3083 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 3086 "parse_tree.equiv_type.c"
    {
#line 3088 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 3091 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 3093 "parse_tree.equiv_type.c"
  }
#line 3095 "parse_tree.equiv_type.c"
}

#line 3098 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
#line 3101 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 3103 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 3105 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 3107 "parse_tree.equiv_type.c"
{
#line 3109 "parse_tree.equiv_type.c"
  {
#line 3111 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 3114 "parse_tree.equiv_type.c"
    {
#line 3116 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 3119 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 3121 "parse_tree.equiv_type.c"
  }
#line 3123 "parse_tree.equiv_type.c"
}

#line 1402 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_20,
#line 1402 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_21,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_22,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_23,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_24,
#line 1402 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1402 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1402 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_0_50,
#line 1402 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_51,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1402 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1402 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1402 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1402 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33)
#line 1402 "equiv_type.m"
{
#line 1416 "equiv_type.m"
  {
#line 1416 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1416 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithInst0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1466 "equiv_type.m"
      {
#line 1467 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1468 "equiv_type.m"
        *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1469 "equiv_type.m"
        *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1470 "equiv_type.m"
        *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1470 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_0_50;
#line 1470 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52;
#line 1470 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1466 "equiv_type.m"
      }
#line 1416 "equiv_type.m"
    else
#line 1416 "equiv_type.m"
      {
#line 1416 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithInst0_28, (MR_Integer) 0)));
#line 1416 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_35;
#line 1416 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1441 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_39;
#line 1441 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes0_40;
#line 1441 "equiv_type.m"
        MR_Word parse_tree__equiv_type__DetPrime_42;
#line 1420 "equiv_type.m"
        MR_Word parse_tree__equiv_type__GroundInstInfo_37;
#line 1420 "equiv_type.m"
        MR_Word parse_tree__equiv_type__HOInst_38;
#line 1420 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_36_36;
#line 1422 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_41_41;

#line 1417 "equiv_type.m"
        {
#line 1417 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(parse_tree__equiv_type__WithInst0_34, parse_tree__equiv_type__EqvInstMap_24, &parse_tree__equiv_type__WithInst_35, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);
        }
#line 1420 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__WithInst_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1420 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1420 "equiv_type.m"
          {
#line 1420 "equiv_type.m"
            parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 1)));
#line 1420 "equiv_type.m"
            parse_tree__equiv_type__GroundInstInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 2)));
#line 1421 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__GroundInstInfo_37)) == (MR_mktag((MR_Integer) 1)));
#line 1421 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1421 "equiv_type.m"
              {
#line 1421 "equiv_type.m"
                parse_tree__equiv_type__HOInst_38 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__GroundInstInfo_37), (MR_Integer) 1);
#line 1422 "equiv_type.m"
                parse_tree__equiv_type__PredOrFunc_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 0)));
#line 1422 "equiv_type.m"
                parse_tree__equiv_type__ExtraModes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 1)));
#line 1422 "equiv_type.m"
                parse_tree__equiv_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 2)));
#line 1422 "equiv_type.m"
                parse_tree__equiv_type__DetPrime_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 3)));
#line 1424 "equiv_type.m"
                if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1423 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1424 "equiv_type.m"
                else
#line 1424 "equiv_type.m"
                  {
#line 1424 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));

#line 1424 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_39 == parse_tree__equiv_type__V_105_105);
#line 1424 "equiv_type.m"
                  }
#line 1421 "equiv_type.m"
              }
#line 1420 "equiv_type.m"
          }
#line 1441 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1427 "equiv_type.m"
          {
#line 1427 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RecordedPredOrFunc_43;
#line 1427 "equiv_type.m"
            MR_Word parse_tree__equiv_type__OrigItemId_44;
#line 1427 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_59_59;
#line 1427 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_60_60;

#line 1427 "equiv_type.m"
            {
#line 1427 "equiv_type.m"
              MR_Word base;
#line 1427 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1427 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_51 = base;
#line 1427 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__DetPrime_42));
#line 1427 "equiv_type.m"
            }
#line 1428 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1429 "equiv_type.m"
            {
#line 1429 "equiv_type.m"
              MR_Word base;
#line 1429 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1429 "equiv_type.m"
              *parse_tree__equiv_type__MaybePredOrFunc_27 = base;
#line 1429 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_39));
#line 1429 "equiv_type.m"
            }
#line 1430 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = parse_tree__equiv_type__ExtraModes0_40;
#line 1434 "equiv_type.m"
            if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1433 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = (MR_Integer) 0;
#line 1434 "equiv_type.m"
            else
#line 1435 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));
#line 1437 "equiv_type.m"
            {
#line 1437 "equiv_type.m"
              parse_tree__equiv_type__V_59_59 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__RecordedPredOrFunc_43);
            }
#line 1437 "equiv_type.m"
            {
#line 1437 "equiv_type.m"
              parse_tree__equiv_type__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_20));
#line 1437 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_21));
#line 1437 "equiv_type.m"
            }
#line 1437 "equiv_type.m"
            {
#line 1437 "equiv_type.m"
              parse_tree__equiv_type__OrigItemId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 0) = ((MR_Box) (parse_tree__equiv_type__V_59_59));
#line 1437 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_60_60));
#line 1437 "equiv_type.m"
            }
#line 1439 "equiv_type.m"
            {
#line 1439 "equiv_type.m"
              parse_tree__equiv_type__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_44, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53);
            }
#line 1440 "equiv_type.m"
            *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1427 "equiv_type.m"
          }
#line 1441 "equiv_type.m"
        else
#line 1442 "equiv_type.m"
          {
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TypeCtorInfo_104_104;
#line 1442 "equiv_type.m"
            MR_String parse_tree__equiv_type__DeclStr_45;
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__PredOrFuncPieces_46;
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces_47;
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg_48;
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec_49;
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_64_64;
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_67_67;
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_68_68;
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_73_73;
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_74_74;
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_75_75;
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_76_76;
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_86_86;
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_93_93;
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_94_94;
#line 1442 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_98_98;

#line 1442 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1443 "equiv_type.m"
            *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1446 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1448 "equiv_type.m"
            if ((parse_tree__equiv_type__DeclType_23 == (MR_Integer) 1))
#line 1448 "equiv_type.m"
              parse_tree__equiv_type__DeclStr_45 = (MR_String) "mode declaration";
#line 1448 "equiv_type.m"
            else
#line 1447 "equiv_type.m"
              parse_tree__equiv_type__DeclStr_45 = (MR_String) "declaration";
#line 1453 "equiv_type.m"
            if ((*parse_tree__equiv_type__MaybePredOrFunc_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1452 "equiv_type.m"
              parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1453 "equiv_type.m"
            else
#line 1454 "equiv_type.m"
              {
#line 1454 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_62_62;
#line 1454 "equiv_type.m"
                MR_Word parse_tree__equiv_type__PredOrFunc_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__equiv_type__MaybePredOrFunc_27, (MR_Integer) 0)));

#line 1455 "equiv_type.m"
                {
#line 1455 "equiv_type.m"
                  parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1455 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_101));
#line 1455 "equiv_type.m"
                }
#line 1455 "equiv_type.m"
                {
#line 1455 "equiv_type.m"
                  parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 0) = ((MR_Box) (parse_tree__equiv_type__V_62_62));
#line 1455 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1455 "equiv_type.m"
                }
#line 1454 "equiv_type.m"
              }
#line 3436 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1457 "equiv_type.m"
            {
#line 1457 "equiv_type.m"
              parse_tree__equiv_type__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1457 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__DeclStr_45));
#line 1457 "equiv_type.m"
            }
#line 1457 "equiv_type.m"
            {
#line 1457 "equiv_type.m"
              parse_tree__equiv_type__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 0) = ((MR_Box) (parse_tree__equiv_type__V_68_68));
#line 1457 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[33])));
#line 1457 "equiv_type.m"
            }
#line 1457 "equiv_type.m"
            {
#line 1457 "equiv_type.m"
              parse_tree__equiv_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[31])));
#line 1457 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__V_67_67));
#line 1457 "equiv_type.m"
            }
#line 1458 "equiv_type.m"
            {
#line 1458 "equiv_type.m"
              parse_tree__equiv_type__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1458 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_20));
#line 1458 "equiv_type.m"
            }
#line 1459 "equiv_type.m"
            {
#line 1459 "equiv_type.m"
              parse_tree__equiv_type__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1459 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 0) = ((MR_Box) (parse_tree__equiv_type__V_76_76));
#line 1459 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[24])));
#line 1459 "equiv_type.m"
            }
#line 1459 "equiv_type.m"
            {
#line 1459 "equiv_type.m"
              parse_tree__equiv_type__V_86_86 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[26]));
            }
#line 1458 "equiv_type.m"
            {
#line 1458 "equiv_type.m"
              parse_tree__equiv_type__V_74_74 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_75_75, parse_tree__equiv_type__V_86_86);
            }
#line 1457 "equiv_type.m"
            {
#line 1457 "equiv_type.m"
              parse_tree__equiv_type__V_73_73 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, parse_tree__equiv_type__V_74_74);
            }
#line 1457 "equiv_type.m"
            {
#line 1457 "equiv_type.m"
              parse_tree__equiv_type__Pieces_47 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__V_73_73);
            }
#line 1461 "equiv_type.m"
            {
#line 1461 "equiv_type.m"
              parse_tree__equiv_type__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1461 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_94_94, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_47));
#line 1461 "equiv_type.m"
            }
#line 1461 "equiv_type.m"
            {
#line 1461 "equiv_type.m"
              parse_tree__equiv_type__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 0) = ((MR_Box) (parse_tree__equiv_type__V_94_94));
#line 1461 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1461 "equiv_type.m"
            }
#line 1461 "equiv_type.m"
            {
#line 1461 "equiv_type.m"
              parse_tree__equiv_type__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1461 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 0) = ((MR_Box) (parse_tree__equiv_type__Context_22));
#line 1461 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_93_93));
#line 1461 "equiv_type.m"
            }
#line 1462 "equiv_type.m"
            {
#line 1462 "equiv_type.m"
              parse_tree__equiv_type__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_48));
#line 1462 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1462 "equiv_type.m"
            }
#line 1462 "equiv_type.m"
            {
#line 1462 "equiv_type.m"
              parse_tree__equiv_type__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1462 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1462 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1462 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 2) = ((MR_Box) (parse_tree__equiv_type__V_98_98));
#line 1462 "equiv_type.m"
            }
#line 1463 "equiv_type.m"
            {
#line 1463 "equiv_type.m"
              MR_Word base;
#line 1463 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1463 "equiv_type.m"
              *parse_tree__equiv_type__Specs_33 = base;
#line 1463 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_49));
#line 1463 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1463 "equiv_type.m"
            }
#line 1463 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1463 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDet_0_50;
#line 1442 "equiv_type.m"
          }
#line 1416 "equiv_type.m"
      }
#line 1416 "equiv_type.m"
  }
#line 1402 "equiv_type.m"
}

#line 1569 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0_1(
#line 1569 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1569 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1569 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2)
#line 1569 "equiv_type.m"
{
#line 1569 "equiv_type.m"
  {
#line 1569 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1569 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_ExpandedItemSet_6;

#line 1569 "equiv_type.m"
    {
#line 1569 "equiv_type.m"
      parse_tree__equiv_type__record_expanded_item_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv1_ExpandedItemSet_6);
    }
#line 1569 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv1_ExpandedItemSet_6));
#line 1569 "equiv_type.m"
  }
#line 1569 "equiv_type.m"
}

#line 1265 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1265 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1265 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_12,
#line 1265 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_13,
#line 1265 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1265 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1265 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1265 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1265 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29)
#line 1265 "equiv_type.m"
{
#line 1293 "equiv_type.m"
  while (MR_TRUE)
#line 1293 "equiv_type.m"
    {
#line 1293 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 1293 "equiv_type.m"
      {
#line 1293 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Inst0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1293 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SymName_17;
#line 1293 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ArgInsts_18;
#line 1273 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_30_30;

#line 1273 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1273 "equiv_type.m"
          {
#line 1273 "equiv_type.m"
            parse_tree__equiv_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_11, (MR_Integer) 1)));
#line 1273 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 1273 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1273 "equiv_type.m"
              {
#line 1273 "equiv_type.m"
                parse_tree__equiv_type__SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 0)));
#line 1273 "equiv_type.m"
                parse_tree__equiv_type__ArgInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 1)));
#line 1273 "equiv_type.m"
              }
#line 1273 "equiv_type.m"
          }
#line 1293 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1274 "equiv_type.m"
          {
#line 1274 "equiv_type.m"
            MR_Word parse_tree__equiv_type__InstId_19;
#line 1274 "equiv_type.m"
            MR_Integer parse_tree__equiv_type__V_31_31;

#line 1274 "equiv_type.m"
            {
#line 1274 "equiv_type.m"
              parse_tree__equiv_type__V_31_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__equiv_type__ArgInsts_18);
            }
#line 1274 "equiv_type.m"
            {
#line 1274 "equiv_type.m"
              parse_tree__equiv_type__InstId_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_17));
#line 1274 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 1) = ((MR_Box) (parse_tree__equiv_type__V_31_31));
#line 1274 "equiv_type.m"
            }
#line 1276 "equiv_type.m"
            {
#line 1276 "equiv_type.m"
              parse_tree__equiv_type__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, ((MR_Box) (parse_tree__equiv_type__InstId_19)), parse_tree__equiv_type__ExpandedInstIds_13);
            }
#line 1279 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1278 "equiv_type.m"
              {
#line 1278 "equiv_type.m"
                *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1278 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1278 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1278 "equiv_type.m"
              }
#line 1279 "equiv_type.m"
            else
#line 1290 "equiv_type.m"
              {
#line 1290 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstParams_22;
#line 1290 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInst_23;
#line 1280 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstBody_20;
#line 1280 "equiv_type.m"
                MR_Box parse_tree__equiv_type__conv0_EqvInstBody_20;
#line 1281 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_21_21;

#line 1280 "equiv_type.m"
                {
#line 1280 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, parse_tree__equiv_type__EqvInstMap_12, ((MR_Box) (parse_tree__equiv_type__InstId_19)), &parse_tree__equiv_type__conv0_EqvInstBody_20);
                }
#line 1280 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1280 "equiv_type.m"
                  {
#line 1280 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstBody_20 = ((MR_Word) parse_tree__equiv_type__conv0_EqvInstBody_20);
#line 1280 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1280 "equiv_type.m"
                  }
#line 1280 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1280 "equiv_type.m"
                  {
#line 1281 "equiv_type.m"
                    parse_tree__equiv_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 0)));
#line 1281 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstParams_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 1)));
#line 1281 "equiv_type.m"
                    parse_tree__equiv_type__EqvInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 2)));
#line 1281 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1280 "equiv_type.m"
                  }
#line 1290 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1283 "equiv_type.m"
                  {
#line 1283 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__TypeInfo_12_51;
#line 1283 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Inst1_24;
#line 1283 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__InstIdItem_25;
#line 1283 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_32_32;
#line 1283 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;
#line 1283 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_35_35;
#line 1283 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_47_47;

#line 1283 "equiv_type.m"
                    {
#line 1283 "equiv_type.m"
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(parse_tree__equiv_type__EqvInstParams_22, parse_tree__equiv_type__ArgInsts_18, parse_tree__equiv_type__EqvInst_23, &parse_tree__equiv_type__Inst1_24);
                    }
#line 1284 "equiv_type.m"
                    {
#line 1284 "equiv_type.m"
                      parse_tree__equiv_type__InstIdItem_25 = recompilation__inst_id_to_item_name_1_f_0(parse_tree__equiv_type__InstId_19);
                    }
#line 1285 "equiv_type.m"
                    {
#line 1285 "equiv_type.m"
                      parse_tree__equiv_type__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1285 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1285 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 1) = ((MR_Box) (parse_tree__equiv_type__InstIdItem_25));
#line 1285 "equiv_type.m"
                    }
#line 1569 "equiv_type.m"
                    {
#line 1569 "equiv_type.m"
                      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1569 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[0]));
#line 1569 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0_1));
#line 1569 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1569 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 3) = ((MR_Box) (parse_tree__equiv_type__V_32_32));
#line 1569 "equiv_type.m"
                    }
#line 3811 "parse_tree.equiv_type.c"
                    parse_tree__equiv_type__TypeInfo_12_51 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[0];
#line 1569 "equiv_type.m"
                    {
#line 1569 "equiv_type.m"
                      mercury__maybe__map_maybe_3_p_0(parse_tree__equiv_type__TypeInfo_12_51, parse_tree__equiv_type__TypeInfo_12_51, parse_tree__equiv_type__V_47_47, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33);
                    }
#line 1287 "equiv_type.m"
                    {
#line 1287 "equiv_type.m"
                      parse_tree__equiv_type__V_35_35 = mercury__set__insert_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, parse_tree__equiv_type__ExpandedInstIds_13, ((MR_Box) (parse_tree__equiv_type__InstId_19)));
                    }
#line 1287 "equiv_type.m"
                    /* direct tailcall eliminated */
#line 1287 "equiv_type.m"
                    {
#line 1287 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__Inst0__tmp_copy_11 = parse_tree__equiv_type__Inst1_24;
#line 1287 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__ExpandedInstIds__tmp_copy_13 = parse_tree__equiv_type__V_35_35;
#line 1287 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;

#line 1287 "equiv_type.m"
                      parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26;
#line 1287 "equiv_type.m"
                      parse_tree__equiv_type__ExpandedInstIds_13 = parse_tree__equiv_type__ExpandedInstIds__tmp_copy_13;
#line 1287 "equiv_type.m"
                      parse_tree__equiv_type__Inst0_11 = parse_tree__equiv_type__Inst0__tmp_copy_11;
#line 1287 "equiv_type.m"
                    }
#line 1287 "equiv_type.m"
                    continue;
#line 1283 "equiv_type.m"
                  }
#line 1290 "equiv_type.m"
                else
#line 1291 "equiv_type.m"
                  {
#line 1291 "equiv_type.m"
                    *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1291 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1291 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1291 "equiv_type.m"
                  }
#line 1290 "equiv_type.m"
              }
#line 1274 "equiv_type.m"
          }
#line 1293 "equiv_type.m"
        else
#line 1294 "equiv_type.m"
          {
#line 1294 "equiv_type.m"
            *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1294 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1294 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1294 "equiv_type.m"
          }
#line 1293 "equiv_type.m"
      }
#line 1293 "equiv_type.m"
      break;
#line 1293 "equiv_type.m"
    }
#line 1265 "equiv_type.m"
}

#line 1255 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_10,
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_11,
#line 1255 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1255 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1255 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18)
#line 1255 "equiv_type.m"
{
#line 1261 "equiv_type.m"
  {
#line 1261 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 1262 "equiv_type.m"
    {
#line 1262 "equiv_type.m"
      parse_tree__equiv_type__V_19_19 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1262 "equiv_type.m"
    {
#line 1262 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__Inst0_10, parse_tree__equiv_type__EqvInstMap_11, parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__Inst_12, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);
#line 1262 "equiv_type.m"
      return;
    }
#line 1261 "equiv_type.m"
  }
#line 1255 "equiv_type.m"
}

#line 739 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 739 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 739 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 739 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 739 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 739 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 739 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 739 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 739 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 739 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 739 "equiv_type.m"
{
#line 746 "equiv_type.m"
  {
#line 746 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 746 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 746 "equiv_type.m"
      {
#line 746 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 746 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 746 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 746 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 746 "equiv_type.m"
      }
#line 746 "equiv_type.m"
    else
#line 749 "equiv_type.m"
      {
#line 749 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 749 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 749 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr_24;
#line 749 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_25;
#line 749 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38;
#line 749 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__AttrNum_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 0)));
#line 749 "equiv_type.m"
        MR_String parse_tree__equiv_type__AttrName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 1)));
#line 749 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 2)));
#line 749 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrMode_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 3)));
#line 749 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeSynthCall_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 4)));
#line 749 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TVarSet0_61;
#line 749 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType_62;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Changed_63;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type___TVarSet_64;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type___EquivTypeInfo_65;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_84_84;

#line 767 "equiv_type.m"
        {
#line 767 "equiv_type.m"
          parse_tree__equiv_type__TVarSet0_61 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
        }
#line 1092 "equiv_type.m"
        {
#line 1092 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0((MR_Integer) 0, parse_tree__equiv_type__HeadVar__3_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__AttrType0_58, &parse_tree__equiv_type__AttrType_62, &parse_tree__equiv_type___Changed_63, &parse_tree__equiv_type__V_84_84, parse_tree__equiv_type__TVarSet0_61, &parse_tree__equiv_type___TVarSet_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type___EquivTypeInfo_65, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38);
        }
#line 771 "equiv_type.m"
        {
#line 771 "equiv_type.m"
          parse_tree__equiv_type__Attr_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 771 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 0) = ((MR_Box) (parse_tree__equiv_type__AttrNum_56));
#line 771 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 1) = ((MR_Box) (parse_tree__equiv_type__AttrName_57));
#line 771 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 2) = ((MR_Box) (parse_tree__equiv_type__AttrType_62));
#line 771 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 3) = ((MR_Box) (parse_tree__equiv_type__AttrMode_59));
#line 771 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeSynthCall_60));
#line 771 "equiv_type.m"
        }
#line 752 "equiv_type.m"
        {
#line 752 "equiv_type.m"
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
#line 749 "equiv_type.m"
      }
#line 746 "equiv_type.m"
  }
#line 739 "equiv_type.m"
}

#line 708 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_95_108_105_115_116_95_95_91_52_93_95_48_10_p_0(
#line 708 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 708 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 708 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_3,
#line 708 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 708 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 708 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 708 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 708 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 708 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 708 "equiv_type.m"
{
#line 715 "equiv_type.m"
  {
#line 715 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 715 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 715 "equiv_type.m"
      {
#line 715 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 715 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 715 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 715 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 715 "equiv_type.m"
      }
#line 715 "equiv_type.m"
    else
#line 718 "equiv_type.m"
      {
#line 718 "equiv_type.m"
        MR_String parse_tree__equiv_type__Name_22;
#line 718 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec0_23;
#line 718 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 718 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec_25;
#line 718 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs_26;
#line 718 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 718 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_39_39;
#line 718 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40;
#line 718 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41;
#line 718 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42;
#line 718 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventNumber_59;
#line 718 "equiv_type.m"
        MR_String parse_tree__equiv_type__EventName_60;
#line 718 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventLineNumber_61;
#line 718 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_62;
#line 718 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SyntAttrNumOrder_63;
#line 718 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_64;

#line 717 "equiv_type.m"
        parse_tree__equiv_type__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 0)));
#line 717 "equiv_type.m"
        parse_tree__equiv_type__EventSpec0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 1)));
#line 732 "equiv_type.m"
        parse_tree__equiv_type__EventNumber_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 0)));
#line 732 "equiv_type.m"
        parse_tree__equiv_type__EventName_60 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 1)));
#line 732 "equiv_type.m"
        parse_tree__equiv_type__EventLineNumber_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 2)));
#line 732 "equiv_type.m"
        parse_tree__equiv_type__Attrs0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 3)));
#line 732 "equiv_type.m"
        parse_tree__equiv_type__SyntAttrNumOrder_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 4)));
#line 734 "equiv_type.m"
        {
#line 734 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__Attrs0_62, &parse_tree__equiv_type__Attrs_64, parse_tree__equiv_type__EqvMap_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9, &parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42);
        }
#line 736 "equiv_type.m"
        {
#line 736 "equiv_type.m"
          parse_tree__equiv_type__EventSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 736 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 0) = ((MR_Box) (parse_tree__equiv_type__EventNumber_59));
#line 736 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 1) = ((MR_Box) (parse_tree__equiv_type__EventName_60));
#line 736 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 2) = ((MR_Box) (parse_tree__equiv_type__EventLineNumber_61));
#line 736 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 3) = ((MR_Box) (parse_tree__equiv_type__Attrs_64));
#line 736 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 4) = ((MR_Box) (parse_tree__equiv_type__SyntAttrNumOrder_63));
#line 736 "equiv_type.m"
        }
#line 717 "equiv_type.m"
        {
#line 717 "equiv_type.m"
          parse_tree__equiv_type__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 717 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 0) = ((MR_Box) (parse_tree__equiv_type__Name_22));
#line 717 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 1) = ((MR_Box) (parse_tree__equiv_type__EventSpec_25));
#line 717 "equiv_type.m"
        }
#line 721 "equiv_type.m"
        {
#line 721 "equiv_type.m"
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
#line 718 "equiv_type.m"
      }
#line 715 "equiv_type.m"
  }
#line 708 "equiv_type.m"
}

#line 571 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 571 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 571 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 571 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 571 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 571 "equiv_type.m"
{
#line 578 "equiv_type.m"
  {
#line 578 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 578 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_20;
#line 578 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma0_21;
#line 578 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_22;
#line 578 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_23;
#line 578 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma_41;

#line 578 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 579 "equiv_type.m"
    parse_tree__equiv_type__Origin_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 579 "equiv_type.m"
    parse_tree__equiv_type__Pragma0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 579 "equiv_type.m"
    parse_tree__equiv_type__Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 579 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 604 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Pragma0_21)) == (MR_mktag((MR_Integer) 2))))
#line 605 "equiv_type.m"
      {
#line 605 "equiv_type.m"
        MR_Word parse_tree__equiv_type__FPInfo0_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma0_21, (MR_Integer) 0)));
#line 605 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 0)));
#line 605 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 1)));
#line 605 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 2)));
#line 605 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ProcVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 3)));
#line 605 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ProcVarset_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 4)));
#line 605 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ProcInstVarset_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 5)));
#line 605 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ProcImpl_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 6)));
#line 605 "equiv_type.m"
        MR_Word parse_tree__equiv_type__UserSharing0_51;
#line 605 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_62;
#line 605 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemId_63;
#line 605 "equiv_type.m"
        MR_Word parse_tree__equiv_type__FPInfo_64;
#line 605 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 605 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104;
#line 605 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_108_108;
#line 605 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_109_109;
#line 625 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Sharing0_52;
#line 625 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Types0_54;
#line 625 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TVarset0_55;
#line 613 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeTypes0_53;
#line 613 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_101_101;

#line 609 "equiv_type.m"
        {
#line 609 "equiv_type.m"
          parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PName_44, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100);
        }
#line 611 "equiv_type.m"
        {
#line 611 "equiv_type.m"
          parse_tree__equiv_type__UserSharing0_51 = parse_tree__prog_data__get_user_annotated_sharing_1_f_0(parse_tree__equiv_type__Attrs0_43);
        }
#line 613 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__UserSharing0_51)) == (MR_mktag((MR_Integer) 1)));
#line 613 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 613 "equiv_type.m"
          {
#line 613 "equiv_type.m"
            parse_tree__equiv_type__Sharing0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 0)));
#line 613 "equiv_type.m"
            parse_tree__equiv_type__MaybeTypes0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 1)));
#line 614 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__MaybeTypes0_53)) == (MR_mktag((MR_Integer) 1)));
#line 614 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 614 "equiv_type.m"
              {
#line 614 "equiv_type.m"
                parse_tree__equiv_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes0_53, (MR_Integer) 0)));
#line 614 "equiv_type.m"
                parse_tree__equiv_type__Types0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 0)));
#line 614 "equiv_type.m"
                parse_tree__equiv_type__TVarset0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 1)));
#line 614 "equiv_type.m"
                parse_tree__equiv_type__succeeded = MR_TRUE;
#line 614 "equiv_type.m"
              }
#line 613 "equiv_type.m"
          }
#line 625 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 618 "equiv_type.m"
          {
#line 618 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Types_56;
#line 618 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TVarset_58;
#line 618 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Sharing_59;
#line 618 "equiv_type.m"
            MR_Word parse_tree__equiv_type__MaybeTypes_60;
#line 618 "equiv_type.m"
            MR_Word parse_tree__equiv_type__UserSharing_61;
#line 618 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102;
#line 618 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103;
#line 618 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_106_106;
#line 616 "equiv_type.m"
            MR_Word parse_tree__equiv_type___AnythingChanged_57;

#line 616 "equiv_type.m"
            {
#line 616 "equiv_type.m"
              parse_tree__equiv_type__replace_in_type_list_location_11_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__Types0_54, &parse_tree__equiv_type__Types_56, &parse_tree__equiv_type___AnythingChanged_57, parse_tree__equiv_type__TVarset0_55, &parse_tree__equiv_type__TVarset_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103);
            }
#line 619 "equiv_type.m"
            {
#line 619 "equiv_type.m"
              parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__Sharing0_52, &parse_tree__equiv_type__Sharing_59, parse_tree__equiv_type__TVarset0_55, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
            }
#line 622 "equiv_type.m"
            {
#line 622 "equiv_type.m"
              parse_tree__equiv_type__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 622 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 0) = ((MR_Box) (parse_tree__equiv_type__Types_56));
#line 622 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 1) = ((MR_Box) (parse_tree__equiv_type__TVarset_58));
#line 622 "equiv_type.m"
            }
#line 622 "equiv_type.m"
            {
#line 622 "equiv_type.m"
              parse_tree__equiv_type__MaybeTypes_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 622 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes_60, 0) = ((MR_Box) (parse_tree__equiv_type__V_106_106));
#line 622 "equiv_type.m"
            }
#line 623 "equiv_type.m"
            {
#line 623 "equiv_type.m"
              parse_tree__equiv_type__UserSharing_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 0) = ((MR_Box) (parse_tree__equiv_type__Sharing_59));
#line 623 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 1) = ((MR_Box) (parse_tree__equiv_type__MaybeTypes_60));
#line 623 "equiv_type.m"
            }
#line 624 "equiv_type.m"
            {
#line 624 "equiv_type.m"
              parse_tree__prog_data__set_user_annotated_sharing_3_p_0(parse_tree__equiv_type__UserSharing_61, parse_tree__equiv_type__Attrs0_43, &parse_tree__equiv_type__Attrs_62);
            }
#line 618 "equiv_type.m"
          }
#line 625 "equiv_type.m"
        else
#line 626 "equiv_type.m"
          {
#line 626 "equiv_type.m"
            parse_tree__equiv_type__Attrs_62 = parse_tree__equiv_type__Attrs0_43;
#line 626 "equiv_type.m"
            parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 626 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 626 "equiv_type.m"
          }
#line 628 "equiv_type.m"
        {
#line 628 "equiv_type.m"
          parse_tree__equiv_type__V_109_109 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_var_0, parse_tree__equiv_type__ProcVars_46);
        }
#line 628 "equiv_type.m"
        {
#line 628 "equiv_type.m"
          parse_tree__equiv_type__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 628 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 628 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (parse_tree__equiv_type__V_109_109));
#line 628 "equiv_type.m"
        }
#line 628 "equiv_type.m"
        {
#line 628 "equiv_type.m"
          parse_tree__equiv_type__ItemId_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 628 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 0) = ((MR_Box) ((MR_Integer) 9));
#line 628 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 628 "equiv_type.m"
        }
#line 630 "equiv_type.m"
        {
#line 630 "equiv_type.m"
          parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_63, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97);
        }
#line 633 "equiv_type.m"
        {
#line 633 "equiv_type.m"
          parse_tree__equiv_type__FPInfo_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 633 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 0) = ((MR_Box) (parse_tree__equiv_type__Attrs_62));
#line 633 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 1) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 633 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 2) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_45));
#line 633 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 3) = ((MR_Box) (parse_tree__equiv_type__ProcVars_46));
#line 633 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 4) = ((MR_Box) (parse_tree__equiv_type__ProcVarset_47));
#line 633 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 5) = ((MR_Box) (parse_tree__equiv_type__ProcInstVarset_48));
#line 633 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 6) = ((MR_Box) (parse_tree__equiv_type__ProcImpl_49));
#line 633 "equiv_type.m"
        }
#line 635 "equiv_type.m"
        {
#line 635 "equiv_type.m"
          parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 635 "equiv_type.m"
          MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (parse_tree__equiv_type__FPInfo_64));
#line 635 "equiv_type.m"
        }
#line 605 "equiv_type.m"
      }
#line 604 "equiv_type.m"
    else
#line 604 "equiv_type.m"
      if (((((MR_tag((MR_Word) parse_tree__equiv_type__Pragma0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_21, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 581 "equiv_type.m"
        {
#line 581 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeSpecInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_21, (MR_Integer) 1)));
#line 581 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 0)));
#line 581 "equiv_type.m"
          MR_Word parse_tree__equiv_type__NewName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 1)));
#line 581 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 2)));
#line 581 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PorF_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 3)));
#line 581 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 4)));
#line 581 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Subst0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 5)));
#line 581 "equiv_type.m"
          MR_Word parse_tree__equiv_type__VarSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 6)));
#line 581 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemIds0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 7)));
#line 581 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ExpandedItems0_34;
#line 581 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Subst_35;
#line 581 "equiv_type.m"
          MR_Word parse_tree__equiv_type__VarSet_36;
#line 581 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ExpandedItems_37;
#line 581 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemIds_38;
#line 581 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeSpecInfo_40;

#line 585 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 586 "equiv_type.m"
          if (!(parse_tree__equiv_type__succeeded))
#line 586 "equiv_type.m"
            {
#line 586 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_115_115;
#line 586 "equiv_type.m"
              MR_String parse_tree__equiv_type__V_33_33;

#line 586 "equiv_type.m"
              parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__PredName_25)) == (MR_mktag((MR_Integer) 1)));
#line 586 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 586 "equiv_type.m"
                {
#line 586 "equiv_type.m"
                  parse_tree__equiv_type__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 0)));
#line 586 "equiv_type.m"
                  parse_tree__equiv_type__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 1)));
#line 586 "equiv_type.m"
                  {
#line 586 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__V_115_115);
                  }
#line 586 "equiv_type.m"
                }
#line 586 "equiv_type.m"
            }
#line 590 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 589 "equiv_type.m"
            parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 590 "equiv_type.m"
          else
#line 591 "equiv_type.m"
            {
#line 591 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_111_111;

#line 591 "equiv_type.m"
              {
#line 591 "equiv_type.m"
                parse_tree__equiv_type__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 591 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 591 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 1) = ((MR_Box) (parse_tree__equiv_type__ItemIds0_32));
#line 591 "equiv_type.m"
              }
#line 591 "equiv_type.m"
              {
#line 591 "equiv_type.m"
                parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 591 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems0_34, 0) = ((MR_Box) (parse_tree__equiv_type__V_111_111));
#line 591 "equiv_type.m"
              }
#line 591 "equiv_type.m"
            }
#line 593 "equiv_type.m"
          {
#line 593 "equiv_type.m"
            parse_tree__equiv_type__replace_in_subst_10_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__Subst0_30, &parse_tree__equiv_type__Subst_35, parse_tree__equiv_type__VarSet0_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__ExpandedItems0_34, &parse_tree__equiv_type__ExpandedItems_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
          }
#line 598 "equiv_type.m"
          if ((parse_tree__equiv_type__ExpandedItems_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 597 "equiv_type.m"
            parse_tree__equiv_type__ItemIds_38 = parse_tree__equiv_type__ItemIds0_32;
#line 598 "equiv_type.m"
          else
#line 599 "equiv_type.m"
            {
#line 599 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems_37, (MR_Integer) 0)));
#line 599 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 0)));

#line 599 "equiv_type.m"
              parse_tree__equiv_type__ItemIds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 1)));
#line 599 "equiv_type.m"
            }
#line 601 "equiv_type.m"
          {
#line 601 "equiv_type.m"
            parse_tree__equiv_type__TypeSpecInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 601 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 601 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 1) = ((MR_Box) (parse_tree__equiv_type__NewName_26));
#line 601 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 2) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 601 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 3) = ((MR_Box) (parse_tree__equiv_type__PorF_28));
#line 601 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 4) = ((MR_Box) (parse_tree__equiv_type__Modes_29));
#line 601 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 5) = ((MR_Box) (parse_tree__equiv_type__Subst_35));
#line 601 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 6) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 601 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 7) = ((MR_Box) (parse_tree__equiv_type__ItemIds_38));
#line 601 "equiv_type.m"
          }
#line 603 "equiv_type.m"
          {
#line 603 "equiv_type.m"
            parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "equiv_type.m"
            MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 603 "equiv_type.m"
            MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 1) = ((MR_Box) (parse_tree__equiv_type__TypeSpecInfo_40));
#line 603 "equiv_type.m"
          }
#line 603 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 581 "equiv_type.m"
        }
#line 604 "equiv_type.m"
      else
#line 668 "equiv_type.m"
        {
#line 669 "equiv_type.m"
          parse_tree__equiv_type__Pragma_41 = parse_tree__equiv_type__Pragma0_21;
#line 669 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 669 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 668 "equiv_type.m"
        }
#line 671 "equiv_type.m"
    {
#line 671 "equiv_type.m"
      MR_Word base;
#line 671 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 671 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 671 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Origin_20));
#line 671 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Pragma_41));
#line 671 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Context_22));
#line 671 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__SeqNum_23));
#line 671 "equiv_type.m"
    }
#line 578 "equiv_type.m"
  }
#line 571 "equiv_type.m"
}

#line 857 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 857 "equiv_type.m"
{
#line 857 "equiv_type.m"
  {
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 857 "equiv_type.m"
  }
#line 857 "equiv_type.m"
}

#line 539 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 539 "equiv_type.m"
{
#line 546 "equiv_type.m"
  {
#line 546 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_81;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_20;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_21;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types0_22;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OriginalTypes_23;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstanceBody_24;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_25;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainingModuleName_26;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27;
#line 546 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_29;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_30;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet1_31;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors1_32;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types_33;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_36;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_37;
#line 546 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_38;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_39;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_49_49;
#line 546 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet1_31;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_UsedTypeCtors1_32;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_34_34;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_35_35;

#line 546 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 547 "equiv_type.m"
    parse_tree__equiv_type__Constraints0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 547 "equiv_type.m"
    parse_tree__equiv_type__ClassName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 547 "equiv_type.m"
    parse_tree__equiv_type__Types0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 547 "equiv_type.m"
    parse_tree__equiv_type__OriginalTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 547 "equiv_type.m"
    parse_tree__equiv_type__InstanceBody_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 547 "equiv_type.m"
    parse_tree__equiv_type__VarSet0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 547 "equiv_type.m"
    parse_tree__equiv_type__ContainingModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 547 "equiv_type.m"
    parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 547 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 8)));
#line 550 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "equiv_type.m"
    if (!(parse_tree__equiv_type__succeeded))
#line 551 "equiv_type.m"
      {
#line 551 "equiv_type.m"
        parse_tree__equiv_type__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__equiv_type__ContainingModuleName_26, parse_tree__equiv_type__ModuleName_12);
      }
#line 555 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 554 "equiv_type.m"
      parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 555 "equiv_type.m"
    else
#line 556 "equiv_type.m"
      {
#line 556 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_44_44;
#line 556 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 556 "equiv_type.m"
        {
#line 556 "equiv_type.m"
          parse_tree__equiv_type__V_45_45 = mercury__set__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0);
        }
#line 556 "equiv_type.m"
        {
#line 556 "equiv_type.m"
          parse_tree__equiv_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 556 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 556 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_45_45));
#line 556 "equiv_type.m"
        }
#line 556 "equiv_type.m"
        {
#line 556 "equiv_type.m"
          parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 556 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UsedTypeCtors0_29, 0) = ((MR_Box) (parse_tree__equiv_type__V_44_44));
#line 556 "equiv_type.m"
        }
#line 556 "equiv_type.m"
      }
#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 3) = ((MR_Box) (parse_tree__equiv_type__Location_13));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_14));
#line 857 "equiv_type.m"
    }
#line 4894 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_81, parse_tree__equiv_type__TypeCtorInfo_38_81, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_68_68, parse_tree__equiv_type__Constraints0_20, &parse_tree__equiv_type__Constraints_30, ((MR_Box) (parse_tree__equiv_type__VarSet0_25)), &parse_tree__equiv_type__conv6_VarSet1_31, ((MR_Box) (parse_tree__equiv_type__UsedTypeCtors0_29)), &parse_tree__equiv_type__conv5_UsedTypeCtors1_32, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
    }
#line 857 "equiv_type.m"
    parse_tree__equiv_type__VarSet1_31 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet1_31);
#line 857 "equiv_type.m"
    parse_tree__equiv_type__UsedTypeCtors1_32 = ((MR_Word) parse_tree__equiv_type__conv5_UsedTypeCtors1_32);
#line 857 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
#line 561 "equiv_type.m"
    {
#line 561 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__Types0_22, &parse_tree__equiv_type__Types_33, &parse_tree__equiv_type__V_34_34, &parse_tree__equiv_type__V_35_35, parse_tree__equiv_type__VarSet1_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__UsedTypeCtors1_32, &parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43);
    }
#line 565 "equiv_type.m"
    {
#line 565 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Types0_22, &parse_tree__equiv_type__Arity_38);
    }
#line 566 "equiv_type.m"
    {
#line 566 "equiv_type.m"
      parse_tree__equiv_type__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 566 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 566 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_38));
#line 566 "equiv_type.m"
    }
#line 566 "equiv_type.m"
    {
#line 566 "equiv_type.m"
      parse_tree__equiv_type__ItemId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 566 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 0) = ((MR_Box) ((MR_Integer) 4));
#line 566 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 566 "equiv_type.m"
    }
#line 567 "equiv_type.m"
    {
#line 567 "equiv_type.m"
      parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_39, parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41);
    }
#line 568 "equiv_type.m"
    {
#line 568 "equiv_type.m"
      MR_Word base;
#line 568 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 568 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 568 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Constraints_30));
#line 568 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 568 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Types_33));
#line 568 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__OriginalTypes_23));
#line 568 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__InstanceBody_24));
#line 568 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 568 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__ContainingModuleName_26));
#line 568 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 568 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 568 "equiv_type.m"
    }
#line 546 "equiv_type.m"
  }
#line 539 "equiv_type.m"
}

#line 471 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 471 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 471 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 471 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 471 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 471 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_44,
#line 471 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_45,
#line 471 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_46,
#line 471 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_47,
#line 471 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 471 "equiv_type.m"
{
#line 478 "equiv_type.m"
  {
#line 478 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_53_53;
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Det0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cond_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 478 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 8)));
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_30;
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_31;
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc_32;
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst_33;
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Det_34;
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_35;
#line 478 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes_36;
#line 478 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_48_48;

#line 481 "equiv_type.m"
    {
#line 481 "equiv_type.m"
      parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_23, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_44, &parse_tree__equiv_type__ExpandedItems0_30);
    }
#line 5044 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 483 "equiv_type.m"
    {
#line 483 "equiv_type.m"
      parse_tree__equiv_type__V_48_48 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_53_53, parse_tree__equiv_type__Modes0_24);
    }
#line 483 "equiv_type.m"
    {
#line 483 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__PredName_23, parse_tree__equiv_type__V_48_48, parse_tree__equiv_type__Context_28, (MR_Integer) 1, parse_tree__equiv_type__EqvInstMap_15, &parse_tree__equiv_type__ExtraModes_31, parse_tree__equiv_type__MaybePredOrFunc0_22, &parse_tree__equiv_type__MaybePredOrFunc_32, parse_tree__equiv_type__WithInst0_25, &parse_tree__equiv_type__WithInst_33, parse_tree__equiv_type__Det0_26, &parse_tree__equiv_type__Det_34, parse_tree__equiv_type__ExpandedItems0_30, &parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_47, parse_tree__equiv_type__Specs_20);
    }
#line 490 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraModes_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "equiv_type.m"
      parse_tree__equiv_type__Modes_36 = parse_tree__equiv_type__Modes0_24;
#line 490 "equiv_type.m"
    else
#line 492 "equiv_type.m"
      {
#line 492 "equiv_type.m"
        parse_tree__equiv_type__Modes_36 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_53_53, parse_tree__equiv_type__Modes0_24, parse_tree__equiv_type__ExtraModes_31);
      }
#line 501 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybePredOrFunc_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 502 "equiv_type.m"
      *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_45 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_44;
#line 501 "equiv_type.m"
    else
#line 495 "equiv_type.m"
      {
#line 495 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc_32, (MR_Integer) 0)));
#line 495 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemType_40;
#line 495 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__Arity_41;
#line 495 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__OrigArity_42;
#line 495 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemId_43;
#line 495 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_51_51;

#line 496 "equiv_type.m"
        {
#line 496 "equiv_type.m"
          parse_tree__equiv_type__ItemType_40 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_39);
        }
#line 497 "equiv_type.m"
        {
#line 497 "equiv_type.m"
          mercury__list__length_2_p_0(parse_tree__equiv_type__TypeCtorInfo_53_53, parse_tree__equiv_type__Modes_36, &parse_tree__equiv_type__Arity_41);
        }
#line 498 "equiv_type.m"
        {
#line 498 "equiv_type.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_39, &parse_tree__equiv_type__OrigArity_42, parse_tree__equiv_type__Arity_41);
        }
#line 499 "equiv_type.m"
        {
#line 499 "equiv_type.m"
          parse_tree__equiv_type__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 499 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_51_51, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_23));
#line 499 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_51_51, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_42));
#line 499 "equiv_type.m"
        }
#line 499 "equiv_type.m"
        {
#line 499 "equiv_type.m"
          parse_tree__equiv_type__ItemId_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 499 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_43, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_40));
#line 499 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_43, 1) = ((MR_Box) (parse_tree__equiv_type__V_51_51));
#line 499 "equiv_type.m"
        }
#line 500 "equiv_type.m"
        {
#line 500 "equiv_type.m"
          parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_43, parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_44, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_45);
        }
#line 495 "equiv_type.m"
      }
#line 504 "equiv_type.m"
    {
#line 504 "equiv_type.m"
      MR_Word base;
#line 504 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 504 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 504 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_21));
#line 504 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_32));
#line 504 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__PredName_23));
#line 504 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Modes_36));
#line 504 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__WithInst_33));
#line 504 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Det_34));
#line 504 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Cond_27));
#line 504 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__Context_28));
#line 504 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__SeqNum_29));
#line 504 "equiv_type.m"
    }
#line 478 "equiv_type.m"
  }
#line 471 "equiv_type.m"
}

#line 1365 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1365__1_1_f_0(
#line 1365 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_134)
#line 1365 "equiv_type.m"
{
#line 1365 "equiv_type.m"
  {
#line 1365 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1365 "equiv_type.m"
    MR_Word parse_tree__equiv_type__HeadVar__2_135;
#line 1365 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_134, (MR_Integer) 0)));
#line 1365 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Mode_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_134, (MR_Integer) 1)));

#line 1365 "equiv_type.m"
    {
#line 1365 "equiv_type.m"
      parse_tree__equiv_type__HeadVar__2_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_135, 0) = ((MR_Box) (parse_tree__equiv_type__Type_172));
#line 1365 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_135, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_173));
#line 1365 "equiv_type.m"
    }
#line 1365 "equiv_type.m"
    return parse_tree__equiv_type__HeadVar__2_135;
#line 1365 "equiv_type.m"
  }
#line 1365 "equiv_type.m"
}

#line 1358 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1358__1_1_f_0(
#line 1358 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_165)
#line 1358 "equiv_type.m"
{
#line 1358 "equiv_type.m"
  {
#line 1358 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1358 "equiv_type.m"
    MR_Word parse_tree__equiv_type__HeadVar__2_166;

#line 1358 "equiv_type.m"
    {
#line 1358 "equiv_type.m"
      parse_tree__equiv_type__HeadVar__2_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1358 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_166, 0) = ((MR_Box) (parse_tree__equiv_type__HeadVar__1_165));
#line 1358 "equiv_type.m"
    }
#line 1358 "equiv_type.m"
    return parse_tree__equiv_type__HeadVar__2_166;
#line 1358 "equiv_type.m"
  }
#line 1358 "equiv_type.m"
}

#line 166 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
#line 166 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 166 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 166 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 166 "equiv_type.m"
{
#line 166 "equiv_type.m"
  {
#line 166 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 166 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 166 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 166 "equiv_type.m"
    {
#line 166 "equiv_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__Cast_HeadVar1_4, parse_tree__equiv_type__Cast_HeadVar2_5);
#line 166 "equiv_type.m"
      return;
    }
#line 166 "equiv_type.m"
  }
#line 166 "equiv_type.m"
}

#line 166 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
#line 166 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 166 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 166 "equiv_type.m"
{
#line 5268 "parse_tree.equiv_type.c"
  {
#line 5270 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__HeadVar__2_1 == parse_tree__equiv_type__HeadVar__2_2);

#line 5273 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 5275 "parse_tree.equiv_type.c"
  }
#line 166 "equiv_type.m"
}

#line 1555 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type____Compare____expanded_item_set_0_0(
#line 1555 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 1555 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1555 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 1555 "equiv_type.m"
{
#line 1555 "equiv_type.m"
  {
#line 1555 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1555 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 1555 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 1555 "equiv_type.m"
    {
#line 1555 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[0], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 1555 "equiv_type.m"
      return;
    }
#line 1555 "equiv_type.m"
  }
#line 1555 "equiv_type.m"
}

#line 1555 "equiv_type.m"
MR_bool MR_CALL 
parse_tree__equiv_type____Unify____expanded_item_set_0_0(
#line 1555 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1555 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 1555 "equiv_type.m"
{
#line 1555 "equiv_type.m"
  {
#line 1555 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1555 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 1555 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 1555 "equiv_type.m"
    {
#line 1555 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[0], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 1555 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 1555 "equiv_type.m"
  }
#line 1555 "equiv_type.m"
}

#line 129 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_location_0_0(
#line 129 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 129 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 129 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 129 "equiv_type.m"
{
#line 129 "equiv_type.m"
  {
#line 129 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 129 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 129 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 129 "equiv_type.m"
    {
#line 129 "equiv_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__Cast_HeadVar1_4, parse_tree__equiv_type__Cast_HeadVar2_5);
#line 129 "equiv_type.m"
      return;
    }
#line 129 "equiv_type.m"
  }
#line 129 "equiv_type.m"
}

#line 129 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_location_0_0(
#line 129 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 129 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 129 "equiv_type.m"
{
#line 5383 "parse_tree.equiv_type.c"
  {
#line 5385 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__HeadVar__2_1 == parse_tree__equiv_type__HeadVar__2_2);

#line 5388 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 5390 "parse_tree.equiv_type.c"
  }
#line 129 "equiv_type.m"
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
#line 5419 "parse_tree.equiv_type.c"
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
#line 5445 "parse_tree.equiv_type.c"
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
#line 5465 "parse_tree.equiv_type.c"
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

#line 5534 "parse_tree.equiv_type.c"
        {
#line 5536 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[2], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 82 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 82 "equiv_type.m"
          {
#line 5543 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[8];
#line 5545 "parse_tree.equiv_type.c"
            {
#line 5547 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 82 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 5552 "parse_tree.equiv_type.c"
              {
#line 5554 "parse_tree.equiv_type.c"
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

#line 164 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_map_0_0(
#line 164 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 164 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 164 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 164 "equiv_type.m"
{
#line 164 "equiv_type.m"
  {
#line 164 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 164 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 164 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 164 "equiv_type.m"
    {
#line 164 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[3], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 164 "equiv_type.m"
      return;
    }
#line 164 "equiv_type.m"
  }
#line 164 "equiv_type.m"
}

#line 164 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_map_0_0(
#line 164 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 164 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 164 "equiv_type.m"
{
#line 164 "equiv_type.m"
  {
#line 164 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 164 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 164 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 164 "equiv_type.m"
    {
#line 164 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[3], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 164 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 164 "equiv_type.m"
  }
#line 164 "equiv_type.m"
}

#line 157 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
#line 157 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 157 "equiv_type.m"
{
#line 157 "equiv_type.m"
  {
#line 157 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 157 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_12 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 157 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_13 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 157 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_12 == parse_tree__equiv_type__CastY_13);
#line 157 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 5716 "parse_tree.equiv_type.c"
      *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 157 "equiv_type.m"
    else
#line 157 "equiv_type.m"
      {
#line 157 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 157 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 157 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));
#line 157 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 157 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 157 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 2)));
#line 157 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_10_10;

#line 157 "equiv_type.m"
        {
#line 157 "equiv_type.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[6], &parse_tree__equiv_type__V_10_10, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
        }
#line 5742 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_10_10 == (MR_Integer) 0);
#line 157 "equiv_type.m"
        parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 157 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 157 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_10_10;
#line 157 "equiv_type.m"
        else
#line 157 "equiv_type.m"
          {
#line 157 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_11_11;

#line 157 "equiv_type.m"
            {
#line 157 "equiv_type.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[7], &parse_tree__equiv_type__V_11_11, ((MR_Box) (parse_tree__equiv_type__V_5_5)), ((MR_Box) (parse_tree__equiv_type__V_8_8)));
            }
#line 5762 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_11_11 == (MR_Integer) 0);
#line 157 "equiv_type.m"
            parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 157 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 157 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_11_11;
#line 157 "equiv_type.m"
            else
#line 157 "equiv_type.m"
              {
#line 157 "equiv_type.m"
                parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__V_6_6, parse_tree__equiv_type__V_9_9);
#line 157 "equiv_type.m"
                return;
              }
#line 157 "equiv_type.m"
          }
#line 157 "equiv_type.m"
      }
#line 157 "equiv_type.m"
  }
#line 157 "equiv_type.m"
}

#line 157 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 157 "equiv_type.m"
{
#line 157 "equiv_type.m"
  {
#line 157 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 157 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_9 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 157 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_10 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 157 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_9 == parse_tree__equiv_type__CastY_10);
#line 157 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 157 "equiv_type.m"
      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 157 "equiv_type.m"
    else
#line 157 "equiv_type.m"
      {
#line 157 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_12_12;
#line 157 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 157 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 157 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 2)));
#line 157 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 157 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 157 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));

#line 5831 "parse_tree.equiv_type.c"
        {
#line 5833 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[6], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 157 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 157 "equiv_type.m"
          {
#line 5840 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[7];
#line 5842 "parse_tree.equiv_type.c"
            {
#line 5844 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 157 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 5849 "parse_tree.equiv_type.c"
              {
#line 5851 "parse_tree.equiv_type.c"
                return parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__equiv_type__V_5_5, parse_tree__equiv_type__V_8_8);
              }
#line 157 "equiv_type.m"
          }
#line 157 "equiv_type.m"
      }
#line 157 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 157 "equiv_type.m"
  }
#line 157 "equiv_type.m"
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

#line 1571 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_2_3_p_0(
#line 1571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ItemId_4,
#line 1571 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedItemSet0_5,
#line 1571 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExpandedItemSet_6)
#line 1571 "equiv_type.m"
{
#line 1574 "equiv_type.m"
  {
#line 1574 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1574 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ExpandedItemSet0_5, (MR_Integer) 0)));
#line 1574 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Items0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ExpandedItemSet0_5, (MR_Integer) 1)));
#line 1574 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_4, (MR_Integer) 1)));
#line 1576 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_4, (MR_Integer) 0)));
#line 1577 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemName_10, (MR_Integer) 0)));
#line 1577 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_16_16;
#line 1577 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemName_10, (MR_Integer) 1)));
#line 1577 "equiv_type.m"
    MR_String parse_tree__equiv_type__V_11_11;

#line 1577 "equiv_type.m"
    parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 1577 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1577 "equiv_type.m"
      {
#line 1577 "equiv_type.m"
        parse_tree__equiv_type__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_14_14, (MR_Integer) 0)));
#line 1577 "equiv_type.m"
        parse_tree__equiv_type__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_14_14, (MR_Integer) 1)));
#line 1577 "equiv_type.m"
        {
#line 1577 "equiv_type.m"
          parse_tree__equiv_type__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__equiv_type__ModuleName_7, parse_tree__equiv_type__V_16_16);
        }
#line 1577 "equiv_type.m"
      }
#line 1580 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1579 "equiv_type.m"
      *parse_tree__equiv_type__ExpandedItemSet_6 = parse_tree__equiv_type__ExpandedItemSet0_5;
#line 1580 "equiv_type.m"
    else
#line 1581 "equiv_type.m"
      {
#line 1581 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Items_13;

#line 1581 "equiv_type.m"
        {
#line 1581 "equiv_type.m"
          mercury__set__insert_3_p_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0, ((MR_Box) (parse_tree__equiv_type__ItemId_4)), parse_tree__equiv_type__Items0_8, &parse_tree__equiv_type__Items_13);
        }
#line 1582 "equiv_type.m"
        {
#line 1582 "equiv_type.m"
          MR_Word base;
#line 1582 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1582 "equiv_type.m"
          *parse_tree__equiv_type__ExpandedItemSet_6 = base;
#line 1582 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_7));
#line 1582 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Items_13));
#line 1582 "equiv_type.m"
        }
#line 1581 "equiv_type.m"
      }
#line 1574 "equiv_type.m"
  }
#line 1571 "equiv_type.m"
}

#line 1569 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_3_p_0_1(
#line 1569 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1569 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1569 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2)
#line 1569 "equiv_type.m"
{
#line 1569 "equiv_type.m"
  {
#line 1569 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1569 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_ExpandedItemSet_6;

#line 1569 "equiv_type.m"
    {
#line 1569 "equiv_type.m"
      parse_tree__equiv_type__record_expanded_item_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv0_ExpandedItemSet_6);
    }
#line 1569 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv0_ExpandedItemSet_6));
#line 1569 "equiv_type.m"
  }
#line 1569 "equiv_type.m"
}

#line 1565 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__record_expanded_item_3_p_0(
#line 1565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item_4,
#line 1565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 1565 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7)
#line 1565 "equiv_type.m"
{
#line 1568 "equiv_type.m"
  {
#line 1568 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1568 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeInfo_12_12;
#line 1568 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_8_8;

#line 1569 "equiv_type.m"
    {
#line 1569 "equiv_type.m"
      parse_tree__equiv_type__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1569 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_8_8, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_7[0]));
#line 1569 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_8_8, 1) = ((MR_Box) (parse_tree__equiv_type__record_expanded_item_3_p_0_1));
#line 1569 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1569 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_8_8, 3) = ((MR_Box) (parse_tree__equiv_type__Item_4));
#line 1569 "equiv_type.m"
    }
#line 6077 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[0];
#line 1569 "equiv_type.m"
    {
#line 1569 "equiv_type.m"
      mercury__maybe__map_maybe_3_p_0(parse_tree__equiv_type__TypeInfo_12_12, parse_tree__equiv_type__TypeInfo_12_12, parse_tree__equiv_type__V_8_8, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7);
#line 1569 "equiv_type.m"
      return;
    }
#line 1568 "equiv_type.m"
  }
#line 1565 "equiv_type.m"
}

#line 1542 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1542 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1542 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 1542 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarset_3,
#line 1542 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1542 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1542 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 1542 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 1542 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__8_8,
#line 1542 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__9_9)
#line 1542 "equiv_type.m"
{
#line 1547 "equiv_type.m"
  {
#line 1547 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1547 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0))))
#line 1547 "equiv_type.m"
      {
#line 1547 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__4_4;
#line 1547 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__9_9 = parse_tree__equiv_type__HeadVar__8_8;
#line 1547 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6;
#line 1547 "equiv_type.m"
      }
#line 1547 "equiv_type.m"
    else
#line 1549 "equiv_type.m"
      {
#line 1549 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1549 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_26;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_29_29;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_30_30;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_51_51;

#line 1092 "equiv_type.m"
        {
#line 1092 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__EqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_25, &parse_tree__equiv_type__Type_26, &parse_tree__equiv_type__V_29_29, &parse_tree__equiv_type__V_51_51, parse_tree__equiv_type__TVarset_3, &parse_tree__equiv_type__V_30_30, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7, parse_tree__equiv_type__HeadVar__8_8, parse_tree__equiv_type__HeadVar__9_9);
        }
#line 1549 "equiv_type.m"
        {
#line 1549 "equiv_type.m"
          MR_Word base;
#line 1549 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1549 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_26));
#line 1549 "equiv_type.m"
        }
#line 1549 "equiv_type.m"
      }
#line 1547 "equiv_type.m"
  }
#line 1542 "equiv_type.m"
}

#line 1538 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1538 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1538 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1538 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1538 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1538 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1538 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1538 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1538 "equiv_type.m"
{
#line 1538 "equiv_type.m"
  {
#line 1538 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_HeadVar__5_5;
#line 1538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_7;
#line 1538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__9_9;

#line 1538 "equiv_type.m"
    {
#line 1538 "equiv_type.m"
      parse_tree__equiv_type__replace_in_unit_selector_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_HeadVar__5_5, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_7, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_HeadVar__9_9);
    }
#line 1538 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_HeadVar__5_5));
#line 1538 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_7));
#line 1538 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__9_9));
#line 1538 "equiv_type.m"
  }
#line 1538 "equiv_type.m"
}

#line 1517 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1517 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1517 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 1517 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarset_12,
#line 1517 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1517 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1517 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1517 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1517 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1517 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22)
#line 1517 "equiv_type.m"
{
#line 1524 "equiv_type.m"
  {
#line 1524 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1524 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_35_52;
#line 1524 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_35_80;
#line 1524 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Data10_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1524 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Data20_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1524 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Data1_15;
#line 1524 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Data2_16;
#line 1524 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1524 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24;
#line 1524 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data10_13, (MR_Integer) 1)));
#line 1524 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_39;
#line 1524 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_40_40;
#line 1524 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_66;
#line 1524 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_67;
#line 1537 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data10_13, (MR_Integer) 0)));
#line 1538 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1538 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24;
#line 1540 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_44_44;
#line 1540 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_45_45;
#line 1537 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_71_71;
#line 1538 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20;
#line 1538 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22;
#line 1540 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_72_72;
#line 1540 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_73_73;

#line 1538 "equiv_type.m"
    {
#line 1538 "equiv_type.m"
      parse_tree__equiv_type__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1538 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[1]));
#line 1538 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1));
#line 1538 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1538 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 3) = ((MR_Box) (parse_tree__equiv_type__Location_10));
#line 1538 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_11));
#line 1538 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 5) = ((MR_Box) (parse_tree__equiv_type__TVarset_12));
#line 1538 "equiv_type.m"
    }
#line 6308 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_35_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1538 "equiv_type.m"
    {
#line 1538 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_35_52, parse_tree__equiv_type__TypeCtorInfo_35_52, (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_40_40, parse_tree__equiv_type__Sel0_38, &parse_tree__equiv_type__Sel_39, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
    }
#line 1538 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23);
#line 1538 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
#line 1540 "equiv_type.m"
    parse_tree__equiv_type__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data10_13, (MR_Integer) 0)));
#line 1540 "equiv_type.m"
    parse_tree__equiv_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data10_13, (MR_Integer) 1)));
#line 1540 "equiv_type.m"
    {
#line 1540 "equiv_type.m"
      parse_tree__equiv_type__Data1_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1540 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data1_15, 0) = ((MR_Box) (parse_tree__equiv_type__V_44_44));
#line 1540 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data1_15, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_39));
#line 1540 "equiv_type.m"
    }
#line 1537 "equiv_type.m"
    parse_tree__equiv_type__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data20_14, (MR_Integer) 0)));
#line 1537 "equiv_type.m"
    parse_tree__equiv_type__Sel0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data20_14, (MR_Integer) 1)));
#line 6337 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_35_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1538 "equiv_type.m"
    {
#line 1538 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_35_80, parse_tree__equiv_type__TypeCtorInfo_35_80, (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_40_40, parse_tree__equiv_type__Sel0_66, &parse_tree__equiv_type__Sel_67, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
    }
#line 1538 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20);
#line 1538 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
#line 1540 "equiv_type.m"
    parse_tree__equiv_type__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data20_14, (MR_Integer) 0)));
#line 1540 "equiv_type.m"
    parse_tree__equiv_type__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data20_14, (MR_Integer) 1)));
#line 1540 "equiv_type.m"
    {
#line 1540 "equiv_type.m"
      parse_tree__equiv_type__Data2_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1540 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data2_16, 0) = ((MR_Box) (parse_tree__equiv_type__V_72_72));
#line 1540 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Data2_16, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_67));
#line 1540 "equiv_type.m"
    }
#line 1524 "equiv_type.m"
    {
#line 1524 "equiv_type.m"
      MR_Word base;
#line 1524 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1524 "equiv_type.m"
      *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1524 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Data1_15));
#line 1524 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Data2_16));
#line 1524 "equiv_type.m"
    }
#line 1524 "equiv_type.m"
  }
#line 1517 "equiv_type.m"
}

#line 1513 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1513 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1513 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1513 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1513 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1513 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1513 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1513 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1513 "equiv_type.m"
{
#line 1513 "equiv_type.m"
  {
#line 1513 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1513 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_HeadVar__5_5;
#line 1513 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20;
#line 1513 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22;

#line 1513 "equiv_type.m"
    {
#line 1513 "equiv_type.m"
      parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_HeadVar__5_5, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22);
    }
#line 1513 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_HeadVar__5_5));
#line 1513 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20));
#line 1513 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22));
#line 1513 "equiv_type.m"
  }
#line 1513 "equiv_type.m"
}

#line 1500 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1500 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1500 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 1500 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1500 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1500 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 1500 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 1500 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 1500 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 1500 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9)
#line 1500 "equiv_type.m"
{
#line 1505 "equiv_type.m"
  {
#line 1505 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1505 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1505 "equiv_type.m"
      {
#line 1505 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__4_4 = parse_tree__equiv_type__HeadVar__3_3;
#line 1505 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8;
#line 1505 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6;
#line 1505 "equiv_type.m"
      }
#line 1505 "equiv_type.m"
    else
#line 1505 "equiv_type.m"
      if (((MR_tag((MR_Word) parse_tree__equiv_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1512 "equiv_type.m"
        {
#line 1512 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeInfo_51_51;
#line 1512 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SharingPairs0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1512 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SharingPairs_34;
#line 1512 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_42_42;
#line 1513 "equiv_type.m"
          MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_7;
#line 1513 "equiv_type.m"
          MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_9;

#line 1513 "equiv_type.m"
          {
#line 1513 "equiv_type.m"
            parse_tree__equiv_type__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1513 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[0]));
#line 1513 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1));
#line 1513 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1513 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 3) = ((MR_Box) (parse_tree__equiv_type__Location_1));
#line 1513 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_2));
#line 1513 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 5) = ((MR_Box) (parse_tree__equiv_type__HeadVar__5_5));
#line 1513 "equiv_type.m"
          }
#line 6504 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__TypeInfo_51_51 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[2];
#line 1513 "equiv_type.m"
          {
#line 1513 "equiv_type.m"
            mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeInfo_51_51, parse_tree__equiv_type__TypeInfo_51_51, (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_42_42, parse_tree__equiv_type__SharingPairs0_33, &parse_tree__equiv_type__SharingPairs_34, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_7, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_9);
          }
#line 1513 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_7);
#line 1513 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_9);
#line 1512 "equiv_type.m"
          {
#line 1512 "equiv_type.m"
            MR_Word base;
#line 1512 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1512 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1512 "equiv_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SharingPairs_34));
#line 1512 "equiv_type.m"
          }
#line 1512 "equiv_type.m"
        }
#line 1505 "equiv_type.m"
      else
#line 1507 "equiv_type.m"
        {
#line 1507 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = parse_tree__equiv_type__HeadVar__3_3;
#line 1507 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8;
#line 1507 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6;
#line 1507 "equiv_type.m"
        }
#line 1505 "equiv_type.m"
  }
#line 1500 "equiv_type.m"
}

#line 1483 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tm_10_p_0(
#line 1483 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1483 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 1483 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1483 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1483 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 1483 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 1483 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 1483 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 1483 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 1483 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10)
#line 1483 "equiv_type.m"
{
#line 1489 "equiv_type.m"
  {
#line 1489 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1489 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1494 "equiv_type.m"
      {
#line 1494 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1494 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 1494 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_32;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_36_36;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_60_60;

#line 1092 "equiv_type.m"
        {
#line 1092 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__EqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_30, &parse_tree__equiv_type__Type_32, &parse_tree__equiv_type__V_36_36, &parse_tree__equiv_type__V_60_60, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 1494 "equiv_type.m"
        {
#line 1494 "equiv_type.m"
          MR_Word base;
#line 1494 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1494 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_32));
#line 1494 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_31));
#line 1494 "equiv_type.m"
        }
#line 1494 "equiv_type.m"
      }
#line 1489 "equiv_type.m"
    else
#line 1489 "equiv_type.m"
      {
#line 1489 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1489 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_14;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_18_18;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_79_79;

#line 1092 "equiv_type.m"
        {
#line 1092 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__EqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_13, &parse_tree__equiv_type__Type_14, &parse_tree__equiv_type__V_18_18, &parse_tree__equiv_type__V_79_79, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 1489 "equiv_type.m"
        {
#line 1489 "equiv_type.m"
          MR_Word base;
#line 1489 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1489 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1489 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_14));
#line 1489 "equiv_type.m"
        }
#line 1489 "equiv_type.m"
      }
#line 1489 "equiv_type.m"
  }
#line 1483 "equiv_type.m"
}

#line 1480 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0_1(
#line 1480 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1480 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1480 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1480 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1480 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1480 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1480 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1480 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1480 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 1480 "equiv_type.m"
{
#line 1480 "equiv_type.m"
  {
#line 1480 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1480 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_HeadVar__4_4;
#line 1480 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6;
#line 1480 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8;
#line 1480 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10;

#line 1480 "equiv_type.m"
    {
#line 1480 "equiv_type.m"
      parse_tree__equiv_type__replace_in_tm_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_HeadVar__4_4, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10);
    }
#line 1480 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_HeadVar__4_4));
#line 1480 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6));
#line 1480 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8));
#line 1480 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10));
#line 1480 "equiv_type.m"
  }
#line 1480 "equiv_type.m"
}

#line 1473 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0(
#line 1473 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 1473 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 1473 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17,
#line 1473 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TMs_18,
#line 1473 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1473 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1473 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1473 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1473 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1473 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 1473 "equiv_type.m"
{
#line 1479 "equiv_type.m"
  {
#line 1479 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 1479 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 1480 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 1480 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 1480 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 1480 "equiv_type.m"
    {
#line 1480 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1480 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[2]));
#line 1480 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_tms_10_p_0_1));
#line 1480 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1480 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 1480 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_12));
#line 1480 "equiv_type.m"
    }
#line 6759 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1480 "equiv_type.m"
    {
#line 1480 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17, parse_tree__equiv_type__STATE_VARIABLE_TMs_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 1480 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 1480 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 1480 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 1479 "equiv_type.m"
  }
#line 1473 "equiv_type.m"
}

#line 1365 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_2(
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
    MR_Word parse_tree__equiv_type__conv1_HeadVar__2_135;

#line 1365 "equiv_type.m"
    {
#line 1365 "equiv_type.m"
      parse_tree__equiv_type__conv1_HeadVar__2_135 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1365__1_1_f_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1));
    }
#line 1365 "equiv_type.m"
    parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv1_HeadVar__2_135));
#line 1365 "equiv_type.m"
    return parse_tree__equiv_type__wrapper_arg_2;
#line 1365 "equiv_type.m"
  }
#line 1365 "equiv_type.m"
}

#line 1358 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1358 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1358 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1)
#line 1358 "equiv_type.m"
{
#line 1358 "equiv_type.m"
  {
#line 1358 "equiv_type.m"
    MR_Box parse_tree__equiv_type__wrapper_arg_2;
#line 1358 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1358 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__2_166;

#line 1358 "equiv_type.m"
    {
#line 1358 "equiv_type.m"
      parse_tree__equiv_type__conv0_HeadVar__2_166 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1358__1_1_f_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1));
    }
#line 1358 "equiv_type.m"
    parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__2_166));
#line 1358 "equiv_type.m"
    return parse_tree__equiv_type__wrapper_arg_2;
#line 1358 "equiv_type.m"
  }
#line 1358 "equiv_type.m"
}

#line 1299 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_24,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_28,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_29,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Det_0_76,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Det_77,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79,
#line 1299 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81,
#line 1299 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_82)
#line 1299 "equiv_type.m"
{
#line 1314 "equiv_type.m"
  {
#line 1314 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_174_174;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes1_43;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypes_50;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_54;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModeSpecs_57;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypesAndModes_60;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93;
#line 1314 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_125_125;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_127_127;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129;
#line 1314 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1346 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_55_55;
#line 1346 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_56_56;

#line 1315 "equiv_type.m"
    {
#line 1315 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(parse_tree__equiv_type__Location_24, parse_tree__equiv_type__EqvMap_28, parse_tree__equiv_type__ClassContext0_30, parse_tree__equiv_type__ClassContext_31, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85);
    }
#line 1318 "equiv_type.m"
    {
#line 1318 "equiv_type.m"
      parse_tree__equiv_type__replace_in_tms_10_p_0(parse_tree__equiv_type__Location_24, parse_tree__equiv_type__EqvMap_28, parse_tree__equiv_type__TypesAndModes0_32, &parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88);
    }
#line 1340 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithType0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1341 "equiv_type.m"
      {
#line 1342 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1343 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1343 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75 = parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86;
#line 1343 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87;
#line 1343 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88;
#line 1341 "equiv_type.m"
      }
#line 1340 "equiv_type.m"
    else
#line 1321 "equiv_type.m"
      {
#line 1321 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType0_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithType0_35, (MR_Integer) 0)));
#line 1321 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_45;
#line 1322 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_46_46;
#line 1330 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1325 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_182_182;
#line 1325 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Purity_47;

#line 1322 "equiv_type.m"
        {
#line 1322 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_11_p_0(parse_tree__equiv_type__Location_24, parse_tree__equiv_type__EqvMap_28, parse_tree__equiv_type__WithType0_44, &parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type__V_46_46, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92);
        }
#line 1325 "equiv_type.m"
        {
#line 1325 "equiv_type.m"
          parse_tree__equiv_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type___Purity_47, &parse_tree__equiv_type__V_182_182, &parse_tree__equiv_type__ExtraTypesPrime_49);
        }
#line 1325 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1325 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_26 == parse_tree__equiv_type__V_182_182);
#line 1330 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1328 "equiv_type.m"
          {
#line 1328 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1329 "equiv_type.m"
            parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1328 "equiv_type.m"
          }
#line 1330 "equiv_type.m"
        else
#line 1331 "equiv_type.m"
          {
#line 1331 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces1_51;
#line 1331 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg1_52;
#line 1331 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec1_53;
#line 1331 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_96_96;
#line 1331 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_97_97;
#line 1331 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_98_98;
#line 1331 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_99_99;
#line 1331 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_100_100;
#line 1331 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_103_103;
#line 1331 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_105_105;
#line 1331 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_108_108;
#line 1331 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_116_116;
#line 1331 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_117_117;
#line 1331 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_121_121;

#line 1331 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1333 "equiv_type.m"
            {
#line 1333 "equiv_type.m"
              parse_tree__equiv_type__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1333 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_97_97, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1333 "equiv_type.m"
            }
#line 1333 "equiv_type.m"
            {
#line 1333 "equiv_type.m"
              parse_tree__equiv_type__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1333 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_99_99, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1333 "equiv_type.m"
            }
#line 1334 "equiv_type.m"
            {
#line 1334 "equiv_type.m"
              parse_tree__equiv_type__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__V_97_97));
#line 1334 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[13])));
#line 1334 "equiv_type.m"
            }
#line 1333 "equiv_type.m"
            {
#line 1333 "equiv_type.m"
              parse_tree__equiv_type__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_105_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[30])));
#line 1333 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_105_105, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 1333 "equiv_type.m"
            }
#line 1333 "equiv_type.m"
            {
#line 1333 "equiv_type.m"
              parse_tree__equiv_type__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_103_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1333 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_103_103, 1) = ((MR_Box) (parse_tree__equiv_type__V_105_105));
#line 1333 "equiv_type.m"
            }
#line 1333 "equiv_type.m"
            {
#line 1333 "equiv_type.m"
              parse_tree__equiv_type__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_100_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[29])));
#line 1333 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_100_100, 1) = ((MR_Box) (parse_tree__equiv_type__V_103_103));
#line 1333 "equiv_type.m"
            }
#line 1333 "equiv_type.m"
            {
#line 1333 "equiv_type.m"
              parse_tree__equiv_type__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 0) = ((MR_Box) (parse_tree__equiv_type__V_99_99));
#line 1333 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 1) = ((MR_Box) (parse_tree__equiv_type__V_100_100));
#line 1333 "equiv_type.m"
            }
#line 1332 "equiv_type.m"
            {
#line 1332 "equiv_type.m"
              parse_tree__equiv_type__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_96_96, 0) = ((MR_Box) (parse_tree__equiv_type__V_97_97));
#line 1332 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_96_96, 1) = ((MR_Box) (parse_tree__equiv_type__V_98_98));
#line 1332 "equiv_type.m"
            }
#line 1332 "equiv_type.m"
            {
#line 1332 "equiv_type.m"
              parse_tree__equiv_type__Pieces1_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[28])));
#line 1332 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 1) = ((MR_Box) (parse_tree__equiv_type__V_96_96));
#line 1332 "equiv_type.m"
            }
#line 1336 "equiv_type.m"
            {
#line 1336 "equiv_type.m"
              parse_tree__equiv_type__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1336 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_117_117, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces1_51));
#line 1336 "equiv_type.m"
            }
#line 1336 "equiv_type.m"
            {
#line 1336 "equiv_type.m"
              parse_tree__equiv_type__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_116_116, 0) = ((MR_Box) (parse_tree__equiv_type__V_117_117));
#line 1336 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1336 "equiv_type.m"
            }
#line 1336 "equiv_type.m"
            {
#line 1336 "equiv_type.m"
              parse_tree__equiv_type__Msg1_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1336 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1336 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 1) = ((MR_Box) (parse_tree__equiv_type__V_116_116));
#line 1336 "equiv_type.m"
            }
#line 1337 "equiv_type.m"
            {
#line 1337 "equiv_type.m"
              parse_tree__equiv_type__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1337 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_121_121, 0) = ((MR_Box) (parse_tree__equiv_type__Msg1_52));
#line 1337 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1337 "equiv_type.m"
            }
#line 1337 "equiv_type.m"
            {
#line 1337 "equiv_type.m"
              parse_tree__equiv_type__Spec1_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1337 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1337 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1337 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 2) = ((MR_Box) (parse_tree__equiv_type__V_121_121));
#line 1337 "equiv_type.m"
            }
#line 1338 "equiv_type.m"
            {
#line 1338 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1338 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, 0) = ((MR_Box) (parse_tree__equiv_type__Spec1_53));
#line 1338 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1338 "equiv_type.m"
            }
#line 1331 "equiv_type.m"
          }
#line 1321 "equiv_type.m"
      }
#line 7195 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_174_174 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1346 "equiv_type.m"
    {
#line 1346 "equiv_type.m"
      parse_tree__equiv_type__V_125_125 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes0_32);
    }
#line 1346 "equiv_type.m"
    {
#line 1346 "equiv_type.m"
      parse_tree__equiv_type__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_127_127, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1346 "equiv_type.m"
    }
#line 1346 "equiv_type.m"
    {
#line 1346 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__PredName_25, parse_tree__equiv_type__V_125_125, parse_tree__equiv_type__Context_27, (MR_Integer) 0, parse_tree__equiv_type__EqvInstMap_29, &parse_tree__equiv_type__ExtraModes_54, parse_tree__equiv_type__V_127_127, &parse_tree__equiv_type__V_55_55, parse_tree__equiv_type__MaybeWithInst0_37, &parse_tree__equiv_type__V_56_56, parse_tree__equiv_type__STATE_VARIABLE_Det_0_76, parse_tree__equiv_type__STATE_VARIABLE_Det_77, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81, &parse_tree__equiv_type__ModeSpecs_57);
    }
#line 1349 "equiv_type.m"
    {
#line 1349 "equiv_type.m"
      parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, parse_tree__equiv_type__ModeSpecs_57);
    }
#line 7220 "parse_tree.equiv_type.c"
    if ((parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7222 "parse_tree.equiv_type.c"
      if ((parse_tree__equiv_type__ExtraModes_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7224 "parse_tree.equiv_type.c"
        {
#line 1358 "equiv_type.m"
          {
#line 1358 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TypeCtorInfo_174_174, (MR_Word) &parse_tree__equiv_type_scalar_common_2[5], parse_tree__equiv_type__ExtraTypes_50);
          }
#line 1358 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1382 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1383 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7237 "parse_tree.equiv_type.c"
        }
#line 7239 "parse_tree.equiv_type.c"
      else
#line 7241 "parse_tree.equiv_type.c"
        {
#line 1362 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_132_132;
#line 1362 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_183_183;

#line 1362 "equiv_type.m"
          {
#line 1362 "equiv_type.m"
            parse_tree__equiv_type__V_132_132 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__ExtraTypes_50);
          }
#line 1362 "equiv_type.m"
          {
#line 1362 "equiv_type.m"
            parse_tree__equiv_type__V_183_183 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__equiv_type__ExtraModes_54);
          }
#line 1362 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_132_132 == parse_tree__equiv_type__V_183_183);
#line 7260 "parse_tree.equiv_type.c"
          if (parse_tree__equiv_type__succeeded)
#line 7262 "parse_tree.equiv_type.c"
            {
#line 7264 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__ExtraTypesModes_64;

#line 1363 "equiv_type.m"
              {
#line 1363 "equiv_type.m"
                mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__equiv_type__ExtraTypes_50, parse_tree__equiv_type__ExtraModes_54, &parse_tree__equiv_type__ExtraTypesModes_64);
              }
#line 1365 "equiv_type.m"
              {
#line 1365 "equiv_type.m"
                parse_tree__equiv_type__ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[1], parse_tree__equiv_type__TypeCtorInfo_174_174, (MR_Word) &parse_tree__equiv_type_scalar_common_2[6], parse_tree__equiv_type__ExtraTypesModes_64);
              }
#line 1365 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1382 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1383 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7283 "parse_tree.equiv_type.c"
            }
#line 7285 "parse_tree.equiv_type.c"
          else
#line 7287 "parse_tree.equiv_type.c"
            {
#line 7289 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Pieces2_66;
#line 7291 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Msg2_67;
#line 7293 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Spec2_68;
#line 7295 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_138_138;
#line 7297 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_139_139;
#line 7299 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_140_140;
#line 7301 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_141_141;
#line 7303 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_156_156;
#line 7305 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_157_157;
#line 7307 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_161_161;

#line 1370 "equiv_type.m"
              {
#line 1370 "equiv_type.m"
                parse_tree__equiv_type__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1370 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1370 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_139_139, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1370 "equiv_type.m"
              }
#line 1370 "equiv_type.m"
              {
#line 1370 "equiv_type.m"
                parse_tree__equiv_type__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1370 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1370 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_141_141, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1370 "equiv_type.m"
              }
#line 1370 "equiv_type.m"
              {
#line 1370 "equiv_type.m"
                parse_tree__equiv_type__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1370 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_140_140, 0) = ((MR_Box) (parse_tree__equiv_type__V_141_141));
#line 1370 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[20])));
#line 1370 "equiv_type.m"
              }
#line 1369 "equiv_type.m"
              {
#line 1369 "equiv_type.m"
                parse_tree__equiv_type__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_138_138, 0) = ((MR_Box) (parse_tree__equiv_type__V_139_139));
#line 1369 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_138_138, 1) = ((MR_Box) (parse_tree__equiv_type__V_140_140));
#line 1369 "equiv_type.m"
              }
#line 1369 "equiv_type.m"
              {
#line 1369 "equiv_type.m"
                parse_tree__equiv_type__Pieces2_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[28])));
#line 1369 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_66, 1) = ((MR_Box) (parse_tree__equiv_type__V_138_138));
#line 1369 "equiv_type.m"
              }
#line 1373 "equiv_type.m"
              {
#line 1373 "equiv_type.m"
                parse_tree__equiv_type__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1373 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_157_157, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces2_66));
#line 1373 "equiv_type.m"
              }
#line 1373 "equiv_type.m"
              {
#line 1373 "equiv_type.m"
                parse_tree__equiv_type__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 0) = ((MR_Box) (parse_tree__equiv_type__V_157_157));
#line 1373 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1373 "equiv_type.m"
              }
#line 1373 "equiv_type.m"
              {
#line 1373 "equiv_type.m"
                parse_tree__equiv_type__Msg2_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1373 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_67, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1373 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_67, 1) = ((MR_Box) (parse_tree__equiv_type__V_156_156));
#line 1373 "equiv_type.m"
              }
#line 1374 "equiv_type.m"
              {
#line 1374 "equiv_type.m"
                parse_tree__equiv_type__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1374 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_161_161, 0) = ((MR_Box) (parse_tree__equiv_type__Msg2_67));
#line 1374 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1374 "equiv_type.m"
              }
#line 1374 "equiv_type.m"
              {
#line 1374 "equiv_type.m"
                parse_tree__equiv_type__Spec2_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1374 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1374 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1374 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 2) = ((MR_Box) (parse_tree__equiv_type__V_161_161));
#line 1374 "equiv_type.m"
              }
#line 1375 "equiv_type.m"
              {
#line 1375 "equiv_type.m"
                MR_Word base;
#line 1375 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = base;
#line 1375 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec2_68));
#line 1375 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131));
#line 1375 "equiv_type.m"
              }
#line 1376 "equiv_type.m"
              parse_tree__equiv_type__ExtraTypesAndModes_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1388 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1389 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 7430 "parse_tree.equiv_type.c"
            }
#line 7432 "parse_tree.equiv_type.c"
        }
#line 7434 "parse_tree.equiv_type.c"
    else
#line 7436 "parse_tree.equiv_type.c"
      {
#line 1353 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypesAndModes_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1353 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1388 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1389 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 7446 "parse_tree.equiv_type.c"
      }
#line 1394 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraTypesAndModes_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1392 "equiv_type.m"
      {
#line 1393 "equiv_type.m"
        *parse_tree__equiv_type__TypesAndModes_33 = parse_tree__equiv_type__TypesAndModes1_43;
#line 1393 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129;
#line 1392 "equiv_type.m"
      }
#line 1394 "equiv_type.m"
    else
#line 1395 "equiv_type.m"
      {
#line 1395 "equiv_type.m"
        MR_Word parse_tree__equiv_type__OrigItemId_73;
#line 1395 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_167_167;
#line 1395 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_168_168;
#line 1395 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_169_169;

#line 1396 "equiv_type.m"
        {
#line 1396 "equiv_type.m"
          parse_tree__equiv_type__V_167_167 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_26);
        }
#line 1397 "equiv_type.m"
        {
#line 1397 "equiv_type.m"
          parse_tree__equiv_type__V_169_169 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes0_32);
        }
#line 1396 "equiv_type.m"
        {
#line 1396 "equiv_type.m"
          parse_tree__equiv_type__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1396 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_168_168, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1396 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_168_168, 1) = ((MR_Box) (parse_tree__equiv_type__V_169_169));
#line 1396 "equiv_type.m"
        }
#line 1396 "equiv_type.m"
        {
#line 1396 "equiv_type.m"
          parse_tree__equiv_type__OrigItemId_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1396 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_73, 0) = ((MR_Box) (parse_tree__equiv_type__V_167_167));
#line 1396 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_73, 1) = ((MR_Box) (parse_tree__equiv_type__V_168_168));
#line 1396 "equiv_type.m"
        }
#line 1398 "equiv_type.m"
        {
#line 1398 "equiv_type.m"
          parse_tree__equiv_type__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_73, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79);
        }
#line 1399 "equiv_type.m"
        {
#line 1399 "equiv_type.m"
          *parse_tree__equiv_type__TypesAndModes_33 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__ExtraTypesAndModes_60);
        }
#line 1395 "equiv_type.m"
      }
#line 1314 "equiv_type.m"
  }
#line 1299 "equiv_type.m"
}

#line 1189 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_19,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_20,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_45,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_46,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_47,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_48,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_49,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_50,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_51,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52,
#line 1189 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53,
#line 1189 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_54)
#line 1189 "equiv_type.m"
{
#line 1197 "equiv_type.m"
  {
#line 1197 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1197 "equiv_type.m"
    MR_Word parse_tree__equiv_type__AlreadyExpanded_32;
#line 1232 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Args0_34;
#line 1232 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Body0_35;
#line 1232 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Renaming_36;
#line 1232 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56;
#line 1204 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvVarSet_33;
#line 1204 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_55_55;
#line 1204 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv0_V_55_55;

#line 1198 "equiv_type.m"
    {
#line 1198 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21);
    }
#line 1200 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1199 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 1;
#line 1200 "equiv_type.m"
    else
#line 1201 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 0;
#line 1204 "equiv_type.m"
    {
#line 1204 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, parse_tree__equiv_type__EqvMap_20, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), &parse_tree__equiv_type__conv0_V_55_55);
    }
#line 1204 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1204 "equiv_type.m"
      {
#line 1204 "equiv_type.m"
        parse_tree__equiv_type__V_55_55 = ((MR_Word) parse_tree__equiv_type__conv0_V_55_55);
#line 1204 "equiv_type.m"
        parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1204 "equiv_type.m"
      }
#line 1204 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1204 "equiv_type.m"
      {
#line 1204 "equiv_type.m"
        parse_tree__equiv_type__EqvVarSet_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_55_55, (MR_Integer) 0)));
#line 1204 "equiv_type.m"
        parse_tree__equiv_type__Args0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_55_55, (MR_Integer) 1)));
#line 1204 "equiv_type.m"
        parse_tree__equiv_type__Body0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_55_55, (MR_Integer) 2)));
#line 1214 "equiv_type.m"
        {
#line 1214 "equiv_type.m"
          parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_49, parse_tree__equiv_type__EqvVarSet_33, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, &parse_tree__equiv_type__Renaming_36);
        }
#line 1216 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_Circ_0_47 == (MR_Integer) 0);
#line 1204 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1217 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__AlreadyExpanded_32 == (MR_Integer) 0);
#line 1204 "equiv_type.m"
      }
#line 1232 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1219 "equiv_type.m"
      {
#line 1219 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_71_71;
#line 1219 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_37;
#line 1219 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body1_38;
#line 1219 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorItem_39;
#line 1219 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst_40;
#line 1219 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body_41;
#line 1219 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 1219 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_59_59;
#line 1219 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60;
#line 1219 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_62_62;
#line 1229 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_42_42;

#line 1247 "equiv_type.m"
        if ((parse_tree__equiv_type__Location_19 == (MR_Integer) 2))
#line 1252 "equiv_type.m"
          {
#line 1252 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Name_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1252 "equiv_type.m"
            MR_Integer parse_tree__equiv_type__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1253 "equiv_type.m"
            {
#line 1253 "equiv_type.m"
              parse_tree__prog_data__add_sym_name_module_4_p_0((MR_Integer) 1, parse_tree__equiv_type__Name_84, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
            }
#line 1252 "equiv_type.m"
          }
#line 1247 "equiv_type.m"
        else
#line 1247 "equiv_type.m"
          if ((parse_tree__equiv_type__Location_19 == (MR_Integer) 1))
#line 1249 "equiv_type.m"
            {
#line 1249 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Name_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1249 "equiv_type.m"
              MR_Integer parse_tree__equiv_type__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1250 "equiv_type.m"
              {
#line 1250 "equiv_type.m"
                parse_tree__prog_data__add_sym_name_module_4_p_0((MR_Integer) 0, parse_tree__equiv_type__Name_77, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
              }
#line 1249 "equiv_type.m"
            }
#line 1247 "equiv_type.m"
          else
#line 1247 "equiv_type.m"
            parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53;
#line 1221 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_46 = (MR_Integer) 1;
#line 7698 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__TypeInfo_71_71 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[0];
#line 1222 "equiv_type.m"
        {
#line 1222 "equiv_type.m"
          mercury__map__apply_to_list_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__Args0_34, parse_tree__equiv_type__Renaming_36, &parse_tree__equiv_type__Args_37);
        }
#line 1223 "equiv_type.m"
        {
#line 1223 "equiv_type.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(parse_tree__equiv_type__Renaming_36, parse_tree__equiv_type__Body0_35, &parse_tree__equiv_type__Body1_38);
        }
#line 1224 "equiv_type.m"
        {
#line 1224 "equiv_type.m"
          parse_tree__equiv_type__TypeCtorItem_39 = recompilation__type_ctor_to_item_name_1_f_0(parse_tree__equiv_type__TypeCtor_23);
        }
#line 1225 "equiv_type.m"
        {
#line 1225 "equiv_type.m"
          parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1225 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1225 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__TypeCtorItem_39));
#line 1225 "equiv_type.m"
        }
#line 1225 "equiv_type.m"
        {
#line 1225 "equiv_type.m"
          parse_tree__equiv_type__record_expanded_item_3_p_0(parse_tree__equiv_type__V_59_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_51, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60);
        }
#line 1227 "equiv_type.m"
        {
#line 1227 "equiv_type.m"
          mercury__map__from_corresponding_lists_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Args_37, parse_tree__equiv_type__TArgs_24, &parse_tree__equiv_type__Subst_40);
        }
#line 1228 "equiv_type.m"
        {
#line 1228 "equiv_type.m"
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
#line 1229 "equiv_type.m"
        {
#line 1229 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_19, parse_tree__equiv_type__EqvMap_20, parse_tree__equiv_type__V_62_62, parse_tree__equiv_type__Body_41, parse_tree__equiv_type__Type_26, &parse_tree__equiv_type__V_42_42, parse_tree__equiv_type__STATE_VARIABLE_Circ_48, parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, parse_tree__equiv_type__STATE_VARIABLE_VarSet_50, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_54);
        }
#line 1219 "equiv_type.m"
      }
#line 1232 "equiv_type.m"
    else
#line 1240 "equiv_type.m"
      {
#line 1237 "equiv_type.m"
        if ((parse_tree__equiv_type__STATE_VARIABLE_Changed_0_45 == (MR_Integer) 0))
#line 1239 "equiv_type.m"
          *parse_tree__equiv_type__Type_26 = parse_tree__equiv_type__Type0_22;
#line 1237 "equiv_type.m"
        else
#line 1234 "equiv_type.m"
          {
#line 1234 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SymName_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1235 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___Arity_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1236 "equiv_type.m"
            {
#line 1236 "equiv_type.m"
              MR_Word base;
#line 1236 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "equiv_type.m"
              *parse_tree__equiv_type__Type_26 = base;
#line 1236 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_43));
#line 1236 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__TArgs_24));
#line 1236 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_25));
#line 1236 "equiv_type.m"
            }
#line 1234 "equiv_type.m"
          }
#line 1241 "equiv_type.m"
        {
#line 1241 "equiv_type.m"
          mercury__bool__or_3_p_0(parse_tree__equiv_type__AlreadyExpanded_32, parse_tree__equiv_type__STATE_VARIABLE_Circ_0_47, parse_tree__equiv_type__STATE_VARIABLE_Circ_48);
        }
#line 1241 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_54 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_53;
#line 1241 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_51;
#line 1241 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_50 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_49;
#line 1241 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_46 = parse_tree__equiv_type__STATE_VARIABLE_Changed_0_45;
#line 1240 "equiv_type.m"
      }
#line 1197 "equiv_type.m"
  }
#line 1189 "equiv_type.m"
}

#line 1098 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_2_13_p_0(
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_15,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52)
#line 1098 "equiv_type.m"
{
#line 1106 "equiv_type.m"
  {
#line 1106 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1106 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 2))))
#line 1121 "equiv_type.m"
      {
#line 1122 "equiv_type.m"
        *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1123 "equiv_type.m"
        *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1124 "equiv_type.m"
        *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1124 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1124 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1124 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1121 "equiv_type.m"
      }
#line 1106 "equiv_type.m"
    else
#line 1106 "equiv_type.m"
      if (((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 1))))
#line 1111 "equiv_type.m"
        {
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)));
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs_28;
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ArgsChanged_29;
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Circ0_30;
#line 1111 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__Arity_31;
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeCtor_32;
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72;
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73;
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74;
#line 1111 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Kind_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1112 "equiv_type.m"
          {
#line 1112 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__TArgs0_27, &parse_tree__equiv_type__TArgs_28, &parse_tree__equiv_type__ArgsChanged_29, (MR_Integer) 0, &parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74);
          }
#line 1115 "equiv_type.m"
          {
#line 1115 "equiv_type.m"
            parse_tree__equiv_type__Arity_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TArgs_28);
          }
#line 1116 "equiv_type.m"
          {
#line 1116 "equiv_type.m"
            parse_tree__equiv_type__TypeCtor_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_26));
#line 1116 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_31));
#line 1116 "equiv_type.m"
          }
#line 1117 "equiv_type.m"
          {
#line 1117 "equiv_type.m"
            parse_tree__equiv_type__replace_type_ctor_18_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Type0_17, parse_tree__equiv_type__TypeCtor_32, parse_tree__equiv_type__TArgs_28, parse_tree__equiv_type__Kind_78, parse_tree__equiv_type__Type_18, parse_tree__equiv_type__ArgsChanged_29, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
#line 1117 "equiv_type.m"
            return;
          }
#line 1111 "equiv_type.m"
        }
#line 1106 "equiv_type.m"
      else
#line 1106 "equiv_type.m"
        if (((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 0))))
#line 1106 "equiv_type.m"
          {
#line 1107 "equiv_type.m"
            *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1108 "equiv_type.m"
            *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1109 "equiv_type.m"
            *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1109 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1109 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1109 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1106 "equiv_type.m"
          }
#line 1106 "equiv_type.m"
        else
#line 1106 "equiv_type.m"
          if (((((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1164 "equiv_type.m"
            {
#line 1164 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1164 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1164 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1164 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_86;

#line 1165 "equiv_type.m"
              {
#line 1165 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_85, &parse_tree__equiv_type__Args_86, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1171 "equiv_type.m"
              if ((*parse_tree__equiv_type__Changed_19 == (MR_Integer) 0))
#line 1173 "equiv_type.m"
                *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1171 "equiv_type.m"
              else
#line 1170 "equiv_type.m"
                {
#line 1170 "equiv_type.m"
                  MR_Word base;
#line 1170 "equiv_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1170 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = base;
#line 1170 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1170 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Var_83));
#line 1170 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Args_86));
#line 1170 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Kind_84));
#line 1170 "equiv_type.m"
                }
#line 1164 "equiv_type.m"
            }
#line 1106 "equiv_type.m"
          else
#line 1106 "equiv_type.m"
            if (((((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1126 "equiv_type.m"
              {
#line 1126 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Args0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1126 "equiv_type.m"
                MR_Word parse_tree__equiv_type__MaybeRet0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1126 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Purity_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1126 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Args_38;
#line 1126 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ArgsCirc_39;
#line 1126 "equiv_type.m"
                MR_Word parse_tree__equiv_type__MaybeRet_44;
#line 1126 "equiv_type.m"
                MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1126 "equiv_type.m"
                MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1126 "equiv_type.m"
                MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1126 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ArgsChanged_79;

#line 1127 "equiv_type.m"
                {
#line 1127 "equiv_type.m"
                  parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_34, &parse_tree__equiv_type__Args_38, &parse_tree__equiv_type__ArgsChanged_79, (MR_Integer) 0, &parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67);
                }
#line 1138 "equiv_type.m"
                if ((parse_tree__equiv_type__MaybeRet0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1139 "equiv_type.m"
                  {
#line 1140 "equiv_type.m"
                    parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1141 "equiv_type.m"
                    *parse_tree__equiv_type__Changed_19 = parse_tree__equiv_type__ArgsChanged_79;
#line 1142 "equiv_type.m"
                    *parse_tree__equiv_type__Circ_20 = parse_tree__equiv_type__ArgsCirc_39;
#line 1142 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1142 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1142 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1139 "equiv_type.m"
                  }
#line 1138 "equiv_type.m"
                else
#line 1131 "equiv_type.m"
                  {
#line 1131 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Ret0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet0_35, (MR_Integer) 0)));
#line 1131 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Ret_41;
#line 1131 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__RetChanged_42;
#line 1131 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__RetCirc_43;

#line 1132 "equiv_type.m"
                    {
#line 1132 "equiv_type.m"
                      parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Ret0_40, &parse_tree__equiv_type__Ret_41, &parse_tree__equiv_type__RetChanged_42, &parse_tree__equiv_type__RetCirc_43, parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
                    }
#line 1135 "equiv_type.m"
                    {
#line 1135 "equiv_type.m"
                      parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "equiv_type.m"
                      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet_44, 0) = ((MR_Box) (parse_tree__equiv_type__Ret_41));
#line 1135 "equiv_type.m"
                    }
#line 1136 "equiv_type.m"
                    {
#line 1136 "equiv_type.m"
                      *parse_tree__equiv_type__Changed_19 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsChanged_79, parse_tree__equiv_type__RetChanged_42);
                    }
#line 1137 "equiv_type.m"
                    {
#line 1137 "equiv_type.m"
                      *parse_tree__equiv_type__Circ_20 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__RetCirc_43);
                    }
#line 1131 "equiv_type.m"
                  }
#line 1147 "equiv_type.m"
                if ((*parse_tree__equiv_type__Changed_19 == (MR_Integer) 0))
#line 1149 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1147 "equiv_type.m"
                else
#line 1146 "equiv_type.m"
                  {
#line 1146 "equiv_type.m"
                    MR_Word base;
#line 1146 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1146 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1146 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_38));
#line 1146 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeRet_44));
#line 1146 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Purity_36));
#line 1146 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 1146 "equiv_type.m"
                  }
#line 1126 "equiv_type.m"
              }
#line 1106 "equiv_type.m"
            else
#line 1106 "equiv_type.m"
              if (((((MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1176 "equiv_type.m"
                {
#line 1176 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RawType0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1176 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RawType_46;
#line 1176 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Kind_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1177 "equiv_type.m"
                  {
#line 1177 "equiv_type.m"
                    parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__RawType0_45, &parse_tree__equiv_type__RawType_46, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
                  }
#line 1183 "equiv_type.m"
                  if ((*parse_tree__equiv_type__Changed_19 == (MR_Integer) 0))
#line 1185 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1183 "equiv_type.m"
                  else
#line 1182 "equiv_type.m"
                    {
#line 1182 "equiv_type.m"
                      MR_Word base;
#line 1182 "equiv_type.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "equiv_type.m"
                      *parse_tree__equiv_type__Type_18 = base;
#line 1182 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1182 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__RawType_46));
#line 1182 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_87));
#line 1182 "equiv_type.m"
                    }
#line 1176 "equiv_type.m"
                }
#line 1106 "equiv_type.m"
              else
#line 1152 "equiv_type.m"
                {
#line 1152 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Kind_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1152 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Args0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1152 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Args_82;

#line 1153 "equiv_type.m"
                  {
#line 1153 "equiv_type.m"
                    parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_81, &parse_tree__equiv_type__Args_82, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
                  }
#line 1159 "equiv_type.m"
                  if ((*parse_tree__equiv_type__Changed_19 == (MR_Integer) 0))
#line 1161 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1159 "equiv_type.m"
                  else
#line 1158 "equiv_type.m"
                    {
#line 1158 "equiv_type.m"
                      MR_Word base;
#line 1158 "equiv_type.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "equiv_type.m"
                      *parse_tree__equiv_type__Type_18 = base;
#line 1158 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1158 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_82));
#line 1158 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_80));
#line 1158 "equiv_type.m"
                    }
#line 1152 "equiv_type.m"
                }
#line 1106 "equiv_type.m"
  }
#line 1098 "equiv_type.m"
}

#line 1085 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_11_p_0(
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26)
#line 1085 "equiv_type.m"
{
#line 1091 "equiv_type.m"
  {
#line 1091 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1092 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_20_20;

#line 1092 "equiv_type.m"
    {
#line 1092 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_12, parse_tree__equiv_type__EqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_14, parse_tree__equiv_type__Type_15, parse_tree__equiv_type__Changed_16, &parse_tree__equiv_type__V_20_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_22, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);
    }
#line 1091 "equiv_type.m"
  }
#line 1085 "equiv_type.m"
}

#line 1045 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 1045 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 1045 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13)
#line 1045 "equiv_type.m"
{
#line 1052 "equiv_type.m"
  {
#line 1052 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1052 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1052 "equiv_type.m"
      {
#line 1052 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1052 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12;
#line 1052 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10;
#line 1052 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_9 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8;
#line 1052 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Circ_7 = parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6;
#line 1052 "equiv_type.m"
      }
#line 1052 "equiv_type.m"
    else
#line 1056 "equiv_type.m"
      {
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg_34;
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_35;
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Name_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 0)));
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 1)));
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Width_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 2)));
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 3)));
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_44;
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_46;
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58;
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59;
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60;
#line 1056 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_64_64;
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 1058 "equiv_type.m"
        {
#line 1058 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Type0_41, &parse_tree__equiv_type__Type_44, &parse_tree__equiv_type__V_45_45, &parse_tree__equiv_type__ContainsCirc_46, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60);
        }
#line 1062 "equiv_type.m"
        if ((parse_tree__equiv_type__Width_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1063 "equiv_type.m"
          {
#line 1063 "equiv_type.m"
          }
#line 1062 "equiv_type.m"
        else
#line 1062 "equiv_type.m"
          if ((parse_tree__equiv_type__Width_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1061 "equiv_type.m"
            {
#line 1061 "equiv_type.m"
            }
#line 1062 "equiv_type.m"
          else
#line 1070 "equiv_type.m"
            {
#line 1068 "equiv_type.m"
              {
#line 1068 "equiv_type.m"
                parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__equiv_type__Type_44, parse_tree__equiv_type__Type0_41);
              }
#line 1070 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 1069 "equiv_type.m"
                {
#line 1069 "equiv_type.m"
                }
#line 1070 "equiv_type.m"
              else
#line 1071 "equiv_type.m"
                {
#line 1071 "equiv_type.m"
                  {
#line 1071 "equiv_type.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_ctor_arg_list_2\'/13", (MR_String) "changed type of packed argument");
#line 1071 "equiv_type.m"
                    return;
                  }
#line 1071 "equiv_type.m"
                }
#line 1070 "equiv_type.m"
            }
#line 1074 "equiv_type.m"
        {
#line 1074 "equiv_type.m"
          parse_tree__equiv_type__Arg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1074 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 0) = ((MR_Box) (parse_tree__equiv_type__Name_40));
#line 1074 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 1) = ((MR_Box) (parse_tree__equiv_type__Type_44));
#line 1074 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 2) = ((MR_Box) (parse_tree__equiv_type__Width_42));
#line 1074 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 3) = ((MR_Box) (parse_tree__equiv_type__Context_43));
#line 1074 "equiv_type.m"
        }
#line 1075 "equiv_type.m"
        {
#line 1075 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_64_64 = mercury__bool__or_2_f_0(parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6, parse_tree__equiv_type__ContainsCirc_46);
        }
#line 1076 "equiv_type.m"
        {
#line 1076 "equiv_type.m"
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
#line 1056 "equiv_type.m"
      }
#line 1052 "equiv_type.m"
  }
#line 1045 "equiv_type.m"
}

#line 1005 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1005 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1005 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 1005 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 1005 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 1005 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 1005 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 1005 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14)
#line 1005 "equiv_type.m"
{
#line 1011 "equiv_type.m"
  {
#line 1011 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1011 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1011 "equiv_type.m"
      {
#line 1011 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1011 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 1011 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13;
#line 1011 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11;
#line 1011 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_10 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9;
#line 1011 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__8_8 = parse_tree__equiv_type__HeadVar__7_7;
#line 1011 "equiv_type.m"
      }
#line 1011 "equiv_type.m"
    else
#line 1015 "equiv_type.m"
      {
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__T0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Ts0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__T_42;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed0_43;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_44;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Ts_45;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed1_46;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58;

#line 1016 "equiv_type.m"
        {
#line 1016 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__T0_34, &parse_tree__equiv_type__T_42, &parse_tree__equiv_type__Changed0_43, &parse_tree__equiv_type__ContainsCirc_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
        }
#line 1018 "equiv_type.m"
        {
#line 1018 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ContainsCirc_44, parse_tree__equiv_type__HeadVar__7_7);
        }
#line 1019 "equiv_type.m"
        {
#line 1019 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Ts0_35, &parse_tree__equiv_type__Ts_45, &parse_tree__equiv_type__Changed1_46, parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58, parse_tree__equiv_type__HeadVar__8_8, parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_VarSet_10, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);
        }
#line 1022 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed0_43 == (MR_Integer) 1);
#line 1023 "equiv_type.m"
        if (!(parse_tree__equiv_type__succeeded))
#line 1023 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed1_46 == (MR_Integer) 1);
#line 1028 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1026 "equiv_type.m"
          {
#line 1026 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 1;
#line 1027 "equiv_type.m"
            {
#line 1027 "equiv_type.m"
              MR_Word base;
#line 1027 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1027 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__T_42));
#line 1027 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Ts_45));
#line 1027 "equiv_type.m"
            }
#line 1026 "equiv_type.m"
          }
#line 1028 "equiv_type.m"
        else
#line 1029 "equiv_type.m"
          {
#line 1029 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 1030 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__4_4;
#line 1029 "equiv_type.m"
          }
#line 1015 "equiv_type.m"
      }
#line 1011 "equiv_type.m"
  }
#line 1005 "equiv_type.m"
}

#line 995 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 995 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 995 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 995 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 995 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 995 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 995 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 995 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 995 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 995 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 995 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 995 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 995 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 995 "equiv_type.m"
{
#line 1001 "equiv_type.m"
  {
#line 1001 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1002 "equiv_type.m"
    {
#line 1002 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21, parse_tree__equiv_type__STATE_VARIABLE_Ts_22, parse_tree__equiv_type__Changed_16, (MR_Integer) 0, parse_tree__equiv_type__ContainsCirc_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
#line 1002 "equiv_type.m"
      return;
    }
#line 1001 "equiv_type.m"
  }
#line 995 "equiv_type.m"
}

#line 984 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 984 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 984 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_13,
#line 984 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_20,
#line 984 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_21,
#line 984 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 984 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 984 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 984 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 984 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 984 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 984 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 984 "equiv_type.m"
{
#line 991 "equiv_type.m"
  {
#line 991 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 992 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 992 "equiv_type.m"
    {
#line 992 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_12, parse_tree__equiv_type__EqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Ts_0_20, parse_tree__equiv_type__STATE_VARIABLE_Ts_21, parse_tree__equiv_type__Changed_15, (MR_Integer) 0, &parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 991 "equiv_type.m"
  }
#line 984 "equiv_type.m"
}

#line 857 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 857 "equiv_type.m"
{
#line 857 "equiv_type.m"
  {
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 857 "equiv_type.m"
  }
#line 857 "equiv_type.m"
}

#line 964 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 964 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 964 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 964 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 964 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 964 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_24,
#line 964 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_25,
#line 964 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 964 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 964 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 964 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29)
#line 964 "equiv_type.m"
{
#line 972 "equiv_type.m"
  {
#line 972 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 972 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_84;
#line 972 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 972 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 972 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 2)));
#line 972 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Targs0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 3)));
#line 972 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Ctxt_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 4)));
#line 972 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_18;
#line 972 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Targs_19;
#line 972 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_30_30;
#line 972 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_31_31;
#line 972 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32_32;
#line 972 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_71_71;
#line 1042 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_25;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_27;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_29;

#line 1042 "equiv_type.m"
    {
#line 1042 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(parse_tree__equiv_type__Location_11, parse_tree__equiv_type__EqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Targs0_16, &parse_tree__equiv_type__Targs_19, (MR_Integer) 0, &parse_tree__equiv_type__V_23_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_24, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_30_30, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_31_31, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32_32);
    }
#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      parse_tree__equiv_type__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_71_71, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_71_71, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_10_p_0_1));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_71_71, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_71_71, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_12));
#line 857 "equiv_type.m"
    }
#line 8788 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_84, parse_tree__equiv_type__TypeCtorInfo_38_84, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_71_71, parse_tree__equiv_type__Constraints0_14, &parse_tree__equiv_type__Constraints_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_30_30)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_25, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_31_31)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_27, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32_32)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_29);
    }
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_25 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_25);
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_27);
#line 857 "equiv_type.m"
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
#line 972 "equiv_type.m"
  }
#line 964 "equiv_type.m"
}

#line 961 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 961 "equiv_type.m"
{
#line 961 "equiv_type.m"
  {
#line 961 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 961 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_HeadVar__4_4;
#line 961 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25;
#line 961 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27;
#line 961 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29;

#line 961 "equiv_type.m"
    {
#line 961 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_HeadVar__4_4, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29);
    }
#line 961 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_HeadVar__4_4));
#line 961 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25));
#line 961 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27));
#line 961 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29));
#line 961 "equiv_type.m"
  }
#line 961 "equiv_type.m"
}

#line 954 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 954 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 954 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 954 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 954 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 954 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 954 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 954 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 954 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 954 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 954 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 954 "equiv_type.m"
{
#line 960 "equiv_type.m"
  {
#line 960 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 961 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 961 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 961 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 961 "equiv_type.m"
    {
#line 961 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 961 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 961 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1));
#line 961 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 961 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 961 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_12));
#line 961 "equiv_type.m"
    }
#line 8936 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 961 "equiv_type.m"
    {
#line 961 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17, parse_tree__equiv_type__STATE_VARIABLE_Ctors_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 961 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 961 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 961 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 960 "equiv_type.m"
  }
#line 954 "equiv_type.m"
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
#line 938 "equiv_type.m"
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
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_32_32;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_61_61;

#line 940 "equiv_type.m"
        parse_tree__equiv_type__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 0)));
#line 940 "equiv_type.m"
        parse_tree__equiv_type__Type0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 1)));
#line 1092 "equiv_type.m"
        {
#line 1092 "equiv_type.m"
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
#line 945 "equiv_type.m"
        {
#line 945 "equiv_type.m"
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
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_47,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_48,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_51,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_52)
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
        MR_Word parse_tree__equiv_type__Cond_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 9)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Purity_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 10)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 11)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 12)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext_33;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypesAndModes_34;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeVarSet_35;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_36;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_37;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Det_38;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_39;

#line 903 "equiv_type.m"
        {
#line 903 "equiv_type.m"
          parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__Location_12, parse_tree__equiv_type__PredName_24, parse_tree__equiv_type__PredOrFunc_23, parse_tree__equiv_type__Context_32, parse_tree__equiv_type__EqvMap_13, parse_tree__equiv_type__EqvInstMap_14, parse_tree__equiv_type__ClassContext0_31, &parse_tree__equiv_type__ClassContext_33, parse_tree__equiv_type__TypesAndModes0_25, &parse_tree__equiv_type__TypesAndModes_34, parse_tree__equiv_type__TypeVarSet0_20, &parse_tree__equiv_type__TypeVarSet_35, parse_tree__equiv_type__WithType0_26, &parse_tree__equiv_type__WithType_36, parse_tree__equiv_type__WithInst0_27, &parse_tree__equiv_type__WithInst_37, parse_tree__equiv_type__Det0_28, &parse_tree__equiv_type__Det_38, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_47, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50, &parse_tree__equiv_type__NewSpecs_39);
        }
#line 908 "equiv_type.m"
        {
#line 908 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_52 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_39, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_51);
        }
#line 909 "equiv_type.m"
        {
#line 909 "equiv_type.m"
          MR_Word base;
#line 909 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
#line 909 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_35));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_21));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_22));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_23));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__PredName_24));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_34));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__WithType_36));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__WithInst_37));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__Det_38));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__Cond_29));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__Purity_30));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__ClassContext_33));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__equiv_type__Context_32));
#line 909 "equiv_type.m"
        }
#line 902 "equiv_type.m"
      }
#line 902 "equiv_type.m"
    else
#line 914 "equiv_type.m"
      {
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorInfo_71_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 1)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes0_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 3)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes_42;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc_43;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes_44;
#line 914 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_53_53;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__InstVarSet_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 0)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredName_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 2)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 4)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Det0_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 5)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Cond_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 6)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 7)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_67;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Det_68;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_69;

#line 915 "equiv_type.m"
        {
#line 915 "equiv_type.m"
          parse_tree__equiv_type__V_53_53 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_71_71, parse_tree__equiv_type__Modes0_41);
        }
#line 915 "equiv_type.m"
        {
#line 915 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__PredName_62, parse_tree__equiv_type__V_53_53, parse_tree__equiv_type__Context_66, (MR_Integer) 1, parse_tree__equiv_type__EqvInstMap_14, &parse_tree__equiv_type__ExtraModes_42, parse_tree__equiv_type__MaybePredOrFunc0_40, &parse_tree__equiv_type__MaybePredOrFunc_43, parse_tree__equiv_type__WithInst0_63, &parse_tree__equiv_type__WithInst_67, parse_tree__equiv_type__Det0_64, &parse_tree__equiv_type__Det_68, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_47, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50, &parse_tree__equiv_type__NewSpecs_69);
        }
#line 922 "equiv_type.m"
        if ((parse_tree__equiv_type__ExtraModes_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "equiv_type.m"
          parse_tree__equiv_type__Modes_44 = parse_tree__equiv_type__Modes0_41;
#line 922 "equiv_type.m"
        else
#line 924 "equiv_type.m"
          {
#line 924 "equiv_type.m"
            parse_tree__equiv_type__Modes_44 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_71_71, parse_tree__equiv_type__Modes0_41, parse_tree__equiv_type__ExtraModes_42);
          }
#line 926 "equiv_type.m"
        {
#line 926 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_52 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_69, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_51);
        }
#line 927 "equiv_type.m"
        {
#line 927 "equiv_type.m"
          MR_Word base;
#line 927 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 927 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_61));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_43));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__PredName_62));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__equiv_type__Modes_44));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (parse_tree__equiv_type__WithInst_67));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (parse_tree__equiv_type__Det_68));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (parse_tree__equiv_type__Cond_65));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (parse_tree__equiv_type__Context_66));
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
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_48;
#line 888 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_50;
#line 888 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_52;

#line 888 "equiv_type.m"
    {
#line 888 "equiv_type.m"
      parse_tree__equiv_type__replace_in_class_method_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Method_16, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_48, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_50, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_52);
    }
#line 888 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Method_16));
#line 888 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_48));
#line 888 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_50));
#line 888 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_52));
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
#line 9407 "parse_tree.equiv_type.c"
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
    MR_Word parse_tree__equiv_type__Ts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_13, (MR_Integer) 1)));
#line 872 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Ts_20;
#line 1002 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 1002 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_22_22;

#line 1002 "equiv_type.m"
    {
#line 1002 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_11, parse_tree__equiv_type__EqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Ts0_19, &parse_tree__equiv_type__Ts_20, &parse_tree__equiv_type__V_21_21, (MR_Integer) 0, &parse_tree__equiv_type__V_22_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
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
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Ts_20));
#line 876 "equiv_type.m"
    }
#line 872 "equiv_type.m"
  }
#line 866 "equiv_type.m"
}

#line 857 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 857 "equiv_type.m"
{
#line 857 "equiv_type.m"
  {
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 857 "equiv_type.m"
  }
#line 857 "equiv_type.m"
}

#line 850 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 850 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 850 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 850 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Cs_0_17,
#line 850 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Cs_18,
#line 850 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 850 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 850 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 850 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 850 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 850 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 850 "equiv_type.m"
{
#line 856 "equiv_type.m"
  {
#line 856 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 856 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 856 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_12));
#line 857 "equiv_type.m"
    }
#line 9599 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Cs_0_17, parse_tree__equiv_type__STATE_VARIABLE_Cs_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 856 "equiv_type.m"
  }
#line 850 "equiv_type.m"
}

#line 857 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 857 "equiv_type.m"
{
#line 857 "equiv_type.m"
  {
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 857 "equiv_type.m"
  }
#line 857 "equiv_type.m"
}

#line 836 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 836 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 836 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_12,
#line 836 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 836 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 836 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 836 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 836 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 836 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 836 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 836 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 836 "equiv_type.m"
{
#line 842 "equiv_type.m"
  {
#line 842 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 842 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_61;
#line 842 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 0)));
#line 842 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 1)));
#line 842 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_20;
#line 842 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_21;
#line 842 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28;
#line 842 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29;
#line 842 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30;
#line 842 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_48_48;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30;

#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      parse_tree__equiv_type__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_12));
#line 857 "equiv_type.m"
    }
#line 9741 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_61, parse_tree__equiv_type__TypeCtorInfo_38_61, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_48_48, parse_tree__equiv_type__UnivCs0_18, &parse_tree__equiv_type__UnivCs_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
    }
#line 857 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28);
#line 857 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29);
#line 857 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
#line 846 "equiv_type.m"
    {
#line 846 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(parse_tree__equiv_type__Location_11, parse_tree__equiv_type__EqvMap_12, parse_tree__equiv_type__ExistCs0_19, &parse_tree__equiv_type__ExistCs_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      MR_Word base;
#line 848 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 848 "equiv_type.m"
      *parse_tree__equiv_type__Cs_14 = base;
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_20));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_21));
#line 848 "equiv_type.m"
    }
#line 842 "equiv_type.m"
  }
#line 836 "equiv_type.m"
}

#line 815 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 815 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 815 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_2,
#line 815 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_3,
#line 815 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 815 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 815 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 815 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 815 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 815 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9)
#line 815 "equiv_type.m"
{
#line 821 "equiv_type.m"
  {
#line 821 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 821 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 821 "equiv_type.m"
      {
#line 821 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 821 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8;
#line 821 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6;
#line 821 "equiv_type.m"
      }
#line 821 "equiv_type.m"
    else
#line 824 "equiv_type.m"
      {
#line 824 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 824 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 824 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo_24;
#line 824 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos_25;
#line 824 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32;
#line 824 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33;

#line 825 "equiv_type.m"
        {
#line 825 "equiv_type.m"
          parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__EqvMap_2, parse_tree__equiv_type__EqvInstMap_3, parse_tree__equiv_type__MutableInfo0_22, &parse_tree__equiv_type__MutableInfo_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33);
        }
#line 827 "equiv_type.m"
        {
#line 827 "equiv_type.m"
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
#line 824 "equiv_type.m"
      }
#line 821 "equiv_type.m"
  }
#line 815 "equiv_type.m"
}

#line 774 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_15,
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_16,
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 774 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 774 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 774 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 774 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 774 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 774 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49)
#line 774 "equiv_type.m"
{
#line 784 "equiv_type.m"
  {
#line 784 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 784 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_18)) == (MR_mktag((MR_Integer) 0))))
#line 790 "equiv_type.m"
      {
#line 790 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EqPred_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 790 "equiv_type.m"
        MR_Word parse_tree__equiv_type__DirectArgFunctors_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 790 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeBody0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 790 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeBody_66;

#line 791 "equiv_type.m"
        {
#line 791 "equiv_type.m"
          parse_tree__equiv_type__replace_in_ctors_location_10_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__TypeBody0_65, &parse_tree__equiv_type__TypeBody_66, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
        }
#line 793 "equiv_type.m"
        *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 794 "equiv_type.m"
        {
#line 794 "equiv_type.m"
          MR_Word base;
#line 794 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 794 "equiv_type.m"
          *parse_tree__equiv_type__TypeDefn_19 = base;
#line 794 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_66));
#line 794 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__EqPred_27));
#line 794 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__DirectArgFunctors_28));
#line 794 "equiv_type.m"
        }
#line 790 "equiv_type.m"
      }
#line 784 "equiv_type.m"
    else
#line 784 "equiv_type.m"
      if (((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_18)) == (MR_mktag((MR_Integer) 1))))
#line 784 "equiv_type.m"
        {
#line 784 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 784 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody_25;
#line 784 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_60_60;
#line 785 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_26_26;

#line 785 "equiv_type.m"
          {
#line 785 "equiv_type.m"
            parse_tree__equiv_type__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 785 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "equiv_type.m"
          }
#line 785 "equiv_type.m"
          {
#line 785 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__V_60_60, parse_tree__equiv_type__TypeBody0_24, &parse_tree__equiv_type__TypeBody_25, &parse_tree__equiv_type__V_26_26, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
          }
#line 788 "equiv_type.m"
          {
#line 788 "equiv_type.m"
            MR_Word base;
#line 788 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 788 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = base;
#line 788 "equiv_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_25));
#line 788 "equiv_type.m"
          }
#line 784 "equiv_type.m"
        }
#line 784 "equiv_type.m"
      else
#line 784 "equiv_type.m"
        if (((((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 796 "equiv_type.m"
          {
#line 796 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SolverDetails0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 796 "equiv_type.m"
            MR_Word parse_tree__equiv_type__MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 796 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RepresentationType0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 0)));
#line 796 "equiv_type.m"
            MR_Word parse_tree__equiv_type__InitPred_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 1)));
#line 796 "equiv_type.m"
            MR_Word parse_tree__equiv_type__GroundInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 2)));
#line 796 "equiv_type.m"
            MR_Word parse_tree__equiv_type__AnyInst_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 3)));
#line 796 "equiv_type.m"
            MR_Word parse_tree__equiv_type__MutableInfos0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 4)));
#line 796 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RepresentationType_36;
#line 796 "equiv_type.m"
            MR_Word parse_tree__equiv_type__MutableInfos_38;
#line 796 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SolverDetails_39;
#line 796 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_50_50;
#line 796 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52;
#line 796 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 799 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_37_37;

#line 799 "equiv_type.m"
            {
#line 799 "equiv_type.m"
              parse_tree__equiv_type__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 799 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 799 "equiv_type.m"
            }
#line 799 "equiv_type.m"
            {
#line 799 "equiv_type.m"
              parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__V_50_50, parse_tree__equiv_type__RepresentationType0_31, &parse_tree__equiv_type__RepresentationType_36, &parse_tree__equiv_type__V_37_37, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53);
            }
#line 802 "equiv_type.m"
            {
#line 802 "equiv_type.m"
              parse_tree__equiv_type__replace_in_constraint_store_9_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__EqvMap_15, parse_tree__equiv_type__EqvInstMap_16, parse_tree__equiv_type__MutableInfos0_35, &parse_tree__equiv_type__MutableInfos_38, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
            }
#line 804 "equiv_type.m"
            {
#line 804 "equiv_type.m"
              parse_tree__equiv_type__SolverDetails_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 804 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 0) = ((MR_Box) (parse_tree__equiv_type__RepresentationType_36));
#line 804 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 1) = ((MR_Box) (parse_tree__equiv_type__InitPred_32));
#line 804 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 2) = ((MR_Box) (parse_tree__equiv_type__GroundInst_33));
#line 804 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 3) = ((MR_Box) (parse_tree__equiv_type__AnyInst_34));
#line 804 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 4) = ((MR_Box) (parse_tree__equiv_type__MutableInfos_38));
#line 804 "equiv_type.m"
            }
#line 806 "equiv_type.m"
            {
#line 806 "equiv_type.m"
              MR_Word base;
#line 806 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 806 "equiv_type.m"
              *parse_tree__equiv_type__TypeDefn_19 = base;
#line 806 "equiv_type.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 806 "equiv_type.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__SolverDetails_39));
#line 806 "equiv_type.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeUserEqComp_30));
#line 806 "equiv_type.m"
            }
#line 796 "equiv_type.m"
          }
#line 784 "equiv_type.m"
        else
#line 810 "equiv_type.m"
          {
#line 811 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = parse_tree__equiv_type__TypeDefn0_18;
#line 812 "equiv_type.m"
            *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 812 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_VarSet_45 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44;
#line 812 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46;
#line 812 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48;
#line 810 "equiv_type.m"
          }
#line 784 "equiv_type.m"
  }
#line 774 "equiv_type.m"
}

#line 690 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 690 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 690 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_11,
#line 690 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_12,
#line 690 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 690 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 690 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30,
#line 690 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31,
#line 690 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32,
#line 690 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33)
#line 690 "equiv_type.m"
{
#line 697 "equiv_type.m"
  {
#line 697 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 697 "equiv_type.m"
    MR_String parse_tree__equiv_type__MutName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 0)));
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 1)));
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InitValue_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 2)));
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 3)));
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Attrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 4)));
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Varset_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 5)));
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 6)));
#line 697 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 7)));
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TVarSet0_25;
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type_26;
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst_29;
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34;
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35;
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;
#line 1092 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TypeChanged_27;
#line 1092 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TVarSet_28;
#line 1092 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_53_53;

#line 700 "equiv_type.m"
    {
#line 700 "equiv_type.m"
      parse_tree__equiv_type__TVarSet0_25 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 1092 "equiv_type.m"
    {
#line 1092 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_10, parse_tree__equiv_type__EqvMap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_18, &parse_tree__equiv_type__Type_26, &parse_tree__equiv_type___TypeChanged_27, &parse_tree__equiv_type__V_53_53, parse_tree__equiv_type__TVarSet0_25, &parse_tree__equiv_type___TVarSet_28, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30, &parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35);
    }
#line 1262 "equiv_type.m"
    {
#line 1262 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1262 "equiv_type.m"
    {
#line 1262 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__Inst0_20, parse_tree__equiv_type__EqvInstMap_12, parse_tree__equiv_type__V_68_68, &parse_tree__equiv_type__Inst_29, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33);
    }
#line 705 "equiv_type.m"
    {
#line 705 "equiv_type.m"
      MR_Word base;
#line 705 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 705 "equiv_type.m"
      *parse_tree__equiv_type__Info_14 = base;
#line 705 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__MutName_17));
#line 705 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Type_26));
#line 705 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__InitValue_19));
#line 705 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Inst_29));
#line 705 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Attrs_21));
#line 705 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Varset_22));
#line 705 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_23));
#line 705 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_24));
#line 705 "equiv_type.m"
    }
#line 697 "equiv_type.m"
  }
#line 690 "equiv_type.m"
}

#line 673 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_info_11_p_0(
#line 673 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 673 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 673 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 673 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 673 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 673 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 673 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25,
#line 673 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_26,
#line 673 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 673 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28,
#line 673 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 673 "equiv_type.m"
{
#line 680 "equiv_type.m"
  {
#line 680 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 680 "equiv_type.m"
    MR_String parse_tree__equiv_type__MutName_20;
#line 680 "equiv_type.m"
    MR_Word parse_tree__equiv_type__QualName_21;
#line 680 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_22;
#line 680 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_23;
#line 680 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_24;
#line 680 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_31_31;
#line 681 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_34_34;
#line 681 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_35_35;
#line 681 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_36_36;
#line 681 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_37_37;
#line 681 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;
#line 681 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_39_39;
#line 681 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_40_40;

#line 680 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 681 "equiv_type.m"
    parse_tree__equiv_type__MutName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 681 "equiv_type.m"
    parse_tree__equiv_type__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 681 "equiv_type.m"
    parse_tree__equiv_type__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 681 "equiv_type.m"
    parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 681 "equiv_type.m"
    parse_tree__equiv_type__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 681 "equiv_type.m"
    parse_tree__equiv_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 681 "equiv_type.m"
    parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 681 "equiv_type.m"
    parse_tree__equiv_type__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 682 "equiv_type.m"
    {
#line 682 "equiv_type.m"
      parse_tree__equiv_type__QualName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_21, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 682 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_21, 1) = ((MR_Box) (parse_tree__equiv_type__MutName_20));
#line 682 "equiv_type.m"
    }
#line 683 "equiv_type.m"
    {
#line 683 "equiv_type.m"
      parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__QualName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25, &parse_tree__equiv_type__ExpandedItems0_22);
    }
#line 685 "equiv_type.m"
    {
#line 685 "equiv_type.m"
      parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__Info0_16, parse_tree__equiv_type__Info_17, parse_tree__equiv_type__ExpandedItems0_22, &parse_tree__equiv_type__ExpandedItems_23, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
    }
#line 687 "equiv_type.m"
    {
#line 687 "equiv_type.m"
      parse_tree__equiv_type__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 687 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_31_31, 0) = ((MR_Box) (parse_tree__equiv_type__QualName_21));
#line 687 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_31_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 687 "equiv_type.m"
    }
#line 687 "equiv_type.m"
    {
#line 687 "equiv_type.m"
      parse_tree__equiv_type__ItemId_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 687 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_24, 0) = ((MR_Box) ((MR_Integer) 8));
#line 687 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_24, 1) = ((MR_Box) (parse_tree__equiv_type__V_31_31));
#line 687 "equiv_type.m"
    }
#line 688 "equiv_type.m"
    {
#line 688 "equiv_type.m"
      parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_24, parse_tree__equiv_type__ExpandedItems_23, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_26);
#line 688 "equiv_type.m"
      return;
    }
#line 680 "equiv_type.m"
  }
#line 673 "equiv_type.m"
}

#line 857 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 857 "equiv_type.m"
{
#line 857 "equiv_type.m"
  {
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 857 "equiv_type.m"
  }
#line 857 "equiv_type.m"
}

#line 507 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 507 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 507 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 507 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 507 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 507 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 507 "equiv_type.m"
{
#line 514 "equiv_type.m"
  {
#line 514 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_77;
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__FunDeps_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 514 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 514 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_29;
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_30;
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_31;
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_32;
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems1_33;
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface_34;
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_35;
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_38;
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_47_47;
#line 514 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_64_64;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet_32;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_ExpandedItems1_33;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43;

#line 517 "equiv_type.m"
    {
#line 517 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[0], parse_tree__equiv_type__Vars_24, &parse_tree__equiv_type__Arity_29);
    }
#line 518 "equiv_type.m"
    {
#line 518 "equiv_type.m"
      parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__ClassName_23, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, &parse_tree__equiv_type__ExpandedItems0_30);
    }
#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      parse_tree__equiv_type__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 3) = ((MR_Box) (parse_tree__equiv_type__Location_13));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_14));
#line 857 "equiv_type.m"
    }
#line 10493 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_77, parse_tree__equiv_type__TypeCtorInfo_38_77, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__Constraints0_21, &parse_tree__equiv_type__Constraints_31, ((MR_Box) (parse_tree__equiv_type__VarSet0_26)), &parse_tree__equiv_type__conv6_VarSet_32, ((MR_Box) (parse_tree__equiv_type__ExpandedItems0_30)), &parse_tree__equiv_type__conv5_ExpandedItems1_33, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
    }
#line 857 "equiv_type.m"
    parse_tree__equiv_type__VarSet_32 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet_32);
#line 857 "equiv_type.m"
    parse_tree__equiv_type__ExpandedItems1_33 = ((MR_Word) parse_tree__equiv_type__conv5_ExpandedItems1_33);
#line 857 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
#line 528 "equiv_type.m"
    if ((parse_tree__equiv_type__ClassInterface0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 524 "equiv_type.m"
      {
#line 525 "equiv_type.m"
        parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "equiv_type.m"
        parse_tree__equiv_type__ExpandedItems_35 = parse_tree__equiv_type__ExpandedItems1_33;
#line 527 "equiv_type.m"
        *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 524 "equiv_type.m"
      }
#line 528 "equiv_type.m"
    else
#line 529 "equiv_type.m"
      {
#line 529 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface0_25, (MR_Integer) 0)));
#line 529 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods_37;

#line 530 "equiv_type.m"
        {
#line 530 "equiv_type.m"
          parse_tree__equiv_type__replace_in_class_interface_11_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__Methods0_36, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, &parse_tree__equiv_type__Methods_37, parse_tree__equiv_type__ExpandedItems1_33, &parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Specs_20);
        }
#line 532 "equiv_type.m"
        {
#line 532 "equiv_type.m"
          parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 532 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface_34, 0) = ((MR_Box) (parse_tree__equiv_type__Methods_37));
#line 532 "equiv_type.m"
        }
#line 529 "equiv_type.m"
      }
#line 534 "equiv_type.m"
    {
#line 534 "equiv_type.m"
      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 534 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_23));
#line 534 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_29));
#line 534 "equiv_type.m"
    }
#line 534 "equiv_type.m"
    {
#line 534 "equiv_type.m"
      parse_tree__equiv_type__ItemId_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 534 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 0) = ((MR_Box) ((MR_Integer) 4));
#line 534 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 1) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 534 "equiv_type.m"
    }
#line 535 "equiv_type.m"
    {
#line 535 "equiv_type.m"
      parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_38, parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40);
    }
#line 536 "equiv_type.m"
    {
#line 536 "equiv_type.m"
      MR_Word base;
#line 536 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 536 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Constraints_31));
#line 536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__FunDeps_22));
#line 536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__ClassName_23));
#line 536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Vars_24));
#line 536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__ClassInterface_34));
#line 536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_32));
#line 536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 536 "equiv_type.m"
    }
#line 514 "equiv_type.m"
  }
#line 507 "equiv_type.m"
}

#line 444 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_48,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_49,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_50,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_51,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 444 "equiv_type.m"
{
#line 451 "equiv_type.m"
  {
#line 451 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredOrFunc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 8)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Det0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 9)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cond_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 10)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Purity_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 11)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 12)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 13)));
#line 451 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 14)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_36;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext_37;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes_38;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet_39;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType_40;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst_41;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Det_42;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_43;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemType_44;
#line 451 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_45;
#line 451 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__OrigArity_46;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_47;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_53_53;

#line 455 "equiv_type.m"
    {
#line 455 "equiv_type.m"
      parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_26, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_48, &parse_tree__equiv_type__ExpandedItems0_36);
    }
#line 457 "equiv_type.m"
    {
#line 457 "equiv_type.m"
      parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__PredName_26, parse_tree__equiv_type__PredOrFunc_25, parse_tree__equiv_type__Context_34, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ClassContext0_33, &parse_tree__equiv_type__ClassContext_37, parse_tree__equiv_type__TypesAndModes0_27, &parse_tree__equiv_type__TypesAndModes_38, parse_tree__equiv_type__TypeVarSet0_22, &parse_tree__equiv_type__TypeVarSet_39, parse_tree__equiv_type__MaybeWithType0_28, &parse_tree__equiv_type__MaybeWithType_40, parse_tree__equiv_type__MaybeWithInst0_29, &parse_tree__equiv_type__MaybeWithInst_41, parse_tree__equiv_type__Det0_30, &parse_tree__equiv_type__Det_42, parse_tree__equiv_type__ExpandedItems0_36, &parse_tree__equiv_type__ExpandedItems_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_51, parse_tree__equiv_type__Specs_20);
    }
#line 462 "equiv_type.m"
    {
#line 462 "equiv_type.m"
      parse_tree__equiv_type__ItemType_44 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_25);
    }
#line 463 "equiv_type.m"
    {
#line 463 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__equiv_type__TypesAndModes_38, &parse_tree__equiv_type__Arity_45);
    }
#line 464 "equiv_type.m"
    {
#line 464 "equiv_type.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_25, &parse_tree__equiv_type__OrigArity_46, parse_tree__equiv_type__Arity_45);
    }
#line 465 "equiv_type.m"
    {
#line 465 "equiv_type.m"
      parse_tree__equiv_type__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 465 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_53_53, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_26));
#line 465 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_53_53, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_46));
#line 465 "equiv_type.m"
    }
#line 465 "equiv_type.m"
    {
#line 465 "equiv_type.m"
      parse_tree__equiv_type__ItemId_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 465 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_47, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_44));
#line 465 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_47, 1) = ((MR_Box) (parse_tree__equiv_type__V_53_53));
#line 465 "equiv_type.m"
    }
#line 466 "equiv_type.m"
    {
#line 466 "equiv_type.m"
      parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_47, parse_tree__equiv_type__ExpandedItems_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_48, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_49);
    }
#line 467 "equiv_type.m"
    {
#line 467 "equiv_type.m"
      MR_Word base;
#line 467 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 467 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 467 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Origin_21));
#line 467 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_39));
#line 467 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_23));
#line 467 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_24));
#line 467 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_25));
#line 467 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__PredName_26));
#line 467 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_38));
#line 467 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__MaybeWithType_40));
#line 467 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__MaybeWithInst_41));
#line 467 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__Det_42));
#line 467 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__Cond_31));
#line 467 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__Purity_32));
#line 467 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__equiv_type__ClassContext_37));
#line 467 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__equiv_type__Context_34));
#line 467 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (parse_tree__equiv_type__SeqNum_35));
#line 467 "equiv_type.m"
    }
#line 451 "equiv_type.m"
  }
#line 444 "equiv_type.m"
}

#line 408 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 408 "equiv_type.m"
{
#line 415 "equiv_type.m"
  {
#line 415 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeInfo_71_71 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[0];
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SymName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TArgs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cond_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 415 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 415 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_28;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_29;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn_30;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainsCirc_31;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_32;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_33;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_38;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_43_43;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_69_69;

#line 418 "equiv_type.m"
    {
#line 418 "equiv_type.m"
      mercury__list__length_2_p_0(parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__TArgs_23, &parse_tree__equiv_type__Arity_28);
    }
#line 419 "equiv_type.m"
    {
#line 419 "equiv_type.m"
      parse_tree__equiv_type__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__SymName_22, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, &parse_tree__equiv_type__UsedTypeCtors0_29);
    }
#line 421 "equiv_type.m"
    {
#line 421 "equiv_type.m"
      parse_tree__equiv_type__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 421 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_43_43, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_22));
#line 421 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_43_43, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_28));
#line 421 "equiv_type.m"
    }
#line 421 "equiv_type.m"
    {
#line 421 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_defn_13_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__V_43_43, parse_tree__equiv_type__TypeDefn0_24, &parse_tree__equiv_type__TypeDefn_30, &parse_tree__equiv_type__ContainsCirc_31, parse_tree__equiv_type__VarSet0_21, &parse_tree__equiv_type__VarSet_32, parse_tree__equiv_type__UsedTypeCtors0_29, &parse_tree__equiv_type__UsedTypeCtors_33, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42);
    }
#line 435 "equiv_type.m"
    if ((parse_tree__equiv_type__ContainsCirc_31 == (MR_Integer) 0))
#line 437 "equiv_type.m"
      *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 435 "equiv_type.m"
    else
#line 432 "equiv_type.m"
      {
#line 426 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_34_34;

#line 426 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_24)) == (MR_mktag((MR_Integer) 1)));
#line 426 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 426 "equiv_type.m"
          {
#line 426 "equiv_type.m"
            parse_tree__equiv_type__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_24, (MR_Integer) 0)));
#line 428 "equiv_type.m"
            {
#line 428 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Pieces_35;
#line 428 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Msg_36;
#line 428 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Spec_37;
#line 428 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_47_47;
#line 428 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_48_48;
#line 428 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_49_49;
#line 428 "equiv_type.m"
              MR_Integer parse_tree__equiv_type__V_50_50;
#line 428 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_57_57;
#line 428 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_58_58;
#line 428 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_62_62;

#line 428 "equiv_type.m"
              {
#line 428 "equiv_type.m"
                parse_tree__equiv_type__V_50_50 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__TArgs_23);
              }
#line 428 "equiv_type.m"
              {
#line 428 "equiv_type.m"
                parse_tree__equiv_type__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 428 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_22));
#line 428 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 1) = ((MR_Box) (parse_tree__equiv_type__V_50_50));
#line 428 "equiv_type.m"
              }
#line 428 "equiv_type.m"
              {
#line 428 "equiv_type.m"
                parse_tree__equiv_type__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 428 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 428 "equiv_type.m"
              }
#line 427 "equiv_type.m"
              {
#line 427 "equiv_type.m"
                parse_tree__equiv_type__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (parse_tree__equiv_type__V_48_48));
#line 427 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[11])));
#line 427 "equiv_type.m"
              }
#line 427 "equiv_type.m"
              {
#line 427 "equiv_type.m"
                parse_tree__equiv_type__Pieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[27])));
#line 427 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_35, 1) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 427 "equiv_type.m"
              }
#line 429 "equiv_type.m"
              {
#line 429 "equiv_type.m"
                parse_tree__equiv_type__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 429 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_58_58, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_35));
#line 429 "equiv_type.m"
              }
#line 429 "equiv_type.m"
              {
#line 429 "equiv_type.m"
                parse_tree__equiv_type__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_57_57, 0) = ((MR_Box) (parse_tree__equiv_type__V_58_58));
#line 429 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 429 "equiv_type.m"
              }
#line 429 "equiv_type.m"
              {
#line 429 "equiv_type.m"
                parse_tree__equiv_type__Msg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 429 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_36, 0) = ((MR_Box) (parse_tree__equiv_type__Context_26));
#line 429 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_36, 1) = ((MR_Box) (parse_tree__equiv_type__V_57_57));
#line 429 "equiv_type.m"
              }
#line 430 "equiv_type.m"
              {
#line 430 "equiv_type.m"
                parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_36));
#line 430 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 430 "equiv_type.m"
              }
#line 430 "equiv_type.m"
              {
#line 430 "equiv_type.m"
                parse_tree__equiv_type__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 430 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 430 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 430 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_37, 2) = ((MR_Box) (parse_tree__equiv_type__V_62_62));
#line 430 "equiv_type.m"
              }
#line 431 "equiv_type.m"
              {
#line 431 "equiv_type.m"
                MR_Word base;
#line 431 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "equiv_type.m"
                *parse_tree__equiv_type__Specs_20 = base;
#line 431 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_37));
#line 431 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 431 "equiv_type.m"
              }
#line 428 "equiv_type.m"
            }
#line 426 "equiv_type.m"
          }
#line 426 "equiv_type.m"
        else
#line 433 "equiv_type.m"
          {
#line 433 "equiv_type.m"
            {
#line 433 "equiv_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_type_defn_info\'/11", (MR_String) "invalid item");
#line 433 "equiv_type.m"
              return;
            }
#line 433 "equiv_type.m"
          }
#line 432 "equiv_type.m"
      }
#line 439 "equiv_type.m"
    {
#line 439 "equiv_type.m"
      parse_tree__equiv_type__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_69_69, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_22));
#line 439 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_69_69, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_28));
#line 439 "equiv_type.m"
    }
#line 439 "equiv_type.m"
    {
#line 439 "equiv_type.m"
      parse_tree__equiv_type__ItemId_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 0) = ((MR_Box) ((MR_Integer) 1));
#line 439 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 1) = ((MR_Box) (parse_tree__equiv_type__V_69_69));
#line 439 "equiv_type.m"
    }
#line 440 "equiv_type.m"
    {
#line 440 "equiv_type.m"
      parse_tree__equiv_type__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_38, parse_tree__equiv_type__UsedTypeCtors_33, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40);
    }
#line 441 "equiv_type.m"
    {
#line 441 "equiv_type.m"
      MR_Word base;
#line 441 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 441 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 441 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_32));
#line 441 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__SymName_22));
#line 441 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TArgs_23));
#line 441 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__TypeDefn_30));
#line 441 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Cond_25));
#line 441 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Context_26));
#line 441 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__SeqNum_27));
#line 441 "equiv_type.m"
    }
#line 415 "equiv_type.m"
  }
#line 408 "equiv_type.m"
}

#line 345 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
#line 345 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 345 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 345 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_14,
#line 345 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_15,
#line 345 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item0_16,
#line 345 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Item_17,
#line 345 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45,
#line 345 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46,
#line 345 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47,
#line 345 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48,
#line 345 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 345 "equiv_type.m"
{
#line 353 "equiv_type.m"
  {
#line 353 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 353 "equiv_type.m"
    if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 378 "equiv_type.m"
      {
#line 378 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemInstance0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 378 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemInstance_32;

#line 379 "equiv_type.m"
        {
#line 379 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__ItemInstance0_31, &parse_tree__equiv_type__ItemInstance_32, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
        }
#line 381 "equiv_type.m"
        {
#line 381 "equiv_type.m"
          MR_Word base;
#line 381 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "equiv_type.m"
          *parse_tree__equiv_type__Item_17 = base;
#line 381 "equiv_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 381 "equiv_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemInstance_32));
#line 381 "equiv_type.m"
        }
#line 378 "equiv_type.m"
      }
#line 353 "equiv_type.m"
    else
#line 353 "equiv_type.m"
      if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 363 "equiv_type.m"
        {
#line 363 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemModeDecl0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 363 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemModeDecl_26;

#line 364 "equiv_type.m"
          {
#line 364 "equiv_type.m"
            parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ItemModeDecl0_25, &parse_tree__equiv_type__ItemModeDecl_26, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
          }
#line 366 "equiv_type.m"
          {
#line 366 "equiv_type.m"
            MR_Word base;
#line 366 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "equiv_type.m"
            *parse_tree__equiv_type__Item_17 = base;
#line 366 "equiv_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 366 "equiv_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemModeDecl_26));
#line 366 "equiv_type.m"
          }
#line 363 "equiv_type.m"
        }
#line 353 "equiv_type.m"
      else
#line 353 "equiv_type.m"
        if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 388 "equiv_type.m"
          {
#line 391 "equiv_type.m"
            *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 392 "equiv_type.m"
            *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45;
#line 392 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47;
#line 388 "equiv_type.m"
          }
#line 353 "equiv_type.m"
        else
#line 353 "equiv_type.m"
          if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 383 "equiv_type.m"
            {
#line 383 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 383 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable_34;

#line 384 "equiv_type.m"
              {
#line 384 "equiv_type.m"
                parse_tree__equiv_type__replace_in_mutable_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ItemMutable0_33, &parse_tree__equiv_type__ItemMutable_34, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
              }
#line 386 "equiv_type.m"
              {
#line 386 "equiv_type.m"
                MR_Word base;
#line 386 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 386 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 386 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemMutable_34));
#line 386 "equiv_type.m"
              }
#line 383 "equiv_type.m"
            }
#line 353 "equiv_type.m"
          else
#line 353 "equiv_type.m"
            if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 368 "equiv_type.m"
              {
#line 368 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemPragma0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 368 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemPragma_28;

#line 369 "equiv_type.m"
                {
#line 369 "equiv_type.m"
                  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__ItemPragma0_27, &parse_tree__equiv_type__ItemPragma_28, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
                }
#line 371 "equiv_type.m"
                {
#line 371 "equiv_type.m"
                  MR_Word base;
#line 371 "equiv_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "equiv_type.m"
                  *parse_tree__equiv_type__Item_17 = base;
#line 371 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 371 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPragma_28));
#line 371 "equiv_type.m"
                }
#line 368 "equiv_type.m"
              }
#line 353 "equiv_type.m"
            else
#line 353 "equiv_type.m"
              if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 358 "equiv_type.m"
                {
#line 358 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__ItemPredDecl0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 358 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__ItemPredDecl_24;

#line 359 "equiv_type.m"
                  {
#line 359 "equiv_type.m"
                    parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ItemPredDecl0_23, &parse_tree__equiv_type__ItemPredDecl_24, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
                  }
#line 361 "equiv_type.m"
                  {
#line 361 "equiv_type.m"
                    MR_Word base;
#line 361 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "equiv_type.m"
                    *parse_tree__equiv_type__Item_17 = base;
#line 361 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 361 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPredDecl_24));
#line 361 "equiv_type.m"
                  }
#line 358 "equiv_type.m"
                }
#line 353 "equiv_type.m"
              else
#line 353 "equiv_type.m"
                if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 353 "equiv_type.m"
                  {
#line 353 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__ItemTypeDefn0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 353 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__ItemTypeDefn_22;

#line 354 "equiv_type.m"
                    {
#line 354 "equiv_type.m"
                      parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ItemTypeDefn0_21, &parse_tree__equiv_type__ItemTypeDefn_22, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
                    }
#line 356 "equiv_type.m"
                    {
#line 356 "equiv_type.m"
                      MR_Word base;
#line 356 "equiv_type.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "equiv_type.m"
                      *parse_tree__equiv_type__Item_17 = base;
#line 356 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 356 "equiv_type.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemTypeDefn_22));
#line 356 "equiv_type.m"
                    }
#line 353 "equiv_type.m"
                  }
#line 353 "equiv_type.m"
                else
#line 353 "equiv_type.m"
                  if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 373 "equiv_type.m"
                    {
#line 373 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__ItemTypeClass0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 373 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__ItemTypeClass_30;

#line 374 "equiv_type.m"
                      {
#line 374 "equiv_type.m"
                        parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_13, parse_tree__equiv_type__EqvMap_14, parse_tree__equiv_type__EqvInstMap_15, parse_tree__equiv_type__ItemTypeClass0_29, &parse_tree__equiv_type__ItemTypeClass_30, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48, parse_tree__equiv_type__Specs_20);
                      }
#line 376 "equiv_type.m"
                      {
#line 376 "equiv_type.m"
                        MR_Word base;
#line 376 "equiv_type.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "equiv_type.m"
                        *parse_tree__equiv_type__Item_17 = base;
#line 376 "equiv_type.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 376 "equiv_type.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemTypeClass_30));
#line 376 "equiv_type.m"
                      }
#line 373 "equiv_type.m"
                    }
#line 353 "equiv_type.m"
                  else
#line 403 "equiv_type.m"
                    {
#line 404 "equiv_type.m"
                      *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 405 "equiv_type.m"
                      *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 405 "equiv_type.m"
                      *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_46 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_45;
#line 405 "equiv_type.m"
                      *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_48 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_47;
#line 403 "equiv_type.m"
                    }
#line 353 "equiv_type.m"
  }
#line 345 "equiv_type.m"
}

#line 266 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_list_13_p_0(
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location0_2,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvMap_4,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EqvInstMap_5,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__6_6,
#line 266 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__7_7,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 266 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 266 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 266 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 266 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 266 "equiv_type.m"
{
#line 273 "equiv_type.m"
  while (MR_TRUE)
#line 273 "equiv_type.m"
    {
#line 273 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 273 "equiv_type.m"
      {
#line 273 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 273 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 273 "equiv_type.m"
          {
#line 273 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 273 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 273 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 273 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__7_7 = parse_tree__equiv_type__HeadVar__6_6;
#line 273 "equiv_type.m"
          }
#line 273 "equiv_type.m"
        else
#line 276 "equiv_type.m"
          {
#line 276 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 276 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Location_44;
#line 276 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item_71;
#line 276 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemSpecs_72;
#line 276 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_86_86;
#line 276 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_87_87;
#line 276 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88;
#line 276 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_89_89;

#line 309 "equiv_type.m"
            if (((MR_tag((MR_Word) parse_tree__equiv_type__Item0_32)) == (MR_mktag((MR_Integer) 2))))
#line 278 "equiv_type.m"
              {
#line 278 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemModuleDefn_40 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item0_32), (MR_Integer) 2);
#line 278 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ModuleDefn_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_40, (MR_Integer) 0)));
#line 279 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_40, (MR_Integer) 1)));
#line 279 "equiv_type.m"
                MR_Integer parse_tree__equiv_type___SeqNum_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_40, (MR_Integer) 2)));

#line 283 "equiv_type.m"
                if ((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "equiv_type.m"
                  parse_tree__equiv_type__Location_44 = (MR_Integer) 1;
#line 283 "equiv_type.m"
                else
#line 283 "equiv_type.m"
                  if ((((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))) || ((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))))
#line 287 "equiv_type.m"
                    parse_tree__equiv_type__Location_44 = (MR_Integer) 2;
#line 283 "equiv_type.m"
                  else
#line 283 "equiv_type.m"
                    if ((((((((((((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))) || (((((MR_tag((MR_Word) parse_tree__equiv_type__ModuleDefn_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__ModuleDefn_41, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((MR_tag((MR_Word) parse_tree__equiv_type__ModuleDefn_41)) == (MR_mktag((MR_Integer) 1)))))) || ((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))))) || ((parse_tree__equiv_type__ModuleDefn_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))))) || (((MR_tag((MR_Word) parse_tree__equiv_type__ModuleDefn_41)) == (MR_mktag((MR_Integer) 2))))))
#line 299 "equiv_type.m"
                      parse_tree__equiv_type__Location_44 = (MR_Integer) 0;
#line 283 "equiv_type.m"
                    else
#line 307 "equiv_type.m"
                      parse_tree__equiv_type__Location_44 = parse_tree__equiv_type__Location0_2;
#line 278 "equiv_type.m"
              }
#line 309 "equiv_type.m"
            else
#line 309 "equiv_type.m"
              if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_32)) == (MR_mktag((MR_Integer) 1)))) || (((MR_tag((MR_Word) parse_tree__equiv_type__Item0_32)) == (MR_mktag((MR_Integer) 0))))))
#line 312 "equiv_type.m"
                {
#line 313 "equiv_type.m"
                  {
#line 313 "equiv_type.m"
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_item_list\'/13", (MR_String) "module start or end");
#line 313 "equiv_type.m"
                    return;
                  }
#line 312 "equiv_type.m"
                }
#line 309 "equiv_type.m"
              else
#line 330 "equiv_type.m"
                parse_tree__equiv_type__Location_44 = parse_tree__equiv_type__Location0_2;
#line 332 "equiv_type.m"
            {
#line 332 "equiv_type.m"
              parse_tree__equiv_type__replace_in_item_11_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__Location_44, parse_tree__equiv_type__EqvMap_4, parse_tree__equiv_type__EqvInstMap_5, parse_tree__equiv_type__Item0_32, &parse_tree__equiv_type__Item_71, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_86_86, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_87_87, &parse_tree__equiv_type__ItemSpecs_72);
            }
#line 338 "equiv_type.m"
            if ((parse_tree__equiv_type__ItemSpecs_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "equiv_type.m"
              {
#line 337 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88, 0) = ((MR_Box) (parse_tree__equiv_type__Item_71));
#line 337 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88, 1) = ((MR_Box) (parse_tree__equiv_type__HeadVar__6_6));
#line 337 "equiv_type.m"
              }
#line 338 "equiv_type.m"
            else
#line 339 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88 = parse_tree__equiv_type__HeadVar__6_6;
#line 341 "equiv_type.m"
            {
#line 341 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_89_89 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__ItemSpecs_72, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12);
            }
#line 342 "equiv_type.m"
            /* direct tailcall eliminated */
#line 342 "equiv_type.m"
            {
#line 342 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Location0__tmp_copy_2 = parse_tree__equiv_type__Location_44;
#line 342 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__3__tmp_copy_3 = parse_tree__equiv_type__Items0_33;
#line 342 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__6__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_ReplItems_88_88;
#line 342 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_86_86;
#line 342 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_87_87;
#line 342 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_89_89;

#line 342 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 342 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 342 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 342 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__6_6 = parse_tree__equiv_type__HeadVar__6__tmp_copy_6;
#line 342 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__3_3 = parse_tree__equiv_type__HeadVar__3__tmp_copy_3;
#line 342 "equiv_type.m"
              parse_tree__equiv_type__Location0_2 = parse_tree__equiv_type__Location0__tmp_copy_2;
#line 342 "equiv_type.m"
            }
#line 342 "equiv_type.m"
            continue;
#line 276 "equiv_type.m"
          }
#line 273 "equiv_type.m"
      }
#line 273 "equiv_type.m"
      break;
#line 273 "equiv_type.m"
    }
#line 266 "equiv_type.m"
}

#line 205 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__skip_abstract_imported_items_2_p_0(
#line 205 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 205 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2)
#line 205 "equiv_type.m"
{
#line 207 "equiv_type.m"
  while (MR_TRUE)
#line 207 "equiv_type.m"
    {
#line 207 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 207 "equiv_type.m"
      {
#line 207 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 207 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 207 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 207 "equiv_type.m"
        else
#line 208 "equiv_type.m"
          {
#line 208 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 208 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));

#line 214 "equiv_type.m"
            if (((MR_tag((MR_Word) parse_tree__equiv_type__Item0_3)) == (MR_mktag((MR_Integer) 2))))
#line 215 "equiv_type.m"
              {
#line 215 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemModuleDefn_8 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item0_3), (MR_Integer) 2);
#line 215 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ModuleDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_8, (MR_Integer) 0)));
#line 216 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_8, (MR_Integer) 1)));
#line 216 "equiv_type.m"
                MR_Integer parse_tree__equiv_type__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_8, (MR_Integer) 2)));

#line 219 "equiv_type.m"
                parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 219 "equiv_type.m"
                parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 218 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 246 "equiv_type.m"
                  {
#line 246 "equiv_type.m"
                    if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 251 "equiv_type.m"
                      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 246 "equiv_type.m"
                    else
#line 246 "equiv_type.m"
                      if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "equiv_type.m"
                        parse_tree__equiv_type__succeeded = MR_TRUE;
#line 246 "equiv_type.m"
                      else
#line 246 "equiv_type.m"
                        if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 248 "equiv_type.m"
                          parse_tree__equiv_type__succeeded = MR_TRUE;
#line 246 "equiv_type.m"
                        else
#line 246 "equiv_type.m"
                          if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 246 "equiv_type.m"
                            parse_tree__equiv_type__succeeded = MR_TRUE;
#line 246 "equiv_type.m"
                          else
#line 246 "equiv_type.m"
                            if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 252 "equiv_type.m"
                              parse_tree__equiv_type__succeeded = MR_TRUE;
#line 246 "equiv_type.m"
                            else
#line 246 "equiv_type.m"
                              if ((parse_tree__equiv_type__ModuleDefn_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 253 "equiv_type.m"
                                parse_tree__equiv_type__succeeded = MR_TRUE;
#line 246 "equiv_type.m"
                              else
#line 246 "equiv_type.m"
                                if (((MR_tag((MR_Word) parse_tree__equiv_type__ModuleDefn_9)) == (MR_mktag((MR_Integer) 1))))
#line 249 "equiv_type.m"
                                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 246 "equiv_type.m"
                                else
#line 246 "equiv_type.m"
                                  if (((MR_tag((MR_Word) parse_tree__equiv_type__ModuleDefn_9)) == (MR_mktag((MR_Integer) 2))))
#line 250 "equiv_type.m"
                                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 246 "equiv_type.m"
                                  else
#line 246 "equiv_type.m"
                                    parse_tree__equiv_type__succeeded = MR_FALSE;
#line 246 "equiv_type.m"
                  }
#line 222 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 221 "equiv_type.m"
                  *parse_tree__equiv_type__HeadVar__2_2 = parse_tree__equiv_type__Items0_4;
#line 222 "equiv_type.m"
                else
#line 223 "equiv_type.m"
                  {
#line 223 "equiv_type.m"
                    /* direct tailcall eliminated */
#line 223 "equiv_type.m"
                    {
#line 223 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__Items0_4;

#line 223 "equiv_type.m"
                      parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 223 "equiv_type.m"
                    }
#line 223 "equiv_type.m"
                    continue;
#line 223 "equiv_type.m"
                  }
#line 215 "equiv_type.m"
              }
#line 214 "equiv_type.m"
            else
#line 214 "equiv_type.m"
              if (((((MR_tag((MR_Word) parse_tree__equiv_type__Item0_3)) == (MR_mktag((MR_Integer) 1)))) || (((MR_tag((MR_Word) parse_tree__equiv_type__Item0_3)) == (MR_mktag((MR_Integer) 0))))))
#line 213 "equiv_type.m"
                *parse_tree__equiv_type__HeadVar__2_2 = parse_tree__equiv_type__Items0_4;
#line 214 "equiv_type.m"
              else
#line 241 "equiv_type.m"
                {
#line 241 "equiv_type.m"
                  /* direct tailcall eliminated */
#line 241 "equiv_type.m"
                  {
#line 241 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__Items0_4;

#line 241 "equiv_type.m"
                    parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 241 "equiv_type.m"
                  }
#line 241 "equiv_type.m"
                  continue;
#line 241 "equiv_type.m"
                }
#line 208 "equiv_type.m"
          }
#line 207 "equiv_type.m"
      }
#line 207 "equiv_type.m"
      break;
#line 207 "equiv_type.m"
    }
#line 205 "equiv_type.m"
}

#line 170 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_map_5_p_0(
#line 170 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 170 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2,
#line 170 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EqvMap_3,
#line 170 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4,
#line 170 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_5)
#line 170 "equiv_type.m"
{
#line 173 "equiv_type.m"
  while (MR_TRUE)
#line 173 "equiv_type.m"
    {
#line 173 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 173 "equiv_type.m"
      {
#line 173 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 173 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 173 "equiv_type.m"
          {
#line 173 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_5 = parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4;
#line 173 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EqvMap_3 = parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2;
#line 173 "equiv_type.m"
          }
#line 173 "equiv_type.m"
        else
#line 174 "equiv_type.m"
          {
#line 174 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 174 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 176 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemModuleDefn_16;
#line 176 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ModuleDefn_17;
#line 177 "equiv_type.m"
            MR_Word parse_tree__equiv_type___Context_18;
#line 177 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___SeqNum_19;

#line 176 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 2)));
#line 176 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 176 "equiv_type.m"
              {
#line 176 "equiv_type.m"
                parse_tree__equiv_type__ItemModuleDefn_16 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item_12), (MR_Integer) 2);
#line 177 "equiv_type.m"
                parse_tree__equiv_type__ModuleDefn_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_16, (MR_Integer) 0)));
#line 177 "equiv_type.m"
                parse_tree__equiv_type___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_16, (MR_Integer) 1)));
#line 177 "equiv_type.m"
                parse_tree__equiv_type___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemModuleDefn_16, (MR_Integer) 2)));
#line 178 "equiv_type.m"
                parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__ModuleDefn_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 176 "equiv_type.m"
              }
#line 182 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 180 "equiv_type.m"
              {
#line 180 "equiv_type.m"
                MR_Word parse_tree__equiv_type__AfterSkipItems_20;

#line 180 "equiv_type.m"
                {
#line 180 "equiv_type.m"
                  parse_tree__equiv_type__skip_abstract_imported_items_2_p_0(parse_tree__equiv_type__Items_13, &parse_tree__equiv_type__AfterSkipItems_20);
                }
#line 181 "equiv_type.m"
                /* direct tailcall eliminated */
#line 181 "equiv_type.m"
                {
#line 181 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__AfterSkipItems_20;

#line 181 "equiv_type.m"
                  parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 181 "equiv_type.m"
                }
#line 181 "equiv_type.m"
                continue;
#line 180 "equiv_type.m"
              }
#line 182 "equiv_type.m"
            else
#line 201 "equiv_type.m"
              {
#line 201 "equiv_type.m"
                MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvMap_42_42;
#line 201 "equiv_type.m"
                MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_45_45;
#line 191 "equiv_type.m"
                MR_Word parse_tree__equiv_type__VarSet_22;
#line 191 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Name_23;
#line 191 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Args_24;
#line 191 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Body_25;
#line 184 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemTypeDefn_21;
#line 184 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_40_40;
#line 185 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_26_26;
#line 185 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_27_27;
#line 185 "equiv_type.m"
                MR_Integer parse_tree__equiv_type___SeqNum_48;

#line 184 "equiv_type.m"
                parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 184 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 184 "equiv_type.m"
                  {
#line 184 "equiv_type.m"
                    parse_tree__equiv_type__ItemTypeDefn_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 1)));
#line 185 "equiv_type.m"
                    parse_tree__equiv_type__VarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 0)));
#line 185 "equiv_type.m"
                    parse_tree__equiv_type__Name_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 1)));
#line 185 "equiv_type.m"
                    parse_tree__equiv_type__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 2)));
#line 185 "equiv_type.m"
                    parse_tree__equiv_type__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 3)));
#line 185 "equiv_type.m"
                    parse_tree__equiv_type__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 4)));
#line 185 "equiv_type.m"
                    parse_tree__equiv_type__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 5)));
#line 185 "equiv_type.m"
                    parse_tree__equiv_type___SeqNum_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_21, (MR_Integer) 6)));
#line 185 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 185 "equiv_type.m"
                    if (parse_tree__equiv_type__succeeded)
#line 185 "equiv_type.m"
                      parse_tree__equiv_type__Body_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_40_40, (MR_Integer) 0)));
#line 184 "equiv_type.m"
                  }
#line 191 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 188 "equiv_type.m"
                  {
#line 188 "equiv_type.m"
                    MR_Integer parse_tree__equiv_type__Arity_28;
#line 188 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__TypeCtor_29;
#line 188 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_41_41;

#line 188 "equiv_type.m"
                    {
#line 188 "equiv_type.m"
                      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[0], parse_tree__equiv_type__Args_24, &parse_tree__equiv_type__Arity_28);
                    }
#line 189 "equiv_type.m"
                    {
#line 189 "equiv_type.m"
                      parse_tree__equiv_type__TypeCtor_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 189 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_29, 0) = ((MR_Box) (parse_tree__equiv_type__Name_23));
#line 189 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_29, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_28));
#line 189 "equiv_type.m"
                    }
#line 190 "equiv_type.m"
                    {
#line 190 "equiv_type.m"
                      parse_tree__equiv_type__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 190 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_22));
#line 190 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 1) = ((MR_Box) (parse_tree__equiv_type__Args_24));
#line 190 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 2) = ((MR_Box) (parse_tree__equiv_type__Body_25));
#line 190 "equiv_type.m"
                    }
#line 190 "equiv_type.m"
                    {
#line 190 "equiv_type.m"
                      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, ((MR_Box) (parse_tree__equiv_type__TypeCtor_29)), ((MR_Box) (parse_tree__equiv_type__V_41_41)), parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2, &parse_tree__equiv_type__STATE_VARIABLE_EqvMap_42_42);
                    }
#line 190 "equiv_type.m"
                    parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_45_45 = parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4;
#line 188 "equiv_type.m"
                  }
#line 191 "equiv_type.m"
                else
#line 199 "equiv_type.m"
                  {
#line 199 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__VarSet_54;
#line 199 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Name_55;
#line 199 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Args_56;
#line 199 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Body_57;
#line 192 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__ItemInstDefn_30;
#line 192 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_43_43;
#line 193 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_31_31;
#line 193 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_32_32;
#line 193 "equiv_type.m"
                    MR_Integer parse_tree__equiv_type___SeqNum_50;

#line 192 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 192 "equiv_type.m"
                    if (parse_tree__equiv_type__succeeded)
#line 192 "equiv_type.m"
                      {
#line 192 "equiv_type.m"
                        parse_tree__equiv_type__ItemInstDefn_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 1)));
#line 193 "equiv_type.m"
                        parse_tree__equiv_type__VarSet_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_30, (MR_Integer) 0)));
#line 193 "equiv_type.m"
                        parse_tree__equiv_type__Name_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_30, (MR_Integer) 1)));
#line 193 "equiv_type.m"
                        parse_tree__equiv_type__Args_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_30, (MR_Integer) 2)));
#line 193 "equiv_type.m"
                        parse_tree__equiv_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_30, (MR_Integer) 3)));
#line 193 "equiv_type.m"
                        parse_tree__equiv_type__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_30, (MR_Integer) 4)));
#line 193 "equiv_type.m"
                        parse_tree__equiv_type__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_30, (MR_Integer) 5)));
#line 193 "equiv_type.m"
                        parse_tree__equiv_type___SeqNum_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_30, (MR_Integer) 6)));
#line 193 "equiv_type.m"
                        parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 193 "equiv_type.m"
                        if (parse_tree__equiv_type__succeeded)
#line 193 "equiv_type.m"
                          parse_tree__equiv_type__Body_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_43_43, (MR_Integer) 0)));
#line 192 "equiv_type.m"
                      }
#line 199 "equiv_type.m"
                    if (parse_tree__equiv_type__succeeded)
#line 196 "equiv_type.m"
                      {
#line 196 "equiv_type.m"
                        MR_Word parse_tree__equiv_type__InstId_33;
#line 196 "equiv_type.m"
                        MR_Word parse_tree__equiv_type__V_44_44;
#line 196 "equiv_type.m"
                        MR_Integer parse_tree__equiv_type__Arity_52;

#line 196 "equiv_type.m"
                        {
#line 196 "equiv_type.m"
                          mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[1], parse_tree__equiv_type__Args_56, &parse_tree__equiv_type__Arity_52);
                        }
#line 197 "equiv_type.m"
                        {
#line 197 "equiv_type.m"
                          parse_tree__equiv_type__InstId_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 197 "equiv_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_33, 0) = ((MR_Box) (parse_tree__equiv_type__Name_55));
#line 197 "equiv_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_33, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_52));
#line 197 "equiv_type.m"
                        }
#line 198 "equiv_type.m"
                        {
#line 198 "equiv_type.m"
                          parse_tree__equiv_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 198 "equiv_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_54));
#line 198 "equiv_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 1) = ((MR_Box) (parse_tree__equiv_type__Args_56));
#line 198 "equiv_type.m"
                          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 2) = ((MR_Box) (parse_tree__equiv_type__Body_57));
#line 198 "equiv_type.m"
                        }
#line 198 "equiv_type.m"
                        {
#line 198 "equiv_type.m"
                          mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, ((MR_Box) (parse_tree__equiv_type__InstId_33)), ((MR_Box) (parse_tree__equiv_type__V_44_44)), parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4, &parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_45_45);
                        }
#line 196 "equiv_type.m"
                      }
#line 199 "equiv_type.m"
                    else
#line 198 "equiv_type.m"
                      parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_45_45 = parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4;
#line 198 "equiv_type.m"
                    parse_tree__equiv_type__STATE_VARIABLE_EqvMap_42_42 = parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2;
#line 199 "equiv_type.m"
                  }
#line 202 "equiv_type.m"
                /* direct tailcall eliminated */
#line 202 "equiv_type.m"
                {
#line 202 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__Items_13;
#line 202 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0__tmp_copy_2 = parse_tree__equiv_type__STATE_VARIABLE_EqvMap_42_42;
#line 202 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0__tmp_copy_4 = parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_45_45;

#line 202 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0_4 = parse_tree__equiv_type__STATE_VARIABLE_EqvInstMap_0__tmp_copy_4;
#line 202 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0_2 = parse_tree__equiv_type__STATE_VARIABLE_EqvMap_0__tmp_copy_2;
#line 202 "equiv_type.m"
                  parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 202 "equiv_type.m"
                }
#line 202 "equiv_type.m"
                continue;
#line 201 "equiv_type.m"
              }
#line 174 "equiv_type.m"
          }
#line 173 "equiv_type.m"
      }
#line 173 "equiv_type.m"
      break;
#line 173 "equiv_type.m"
    }
#line 170 "equiv_type.m"
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
#line 1585 "equiv_type.m"
  {
#line 1585 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1585 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1585 "equiv_type.m"
      if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1585 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1585 "equiv_type.m"
      else
#line 1586 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__4_4 = parse_tree__equiv_type__HeadVar__3_3;
#line 1585 "equiv_type.m"
    else
#line 1585 "equiv_type.m"
      {
#line 1585 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));

#line 1585 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1587 "equiv_type.m"
          {
#line 1588 "equiv_type.m"
            {
#line 1588 "equiv_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.finish_recording_expanded_items\'/4", (MR_String) "items but no info");
#line 1588 "equiv_type.m"
              return;
            }
#line 1587 "equiv_type.m"
          }
#line 1585 "equiv_type.m"
        else
#line 1590 "equiv_type.m"
          {
#line 1590 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ExpandedItems_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_20_20, (MR_Integer) 1)));
#line 1590 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Info0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1590 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Info_18;
#line 1589 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_20_20, (MR_Integer) 0)));

#line 1591 "equiv_type.m"
            {
#line 1591 "equiv_type.m"
              recompilation__record_expanded_items_4_p_0(parse_tree__equiv_type__Item_1, parse_tree__equiv_type__ExpandedItems_16, parse_tree__equiv_type__Info0_17, &parse_tree__equiv_type__Info_18);
            }
#line 1590 "equiv_type.m"
            {
#line 1590 "equiv_type.m"
              MR_Word base;
#line 1590 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1590 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1590 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Info_18));
#line 1590 "equiv_type.m"
            }
#line 1590 "equiv_type.m"
          }
#line 1585 "equiv_type.m"
      }
#line 1585 "equiv_type.m"
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
#line 1557 "equiv_type.m"
  {
#line 1557 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1557 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1557 "equiv_type.m"
      *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1557 "equiv_type.m"
    else
#line 1561 "equiv_type.m"
      {
#line 1559 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_15_15;
#line 1559 "equiv_type.m"
        MR_String parse_tree__equiv_type__V_11_11;

#line 1559 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__SymName_2)) == (MR_mktag((MR_Integer) 1)));
#line 1559 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1559 "equiv_type.m"
          {
#line 1559 "equiv_type.m"
            parse_tree__equiv_type__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__SymName_2, (MR_Integer) 0)));
#line 1559 "equiv_type.m"
            parse_tree__equiv_type__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__SymName_2, (MR_Integer) 1)));
#line 1559 "equiv_type.m"
            {
#line 1559 "equiv_type.m"
              parse_tree__equiv_type__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__V_15_15);
            }
#line 1559 "equiv_type.m"
          }
#line 1561 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1560 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1561 "equiv_type.m"
        else
#line 1562 "equiv_type.m"
          {
#line 1562 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_12_12;
#line 1562 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_13_13;

#line 1562 "equiv_type.m"
            {
#line 1562 "equiv_type.m"
              parse_tree__equiv_type__V_13_13 = mercury__set__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0);
            }
#line 1562 "equiv_type.m"
            {
#line 1562 "equiv_type.m"
              parse_tree__equiv_type__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1562 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_12_12, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_1));
#line 1562 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_12_12, 1) = ((MR_Box) (parse_tree__equiv_type__V_13_13));
#line 1562 "equiv_type.m"
            }
#line 1562 "equiv_type.m"
            {
#line 1562 "equiv_type.m"
              MR_Word base;
#line 1562 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1562 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1562 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_12_12));
#line 1562 "equiv_type.m"
            }
#line 1562 "equiv_type.m"
          }
#line 1561 "equiv_type.m"
      }
#line 1557 "equiv_type.m"
  }
#line 99 "equiv_type.m"
}

#line 961 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 961 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 961 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 961 "equiv_type.m"
{
#line 961 "equiv_type.m"
  {
#line 961 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 961 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_HeadVar__4_4;
#line 961 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25;
#line 961 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27;
#line 961 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29;

#line 961 "equiv_type.m"
    {
#line 961 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_HeadVar__4_4, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29);
    }
#line 961 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_HeadVar__4_4));
#line 961 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_25));
#line 961 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_27));
#line 961 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_29));
#line 961 "equiv_type.m"
  }
#line 961 "equiv_type.m"
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
#line 950 "equiv_type.m"
  {
#line 950 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 950 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_51;
#line 950 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 950 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;
#line 961 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_12_12;
#line 961 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16;
#line 961 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18;
#line 961 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_V_12_12;

#line 951 "equiv_type.m"
    {
#line 951 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 961 "equiv_type.m"
    {
#line 961 "equiv_type.m"
      parse_tree__equiv_type__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 961 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 961 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_7_p_0_1));
#line 961 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 961 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 3) = ((MR_Box) ((MR_Integer) 0));
#line 961 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_8));
#line 961 "equiv_type.m"
    }
#line 12396 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 961 "equiv_type.m"
    {
#line 961 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_51, parse_tree__equiv_type__TypeCtorInfo_38_51, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_13, parse_tree__equiv_type__STATE_VARIABLE_Ctors_14, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_15)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_17)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18, ((MR_Box) (parse_tree__equiv_type__V_23_23)), &parse_tree__equiv_type__conv4_V_12_12);
    }
#line 961 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_16 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16);
#line 961 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_18 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18);
#line 961 "equiv_type.m"
    parse_tree__equiv_type__V_12_12 = ((MR_Word) parse_tree__equiv_type__conv4_V_12_12);
#line 950 "equiv_type.m"
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
#line 861 "equiv_type.m"
  {
#line 861 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 861 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 861 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_35;
#line 861 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Ts0_36;
#line 861 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Ts_37;
#line 1002 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_13_13;
#line 1002 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;
#line 1002 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_39_39;

#line 862 "equiv_type.m"
    {
#line 862 "equiv_type.m"
      parse_tree__equiv_type__V_21_21 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 873 "equiv_type.m"
    parse_tree__equiv_type__ClassName_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_9, (MR_Integer) 0)));
#line 873 "equiv_type.m"
    parse_tree__equiv_type__Ts0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_9, (MR_Integer) 1)));
#line 1002 "equiv_type.m"
    {
#line 1002 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0((MR_Integer) 0, parse_tree__equiv_type__EqvMap_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Ts0_36, &parse_tree__equiv_type__Ts_37, &parse_tree__equiv_type__V_38_38, (MR_Integer) 0, &parse_tree__equiv_type__V_39_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_14, parse_tree__equiv_type__STATE_VARIABLE_VarSet_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_16, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_17, parse_tree__equiv_type__V_21_21, &parse_tree__equiv_type__V_13_13);
    }
#line 876 "equiv_type.m"
    {
#line 876 "equiv_type.m"
      MR_Word base;
#line 876 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 876 "equiv_type.m"
      *parse_tree__equiv_type__Constraint_10 = base;
#line 876 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_35));
#line 876 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Ts_37));
#line 876 "equiv_type.m"
    }
#line 861 "equiv_type.m"
  }
#line 74 "equiv_type.m"
}

#line 857 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 857 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 857 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 857 "equiv_type.m"
{
#line 857 "equiv_type.m"
  {
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 857 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 857 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 857 "equiv_type.m"
  }
#line 857 "equiv_type.m"
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
#line 832 "equiv_type.m"
  {
#line 832 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_72;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_35;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_36;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_37;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_38;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_59_59;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40;
#line 857 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41;
#line 846 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_13_13;

#line 833 "equiv_type.m"
    {
#line 833 "equiv_type.m"
      parse_tree__equiv_type__V_21_21 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 843 "equiv_type.m"
    parse_tree__equiv_type__UnivCs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 0)));
#line 843 "equiv_type.m"
    parse_tree__equiv_type__ExistCs0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 1)));
#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 3) = ((MR_Box) ((MR_Integer) 0));
#line 857 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 4) = ((MR_Box) (parse_tree__equiv_type__EqvMap_8));
#line 857 "equiv_type.m"
    }
#line 12616 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 857 "equiv_type.m"
    {
#line 857 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_72, parse_tree__equiv_type__TypeCtorInfo_38_72, (MR_Word) &parse_tree__equiv_type_scalar_common_1[2], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_59_59, parse_tree__equiv_type__UnivCs0_35, &parse_tree__equiv_type__UnivCs_37, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_14)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_16)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40, ((MR_Box) (parse_tree__equiv_type__V_21_21)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
    }
#line 857 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39);
#line 857 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40);
#line 857 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
#line 846 "equiv_type.m"
    {
#line 846 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0((MR_Integer) 0, parse_tree__equiv_type__EqvMap_8, parse_tree__equiv_type__ExistCs0_36, &parse_tree__equiv_type__ExistCs_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41, &parse_tree__equiv_type__V_13_13);
    }
#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      MR_Word base;
#line 848 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 848 "equiv_type.m"
      *parse_tree__equiv_type__Cs_10 = base;
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_37));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_38));
#line 848 "equiv_type.m"
    }
#line 832 "equiv_type.m"
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
#line 980 "equiv_type.m"
  {
#line 980 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 980 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 992 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_14_14;
#line 992 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_41_41;

#line 981 "equiv_type.m"
    {
#line 981 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 992 "equiv_type.m"
    {
#line 992 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0((MR_Integer) 0, parse_tree__equiv_type__EqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Ts_0_15, parse_tree__equiv_type__STATE_VARIABLE_Ts_16, parse_tree__equiv_type__Changed_11, (MR_Integer) 0, &parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20, parse_tree__equiv_type__V_25_25, &parse_tree__equiv_type__V_14_14);
    }
#line 980 "equiv_type.m"
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
#line 1081 "equiv_type.m"
  {
#line 1081 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1081 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 1092 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_15_15;
#line 1092 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;

#line 1082 "equiv_type.m"
    {
#line 1082 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 1092 "equiv_type.m"
    {
#line 1092 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_location_2_13_p_0((MR_Integer) 0, parse_tree__equiv_type__EqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_10, parse_tree__equiv_type__Type_11, parse_tree__equiv_type__Changed_12, &parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_16, parse_tree__equiv_type__STATE_VARIABLE_VarSet_17, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_19, parse_tree__equiv_type__V_23_23, &parse_tree__equiv_type__V_15_15);
    }
#line 1081 "equiv_type.m"
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
#line 141 "equiv_type.m"
  {
#line 141 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 141 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_45_45;
#line 141 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_46_46;
#line 141 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvMap0_20;
#line 141 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvInstMap0_21;
#line 141 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvInstMap_22;
#line 141 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevItems_23;
#line 141 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EventSpecList0_24;
#line 141 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EventSpecList_25;
#line 141 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30;
#line 141 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_34_34;
#line 141 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35;
#line 141 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_36_36;

#line 142 "equiv_type.m"
    {
#line 142 "equiv_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, &parse_tree__equiv_type__EqvMap0_20);
    }
#line 143 "equiv_type.m"
    {
#line 143 "equiv_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, &parse_tree__equiv_type__EqvInstMap0_21);
    }
#line 144 "equiv_type.m"
    {
#line 144 "equiv_type.m"
      parse_tree__equiv_type__build_eqv_map_5_p_0(parse_tree__equiv_type__Items0_12, parse_tree__equiv_type__EqvMap0_20, parse_tree__equiv_type__EqvMap_16, parse_tree__equiv_type__EqvInstMap0_21, &parse_tree__equiv_type__EqvInstMap_22);
    }
#line 145 "equiv_type.m"
    {
#line 145 "equiv_type.m"
      parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 147 "equiv_type.m"
    {
#line 147 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_list_13_p_0(parse_tree__equiv_type__ModuleName_11, (MR_Integer) 0, parse_tree__equiv_type__Items0_12, *parse_tree__equiv_type__EqvMap_16, parse_tree__equiv_type__EqvInstMap_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevItems_23, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_27, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__STATE_VARIABLE_Specs_36_36);
    }
#line 149 "equiv_type.m"
    {
#line 149 "equiv_type.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevItems_23, parse_tree__equiv_type__Items_13);
    }
#line 12831 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_45_45 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 12833 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0;
#line 150 "equiv_type.m"
    {
#line 150 "equiv_type.m"
      mercury__map__to_assoc_list_2_p_0(parse_tree__equiv_type__TypeCtorInfo_45_45, parse_tree__equiv_type__TypeCtorInfo_46_46, parse_tree__equiv_type__EventSpecMap0_14, &parse_tree__equiv_type__EventSpecList0_24);
    }
#line 151 "equiv_type.m"
    {
#line 151 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_95_108_105_115_116_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__EventSpecList0_24, &parse_tree__equiv_type__EventSpecList_25, *parse_tree__equiv_type__EqvMap_16, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_34_34, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_28, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26, parse_tree__equiv_type__STATE_VARIABLE_Specs_36_36, parse_tree__equiv_type__STATE_VARIABLE_Specs_29);
    }
#line 153 "equiv_type.m"
    {
#line 153 "equiv_type.m"
      mercury__map__from_sorted_assoc_list_2_p_0(parse_tree__equiv_type__TypeCtorInfo_45_45, parse_tree__equiv_type__TypeCtorInfo_46_46, parse_tree__equiv_type__EventSpecList_25, parse_tree__equiv_type__EventSpecMap_15);
#line 153 "equiv_type.m"
      return;
    }
#line 141 "equiv_type.m"
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
